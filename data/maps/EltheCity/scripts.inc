EltheCity_MapScripts::
# 14 "data/maps/EltheCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, EltheCity_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

EltheCity_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 15 "data/maps/EltheCity/scripts.pory"
	goto_if_set FLAG_SCALE_DESCENDING_DONE, EltheCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
EltheCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 19 "data/maps/EltheCity/scripts.pory"
	goto_if_set FLAG_SCALE_ASCENDING_DONE, EltheCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_4
	return

EltheCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 17 "data/maps/EltheCity/scripts.pory"
	setobjectxyperm 12, 11, 21
	goto EltheCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

EltheCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 21 "data/maps/EltheCity/scripts.pory"
	setobjectxyperm 11, 13, 21
	return


ObjEventVarTest::
# 28 "data/maps/EltheCity/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_BRENDAN_NORMAL
# 29 "data/maps/EltheCity/scripts.pory"
	removeobject VAR_LAST_TALKED
# 30 "data/maps/EltheCity/scripts.pory"
	addobject VAR_LAST_TALKED
# 31 "data/maps/EltheCity/scripts.pory"
	waitbuttonpress
# 32 "data/maps/EltheCity/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_MAY_NORMAL
# 33 "data/maps/EltheCity/scripts.pory"
	removeobject VAR_LAST_TALKED
# 34 "data/maps/EltheCity/scripts.pory"
	addobject VAR_LAST_TALKED
# 35 "data/maps/EltheCity/scripts.pory"
	waitbuttonpress
# 36 "data/maps/EltheCity/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_ANABEL
# 37 "data/maps/EltheCity/scripts.pory"
	removeobject VAR_LAST_TALKED
# 38 "data/maps/EltheCity/scripts.pory"
	addobject VAR_LAST_TALKED
# 39 "data/maps/EltheCity/scripts.pory"
	waitbuttonpress
# 40 "data/maps/EltheCity/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_SPECIES ( ZOROARK )
# 41 "data/maps/EltheCity/scripts.pory"
	removeobject VAR_LAST_TALKED
# 42 "data/maps/EltheCity/scripts.pory"
	addobject VAR_LAST_TALKED
# 43 "data/maps/EltheCity/scripts.pory"
	waitbuttonpress
	return


Test_ScriptGetInput::
# 48 "data/maps/EltheCity/scripts.pory"
	lock
# 49 "data/maps/EltheCity/scripts.pory"
	message Test_ScriptGetInput_Text_0
# 50 "data/maps/EltheCity/scripts.pory"
	waitmessage
Test_ScriptGetInput_2:
# 52 "data/maps/EltheCity/scripts.pory"
	waitforscriptinput
# 53 "data/maps/EltheCity/scripts.pory"
	switch VAR_RESULT
# 55 "data/maps/EltheCity/scripts.pory"
	case 0x0020, Test_ScriptGetInput_5
# 58 "data/maps/EltheCity/scripts.pory"
	case 0x0010, Test_ScriptGetInput_6
# 61 "data/maps/EltheCity/scripts.pory"
	case 0x0080, Test_ScriptGetInput_7
# 64 "data/maps/EltheCity/scripts.pory"
	case 0x0040, Test_ScriptGetInput_8
	goto Test_ScriptGetInput_2

# 69 "data/maps/EltheCity/scripts.pory"
	release
	return

Test_ScriptGetInput_5:
# 56 "data/maps/EltheCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, StepLeft
# 57 "data/maps/EltheCity/scripts.pory"
	waitmovement 0
	goto Test_ScriptGetInput_2

Test_ScriptGetInput_6:
# 59 "data/maps/EltheCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, StepRight
# 60 "data/maps/EltheCity/scripts.pory"
	waitmovement 0
	goto Test_ScriptGetInput_2

Test_ScriptGetInput_7:
# 62 "data/maps/EltheCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, StepDown
# 63 "data/maps/EltheCity/scripts.pory"
	waitmovement 0
	goto Test_ScriptGetInput_2

Test_ScriptGetInput_8:
# 65 "data/maps/EltheCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, StepUp
# 66 "data/maps/EltheCity/scripts.pory"
	waitmovement 0
	goto Test_ScriptGetInput_2


