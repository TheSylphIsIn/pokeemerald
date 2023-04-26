/*

static const struct TrainerMonNoItemDefaultMoves sParty_Cindy1[] = {
    {
    .iv = 0,
    .lvl = 7,
    .species = SPECIES_ZIGZAGOON
    }
};

static const struct TrainerMonItemDefaultMoves sParty_[] = {
    {
    .iv = 0,
    .lvl = 7,
    .species = SPECIES_ZIGZAGOON,
    .heldItem = ITEM_NUGGET
    }
};

static const struct TrainerMonNoItemCustomMoves sParty_[] = {
    {
    .iv = 0,
    .lvl = 43,
    .species = SPECIES_MEDICHAM,
	.ability = 0,
    .moves = {MOVE_PSYCHIC, MOVE_NONE, MOVE_NONE, MOVE_NONE}
    },
};


	static const struct TrainerMonItemCustomMoves sParty_[] = {
    {
    .iv = 31, 
    .lvl = 5,
	.evs = {hp, atk, def, speed, spatk, spdef}, // only for ItemCustomMoves
	.nature = NATURE_ //if you want default, do Docile. Only for ItemCustomMoves
    .species = SPECIES_TORCHIC,
	.ability = 1, // ability num. for CustomMoves, with or without items
	.heldItem = ITEM_ORAN_BERRY, // with items
	.moves = {MOVE_SCRATCH, MOVE_PECK, MOVE_NONE, MOVE_NONE}, // with custom moves
    }
};
*/

static const struct TrainerMonItemCustomMoves sParty_DummyParty_Rival1[] = {
    {
    .iv = 31,
    .lvl = 6,
    .species = SPECIES_DUBSNAKE,
	.ability = 0,
    .moves = {MOVE_ACID, MOVE_ICE_SHARD, MOVE_BLOCK, MOVE_PERISH_SONG}
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_Kyle[] = {
	{
	.iv = 0,
	.lvl = 5,
	.species = SPECIES_NIDORAN_M
	},
};

static const struct TrainerMonNoItemDefaultMoves sParty_LackeyFisheyeLake[] = {
	{
	.iv = 5,
	.lvl = 7,
	.species = SPECIES_KEESIGHT
	},
	{
	.iv = 5,
	.lvl = 8,
	.species = SPECIES_MAGNEMITE
	},
};

