EltheCity_MapScripts::
# 24 "data/maps/EltheCity/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, EltheCity_MapScripts_MAP_SCRIPT_ON_LOAD
# 35 "data/maps/EltheCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, EltheCity_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

EltheCity_MapScripts_MAP_SCRIPT_ON_LOAD:
# 26 "data/maps/EltheCity/scripts.pory"
	setrespawn HEAL_LOCATION_ELTHE_CITY
# 27 "data/maps/EltheCity/scripts.pory"
	goto_if_set FLAG_STARTED_WEATHERBANE_QUEST, EltheCity_MapScripts_MAP_SCRIPT_ON_LOAD_1
	return

EltheCity_MapScripts_MAP_SCRIPT_ON_LOAD_1:
# 29 "data/maps/EltheCity/scripts.pory"
	setmetatile 5, 31, 0x387, FALSE
# 30 "data/maps/EltheCity/scripts.pory"
	setmetatile 5, 30, 0x37F, FALSE
# 31 "data/maps/EltheCity/scripts.pory"
	setmetatile 5, 29, 0x377, FALSE
# 32 "data/maps/EltheCity/scripts.pory"
	setmetatile 5, 28, 0x36F, FALSE
	return

EltheCity_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 36 "data/maps/EltheCity/scripts.pory"
	goto_if_set FLAG_SCALE_DESCENDING_DONE, EltheCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
EltheCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 40 "data/maps/EltheCity/scripts.pory"
	goto_if_set FLAG_SCALE_ASCENDING_DONE, EltheCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
EltheCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 45 "data/maps/EltheCity/scripts.pory"
	compare VAR_MAIN_GAME_STATE, 4
	goto_if_eq EltheCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_8
EltheCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_7:
# 50 "data/maps/EltheCity/scripts.pory"
	goto_if_unset FLAG_GOT_PYTHON, EltheCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_10
	return

EltheCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 38 "data/maps/EltheCity/scripts.pory"
	setobjectxyperm 11, 11, 21
	goto EltheCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

EltheCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_5:
# 42 "data/maps/EltheCity/scripts.pory"
	setobjectxyperm 10, 13, 21
	goto EltheCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_4

EltheCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_8:
# 47 "data/maps/EltheCity/scripts.pory"
	setvar VAR_MAIN_GAME_STATE, 5
	goto EltheCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_7

EltheCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_10:
# 52 "data/maps/EltheCity/scripts.pory"
	random 4
# 53 "data/maps/EltheCity/scripts.pory"
	copyvar VAR_TEMP_F, VAR_RESULT
# 54 "data/maps/EltheCity/scripts.pory"
	switch VAR_TEMP_F
# 56 "data/maps/EltheCity/scripts.pory"
	case 0, EltheCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_13
# 60 "data/maps/EltheCity/scripts.pory"
	case 1, EltheCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_14
# 64 "data/maps/EltheCity/scripts.pory"
	case 2, EltheCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_15
# 68 "data/maps/EltheCity/scripts.pory"
	case 3, EltheCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_16
	return

EltheCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_13:
# 57 "data/maps/EltheCity/scripts.pory"
	setobjectxyperm 2, 34, 7
# 58 "data/maps/EltheCity/scripts.pory"
	setobjectmovementtype 2, MOVEMENT_TYPE_FACE_LEFT
# 59 "data/maps/EltheCity/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_MAN_2
	return

EltheCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_14:
# 61 "data/maps/EltheCity/scripts.pory"
	setobjectxyperm 2, 29, 34
# 62 "data/maps/EltheCity/scripts.pory"
	setobjectmovementtype 2, MOVEMENT_TYPE_LOOK_AROUND
# 63 "data/maps/EltheCity/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_MAN_5
	return

EltheCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_15:
# 65 "data/maps/EltheCity/scripts.pory"
	setobjectxyperm 2, 6, 26
# 66 "data/maps/EltheCity/scripts.pory"
	setobjectmovementtype 2, MOVEMENT_TYPE_LOOK_AROUND
# 67 "data/maps/EltheCity/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_SPECIES ( POLIWHIRL )
	return

EltheCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_16:
# 69 "data/maps/EltheCity/scripts.pory"
	setobjectxyperm 2, 28, 15
# 70 "data/maps/EltheCity/scripts.pory"
	setobjectmovementtype 2, MOVEMENT_TYPE_LOOK_AROUND
# 71 "data/maps/EltheCity/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_MAN_2
	return


EltheCity_EventScript_Python::
# 81 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_EventScript_Python_Text_0, MSGBOX_NPC
# 82 "data/maps/EltheCity/scripts.pory"
	special GetLeadMonSpecies
# 83 "data/maps/EltheCity/scripts.pory"
	compare VAR_RESULT, SPECIES_NIDOKING
	goto_if_eq EltheCity_EventScript_Python_2
	return

EltheCity_EventScript_Python_1:
# 85 "data/maps/EltheCity/scripts.pory"
	lock
# 86 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_EventScript_Python_Text_1, PORTRAIT_NIDOKING_NEUTRAL
# 87 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_EventScript_Python_Text_2, MSGBOX_AUTOCLOSE
# 88 "data/maps/EltheCity/scripts.pory"
	playse SE_PIN
# 89 "data/maps/EltheCity/scripts.pory"
	applymovement 2, Common_Movement_ExclamationMark
# 90 "data/maps/EltheCity/scripts.pory"
	delay 48
# 91 "data/maps/EltheCity/scripts.pory"
	applymovement 2, EltheCity_Movement_PythonSpinIn
# 92 "data/maps/EltheCity/scripts.pory"
	waitmovement 0
# 93 "data/maps/EltheCity/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_SPECIES ( ZOROARK )
# 94 "data/maps/EltheCity/scripts.pory"
	removeobject VAR_LAST_TALKED
# 95 "data/maps/EltheCity/scripts.pory"
	addobject VAR_LAST_TALKED
# 96 "data/maps/EltheCity/scripts.pory"
	applymovement 2, EltheCity_Movement_PythonSpinOut
# 97 "data/maps/EltheCity/scripts.pory"
	waitmovement 0
# 98 "data/maps/EltheCity/scripts.pory"
	lock
# 99 "data/maps/EltheCity/scripts.pory"
	faceplayer
# 100 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_EventScript_Python_Text_3, PORTRAIT_ZOROARK_NEUTRAL
# 101 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_EventScript_Python_Text_4
# 102 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_EventScript_Python_Text_5, PORTRAIT_AMELIA_NEUTRAL
# 103 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_EventScript_Python_Text_6
# 104 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_EventScript_Python_Text_5, PORTRAIT_AMELIA_SHOCK
# 105 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_EventScript_Python_Text_7
# 106 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_EventScript_Python_Text_3, PORTRAIT_ZOROARK_NEUTRAL
# 107 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_EventScript_Python_Text_8, MSGBOX_AUTOCLOSE
# 109 "data/maps/EltheCity/scripts.pory"
	applymovement 2, EltheCity_Movement_PythonSpinIn
# 110 "data/maps/EltheCity/scripts.pory"
	waitmovement 0
# 111 "data/maps/EltheCity/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_MAY_NORMAL
# 112 "data/maps/EltheCity/scripts.pory"
	removeobject VAR_LAST_TALKED
# 113 "data/maps/EltheCity/scripts.pory"
	addobject VAR_LAST_TALKED
# 114 "data/maps/EltheCity/scripts.pory"
	applymovement 2, EltheCity_Movement_PythonSpinOut
# 115 "data/maps/EltheCity/scripts.pory"
	waitmovement 0
# 116 "data/maps/EltheCity/scripts.pory"
	lock
# 117 "data/maps/EltheCity/scripts.pory"
	faceplayer
# 118 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_EventScript_Python_Text_3, PORTRAIT_AMELIA_SMUG
# 119 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_EventScript_Python_Text_9
# 120 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_EventScript_Python_Text_3, PORTRAIT_AMELIA_WINK
# 121 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_EventScript_Python_Text_10
# 122 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_EventScript_Python_Text_5, PORTRAIT_AMELIA_SERIOUSLY
# 123 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_EventScript_Python_Text_11
# 124 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_EventScript_Python_Text_5, PORTRAIT_AMELIA_NEUTRAL
# 125 "data/maps/EltheCity/scripts.pory"
	message EltheCity_EventScript_Python_Text_12
# 127 "data/maps/EltheCity/scripts.pory"
	applymovement 2, EltheCity_Movement_PythonSpinIn
# 128 "data/maps/EltheCity/scripts.pory"
	waitmovement 0
# 129 "data/maps/EltheCity/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_SPECIES ( ZOROARK )
# 130 "data/maps/EltheCity/scripts.pory"
	removeobject VAR_LAST_TALKED
# 131 "data/maps/EltheCity/scripts.pory"
	addobject VAR_LAST_TALKED
# 132 "data/maps/EltheCity/scripts.pory"
	applymovement 2, EltheCity_Movement_PythonSpinOut
# 133 "data/maps/EltheCity/scripts.pory"
	waitmovement 0
# 134 "data/maps/EltheCity/scripts.pory"
	lock
# 135 "data/maps/EltheCity/scripts.pory"
	faceplayer
# 136 "data/maps/EltheCity/scripts.pory"
	waitmessage
# 137 "data/maps/EltheCity/scripts.pory"
	waitbuttonpress
# 138 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_EventScript_Python_Text_3, PORTRAIT_ZOROARK_NEUTRAL
# 139 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_EventScript_Python_Text_13, MSGBOX_AUTOCLOSE
# 141 "data/maps/EltheCity/scripts.pory"
	delay 32
# 142 "data/maps/EltheCity/scripts.pory"
	applymovement 2, EnterPokeballMovement
# 143 "data/maps/EltheCity/scripts.pory"
	waitmovement 0
# 144 "data/maps/EltheCity/scripts.pory"
	removeobject 2
# 145 "data/maps/EltheCity/scripts.pory"
	delay 16
# 146 "data/maps/EltheCity/scripts.pory"
	removeitem ITEM_NEST_BALL, 1
# 147 "data/maps/EltheCity/scripts.pory"
	playfanfare MUS_EVOLVED
# 148 "data/maps/EltheCity/scripts.pory"
	message EltheCity_EventScript_Python_Text_14
# 149 "data/maps/EltheCity/scripts.pory"
	waitmessage
# 150 "data/maps/EltheCity/scripts.pory"
	waitfanfare
# 151 "data/maps/EltheCity/scripts.pory"
	waitbuttonpress
# 152 "data/maps/EltheCity/scripts.pory"
	closemessage
# 153 "data/maps/EltheCity/scripts.pory"
	givemon SPECIES_ZOROARK, 54, ITEM_SILK_SCARF, ITEM_NEST_BALL, NATURE_CALM, 0, MON_MALE, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_NIGHT_DAZE, MOVE_AGILITY, MOVE_FLAMETHROWER, MOVE_HYPER_BEAM, FALSE, FALSE, TYPE_NORMAL
# 154 "data/maps/EltheCity/scripts.pory"
	setpartymemberinfo 4
# 155 "data/maps/EltheCity/scripts.pory"
	setvar VAR_MAIN_GAME_STATE, 30
	return

EltheCity_EventScript_Python_2:
# 83 "data/maps/EltheCity/scripts.pory"
	goto_if_set FLAG_CAN_FIND_PYTHON, EltheCity_EventScript_Python_1
	return


# 159 "data/maps/EltheCity/scripts.pory"
EltheCity_Movement_PythonSpinIn:
# 161 "data/maps/EltheCity/scripts.pory"
	face_down
# 162 "data/maps/EltheCity/scripts.pory"
	delay_4
# 163 "data/maps/EltheCity/scripts.pory"
	face_left
# 164 "data/maps/EltheCity/scripts.pory"
	delay_4
# 165 "data/maps/EltheCity/scripts.pory"
	face_up
# 166 "data/maps/EltheCity/scripts.pory"
	delay_2
# 167 "data/maps/EltheCity/scripts.pory"
	face_right
# 168 "data/maps/EltheCity/scripts.pory"
	delay_2
	step_end

# 171 "data/maps/EltheCity/scripts.pory"
EltheCity_Movement_PythonSpinOut:
# 173 "data/maps/EltheCity/scripts.pory"
	face_down
# 174 "data/maps/EltheCity/scripts.pory"
	delay_2
# 175 "data/maps/EltheCity/scripts.pory"
	face_left
# 176 "data/maps/EltheCity/scripts.pory"
	delay_2
# 177 "data/maps/EltheCity/scripts.pory"
	face_up
# 178 "data/maps/EltheCity/scripts.pory"
	delay_4
# 179 "data/maps/EltheCity/scripts.pory"
	face_right
# 180 "data/maps/EltheCity/scripts.pory"
	delay_4
# 181 "data/maps/EltheCity/scripts.pory"
	face_down
# 182 "data/maps/EltheCity/scripts.pory"
	delay_4
# 183 "data/maps/EltheCity/scripts.pory"
	face_player
	step_end

EltheCity_Sign_InnLeft::
# 188 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_Sign_InnLeft_Text_0, MSGBOX_SIGN
	return


EltheCity_Sign_InnRight::
# 193 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_EventScript_Python_Text_5, PORTRAIT_AMELIA_SERIOUSLY
# 194 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_Sign_InnRight_Text_0, MSGBOX_SIGN
	return


EltheCity_Trigger_JumpOnBenchLeft_TopTile::
# 199 "data/maps/EltheCity/scripts.pory"
	clearflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 200 "data/maps/EltheCity/scripts.pory"
	setvar VAR_0x8004, ANIM_SIT_WEST
# 201 "data/maps/EltheCity/scripts.pory"
	callnative DoAmeliaOverworldAnim
# 202 "data/maps/EltheCity/scripts.pory"
	playse SE_BIKE_HOP
# 203 "data/maps/EltheCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, EltheCity_Movement_JumpOnBenchLeft
# 204 "data/maps/EltheCity/scripts.pory"
	waitmovement 0
# 205 "data/maps/EltheCity/scripts.pory"
	addobjectspriteoffset OBJ_EVENT_ID_PLAYER, 0, -6
EltheCity_Trigger_JumpOnBenchLeft_TopTile_3:
# 207 "data/maps/EltheCity/scripts.pory"
	waitforscriptinput
# 208 "data/maps/EltheCity/scripts.pory"
	switch VAR_RESULT
# 210 "data/maps/EltheCity/scripts.pory"
	case 0x0020, EltheCity_Trigger_JumpOnBenchLeft_TopTile_10
# 211 "data/maps/EltheCity/scripts.pory"
	case 0x0001, EltheCity_Trigger_JumpOnBenchLeft_TopTile_10
# 212 "data/maps/EltheCity/scripts.pory"
	case 0x0002, EltheCity_Trigger_JumpOnBenchLeft_TopTile_10
EltheCity_Trigger_JumpOnBenchLeft_TopTile_2:
# 232 "data/maps/EltheCity/scripts.pory"
	compare VAR_RESULT, 0x0020
	goto_if_ne EltheCity_Trigger_JumpOnBenchLeft_TopTile_5
EltheCity_Trigger_JumpOnBenchLeft_TopTile_1:
# 233 "data/maps/EltheCity/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 234 "data/maps/EltheCity/scripts.pory"
	release
	return

EltheCity_Trigger_JumpOnBenchLeft_TopTile_4:
# 232 "data/maps/EltheCity/scripts.pory"
	compare VAR_RESULT, 0x0002
	goto_if_ne EltheCity_Trigger_JumpOnBenchLeft_TopTile_3
	goto EltheCity_Trigger_JumpOnBenchLeft_TopTile_1