EltheCity_Sign_InnLeft::
# 74 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_Sign_InnLeft_Text_0, MSGBOX_SIGN
	return


EltheCity_Sign_InnRight::
# 79 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_Sign_InnRight_Text_0, PORTRAIT_AMELIA_SERIOUSLY
# 80 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_Sign_InnRight_Text_1, MSGBOX_SIGN
	return


# 83 "data/maps/EltheCity/scripts.pory"
StepDown:
# 85 "data/maps/EltheCity/scripts.pory"
	walk_down
	step_end

# 88 "data/maps/EltheCity/scripts.pory"
StepUp:
# 90 "data/maps/EltheCity/scripts.pory"
	walk_up
	step_end

# 93 "data/maps/EltheCity/scripts.pory"
StepLeft:
# 95 "data/maps/EltheCity/scripts.pory"
	walk_left
	step_end

# 98 "data/maps/EltheCity/scripts.pory"
StepRight:
# 100 "data/maps/EltheCity/scripts.pory"
	walk_right
	step_end

EltheCity_Trigger_JumpOnBenchLeft_TopTile::
# 105 "data/maps/EltheCity/scripts.pory"
	setvar VAR_0x8004, ANIM_SIT_WEST
# 106 "data/maps/EltheCity/scripts.pory"
	callnative DoAmeliaOverworldAnim
# 107 "data/maps/EltheCity/scripts.pory"
	playse SE_BIKE_HOP
# 108 "data/maps/EltheCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, EltheCity_Movement_JumpOnBenchLeft
# 109 "data/maps/EltheCity/scripts.pory"
	waitmovement 0
# 110 "data/maps/EltheCity/scripts.pory"
	addobjectspriteoffset OBJ_EVENT_ID_PLAYER, 0, -6
EltheCity_Trigger_JumpOnBenchLeft_TopTile_3:
# 112 "data/maps/EltheCity/scripts.pory"
	waitforscriptinput
# 113 "data/maps/EltheCity/scripts.pory"
	switch VAR_RESULT
# 115 "data/maps/EltheCity/scripts.pory"
	case 0x0020, EltheCity_Trigger_JumpOnBenchLeft_TopTile_10
# 116 "data/maps/EltheCity/scripts.pory"
	case 0x0001, EltheCity_Trigger_JumpOnBenchLeft_TopTile_10
# 117 "data/maps/EltheCity/scripts.pory"
	case 0x0002, EltheCity_Trigger_JumpOnBenchLeft_TopTile_10
EltheCity_Trigger_JumpOnBenchLeft_TopTile_2:
# 137 "data/maps/EltheCity/scripts.pory"
	compare VAR_RESULT, 0x0020
	goto_if_ne EltheCity_Trigger_JumpOnBenchLeft_TopTile_5
EltheCity_Trigger_JumpOnBenchLeft_TopTile_1:
# 138 "data/maps/EltheCity/scripts.pory"
	release
	return

EltheCity_Trigger_JumpOnBenchLeft_TopTile_4:
# 137 "data/maps/EltheCity/scripts.pory"
	compare VAR_RESULT, 0x0002
	goto_if_ne EltheCity_Trigger_JumpOnBenchLeft_TopTile_3
	goto EltheCity_Trigger_JumpOnBenchLeft_TopTile_1

EltheCity_Trigger_JumpOnBenchLeft_TopTile_5:
# 137 "data/maps/EltheCity/scripts.pory"
	compare VAR_RESULT, 0x0001
	goto_if_ne EltheCity_Trigger_JumpOnBenchLeft_TopTile_4
	goto EltheCity_Trigger_JumpOnBenchLeft_TopTile_1

EltheCity_Trigger_JumpOnBenchLeft_TopTile_10:
# 118 "data/maps/EltheCity/scripts.pory"
	resetobjectspriteoffset OBJ_EVENT_ID_PLAYER
# 119 "data/maps/EltheCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, EltheCity_Movement_GetOffBenchLeft
# 120 "data/maps/EltheCity/scripts.pory"
	waitmovement 0
	goto EltheCity_Trigger_JumpOnBenchLeft_TopTile_2


