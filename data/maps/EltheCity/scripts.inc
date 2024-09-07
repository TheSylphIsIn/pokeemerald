EltheCity_MapScripts::
# 17 "data/maps/EltheCity/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, EltheCity_MapScripts_MAP_SCRIPT_ON_LOAD
# 28 "data/maps/EltheCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, EltheCity_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

EltheCity_MapScripts_MAP_SCRIPT_ON_LOAD:
# 19 "data/maps/EltheCity/scripts.pory"
	setrespawn HEAL_LOCATION_ELTHE_CITY
# 20 "data/maps/EltheCity/scripts.pory"
	goto_if_set FLAG_STARTED_WEATHERBANE_QUEST, EltheCity_MapScripts_MAP_SCRIPT_ON_LOAD_1
	return

EltheCity_MapScripts_MAP_SCRIPT_ON_LOAD_1:
# 22 "data/maps/EltheCity/scripts.pory"
	setmetatile 5, 31, 0x387, FALSE
# 23 "data/maps/EltheCity/scripts.pory"
	setmetatile 5, 30, 0x37F, FALSE
# 24 "data/maps/EltheCity/scripts.pory"
	setmetatile 5, 29, 0x377, FALSE
# 25 "data/maps/EltheCity/scripts.pory"
	setmetatile 5, 28, 0x36F, FALSE
	return

EltheCity_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 29 "data/maps/EltheCity/scripts.pory"
	goto_if_set FLAG_SCALE_DESCENDING_DONE, EltheCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
EltheCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 33 "data/maps/EltheCity/scripts.pory"
	goto_if_set FLAG_SCALE_ASCENDING_DONE, EltheCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
EltheCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 38 "data/maps/EltheCity/scripts.pory"
	compare VAR_MAIN_GAME_STATE, 4
	goto_if_eq EltheCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_8
EltheCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_7:
# 43 "data/maps/EltheCity/scripts.pory"
	goto_if_unset FLAG_GOT_PYTHON, EltheCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_10
	return

EltheCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 31 "data/maps/EltheCity/scripts.pory"
	setobjectxyperm 11, 11, 21
	goto EltheCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

EltheCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_5:
# 35 "data/maps/EltheCity/scripts.pory"
	setobjectxyperm 10, 13, 21
	goto EltheCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_4

EltheCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_8:
# 40 "data/maps/EltheCity/scripts.pory"
	setvar VAR_MAIN_GAME_STATE, 5
	goto EltheCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_7

EltheCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_10:
# 45 "data/maps/EltheCity/scripts.pory"
	random 4
# 46 "data/maps/EltheCity/scripts.pory"
	copyvar VAR_TEMP_F, VAR_RESULT
# 47 "data/maps/EltheCity/scripts.pory"
	switch VAR_TEMP_F
# 49 "data/maps/EltheCity/scripts.pory"
	case 0, EltheCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_13
# 53 "data/maps/EltheCity/scripts.pory"
	case 1, EltheCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_14
# 57 "data/maps/EltheCity/scripts.pory"
	case 2, EltheCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_15
# 61 "data/maps/EltheCity/scripts.pory"
	case 3, EltheCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_16
	return

EltheCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_13:
# 50 "data/maps/EltheCity/scripts.pory"
	setobjectxyperm 2, 34, 7
# 51 "data/maps/EltheCity/scripts.pory"
	setobjectmovementtype 2, MOVEMENT_TYPE_FACE_LEFT
# 52 "data/maps/EltheCity/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_MAN_2
	return

EltheCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_14:
# 54 "data/maps/EltheCity/scripts.pory"
	setobjectxyperm 2, 29, 34
# 55 "data/maps/EltheCity/scripts.pory"
	setobjectmovementtype 2, MOVEMENT_TYPE_WANDER_LEFT_AND_RIGHT
# 56 "data/maps/EltheCity/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_MAN_5
	return

EltheCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_15:
# 58 "data/maps/EltheCity/scripts.pory"
	setobjectxyperm 2, 6, 26
# 59 "data/maps/EltheCity/scripts.pory"
	setobjectmovementtype 2, MOVEMENT_TYPE_LOOK_AROUND
# 60 "data/maps/EltheCity/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_SPECIES ( POLIWHIRL )
	return

EltheCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_16:
# 62 "data/maps/EltheCity/scripts.pory"
	setobjectxyperm 2, 28, 15
# 63 "data/maps/EltheCity/scripts.pory"
	setobjectmovementtype 2, MOVEMENT_TYPE_WANDER_DOWN_AND_UP
# 64 "data/maps/EltheCity/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_MAN_2
	return


EltheCity_EventScript_Python::
# 74 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_EventScript_Python_Text_0, MSGBOX_NPC
# 75 "data/maps/EltheCity/scripts.pory"
	special GetLeadMonSpecies
# 76 "data/maps/EltheCity/scripts.pory"
	compare VAR_RESULT, SPECIES_NIDOKING
	goto_if_eq EltheCity_EventScript_Python_2
	return

EltheCity_EventScript_Python_1:
# 78 "data/maps/EltheCity/scripts.pory"
	lock
# 79 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_EventScript_Python_Text_1, PORTRAIT_NIDOKING_NEUTRAL
# 80 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_EventScript_Python_Text_2, MSGBOX_AUTOCLOSE
# 81 "data/maps/EltheCity/scripts.pory"
	playse SE_PIN
# 82 "data/maps/EltheCity/scripts.pory"
	applymovement 2, Common_Movement_ExclamationMark
# 83 "data/maps/EltheCity/scripts.pory"
	delay 48
# 84 "data/maps/EltheCity/scripts.pory"
	applymovement 2, EltheCity_Movement_PythonSpinIn
# 85 "data/maps/EltheCity/scripts.pory"
	waitmovement 0
# 86 "data/maps/EltheCity/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_SPECIES ( ZOROARK )
# 87 "data/maps/EltheCity/scripts.pory"
	removeobject VAR_LAST_TALKED
# 88 "data/maps/EltheCity/scripts.pory"
	addobject VAR_LAST_TALKED
# 89 "data/maps/EltheCity/scripts.pory"
	applymovement 2, EltheCity_Movement_PythonSpinOut
# 90 "data/maps/EltheCity/scripts.pory"
	waitmovement 0
# 91 "data/maps/EltheCity/scripts.pory"
	lock
# 92 "data/maps/EltheCity/scripts.pory"
	faceplayer
# 93 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_EventScript_Python_Text_3, PORTRAIT_ZOROARK_NEUTRAL
# 94 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_EventScript_Python_Text_4
# 95 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_EventScript_Python_Text_5, PORTRAIT_AMELIA_NEUTRAL
# 96 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_EventScript_Python_Text_6
# 97 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_EventScript_Python_Text_5, PORTRAIT_AMELIA_SHOCK
# 98 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_EventScript_Python_Text_7
# 99 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_EventScript_Python_Text_3, PORTRAIT_ZOROARK_NEUTRAL
# 100 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_EventScript_Python_Text_8, MSGBOX_AUTOCLOSE
# 102 "data/maps/EltheCity/scripts.pory"
	applymovement 2, EltheCity_Movement_PythonSpinIn
# 103 "data/maps/EltheCity/scripts.pory"
	waitmovement 0
# 104 "data/maps/EltheCity/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_MAY_NORMAL
# 105 "data/maps/EltheCity/scripts.pory"
	removeobject VAR_LAST_TALKED
# 106 "data/maps/EltheCity/scripts.pory"
	addobject VAR_LAST_TALKED
# 107 "data/maps/EltheCity/scripts.pory"
	applymovement 2, EltheCity_Movement_PythonSpinOut
# 108 "data/maps/EltheCity/scripts.pory"
	waitmovement 0
# 109 "data/maps/EltheCity/scripts.pory"
	lock
# 110 "data/maps/EltheCity/scripts.pory"
	faceplayer
# 111 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_EventScript_Python_Text_3, PORTRAIT_AMELIA_SMUG
# 112 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_EventScript_Python_Text_9
# 113 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_EventScript_Python_Text_3, PORTRAIT_AMELIA_WINK
# 114 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_EventScript_Python_Text_10
# 115 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_EventScript_Python_Text_5, PORTRAIT_AMELIA_SERIOUSLY
# 116 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_EventScript_Python_Text_11
# 117 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_EventScript_Python_Text_5, PORTRAIT_AMELIA_NEUTRAL
# 118 "data/maps/EltheCity/scripts.pory"
	message EltheCity_EventScript_Python_Text_12
# 120 "data/maps/EltheCity/scripts.pory"
	applymovement 2, EltheCity_Movement_PythonSpinIn
# 121 "data/maps/EltheCity/scripts.pory"
	waitmovement 0
# 122 "data/maps/EltheCity/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_SPECIES ( ZOROARK )
# 123 "data/maps/EltheCity/scripts.pory"
	removeobject VAR_LAST_TALKED
# 124 "data/maps/EltheCity/scripts.pory"
	addobject VAR_LAST_TALKED
# 125 "data/maps/EltheCity/scripts.pory"
	applymovement 2, EltheCity_Movement_PythonSpinOut
# 126 "data/maps/EltheCity/scripts.pory"
	waitmovement 0
# 127 "data/maps/EltheCity/scripts.pory"
	lock
# 128 "data/maps/EltheCity/scripts.pory"
	faceplayer
# 129 "data/maps/EltheCity/scripts.pory"
	waitmessage
# 130 "data/maps/EltheCity/scripts.pory"
	waitbuttonpress
# 131 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_EventScript_Python_Text_3, PORTRAIT_ZOROARK_NEUTRAL
# 132 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_EventScript_Python_Text_13, MSGBOX_AUTOCLOSE
# 134 "data/maps/EltheCity/scripts.pory"
	delay 32
# 135 "data/maps/EltheCity/scripts.pory"
	applymovement 2, EnterPokeballMovement
# 136 "data/maps/EltheCity/scripts.pory"
	waitmovement 0
# 137 "data/maps/EltheCity/scripts.pory"
	removeobject 2
# 138 "data/maps/EltheCity/scripts.pory"
	delay 16
# 139 "data/maps/EltheCity/scripts.pory"
	removeitem ITEM_NEST_BALL, 1
