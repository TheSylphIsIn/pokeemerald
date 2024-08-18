EltheCity_MapScripts::
# 15 "data/maps/EltheCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, EltheCity_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

EltheCity_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 16 "data/maps/EltheCity/scripts.pory"
	goto_if_set FLAG_SCALE_DESCENDING_DONE, EltheCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
EltheCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 20 "data/maps/EltheCity/scripts.pory"
	goto_if_set FLAG_SCALE_ASCENDING_DONE, EltheCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
EltheCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 25 "data/maps/EltheCity/scripts.pory"
	goto_if_unset FLAG_GOT_PYTHON, EltheCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_7
	return

EltheCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 18 "data/maps/EltheCity/scripts.pory"
	setobjectxyperm 11, 11, 21
	goto EltheCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

EltheCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_5:
# 22 "data/maps/EltheCity/scripts.pory"
	setobjectxyperm 10, 13, 21
	goto EltheCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_4

EltheCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_7:
# 27 "data/maps/EltheCity/scripts.pory"
	random 4
# 28 "data/maps/EltheCity/scripts.pory"
	copyvar VAR_RESULT, VAR_TEMP_F
# 29 "data/maps/EltheCity/scripts.pory"
	switch VAR_TEMP_F
# 31 "data/maps/EltheCity/scripts.pory"
	case 0, EltheCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_10
# 35 "data/maps/EltheCity/scripts.pory"
	case 1, EltheCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_11
# 39 "data/maps/EltheCity/scripts.pory"
	case 2, EltheCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_12
# 43 "data/maps/EltheCity/scripts.pory"
	case 3, EltheCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_13
	return

EltheCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_10:
# 32 "data/maps/EltheCity/scripts.pory"
	setobjectxyperm 2, 34, 7
# 33 "data/maps/EltheCity/scripts.pory"
	setobjectmovementtype 2, MOVEMENT_TYPE_FACE_LEFT
# 34 "data/maps/EltheCity/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_MAN_2
	return

EltheCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_11:
# 36 "data/maps/EltheCity/scripts.pory"
	setobjectxyperm 2, 29, 34
# 37 "data/maps/EltheCity/scripts.pory"
	setobjectmovementtype 2, MOVEMENT_TYPE_WANDER_LEFT_AND_RIGHT
# 38 "data/maps/EltheCity/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_MAN_5
	return

EltheCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_12:
# 40 "data/maps/EltheCity/scripts.pory"
	setobjectxyperm 2, 6, 26
# 41 "data/maps/EltheCity/scripts.pory"
	setobjectmovementtype 2, MOVEMENT_TYPE_LOOK_AROUND
# 42 "data/maps/EltheCity/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_SPECIES ( POLIWHIRL )
	return

EltheCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_13:
# 44 "data/maps/EltheCity/scripts.pory"
	setobjectxyperm 2, 28, 15
# 45 "data/maps/EltheCity/scripts.pory"
	setobjectmovementtype 2, MOVEMENT_TYPE_WANDER_DOWN_AND_UP
# 46 "data/maps/EltheCity/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_MAN_2
	return


ObjEventVarTest::
# 56 "data/maps/EltheCity/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_BRENDAN_NORMAL
# 57 "data/maps/EltheCity/scripts.pory"
	removeobject VAR_LAST_TALKED
# 58 "data/maps/EltheCity/scripts.pory"
	addobject VAR_LAST_TALKED
# 59 "data/maps/EltheCity/scripts.pory"
	waitbuttonpress
# 60 "data/maps/EltheCity/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_MAY_NORMAL
# 61 "data/maps/EltheCity/scripts.pory"
	removeobject VAR_LAST_TALKED
# 62 "data/maps/EltheCity/scripts.pory"
	addobject VAR_LAST_TALKED
# 63 "data/maps/EltheCity/scripts.pory"
	waitbuttonpress
# 64 "data/maps/EltheCity/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_ANABEL
# 65 "data/maps/EltheCity/scripts.pory"
	removeobject VAR_LAST_TALKED
# 66 "data/maps/EltheCity/scripts.pory"
	addobject VAR_LAST_TALKED
# 67 "data/maps/EltheCity/scripts.pory"
	waitbuttonpress
# 68 "data/maps/EltheCity/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_SPECIES ( ZOROARK )
# 69 "data/maps/EltheCity/scripts.pory"
	removeobject VAR_LAST_TALKED
# 70 "data/maps/EltheCity/scripts.pory"
	addobject VAR_LAST_TALKED