EltheCity_Trigger_JumpOnBenchLeft_BottomTile::
# 143 "data/maps/EltheCity/scripts.pory"
	goto EltheCity_Trigger_JumpOnBenchLeft_TopTile
	return


EltheCity_Trigger_JumpOnBenchRight_TopTile::
# 148 "data/maps/EltheCity/scripts.pory"
	setvar VAR_0x8004, ANIM_SIT_EAST
# 149 "data/maps/EltheCity/scripts.pory"
	callnative DoAmeliaOverworldAnim
# 150 "data/maps/EltheCity/scripts.pory"
	playse SE_BIKE_HOP
# 151 "data/maps/EltheCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, EltheCity_Movement_JumpOnBenchRight
# 152 "data/maps/EltheCity/scripts.pory"
	waitmovement 0
# 153 "data/maps/EltheCity/scripts.pory"
	addobjectspriteoffset OBJ_EVENT_ID_PLAYER, 0, -6
EltheCity_Trigger_JumpOnBenchRight_TopTile_3:
# 155 "data/maps/EltheCity/scripts.pory"
	waitforscriptinput
# 156 "data/maps/EltheCity/scripts.pory"
	switch VAR_RESULT
# 158 "data/maps/EltheCity/scripts.pory"
	case 0x0010, EltheCity_Trigger_JumpOnBenchRight_TopTile_10
# 159 "data/maps/EltheCity/scripts.pory"
	case 0x0001, EltheCity_Trigger_JumpOnBenchRight_TopTile_10
# 160 "data/maps/EltheCity/scripts.pory"
	case 0x0002, EltheCity_Trigger_JumpOnBenchRight_TopTile_10
EltheCity_Trigger_JumpOnBenchRight_TopTile_2:
# 180 "data/maps/EltheCity/scripts.pory"
	compare VAR_RESULT, 0x0010
	goto_if_ne EltheCity_Trigger_JumpOnBenchRight_TopTile_5
EltheCity_Trigger_JumpOnBenchRight_TopTile_1:
# 181 "data/maps/EltheCity/scripts.pory"
	release
	return

EltheCity_Trigger_JumpOnBenchRight_TopTile_4:
# 180 "data/maps/EltheCity/scripts.pory"
	compare VAR_RESULT, 0x0002
	goto_if_ne EltheCity_Trigger_JumpOnBenchRight_TopTile_3
	goto EltheCity_Trigger_JumpOnBenchRight_TopTile_1

EltheCity_Trigger_JumpOnBenchRight_TopTile_5:
# 180 "data/maps/EltheCity/scripts.pory"
	compare VAR_RESULT, 0x0001
	goto_if_ne EltheCity_Trigger_JumpOnBenchRight_TopTile_4
	goto EltheCity_Trigger_JumpOnBenchRight_TopTile_1

EltheCity_Trigger_JumpOnBenchRight_TopTile_10:
# 161 "data/maps/EltheCity/scripts.pory"
	resetobjectspriteoffset OBJ_EVENT_ID_PLAYER
# 162 "data/maps/EltheCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, EltheCity_Movement_GetOffBenchRight
# 163 "data/maps/EltheCity/scripts.pory"
	waitmovement 0
	goto EltheCity_Trigger_JumpOnBenchRight_TopTile_2


EltheCity_Trigger_JumpOnBenchRight_BottomTile::
# 186 "data/maps/EltheCity/scripts.pory"
	goto EltheCity_Trigger_JumpOnBenchRight_TopTile
	return


EltheCity_EventScript_Keesight::
# 191 "data/maps/EltheCity/scripts.pory"
	goto_if_set FLAG_SCALE_ASCENDING_DONE, EltheCity_EventScript_Keesight_3
EltheCity_EventScript_Keesight_2:
# 198 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_EventScript_Keesight_Text_2, PORTRAIT_KEESIGHT
# 199 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_EventScript_Keesight_Text_3
# 200 "data/maps/EltheCity/scripts.pory"
	speakername NULL, 0
# 201 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_EventScript_Keesight_Text_4, MSGBOX_AUTOCLOSE
	return

EltheCity_EventScript_Keesight_1:
# 193 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_EventScript_Keesight_Text_0, PORTRAIT_KEESIGHT
# 194 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_EventScript_Keesight_Text_1, MSGBOX_NPC
	return