# 140 "data/maps/EltheCity/scripts.pory"
	playfanfare MUS_EVOLVED
# 141 "data/maps/EltheCity/scripts.pory"
	message EltheCity_EventScript_Python_Text_14
# 142 "data/maps/EltheCity/scripts.pory"
	waitmessage
# 143 "data/maps/EltheCity/scripts.pory"
	waitfanfare
# 144 "data/maps/EltheCity/scripts.pory"
	waitbuttonpress
# 145 "data/maps/EltheCity/scripts.pory"
	closemessage
# 146 "data/maps/EltheCity/scripts.pory"
	givemon SPECIES_ZOROARK, 48, ITEM_SILK_SCARF, ITEM_NEST_BALL, NATURE_CALM, 0, MON_MALE, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_NIGHT_DAZE, MOVE_AGILITY, MOVE_FLAMETHROWER, MOVE_HYPER_BEAM, FALSE, FALSE, TYPE_NORMAL
# 147 "data/maps/EltheCity/scripts.pory"
	setpartymemberinfo 4
# 148 "data/maps/EltheCity/scripts.pory"
	setvar VAR_MAIN_GAME_STATE, 30
	return

EltheCity_EventScript_Python_2:
# 76 "data/maps/EltheCity/scripts.pory"
	goto_if_set FLAG_CAN_FIND_PYTHON, EltheCity_EventScript_Python_1
	return


# 152 "data/maps/EltheCity/scripts.pory"
EltheCity_Movement_PythonSpinIn:
# 154 "data/maps/EltheCity/scripts.pory"
	face_down
# 155 "data/maps/EltheCity/scripts.pory"
	delay_4
# 156 "data/maps/EltheCity/scripts.pory"
	face_left
# 157 "data/maps/EltheCity/scripts.pory"
	delay_4
# 158 "data/maps/EltheCity/scripts.pory"
	face_up
# 159 "data/maps/EltheCity/scripts.pory"
	delay_2
# 160 "data/maps/EltheCity/scripts.pory"
	face_right
# 161 "data/maps/EltheCity/scripts.pory"
	delay_2
	step_end

# 164 "data/maps/EltheCity/scripts.pory"
EltheCity_Movement_PythonSpinOut:
# 166 "data/maps/EltheCity/scripts.pory"
	face_down
# 167 "data/maps/EltheCity/scripts.pory"
	delay_2
# 168 "data/maps/EltheCity/scripts.pory"
	face_left
# 169 "data/maps/EltheCity/scripts.pory"
	delay_2
# 170 "data/maps/EltheCity/scripts.pory"
	face_up
# 171 "data/maps/EltheCity/scripts.pory"
	delay_4
# 172 "data/maps/EltheCity/scripts.pory"
	face_right
# 173 "data/maps/EltheCity/scripts.pory"
	delay_4
# 174 "data/maps/EltheCity/scripts.pory"
	face_down
# 175 "data/maps/EltheCity/scripts.pory"
	delay_4
# 176 "data/maps/EltheCity/scripts.pory"
	face_player
	step_end

EltheCity_Sign_InnLeft::
# 181 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_Sign_InnLeft_Text_0, MSGBOX_SIGN
	return


EltheCity_Sign_InnRight::
# 186 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_EventScript_Python_Text_5, PORTRAIT_AMELIA_SERIOUSLY
# 187 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_Sign_InnRight_Text_0, MSGBOX_SIGN
	return


EltheCity_Trigger_JumpOnBenchLeft_TopTile::
# 192 "data/maps/EltheCity/scripts.pory"
	clearflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 193 "data/maps/EltheCity/scripts.pory"
	setvar VAR_0x8004, ANIM_SIT_WEST
# 194 "data/maps/EltheCity/scripts.pory"
	callnative DoAmeliaOverworldAnim
# 195 "data/maps/EltheCity/scripts.pory"
	playse SE_BIKE_HOP
# 196 "data/maps/EltheCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, EltheCity_Movement_JumpOnBenchLeft
# 197 "data/maps/EltheCity/scripts.pory"
	waitmovement 0
# 198 "data/maps/EltheCity/scripts.pory"
	addobjectspriteoffset OBJ_EVENT_ID_PLAYER, 0, -6
EltheCity_Trigger_JumpOnBenchLeft_TopTile_3:
# 200 "data/maps/EltheCity/scripts.pory"
	waitforscriptinput
# 201 "data/maps/EltheCity/scripts.pory"
	switch VAR_RESULT
# 203 "data/maps/EltheCity/scripts.pory"
	case 0x0020, EltheCity_Trigger_JumpOnBenchLeft_TopTile_10
# 204 "data/maps/EltheCity/scripts.pory"
	case 0x0001, EltheCity_Trigger_JumpOnBenchLeft_TopTile_10
# 205 "data/maps/EltheCity/scripts.pory"
	case 0x0002, EltheCity_Trigger_JumpOnBenchLeft_TopTile_10
EltheCity_Trigger_JumpOnBenchLeft_TopTile_2:
# 225 "data/maps/EltheCity/scripts.pory"
	compare VAR_RESULT, 0x0020
	goto_if_ne EltheCity_Trigger_JumpOnBenchLeft_TopTile_5
EltheCity_Trigger_JumpOnBenchLeft_TopTile_1:
# 226 "data/maps/EltheCity/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 227 "data/maps/EltheCity/scripts.pory"
	release
	return

EltheCity_Trigger_JumpOnBenchLeft_TopTile_4:
# 225 "data/maps/EltheCity/scripts.pory"
	compare VAR_RESULT, 0x0002
	goto_if_ne EltheCity_Trigger_JumpOnBenchLeft_TopTile_3
	goto EltheCity_Trigger_JumpOnBenchLeft_TopTile_1

EltheCity_Trigger_JumpOnBenchLeft_TopTile_5:
# 225 "data/maps/EltheCity/scripts.pory"
	compare VAR_RESULT, 0x0001
	goto_if_ne EltheCity_Trigger_JumpOnBenchLeft_TopTile_4
	goto EltheCity_Trigger_JumpOnBenchLeft_TopTile_1

EltheCity_Trigger_JumpOnBenchLeft_TopTile_10:
# 206 "data/maps/EltheCity/scripts.pory"
	resetobjectspriteoffset OBJ_EVENT_ID_PLAYER
# 207 "data/maps/EltheCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, EltheCity_Movement_GetOffBenchLeft
# 208 "data/maps/EltheCity/scripts.pory"
	waitmovement 0
	goto EltheCity_Trigger_JumpOnBenchLeft_TopTile_2


EltheCity_Trigger_JumpOnBenchLeft_BottomTile::
# 232 "data/maps/EltheCity/scripts.pory"
	goto EltheCity_Trigger_JumpOnBenchLeft_TopTile
	return


EltheCity_Trigger_JumpOnBenchRight_TopTile::
# 237 "data/maps/EltheCity/scripts.pory"
	clearflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 238 "data/maps/EltheCity/scripts.pory"
	setvar VAR_0x8004, ANIM_SIT_EAST
# 239 "data/maps/EltheCity/scripts.pory"
	callnative DoAmeliaOverworldAnim
# 240 "data/maps/EltheCity/scripts.pory"
	playse SE_BIKE_HOP
# 241 "data/maps/EltheCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, EltheCity_Movement_JumpOnBenchRight
# 242 "data/maps/EltheCity/scripts.pory"
	waitmovement 0
# 243 "data/maps/EltheCity/scripts.pory"
	addobjectspriteoffset OBJ_EVENT_ID_PLAYER, 0, -6
EltheCity_Trigger_JumpOnBenchRight_TopTile_3:
# 245 "data/maps/EltheCity/scripts.pory"
	waitforscriptinput
# 246 "data/maps/EltheCity/scripts.pory"
	switch VAR_RESULT
# 248 "data/maps/EltheCity/scripts.pory"
	case 0x0010, EltheCity_Trigger_JumpOnBenchRight_TopTile_10
# 249 "data/maps/EltheCity/scripts.pory"
	case 0x0001, EltheCity_Trigger_JumpOnBenchRight_TopTile_10
# 250 "data/maps/EltheCity/scripts.pory"
	case 0x0002, EltheCity_Trigger_JumpOnBenchRight_TopTile_10
EltheCity_Trigger_JumpOnBenchRight_TopTile_2:
# 270 "data/maps/EltheCity/scripts.pory"
	compare VAR_RESULT, 0x0010
	goto_if_ne EltheCity_Trigger_JumpOnBenchRight_TopTile_5
EltheCity_Trigger_JumpOnBenchRight_TopTile_1:
# 271 "data/maps/EltheCity/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 272 "data/maps/EltheCity/scripts.pory"
	release
	return

EltheCity_Trigger_JumpOnBenchRight_TopTile_4:
# 270 "data/maps/EltheCity/scripts.pory"
	compare VAR_RESULT, 0x0002
	goto_if_ne EltheCity_Trigger_JumpOnBenchRight_TopTile_3
	goto EltheCity_Trigger_JumpOnBenchRight_TopTile_1

EltheCity_Trigger_JumpOnBenchRight_TopTile_5:
# 270 "data/maps/EltheCity/scripts.pory"
	compare VAR_RESULT, 0x0001
	goto_if_ne EltheCity_Trigger_JumpOnBenchRight_TopTile_4
	goto EltheCity_Trigger_JumpOnBenchRight_TopTile_1

EltheCity_Trigger_JumpOnBenchRight_TopTile_10:
# 251 "data/maps/EltheCity/scripts.pory"
	resetobjectspriteoffset OBJ_EVENT_ID_PLAYER
# 252 "data/maps/EltheCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, EltheCity_Movement_GetOffBenchRight
# 253 "data/maps/EltheCity/scripts.pory"
	waitmovement 0
	goto EltheCity_Trigger_JumpOnBenchRight_TopTile_2


EltheCity_Trigger_JumpOnBenchRight_BottomTile::
# 277 "data/maps/EltheCity/scripts.pory"
	goto EltheCity_Trigger_JumpOnBenchRight_TopTile
	return


EltheCity_EventScript_Keesight::
# 282 "data/maps/EltheCity/scripts.pory"
	goto_if_set FLAG_SCALE_ASCENDING_DONE, EltheCity_EventScript_Keesight_3
