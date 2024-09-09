EltheCity_MapScripts::
# 23 "data/maps/EltheCity/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, EltheCity_MapScripts_MAP_SCRIPT_ON_LOAD
# 34 "data/maps/EltheCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, EltheCity_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

EltheCity_MapScripts_MAP_SCRIPT_ON_LOAD:
# 25 "data/maps/EltheCity/scripts.pory"
	setrespawn HEAL_LOCATION_ELTHE_CITY
# 26 "data/maps/EltheCity/scripts.pory"
	goto_if_set FLAG_STARTED_WEATHERBANE_QUEST, EltheCity_MapScripts_MAP_SCRIPT_ON_LOAD_1
	return

EltheCity_MapScripts_MAP_SCRIPT_ON_LOAD_1:
# 28 "data/maps/EltheCity/scripts.pory"
	setmetatile 5, 31, 0x387, FALSE
# 29 "data/maps/EltheCity/scripts.pory"
	setmetatile 5, 30, 0x37F, FALSE
# 30 "data/maps/EltheCity/scripts.pory"
	setmetatile 5, 29, 0x377, FALSE
# 31 "data/maps/EltheCity/scripts.pory"
	setmetatile 5, 28, 0x36F, FALSE
	return

EltheCity_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 35 "data/maps/EltheCity/scripts.pory"
	goto_if_set FLAG_SCALE_DESCENDING_DONE, EltheCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
EltheCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 39 "data/maps/EltheCity/scripts.pory"
	goto_if_set FLAG_SCALE_ASCENDING_DONE, EltheCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
EltheCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 44 "data/maps/EltheCity/scripts.pory"
	compare VAR_MAIN_GAME_STATE, 4
	goto_if_eq EltheCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_8
EltheCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_7:
# 49 "data/maps/EltheCity/scripts.pory"
	goto_if_unset FLAG_GOT_PYTHON, EltheCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_10
	return

EltheCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 37 "data/maps/EltheCity/scripts.pory"
	setobjectxyperm 11, 11, 21
	goto EltheCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

EltheCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_5:
# 41 "data/maps/EltheCity/scripts.pory"
	setobjectxyperm 10, 13, 21
	goto EltheCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_4

EltheCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_8:
# 46 "data/maps/EltheCity/scripts.pory"
	setvar VAR_MAIN_GAME_STATE, 5
	goto EltheCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_7

EltheCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_10:
# 51 "data/maps/EltheCity/scripts.pory"
	random 4
# 52 "data/maps/EltheCity/scripts.pory"
	copyvar VAR_TEMP_F, VAR_RESULT
# 53 "data/maps/EltheCity/scripts.pory"
	switch VAR_TEMP_F
# 55 "data/maps/EltheCity/scripts.pory"
	case 0, EltheCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_13
# 59 "data/maps/EltheCity/scripts.pory"
	case 1, EltheCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_14
# 63 "data/maps/EltheCity/scripts.pory"
	case 2, EltheCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_15
# 67 "data/maps/EltheCity/scripts.pory"
	case 3, EltheCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_16
	return

EltheCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_13:
# 56 "data/maps/EltheCity/scripts.pory"
	setobjectxyperm 2, 34, 7
# 57 "data/maps/EltheCity/scripts.pory"
	setobjectmovementtype 2, MOVEMENT_TYPE_FACE_LEFT
# 58 "data/maps/EltheCity/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_MAN_2
	return

EltheCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_14:
# 60 "data/maps/EltheCity/scripts.pory"
	setobjectxyperm 2, 29, 34
# 61 "data/maps/EltheCity/scripts.pory"
	setobjectmovementtype 2, MOVEMENT_TYPE_LOOK_AROUND
# 62 "data/maps/EltheCity/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_MAN_5
	return

EltheCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_15:
# 64 "data/maps/EltheCity/scripts.pory"
	setobjectxyperm 2, 6, 26
# 65 "data/maps/EltheCity/scripts.pory"
	setobjectmovementtype 2, MOVEMENT_TYPE_LOOK_AROUND
# 66 "data/maps/EltheCity/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_SPECIES ( POLIWHIRL )
	return

EltheCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_16:
# 68 "data/maps/EltheCity/scripts.pory"
	setobjectxyperm 2, 28, 15
# 69 "data/maps/EltheCity/scripts.pory"
	setobjectmovementtype 2, MOVEMENT_TYPE_LOOK_AROUND
# 70 "data/maps/EltheCity/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_MAN_2
	return


EltheCity_EventScript_Python::
# 80 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_EventScript_Python_Text_0, MSGBOX_NPC
# 81 "data/maps/EltheCity/scripts.pory"
	special GetLeadMonSpecies
# 82 "data/maps/EltheCity/scripts.pory"
	compare VAR_RESULT, SPECIES_NIDOKING
	goto_if_eq EltheCity_EventScript_Python_2
	return

EltheCity_EventScript_Python_1:
# 84 "data/maps/EltheCity/scripts.pory"
	lock
# 85 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_EventScript_Python_Text_1, PORTRAIT_NIDOKING_NEUTRAL
# 86 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_EventScript_Python_Text_2, MSGBOX_AUTOCLOSE
# 87 "data/maps/EltheCity/scripts.pory"
	playse SE_PIN
# 88 "data/maps/EltheCity/scripts.pory"
	applymovement 2, Common_Movement_ExclamationMark
# 89 "data/maps/EltheCity/scripts.pory"
	delay 48
# 90 "data/maps/EltheCity/scripts.pory"
	applymovement 2, EltheCity_Movement_PythonSpinIn
# 91 "data/maps/EltheCity/scripts.pory"
	waitmovement 0
# 92 "data/maps/EltheCity/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_SPECIES ( ZOROARK )
# 93 "data/maps/EltheCity/scripts.pory"
	removeobject VAR_LAST_TALKED
# 94 "data/maps/EltheCity/scripts.pory"
	addobject VAR_LAST_TALKED
# 95 "data/maps/EltheCity/scripts.pory"
	applymovement 2, EltheCity_Movement_PythonSpinOut
# 96 "data/maps/EltheCity/scripts.pory"
	waitmovement 0
# 97 "data/maps/EltheCity/scripts.pory"
	lock
# 98 "data/maps/EltheCity/scripts.pory"
	faceplayer
# 99 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_EventScript_Python_Text_3, PORTRAIT_ZOROARK_NEUTRAL
# 100 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_EventScript_Python_Text_4
# 101 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_EventScript_Python_Text_5, PORTRAIT_AMELIA_NEUTRAL
# 102 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_EventScript_Python_Text_6
# 103 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_EventScript_Python_Text_5, PORTRAIT_AMELIA_SHOCK
# 104 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_EventScript_Python_Text_7
# 105 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_EventScript_Python_Text_3, PORTRAIT_ZOROARK_NEUTRAL
# 106 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_EventScript_Python_Text_8, MSGBOX_AUTOCLOSE
# 108 "data/maps/EltheCity/scripts.pory"
	applymovement 2, EltheCity_Movement_PythonSpinIn
# 109 "data/maps/EltheCity/scripts.pory"
	waitmovement 0
# 110 "data/maps/EltheCity/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_MAY_NORMAL
# 111 "data/maps/EltheCity/scripts.pory"
	removeobject VAR_LAST_TALKED
# 112 "data/maps/EltheCity/scripts.pory"
	addobject VAR_LAST_TALKED
# 113 "data/maps/EltheCity/scripts.pory"
	applymovement 2, EltheCity_Movement_PythonSpinOut
# 114 "data/maps/EltheCity/scripts.pory"
	waitmovement 0
# 115 "data/maps/EltheCity/scripts.pory"
	lock
# 116 "data/maps/EltheCity/scripts.pory"
	faceplayer
# 117 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_EventScript_Python_Text_3, PORTRAIT_AMELIA_SMUG
# 118 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_EventScript_Python_Text_9
# 119 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_EventScript_Python_Text_3, PORTRAIT_AMELIA_WINK
# 120 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_EventScript_Python_Text_10
# 121 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_EventScript_Python_Text_5, PORTRAIT_AMELIA_SERIOUSLY
# 122 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_EventScript_Python_Text_11
# 123 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_EventScript_Python_Text_5, PORTRAIT_AMELIA_NEUTRAL
# 124 "data/maps/EltheCity/scripts.pory"
	message EltheCity_EventScript_Python_Text_12
# 126 "data/maps/EltheCity/scripts.pory"
	applymovement 2, EltheCity_Movement_PythonSpinIn
# 127 "data/maps/EltheCity/scripts.pory"
	waitmovement 0
# 128 "data/maps/EltheCity/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_SPECIES ( ZOROARK )
# 129 "data/maps/EltheCity/scripts.pory"
	removeobject VAR_LAST_TALKED
# 130 "data/maps/EltheCity/scripts.pory"
	addobject VAR_LAST_TALKED
# 131 "data/maps/EltheCity/scripts.pory"
	applymovement 2, EltheCity_Movement_PythonSpinOut
# 132 "data/maps/EltheCity/scripts.pory"
	waitmovement 0
# 133 "data/maps/EltheCity/scripts.pory"
	lock
# 134 "data/maps/EltheCity/scripts.pory"
	faceplayer
# 135 "data/maps/EltheCity/scripts.pory"
	waitmessage
# 136 "data/maps/EltheCity/scripts.pory"
	waitbuttonpress
# 137 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_EventScript_Python_Text_3, PORTRAIT_ZOROARK_NEUTRAL
# 138 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_EventScript_Python_Text_13, MSGBOX_AUTOCLOSE
# 140 "data/maps/EltheCity/scripts.pory"
	delay 32
# 141 "data/maps/EltheCity/scripts.pory"
	applymovement 2, EnterPokeballMovement
# 142 "data/maps/EltheCity/scripts.pory"
	waitmovement 0
# 143 "data/maps/EltheCity/scripts.pory"
	removeobject 2
# 144 "data/maps/EltheCity/scripts.pory"
	delay 16
# 145 "data/maps/EltheCity/scripts.pory"
	removeitem ITEM_NEST_BALL, 1
# 146 "data/maps/EltheCity/scripts.pory"
	playfanfare MUS_EVOLVED
# 147 "data/maps/EltheCity/scripts.pory"
	message EltheCity_EventScript_Python_Text_14
# 148 "data/maps/EltheCity/scripts.pory"
	waitmessage
# 149 "data/maps/EltheCity/scripts.pory"
	waitfanfare
# 150 "data/maps/EltheCity/scripts.pory"
	waitbuttonpress
# 151 "data/maps/EltheCity/scripts.pory"
	closemessage
# 152 "data/maps/EltheCity/scripts.pory"
	givemon SPECIES_ZOROARK, 54, ITEM_SILK_SCARF, ITEM_NEST_BALL, NATURE_CALM, 0, MON_MALE, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_NIGHT_DAZE, MOVE_AGILITY, MOVE_FLAMETHROWER, MOVE_HYPER_BEAM, FALSE, FALSE, TYPE_NORMAL
# 153 "data/maps/EltheCity/scripts.pory"
	setpartymemberinfo 4
# 154 "data/maps/EltheCity/scripts.pory"
	setvar VAR_MAIN_GAME_STATE, 30
	return

EltheCity_EventScript_Python_2:
# 82 "data/maps/EltheCity/scripts.pory"
	goto_if_set FLAG_CAN_FIND_PYTHON, EltheCity_EventScript_Python_1
	return


# 158 "data/maps/EltheCity/scripts.pory"
EltheCity_Movement_PythonSpinIn:
# 160 "data/maps/EltheCity/scripts.pory"
	face_down
# 161 "data/maps/EltheCity/scripts.pory"
	delay_4
# 162 "data/maps/EltheCity/scripts.pory"
	face_left
# 163 "data/maps/EltheCity/scripts.pory"
	delay_4
# 164 "data/maps/EltheCity/scripts.pory"
	face_up
# 165 "data/maps/EltheCity/scripts.pory"
	delay_2
# 166 "data/maps/EltheCity/scripts.pory"
	face_right
# 167 "data/maps/EltheCity/scripts.pory"
	delay_2
	step_end

# 170 "data/maps/EltheCity/scripts.pory"
EltheCity_Movement_PythonSpinOut:
# 172 "data/maps/EltheCity/scripts.pory"
	face_down
# 173 "data/maps/EltheCity/scripts.pory"
	delay_2
# 174 "data/maps/EltheCity/scripts.pory"
	face_left
# 175 "data/maps/EltheCity/scripts.pory"
	delay_2
# 176 "data/maps/EltheCity/scripts.pory"
	face_up
# 177 "data/maps/EltheCity/scripts.pory"
	delay_4
# 178 "data/maps/EltheCity/scripts.pory"
	face_right
# 179 "data/maps/EltheCity/scripts.pory"
	delay_4
# 180 "data/maps/EltheCity/scripts.pory"
	face_down
# 181 "data/maps/EltheCity/scripts.pory"
	delay_4
# 182 "data/maps/EltheCity/scripts.pory"
	face_player
	step_end

EltheCity_Sign_InnLeft::
# 187 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_Sign_InnLeft_Text_0, MSGBOX_SIGN
	return


EltheCity_Sign_InnRight::
# 192 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_EventScript_Python_Text_5, PORTRAIT_AMELIA_SERIOUSLY
# 193 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_Sign_InnRight_Text_0, MSGBOX_SIGN
	return


EltheCity_Trigger_JumpOnBenchLeft_TopTile::
# 198 "data/maps/EltheCity/scripts.pory"
	clearflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 199 "data/maps/EltheCity/scripts.pory"
	setvar VAR_0x8004, ANIM_SIT_WEST
# 200 "data/maps/EltheCity/scripts.pory"
	callnative DoAmeliaOverworldAnim
# 201 "data/maps/EltheCity/scripts.pory"
	playse SE_BIKE_HOP
# 202 "data/maps/EltheCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, EltheCity_Movement_JumpOnBenchLeft
# 203 "data/maps/EltheCity/scripts.pory"
	waitmovement 0
# 204 "data/maps/EltheCity/scripts.pory"
	addobjectspriteoffset OBJ_EVENT_ID_PLAYER, 0, -6
EltheCity_Trigger_JumpOnBenchLeft_TopTile_3:
# 206 "data/maps/EltheCity/scripts.pory"
	waitforscriptinput
# 207 "data/maps/EltheCity/scripts.pory"
	switch VAR_RESULT
# 209 "data/maps/EltheCity/scripts.pory"
	case 0x0020, EltheCity_Trigger_JumpOnBenchLeft_TopTile_10
# 210 "data/maps/EltheCity/scripts.pory"
	case 0x0001, EltheCity_Trigger_JumpOnBenchLeft_TopTile_10
# 211 "data/maps/EltheCity/scripts.pory"
	case 0x0002, EltheCity_Trigger_JumpOnBenchLeft_TopTile_10
EltheCity_Trigger_JumpOnBenchLeft_TopTile_2:
# 231 "data/maps/EltheCity/scripts.pory"
	compare VAR_RESULT, 0x0020
	goto_if_ne EltheCity_Trigger_JumpOnBenchLeft_TopTile_5
EltheCity_Trigger_JumpOnBenchLeft_TopTile_1:
# 232 "data/maps/EltheCity/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 233 "data/maps/EltheCity/scripts.pory"
	release
	return

EltheCity_Trigger_JumpOnBenchLeft_TopTile_4:
# 231 "data/maps/EltheCity/scripts.pory"
	compare VAR_RESULT, 0x0002
	goto_if_ne EltheCity_Trigger_JumpOnBenchLeft_TopTile_3
	goto EltheCity_Trigger_JumpOnBenchLeft_TopTile_1