# 71 "data/maps/EltheCity/scripts.pory"
	waitbuttonpress
	return


Test_ScriptGetInput::
# 76 "data/maps/EltheCity/scripts.pory"
	lock
# 77 "data/maps/EltheCity/scripts.pory"
	message Test_ScriptGetInput_Text_0
# 78 "data/maps/EltheCity/scripts.pory"
	waitmessage
Test_ScriptGetInput_2:
# 80 "data/maps/EltheCity/scripts.pory"
	waitforscriptinput
# 81 "data/maps/EltheCity/scripts.pory"
	switch VAR_RESULT
# 83 "data/maps/EltheCity/scripts.pory"
	case 0x0020, Test_ScriptGetInput_5
# 86 "data/maps/EltheCity/scripts.pory"
	case 0x0010, Test_ScriptGetInput_6
# 89 "data/maps/EltheCity/scripts.pory"
	case 0x0080, Test_ScriptGetInput_7
# 92 "data/maps/EltheCity/scripts.pory"
	case 0x0040, Test_ScriptGetInput_8
	goto Test_ScriptGetInput_2

# 97 "data/maps/EltheCity/scripts.pory"
	release
	return

Test_ScriptGetInput_5:
# 84 "data/maps/EltheCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, StepLeft
# 85 "data/maps/EltheCity/scripts.pory"
	waitmovement 0
	goto Test_ScriptGetInput_2

Test_ScriptGetInput_6:
# 87 "data/maps/EltheCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, StepRight
# 88 "data/maps/EltheCity/scripts.pory"
	waitmovement 0
	goto Test_ScriptGetInput_2

Test_ScriptGetInput_7:
# 90 "data/maps/EltheCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, StepDown
# 91 "data/maps/EltheCity/scripts.pory"
	waitmovement 0
	goto Test_ScriptGetInput_2

Test_ScriptGetInput_8:
# 93 "data/maps/EltheCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, StepUp
# 94 "data/maps/EltheCity/scripts.pory"
	waitmovement 0
	goto Test_ScriptGetInput_2


EltheCity_Sign_InnLeft::
# 102 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_Sign_InnLeft_Text_0, MSGBOX_SIGN
	return


EltheCity_Sign_InnRight::
# 107 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_Sign_InnRight_Text_0, PORTRAIT_AMELIA_SERIOUSLY
# 108 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_Sign_InnRight_Text_1, MSGBOX_SIGN
	return


# 111 "data/maps/EltheCity/scripts.pory"
StepDown:
# 113 "data/maps/EltheCity/scripts.pory"
	walk_down
	step_end

# 116 "data/maps/EltheCity/scripts.pory"
StepUp:
# 118 "data/maps/EltheCity/scripts.pory"
	walk_up
	step_end

# 121 "data/maps/EltheCity/scripts.pory"
StepLeft:
# 123 "data/maps/EltheCity/scripts.pory"
	walk_left
	step_end

# 126 "data/maps/EltheCity/scripts.pory"
StepRight:
# 128 "data/maps/EltheCity/scripts.pory"
	walk_right
	step_end

EltheCity_Trigger_JumpOnBenchLeft_TopTile::
# 133 "data/maps/EltheCity/scripts.pory"
	setvar VAR_0x8004, ANIM_SIT_WEST
# 134 "data/maps/EltheCity/scripts.pory"
	callnative DoAmeliaOverworldAnim
# 135 "data/maps/EltheCity/scripts.pory"
	playse SE_BIKE_HOP
# 136 "data/maps/EltheCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, EltheCity_Movement_JumpOnBenchLeft
# 137 "data/maps/EltheCity/scripts.pory"
	waitmovement 0
# 138 "data/maps/EltheCity/scripts.pory"
	addobjectspriteoffset OBJ_EVENT_ID_PLAYER, 0, -6
EltheCity_Trigger_JumpOnBenchLeft_TopTile_3:
# 140 "data/maps/EltheCity/scripts.pory"
	waitforscriptinput
# 141 "data/maps/EltheCity/scripts.pory"
	switch VAR_RESULT
# 143 "data/maps/EltheCity/scripts.pory"
	case 0x0020, EltheCity_Trigger_JumpOnBenchLeft_TopTile_10
# 144 "data/maps/EltheCity/scripts.pory"
	case 0x0001, EltheCity_Trigger_JumpOnBenchLeft_TopTile_10