EltheCity_EventScript_Keesight_2:
# 289 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_EventScript_Keesight_Text_2, PORTRAIT_KEESIGHT
# 290 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_EventScript_Keesight_Text_3
# 291 "data/maps/EltheCity/scripts.pory"
	speakername NULL, 0
# 292 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_EventScript_Keesight_Text_4, MSGBOX_AUTOCLOSE
	return

EltheCity_EventScript_Keesight_1:
# 284 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_EventScript_Keesight_Text_0, PORTRAIT_KEESIGHT
# 285 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_EventScript_Keesight_Text_1, MSGBOX_NPC
	return

EltheCity_EventScript_Keesight_3:
# 282 "data/maps/EltheCity/scripts.pory"
	goto_if_set FLAG_SCALE_DESCENDING_DONE, EltheCity_EventScript_Keesight_1
	goto EltheCity_EventScript_Keesight_2


EltheCity_EventScript_Weatherbane::
# 298 "data/maps/EltheCity/scripts.pory"
	goto_if_unset FLAG_BEAT_WEATHERBANE, EltheCity_EventScript_Weatherbane_1
# 380 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_EventScript_Weatherbane_Text_1, PORTRAIT_WEATHERBANE_NEUTRAL
# 381 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_EventScript_Weatherbane_Text_16, MSGBOX_AUTOCLOSE
	return

EltheCity_EventScript_Weatherbane_1:
# 300 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_EventScript_Python_Text_5, PORTRAIT_AMELIA_NEUTRAL
# 301 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_EventScript_Weatherbane_Text_0, MSGBOX_AUTOCLOSE
# 302 "data/maps/EltheCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
# 303 "data/maps/EltheCity/scripts.pory"
	waitmovement 0
# 304 "data/maps/EltheCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
# 305 "data/maps/EltheCity/scripts.pory"
	waitmovement 0
# 306 "data/maps/EltheCity/scripts.pory"
	delay 16
# 307 "data/maps/EltheCity/scripts.pory"
	addobjectspriteoffset 1, 1, 0
# 308 "data/maps/EltheCity/scripts.pory"
	delay 8
# 309 "data/maps/EltheCity/scripts.pory"
	addobjectspriteoffset 1, -2, 0
# 310 "data/maps/EltheCity/scripts.pory"
	delay 8
# 311 "data/maps/EltheCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 312 "data/maps/EltheCity/scripts.pory"
	playse SE_PIN
# 313 "data/maps/EltheCity/scripts.pory"
	addobjectspriteoffset 1, 2, 0
# 314 "data/maps/EltheCity/scripts.pory"
	delay 8
# 315 "data/maps/EltheCity/scripts.pory"
	addobjectspriteoffset 1, -2, 0
# 316 "data/maps/EltheCity/scripts.pory"
	delay 8
# 317 "data/maps/EltheCity/scripts.pory"
	addobjectspriteoffset 1, 2, 0
# 318 "data/maps/EltheCity/scripts.pory"
	delay 8
# 319 "data/maps/EltheCity/scripts.pory"
	addobjectspriteoffset 1, -2, 0
# 320 "data/maps/EltheCity/scripts.pory"
	delay 8
# 321 "data/maps/EltheCity/scripts.pory"
	addobjectspriteoffset 1, 2, 0
# 322 "data/maps/EltheCity/scripts.pory"
	delay 8
# 323 "data/maps/EltheCity/scripts.pory"
	addobjectspriteoffset 1, -2, 0
# 324 "data/maps/EltheCity/scripts.pory"
	delay 8
# 325 "data/maps/EltheCity/scripts.pory"
	addobjectspriteoffset 1, 0, 0
# 326 "data/maps/EltheCity/scripts.pory"
	delay 16
# 327 "data/maps/EltheCity/scripts.pory"
	applymovement 1, EltheCity_Movement_WeatherbaneFlap
# 328 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_EventScript_Weatherbane_Text_1, PORTRAIT_WEATHERBANE_SCREAM
# 329 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_EventScript_Weatherbane_Text_2
# 330 "data/maps/EltheCity/scripts.pory"
	waitmovement 1
# 331 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_EventScript_Python_Text_5, PORTRAIT_AMELIA_STRAINED
# 332 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_EventScript_Weatherbane_Text_3
# 333 "data/maps/EltheCity/scripts.pory"
	applymovement 1, EltheCity_Movement_WeatherbaneFlap
# 334 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_EventScript_Weatherbane_Text_1, PORTRAIT_WEATHERBANE_SCREAM
# 335 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_EventScript_Weatherbane_Text_2
# 336 "data/maps/EltheCity/scripts.pory"
	waitmovement 1
# 337 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_EventScript_Python_Text_5, PORTRAIT_AMELIA_SHOCK
# 338 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_EventScript_Weatherbane_Text_4
# 339 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_EventScript_Weatherbane_Text_1, PORTRAIT_WEATHERBANE_NEUTRAL
# 340 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_EventScript_Python_Text_0
# 341 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_EventScript_Python_Text_5, PORTRAIT_AMELIA_NEUTRAL
# 342 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_EventScript_Weatherbane_Text_5
# 343 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_EventScript_Weatherbane_Text_1, PORTRAIT_WEATHERBANE_NEUTRAL
# 344 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_EventScript_Weatherbane_Text_6
# 346 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_EventScript_Python_Text_5, PORTRAIT_AMELIA_NEUTRAL
# 347 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_EventScript_Weatherbane_Text_7
# 348 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_EventScript_Weatherbane_Text_1, PORTRAIT_WEATHERBANE_SCREAM
# 349 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_EventScript_Weatherbane_Text_8
# 351 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_EventScript_Python_Text_5, PORTRAIT_AMELIA_STRAINED
# 352 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_EventScript_Weatherbane_Text_9
# 354 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_EventScript_Weatherbane_Text_1, PORTRAIT_WEATHERBANE_SCREAM
# 355 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_EventScript_Weatherbane_Text_10
# 356 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_EventScript_Python_Text_5, PORTRAIT_AMELIA_NEUTRAL
# 357 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_EventScript_Weatherbane_Text_11
# 358 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_EventScript_Weatherbane_Text_1, PORTRAIT_WEATHERBANE_NEUTRAL
# 359 "data/maps/EltheCity/scripts.pory"
	applymovement 1, EltheCity_Movement_WeatherbaneFlap
# 360 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_EventScript_Weatherbane_Text_12
# 361 "data/maps/EltheCity/scripts.pory"
	waitmovement 1
# 362 "data/maps/EltheCity/scripts.pory"
	closemessage
# 363 "data/maps/EltheCity/scripts.pory"
	createmon 1, 0, SPECIES_WEATHERBANE, 40, ITEM_NONE, 0, NATURE_CALM, 0, MON_MALE, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_STEEL_WING, MOVE_AIR_CUTTER, MOVE_SCREECH, MOVE_ROOST, FALSE, 0, TYPE_WATER
# 364 "data/maps/EltheCity/scripts.pory"
	dowildbattle
# 365 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_EventScript_Weatherbane_Text_1, PORTRAIT_WEATHERBANE_NEUTRAL
# 366 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_EventScript_Weatherbane_Text_13
# 367 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_EventScript_Python_Text_5, PORTRAIT_AMELIA_SERIOUSLY
# 368 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_EventScript_Weatherbane_Text_14, MSGBOX_AUTOCLOSE
# 369 "data/maps/EltheCity/scripts.pory"
	delay 60
# 370 "data/maps/EltheCity/scripts.pory"
	setflag FLAG_BEAT_WEATHERBANE
# 371 "data/maps/EltheCity/scripts.pory"
	playfanfare MUS_CAUGHT
# 372 "data/maps/EltheCity/scripts.pory"
	message EltheCity_EventScript_Weatherbane_Text_15
# 373 "data/maps/EltheCity/scripts.pory"
	waitmessage
# 374 "data/maps/EltheCity/scripts.pory"
	waitfanfare
# 375 "data/maps/EltheCity/scripts.pory"
	waitbuttonpress
# 376 "data/maps/EltheCity/scripts.pory"
	closemessage
	return


# 387 "data/maps/EltheCity/scripts.pory"
EltheCity_Movement_WeatherbaneFlap:
# 389 "data/maps/EltheCity/scripts.pory"
	face_up
# 390 "data/maps/EltheCity/scripts.pory"
	delay_8
# 391 "data/maps/EltheCity/scripts.pory"
	face_left
# 392 "data/maps/EltheCity/scripts.pory"
	delay_8
# 393 "data/maps/EltheCity/scripts.pory"
	face_down
# 394 "data/maps/EltheCity/scripts.pory"
	delay_8
# 395 "data/maps/EltheCity/scripts.pory"
	face_right
# 396 "data/maps/EltheCity/scripts.pory"
	delay_8
	step_end

EltheCity_EventScript_BarrelGuy::
# 401 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_EventScript_BarrelGuy_Text_0
# 402 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_EventScript_BarrelGuy_Text_1, MSGBOX_NPC
	return


EltheCity_BakeryWindow::
# 408 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_BakeryWindow_Text_0, MSGBOX_SIGN
	return


EltheCity_CitySign::
# 413 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_CitySign_Text_0, MSGBOX_SIGN
	return


EltheCity_Girlfriend::
# 418 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_Girlfriend_Text_0
# 419 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_Girlfriend_Text_1, MSGBOX_SIGN
	return


EltheCity_Boyfriend::
# 424 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_Boyfriend_Text_0
# 425 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_Boyfriend_Text_1, MSGBOX_SIGN
	return


EltheCity_OldGuyBarrel::
# 430 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_OldGuyBarrel_Text_0
# 431 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_OldGuyBarrel_Text_1, MSGBOX_NPC
	return


EltheCity_Slowbro::
# 437 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_Slowbro_Text_0
# 438 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_Slowbro_Text_1
# 440 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_EventScript_Python_Text_5, PORTRAIT_AMELIA_STRAINED
# 441 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_Slowbro_Text_2
# 442 "data/maps/EltheCity/scripts.pory"
	faceplayer
# 443 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_Slowbro_Text_0
# 444 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_Slowbro_Text_3
# 445 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_EventScript_Python_Text_5, PORTRAIT_AMELIA_STRAINED
# 446 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_Slowbro_Text_4, MSGBOX_AUTOCLOSE
	return