EltheCity_Trigger_JumpOnBenchLeft_TopTile_5:
# 231 "data/maps/EltheCity/scripts.pory"
	compare VAR_RESULT, 0x0001
	goto_if_ne EltheCity_Trigger_JumpOnBenchLeft_TopTile_4
	goto EltheCity_Trigger_JumpOnBenchLeft_TopTile_1

EltheCity_Trigger_JumpOnBenchLeft_TopTile_10:
# 212 "data/maps/EltheCity/scripts.pory"
	resetobjectspriteoffset OBJ_EVENT_ID_PLAYER
# 213 "data/maps/EltheCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, EltheCity_Movement_GetOffBenchLeft
# 214 "data/maps/EltheCity/scripts.pory"
	waitmovement 0
	goto EltheCity_Trigger_JumpOnBenchLeft_TopTile_2


EltheCity_Trigger_JumpOnBenchLeft_BottomTile::
# 238 "data/maps/EltheCity/scripts.pory"
	goto EltheCity_Trigger_JumpOnBenchLeft_TopTile
	return


EltheCity_Trigger_JumpOnBenchRight_TopTile::
# 243 "data/maps/EltheCity/scripts.pory"
	clearflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 244 "data/maps/EltheCity/scripts.pory"
	setvar VAR_0x8004, ANIM_SIT_EAST
# 245 "data/maps/EltheCity/scripts.pory"
	callnative DoAmeliaOverworldAnim
# 246 "data/maps/EltheCity/scripts.pory"
	playse SE_BIKE_HOP
# 247 "data/maps/EltheCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, EltheCity_Movement_JumpOnBenchRight
# 248 "data/maps/EltheCity/scripts.pory"
	waitmovement 0
# 249 "data/maps/EltheCity/scripts.pory"
	addobjectspriteoffset OBJ_EVENT_ID_PLAYER, 0, -6
EltheCity_Trigger_JumpOnBenchRight_TopTile_3:
# 251 "data/maps/EltheCity/scripts.pory"
	waitforscriptinput
# 252 "data/maps/EltheCity/scripts.pory"
	switch VAR_RESULT
# 254 "data/maps/EltheCity/scripts.pory"
	case 0x0010, EltheCity_Trigger_JumpOnBenchRight_TopTile_10
# 255 "data/maps/EltheCity/scripts.pory"
	case 0x0001, EltheCity_Trigger_JumpOnBenchRight_TopTile_10
# 256 "data/maps/EltheCity/scripts.pory"
	case 0x0002, EltheCity_Trigger_JumpOnBenchRight_TopTile_10
EltheCity_Trigger_JumpOnBenchRight_TopTile_2:
# 276 "data/maps/EltheCity/scripts.pory"
	compare VAR_RESULT, 0x0010
	goto_if_ne EltheCity_Trigger_JumpOnBenchRight_TopTile_5
EltheCity_Trigger_JumpOnBenchRight_TopTile_1:
# 277 "data/maps/EltheCity/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 278 "data/maps/EltheCity/scripts.pory"
	release
	return

EltheCity_Trigger_JumpOnBenchRight_TopTile_4:
# 276 "data/maps/EltheCity/scripts.pory"
	compare VAR_RESULT, 0x0002
	goto_if_ne EltheCity_Trigger_JumpOnBenchRight_TopTile_3
	goto EltheCity_Trigger_JumpOnBenchRight_TopTile_1

EltheCity_Trigger_JumpOnBenchRight_TopTile_5:
# 276 "data/maps/EltheCity/scripts.pory"
	compare VAR_RESULT, 0x0001
	goto_if_ne EltheCity_Trigger_JumpOnBenchRight_TopTile_4
	goto EltheCity_Trigger_JumpOnBenchRight_TopTile_1

EltheCity_Trigger_JumpOnBenchRight_TopTile_10:
# 257 "data/maps/EltheCity/scripts.pory"
	resetobjectspriteoffset OBJ_EVENT_ID_PLAYER
# 258 "data/maps/EltheCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, EltheCity_Movement_GetOffBenchRight
# 259 "data/maps/EltheCity/scripts.pory"
	waitmovement 0
	goto EltheCity_Trigger_JumpOnBenchRight_TopTile_2


EltheCity_Trigger_JumpOnBenchRight_BottomTile::
# 283 "data/maps/EltheCity/scripts.pory"
	goto EltheCity_Trigger_JumpOnBenchRight_TopTile
	return


EltheCity_EventScript_Keesight::
# 288 "data/maps/EltheCity/scripts.pory"
	goto_if_set FLAG_SCALE_ASCENDING_DONE, EltheCity_EventScript_Keesight_3
EltheCity_EventScript_Keesight_2:
# 295 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_EventScript_Keesight_Text_2, PORTRAIT_KEESIGHT
# 296 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_EventScript_Keesight_Text_3
# 297 "data/maps/EltheCity/scripts.pory"
	speakername NULL, 0
# 298 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_EventScript_Keesight_Text_4, MSGBOX_AUTOCLOSE
	return

EltheCity_EventScript_Keesight_1:
# 290 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_EventScript_Keesight_Text_0, PORTRAIT_KEESIGHT
# 291 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_EventScript_Keesight_Text_1, MSGBOX_NPC
	return

EltheCity_EventScript_Keesight_3:
# 288 "data/maps/EltheCity/scripts.pory"
	goto_if_set FLAG_SCALE_DESCENDING_DONE, EltheCity_EventScript_Keesight_1
	goto EltheCity_EventScript_Keesight_2


EltheCity_EventScript_Weatherbane::
# 304 "data/maps/EltheCity/scripts.pory"
	goto_if_unset FLAG_BEAT_WEATHERBANE, EltheCity_EventScript_Weatherbane_1
# 390 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_EventScript_Weatherbane_Text_1, PORTRAIT_WEATHERBANE_NEUTRAL
# 391 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_EventScript_Weatherbane_Text_17, MSGBOX_AUTOCLOSE
	return

EltheCity_EventScript_Weatherbane_1:
# 306 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_EventScript_Python_Text_5, PORTRAIT_AMELIA_NEUTRAL
# 307 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_EventScript_Weatherbane_Text_0, MSGBOX_AUTOCLOSE
# 308 "data/maps/EltheCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
# 309 "data/maps/EltheCity/scripts.pory"
	waitmovement 0
# 310 "data/maps/EltheCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
# 311 "data/maps/EltheCity/scripts.pory"
	waitmovement 0
# 312 "data/maps/EltheCity/scripts.pory"
	delay 16
# 313 "data/maps/EltheCity/scripts.pory"
	addobjectspriteoffset 1, 1, 0
# 314 "data/maps/EltheCity/scripts.pory"
	delay 8
# 315 "data/maps/EltheCity/scripts.pory"
	addobjectspriteoffset 1, -2, 0
# 316 "data/maps/EltheCity/scripts.pory"
	delay 8
# 317 "data/maps/EltheCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 318 "data/maps/EltheCity/scripts.pory"
	playse SE_PIN
# 319 "data/maps/EltheCity/scripts.pory"
	addobjectspriteoffset 1, 2, 0
# 320 "data/maps/EltheCity/scripts.pory"
	delay 8
# 321 "data/maps/EltheCity/scripts.pory"
	addobjectspriteoffset 1, -2, 0
# 322 "data/maps/EltheCity/scripts.pory"
	delay 8
# 323 "data/maps/EltheCity/scripts.pory"
	addobjectspriteoffset 1, 2, 0
# 324 "data/maps/EltheCity/scripts.pory"
	delay 8
# 325 "data/maps/EltheCity/scripts.pory"
	addobjectspriteoffset 1, -2, 0
# 326 "data/maps/EltheCity/scripts.pory"
	delay 8
# 327 "data/maps/EltheCity/scripts.pory"
	addobjectspriteoffset 1, 2, 0
# 328 "data/maps/EltheCity/scripts.pory"
	delay 8
# 329 "data/maps/EltheCity/scripts.pory"
	addobjectspriteoffset 1, -2, 0
# 330 "data/maps/EltheCity/scripts.pory"
	delay 8
# 331 "data/maps/EltheCity/scripts.pory"
	addobjectspriteoffset 1, 0, 0
# 332 "data/maps/EltheCity/scripts.pory"
	delay 16
# 333 "data/maps/EltheCity/scripts.pory"
	applymovement 1, EltheCity_Movement_WeatherbaneFlap
# 334 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_EventScript_Weatherbane_Text_1, PORTRAIT_WEATHERBANE_SCREAM
# 335 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_EventScript_Weatherbane_Text_2
# 336 "data/maps/EltheCity/scripts.pory"
	waitmovement 1
# 337 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_EventScript_Python_Text_5, PORTRAIT_AMELIA_STRAINED
# 338 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_EventScript_Weatherbane_Text_3
# 339 "data/maps/EltheCity/scripts.pory"
	applymovement 1, EltheCity_Movement_WeatherbaneFlap
# 340 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_EventScript_Weatherbane_Text_1, PORTRAIT_WEATHERBANE_SCREAM
# 341 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_EventScript_Weatherbane_Text_2
# 342 "data/maps/EltheCity/scripts.pory"
	waitmovement 1
# 343 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_EventScript_Python_Text_5, PORTRAIT_AMELIA_SHOCK
# 344 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_EventScript_Weatherbane_Text_4
# 345 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_EventScript_Weatherbane_Text_1, PORTRAIT_WEATHERBANE_NEUTRAL
# 346 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_EventScript_Python_Text_0
# 347 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_EventScript_Python_Text_5, PORTRAIT_AMELIA_NEUTRAL
# 348 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_EventScript_Weatherbane_Text_5
# 349 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_EventScript_Weatherbane_Text_1, PORTRAIT_WEATHERBANE_NEUTRAL
# 350 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_EventScript_Weatherbane_Text_6
# 352 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_EventScript_Python_Text_5, PORTRAIT_AMELIA_NEUTRAL
# 353 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_EventScript_Weatherbane_Text_7
# 354 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_EventScript_Weatherbane_Text_1, PORTRAIT_WEATHERBANE_SCREAM
# 355 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_EventScript_Weatherbane_Text_8
# 357 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_EventScript_Python_Text_5, PORTRAIT_AMELIA_STRAINED
# 358 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_EventScript_Weatherbane_Text_9
# 360 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_EventScript_Weatherbane_Text_1, PORTRAIT_WEATHERBANE_SCREAM
# 361 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_EventScript_Weatherbane_Text_10
# 362 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_EventScript_Python_Text_5, PORTRAIT_AMELIA_NEUTRAL
# 363 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_EventScript_Weatherbane_Text_11
# 364 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_EventScript_Weatherbane_Text_1, PORTRAIT_WEATHERBANE_NEUTRAL
# 365 "data/maps/EltheCity/scripts.pory"
	applymovement 1, EltheCity_Movement_WeatherbaneFlap
# 366 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_EventScript_Weatherbane_Text_12
# 367 "data/maps/EltheCity/scripts.pory"
	waitmovement 1
# 368 "data/maps/EltheCity/scripts.pory"
	closemessage
# 369 "data/maps/EltheCity/scripts.pory"
	createmon 1, 0, SPECIES_WEATHERBANE, 40, ITEM_NONE, 0, NATURE_CALM, 0, MON_MALE, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_STEEL_WING, MOVE_AIR_CUTTER, MOVE_SCREECH, MOVE_ROOST, FALSE, 0, TYPE_WATER
# 370 "data/maps/EltheCity/scripts.pory"
	dowildbattle
# 371 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_EventScript_Weatherbane_Text_1, PORTRAIT_WEATHERBANE_NEUTRAL
# 372 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_EventScript_Weatherbane_Text_13
# 373 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_EventScript_Python_Text_5, PORTRAIT_AMELIA_SERIOUSLY
# 374 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_EventScript_Weatherbane_Text_14
# 375 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_EventScript_Weatherbane_Text_1, PORTRAIT_WEATHERBANE_NEUTRAL
# 376 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_EventScript_Weatherbane_Text_15, MSGBOX_AUTOCLOSE
# 377 "data/maps/EltheCity/scripts.pory"
	delay 8
# 378 "data/maps/EltheCity/scripts.pory"
	giveitem ITEM_EXP_CANDY_L
# 379 "data/maps/EltheCity/scripts.pory"
	delay 60
# 380 "data/maps/EltheCity/scripts.pory"
	setflag FLAG_BEAT_WEATHERBANE
# 381 "data/maps/EltheCity/scripts.pory"
	playfanfare MUS_CAUGHT
# 382 "data/maps/EltheCity/scripts.pory"
	message EltheCity_EventScript_Weatherbane_Text_16
# 383 "data/maps/EltheCity/scripts.pory"
	waitmessage
# 384 "data/maps/EltheCity/scripts.pory"
	waitfanfare
# 385 "data/maps/EltheCity/scripts.pory"
	waitbuttonpress
# 386 "data/maps/EltheCity/scripts.pory"
	closemessage
	return


# 397 "data/maps/EltheCity/scripts.pory"
EltheCity_Movement_WeatherbaneFlap:
# 399 "data/maps/EltheCity/scripts.pory"
	face_up
# 400 "data/maps/EltheCity/scripts.pory"
	delay_8
# 401 "data/maps/EltheCity/scripts.pory"
	face_left
# 402 "data/maps/EltheCity/scripts.pory"
	delay_8
# 403 "data/maps/EltheCity/scripts.pory"
	face_down
# 404 "data/maps/EltheCity/scripts.pory"
	delay_8
# 405 "data/maps/EltheCity/scripts.pory"
	face_right
# 406 "data/maps/EltheCity/scripts.pory"
	delay_8
	step_end

EltheCity_EventScript_BarrelGuy::
# 411 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_EventScript_BarrelGuy_Text_0
# 412 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_EventScript_BarrelGuy_Text_1, MSGBOX_NPC
	return


EltheCity_BakeryWindow::
# 418 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_BakeryWindow_Text_0, MSGBOX_SIGN
	return


EltheCity_CitySign::
# 423 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_CitySign_Text_0, MSGBOX_SIGN
	return


EltheCity_Girlfriend::
# 428 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_Girlfriend_Text_0
# 429 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_Girlfriend_Text_1, MSGBOX_SIGN
	return


EltheCity_Boyfriend::
# 434 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_Boyfriend_Text_0
# 435 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_Boyfriend_Text_1, MSGBOX_SIGN
	return


EltheCity_OldGuyBarrel::
# 440 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_OldGuyBarrel_Text_0
# 441 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_OldGuyBarrel_Text_1, MSGBOX_NPC
	return


EltheCity_Slowbro::
# 447 "data/maps/EltheCity/scripts.pory"
	lock
# 448 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_Slowbro_Text_0
# 449 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_Slowbro_Text_1
# 451 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_EventScript_Python_Text_5, PORTRAIT_AMELIA_STRAINED
# 452 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_Slowbro_Text_2
# 453 "data/maps/EltheCity/scripts.pory"
	faceplayer
# 454 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_Slowbro_Text_0
# 455 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_Slowbro_Text_3
# 456 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_EventScript_Python_Text_5, PORTRAIT_AMELIA_STRAINED
# 457 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_Slowbro_Text_4, MSGBOX_AUTOCLOSE
# 458 "data/maps/EltheCity/scripts.pory"
	release
	return


EltheCity_Lombre::
# 463 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_Lombre_Text_0
# 464 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_Lombre_Text_1, MSGBOX_NPC
	return


