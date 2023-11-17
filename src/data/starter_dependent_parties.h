// Morgan 1

static const struct TrainerMon sParty_MorganFisheyeGlasma[] = {
    {
    .iv = TRAINER_PARTY_IVS(10, 10, 10, 10, 10, 10),
    .lvl = 6,
    .species = SPECIES_ELADRIFT,
    .moves = {MOVE_TACKLE, MOVE_GROWL, MOVE_WATER_GUN, MOVE_NONE}
    },
};

static const struct TrainerMon sParty_MorganFisheyeSandude[] = {
    {
    .iv = TRAINER_PARTY_IVS(10, 10, 10, 10, 10, 10),
    .lvl = 6,
    .species = SPECIES_GLASMA,
    .moves = {MOVE_TACKLE, MOVE_LEER, MOVE_THUNDER_SHOCK, MOVE_NONE}
    },
};

static const struct TrainerMon sParty_MorganFisheyeEladrift[] = {
    {
    .iv = TRAINER_PARTY_IVS(10, 10, 10, 10, 10, 10),
    .lvl = 6,
    .species = SPECIES_SANDUDE,
    .moves = {MOVE_TACKLE, MOVE_HARDEN, MOVE_MUD_SLAP, MOVE_NONE}
    },
};

// Hard

static const struct TrainerMon sHardParty_MorganFisheyeGlasma[] = {
    {
    .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
    .lvl = 6,
    .species = SPECIES_ELADRIFT,
	.heldItem = ITEM_ORAN_BERRY,
    .moves = {MOVE_TACKLE, MOVE_GROWL, MOVE_FLASH, MOVE_WATER_GUN}
    },
};

static const struct TrainerMon sHardParty_MorganFisheyeSandude[] = {
    {
    .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
    .lvl = 6,
    .species = SPECIES_GLASMA,
	.heldItem = ITEM_ORAN_BERRY,
    .moves = {MOVE_TACKLE, MOVE_LEER, MOVE_FLASH, MOVE_THUNDER_SHOCK}
    },
};

static const struct TrainerMon sHardParty_MorganFisheyeEladrift[] = {
    {
    .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
    .lvl = 6,
	.heldItem = ITEM_ORAN_BERRY,
    .moves = {MOVE_TACKLE, MOVE_HARDEN, MOVE_FLASH, MOVE_MUD_SLAP}
    },
};

// Unfair

static const struct TrainerMon sUnfairParty_MorganFisheyeGlasma[] = {
    {
    .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
    .lvl = 6,
    .species = SPECIES_ELADRIFT,
	.nature = TRAINER_PARTY_NATURE(NATURE_NAUGHTY),
	.heldItem = ITEM_BERRY_JUICE,
    .moves = {MOVE_TACKLE, MOVE_GROWL, MOVE_FLASH, MOVE_WATER_GUN}
    },
};

static const struct TrainerMon sUnfairParty_MorganFisheyeSandude[] = {
    {
    .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
    .lvl = 6,
    .species = SPECIES_GLASMA,
	.ability = 0,
	.nature = TRAINER_PARTY_NATURE(NATURE_MILD),
	.heldItem = ITEM_BERRY_JUICE,
    .moves = {MOVE_TACKLE, MOVE_LEER, MOVE_FLASH, MOVE_THUNDER_SHOCK}
    },
};

static const struct TrainerMon sUnfairParty_MorganFisheyeEladrift[] = {
    {
    .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
    .lvl = 6,
    .species = SPECIES_SANDUDE,
	.nature = TRAINER_PARTY_NATURE(NATURE_IMPISH),
	.ability = 0,
	.heldItem = ITEM_BERRY_JUICE,
    .moves = {MOVE_TACKLE, MOVE_HARDEN, MOVE_FLASH, MOVE_SAND_TOMB}
    },
};

// Calvin 1

static const struct TrainerMon sParty_CalvinFisheyeSandude[] = {
    {
    .iv = TRAINER_PARTY_IVS(5, 5, 5, 5, 5, 5),
    .lvl = 6,
    .species = SPECIES_ELADRIFT,
    .moves = {MOVE_TACKLE, MOVE_GROWL, MOVE_SWIFT, MOVE_WATER_GUN}
    },
};

static const struct TrainerMon sParty_CalvinFisheyeEladrift[] = {
    {
    .iv = TRAINER_PARTY_IVS(5, 5, 5, 5, 5, 5),
    .lvl = 6,
    .species = SPECIES_GLASMA,
    .moves = {MOVE_TACKLE, MOVE_LEER, MOVE_SWIFT, MOVE_THUNDER_SHOCK}
    },
};

