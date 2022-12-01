#ifndef GUARD_DATA_H
#define GUARD_DATA_H

#include "constants/moves.h"

#define SPECIES_SHINY_TAG 500

#define MAX_TRAINER_ITEMS 4

enum {
    BATTLER_AFFINE_NORMAL,
    BATTLER_AFFINE_EMERGE,
    BATTLER_AFFINE_RETURN,
};

struct MonCoords
{
    // This would use a bitfield, but some function
    // uses it as a u8 and casting won't match.
    u8 size; // u8 width:4, height:4;
    u8 y_offset;
};

#define MON_COORDS_SIZE(width, height)(DIV_ROUND_UP(width, 8) << 4 | DIV_ROUND_UP(height, 8))
#define GET_MON_COORDS_WIDTH(size)((size >> 4) * 8)
#define GET_MON_COORDS_HEIGHT(size)((size & 0xF) * 8)

struct TrainerMonNoItemDefaultMoves
{
    u8 iv;
    u8 lvl;
    u16 species;
};

struct TrainerMonItemDefaultMoves
{
    u8 iv;
    u8 lvl;
    u16 species;
    u16 heldItem;
};

struct TrainerMonNoItemCustomMoves
{
    u8 iv;
    u8 lvl;
    u16 species;
	u8 ability;
    u16 moves[MAX_MON_MOVES];
};

struct TrainerMonItemCustomMoves
{
    u8 iv;
    u8 lvl;
	u8 evs[NUM_STATS];
	u8 nature;
    u16 species;
	u8 ability;
    u16 heldItem;
    u16 moves[MAX_MON_MOVES];
};

// appends passed label to the appropriate places to get sParty_Trainer, sHardParty_Trainer, sUnfairParty_Trainer, partySize, hardPartySize, and party flags.
#define NO_ITEM_DEFAULT_MOVES(party) { .NoItemDefaultMoves = sParty_##party }, .partySize = ARRAY_COUNT(sParty_##party), .partyFlags = 0, .hardParty = { .NoItemDefaultMoves = sHardParty_##party }, .hardPartySize = ARRAY_COUNT(sHardParty_##party), .unfairParty = { .NoItemDefaultMoves = sUnfairParty_##party }
#define NO_ITEM_CUSTOM_MOVES(party) { .NoItemCustomMoves = sParty_##party }, .partySize = ARRAY_COUNT(sParty_##party), .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET, .hardParty = { .NoItemCustomMoves = sHardParty_##party }, .hardPartySize = ARRAY_COUNT(sHardParty_##party), .unfairParty = { .NoItemCustomMoves = sUnfairParty_##party }
#define ITEM_DEFAULT_MOVES(party) { .ItemDefaultMoves = sParty_##party }, .partySize = ARRAY_COUNT(sParty_##party), .partyFlags = F_TRAINER_PARTY_HELD_ITEM, .hardParty = { .ItemDefaultMoves = sHardParty_##party }, .hardPartySize = ARRAY_COUNT(sHardParty_##party), .unfairParty = { .ItemDefaultMoves = sUnfairParty_##party }
#define ITEM_CUSTOM_MOVES(party) { .ItemCustomMoves = sParty_##party }, .partySize = ARRAY_COUNT(sParty_##party), .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET | F_TRAINER_PARTY_HELD_ITEM, .hardParty = { .ItemCustomMoves = sHardParty_##party }, .hardPartySize = ARRAY_COUNT(sHardParty_##party), .unfairParty = { .ItemCustomMoves = sUnfairParty_##party }

// same as above macros, but uses normal mode parties for all fields. For trainers who do not have different parties in harder modes. Will probably only be used for throwaway trainers.
#define NO_ITEM_DEFAULT_MOVES_NO_HARD(party) { .NoItemDefaultMoves = sParty_##party }, .partySize = ARRAY_COUNT(sParty_##party), .partyFlags = 0, .hardParty = { .NoItemDefaultMoves = sParty_##party }, .hardPartySize = ARRAY_COUNT(sParty_##party), .unfairParty = { .NoItemDefaultMoves = sParty_##party }
#define NO_ITEM_CUSTOM_MOVES_NO_HARD(party) { .NoItemCustomMoves = sParty_##party }, .partySize = ARRAY_COUNT(sParty_##party), .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET, .hardParty = { .NoItemCustomMoves = sParty_##party }, .hardPartySize = ARRAY_COUNT(sParty_##party), .unfairParty = { .NoItemCustomMoves = sParty_##party }
#define ITEM_DEFAULT_MOVES_NO_HARD(party) { .ItemDefaultMoves = sParty_##party }, .partySize = ARRAY_COUNT(sParty_##party), .partyFlags = F_TRAINER_PARTY_HELD_ITEM, .hardParty = { .ItemDefaultMoves = sParty_##party }, .hardPartySize = ARRAY_COUNT(sParty_##party), .unfairParty = { .ItemDefaultMoves = sParty_##party }
#define ITEM_CUSTOM_MOVES_NO_HARD(party) { .ItemCustomMoves = sParty_##party }, .partySize = ARRAY_COUNT(sParty_##party), .partyFlags = F_TRAINER_PARTY_CUSTOM_MOVESET | F_TRAINER_PARTY_HELD_ITEM, .hardParty = { .ItemCustomMoves = sParty_##party }, .hardPartySize = ARRAY_COUNT(sParty_##party), .unfairParty = { .ItemCustomMoves = sParty_##party }