# 145 "data/maps/EltheCity/scripts.pory"
	case 0x0002, EltheCity_Trigger_JumpOnBenchLeft_TopTile_10
EltheCity_Trigger_JumpOnBenchLeft_TopTile_2:
# 165 "data/maps/EltheCity/scripts.pory"
	compare VAR_RESULT, 0x0020
	goto_if_ne EltheCity_Trigger_JumpOnBenchLeft_TopTile_5
EltheCity_Trigger_JumpOnBenchLeft_TopTile_1:
# 166 "data/maps/EltheCity/scripts.pory"
	release
	return

EltheCity_Trigger_JumpOnBenchLeft_TopTile_4:
# 165 "data/maps/EltheCity/scripts.pory"
	compare VAR_RESULT, 0x0002
	goto_if_ne EltheCity_Trigger_JumpOnBenchLeft_TopTile_3
	goto EltheCity_Trigger_JumpOnBenchLeft_TopTile_1

EltheCity_Trigger_JumpOnBenchLeft_TopTile_5:
# 165 "data/maps/EltheCity/scripts.pory"
	compare VAR_RESULT, 0x0001
	goto_if_ne EltheCity_Trigger_JumpOnBenchLeft_TopTile_4
	goto EltheCity_Trigger_JumpOnBenchLeft_TopTile_1

EltheCity_Trigger_JumpOnBenchLeft_TopTile_10:
# 146 "data/maps/EltheCity/scripts.pory"
	resetobjectspriteoffset OBJ_EVENT_ID_PLAYER
# 147 "data/maps/EltheCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, EltheCity_Movement_GetOffBenchLeft
# 148 "data/maps/EltheCity/scripts.pory"
	waitmovement 0
	goto EltheCity_Trigger_JumpOnBenchLeft_TopTile_2


EltheCity_Trigger_JumpOnBenchLeft_BottomTile::
# 171 "data/maps/EltheCity/scripts.pory"
	goto EltheCity_Trigger_JumpOnBenchLeft_TopTile
	return


EltheCity_Trigger_JumpOnBenchRight_TopTile::
# 176 "data/maps/EltheCity/scripts.pory"
	setvar VAR_0x8004, ANIM_SIT_EAST
# 177 "data/maps/EltheCity/scripts.pory"
	callnative DoAmeliaOverworldAnim
# 178 "data/maps/EltheCity/scripts.pory"
	playse SE_BIKE_HOP
# 179 "data/maps/EltheCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, EltheCity_Movement_JumpOnBenchRight
# 180 "data/maps/EltheCity/scripts.pory"
	waitmovement 0
# 181 "data/maps/EltheCity/scripts.pory"
	addobjectspriteoffset OBJ_EVENT_ID_PLAYER, 0, -6
EltheCity_Trigger_JumpOnBenchRight_TopTile_3:
# 183 "data/maps/EltheCity/scripts.pory"
	waitforscriptinput
# 184 "data/maps/EltheCity/scripts.pory"
	switch VAR_RESULT
# 186 "data/maps/EltheCity/scripts.pory"
	case 0x0010, EltheCity_Trigger_JumpOnBenchRight_TopTile_10
# 187 "data/maps/EltheCity/scripts.pory"
	case 0x0001, EltheCity_Trigger_JumpOnBenchRight_TopTile_10
# 188 "data/maps/EltheCity/scripts.pory"
	case 0x0002, EltheCity_Trigger_JumpOnBenchRight_TopTile_10
EltheCity_Trigger_JumpOnBenchRight_TopTile_2:
# 208 "data/maps/EltheCity/scripts.pory"
	compare VAR_RESULT, 0x0010
	goto_if_ne EltheCity_Trigger_JumpOnBenchRight_TopTile_5
EltheCity_Trigger_JumpOnBenchRight_TopTile_1:
# 209 "data/maps/EltheCity/scripts.pory"
	release
	return

EltheCity_Trigger_JumpOnBenchRight_TopTile_4:
# 208 "data/maps/EltheCity/scripts.pory"
	compare VAR_RESULT, 0x0002
	goto_if_ne EltheCity_Trigger_JumpOnBenchRight_TopTile_3
	goto EltheCity_Trigger_JumpOnBenchRight_TopTile_1

EltheCity_Trigger_JumpOnBenchRight_TopTile_5:
# 208 "data/maps/EltheCity/scripts.pory"
	compare VAR_RESULT, 0x0001
	goto_if_ne EltheCity_Trigger_JumpOnBenchRight_TopTile_4
	goto EltheCity_Trigger_JumpOnBenchRight_TopTile_1