EltheCity_Lombre::
# 451 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_Lombre_Text_0
# 452 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_Lombre_Text_1, MSGBOX_NPC
	return


EltheCity_BradleyScript::
# 457 "data/maps/EltheCity/scripts.pory"
	lock
# 458 "data/maps/EltheCity/scripts.pory"
	faceplayer
# 459 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_EventScript_Python_Text_1, PORTRAIT_NIDOKING_GRIN, PORTRAIT_DEFAULT_LEFT
# 460 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_BradleyScript_Text_0
# 461 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_EventScript_Python_Text_5, PORTRAIT_AMELIA_NEUTRAL
# 462 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_BradleyScript_Text_1
# 463 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_EventScript_Python_Text_1, PORTRAIT_NIDOKING_NEUTRAL, PORTRAIT_DEFAULT_LEFT
# 464 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_BradleyScript_Text_2
# 465 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_EventScript_Python_Text_5, PORTRAIT_AMELIA_STRAINED
# 466 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_BradleyScript_Text_3
# 468 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_EventScript_Python_Text_1, PORTRAIT_NIDOKING_NEUTRAL, PORTRAIT_DEFAULT_LEFT
# 469 "data/maps/EltheCity/scripts.pory"
	playmoncry SPECIES_NIDOKING, CRY_MODE_NORMAL
# 470 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_BradleyScript_Text_4
# 471 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_EventScript_Python_Text_5, PORTRAIT_AMELIA_NEUTRAL
# 472 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_BradleyScript_Text_5
# 473 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_EventScript_Python_Text_1, PORTRAIT_NIDOKING_GRIN, PORTRAIT_DEFAULT_LEFT
# 474 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_BradleyScript_Text_6
# 475 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_EventScript_Python_Text_5, PORTRAIT_AMELIA_SERIOUSLY
# 476 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_BradleyScript_Text_7
# 477 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_EventScript_Python_Text_1, PORTRAIT_NIDOKING_NEUTRAL, PORTRAIT_DEFAULT_LEFT
# 478 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_BradleyScript_Text_8, MSGBOX_YESNO
# 479 "data/maps/EltheCity/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq EltheCity_BradleyScript_2
# 486 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_EventScript_Python_Text_5, PORTRAIT_AMELIA_SMUG
# 487 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_BradleyScript_Text_10
# 488 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_EventScript_Python_Text_1, PORTRAIT_NIDOKING_GRIN, PORTRAIT_DEFAULT_LEFT
# 489 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_BradleyScript_Text_11, MSGBOX_AUTOCLOSE
# 490 "data/maps/EltheCity/scripts.pory"
	clearflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 491 "data/maps/EltheCity/scripts.pory"
	applymovement 4, Common_Movement_WalkInPlaceDown
# 492 "data/maps/EltheCity/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 493 "data/maps/EltheCity/scripts.pory"
	switch VAR_RESULT
# 495 "data/maps/EltheCity/scripts.pory"
	case DIR_SOUTH, EltheCity_BradleyScript_7
# 497 "data/maps/EltheCity/scripts.pory"
	case DIR_EAST, EltheCity_BradleyScript_8
# 499 "data/maps/EltheCity/scripts.pory"
	case DIR_WEST, EltheCity_BradleyScript_9
# 501 "data/maps/EltheCity/scripts.pory"
	case DIR_NORTH, EltheCity_BradleyScript_10
EltheCity_BradleyScript_5:
# 504 "data/maps/EltheCity/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 505 "data/maps/EltheCity/scripts.pory"
	playmoncry SPECIES_NIDOKING, CRY_MODE_NORMAL
# 506 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_EventScript_Python_Text_1, PORTRAIT_NIDOKING_GRIN, PORTRAIT_DEFAULT_LEFT
# 507 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_BradleyScript_Text_12, MSGBOX_AUTOCLOSE
# 508 "data/maps/EltheCity/scripts.pory"
	waitmoncry
# 509 "data/maps/EltheCity/scripts.pory"
	setflag FLAG_WILD_AI_ON
# 510 "data/maps/EltheCity/scripts.pory"
	createmon 1, 0, SPECIES_NIDOKING, 56, ITEM_QUICK_CLAW, ITEM_ULTRA_BALL, NATURE_LONELY, 2, MON_MALE, 0, 10, 0, 0, 10, 0, 31, 31, 31, 31, 31, 31, MOVE_POISON_JAB, MOVE_EARTHQUAKE, MOVE_MEGAHORN, MOVE_SLUDGE_BOMB, FALSE, FALSE, TYPE_GROUND
# 511 "data/maps/EltheCity/scripts.pory"
	dowildbattle
# 512 "data/maps/EltheCity/scripts.pory"
	delay 32
# 513 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_EventScript_Python_Text_1, PORTRAIT_NIDOKING_NERVOUS, PORTRAIT_DEFAULT_LEFT
# 514 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_BradleyScript_Text_13
# 515 "data/maps/EltheCity/scripts.pory"
	applymovement 4, EltheCity_Movement_BradleyApproach
# 516 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_EventScript_Python_Text_1, PORTRAIT_NIDOKING_NEUTRAL, PORTRAIT_DEFAULT_LEFT
# 517 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_BradleyScript_Text_14
# 520 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_EventScript_Python_Text_5, PORTRAIT_AMELIA_SERIOUSLY
# 521 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_BradleyScript_Text_15
# 523 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_EventScript_Python_Text_1, PORTRAIT_NIDOKING_NEUTRAL
# 524 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_BradleyScript_Text_16
# 525 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_EventScript_Python_Text_5, PORTRAIT_AMELIA_SHOCK
# 526 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_BradleyScript_Text_17
# 527 "data/maps/EltheCity/scripts.pory"
	goto_if_set FLAG_GOT_VICE, EltheCity_BradleyScript_11
# 556 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_EventScript_Python_Text_5, PORTRAIT_AMELIA_NEUTRAL
# 557 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_BradleyScript_Text_22
# 558 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_EventScript_Python_Text_1, PORTRAIT_NIDOKING_NEUTRAL, PORTRAIT_DEFAULT_LEFT
# 559 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_BradleyScript_Text_23, MSGBOX_AUTOCLOSE
# 560 "data/maps/EltheCity/scripts.pory"
	delay 32
# 561 "data/maps/EltheCity/scripts.pory"
	applymovement 4, EnterPokeballMovement
# 562 "data/maps/EltheCity/scripts.pory"
	waitmovement 0
# 563 "data/maps/EltheCity/scripts.pory"
	removeobject 4
# 564 "data/maps/EltheCity/scripts.pory"
	delay 16
# 565 "data/maps/EltheCity/scripts.pory"
	removeitem ITEM_ULTRA_BALL, 1
# 566 "data/maps/EltheCity/scripts.pory"
	playfanfare MUS_EVOLVED
# 567 "data/maps/EltheCity/scripts.pory"
	message EltheCity_BradleyScript_Text_21
# 568 "data/maps/EltheCity/scripts.pory"
	waitmessage
# 569 "data/maps/EltheCity/scripts.pory"
	waitfanfare
# 570 "data/maps/EltheCity/scripts.pory"
	waitbuttonpress
# 571 "data/maps/EltheCity/scripts.pory"
	closemessage
# 572 "data/maps/EltheCity/scripts.pory"
	givemon SPECIES_NIDOKING, 56, ITEM_QUICK_CLAW, ITEM_ULTRA_BALL, NATURE_LONELY, 2, MON_MALE, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_POISON_JAB, MOVE_EARTHQUAKE, MOVE_ICE_BEAM, MOVE_THUNDERBOLT, FALSE, FALSE, TYPE_GROUND
# 573 "data/maps/EltheCity/scripts.pory"
	setpartymemberinfo 3
EltheCity_BradleyScript_1:
# 576 "data/maps/EltheCity/scripts.pory"
	release
	return

EltheCity_BradleyScript_2:
# 481 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_EventScript_Python_Text_1, PORTRAIT_NIDOKING_GRIN, PORTRAIT_DEFAULT_LEFT
# 482 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_BradleyScript_Text_9
	goto EltheCity_BradleyScript_1

EltheCity_BradleyScript_7:
# 496 "data/maps/EltheCity/scripts.pory"
	call EltheCity_WalkToBradleyBattle_North
	goto EltheCity_BradleyScript_5

EltheCity_BradleyScript_8:
# 498 "data/maps/EltheCity/scripts.pory"
	call EltheCity_WalkToBradleyBattle_West
	goto EltheCity_BradleyScript_5

EltheCity_BradleyScript_9:
# 500 "data/maps/EltheCity/scripts.pory"
	call EltheCity_WalkToBradleyBattle_East
	goto EltheCity_BradleyScript_5

EltheCity_BradleyScript_10:
# 502 "data/maps/EltheCity/scripts.pory"
	call EltheCity_WalkToBradleyBattle_South
	goto EltheCity_BradleyScript_5

EltheCity_BradleyScript_11:
# 529 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_EventScript_Python_Text_5, PORTRAIT_AMELIA_NEUTRAL
# 530 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_BradleyScript_Text_18
# 531 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_EventScript_Python_Text_1, PORTRAIT_NIDOKING_NEUTRAL, PORTRAIT_DEFAULT_LEFT
# 532 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_BradleyScript_Text_19
# 535 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_EventScript_Python_Text_5, PORTRAIT_AMELIA_WINK
# 536 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_BradleyScript_Text_20, MSGBOX_AUTOCLOSE
# 537 "data/maps/EltheCity/scripts.pory"
	delay 32
# 538 "data/maps/EltheCity/scripts.pory"
	applymovement 4, EnterPokeballMovement
# 539 "data/maps/EltheCity/scripts.pory"
	waitmovement 0
# 540 "data/maps/EltheCity/scripts.pory"
	removeobject 4
# 541 "data/maps/EltheCity/scripts.pory"
	delay 16
# 542 "data/maps/EltheCity/scripts.pory"
	removeitem ITEM_ULTRA_BALL, 1
# 543 "data/maps/EltheCity/scripts.pory"
	playfanfare MUS_EVOLVED