EltheCity_EventScript_Keesight_3:
# 191 "data/maps/EltheCity/scripts.pory"
	goto_if_set FLAG_SCALE_DESCENDING_DONE, EltheCity_EventScript_Keesight_1
	goto EltheCity_EventScript_Keesight_2


EltheCity_Trigger_MusicStump1::
# 207 "data/maps/EltheCity/scripts.pory"
	playse SE_NOTE_C
# 208 "data/maps/EltheCity/scripts.pory"
	turnobject 10, DIR_WEST
# 211 "data/maps/EltheCity/scripts.pory"
	compare VAR_TEMP_2, 7
	goto_if_eq EltheCity_Trigger_MusicStump1_4
EltheCity_Trigger_MusicStump1_3:
# 235 "data/maps/EltheCity/scripts.pory"
	setvar VAR_TEMP_2, 0
# 236 "data/maps/EltheCity/scripts.pory"
	setvar VAR_TEMP_1, 1
EltheCity_Trigger_MusicStump1_1:
# 239 "data/maps/EltheCity/scripts.pory"
	release
	return

EltheCity_Trigger_MusicStump1_2:
# 213 "data/maps/EltheCity/scripts.pory"
	delay 60
# 214 "data/maps/EltheCity/scripts.pory"
	applymovement 10, EltheCity_Movement_KeesightHops
# 215 "data/maps/EltheCity/scripts.pory"
	playse SE_BIKE_HOP
# 216 "data/maps/EltheCity/scripts.pory"
	delay 16
# 217 "data/maps/EltheCity/scripts.pory"
	playse SE_BIKE_HOP
# 218 "data/maps/EltheCity/scripts.pory"
	delay 32
# 219 "data/maps/EltheCity/scripts.pory"
	playmoncry SPECIES_WOOBAT, CRY_MODE_NORMAL
# 220 "data/maps/EltheCity/scripts.pory"
	waitmoncry
# 221 "data/maps/EltheCity/scripts.pory"
	delay 30
# 222 "data/maps/EltheCity/scripts.pory"
	applymovement 10, Common_Movement_FaceUp
# 223 "data/maps/EltheCity/scripts.pory"
	waitmovement 0
# 224 "data/maps/EltheCity/scripts.pory"
	delay 16
# 225 "data/maps/EltheCity/scripts.pory"
	playse SE_M_SUPERSONIC
# 226 "data/maps/EltheCity/scripts.pory"
	applymovement 12, EltheCity_Movement_MoveUmbrashard
# 227 "data/maps/EltheCity/scripts.pory"
	waitmovement 0
# 228 "data/maps/EltheCity/scripts.pory"
	applymovement 10, Common_Movement_FaceDown
# 229 "data/maps/EltheCity/scripts.pory"
	waitmovement 0
# 230 "data/maps/EltheCity/scripts.pory"
	setobjectxyperm 12, 11, 21
# 231 "data/maps/EltheCity/scripts.pory"
	setflag FLAG_SCALE_DESCENDING_DONE
	goto EltheCity_Trigger_MusicStump1_1

EltheCity_Trigger_MusicStump1_4:
# 211 "data/maps/EltheCity/scripts.pory"
	goto_if_unset FLAG_SCALE_DESCENDING_DONE, EltheCity_Trigger_MusicStump1_2
	goto EltheCity_Trigger_MusicStump1_3


EltheCity_Trigger_MusicStump2::
# 244 "data/maps/EltheCity/scripts.pory"
	playse SE_NOTE_D
# 245 "data/maps/EltheCity/scripts.pory"
	turnobject 10, DIR_WEST
# 248 "data/maps/EltheCity/scripts.pory"
	compare VAR_TEMP_1, 1
	goto_if_eq EltheCity_Trigger_MusicStump2_2
# 254 "data/maps/EltheCity/scripts.pory"
	setvar VAR_TEMP_1, 0
EltheCity_Trigger_MusicStump2_1:
# 258 "data/maps/EltheCity/scripts.pory"
	compare VAR_TEMP_2, 6
	goto_if_eq EltheCity_Trigger_MusicStump2_6