EltheCity_Trigger_JumpOnBenchLeft_TopTile_5:
# 232 "data/maps/EltheCity/scripts.pory"
	compare VAR_RESULT, 0x0001
	goto_if_ne EltheCity_Trigger_JumpOnBenchLeft_TopTile_4
	goto EltheCity_Trigger_JumpOnBenchLeft_TopTile_1

EltheCity_Trigger_JumpOnBenchLeft_TopTile_10:
# 213 "data/maps/EltheCity/scripts.pory"
	resetobjectspriteoffset OBJ_EVENT_ID_PLAYER
# 214 "data/maps/EltheCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, EltheCity_Movement_GetOffBenchLeft
# 215 "data/maps/EltheCity/scripts.pory"
	waitmovement 0
	goto EltheCity_Trigger_JumpOnBenchLeft_TopTile_2


EltheCity_Trigger_JumpOnBenchLeft_BottomTile::
# 239 "data/maps/EltheCity/scripts.pory"
	goto EltheCity_Trigger_JumpOnBenchLeft_TopTile
	return


EltheCity_Trigger_JumpOnBenchRight_TopTile::
# 244 "data/maps/EltheCity/scripts.pory"
	clearflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 245 "data/maps/EltheCity/scripts.pory"
	setvar VAR_0x8004, ANIM_SIT_EAST
# 246 "data/maps/EltheCity/scripts.pory"
	callnative DoAmeliaOverworldAnim
# 247 "data/maps/EltheCity/scripts.pory"
	playse SE_BIKE_HOP
# 248 "data/maps/EltheCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, EltheCity_Movement_JumpOnBenchRight
# 249 "data/maps/EltheCity/scripts.pory"
	waitmovement 0
# 250 "data/maps/EltheCity/scripts.pory"
	addobjectspriteoffset OBJ_EVENT_ID_PLAYER, 0, -6
EltheCity_Trigger_JumpOnBenchRight_TopTile_3:
# 252 "data/maps/EltheCity/scripts.pory"
	waitforscriptinput
# 253 "data/maps/EltheCity/scripts.pory"
	switch VAR_RESULT
# 255 "data/maps/EltheCity/scripts.pory"
	case 0x0010, EltheCity_Trigger_JumpOnBenchRight_TopTile_10
# 256 "data/maps/EltheCity/scripts.pory"
	case 0x0001, EltheCity_Trigger_JumpOnBenchRight_TopTile_10
# 257 "data/maps/EltheCity/scripts.pory"
	case 0x0002, EltheCity_Trigger_JumpOnBenchRight_TopTile_10
EltheCity_Trigger_JumpOnBenchRight_TopTile_2:
# 277 "data/maps/EltheCity/scripts.pory"
	compare VAR_RESULT, 0x0010
	goto_if_ne EltheCity_Trigger_JumpOnBenchRight_TopTile_5
EltheCity_Trigger_JumpOnBenchRight_TopTile_1:
# 278 "data/maps/EltheCity/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 279 "data/maps/EltheCity/scripts.pory"
	release
	return

EltheCity_Trigger_JumpOnBenchRight_TopTile_4:
# 277 "data/maps/EltheCity/scripts.pory"
	compare VAR_RESULT, 0x0002
	goto_if_ne EltheCity_Trigger_JumpOnBenchRight_TopTile_3
	goto EltheCity_Trigger_JumpOnBenchRight_TopTile_1

EltheCity_Trigger_JumpOnBenchRight_TopTile_5:
# 277 "data/maps/EltheCity/scripts.pory"
	compare VAR_RESULT, 0x0001
	goto_if_ne EltheCity_Trigger_JumpOnBenchRight_TopTile_4
	goto EltheCity_Trigger_JumpOnBenchRight_TopTile_1

EltheCity_Trigger_JumpOnBenchRight_TopTile_10:
# 258 "data/maps/EltheCity/scripts.pory"
	resetobjectspriteoffset OBJ_EVENT_ID_PLAYER
# 259 "data/maps/EltheCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, EltheCity_Movement_GetOffBenchRight
# 260 "data/maps/EltheCity/scripts.pory"
	waitmovement 0
	goto EltheCity_Trigger_JumpOnBenchRight_TopTile_2


EltheCity_Trigger_JumpOnBenchRight_BottomTile::
# 284 "data/maps/EltheCity/scripts.pory"
	goto EltheCity_Trigger_JumpOnBenchRight_TopTile
	return


EltheCity_EventScript_Keesight::
# 289 "data/maps/EltheCity/scripts.pory"
	goto_if_set FLAG_SCALE_ASCENDING_DONE, EltheCity_EventScript_Keesight_3
EltheCity_EventScript_Keesight_2:
# 296 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_EventScript_Keesight_Text_2, PORTRAIT_KEESIGHT
# 297 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_EventScript_Keesight_Text_3
# 298 "data/maps/EltheCity/scripts.pory"
	speakername NULL, 0
# 299 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_EventScript_Keesight_Text_4, MSGBOX_AUTOCLOSE
	return

EltheCity_EventScript_Keesight_1:
# 291 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_EventScript_Keesight_Text_0, PORTRAIT_KEESIGHT
# 292 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_EventScript_Keesight_Text_1, MSGBOX_NPC
	return

EltheCity_EventScript_Keesight_3:
# 289 "data/maps/EltheCity/scripts.pory"
	goto_if_set FLAG_SCALE_DESCENDING_DONE, EltheCity_EventScript_Keesight_1
	goto EltheCity_EventScript_Keesight_2


EltheCity_EventScript_Weatherbane::
# 305 "data/maps/EltheCity/scripts.pory"
	goto_if_unset FLAG_BEAT_WEATHERBANE, EltheCity_EventScript_Weatherbane_1
# 391 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_EventScript_Weatherbane_Text_1, PORTRAIT_WEATHERBANE_NEUTRAL
# 392 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_EventScript_Weatherbane_Text_17, MSGBOX_AUTOCLOSE
	return

EltheCity_EventScript_Weatherbane_1:
# 307 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_EventScript_Python_Text_5, PORTRAIT_AMELIA_NEUTRAL
# 308 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_EventScript_Weatherbane_Text_0, MSGBOX_AUTOCLOSE
# 309 "data/maps/EltheCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
# 310 "data/maps/EltheCity/scripts.pory"
	waitmovement 0
# 311 "data/maps/EltheCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
# 312 "data/maps/EltheCity/scripts.pory"
	waitmovement 0
# 313 "data/maps/EltheCity/scripts.pory"
	delay 16
# 314 "data/maps/EltheCity/scripts.pory"
	addobjectspriteoffset 1, 1, 0
# 315 "data/maps/EltheCity/scripts.pory"
	delay 8
# 316 "data/maps/EltheCity/scripts.pory"
	addobjectspriteoffset 1, -2, 0
# 317 "data/maps/EltheCity/scripts.pory"
	delay 8
# 318 "data/maps/EltheCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 319 "data/maps/EltheCity/scripts.pory"
	playse SE_PIN
# 320 "data/maps/EltheCity/scripts.pory"
	addobjectspriteoffset 1, 2, 0
# 321 "data/maps/EltheCity/scripts.pory"
	delay 8
# 322 "data/maps/EltheCity/scripts.pory"
	addobjectspriteoffset 1, -2, 0
# 323 "data/maps/EltheCity/scripts.pory"
	delay 8
# 324 "data/maps/EltheCity/scripts.pory"
	addobjectspriteoffset 1, 2, 0
# 325 "data/maps/EltheCity/scripts.pory"
	delay 8
# 326 "data/maps/EltheCity/scripts.pory"
	addobjectspriteoffset 1, -2, 0
# 327 "data/maps/EltheCity/scripts.pory"
	delay 8
# 328 "data/maps/EltheCity/scripts.pory"
	addobjectspriteoffset 1, 2, 0
# 329 "data/maps/EltheCity/scripts.pory"
	delay 8
# 330 "data/maps/EltheCity/scripts.pory"
	addobjectspriteoffset 1, -2, 0
# 331 "data/maps/EltheCity/scripts.pory"
	delay 8
# 332 "data/maps/EltheCity/scripts.pory"
	addobjectspriteoffset 1, 0, 0
# 333 "data/maps/EltheCity/scripts.pory"
	delay 16
# 334 "data/maps/EltheCity/scripts.pory"
	applymovement 1, EltheCity_Movement_WeatherbaneFlap
# 335 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_EventScript_Weatherbane_Text_1, PORTRAIT_WEATHERBANE_SCREAM
# 336 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_EventScript_Weatherbane_Text_2
# 337 "data/maps/EltheCity/scripts.pory"
	waitmovement 1
# 338 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_EventScript_Python_Text_5, PORTRAIT_AMELIA_STRAINED
# 339 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_EventScript_Weatherbane_Text_3
# 340 "data/maps/EltheCity/scripts.pory"
	applymovement 1, EltheCity_Movement_WeatherbaneFlap
# 341 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_EventScript_Weatherbane_Text_1, PORTRAIT_WEATHERBANE_SCREAM
# 342 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_EventScript_Weatherbane_Text_2
# 343 "data/maps/EltheCity/scripts.pory"
	waitmovement 1
# 344 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_EventScript_Python_Text_5, PORTRAIT_AMELIA_SHOCK
# 345 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_EventScript_Weatherbane_Text_4
# 346 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_EventScript_Weatherbane_Text_1, PORTRAIT_WEATHERBANE_NEUTRAL
# 347 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_EventScript_Python_Text_0
# 348 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_EventScript_Python_Text_5, PORTRAIT_AMELIA_NEUTRAL
# 349 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_EventScript_Weatherbane_Text_5
# 350 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_EventScript_Weatherbane_Text_1, PORTRAIT_WEATHERBANE_NEUTRAL
# 351 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_EventScript_Weatherbane_Text_6
# 353 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_EventScript_Python_Text_5, PORTRAIT_AMELIA_NEUTRAL
# 354 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_EventScript_Weatherbane_Text_7
# 355 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_EventScript_Weatherbane_Text_1, PORTRAIT_WEATHERBANE_SCREAM
# 356 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_EventScript_Weatherbane_Text_8
# 358 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_EventScript_Python_Text_5, PORTRAIT_AMELIA_STRAINED
# 359 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_EventScript_Weatherbane_Text_9
# 361 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_EventScript_Weatherbane_Text_1, PORTRAIT_WEATHERBANE_SCREAM
# 362 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_EventScript_Weatherbane_Text_10
# 363 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_EventScript_Python_Text_5, PORTRAIT_AMELIA_NEUTRAL
# 364 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_EventScript_Weatherbane_Text_11
# 365 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_EventScript_Weatherbane_Text_1, PORTRAIT_WEATHERBANE_NEUTRAL
# 366 "data/maps/EltheCity/scripts.pory"
	applymovement 1, EltheCity_Movement_WeatherbaneFlap
# 367 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_EventScript_Weatherbane_Text_12
# 368 "data/maps/EltheCity/scripts.pory"
	waitmovement 1
# 369 "data/maps/EltheCity/scripts.pory"
	closemessage
# 370 "data/maps/EltheCity/scripts.pory"
	createmon 1, 0, SPECIES_WEATHERBANE, 40, ITEM_NONE, 0, NATURE_CALM, 0, MON_MALE, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_STEEL_WING, MOVE_AIR_CUTTER, MOVE_SCREECH, MOVE_ROOST, FALSE, 0, TYPE_WATER
# 371 "data/maps/EltheCity/scripts.pory"
	dowildbattle
# 372 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_EventScript_Weatherbane_Text_1, PORTRAIT_WEATHERBANE_NEUTRAL
# 373 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_EventScript_Weatherbane_Text_13
# 374 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_EventScript_Python_Text_5, PORTRAIT_AMELIA_SERIOUSLY
# 375 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_EventScript_Weatherbane_Text_14
# 376 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_EventScript_Weatherbane_Text_1, PORTRAIT_WEATHERBANE_NEUTRAL
# 377 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_EventScript_Weatherbane_Text_15, MSGBOX_AUTOCLOSE
# 378 "data/maps/EltheCity/scripts.pory"
	delay 8
# 379 "data/maps/EltheCity/scripts.pory"
	giveitem ITEM_EXP_CANDY_L
# 380 "data/maps/EltheCity/scripts.pory"
	delay 60
# 381 "data/maps/EltheCity/scripts.pory"
	setflag FLAG_BEAT_WEATHERBANE
# 382 "data/maps/EltheCity/scripts.pory"
	playfanfare MUS_CAUGHT
# 383 "data/maps/EltheCity/scripts.pory"
	message EltheCity_EventScript_Weatherbane_Text_16
# 384 "data/maps/EltheCity/scripts.pory"
	waitmessage
# 385 "data/maps/EltheCity/scripts.pory"
	waitfanfare
# 386 "data/maps/EltheCity/scripts.pory"
	waitbuttonpress
# 387 "data/maps/EltheCity/scripts.pory"
	closemessage
	return


# 398 "data/maps/EltheCity/scripts.pory"
EltheCity_Movement_WeatherbaneFlap:
# 400 "data/maps/EltheCity/scripts.pory"
	face_up
# 401 "data/maps/EltheCity/scripts.pory"
	delay_8
# 402 "data/maps/EltheCity/scripts.pory"
	face_left
# 403 "data/maps/EltheCity/scripts.pory"
	delay_8
# 404 "data/maps/EltheCity/scripts.pory"
	face_down
# 405 "data/maps/EltheCity/scripts.pory"
	delay_8
# 406 "data/maps/EltheCity/scripts.pory"
	face_right
# 407 "data/maps/EltheCity/scripts.pory"
	delay_8
	step_end

EltheCity_EventScript_BarrelGuy::
# 412 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_EventScript_BarrelGuy_Text_0
# 413 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_EventScript_BarrelGuy_Text_1, MSGBOX_NPC
	return


EltheCity_BakeryWindow::
# 419 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_BakeryWindow_Text_0, MSGBOX_SIGN
	return


EltheCity_CitySign::
# 424 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_CitySign_Text_0, MSGBOX_SIGN
	return


EltheCity_Girlfriend::
# 429 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_Girlfriend_Text_0
# 430 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_Girlfriend_Text_1, MSGBOX_SIGN
	return


EltheCity_Boyfriend::
# 435 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_Boyfriend_Text_0
# 436 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_Boyfriend_Text_1, MSGBOX_SIGN
	return


EltheCity_OldGuyBarrel::
# 441 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_OldGuyBarrel_Text_0
# 442 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_OldGuyBarrel_Text_1, MSGBOX_NPC
	return


EltheCity_Slowbro::
# 448 "data/maps/EltheCity/scripts.pory"
	lock
# 449 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_Slowbro_Text_0
# 450 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_Slowbro_Text_1
# 452 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_EventScript_Python_Text_5, PORTRAIT_AMELIA_STRAINED
# 453 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_Slowbro_Text_2
# 454 "data/maps/EltheCity/scripts.pory"
	faceplayer
# 455 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_Slowbro_Text_0
# 456 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_Slowbro_Text_3
# 457 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_EventScript_Python_Text_5, PORTRAIT_AMELIA_STRAINED
# 458 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_Slowbro_Text_4, MSGBOX_AUTOCLOSE
# 459 "data/maps/EltheCity/scripts.pory"
	release
	return


EltheCity_Lombre::
# 464 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_Lombre_Text_0
# 465 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_Lombre_Text_1, MSGBOX_NPC
	return


