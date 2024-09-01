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
	compare VAR_MAIN_GAME_STATE, 4
	goto_if_eq EltheCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_8
EltheCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_7:
# 41 "data/maps/EltheCity/scripts.pory"
	goto_if_unset FLAG_GOT_PYTHON, EltheCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_10
	return

EltheCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 29 "data/maps/EltheCity/scripts.pory"
	setobjectxyperm 11, 11, 21
	goto EltheCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

EltheCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_5:
# 33 "data/maps/EltheCity/scripts.pory"
	setobjectxyperm 10, 13, 21
	goto EltheCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_4

EltheCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_8:
# 38 "data/maps/EltheCity/scripts.pory"
	setvar VAR_MAIN_GAME_STATE, 5
	goto EltheCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_7

EltheCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_10:
# 43 "data/maps/EltheCity/scripts.pory"
	random 4
# 44 "data/maps/EltheCity/scripts.pory"
	copyvar VAR_TEMP_F, VAR_RESULT
# 45 "data/maps/EltheCity/scripts.pory"
	switch VAR_TEMP_F
# 47 "data/maps/EltheCity/scripts.pory"
	case 0, EltheCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_13
# 51 "data/maps/EltheCity/scripts.pory"
	case 1, EltheCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_14
# 55 "data/maps/EltheCity/scripts.pory"
	case 2, EltheCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_15
# 59 "data/maps/EltheCity/scripts.pory"
	case 3, EltheCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_16
	return

EltheCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_13:
# 48 "data/maps/EltheCity/scripts.pory"
	setobjectxyperm 2, 34, 7
# 49 "data/maps/EltheCity/scripts.pory"
	setobjectmovementtype 2, MOVEMENT_TYPE_FACE_LEFT
# 50 "data/maps/EltheCity/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_MAN_2
	return

EltheCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_14:
# 52 "data/maps/EltheCity/scripts.pory"
	setobjectxyperm 2, 29, 34
# 53 "data/maps/EltheCity/scripts.pory"
	setobjectmovementtype 2, MOVEMENT_TYPE_WANDER_LEFT_AND_RIGHT
# 54 "data/maps/EltheCity/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_MAN_5
	return

EltheCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_15:
# 56 "data/maps/EltheCity/scripts.pory"
	setobjectxyperm 2, 6, 26
# 57 "data/maps/EltheCity/scripts.pory"
	setobjectmovementtype 2, MOVEMENT_TYPE_LOOK_AROUND
# 58 "data/maps/EltheCity/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_SPECIES ( POLIWHIRL )
	return

EltheCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_16:
# 60 "data/maps/EltheCity/scripts.pory"
	setobjectxyperm 2, 28, 15
# 61 "data/maps/EltheCity/scripts.pory"
	setobjectmovementtype 2, MOVEMENT_TYPE_WANDER_DOWN_AND_UP
# 62 "data/maps/EltheCity/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_MAN_2
	return


EltheCity_EventScript_Python::
# 72 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_EventScript_Python_Text_0, MSGBOX_NPC
# 73 "data/maps/EltheCity/scripts.pory"
	special GetLeadMonSpecies
# 74 "data/maps/EltheCity/scripts.pory"
	compare VAR_RESULT, SPECIES_NIDOKING
	goto_if_eq EltheCity_EventScript_Python_1
	return

EltheCity_EventScript_Python_1:
# 76 "data/maps/EltheCity/scripts.pory"
	lock
# 77 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_EventScript_Python_Text_1, PORTRAIT_NIDOKING_NEUTRAL
# 78 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_EventScript_Python_Text_2, MSGBOX_AUTOCLOSE
# 79 "data/maps/EltheCity/scripts.pory"
	playse SE_PIN
# 80 "data/maps/EltheCity/scripts.pory"
	applymovement 2, Common_Movement_ExclamationMark
# 81 "data/maps/EltheCity/scripts.pory"
	delay 48
# 82 "data/maps/EltheCity/scripts.pory"
	applymovement 2, EltheCity_Movement_PythonSpinIn
# 83 "data/maps/EltheCity/scripts.pory"
	waitmovement 0
# 84 "data/maps/EltheCity/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_SPECIES ( ZOROARK )
# 85 "data/maps/EltheCity/scripts.pory"
	removeobject VAR_LAST_TALKED
# 86 "data/maps/EltheCity/scripts.pory"
	addobject VAR_LAST_TALKED
# 87 "data/maps/EltheCity/scripts.pory"
	applymovement 2, EltheCity_Movement_PythonSpinOut
# 88 "data/maps/EltheCity/scripts.pory"
	waitmovement 0
# 89 "data/maps/EltheCity/scripts.pory"
	lock
# 90 "data/maps/EltheCity/scripts.pory"
	faceplayer
# 91 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_EventScript_Python_Text_3, PORTRAIT_ZOROARK_NEUTRAL
# 92 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_EventScript_Python_Text_4
# 93 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_EventScript_Python_Text_5, PORTRAIT_AMELIA_NEUTRAL
# 94 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_EventScript_Python_Text_6
# 95 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_EventScript_Python_Text_5, PORTRAIT_AMELIA_SHOCK
# 96 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_EventScript_Python_Text_7
# 97 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_EventScript_Python_Text_3, PORTRAIT_ZOROARK_NEUTRAL
# 98 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_EventScript_Python_Text_8, MSGBOX_AUTOCLOSE
# 100 "data/maps/EltheCity/scripts.pory"
	applymovement 2, EltheCity_Movement_PythonSpinIn
# 101 "data/maps/EltheCity/scripts.pory"
	waitmovement 0
# 102 "data/maps/EltheCity/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_MAY_NORMAL
# 103 "data/maps/EltheCity/scripts.pory"
	removeobject VAR_LAST_TALKED
# 104 "data/maps/EltheCity/scripts.pory"
	addobject VAR_LAST_TALKED
# 105 "data/maps/EltheCity/scripts.pory"
	applymovement 2, EltheCity_Movement_PythonSpinOut
# 106 "data/maps/EltheCity/scripts.pory"
	waitmovement 0
# 107 "data/maps/EltheCity/scripts.pory"
	lock
# 108 "data/maps/EltheCity/scripts.pory"
	faceplayer
# 109 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_EventScript_Python_Text_3, PORTRAIT_AMELIA_SMUG
# 110 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_EventScript_Python_Text_9
# 111 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_EventScript_Python_Text_3, PORTRAIT_AMELIA_WINK
# 112 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_EventScript_Python_Text_10
# 113 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_EventScript_Python_Text_5, PORTRAIT_AMELIA_SERIOUSLY
# 114 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_EventScript_Python_Text_11
# 115 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_EventScript_Python_Text_5, PORTRAIT_AMELIA_NEUTRAL
# 116 "data/maps/EltheCity/scripts.pory"
	message EltheCity_EventScript_Python_Text_12
# 118 "data/maps/EltheCity/scripts.pory"
	applymovement 2, EltheCity_Movement_PythonSpinIn
# 119 "data/maps/EltheCity/scripts.pory"
	waitmovement 0
# 120 "data/maps/EltheCity/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_SPECIES ( ZOROARK )
# 121 "data/maps/EltheCity/scripts.pory"
	removeobject VAR_LAST_TALKED