EltheCity_Trigger_JumpOnBenchRight_TopTile_10:
# 189 "data/maps/EltheCity/scripts.pory"
	resetobjectspriteoffset OBJ_EVENT_ID_PLAYER
# 190 "data/maps/EltheCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, EltheCity_Movement_GetOffBenchRight
# 191 "data/maps/EltheCity/scripts.pory"
	waitmovement 0
	goto EltheCity_Trigger_JumpOnBenchRight_TopTile_2


EltheCity_Trigger_JumpOnBenchRight_BottomTile::
# 214 "data/maps/EltheCity/scripts.pory"
	goto EltheCity_Trigger_JumpOnBenchRight_TopTile
	return


EltheCity_EventScript_Keesight::
# 219 "data/maps/EltheCity/scripts.pory"
	goto_if_set FLAG_SCALE_ASCENDING_DONE, EltheCity_EventScript_Keesight_3
EltheCity_EventScript_Keesight_2:
# 226 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_EventScript_Keesight_Text_2, PORTRAIT_KEESIGHT
# 227 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_EventScript_Keesight_Text_3
# 228 "data/maps/EltheCity/scripts.pory"
	speakername NULL, 0
# 229 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_EventScript_Keesight_Text_4, MSGBOX_AUTOCLOSE
	return

EltheCity_EventScript_Keesight_1:
# 221 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_EventScript_Keesight_Text_0, PORTRAIT_KEESIGHT
# 222 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_EventScript_Keesight_Text_1, MSGBOX_NPC
	return

EltheCity_EventScript_Keesight_3:
# 219 "data/maps/EltheCity/scripts.pory"
	goto_if_set FLAG_SCALE_DESCENDING_DONE, EltheCity_EventScript_Keesight_1
	goto EltheCity_EventScript_Keesight_2


EltheCity_Trigger_MusicStump1::
# 235 "data/maps/EltheCity/scripts.pory"
	playse SE_NOTE_C
# 236 "data/maps/EltheCity/scripts.pory"
	turnobject 9, DIR_WEST
# 239 "data/maps/EltheCity/scripts.pory"
	compare VAR_TEMP_2, 7
	goto_if_eq EltheCity_Trigger_MusicStump1_4
EltheCity_Trigger_MusicStump1_3:
# 263 "data/maps/EltheCity/scripts.pory"
	setvar VAR_TEMP_2, 0
# 264 "data/maps/EltheCity/scripts.pory"
	setvar VAR_TEMP_1, 1
EltheCity_Trigger_MusicStump1_1:
# 267 "data/maps/EltheCity/scripts.pory"
	release
	return

EltheCity_Trigger_MusicStump1_2:
# 241 "data/maps/EltheCity/scripts.pory"
	delay 60
# 242 "data/maps/EltheCity/scripts.pory"
	applymovement 9, EltheCity_Movement_KeesightHops
# 243 "data/maps/EltheCity/scripts.pory"
	playse SE_BIKE_HOP
# 244 "data/maps/EltheCity/scripts.pory"
	delay 16
# 245 "data/maps/EltheCity/scripts.pory"
	playse SE_BIKE_HOP
# 246 "data/maps/EltheCity/scripts.pory"
	delay 32
# 247 "data/maps/EltheCity/scripts.pory"
	playmoncry SPECIES_WOOBAT, CRY_MODE_NORMAL
# 248 "data/maps/EltheCity/scripts.pory"
	waitmoncry
# 249 "data/maps/EltheCity/scripts.pory"
	delay 30
# 250 "data/maps/EltheCity/scripts.pory"
	applymovement 9, Common_Movement_FaceUp
# 251 "data/maps/EltheCity/scripts.pory"
	waitmovement 0
# 252 "data/maps/EltheCity/scripts.pory"
	delay 16
# 253 "data/maps/EltheCity/scripts.pory"
	playse SE_M_SUPERSONIC
# 254 "data/maps/EltheCity/scripts.pory"
	applymovement 11, EltheCity_Movement_MoveUmbrashard
# 255 "data/maps/EltheCity/scripts.pory"
	waitmovement 0
# 256 "data/maps/EltheCity/scripts.pory"
	applymovement 9, Common_Movement_FaceDown
# 257 "data/maps/EltheCity/scripts.pory"
	waitmovement 0
# 258 "data/maps/EltheCity/scripts.pory"
	setobjectxyperm 11, 11, 21