EltheCity_Hiker::
# 470 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_Hiker_Text_0
# 471 "data/maps/EltheCity/scripts.pory"
	goto_if_unset FLAG_GOT_BRADLEY, EltheCity_Hiker_1
# 477 "data/maps/EltheCity/scripts.pory"
	lock
# 478 "data/maps/EltheCity/scripts.pory"
	faceplayer
# 479 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_Hiker_Text_2
# 480 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_EventScript_Python_Text_5, PORTRAIT_AMELIA_NEUTRAL
# 481 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_Hiker_Text_3
# 482 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_Hiker_Text_0
# 483 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_Hiker_Text_4
# 484 "data/maps/EltheCity/scripts.pory"
	release
	return

EltheCity_Hiker_1:
# 473 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_Hiker_Text_1, MSGBOX_NPC
	return


EltheCity_Gentleman::
# 490 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_Gentleman_Text_0
# 491 "data/maps/EltheCity/scripts.pory"
	goto_if_unset FLAG_GOT_BRADLEY, EltheCity_Gentleman_1
# 497 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_Gentleman_Text_2, MSGBOX_NPC
	return

EltheCity_Gentleman_1:
# 493 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_Gentleman_Text_1, MSGBOX_NPC
	return


EltheCity_Lass::
# 503 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_Lass_Text_0
# 504 "data/maps/EltheCity/scripts.pory"
	goto_if_unset FLAG_GOT_BRADLEY, EltheCity_Lass_1
# 510 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_Lass_Text_2, MSGBOX_NPC
	return

EltheCity_Lass_1:
# 506 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_Lass_Text_1, MSGBOX_NPC
	return


EltheCity_Mom::
# 516 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_Mom_Text_0
# 517 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_Mom_Text_1, MSGBOX_SIGN
	return


EltheCity_ArenaSign::
# 522 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_ArenaSign_Text_0, MSGBOX_SIGN
	return


EltheCity_CemeterySign::
# 527 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_CemeterySign_Text_0, MSGBOX_SIGN
	return


EltheCity_Phantump::
# 532 "data/maps/EltheCity/scripts.pory"
	goto_if_unset FLAG_MET_PHANTUMP, EltheCity_Phantump_1
# 575 "data/maps/EltheCity/scripts.pory"
	lock
# 576 "data/maps/EltheCity/scripts.pory"
	faceplayer
# 577 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_Phantump_Text_3
# 578 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_Phantump_Text_14
# 579 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_EventScript_Python_Text_5, PORTRAIT_AMELIA_NEUTRAL
# 580 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_Phantump_Text_15
# 581 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_Phantump_Text_3
# 582 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_Phantump_Text_16
# 583 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_EventScript_Python_Text_5, PORTRAIT_AMELIA_SERIOUSLY
# 584 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_Phantump_Text_17
# 585 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_Phantump_Text_3
# 586 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_Phantump_Text_18
# 587 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_EventScript_Python_Text_5, PORTRAIT_AMELIA_SERIOUSLY
# 588 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_Phantump_Text_19
# 589 "data/maps/EltheCity/scripts.pory"
	release
	return

EltheCity_Phantump_1:
# 534 "data/maps/EltheCity/scripts.pory"
	lock
# 535 "data/maps/EltheCity/scripts.pory"
	faceplayer
# 536 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_Phantump_Text_0
# 537 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_Phantump_Text_1
# 538 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_EventScript_Python_Text_5, PORTRAIT_AMELIA_NEUTRAL
# 539 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_Phantump_Text_2
# 540 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_Phantump_Text_3
# 541 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_Phantump_Text_4
# 543 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_EventScript_Python_Text_5, PORTRAIT_AMELIA_NEUTRAL
# 544 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_Phantump_Text_5
# 545 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_Phantump_Text_3
# 546 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_Phantump_Text_6
# 547 "data/maps/EltheCity/scripts.pory"
	applymovement VAR_LAST_TALKED, EltheCity_Movement_PhantumpLookAround
# 548 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_Phantump_Text_7
# 549 "data/maps/EltheCity/scripts.pory"
	waitmovement 0
# 550 "data/maps/EltheCity/scripts.pory"
	applymovement VAR_LAST_TALKED, EltheCity_Movement_PhantumpReturn
# 551 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_Phantump_Text_8
# 552 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_EventScript_Python_Text_5, PORTRAIT_AMELIA_NEUTRAL
# 553 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_Phantump_Text_9
# 554 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_Phantump_Text_3
# 555 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_Phantump_Text_10
# 561 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_EventScript_Python_Text_5, PORTRAIT_AMELIA_NEUTRAL
# 562 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_Phantump_Text_11
# 563 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_Phantump_Text_3
# 564 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_Phantump_Text_12
# 565 "data/maps/EltheCity/scripts.pory"
	speakername NULL
# 566 "data/maps/EltheCity/scripts.pory"
	giveitem ITEM_GLACIALSHARD
# 567 "data/maps/EltheCity/scripts.pory"
	setflag FLAG_GLACIALSHARD_GET
# 568 "data/maps/EltheCity/scripts.pory"
	setflag FLAG_MET_PHANTUMP
# 569 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_EventScript_Python_Text_5, PORTRAIT_AMELIA_NEUTRAL
# 570 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_Phantump_Text_13
# 571 "data/maps/EltheCity/scripts.pory"
	release
	return


# 593 "data/maps/EltheCity/scripts.pory"
EltheCity_Movement_PhantumpLookAround:
# 595 "data/maps/EltheCity/scripts.pory"
	walk_slow_up
# 596 "data/maps/EltheCity/scripts.pory"
	delay_16
# 596 "data/maps/EltheCity/scripts.pory"
	delay_16
# 596 "data/maps/EltheCity/scripts.pory"
	delay_16
# 597 "data/maps/EltheCity/scripts.pory"
	face_right
# 598 "data/maps/EltheCity/scripts.pory"
	delay_16
# 598 "data/maps/EltheCity/scripts.pory"
	delay_16
# 598 "data/maps/EltheCity/scripts.pory"
	delay_16
# 599 "data/maps/EltheCity/scripts.pory"
	face_left
# 600 "data/maps/EltheCity/scripts.pory"
	delay_16
# 600 "data/maps/EltheCity/scripts.pory"
	delay_16
# 600 "data/maps/EltheCity/scripts.pory"
	delay_16
# 601 "data/maps/EltheCity/scripts.pory"
	face_down
	step_end

# 604 "data/maps/EltheCity/scripts.pory"
EltheCity_Movement_PhantumpReturn:
# 606 "data/maps/EltheCity/scripts.pory"
	walk_down
# 607 "data/maps/EltheCity/scripts.pory"
	face_player
	step_end

EltheCity_BradleyScript::
# 612 "data/maps/EltheCity/scripts.pory"
	lock
# 613 "data/maps/EltheCity/scripts.pory"
	faceplayer
# 614 "data/maps/EltheCity/scripts.pory"
	goto_if_unset FLAG_SKIP_BRADLEY_CONVO, EltheCity_BradleyScript_2
EltheCity_BradleyScript_1:
# 636 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_EventScript_Python_Text_1, PORTRAIT_NIDOKING_NEUTRAL, PORTRAIT_DEFAULT_LEFT
# 637 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_BradleyScript_Text_8, MSGBOX_YESNO
# 638 "data/maps/EltheCity/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq EltheCity_BradleyScript_5
# 645 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_EventScript_Python_Text_5, PORTRAIT_AMELIA_SMUG
# 646 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_BradleyScript_Text_10
# 647 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_EventScript_Python_Text_1, PORTRAIT_NIDOKING_GRIN, PORTRAIT_DEFAULT_LEFT
# 648 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_BradleyScript_Text_11, MSGBOX_AUTOCLOSE
# 649 "data/maps/EltheCity/scripts.pory"
	clearflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 650 "data/maps/EltheCity/scripts.pory"
	applymovement 4, Common_Movement_WalkInPlaceDown
# 651 "data/maps/EltheCity/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 652 "data/maps/EltheCity/scripts.pory"
	switch VAR_RESULT
# 654 "data/maps/EltheCity/scripts.pory"
	case DIR_SOUTH, EltheCity_BradleyScript_10
# 656 "data/maps/EltheCity/scripts.pory"
	case DIR_EAST, EltheCity_BradleyScript_11
# 658 "data/maps/EltheCity/scripts.pory"
	case DIR_WEST, EltheCity_BradleyScript_12
# 660 "data/maps/EltheCity/scripts.pory"
	case DIR_NORTH, EltheCity_BradleyScript_13
EltheCity_BradleyScript_8:
# 663 "data/maps/EltheCity/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 664 "data/maps/EltheCity/scripts.pory"
	playmoncry SPECIES_NIDOKING, CRY_MODE_NORMAL
# 665 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_EventScript_Python_Text_1, PORTRAIT_NIDOKING_GRIN, PORTRAIT_DEFAULT_LEFT
# 666 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_BradleyScript_Text_12, MSGBOX_AUTOCLOSE
# 667 "data/maps/EltheCity/scripts.pory"
	waitmoncry
# 668 "data/maps/EltheCity/scripts.pory"
	setflag FLAG_WILD_AI_ON
# 669 "data/maps/EltheCity/scripts.pory"
	createmon 1, 0, SPECIES_NIDOKING, 56, ITEM_QUICK_CLAW, ITEM_ULTRA_BALL, NATURE_LONELY, 2, MON_MALE, 0, 10, 0, 0, 10, 0, 31, 31, 31, 31, 31, 31, MOVE_POISON_JAB, MOVE_EARTHQUAKE, MOVE_MEGAHORN, MOVE_SLUDGE_BOMB, FALSE, FALSE, TYPE_GROUND
# 670 "data/maps/EltheCity/scripts.pory"
	dowildbattle
# 671 "data/maps/EltheCity/scripts.pory"
	delay 32
# 672 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_EventScript_Python_Text_1, PORTRAIT_NIDOKING_NERVOUS, PORTRAIT_DEFAULT_LEFT
# 673 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_BradleyScript_Text_13
# 674 "data/maps/EltheCity/scripts.pory"
	applymovement 4, EltheCity_Movement_BradleyApproach
# 675 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_EventScript_Python_Text_1, PORTRAIT_NIDOKING_NEUTRAL, PORTRAIT_DEFAULT_LEFT
# 676 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_BradleyScript_Text_14
# 679 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_EventScript_Python_Text_5, PORTRAIT_AMELIA_SERIOUSLY
# 680 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_BradleyScript_Text_15
# 682 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_EventScript_Python_Text_1, PORTRAIT_NIDOKING_NEUTRAL, PORTRAIT_DEFAULT_LEFT
# 683 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_BradleyScript_Text_16
# 684 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_EventScript_Python_Text_5, PORTRAIT_AMELIA_SHOCK
# 685 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_BradleyScript_Text_17
# 686 "data/maps/EltheCity/scripts.pory"
	goto_if_set FLAG_GOT_VICE, EltheCity_BradleyScript_14
# 715 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_EventScript_Python_Text_5, PORTRAIT_AMELIA_NEUTRAL
# 716 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_BradleyScript_Text_22
# 717 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_EventScript_Python_Text_1, PORTRAIT_NIDOKING_NEUTRAL, PORTRAIT_DEFAULT_LEFT
# 718 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_BradleyScript_Text_23, MSGBOX_AUTOCLOSE
# 719 "data/maps/EltheCity/scripts.pory"
	delay 32
# 720 "data/maps/EltheCity/scripts.pory"
	applymovement 4, EnterPokeballMovement
# 721 "data/maps/EltheCity/scripts.pory"
	waitmovement 0
# 722 "data/maps/EltheCity/scripts.pory"
	removeobject 4
# 723 "data/maps/EltheCity/scripts.pory"
	delay 16
# 724 "data/maps/EltheCity/scripts.pory"
	removeitem ITEM_ULTRA_BALL, 1
# 725 "data/maps/EltheCity/scripts.pory"
	playfanfare MUS_EVOLVED
# 726 "data/maps/EltheCity/scripts.pory"
	message EltheCity_BradleyScript_Text_21
# 727 "data/maps/EltheCity/scripts.pory"
	waitmessage
# 728 "data/maps/EltheCity/scripts.pory"
	waitfanfare
# 729 "data/maps/EltheCity/scripts.pory"
	waitbuttonpress
# 730 "data/maps/EltheCity/scripts.pory"
	closemessage
# 731 "data/maps/EltheCity/scripts.pory"
	givemon SPECIES_NIDOKING, 56, ITEM_QUICK_CLAW, ITEM_ULTRA_BALL, NATURE_LONELY, 2, MON_MALE, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_POISON_JAB, MOVE_EARTHQUAKE, MOVE_MEGAHORN, MOVE_SLUDGE_BOMB, FALSE, FALSE, TYPE_GROUND
# 732 "data/maps/EltheCity/scripts.pory"
	setpartymemberinfo 3
# 733 "data/maps/EltheCity/scripts.pory"
	setvar VAR_MAIN_GAME_STATE, 15
EltheCity_BradleyScript_4:
# 736 "data/maps/EltheCity/scripts.pory"
	release
	return

EltheCity_BradleyScript_2:
# 616 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_EventScript_Python_Text_1, PORTRAIT_NIDOKING_GRIN, PORTRAIT_DEFAULT_LEFT
# 617 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_BradleyScript_Text_0
# 618 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_EventScript_Python_Text_5, PORTRAIT_AMELIA_NEUTRAL
# 619 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_BradleyScript_Text_1
# 620 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_EventScript_Python_Text_1, PORTRAIT_NIDOKING_NEUTRAL, PORTRAIT_DEFAULT_LEFT
# 621 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_BradleyScript_Text_2
# 622 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_EventScript_Python_Text_5, PORTRAIT_AMELIA_STRAINED
# 623 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_BradleyScript_Text_3
# 625 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_EventScript_Python_Text_1, PORTRAIT_NIDOKING_NEUTRAL, PORTRAIT_DEFAULT_LEFT
# 626 "data/maps/EltheCity/scripts.pory"
	playmoncry SPECIES_NIDOKING, CRY_MODE_NORMAL
# 627 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_BradleyScript_Text_4
# 628 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_EventScript_Python_Text_5, PORTRAIT_AMELIA_NEUTRAL
# 629 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_BradleyScript_Text_5
# 630 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_EventScript_Python_Text_1, PORTRAIT_NIDOKING_GRIN, PORTRAIT_DEFAULT_LEFT
# 631 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_BradleyScript_Text_6
# 632 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_EventScript_Python_Text_5, PORTRAIT_AMELIA_SERIOUSLY
# 633 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_BradleyScript_Text_7
# 634 "data/maps/EltheCity/scripts.pory"
	setflag FLAG_SKIP_BRADLEY_CONVO
	goto EltheCity_BradleyScript_1

EltheCity_BradleyScript_5:
# 640 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_EventScript_Python_Text_1, PORTRAIT_NIDOKING_GRIN, PORTRAIT_DEFAULT_LEFT
# 641 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_BradleyScript_Text_9
	goto EltheCity_BradleyScript_4

EltheCity_BradleyScript_10:
# 655 "data/maps/EltheCity/scripts.pory"
	call EltheCity_WalkToBradleyBattle_North
	goto EltheCity_BradleyScript_8

EltheCity_BradleyScript_11:
# 657 "data/maps/EltheCity/scripts.pory"
	call EltheCity_WalkToBradleyBattle_West
	goto EltheCity_BradleyScript_8