# 264 "data/maps/EltheCity/scripts.pory"
	setvar VAR_TEMP_2, 0
EltheCity_Trigger_MusicStump2_5:
# 267 "data/maps/EltheCity/scripts.pory"
	release
	return

EltheCity_Trigger_MusicStump2_2:
# 250 "data/maps/EltheCity/scripts.pory"
	addvar VAR_TEMP_1, 1
	goto EltheCity_Trigger_MusicStump2_1

EltheCity_Trigger_MusicStump2_6:
# 260 "data/maps/EltheCity/scripts.pory"
	addvar VAR_TEMP_2, 1
	goto EltheCity_Trigger_MusicStump2_5


EltheCity_Trigger_MusicStump3::
# 272 "data/maps/EltheCity/scripts.pory"
	playse SE_NOTE_E
# 273 "data/maps/EltheCity/scripts.pory"
	turnobject 10, DIR_WEST
# 276 "data/maps/EltheCity/scripts.pory"
	compare VAR_TEMP_1, 2
	goto_if_eq EltheCity_Trigger_MusicStump3_2
# 282 "data/maps/EltheCity/scripts.pory"
	setvar VAR_TEMP_1, 0
EltheCity_Trigger_MusicStump3_1:
# 286 "data/maps/EltheCity/scripts.pory"
	compare VAR_TEMP_2, 5
	goto_if_eq EltheCity_Trigger_MusicStump3_6
# 292 "data/maps/EltheCity/scripts.pory"
	setvar VAR_TEMP_2, 0
EltheCity_Trigger_MusicStump3_5:
# 295 "data/maps/EltheCity/scripts.pory"
	release
	return

EltheCity_Trigger_MusicStump3_2:
# 278 "data/maps/EltheCity/scripts.pory"
	addvar VAR_TEMP_1, 1
	goto EltheCity_Trigger_MusicStump3_1

EltheCity_Trigger_MusicStump3_6:
# 288 "data/maps/EltheCity/scripts.pory"
	addvar VAR_TEMP_2, 1
	goto EltheCity_Trigger_MusicStump3_5


EltheCity_Trigger_MusicStump4::
# 300 "data/maps/EltheCity/scripts.pory"
	playse SE_NOTE_F
# 301 "data/maps/EltheCity/scripts.pory"
	turnobject 10, DIR_SOUTH
# 304 "data/maps/EltheCity/scripts.pory"
	compare VAR_TEMP_1, 3
	goto_if_eq EltheCity_Trigger_MusicStump4_2
# 310 "data/maps/EltheCity/scripts.pory"
	setvar VAR_TEMP_1, 0
EltheCity_Trigger_MusicStump4_1:
# 314 "data/maps/EltheCity/scripts.pory"
	compare VAR_TEMP_2, 4
	goto_if_eq EltheCity_Trigger_MusicStump4_6
# 320 "data/maps/EltheCity/scripts.pory"
	setvar VAR_TEMP_2, 0
EltheCity_Trigger_MusicStump4_5:
# 323 "data/maps/EltheCity/scripts.pory"
	release
	return

EltheCity_Trigger_MusicStump4_2:
# 306 "data/maps/EltheCity/scripts.pory"
	addvar VAR_TEMP_1, 1
	goto EltheCity_Trigger_MusicStump4_1

EltheCity_Trigger_MusicStump4_6:
# 316 "data/maps/EltheCity/scripts.pory"
	addvar VAR_TEMP_2, 1
	goto EltheCity_Trigger_MusicStump4_5


EltheCity_Trigger_MusicStump5::
# 328 "data/maps/EltheCity/scripts.pory"
	playse SE_NOTE_G
# 329 "data/maps/EltheCity/scripts.pory"
	turnobject 10, DIR_SOUTH
# 332 "data/maps/EltheCity/scripts.pory"
	compare VAR_TEMP_1, 4
	goto_if_eq EltheCity_Trigger_MusicStump5_2
# 338 "data/maps/EltheCity/scripts.pory"
	setvar VAR_TEMP_1, 0
EltheCity_Trigger_MusicStump5_1:
# 342 "data/maps/EltheCity/scripts.pory"
	compare VAR_TEMP_2, 3
	goto_if_eq EltheCity_Trigger_MusicStump5_6