# 122 "data/maps/EltheCity/scripts.pory"
	addobject VAR_LAST_TALKED
# 123 "data/maps/EltheCity/scripts.pory"
	applymovement 2, EltheCity_Movement_PythonSpinOut
# 124 "data/maps/EltheCity/scripts.pory"
	waitmovement 0
# 125 "data/maps/EltheCity/scripts.pory"
	lock
# 126 "data/maps/EltheCity/scripts.pory"
	faceplayer
# 127 "data/maps/EltheCity/scripts.pory"
	waitmessage
# 128 "data/maps/EltheCity/scripts.pory"
	waitbuttonpress
# 129 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_EventScript_Python_Text_3, PORTRAIT_ZOROARK_NEUTRAL
# 130 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_EventScript_Python_Text_13, MSGBOX_AUTOCLOSE
# 132 "data/maps/EltheCity/scripts.pory"
	delay 32
# 133 "data/maps/EltheCity/scripts.pory"
	applymovement 2, EnterPokeballMovement
# 134 "data/maps/EltheCity/scripts.pory"
	waitmovement 0
# 135 "data/maps/EltheCity/scripts.pory"
	removeobject 2
# 136 "data/maps/EltheCity/scripts.pory"
	delay 16
# 137 "data/maps/EltheCity/scripts.pory"
	playfanfare MUS_EVOLVED
# 138 "data/maps/EltheCity/scripts.pory"
	message EltheCity_EventScript_Python_Text_14
# 139 "data/maps/EltheCity/scripts.pory"
	waitmessage
# 140 "data/maps/EltheCity/scripts.pory"
	waitfanfare
# 141 "data/maps/EltheCity/scripts.pory"
	waitbuttonpress
# 142 "data/maps/EltheCity/scripts.pory"
	closemessage
# 143 "data/maps/EltheCity/scripts.pory"
	givemon SPECIES_ZOROARK, 48, ITEM_SILK_SCARF, ITEM_NEST_BALL, NATURE_CALM, 0, MON_MALE, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_NIGHT_DAZE, MOVE_AGILITY, MOVE_FLAMETHROWER, MOVE_HYPER_BEAM, FALSE, FALSE, TYPE_NORMAL
# 144 "data/maps/EltheCity/scripts.pory"
	setpartymemberinfo 4
# 145 "data/maps/EltheCity/scripts.pory"
	setvar VAR_MAIN_GAME_STATE, 30
	return


# 149 "data/maps/EltheCity/scripts.pory"
EltheCity_Movement_PythonSpinIn:
# 151 "data/maps/EltheCity/scripts.pory"
	face_down
# 152 "data/maps/EltheCity/scripts.pory"
	delay_4
# 153 "data/maps/EltheCity/scripts.pory"
	face_left
# 154 "data/maps/EltheCity/scripts.pory"
	delay_4
# 155 "data/maps/EltheCity/scripts.pory"
	face_up
# 156 "data/maps/EltheCity/scripts.pory"
	delay_2
# 157 "data/maps/EltheCity/scripts.pory"
	face_right
# 158 "data/maps/EltheCity/scripts.pory"
	delay_2
	step_end

# 161 "data/maps/EltheCity/scripts.pory"
EltheCity_Movement_PythonSpinOut:
# 163 "data/maps/EltheCity/scripts.pory"
	face_down
# 164 "data/maps/EltheCity/scripts.pory"
	delay_2
# 165 "data/maps/EltheCity/scripts.pory"
	face_left
# 166 "data/maps/EltheCity/scripts.pory"
	delay_2
# 167 "data/maps/EltheCity/scripts.pory"
	face_up
# 168 "data/maps/EltheCity/scripts.pory"
	delay_4
# 169 "data/maps/EltheCity/scripts.pory"
	face_right
# 170 "data/maps/EltheCity/scripts.pory"
	delay_4
# 171 "data/maps/EltheCity/scripts.pory"
	face_down
# 172 "data/maps/EltheCity/scripts.pory"
	delay_4
# 173 "data/maps/EltheCity/scripts.pory"
	face_player
	step_end

Test_ScriptGetInput::
# 178 "data/maps/EltheCity/scripts.pory"
	lock
# 179 "data/maps/EltheCity/scripts.pory"
	message Test_ScriptGetInput_Text_0
# 180 "data/maps/EltheCity/scripts.pory"
	waitmessage
Test_ScriptGetInput_2:
# 182 "data/maps/EltheCity/scripts.pory"
	waitforscriptinput
# 183 "data/maps/EltheCity/scripts.pory"
	switch VAR_RESULT
# 185 "data/maps/EltheCity/scripts.pory"
	case 0x0020, Test_ScriptGetInput_5
# 188 "data/maps/EltheCity/scripts.pory"
	case 0x0010, Test_ScriptGetInput_6
# 191 "data/maps/EltheCity/scripts.pory"
	case 0x0080, Test_ScriptGetInput_7
# 194 "data/maps/EltheCity/scripts.pory"
	case 0x0040, Test_ScriptGetInput_8
	goto Test_ScriptGetInput_2

# 199 "data/maps/EltheCity/scripts.pory"
	release
	return

Test_ScriptGetInput_5:
# 186 "data/maps/EltheCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, StepLeft
# 187 "data/maps/EltheCity/scripts.pory"
	waitmovement 0
	goto Test_ScriptGetInput_2

Test_ScriptGetInput_6:
# 189 "data/maps/EltheCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, StepRight
# 190 "data/maps/EltheCity/scripts.pory"
	waitmovement 0
	goto Test_ScriptGetInput_2

Test_ScriptGetInput_7:
# 192 "data/maps/EltheCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, StepDown
# 193 "data/maps/EltheCity/scripts.pory"
	waitmovement 0
	goto Test_ScriptGetInput_2

Test_ScriptGetInput_8:
# 195 "data/maps/EltheCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, StepUp
# 196 "data/maps/EltheCity/scripts.pory"
	waitmovement 0
	goto Test_ScriptGetInput_2


EltheCity_Sign_InnLeft::
# 204 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_Sign_InnLeft_Text_0, MSGBOX_SIGN
	return


EltheCity_Sign_InnRight::
# 209 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_EventScript_Python_Text_5, PORTRAIT_AMELIA_SERIOUSLY
# 210 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_Sign_InnRight_Text_0, MSGBOX_SIGN
	return


# 213 "data/maps/EltheCity/scripts.pory"
StepDown:
# 215 "data/maps/EltheCity/scripts.pory"
	walk_down
	step_end

# 218 "data/maps/EltheCity/scripts.pory"
StepUp:
# 220 "data/maps/EltheCity/scripts.pory"
	walk_up
	step_end

# 223 "data/maps/EltheCity/scripts.pory"
StepLeft:
# 225 "data/maps/EltheCity/scripts.pory"
	walk_left
	step_end

# 228 "data/maps/EltheCity/scripts.pory"
StepRight:
# 230 "data/maps/EltheCity/scripts.pory"
	walk_right
	step_end

EltheCity_Trigger_JumpOnBenchLeft_TopTile::
# 235 "data/maps/EltheCity/scripts.pory"
	setvar VAR_0x8004, ANIM_SIT_WEST