static const struct TrainerMon sParty_CalvinFisheyeGlasma[] = {
    {
    .iv = TRAINER_PARTY_IVS(5, 5, 5, 5, 5, 5),
    .lvl = 6,
    .species = SPECIES_SANDUDE,
    .moves = {MOVE_TACKLE, MOVE_HARDEN, MOVE_SWIFT, MOVE_MUD_SLAP}
    },
};

// Hard

static const struct TrainerMon sHardParty_CalvinFisheyeSandude[] = {
    {
    .iv = TRAINER_PARTY_IVS(10, 10, 10, 10, 10, 10),
    .lvl = 6,
    .species = SPECIES_ELADRIFT,
	.heldItem = ITEM_ORAN_BERRY,
    .moves = {MOVE_TACKLE, MOVE_GROWL, MOVE_SWIFT, MOVE_WATER_GUN}
    },
};

static const struct TrainerMon sHardParty_CalvinFisheyeEladrift[] = {
    {
    .iv = TRAINER_PARTY_IVS(10, 10, 10, 10, 10, 10),
    .lvl = 6,
    .species = SPECIES_GLASMA,
	.heldItem = ITEM_ORAN_BERRY,
    .moves = {MOVE_TACKLE, MOVE_LEER, MOVE_SWIFT, MOVE_THUNDER_SHOCK}
    },
};

static const struct TrainerMon sHardParty_CalvinFisheyeGlasma[] = {
    {
    .iv = TRAINER_PARTY_IVS(10, 10, 10, 10, 10, 10),
    .lvl = 6,
    .species = SPECIES_SANDUDE,
	.heldItem = ITEM_ORAN_BERRY,
    .moves = {MOVE_TACKLE, MOVE_HARDEN, MOVE_SWIFT, MOVE_MUD_SLAP}
    },
};

// Unfair

static const struct TrainerMon sUnfairParty_CalvinFisheyeSandude[] = {
    {
    .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
    .lvl = 6,
    .species = SPECIES_ELADRIFT,
	.heldItem = ITEM_BERRY_JUICE,
	.nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
    .moves = {MOVE_TACKLE, MOVE_GROWL, MOVE_SWIFT, MOVE_WATER_GUN}
    },
};

static const struct TrainerMon sUnfairParty_CalvinFisheyeEladrift[] = {
    {
    .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
    .lvl = 6,
    .species = SPECIES_GLASMA,
	.heldItem = ITEM_BERRY_JUICE,
	.nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
    .moves = {MOVE_TACKLE, MOVE_LEER, MOVE_SWIFT, MOVE_THUNDER_SHOCK}
    },
};

static const struct TrainerMon sUnfairParty_CalvinFisheyeGlasma[] = {
    {
    .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
    .lvl = 6,
    .species = SPECIES_SANDUDE,
	.heldItem = ITEM_BERRY_JUICE,
	.nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
    .moves = {MOVE_TACKLE, MOVE_HARDEN, MOVE_SWIFT, MOVE_SAND_TOMB}
    },
};

// Starter set functionality removed for now, because I don't want to forget and only be reminded when someone breaks it.
static const struct TrainerMon * const sStarterDependentParties[STARTER_MON_COUNT][STARTER_DEPENDENT_PARTIES_COUNT] = {
	[STARTER_MON_0] = {
			[TRAINER_MORGAN_FISHEYE_LAKE - FIRST_STARTER_DEPENDENT_INDEX] = sParty_MorganFisheyeGlasma,
			[TRAINER_CALVIN_FISHEYE_LAKE - FIRST_STARTER_DEPENDENT_INDEX] = sParty_CalvinFisheyeGlasma,
	},
	[STARTER_MON_1] = {
			[TRAINER_MORGAN_FISHEYE_LAKE - FIRST_STARTER_DEPENDENT_INDEX] = sParty_MorganFisheyeSandude,
			[TRAINER_CALVIN_FISHEYE_LAKE - FIRST_STARTER_DEPENDENT_INDEX] = sParty_CalvinFisheyeSandude,
	},
	[STARTER_MON_2] = {
			[TRAINER_MORGAN_FISHEYE_LAKE - FIRST_STARTER_DEPENDENT_INDEX] = sParty_MorganFisheyeEladrift,
			[TRAINER_CALVIN_FISHEYE_LAKE - FIRST_STARTER_DEPENDENT_INDEX] = sParty_CalvinFisheyeEladrift,
	},
};