# 348 "data/maps/EltheCity/scripts.pory"
	setvar VAR_TEMP_2, 0
EltheCity_Trigger_MusicStump5_5:
# 351 "data/maps/EltheCity/scripts.pory"
	release
	return

EltheCity_Trigger_MusicStump5_2:
# 334 "data/maps/EltheCity/scripts.pory"
	addvar VAR_TEMP_1, 1
	goto EltheCity_Trigger_MusicStump5_1

EltheCity_Trigger_MusicStump5_6:
# 344 "data/maps/EltheCity/scripts.pory"
	addvar VAR_TEMP_2, 1
	goto EltheCity_Trigger_MusicStump5_5


EltheCity_Trigger_MusicStump6::
# 356 "data/maps/EltheCity/scripts.pory"
	playse SE_NOTE_A
# 357 "data/maps/EltheCity/scripts.pory"
	turnobject 10, DIR_EAST
# 360 "data/maps/EltheCity/scripts.pory"
	compare VAR_TEMP_1, 5
	goto_if_eq EltheCity_Trigger_MusicStump6_2
# 366 "data/maps/EltheCity/scripts.pory"
	setvar VAR_TEMP_1, 0
EltheCity_Trigger_MusicStump6_1:
# 370 "data/maps/EltheCity/scripts.pory"
	compare VAR_TEMP_2, 2
	goto_if_eq EltheCity_Trigger_MusicStump6_6
# 376 "data/maps/EltheCity/scripts.pory"
	setvar VAR_TEMP_2, 0
EltheCity_Trigger_MusicStump6_5:
# 379 "data/maps/EltheCity/scripts.pory"
	release
	return

EltheCity_Trigger_MusicStump6_2:
# 362 "data/maps/EltheCity/scripts.pory"
	addvar VAR_TEMP_1, 1
	goto EltheCity_Trigger_MusicStump6_1

EltheCity_Trigger_MusicStump6_6:
# 372 "data/maps/EltheCity/scripts.pory"
	addvar VAR_TEMP_2, 1
	goto EltheCity_Trigger_MusicStump6_5


EltheCity_Trigger_MusicStump7::
# 384 "data/maps/EltheCity/scripts.pory"
	playse SE_NOTE_B
# 385 "data/maps/EltheCity/scripts.pory"
	turnobject 10, DIR_EAST
# 388 "data/maps/EltheCity/scripts.pory"
	compare VAR_TEMP_1, 6
	goto_if_eq EltheCity_Trigger_MusicStump7_2
# 394 "data/maps/EltheCity/scripts.pory"
	setvar VAR_TEMP_1, 0
EltheCity_Trigger_MusicStump7_1:
# 398 "data/maps/EltheCity/scripts.pory"
	compare VAR_TEMP_2, 1
	goto_if_eq EltheCity_Trigger_MusicStump7_6
# 404 "data/maps/EltheCity/scripts.pory"
	setvar VAR_TEMP_2, 0
EltheCity_Trigger_MusicStump7_5:
# 407 "data/maps/EltheCity/scripts.pory"
	release
	return

EltheCity_Trigger_MusicStump7_2:
# 390 "data/maps/EltheCity/scripts.pory"
	addvar VAR_TEMP_1, 1
	goto EltheCity_Trigger_MusicStump7_1

EltheCity_Trigger_MusicStump7_6:
# 400 "data/maps/EltheCity/scripts.pory"
	addvar VAR_TEMP_2, 1
	goto EltheCity_Trigger_MusicStump7_5


EltheCity_Trigger_MusicStump8::
# 412 "data/maps/EltheCity/scripts.pory"
	playse SE_NOTE_C_HIGH
# 413 "data/maps/EltheCity/scripts.pory"
	turnobject 10, DIR_EAST
# 417 "data/maps/EltheCity/scripts.pory"
	compare VAR_TEMP_1, 7
	goto_if_eq EltheCity_Trigger_MusicStump8_4
EltheCity_Trigger_MusicStump8_3:
# 441 "data/maps/EltheCity/scripts.pory"
	setvar VAR_TEMP_1, 0
