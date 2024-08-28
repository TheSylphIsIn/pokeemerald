EltheCity_MapScripts::
# 16 "data/maps/EltheCity/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, EltheCity_MapScripts_MAP_SCRIPT_ON_LOAD
# 26 "data/maps/EltheCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, EltheCity_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

EltheCity_MapScripts_MAP_SCRIPT_ON_LOAD:
# 18 "data/maps/EltheCity/scripts.pory"
	goto_if_set FLAG_STARTED_WEATHERBANE_QUEST, EltheCity_MapScripts_MAP_SCRIPT_ON_LOAD_1
	return

EltheCity_MapScripts_MAP_SCRIPT_ON_LOAD_1:
# 20 "data/maps/EltheCity/scripts.pory"
	setmetatile 5, 31, 0x387, FALSE
# 21 "data/maps/EltheCity/scripts.pory"
	setmetatile 5, 30, 0x37F, FALSE
# 22 "data/maps/EltheCity/scripts.pory"
	setmetatile 5, 29, 0x377, FALSE
# 23 "data/maps/EltheCity/scripts.pory"
	setmetatile 5, 28, 0x36F, FALSE
	return

EltheCity_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 27 "data/maps/EltheCity/scripts.pory"
	goto_if_set FLAG_SCALE_DESCENDING_DONE, EltheCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
EltheCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 31 "data/maps/EltheCity/scripts.pory"
	goto_if_set FLAG_SCALE_ASCENDING_DONE, EltheCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
EltheCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 36 "data/maps/EltheCity/scripts.pory"
	goto_if_unset FLAG_GOT_PYTHON, EltheCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_7
	return

EltheCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 29 "data/maps/EltheCity/scripts.pory"
	setobjectxyperm 11, 11, 21
	goto EltheCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

EltheCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_5:
# 33 "data/maps/EltheCity/scripts.pory"
	setobjectxyperm 10, 13, 21
	goto EltheCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_4

EltheCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_7:
# 38 "data/maps/EltheCity/scripts.pory"
	random 4
# 39 "data/maps/EltheCity/scripts.pory"
	copyvar VAR_RESULT, VAR_TEMP_F
# 40 "data/maps/EltheCity/scripts.pory"
	switch VAR_TEMP_F
# 42 "data/maps/EltheCity/scripts.pory"
	case 0, EltheCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_10
# 46 "data/maps/EltheCity/scripts.pory"
	case 1, EltheCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_11
# 50 "data/maps/EltheCity/scripts.pory"
	case 2, EltheCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_12
# 54 "data/maps/EltheCity/scripts.pory"
	case 3, EltheCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_13
	return

EltheCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_10:
# 43 "data/maps/EltheCity/scripts.pory"
	setobjectxyperm 2, 34, 7
# 44 "data/maps/EltheCity/scripts.pory"
	setobjectmovementtype 2, MOVEMENT_TYPE_FACE_LEFT
# 45 "data/maps/EltheCity/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_MAN_2
	return

EltheCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_11:
# 47 "data/maps/EltheCity/scripts.pory"
	setobjectxyperm 2, 29, 34
# 48 "data/maps/EltheCity/scripts.pory"
	setobjectmovementtype 2, MOVEMENT_TYPE_WANDER_LEFT_AND_RIGHT
# 49 "data/maps/EltheCity/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_MAN_5
	return

EltheCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_12:
# 51 "data/maps/EltheCity/scripts.pory"
	setobjectxyperm 2, 6, 26
# 52 "data/maps/EltheCity/scripts.pory"
	setobjectmovementtype 2, MOVEMENT_TYPE_LOOK_AROUND
# 53 "data/maps/EltheCity/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_SPECIES ( POLIWHIRL )
	return

EltheCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_13:
# 55 "data/maps/EltheCity/scripts.pory"
	setobjectxyperm 2, 28, 15
# 56 "data/maps/EltheCity/scripts.pory"
	setobjectmovementtype 2, MOVEMENT_TYPE_WANDER_DOWN_AND_UP
# 57 "data/maps/EltheCity/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_MAN_2
	return


ObjEventVarTest::
# 67 "data/maps/EltheCity/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_BRENDAN_NORMAL
# 68 "data/maps/EltheCity/scripts.pory"
	removeobject VAR_LAST_TALKED
# 69 "data/maps/EltheCity/scripts.pory"
	addobject VAR_LAST_TALKED
# 70 "data/maps/EltheCity/scripts.pory"
	waitbuttonpress
# 71 "data/maps/EltheCity/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_MAY_NORMAL
# 72 "data/maps/EltheCity/scripts.pory"
	removeobject VAR_LAST_TALKED
# 73 "data/maps/EltheCity/scripts.pory"
	addobject VAR_LAST_TALKED
# 74 "data/maps/EltheCity/scripts.pory"
	waitbuttonpress
# 75 "data/maps/EltheCity/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_ANABEL
# 76 "data/maps/EltheCity/scripts.pory"
	removeobject VAR_LAST_TALKED
# 77 "data/maps/EltheCity/scripts.pory"
	addobject VAR_LAST_TALKED
# 78 "data/maps/EltheCity/scripts.pory"
	waitbuttonpress
# 79 "data/maps/EltheCity/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_SPECIES ( ZOROARK )
# 80 "data/maps/EltheCity/scripts.pory"
	removeobject VAR_LAST_TALKED
# 81 "data/maps/EltheCity/scripts.pory"
	addobject VAR_LAST_TALKED
# 82 "data/maps/EltheCity/scripts.pory"
	waitbuttonpress
	return


Test_ScriptGetInput::
# 87 "data/maps/EltheCity/scripts.pory"
	lock
# 88 "data/maps/EltheCity/scripts.pory"
	message Test_ScriptGetInput_Text_0
# 89 "data/maps/EltheCity/scripts.pory"
	waitmessage
Test_ScriptGetInput_2:
# 91 "data/maps/EltheCity/scripts.pory"
	waitforscriptinput
# 92 "data/maps/EltheCity/scripts.pory"
	switch VAR_RESULT
# 94 "data/maps/EltheCity/scripts.pory"
	case 0x0020, Test_ScriptGetInput_5