# 259 "data/maps/EltheCity/scripts.pory"
	setflag FLAG_SCALE_DESCENDING_DONE
	goto EltheCity_Trigger_MusicStump1_1

EltheCity_Trigger_MusicStump1_4:
# 239 "data/maps/EltheCity/scripts.pory"
	goto_if_unset FLAG_SCALE_DESCENDING_DONE, EltheCity_Trigger_MusicStump1_2
	goto EltheCity_Trigger_MusicStump1_3


EltheCity_Trigger_MusicStump2::
# 272 "data/maps/EltheCity/scripts.pory"
	playse SE_NOTE_D
# 273 "data/maps/EltheCity/scripts.pory"
	turnobject 9, DIR_WEST
# 276 "data/maps/EltheCity/scripts.pory"
	compare VAR_TEMP_1, 1
	goto_if_eq EltheCity_Trigger_MusicStump2_2
# 282 "data/maps/EltheCity/scripts.pory"
	setvar VAR_TEMP_1, 0
EltheCity_Trigger_MusicStump2_1:
# 286 "data/maps/EltheCity/scripts.pory"
	compare VAR_TEMP_2, 6
	goto_if_eq EltheCity_Trigger_MusicStump2_6
# 292 "data/maps/EltheCity/scripts.pory"
	setvar VAR_TEMP_2, 0
EltheCity_Trigger_MusicStump2_5:
# 295 "data/maps/EltheCity/scripts.pory"
	release
	return

EltheCity_Trigger_MusicStump2_2:
# 278 "data/maps/EltheCity/scripts.pory"
	addvar VAR_TEMP_1, 1
	goto EltheCity_Trigger_MusicStump2_1

EltheCity_Trigger_MusicStump2_6:
# 288 "data/maps/EltheCity/scripts.pory"
	addvar VAR_TEMP_2, 1
	goto EltheCity_Trigger_MusicStump2_5


EltheCity_Trigger_MusicStump3::
# 300 "data/maps/EltheCity/scripts.pory"
	playse SE_NOTE_E
# 301 "data/maps/EltheCity/scripts.pory"
	turnobject 9, DIR_WEST
# 304 "data/maps/EltheCity/scripts.pory"
	compare VAR_TEMP_1, 2
	goto_if_eq EltheCity_Trigger_MusicStump3_2
# 310 "data/maps/EltheCity/scripts.pory"
	setvar VAR_TEMP_1, 0
EltheCity_Trigger_MusicStump3_1:
# 314 "data/maps/EltheCity/scripts.pory"
	compare VAR_TEMP_2, 5
	goto_if_eq EltheCity_Trigger_MusicStump3_6
# 320 "data/maps/EltheCity/scripts.pory"
	setvar VAR_TEMP_2, 0
EltheCity_Trigger_MusicStump3_5:
# 323 "data/maps/EltheCity/scripts.pory"
	release
	return

EltheCity_Trigger_MusicStump3_2:
# 306 "data/maps/EltheCity/scripts.pory"
	addvar VAR_TEMP_1, 1
	goto EltheCity_Trigger_MusicStump3_1

EltheCity_Trigger_MusicStump3_6:
# 316 "data/maps/EltheCity/scripts.pory"
	addvar VAR_TEMP_2, 1
	goto EltheCity_Trigger_MusicStump3_5


EltheCity_Trigger_MusicStump4::
# 328 "data/maps/EltheCity/scripts.pory"
	playse SE_NOTE_F
# 329 "data/maps/EltheCity/scripts.pory"
	turnobject 9, DIR_SOUTH
# 332 "data/maps/EltheCity/scripts.pory"
	compare VAR_TEMP_1, 3
	goto_if_eq EltheCity_Trigger_MusicStump4_2
# 338 "data/maps/EltheCity/scripts.pory"
	setvar VAR_TEMP_1, 0
EltheCity_Trigger_MusicStump4_1:
# 342 "data/maps/EltheCity/scripts.pory"
	compare VAR_TEMP_2, 4
	goto_if_eq EltheCity_Trigger_MusicStump4_6
# 348 "data/maps/EltheCity/scripts.pory"
	setvar VAR_TEMP_2, 0
EltheCity_Trigger_MusicStump4_5:
# 351 "data/maps/EltheCity/scripts.pory"
	release
	return

EltheCity_Trigger_MusicStump4_2:
# 334 "data/maps/EltheCity/scripts.pory"
	addvar VAR_TEMP_1, 1
	goto EltheCity_Trigger_MusicStump4_1