EltheCity_Hiker::
# 469 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_Hiker_Text_0
# 470 "data/maps/EltheCity/scripts.pory"
	goto_if_unset FLAG_GOT_BRADLEY, EltheCity_Hiker_1
# 476 "data/maps/EltheCity/scripts.pory"
	lock
# 477 "data/maps/EltheCity/scripts.pory"
	faceplayer
# 478 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_Hiker_Text_2
# 479 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_EventScript_Python_Text_5, PORTRAIT_AMELIA_NEUTRAL
# 480 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_Hiker_Text_3
# 481 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_Hiker_Text_0
# 482 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_Hiker_Text_4
# 483 "data/maps/EltheCity/scripts.pory"
	release
	return

EltheCity_Hiker_1:
# 472 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_Hiker_Text_1, MSGBOX_NPC
	return


EltheCity_Gentleman::
# 489 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_Gentleman_Text_0
# 490 "data/maps/EltheCity/scripts.pory"
	goto_if_unset FLAG_GOT_BRADLEY, EltheCity_Gentleman_1
# 496 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_Gentleman_Text_2, MSGBOX_NPC
	return

EltheCity_Gentleman_1:
# 492 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_Gentleman_Text_1, MSGBOX_NPC
	return


EltheCity_Lass::
# 502 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_Lass_Text_0
# 503 "data/maps/EltheCity/scripts.pory"
	goto_if_unset FLAG_GOT_BRADLEY, EltheCity_Lass_1
# 509 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_Lass_Text_2, MSGBOX_NPC
	return

EltheCity_Lass_1:
# 505 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_Lass_Text_1, MSGBOX_NPC
	return


EltheCity_Mom::
# 515 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_Mom_Text_0
# 516 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_Mom_Text_1, MSGBOX_SIGN
	return


EltheCity_ArenaSign::
# 521 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_ArenaSign_Text_0, MSGBOX_SIGN
	return


EltheCity_CemeterySign::
# 526 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_CemeterySign_Text_0, MSGBOX_SIGN
	return


EltheCity_Phantump::
# 531 "data/maps/EltheCity/scripts.pory"
	goto_if_unset FLAG_MET_PHANTUMP, EltheCity_Phantump_1
# 574 "data/maps/EltheCity/scripts.pory"
	lock
# 575 "data/maps/EltheCity/scripts.pory"
	faceplayer
# 576 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_Phantump_Text_3
# 577 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_Phantump_Text_14
# 578 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_EventScript_Python_Text_5, PORTRAIT_AMELIA_NEUTRAL
# 579 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_Phantump_Text_15
# 580 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_Phantump_Text_3
# 581 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_Phantump_Text_16
# 582 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_EventScript_Python_Text_5, PORTRAIT_AMELIA_SERIOUSLY
# 583 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_Phantump_Text_17
# 584 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_Phantump_Text_3
# 585 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_Phantump_Text_18
# 586 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_EventScript_Python_Text_5, PORTRAIT_AMELIA_SERIOUSLY
# 587 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_Phantump_Text_19
# 588 "data/maps/EltheCity/scripts.pory"
	release
	return

EltheCity_Phantump_1:
# 533 "data/maps/EltheCity/scripts.pory"
	lock
# 534 "data/maps/EltheCity/scripts.pory"
	faceplayer
# 535 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_Phantump_Text_0
# 536 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_Phantump_Text_1
# 537 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_EventScript_Python_Text_5, PORTRAIT_AMELIA_NEUTRAL
# 538 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_Phantump_Text_2
# 539 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_Phantump_Text_3
# 540 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_Phantump_Text_4
# 542 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_EventScript_Python_Text_5, PORTRAIT_AMELIA_NEUTRAL
# 543 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_Phantump_Text_5
# 544 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_Phantump_Text_3
# 545 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_Phantump_Text_6
# 546 "data/maps/EltheCity/scripts.pory"
	applymovement VAR_LAST_TALKED, EltheCity_Movement_PhantumpLookAround
# 547 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_Phantump_Text_7
# 548 "data/maps/EltheCity/scripts.pory"
	waitmovement 0
# 549 "data/maps/EltheCity/scripts.pory"
	applymovement VAR_LAST_TALKED, EltheCity_Movement_PhantumpReturn
# 550 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_Phantump_Text_8
# 551 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_EventScript_Python_Text_5, PORTRAIT_AMELIA_NEUTRAL
# 552 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_Phantump_Text_9
# 553 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_Phantump_Text_3
# 554 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_Phantump_Text_10
# 560 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_EventScript_Python_Text_5, PORTRAIT_AMELIA_NEUTRAL
# 561 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_Phantump_Text_11
# 562 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_Phantump_Text_3
# 563 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_Phantump_Text_12
# 564 "data/maps/EltheCity/scripts.pory"
	speakername NULL
# 565 "data/maps/EltheCity/scripts.pory"
	giveitem ITEM_GLACIALSHARD
# 566 "data/maps/EltheCity/scripts.pory"
	setflag FLAG_GLACIALSHARD_GET
# 567 "data/maps/EltheCity/scripts.pory"
	setflag FLAG_MET_PHANTUMP
# 568 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_EventScript_Python_Text_5, PORTRAIT_AMELIA_NEUTRAL
# 569 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_Phantump_Text_13
# 570 "data/maps/EltheCity/scripts.pory"
	release
	return


# 592 "data/maps/EltheCity/scripts.pory"
EltheCity_Movement_PhantumpLookAround:
# 594 "data/maps/EltheCity/scripts.pory"
	walk_slow_up
# 595 "data/maps/EltheCity/scripts.pory"
	delay_16
# 595 "data/maps/EltheCity/scripts.pory"
	delay_16
# 595 "data/maps/EltheCity/scripts.pory"
	delay_16
# 596 "data/maps/EltheCity/scripts.pory"
	face_right
# 597 "data/maps/EltheCity/scripts.pory"
	delay_16
# 597 "data/maps/EltheCity/scripts.pory"
	delay_16
# 597 "data/maps/EltheCity/scripts.pory"
	delay_16
# 598 "data/maps/EltheCity/scripts.pory"
	face_left
# 599 "data/maps/EltheCity/scripts.pory"
	delay_16
# 599 "data/maps/EltheCity/scripts.pory"
	delay_16
# 599 "data/maps/EltheCity/scripts.pory"
	delay_16
# 600 "data/maps/EltheCity/scripts.pory"
	face_down
	step_end

# 603 "data/maps/EltheCity/scripts.pory"
EltheCity_Movement_PhantumpReturn:
# 605 "data/maps/EltheCity/scripts.pory"
	walk_down
# 606 "data/maps/EltheCity/scripts.pory"
	face_player
	step_end

EltheCity_BradleyScript::
# 611 "data/maps/EltheCity/scripts.pory"
	lock
# 612 "data/maps/EltheCity/scripts.pory"
	faceplayer
# 613 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_EventScript_Python_Text_1, PORTRAIT_NIDOKING_GRIN, PORTRAIT_DEFAULT_LEFT
# 614 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_BradleyScript_Text_0
# 615 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_EventScript_Python_Text_5, PORTRAIT_AMELIA_NEUTRAL
# 616 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_BradleyScript_Text_1
# 617 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_EventScript_Python_Text_1, PORTRAIT_NIDOKING_NEUTRAL, PORTRAIT_DEFAULT_LEFT
# 618 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_BradleyScript_Text_2
# 619 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_EventScript_Python_Text_5, PORTRAIT_AMELIA_STRAINED
# 620 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_BradleyScript_Text_3
# 622 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_EventScript_Python_Text_1, PORTRAIT_NIDOKING_NEUTRAL, PORTRAIT_DEFAULT_LEFT
# 623 "data/maps/EltheCity/scripts.pory"
	playmoncry SPECIES_NIDOKING, CRY_MODE_NORMAL
# 624 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_BradleyScript_Text_4
# 625 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_EventScript_Python_Text_5, PORTRAIT_AMELIA_NEUTRAL
# 626 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_BradleyScript_Text_5
# 627 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_EventScript_Python_Text_1, PORTRAIT_NIDOKING_GRIN, PORTRAIT_DEFAULT_LEFT
# 628 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_BradleyScript_Text_6
# 629 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_EventScript_Python_Text_5, PORTRAIT_AMELIA_SERIOUSLY
# 630 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_BradleyScript_Text_7
# 631 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_EventScript_Python_Text_1, PORTRAIT_NIDOKING_NEUTRAL, PORTRAIT_DEFAULT_LEFT
# 632 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_BradleyScript_Text_8, MSGBOX_YESNO
# 633 "data/maps/EltheCity/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq EltheCity_BradleyScript_2
# 640 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_EventScript_Python_Text_5, PORTRAIT_AMELIA_SMUG
# 641 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_BradleyScript_Text_10
# 642 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_EventScript_Python_Text_1, PORTRAIT_NIDOKING_GRIN, PORTRAIT_DEFAULT_LEFT
# 643 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_BradleyScript_Text_11, MSGBOX_AUTOCLOSE
# 644 "data/maps/EltheCity/scripts.pory"
	clearflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 645 "data/maps/EltheCity/scripts.pory"
	applymovement 4, Common_Movement_WalkInPlaceDown
# 646 "data/maps/EltheCity/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 647 "data/maps/EltheCity/scripts.pory"
	switch VAR_RESULT
# 649 "data/maps/EltheCity/scripts.pory"
	case DIR_SOUTH, EltheCity_BradleyScript_7
# 651 "data/maps/EltheCity/scripts.pory"
	case DIR_EAST, EltheCity_BradleyScript_8
# 653 "data/maps/EltheCity/scripts.pory"
	case DIR_WEST, EltheCity_BradleyScript_9
# 655 "data/maps/EltheCity/scripts.pory"
	case DIR_NORTH, EltheCity_BradleyScript_10
EltheCity_BradleyScript_5:
# 658 "data/maps/EltheCity/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 659 "data/maps/EltheCity/scripts.pory"
	playmoncry SPECIES_NIDOKING, CRY_MODE_NORMAL
# 660 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_EventScript_Python_Text_1, PORTRAIT_NIDOKING_GRIN, PORTRAIT_DEFAULT_LEFT
# 661 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_BradleyScript_Text_12, MSGBOX_AUTOCLOSE
# 662 "data/maps/EltheCity/scripts.pory"
	waitmoncry
# 663 "data/maps/EltheCity/scripts.pory"
	setflag FLAG_WILD_AI_ON
# 664 "data/maps/EltheCity/scripts.pory"
	createmon 1, 0, SPECIES_NIDOKING, 56, ITEM_QUICK_CLAW, ITEM_ULTRA_BALL, NATURE_LONELY, 2, MON_MALE, 0, 10, 0, 0, 10, 0, 31, 31, 31, 31, 31, 31, MOVE_POISON_JAB, MOVE_EARTHQUAKE, MOVE_MEGAHORN, MOVE_SLUDGE_BOMB, FALSE, FALSE, TYPE_GROUND
# 665 "data/maps/EltheCity/scripts.pory"
	dowildbattle
# 666 "data/maps/EltheCity/scripts.pory"
	delay 32
# 667 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_EventScript_Python_Text_1, PORTRAIT_NIDOKING_NERVOUS, PORTRAIT_DEFAULT_LEFT
# 668 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_BradleyScript_Text_13
# 669 "data/maps/EltheCity/scripts.pory"
	applymovement 4, EltheCity_Movement_BradleyApproach
# 670 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_EventScript_Python_Text_1, PORTRAIT_NIDOKING_NEUTRAL, PORTRAIT_DEFAULT_LEFT
# 671 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_BradleyScript_Text_14
# 674 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_EventScript_Python_Text_5, PORTRAIT_AMELIA_SERIOUSLY
# 675 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_BradleyScript_Text_15
# 677 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_EventScript_Python_Text_1, PORTRAIT_NIDOKING_NEUTRAL, PORTRAIT_DEFAULT_LEFT
# 678 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_BradleyScript_Text_16
# 679 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_EventScript_Python_Text_5, PORTRAIT_AMELIA_SHOCK
# 680 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_BradleyScript_Text_17
# 681 "data/maps/EltheCity/scripts.pory"
	goto_if_set FLAG_GOT_VICE, EltheCity_BradleyScript_11
# 710 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_EventScript_Python_Text_5, PORTRAIT_AMELIA_NEUTRAL
# 711 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_BradleyScript_Text_22
# 712 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_EventScript_Python_Text_1, PORTRAIT_NIDOKING_NEUTRAL, PORTRAIT_DEFAULT_LEFT
# 713 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_BradleyScript_Text_23, MSGBOX_AUTOCLOSE
# 714 "data/maps/EltheCity/scripts.pory"
	delay 32
# 715 "data/maps/EltheCity/scripts.pory"
	applymovement 4, EnterPokeballMovement
# 716 "data/maps/EltheCity/scripts.pory"
	waitmovement 0
# 717 "data/maps/EltheCity/scripts.pory"
	removeobject 4
# 718 "data/maps/EltheCity/scripts.pory"
	delay 16
# 719 "data/maps/EltheCity/scripts.pory"
	removeitem ITEM_ULTRA_BALL, 1
# 720 "data/maps/EltheCity/scripts.pory"
	playfanfare MUS_EVOLVED
# 721 "data/maps/EltheCity/scripts.pory"
	message EltheCity_BradleyScript_Text_21
# 722 "data/maps/EltheCity/scripts.pory"
	waitmessage
# 723 "data/maps/EltheCity/scripts.pory"
	waitfanfare
# 724 "data/maps/EltheCity/scripts.pory"
	waitbuttonpress
# 725 "data/maps/EltheCity/scripts.pory"
	closemessage
# 726 "data/maps/EltheCity/scripts.pory"
	givemon SPECIES_NIDOKING, 56, ITEM_QUICK_CLAW, ITEM_ULTRA_BALL, NATURE_LONELY, 2, MON_MALE, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_POISON_JAB, MOVE_EARTHQUAKE, MOVE_ICE_BEAM, MOVE_THUNDERBOLT, FALSE, FALSE, TYPE_GROUND
# 727 "data/maps/EltheCity/scripts.pory"
	setpartymemberinfo 3
EltheCity_BradleyScript_1:
# 730 "data/maps/EltheCity/scripts.pory"
	release
	return

EltheCity_BradleyScript_2:
# 635 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_EventScript_Python_Text_1, PORTRAIT_NIDOKING_GRIN, PORTRAIT_DEFAULT_LEFT
# 636 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_BradleyScript_Text_9
	goto EltheCity_BradleyScript_1

EltheCity_BradleyScript_7:
# 650 "data/maps/EltheCity/scripts.pory"
	call EltheCity_WalkToBradleyBattle_North
	goto EltheCity_BradleyScript_5

EltheCity_BradleyScript_8:
# 652 "data/maps/EltheCity/scripts.pory"
	call EltheCity_WalkToBradleyBattle_West
	goto EltheCity_BradleyScript_5

EltheCity_BradleyScript_9:
# 654 "data/maps/EltheCity/scripts.pory"
	call EltheCity_WalkToBradleyBattle_East
	goto EltheCity_BradleyScript_5

EltheCity_BradleyScript_10:
# 656 "data/maps/EltheCity/scripts.pory"
	call EltheCity_WalkToBradleyBattle_South
	goto EltheCity_BradleyScript_5