EltheCity_BradleyScript_12:
# 659 "data/maps/EltheCity/scripts.pory"
	call EltheCity_WalkToBradleyBattle_East
	goto EltheCity_BradleyScript_8

EltheCity_BradleyScript_13:
# 661 "data/maps/EltheCity/scripts.pory"
	call EltheCity_WalkToBradleyBattle_South
	goto EltheCity_BradleyScript_8

EltheCity_BradleyScript_14:
# 688 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_EventScript_Python_Text_5, PORTRAIT_AMELIA_NEUTRAL
# 689 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_BradleyScript_Text_18
# 690 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_EventScript_Python_Text_1, PORTRAIT_NIDOKING_NEUTRAL, PORTRAIT_DEFAULT_LEFT
# 691 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_BradleyScript_Text_19
# 694 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_EventScript_Python_Text_5, PORTRAIT_AMELIA_WINK
# 695 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_BradleyScript_Text_20, MSGBOX_AUTOCLOSE
# 696 "data/maps/EltheCity/scripts.pory"
	delay 32
# 697 "data/maps/EltheCity/scripts.pory"
	applymovement 4, EnterPokeballMovement
# 698 "data/maps/EltheCity/scripts.pory"
	waitmovement 0
# 699 "data/maps/EltheCity/scripts.pory"
	removeobject 4
# 700 "data/maps/EltheCity/scripts.pory"
	delay 16
# 701 "data/maps/EltheCity/scripts.pory"
	removeitem ITEM_ULTRA_BALL, 1
# 702 "data/maps/EltheCity/scripts.pory"
	playfanfare MUS_EVOLVED
# 703 "data/maps/EltheCity/scripts.pory"
	message EltheCity_BradleyScript_Text_21
# 704 "data/maps/EltheCity/scripts.pory"
	waitmessage
# 705 "data/maps/EltheCity/scripts.pory"
	waitfanfare
# 706 "data/maps/EltheCity/scripts.pory"
	waitbuttonpress
# 707 "data/maps/EltheCity/scripts.pory"
	closemessage
# 708 "data/maps/EltheCity/scripts.pory"
	givemon SPECIES_NIDOKING, 56, ITEM_QUICK_CLAW, ITEM_ULTRA_BALL, NATURE_LONELY, 2, MON_MALE, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_POISON_JAB, MOVE_EARTHQUAKE, MOVE_MEGAHORN, MOVE_SLUDGE_BOMB, FALSE, FALSE, TYPE_GROUND
# 709 "data/maps/EltheCity/scripts.pory"
	setpartymemberinfo 3
# 710 "data/maps/EltheCity/scripts.pory"
	setflag FLAG_CAN_FIND_PYTHON
# 711 "data/maps/EltheCity/scripts.pory"
	setvar VAR_MAIN_GAME_STATE, 15
	goto EltheCity_BradleyScript_4


# 739 "data/maps/EltheCity/scripts.pory"
EltheCity_Movement_BradleyApproach:
# 741 "data/maps/EltheCity/scripts.pory"
	walk_slow_down
# 741 "data/maps/EltheCity/scripts.pory"
	walk_slow_down
# 741 "data/maps/EltheCity/scripts.pory"
	walk_slow_down
	step_end

EltheCity_WalkToBradleyBattle_North::
# 746 "data/maps/EltheCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, EltheCity_Movement_BradleyBattleNorth
# 747 "data/maps/EltheCity/scripts.pory"
	waitmovement 0
# 748 "data/maps/EltheCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, EltheCity_Movement_BradleyBattleWest
# 749 "data/maps/EltheCity/scripts.pory"
	waitmovement 0
	return


EltheCity_WalkToBradleyBattle_South::
# 755 "data/maps/EltheCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, EltheCity_Movement_BradleyBattleSouth
# 756 "data/maps/EltheCity/scripts.pory"
	waitmovement 0
	return


EltheCity_WalkToBradleyBattle_East::
# 762 "data/maps/EltheCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, EltheCity_Movement_BradleyBattleEast
# 763 "data/maps/EltheCity/scripts.pory"
	waitmovement 0
	return


EltheCity_WalkToBradleyBattle_West::
# 769 "data/maps/EltheCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, EltheCity_Movement_BradleyBattleWest
# 770 "data/maps/EltheCity/scripts.pory"
	waitmovement 0
	return


# 774 "data/maps/EltheCity/scripts.pory"
EltheCity_Movement_BradleyBattleNorth:
# 776 "data/maps/EltheCity/scripts.pory"
	walk_left
# 777 "data/maps/EltheCity/scripts.pory"
	walk_down
	step_end

# 780 "data/maps/EltheCity/scripts.pory"
EltheCity_Movement_BradleyBattleWest:
# 782 "data/maps/EltheCity/scripts.pory"
	walk_down
# 782 "data/maps/EltheCity/scripts.pory"
	walk_down
# 782 "data/maps/EltheCity/scripts.pory"
	walk_down
# 782 "data/maps/EltheCity/scripts.pory"
	walk_down
# 783 "data/maps/EltheCity/scripts.pory"
	walk_right
# 784 "data/maps/EltheCity/scripts.pory"
	face_up
# 785 "data/maps/EltheCity/scripts.pory"
	delay_16
	step_end

# 788 "data/maps/EltheCity/scripts.pory"
EltheCity_Movement_BradleyBattleEast:
# 790 "data/maps/EltheCity/scripts.pory"
	walk_down
# 790 "data/maps/EltheCity/scripts.pory"
	walk_down
# 790 "data/maps/EltheCity/scripts.pory"
	walk_down
# 790 "data/maps/EltheCity/scripts.pory"
	walk_down
# 791 "data/maps/EltheCity/scripts.pory"
	walk_left
# 792 "data/maps/EltheCity/scripts.pory"
	face_up
# 793 "data/maps/EltheCity/scripts.pory"
	delay_16
	step_end

# 796 "data/maps/EltheCity/scripts.pory"
EltheCity_Movement_BradleyBattleSouth:
# 798 "data/maps/EltheCity/scripts.pory"
	walk_down
# 798 "data/maps/EltheCity/scripts.pory"
	walk_down
# 798 "data/maps/EltheCity/scripts.pory"
	walk_down
# 799 "data/maps/EltheCity/scripts.pory"
	face_up
# 800 "data/maps/EltheCity/scripts.pory"
	delay_16
	step_end

EltheCity_EventScript_FatGuy::
# 805 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_EventScript_FatGuy_Text_0
# 806 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_EventScript_FatGuy_Text_1, MSGBOX_NPC
	return


EltheCity_Sign_TrashBarrel::
# 811 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_Sign_TrashBarrel_Text_0, MSGBOX_SIGN
	return


EltheCity_Sign_RainBarrel::
# 816 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_Sign_RainBarrel_Text_0, MSGBOX_SIGN
	return


EltheCity_Sign_NestBarrel::
# 821 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_Sign_NestBarrel_Text_0, MSGBOX_SIGN
	return


EltheCity_Trigger_MusicStump1::
# 826 "data/maps/EltheCity/scripts.pory"
	playse SE_NOTE_C
# 827 "data/maps/EltheCity/scripts.pory"
	turnobject 9, DIR_WEST
# 830 "data/maps/EltheCity/scripts.pory"
	compare VAR_TEMP_2, 7
	goto_if_eq EltheCity_Trigger_MusicStump1_4
EltheCity_Trigger_MusicStump1_3:
# 854 "data/maps/EltheCity/scripts.pory"
	setvar VAR_TEMP_2, 0
# 855 "data/maps/EltheCity/scripts.pory"
	setvar VAR_TEMP_1, 1
EltheCity_Trigger_MusicStump1_1:
# 858 "data/maps/EltheCity/scripts.pory"
	release
	return

EltheCity_Trigger_MusicStump1_2:
# 832 "data/maps/EltheCity/scripts.pory"
	delay 60
# 833 "data/maps/EltheCity/scripts.pory"
	applymovement 9, EltheCity_Movement_KeesightHops
# 834 "data/maps/EltheCity/scripts.pory"
	playse SE_BIKE_HOP
# 835 "data/maps/EltheCity/scripts.pory"
	delay 16
# 836 "data/maps/EltheCity/scripts.pory"
	playse SE_BIKE_HOP
# 837 "data/maps/EltheCity/scripts.pory"
	delay 32
# 838 "data/maps/EltheCity/scripts.pory"
	playmoncry SPECIES_WOOBAT, CRY_MODE_NORMAL
# 839 "data/maps/EltheCity/scripts.pory"
	waitmoncry
# 840 "data/maps/EltheCity/scripts.pory"
	delay 30
# 841 "data/maps/EltheCity/scripts.pory"
	applymovement 9, Common_Movement_FaceUp
# 842 "data/maps/EltheCity/scripts.pory"
	waitmovement 0
# 843 "data/maps/EltheCity/scripts.pory"
	delay 16
# 844 "data/maps/EltheCity/scripts.pory"
	playse SE_M_SUPERSONIC
# 845 "data/maps/EltheCity/scripts.pory"
	applymovement 11, EltheCity_Movement_MoveUmbrashard
# 846 "data/maps/EltheCity/scripts.pory"
	waitmovement 0
# 847 "data/maps/EltheCity/scripts.pory"
	applymovement 9, Common_Movement_FaceDown
# 848 "data/maps/EltheCity/scripts.pory"
	waitmovement 0
# 849 "data/maps/EltheCity/scripts.pory"
	setobjectxyperm 11, 11, 21
# 850 "data/maps/EltheCity/scripts.pory"
	setflag FLAG_SCALE_DESCENDING_DONE
	goto EltheCity_Trigger_MusicStump1_1

EltheCity_Trigger_MusicStump1_4:
# 830 "data/maps/EltheCity/scripts.pory"
	goto_if_unset FLAG_SCALE_DESCENDING_DONE, EltheCity_Trigger_MusicStump1_2
	goto EltheCity_Trigger_MusicStump1_3


EltheCity_Trigger_MusicStump2::
# 863 "data/maps/EltheCity/scripts.pory"
	playse SE_NOTE_D
# 864 "data/maps/EltheCity/scripts.pory"
	turnobject 9, DIR_WEST
# 867 "data/maps/EltheCity/scripts.pory"
	compare VAR_TEMP_1, 1
	goto_if_eq EltheCity_Trigger_MusicStump2_2
# 873 "data/maps/EltheCity/scripts.pory"
	setvar VAR_TEMP_1, 0
EltheCity_Trigger_MusicStump2_1:
# 877 "data/maps/EltheCity/scripts.pory"
	compare VAR_TEMP_2, 6
	goto_if_eq EltheCity_Trigger_MusicStump2_6
# 883 "data/maps/EltheCity/scripts.pory"
	setvar VAR_TEMP_2, 0
EltheCity_Trigger_MusicStump2_5:
# 886 "data/maps/EltheCity/scripts.pory"
	release
	return

EltheCity_Trigger_MusicStump2_2:
# 869 "data/maps/EltheCity/scripts.pory"
	addvar VAR_TEMP_1, 1
	goto EltheCity_Trigger_MusicStump2_1

EltheCity_Trigger_MusicStump2_6:
# 879 "data/maps/EltheCity/scripts.pory"
	addvar VAR_TEMP_2, 1
	goto EltheCity_Trigger_MusicStump2_5


EltheCity_Trigger_MusicStump3::
# 891 "data/maps/EltheCity/scripts.pory"
	playse SE_NOTE_E
# 892 "data/maps/EltheCity/scripts.pory"
	turnobject 9, DIR_WEST
# 895 "data/maps/EltheCity/scripts.pory"
	compare VAR_TEMP_1, 2
	goto_if_eq EltheCity_Trigger_MusicStump3_2
# 901 "data/maps/EltheCity/scripts.pory"
	setvar VAR_TEMP_1, 0
EltheCity_Trigger_MusicStump3_1:
# 905 "data/maps/EltheCity/scripts.pory"
	compare VAR_TEMP_2, 5
	goto_if_eq EltheCity_Trigger_MusicStump3_6
# 911 "data/maps/EltheCity/scripts.pory"
	setvar VAR_TEMP_2, 0
EltheCity_Trigger_MusicStump3_5:
# 914 "data/maps/EltheCity/scripts.pory"
	release
	return

EltheCity_Trigger_MusicStump3_2:
# 897 "data/maps/EltheCity/scripts.pory"
	addvar VAR_TEMP_1, 1
	goto EltheCity_Trigger_MusicStump3_1

EltheCity_Trigger_MusicStump3_6:
# 907 "data/maps/EltheCity/scripts.pory"
	addvar VAR_TEMP_2, 1
	goto EltheCity_Trigger_MusicStump3_5


EltheCity_Trigger_MusicStump4::
# 919 "data/maps/EltheCity/scripts.pory"
	playse SE_NOTE_F
# 920 "data/maps/EltheCity/scripts.pory"
	turnobject 9, DIR_SOUTH
# 923 "data/maps/EltheCity/scripts.pory"
	compare VAR_TEMP_1, 3
	goto_if_eq EltheCity_Trigger_MusicStump4_2
# 929 "data/maps/EltheCity/scripts.pory"
	setvar VAR_TEMP_1, 0
EltheCity_Trigger_MusicStump4_1:
# 933 "data/maps/EltheCity/scripts.pory"
	compare VAR_TEMP_2, 4
	goto_if_eq EltheCity_Trigger_MusicStump4_6
# 939 "data/maps/EltheCity/scripts.pory"
	setvar VAR_TEMP_2, 0
EltheCity_Trigger_MusicStump4_5:
# 942 "data/maps/EltheCity/scripts.pory"
	release
	return

EltheCity_Trigger_MusicStump4_2:
# 925 "data/maps/EltheCity/scripts.pory"
	addvar VAR_TEMP_1, 1
	goto EltheCity_Trigger_MusicStump4_1

EltheCity_Trigger_MusicStump4_6:
# 935 "data/maps/EltheCity/scripts.pory"
	addvar VAR_TEMP_2, 1
	goto EltheCity_Trigger_MusicStump4_5


EltheCity_Trigger_MusicStump5::
# 947 "data/maps/EltheCity/scripts.pory"
	playse SE_NOTE_G
# 948 "data/maps/EltheCity/scripts.pory"
	turnobject 9, DIR_SOUTH
# 951 "data/maps/EltheCity/scripts.pory"
	compare VAR_TEMP_1, 4
	goto_if_eq EltheCity_Trigger_MusicStump5_2
# 957 "data/maps/EltheCity/scripts.pory"
	setvar VAR_TEMP_1, 0
EltheCity_Trigger_MusicStump5_1:
# 961 "data/maps/EltheCity/scripts.pory"
	compare VAR_TEMP_2, 3
	goto_if_eq EltheCity_Trigger_MusicStump5_6
# 967 "data/maps/EltheCity/scripts.pory"
	setvar VAR_TEMP_2, 0
EltheCity_Trigger_MusicStump5_5:
# 970 "data/maps/EltheCity/scripts.pory"
	release
	return

EltheCity_Trigger_MusicStump5_2:
# 953 "data/maps/EltheCity/scripts.pory"
	addvar VAR_TEMP_1, 1
	goto EltheCity_Trigger_MusicStump5_1

EltheCity_Trigger_MusicStump5_6:
# 963 "data/maps/EltheCity/scripts.pory"
	addvar VAR_TEMP_2, 1
	goto EltheCity_Trigger_MusicStump5_5


EltheCity_Trigger_MusicStump6::
# 975 "data/maps/EltheCity/scripts.pory"
	playse SE_NOTE_A