# 236 "data/maps/EltheCity/scripts.pory"
	callnative DoAmeliaOverworldAnim
# 237 "data/maps/EltheCity/scripts.pory"
	playse SE_BIKE_HOP
# 238 "data/maps/EltheCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, EltheCity_Movement_JumpOnBenchLeft
# 239 "data/maps/EltheCity/scripts.pory"
	waitmovement 0
# 240 "data/maps/EltheCity/scripts.pory"
	addobjectspriteoffset OBJ_EVENT_ID_PLAYER, 0, -6
EltheCity_Trigger_JumpOnBenchLeft_TopTile_3:
# 242 "data/maps/EltheCity/scripts.pory"
	waitforscriptinput
# 243 "data/maps/EltheCity/scripts.pory"
	switch VAR_RESULT
# 245 "data/maps/EltheCity/scripts.pory"
	case 0x0020, EltheCity_Trigger_JumpOnBenchLeft_TopTile_10
# 246 "data/maps/EltheCity/scripts.pory"
	case 0x0001, EltheCity_Trigger_JumpOnBenchLeft_TopTile_10
# 247 "data/maps/EltheCity/scripts.pory"
	case 0x0002, EltheCity_Trigger_JumpOnBenchLeft_TopTile_10
EltheCity_Trigger_JumpOnBenchLeft_TopTile_2:
# 267 "data/maps/EltheCity/scripts.pory"
	compare VAR_RESULT, 0x0020
	goto_if_ne EltheCity_Trigger_JumpOnBenchLeft_TopTile_5
EltheCity_Trigger_JumpOnBenchLeft_TopTile_1:
# 268 "data/maps/EltheCity/scripts.pory"
	release
	return

EltheCity_Trigger_JumpOnBenchLeft_TopTile_4:
# 267 "data/maps/EltheCity/scripts.pory"
	compare VAR_RESULT, 0x0002
	goto_if_ne EltheCity_Trigger_JumpOnBenchLeft_TopTile_3
	goto EltheCity_Trigger_JumpOnBenchLeft_TopTile_1

EltheCity_Trigger_JumpOnBenchLeft_TopTile_5:
# 267 "data/maps/EltheCity/scripts.pory"
	compare VAR_RESULT, 0x0001
	goto_if_ne EltheCity_Trigger_JumpOnBenchLeft_TopTile_4
	goto EltheCity_Trigger_JumpOnBenchLeft_TopTile_1

EltheCity_Trigger_JumpOnBenchLeft_TopTile_10:
# 248 "data/maps/EltheCity/scripts.pory"
	resetobjectspriteoffset OBJ_EVENT_ID_PLAYER
# 249 "data/maps/EltheCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, EltheCity_Movement_GetOffBenchLeft
# 250 "data/maps/EltheCity/scripts.pory"
	waitmovement 0
	goto EltheCity_Trigger_JumpOnBenchLeft_TopTile_2


EltheCity_Trigger_JumpOnBenchLeft_BottomTile::
# 273 "data/maps/EltheCity/scripts.pory"
	goto EltheCity_Trigger_JumpOnBenchLeft_TopTile
	return


EltheCity_Trigger_JumpOnBenchRight_TopTile::
# 278 "data/maps/EltheCity/scripts.pory"
	setvar VAR_0x8004, ANIM_SIT_EAST
# 279 "data/maps/EltheCity/scripts.pory"
	callnative DoAmeliaOverworldAnim
# 280 "data/maps/EltheCity/scripts.pory"
	playse SE_BIKE_HOP
# 281 "data/maps/EltheCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, EltheCity_Movement_JumpOnBenchRight
# 282 "data/maps/EltheCity/scripts.pory"
	waitmovement 0
# 283 "data/maps/EltheCity/scripts.pory"
	addobjectspriteoffset OBJ_EVENT_ID_PLAYER, 0, -6
EltheCity_Trigger_JumpOnBenchRight_TopTile_3:
# 285 "data/maps/EltheCity/scripts.pory"
	waitforscriptinput
# 286 "data/maps/EltheCity/scripts.pory"
	switch VAR_RESULT
# 288 "data/maps/EltheCity/scripts.pory"
	case 0x0010, EltheCity_Trigger_JumpOnBenchRight_TopTile_10
# 289 "data/maps/EltheCity/scripts.pory"
	case 0x0001, EltheCity_Trigger_JumpOnBenchRight_TopTile_10
# 290 "data/maps/EltheCity/scripts.pory"
	case 0x0002, EltheCity_Trigger_JumpOnBenchRight_TopTile_10
EltheCity_Trigger_JumpOnBenchRight_TopTile_2:
# 310 "data/maps/EltheCity/scripts.pory"
	compare VAR_RESULT, 0x0010
	goto_if_ne EltheCity_Trigger_JumpOnBenchRight_TopTile_5
EltheCity_Trigger_JumpOnBenchRight_TopTile_1:
# 311 "data/maps/EltheCity/scripts.pory"
	release
	return

EltheCity_Trigger_JumpOnBenchRight_TopTile_4:
# 310 "data/maps/EltheCity/scripts.pory"
	compare VAR_RESULT, 0x0002
	goto_if_ne EltheCity_Trigger_JumpOnBenchRight_TopTile_3
	goto EltheCity_Trigger_JumpOnBenchRight_TopTile_1

EltheCity_Trigger_JumpOnBenchRight_TopTile_5:
# 310 "data/maps/EltheCity/scripts.pory"
	compare VAR_RESULT, 0x0001
	goto_if_ne EltheCity_Trigger_JumpOnBenchRight_TopTile_4
	goto EltheCity_Trigger_JumpOnBenchRight_TopTile_1

EltheCity_Trigger_JumpOnBenchRight_TopTile_10:
# 291 "data/maps/EltheCity/scripts.pory"
	resetobjectspriteoffset OBJ_EVENT_ID_PLAYER
# 292 "data/maps/EltheCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, EltheCity_Movement_GetOffBenchRight
# 293 "data/maps/EltheCity/scripts.pory"
	waitmovement 0
	goto EltheCity_Trigger_JumpOnBenchRight_TopTile_2


EltheCity_Trigger_JumpOnBenchRight_BottomTile::
# 316 "data/maps/EltheCity/scripts.pory"
	goto EltheCity_Trigger_JumpOnBenchRight_TopTile
	return


EltheCity_EventScript_Keesight::
# 321 "data/maps/EltheCity/scripts.pory"
	goto_if_set FLAG_SCALE_ASCENDING_DONE, EltheCity_EventScript_Keesight_3
EltheCity_EventScript_Keesight_2:
# 328 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_EventScript_Keesight_Text_2, PORTRAIT_KEESIGHT
# 329 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_EventScript_Keesight_Text_3
# 330 "data/maps/EltheCity/scripts.pory"
	speakername NULL, 0
# 331 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_EventScript_Keesight_Text_4, MSGBOX_AUTOCLOSE
	return

EltheCity_EventScript_Keesight_1:
# 323 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_EventScript_Keesight_Text_0, PORTRAIT_KEESIGHT
# 324 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_EventScript_Keesight_Text_1, MSGBOX_NPC
	return