# 544 "data/maps/EltheCity/scripts.pory"
	message EltheCity_BradleyScript_Text_21
# 545 "data/maps/EltheCity/scripts.pory"
	waitmessage
# 546 "data/maps/EltheCity/scripts.pory"
	waitfanfare
# 547 "data/maps/EltheCity/scripts.pory"
	waitbuttonpress
# 548 "data/maps/EltheCity/scripts.pory"
	closemessage
# 549 "data/maps/EltheCity/scripts.pory"
	givemon SPECIES_NIDOKING, 56, ITEM_QUICK_CLAW, ITEM_ULTRA_BALL, NATURE_LONELY, 2, MON_MALE, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_POISON_JAB, MOVE_EARTHQUAKE, MOVE_MEGAHORN, MOVE_SLUDGE_BOMB, FALSE, FALSE, TYPE_GROUND
# 550 "data/maps/EltheCity/scripts.pory"
	setpartymemberinfo 3
# 551 "data/maps/EltheCity/scripts.pory"
	setflag FLAG_CAN_FIND_PYTHON
# 552 "data/maps/EltheCity/scripts.pory"
	setvar VAR_MAIN_GAME_STATE, 20
	goto EltheCity_BradleyScript_1


# 579 "data/maps/EltheCity/scripts.pory"
EltheCity_Movement_BradleyApproach:
# 581 "data/maps/EltheCity/scripts.pory"
	walk_slow_down
# 581 "data/maps/EltheCity/scripts.pory"
	walk_slow_down
# 581 "data/maps/EltheCity/scripts.pory"
	walk_slow_down
	step_end

EltheCity_WalkToBradleyBattle_North::
# 586 "data/maps/EltheCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, EltheCity_Movement_BradleyBattleNorth
# 587 "data/maps/EltheCity/scripts.pory"
	waitmovement 0
# 588 "data/maps/EltheCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, EltheCity_Movement_BradleyBattleWest
# 589 "data/maps/EltheCity/scripts.pory"
	waitmovement 0
	return


EltheCity_WalkToBradleyBattle_South::
# 595 "data/maps/EltheCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, EltheCity_Movement_BradleyBattleSouth
# 596 "data/maps/EltheCity/scripts.pory"
	waitmovement 0
	return


EltheCity_WalkToBradleyBattle_East::
# 602 "data/maps/EltheCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, EltheCity_Movement_BradleyBattleEast
# 603 "data/maps/EltheCity/scripts.pory"
	waitmovement 0
	return


EltheCity_WalkToBradleyBattle_West::
# 609 "data/maps/EltheCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, EltheCity_Movement_BradleyBattleWest
# 610 "data/maps/EltheCity/scripts.pory"
	waitmovement 0
	return


# 614 "data/maps/EltheCity/scripts.pory"
EltheCity_Movement_BradleyBattleNorth:
# 616 "data/maps/EltheCity/scripts.pory"
	walk_left
# 617 "data/maps/EltheCity/scripts.pory"
	walk_down
	step_end

# 620 "data/maps/EltheCity/scripts.pory"
EltheCity_Movement_BradleyBattleWest:
# 622 "data/maps/EltheCity/scripts.pory"
	walk_down
# 622 "data/maps/EltheCity/scripts.pory"
	walk_down
# 622 "data/maps/EltheCity/scripts.pory"
	walk_down
# 622 "data/maps/EltheCity/scripts.pory"
	walk_down
# 623 "data/maps/EltheCity/scripts.pory"
	walk_right
# 624 "data/maps/EltheCity/scripts.pory"
	face_up
# 625 "data/maps/EltheCity/scripts.pory"
	delay_16
	step_end

# 628 "data/maps/EltheCity/scripts.pory"
EltheCity_Movement_BradleyBattleEast:
# 630 "data/maps/EltheCity/scripts.pory"
	walk_down
# 630 "data/maps/EltheCity/scripts.pory"
	walk_down
# 630 "data/maps/EltheCity/scripts.pory"
	walk_down
# 630 "data/maps/EltheCity/scripts.pory"
	walk_down
# 631 "data/maps/EltheCity/scripts.pory"
	walk_left
# 632 "data/maps/EltheCity/scripts.pory"
	face_up
# 633 "data/maps/EltheCity/scripts.pory"
	delay_16
	step_end

# 636 "data/maps/EltheCity/scripts.pory"
EltheCity_Movement_BradleyBattleSouth:
# 638 "data/maps/EltheCity/scripts.pory"
	walk_down
# 638 "data/maps/EltheCity/scripts.pory"
	walk_down
# 638 "data/maps/EltheCity/scripts.pory"
	walk_down
# 639 "data/maps/EltheCity/scripts.pory"
	face_up
# 640 "data/maps/EltheCity/scripts.pory"
	delay_16
	step_end

EltheCity_Trigger_MusicStump1::
# 645 "data/maps/EltheCity/scripts.pory"
	playse SE_NOTE_C
# 646 "data/maps/EltheCity/scripts.pory"
	turnobject 9, DIR_WEST
# 649 "data/maps/EltheCity/scripts.pory"
	compare VAR_TEMP_2, 7
	goto_if_eq EltheCity_Trigger_MusicStump1_4
EltheCity_Trigger_MusicStump1_3:
# 673 "data/maps/EltheCity/scripts.pory"
	setvar VAR_TEMP_2, 0
# 674 "data/maps/EltheCity/scripts.pory"
	setvar VAR_TEMP_1, 1
EltheCity_Trigger_MusicStump1_1:
# 677 "data/maps/EltheCity/scripts.pory"
	release
	return

EltheCity_Trigger_MusicStump1_2:
# 651 "data/maps/EltheCity/scripts.pory"
	delay 60
# 652 "data/maps/EltheCity/scripts.pory"
	applymovement 9, EltheCity_Movement_KeesightHops
# 653 "data/maps/EltheCity/scripts.pory"
	playse SE_BIKE_HOP
# 654 "data/maps/EltheCity/scripts.pory"
	delay 16
# 655 "data/maps/EltheCity/scripts.pory"
	playse SE_BIKE_HOP
# 656 "data/maps/EltheCity/scripts.pory"
	delay 32
# 657 "data/maps/EltheCity/scripts.pory"
	playmoncry SPECIES_WOOBAT, CRY_MODE_NORMAL
# 658 "data/maps/EltheCity/scripts.pory"
	waitmoncry
# 659 "data/maps/EltheCity/scripts.pory"
	delay 30
# 660 "data/maps/EltheCity/scripts.pory"
	applymovement 9, Common_Movement_FaceUp
# 661 "data/maps/EltheCity/scripts.pory"
	waitmovement 0
# 662 "data/maps/EltheCity/scripts.pory"
	delay 16
# 663 "data/maps/EltheCity/scripts.pory"
	playse SE_M_SUPERSONIC
# 664 "data/maps/EltheCity/scripts.pory"
	applymovement 11, EltheCity_Movement_MoveUmbrashard
# 665 "data/maps/EltheCity/scripts.pory"
	waitmovement 0
# 666 "data/maps/EltheCity/scripts.pory"
	applymovement 9, Common_Movement_FaceDown
# 667 "data/maps/EltheCity/scripts.pory"
	waitmovement 0
# 668 "data/maps/EltheCity/scripts.pory"
	setobjectxyperm 11, 11, 21
# 669 "data/maps/EltheCity/scripts.pory"
	setflag FLAG_SCALE_DESCENDING_DONE
	goto EltheCity_Trigger_MusicStump1_1

EltheCity_Trigger_MusicStump1_4:
# 649 "data/maps/EltheCity/scripts.pory"
	goto_if_unset FLAG_SCALE_DESCENDING_DONE, EltheCity_Trigger_MusicStump1_2
	goto EltheCity_Trigger_MusicStump1_3


EltheCity_Trigger_MusicStump2::
# 682 "data/maps/EltheCity/scripts.pory"
	playse SE_NOTE_D
# 683 "data/maps/EltheCity/scripts.pory"
	turnobject 9, DIR_WEST
# 686 "data/maps/EltheCity/scripts.pory"
	compare VAR_TEMP_1, 1
	goto_if_eq EltheCity_Trigger_MusicStump2_2
# 692 "data/maps/EltheCity/scripts.pory"
	setvar VAR_TEMP_1, 0
EltheCity_Trigger_MusicStump2_1:
# 696 "data/maps/EltheCity/scripts.pory"
	compare VAR_TEMP_2, 6
	goto_if_eq EltheCity_Trigger_MusicStump2_6
# 702 "data/maps/EltheCity/scripts.pory"
	setvar VAR_TEMP_2, 0
EltheCity_Trigger_MusicStump2_5:
# 705 "data/maps/EltheCity/scripts.pory"
	release
	return

EltheCity_Trigger_MusicStump2_2:
# 688 "data/maps/EltheCity/scripts.pory"
	addvar VAR_TEMP_1, 1
	goto EltheCity_Trigger_MusicStump2_1

EltheCity_Trigger_MusicStump2_6:
# 698 "data/maps/EltheCity/scripts.pory"
	addvar VAR_TEMP_2, 1
	goto EltheCity_Trigger_MusicStump2_5


EltheCity_Trigger_MusicStump3::
# 710 "data/maps/EltheCity/scripts.pory"
	playse SE_NOTE_E
# 711 "data/maps/EltheCity/scripts.pory"
	turnobject 9, DIR_WEST
# 714 "data/maps/EltheCity/scripts.pory"
	compare VAR_TEMP_1, 2
	goto_if_eq EltheCity_Trigger_MusicStump3_2
# 720 "data/maps/EltheCity/scripts.pory"
	setvar VAR_TEMP_1, 0
EltheCity_Trigger_MusicStump3_1:
# 724 "data/maps/EltheCity/scripts.pory"
	compare VAR_TEMP_2, 5
	goto_if_eq EltheCity_Trigger_MusicStump3_6
# 730 "data/maps/EltheCity/scripts.pory"
	setvar VAR_TEMP_2, 0
EltheCity_Trigger_MusicStump3_5:
# 733 "data/maps/EltheCity/scripts.pory"
	release
	return

EltheCity_Trigger_MusicStump3_2:
# 716 "data/maps/EltheCity/scripts.pory"
	addvar VAR_TEMP_1, 1
	goto EltheCity_Trigger_MusicStump3_1