# 976 "data/maps/EltheCity/scripts.pory"
	turnobject 9, DIR_EAST
# 979 "data/maps/EltheCity/scripts.pory"
	compare VAR_TEMP_1, 5
	goto_if_eq EltheCity_Trigger_MusicStump6_2
# 985 "data/maps/EltheCity/scripts.pory"
	setvar VAR_TEMP_1, 0
EltheCity_Trigger_MusicStump6_1:
# 989 "data/maps/EltheCity/scripts.pory"
	compare VAR_TEMP_2, 2
	goto_if_eq EltheCity_Trigger_MusicStump6_6
# 995 "data/maps/EltheCity/scripts.pory"
	setvar VAR_TEMP_2, 0
EltheCity_Trigger_MusicStump6_5:
# 998 "data/maps/EltheCity/scripts.pory"
	release
	return

EltheCity_Trigger_MusicStump6_2:
# 981 "data/maps/EltheCity/scripts.pory"
	addvar VAR_TEMP_1, 1
	goto EltheCity_Trigger_MusicStump6_1

EltheCity_Trigger_MusicStump6_6:
# 991 "data/maps/EltheCity/scripts.pory"
	addvar VAR_TEMP_2, 1
	goto EltheCity_Trigger_MusicStump6_5


EltheCity_Trigger_MusicStump7::
# 1003 "data/maps/EltheCity/scripts.pory"
	playse SE_NOTE_B
# 1004 "data/maps/EltheCity/scripts.pory"
	turnobject 9, DIR_EAST
# 1007 "data/maps/EltheCity/scripts.pory"
	compare VAR_TEMP_1, 6
	goto_if_eq EltheCity_Trigger_MusicStump7_2
# 1013 "data/maps/EltheCity/scripts.pory"
	setvar VAR_TEMP_1, 0
EltheCity_Trigger_MusicStump7_1:
# 1017 "data/maps/EltheCity/scripts.pory"
	compare VAR_TEMP_2, 1
	goto_if_eq EltheCity_Trigger_MusicStump7_6
# 1023 "data/maps/EltheCity/scripts.pory"
	setvar VAR_TEMP_2, 0
EltheCity_Trigger_MusicStump7_5:
# 1026 "data/maps/EltheCity/scripts.pory"
	release
	return

EltheCity_Trigger_MusicStump7_2:
# 1009 "data/maps/EltheCity/scripts.pory"
	addvar VAR_TEMP_1, 1
	goto EltheCity_Trigger_MusicStump7_1

EltheCity_Trigger_MusicStump7_6:
# 1019 "data/maps/EltheCity/scripts.pory"
	addvar VAR_TEMP_2, 1
	goto EltheCity_Trigger_MusicStump7_5


EltheCity_Trigger_MusicStump8::
# 1031 "data/maps/EltheCity/scripts.pory"
	playse SE_NOTE_C_HIGH
# 1032 "data/maps/EltheCity/scripts.pory"
	turnobject 9, DIR_EAST
# 1036 "data/maps/EltheCity/scripts.pory"
	compare VAR_TEMP_1, 7
	goto_if_eq EltheCity_Trigger_MusicStump8_4
EltheCity_Trigger_MusicStump8_3:
# 1060 "data/maps/EltheCity/scripts.pory"
	setvar VAR_TEMP_1, 0
# 1061 "data/maps/EltheCity/scripts.pory"
	setvar VAR_TEMP_2, 1
EltheCity_Trigger_MusicStump8_1:
# 1064 "data/maps/EltheCity/scripts.pory"
	release
	return

EltheCity_Trigger_MusicStump8_2:
# 1038 "data/maps/EltheCity/scripts.pory"
	delay 60
# 1039 "data/maps/EltheCity/scripts.pory"
	applymovement 9, EltheCity_Movement_KeesightHops
# 1040 "data/maps/EltheCity/scripts.pory"
	playse SE_BIKE_HOP
# 1041 "data/maps/EltheCity/scripts.pory"
	delay 16
# 1042 "data/maps/EltheCity/scripts.pory"
	playse SE_BIKE_HOP
# 1043 "data/maps/EltheCity/scripts.pory"
	delay 32
# 1044 "data/maps/EltheCity/scripts.pory"
	playmoncry SPECIES_WOOBAT, CRY_MODE_NORMAL
# 1045 "data/maps/EltheCity/scripts.pory"
	waitmoncry
# 1046 "data/maps/EltheCity/scripts.pory"
	delay 30
# 1047 "data/maps/EltheCity/scripts.pory"
	applymovement 9, Common_Movement_FaceUp
# 1048 "data/maps/EltheCity/scripts.pory"
	waitmovement 0
# 1049 "data/maps/EltheCity/scripts.pory"
	delay 16
# 1050 "data/maps/EltheCity/scripts.pory"
	playse SE_M_SUPERSONIC
# 1051 "data/maps/EltheCity/scripts.pory"
	applymovement 10, EltheCity_Movement_MoveEspershard
# 1052 "data/maps/EltheCity/scripts.pory"
	waitmovement 0
# 1053 "data/maps/EltheCity/scripts.pory"
	applymovement 9, Common_Movement_FaceDown
# 1054 "data/maps/EltheCity/scripts.pory"
	waitmovement 0
# 1055 "data/maps/EltheCity/scripts.pory"
	setobjectxyperm 10, 13, 21
# 1056 "data/maps/EltheCity/scripts.pory"
	setflag FLAG_SCALE_ASCENDING_DONE
	goto EltheCity_Trigger_MusicStump8_1

EltheCity_Trigger_MusicStump8_4:
# 1036 "data/maps/EltheCity/scripts.pory"
	goto_if_unset FLAG_SCALE_ASCENDING_DONE, EltheCity_Trigger_MusicStump8_2
	goto EltheCity_Trigger_MusicStump8_3


# 1067 "data/maps/EltheCity/scripts.pory"
EltheCity_Movement_KeesightHops:
# 1069 "data/maps/EltheCity/scripts.pory"
	jump_in_place_down
# 1069 "data/maps/EltheCity/scripts.pory"
	jump_in_place_down
	step_end

# 1072 "data/maps/EltheCity/scripts.pory"
EltheCity_Movement_MoveUmbrashard:
# 1074 "data/maps/EltheCity/scripts.pory"
	levitate
# 1075 "data/maps/EltheCity/scripts.pory"
	delay_16
# 1076 "data/maps/EltheCity/scripts.pory"
	walk_up
# 1076 "data/maps/EltheCity/scripts.pory"
	walk_up
# 1076 "data/maps/EltheCity/scripts.pory"
	walk_up
# 1077 "data/maps/EltheCity/scripts.pory"
	walk_right
# 1077 "data/maps/EltheCity/scripts.pory"
	walk_right
# 1077 "data/maps/EltheCity/scripts.pory"
	walk_right
# 1077 "data/maps/EltheCity/scripts.pory"
	walk_right
# 1077 "data/maps/EltheCity/scripts.pory"
	walk_right
# 1077 "data/maps/EltheCity/scripts.pory"
	walk_right
# 1077 "data/maps/EltheCity/scripts.pory"
	walk_right
# 1077 "data/maps/EltheCity/scripts.pory"
	walk_right
# 1078 "data/maps/EltheCity/scripts.pory"
	walk_up
# 1079 "data/maps/EltheCity/scripts.pory"
	delay_16
# 1080 "data/maps/EltheCity/scripts.pory"
	stop_levitate
	step_end

# 1083 "data/maps/EltheCity/scripts.pory"
EltheCity_Movement_MoveEspershard:
# 1085 "data/maps/EltheCity/scripts.pory"
	levitate
# 1086 "data/maps/EltheCity/scripts.pory"
	delay_16
# 1087 "data/maps/EltheCity/scripts.pory"
	walk_left
# 1087 "data/maps/EltheCity/scripts.pory"
	walk_left
# 1087 "data/maps/EltheCity/scripts.pory"
	walk_left
# 1087 "data/maps/EltheCity/scripts.pory"
	walk_left
# 1087 "data/maps/EltheCity/scripts.pory"
	walk_left
# 1087 "data/maps/EltheCity/scripts.pory"
	walk_left
# 1087 "data/maps/EltheCity/scripts.pory"
	walk_left
# 1087 "data/maps/EltheCity/scripts.pory"
	walk_left
# 1088 "data/maps/EltheCity/scripts.pory"
	walk_up
# 1089 "data/maps/EltheCity/scripts.pory"
	delay_16
# 1090 "data/maps/EltheCity/scripts.pory"
	stop_levitate
	step_end

# 1093 "data/maps/EltheCity/scripts.pory"
EltheCity_Movement_JumpOnBenchLeft:
# 1095 "data/maps/EltheCity/scripts.pory"
	lock_anim
# 1096 "data/maps/EltheCity/scripts.pory"
	jump_in_place_left
	step_end

# 1099 "data/maps/EltheCity/scripts.pory"
EltheCity_Movement_GetOffBenchLeft:
# 1101 "data/maps/EltheCity/scripts.pory"
	unlock_anim
# 1102 "data/maps/EltheCity/scripts.pory"
	walk_slow_left
	step_end

# 1105 "data/maps/EltheCity/scripts.pory"
EltheCity_Movement_JumpOnBenchRight:
# 1107 "data/maps/EltheCity/scripts.pory"
	lock_anim
# 1108 "data/maps/EltheCity/scripts.pory"
	jump_in_place_right
	step_end

# 1111 "data/maps/EltheCity/scripts.pory"
EltheCity_Movement_GetOffBenchRight:
# 1113 "data/maps/EltheCity/scripts.pory"
	unlock_anim
# 1114 "data/maps/EltheCity/scripts.pory"
	walk_slow_right
	step_end

# 1117 "data/maps/EltheCity/scripts.pory"
EltheCity_Movement_MoveDownBench:
# 1119 "data/maps/EltheCity/scripts.pory"
	walk_slow_down
	step_end

# 1122 "data/maps/EltheCity/scripts.pory"
EltheCity_Movement_MoveUpBench:
# 1124 "data/maps/EltheCity/scripts.pory"
	walk_slow_up
	step_end

EltheCity_Sign_BlockedHouse::
# 1129 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_Sign_BlockedHouse_Text_0, MSGBOX_SIGN
	return


EltheCity_Trigger_FinalBoss::
# 1134 "data/maps/EltheCity/scripts.pory"
	fadescreen FADE_TO_BLACK
# 1135 "data/maps/EltheCity/scripts.pory"
	delay 16
# 1136 "data/maps/EltheCity/scripts.pory"
	setflag FLAG_TEMP_HIDE_FOLLOWER
# 1137 "data/maps/EltheCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Movement_UnsafeUp
# 1138 "data/maps/EltheCity/scripts.pory"
	addobject 27
# 1139 "data/maps/EltheCity/scripts.pory"
	addobject 26
# 1140 "data/maps/EltheCity/scripts.pory"
	addobject 24
# 1141 "data/maps/EltheCity/scripts.pory"
	addobject 28
# 1142 "data/maps/EltheCity/scripts.pory"
	addobject 25
# 1143 "data/maps/EltheCity/scripts.pory"
	removeobject OBJ_EVENT_ID_FOLLOWER
# 1144 "data/maps/EltheCity/scripts.pory"
	removeobject 9
# 1145 "data/maps/EltheCity/scripts.pory"
	removeobject 16
# 1146 "data/maps/EltheCity/scripts.pory"
	delay 32
# 1147 "data/maps/EltheCity/scripts.pory"
	setobjectxy OBJ_EVENT_ID_PLAYER, 18, 15
# 1148 "data/maps/EltheCity/scripts.pory"
	setvar VAR_0x8000, 18
# 1149 "data/maps/EltheCity/scripts.pory"
	setvar VAR_0x8001, 15
# 1150 "data/maps/EltheCity/scripts.pory"
	special TeleportCamera
# 1151 "data/maps/EltheCity/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 1152 "data/maps/EltheCity/scripts.pory"
	delay 16
# 1153 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_EventScript_Python_Text_5, PORTRAIT_AMELIA_NEUTRAL
# 1154 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_Trigger_FinalBoss_Text_0
# 1155 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_Trigger_FinalBoss_Text_1, PORTRAIT_DEMIVEE_NEUTRAL
# 1156 "data/maps/EltheCity/scripts.pory"
	message EltheCity_Trigger_FinalBoss_Text_2
# 1157 "data/maps/EltheCity/scripts.pory"
	playse SE_M_HEADBUTT
# 1158 "data/maps/EltheCity/scripts.pory"
	applymovement 26, Ending_Movement_DemiveeJump
# 1159 "data/maps/EltheCity/scripts.pory"
	delay 8
# 1160 "data/maps/EltheCity/scripts.pory"
	playse SE_M_VITAL_THROW2
# 1161 "data/maps/EltheCity/scripts.pory"
	waitmovement 0
# 1162 "data/maps/EltheCity/scripts.pory"
	waitmessage
# 1163 "data/maps/EltheCity/scripts.pory"
	waitbuttonpress
# 1164 "data/maps/EltheCity/scripts.pory"
	closemessage
# 1165 "data/maps/EltheCity/scripts.pory"
	delay 32
# 1166 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_Trigger_FinalBoss_Text_3
# 1167 "data/maps/EltheCity/scripts.pory"
	message EltheCity_Trigger_FinalBoss_Text_4
# 1168 "data/maps/EltheCity/scripts.pory"
	delay 16
# 1169 "data/maps/EltheCity/scripts.pory"
	playse SE_PIN
# 1170 "data/maps/EltheCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 1171 "data/maps/EltheCity/scripts.pory"
	applymovement 27, Common_Movement_ExclamationMark
# 1172 "data/maps/EltheCity/scripts.pory"
	applymovement 24, Common_Movement_ExclamationMark
# 1173 "data/maps/EltheCity/scripts.pory"
	applymovement 28, Common_Movement_ExclamationMark
# 1174 "data/maps/EltheCity/scripts.pory"
	applymovement 25, Common_Movement_ExclamationMark
# 1175 "data/maps/EltheCity/scripts.pory"
	waitmessage
# 1176 "data/maps/EltheCity/scripts.pory"
	waitbuttonpress
# 1177 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_Trigger_FinalBoss_Text_1, PORTRAIT_DEMIVEE_NEUTRAL
# 1178 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_Trigger_FinalBoss_Text_5
# 1179 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_Trigger_FinalBoss_Text_3
# 1180 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_Trigger_FinalBoss_Text_6
# 1182 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_EventScript_Python_Text_3, PORTRAIT_ZOROARK_LAUGH
# 1183 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_Trigger_FinalBoss_Text_7
# 1184 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_Trigger_FinalBoss_Text_8, PORTRAIT_KINGLER_NEUTRAL
# 1185 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_Trigger_FinalBoss_Text_9
# 1186 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_Trigger_FinalBoss_Text_10, PORTRAIT_FLYGON_ANNOYED
# 1187 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_Trigger_FinalBoss_Text_11
# 1188 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_EventScript_Python_Text_1, PORTRAIT_NIDOKING_NEUTRAL, PORTRAIT_DEFAULT_X, PORTRAIT_DEFAULT_Y, TRUE
# 1189 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_Trigger_FinalBoss_Text_12, MSGBOX_AUTOCLOSE
# 1190 "data/maps/EltheCity/scripts.pory"
	delay 32
# 1191 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_EventScript_Python_Text_5, PORTRAIT_AMELIA_SMUG
# 1192 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_Trigger_FinalBoss_Text_13, MSGBOX_AUTOCLOSE
# 1193 "data/maps/EltheCity/scripts.pory"
	special Script_FadeOutMapMusic
