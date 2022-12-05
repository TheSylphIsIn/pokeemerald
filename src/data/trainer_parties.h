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

static const struct TrainerMonItemCustomMoves sParty_MorganFisheyeGlasma[] = {
    {
    .iv = 10,
    .lvl = 6,
    .species = SPECIES_ELADRIFT,
	.ability = 0,
    .moves = {MOVE_TACKLE, MOVE_GROWL, MOVE_WATER_GUN, MOVE_NONE}
    },
};

static const struct TrainerMonItemCustomMoves sParty_MorganFisheyeSandude[] = {
    {
    .iv = 10,
    .lvl = 6,
    .species = SPECIES_GLASMA,
	.ability = 0,
    .moves = {MOVE_TACKLE, MOVE_LEER, MOVE_THUNDER_SHOCK, MOVE_NONE}
    },
};

static const struct TrainerMonItemCustomMoves sParty_MorganFisheyeEladrift[] = {
    {
    .iv = 10,
    .lvl = 6,
    .species = SPECIES_SANDUDE,
	.ability = 0,
    .moves = {MOVE_TACKLE, MOVE_HARDEN, MOVE_MUD_SLAP, MOVE_NONE}
    },
};

static const struct TrainerMonItemCustomMoves sHardParty_MorganFisheyeGlasma[] = {
    {
    .iv = 20,
    .lvl = 6,
    .species = SPECIES_ELADRIFT,
	.ability = 0,
	.heldItem = ITEM_ORAN_BERRY,
    .moves = {MOVE_TACKLE, MOVE_GROWL, MOVE_FLASH, MOVE_WATER_GUN}
    },
};

static const struct TrainerMonItemCustomMoves sHardParty_MorganFisheyeSandude[] = {
    {
    .iv = 20,
    .lvl = 6,
    .species = SPECIES_GLASMA,
	.ability = 0,
	.heldItem = ITEM_ORAN_BERRY,
    .moves = {MOVE_TACKLE, MOVE_LEER, MOVE_FLASH, MOVE_THUNDER_SHOCK}
    },
};

static const struct TrainerMonItemCustomMoves sHardParty_MorganFisheyeEladrift[] = {
    {
    .iv = 31,
    .lvl = 6,
    .species = SPECIES_SANDUDE,
	.ability = 0,
	.heldItem = ITEM_ORAN_BERRY,
    .moves = {MOVE_TACKLE, MOVE_HARDEN, MOVE_FLASH, MOVE_MUD_SLAP}
    },
};

static const struct TrainerMonItemCustomMoves sUnfairParty_MorganFisheyeGlasma[] = {
    {
    .iv = 31,
    .lvl = 6,
    .species = SPECIES_ELADRIFT,
	.nature = NATURE_NAUGHTY,
	.heldItem = ITEM_BERRY_JUICE,
	.ability = 0,
    .moves = {MOVE_TACKLE, MOVE_GROWL, MOVE_FLASH, MOVE_WATER_GUN}
    },
};

static const struct TrainerMonItemCustomMoves sUnfairParty_MorganFisheyeSandude[] = {
    {
    .iv = 31,
    .lvl = 6,
    .species = SPECIES_GLASMA,
	.ability = 0,
	.nature = NATURE_MILD,
	.heldItem = ITEM_BERRY_JUICE,
    .moves = {MOVE_TACKLE, MOVE_LEER, MOVE_FLASH, MOVE_THUNDER_SHOCK}
    },
};

static const struct TrainerMonItemCustomMoves sUnfairParty_MorganFisheyeEladrift[] = {
    {
    .iv = 31,
    .lvl = 6,
    .species = SPECIES_SANDUDE,
	.nature = NATURE_IMPISH,
	.ability = 0,
	.heldItem = ITEM_BERRY_JUICE,
    .moves = {MOVE_TACKLE, MOVE_HARDEN, MOVE_FLASH, MOVE_SAND_TOMB}
    },
};