# 97 "data/maps/EltheCity/scripts.pory"
	case 0x0010, Test_ScriptGetInput_6
# 100 "data/maps/EltheCity/scripts.pory"
	case 0x0080, Test_ScriptGetInput_7
# 103 "data/maps/EltheCity/scripts.pory"
	case 0x0040, Test_ScriptGetInput_8
	goto Test_ScriptGetInput_2

# 108 "data/maps/EltheCity/scripts.pory"
	release
	return

Test_ScriptGetInput_5:
# 95 "data/maps/EltheCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, StepLeft
# 96 "data/maps/EltheCity/scripts.pory"
	waitmovement 0
	goto Test_ScriptGetInput_2

Test_ScriptGetInput_6:
# 98 "data/maps/EltheCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, StepRight
# 99 "data/maps/EltheCity/scripts.pory"
	waitmovement 0
	goto Test_ScriptGetInput_2

Test_ScriptGetInput_7:
# 101 "data/maps/EltheCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, StepDown
# 102 "data/maps/EltheCity/scripts.pory"
	waitmovement 0
	goto Test_ScriptGetInput_2

Test_ScriptGetInput_8:
# 104 "data/maps/EltheCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, StepUp
# 105 "data/maps/EltheCity/scripts.pory"
	waitmovement 0
	goto Test_ScriptGetInput_2


EltheCity_Sign_InnLeft::
# 113 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_Sign_InnLeft_Text_0, MSGBOX_SIGN
	return


EltheCity_Sign_InnRight::
# 118 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_Sign_InnRight_Text_0, PORTRAIT_AMELIA_SERIOUSLY
# 119 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_Sign_InnRight_Text_1, MSGBOX_SIGN
	return


# 122 "data/maps/EltheCity/scripts.pory"
StepDown:
# 124 "data/maps/EltheCity/scripts.pory"
	walk_down
	step_end

# 127 "data/maps/EltheCity/scripts.pory"
StepUp:
# 129 "data/maps/EltheCity/scripts.pory"
	walk_up
	step_end

# 132 "data/maps/EltheCity/scripts.pory"
StepLeft:
# 134 "data/maps/EltheCity/scripts.pory"
	walk_left
	step_end

# 137 "data/maps/EltheCity/scripts.pory"
StepRight:
# 139 "data/maps/EltheCity/scripts.pory"
	walk_right
	step_end

EltheCity_Trigger_JumpOnBenchLeft_TopTile::
# 144 "data/maps/EltheCity/scripts.pory"
	setvar VAR_0x8004, ANIM_SIT_WEST
# 145 "data/maps/EltheCity/scripts.pory"
	callnative DoAmeliaOverworldAnim
# 146 "data/maps/EltheCity/scripts.pory"
	playse SE_BIKE_HOP
# 147 "data/maps/EltheCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, EltheCity_Movement_JumpOnBenchLeft
# 148 "data/maps/EltheCity/scripts.pory"
	waitmovement 0
# 149 "data/maps/EltheCity/scripts.pory"
	addobjectspriteoffset OBJ_EVENT_ID_PLAYER, 0, -6
EltheCity_Trigger_JumpOnBenchLeft_TopTile_3:
# 151 "data/maps/EltheCity/scripts.pory"
	waitforscriptinput
# 152 "data/maps/EltheCity/scripts.pory"
	switch VAR_RESULT
# 154 "data/maps/EltheCity/scripts.pory"
	case 0x0020, EltheCity_Trigger_JumpOnBenchLeft_TopTile_10
# 155 "data/maps/EltheCity/scripts.pory"
	case 0x0001, EltheCity_Trigger_JumpOnBenchLeft_TopTile_10
# 156 "data/maps/EltheCity/scripts.pory"
	case 0x0002, EltheCity_Trigger_JumpOnBenchLeft_TopTile_10
EltheCity_Trigger_JumpOnBenchLeft_TopTile_2:
# 176 "data/maps/EltheCity/scripts.pory"
	compare VAR_RESULT, 0x0020
	goto_if_ne EltheCity_Trigger_JumpOnBenchLeft_TopTile_5
EltheCity_Trigger_JumpOnBenchLeft_TopTile_1:
# 177 "data/maps/EltheCity/scripts.pory"
	release
	return

EltheCity_Trigger_JumpOnBenchLeft_TopTile_4:
# 176 "data/maps/EltheCity/scripts.pory"
	compare VAR_RESULT, 0x0002
	goto_if_ne EltheCity_Trigger_JumpOnBenchLeft_TopTile_3
	goto EltheCity_Trigger_JumpOnBenchLeft_TopTile_1

EltheCity_Trigger_JumpOnBenchLeft_TopTile_5:
# 176 "data/maps/EltheCity/scripts.pory"
	compare VAR_RESULT, 0x0001
	goto_if_ne EltheCity_Trigger_JumpOnBenchLeft_TopTile_4
	goto EltheCity_Trigger_JumpOnBenchLeft_TopTile_1

EltheCity_Trigger_JumpOnBenchLeft_TopTile_10:
# 157 "data/maps/EltheCity/scripts.pory"
	resetobjectspriteoffset OBJ_EVENT_ID_PLAYER
# 158 "data/maps/EltheCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, EltheCity_Movement_GetOffBenchLeft
# 159 "data/maps/EltheCity/scripts.pory"
	waitmovement 0
	goto EltheCity_Trigger_JumpOnBenchLeft_TopTile_2


EltheCity_Trigger_JumpOnBenchLeft_BottomTile::
# 182 "data/maps/EltheCity/scripts.pory"
	goto EltheCity_Trigger_JumpOnBenchLeft_TopTile
	return


EltheCity_Trigger_JumpOnBenchRight_TopTile::
# 187 "data/maps/EltheCity/scripts.pory"
	setvar VAR_0x8004, ANIM_SIT_EAST
# 188 "data/maps/EltheCity/scripts.pory"
	callnative DoAmeliaOverworldAnim
# 189 "data/maps/EltheCity/scripts.pory"
	playse SE_BIKE_HOP