EltheCity_EventScript_Keesight_3:
# 321 "data/maps/EltheCity/scripts.pory"
	goto_if_set FLAG_SCALE_DESCENDING_DONE, EltheCity_EventScript_Keesight_1
	goto EltheCity_EventScript_Keesight_2


EltheCity_EventScript_Weatherbane::
# 337 "data/maps/EltheCity/scripts.pory"
	goto_if_unset FLAG_BEAT_WEATHERBANE, EltheCity_EventScript_Weatherbane_1
# 419 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_EventScript_Weatherbane_Text_1, PORTRAIT_WEATHERBANE_NEUTRAL
# 420 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_EventScript_Weatherbane_Text_16, MSGBOX_AUTOCLOSE
	return

EltheCity_EventScript_Weatherbane_1:
# 339 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_EventScript_Python_Text_5, PORTRAIT_AMELIA_NEUTRAL
# 340 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_EventScript_Weatherbane_Text_0, MSGBOX_AUTOCLOSE
# 341 "data/maps/EltheCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
# 342 "data/maps/EltheCity/scripts.pory"
	waitmovement 0
# 343 "data/maps/EltheCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
# 344 "data/maps/EltheCity/scripts.pory"
	waitmovement 0
# 345 "data/maps/EltheCity/scripts.pory"
	delay 16
# 346 "data/maps/EltheCity/scripts.pory"
	addobjectspriteoffset 1, 1, 0
# 347 "data/maps/EltheCity/scripts.pory"
	delay 8
# 348 "data/maps/EltheCity/scripts.pory"
	addobjectspriteoffset 1, -2, 0
# 349 "data/maps/EltheCity/scripts.pory"
	delay 8
# 350 "data/maps/EltheCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 351 "data/maps/EltheCity/scripts.pory"
	playse SE_PIN
# 352 "data/maps/EltheCity/scripts.pory"
	addobjectspriteoffset 1, 2, 0
# 353 "data/maps/EltheCity/scripts.pory"
	delay 8
# 354 "data/maps/EltheCity/scripts.pory"
	addobjectspriteoffset 1, -2, 0
# 355 "data/maps/EltheCity/scripts.pory"
	delay 8
# 356 "data/maps/EltheCity/scripts.pory"
	addobjectspriteoffset 1, 2, 0
# 357 "data/maps/EltheCity/scripts.pory"
	delay 8
# 358 "data/maps/EltheCity/scripts.pory"
	addobjectspriteoffset 1, -2, 0
# 359 "data/maps/EltheCity/scripts.pory"
	delay 8
# 360 "data/maps/EltheCity/scripts.pory"
	addobjectspriteoffset 1, 2, 0
# 361 "data/maps/EltheCity/scripts.pory"
	delay 8
# 362 "data/maps/EltheCity/scripts.pory"
	addobjectspriteoffset 1, -2, 0
# 363 "data/maps/EltheCity/scripts.pory"
	delay 8
# 364 "data/maps/EltheCity/scripts.pory"
	addobjectspriteoffset 1, 0, 0
# 365 "data/maps/EltheCity/scripts.pory"
	delay 16
# 366 "data/maps/EltheCity/scripts.pory"
	applymovement 1, EltheCity_Movement_WeatherbaneFlap
# 367 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_EventScript_Weatherbane_Text_1, PORTRAIT_WEATHERBANE_SCREAM
# 368 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_EventScript_Weatherbane_Text_2
# 369 "data/maps/EltheCity/scripts.pory"
	waitmovement 1
# 370 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_EventScript_Python_Text_5, PORTRAIT_AMELIA_STRAINED
# 371 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_EventScript_Weatherbane_Text_3
# 372 "data/maps/EltheCity/scripts.pory"
	applymovement 1, EltheCity_Movement_WeatherbaneFlap
# 373 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_EventScript_Weatherbane_Text_1, PORTRAIT_WEATHERBANE_SCREAM
# 374 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_EventScript_Weatherbane_Text_2
# 375 "data/maps/EltheCity/scripts.pory"
	waitmovement 1
# 376 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_EventScript_Python_Text_5, PORTRAIT_AMELIA_SHOCK
# 377 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_EventScript_Weatherbane_Text_4
# 378 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_EventScript_Weatherbane_Text_1, PORTRAIT_WEATHERBANE_NEUTRAL
# 379 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_EventScript_Python_Text_0
# 380 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_EventScript_Python_Text_5, PORTRAIT_AMELIA_NEUTRAL
# 381 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_EventScript_Weatherbane_Text_5
# 382 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_EventScript_Weatherbane_Text_1, PORTRAIT_WEATHERBANE_NEUTRAL
# 383 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_EventScript_Weatherbane_Text_6
# 385 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_EventScript_Python_Text_5, PORTRAIT_AMELIA_NEUTRAL
# 386 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_EventScript_Weatherbane_Text_7
# 387 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_EventScript_Weatherbane_Text_1, PORTRAIT_WEATHERBANE_SCREAM
# 388 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_EventScript_Weatherbane_Text_8
# 390 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_EventScript_Python_Text_5, PORTRAIT_AMELIA_STRAINED
# 391 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_EventScript_Weatherbane_Text_9
# 393 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_EventScript_Weatherbane_Text_1, PORTRAIT_WEATHERBANE_SCREAM
# 394 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_EventScript_Weatherbane_Text_10
# 395 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_EventScript_Python_Text_5, PORTRAIT_AMELIA_NEUTRAL
# 396 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_EventScript_Weatherbane_Text_11
# 397 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_EventScript_Weatherbane_Text_1, PORTRAIT_WEATHERBANE_NEUTRAL
# 398 "data/maps/EltheCity/scripts.pory"
	applymovement 1, EltheCity_Movement_WeatherbaneFlap
# 399 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_EventScript_Weatherbane_Text_12
# 400 "data/maps/EltheCity/scripts.pory"
	waitmovement 1
# 401 "data/maps/EltheCity/scripts.pory"
	closemessage
# 402 "data/maps/EltheCity/scripts.pory"
	createmon 1, 0, SPECIES_WEATHERBANE, 40, ITEM_NONE, 0, NATURE_CALM, 0, MON_MALE, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_STEEL_WING, MOVE_AIR_CUTTER, MOVE_SCREECH, MOVE_ROOST, FALSE, 0, TYPE_WATER
# 403 "data/maps/EltheCity/scripts.pory"
	dowildbattle
# 404 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_EventScript_Weatherbane_Text_1, PORTRAIT_WEATHERBANE_NEUTRAL
# 405 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_EventScript_Weatherbane_Text_13
# 406 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_EventScript_Python_Text_5, PORTRAIT_AMELIA_SERIOUSLY
# 407 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_EventScript_Weatherbane_Text_14, MSGBOX_AUTOCLOSE
# 408 "data/maps/EltheCity/scripts.pory"
	delay 60
# 409 "data/maps/EltheCity/scripts.pory"
	setflag FLAG_BEAT_WEATHERBANE
# 410 "data/maps/EltheCity/scripts.pory"
	playfanfare MUS_CAUGHT