static const struct TrainerMon * const sStarterDependentPartiesHard[STARTER_MON_COUNT][STARTER_DEPENDENT_PARTIES_COUNT] = {
	[STARTER_MON_0] = {
			[TRAINER_MORGAN_FISHEYE_LAKE - FIRST_STARTER_DEPENDENT_INDEX] = sHardParty_MorganFisheyeGlasma,
			[TRAINER_CALVIN_FISHEYE_LAKE - FIRST_STARTER_DEPENDENT_INDEX] = sHardParty_CalvinFisheyeGlasma,
	},
	[STARTER_MON_1] = {
			[TRAINER_MORGAN_FISHEYE_LAKE - FIRST_STARTER_DEPENDENT_INDEX] = sHardParty_MorganFisheyeSandude,
			[TRAINER_CALVIN_FISHEYE_LAKE - FIRST_STARTER_DEPENDENT_INDEX] = sHardParty_CalvinFisheyeSandude,
	},
	[STARTER_MON_2] = {
			[TRAINER_MORGAN_FISHEYE_LAKE - FIRST_STARTER_DEPENDENT_INDEX] = sHardParty_MorganFisheyeEladrift,
			[TRAINER_CALVIN_FISHEYE_LAKE - FIRST_STARTER_DEPENDENT_INDEX] = sHardParty_CalvinFisheyeEladrift,
	},
};

static const struct TrainerMon * const sStarterDependentPartiesUnfair[STARTER_MON_COUNT][STARTER_DEPENDENT_PARTIES_COUNT] = {
	[STARTER_MON_0] = {
			[TRAINER_MORGAN_FISHEYE_LAKE - FIRST_STARTER_DEPENDENT_INDEX] = sUnfairParty_MorganFisheyeGlasma,
			[TRAINER_CALVIN_FISHEYE_LAKE - FIRST_STARTER_DEPENDENT_INDEX] = sUnfairParty_CalvinFisheyeGlasma,
	},
	[STARTER_MON_1] = {
			[TRAINER_MORGAN_FISHEYE_LAKE - FIRST_STARTER_DEPENDENT_INDEX] = sUnfairParty_MorganFisheyeSandude,
			[TRAINER_CALVIN_FISHEYE_LAKE - FIRST_STARTER_DEPENDENT_INDEX] = sUnfairParty_CalvinFisheyeSandude,
	},
	[STARTER_MON_2] = {
			[TRAINER_MORGAN_FISHEYE_LAKE - FIRST_STARTER_DEPENDENT_INDEX] = sUnfairParty_MorganFisheyeEladrift,
			[TRAINER_CALVIN_FISHEYE_LAKE - FIRST_STARTER_DEPENDENT_INDEX] = sUnfairParty_CalvinFisheyeEladrift,
	},
};

static const u8 sStarterDependentPartySizes[3][STARTER_DEPENDENT_PARTIES_COUNT] = {
	[OPTIONS_DIFFICULTY_NORMAL] = {
		[TRAINER_MORGAN_FISHEYE_LAKE - FIRST_STARTER_DEPENDENT_INDEX] = ARRAY_COUNT(sParty_MorganFisheyeGlasma),
		[TRAINER_CALVIN_FISHEYE_LAKE - FIRST_STARTER_DEPENDENT_INDEX] = ARRAY_COUNT(sParty_CalvinFisheyeGlasma),
	},
	[OPTIONS_DIFFICULTY_HARD] = {
		[TRAINER_MORGAN_FISHEYE_LAKE - FIRST_STARTER_DEPENDENT_INDEX] = ARRAY_COUNT(sHardParty_MorganFisheyeGlasma),
		[TRAINER_CALVIN_FISHEYE_LAKE - FIRST_STARTER_DEPENDENT_INDEX] = ARRAY_COUNT(sHardParty_CalvinFisheyeGlasma),
	},
	[OPTIONS_DIFFICULTY_UNFAIR] = {
		[TRAINER_MORGAN_FISHEYE_LAKE - FIRST_STARTER_DEPENDENT_INDEX] = ARRAY_COUNT(sUnfairParty_MorganFisheyeGlasma),
		[TRAINER_CALVIN_FISHEYE_LAKE - FIRST_STARTER_DEPENDENT_INDEX] = ARRAY_COUNT(sUnfairParty_CalvinFisheyeGlasma),
	},
};