EltheCity_Trigger_MusicStump3_6:
# 726 "data/maps/EltheCity/scripts.pory"
	addvar VAR_TEMP_2, 1
	goto EltheCity_Trigger_MusicStump3_5


EltheCity_Trigger_MusicStump4::
# 738 "data/maps/EltheCity/scripts.pory"
	playse SE_NOTE_F
# 739 "data/maps/EltheCity/scripts.pory"
	turnobject 9, DIR_SOUTH
# 742 "data/maps/EltheCity/scripts.pory"
	compare VAR_TEMP_1, 3
	goto_if_eq EltheCity_Trigger_MusicStump4_2
# 748 "data/maps/EltheCity/scripts.pory"
	setvar VAR_TEMP_1, 0
EltheCity_Trigger_MusicStump4_1:
# 752 "data/maps/EltheCity/scripts.pory"
	compare VAR_TEMP_2, 4
	goto_if_eq EltheCity_Trigger_MusicStump4_6
# 758 "data/maps/EltheCity/scripts.pory"
	setvar VAR_TEMP_2, 0
EltheCity_Trigger_MusicStump4_5:
# 761 "data/maps/EltheCity/scripts.pory"
	release
	return

EltheCity_Trigger_MusicStump4_2:
# 744 "data/maps/EltheCity/scripts.pory"
	addvar VAR_TEMP_1, 1
	goto EltheCity_Trigger_MusicStump4_1

EltheCity_Trigger_MusicStump4_6:
# 754 "data/maps/EltheCity/scripts.pory"
	addvar VAR_TEMP_2, 1
	goto EltheCity_Trigger_MusicStump4_5


EltheCity_Trigger_MusicStump5::
# 766 "data/maps/EltheCity/scripts.pory"
	playse SE_NOTE_G
# 767 "data/maps/EltheCity/scripts.pory"
	turnobject 9, DIR_SOUTH
# 770 "data/maps/EltheCity/scripts.pory"
	compare VAR_TEMP_1, 4
	goto_if_eq EltheCity_Trigger_MusicStump5_2
# 776 "data/maps/EltheCity/scripts.pory"
	setvar VAR_TEMP_1, 0
EltheCity_Trigger_MusicStump5_1:
# 780 "data/maps/EltheCity/scripts.pory"
	compare VAR_TEMP_2, 3
	goto_if_eq EltheCity_Trigger_MusicStump5_6
# 786 "data/maps/EltheCity/scripts.pory"
	setvar VAR_TEMP_2, 0
EltheCity_Trigger_MusicStump5_5:
# 789 "data/maps/EltheCity/scripts.pory"
	release
	return

EltheCity_Trigger_MusicStump5_2:
# 772 "data/maps/EltheCity/scripts.pory"
	addvar VAR_TEMP_1, 1
	goto EltheCity_Trigger_MusicStump5_1

EltheCity_Trigger_MusicStump5_6:
# 782 "data/maps/EltheCity/scripts.pory"
	addvar VAR_TEMP_2, 1
	goto EltheCity_Trigger_MusicStump5_5


EltheCity_Trigger_MusicStump6::
# 794 "data/maps/EltheCity/scripts.pory"
	playse SE_NOTE_A
# 795 "data/maps/EltheCity/scripts.pory"
	turnobject 9, DIR_EAST
# 798 "data/maps/EltheCity/scripts.pory"
	compare VAR_TEMP_1, 5
	goto_if_eq EltheCity_Trigger_MusicStump6_2
# 804 "data/maps/EltheCity/scripts.pory"
	setvar VAR_TEMP_1, 0
EltheCity_Trigger_MusicStump6_1:
# 808 "data/maps/EltheCity/scripts.pory"
	compare VAR_TEMP_2, 2
	goto_if_eq EltheCity_Trigger_MusicStump6_6
# 814 "data/maps/EltheCity/scripts.pory"
	setvar VAR_TEMP_2, 0
EltheCity_Trigger_MusicStump6_5:
# 817 "data/maps/EltheCity/scripts.pory"
	release
	return

EltheCity_Trigger_MusicStump6_2:
# 800 "data/maps/EltheCity/scripts.pory"
	addvar VAR_TEMP_1, 1
	goto EltheCity_Trigger_MusicStump6_1

EltheCity_Trigger_MusicStump6_6:
# 810 "data/maps/EltheCity/scripts.pory"
	addvar VAR_TEMP_2, 1
	goto EltheCity_Trigger_MusicStump6_5


EltheCity_Trigger_MusicStump7::
# 822 "data/maps/EltheCity/scripts.pory"
	playse SE_NOTE_B
# 823 "data/maps/EltheCity/scripts.pory"
	turnobject 9, DIR_EAST
# 826 "data/maps/EltheCity/scripts.pory"
	compare VAR_TEMP_1, 6
	goto_if_eq EltheCity_Trigger_MusicStump7_2
# 832 "data/maps/EltheCity/scripts.pory"
	setvar VAR_TEMP_1, 0
EltheCity_Trigger_MusicStump7_1:
# 836 "data/maps/EltheCity/scripts.pory"
	compare VAR_TEMP_2, 1
	goto_if_eq EltheCity_Trigger_MusicStump7_6
# 842 "data/maps/EltheCity/scripts.pory"
	setvar VAR_TEMP_2, 0
EltheCity_Trigger_MusicStump7_5:
# 845 "data/maps/EltheCity/scripts.pory"
	release
	return

EltheCity_Trigger_MusicStump7_2:
# 828 "data/maps/EltheCity/scripts.pory"
	addvar VAR_TEMP_1, 1
	goto EltheCity_Trigger_MusicStump7_1

EltheCity_Trigger_MusicStump7_6:
# 838 "data/maps/EltheCity/scripts.pory"
	addvar VAR_TEMP_2, 1
	goto EltheCity_Trigger_MusicStump7_5


EltheCity_Trigger_MusicStump8::
# 850 "data/maps/EltheCity/scripts.pory"
	playse SE_NOTE_C_HIGH
# 851 "data/maps/EltheCity/scripts.pory"
	turnobject 9, DIR_EAST
# 855 "data/maps/EltheCity/scripts.pory"
	compare VAR_TEMP_1, 7
	goto_if_eq EltheCity_Trigger_MusicStump8_4
EltheCity_Trigger_MusicStump8_3:
# 879 "data/maps/EltheCity/scripts.pory"
	setvar VAR_TEMP_1, 0
# 880 "data/maps/EltheCity/scripts.pory"
	setvar VAR_TEMP_2, 1
EltheCity_Trigger_MusicStump8_1:
# 883 "data/maps/EltheCity/scripts.pory"
	release
	return

EltheCity_Trigger_MusicStump8_2:
# 857 "data/maps/EltheCity/scripts.pory"
	delay 60
# 858 "data/maps/EltheCity/scripts.pory"
	applymovement 9, EltheCity_Movement_KeesightHops
# 859 "data/maps/EltheCity/scripts.pory"
	playse SE_BIKE_HOP
# 860 "data/maps/EltheCity/scripts.pory"
	delay 16
# 861 "data/maps/EltheCity/scripts.pory"
	playse SE_BIKE_HOP
# 862 "data/maps/EltheCity/scripts.pory"
	delay 32
# 863 "data/maps/EltheCity/scripts.pory"
	playmoncry SPECIES_WOOBAT, CRY_MODE_NORMAL
# 864 "data/maps/EltheCity/scripts.pory"
	waitmoncry
# 865 "data/maps/EltheCity/scripts.pory"
	delay 30
# 866 "data/maps/EltheCity/scripts.pory"
	applymovement 9, Common_Movement_FaceUp
# 867 "data/maps/EltheCity/scripts.pory"
	waitmovement 0
# 868 "data/maps/EltheCity/scripts.pory"
	delay 16
# 869 "data/maps/EltheCity/scripts.pory"
	playse SE_M_SUPERSONIC
# 870 "data/maps/EltheCity/scripts.pory"
	applymovement 10, EltheCity_Movement_MoveEspershard
# 871 "data/maps/EltheCity/scripts.pory"
	waitmovement 0
# 872 "data/maps/EltheCity/scripts.pory"
	applymovement 9, Common_Movement_FaceDown
# 873 "data/maps/EltheCity/scripts.pory"
	waitmovement 0
# 874 "data/maps/EltheCity/scripts.pory"
	setobjectxyperm 10, 13, 21
# 875 "data/maps/EltheCity/scripts.pory"
	setflag FLAG_SCALE_ASCENDING_DONE
	goto EltheCity_Trigger_MusicStump8_1

EltheCity_Trigger_MusicStump8_4:
# 855 "data/maps/EltheCity/scripts.pory"
	goto_if_unset FLAG_SCALE_ASCENDING_DONE, EltheCity_Trigger_MusicStump8_2
	goto EltheCity_Trigger_MusicStump8_3


# 886 "data/maps/EltheCity/scripts.pory"
EltheCity_Movement_KeesightHops:
# 888 "data/maps/EltheCity/scripts.pory"
	jump_in_place_down
# 888 "data/maps/EltheCity/scripts.pory"
	jump_in_place_down
	step_end

# 891 "data/maps/EltheCity/scripts.pory"
EltheCity_Movement_MoveUmbrashard:
# 893 "data/maps/EltheCity/scripts.pory"
	levitate
# 894 "data/maps/EltheCity/scripts.pory"
	delay_16
# 895 "data/maps/EltheCity/scripts.pory"
	walk_up
# 895 "data/maps/EltheCity/scripts.pory"
	walk_up
# 895 "data/maps/EltheCity/scripts.pory"
	walk_up
# 896 "data/maps/EltheCity/scripts.pory"
	walk_right
# 896 "data/maps/EltheCity/scripts.pory"
	walk_right
# 896 "data/maps/EltheCity/scripts.pory"
	walk_right
# 896 "data/maps/EltheCity/scripts.pory"
	walk_right
# 896 "data/maps/EltheCity/scripts.pory"
	walk_right
# 896 "data/maps/EltheCity/scripts.pory"
	walk_right
# 896 "data/maps/EltheCity/scripts.pory"
	walk_right
# 896 "data/maps/EltheCity/scripts.pory"
	walk_right