union TrainerMonPtr
{
    const struct TrainerMonNoItemDefaultMoves *NoItemDefaultMoves;
    const struct TrainerMonNoItemCustomMoves *NoItemCustomMoves;
    const struct TrainerMonItemDefaultMoves *ItemDefaultMoves;
    const struct TrainerMonItemCustomMoves *ItemCustomMoves;
};

struct Trainer
{
    /*0x00*/ u8 partyFlags;
    /*0x01*/ u8 trainerClass;
    /*0x02*/ u8 encounterMusic_gender; // last bit is gender
    /*0x03*/ u8 trainerPic;
    /*0x04*/ u8 trainerName[TRAINER_NAME_LENGTH + 1];
    /*0x10*/ u16 items[MAX_TRAINER_ITEMS];
    /*0x18*/ bool8 doubleBattle;
    /*0x1C*/ u32 aiFlags;
    /*0x20*/ u8 partySize:4; // normal party size
			 u8 hardPartySize:4; // hard or unfair party size
    /*0x24*/ union TrainerMonPtr party;
			 union TrainerMonPtr hardParty;
			 union TrainerMonPtr unfairParty;
};

#define TRAINER_ENCOUNTER_MUSIC(trainer)((gTrainers[trainer].encounterMusic_gender & 0x7F))

extern const u16 gMinigameDigits_Pal[];
extern const u32 gMinigameDigits_Gfx[];

extern const struct SpriteFrameImage gBattlerPicTable_PlayerLeft[];
extern const struct SpriteFrameImage gBattlerPicTable_OpponentLeft[];
extern const struct SpriteFrameImage gBattlerPicTable_PlayerRight[];
extern const struct SpriteFrameImage gBattlerPicTable_OpponentRight[];
extern const struct SpriteFrameImage gTrainerBackPicTable_Brendan[];
extern const struct SpriteFrameImage gTrainerBackPicTable_May[];
extern const struct SpriteFrameImage gTrainerBackPicTable_Red[];
extern const struct SpriteFrameImage gTrainerBackPicTable_Leaf[];
extern const struct SpriteFrameImage gTrainerBackPicTable_RubySapphireBrendan[];
extern const struct SpriteFrameImage gTrainerBackPicTable_RubySapphireMay[];
extern const struct SpriteFrameImage gTrainerBackPicTable_Wally[];
extern const struct SpriteFrameImage gTrainerBackPicTable_Steven[];

extern const union AffineAnimCmd *const gAffineAnims_BattleSpritePlayerSide[];
extern const union AffineAnimCmd *const gAffineAnims_BattleSpriteOpponentSide[];
extern const union AffineAnimCmd *const gAffineAnims_BattleSpriteContest[];

extern const union AnimCmd *const gAnims_MonPic[];
extern const struct MonCoords gMonFrontPicCoords[];
extern const struct CompressedSpriteSheet gMonStillFrontPicTable[];
extern const struct MonCoords gMonBackPicCoords[];
extern const struct CompressedSpriteSheet gMonBackPicTable[];
extern const struct CompressedSpritePalette gMonPaletteTable[];
extern const struct CompressedSpritePalette gMonShinyPaletteTable[];
extern const union AnimCmd *const *const gTrainerFrontAnimsPtrTable[];
extern const struct MonCoords gTrainerFrontPicCoords[];
extern const struct CompressedSpriteSheet gTrainerFrontPicTable[];
extern const struct CompressedSpritePalette gTrainerFrontPicPaletteTable[];
extern const union AnimCmd *const *const gTrainerBackAnimsPtrTable[];
extern const struct MonCoords gTrainerBackPicCoords[];
extern const struct CompressedSpriteSheet gTrainerBackPicTable[]; // functionally unused
extern const struct CompressedSpritePalette gTrainerBackPicPaletteTable[];

extern const u8 gEnemyMonElevation[NUM_SPECIES];

extern const union AnimCmd *const *const gMonFrontAnimsPtrTable[];
extern const struct CompressedSpriteSheet gMonFrontPicTable[];

extern const struct Trainer gTrainers[];
extern const u8 gTrainerClassNames[][13];
extern const u8 gSpeciesNames[][POKEMON_NAME_LENGTH + 1];
extern const u8 gMoveNames[MOVES_COUNT][MOVE_NAME_LENGTH + 1];

#endif // GUARD_DATA_H