EltheCity_BradleyScript_11:
# 683 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_EventScript_Python_Text_5, PORTRAIT_AMELIA_NEUTRAL
# 684 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_BradleyScript_Text_18
# 685 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_EventScript_Python_Text_1, PORTRAIT_NIDOKING_NEUTRAL, PORTRAIT_DEFAULT_LEFT
# 686 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_BradleyScript_Text_19
# 689 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_EventScript_Python_Text_5, PORTRAIT_AMELIA_WINK
# 690 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_BradleyScript_Text_20, MSGBOX_AUTOCLOSE
# 691 "data/maps/EltheCity/scripts.pory"
	delay 32
# 692 "data/maps/EltheCity/scripts.pory"
	applymovement 4, EnterPokeballMovement
# 693 "data/maps/EltheCity/scripts.pory"
	waitmovement 0
# 694 "data/maps/EltheCity/scripts.pory"
	removeobject 4
# 695 "data/maps/EltheCity/scripts.pory"
	delay 16
# 696 "data/maps/EltheCity/scripts.pory"
	removeitem ITEM_ULTRA_BALL, 1
# 697 "data/maps/EltheCity/scripts.pory"
	playfanfare MUS_EVOLVED
# 698 "data/maps/EltheCity/scripts.pory"
	message EltheCity_BradleyScript_Text_21
# 699 "data/maps/EltheCity/scripts.pory"
	waitmessage
# 700 "data/maps/EltheCity/scripts.pory"
	waitfanfare
# 701 "data/maps/EltheCity/scripts.pory"
	waitbuttonpress
# 702 "data/maps/EltheCity/scripts.pory"
	closemessage
# 703 "data/maps/EltheCity/scripts.pory"
	givemon SPECIES_NIDOKING, 56, ITEM_QUICK_CLAW, ITEM_ULTRA_BALL, NATURE_LONELY, 2, MON_MALE, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_POISON_JAB, MOVE_EARTHQUAKE, MOVE_MEGAHORN, MOVE_SLUDGE_BOMB, FALSE, FALSE, TYPE_GROUND
# 704 "data/maps/EltheCity/scripts.pory"
	setpartymemberinfo 3
# 705 "data/maps/EltheCity/scripts.pory"
	setflag FLAG_CAN_FIND_PYTHON
# 706 "data/maps/EltheCity/scripts.pory"
	setvar VAR_MAIN_GAME_STATE, 15
	goto EltheCity_BradleyScript_1


# 733 "data/maps/EltheCity/scripts.pory"
EltheCity_Movement_BradleyApproach:
# 735 "data/maps/EltheCity/scripts.pory"
	walk_slow_down
# 735 "data/maps/EltheCity/scripts.pory"
	walk_slow_down
# 735 "data/maps/EltheCity/scripts.pory"
	walk_slow_down
	step_end

EltheCity_WalkToBradleyBattle_North::
# 740 "data/maps/EltheCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, EltheCity_Movement_BradleyBattleNorth
# 741 "data/maps/EltheCity/scripts.pory"
	waitmovement 0
# 742 "data/maps/EltheCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, EltheCity_Movement_BradleyBattleWest
# 743 "data/maps/EltheCity/scripts.pory"
	waitmovement 0
	return


EltheCity_WalkToBradleyBattle_South::
# 749 "data/maps/EltheCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, EltheCity_Movement_BradleyBattleSouth
# 750 "data/maps/EltheCity/scripts.pory"
	waitmovement 0
	return


EltheCity_WalkToBradleyBattle_East::
# 756 "data/maps/EltheCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, EltheCity_Movement_BradleyBattleEast
# 757 "data/maps/EltheCity/scripts.pory"
	waitmovement 0
	return


EltheCity_WalkToBradleyBattle_West::
# 763 "data/maps/EltheCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, EltheCity_Movement_BradleyBattleWest
# 764 "data/maps/EltheCity/scripts.pory"
	waitmovement 0
	return


# 768 "data/maps/EltheCity/scripts.pory"
EltheCity_Movement_BradleyBattleNorth:
# 770 "data/maps/EltheCity/scripts.pory"
	walk_left
# 771 "data/maps/EltheCity/scripts.pory"
	walk_down
	step_end

# 774 "data/maps/EltheCity/scripts.pory"
EltheCity_Movement_BradleyBattleWest:
# 776 "data/maps/EltheCity/scripts.pory"
	walk_down
# 776 "data/maps/EltheCity/scripts.pory"
	walk_down
# 776 "data/maps/EltheCity/scripts.pory"
	walk_down
# 776 "data/maps/EltheCity/scripts.pory"
	walk_down
# 777 "data/maps/EltheCity/scripts.pory"
	walk_right
# 778 "data/maps/EltheCity/scripts.pory"
	face_up
# 779 "data/maps/EltheCity/scripts.pory"
	delay_16
	step_end

# 782 "data/maps/EltheCity/scripts.pory"
EltheCity_Movement_BradleyBattleEast:
# 784 "data/maps/EltheCity/scripts.pory"
	walk_down
# 784 "data/maps/EltheCity/scripts.pory"
	walk_down
# 784 "data/maps/EltheCity/scripts.pory"
	walk_down
# 784 "data/maps/EltheCity/scripts.pory"
	walk_down
# 785 "data/maps/EltheCity/scripts.pory"
	walk_left
# 786 "data/maps/EltheCity/scripts.pory"
	face_up
# 787 "data/maps/EltheCity/scripts.pory"
	delay_16
	step_end

# 790 "data/maps/EltheCity/scripts.pory"
EltheCity_Movement_BradleyBattleSouth:
# 792 "data/maps/EltheCity/scripts.pory"
	walk_down
# 792 "data/maps/EltheCity/scripts.pory"
	walk_down
# 792 "data/maps/EltheCity/scripts.pory"
	walk_down
# 793 "data/maps/EltheCity/scripts.pory"
	face_up
# 794 "data/maps/EltheCity/scripts.pory"
	delay_16
	step_end

EltheCity_EventScript_FatGuy::
# 799 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_EventScript_FatGuy_Text_0
# 800 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_EventScript_FatGuy_Text_1, MSGBOX_NPC
	return


EltheCity_Sign_TrashBarrel::
# 805 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_Sign_TrashBarrel_Text_0, MSGBOX_SIGN
	return


EltheCity_Sign_RainBarrel::
# 810 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_Sign_RainBarrel_Text_0, MSGBOX_SIGN
	return


EltheCity_Sign_NestBarrel::
# 815 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_Sign_NestBarrel_Text_0, MSGBOX_SIGN
	return


EltheCity_Trigger_MusicStump1::
# 820 "data/maps/EltheCity/scripts.pory"
	playse SE_NOTE_C
# 821 "data/maps/EltheCity/scripts.pory"
	turnobject 9, DIR_WEST
# 824 "data/maps/EltheCity/scripts.pory"
	compare VAR_TEMP_2, 7
	goto_if_eq EltheCity_Trigger_MusicStump1_4
EltheCity_Trigger_MusicStump1_3:
# 848 "data/maps/EltheCity/scripts.pory"
	setvar VAR_TEMP_2, 0
# 849 "data/maps/EltheCity/scripts.pory"
	setvar VAR_TEMP_1, 1
EltheCity_Trigger_MusicStump1_1:
# 852 "data/maps/EltheCity/scripts.pory"
	release
	return

EltheCity_Trigger_MusicStump1_2:
# 826 "data/maps/EltheCity/scripts.pory"
	delay 60
# 827 "data/maps/EltheCity/scripts.pory"
	applymovement 9, EltheCity_Movement_KeesightHops
# 828 "data/maps/EltheCity/scripts.pory"
	playse SE_BIKE_HOP
# 829 "data/maps/EltheCity/scripts.pory"
	delay 16
# 830 "data/maps/EltheCity/scripts.pory"
	playse SE_BIKE_HOP
# 831 "data/maps/EltheCity/scripts.pory"
	delay 32
# 832 "data/maps/EltheCity/scripts.pory"
	playmoncry SPECIES_WOOBAT, CRY_MODE_NORMAL
# 833 "data/maps/EltheCity/scripts.pory"
	waitmoncry
# 834 "data/maps/EltheCity/scripts.pory"
	delay 30
# 835 "data/maps/EltheCity/scripts.pory"
	applymovement 9, Common_Movement_FaceUp
# 836 "data/maps/EltheCity/scripts.pory"
	waitmovement 0
# 837 "data/maps/EltheCity/scripts.pory"
	delay 16
# 838 "data/maps/EltheCity/scripts.pory"
	playse SE_M_SUPERSONIC
# 839 "data/maps/EltheCity/scripts.pory"
	applymovement 11, EltheCity_Movement_MoveUmbrashard
# 840 "data/maps/EltheCity/scripts.pory"
	waitmovement 0
# 841 "data/maps/EltheCity/scripts.pory"
	applymovement 9, Common_Movement_FaceDown
# 842 "data/maps/EltheCity/scripts.pory"
	waitmovement 0
# 843 "data/maps/EltheCity/scripts.pory"
	setobjectxyperm 11, 11, 21
# 844 "data/maps/EltheCity/scripts.pory"
	setflag FLAG_SCALE_DESCENDING_DONE
	goto EltheCity_Trigger_MusicStump1_1

EltheCity_Trigger_MusicStump1_4:
# 824 "data/maps/EltheCity/scripts.pory"
	goto_if_unset FLAG_SCALE_DESCENDING_DONE, EltheCity_Trigger_MusicStump1_2
	goto EltheCity_Trigger_MusicStump1_3


EltheCity_Trigger_MusicStump2::
# 857 "data/maps/EltheCity/scripts.pory"
	playse SE_NOTE_D
# 858 "data/maps/EltheCity/scripts.pory"
	turnobject 9, DIR_WEST
# 861 "data/maps/EltheCity/scripts.pory"
	compare VAR_TEMP_1, 1
	goto_if_eq EltheCity_Trigger_MusicStump2_2
# 867 "data/maps/EltheCity/scripts.pory"
	setvar VAR_TEMP_1, 0
EltheCity_Trigger_MusicStump2_1:
# 871 "data/maps/EltheCity/scripts.pory"
	compare VAR_TEMP_2, 6
	goto_if_eq EltheCity_Trigger_MusicStump2_6
# 877 "data/maps/EltheCity/scripts.pory"
	setvar VAR_TEMP_2, 0
EltheCity_Trigger_MusicStump2_5:
# 880 "data/maps/EltheCity/scripts.pory"
	release
	return

EltheCity_Trigger_MusicStump2_2:
# 863 "data/maps/EltheCity/scripts.pory"
	addvar VAR_TEMP_1, 1
	goto EltheCity_Trigger_MusicStump2_1

EltheCity_Trigger_MusicStump2_6:
# 873 "data/maps/EltheCity/scripts.pory"
	addvar VAR_TEMP_2, 1
	goto EltheCity_Trigger_MusicStump2_5


EltheCity_Trigger_MusicStump3::
# 885 "data/maps/EltheCity/scripts.pory"
	playse SE_NOTE_E
# 886 "data/maps/EltheCity/scripts.pory"
	turnobject 9, DIR_WEST
# 889 "data/maps/EltheCity/scripts.pory"
	compare VAR_TEMP_1, 2
	goto_if_eq EltheCity_Trigger_MusicStump3_2
# 895 "data/maps/EltheCity/scripts.pory"
	setvar VAR_TEMP_1, 0
EltheCity_Trigger_MusicStump3_1:
# 899 "data/maps/EltheCity/scripts.pory"
	compare VAR_TEMP_2, 5
	goto_if_eq EltheCity_Trigger_MusicStump3_6
# 905 "data/maps/EltheCity/scripts.pory"
	setvar VAR_TEMP_2, 0
EltheCity_Trigger_MusicStump3_5:
# 908 "data/maps/EltheCity/scripts.pory"
	release
	return

EltheCity_Trigger_MusicStump3_2:
# 891 "data/maps/EltheCity/scripts.pory"
	addvar VAR_TEMP_1, 1
	goto EltheCity_Trigger_MusicStump3_1

EltheCity_Trigger_MusicStump3_6:
# 901 "data/maps/EltheCity/scripts.pory"
	addvar VAR_TEMP_2, 1
	goto EltheCity_Trigger_MusicStump3_5


EltheCity_Trigger_MusicStump4::
# 913 "data/maps/EltheCity/scripts.pory"
	playse SE_NOTE_F
# 914 "data/maps/EltheCity/scripts.pory"
	turnobject 9, DIR_SOUTH
# 917 "data/maps/EltheCity/scripts.pory"
	compare VAR_TEMP_1, 3
	goto_if_eq EltheCity_Trigger_MusicStump4_2
# 923 "data/maps/EltheCity/scripts.pory"
	setvar VAR_TEMP_1, 0
EltheCity_Trigger_MusicStump4_1:
# 927 "data/maps/EltheCity/scripts.pory"
	compare VAR_TEMP_2, 4
	goto_if_eq EltheCity_Trigger_MusicStump4_6
# 933 "data/maps/EltheCity/scripts.pory"
	setvar VAR_TEMP_2, 0
EltheCity_Trigger_MusicStump4_5:
# 936 "data/maps/EltheCity/scripts.pory"
	release
	return

EltheCity_Trigger_MusicStump4_2:
# 919 "data/maps/EltheCity/scripts.pory"
	addvar VAR_TEMP_1, 1
	goto EltheCity_Trigger_MusicStump4_1

EltheCity_Trigger_MusicStump4_6:
# 929 "data/maps/EltheCity/scripts.pory"
	addvar VAR_TEMP_2, 1
	goto EltheCity_Trigger_MusicStump4_5


EltheCity_Trigger_MusicStump5::
# 941 "data/maps/EltheCity/scripts.pory"
	playse SE_NOTE_G
# 942 "data/maps/EltheCity/scripts.pory"
	turnobject 9, DIR_SOUTH
# 945 "data/maps/EltheCity/scripts.pory"
	compare VAR_TEMP_1, 4
	goto_if_eq EltheCity_Trigger_MusicStump5_2
# 951 "data/maps/EltheCity/scripts.pory"
	setvar VAR_TEMP_1, 0
EltheCity_Trigger_MusicStump5_1:
# 955 "data/maps/EltheCity/scripts.pory"
	compare VAR_TEMP_2, 3
	goto_if_eq EltheCity_Trigger_MusicStump5_6
# 961 "data/maps/EltheCity/scripts.pory"
	setvar VAR_TEMP_2, 0
EltheCity_Trigger_MusicStump5_5:
# 964 "data/maps/EltheCity/scripts.pory"
	release
	return

EltheCity_Trigger_MusicStump5_2:
# 947 "data/maps/EltheCity/scripts.pory"
	addvar VAR_TEMP_1, 1
	goto EltheCity_Trigger_MusicStump5_1

EltheCity_Trigger_MusicStump5_6:
# 957 "data/maps/EltheCity/scripts.pory"
	addvar VAR_TEMP_2, 1
	goto EltheCity_Trigger_MusicStump5_5


EltheCity_Trigger_MusicStump6::
# 969 "data/maps/EltheCity/scripts.pory"
	playse SE_NOTE_A
# 970 "data/maps/EltheCity/scripts.pory"
	turnobject 9, DIR_EAST
# 973 "data/maps/EltheCity/scripts.pory"
	compare VAR_TEMP_1, 5
	goto_if_eq EltheCity_Trigger_MusicStump6_2
# 979 "data/maps/EltheCity/scripts.pory"
	setvar VAR_TEMP_1, 0