# 190 "data/maps/EltheCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, EltheCity_Movement_JumpOnBenchRight
# 191 "data/maps/EltheCity/scripts.pory"
	waitmovement 0
# 192 "data/maps/EltheCity/scripts.pory"
	addobjectspriteoffset OBJ_EVENT_ID_PLAYER, 0, -6
EltheCity_Trigger_JumpOnBenchRight_TopTile_3:
# 194 "data/maps/EltheCity/scripts.pory"
	waitforscriptinput
# 195 "data/maps/EltheCity/scripts.pory"
	switch VAR_RESULT
# 197 "data/maps/EltheCity/scripts.pory"
	case 0x0010, EltheCity_Trigger_JumpOnBenchRight_TopTile_10
# 198 "data/maps/EltheCity/scripts.pory"
	case 0x0001, EltheCity_Trigger_JumpOnBenchRight_TopTile_10
# 199 "data/maps/EltheCity/scripts.pory"
	case 0x0002, EltheCity_Trigger_JumpOnBenchRight_TopTile_10
EltheCity_Trigger_JumpOnBenchRight_TopTile_2:
# 219 "data/maps/EltheCity/scripts.pory"
	compare VAR_RESULT, 0x0010
	goto_if_ne EltheCity_Trigger_JumpOnBenchRight_TopTile_5
EltheCity_Trigger_JumpOnBenchRight_TopTile_1:
# 220 "data/maps/EltheCity/scripts.pory"
	release
	return

EltheCity_Trigger_JumpOnBenchRight_TopTile_4:
# 219 "data/maps/EltheCity/scripts.pory"
	compare VAR_RESULT, 0x0002
	goto_if_ne EltheCity_Trigger_JumpOnBenchRight_TopTile_3
	goto EltheCity_Trigger_JumpOnBenchRight_TopTile_1

EltheCity_Trigger_JumpOnBenchRight_TopTile_5:
# 219 "data/maps/EltheCity/scripts.pory"
	compare VAR_RESULT, 0x0001
	goto_if_ne EltheCity_Trigger_JumpOnBenchRight_TopTile_4
	goto EltheCity_Trigger_JumpOnBenchRight_TopTile_1

EltheCity_Trigger_JumpOnBenchRight_TopTile_10:
# 200 "data/maps/EltheCity/scripts.pory"
	resetobjectspriteoffset OBJ_EVENT_ID_PLAYER
# 201 "data/maps/EltheCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, EltheCity_Movement_GetOffBenchRight
# 202 "data/maps/EltheCity/scripts.pory"
	waitmovement 0
	goto EltheCity_Trigger_JumpOnBenchRight_TopTile_2


EltheCity_Trigger_JumpOnBenchRight_BottomTile::
# 225 "data/maps/EltheCity/scripts.pory"
	goto EltheCity_Trigger_JumpOnBenchRight_TopTile
	return


EltheCity_EventScript_Keesight::
# 230 "data/maps/EltheCity/scripts.pory"
	goto_if_set FLAG_SCALE_ASCENDING_DONE, EltheCity_EventScript_Keesight_3
EltheCity_EventScript_Keesight_2:
# 237 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_EventScript_Keesight_Text_2, PORTRAIT_KEESIGHT
# 238 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_EventScript_Keesight_Text_3
# 239 "data/maps/EltheCity/scripts.pory"
	speakername NULL, 0
# 240 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_EventScript_Keesight_Text_4, MSGBOX_AUTOCLOSE
	return

EltheCity_EventScript_Keesight_1:
# 232 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_EventScript_Keesight_Text_0, PORTRAIT_KEESIGHT
# 233 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_EventScript_Keesight_Text_1, MSGBOX_NPC
	return

EltheCity_EventScript_Keesight_3:
# 230 "data/maps/EltheCity/scripts.pory"
	goto_if_set FLAG_SCALE_DESCENDING_DONE, EltheCity_EventScript_Keesight_1
	goto EltheCity_EventScript_Keesight_2


EltheCity_EventScript_Weatherbane::
# 246 "data/maps/EltheCity/scripts.pory"
	goto_if_unset FLAG_FINISHED_WEATHERBANE_QUEST, EltheCity_EventScript_Weatherbane_1
# 328 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_EventScript_Weatherbane_Text_1, PORTRAIT_WEATHERBANE_NEUTRAL
# 329 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_EventScript_Weatherbane_Text_17, MSGBOX_AUTOCLOSE
	return

EltheCity_EventScript_Weatherbane_1:
# 248 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_Sign_InnRight_Text_0, PORTRAIT_AMELIA_NEUTRAL
# 249 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_EventScript_Weatherbane_Text_0, MSGBOX_AUTOCLOSE
# 250 "data/maps/EltheCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
# 251 "data/maps/EltheCity/scripts.pory"
	waitmovement 0
# 252 "data/maps/EltheCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
# 253 "data/maps/EltheCity/scripts.pory"
	waitmovement 0
# 254 "data/maps/EltheCity/scripts.pory"
	delay 16
# 255 "data/maps/EltheCity/scripts.pory"
	addobjectspriteoffset 1, 1, 0
# 256 "data/maps/EltheCity/scripts.pory"
	delay 8
# 257 "data/maps/EltheCity/scripts.pory"
	addobjectspriteoffset 1, -2, 0
# 258 "data/maps/EltheCity/scripts.pory"
	delay 8
# 259 "data/maps/EltheCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 260 "data/maps/EltheCity/scripts.pory"
	playse SE_PIN
# 261 "data/maps/EltheCity/scripts.pory"
	addobjectspriteoffset 1, 2, 0
# 262 "data/maps/EltheCity/scripts.pory"
	delay 8
# 263 "data/maps/EltheCity/scripts.pory"
	addobjectspriteoffset 1, -2, 0
# 264 "data/maps/EltheCity/scripts.pory"
	delay 8
# 265 "data/maps/EltheCity/scripts.pory"
	addobjectspriteoffset 1, 2, 0
# 266 "data/maps/EltheCity/scripts.pory"
	delay 8
# 267 "data/maps/EltheCity/scripts.pory"
	addobjectspriteoffset 1, -2, 0
