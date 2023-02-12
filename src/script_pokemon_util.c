#include "global.h"
#include "battle.h"
#include "battle_gfx_sfx_util.h"
#include "berry.h"
#include "data.h"
#include "daycare.h"
#include "decompress.h"
#include "event_data.h"
#include "international_string_util.h"
#include "link.h"
#include "link_rfu.h"
#include "main.h"
#include "menu.h"
#include "overworld.h"
#include "palette.h"
#include "party_menu.h"
#include "pokedex.h"
#include "pokemon.h"
#include "random.h"
#include "script.h"
#include "sprite.h"
#include "string_util.h"
#include "tv.h"
#include "constants/items.h"
#include "constants/battle_frontier.h"
#include "constants/region_map_sections.h"

static void CB2_ReturnFromChooseHalfParty(void);
static void CB2_ReturnFromChooseBattleFrontierParty(void);

struct PresetMon {
    /*0x00*/ u8 nickname[POKEMON_NAME_LENGTH + 1];
    /*0x0C*/ u16 species;
    /*0x0E*/ u8 ivs[NUM_STATS];
    /*0x14*/ u8 abilityNum;
    /*0x18*/ u32 otId;
    /*0x24*/ u32 personality;
    /*0x28*/ u16 heldItem;
    /*0x2B*/ u8 otName[11];
    /*0x36*/ u8 otGender;
}; // 42 bytes

void HealPlayerParty(void)
{
    u8 i, j;
    u8 ppBonuses;
    u8 arg[4];

    // restore HP.
    for(i = 0; i < gPlayerPartyCount; i++)
    {
        u16 maxHP = GetMonData(&gPlayerParty[i], MON_DATA_MAX_HP);
        arg[0] = maxHP;
        arg[1] = maxHP >> 8;
        SetMonData(&gPlayerParty[i], MON_DATA_HP, arg);
        ppBonuses = GetMonData(&gPlayerParty[i], MON_DATA_PP_BONUSES);

        // restore PP.
        for(j = 0; j < MAX_MON_MOVES; j++)
        {
            arg[0] = CalculatePPWithBonus(GetMonData(&gPlayerParty[i], MON_DATA_MOVE1 + j), ppBonuses, j);
            SetMonData(&gPlayerParty[i], MON_DATA_PP1 + j, arg);
        }

        // since status is u32, the four 0 assignments here are probably for safety to prevent undefined data from reaching SetMonData.
        arg[0] = 0;
        arg[1] = 0;
        arg[2] = 0;
        arg[3] = 0;
        SetMonData(&gPlayerParty[i], MON_DATA_STATUS, arg);
    }
}

static const struct PresetMon sPresetMons[] = 
{
	{
        .nickname = _("FACELEECH"),
        .species = SPECIES_FACELEECH,
        .ivs = {31, 20, 5, 20, 4, 4},
        .abilityNum = 0,
        .otId = 61616,
        .personality = 0x3,
        .heldItem = ITEM_FOCUS_BAND,
        .otName = _("GLEIS"),
        .otGender = MALE,
    },
};