# 1194 "data/maps/EltheCity/scripts.pory"
	waitstate
# 1195 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_Trigger_FinalBoss_Text_14
# 1196 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_Trigger_FinalBoss_Text_15, MSGBOX_AUTOCLOSE
# 1197 "data/maps/EltheCity/scripts.pory"
	setvar VAR_RESULT, 1
# 1198 "data/maps/EltheCity/scripts.pory"
	playse SE_M_DETECT
# 1199 "data/maps/EltheCity/scripts.pory"
	dofieldeffectsparkle 17, 13, 0
# 1200 "data/maps/EltheCity/scripts.pory"
	waitfieldeffect FLDEFF_SPARKLE
# 1201 "data/maps/EltheCity/scripts.pory"
	setvar VAR_RESULT, 1
# 1202 "data/maps/EltheCity/scripts.pory"
	playse SE_ORB
# 1203 "data/maps/EltheCity/scripts.pory"
	special DoOrbEffect
# 1204 "data/maps/EltheCity/scripts.pory"
	delay 150
# 1205 "data/maps/EltheCity/scripts.pory"
	delay 60
# 1206 "data/maps/EltheCity/scripts.pory"
	special FadeOutOrbEffect
# 1207 "data/maps/EltheCity/scripts.pory"
	waitstate
# 1208 "data/maps/EltheCity/scripts.pory"
	setwilddoubleflag
# 1209 "data/maps/EltheCity/scripts.pory"
	setflag FLAG_WILD_AI_ON
# 1210 "data/maps/EltheCity/scripts.pory"
	createmon 1, 0, SPECIES_KYOGRE, 65, ITEM_NONE, 0, NATURE_CALM, 0, MON_GENDERLESS, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_WATER_PULSE, MOVE_ICY_WIND, MOVE_AQUA_RING, MOVE_PSYBEAM, FALSE, 0, TYPE_WATER
# 1211 "data/maps/EltheCity/scripts.pory"
	dowildbattle
# 1212 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_Trigger_FinalBoss_Text_14
# 1213 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_Trigger_FinalBoss_Text_16
# 1216 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_EventScript_Python_Text_5, PORTRAIT_AMELIA_SMUG
# 1217 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_Trigger_FinalBoss_Text_17
# 1219 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_Trigger_FinalBoss_Text_14
# 1220 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_Trigger_FinalBoss_Text_18
# 1221 "data/maps/EltheCity/scripts.pory"
	closemessage
# 1222 "data/maps/EltheCity/scripts.pory"
	setweather WEATHER_NONE
# 1223 "data/maps/EltheCity/scripts.pory"
	doweather
# 1224 "data/maps/EltheCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
# 1225 "data/maps/EltheCity/scripts.pory"
	waitmovement 0
# 1226 "data/maps/EltheCity/scripts.pory"
	applymovement 26, Common_Movement_FaceDown
# 1227 "data/maps/EltheCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
# 1228 "data/maps/EltheCity/scripts.pory"
	waitmovement 0
# 1229 "data/maps/EltheCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 1230 "data/maps/EltheCity/scripts.pory"
	applymovement 24, Common_Movement_FaceDown
# 1231 "data/maps/EltheCity/scripts.pory"
	delay 4
# 1232 "data/maps/EltheCity/scripts.pory"
	applymovement 25, Common_Movement_FaceRight
# 1233 "data/maps/EltheCity/scripts.pory"
	delay 8
# 1234 "data/maps/EltheCity/scripts.pory"
	applymovement 27, Common_Movement_FaceLeft
# 1235 "data/maps/EltheCity/scripts.pory"
	special WaitWeather
# 1236 "data/maps/EltheCity/scripts.pory"
	waitstate
# 1237 "data/maps/EltheCity/scripts.pory"
	delay 64
# 1238 "data/maps/EltheCity/scripts.pory"
	special SpawnCameraObject
# 1239 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_EventScript_Python_Text_5, PORTRAIT_AMELIA_NEUTRAL
# 1240 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_Trigger_FinalBoss_Text_19, MSGBOX_AUTOCLOSE
# 1241 "data/maps/EltheCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, AmeliaStartLeaving
# 1242 "data/maps/EltheCity/scripts.pory"
	delay 16
# 1243 "data/maps/EltheCity/scripts.pory"
	applymovement 26, EltheCity_Movement_DemiveeChaseAme
# 1244 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_Trigger_FinalBoss_Text_1, PORTRAIT_DEMIVEE_HUH
# 1245 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_Trigger_FinalBoss_Text_20
# 1246 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_EventScript_Python_Text_5, PORTRAIT_AMELIA_WINK
# 1247 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_Trigger_FinalBoss_Text_21, MSGBOX_AUTOCLOSE
# 1248 "data/maps/EltheCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Ending_AmeLeave
# 1249 "data/maps/EltheCity/scripts.pory"
	applymovement 27, Ending_BradleyLeave
# 1250 "data/maps/EltheCity/scripts.pory"
	applymovement 24, Ending_MarcelLeave
# 1251 "data/maps/EltheCity/scripts.pory"
	applymovement 28, Ending_PythonLeave
# 1252 "data/maps/EltheCity/scripts.pory"
	applymovement 25, Ending_ViceLeave
# 1253 "data/maps/EltheCity/scripts.pory"
	applymovement 26, Ending_DemiveeLeave
# 1254 "data/maps/EltheCity/scripts.pory"
	waitmovement 25
# 1255 "data/maps/EltheCity/scripts.pory"
	fadescreenspeed FADE_TO_BLACK, 8
# 1256 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_Trigger_FinalBoss_Text_22, MSGBOX_AUTOCLOSE
# 1266 "data/maps/EltheCity/scripts.pory"
	special Script_FadeOutMapMusic
# 1267 "data/maps/EltheCity/scripts.pory"
	waitstate
# 1268 "data/maps/EltheCity/scripts.pory"
	delay 60
# 1269 "data/maps/EltheCity/scripts.pory"
	callnative StartCredits
	return


# 1272 "data/maps/EltheCity/scripts.pory"
Ending_Movement_DemiveeJump:
# 1274 "data/maps/EltheCity/scripts.pory"
	jump_up
# 1275 "data/maps/EltheCity/scripts.pory"
	lock_facing_direction
# 1276 "data/maps/EltheCity/scripts.pory"
	walk_fast_down
# 1277 "data/maps/EltheCity/scripts.pory"
	unlock_facing_direction
	step_end

# 1280 "data/maps/EltheCity/scripts.pory"
Movement_UnsafeUp:
# 1282 "data/maps/EltheCity/scripts.pory"
	walk_in_place_up
	step_end

# 1285 "data/maps/EltheCity/scripts.pory"
AmeliaStartLeaving:
# 1287 "data/maps/EltheCity/scripts.pory"
	walk_right
# 1287 "data/maps/EltheCity/scripts.pory"
	walk_right
# 1288 "data/maps/EltheCity/scripts.pory"
	delay_16
# 1288 "data/maps/EltheCity/scripts.pory"
	delay_16
# 1289 "data/maps/EltheCity/scripts.pory"
	face_left
	step_end

# 1292 "data/maps/EltheCity/scripts.pory"
EltheCity_Movement_DemiveeChaseAme:
# 1294 "data/maps/EltheCity/scripts.pory"
	walk_fast_down
# 1294 "data/maps/EltheCity/scripts.pory"
	walk_fast_down
# 1294 "data/maps/EltheCity/scripts.pory"
	walk_fast_down
# 1295 "data/maps/EltheCity/scripts.pory"
	face_right
	step_end

# 1298 "data/maps/EltheCity/scripts.pory"
Ending_AmeLeave:
# 1300 "data/maps/EltheCity/scripts.pory"
	walk_right
# 1300 "data/maps/EltheCity/scripts.pory"
	walk_right
# 1300 "data/maps/EltheCity/scripts.pory"
	walk_right
# 1300 "data/maps/EltheCity/scripts.pory"
	walk_right
# 1300 "data/maps/EltheCity/scripts.pory"
	walk_right
# 1300 "data/maps/EltheCity/scripts.pory"
	walk_right
# 1300 "data/maps/EltheCity/scripts.pory"
	walk_right
# 1300 "data/maps/EltheCity/scripts.pory"
	walk_right
# 1300 "data/maps/EltheCity/scripts.pory"
	walk_right
# 1300 "data/maps/EltheCity/scripts.pory"
	walk_right
	step_end

# 1303 "data/maps/EltheCity/scripts.pory"
Ending_BradleyLeave:
# 1305 "data/maps/EltheCity/scripts.pory"
	delay_16
# 1305 "data/maps/EltheCity/scripts.pory"
	delay_16
# 1305 "data/maps/EltheCity/scripts.pory"
	delay_16
# 1306 "data/maps/EltheCity/scripts.pory"
	walk_right
# 1306 "data/maps/EltheCity/scripts.pory"
	walk_right
# 1306 "data/maps/EltheCity/scripts.pory"
	walk_right
# 1307 "data/maps/EltheCity/scripts.pory"
	delay_16
# 1308 "data/maps/EltheCity/scripts.pory"
	face_left
# 1309 "data/maps/EltheCity/scripts.pory"
	delay_16
# 1309 "data/maps/EltheCity/scripts.pory"
	delay_16
# 1310 "data/maps/EltheCity/scripts.pory"
	walk_right
# 1310 "data/maps/EltheCity/scripts.pory"
	walk_right
# 1310 "data/maps/EltheCity/scripts.pory"
	walk_right
# 1310 "data/maps/EltheCity/scripts.pory"
	walk_right
# 1310 "data/maps/EltheCity/scripts.pory"
	walk_right
# 1310 "data/maps/EltheCity/scripts.pory"
	walk_right
	step_end

# 1313 "data/maps/EltheCity/scripts.pory"
Ending_DemiveeLeave:
# 1315 "data/maps/EltheCity/scripts.pory"
	walk_fast_right
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
Ending_MarcelLeave:
# 1321 "data/maps/EltheCity/scripts.pory"
	delay_16
# 1321 "data/maps/EltheCity/scripts.pory"
	delay_16
# 1321 "data/maps/EltheCity/scripts.pory"
	delay_16
# 1321 "data/maps/EltheCity/scripts.pory"
	delay_16
# 1321 "data/maps/EltheCity/scripts.pory"
	delay_16
# 1322 "data/maps/EltheCity/scripts.pory"
	face_right
# 1323 "data/maps/EltheCity/scripts.pory"
	delay_16
# 1323 "data/maps/EltheCity/scripts.pory"
	delay_16
# 1324 "data/maps/EltheCity/scripts.pory"
	walk_right
# 1324 "data/maps/EltheCity/scripts.pory"
	walk_right
# 1324 "data/maps/EltheCity/scripts.pory"
	walk_right
# 1324 "data/maps/EltheCity/scripts.pory"
	walk_right
# 1324 "data/maps/EltheCity/scripts.pory"
	walk_right
# 1324 "data/maps/EltheCity/scripts.pory"
	walk_right
# 1324 "data/maps/EltheCity/scripts.pory"
	walk_right
# 1324 "data/maps/EltheCity/scripts.pory"
	walk_right
# 1324 "data/maps/EltheCity/scripts.pory"
	walk_right
# 1324 "data/maps/EltheCity/scripts.pory"
	walk_right
# 1324 "data/maps/EltheCity/scripts.pory"
	walk_right
# 1324 "data/maps/EltheCity/scripts.pory"
	walk_right
	step_end

# 1327 "data/maps/EltheCity/scripts.pory"
Ending_ViceLeave:
# 1329 "data/maps/EltheCity/scripts.pory"
	walk_down
# 1329 "data/maps/EltheCity/scripts.pory"
	walk_down
# 1330 "data/maps/EltheCity/scripts.pory"
	walk_right
# 1331 "data/maps/EltheCity/scripts.pory"
	face_up
# 1332 "data/maps/EltheCity/scripts.pory"
	delay_16
# 1332 "data/maps/EltheCity/scripts.pory"
	delay_16
# 1332 "data/maps/EltheCity/scripts.pory"
	delay_16
# 1333 "data/maps/EltheCity/scripts.pory"
	walk_right
# 1333 "data/maps/EltheCity/scripts.pory"
	walk_right
# 1333 "data/maps/EltheCity/scripts.pory"
	walk_right
# 1333 "data/maps/EltheCity/scripts.pory"
	walk_right
# 1333 "data/maps/EltheCity/scripts.pory"
	walk_right
# 1333 "data/maps/EltheCity/scripts.pory"
	walk_right
# 1333 "data/maps/EltheCity/scripts.pory"
	walk_right
# 1333 "data/maps/EltheCity/scripts.pory"
	walk_right
# 1333 "data/maps/EltheCity/scripts.pory"
	walk_right
# 1333 "data/maps/EltheCity/scripts.pory"
	walk_right
# 1333 "data/maps/EltheCity/scripts.pory"
	walk_right
# 1333 "data/maps/EltheCity/scripts.pory"
	walk_right
	step_end

# 1336 "data/maps/EltheCity/scripts.pory"
Ending_PythonLeave:
# 1338 "data/maps/EltheCity/scripts.pory"
	delay_16
# 1339 "data/maps/EltheCity/scripts.pory"
	walk_fast_right
# 1339 "data/maps/EltheCity/scripts.pory"
	walk_fast_right
# 1339 "data/maps/EltheCity/scripts.pory"
	walk_fast_right
# 1339 "data/maps/EltheCity/scripts.pory"
	walk_fast_right
# 1340 "data/maps/EltheCity/scripts.pory"
	delay_16
# 1341 "data/maps/EltheCity/scripts.pory"
	face_left
# 1342 "data/maps/EltheCity/scripts.pory"
	delay_16
# 1343 "data/maps/EltheCity/scripts.pory"
	face_right
# 1344 "data/maps/EltheCity/scripts.pory"
	delay_16
# 1345 "data/maps/EltheCity/scripts.pory"
	face_left
# 1346 "data/maps/EltheCity/scripts.pory"
	delay_16
# 1347 "data/maps/EltheCity/scripts.pory"
	face_right
# 1348 "data/maps/EltheCity/scripts.pory"
	delay_16
# 1349 "data/maps/EltheCity/scripts.pory"
	face_left
# 1350 "data/maps/EltheCity/scripts.pory"
	delay_16
# 1351 "data/maps/EltheCity/scripts.pory"
	walk_fast_right
# 1351 "data/maps/EltheCity/scripts.pory"
	walk_fast_right
# 1351 "data/maps/EltheCity/scripts.pory"
	walk_fast_right
# 1351 "data/maps/EltheCity/scripts.pory"
	walk_fast_right
	step_end

EltheCity_EventScript_Python_Text_0:
# 81 "data/maps/EltheCity/scripts.pory"
	.string "… … … … …$"

EltheCity_EventScript_Python_Text_1:
# 86 "data/maps/EltheCity/scripts.pory"
	.string "Bradley$"

EltheCity_EventScript_Python_Text_2:
# 87 "data/maps/EltheCity/scripts.pory"
	.string "…The footsteps sound wrong.\n"
	.string "This is him.$"

EltheCity_EventScript_Python_Text_3:
# 100 "data/maps/EltheCity/scripts.pory"
	.string "Python$"

EltheCity_EventScript_Python_Text_4:
# 101 "data/maps/EltheCity/scripts.pory"
	.string "Finally found me, eh, Amelia?\n"
	.string "Took you long enough.$"