# 268 "data/maps/EltheCity/scripts.pory"
	delay 8
# 269 "data/maps/EltheCity/scripts.pory"
	addobjectspriteoffset 1, 2, 0
# 270 "data/maps/EltheCity/scripts.pory"
	delay 8
# 271 "data/maps/EltheCity/scripts.pory"
	addobjectspriteoffset 1, -2, 0
# 272 "data/maps/EltheCity/scripts.pory"
	delay 8
# 273 "data/maps/EltheCity/scripts.pory"
	addobjectspriteoffset 1, 0, 0
# 274 "data/maps/EltheCity/scripts.pory"
	delay 16
# 275 "data/maps/EltheCity/scripts.pory"
	applymovement 1, EltheCity_Movement_WeatherbaneFlap
# 276 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_EventScript_Weatherbane_Text_1, PORTRAIT_WEATHERBANE_SCREAM
# 277 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_EventScript_Weatherbane_Text_2
# 278 "data/maps/EltheCity/scripts.pory"
	waitmovement 1
# 279 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_Sign_InnRight_Text_0, PORTRAIT_AMELIA_STRAINED
# 280 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_EventScript_Weatherbane_Text_3
# 281 "data/maps/EltheCity/scripts.pory"
	applymovement 1, EltheCity_Movement_WeatherbaneFlap
# 282 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_EventScript_Weatherbane_Text_1, PORTRAIT_WEATHERBANE_SCREAM
# 283 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_EventScript_Weatherbane_Text_2
# 284 "data/maps/EltheCity/scripts.pory"
	waitmovement 1
# 285 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_Sign_InnRight_Text_0, PORTRAIT_AMELIA_SHOCK
# 286 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_EventScript_Weatherbane_Text_4
# 287 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_EventScript_Weatherbane_Text_1, PORTRAIT_WEATHERBANE_NEUTRAL
# 288 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_EventScript_Weatherbane_Text_5
# 289 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_Sign_InnRight_Text_0, PORTRAIT_AMELIA_NEUTRAL
# 290 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_EventScript_Weatherbane_Text_6
# 291 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_EventScript_Weatherbane_Text_1, PORTRAIT_WEATHERBANE_NEUTRAL
# 292 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_EventScript_Weatherbane_Text_7
# 294 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_Sign_InnRight_Text_0, PORTRAIT_AMELIA_NEUTRAL
# 295 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_EventScript_Weatherbane_Text_8
# 296 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_EventScript_Weatherbane_Text_1, PORTRAIT_WEATHERBANE_SCREAM
# 297 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_EventScript_Weatherbane_Text_9
# 299 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_Sign_InnRight_Text_0, PORTRAIT_AMELIA_STRAINED
# 300 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_EventScript_Weatherbane_Text_10
# 302 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_EventScript_Weatherbane_Text_1, PORTRAIT_WEATHERBANE_SCREAM
# 303 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_EventScript_Weatherbane_Text_11
# 304 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_Sign_InnRight_Text_0, PORTRAIT_AMELIA_NEUTRAL
# 305 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_EventScript_Weatherbane_Text_12
# 306 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_EventScript_Weatherbane_Text_1, PORTRAIT_WEATHERBANE_NEUTRAL
# 307 "data/maps/EltheCity/scripts.pory"
	applymovement 1, EltheCity_Movement_WeatherbaneFlap
# 308 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_EventScript_Weatherbane_Text_13
# 309 "data/maps/EltheCity/scripts.pory"
	waitmovement 1
# 310 "data/maps/EltheCity/scripts.pory"
	closemessage
# 311 "data/maps/EltheCity/scripts.pory"
	createmon 1, 0, SPECIES_WEATHERBANE, 40, ITEM_NONE, 0, NATURE_CALM, 0, MON_MALE, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_STEEL_WING, MOVE_AIR_CUTTER, MOVE_SCREECH, MOVE_ROOST, FALSE, 0, TYPE_WATER
# 312 "data/maps/EltheCity/scripts.pory"
	dowildbattle
# 313 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_EventScript_Weatherbane_Text_1, PORTRAIT_WEATHERBANE_NEUTRAL
# 314 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_EventScript_Weatherbane_Text_14
# 315 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_Sign_InnRight_Text_0, PORTRAIT_AMELIA_SERIOUSLY
# 316 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_EventScript_Weatherbane_Text_15, MSGBOX_AUTOCLOSE
# 317 "data/maps/EltheCity/scripts.pory"
	delay 60
# 318 "data/maps/EltheCity/scripts.pory"
	setflag FLAG_FINISHED_WEATHERBANE_QUEST
# 319 "data/maps/EltheCity/scripts.pory"
	playfanfare MUS_CAUGHT
# 320 "data/maps/EltheCity/scripts.pory"
	message EltheCity_EventScript_Weatherbane_Text_16
# 321 "data/maps/EltheCity/scripts.pory"
	waitmessage
# 322 "data/maps/EltheCity/scripts.pory"
	waitfanfare
# 323 "data/maps/EltheCity/scripts.pory"
	waitbuttonpress
# 324 "data/maps/EltheCity/scripts.pory"
	closemessage
	return


# 335 "data/maps/EltheCity/scripts.pory"
EltheCity_Movement_WeatherbaneFlap:
# 337 "data/maps/EltheCity/scripts.pory"
	face_up
# 338 "data/maps/EltheCity/scripts.pory"
	delay_8
# 339 "data/maps/EltheCity/scripts.pory"
	face_left
# 340 "data/maps/EltheCity/scripts.pory"
	delay_8
# 341 "data/maps/EltheCity/scripts.pory"
	face_down
# 342 "data/maps/EltheCity/scripts.pory"
	delay_8
# 343 "data/maps/EltheCity/scripts.pory"
	face_right
# 344 "data/maps/EltheCity/scripts.pory"
	delay_8
	step_end

EltheCity_Trigger_MusicStump1::
# 349 "data/maps/EltheCity/scripts.pory"
	playse SE_NOTE_C
# 350 "data/maps/EltheCity/scripts.pory"
	turnobject 9, DIR_WEST