EltheCity_Trigger_MusicStump6_1:
# 983 "data/maps/EltheCity/scripts.pory"
	compare VAR_TEMP_2, 2
	goto_if_eq EltheCity_Trigger_MusicStump6_6
# 989 "data/maps/EltheCity/scripts.pory"
	setvar VAR_TEMP_2, 0
EltheCity_Trigger_MusicStump6_5:
# 992 "data/maps/EltheCity/scripts.pory"
	release
	return

EltheCity_Trigger_MusicStump6_2:
# 975 "data/maps/EltheCity/scripts.pory"
	addvar VAR_TEMP_1, 1
	goto EltheCity_Trigger_MusicStump6_1

EltheCity_Trigger_MusicStump6_6:
# 985 "data/maps/EltheCity/scripts.pory"
	addvar VAR_TEMP_2, 1
	goto EltheCity_Trigger_MusicStump6_5


EltheCity_Trigger_MusicStump7::
# 997 "data/maps/EltheCity/scripts.pory"
	playse SE_NOTE_B
# 998 "data/maps/EltheCity/scripts.pory"
	turnobject 9, DIR_EAST
# 1001 "data/maps/EltheCity/scripts.pory"
	compare VAR_TEMP_1, 6
	goto_if_eq EltheCity_Trigger_MusicStump7_2
# 1007 "data/maps/EltheCity/scripts.pory"
	setvar VAR_TEMP_1, 0
EltheCity_Trigger_MusicStump7_1:
# 1011 "data/maps/EltheCity/scripts.pory"
	compare VAR_TEMP_2, 1
	goto_if_eq EltheCity_Trigger_MusicStump7_6
# 1017 "data/maps/EltheCity/scripts.pory"
	setvar VAR_TEMP_2, 0
EltheCity_Trigger_MusicStump7_5:
# 1020 "data/maps/EltheCity/scripts.pory"
	release
	return

EltheCity_Trigger_MusicStump7_2:
# 1003 "data/maps/EltheCity/scripts.pory"
	addvar VAR_TEMP_1, 1
	goto EltheCity_Trigger_MusicStump7_1

EltheCity_Trigger_MusicStump7_6:
# 1013 "data/maps/EltheCity/scripts.pory"
	addvar VAR_TEMP_2, 1
	goto EltheCity_Trigger_MusicStump7_5


EltheCity_Trigger_MusicStump8::
# 1025 "data/maps/EltheCity/scripts.pory"
	playse SE_NOTE_C_HIGH
# 1026 "data/maps/EltheCity/scripts.pory"
	turnobject 9, DIR_EAST
# 1030 "data/maps/EltheCity/scripts.pory"
	compare VAR_TEMP_1, 7
	goto_if_eq EltheCity_Trigger_MusicStump8_4
EltheCity_Trigger_MusicStump8_3:
# 1054 "data/maps/EltheCity/scripts.pory"
	setvar VAR_TEMP_1, 0
# 1055 "data/maps/EltheCity/scripts.pory"
	setvar VAR_TEMP_2, 1
EltheCity_Trigger_MusicStump8_1:
# 1058 "data/maps/EltheCity/scripts.pory"
	release
	return

EltheCity_Trigger_MusicStump8_2:
# 1032 "data/maps/EltheCity/scripts.pory"
	delay 60
# 1033 "data/maps/EltheCity/scripts.pory"
	applymovement 9, EltheCity_Movement_KeesightHops
# 1034 "data/maps/EltheCity/scripts.pory"
	playse SE_BIKE_HOP
# 1035 "data/maps/EltheCity/scripts.pory"
	delay 16
# 1036 "data/maps/EltheCity/scripts.pory"
	playse SE_BIKE_HOP
# 1037 "data/maps/EltheCity/scripts.pory"
	delay 32
# 1038 "data/maps/EltheCity/scripts.pory"
	playmoncry SPECIES_WOOBAT, CRY_MODE_NORMAL
# 1039 "data/maps/EltheCity/scripts.pory"
	waitmoncry
# 1040 "data/maps/EltheCity/scripts.pory"
	delay 30
# 1041 "data/maps/EltheCity/scripts.pory"
	applymovement 9, Common_Movement_FaceUp
# 1042 "data/maps/EltheCity/scripts.pory"
	waitmovement 0
# 1043 "data/maps/EltheCity/scripts.pory"
	delay 16
# 1044 "data/maps/EltheCity/scripts.pory"
	playse SE_M_SUPERSONIC
# 1045 "data/maps/EltheCity/scripts.pory"
	applymovement 10, EltheCity_Movement_MoveEspershard
# 1046 "data/maps/EltheCity/scripts.pory"
	waitmovement 0
# 1047 "data/maps/EltheCity/scripts.pory"
	applymovement 9, Common_Movement_FaceDown
# 1048 "data/maps/EltheCity/scripts.pory"
	waitmovement 0
# 1049 "data/maps/EltheCity/scripts.pory"
	setobjectxyperm 10, 13, 21
# 1050 "data/maps/EltheCity/scripts.pory"
	setflag FLAG_SCALE_ASCENDING_DONE
	goto EltheCity_Trigger_MusicStump8_1

EltheCity_Trigger_MusicStump8_4:
# 1030 "data/maps/EltheCity/scripts.pory"
	goto_if_unset FLAG_SCALE_ASCENDING_DONE, EltheCity_Trigger_MusicStump8_2
	goto EltheCity_Trigger_MusicStump8_3


# 1061 "data/maps/EltheCity/scripts.pory"
EltheCity_Movement_KeesightHops:
# 1063 "data/maps/EltheCity/scripts.pory"
	jump_in_place_down
# 1063 "data/maps/EltheCity/scripts.pory"
	jump_in_place_down
	step_end

# 1066 "data/maps/EltheCity/scripts.pory"
EltheCity_Movement_MoveUmbrashard:
# 1068 "data/maps/EltheCity/scripts.pory"
	levitate
# 1069 "data/maps/EltheCity/scripts.pory"
	delay_16
# 1070 "data/maps/EltheCity/scripts.pory"
	walk_up
# 1070 "data/maps/EltheCity/scripts.pory"
	walk_up
# 1070 "data/maps/EltheCity/scripts.pory"
	walk_up
# 1071 "data/maps/EltheCity/scripts.pory"
	walk_right
# 1071 "data/maps/EltheCity/scripts.pory"
	walk_right
# 1071 "data/maps/EltheCity/scripts.pory"
	walk_right
# 1071 "data/maps/EltheCity/scripts.pory"
	walk_right
# 1071 "data/maps/EltheCity/scripts.pory"
	walk_right
# 1071 "data/maps/EltheCity/scripts.pory"
	walk_right
# 1071 "data/maps/EltheCity/scripts.pory"
	walk_right
# 1071 "data/maps/EltheCity/scripts.pory"
	walk_right
# 1072 "data/maps/EltheCity/scripts.pory"
	walk_up
# 1073 "data/maps/EltheCity/scripts.pory"
	delay_16
# 1074 "data/maps/EltheCity/scripts.pory"
	stop_levitate
	step_end

# 1077 "data/maps/EltheCity/scripts.pory"
EltheCity_Movement_MoveEspershard:
# 1079 "data/maps/EltheCity/scripts.pory"
	levitate
# 1080 "data/maps/EltheCity/scripts.pory"
	delay_16
# 1081 "data/maps/EltheCity/scripts.pory"
	walk_left
# 1081 "data/maps/EltheCity/scripts.pory"
	walk_left
# 1081 "data/maps/EltheCity/scripts.pory"
	walk_left
# 1081 "data/maps/EltheCity/scripts.pory"
	walk_left
# 1081 "data/maps/EltheCity/scripts.pory"
	walk_left
# 1081 "data/maps/EltheCity/scripts.pory"
	walk_left
# 1081 "data/maps/EltheCity/scripts.pory"
	walk_left
# 1081 "data/maps/EltheCity/scripts.pory"
	walk_left
# 1082 "data/maps/EltheCity/scripts.pory"
	walk_up
# 1083 "data/maps/EltheCity/scripts.pory"
	delay_16
# 1084 "data/maps/EltheCity/scripts.pory"
	stop_levitate
	step_end

# 1087 "data/maps/EltheCity/scripts.pory"
EltheCity_Movement_JumpOnBenchLeft:
# 1089 "data/maps/EltheCity/scripts.pory"
	lock_anim
# 1090 "data/maps/EltheCity/scripts.pory"
	jump_in_place_left
	step_end

# 1093 "data/maps/EltheCity/scripts.pory"
EltheCity_Movement_GetOffBenchLeft:
# 1095 "data/maps/EltheCity/scripts.pory"
	unlock_anim
# 1096 "data/maps/EltheCity/scripts.pory"
	walk_slow_left
	step_end

# 1099 "data/maps/EltheCity/scripts.pory"
EltheCity_Movement_JumpOnBenchRight:
# 1101 "data/maps/EltheCity/scripts.pory"
	lock_anim
# 1102 "data/maps/EltheCity/scripts.pory"
	jump_in_place_right
	step_end

# 1105 "data/maps/EltheCity/scripts.pory"
EltheCity_Movement_GetOffBenchRight:
# 1107 "data/maps/EltheCity/scripts.pory"
	unlock_anim
# 1108 "data/maps/EltheCity/scripts.pory"
	walk_slow_right
	step_end

# 1111 "data/maps/EltheCity/scripts.pory"
EltheCity_Movement_MoveDownBench:
# 1113 "data/maps/EltheCity/scripts.pory"
	walk_slow_down
	step_end

# 1116 "data/maps/EltheCity/scripts.pory"
EltheCity_Movement_MoveUpBench:
# 1118 "data/maps/EltheCity/scripts.pory"
	walk_slow_up
	step_end

EltheCity_Sign_BlockedHouse::
# 1123 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_Sign_BlockedHouse_Text_0, MSGBOX_SIGN
	return


EltheCity_Trigger_FinalBoss::
# 1128 "data/maps/EltheCity/scripts.pory"
	fadescreen FADE_TO_BLACK
# 1129 "data/maps/EltheCity/scripts.pory"
	delay 16
# 1130 "data/maps/EltheCity/scripts.pory"
	setflag FLAG_TEMP_HIDE_FOLLOWER
# 1131 "data/maps/EltheCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Movement_UnsafeUp
# 1132 "data/maps/EltheCity/scripts.pory"
	addobject 27
# 1133 "data/maps/EltheCity/scripts.pory"
	addobject 26
# 1134 "data/maps/EltheCity/scripts.pory"
	addobject 24
# 1135 "data/maps/EltheCity/scripts.pory"
	addobject 28
# 1136 "data/maps/EltheCity/scripts.pory"
	addobject 25
# 1137 "data/maps/EltheCity/scripts.pory"
	removeobject OBJ_EVENT_ID_FOLLOWER
# 1138 "data/maps/EltheCity/scripts.pory"
	delay 32
# 1139 "data/maps/EltheCity/scripts.pory"
	setobjectxy OBJ_EVENT_ID_PLAYER, 18, 15
# 1140 "data/maps/EltheCity/scripts.pory"
	setvar VAR_0x8000, 18
# 1141 "data/maps/EltheCity/scripts.pory"
	setvar VAR_0x8001, 15
# 1142 "data/maps/EltheCity/scripts.pory"
	special TeleportCamera
# 1143 "data/maps/EltheCity/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 1144 "data/maps/EltheCity/scripts.pory"
	delay 16
# 1145 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_EventScript_Python_Text_5, PORTRAIT_AMELIA_NEUTRAL
# 1146 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_Trigger_FinalBoss_Text_0
# 1147 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_Trigger_FinalBoss_Text_1, PORTRAIT_DEMIVEE_NEUTRAL
# 1148 "data/maps/EltheCity/scripts.pory"
	message EltheCity_Trigger_FinalBoss_Text_2
# 1149 "data/maps/EltheCity/scripts.pory"
	playse SE_M_HEADBUTT
# 1150 "data/maps/EltheCity/scripts.pory"
	applymovement 26, Ending_Movement_DemiveeJump
# 1151 "data/maps/EltheCity/scripts.pory"
	delay 8
# 1152 "data/maps/EltheCity/scripts.pory"
	playse SE_M_VITAL_THROW2
# 1153 "data/maps/EltheCity/scripts.pory"
	waitmovement 0
# 1154 "data/maps/EltheCity/scripts.pory"
	waitmessage
# 1155 "data/maps/EltheCity/scripts.pory"
	waitbuttonpress
# 1156 "data/maps/EltheCity/scripts.pory"
	closemessage
# 1157 "data/maps/EltheCity/scripts.pory"
	delay 32
# 1158 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_Trigger_FinalBoss_Text_3
# 1159 "data/maps/EltheCity/scripts.pory"
	message EltheCity_Trigger_FinalBoss_Text_4
# 1160 "data/maps/EltheCity/scripts.pory"
	delay 16
# 1161 "data/maps/EltheCity/scripts.pory"
	playse SE_PIN
# 1162 "data/maps/EltheCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 1163 "data/maps/EltheCity/scripts.pory"
	applymovement 27, Common_Movement_ExclamationMark
# 1164 "data/maps/EltheCity/scripts.pory"
	applymovement 24, Common_Movement_ExclamationMark
# 1165 "data/maps/EltheCity/scripts.pory"
	applymovement 28, Common_Movement_ExclamationMark
# 1166 "data/maps/EltheCity/scripts.pory"
	applymovement 25, Common_Movement_ExclamationMark
# 1167 "data/maps/EltheCity/scripts.pory"
	waitmessage
# 1168 "data/maps/EltheCity/scripts.pory"
	waitbuttonpress
# 1169 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_Trigger_FinalBoss_Text_1, PORTRAIT_DEMIVEE_NEUTRAL
# 1170 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_Trigger_FinalBoss_Text_5
# 1171 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_Trigger_FinalBoss_Text_3
# 1172 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_Trigger_FinalBoss_Text_6
# 1174 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_EventScript_Python_Text_3, PORTRAIT_ZOROARK_LAUGH
# 1175 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_Trigger_FinalBoss_Text_7
# 1176 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_Trigger_FinalBoss_Text_8, PORTRAIT_KINGLER_NEUTRAL
# 1177 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_Trigger_FinalBoss_Text_9
# 1178 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_Trigger_FinalBoss_Text_10, PORTRAIT_FLYGON_ANNOYED
# 1179 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_Trigger_FinalBoss_Text_11
# 1180 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_EventScript_Python_Text_1, PORTRAIT_NIDOKING_NEUTRAL, PORTRAIT_DEFAULT_X, PORTRAIT_DEFAULT_Y, TRUE
# 1181 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_Trigger_FinalBoss_Text_12, MSGBOX_AUTOCLOSE
# 1182 "data/maps/EltheCity/scripts.pory"
	delay 32
# 1183 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_EventScript_Python_Text_5, PORTRAIT_AMELIA_SMUG
# 1184 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_Trigger_FinalBoss_Text_13, MSGBOX_AUTOCLOSE
# 1185 "data/maps/EltheCity/scripts.pory"
	special Script_FadeOutMapMusic
# 1186 "data/maps/EltheCity/scripts.pory"
	waitstate
# 1187 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_Trigger_FinalBoss_Text_14
# 1188 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_Trigger_FinalBoss_Text_15, MSGBOX_AUTOCLOSE
# 1189 "data/maps/EltheCity/scripts.pory"
	setvar VAR_RESULT, 1
# 1190 "data/maps/EltheCity/scripts.pory"
	playse SE_M_DETECT
# 1191 "data/maps/EltheCity/scripts.pory"
	dofieldeffectsparkle 17, 13, 0