EltheCity_EventScript_Python_Text_5:
# 102 "data/maps/EltheCity/scripts.pory"
	.string "Amelia$"

EltheCity_EventScript_Python_Text_6:
# 103 "data/maps/EltheCity/scripts.pory"
	.string "Look, I've got a Poké Ball here\n"
	.string "that says…$"

EltheCity_EventScript_Python_Text_7:
# 105 "data/maps/EltheCity/scripts.pory"
	.string "Wait, you still remember me!?$"

EltheCity_EventScript_Python_Text_8:
# 107 "data/maps/EltheCity/scripts.pory"
	.string "Of course! This memory charm is the\n"
	.string "work of a Psychic type Pokémon.\p"
	.string "I'm a Dark type, so it doesn't affect\n"
	.string "me at all!\l"
	.string "I just chose to hide from you because\l"
	.string "watching you run around was fun.$"

EltheCity_EventScript_Python_Text_9:
# 119 "data/maps/EltheCity/scripts.pory"
	.string "Excuse me, have you seen my dragon?\n"
	.string "Excuse me, can I get a room?\l"
	.string "Excuse me, can you renounce your god?\l"
	.string "Excuse me, have you seen my arm?\l"
	.string "You can't miss it, it's green!$"

EltheCity_EventScript_Python_Text_10:
# 121 "data/maps/EltheCity/scripts.pory"
	.string "Keheheheh!$"

EltheCity_EventScript_Python_Text_11:
# 123 "data/maps/EltheCity/scripts.pory"
	.string "That seems a little uncalled for.\n"
	.string "I was worried about you, you know…$"

EltheCity_EventScript_Python_Text_12:
# 125 "data/maps/EltheCity/scripts.pory"
	.string "Hey, wait, you said this is caused\n"
	.string "by a Psychic type Pokémon?\p"
	.string "Do you think if we beat it, our\n"
	.string "memories will come back?$"

EltheCity_EventScript_Python_Text_13:
# 139 "data/maps/EltheCity/scripts.pory"
	.string "Eh. Probably. It's not erasing\n"
	.string "memories, just suppressing them, so\l"
	.string "they should come back if it stops.\p"
	.string "It's hiding out in that shrine near\n"
	.string "the church. Let's go check it out.$"

EltheCity_EventScript_Python_Text_14:
# 148 "data/maps/EltheCity/scripts.pory"
	.string "You recalled Python the Zoroark!$"

EltheCity_Sign_InnLeft_Text_0:
# 188 "data/maps/EltheCity/scripts.pory"
	.string "Elysi Inn$"

EltheCity_Sign_InnRight_Text_0:
# 194 "data/maps/EltheCity/scripts.pory"
	.string "Phew, these room prices…I'm glad\n"
	.string "Pokémon Centers were free…\p"
	.string "Then again, not like I have any\n"
	.string "money anyway…$"

EltheCity_EventScript_Keesight_Text_0:
# 291 "data/maps/EltheCity/scripts.pory"
	.string "Keesight$"

EltheCity_EventScript_Keesight_Text_1:
# 292 "data/maps/EltheCity/scripts.pory"
	.string "… … … … …\n"
	.string "Thanks for the song.$"

EltheCity_EventScript_Keesight_Text_2:
# 296 "data/maps/EltheCity/scripts.pory"
	.string "Batmon$"

EltheCity_EventScript_Keesight_Text_3:
# 297 "data/maps/EltheCity/scripts.pory"
	.string "… … … … … … … … … …$"

EltheCity_EventScript_Keesight_Text_4:
# 299 "data/maps/EltheCity/scripts.pory"
	.string "The Pokémon is staring intently\n"
	.string "at the pond…$"

EltheCity_EventScript_Weatherbane_Text_0:
# 308 "data/maps/EltheCity/scripts.pory"
	.string "So this is the thing I'm supposed\n"
	.string "to fix? It's, what, squeaky?$"

EltheCity_EventScript_Weatherbane_Text_1:
# 335 "data/maps/EltheCity/scripts.pory"
	.string "Weatherbane$"

EltheCity_EventScript_Weatherbane_Text_2:
# 336 "data/maps/EltheCity/scripts.pory"
	.string "Skrraaaaaaaaaaaw! Skrraaaaaaaaaaaw!$"

EltheCity_EventScript_Weatherbane_Text_3:
# 339 "data/maps/EltheCity/scripts.pory"
	.string "…Geez. It's a Pokémon?\n"
	.string "Well, it sure is noisy…$"

EltheCity_EventScript_Weatherbane_Text_4:
# 345 "data/maps/EltheCity/scripts.pory"
	.string "Hey! Shut the f{CENSOR}uck{UNCENSOR} up!$"

EltheCity_EventScript_Weatherbane_Text_5:
# 349 "data/maps/EltheCity/scripts.pory"
	.string "Why are you yelling?$"

EltheCity_EventScript_Weatherbane_Text_6:
# 351 "data/maps/EltheCity/scripts.pory"
	.string "The rain! The rain! I'm trying to\n"
	.string "make the rain go away!\p"
	.string "My cries can chase away storms.\n"
	.string "But this rain just keeps coming back!\l"
	.string "Begone! Begone!$"

EltheCity_EventScript_Weatherbane_Text_7:
# 354 "data/maps/EltheCity/scripts.pory"
	.string "So it's not a natural rainstorm?\n"
	.string "Maybe a Pokémon is summoning it…$"

EltheCity_EventScript_Weatherbane_Text_8:
# 356 "data/maps/EltheCity/scripts.pory"
	.string "Not natural! Not natural!\n"
	.string "Can't you feel it?\p"
	.string "The rain washes away your darkness.\n"
	.string "Makes you a carefree person.\l"
	.string "A fake person.\l"
	.string "Must be stopped! Must be stopped!$"

EltheCity_EventScript_Weatherbane_Text_9:
# 359 "data/maps/EltheCity/scripts.pory"
	.string "Look, I know! Something's messing\n"
	.string "with my head. It could be the same\l"
	.string "thing that's causing the rain.\p"
	.string "I'm working on it. But my job right\n"
	.string "now is to get you to quiet down.$"

EltheCity_EventScript_Weatherbane_Text_10:
# 362 "data/maps/EltheCity/scripts.pory"
	.string "Can't shut up! Can't shut up!\p"
	.string "Begone! Begone!$"

EltheCity_EventScript_Weatherbane_Text_11:
# 364 "data/maps/EltheCity/scripts.pory"
	.string "What if I promise to clear up this\n"
	.string "rain? Will that shut you up?$"

EltheCity_EventScript_Weatherbane_Text_12:
# 367 "data/maps/EltheCity/scripts.pory"
	.string "Maybe. Maybe.\p"
	.string "Show me you're strong enough!\n"
	.string "I think you're weak! Weak!$"

EltheCity_EventScript_Weatherbane_Text_13:
# 373 "data/maps/EltheCity/scripts.pory"
	.string "Okay! Okay! You're good! You're good!\p"
	.string "I trust you. You will stop the rain.\n"
	.string "Amelia, Sun-Bringer! Hail! Hail!$"

EltheCity_EventScript_Weatherbane_Text_14:
# 375 "data/maps/EltheCity/scripts.pory"
	.string "Please don't call me that ever again.$"

EltheCity_EventScript_Weatherbane_Text_15:
# 377 "data/maps/EltheCity/scripts.pory"
	.string "And take this! Take this!\n"
	.string "Shiny! Shiny!$"

EltheCity_EventScript_Weatherbane_Text_16:
# 383 "data/maps/EltheCity/scripts.pory"
	.string "Finished the Innkeeper's request!$"

EltheCity_EventScript_Weatherbane_Text_17:
# 392 "data/maps/EltheCity/scripts.pory"
	.string "I used to love the sun.\n"
	.string "Fire types feared me.\p"
	.string "But now I'm too old! Too old!\n"
	.string "Can't take the heat like I used to.\p"
	.string "But I'd still like to see the sun\n"
	.string "again. Too wet! Too wet!$"

EltheCity_EventScript_BarrelGuy_Text_0:
# 412 "data/maps/EltheCity/scripts.pory"
	.string "Stephen$"

EltheCity_EventScript_BarrelGuy_Text_1:
# 413 "data/maps/EltheCity/scripts.pory"
	.string "I tried to challenge that Nidoking…\p"
	.string "But he just took one look at my\n"
	.string "Pokémon, picked me up, and stuffed me\l"
	.string "into this barrel…\p"
	.string "Maybe Pokémon training isn't for me.$"

EltheCity_BakeryWindow_Text_0:
# 419 "data/maps/EltheCity/scripts.pory"
	.string "The food on display looks delicious.\n"
	.string "Too bad you don't have spare money.$"

EltheCity_CitySign_Text_0:
# 424 "data/maps/EltheCity/scripts.pory"
	.string "Elthe City\n"
	.string "“The forgotten highway of life.”$"

EltheCity_Girlfriend_Text_0:
# 429 "data/maps/EltheCity/scripts.pory"
	.string "Marisa$"

EltheCity_Girlfriend_Text_1:
# 430 "data/maps/EltheCity/scripts.pory"
	.string "When was the last time it wasn't\n"
	.string "raining, huh? And the place doesn't\l"
	.string "even have outside seating anyway!$"

EltheCity_Boyfriend_Text_0:
# 435 "data/maps/EltheCity/scripts.pory"
	.string "Nathan$"

EltheCity_Boyfriend_Text_1:
# 436 "data/maps/EltheCity/scripts.pory"
	.string "I forgot to check the weather, okay?\n"
	.string "How was I supposed to know…$"

EltheCity_OldGuyBarrel_Text_0:
# 441 "data/maps/EltheCity/scripts.pory"
	.string "Boris$"

EltheCity_OldGuyBarrel_Text_1:
# 442 "data/maps/EltheCity/scripts.pory"
	.string "Something about this rainwater just\n"
	.string "doesn't seem right to me.\p"
	.string "It's not good to drink.$"

EltheCity_Slowbro_Text_0:
# 449 "data/maps/EltheCity/scripts.pory"
	.string "Slowbro$"

EltheCity_Slowbro_Text_1:
# 450 "data/maps/EltheCity/scripts.pory"
	.string "Some people are almost as forgetful\n"
	.string "as me these days.\p"
	.string "Just go with the flow, I say.\n"
	.string "Isn't it fun?$"

EltheCity_Slowbro_Text_2:
# 453 "data/maps/EltheCity/scripts.pory"
	.string "No, I hate knowing that I forgot\n"
	.string "something and not being able to figure\l"
	.string "out what it was. If I forget my old\l"
	.string "departed friends, I might lose it.$"

EltheCity_Slowbro_Text_3:
# 456 "data/maps/EltheCity/scripts.pory"
	.string "…Huh? Who are you?$"

EltheCity_Slowbro_Text_4:
# 458 "data/maps/EltheCity/scripts.pory"
	.string "Oh, forget it.\p"
	.string "Urk. Phrasing.$"

EltheCity_Lombre_Text_0:
# 464 "data/maps/EltheCity/scripts.pory"
	.string "Lilypad Kappa$"

EltheCity_Lombre_Text_1:
# 465 "data/maps/EltheCity/scripts.pory"
	.string "I don't know what everyone's\n"
	.string "complaining about. I hope this rain\l"
	.string "never ends!$"

EltheCity_Hiker_Text_0:
# 470 "data/maps/EltheCity/scripts.pory"
	.string "Nob$"

EltheCity_Hiker_Text_1:
# 473 "data/maps/EltheCity/scripts.pory"
	.string "I thought my Magcargo could block\n"
	.string "that Nidoking's Poison attacks, but\l"
	.string "he knows Earthquake too…\l"
	.string "Where did he learn that?$"

EltheCity_Hiker_Text_2:
# 479 "data/maps/EltheCity/scripts.pory"
	.string "So you taught him those moves?\n"
	.string "Pretty impressive.$"

EltheCity_Hiker_Text_3:
# 481 "data/maps/EltheCity/scripts.pory"
	.string "I can't take all the credit. He was\n"
	.string "trained by a gym leader before I\l"
	.string "found him.$"

EltheCity_Hiker_Text_4:
# 483 "data/maps/EltheCity/scripts.pory"
	.string "Trained by a what?$"

EltheCity_Gentleman_Text_0:
# 490 "data/maps/EltheCity/scripts.pory"
	.string "Regis$"

EltheCity_Gentleman_Text_1:
# 493 "data/maps/EltheCity/scripts.pory"
	.string "My poor Gothitelle didn't stand a\n"
	.string "chance against that Nidoking.\p"
	.string "I should've known that horn wasn't\n"
	.string "just for show.$"

EltheCity_Gentleman_Text_2:
# 497 "data/maps/EltheCity/scripts.pory"
	.string "That was some fine work under pressure.\n"
	.string "The world needs more Rangers like you.$"

EltheCity_Lass_Text_0:
# 503 "data/maps/EltheCity/scripts.pory"
	.string "Aurora$"

EltheCity_Lass_Text_1:
# 506 "data/maps/EltheCity/scripts.pory"
	.string "I thought I could win with my\n"
	.string "Harminnote's physical defense, but\l"
	.string "he pulled out a tricky Sludge Bomb…\l"
	.string "What a cheap shot!$"

EltheCity_Lass_Text_2:
# 510 "data/maps/EltheCity/scripts.pory"
	.string "Grandpa says it was a waste to use\n"
	.string "all my Poké Balls to catch Minnote,\l"
	.string "but it's pretty strong now that\l"
	.string "it's evolved.$"

EltheCity_Mom_Text_0:
# 516 "data/maps/EltheCity/scripts.pory"
	.string "Andrea$"

EltheCity_Mom_Text_1:
# 517 "data/maps/EltheCity/scripts.pory"
	.string "I thought I would try to distract\n"
	.string "Marisa with some battles, but it\l"
	.string "looks like the arena is being held.\l"
	.string "That Nidoking must be at least as\l"
	.string "strong as a Dragonite.$"

EltheCity_ArenaSign_Text_0:
# 522 "data/maps/EltheCity/scripts.pory"
	.string "Battle Park\n"
	.string "“King of the hill”-style allowed!$"

EltheCity_CemeterySign_Text_0:
# 527 "data/maps/EltheCity/scripts.pory"
	.string "The sign is too faded to read.$"

EltheCity_Phantump_Text_0:
# 536 "data/maps/EltheCity/scripts.pory"
	.string "Stump Ghost$"

EltheCity_Phantump_Text_1:
# 537 "data/maps/EltheCity/scripts.pory"
	.string "… … … … …\n"
	.string "You can see me?$"

EltheCity_Phantump_Text_2:
# 539 "data/maps/EltheCity/scripts.pory"
	.string "Yes. Hello. Are you a Pokémon?$"

EltheCity_Phantump_Text_3:
# 540 "data/maps/EltheCity/scripts.pory"
	.string "Phantump$"

EltheCity_Phantump_Text_4:
# 541 "data/maps/EltheCity/scripts.pory"
	.string "I am now. I am called Phantump.\n"
	.string "Could you help me?\p"
	.string "My spirit is troubled. I need an\n"
	.string "outsider's help.$"

EltheCity_Phantump_Text_5:
# 544 "data/maps/EltheCity/scripts.pory"
	.string "Let me guess…it's got something to\n"
	.string "do with the heavy rainfall?$"

EltheCity_Phantump_Text_6:
# 546 "data/maps/EltheCity/scripts.pory"
	.string "Yes…$"