u8 ScriptGiveMon(u16 species, u8 level, u16 item, u32 presetMonId, u32 presetSpecies, u8 presetMode)
{
    u16 nationalDexNum;
    int sentToPc;
    u8 heldItem[2];
    struct Pokemon *mon = &gEnemyParty[0];
	struct Pokemon pokemon;
	u32 i;
	u8 metLocation = METLOC_FATEFUL_ENCOUNTER;
	const struct PresetMon *presetMon = &sPresetMons[presetMonId];
	
	if (presetMode == 1) // give the mon specified by presetMonId
	{
		CreateMon(mon, presetMon->species, level, USE_RANDOM_IVS, TRUE, presetMon->personality, OT_ID_PRESET, presetMon->otId);

		SetMonData(mon, MON_DATA_HP_IV, &presetMon->ivs[0]);
		SetMonData(mon, MON_DATA_ATK_IV, &presetMon->ivs[1]);
		SetMonData(mon, MON_DATA_DEF_IV, &presetMon->ivs[2]);
		SetMonData(mon, MON_DATA_SPEED_IV, &presetMon->ivs[3]);
		SetMonData(mon, MON_DATA_SPATK_IV, &presetMon->ivs[4]);
		SetMonData(mon, MON_DATA_SPDEF_IV, &presetMon->ivs[5]);
		SetMonData(mon, MON_DATA_NICKNAME, presetMon->nickname);
		SetMonData(mon, MON_DATA_OT_NAME, presetMon->otName);
		SetMonData(mon, MON_DATA_OT_GENDER, &presetMon->otGender);
		SetMonData(mon, MON_DATA_ABILITY_NUM, &presetMon->abilityNum);
		SetMonData(mon, MON_DATA_MET_LOCATION, &metLocation);
		
		for (i = 0; i < PARTY_SIZE; i++)
		{
			if (GetMonData(&gPlayerParty[i], MON_DATA_SPECIES, NULL) == SPECIES_NONE)
				break;
		}

		if (i >= PARTY_SIZE)
		{
			sentToPc = MON_CANT_GIVE;
		}
		else
		{
			CopyMon(&gPlayerParty[i], mon, sizeof(*mon));
			gPlayerPartyCount = i + 1;
			sentToPc = MON_GIVEN_TO_PARTY;
			CalculateMonStats(&gPlayerParty[i]);
		}
	}
	else if (presetMode == 2) // remove the mon specified by presetMonId
	{
		for (i = 0; i < PARTY_SIZE; i++)
		{
			if (GetMonData(&gPlayerParty[i], MON_DATA_SPECIES, NULL) == presetMon->species)
				ZeroMonData(&gPlayerParty[i]);
		}
		sentToPc = MON_CANT_GIVE;
	}
	else // normal givemon
	{
		CreateMon(&pokemon, species, level, USE_RANDOM_IVS, FALSE, 0, OT_ID_PLAYER_ID, 0);
		heldItem[0] = item;
		heldItem[1] = item >> 8;
		SetMonData(&pokemon, MON_DATA_HELD_ITEM, heldItem);
		sentToPc = GiveMonToPlayer(&pokemon);
		nationalDexNum = SpeciesToNationalPokedexNum(species);
	}

    // Don't set Pokédex flag for MON_CANT_GIVE
    switch(sentToPc)
    {
    case MON_GIVEN_TO_PARTY:
    case MON_GIVEN_TO_PC:
        GetSetPokedexFlag(nationalDexNum, FLAG_SET_SEEN);
        GetSetPokedexFlag(nationalDexNum, FLAG_SET_CAUGHT);
        break;
    }
    return sentToPc;
}

u8 ScriptGiveEgg(u16 species)
{
    struct Pokemon mon;
    u8 isEgg;

    CreateEgg(&mon, species, TRUE);
    isEgg = TRUE;
    SetMonData(&mon, MON_DATA_IS_EGG, &isEgg);

    return GiveMonToPlayer(&mon);
}

void HasEnoughMonsForDoubleBattle(void)
{
    switch (GetMonsStateToDoubles())
    {
    case PLAYER_HAS_TWO_USABLE_MONS:
        gSpecialVar_Result = PLAYER_HAS_TWO_USABLE_MONS;
        break;
    case PLAYER_HAS_ONE_MON:
        gSpecialVar_Result = PLAYER_HAS_ONE_MON;
        break;
    case PLAYER_HAS_ONE_USABLE_MON:
        gSpecialVar_Result = PLAYER_HAS_ONE_USABLE_MON;
        break;
    }
}