# 1192 "data/maps/EltheCity/scripts.pory"
	waitfieldeffect FLDEFF_SPARKLE
# 1193 "data/maps/EltheCity/scripts.pory"
	setvar VAR_RESULT, 1
# 1194 "data/maps/EltheCity/scripts.pory"
	playse SE_ORB
# 1195 "data/maps/EltheCity/scripts.pory"
	special DoOrbEffect
# 1196 "data/maps/EltheCity/scripts.pory"
	delay 150
# 1197 "data/maps/EltheCity/scripts.pory"
	delay 60
# 1198 "data/maps/EltheCity/scripts.pory"
	special FadeOutOrbEffect
# 1199 "data/maps/EltheCity/scripts.pory"
	waitstate
# 1200 "data/maps/EltheCity/scripts.pory"
	setwilddoubleflag
# 1201 "data/maps/EltheCity/scripts.pory"
	setflag FLAG_WILD_AI_ON
# 1202 "data/maps/EltheCity/scripts.pory"
	createmon 1, 0, SPECIES_KYOGRE, 65, ITEM_NONE, 0, NATURE_CALM, 0, MON_GENDERLESS, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_WATER_PULSE, MOVE_ICY_WIND, MOVE_AQUA_RING, MOVE_PSYBEAM, FALSE, 0, TYPE_WATER
# 1203 "data/maps/EltheCity/scripts.pory"
	dowildbattle
# 1204 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_Trigger_FinalBoss_Text_14
# 1205 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_Trigger_FinalBoss_Text_16
# 1208 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_EventScript_Python_Text_5, PORTRAIT_AMELIA_SMUG
# 1209 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_Trigger_FinalBoss_Text_17
# 1211 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_Trigger_FinalBoss_Text_14
# 1212 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_Trigger_FinalBoss_Text_18
# 1213 "data/maps/EltheCity/scripts.pory"
	closemessage
# 1214 "data/maps/EltheCity/scripts.pory"
	setweather WEATHER_NONE
# 1215 "data/maps/EltheCity/scripts.pory"
	doweather
# 1216 "data/maps/EltheCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
# 1217 "data/maps/EltheCity/scripts.pory"
	waitmovement 0
# 1218 "data/maps/EltheCity/scripts.pory"
	applymovement 26, Common_Movement_FaceDown
# 1219 "data/maps/EltheCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
# 1220 "data/maps/EltheCity/scripts.pory"
	waitmovement 0
# 1221 "data/maps/EltheCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 1222 "data/maps/EltheCity/scripts.pory"
	applymovement 24, Common_Movement_FaceDown
# 1223 "data/maps/EltheCity/scripts.pory"
	delay 4
# 1224 "data/maps/EltheCity/scripts.pory"
	applymovement 25, Common_Movement_FaceRight
# 1225 "data/maps/EltheCity/scripts.pory"
	delay 8
# 1226 "data/maps/EltheCity/scripts.pory"
	applymovement 27, Common_Movement_FaceLeft
# 1227 "data/maps/EltheCity/scripts.pory"
	special WaitWeather
# 1228 "data/maps/EltheCity/scripts.pory"
	waitstate
# 1229 "data/maps/EltheCity/scripts.pory"
	delay 64
# 1230 "data/maps/EltheCity/scripts.pory"
	special SpawnCameraObject
# 1231 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_EventScript_Python_Text_5, PORTRAIT_AMELIA_NEUTRAL
# 1232 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_Trigger_FinalBoss_Text_19, MSGBOX_AUTOCLOSE
# 1233 "data/maps/EltheCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, AmeliaStartLeaving
# 1234 "data/maps/EltheCity/scripts.pory"
	delay 16
# 1235 "data/maps/EltheCity/scripts.pory"
	applymovement 26, EltheCity_Movement_DemiveeChaseAme
# 1236 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_Trigger_FinalBoss_Text_1, PORTRAIT_DEMIVEE_HUH
# 1237 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_Trigger_FinalBoss_Text_20
# 1238 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_EventScript_Python_Text_5, PORTRAIT_AMELIA_WINK
# 1239 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_Trigger_FinalBoss_Text_21, MSGBOX_AUTOCLOSE
# 1240 "data/maps/EltheCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Ending_AmeLeave
# 1241 "data/maps/EltheCity/scripts.pory"
	applymovement 27, Ending_BradleyLeave
# 1242 "data/maps/EltheCity/scripts.pory"
	applymovement 24, Ending_MarcelLeave
# 1243 "data/maps/EltheCity/scripts.pory"
	applymovement 28, Ending_PythonLeave
# 1244 "data/maps/EltheCity/scripts.pory"
	applymovement 25, Ending_ViceLeave
# 1245 "data/maps/EltheCity/scripts.pory"
	applymovement 26, Ending_DemiveeLeave
# 1246 "data/maps/EltheCity/scripts.pory"
	waitmovement 25
# 1247 "data/maps/EltheCity/scripts.pory"
	fadescreenspeed FADE_TO_BLACK, 8
# 1248 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_Trigger_FinalBoss_Text_22, MSGBOX_AUTOCLOSE
# 1249 "data/maps/EltheCity/scripts.pory"
	special Script_FadeOutMapMusic
# 1250 "data/maps/EltheCity/scripts.pory"
	waitstate
# 1251 "data/maps/EltheCity/scripts.pory"
	delay 60
# 1252 "data/maps/EltheCity/scripts.pory"
	callnative StartCredits
	return


# 1255 "data/maps/EltheCity/scripts.pory"
Ending_Movement_DemiveeJump:
# 1257 "data/maps/EltheCity/scripts.pory"
	jump_up
# 1258 "data/maps/EltheCity/scripts.pory"
	lock_facing_direction
# 1259 "data/maps/EltheCity/scripts.pory"
	walk_fast_down
# 1260 "data/maps/EltheCity/scripts.pory"
	unlock_facing_direction
	step_end

# 1263 "data/maps/EltheCity/scripts.pory"
Movement_UnsafeUp:
# 1265 "data/maps/EltheCity/scripts.pory"
	walk_in_place_up
	step_end

# 1268 "data/maps/EltheCity/scripts.pory"
AmeliaStartLeaving:
# 1270 "data/maps/EltheCity/scripts.pory"
	walk_right
# 1270 "data/maps/EltheCity/scripts.pory"
	walk_right
# 1271 "data/maps/EltheCity/scripts.pory"
	delay_16
# 1271 "data/maps/EltheCity/scripts.pory"
	delay_16
# 1272 "data/maps/EltheCity/scripts.pory"
	face_left
	step_end

# 1275 "data/maps/EltheCity/scripts.pory"
EltheCity_Movement_DemiveeChaseAme:
# 1277 "data/maps/EltheCity/scripts.pory"
	walk_fast_down
# 1277 "data/maps/EltheCity/scripts.pory"
	walk_fast_down
# 1277 "data/maps/EltheCity/scripts.pory"
	walk_fast_down
# 1278 "data/maps/EltheCity/scripts.pory"
	face_right
	step_end

# 1281 "data/maps/EltheCity/scripts.pory"
Ending_AmeLeave:
# 1283 "data/maps/EltheCity/scripts.pory"
	walk_right
# 1283 "data/maps/EltheCity/scripts.pory"
	walk_right
# 1283 "data/maps/EltheCity/scripts.pory"
	walk_right
# 1283 "data/maps/EltheCity/scripts.pory"
	walk_right
# 1283 "data/maps/EltheCity/scripts.pory"
	walk_right
# 1283 "data/maps/EltheCity/scripts.pory"
	walk_right
# 1283 "data/maps/EltheCity/scripts.pory"
	walk_right
# 1283 "data/maps/EltheCity/scripts.pory"
	walk_right
# 1283 "data/maps/EltheCity/scripts.pory"
	walk_right
# 1283 "data/maps/EltheCity/scripts.pory"
	walk_right
	step_end

# 1286 "data/maps/EltheCity/scripts.pory"
Ending_BradleyLeave:
# 1288 "data/maps/EltheCity/scripts.pory"
	delay_16
# 1288 "data/maps/EltheCity/scripts.pory"
	delay_16
# 1288 "data/maps/EltheCity/scripts.pory"
	delay_16
# 1289 "data/maps/EltheCity/scripts.pory"
	walk_right
# 1289 "data/maps/EltheCity/scripts.pory"
	walk_right
# 1289 "data/maps/EltheCity/scripts.pory"
	walk_right
# 1290 "data/maps/EltheCity/scripts.pory"
	delay_16
# 1291 "data/maps/EltheCity/scripts.pory"
	face_left
# 1292 "data/maps/EltheCity/scripts.pory"
	delay_16
# 1292 "data/maps/EltheCity/scripts.pory"
	delay_16
# 1293 "data/maps/EltheCity/scripts.pory"
	walk_right
# 1293 "data/maps/EltheCity/scripts.pory"
	walk_right
# 1293 "data/maps/EltheCity/scripts.pory"
	walk_right
# 1293 "data/maps/EltheCity/scripts.pory"
	walk_right
# 1293 "data/maps/EltheCity/scripts.pory"
	walk_right
# 1293 "data/maps/EltheCity/scripts.pory"
	walk_right
	step_end

# 1296 "data/maps/EltheCity/scripts.pory"
Ending_DemiveeLeave:
# 1298 "data/maps/EltheCity/scripts.pory"
	walk_fast_right
# 1299 "data/maps/EltheCity/scripts.pory"
	walk_right
# 1299 "data/maps/EltheCity/scripts.pory"
	walk_right
# 1299 "data/maps/EltheCity/scripts.pory"
	walk_right
# 1299 "data/maps/EltheCity/scripts.pory"
	walk_right
# 1299 "data/maps/EltheCity/scripts.pory"
	walk_right
# 1299 "data/maps/EltheCity/scripts.pory"
	walk_right
# 1299 "data/maps/EltheCity/scripts.pory"
	walk_right
# 1299 "data/maps/EltheCity/scripts.pory"
	walk_right
# 1299 "data/maps/EltheCity/scripts.pory"
	walk_right
	step_end

# 1302 "data/maps/EltheCity/scripts.pory"
Ending_MarcelLeave:
# 1304 "data/maps/EltheCity/scripts.pory"
	delay_16
# 1304 "data/maps/EltheCity/scripts.pory"
	delay_16
# 1304 "data/maps/EltheCity/scripts.pory"
	delay_16
# 1304 "data/maps/EltheCity/scripts.pory"
	delay_16
# 1304 "data/maps/EltheCity/scripts.pory"
	delay_16
# 1305 "data/maps/EltheCity/scripts.pory"
	face_right
# 1306 "data/maps/EltheCity/scripts.pory"
	delay_16
# 1306 "data/maps/EltheCity/scripts.pory"
	delay_16
# 1307 "data/maps/EltheCity/scripts.pory"
	walk_right
# 1307 "data/maps/EltheCity/scripts.pory"
	walk_right
# 1307 "data/maps/EltheCity/scripts.pory"
	walk_right
# 1307 "data/maps/EltheCity/scripts.pory"
	walk_right
# 1307 "data/maps/EltheCity/scripts.pory"
	walk_right
# 1307 "data/maps/EltheCity/scripts.pory"
	walk_right
# 1307 "data/maps/EltheCity/scripts.pory"
	walk_right
# 1307 "data/maps/EltheCity/scripts.pory"
	walk_right
# 1307 "data/maps/EltheCity/scripts.pory"
	walk_right
# 1307 "data/maps/EltheCity/scripts.pory"
	walk_right
# 1307 "data/maps/EltheCity/scripts.pory"
	walk_right
# 1307 "data/maps/EltheCity/scripts.pory"
	walk_right
	step_end

# 1310 "data/maps/EltheCity/scripts.pory"
Ending_ViceLeave:
# 1312 "data/maps/EltheCity/scripts.pory"
	walk_down
# 1312 "data/maps/EltheCity/scripts.pory"
	walk_down
# 1313 "data/maps/EltheCity/scripts.pory"
	walk_right
# 1314 "data/maps/EltheCity/scripts.pory"
	face_up
# 1315 "data/maps/EltheCity/scripts.pory"
	delay_16
# 1315 "data/maps/EltheCity/scripts.pory"
	delay_16
# 1315 "data/maps/EltheCity/scripts.pory"
	delay_16
# 1316 "data/maps/EltheCity/scripts.pory"
	walk_right
# 1316 "data/maps/EltheCity/scripts.pory"
	walk_right
# 1316 "data/maps/EltheCity/scripts.pory"
	walk_right
# 1316 "data/maps/EltheCity/scripts.pory"
	walk_right
# 1316 "data/maps/EltheCity/scripts.pory"
	walk_right
# 1316 "data/maps/EltheCity/scripts.pory"
	walk_right
# 1316 "data/maps/EltheCity/scripts.pory"
	walk_right
# 1316 "data/maps/EltheCity/scripts.pory"
	walk_right
# 1316 "data/maps/EltheCity/scripts.pory"
	walk_right
# 1316 "data/maps/EltheCity/scripts.pory"
	walk_right
# 1316 "data/maps/EltheCity/scripts.pory"
	walk_right
# 1316 "data/maps/EltheCity/scripts.pory"
	walk_right
	step_end

# 1319 "data/maps/EltheCity/scripts.pory"
Ending_PythonLeave:
# 1321 "data/maps/EltheCity/scripts.pory"
	delay_16
# 1322 "data/maps/EltheCity/scripts.pory"
	walk_fast_right
# 1322 "data/maps/EltheCity/scripts.pory"
	walk_fast_right
# 1322 "data/maps/EltheCity/scripts.pory"
	walk_fast_right
# 1322 "data/maps/EltheCity/scripts.pory"
	walk_fast_right
# 1323 "data/maps/EltheCity/scripts.pory"
	delay_16
# 1324 "data/maps/EltheCity/scripts.pory"
	face_left
# 1325 "data/maps/EltheCity/scripts.pory"
	delay_16
# 1326 "data/maps/EltheCity/scripts.pory"
	face_right
# 1327 "data/maps/EltheCity/scripts.pory"
	delay_16
# 1328 "data/maps/EltheCity/scripts.pory"
	face_left
# 1329 "data/maps/EltheCity/scripts.pory"
	delay_16
# 1330 "data/maps/EltheCity/scripts.pory"
	face_right
# 1331 "data/maps/EltheCity/scripts.pory"
	delay_16
# 1332 "data/maps/EltheCity/scripts.pory"
	face_left
# 1333 "data/maps/EltheCity/scripts.pory"
	delay_16
# 1334 "data/maps/EltheCity/scripts.pory"
	walk_fast_right
# 1334 "data/maps/EltheCity/scripts.pory"
	walk_fast_right
# 1334 "data/maps/EltheCity/scripts.pory"
	walk_fast_right
# 1334 "data/maps/EltheCity/scripts.pory"
	walk_fast_right
	step_end

EltheCity_EventScript_Python_Text_0:
# 80 "data/maps/EltheCity/scripts.pory"
	.string "… … … … …$"

EltheCity_EventScript_Python_Text_1:
# 85 "data/maps/EltheCity/scripts.pory"
	.string "Bradley$"

EltheCity_EventScript_Python_Text_2:
# 86 "data/maps/EltheCity/scripts.pory"
	.string "…The footsteps sound wrong.\n"
	.string "This is him.$"

EltheCity_EventScript_Python_Text_3:
# 99 "data/maps/EltheCity/scripts.pory"
	.string "Python$"