EltheCity_Trigger_MusicStump4_6:
# 344 "data/maps/EltheCity/scripts.pory"
	addvar VAR_TEMP_2, 1
	goto EltheCity_Trigger_MusicStump4_5


EltheCity_Trigger_MusicStump5::
# 356 "data/maps/EltheCity/scripts.pory"
	playse SE_NOTE_G
# 357 "data/maps/EltheCity/scripts.pory"
	turnobject 9, DIR_SOUTH
# 360 "data/maps/EltheCity/scripts.pory"
	compare VAR_TEMP_1, 4
	goto_if_eq EltheCity_Trigger_MusicStump5_2
# 366 "data/maps/EltheCity/scripts.pory"
	setvar VAR_TEMP_1, 0
EltheCity_Trigger_MusicStump5_1:
# 370 "data/maps/EltheCity/scripts.pory"
	compare VAR_TEMP_2, 3
	goto_if_eq EltheCity_Trigger_MusicStump5_6
# 376 "data/maps/EltheCity/scripts.pory"
	setvar VAR_TEMP_2, 0
EltheCity_Trigger_MusicStump5_5:
# 379 "data/maps/EltheCity/scripts.pory"
	release
	return

EltheCity_Trigger_MusicStump5_2:
# 362 "data/maps/EltheCity/scripts.pory"
	addvar VAR_TEMP_1, 1
	goto EltheCity_Trigger_MusicStump5_1

EltheCity_Trigger_MusicStump5_6:
# 372 "data/maps/EltheCity/scripts.pory"
	addvar VAR_TEMP_2, 1
	goto EltheCity_Trigger_MusicStump5_5


EltheCity_Trigger_MusicStump6::
# 384 "data/maps/EltheCity/scripts.pory"
	playse SE_NOTE_A
# 385 "data/maps/EltheCity/scripts.pory"
	turnobject 9, DIR_EAST
# 388 "data/maps/EltheCity/scripts.pory"
	compare VAR_TEMP_1, 5
	goto_if_eq EltheCity_Trigger_MusicStump6_2
# 394 "data/maps/EltheCity/scripts.pory"
	setvar VAR_TEMP_1, 0
EltheCity_Trigger_MusicStump6_1:
# 398 "data/maps/EltheCity/scripts.pory"
	compare VAR_TEMP_2, 2
	goto_if_eq EltheCity_Trigger_MusicStump6_6
# 404 "data/maps/EltheCity/scripts.pory"
	setvar VAR_TEMP_2, 0
EltheCity_Trigger_MusicStump6_5:
# 407 "data/maps/EltheCity/scripts.pory"
	release
	return

EltheCity_Trigger_MusicStump6_2:
# 390 "data/maps/EltheCity/scripts.pory"
	addvar VAR_TEMP_1, 1
	goto EltheCity_Trigger_MusicStump6_1

EltheCity_Trigger_MusicStump6_6:
# 400 "data/maps/EltheCity/scripts.pory"
	addvar VAR_TEMP_2, 1
	goto EltheCity_Trigger_MusicStump6_5


EltheCity_Trigger_MusicStump7::
# 412 "data/maps/EltheCity/scripts.pory"
	playse SE_NOTE_B
# 413 "data/maps/EltheCity/scripts.pory"
	turnobject 9, DIR_EAST
# 416 "data/maps/EltheCity/scripts.pory"
	compare VAR_TEMP_1, 6
	goto_if_eq EltheCity_Trigger_MusicStump7_2
# 422 "data/maps/EltheCity/scripts.pory"
	setvar VAR_TEMP_1, 0
EltheCity_Trigger_MusicStump7_1:
# 426 "data/maps/EltheCity/scripts.pory"
	compare VAR_TEMP_2, 1
	goto_if_eq EltheCity_Trigger_MusicStump7_6
# 432 "data/maps/EltheCity/scripts.pory"
	setvar VAR_TEMP_2, 0
EltheCity_Trigger_MusicStump7_5:
# 435 "data/maps/EltheCity/scripts.pory"
	release
	return

EltheCity_Trigger_MusicStump7_2:
# 418 "data/maps/EltheCity/scripts.pory"
	addvar VAR_TEMP_1, 1
	goto EltheCity_Trigger_MusicStump7_1

EltheCity_Trigger_MusicStump7_6:
# 428 "data/maps/EltheCity/scripts.pory"
	addvar VAR_TEMP_2, 1
	goto EltheCity_Trigger_MusicStump7_5