static bool8 CheckPartyMonHasHeldItem(u16 item)
{
    int i;

    for(i = 0; i < PARTY_SIZE; i++)
    {
        u16 species = GetMonData(&gPlayerParty[i], MON_DATA_SPECIES2);
        if (species != SPECIES_NONE && species != SPECIES_EGG && GetMonData(&gPlayerParty[i], MON_DATA_HELD_ITEM) == item)
            return TRUE;
    }
    return FALSE;
}

bool8 DoesPartyHaveEnigmaBerry(void)
{
    bool8 hasItem = CheckPartyMonHasHeldItem(ITEM_ENIGMA_BERRY);
    if (hasItem == TRUE)
        GetBerryNameByBerryType(ItemIdToBerryType(ITEM_ENIGMA_BERRY), gStringVar1);

    return hasItem;
}

void CreateScriptedWildMon(u16 species, u8 level, u16 item)
{
    u8 heldItem[2];

    ZeroEnemyPartyMons();
    CreateMon(&gEnemyParty[0], species, level, USE_RANDOM_IVS, 0, 0, OT_ID_PLAYER_ID, 0);
    if (item)
    {
        heldItem[0] = item;
        heldItem[1] = item >> 8;
        SetMonData(&gEnemyParty[0], MON_DATA_HELD_ITEM, heldItem);
    }
}

void ScriptSetMonMoveSlot(u8 monIndex, u16 move, u8 slot)
{
// Allows monIndex to go out of bounds of gPlayerParty. Doesn't occur in vanilla
#ifdef BUGFIX
    if (monIndex >= PARTY_SIZE)
#else
    if (monIndex > PARTY_SIZE)
#endif
        monIndex = gPlayerPartyCount - 1;

    SetMonMoveSlot(&gPlayerParty[monIndex], move, slot);
}

// Note: When control returns to the event script, gSpecialVar_Result will be
// TRUE if the party selection was successful.
void ChooseHalfPartyForBattle(void)
{
    gMain.savedCallback = CB2_ReturnFromChooseHalfParty;
    VarSet(VAR_FRONTIER_FACILITY, FACILITY_MULTI_OR_EREADER);
    InitChooseHalfPartyForBattle(0);
}

static void CB2_ReturnFromChooseHalfParty(void)
{
    switch (gSelectedOrderFromParty[0])
    {
    case 0:
        gSpecialVar_Result = FALSE;
        break;
    default:
        gSpecialVar_Result = TRUE;
        break;
    }

    SetMainCallback2(CB2_ReturnToFieldContinueScriptPlayMapMusic);
}

void ChoosePartyForBattleFrontier(void)
{
    gMain.savedCallback = CB2_ReturnFromChooseBattleFrontierParty;
    InitChooseHalfPartyForBattle(gSpecialVar_0x8004 + 1);
}

static void CB2_ReturnFromChooseBattleFrontierParty(void)
{
    switch (gSelectedOrderFromParty[0])
    {
    case 0:
        gSpecialVar_Result = FALSE;
        break;
    default:
        gSpecialVar_Result = TRUE;
        break;
    }

    SetMainCallback2(CB2_ReturnToFieldContinueScriptPlayMapMusic);
}

void ReducePlayerPartyToSelectedMons(void)
{
    struct Pokemon party[MAX_FRONTIER_PARTY_SIZE];
    int i;

    CpuFill32(0, party, sizeof party);

    // copy the selected pokemon according to the order.
    for (i = 0; i < MAX_FRONTIER_PARTY_SIZE; i++)
        if (gSelectedOrderFromParty[i]) // as long as the order keeps going (did the player select 1 mon? 2? 3?), do not stop
            party[i] = gPlayerParty[gSelectedOrderFromParty[i] - 1]; // index is 0 based, not literal

    CpuFill32(0, gPlayerParty, sizeof gPlayerParty);

    // overwrite the first 4 with the order copied to.
    for (i = 0; i < MAX_FRONTIER_PARTY_SIZE; i++)
        gPlayerParty[i] = party[i];

    CalculatePlayerPartyCount();
}