# 353 "data/maps/EltheCity/scripts.pory"
	compare VAR_TEMP_2, 7
	goto_if_eq EltheCity_Trigger_MusicStump1_4
EltheCity_Trigger_MusicStump1_3:
# 377 "data/maps/EltheCity/scripts.pory"
	setvar VAR_TEMP_2, 0
# 378 "data/maps/EltheCity/scripts.pory"
	setvar VAR_TEMP_1, 1
EltheCity_Trigger_MusicStump1_1:
# 381 "data/maps/EltheCity/scripts.pory"
	release
	return

EltheCity_Trigger_MusicStump1_2:
# 355 "data/maps/EltheCity/scripts.pory"
	delay 60
# 356 "data/maps/EltheCity/scripts.pory"
	applymovement 9, EltheCity_Movement_KeesightHops
# 357 "data/maps/EltheCity/scripts.pory"
	playse SE_BIKE_HOP
# 358 "data/maps/EltheCity/scripts.pory"
	delay 16
# 359 "data/maps/EltheCity/scripts.pory"
	playse SE_BIKE_HOP
# 360 "data/maps/EltheCity/scripts.pory"
	delay 32
# 361 "data/maps/EltheCity/scripts.pory"
	playmoncry SPECIES_WOOBAT, CRY_MODE_NORMAL
# 362 "data/maps/EltheCity/scripts.pory"
	waitmoncry
# 363 "data/maps/EltheCity/scripts.pory"
	delay 30
# 364 "data/maps/EltheCity/scripts.pory"
	applymovement 9, Common_Movement_FaceUp
# 365 "data/maps/EltheCity/scripts.pory"
	waitmovement 0
# 366 "data/maps/EltheCity/scripts.pory"
	delay 16
# 367 "data/maps/EltheCity/scripts.pory"
	playse SE_M_SUPERSONIC
# 368 "data/maps/EltheCity/scripts.pory"
	applymovement 11, EltheCity_Movement_MoveUmbrashard
# 369 "data/maps/EltheCity/scripts.pory"
	waitmovement 0
# 370 "data/maps/EltheCity/scripts.pory"
	applymovement 9, Common_Movement_FaceDown
# 371 "data/maps/EltheCity/scripts.pory"
	waitmovement 0
# 372 "data/maps/EltheCity/scripts.pory"
	setobjectxyperm 11, 11, 21
# 373 "data/maps/EltheCity/scripts.pory"
	setflag FLAG_SCALE_DESCENDING_DONE
	goto EltheCity_Trigger_MusicStump1_1

EltheCity_Trigger_MusicStump1_4:
# 353 "data/maps/EltheCity/scripts.pory"
	goto_if_unset FLAG_SCALE_DESCENDING_DONE, EltheCity_Trigger_MusicStump1_2
	goto EltheCity_Trigger_MusicStump1_3


EltheCity_Trigger_MusicStump2::
# 386 "data/maps/EltheCity/scripts.pory"
	playse SE_NOTE_D
# 387 "data/maps/EltheCity/scripts.pory"
	turnobject 9, DIR_WEST
# 390 "data/maps/EltheCity/scripts.pory"
	compare VAR_TEMP_1, 1
	goto_if_eq EltheCity_Trigger_MusicStump2_2
# 396 "data/maps/EltheCity/scripts.pory"
	setvar VAR_TEMP_1, 0
EltheCity_Trigger_MusicStump2_1:
# 400 "data/maps/EltheCity/scripts.pory"
	compare VAR_TEMP_2, 6
	goto_if_eq EltheCity_Trigger_MusicStump2_6
# 406 "data/maps/EltheCity/scripts.pory"
	setvar VAR_TEMP_2, 0
EltheCity_Trigger_MusicStump2_5:
# 409 "data/maps/EltheCity/scripts.pory"
	release
	return

EltheCity_Trigger_MusicStump2_2:
# 392 "data/maps/EltheCity/scripts.pory"
	addvar VAR_TEMP_1, 1
	goto EltheCity_Trigger_MusicStump2_1

EltheCity_Trigger_MusicStump2_6:
# 402 "data/maps/EltheCity/scripts.pory"
	addvar VAR_TEMP_2, 1
	goto EltheCity_Trigger_MusicStump2_5


EltheCity_Trigger_MusicStump3::
# 414 "data/maps/EltheCity/scripts.pory"
	playse SE_NOTE_E
# 415 "data/maps/EltheCity/scripts.pory"
	turnobject 9, DIR_WEST
# 418 "data/maps/EltheCity/scripts.pory"
	compare VAR_TEMP_1, 2
	goto_if_eq EltheCity_Trigger_MusicStump3_2
# 424 "data/maps/EltheCity/scripts.pory"
	setvar VAR_TEMP_1, 0
EltheCity_Trigger_MusicStump3_1:
# 428 "data/maps/EltheCity/scripts.pory"
	compare VAR_TEMP_2, 5
	goto_if_eq EltheCity_Trigger_MusicStump3_6
# 434 "data/maps/EltheCity/scripts.pory"
	setvar VAR_TEMP_2, 0
EltheCity_Trigger_MusicStump3_5:
# 437 "data/maps/EltheCity/scripts.pory"
	release
	return

EltheCity_Trigger_MusicStump3_2:
# 420 "data/maps/EltheCity/scripts.pory"
	addvar VAR_TEMP_1, 1
	goto EltheCity_Trigger_MusicStump3_1

EltheCity_Trigger_MusicStump3_6:
# 430 "data/maps/EltheCity/scripts.pory"
	addvar VAR_TEMP_2, 1
	goto EltheCity_Trigger_MusicStump3_5


EltheCity_Trigger_MusicStump4::
# 442 "data/maps/EltheCity/scripts.pory"
	playse SE_NOTE_F
# 443 "data/maps/EltheCity/scripts.pory"
	turnobject 9, DIR_SOUTH
# 446 "data/maps/EltheCity/scripts.pory"
	compare VAR_TEMP_1, 3
	goto_if_eq EltheCity_Trigger_MusicStump4_2
# 452 "data/maps/EltheCity/scripts.pory"
	setvar VAR_TEMP_1, 0