# 897 "data/maps/EltheCity/scripts.pory"
	walk_up
# 898 "data/maps/EltheCity/scripts.pory"
	delay_16
# 899 "data/maps/EltheCity/scripts.pory"
	stop_levitate
	step_end

# 902 "data/maps/EltheCity/scripts.pory"
EltheCity_Movement_MoveEspershard:
# 904 "data/maps/EltheCity/scripts.pory"
	levitate
# 905 "data/maps/EltheCity/scripts.pory"
	delay_16
# 906 "data/maps/EltheCity/scripts.pory"
	walk_left
# 906 "data/maps/EltheCity/scripts.pory"
	walk_left
# 906 "data/maps/EltheCity/scripts.pory"
	walk_left
# 906 "data/maps/EltheCity/scripts.pory"
	walk_left
# 906 "data/maps/EltheCity/scripts.pory"
	walk_left
# 906 "data/maps/EltheCity/scripts.pory"
	walk_left
# 906 "data/maps/EltheCity/scripts.pory"
	walk_left
# 906 "data/maps/EltheCity/scripts.pory"
	walk_left
# 907 "data/maps/EltheCity/scripts.pory"
	walk_up
# 908 "data/maps/EltheCity/scripts.pory"
	delay_16
# 909 "data/maps/EltheCity/scripts.pory"
	stop_levitate
	step_end

# 912 "data/maps/EltheCity/scripts.pory"
EltheCity_Movement_JumpOnBenchLeft:
# 914 "data/maps/EltheCity/scripts.pory"
	lock_anim
# 915 "data/maps/EltheCity/scripts.pory"
	jump_in_place_left
	step_end

# 918 "data/maps/EltheCity/scripts.pory"
EltheCity_Movement_GetOffBenchLeft:
# 920 "data/maps/EltheCity/scripts.pory"
	unlock_anim
# 921 "data/maps/EltheCity/scripts.pory"
	walk_slow_left
	step_end

# 924 "data/maps/EltheCity/scripts.pory"
EltheCity_Movement_JumpOnBenchRight:
# 926 "data/maps/EltheCity/scripts.pory"
	lock_anim
# 927 "data/maps/EltheCity/scripts.pory"
	jump_in_place_right
	step_end

# 930 "data/maps/EltheCity/scripts.pory"
EltheCity_Movement_GetOffBenchRight:
# 932 "data/maps/EltheCity/scripts.pory"
	unlock_anim
# 933 "data/maps/EltheCity/scripts.pory"
	walk_slow_right
	step_end

# 936 "data/maps/EltheCity/scripts.pory"
EltheCity_Movement_MoveDownBench:
# 938 "data/maps/EltheCity/scripts.pory"
	walk_slow_down
	step_end

# 941 "data/maps/EltheCity/scripts.pory"
EltheCity_Movement_MoveUpBench:
# 943 "data/maps/EltheCity/scripts.pory"
	walk_slow_up
	step_end

EltheCity_EventScript_Python_Text_0:
# 74 "data/maps/EltheCity/scripts.pory"
	.string "… … … … …$"

EltheCity_EventScript_Python_Text_1:
# 79 "data/maps/EltheCity/scripts.pory"
	.string "Bradley$"

EltheCity_EventScript_Python_Text_2:
# 80 "data/maps/EltheCity/scripts.pory"
	.string "…The footsteps sound wrong.\n"
	.string "This is him.$"

EltheCity_EventScript_Python_Text_3:
# 93 "data/maps/EltheCity/scripts.pory"
	.string "Python$"

EltheCity_EventScript_Python_Text_4:
# 94 "data/maps/EltheCity/scripts.pory"
	.string "Finally found me, eh, Amelia?\n"
	.string "Took you long enough.$"

EltheCity_EventScript_Python_Text_5:
# 95 "data/maps/EltheCity/scripts.pory"
	.string "Amelia$"

EltheCity_EventScript_Python_Text_6:
# 96 "data/maps/EltheCity/scripts.pory"
	.string "Look, I've got a Poké Ball here\n"
	.string "that says…$"

EltheCity_EventScript_Python_Text_7:
# 98 "data/maps/EltheCity/scripts.pory"
	.string "Wait, you still remember me!?$"

EltheCity_EventScript_Python_Text_8:
# 100 "data/maps/EltheCity/scripts.pory"
	.string "Of course! This memory charm is the\n"
	.string "work of a Psychic type Pokémon.\p"
	.string "I'm a Dark type, so it doesn't affect\n"
	.string "me at all!\l"
	.string "I just chose to hide from you because\l"
	.string "watching you run around was fun.$"

EltheCity_EventScript_Python_Text_9:
# 112 "data/maps/EltheCity/scripts.pory"
	.string "Excuse me, have you seen my dragon?\n"
	.string "Excuse me, can I get a room?\l"
	.string "Excuse me, can you renounce your god?\l"
	.string "Excuse me, have you seen my arm?\l"
	.string "You can't miss it, it's green!$"

EltheCity_EventScript_Python_Text_10:
# 114 "data/maps/EltheCity/scripts.pory"
	.string "Keheheheh!$"

EltheCity_EventScript_Python_Text_11:
# 116 "data/maps/EltheCity/scripts.pory"
	.string "That seems a little uncalled for.\n"
	.string "I was worried about you, you know…$"

EltheCity_EventScript_Python_Text_12:
# 118 "data/maps/EltheCity/scripts.pory"
	.string "Hey, wait, you said this is caused\n"
	.string "by a Psychic type Pokémon?\p"
	.string "Do you think if we beat it, our\n"
	.string "memories will come back?$"

EltheCity_EventScript_Python_Text_13:
# 132 "data/maps/EltheCity/scripts.pory"
	.string "Eh. Probably. It's not erasing\n"
	.string "memories, just suppressing them, so\l"
	.string "they should come back if it stops.\p"
	.string "It's hiding out in that shrine near\n"
	.string "the church. Let's go check it out.$"

EltheCity_EventScript_Python_Text_14:
# 141 "data/maps/EltheCity/scripts.pory"
	.string "You recalled Python the Zoroark!$"

EltheCity_Sign_InnLeft_Text_0:
# 181 "data/maps/EltheCity/scripts.pory"
	.string "Elysi Inn$"

EltheCity_Sign_InnRight_Text_0:
# 187 "data/maps/EltheCity/scripts.pory"
	.string "Phew, these room prices…I'm glad\n"
	.string "Pokémon Centers were free…\p"
	.string "Then again, not like I have any\n"
	.string "money anyway…$"

EltheCity_EventScript_Keesight_Text_0:
# 284 "data/maps/EltheCity/scripts.pory"
	.string "Keesight$"

EltheCity_EventScript_Keesight_Text_1:
# 285 "data/maps/EltheCity/scripts.pory"
	.string "… … … … …\n"
	.string "Thanks for the song.$"

EltheCity_EventScript_Keesight_Text_2:
# 289 "data/maps/EltheCity/scripts.pory"
	.string "Batmon$"

EltheCity_EventScript_Keesight_Text_3:
# 290 "data/maps/EltheCity/scripts.pory"
	.string "… … … … … … … … … …$"

EltheCity_EventScript_Keesight_Text_4:
# 292 "data/maps/EltheCity/scripts.pory"
	.string "The Pokémon is staring intently\n"
	.string "at the pond…$"

EltheCity_EventScript_Weatherbane_Text_0:
# 301 "data/maps/EltheCity/scripts.pory"
	.string "So this is the thing I'm supposed\n"
	.string "to fix? It's, what, squeaky?$"

EltheCity_EventScript_Weatherbane_Text_1:
# 328 "data/maps/EltheCity/scripts.pory"
	.string "Weatherbane$"

EltheCity_EventScript_Weatherbane_Text_2:
# 329 "data/maps/EltheCity/scripts.pory"
	.string "Skrraaaaaaaaaaaw! Skrraaaaaaaaaaaw!$"

EltheCity_EventScript_Weatherbane_Text_3:
# 332 "data/maps/EltheCity/scripts.pory"
	.string "…Geez. It's a Pokémon?\n"
	.string "Well, it sure is noisy…$"

EltheCity_EventScript_Weatherbane_Text_4:
# 338 "data/maps/EltheCity/scripts.pory"
	.string "Hey! Shut the f{CENSOR}uck{UNCENSOR} up!$"

EltheCity_EventScript_Weatherbane_Text_5:
# 342 "data/maps/EltheCity/scripts.pory"
	.string "Why are you yelling?$"

EltheCity_EventScript_Weatherbane_Text_6:
# 344 "data/maps/EltheCity/scripts.pory"
	.string "The rain! The rain! I'm trying to\n"
	.string "make the rain go away!\p"
	.string "My cries can chase away storms.\n"
	.string "But this rain just keeps coming back!\l"
	.string "Begone! Begone!$"

EltheCity_EventScript_Weatherbane_Text_7:
# 347 "data/maps/EltheCity/scripts.pory"
	.string "So it's not a natural rainstorm?\n"
	.string "Maybe a Pokémon is summoning it…$"

EltheCity_EventScript_Weatherbane_Text_8:
# 349 "data/maps/EltheCity/scripts.pory"
	.string "Not natural! Not natural!\n"
	.string "Can't you feel it?\p"
	.string "The rain washes away your darkness.\n"
	.string "Makes you a carefree person.\l"
	.string "A fake person.\l"
	.string "Must be stopped! Must be stopped!$"

EltheCity_EventScript_Weatherbane_Text_9:
# 352 "data/maps/EltheCity/scripts.pory"
	.string "Look, I know! Something's messing\n"
	.string "with my head. It could be the same\l"
	.string "thing that's causing the rain.\p"
	.string "I'm working on it. But my job right\n"
	.string "now is to get you to quiet down.$"

EltheCity_EventScript_Weatherbane_Text_10:
# 355 "data/maps/EltheCity/scripts.pory"
	.string "Can't shut up! Can't shut up!\p"
	.string "Begone! Begone!$"

EltheCity_EventScript_Weatherbane_Text_11:
# 357 "data/maps/EltheCity/scripts.pory"
	.string "What if I promise to clear up this\n"
	.string "rain? Will that shut you up?$"

