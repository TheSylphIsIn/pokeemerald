static const struct TrainerMon sParty_Dummy[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 6,
    .species = SPECIES_DUBSNAKE,
    .ability = ABILITY_ICE_BODY,
    .moves = {MOVE_ACID, MOVE_ICE_SHARD, MOVE_BLOCK, MOVE_PERISH_SONG}
    },
};

static const struct TrainerMon sParty_Kyle[] = {
	{
	.species = SPECIES_NIDORAN_M,
	.lvl = 4,
	},
};

static const struct TrainerMon sParty_Bobby[] = {
	{
	.species = SPECIES_POOCHYENA,
	.lvl = 5,
	},
};

static const struct TrainerMon sParty_Kris[] = {
	{
	.species = SPECIES_RALTS_FONEI,
	.lvl = 8,
	.iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
	},
	{
	.species = SPECIES_ELECTRIKE,
	.lvl = 7,
	.iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
	.gender = TRAINER_MON_MALE,
	},
};

static const struct TrainerMon sParty_Wilbur[] = {
	{
	.species = SPECIES_KRICKETOT,
	.lvl = 7,
	.gender = TRAINER_MON_MALE,
	},
	{
	.species = SPECIES_LARVOOL,
	.lvl = 9,
	.iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
	.gender = TRAINER_MON_FEMALE,
	},
};

static const struct TrainerMon sParty_Grant[] = {
	{
	.species = SPECIES_LAV,
	.lvl = 10,
	.iv = TRAINER_PARTY_IVS(7, 7, 7, 7, 7, 7),
	.gender = TRAINER_MON_FEMALE,
	},
};

static const struct TrainerMon sParty_Rosalyn[] = {
	{
	.species = SPECIES_HATCHBLING,
	.lvl = 9,
	.iv = TRAINER_PARTY_IVS(5, 5, 5, 5, 5, 5),
	.gender = TRAINER_MON_FEMALE,
	},
};

static const struct TrainerMon sParty_LackeyFisheyeLake[] = {
	{
	.species = SPECIES_KEESIGHT,
	.lvl = 7,
	.iv = TRAINER_PARTY_IVS(5, 5, 5, 5, 5, 5),
	.gender = TRAINER_MON_FEMALE,
	},
	{
	.species = SPECIES_MAGNEMITE,
	.lvl = 8,
	.iv = TRAINER_PARTY_IVS(5, 5, 5, 5, 5, 5),
	.moves = { MOVE_TACKLE, MOVE_SUPERSONIC, MOVE_THUNDER_SHOCK, MOVE_NONE, },
	},
};

static const struct TrainerMon sParty_LackeyFisheyeLakeHard[] = {
	{
	.species = SPECIES_KEESIGHT,
	.lvl = 7,
	.iv = TRAINER_PARTY_IVS(8, 8, 8, 8, 8, 8),
	.moves = { MOVE_CONFUSION, MOVE_NONE, MOVE_NONE, MOVE_NONE, },
	.nature = TRAINER_PARTY_NATURE(NATURE_MILD),
	.gender = TRAINER_MON_FEMALE,
	},
	{
	.species = SPECIES_MAGNEMITE,
	.lvl = 8,
	.ability = ABILITY_STURDY,
	.iv = TRAINER_PARTY_IVS(8, 8, 8, 8, 8, 8),
	.nature = TRAINER_PARTY_NATURE(NATURE_LAX),
	},
};

static const struct TrainerMon sParty_LackeyFisheyeLakeUnfair[] = {
	{
	.species = SPECIES_KEESIGHT,
	.lvl = 7,
	.ability = ABILITY_SHEER_FORCE,
	.iv = TRAINER_PARTY_IVS(10, 10, 10, 10, 10, 10),
	.moves = { MOVE_CONFUSION, MOVE_GUST, MOVE_NONE, MOVE_NONE, },
	.nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
	},
	{
	.species = SPECIES_MAGNEMITE,
	.lvl = 8,
	.heldItem = ITEM_BERRY_JUICE,
	.ability = ABILITY_STURDY,
	.iv = TRAINER_PARTY_IVS(10, 10, 10, 10, 10, 10),
	.moves = { MOVE_SONIC_BOOM, MOVE_SUPERSONIC, MOVE_THUNDER_SHOCK, MOVE_THUNDER_WAVE, },
	.nature = TRAINER_PARTY_NATURE(NATURE_BOLD),
	},
};