# 442 "data/maps/EltheCity/scripts.pory"
	setvar VAR_TEMP_2, 1
EltheCity_Trigger_MusicStump8_1:
# 445 "data/maps/EltheCity/scripts.pory"
	release
	return

EltheCity_Trigger_MusicStump8_2:
# 419 "data/maps/EltheCity/scripts.pory"
	delay 60
# 420 "data/maps/EltheCity/scripts.pory"
	applymovement 10, EltheCity_Movement_KeesightHops
# 421 "data/maps/EltheCity/scripts.pory"
	playse SE_BIKE_HOP
# 422 "data/maps/EltheCity/scripts.pory"
	delay 16
# 423 "data/maps/EltheCity/scripts.pory"
	playse SE_BIKE_HOP
# 424 "data/maps/EltheCity/scripts.pory"
	delay 32
# 425 "data/maps/EltheCity/scripts.pory"
	playmoncry SPECIES_WOOBAT, CRY_MODE_NORMAL
# 426 "data/maps/EltheCity/scripts.pory"
	waitmoncry
# 427 "data/maps/EltheCity/scripts.pory"
	delay 30
# 428 "data/maps/EltheCity/scripts.pory"
	applymovement 10, Common_Movement_FaceUp
# 429 "data/maps/EltheCity/scripts.pory"
	waitmovement 0
# 430 "data/maps/EltheCity/scripts.pory"
	delay 16
# 431 "data/maps/EltheCity/scripts.pory"
	playse SE_M_SUPERSONIC
# 432 "data/maps/EltheCity/scripts.pory"
	applymovement 11, EltheCity_Movement_MoveEspershard
# 433 "data/maps/EltheCity/scripts.pory"
	waitmovement 0
# 434 "data/maps/EltheCity/scripts.pory"
	applymovement 10, Common_Movement_FaceDown
# 435 "data/maps/EltheCity/scripts.pory"
	waitmovement 0
# 436 "data/maps/EltheCity/scripts.pory"
	setobjectxyperm 11, 13, 21
# 437 "data/maps/EltheCity/scripts.pory"
	setflag FLAG_SCALE_ASCENDING_DONE
	goto EltheCity_Trigger_MusicStump8_1

EltheCity_Trigger_MusicStump8_4:
# 417 "data/maps/EltheCity/scripts.pory"
	goto_if_unset FLAG_SCALE_ASCENDING_DONE, EltheCity_Trigger_MusicStump8_2
	goto EltheCity_Trigger_MusicStump8_3


# 448 "data/maps/EltheCity/scripts.pory"
EltheCity_Movement_KeesightHops:
# 450 "data/maps/EltheCity/scripts.pory"
	jump_in_place_down
# 450 "data/maps/EltheCity/scripts.pory"
	jump_in_place_down
	step_end

# 453 "data/maps/EltheCity/scripts.pory"
EltheCity_Movement_MoveUmbrashard:
# 455 "data/maps/EltheCity/scripts.pory"
	levitate
# 456 "data/maps/EltheCity/scripts.pory"
	delay_16
# 457 "data/maps/EltheCity/scripts.pory"
	walk_up
# 457 "data/maps/EltheCity/scripts.pory"
	walk_up
# 457 "data/maps/EltheCity/scripts.pory"
	walk_up
# 458 "data/maps/EltheCity/scripts.pory"
	walk_right
# 458 "data/maps/EltheCity/scripts.pory"
	walk_right
# 458 "data/maps/EltheCity/scripts.pory"
	walk_right
# 458 "data/maps/EltheCity/scripts.pory"
	walk_right
# 458 "data/maps/EltheCity/scripts.pory"
	walk_right
# 458 "data/maps/EltheCity/scripts.pory"
	walk_right
# 458 "data/maps/EltheCity/scripts.pory"
	walk_right
# 458 "data/maps/EltheCity/scripts.pory"
	walk_right
# 459 "data/maps/EltheCity/scripts.pory"
	walk_up
# 460 "data/maps/EltheCity/scripts.pory"
	delay_16
# 461 "data/maps/EltheCity/scripts.pory"
	stop_levitate
	step_end

