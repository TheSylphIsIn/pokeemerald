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
	u8 nickname[POKEMON_NAME_LENGTH + 1];
    u16 species;
    u8 ivs[NUM_STATS];
	u32 personality;
	u16 moves[MAX_MON_MOVES];
	u8 metloc;
	u8 otName[11];
	u32 otId;
	u8 otGender;
};

static const struct PresetMon sInitialParty[] = {
	{
		.species = SPECIES_OCTILLERY,
		.nickname = _("ONSENPURA"),
		.ivs = {15, 30, 30, 30, 10, 30},
		.personality = 20,
		.moves = {MOVE_RAIN_DANCE, MOVE_HYDRO_PUMP, MOVE_ANCIENT_POWER, MOVE_WRAP},
		.metloc = MAPSEC_ROUTE_103,
		.otId = 31357,
	},
	{
		.species = SPECIES_PORYGON2,
		.nickname = _("IMPFECTION"),
		.ivs = {30, 20, 10, 30, 30, 10},
		.personality = 10,
		.moves = {MOVE_SLUDGE_BOMB, MOVE_AGILITY, MOVE_BATON_PASS, MOVE_WISH},
		.metloc = MAPSEC_LITTLEROOT_TOWN,
		.otName = _("PROF. K"),
		.otGender = FEMALE,
		.otId = 1122,
	},
	{
		.species = SPECIES_SKARMORY,
		.nickname = _("WETHERBANE"),
		.ivs = {10, 10, 30, 0, 30, 0},
		.personality = 5,
		.moves = {MOVE_THUNDER, MOVE_PROTECT, MOVE_CLOUD_BREAKER, MOVE_DRILL_PECK}, // can learn cut
		.metloc = MAPSEC_ROUTE_104,
		.otId = 31357,
	},
	{
		.species = SPECIES_TYPHLOSION,
		.nickname = _("SALEZERKER"),
		.ivs = {25, 30, 10, 10, 30, 20},
		.personality = 3,
		.moves = {MOVE_FLARE_BLITZ, MOVE_IRON_TAIL, MOVE_FLAMETHROWER, MOVE_TAKE_DOWN}, // can learn cut
		.metloc = MAPSEC_LITTLEROOT_TOWN,
		.otId = 31357,
	}
};

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

u8 ScriptGiveMon(u16 species, u8 level, u16 item, u32 presetId, u32 unused2, u8 unused3)
{
    u16 nationalDexNum;
    int sentToPc;
    u8 heldItem[2];
    struct Pokemon *mon = &gEnemyParty[0];
	const struct PresetMon *presetMon = &sInitialParty[presetId];
	u32 i;
	CreateMon(mon, species, level, USE_RANDOM_IVS, TRUE, presetMon->personality, OT_ID_PLAYER_ID, 0);	
    heldItem[0] = item;
    heldItem[1] = item >> 8;
    SetMonData(mon, MON_DATA_HP_IV, &presetMon->ivs[0]);
    SetMonData(mon, MON_DATA_ATK_IV, &presetMon->ivs[1]);
    SetMonData(mon, MON_DATA_DEF_IV, &presetMon->ivs[2]);
    SetMonData(mon, MON_DATA_SPEED_IV, &presetMon->ivs[3]);
    SetMonData(mon, MON_DATA_SPATK_IV, &presetMon->ivs[4]);
    SetMonData(mon, MON_DATA_SPDEF_IV, &presetMon->ivs[5]);
    SetMonData(mon, MON_DATA_NICKNAME, presetMon->nickname);
	SetMonData(mon, MON_DATA_MET_LOCATION, &presetMon->metloc);
	if (&presetMon->otName != 0)
		SetMonData(mon, MON_DATA_OT_NAME, presetMon->otName);
	SetMonData(mon, MON_DATA_OT_GENDER, &presetMon->otGender);
	DeleteFirstMoveAndGiveMoveToMon(mon, presetMon->moves[0]);
	DeleteFirstMoveAndGiveMoveToMon(mon, presetMon->moves[1]);
	DeleteFirstMoveAndGiveMoveToMon(mon, presetMon->moves[2]);
	DeleteFirstMoveAndGiveMoveToMon(mon, presetMon->moves[3]);
    sentToPc = GiveMonToPlayer(mon);
    nationalDexNum = SpeciesToNationalPokedexNum(species);

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
        u16 species = GetMonData(&gPlayerParty[i], MON_DATA_SPECIES_OR_EGG);
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