# 411 "data/maps/EltheCity/scripts.pory"
	message EltheCity_EventScript_Weatherbane_Text_15
# 412 "data/maps/EltheCity/scripts.pory"
	waitmessage
# 413 "data/maps/EltheCity/scripts.pory"
	waitfanfare
# 414 "data/maps/EltheCity/scripts.pory"
	waitbuttonpress
# 415 "data/maps/EltheCity/scripts.pory"
	closemessage
	return


# 426 "data/maps/EltheCity/scripts.pory"
EltheCity_Movement_WeatherbaneFlap:
# 428 "data/maps/EltheCity/scripts.pory"
	face_up
# 429 "data/maps/EltheCity/scripts.pory"
	delay_8
# 430 "data/maps/EltheCity/scripts.pory"
	face_left
# 431 "data/maps/EltheCity/scripts.pory"
	delay_8
# 432 "data/maps/EltheCity/scripts.pory"
	face_down
# 433 "data/maps/EltheCity/scripts.pory"
	delay_8
# 434 "data/maps/EltheCity/scripts.pory"
	face_right
# 435 "data/maps/EltheCity/scripts.pory"
	delay_8
	step_end

EltheCity_Trigger_MusicStump1::
# 440 "data/maps/EltheCity/scripts.pory"
	playse SE_NOTE_C
# 441 "data/maps/EltheCity/scripts.pory"
	turnobject 9, DIR_WEST
# 444 "data/maps/EltheCity/scripts.pory"
	compare VAR_TEMP_2, 7
	goto_if_eq EltheCity_Trigger_MusicStump1_4
EltheCity_Trigger_MusicStump1_3:
# 468 "data/maps/EltheCity/scripts.pory"
	setvar VAR_TEMP_2, 0
# 469 "data/maps/EltheCity/scripts.pory"
	setvar VAR_TEMP_1, 1
EltheCity_Trigger_MusicStump1_1:
# 472 "data/maps/EltheCity/scripts.pory"
	release
	return

EltheCity_Trigger_MusicStump1_2:
# 446 "data/maps/EltheCity/scripts.pory"
	delay 60
# 447 "data/maps/EltheCity/scripts.pory"
	applymovement 9, EltheCity_Movement_KeesightHops
# 448 "data/maps/EltheCity/scripts.pory"
	playse SE_BIKE_HOP
# 449 "data/maps/EltheCity/scripts.pory"
	delay 16
# 450 "data/maps/EltheCity/scripts.pory"
	playse SE_BIKE_HOP
# 451 "data/maps/EltheCity/scripts.pory"
	delay 32
# 452 "data/maps/EltheCity/scripts.pory"
	playmoncry SPECIES_WOOBAT, CRY_MODE_NORMAL
# 453 "data/maps/EltheCity/scripts.pory"
	waitmoncry
# 454 "data/maps/EltheCity/scripts.pory"
	delay 30
# 455 "data/maps/EltheCity/scripts.pory"
	applymovement 9, Common_Movement_FaceUp
# 456 "data/maps/EltheCity/scripts.pory"
	waitmovement 0
# 457 "data/maps/EltheCity/scripts.pory"
	delay 16
# 458 "data/maps/EltheCity/scripts.pory"
	playse SE_M_SUPERSONIC
# 459 "data/maps/EltheCity/scripts.pory"
	applymovement 11, EltheCity_Movement_MoveUmbrashard
# 460 "data/maps/EltheCity/scripts.pory"
	waitmovement 0
# 461 "data/maps/EltheCity/scripts.pory"
	applymovement 9, Common_Movement_FaceDown
# 462 "data/maps/EltheCity/scripts.pory"
	waitmovement 0
# 463 "data/maps/EltheCity/scripts.pory"
	setobjectxyperm 11, 11, 21
# 464 "data/maps/EltheCity/scripts.pory"
	setflag FLAG_SCALE_DESCENDING_DONE
	goto EltheCity_Trigger_MusicStump1_1

EltheCity_Trigger_MusicStump1_4:
# 444 "data/maps/EltheCity/scripts.pory"
	goto_if_unset FLAG_SCALE_DESCENDING_DONE, EltheCity_Trigger_MusicStump1_2
	goto EltheCity_Trigger_MusicStump1_3


EltheCity_Trigger_MusicStump2::
# 477 "data/maps/EltheCity/scripts.pory"
	playse SE_NOTE_D
# 478 "data/maps/EltheCity/scripts.pory"
	turnobject 9, DIR_WEST
# 481 "data/maps/EltheCity/scripts.pory"
	compare VAR_TEMP_1, 1
	goto_if_eq EltheCity_Trigger_MusicStump2_2
# 487 "data/maps/EltheCity/scripts.pory"
	setvar VAR_TEMP_1, 0
EltheCity_Trigger_MusicStump2_1:
# 491 "data/maps/EltheCity/scripts.pory"
	compare VAR_TEMP_2, 6
	goto_if_eq EltheCity_Trigger_MusicStump2_6
# 497 "data/maps/EltheCity/scripts.pory"
	setvar VAR_TEMP_2, 0
EltheCity_Trigger_MusicStump2_5:
# 500 "data/maps/EltheCity/scripts.pory"
	release
	return

EltheCity_Trigger_MusicStump2_2:
# 483 "data/maps/EltheCity/scripts.pory"
	addvar VAR_TEMP_1, 1
	goto EltheCity_Trigger_MusicStump2_1

EltheCity_Trigger_MusicStump2_6:
# 493 "data/maps/EltheCity/scripts.pory"
	addvar VAR_TEMP_2, 1
	goto EltheCity_Trigger_MusicStump2_5


EltheCity_Trigger_MusicStump3::
# 505 "data/maps/EltheCity/scripts.pory"
	playse SE_NOTE_E
# 506 "data/maps/EltheCity/scripts.pory"
	turnobject 9, DIR_WEST
# 509 "data/maps/EltheCity/scripts.pory"
	compare VAR_TEMP_1, 2
	goto_if_eq EltheCity_Trigger_MusicStump3_2
# 515 "data/maps/EltheCity/scripts.pory"
	setvar VAR_TEMP_1, 0
EltheCity_Trigger_MusicStump3_1:
# 519 "data/maps/EltheCity/scripts.pory"
	compare VAR_TEMP_2, 5
	goto_if_eq EltheCity_Trigger_MusicStump3_6
# 525 "data/maps/EltheCity/scripts.pory"
	setvar VAR_TEMP_2, 0
EltheCity_Trigger_MusicStump3_5:
# 528 "data/maps/EltheCity/scripts.pory"
	release
	return

EltheCity_Trigger_MusicStump3_2:
# 511 "data/maps/EltheCity/scripts.pory"
	addvar VAR_TEMP_1, 1
	goto EltheCity_Trigger_MusicStump3_1

EltheCity_Trigger_MusicStump3_6:
# 521 "data/maps/EltheCity/scripts.pory"
	addvar VAR_TEMP_2, 1
	goto EltheCity_Trigger_MusicStump3_5


EltheCity_Trigger_MusicStump4::
# 533 "data/maps/EltheCity/scripts.pory"
	playse SE_NOTE_F
# 534 "data/maps/EltheCity/scripts.pory"
	turnobject 9, DIR_SOUTH