static const struct TrainerMonItemCustomMoves sParty_CalvinFisheyeSandude[] = {
    {
    .iv = 5,
    .lvl = 6,
    .species = SPECIES_ELADRIFT,
	.ability = 0,
    .moves = {MOVE_TACKLE, MOVE_GROWL, MOVE_SWIFT, MOVE_WATER_GUN}
    },
};

static const struct TrainerMonItemCustomMoves sParty_CalvinFisheyeEladrift[] = {
    {
    .iv = 5,
    .lvl = 6,
    .species = SPECIES_GLASMA,
	.ability = 0,
    .moves = {MOVE_TACKLE, MOVE_LEER, MOVE_SWIFT, MOVE_THUNDER_SHOCK}
    },
};

static const struct TrainerMonItemCustomMoves sParty_CalvinFisheyeGlasma[] = {
    {
    .iv = 5,
    .lvl = 6,
    .species = SPECIES_SANDUDE,
	.ability = 0,
    .moves = {MOVE_TACKLE, MOVE_HARDEN, MOVE_SWIFT, MOVE_MUD_SLAP}
    },
};

static const struct TrainerMonItemCustomMoves sHardParty_CalvinFisheyeSandude[] = {
    {
    .iv = 10,
    .lvl = 6,
    .species = SPECIES_ELADRIFT,
	.heldItem = ITEM_ORAN_BERRY,
	.ability = 0,
    .moves = {MOVE_TACKLE, MOVE_GROWL, MOVE_SWIFT, MOVE_WATER_GUN}
    },
};

static const struct TrainerMonItemCustomMoves sHardParty_CalvinFisheyeEladrift[] = {
    {
    .iv = 10,
    .lvl = 6,
    .species = SPECIES_GLASMA,
	.heldItem = ITEM_ORAN_BERRY,
	.ability = 0,
    .moves = {MOVE_TACKLE, MOVE_LEER, MOVE_SWIFT, MOVE_THUNDER_SHOCK}
    },
};

static const struct TrainerMonItemCustomMoves sHardParty_CalvinFisheyeGlasma[] = {
    {
    .iv = 10,
    .lvl = 6,
    .species = SPECIES_SANDUDE,
	.heldItem = ITEM_ORAN_BERRY,
	.ability = 0,
    .moves = {MOVE_TACKLE, MOVE_HARDEN, MOVE_SWIFT, MOVE_MUD_SLAP}
    },
};

static const struct TrainerMonItemCustomMoves sUnfairParty_CalvinFisheyeSandude[] = {
    {
    .iv = 15,
    .lvl = 6,
    .species = SPECIES_ELADRIFT,
	.heldItem = ITEM_BERRY_JUICE,
	.nature = NATURE_ADAMANT,
	.ability = 0,
    .moves = {MOVE_TACKLE, MOVE_GROWL, MOVE_SWIFT, MOVE_WATER_GUN}
    },
};

static const struct TrainerMonItemCustomMoves sUnfairParty_CalvinFisheyeEladrift[] = {
    {
    .iv = 15,
    .lvl = 6,
    .species = SPECIES_GLASMA,
	.heldItem = ITEM_BERRY_JUICE,
	.nature = NATURE_MODEST,
	.ability = 0,
    .moves = {MOVE_TACKLE, MOVE_LEER, MOVE_SWIFT, MOVE_THUNDER_SHOCK}
    },
};

static const struct TrainerMonItemCustomMoves sUnfairParty_CalvinFisheyeGlasma[] = {
    {
    .iv = 15,
    .lvl = 6,
    .species = SPECIES_SANDUDE,
	.heldItem = ITEM_BERRY_JUICE,
	.nature = NATURE_JOLLY,
	.ability = 0,
    .moves = {MOVE_TACKLE, MOVE_HARDEN, MOVE_SWIFT, MOVE_SAND_TOMB}
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_Billy[] = {
	{
	.iv = 0,
	.lvl = 5,
	.species = SPECIES_POOCHYENA
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