EltheCity_Trigger_MusicStump4_1:
# 456 "data/maps/EltheCity/scripts.pory"
	compare VAR_TEMP_2, 4
	goto_if_eq EltheCity_Trigger_MusicStump4_6
# 462 "data/maps/EltheCity/scripts.pory"
	setvar VAR_TEMP_2, 0
EltheCity_Trigger_MusicStump4_5:
# 465 "data/maps/EltheCity/scripts.pory"
	release
	return

EltheCity_Trigger_MusicStump4_2:
# 448 "data/maps/EltheCity/scripts.pory"
	addvar VAR_TEMP_1, 1
	goto EltheCity_Trigger_MusicStump4_1

EltheCity_Trigger_MusicStump4_6:
# 458 "data/maps/EltheCity/scripts.pory"
	addvar VAR_TEMP_2, 1
	goto EltheCity_Trigger_MusicStump4_5


EltheCity_Trigger_MusicStump5::
# 470 "data/maps/EltheCity/scripts.pory"
	playse SE_NOTE_G
# 471 "data/maps/EltheCity/scripts.pory"
	turnobject 9, DIR_SOUTH
# 474 "data/maps/EltheCity/scripts.pory"
	compare VAR_TEMP_1, 4
	goto_if_eq EltheCity_Trigger_MusicStump5_2
# 480 "data/maps/EltheCity/scripts.pory"
	setvar VAR_TEMP_1, 0
EltheCity_Trigger_MusicStump5_1:
# 484 "data/maps/EltheCity/scripts.pory"
	compare VAR_TEMP_2, 3
	goto_if_eq EltheCity_Trigger_MusicStump5_6
# 490 "data/maps/EltheCity/scripts.pory"
	setvar VAR_TEMP_2, 0
EltheCity_Trigger_MusicStump5_5:
# 493 "data/maps/EltheCity/scripts.pory"
	release
	return

EltheCity_Trigger_MusicStump5_2:
# 476 "data/maps/EltheCity/scripts.pory"
	addvar VAR_TEMP_1, 1
	goto EltheCity_Trigger_MusicStump5_1

EltheCity_Trigger_MusicStump5_6:
# 486 "data/maps/EltheCity/scripts.pory"
	addvar VAR_TEMP_2, 1
	goto EltheCity_Trigger_MusicStump5_5


EltheCity_Trigger_MusicStump6::
# 498 "data/maps/EltheCity/scripts.pory"
	playse SE_NOTE_A
# 499 "data/maps/EltheCity/scripts.pory"
	turnobject 9, DIR_EAST
# 502 "data/maps/EltheCity/scripts.pory"
	compare VAR_TEMP_1, 5
	goto_if_eq EltheCity_Trigger_MusicStump6_2
# 508 "data/maps/EltheCity/scripts.pory"
	setvar VAR_TEMP_1, 0
EltheCity_Trigger_MusicStump6_1:
# 512 "data/maps/EltheCity/scripts.pory"
	compare VAR_TEMP_2, 2
	goto_if_eq EltheCity_Trigger_MusicStump6_6
# 518 "data/maps/EltheCity/scripts.pory"
	setvar VAR_TEMP_2, 0
EltheCity_Trigger_MusicStump6_5:
# 521 "data/maps/EltheCity/scripts.pory"
	release
	return

EltheCity_Trigger_MusicStump6_2:
# 504 "data/maps/EltheCity/scripts.pory"
	addvar VAR_TEMP_1, 1
	goto EltheCity_Trigger_MusicStump6_1

EltheCity_Trigger_MusicStump6_6:
# 514 "data/maps/EltheCity/scripts.pory"
	addvar VAR_TEMP_2, 1
	goto EltheCity_Trigger_MusicStump6_5


EltheCity_Trigger_MusicStump7::
# 526 "data/maps/EltheCity/scripts.pory"
	playse SE_NOTE_B
# 527 "data/maps/EltheCity/scripts.pory"
	turnobject 9, DIR_EAST
# 530 "data/maps/EltheCity/scripts.pory"
	compare VAR_TEMP_1, 6
	goto_if_eq EltheCity_Trigger_MusicStump7_2
# 536 "data/maps/EltheCity/scripts.pory"
	setvar VAR_TEMP_1, 0
EltheCity_Trigger_MusicStump7_1:
# 540 "data/maps/EltheCity/scripts.pory"
	compare VAR_TEMP_2, 1
	goto_if_eq EltheCity_Trigger_MusicStump7_6
# 546 "data/maps/EltheCity/scripts.pory"
	setvar VAR_TEMP_2, 0
EltheCity_Trigger_MusicStump7_5:
# 549 "data/maps/EltheCity/scripts.pory"
	release
	return

EltheCity_Trigger_MusicStump7_2:
# 532 "data/maps/EltheCity/scripts.pory"
	addvar VAR_TEMP_1, 1
	goto EltheCity_Trigger_MusicStump7_1

EltheCity_Trigger_MusicStump7_6:
# 542 "data/maps/EltheCity/scripts.pory"
	addvar VAR_TEMP_2, 1
	goto EltheCity_Trigger_MusicStump7_5


EltheCity_Trigger_MusicStump8::
# 554 "data/maps/EltheCity/scripts.pory"
	playse SE_NOTE_C_HIGH
# 555 "data/maps/EltheCity/scripts.pory"
	turnobject 9, DIR_EAST
# 559 "data/maps/EltheCity/scripts.pory"
	compare VAR_TEMP_1, 7
	goto_if_eq EltheCity_Trigger_MusicStump8_4
EltheCity_Trigger_MusicStump8_3:
# 583 "data/maps/EltheCity/scripts.pory"
	setvar VAR_TEMP_1, 0
# 584 "data/maps/EltheCity/scripts.pory"
	setvar VAR_TEMP_2, 1
EltheCity_Trigger_MusicStump8_1:
# 587 "data/maps/EltheCity/scripts.pory"
	release
	return

EltheCity_Trigger_MusicStump8_2:
# 561 "data/maps/EltheCity/scripts.pory"
	delay 60