EltheCity_Trigger_MusicStump8::
# 440 "data/maps/EltheCity/scripts.pory"
	playse SE_NOTE_C_HIGH
# 441 "data/maps/EltheCity/scripts.pory"
	turnobject 9, DIR_EAST
# 445 "data/maps/EltheCity/scripts.pory"
	compare VAR_TEMP_1, 7
	goto_if_eq EltheCity_Trigger_MusicStump8_4
EltheCity_Trigger_MusicStump8_3:
# 469 "data/maps/EltheCity/scripts.pory"
	setvar VAR_TEMP_1, 0
# 470 "data/maps/EltheCity/scripts.pory"
	setvar VAR_TEMP_2, 1
EltheCity_Trigger_MusicStump8_1:
# 473 "data/maps/EltheCity/scripts.pory"
	release
	return

EltheCity_Trigger_MusicStump8_2:
# 447 "data/maps/EltheCity/scripts.pory"
	delay 60
# 448 "data/maps/EltheCity/scripts.pory"
	applymovement 9, EltheCity_Movement_KeesightHops
# 449 "data/maps/EltheCity/scripts.pory"
	playse SE_BIKE_HOP
# 450 "data/maps/EltheCity/scripts.pory"
	delay 16
# 451 "data/maps/EltheCity/scripts.pory"
	playse SE_BIKE_HOP
# 452 "data/maps/EltheCity/scripts.pory"
	delay 32
# 453 "data/maps/EltheCity/scripts.pory"
	playmoncry SPECIES_WOOBAT, CRY_MODE_NORMAL
# 454 "data/maps/EltheCity/scripts.pory"
	waitmoncry
# 455 "data/maps/EltheCity/scripts.pory"
	delay 30
# 456 "data/maps/EltheCity/scripts.pory"
	applymovement 9, Common_Movement_FaceUp
# 457 "data/maps/EltheCity/scripts.pory"
	waitmovement 0
# 458 "data/maps/EltheCity/scripts.pory"
	delay 16
# 459 "data/maps/EltheCity/scripts.pory"
	playse SE_M_SUPERSONIC
# 460 "data/maps/EltheCity/scripts.pory"
	applymovement 10, EltheCity_Movement_MoveEspershard
# 461 "data/maps/EltheCity/scripts.pory"
	waitmovement 0
# 462 "data/maps/EltheCity/scripts.pory"
	applymovement 9, Common_Movement_FaceDown
# 463 "data/maps/EltheCity/scripts.pory"
	waitmovement 0
# 464 "data/maps/EltheCity/scripts.pory"
	setobjectxyperm 10, 13, 21
# 465 "data/maps/EltheCity/scripts.pory"
	setflag FLAG_SCALE_ASCENDING_DONE
	goto EltheCity_Trigger_MusicStump8_1

EltheCity_Trigger_MusicStump8_4:
# 445 "data/maps/EltheCity/scripts.pory"
	goto_if_unset FLAG_SCALE_ASCENDING_DONE, EltheCity_Trigger_MusicStump8_2
	goto EltheCity_Trigger_MusicStump8_3


# 482 "data/maps/EltheCity/scripts.pory"
EltheCity_Movement_KeesightHops:
# 484 "data/maps/EltheCity/scripts.pory"
	jump_in_place_down
# 484 "data/maps/EltheCity/scripts.pory"
	jump_in_place_down
	step_end

# 487 "data/maps/EltheCity/scripts.pory"
EltheCity_Movement_MoveUmbrashard:
# 489 "data/maps/EltheCity/scripts.pory"
	levitate
# 490 "data/maps/EltheCity/scripts.pory"
	delay_16
# 491 "data/maps/EltheCity/scripts.pory"
	walk_up
# 491 "data/maps/EltheCity/scripts.pory"
	walk_up
# 491 "data/maps/EltheCity/scripts.pory"
	walk_up
# 492 "data/maps/EltheCity/scripts.pory"
	walk_right
# 492 "data/maps/EltheCity/scripts.pory"
	walk_right
# 492 "data/maps/EltheCity/scripts.pory"
	walk_right
# 492 "data/maps/EltheCity/scripts.pory"
	walk_right
# 492 "data/maps/EltheCity/scripts.pory"
	walk_right
# 492 "data/maps/EltheCity/scripts.pory"
	walk_right
# 492 "data/maps/EltheCity/scripts.pory"
	walk_right
# 492 "data/maps/EltheCity/scripts.pory"
	walk_right