EltheCity_EventScript_Python_Text_4:
# 100 "data/maps/EltheCity/scripts.pory"
	.string "Finally found me, eh, Amelia?\n"
	.string "Took you long enough.$"

EltheCity_EventScript_Python_Text_5:
# 101 "data/maps/EltheCity/scripts.pory"
	.string "Amelia$"

EltheCity_EventScript_Python_Text_6:
# 102 "data/maps/EltheCity/scripts.pory"
	.string "Look, I've got a Poké Ball here\n"
	.string "that says…$"

EltheCity_EventScript_Python_Text_7:
# 104 "data/maps/EltheCity/scripts.pory"
	.string "Wait, you still remember me!?$"

EltheCity_EventScript_Python_Text_8:
# 106 "data/maps/EltheCity/scripts.pory"
	.string "Of course! This memory charm is the\n"
	.string "work of a Psychic type Pokémon.\p"
	.string "I'm a Dark type, so it doesn't affect\n"
	.string "me at all!\l"
	.string "I just chose to hide from you because\l"
	.string "watching you run around was fun.$"

EltheCity_EventScript_Python_Text_9:
# 118 "data/maps/EltheCity/scripts.pory"
	.string "Excuse me, have you seen my dragon?\n"
	.string "Excuse me, can I get a room?\l"
	.string "Excuse me, can you renounce your god?\l"
	.string "Excuse me, have you seen my arm?\l"
	.string "You can't miss it, it's green!$"

EltheCity_EventScript_Python_Text_10:
# 120 "data/maps/EltheCity/scripts.pory"
	.string "Keheheheh!$"

EltheCity_EventScript_Python_Text_11:
# 122 "data/maps/EltheCity/scripts.pory"
	.string "That seems a little uncalled for.\n"
	.string "I was worried about you, you know…$"

EltheCity_EventScript_Python_Text_12:
# 124 "data/maps/EltheCity/scripts.pory"
	.string "Hey, wait, you said this is caused\n"
	.string "by a Psychic type Pokémon?\p"
	.string "Do you think if we beat it, our\n"
	.string "memories will come back?$"

EltheCity_EventScript_Python_Text_13:
# 138 "data/maps/EltheCity/scripts.pory"
	.string "Eh. Probably. It's not erasing\n"
	.string "memories, just suppressing them, so\l"
	.string "they should come back if it stops.\p"
	.string "It's hiding out in that shrine near\n"
	.string "the church. Let's go check it out.$"

EltheCity_EventScript_Python_Text_14:
# 147 "data/maps/EltheCity/scripts.pory"
	.string "You recalled Python the Zoroark!$"

EltheCity_Sign_InnLeft_Text_0:
# 187 "data/maps/EltheCity/scripts.pory"
	.string "Elysi Inn$"

EltheCity_Sign_InnRight_Text_0:
# 193 "data/maps/EltheCity/scripts.pory"
	.string "Phew, these room prices…I'm glad\n"
	.string "Pokémon Centers were free…\p"
	.string "Then again, not like I have any\n"
	.string "money anyway…$"

EltheCity_EventScript_Keesight_Text_0:
# 290 "data/maps/EltheCity/scripts.pory"
	.string "Keesight$"

EltheCity_EventScript_Keesight_Text_1:
# 291 "data/maps/EltheCity/scripts.pory"
	.string "… … … … …\n"
	.string "Thanks for the song.$"

EltheCity_EventScript_Keesight_Text_2:
# 295 "data/maps/EltheCity/scripts.pory"
	.string "Batmon$"

EltheCity_EventScript_Keesight_Text_3:
# 296 "data/maps/EltheCity/scripts.pory"
	.string "… … … … … … … … … …$"

EltheCity_EventScript_Keesight_Text_4:
# 298 "data/maps/EltheCity/scripts.pory"
	.string "The Pokémon is staring intently\n"
	.string "at the pond…$"

EltheCity_EventScript_Weatherbane_Text_0:
# 307 "data/maps/EltheCity/scripts.pory"
	.string "So this is the thing I'm supposed\n"
	.string "to fix? It's, what, squeaky?$"

EltheCity_EventScript_Weatherbane_Text_1:
# 334 "data/maps/EltheCity/scripts.pory"
	.string "Weatherbane$"

EltheCity_EventScript_Weatherbane_Text_2:
# 335 "data/maps/EltheCity/scripts.pory"
	.string "Skrraaaaaaaaaaaw! Skrraaaaaaaaaaaw!$"

EltheCity_EventScript_Weatherbane_Text_3:
# 338 "data/maps/EltheCity/scripts.pory"
	.string "…Geez. It's a Pokémon?\n"
	.string "Well, it sure is noisy…$"

EltheCity_EventScript_Weatherbane_Text_4:
# 344 "data/maps/EltheCity/scripts.pory"
	.string "Hey! Shut the f{CENSOR}uck{UNCENSOR} up!$"

EltheCity_EventScript_Weatherbane_Text_5:
# 348 "data/maps/EltheCity/scripts.pory"
	.string "Why are you yelling?$"

EltheCity_EventScript_Weatherbane_Text_6:
# 350 "data/maps/EltheCity/scripts.pory"
	.string "The rain! The rain! I'm trying to\n"
	.string "make the rain go away!\p"
	.string "My cries can chase away storms.\n"
	.string "But this rain just keeps coming back!\l"
	.string "Begone! Begone!$"

EltheCity_EventScript_Weatherbane_Text_7:
# 353 "data/maps/EltheCity/scripts.pory"
	.string "So it's not a natural rainstorm?\n"
	.string "Maybe a Pokémon is summoning it…$"

EltheCity_EventScript_Weatherbane_Text_8:
# 355 "data/maps/EltheCity/scripts.pory"
	.string "Not natural! Not natural!\n"
	.string "Can't you feel it?\p"
	.string "The rain washes away your darkness.\n"
	.string "Makes you a carefree person.\l"
	.string "A fake person.\l"
	.string "Must be stopped! Must be stopped!$"

EltheCity_EventScript_Weatherbane_Text_9:
# 358 "data/maps/EltheCity/scripts.pory"
	.string "Look, I know! Something's messing\n"
	.string "with my head. It could be the same\l"
	.string "thing that's causing the rain.\p"
	.string "I'm working on it. But my job right\n"
	.string "now is to get you to quiet down.$"

EltheCity_EventScript_Weatherbane_Text_10:
# 361 "data/maps/EltheCity/scripts.pory"
	.string "Can't shut up! Can't shut up!\p"
	.string "Begone! Begone!$"

EltheCity_EventScript_Weatherbane_Text_11:
# 363 "data/maps/EltheCity/scripts.pory"
	.string "What if I promise to clear up this\n"
	.string "rain? Will that shut you up?$"

EltheCity_EventScript_Weatherbane_Text_12:
# 366 "data/maps/EltheCity/scripts.pory"
	.string "Maybe. Maybe.\p"
	.string "Show me you're strong enough!\n"
	.string "I think you're weak! Weak!$"

EltheCity_EventScript_Weatherbane_Text_13:
# 372 "data/maps/EltheCity/scripts.pory"
	.string "Okay! Okay! You're good! You're good!\p"
	.string "I trust you. You will stop the rain.\n"
	.string "Amelia, Sun-Bringer! Hail! Hail!$"

EltheCity_EventScript_Weatherbane_Text_14:
# 374 "data/maps/EltheCity/scripts.pory"
	.string "Please don't call me that ever again.$"

EltheCity_EventScript_Weatherbane_Text_15:
# 376 "data/maps/EltheCity/scripts.pory"
	.string "And take this! Take this!\n"
	.string "Shiny! Shiny!$"

EltheCity_EventScript_Weatherbane_Text_16:
# 382 "data/maps/EltheCity/scripts.pory"
	.string "Finished the Innkeeper's request!$"

EltheCity_EventScript_Weatherbane_Text_17:
# 391 "data/maps/EltheCity/scripts.pory"
	.string "I used to love the sun.\n"
	.string "Fire types feared me.\p"
	.string "But now I'm too old! Too old!\n"
	.string "Can't take the heat like I used to.\p"
	.string "But I'd still like to see the sun\n"
	.string "again. Too wet! Too wet!$"

EltheCity_EventScript_BarrelGuy_Text_0:
# 411 "data/maps/EltheCity/scripts.pory"
	.string "Stephen$"

EltheCity_EventScript_BarrelGuy_Text_1:
# 412 "data/maps/EltheCity/scripts.pory"
	.string "I tried to challenge that Nidoking…\p"
	.string "But he just took one look at my\n"
	.string "Pokémon, picked me up, and stuffed me\l"
	.string "into this barrel…\p"
	.string "Maybe Pokémon training isn't for me.$"

EltheCity_BakeryWindow_Text_0:
# 418 "data/maps/EltheCity/scripts.pory"
	.string "The food on display looks delicious.\n"
	.string "Too bad you don't have spare money.$"

EltheCity_CitySign_Text_0:
# 423 "data/maps/EltheCity/scripts.pory"
	.string "Elthe City\n"
	.string "“The forgotten highway of life.”$"

EltheCity_Girlfriend_Text_0:
# 428 "data/maps/EltheCity/scripts.pory"
	.string "Marisa$"

EltheCity_Girlfriend_Text_1:
# 429 "data/maps/EltheCity/scripts.pory"
	.string "When was the last time it wasn't\n"
	.string "raining, huh? And the place doesn't\l"
	.string "even have outside seating anyway!$"

EltheCity_Boyfriend_Text_0:
# 434 "data/maps/EltheCity/scripts.pory"
	.string "Nathan$"

EltheCity_Boyfriend_Text_1:
# 435 "data/maps/EltheCity/scripts.pory"
	.string "I forgot to check the weather, okay?\n"
	.string "How was I supposed to know…$"

EltheCity_OldGuyBarrel_Text_0:
# 440 "data/maps/EltheCity/scripts.pory"
	.string "Boris$"

EltheCity_OldGuyBarrel_Text_1:
# 441 "data/maps/EltheCity/scripts.pory"
	.string "Something about this rainwater just\n"
	.string "doesn't seem right to me.\p"
	.string "It's not good to drink.$"

EltheCity_Slowbro_Text_0:
# 448 "data/maps/EltheCity/scripts.pory"
	.string "Slowbro$"

EltheCity_Slowbro_Text_1:
# 449 "data/maps/EltheCity/scripts.pory"
	.string "Some people are almost as forgetful\n"
	.string "as me these days.\p"
	.string "Just go with the flow, I say.\n"
	.string "Isn't it fun?$"

EltheCity_Slowbro_Text_2:
# 452 "data/maps/EltheCity/scripts.pory"
	.string "No, I hate knowing that I forgot\n"
	.string "something and not being able to figure\l"
	.string "out what it was. If I forget my old\l"
	.string "departed friends, I might lose it.$"

EltheCity_Slowbro_Text_3:
# 455 "data/maps/EltheCity/scripts.pory"
	.string "…Huh? Who are you?$"

EltheCity_Slowbro_Text_4:
# 457 "data/maps/EltheCity/scripts.pory"
	.string "Oh, forget it.\p"
	.string "Urk. Phrasing.$"

EltheCity_Lombre_Text_0:
# 463 "data/maps/EltheCity/scripts.pory"
	.string "Lilypad Kappa$"

EltheCity_Lombre_Text_1:
# 464 "data/maps/EltheCity/scripts.pory"
	.string "I don't know what everyone's\n"
	.string "complaining about. I hope this rain\l"
	.string "never ends!$"

EltheCity_Hiker_Text_0:
# 469 "data/maps/EltheCity/scripts.pory"
	.string "Nob$"

EltheCity_Hiker_Text_1:
# 472 "data/maps/EltheCity/scripts.pory"
	.string "I thought my Magcargo could block\n"
	.string "that Nidoking's Poison attacks, but\l"
	.string "he knows Earthquake too…\l"
	.string "Where did he learn that?$"

EltheCity_Hiker_Text_2:
# 478 "data/maps/EltheCity/scripts.pory"
	.string "So you taught him those moves?\n"
	.string "Pretty impressive.$"

EltheCity_Hiker_Text_3:
# 480 "data/maps/EltheCity/scripts.pory"
	.string "I can't take all the credit. He was\n"
	.string "trained by a gym leader before I\l"
	.string "found him.$"

EltheCity_Hiker_Text_4:
# 482 "data/maps/EltheCity/scripts.pory"
	.string "Trained by a what?$"

EltheCity_Gentleman_Text_0:
# 489 "data/maps/EltheCity/scripts.pory"
	.string "Regis$"

EltheCity_Gentleman_Text_1:
# 492 "data/maps/EltheCity/scripts.pory"
	.string "My poor Gothitelle didn't stand a\n"
	.string "chance against that Nidoking.\p"
	.string "I should've known that horn wasn't\n"
	.string "just for show.$"

EltheCity_Gentleman_Text_2:
# 496 "data/maps/EltheCity/scripts.pory"
	.string "That was some fine work under pressure.\n"
	.string "The world needs more Rangers like you.$"

EltheCity_Lass_Text_0:
# 502 "data/maps/EltheCity/scripts.pory"
	.string "Aurora$"

EltheCity_Lass_Text_1:
# 505 "data/maps/EltheCity/scripts.pory"
	.string "I thought I could win with my\n"
	.string "Harminnote's physical defense, but\l"
	.string "he pulled out a tricky Sludge Bomb…\l"
	.string "What a cheap shot!$"

EltheCity_Lass_Text_2:
# 509 "data/maps/EltheCity/scripts.pory"
	.string "Grandpa says it was a waste to use\n"
	.string "all my Poké Balls to catch Minnote,\l"
	.string "but it's pretty strong now that\l"
	.string "it's evolved.$"

EltheCity_Mom_Text_0:
# 515 "data/maps/EltheCity/scripts.pory"
	.string "Andrea$"

EltheCity_Mom_Text_1:
# 516 "data/maps/EltheCity/scripts.pory"
	.string "I thought I would try to distract\n"
	.string "Sarah with some battles, but it\l"
	.string "looks like the arena is being held.\l"
	.string "That Nidoking must be at least as\l"
	.string "strong as a Dragonite.$"

EltheCity_ArenaSign_Text_0:
# 521 "data/maps/EltheCity/scripts.pory"
	.string "Battle Park\n"
	.string "“King of the hill”-style allowed!$"

EltheCity_CemeterySign_Text_0:
# 526 "data/maps/EltheCity/scripts.pory"
	.string "The sign is too faded to read.$"

EltheCity_Phantump_Text_0:
# 535 "data/maps/EltheCity/scripts.pory"
	.string "Stump Ghost$"

EltheCity_Phantump_Text_1:
# 536 "data/maps/EltheCity/scripts.pory"
	.string "… … … … …\n"
	.string "You can see me?$"

EltheCity_Phantump_Text_2:
# 538 "data/maps/EltheCity/scripts.pory"
	.string "Yes. Hello. Are you a Pokémon?$"

EltheCity_Phantump_Text_3:
# 539 "data/maps/EltheCity/scripts.pory"
	.string "Phantump$"

EltheCity_Phantump_Text_4:
# 540 "data/maps/EltheCity/scripts.pory"
	.string "I am now. I am called Phantump.\n"
	.string "Could you help me?\p"
	.string "My spirit is troubled. I need an\n"
	.string "outsider's help.$"

EltheCity_Phantump_Text_5:
# 543 "data/maps/EltheCity/scripts.pory"
	.string "Let me guess…it's got something to\n"
	.string "do with the heavy rainfall?$"

