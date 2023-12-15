/* DO NOT EDIT! THESE FILES ARE OUTPUT BY THE MINDLESS TRAINER EDITOR.MODIFICATIONS WILL BE LOST IF IT IS USED AGAIN. */

const struct Trainer gTrainers[] = {

	[TRAINER_NONE] =
	{
		.trainerClass = TRAINER_CLASS_PKMN_TRAINER_1,
		.encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
		.trainerPic = TRAINER_PIC_HIKER,
		.trainerName = _(""),
		.items = {},
		.doubleBattle = FALSE,
		.aiFlags = 0,
		.partySize = 0,
		.party = NULL,
	},

	[TRAINER_KYLE] =
	{
		.trainerName = _("Kyle"),
		.trainerClass = TRAINER_CLASS_YOUNGSTER,
		.trainerPic = TRAINER_PIC_YOUNGSTER,
		.encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
		.aiFlags = AI_FLAG_CHECK_BAD_MOVE,
		.items = { },
		.doubleBattle = FALSE,
		.party = TRAINER_PARTY_NO_DIFF(sParty_Kyle),
	},

	[TRAINER_BILLY] =
	{
		.trainerName = _("Billy"),
		.trainerClass = TRAINER_CLASS_YOUNGSTER,
		.trainerPic = TRAINER_PIC_YOUNGSTER,
		.encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
		.aiFlags = AI_FLAG_CHECK_BAD_MOVE,
		.items = { },
		.doubleBattle = FALSE,
		.party = TRAINER_PARTY_NO_DIFF(sParty_Billy),
	},

	[TRAINER_KEY_LACKEY_FISHEYE_LAKE] =
	{
		.trainerName = _("Lackey"),
		.trainerClass = TRAINER_CLASS_TEAM_MAGMA,
		.trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
		.encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MAGMA,
		.aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
		.items = { ITEM_X_DEFENSE, ITEM_NONE, ITEM_NONE, ITEM_NONE, },
		.doubleBattle = FALSE,
		.party = TRAINER_PARTY(sParty_LackeyFisheyeLake),
	},

	[TRAINER_MORGAN_FISHEYE_LAKE] =
	{
		.trainerName = _("Morgan"),
		.trainerClass = TRAINER_CLASS_RIVAL,
		.trainerPic = TRAINER_PIC_MORGAN,
		.encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
		.aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
		.items = { },
		.doubleBattle = FALSE,
		.party = TRAINER_PARTY_STARTER_DEPENDENT,
	},

	[TRAINER_CALVIN_FISHEYE_LAKE] =
	{
		.trainerName = _("Calvin"),
		.trainerClass = TRAINER_CLASS_RIVAL,
		.trainerPic = TRAINER_PIC_CALVIN,
		.encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
		.aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
		.items = { },
		.doubleBattle = FALSE,
		.party = TRAINER_PARTY_STARTER_DEPENDENT,
	},


};