# 537 "data/maps/EltheCity/scripts.pory"
	compare VAR_TEMP_1, 3
	goto_if_eq EltheCity_Trigger_MusicStump4_2
# 543 "data/maps/EltheCity/scripts.pory"
	setvar VAR_TEMP_1, 0
EltheCity_Trigger_MusicStump4_1:
# 547 "data/maps/EltheCity/scripts.pory"
	compare VAR_TEMP_2, 4
	goto_if_eq EltheCity_Trigger_MusicStump4_6
# 553 "data/maps/EltheCity/scripts.pory"
	setvar VAR_TEMP_2, 0
EltheCity_Trigger_MusicStump4_5:
# 556 "data/maps/EltheCity/scripts.pory"
	release
	return

EltheCity_Trigger_MusicStump4_2:
# 539 "data/maps/EltheCity/scripts.pory"
	addvar VAR_TEMP_1, 1
	goto EltheCity_Trigger_MusicStump4_1

EltheCity_Trigger_MusicStump4_6:
# 549 "data/maps/EltheCity/scripts.pory"
	addvar VAR_TEMP_2, 1
	goto EltheCity_Trigger_MusicStump4_5


EltheCity_Trigger_MusicStump5::
# 561 "data/maps/EltheCity/scripts.pory"
	playse SE_NOTE_G
# 562 "data/maps/EltheCity/scripts.pory"
	turnobject 9, DIR_SOUTH
# 565 "data/maps/EltheCity/scripts.pory"
	compare VAR_TEMP_1, 4
	goto_if_eq EltheCity_Trigger_MusicStump5_2
# 571 "data/maps/EltheCity/scripts.pory"
	setvar VAR_TEMP_1, 0
EltheCity_Trigger_MusicStump5_1:
# 575 "data/maps/EltheCity/scripts.pory"
	compare VAR_TEMP_2, 3
	goto_if_eq EltheCity_Trigger_MusicStump5_6
# 581 "data/maps/EltheCity/scripts.pory"
	setvar VAR_TEMP_2, 0
EltheCity_Trigger_MusicStump5_5:
# 584 "data/maps/EltheCity/scripts.pory"
	release
	return

EltheCity_Trigger_MusicStump5_2:
# 567 "data/maps/EltheCity/scripts.pory"
	addvar VAR_TEMP_1, 1
	goto EltheCity_Trigger_MusicStump5_1

EltheCity_Trigger_MusicStump5_6:
# 577 "data/maps/EltheCity/scripts.pory"
	addvar VAR_TEMP_2, 1
	goto EltheCity_Trigger_MusicStump5_5


EltheCity_Trigger_MusicStump6::
# 589 "data/maps/EltheCity/scripts.pory"
	playse SE_NOTE_A
# 590 "data/maps/EltheCity/scripts.pory"
	turnobject 9, DIR_EAST
# 593 "data/maps/EltheCity/scripts.pory"
	compare VAR_TEMP_1, 5
	goto_if_eq EltheCity_Trigger_MusicStump6_2
# 599 "data/maps/EltheCity/scripts.pory"
	setvar VAR_TEMP_1, 0
EltheCity_Trigger_MusicStump6_1:
# 603 "data/maps/EltheCity/scripts.pory"
	compare VAR_TEMP_2, 2
	goto_if_eq EltheCity_Trigger_MusicStump6_6
# 609 "data/maps/EltheCity/scripts.pory"
	setvar VAR_TEMP_2, 0
EltheCity_Trigger_MusicStump6_5:
# 612 "data/maps/EltheCity/scripts.pory"
	release
	return

EltheCity_Trigger_MusicStump6_2:
# 595 "data/maps/EltheCity/scripts.pory"
	addvar VAR_TEMP_1, 1
	goto EltheCity_Trigger_MusicStump6_1

EltheCity_Trigger_MusicStump6_6:
# 605 "data/maps/EltheCity/scripts.pory"
	addvar VAR_TEMP_2, 1
	goto EltheCity_Trigger_MusicStump6_5


EltheCity_Trigger_MusicStump7::
# 617 "data/maps/EltheCity/scripts.pory"
	playse SE_NOTE_B
# 618 "data/maps/EltheCity/scripts.pory"
	turnobject 9, DIR_EAST
# 621 "data/maps/EltheCity/scripts.pory"
	compare VAR_TEMP_1, 6
	goto_if_eq EltheCity_Trigger_MusicStump7_2
# 627 "data/maps/EltheCity/scripts.pory"
	setvar VAR_TEMP_1, 0
EltheCity_Trigger_MusicStump7_1:
# 631 "data/maps/EltheCity/scripts.pory"
	compare VAR_TEMP_2, 1
	goto_if_eq EltheCity_Trigger_MusicStump7_6
# 637 "data/maps/EltheCity/scripts.pory"
	setvar VAR_TEMP_2, 0
EltheCity_Trigger_MusicStump7_5:
# 640 "data/maps/EltheCity/scripts.pory"
	release
	return

EltheCity_Trigger_MusicStump7_2:
# 623 "data/maps/EltheCity/scripts.pory"
	addvar VAR_TEMP_1, 1
	goto EltheCity_Trigger_MusicStump7_1

EltheCity_Trigger_MusicStump7_6:
# 633 "data/maps/EltheCity/scripts.pory"
	addvar VAR_TEMP_2, 1
	goto EltheCity_Trigger_MusicStump7_5


EltheCity_Trigger_MusicStump8::
# 645 "data/maps/EltheCity/scripts.pory"
	playse SE_NOTE_C_HIGH
# 646 "data/maps/EltheCity/scripts.pory"
	turnobject 9, DIR_EAST
# 650 "data/maps/EltheCity/scripts.pory"
	compare VAR_TEMP_1, 7
	goto_if_eq EltheCity_Trigger_MusicStump8_4
EltheCity_Trigger_MusicStump8_3:
# 674 "data/maps/EltheCity/scripts.pory"
	setvar VAR_TEMP_1, 0
# 675 "data/maps/EltheCity/scripts.pory"
	setvar VAR_TEMP_2, 1
EltheCity_Trigger_MusicStump8_1:
# 678 "data/maps/EltheCity/scripts.pory"
	release
	return

EltheCity_Trigger_MusicStump8_2:
# 652 "data/maps/EltheCity/scripts.pory"
	delay 60
# 653 "data/maps/EltheCity/scripts.pory"
	applymovement 9, EltheCity_Movement_KeesightHops
# 654 "data/maps/EltheCity/scripts.pory"
	playse SE_BIKE_HOP
# 655 "data/maps/EltheCity/scripts.pory"
	delay 16
# 656 "data/maps/EltheCity/scripts.pory"
	playse SE_BIKE_HOP
# 657 "data/maps/EltheCity/scripts.pory"
	delay 32
# 658 "data/maps/EltheCity/scripts.pory"
	playmoncry SPECIES_WOOBAT, CRY_MODE_NORMAL
# 659 "data/maps/EltheCity/scripts.pory"
	waitmoncry
# 660 "data/maps/EltheCity/scripts.pory"
	delay 30