EltheCity_Phantump_Text_7:
# 548 "data/maps/EltheCity/scripts.pory"
	.string "The rain washes away the sorrows\n"
	.string "of the people. They forget what\l"
	.string "they've lost. But it leaves a void.$"

EltheCity_Phantump_Text_8:
# 551 "data/maps/EltheCity/scripts.pory"
	.string "As you can see, they've neglected my\n"
	.string "resting place, too.$"

EltheCity_Phantump_Text_9:
# 553 "data/maps/EltheCity/scripts.pory"
	.string "What do you want me to do?$"

EltheCity_Phantump_Text_10:
# 555 "data/maps/EltheCity/scripts.pory"
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
# 562 "data/maps/EltheCity/scripts.pory"
	.string "…I understand. I'll do what I can.$"

EltheCity_Phantump_Text_12:
# 564 "data/maps/EltheCity/scripts.pory"
	.string "Thank you, kind soul.\p"
	.string "I believe the one who does not forget\n"
	.string "is with you, so please take this\l"
	.string "if it will help.$"

EltheCity_Phantump_Text_13:
# 570 "data/maps/EltheCity/scripts.pory"
	.string "I'll get this brain fog cleared out\n"
	.string "for everyone's sake. (Including mine.)$"

EltheCity_Phantump_Text_14:
# 578 "data/maps/EltheCity/scripts.pory"
	.string "The rain doesn't affect me because\n"
	.string "I'm incorporeal. I was suffering in\l"
	.string "silence until you came along.$"

EltheCity_Phantump_Text_15:
# 580 "data/maps/EltheCity/scripts.pory"
	.string "How did you know I could help?$"

EltheCity_Phantump_Text_16:
# 582 "data/maps/EltheCity/scripts.pory"
	.string "Your spirit is different. You have…\n"
	.string "a unique aura.$"

EltheCity_Phantump_Text_17:
# 584 "data/maps/EltheCity/scripts.pory"
	.string "Well, you got that right…\n"
	.string "I can't even get into it.$"

EltheCity_Phantump_Text_18:
# 586 "data/maps/EltheCity/scripts.pory"
	.string "Have you died before?$"

EltheCity_Phantump_Text_19:
# 588 "data/maps/EltheCity/scripts.pory"
	.string "Maybe a little…? I'm still having\n"
	.string "trouble remembering things, you know.$"

EltheCity_BradleyScript_Text_0:
# 617 "data/maps/EltheCity/scripts.pory"
	.string "Grah hah hah! Another puny trainer\n"
	.string "has come to challenge me, eh?$"

EltheCity_BradleyScript_Text_1:
# 619 "data/maps/EltheCity/scripts.pory"
	.string "Bradley, it's me, Amelia.\n"
	.string "What are you doing out here?$"

EltheCity_BradleyScript_Text_2:
# 621 "data/maps/EltheCity/scripts.pory"
	.string "I want to fight!\p"
	.string "You've been holding me back for years!\n"
	.string "It's time to let loose!$"

EltheCity_BradleyScript_Text_3:
# 623 "data/maps/EltheCity/scripts.pory"
	.string "Oh, you've forgotten about our talks,\n"
	.string "haven't you…\p"
	.string "Bradley, learning to control your\n"
	.string "bloodlust was YOUR idea. And it's been\l"
	.string "great for you! Chillax.$"

EltheCity_BradleyScript_Text_4:
# 627 "data/maps/EltheCity/scripts.pory"
	.string "I don't care! I want to fight.\n"
	.string "I'm enjoying this too much.$"

EltheCity_BradleyScript_Text_5:
# 629 "data/maps/EltheCity/scripts.pory"
	.string "Fine, we'll have a little spar, and\n"
	.string "then we get going, okay?$"

EltheCity_BradleyScript_Text_6:
# 631 "data/maps/EltheCity/scripts.pory"
	.string "I don't want to fight your Pokémon.\n"
	.string "I've beaten them before already.\l"
	.string "I want to fight YOU, Amelia. You\l"
	.string "hold back too much.$"

EltheCity_BradleyScript_Text_7:
# 633 "data/maps/EltheCity/scripts.pory"
	.string "Well, too bad. I can't do that in\n"
	.string "public. I still have work to do here,\l"
	.string "I can't go getting kicked out.$"

EltheCity_BradleyScript_Text_8:
# 637 "data/maps/EltheCity/scripts.pory"
	.string "Hrmph! Fine, then. I'll fight your\n"
	.string "team, if you're really serious.$"

EltheCity_BradleyScript_Text_9:
# 641 "data/maps/EltheCity/scripts.pory"
	.string "Come back when you're ready to give\n"
	.string "me a real challenge!$"

EltheCity_BradleyScript_Text_10:
# 646 "data/maps/EltheCity/scripts.pory"
	.string "With pleasure! I have a new Pokémon.\n"
	.string "You're going to love him.$"

EltheCity_BradleyScript_Text_11:
# 648 "data/maps/EltheCity/scripts.pory"
	.string "Oh? I'm intrigued. Maybe this will\n"
	.string "be worth my time after all.$"

EltheCity_BradleyScript_Text_12:
# 666 "data/maps/EltheCity/scripts.pory"
	.string "Come at me!$"

EltheCity_BradleyScript_Text_13:
# 673 "data/maps/EltheCity/scripts.pory"
	.string "Huff…I've been beaten.\p"
	.string "You were right, you know.\n"
	.string "This isn't my true calling. I'm just\l"
	.string "throwing a tantrum.$"

EltheCity_BradleyScript_Text_14:
# 676 "data/maps/EltheCity/scripts.pory"
	.string "Amelia, I can hardly think straight,\n"
	.string "but one thing I do know for sure…\p"
	.string "You've changed my life. I wasn't sure\n"
	.string "it was for the better, at first,\l"
	.string "but what I did in my youth…\l"
	.string "How that man…used me…\p"
	.string "I thought I couldn't recover from it,\n"
	.string "but you and your team helped me…$"

EltheCity_BradleyScript_Text_15:
# 680 "data/maps/EltheCity/scripts.pory"
	.string "I know, Bradley. It's alright.\n"
	.string "We all act stupid sometimes.\p"
	.string "You don't have to turn on the\n"
	.string "waterworks, it's already raining.$"

EltheCity_BradleyScript_Text_16:
# 683 "data/maps/EltheCity/scripts.pory"
	.string "It's a terrible day for rain.$"

EltheCity_BradleyScript_Text_17:
# 685 "data/maps/EltheCity/scripts.pory"
	.string "Oh! Speaking of which. I think we\n"
	.string "need to do something about this rain.\l"
	.string "Can you help me get the rest of the\l"
	.string "team back together so we can get\l"
	.string "started on that?$"

EltheCity_BradleyScript_Text_18:
# 689 "data/maps/EltheCity/scripts.pory"
	.string "Python must be around here somewhere,\n"
	.string "but I haven't seen any sign of him.$"

EltheCity_BradleyScript_Text_19:
# 691 "data/maps/EltheCity/scripts.pory"
	.string "Of course you haven't “seen” him.\n"
	.string "He must be in disguise.\p"
	.string "With my superior hearing, I can\n"
	.string "usually discern his illusions.\p"
	.string "If you let me look around, I can\n"
	.string "probably pick him out.$"

EltheCity_BradleyScript_Text_20:
# 695 "data/maps/EltheCity/scripts.pory"
	.string "Okay! Sounds like a plan!$"

EltheCity_BradleyScript_Text_21:
# 703 "data/maps/EltheCity/scripts.pory"
	.string "You recalled Bradley the Nidoking!$"

EltheCity_BradleyScript_Text_22:
# 716 "data/maps/EltheCity/scripts.pory"
	.string "Vice is hanging around in one of\n"
	.string "these buildings, I think.\l"
	.string "Let's go find her.$"

EltheCity_BradleyScript_Text_23:
# 718 "data/maps/EltheCity/scripts.pory"
	.string "Yes, ma'am.$"

EltheCity_EventScript_FatGuy_Text_0:
# 805 "data/maps/EltheCity/scripts.pory"
	.string "Eli$"

EltheCity_EventScript_FatGuy_Text_1:
# 806 "data/maps/EltheCity/scripts.pory"
	.string "More towns should have arenas, if you\n"
	.string "ask me. Watching Pokémon battles is\l"
	.string "fun, but it's a bit barbaric to do\l"
	.string "them in the middle of the street.$"

EltheCity_Sign_TrashBarrel_Text_0:
# 811 "data/maps/EltheCity/scripts.pory"
	.string "The barrel is full of garbage.$"

EltheCity_Sign_RainBarrel_Text_0:
# 816 "data/maps/EltheCity/scripts.pory"
	.string "The barrel is full of rainwater.\n"
	.string "It shimmers faintly.$"

EltheCity_Sign_NestBarrel_Text_0:
# 821 "data/maps/EltheCity/scripts.pory"
	.string "Some eggshell pieces are in the\n"
	.string "bottom of the barrel.$"

EltheCity_Sign_BlockedHouse_Text_0:
# 1129 "data/maps/EltheCity/scripts.pory"
	.string "This is private property!\n"
	.string "No trespassing!$"

EltheCity_Trigger_FinalBoss_Text_0:
# 1154 "data/maps/EltheCity/scripts.pory"
	.string "So this is the source?\n"
	.string "What do we…?$"

EltheCity_Trigger_FinalBoss_Text_1:
# 1155 "data/maps/EltheCity/scripts.pory"
	.string "Demi-Vee$"

EltheCity_Trigger_FinalBoss_Text_2:
# 1156 "data/maps/EltheCity/scripts.pory"
	.string "Wakey wakey! It's time to turn off\n"
	.string "the shower!$"

EltheCity_Trigger_FinalBoss_Text_3:
# 1166 "data/maps/EltheCity/scripts.pory"
	.string "?????$"

EltheCity_Trigger_FinalBoss_Text_4:
# 1167 "data/maps/EltheCity/scripts.pory"
	.string "Who comes bearing my crystals?$"

EltheCity_Trigger_FinalBoss_Text_5:
# 1178 "data/maps/EltheCity/scripts.pory"
	.string "Me! You're messing with this town,\n"
	.string "and we're here to stop you!$"

EltheCity_Trigger_FinalBoss_Text_6:
# 1180 "data/maps/EltheCity/scripts.pory"
	.string "I am saving this town.\n"
	.string "I am Elthemori, the guardian spirit.\p"
	.string "I could not bear to see my wards\n"
	.string "in so much mental anguish, so I have\l"
	.string "brought forth healing water to ease\l"
	.string "their troubles.$"

EltheCity_Trigger_FinalBoss_Text_7:
# 1183 "data/maps/EltheCity/scripts.pory"
	.string "Their troubles aren't gone, they just\n"
	.string "forget them and wander around\l"
	.string "like zombies! Get real!$"

EltheCity_Trigger_FinalBoss_Text_8:
# 1184 "data/maps/EltheCity/scripts.pory"
	.string "Marcel$"

EltheCity_Trigger_FinalBoss_Text_9:
# 1185 "data/maps/EltheCity/scripts.pory"
	.string "They didn't agree to this! You're\n"
	.string "doing more harm than good.$"

EltheCity_Trigger_FinalBoss_Text_10:
# 1186 "data/maps/EltheCity/scripts.pory"
	.string "Vice$"

EltheCity_Trigger_FinalBoss_Text_11:
# 1187 "data/maps/EltheCity/scripts.pory"
	.string "And to make it worse, you've dragged\n"
	.string "us into your lame scheme!\p"
	.string "We could've forgotten who we were and\n"
	.string "got trapped in your Bidoof Day town!$"

EltheCity_Trigger_FinalBoss_Text_12:
# 1189 "data/maps/EltheCity/scripts.pory"
	.string "If you don't stop, we'll make you\n"
	.string "stop. That's a promise.$"

EltheCity_Trigger_FinalBoss_Text_13:
# 1192 "data/maps/EltheCity/scripts.pory"
	.string "So what do you think, huh?$"

EltheCity_Trigger_FinalBoss_Text_14:
# 1195 "data/maps/EltheCity/scripts.pory"
	.string "Elthemori$"

EltheCity_Trigger_FinalBoss_Text_15:
# 1196 "data/maps/EltheCity/scripts.pory"
	.string "Foolish.$"

EltheCity_Trigger_FinalBoss_Text_16:
# 1213 "data/maps/EltheCity/scripts.pory"
	.string "… … … … …\n"
	.string "I see…\p"
	.string "You think my people are strong enough\n"
	.string "to move past their pain.\p"
	.string "And yet, they needed you to face me\n"
	.string "instead of doing it themselves.$"

EltheCity_Trigger_FinalBoss_Text_17:
# 1217 "data/maps/EltheCity/scripts.pory"
	.string "Get real. You made them forget about\n"
	.string "yourself, too.\p"
	.string "This long storm is turning into just\n"
	.string "another trauma that they'll have to\l"
	.string "work through. But when they do, maybe\l"
	.string "they'll come to appreciate you again.$"

EltheCity_Trigger_FinalBoss_Text_18:
# 1220 "data/maps/EltheCity/scripts.pory"
	.string "Very well, then. You win, outsider.\p"
	.string "I will listen to the people's will.$"

EltheCity_Trigger_FinalBoss_Text_19:
# 1240 "data/maps/EltheCity/scripts.pory"
	.string "Well, team, we did it. We found each\n"
	.string "other again and freed a town from\l"
	.string "an endless dream.\p"
	.string "All in a day's work! Now let's go\n"
	.string "walk off this memory loss hangover.$"

EltheCity_Trigger_FinalBoss_Text_20:
# 1245 "data/maps/EltheCity/scripts.pory"
	.string "Hey, wait!\p"
	.string "C-can I come with you? I've never had\n"
	.string "battles like that before…it was cool!\l"
	.string "I wanna do it more!$"

EltheCity_Trigger_FinalBoss_Text_21:
# 1247 "data/maps/EltheCity/scripts.pory"
	.string "Of course! Just follow me!\p"
	.string "Let's go!$"

EltheCity_Trigger_FinalBoss_Text_22:
# 1256 "data/maps/EltheCity/scripts.pory"
	.string "You win! Thank you for playing\n"
	.string "Recollection Quest!\p"
	.string "CREDITS:\p"
	.string "Codebase - pret/pokeemerald maintainers\n"
	.string "and RHH contributors.\l"
	.string "Base used: Expansion 1.9.0\p"
	.string "Nameplates - code by Tustin2121.\n"
	.string "Portraits - code and graphics by Sylph.\p"
	.string "Tilesets - Aqua Asset Repository\n"
	.string "“Shady Forest” and “Dojo Interior”, and\l"
	.string "Voluptuas tileset collection 11.\p"
	.string "NPC graphics - Pokémon FireRed. “Amelia”\n"
	.string "design and sprites by Sylph.\p"
	.string "Demi-Vee customizer - based on the\n"
	.string "stat editor UI from Team Aqua's Hideout.\p"
	.string "Pokémon design - “Dubsnake”, “Hydroil”\n"
	.string "“Vinos”, and “Keesight” by Sylph.\l"
	.string "“Weatherbane” by SomeAre.\p"
	.string "Pokémon sprites - “Dubsnake”, “Hydroil”,\n"
	.string "and “Weatherbane” battle sprites\l"
	.string "by zacsukki. “Vinos” battle sprite\l"
	.string "by Sylph. Fakemon overworlds by Sylph.\p"
	.string "Scenario, characters, writing, and\n"
	.string "story by Sylph.$"