# 562 "data/maps/EltheCity/scripts.pory"
	applymovement 9, EltheCity_Movement_KeesightHops
# 563 "data/maps/EltheCity/scripts.pory"
	playse SE_BIKE_HOP
# 564 "data/maps/EltheCity/scripts.pory"
	delay 16
# 565 "data/maps/EltheCity/scripts.pory"
	playse SE_BIKE_HOP
# 566 "data/maps/EltheCity/scripts.pory"
	delay 32
# 567 "data/maps/EltheCity/scripts.pory"
	playmoncry SPECIES_WOOBAT, CRY_MODE_NORMAL
# 568 "data/maps/EltheCity/scripts.pory"
	waitmoncry
# 569 "data/maps/EltheCity/scripts.pory"
	delay 30
# 570 "data/maps/EltheCity/scripts.pory"
	applymovement 9, Common_Movement_FaceUp
# 571 "data/maps/EltheCity/scripts.pory"
	waitmovement 0
# 572 "data/maps/EltheCity/scripts.pory"
	delay 16
# 573 "data/maps/EltheCity/scripts.pory"
	playse SE_M_SUPERSONIC
# 574 "data/maps/EltheCity/scripts.pory"
	applymovement 10, EltheCity_Movement_MoveEspershard
# 575 "data/maps/EltheCity/scripts.pory"
	waitmovement 0
# 576 "data/maps/EltheCity/scripts.pory"
	applymovement 9, Common_Movement_FaceDown
# 577 "data/maps/EltheCity/scripts.pory"
	waitmovement 0
# 578 "data/maps/EltheCity/scripts.pory"
	setobjectxyperm 10, 13, 21
# 579 "data/maps/EltheCity/scripts.pory"
	setflag FLAG_SCALE_ASCENDING_DONE
	goto EltheCity_Trigger_MusicStump8_1

EltheCity_Trigger_MusicStump8_4:
# 559 "data/maps/EltheCity/scripts.pory"
	goto_if_unset FLAG_SCALE_ASCENDING_DONE, EltheCity_Trigger_MusicStump8_2
	goto EltheCity_Trigger_MusicStump8_3


# 596 "data/maps/EltheCity/scripts.pory"
EltheCity_Movement_KeesightHops:
# 598 "data/maps/EltheCity/scripts.pory"
	jump_in_place_down
# 598 "data/maps/EltheCity/scripts.pory"
	jump_in_place_down
	step_end

# 601 "data/maps/EltheCity/scripts.pory"
EltheCity_Movement_MoveUmbrashard:
# 603 "data/maps/EltheCity/scripts.pory"
	levitate
# 604 "data/maps/EltheCity/scripts.pory"
	delay_16
# 605 "data/maps/EltheCity/scripts.pory"
	walk_up
# 605 "data/maps/EltheCity/scripts.pory"
	walk_up
# 605 "data/maps/EltheCity/scripts.pory"
	walk_up
# 606 "data/maps/EltheCity/scripts.pory"
	walk_right
# 606 "data/maps/EltheCity/scripts.pory"
	walk_right
# 606 "data/maps/EltheCity/scripts.pory"
	walk_right
# 606 "data/maps/EltheCity/scripts.pory"
	walk_right
# 606 "data/maps/EltheCity/scripts.pory"
	walk_right
# 606 "data/maps/EltheCity/scripts.pory"
	walk_right
# 606 "data/maps/EltheCity/scripts.pory"
	walk_right
# 606 "data/maps/EltheCity/scripts.pory"
	walk_right
# 607 "data/maps/EltheCity/scripts.pory"
	walk_up
# 608 "data/maps/EltheCity/scripts.pory"
	delay_16
# 609 "data/maps/EltheCity/scripts.pory"
	stop_levitate
	step_end

# 612 "data/maps/EltheCity/scripts.pory"
EltheCity_Movement_MoveEspershard:
# 614 "data/maps/EltheCity/scripts.pory"
	levitate
# 615 "data/maps/EltheCity/scripts.pory"
	delay_16
# 616 "data/maps/EltheCity/scripts.pory"
	walk_left
# 616 "data/maps/EltheCity/scripts.pory"
	walk_left
# 616 "data/maps/EltheCity/scripts.pory"
	walk_left
# 616 "data/maps/EltheCity/scripts.pory"
	walk_left
# 616 "data/maps/EltheCity/scripts.pory"
	walk_left
# 616 "data/maps/EltheCity/scripts.pory"
	walk_left
# 616 "data/maps/EltheCity/scripts.pory"
	walk_left
# 616 "data/maps/EltheCity/scripts.pory"
	walk_left
# 617 "data/maps/EltheCity/scripts.pory"
	walk_up
# 618 "data/maps/EltheCity/scripts.pory"
	delay_16
# 619 "data/maps/EltheCity/scripts.pory"
	stop_levitate
	step_end

# 622 "data/maps/EltheCity/scripts.pory"
EltheCity_Movement_JumpOnBenchLeft:
# 624 "data/maps/EltheCity/scripts.pory"
	lock_anim
# 625 "data/maps/EltheCity/scripts.pory"
	jump_in_place_left
	step_end

# 628 "data/maps/EltheCity/scripts.pory"
EltheCity_Movement_GetOffBenchLeft:
# 630 "data/maps/EltheCity/scripts.pory"
	unlock_anim
# 631 "data/maps/EltheCity/scripts.pory"
	walk_slow_left
	step_end

# 634 "data/maps/EltheCity/scripts.pory"
EltheCity_Movement_JumpOnBenchRight:
# 636 "data/maps/EltheCity/scripts.pory"
	lock_anim
# 637 "data/maps/EltheCity/scripts.pory"
	jump_in_place_right
	step_end

# 640 "data/maps/EltheCity/scripts.pory"
EltheCity_Movement_GetOffBenchRight:
# 642 "data/maps/EltheCity/scripts.pory"
	unlock_anim
# 643 "data/maps/EltheCity/scripts.pory"
	walk_slow_right
	step_end

# 646 "data/maps/EltheCity/scripts.pory"
EltheCity_Movement_MoveDownBench:
# 648 "data/maps/EltheCity/scripts.pory"
	walk_slow_down
	step_end