EltheCity_EventScript_Weatherbane_Text_12:
# 360 "data/maps/EltheCity/scripts.pory"
	.string "Maybe. Maybe.\p"
	.string "Show me you're strong enough!\n"
	.string "I think you're weak! Weak!$"

EltheCity_EventScript_Weatherbane_Text_13:
# 366 "data/maps/EltheCity/scripts.pory"
	.string "Okay! Okay! You're good! You're good!\p"
	.string "I trust you. You will stop the rain.\n"
	.string "Amelia, Sun-Bringer! Hail! Hail!$"

EltheCity_EventScript_Weatherbane_Text_14:
# 368 "data/maps/EltheCity/scripts.pory"
	.string "Please don't call me that ever again.$"

EltheCity_EventScript_Weatherbane_Text_15:
# 372 "data/maps/EltheCity/scripts.pory"
	.string "Finished the Innkeeper's request!$"

EltheCity_EventScript_Weatherbane_Text_16:
# 381 "data/maps/EltheCity/scripts.pory"
	.string "I used to love the sun.\n"
	.string "Fire types feared me.\p"
	.string "But now I'm too old! Too old!\n"
	.string "Can't take the heat like I used to.\p"
	.string "But I'd still like to see the sun\n"
	.string "again. Too wet! Too wet!$"

EltheCity_EventScript_BarrelGuy_Text_0:
# 401 "data/maps/EltheCity/scripts.pory"
	.string "Stephen$"

EltheCity_EventScript_BarrelGuy_Text_1:
# 402 "data/maps/EltheCity/scripts.pory"
	.string "I tried to challenge that Nidoking…\p"
	.string "But he just took one look at my\n"
	.string "Pokémon, picked me up, and stuffed me\l"
	.string "into this barrel…\p"
	.string "Maybe Pokémon training isn't for me.$"

EltheCity_BakeryWindow_Text_0:
# 408 "data/maps/EltheCity/scripts.pory"
	.string "The food on display looks delicious.\n"
	.string "Too bad you don't have spare money.$"

EltheCity_CitySign_Text_0:
# 413 "data/maps/EltheCity/scripts.pory"
	.string "Elthe City\n"
	.string "“The forgotten highway of life.”$"

EltheCity_Girlfriend_Text_0:
# 418 "data/maps/EltheCity/scripts.pory"
	.string "Sarah$"

EltheCity_Girlfriend_Text_1:
# 419 "data/maps/EltheCity/scripts.pory"
	.string "When was the last time it wasn't\n"
	.string "raining, huh? And the place doesn't\l"
	.string "even have outside seating anyway!$"

EltheCity_Boyfriend_Text_0:
# 424 "data/maps/EltheCity/scripts.pory"
	.string "Nathan$"

EltheCity_Boyfriend_Text_1:
# 425 "data/maps/EltheCity/scripts.pory"
	.string "I forgot to check the weather, okay?\n"
	.string "How was I supposed to know…$"

EltheCity_OldGuyBarrel_Text_0:
# 430 "data/maps/EltheCity/scripts.pory"
	.string "Boris$"

EltheCity_OldGuyBarrel_Text_1:
# 431 "data/maps/EltheCity/scripts.pory"
	.string "Something about this rainwater just\n"
	.string "doesn't seem right to me.\p"
	.string "It's not good to drink.$"

EltheCity_Slowbro_Text_0:
# 437 "data/maps/EltheCity/scripts.pory"
	.string "Slowbro$"

EltheCity_Slowbro_Text_1:
# 438 "data/maps/EltheCity/scripts.pory"
	.string "Some people are almost as forgetful\n"
	.string "as me these days.\p"
	.string "Just go with the flow, I say.\n"
	.string "Isn't it fun?$"

EltheCity_Slowbro_Text_2:
# 441 "data/maps/EltheCity/scripts.pory"
	.string "No, I hate knowing that I forgot\n"
	.string "something and not being able to figure\l"
	.string "out what it was. If I forget my old\l"
	.string "departed friends, I might lose it.$"

EltheCity_Slowbro_Text_3:
# 444 "data/maps/EltheCity/scripts.pory"
	.string "Huh? Who are you?$"

EltheCity_Slowbro_Text_4:
# 446 "data/maps/EltheCity/scripts.pory"
	.string "Oh, forget it.\p"
	.string "Urk. Phrasing.$"

EltheCity_Lombre_Text_0:
# 451 "data/maps/EltheCity/scripts.pory"
	.string "Lilypad Kappa$"

EltheCity_Lombre_Text_1:
# 452 "data/maps/EltheCity/scripts.pory"
	.string "I don't know what everyone's\n"
	.string "complaining about. I hope this rain\l"
	.string "never ends!$"

EltheCity_BradleyScript_Text_0:
# 460 "data/maps/EltheCity/scripts.pory"
	.string "Grah hah hah! Another puny trainer\n"
	.string "has come to challenge me, eh?$"

EltheCity_BradleyScript_Text_1:
# 462 "data/maps/EltheCity/scripts.pory"
	.string "Bradley, it's me, Amelia.\n"
	.string "What are you doing out here?$"

EltheCity_BradleyScript_Text_2:
# 464 "data/maps/EltheCity/scripts.pory"
	.string "I want to fight!\p"
	.string "You've been holding me back for years!\n"
	.string "It's time to let loose!$"

EltheCity_BradleyScript_Text_3:
# 466 "data/maps/EltheCity/scripts.pory"
	.string "Oh, you've forgotten about our talks,\n"
	.string "haven't you…\p"
	.string "Bradley, learning to control your\n"
	.string "bloodlust was YOUR idea. And it's been\l"
	.string "great for you! Chillax.$"

EltheCity_BradleyScript_Text_4:
# 470 "data/maps/EltheCity/scripts.pory"
	.string "I don't care! I want to fight.\n"
	.string "I'm enjoying this too much.$"

EltheCity_BradleyScript_Text_5:
# 472 "data/maps/EltheCity/scripts.pory"
	.string "Fine, we'll have a little spar, and\n"
	.string "then we get going, okay?$"

EltheCity_BradleyScript_Text_6:
# 474 "data/maps/EltheCity/scripts.pory"
	.string "I don't want to fight your Pokémon.\n"
	.string "I've beaten them before already.\l"
	.string "I want to fight YOU, Amelia. You\l"
	.string "hold back too much.$"

EltheCity_BradleyScript_Text_7:
# 476 "data/maps/EltheCity/scripts.pory"
	.string "Well, too bad. I can't do that in\n"
	.string "public. I still have work to do here,\l"
	.string "I can't go getting kicked out.$"

EltheCity_BradleyScript_Text_8:
# 478 "data/maps/EltheCity/scripts.pory"
	.string "Hrmph! Fine, then. I'll fight your\n"
	.string "team, if you're really serious.$"

EltheCity_BradleyScript_Text_9:
# 482 "data/maps/EltheCity/scripts.pory"
	.string "Come back when you're ready to give\n"
	.string "me a real challenge!$"

EltheCity_BradleyScript_Text_10:
# 487 "data/maps/EltheCity/scripts.pory"
	.string "With pleasure! I have a new Pokémon.\n"
	.string "You're going to love him.$"

EltheCity_BradleyScript_Text_11:
# 489 "data/maps/EltheCity/scripts.pory"
	.string "Oh? I'm intrigued. Maybe this will\n"
	.string "be worth my time after all.$"

EltheCity_BradleyScript_Text_12:
# 507 "data/maps/EltheCity/scripts.pory"
	.string "Come at me!$"

EltheCity_BradleyScript_Text_13:
# 514 "data/maps/EltheCity/scripts.pory"
	.string "Huff…I've been beaten.\p"
	.string "You were right, you know.\n"
	.string "This isn't my true calling. I'm just\l"
	.string "throwing a tantrum.$"

EltheCity_BradleyScript_Text_14:
# 517 "data/maps/EltheCity/scripts.pory"
	.string "Amelia, I can hardly think straight,\n"
	.string "but one thing I do know for sure…\p"
	.string "You've changed my life. I wasn't sure\n"
	.string "it was for the better, at first,\l"
	.string "but what I did in my youth…\l"
	.string "How that man…used me…\p"
	.string "I thought I couldn't recover from it,\n"
	.string "but you and your team helped me…$"

EltheCity_BradleyScript_Text_15:
# 521 "data/maps/EltheCity/scripts.pory"
	.string "I know, Bradley. It's alright.\n"
	.string "We all act stupid sometimes.\p"
	.string "You don't have to turn on the\n"
	.string "waterworks, it's already raining.$"

EltheCity_BradleyScript_Text_16:
# 524 "data/maps/EltheCity/scripts.pory"
	.string "It's a terrible day for rain.$"

EltheCity_BradleyScript_Text_17:
# 526 "data/maps/EltheCity/scripts.pory"
	.string "Oh! Speaking of which. I think we\n"
	.string "need to do something about this rain.\l"
	.string "Can you help me get the rest of the\l"
	.string "team back together so we can get\l"
	.string "started on that?$"

EltheCity_BradleyScript_Text_18:
# 530 "data/maps/EltheCity/scripts.pory"
	.string "Python must be around here somewhere,\n"
	.string "but I haven't seen any sign of him.$"

EltheCity_BradleyScript_Text_19:
# 532 "data/maps/EltheCity/scripts.pory"
	.string "Of course you haven't “seen” him.\n"
	.string "He must be in disguise.\p"
	.string "With my superior hearing, I can\n"
	.string "usually discern his illusions.\p"
	.string "If you let me look around, I can\n"
	.string "probably pick him out.$"

EltheCity_BradleyScript_Text_20:
# 536 "data/maps/EltheCity/scripts.pory"
	.string "Okay! Sounds like a plan!$"

EltheCity_BradleyScript_Text_21:
# 544 "data/maps/EltheCity/scripts.pory"
	.string "You recalled Bradley the Nidoking!$"

EltheCity_BradleyScript_Text_22:
# 557 "data/maps/EltheCity/scripts.pory"
	.string "Vice is hanging around in one of\n"
	.string "these buildings, I think.\l"
	.string "Let's go find her.$"

EltheCity_BradleyScript_Text_23:
# 559 "data/maps/EltheCity/scripts.pory"
	.string "Yes, ma'am.$"