# 661 "data/maps/EltheCity/scripts.pory"
	applymovement 9, Common_Movement_FaceUp
# 662 "data/maps/EltheCity/scripts.pory"
	waitmovement 0
# 663 "data/maps/EltheCity/scripts.pory"
	delay 16
# 664 "data/maps/EltheCity/scripts.pory"
	playse SE_M_SUPERSONIC
# 665 "data/maps/EltheCity/scripts.pory"
	applymovement 10, EltheCity_Movement_MoveEspershard
# 666 "data/maps/EltheCity/scripts.pory"
	waitmovement 0
# 667 "data/maps/EltheCity/scripts.pory"
	applymovement 9, Common_Movement_FaceDown
# 668 "data/maps/EltheCity/scripts.pory"
	waitmovement 0
# 669 "data/maps/EltheCity/scripts.pory"
	setobjectxyperm 10, 13, 21
# 670 "data/maps/EltheCity/scripts.pory"
	setflag FLAG_SCALE_ASCENDING_DONE
	goto EltheCity_Trigger_MusicStump8_1

EltheCity_Trigger_MusicStump8_4:
# 650 "data/maps/EltheCity/scripts.pory"
	goto_if_unset FLAG_SCALE_ASCENDING_DONE, EltheCity_Trigger_MusicStump8_2
	goto EltheCity_Trigger_MusicStump8_3


# 687 "data/maps/EltheCity/scripts.pory"
EltheCity_Movement_KeesightHops:
# 689 "data/maps/EltheCity/scripts.pory"
	jump_in_place_down
# 689 "data/maps/EltheCity/scripts.pory"
	jump_in_place_down
	step_end

# 692 "data/maps/EltheCity/scripts.pory"
EltheCity_Movement_MoveUmbrashard:
# 694 "data/maps/EltheCity/scripts.pory"
	levitate
# 695 "data/maps/EltheCity/scripts.pory"
	delay_16
# 696 "data/maps/EltheCity/scripts.pory"
	walk_up
# 696 "data/maps/EltheCity/scripts.pory"
	walk_up
# 696 "data/maps/EltheCity/scripts.pory"
	walk_up
# 697 "data/maps/EltheCity/scripts.pory"
	walk_right
# 697 "data/maps/EltheCity/scripts.pory"
	walk_right
# 697 "data/maps/EltheCity/scripts.pory"
	walk_right
# 697 "data/maps/EltheCity/scripts.pory"
	walk_right
# 697 "data/maps/EltheCity/scripts.pory"
	walk_right
# 697 "data/maps/EltheCity/scripts.pory"
	walk_right
# 697 "data/maps/EltheCity/scripts.pory"
	walk_right
# 697 "data/maps/EltheCity/scripts.pory"
	walk_right
# 698 "data/maps/EltheCity/scripts.pory"
	walk_up
# 699 "data/maps/EltheCity/scripts.pory"
	delay_16
# 700 "data/maps/EltheCity/scripts.pory"
	stop_levitate
	step_end

# 703 "data/maps/EltheCity/scripts.pory"
EltheCity_Movement_MoveEspershard:
# 705 "data/maps/EltheCity/scripts.pory"
	levitate
# 706 "data/maps/EltheCity/scripts.pory"
	delay_16
# 707 "data/maps/EltheCity/scripts.pory"
	walk_left
# 707 "data/maps/EltheCity/scripts.pory"
	walk_left
# 707 "data/maps/EltheCity/scripts.pory"
	walk_left
# 707 "data/maps/EltheCity/scripts.pory"
	walk_left
# 707 "data/maps/EltheCity/scripts.pory"
	walk_left
# 707 "data/maps/EltheCity/scripts.pory"
	walk_left
# 707 "data/maps/EltheCity/scripts.pory"
	walk_left
# 707 "data/maps/EltheCity/scripts.pory"
	walk_left
# 708 "data/maps/EltheCity/scripts.pory"
	walk_up
# 709 "data/maps/EltheCity/scripts.pory"
	delay_16
# 710 "data/maps/EltheCity/scripts.pory"
	stop_levitate
	step_end

# 713 "data/maps/EltheCity/scripts.pory"
EltheCity_Movement_JumpOnBenchLeft:
# 715 "data/maps/EltheCity/scripts.pory"
	lock_anim
# 716 "data/maps/EltheCity/scripts.pory"
	jump_in_place_left
	step_end

# 719 "data/maps/EltheCity/scripts.pory"
EltheCity_Movement_GetOffBenchLeft:
# 721 "data/maps/EltheCity/scripts.pory"
	unlock_anim
# 722 "data/maps/EltheCity/scripts.pory"
	walk_slow_left
	step_end

# 725 "data/maps/EltheCity/scripts.pory"
EltheCity_Movement_JumpOnBenchRight:
# 727 "data/maps/EltheCity/scripts.pory"
	lock_anim
# 728 "data/maps/EltheCity/scripts.pory"
	jump_in_place_right
	step_end

# 731 "data/maps/EltheCity/scripts.pory"
EltheCity_Movement_GetOffBenchRight:
# 733 "data/maps/EltheCity/scripts.pory"
	unlock_anim
# 734 "data/maps/EltheCity/scripts.pory"
	walk_slow_right
	step_end

# 737 "data/maps/EltheCity/scripts.pory"
EltheCity_Movement_MoveDownBench:
# 739 "data/maps/EltheCity/scripts.pory"
	walk_slow_down
	step_end

# 742 "data/maps/EltheCity/scripts.pory"
EltheCity_Movement_MoveUpBench:
# 744 "data/maps/EltheCity/scripts.pory"
	walk_slow_up
	step_end

EltheCity_EventScript_Python_Text_0:
# 72 "data/maps/EltheCity/scripts.pory"
	.string "… … … … …$"

EltheCity_EventScript_Python_Text_1:
# 77 "data/maps/EltheCity/scripts.pory"
	.string "Bradley$"

EltheCity_EventScript_Python_Text_2:
# 78 "data/maps/EltheCity/scripts.pory"
	.string "…The footsteps sound wrong.\n"
	.string "This is him.$"

EltheCity_EventScript_Python_Text_3:
# 91 "data/maps/EltheCity/scripts.pory"
	.string "Python$"

EltheCity_EventScript_Python_Text_4:
# 92 "data/maps/EltheCity/scripts.pory"
	.string "Finally found me, eh, Amelia?\n"
	.string "Took you long enough.$"

EltheCity_EventScript_Python_Text_5:
# 93 "data/maps/EltheCity/scripts.pory"
	.string "Amelia$"

EltheCity_EventScript_Python_Text_6:
# 94 "data/maps/EltheCity/scripts.pory"
	.string "Look, I've got a Poké Ball here\n"
	.string "that says…$"

EltheCity_EventScript_Python_Text_7:
# 96 "data/maps/EltheCity/scripts.pory"
	.string "Wait, you still remember me!?$"

EltheCity_EventScript_Python_Text_8:
# 98 "data/maps/EltheCity/scripts.pory"
	.string "Of course! This memory charm is the\n"
	.string "work of a Psychic type Pokémon.\p"
	.string "I'm a Dark type, so it doesn't affect\n"
	.string "me at all!\l"
	.string "I just chose to hide from you because\l"
	.string "watching you run around was fun.$"