# 464 "data/maps/EltheCity/scripts.pory"
EltheCity_Movement_MoveEspershard:
# 466 "data/maps/EltheCity/scripts.pory"
	levitate
# 467 "data/maps/EltheCity/scripts.pory"
	delay_16
# 468 "data/maps/EltheCity/scripts.pory"
	walk_left
# 468 "data/maps/EltheCity/scripts.pory"
	walk_left
# 468 "data/maps/EltheCity/scripts.pory"
	walk_left
# 468 "data/maps/EltheCity/scripts.pory"
	walk_left
# 468 "data/maps/EltheCity/scripts.pory"
	walk_left
# 468 "data/maps/EltheCity/scripts.pory"
	walk_left
# 468 "data/maps/EltheCity/scripts.pory"
	walk_left
# 468 "data/maps/EltheCity/scripts.pory"
	walk_left
# 469 "data/maps/EltheCity/scripts.pory"
	walk_up
# 470 "data/maps/EltheCity/scripts.pory"
	delay_16
# 471 "data/maps/EltheCity/scripts.pory"
	stop_levitate
	step_end

# 474 "data/maps/EltheCity/scripts.pory"
EltheCity_Movement_JumpOnBenchLeft:
# 476 "data/maps/EltheCity/scripts.pory"
	lock_anim
# 477 "data/maps/EltheCity/scripts.pory"
	jump_in_place_left
	step_end

# 480 "data/maps/EltheCity/scripts.pory"
EltheCity_Movement_GetOffBenchLeft:
# 482 "data/maps/EltheCity/scripts.pory"
	unlock_anim
# 483 "data/maps/EltheCity/scripts.pory"
	walk_slow_left
	step_end

# 486 "data/maps/EltheCity/scripts.pory"
EltheCity_Movement_JumpOnBenchRight:
# 488 "data/maps/EltheCity/scripts.pory"
	lock_anim
# 489 "data/maps/EltheCity/scripts.pory"
	jump_in_place_right
	step_end

# 492 "data/maps/EltheCity/scripts.pory"
EltheCity_Movement_GetOffBenchRight:
# 494 "data/maps/EltheCity/scripts.pory"
	unlock_anim
# 495 "data/maps/EltheCity/scripts.pory"
	walk_slow_right
	step_end

# 498 "data/maps/EltheCity/scripts.pory"
EltheCity_Movement_MoveDownBench:
# 500 "data/maps/EltheCity/scripts.pory"
	walk_slow_down
	step_end

# 503 "data/maps/EltheCity/scripts.pory"
EltheCity_Movement_MoveUpBench:
# 505 "data/maps/EltheCity/scripts.pory"
	walk_slow_up
	step_end

Test_ScriptGetInput_Text_0:
# 49 "data/maps/EltheCity/scripts.pory"
	.string "Which button will you press?$"

EltheCity_Sign_InnLeft_Text_0:
# 74 "data/maps/EltheCity/scripts.pory"
	.string "Elysi Inn$"

EltheCity_Sign_InnRight_Text_0:
# 79 "data/maps/EltheCity/scripts.pory"
	.string "Amelia$"

EltheCity_Sign_InnRight_Text_1:
# 80 "data/maps/EltheCity/scripts.pory"
	.string "Phew, these room prices…I'm glad\n"
	.string "Pokémon Centers were free…\p"
	.string "Then again, not like I have any\n"
	.string "money anyway…$"

EltheCity_EventScript_Keesight_Text_0:
# 193 "data/maps/EltheCity/scripts.pory"
	.string "Keesight$"

EltheCity_EventScript_Keesight_Text_1:
# 194 "data/maps/EltheCity/scripts.pory"
	.string "… … … … …\n"
	.string "Thanks for the song.$"

EltheCity_EventScript_Keesight_Text_2:
# 198 "data/maps/EltheCity/scripts.pory"
	.string "Batmon$"

EltheCity_EventScript_Keesight_Text_3:
# 199 "data/maps/EltheCity/scripts.pory"
	.string "… … … … … … … … … …$"

EltheCity_EventScript_Keesight_Text_4:
# 201 "data/maps/EltheCity/scripts.pory"
	.string "The Pokémon is staring intently\n"
	.string "at the pond…$"
