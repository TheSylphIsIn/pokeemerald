/*

static const struct TrainerMon sParty_Juan5[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 61,
    .species = SPECIES_LAPRAS,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_HYDRO_PUMP, MOVE_PERISH_SONG, MOVE_ICE_BEAM, MOVE_CONFUSE_RAY}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 63,
    .species = SPECIES_WHISCASH,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_RAIN_DANCE, MOVE_WATER_PULSE, MOVE_DOUBLE_TEAM, MOVE_FISSURE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 61,
    .species = SPECIES_POLITOED,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_HYPNOSIS, MOVE_RAIN_DANCE, MOVE_HYDRO_PUMP, MOVE_PERISH_SONG}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 63,
    .species = SPECIES_WALREIN,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_WATER_PULSE, MOVE_BODY_SLAM, MOVE_PROTECT, MOVE_SHEER_COLD}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 63,
    .species = SPECIES_CRAWDAUNT,
    .heldItem = ITEM_CHESTO_BERRY,
    .moves = {MOVE_REST, MOVE_GUILLOTINE, MOVE_TAUNT, MOVE_DOUBLE_TEAM}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 66,
    .species = SPECIES_KINGDRA,
    .heldItem = ITEM_CHESTO_BERRY,
    .moves = {MOVE_WATER_PULSE, MOVE_DOUBLE_TEAM, MOVE_ICE_BEAM, MOVE_REST}
    }
};
*/

/*
	* A note about the way expansion generates trainer parties, for future reference.
	* Default movesets still work.
	* Abilities are assigned by ability name, not num. Still defaults to slot 0 ability.
	* IVs are assigned by TRAINER_PARTY_IVS macro, in data order (HP/ATK/DEF/SPD/SAT/SDF).
	* EVs are assigned by TRAINER_PARTY_EVS macro, in data order (HP/ATK/DEF/SPD/SAT/SDF).
	* Nickname is a string pointer. If none is provided, uses default name.
	* Ball is an item constant. Providing none defaults to Poke Ball. Providing -1 goes to trainer class ball.
	* Gender is done by TRAINER_MON_MALE or TRAINER_MON_FEMALE.
	* Shininess can be true.
	* Friendship can be explicitly set for Return, Frustration (or...other purposes?)
	* Nature will be random(?) if not provided but can be given with TRAINER_PARTY_NATURE macro.
*/

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
	.iv = 0,
	.lvl = 4,
	.species = SPECIES_NIDORAN_M
	},
};

static const struct TrainerMon sParty_Billy[] = {
	{
	.iv = 0,
	.lvl = 5,
	.species = SPECIES_POOCHYENA
	},
};

static const struct TrainerMon sParty_LackeyFisheyeLake[] = {
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