# 493 "data/maps/EltheCity/scripts.pory"
	walk_up
# 494 "data/maps/EltheCity/scripts.pory"
	delay_16
# 495 "data/maps/EltheCity/scripts.pory"
	stop_levitate
	step_end

# 498 "data/maps/EltheCity/scripts.pory"
EltheCity_Movement_MoveEspershard:
# 500 "data/maps/EltheCity/scripts.pory"
	levitate
# 501 "data/maps/EltheCity/scripts.pory"
	delay_16
# 502 "data/maps/EltheCity/scripts.pory"
	walk_left
# 502 "data/maps/EltheCity/scripts.pory"
	walk_left
# 502 "data/maps/EltheCity/scripts.pory"
	walk_left
# 502 "data/maps/EltheCity/scripts.pory"
	walk_left
# 502 "data/maps/EltheCity/scripts.pory"
	walk_left
# 502 "data/maps/EltheCity/scripts.pory"
	walk_left
# 502 "data/maps/EltheCity/scripts.pory"
	walk_left
# 502 "data/maps/EltheCity/scripts.pory"
	walk_left
# 503 "data/maps/EltheCity/scripts.pory"
	walk_up
# 504 "data/maps/EltheCity/scripts.pory"
	delay_16
# 505 "data/maps/EltheCity/scripts.pory"
	stop_levitate
	step_end

# 508 "data/maps/EltheCity/scripts.pory"
EltheCity_Movement_JumpOnBenchLeft:
# 510 "data/maps/EltheCity/scripts.pory"
	lock_anim
# 511 "data/maps/EltheCity/scripts.pory"
	jump_in_place_left
	step_end

# 514 "data/maps/EltheCity/scripts.pory"
EltheCity_Movement_GetOffBenchLeft:
# 516 "data/maps/EltheCity/scripts.pory"
	unlock_anim
# 517 "data/maps/EltheCity/scripts.pory"
	walk_slow_left
	step_end

# 520 "data/maps/EltheCity/scripts.pory"
EltheCity_Movement_JumpOnBenchRight:
# 522 "data/maps/EltheCity/scripts.pory"
	lock_anim
# 523 "data/maps/EltheCity/scripts.pory"
	jump_in_place_right
	step_end

# 526 "data/maps/EltheCity/scripts.pory"
EltheCity_Movement_GetOffBenchRight:
# 528 "data/maps/EltheCity/scripts.pory"
	unlock_anim
# 529 "data/maps/EltheCity/scripts.pory"
	walk_slow_right
	step_end

# 532 "data/maps/EltheCity/scripts.pory"
EltheCity_Movement_MoveDownBench:
# 534 "data/maps/EltheCity/scripts.pory"
	walk_slow_down
	step_end

# 537 "data/maps/EltheCity/scripts.pory"
EltheCity_Movement_MoveUpBench:
# 539 "data/maps/EltheCity/scripts.pory"
	walk_slow_up
	step_end

Test_ScriptGetInput_Text_0:
# 77 "data/maps/EltheCity/scripts.pory"
	.string "Which button will you press?$"

EltheCity_Sign_InnLeft_Text_0:
# 102 "data/maps/EltheCity/scripts.pory"
	.string "Elysi Inn$"

EltheCity_Sign_InnRight_Text_0:
# 107 "data/maps/EltheCity/scripts.pory"
	.string "Amelia$"

EltheCity_Sign_InnRight_Text_1:
# 108 "data/maps/EltheCity/scripts.pory"
	.string "Phew, these room prices…I'm glad\n"
	.string "Pokémon Centers were free…\p"
	.string "Then again, not like I have any\n"
	.string "money anyway…$"

EltheCity_EventScript_Keesight_Text_0:
# 221 "data/maps/EltheCity/scripts.pory"
	.string "Keesight$"

EltheCity_EventScript_Keesight_Text_1:
# 222 "data/maps/EltheCity/scripts.pory"
	.string "… … … … …\n"
	.string "Thanks for the song.$"

EltheCity_EventScript_Keesight_Text_2:
# 226 "data/maps/EltheCity/scripts.pory"
	.string "Batmon$"

EltheCity_EventScript_Keesight_Text_3:
# 227 "data/maps/EltheCity/scripts.pory"
	.string "… … … … … … … … … …$"

EltheCity_EventScript_Keesight_Text_4:
# 229 "data/maps/EltheCity/scripts.pory"
	.string "The Pokémon is staring intently\n"
	.string "at the pond…$"