# 651 "data/maps/EltheCity/scripts.pory"
EltheCity_Movement_MoveUpBench:
# 653 "data/maps/EltheCity/scripts.pory"
	walk_slow_up
	step_end

Test_ScriptGetInput_Text_0:
# 88 "data/maps/EltheCity/scripts.pory"
	.string "Which button will you press?$"

EltheCity_Sign_InnLeft_Text_0:
# 113 "data/maps/EltheCity/scripts.pory"
	.string "Elysi Inn$"

EltheCity_Sign_InnRight_Text_0:
# 118 "data/maps/EltheCity/scripts.pory"
	.string "Amelia$"

EltheCity_Sign_InnRight_Text_1:
# 119 "data/maps/EltheCity/scripts.pory"
	.string "Phew, these room prices…I'm glad\n"
	.string "Pokémon Centers were free…\p"
	.string "Then again, not like I have any\n"
	.string "money anyway…$"

EltheCity_EventScript_Keesight_Text_0:
# 232 "data/maps/EltheCity/scripts.pory"
	.string "Keesight$"

EltheCity_EventScript_Keesight_Text_1:
# 233 "data/maps/EltheCity/scripts.pory"
	.string "… … … … …\n"
	.string "Thanks for the song.$"

EltheCity_EventScript_Keesight_Text_2:
# 237 "data/maps/EltheCity/scripts.pory"
	.string "Batmon$"

EltheCity_EventScript_Keesight_Text_3:
# 238 "data/maps/EltheCity/scripts.pory"
	.string "… … … … … … … … … …$"

EltheCity_EventScript_Keesight_Text_4:
# 240 "data/maps/EltheCity/scripts.pory"
	.string "The Pokémon is staring intently\n"
	.string "at the pond…$"

EltheCity_EventScript_Weatherbane_Text_0:
# 249 "data/maps/EltheCity/scripts.pory"
	.string "So this is the thing I'm supposed\n"
	.string "to fix? It's, what, squeaky?$"

EltheCity_EventScript_Weatherbane_Text_1:
# 276 "data/maps/EltheCity/scripts.pory"
	.string "Weatherbane$"

EltheCity_EventScript_Weatherbane_Text_2:
# 277 "data/maps/EltheCity/scripts.pory"
	.string "Skrraaaaaaaaaaaw! Skrraaaaaaaaaaaw!$"

EltheCity_EventScript_Weatherbane_Text_3:
# 280 "data/maps/EltheCity/scripts.pory"
	.string "…Geez. It's a Pokémon?\n"
	.string "Well, it sure is noisy…$"

EltheCity_EventScript_Weatherbane_Text_4:
# 286 "data/maps/EltheCity/scripts.pory"
	.string "Hey! Shut the f{CENSOR}uck{UNCENSOR} up!$"

EltheCity_EventScript_Weatherbane_Text_5:
# 288 "data/maps/EltheCity/scripts.pory"
	.string "… … … … …$"

EltheCity_EventScript_Weatherbane_Text_6:
# 290 "data/maps/EltheCity/scripts.pory"
	.string "Why are you yelling?$"

EltheCity_EventScript_Weatherbane_Text_7:
# 292 "data/maps/EltheCity/scripts.pory"
	.string "The rain! The rain! I'm trying to\n"
	.string "make the rain go away!\p"
	.string "My cries can chase away storms.\n"
	.string "But this rain just keeps coming back!\l"
	.string "Begone! Begone!$"

EltheCity_EventScript_Weatherbane_Text_8:
# 295 "data/maps/EltheCity/scripts.pory"
	.string "So it's not a natural rainstorm?\n"
	.string "Maybe a Pokémon is summoning it…$"

EltheCity_EventScript_Weatherbane_Text_9:
# 297 "data/maps/EltheCity/scripts.pory"
	.string "Not natural! Not natural!\n"
	.string "Can't you feel it?\p"
	.string "The rain washes away your darkness.\n"
	.string "Makes you a carefree person.\l"
	.string "A fake person.\l"
	.string "Must be stopped! Must be stopped!$"

EltheCity_EventScript_Weatherbane_Text_10:
# 300 "data/maps/EltheCity/scripts.pory"
	.string "Look, I know! Something's messing\n"
	.string "with my head. It could be the same\l"
	.string "thing that's causing the rain.\p"
	.string "I'm working on it. But my job right\n"
	.string "now is to get you to quiet down.$"

EltheCity_EventScript_Weatherbane_Text_11:
# 303 "data/maps/EltheCity/scripts.pory"
	.string "Can't shut up! Can't shut up!\p"
	.string "Begone! Begone!$"

EltheCity_EventScript_Weatherbane_Text_12:
# 305 "data/maps/EltheCity/scripts.pory"
	.string "What if I promise to clear up this\n"
	.string "rain? Will that shut you up?$"

EltheCity_EventScript_Weatherbane_Text_13:
# 308 "data/maps/EltheCity/scripts.pory"
	.string "Maybe. Maybe.\p"
	.string "Show me you're strong enough!\n"
	.string "I think you're weak! Weak!$"

EltheCity_EventScript_Weatherbane_Text_14:
# 314 "data/maps/EltheCity/scripts.pory"
	.string "Okay! Okay! You're good! You're good!\p"
	.string "I trust you. You will stop the rain.\n"
	.string "Amelia, Sun-Bringer! Hail! Hail!$"

EltheCity_EventScript_Weatherbane_Text_15:
# 316 "data/maps/EltheCity/scripts.pory"
	.string "Please don't call me that ever again.$"

EltheCity_EventScript_Weatherbane_Text_16:
# 320 "data/maps/EltheCity/scripts.pory"
	.string "Finished the Innkeeper's request!$"

EltheCity_EventScript_Weatherbane_Text_17:
# 329 "data/maps/EltheCity/scripts.pory"
	.string "I used to love the sun.\n"
	.string "Fire types feared me.\p"
	.string "But now I'm too old! Too old!\n"
	.string "Can't take the heat like I used to.\p"
	.string "But I'd still like to see the sun\n"
	.string "again. Too wet! Too wet!$"