EltheCity_EventScript_Python_Text_9:
# 110 "data/maps/EltheCity/scripts.pory"
	.string "Excuse me, have you seen my dragon?\n"
	.string "Excuse me, can I get a room?\l"
	.string "Excuse me, can you renounce your god?\l"
	.string "Excuse me, have you seen my arm?\l"
	.string "You can't miss it, it's green!$"

EltheCity_EventScript_Python_Text_10:
# 112 "data/maps/EltheCity/scripts.pory"
	.string "Keheheheh!$"

EltheCity_EventScript_Python_Text_11:
# 114 "data/maps/EltheCity/scripts.pory"
	.string "That seems a little uncalled for.\n"
	.string "I was worried about you, you know…$"

EltheCity_EventScript_Python_Text_12:
# 116 "data/maps/EltheCity/scripts.pory"
	.string "Hey, wait, you said this is caused\n"
	.string "by a Psychic type Pokémon?\p"
	.string "Do you think if we beat it, our\n"
	.string "memories will come back?$"

EltheCity_EventScript_Python_Text_13:
# 130 "data/maps/EltheCity/scripts.pory"
	.string "Eh. Probably. It's not erasing\n"
	.string "memories, just suppressing them, so\l"
	.string "they should come back if it stops.\p"
	.string "It's hiding out in that shrine near\n"
	.string "the church. Let's go check it out.$"

EltheCity_EventScript_Python_Text_14:
# 138 "data/maps/EltheCity/scripts.pory"
	.string "You recalled Python the Zoroark!$"

Test_ScriptGetInput_Text_0:
# 179 "data/maps/EltheCity/scripts.pory"
	.string "Which button will you press?$"

EltheCity_Sign_InnLeft_Text_0:
# 204 "data/maps/EltheCity/scripts.pory"
	.string "Elysi Inn$"

EltheCity_Sign_InnRight_Text_0:
# 210 "data/maps/EltheCity/scripts.pory"
	.string "Phew, these room prices…I'm glad\n"
	.string "Pokémon Centers were free…\p"
	.string "Then again, not like I have any\n"
	.string "money anyway…$"

EltheCity_EventScript_Keesight_Text_0:
# 323 "data/maps/EltheCity/scripts.pory"
	.string "Keesight$"

EltheCity_EventScript_Keesight_Text_1:
# 324 "data/maps/EltheCity/scripts.pory"
	.string "… … … … …\n"
	.string "Thanks for the song.$"

EltheCity_EventScript_Keesight_Text_2:
# 328 "data/maps/EltheCity/scripts.pory"
	.string "Batmon$"

EltheCity_EventScript_Keesight_Text_3:
# 329 "data/maps/EltheCity/scripts.pory"
	.string "… … … … … … … … … …$"

EltheCity_EventScript_Keesight_Text_4:
# 331 "data/maps/EltheCity/scripts.pory"
	.string "The Pokémon is staring intently\n"
	.string "at the pond…$"

EltheCity_EventScript_Weatherbane_Text_0:
# 340 "data/maps/EltheCity/scripts.pory"
	.string "So this is the thing I'm supposed\n"
	.string "to fix? It's, what, squeaky?$"

EltheCity_EventScript_Weatherbane_Text_1:
# 367 "data/maps/EltheCity/scripts.pory"
	.string "Weatherbane$"

EltheCity_EventScript_Weatherbane_Text_2:
# 368 "data/maps/EltheCity/scripts.pory"
	.string "Skrraaaaaaaaaaaw! Skrraaaaaaaaaaaw!$"

EltheCity_EventScript_Weatherbane_Text_3:
# 371 "data/maps/EltheCity/scripts.pory"
	.string "…Geez. It's a Pokémon?\n"
	.string "Well, it sure is noisy…$"

EltheCity_EventScript_Weatherbane_Text_4:
# 377 "data/maps/EltheCity/scripts.pory"
	.string "Hey! Shut the f{CENSOR}uck{UNCENSOR} up!$"

EltheCity_EventScript_Weatherbane_Text_5:
# 381 "data/maps/EltheCity/scripts.pory"
	.string "Why are you yelling?$"

EltheCity_EventScript_Weatherbane_Text_6:
# 383 "data/maps/EltheCity/scripts.pory"
	.string "The rain! The rain! I'm trying to\n"
	.string "make the rain go away!\p"
	.string "My cries can chase away storms.\n"
	.string "But this rain just keeps coming back!\l"
	.string "Begone! Begone!$"

EltheCity_EventScript_Weatherbane_Text_7:
# 386 "data/maps/EltheCity/scripts.pory"
	.string "So it's not a natural rainstorm?\n"
	.string "Maybe a Pokémon is summoning it…$"

EltheCity_EventScript_Weatherbane_Text_8:
# 388 "data/maps/EltheCity/scripts.pory"
	.string "Not natural! Not natural!\n"
	.string "Can't you feel it?\p"
	.string "The rain washes away your darkness.\n"
	.string "Makes you a carefree person.\l"
	.string "A fake person.\l"
	.string "Must be stopped! Must be stopped!$"

EltheCity_EventScript_Weatherbane_Text_9:
# 391 "data/maps/EltheCity/scripts.pory"
	.string "Look, I know! Something's messing\n"
	.string "with my head. It could be the same\l"
	.string "thing that's causing the rain.\p"
	.string "I'm working on it. But my job right\n"
	.string "now is to get you to quiet down.$"

EltheCity_EventScript_Weatherbane_Text_10:
# 394 "data/maps/EltheCity/scripts.pory"
	.string "Can't shut up! Can't shut up!\p"
	.string "Begone! Begone!$"

EltheCity_EventScript_Weatherbane_Text_11:
# 396 "data/maps/EltheCity/scripts.pory"
	.string "What if I promise to clear up this\n"
	.string "rain? Will that shut you up?$"

EltheCity_EventScript_Weatherbane_Text_12:
# 399 "data/maps/EltheCity/scripts.pory"
	.string "Maybe. Maybe.\p"
	.string "Show me you're strong enough!\n"
	.string "I think you're weak! Weak!$"

EltheCity_EventScript_Weatherbane_Text_13:
# 405 "data/maps/EltheCity/scripts.pory"
	.string "Okay! Okay! You're good! You're good!\p"
	.string "I trust you. You will stop the rain.\n"
	.string "Amelia, Sun-Bringer! Hail! Hail!$"

EltheCity_EventScript_Weatherbane_Text_14:
# 407 "data/maps/EltheCity/scripts.pory"
	.string "Please don't call me that ever again.$"

EltheCity_EventScript_Weatherbane_Text_15:
# 411 "data/maps/EltheCity/scripts.pory"
	.string "Finished the Innkeeper's request!$"

EltheCity_EventScript_Weatherbane_Text_16:
# 420 "data/maps/EltheCity/scripts.pory"
	.string "I used to love the sun.\n"
	.string "Fire types feared me.\p"
	.string "But now I'm too old! Too old!\n"
	.string "Can't take the heat like I used to.\p"
	.string "But I'd still like to see the sun\n"
	.string "again. Too wet! Too wet!$"