EltheCity_Phantump_Text_6:
# 545 "data/maps/EltheCity/scripts.pory"
	.string "Yes…$"

EltheCity_Phantump_Text_7:
# 547 "data/maps/EltheCity/scripts.pory"
	.string "The rain washes away the sorrows\n"
	.string "of the people. They forget what\l"
	.string "they've lost. But it leaves a void.$"

EltheCity_Phantump_Text_8:
# 550 "data/maps/EltheCity/scripts.pory"
	.string "As you can see, they've neglected my\n"
	.string "resting place, too.$"

EltheCity_Phantump_Text_9:
# 552 "data/maps/EltheCity/scripts.pory"
	.string "What do you want me to do?$"

EltheCity_Phantump_Text_10:
# 554 "data/maps/EltheCity/scripts.pory"
	.string "… … … … … … … … … …\p"
	.string "There was once a happy family of four\n"
	.string "in this village. A father, a mother,\l"
	.string "a sweet girl, and an energetic boy.\p"
	.string "But the boy was lost to illness\n"
	.string "suddenly one day. The family was\l"
	.string "stricken by grief. For a time, they\l"
	.string "were inconsolable.\p"
	.string "One day the rain came and washed away\n"
	.string "their memories of the boy. The pain\l"
	.string "left them, but they still had a\l"
	.string "hole in their hearts.\p"
	.string "The father seeks divine fulfillment.\n"
	.string "The mother raises little Pokémon.\l"
	.string "The sister seeks out other boys.\l"
	.string "But they cannot truly move on because\l"
	.string "they do not know what they've lost.\l"
	.string "The boy's spirit was disturbed, for\l"
	.string "he could not bear to see his family\l"
	.string "paralyzed by his loss.\p"
	.string "All that is to say…please dispel the\n"
	.string "rain and free this wallowing town.\l"
	.string "Let the family remember m-… … …\l"
	.string "remember their son, so that his\l"
	.string "spirit can find rest in their peace.$"

EltheCity_Phantump_Text_11:
# 561 "data/maps/EltheCity/scripts.pory"
	.string "…I understand. I'll do what I can.$"

EltheCity_Phantump_Text_12:
# 563 "data/maps/EltheCity/scripts.pory"
	.string "Thank you, kind soul.\p"
	.string "I believe the one who does not forget\n"
	.string "is with you, so please take this\l"
	.string "if it will help.$"

EltheCity_Phantump_Text_13:
# 569 "data/maps/EltheCity/scripts.pory"
	.string "I'll get this brain fog cleared out\n"
	.string "for everyone's sake. (Including mine.)$"

EltheCity_Phantump_Text_14:
# 577 "data/maps/EltheCity/scripts.pory"
	.string "The rain doesn't affect me because\n"
	.string "I'm incorporeal. I was suffering in\l"
	.string "silence until you came along.$"

EltheCity_Phantump_Text_15:
# 579 "data/maps/EltheCity/scripts.pory"
	.string "How did you know I could help?$"

EltheCity_Phantump_Text_16:
# 581 "data/maps/EltheCity/scripts.pory"
	.string "Your spirit is different. You have…\n"
	.string "a unique aura.$"

EltheCity_Phantump_Text_17:
# 583 "data/maps/EltheCity/scripts.pory"
	.string "Well, you got that right…\n"
	.string "I can't even get into it.$"

EltheCity_Phantump_Text_18:
# 585 "data/maps/EltheCity/scripts.pory"
	.string "Have you died before?$"

EltheCity_Phantump_Text_19:
# 587 "data/maps/EltheCity/scripts.pory"
	.string "Maybe a little…? I'm still having\n"
	.string "trouble remembering things, you know.$"

EltheCity_BradleyScript_Text_0:
# 614 "data/maps/EltheCity/scripts.pory"
	.string "Grah hah hah! Another puny trainer\n"
	.string "has come to challenge me, eh?$"

EltheCity_BradleyScript_Text_1:
# 616 "data/maps/EltheCity/scripts.pory"
	.string "Bradley, it's me, Amelia.\n"
	.string "What are you doing out here?$"

EltheCity_BradleyScript_Text_2:
# 618 "data/maps/EltheCity/scripts.pory"
	.string "I want to fight!\p"
	.string "You've been holding me back for years!\n"
	.string "It's time to let loose!$"

EltheCity_BradleyScript_Text_3:
# 620 "data/maps/EltheCity/scripts.pory"
	.string "Oh, you've forgotten about our talks,\n"
	.string "haven't you…\p"
	.string "Bradley, learning to control your\n"
	.string "bloodlust was YOUR idea. And it's been\l"
	.string "great for you! Chillax.$"

EltheCity_BradleyScript_Text_4:
# 624 "data/maps/EltheCity/scripts.pory"
	.string "I don't care! I want to fight.\n"
	.string "I'm enjoying this too much.$"

EltheCity_BradleyScript_Text_5:
# 626 "data/maps/EltheCity/scripts.pory"
	.string "Fine, we'll have a little spar, and\n"
	.string "then we get going, okay?$"

EltheCity_BradleyScript_Text_6:
# 628 "data/maps/EltheCity/scripts.pory"
	.string "I don't want to fight your Pokémon.\n"
	.string "I've beaten them before already.\l"
	.string "I want to fight YOU, Amelia. You\l"
	.string "hold back too much.$"

EltheCity_BradleyScript_Text_7:
# 630 "data/maps/EltheCity/scripts.pory"
	.string "Well, too bad. I can't do that in\n"
	.string "public. I still have work to do here,\l"
	.string "I can't go getting kicked out.$"

EltheCity_BradleyScript_Text_8:
# 632 "data/maps/EltheCity/scripts.pory"
	.string "Hrmph! Fine, then. I'll fight your\n"
	.string "team, if you're really serious.$"

EltheCity_BradleyScript_Text_9:
# 636 "data/maps/EltheCity/scripts.pory"
	.string "Come back when you're ready to give\n"
	.string "me a real challenge!$"

EltheCity_BradleyScript_Text_10:
# 641 "data/maps/EltheCity/scripts.pory"
	.string "With pleasure! I have a new Pokémon.\n"
	.string "You're going to love him.$"

EltheCity_BradleyScript_Text_11:
# 643 "data/maps/EltheCity/scripts.pory"
	.string "Oh? I'm intrigued. Maybe this will\n"
	.string "be worth my time after all.$"

EltheCity_BradleyScript_Text_12:
# 661 "data/maps/EltheCity/scripts.pory"
	.string "Come at me!$"

EltheCity_BradleyScript_Text_13:
# 668 "data/maps/EltheCity/scripts.pory"
	.string "Huff…I've been beaten.\p"
	.string "You were right, you know.\n"
	.string "This isn't my true calling. I'm just\l"
	.string "throwing a tantrum.$"

EltheCity_BradleyScript_Text_14:
# 671 "data/maps/EltheCity/scripts.pory"
	.string "Amelia, I can hardly think straight,\n"
	.string "but one thing I do know for sure…\p"
	.string "You've changed my life. I wasn't sure\n"
	.string "it was for the better, at first,\l"
	.string "but what I did in my youth…\l"
	.string "How that man…used me…\p"
	.string "I thought I couldn't recover from it,\n"
	.string "but you and your team helped me…$"

EltheCity_BradleyScript_Text_15:
# 675 "data/maps/EltheCity/scripts.pory"
	.string "I know, Bradley. It's alright.\n"
	.string "We all act stupid sometimes.\p"
	.string "You don't have to turn on the\n"
	.string "waterworks, it's already raining.$"

EltheCity_BradleyScript_Text_16:
# 678 "data/maps/EltheCity/scripts.pory"
	.string "It's a terrible day for rain.$"

EltheCity_BradleyScript_Text_17:
# 680 "data/maps/EltheCity/scripts.pory"
	.string "Oh! Speaking of which. I think we\n"
	.string "need to do something about this rain.\l"
	.string "Can you help me get the rest of the\l"
	.string "team back together so we can get\l"
	.string "started on that?$"

EltheCity_BradleyScript_Text_18:
# 684 "data/maps/EltheCity/scripts.pory"
	.string "Python must be around here somewhere,\n"
	.string "but I haven't seen any sign of him.$"

EltheCity_BradleyScript_Text_19:
# 686 "data/maps/EltheCity/scripts.pory"
	.string "Of course you haven't “seen” him.\n"
	.string "He must be in disguise.\p"
	.string "With my superior hearing, I can\n"
	.string "usually discern his illusions.\p"
	.string "If you let me look around, I can\n"
	.string "probably pick him out.$"

EltheCity_BradleyScript_Text_20:
# 690 "data/maps/EltheCity/scripts.pory"
	.string "Okay! Sounds like a plan!$"

EltheCity_BradleyScript_Text_21:
# 698 "data/maps/EltheCity/scripts.pory"
	.string "You recalled Bradley the Nidoking!$"

EltheCity_BradleyScript_Text_22:
# 711 "data/maps/EltheCity/scripts.pory"
	.string "Vice is hanging around in one of\n"
	.string "these buildings, I think.\l"
	.string "Let's go find her.$"

EltheCity_BradleyScript_Text_23:
# 713 "data/maps/EltheCity/scripts.pory"
	.string "Yes, ma'am.$"

EltheCity_EventScript_FatGuy_Text_0:
# 799 "data/maps/EltheCity/scripts.pory"
	.string "Eli$"

EltheCity_EventScript_FatGuy_Text_1:
# 800 "data/maps/EltheCity/scripts.pory"
	.string "More towns should have arenas, if you\n"
	.string "ask me. Watching Pokémon battles is\l"
	.string "fun, but it's a bit barbaric to do\l"
	.string "them in the middle of the street.$"

EltheCity_Sign_TrashBarrel_Text_0:
# 805 "data/maps/EltheCity/scripts.pory"
	.string "The barrel is full of garbage.$"

EltheCity_Sign_RainBarrel_Text_0:
# 810 "data/maps/EltheCity/scripts.pory"
	.string "The barrel is full of rainwater.\n"
	.string "It shimmers faintly.$"

EltheCity_Sign_NestBarrel_Text_0:
# 815 "data/maps/EltheCity/scripts.pory"
	.string "Some eggshell pieces are in the\n"
	.string "bottom of the barrel.$"

EltheCity_Sign_BlockedHouse_Text_0:
# 1123 "data/maps/EltheCity/scripts.pory"
	.string "This is private property!\n"
	.string "No trespassing!$"

EltheCity_Trigger_FinalBoss_Text_0:
# 1146 "data/maps/EltheCity/scripts.pory"
	.string "So this is the source?\n"
	.string "What do we…?$"

EltheCity_Trigger_FinalBoss_Text_1:
# 1147 "data/maps/EltheCity/scripts.pory"
	.string "Demi-Vee$"

EltheCity_Trigger_FinalBoss_Text_2:
# 1148 "data/maps/EltheCity/scripts.pory"
	.string "Wakey wakey! It's time to turn off\n"
	.string "the shower!$"

EltheCity_Trigger_FinalBoss_Text_3:
# 1158 "data/maps/EltheCity/scripts.pory"
	.string "?????$"

EltheCity_Trigger_FinalBoss_Text_4:
# 1159 "data/maps/EltheCity/scripts.pory"
	.string "Who comes bearing my crystals?$"

EltheCity_Trigger_FinalBoss_Text_5:
# 1170 "data/maps/EltheCity/scripts.pory"
	.string "Me! You're messing with this town,\n"
	.string "and we're here to stop you!$"

EltheCity_Trigger_FinalBoss_Text_6:
# 1172 "data/maps/EltheCity/scripts.pory"
	.string "I am saving this town.\n"
	.string "I am Elthemori, the guardian spirit.\p"
	.string "I could not bear to see my wards\n"
	.string "in so much mental anguish, so I have\l"
	.string "brought forth healing water to ease\l"
	.string "their troubles.$"

EltheCity_Trigger_FinalBoss_Text_7:
# 1175 "data/maps/EltheCity/scripts.pory"
	.string "Their troubles aren't gone, they just\n"
	.string "forget them and wander around\l"
	.string "like zombies! Get real!$"

EltheCity_Trigger_FinalBoss_Text_8:
# 1176 "data/maps/EltheCity/scripts.pory"
	.string "Marcel$"

EltheCity_Trigger_FinalBoss_Text_9:
# 1177 "data/maps/EltheCity/scripts.pory"
	.string "They didn't agree to this! You're\n"
	.string "doing more harm than good.$"

EltheCity_Trigger_FinalBoss_Text_10:
# 1178 "data/maps/EltheCity/scripts.pory"
	.string "Vice$"

EltheCity_Trigger_FinalBoss_Text_11:
# 1179 "data/maps/EltheCity/scripts.pory"
	.string "And to make it worse, you've dragged\n"
	.string "us into your lame scheme!\p"
	.string "We could've forgotten who we were and\n"
	.string "got trapped in your Bidoof Day town!$"

EltheCity_Trigger_FinalBoss_Text_12:
# 1181 "data/maps/EltheCity/scripts.pory"
	.string "If you don't stop, we'll make you\n"
	.string "stop. That's a promise.$"

EltheCity_Trigger_FinalBoss_Text_13:
# 1184 "data/maps/EltheCity/scripts.pory"
	.string "So what do you think, huh?$"

EltheCity_Trigger_FinalBoss_Text_14:
# 1187 "data/maps/EltheCity/scripts.pory"
	.string "Elthemori$"

EltheCity_Trigger_FinalBoss_Text_15:
# 1188 "data/maps/EltheCity/scripts.pory"
	.string "Foolish.$"

EltheCity_Trigger_FinalBoss_Text_16:
# 1205 "data/maps/EltheCity/scripts.pory"
	.string "… … … … …\n"
	.string "I see…\p"
	.string "You think my people are strong enough\n"
	.string "to move past their pain.\p"
	.string "And yet, they needed you to face me\n"
	.string "instead of doing it themselves.$"

EltheCity_Trigger_FinalBoss_Text_17:
# 1209 "data/maps/EltheCity/scripts.pory"
	.string "Get real. You made them forget about\n"
	.string "yourself, too.\p"
	.string "This long storm is turning into just\n"
	.string "another trauma that they'll have to\l"
	.string "work through. But when they do, maybe\l"
	.string "they'll come to appreciate you again.$"

EltheCity_Trigger_FinalBoss_Text_18:
# 1212 "data/maps/EltheCity/scripts.pory"
	.string "Very well, then. You win, outsider.\p"
	.string "I will listen to the people's will.$"

EltheCity_Trigger_FinalBoss_Text_19:
# 1232 "data/maps/EltheCity/scripts.pory"
	.string "Well, team, we did it. We found each\n"
	.string "other again and freed a town from\l"
	.string "an endless dream.\p"
	.string "All in a day's work! Now let's go\n"
	.string "walk off this memory loss hangover.$"

EltheCity_Trigger_FinalBoss_Text_20:
# 1237 "data/maps/EltheCity/scripts.pory"
	.string "Hey, wait!\p"
	.string "C-can I come with you? I've never had\n"
	.string "battles like that before…it was cool!\l"
	.string "I wanna do it more!$"

EltheCity_Trigger_FinalBoss_Text_21:
# 1239 "data/maps/EltheCity/scripts.pory"
	.string "Of course! Just follow me!\p"
	.string "Let's go!$"

EltheCity_Trigger_FinalBoss_Text_22:
# 1248 "data/maps/EltheCity/scripts.pory"
	.string "Thank you for playing\n"
	.string "Recollection Quest!$"
