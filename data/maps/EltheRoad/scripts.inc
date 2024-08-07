EltheRoad_MapScripts::
# 7 "data/maps/EltheRoad/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 8 "data/maps/EltheRoad/scripts.pory"
	map_script_2 VAR_MAIN_GAME_STATE, 0, EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0
	.2byte 0

EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0:
# 9 "data/maps/EltheRoad/scripts.pory"
	clearflag FLAG_NO_MUSIC_ON_WARP
# 10 "data/maps/EltheRoad/scripts.pory"
	addobjectspriteoffset 2, 5, 0
# 11 "data/maps/EltheRoad/scripts.pory"
	addobjectspriteoffset 1, 6, 0
# 12 "data/maps/EltheRoad/scripts.pory"
	delay 60
# 13 "data/maps/EltheRoad/scripts.pory"
	delay 60
# 14 "data/maps/EltheRoad/scripts.pory"
	delay 60
# 15 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_0
# 16 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_1, MSGBOX_AUTOCLOSE
# 17 "data/maps/EltheRoad/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 18 "data/maps/EltheRoad/scripts.pory"
	delay 60
# 19 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_2, PORTRAIT_AMELIA_NEUTRAL
# 20 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_3
# 21 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_4, PORTRAIT_DEMIVEE_NEUTRAL, PORTRAIT_DEFAULT_LEFT
# 22 "data/maps/EltheRoad/scripts.pory"
	message EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_5
# 23 "data/maps/EltheRoad/scripts.pory"
	addobjectspriteoffset 1, -1, 0
# 24 "data/maps/EltheRoad/scripts.pory"
	delay 5
# 25 "data/maps/EltheRoad/scripts.pory"
	addobjectspriteoffset 1, -1, 0
# 26 "data/maps/EltheRoad/scripts.pory"
	delay 5
# 27 "data/maps/EltheRoad/scripts.pory"
	addobjectspriteoffset 1, -1, 0
# 28 "data/maps/EltheRoad/scripts.pory"
	delay 5
# 29 "data/maps/EltheRoad/scripts.pory"
	addobjectspriteoffset 1, -1, 0
# 30 "data/maps/EltheRoad/scripts.pory"
	delay 5
# 31 "data/maps/EltheRoad/scripts.pory"
	addobjectspriteoffset 1, -1, 0
# 32 "data/maps/EltheRoad/scripts.pory"
	delay 5
# 33 "data/maps/EltheRoad/scripts.pory"
	addobjectspriteoffset 1, -1, 0
# 34 "data/maps/EltheRoad/scripts.pory"
	delay 5
# 35 "data/maps/EltheRoad/scripts.pory"
	waitmessage
# 36 "data/maps/EltheRoad/scripts.pory"
	waitbuttonpress
# 37 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_2, PORTRAIT_AMELIA_SHOCK
# 38 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_6
# 39 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_4, PORTRAIT_DEMIVEE_ANNOYED, PORTRAIT_DEFAULT_LEFT
# 40 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_7
# 41 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_2, PORTRAIT_AMELIA_NEUTRAL
# 42 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_8, MSGBOX_AUTOCLOSE
# 43 "data/maps/EltheRoad/scripts.pory"
	playse SE_PIN
# 44 "data/maps/EltheRoad/scripts.pory"
	applymovement 2, Common_Movement_ExclamationMark
# 45 "data/maps/EltheRoad/scripts.pory"
	waitmovement 0
# 46 "data/maps/EltheRoad/scripts.pory"
	applymovement 2, Common_Movement_Delay48
# 47 "data/maps/EltheRoad/scripts.pory"
	waitmovement 0
# 48 "data/maps/EltheRoad/scripts.pory"
	removeobject 2
# 49 "data/maps/EltheRoad/scripts.pory"
	playse SE_BIKE_HOP
# 50 "data/maps/EltheRoad/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, EltheRoad_Movement_AmeliaJumpUp
# 51 "data/maps/EltheRoad/scripts.pory"
	waitmovement 0
# 52 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_2, PORTRAIT_AMELIA_SHOCK
# 53 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_9, MSGBOX_AUTOCLOSE
# 54 "data/maps/EltheRoad/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, EltheRoad_Movement_AmeliaLookAround
# 55 "data/maps/EltheRoad/scripts.pory"
	waitmovement 0
# 56 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_2, PORTRAIT_AMELIA_STRAINED
# 57 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_10
# 58 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_2, PORTRAIT_AMELIA_NEUTRAL
# 59 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_11, MSGBOX_AUTOCLOSE
# 60 "data/maps/EltheRoad/scripts.pory"
	additem ITEM_POKE_BALL
# 61 "data/maps/EltheRoad/scripts.pory"
	additem ITEM_GREAT_BALL
# 62 "data/maps/EltheRoad/scripts.pory"
	additem ITEM_ULTRA_BALL
# 63 "data/maps/EltheRoad/scripts.pory"
	additem ITEM_NEST_BALL
# 64 "data/maps/EltheRoad/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, EltheRoad_Movement_AmeliaStartLeaving
# 65 "data/maps/EltheRoad/scripts.pory"
	delay 30
# 66 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_4, PORTRAIT_DEMIVEE_NEUTRAL, PORTRAIT_DEFAULT_LEFT
# 67 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_12, MSGBOX_AUTOCLOSE
# 68 "data/maps/EltheRoad/scripts.pory"
	playse SE_BIKE_HOP
# 69 "data/maps/EltheRoad/scripts.pory"
	applymovement 1, EltheRoad_Movement_DemiveeFollow
# 70 "data/maps/EltheRoad/scripts.pory"
	waitmovement 0
# 71 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_4, PORTRAIT_DEMIVEE_ANNOYED, PORTRAIT_DEFAULT_LEFT
# 72 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_13
# 73 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_2, PORTRAIT_AMELIA_SMUG
# 74 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_14
# 75 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_2, PORTRAIT_AMELIA_NEUTRAL
# 76 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_15, MSGBOX_AUTOCLOSE
# 77 "data/maps/EltheRoad/scripts.pory"
	applymovement 1, EltheRoad_Movement_DemiveeJoin
# 78 "data/maps/EltheRoad/scripts.pory"
	waitmovement 0
# 79 "data/maps/EltheRoad/scripts.pory"
	removeobject 1
# 80 "data/maps/EltheRoad/scripts.pory"
	playfanfare MUS_CAUGHT
# 81 "data/maps/EltheRoad/scripts.pory"
	message EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_16
# 82 "data/maps/EltheRoad/scripts.pory"
	waitmessage
# 83 "data/maps/EltheRoad/scripts.pory"
	waitfanfare
# 84 "data/maps/EltheRoad/scripts.pory"
	waitbuttonpress
# 85 "data/maps/EltheRoad/scripts.pory"
	closemessage
# 86 "data/maps/EltheRoad/scripts.pory"
	fadedefaultbgm
# 87 "data/maps/EltheRoad/scripts.pory"
	setvar VAR_MAIN_GAME_STATE, 1
	return


EltheRoad_EventScript_FirstTrigger::
# 94 "data/maps/EltheRoad/scripts.pory"
	lock
# 95 "data/maps/EltheRoad/scripts.pory"
	delay 30
# 96 "data/maps/EltheRoad/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 97 "data/maps/EltheRoad/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, Common_Movement_FaceRight
# 98 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_2, PORTRAIT_AMELIA_NEUTRAL
# 99 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_EventScript_FirstTrigger_Text_0
# 100 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_4, PORTRAIT_DEMIVEE_NEUTRAL, PORTRAIT_DEFAULT_LEFT
# 101 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_EventScript_FirstTrigger_Text_1
# 104 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_2, PORTRAIT_AMELIA_SMUG
# 105 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_EventScript_FirstTrigger_Text_2
# 106 "data/maps/EltheRoad/scripts.pory"
	setpartymemberinfo 0
# 107 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_EventScript_FirstTrigger_Text_3, PORTRAIT_DEMIVEE_HUH, PORTRAIT_DEFAULT_LEFT
# 108 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_EventScript_FirstTrigger_Text_4
# 109 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_EventScript_FirstTrigger_Text_3, PORTRAIT_DEMIVEE_NEUTRAL, PORTRAIT_DEFAULT_LEFT
# 110 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_EventScript_FirstTrigger_Text_5
# 112 "data/maps/EltheRoad/scripts.pory"
	speakername NULL, 0
# 113 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_EventScript_FirstTrigger_Text_6, MSGBOX_AUTOCLOSE
# 114 "data/maps/EltheRoad/scripts.pory"
	setvar VAR_MAIN_GAME_STATE, 2
	return


EltheRoad_EventScript_FirstSign::
# 119 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_EventScript_FirstSign_Text_0, MSGBOX_SIGN
	return


EltheRoad_Trigger_VinosTrigger::
# 124 "data/maps/EltheRoad/scripts.pory"
	lock
# 125 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_Trigger_VinosTrigger_Text_0
# 126 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_Trigger_VinosTrigger_Text_1
# 127 "data/maps/EltheRoad/scripts.pory"
	speakername NULL, 0
# 128 "data/maps/EltheRoad/scripts.pory"
	message EltheRoad_Trigger_VinosTrigger_Text_2
# 129 "data/maps/EltheRoad/scripts.pory"
	waitmessage
# 130 "data/maps/EltheRoad/scripts.pory"
	dynmultichoice 0, 0, TRUE, 6, 0, DYN_MULTICHOICE_CB_NONE, EltheRoad_Trigger_VinosTrigger_Text_3, EltheRoad_Trigger_VinosTrigger_Text_4, EltheRoad_Trigger_VinosTrigger_Text_5
# 131 "data/maps/EltheRoad/scripts.pory"
	closemessage
# 132 "data/maps/EltheRoad/scripts.pory"
	switch VAR_RESULT
# 134 "data/maps/EltheRoad/scripts.pory"
	case 0, EltheRoad_Trigger_VinosTrigger_2
# 166 "data/maps/EltheRoad/scripts.pory"
	case 1, EltheRoad_Trigger_VinosTrigger_3
# 184 "data/maps/EltheRoad/scripts.pory"
	case 2, EltheRoad_Trigger_VinosTrigger_4
	return

EltheRoad_Trigger_VinosTrigger_2:
# 135 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_2, PORTRAIT_AMELIA_NEUTRAL
# 136 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_Trigger_VinosTrigger_Text_6, MSGBOX_AUTOCLOSE
# 137 "data/maps/EltheRoad/scripts.pory"
	playse SE_PIN
# 138 "data/maps/EltheRoad/scripts.pory"
	applymovement 3, Common_Movement_FaceDown
# 139 "data/maps/EltheRoad/scripts.pory"
	waitmovement 0
# 140 "data/maps/EltheRoad/scripts.pory"
	applymovement 3, Common_Movement_ExclamationMark
# 141 "data/maps/EltheRoad/scripts.pory"
	waitmovement 0
# 142 "data/maps/EltheRoad/scripts.pory"
	delay 48
# 143 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_Trigger_VinosTrigger_Text_0
# 144 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_Trigger_VinosTrigger_Text_7, MSGBOX_AUTOCLOSE
# 145 "data/maps/EltheRoad/scripts.pory"
	applymovement 3, EltheRoad_Movement_VinosGetOnLog
# 146 "data/maps/EltheRoad/scripts.pory"
	waitmovement 0
# 147 "data/maps/EltheRoad/scripts.pory"
	message EltheRoad_Trigger_VinosTrigger_Text_8
# 148 "data/maps/EltheRoad/scripts.pory"
	waitmessage
# 149 "data/maps/EltheRoad/scripts.pory"
	dynmultichoice 0, 0, TRUE, 6, 0, DYN_MULTICHOICE_CB_NONE, EltheRoad_Trigger_VinosTrigger_Text_9, EltheRoad_Trigger_VinosTrigger_Text_4, EltheRoad_Trigger_VinosTrigger_Text_5
# 150 "data/maps/EltheRoad/scripts.pory"
	closemessage
# 151 "data/maps/EltheRoad/scripts.pory"
	switch VAR_RESULT
# 153 "data/maps/EltheRoad/scripts.pory"
	case 0, EltheRoad_Trigger_VinosTrigger_6
	return

EltheRoad_Trigger_VinosTrigger_3:
# 167 "data/maps/EltheRoad/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, Common_Movement_WalkUp
# 168 "data/maps/EltheRoad/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
# 169 "data/maps/EltheRoad/scripts.pory"
	waitmovement 0
# 170 "data/maps/EltheRoad/scripts.pory"
	delay 30
# 171 "data/maps/EltheRoad/scripts.pory"
	message EltheRoad_Trigger_VinosTrigger_Text_8
# 172 "data/maps/EltheRoad/scripts.pory"
	waitmessage
# 173 "data/maps/EltheRoad/scripts.pory"
	dynmultichoice 0, 0, TRUE, 6, 0, DYN_MULTICHOICE_CB_NONE, EltheRoad_Trigger_VinosTrigger_Text_3, EltheRoad_Trigger_VinosTrigger_Text_4, EltheRoad_Trigger_VinosTrigger_Text_5
# 174 "data/maps/EltheRoad/scripts.pory"
	closemessage
	return

EltheRoad_Trigger_VinosTrigger_4:
# 185 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_2, PORTRAIT_AMELIA_STRAINED
# 186 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_Trigger_VinosTrigger_Text_11, MSGBOX_AUTOCLOSE
# 187 "data/maps/EltheRoad/scripts.pory"
	goto EltheRoad_VinosDoBattle
	return

EltheRoad_Trigger_VinosTrigger_6:
# 154 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_2, PORTRAIT_AMELIA_NEUTRAL
# 155 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_Trigger_VinosTrigger_Text_10, MSGBOX_AUTOCLOSE
# 156 "data/maps/EltheRoad/scripts.pory"
	playse SE_PIN
# 157 "data/maps/EltheRoad/scripts.pory"
	applymovement 3, Common_Movement_ExclamationMark
# 158 "data/maps/EltheRoad/scripts.pory"
	waitmovement 0
# 159 "data/maps/EltheRoad/scripts.pory"
	delay 48
# 160 "data/maps/EltheRoad/scripts.pory"
	goto EltheRoad_VinosNegotiationMain
	return


EltheRoad_VinosNegotiationMain::
# 205 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_VinosNegotiationMain_Text_0, PORTRAIT_VINOS_NEUTRAL, PORTRAIT_DEFAULT_LEFT
# 206 "data/maps/EltheRoad/scripts.pory"
	message EltheRoad_VinosNegotiationMain_Text_1
# 207 "data/maps/EltheRoad/scripts.pory"
	waitmessage
# 208 "data/maps/EltheRoad/scripts.pory"
	waitbuttonpress
# 209 "data/maps/EltheRoad/scripts.pory"
	setvar VAR_0x8008, 2
# 210 "data/maps/EltheRoad/scripts.pory"
	special GetNegotiationTopic
# 211 "data/maps/EltheRoad/scripts.pory"
	compare VAR_RESULT, 0xFF
	goto_if_eq EltheRoad_VinosNegotiationMain_1
# 217 "data/maps/EltheRoad/scripts.pory"
	switch VAR_RESULT
# 219 "data/maps/EltheRoad/scripts.pory"
	case 0, EltheRoad_VinosNegotiationMain_6
# 263 "data/maps/EltheRoad/scripts.pory"
	case 1, EltheRoad_VinosNegotiationMain_7
# 316 "data/maps/EltheRoad/scripts.pory"
	case 2, EltheRoad_VinosNegotiationMain_8
# 360 "data/maps/EltheRoad/scripts.pory"
	case 3, EltheRoad_VinosNegotiationMain_9
EltheRoad_VinosNegotiationMain_4:
# 402 "data/maps/EltheRoad/scripts.pory"
	delay 16
# 403 "data/maps/EltheRoad/scripts.pory"
	compare VAR_NEGOTIATION_SCORE, 2
	goto_if_gt EltheRoad_VinosNegotiationMain_10
# 411 "data/maps/EltheRoad/scripts.pory"
	compare VAR_NEGOTIATION_SCORE, 0
	goto_if_eq EltheRoad_VinosNegotiationMain_11
# 419 "data/maps/EltheRoad/scripts.pory"
	goto EltheRoad_VinosNegotiationMain
	return

EltheRoad_VinosNegotiationMain_1:
# 213 "data/maps/EltheRoad/scripts.pory"
	goto EltheRoad_VinosNegotiationMidSuccess
	return

EltheRoad_VinosNegotiationMain_6:
# 220 "data/maps/EltheRoad/scripts.pory"
	dynmultipush EltheRoad_VinosNegotiationMain_Text_2, 1
# 221 "data/maps/EltheRoad/scripts.pory"
	dynmultipush EltheRoad_VinosNegotiationMain_Text_3, 0
# 222 "data/maps/EltheRoad/scripts.pory"
	dynmultipush EltheRoad_VinosNegotiationMain_Text_4, 2
# 223 "data/maps/EltheRoad/scripts.pory"
	message EltheRoad_VinosNegotiationMain_Text_5
# 224 "data/maps/EltheRoad/scripts.pory"
	waitmessage
# 225 "data/maps/EltheRoad/scripts.pory"
	dynmultistack 0, 0, FALSE, 6, TRUE, 0, DYN_MULTICHOICE_CB_NONE
# 226 "data/maps/EltheRoad/scripts.pory"
	switch VAR_RESULT
# 228 "data/maps/EltheRoad/scripts.pory"
	case 0, EltheRoad_VinosNegotiationMain_16
# 242 "data/maps/EltheRoad/scripts.pory"
	case 1, EltheRoad_VinosNegotiationMain_17
# 252 "data/maps/EltheRoad/scripts.pory"
	case 2, EltheRoad_VinosNegotiationMain_18
	goto EltheRoad_VinosNegotiationMain_4

EltheRoad_VinosNegotiationMain_7:
# 265 "data/maps/EltheRoad/scripts.pory"
	dynmultipush EltheRoad_VinosNegotiationMain_Text_16, 1
# 266 "data/maps/EltheRoad/scripts.pory"
	dynmultipush EltheRoad_VinosNegotiationMain_Text_17, 2
# 267 "data/maps/EltheRoad/scripts.pory"
	dynmultipush EltheRoad_VinosNegotiationMain_Text_18, 0
# 268 "data/maps/EltheRoad/scripts.pory"
	message EltheRoad_VinosNegotiationMain_Text_19
# 269 "data/maps/EltheRoad/scripts.pory"
	waitmessage
# 270 "data/maps/EltheRoad/scripts.pory"
	dynmultistack 0, 0, FALSE, 6, TRUE, 0, DYN_MULTICHOICE_CB_NONE
# 271 "data/maps/EltheRoad/scripts.pory"
	switch VAR_RESULT
# 273 "data/maps/EltheRoad/scripts.pory"
	case 0, EltheRoad_VinosNegotiationMain_20
# 285 "data/maps/EltheRoad/scripts.pory"
	case 1, EltheRoad_VinosNegotiationMain_21
# 303 "data/maps/EltheRoad/scripts.pory"
	case 2, EltheRoad_VinosNegotiationMain_22
	goto EltheRoad_VinosNegotiationMain_4

EltheRoad_VinosNegotiationMain_8:
# 318 "data/maps/EltheRoad/scripts.pory"
	dynmultipush EltheRoad_VinosNegotiationMain_Text_34, 0
# 319 "data/maps/EltheRoad/scripts.pory"
	dynmultipush EltheRoad_VinosNegotiationMain_Text_35, 2
# 320 "data/maps/EltheRoad/scripts.pory"
	dynmultipush EltheRoad_VinosNegotiationMain_Text_36, 1
# 321 "data/maps/EltheRoad/scripts.pory"
	message EltheRoad_VinosNegotiationMain_Text_37
# 322 "data/maps/EltheRoad/scripts.pory"
	waitmessage
# 323 "data/maps/EltheRoad/scripts.pory"
	dynmultistack 0, 0, FALSE, 6, TRUE, 0, DYN_MULTICHOICE_CB_NONE
# 324 "data/maps/EltheRoad/scripts.pory"
	switch VAR_RESULT
# 326 "data/maps/EltheRoad/scripts.pory"
	case 0, EltheRoad_VinosNegotiationMain_24
# 341 "data/maps/EltheRoad/scripts.pory"
	case 1, EltheRoad_VinosNegotiationMain_25
# 350 "data/maps/EltheRoad/scripts.pory"
	case 2, EltheRoad_VinosNegotiationMain_26
	goto EltheRoad_VinosNegotiationMain_4

EltheRoad_VinosNegotiationMain_9:
# 362 "data/maps/EltheRoad/scripts.pory"
	dynmultipush EltheRoad_VinosNegotiationMain_Text_46, 1
# 363 "data/maps/EltheRoad/scripts.pory"
	dynmultipush EltheRoad_VinosNegotiationMain_Text_47, 2
# 364 "data/maps/EltheRoad/scripts.pory"
	dynmultipush EltheRoad_VinosNegotiationMain_Text_48, 0
# 365 "data/maps/EltheRoad/scripts.pory"
	message EltheRoad_VinosNegotiationMain_Text_49
# 366 "data/maps/EltheRoad/scripts.pory"
	waitmessage
# 367 "data/maps/EltheRoad/scripts.pory"
	dynmultistack 0, 0, FALSE, 6, TRUE, 0, DYN_MULTICHOICE_CB_NONE
# 368 "data/maps/EltheRoad/scripts.pory"
	switch VAR_RESULT
# 370 "data/maps/EltheRoad/scripts.pory"
	case 0, EltheRoad_VinosNegotiationMain_28
# 381 "data/maps/EltheRoad/scripts.pory"
	case 1, EltheRoad_VinosNegotiationMain_29
# 392 "data/maps/EltheRoad/scripts.pory"
	case 2, EltheRoad_VinosNegotiationMain_30
	goto EltheRoad_VinosNegotiationMain_4

EltheRoad_VinosNegotiationMain_10:
# 405 "data/maps/EltheRoad/scripts.pory"
	goto_if_set FLAG_NOT_PERFECT_CONVERSATION, EltheRoad_VinosNegotiationMain_32
EltheRoad_VinosNegotiationMain_31:
# 409 "data/maps/EltheRoad/scripts.pory"
	goto EltheRoad_VinosNegotiationCompleteSuccess
	return

EltheRoad_VinosNegotiationMain_11:
# 413 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_VinosNegotiationMain_Text_0, PORTRAIT_VINOS_MAD, PORTRAIT_DEFAULT_LEFT
# 414 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_VinosNegotiationMain_Text_57, MSGBOX_AUTOCLOSE
# 415 "data/maps/EltheRoad/scripts.pory"
	goto EltheRoad_VinosDoBattle
	return

EltheRoad_VinosNegotiationMain_16:
# 229 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_2, PORTRAIT_AMELIA_SERIOUSLY
# 230 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_VinosNegotiationMain_Text_6
# 231 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_2, PORTRAIT_AMELIA_SHOCK
# 232 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_VinosNegotiationMain_Text_7
# 234 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_VinosNegotiationMain_Text_0, PORTRAIT_VINOS_MAD, PORTRAIT_DEFAULT_LEFT
# 235 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_VinosNegotiationMain_Text_8, MSGBOX_AUTOCLOSE
# 236 "data/maps/EltheRoad/scripts.pory"
	setflag FLAG_NOT_PERFECT_CONVERSATION
# 237 "data/maps/EltheRoad/scripts.pory"
	compare VAR_NEGOTIATION_SCORE, 0
	goto_if_gt EltheRoad_VinosNegotiationMain_35
EltheRoad_VinosNegotiationMain_34:
# 241 "data/maps/EltheRoad/scripts.pory"
	playse SE_FAILURE
	goto EltheRoad_VinosNegotiationMain_4

EltheRoad_VinosNegotiationMain_17:
# 243 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_2, PORTRAIT_AMELIA_NEUTRAL
# 244 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_VinosNegotiationMain_Text_9
# 245 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_VinosNegotiationMain_Text_0, PORTRAIT_VINOS_NEUTRAL, PORTRAIT_DEFAULT_LEFT
# 246 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_VinosNegotiationMain_Text_10
# 247 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_2, PORTRAIT_AMELIA_SHOCK
# 248 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_VinosNegotiationMain_Text_11
# 249 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_VinosNegotiationMain_Text_0, PORTRAIT_VINOS_NEUTRAL, PORTRAIT_DEFAULT_LEFT
# 250 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_VinosNegotiationMain_Text_12, MSGBOX_AUTOCLOSE
# 251 "data/maps/EltheRoad/scripts.pory"
	addvar VAR_NEGOTIATION_SCORE, 1
	goto EltheRoad_VinosNegotiationMain_4

EltheRoad_VinosNegotiationMain_18:
# 253 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_2, PORTRAIT_AMELIA_NEUTRAL
# 254 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_VinosNegotiationMain_Text_13
# 255 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_2, PORTRAIT_AMELIA_WINK
# 256 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_VinosNegotiationMain_Text_14
# 257 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_VinosNegotiationMain_Text_0, PORTRAIT_VINOS_NEUTRAL, PORTRAIT_DEFAULT_LEFT
# 258 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_VinosNegotiationMain_Text_15, MSGBOX_AUTOCLOSE
# 260 "data/maps/EltheRoad/scripts.pory"
	addvar VAR_NEGOTIATION_SCORE, 2
# 261 "data/maps/EltheRoad/scripts.pory"
	playse SE_SUCCESS
	goto EltheRoad_VinosNegotiationMain_4

EltheRoad_VinosNegotiationMain_20:
# 274 "data/maps/EltheRoad/scripts.pory"
	callnative ParalyzeLead
# 275 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_EventScript_FirstTrigger_Text_3, PORTRAIT_DEMIVEE_NEUTRAL
# 276 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_VinosNegotiationMain_Text_20, MSGBOX_AUTOCLOSE
# 277 "data/maps/EltheRoad/scripts.pory"
	delay 90
# 278 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_EventScript_FirstTrigger_Text_3, PORTRAIT_DEMIVEE_ANNOYED
# 279 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_VinosNegotiationMain_Text_21
# 280 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_VinosNegotiationMain_Text_0, PORTRAIT_VINOS_NEUTRAL, PORTRAIT_DEFAULT_LEFT
# 281 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_VinosNegotiationMain_Text_22, MSGBOX_AUTOCLOSE
# 283 "data/maps/EltheRoad/scripts.pory"
	call EltheRoad_CleanUpNegotiationValues
# 284 "data/maps/EltheRoad/scripts.pory"
	goto EltheRoad_VinosDoBattle
	goto EltheRoad_VinosNegotiationMain_4

EltheRoad_VinosNegotiationMain_21:
# 286 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_2, PORTRAIT_AMELIA_NEUTRAL
# 287 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_VinosNegotiationMain_Text_23
# 288 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_VinosNegotiationMain_Text_0, PORTRAIT_VINOS_NEUTRAL, PORTRAIT_DEFAULT_LEFT
# 289 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_VinosNegotiationMain_Text_24
# 290 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_2, PORTRAIT_AMELIA_NEUTRAL
# 291 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_VinosNegotiationMain_Text_25
# 292 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_VinosNegotiationMain_Text_0, PORTRAIT_VINOS_NEUTRAL, PORTRAIT_DEFAULT_LEFT
# 293 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_VinosNegotiationMain_Text_26
# 294 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_2, PORTRAIT_AMELIA_NEUTRAL
# 295 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_VinosNegotiationMain_Text_27
# 296 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_VinosNegotiationMain_Text_0, PORTRAIT_VINOS_MAD, PORTRAIT_DEFAULT_LEFT
# 297 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_VinosNegotiationMain_Text_28
# 298 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_2, PORTRAIT_AMELIA_SMUG
# 299 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_VinosNegotiationMain_Text_29
# 300 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_VinosNegotiationMain_Text_0, PORTRAIT_VINOS_MAD, PORTRAIT_DEFAULT_LEFT
# 301 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_VinosNegotiationMain_Text_30, MSGBOX_AUTOCLOSE
# 302 "data/maps/EltheRoad/scripts.pory"
	addvar VAR_NEGOTIATION_SCORE, 1
	goto EltheRoad_VinosNegotiationMain_4

EltheRoad_VinosNegotiationMain_22:
# 304 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_2, PORTRAIT_AMELIA_NEUTRAL
# 305 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_VinosNegotiationMain_Text_31, MSGBOX_AUTOCLOSE
# 308 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_2, PORTRAIT_AMELIA_MUNCH
# 309 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_VinosNegotiationMain_Text_32
# 310 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_VinosNegotiationMain_Text_0, PORTRAIT_VINOS_NEUTRAL, PORTRAIT_DEFAULT_LEFT
# 311 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_VinosNegotiationMain_Text_33, MSGBOX_AUTOCLOSE
# 312 "data/maps/EltheRoad/scripts.pory"
	addvar VAR_NEGOTIATION_SCORE, 2
# 313 "data/maps/EltheRoad/scripts.pory"
	playse SE_SUCCESS
	goto EltheRoad_VinosNegotiationMain_4

EltheRoad_VinosNegotiationMain_24:
# 327 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_2, PORTRAIT_AMELIA_NEUTRAL
# 328 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_VinosNegotiationMain_Text_38
# 329 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_VinosNegotiationMain_Text_0, PORTRAIT_VINOS_MAD, PORTRAIT_DEFAULT_LEFT
# 330 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_VinosNegotiationMain_Text_39
# 331 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_2, PORTRAIT_AMELIA_SHOCK
# 332 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_VinosNegotiationMain_Text_40
# 333 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_VinosNegotiationMain_Text_0, PORTRAIT_VINOS_NEUTRAL, PORTRAIT_DEFAULT_LEFT
# 334 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_VinosNegotiationMain_Text_41, MSGBOX_AUTOCLOSE
# 335 "data/maps/EltheRoad/scripts.pory"
	setflag FLAG_NOT_PERFECT_CONVERSATION
# 336 "data/maps/EltheRoad/scripts.pory"
	compare VAR_NEGOTIATION_SCORE, 0
	goto_if_gt EltheRoad_VinosNegotiationMain_38
EltheRoad_VinosNegotiationMain_37:
# 340 "data/maps/EltheRoad/scripts.pory"
	playse SE_FAILURE
	goto EltheRoad_VinosNegotiationMain_4

EltheRoad_VinosNegotiationMain_25:
# 342 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_2, PORTRAIT_AMELIA_NEUTRAL
# 343 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_VinosNegotiationMain_Text_42
# 346 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_VinosNegotiationMain_Text_0, PORTRAIT_VINOS_NEUTRAL, PORTRAIT_DEFAULT_LEFT
# 347 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_VinosNegotiationMain_Text_43, MSGBOX_AUTOCLOSE
# 349 "data/maps/EltheRoad/scripts.pory"
	addvar VAR_NEGOTIATION_SCORE, 1
	goto EltheRoad_VinosNegotiationMain_4

EltheRoad_VinosNegotiationMain_26:
# 351 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_2, PORTRAIT_AMELIA_SMUG
# 352 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_VinosNegotiationMain_Text_44
# 355 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_VinosNegotiationMain_Text_0, PORTRAIT_VINOS_NEUTRAL, PORTRAIT_DEFAULT_LEFT
# 356 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_VinosNegotiationMain_Text_45, MSGBOX_AUTOCLOSE
# 357 "data/maps/EltheRoad/scripts.pory"
	addvar VAR_NEGOTIATION_SCORE, 2
# 358 "data/maps/EltheRoad/scripts.pory"
	playse SE_SUCCESS
	goto EltheRoad_VinosNegotiationMain_4

EltheRoad_VinosNegotiationMain_28:
# 371 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_2, PORTRAIT_AMELIA_NEUTRAL
# 372 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_VinosNegotiationMain_Text_50
# 373 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_VinosNegotiationMain_Text_0, PORTRAIT_VINOS_NEUTRAL, PORTRAIT_DEFAULT_LEFT
# 374 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_VinosNegotiationMain_Text_51, MSGBOX_AUTOCLOSE
# 375 "data/maps/EltheRoad/scripts.pory"
	setflag FLAG_NOT_PERFECT_CONVERSATION
# 376 "data/maps/EltheRoad/scripts.pory"
	compare VAR_NEGOTIATION_SCORE, 0
	goto_if_gt EltheRoad_VinosNegotiationMain_41
EltheRoad_VinosNegotiationMain_40:
# 380 "data/maps/EltheRoad/scripts.pory"
	playse SE_FAILURE
	goto EltheRoad_VinosNegotiationMain_4

EltheRoad_VinosNegotiationMain_29:
# 382 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_2, PORTRAIT_AMELIA_NEUTRAL
# 383 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_VinosNegotiationMain_Text_52
# 386 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_VinosNegotiationMain_Text_0, PORTRAIT_VINOS_NEUTRAL, PORTRAIT_DEFAULT_LEFT
# 387 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_VinosNegotiationMain_Text_53
# 389 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_2, PORTRAIT_AMELIA_SERIOUSLY
# 390 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_VinosNegotiationMain_Text_54, MSGBOX_AUTOCLOSE
# 391 "data/maps/EltheRoad/scripts.pory"
	addvar VAR_NEGOTIATION_SCORE, 1
	goto EltheRoad_VinosNegotiationMain_4

EltheRoad_VinosNegotiationMain_30:
# 393 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_2, PORTRAIT_AMELIA_SMUG
# 394 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_VinosNegotiationMain_Text_55
# 395 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_VinosNegotiationMain_Text_0, PORTRAIT_VINOS_NEUTRAL, PORTRAIT_DEFAULT_LEFT
# 396 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_VinosNegotiationMain_Text_56, MSGBOX_AUTOCLOSE
# 397 "data/maps/EltheRoad/scripts.pory"
	addvar VAR_NEGOTIATION_SCORE, 2
# 398 "data/maps/EltheRoad/scripts.pory"
	playse SE_SUCCESS
	goto EltheRoad_VinosNegotiationMain_4

EltheRoad_VinosNegotiationMain_32:
# 407 "data/maps/EltheRoad/scripts.pory"
	goto EltheRoad_VinosNegotiationMidSuccess
	goto EltheRoad_VinosNegotiationMain_31

EltheRoad_VinosNegotiationMain_35:
# 239 "data/maps/EltheRoad/scripts.pory"
	subvar VAR_NEGOTIATION_SCORE, 1
	goto EltheRoad_VinosNegotiationMain_34

EltheRoad_VinosNegotiationMain_38:
# 338 "data/maps/EltheRoad/scripts.pory"
	subvar VAR_NEGOTIATION_SCORE, 1
	goto EltheRoad_VinosNegotiationMain_37

EltheRoad_VinosNegotiationMain_41:
# 378 "data/maps/EltheRoad/scripts.pory"
	subvar VAR_NEGOTIATION_SCORE, 1
	goto EltheRoad_VinosNegotiationMain_40


EltheRoad_VinosNegotiationMidSuccess::
# 426 "data/maps/EltheRoad/scripts.pory"
	call EltheRoad_CleanUpNegotiationValues
# 427 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_VinosNegotiationMain_Text_0, PORTRAIT_VINOS_NEUTRAL, PORTRAIT_DEFAULT_LEFT
# 428 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_VinosNegotiationMidSuccess_Text_0, MSGBOX_AUTOCLOSE
# 431 "data/maps/EltheRoad/scripts.pory"
	giveitem ITEM_EXP_CANDY_L, 2
	return


EltheRoad_VinosNegotiationCompleteSuccess::
# 437 "data/maps/EltheRoad/scripts.pory"
	call EltheRoad_CleanUpNegotiationValues
	return


EltheRoad_VinosDoBattle::
# 442 "data/maps/EltheRoad/scripts.pory"
	setwildbattle SPECIES_BELLSPROUT, 35, ITEM_NONE
# 443 "data/maps/EltheRoad/scripts.pory"
	dowildbattle
# 444 "data/maps/EltheRoad/scripts.pory"
	call EltheRoad_CleanUpNegotiationValues
# 445 "data/maps/EltheRoad/scripts.pory"
	turnobject 3, DIR_SOUTH
# 446 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_VinosNegotiationMain_Text_0, PORTRAIT_VINOS_NEUTRAL, PORTRAIT_DEFAULT_LEFT
# 447 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_VinosDoBattle_Text_0
# 448 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_2, PORTRAIT_AMELIA_SERIOUSLY
# 449 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_VinosDoBattle_Text_1
# 450 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_VinosNegotiationMain_Text_0, PORTRAIT_VINOS_NEUTRAL, PORTRAIT_DEFAULT_LEFT
# 451 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_VinosDoBattle_Text_2, MSGBOX_AUTOCLOSE
# 452 "data/maps/EltheRoad/scripts.pory"
	delay 60
# 453 "data/maps/EltheRoad/scripts.pory"
	applymovement 3, Common_Movement_FaceLeft
# 454 "data/maps/EltheRoad/scripts.pory"
	delay 120
# 455 "data/maps/EltheRoad/scripts.pory"
	applymovement 3, Common_Movement_FaceRight
# 456 "data/maps/EltheRoad/scripts.pory"
	delay 120
# 457 "data/maps/EltheRoad/scripts.pory"
	applymovement 3, Common_Movement_FaceDown
# 458 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_VinosNegotiationMain_Text_0, PORTRAIT_VINOS_MAD, PORTRAIT_DEFAULT_LEFT
# 459 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_VinosDoBattle_Text_3, MSGBOX_AUTOCLOSE
# 460 "data/maps/EltheRoad/scripts.pory"
	giveitem ITEM_EXP_CANDY_L
# 461 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_EventScript_FirstTrigger_Text_3, PORTRAIT_DEMIVEE_YAY
# 462 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_VinosDoBattle_Text_4
# 463 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_VinosNegotiationMain_Text_0, PORTRAIT_VINOS_NEUTRAL, PORTRAIT_DEFAULT_LEFT
# 464 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_VinosDoBattle_Text_5, MSGBOX_AUTOCLOSE
# 465 "data/maps/EltheRoad/scripts.pory"
	setvar VAR_MAIN_GAME_STATE, 3
# 466 "data/maps/EltheRoad/scripts.pory"
	setflag FLAG_TEMP_9
	return


EltheRoad_CleanUpNegotiationValues::
# 471 "data/maps/EltheRoad/scripts.pory"
	setvar VAR_NEGOTIATION_SCORE, 0
# 472 "data/maps/EltheRoad/scripts.pory"
	clearflag FLAG_TEMP_4
# 473 "data/maps/EltheRoad/scripts.pory"
	clearflag FLAG_TEMP_1
# 474 "data/maps/EltheRoad/scripts.pory"
	clearflag FLAG_TEMP_2
# 475 "data/maps/EltheRoad/scripts.pory"
	clearflag FLAG_TEMP_3
# 476 "data/maps/EltheRoad/scripts.pory"
	clearflag FLAG_NOT_PERFECT_CONVERSATION
	return


EltheRoad_EventScript_VinosIdle::
# 482 "data/maps/EltheRoad/scripts.pory"
	goto_if_set FLAG_TEMP_9, EltheRoad_EventScript_VinosIdle_1
# 490 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_VinosNegotiationMain_Text_0, PORTRAIT_VINOS_NEUTRAL, PORTRAIT_DEFAULT_LEFT
# 491 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_EventScript_VinosIdle_Text_1, MSGBOX_NPC
	return

EltheRoad_EventScript_VinosIdle_1:
# 484 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_VinosNegotiationMain_Text_0, PORTRAIT_VINOS_MAD, PORTRAIT_DEFAULT_LEFT
# 485 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_EventScript_VinosIdle_Text_0, MSGBOX_NPC
	return


# 498 "data/maps/EltheRoad/scripts.pory"
EltheRoad_Movement_AmeliaJumpUp:
# 500 "data/maps/EltheRoad/scripts.pory"
	set_visible
# 501 "data/maps/EltheRoad/scripts.pory"
	jump_in_place_left
	step_end

# 504 "data/maps/EltheRoad/scripts.pory"
EltheRoad_Movement_AmeliaLookAround:
# 506 "data/maps/EltheRoad/scripts.pory"
	face_up
# 507 "data/maps/EltheRoad/scripts.pory"
	delay_16
# 508 "data/maps/EltheRoad/scripts.pory"
	face_down
# 509 "data/maps/EltheRoad/scripts.pory"
	delay_16
# 510 "data/maps/EltheRoad/scripts.pory"
	face_up
# 511 "data/maps/EltheRoad/scripts.pory"
	delay_16
# 512 "data/maps/EltheRoad/scripts.pory"
	face_down
# 513 "data/maps/EltheRoad/scripts.pory"
	delay_16
# 514 "data/maps/EltheRoad/scripts.pory"
	face_right
# 515 "data/maps/EltheRoad/scripts.pory"
	delay_16
# 515 "data/maps/EltheRoad/scripts.pory"
	delay_16
# 515 "data/maps/EltheRoad/scripts.pory"
	delay_16
# 516 "data/maps/EltheRoad/scripts.pory"
	face_left
# 517 "data/maps/EltheRoad/scripts.pory"
	delay_16
# 517 "data/maps/EltheRoad/scripts.pory"
	delay_16
# 517 "data/maps/EltheRoad/scripts.pory"
	delay_16
	step_end

# 520 "data/maps/EltheRoad/scripts.pory"
EltheRoad_Movement_AmeliaStartLeaving:
# 522 "data/maps/EltheRoad/scripts.pory"
	walk_up
# 522 "data/maps/EltheRoad/scripts.pory"
	walk_up
# 523 "data/maps/EltheRoad/scripts.pory"
	walk_right
# 523 "data/maps/EltheRoad/scripts.pory"
	walk_right
# 523 "data/maps/EltheRoad/scripts.pory"
	walk_right
# 524 "data/maps/EltheRoad/scripts.pory"
	delay_16
# 524 "data/maps/EltheRoad/scripts.pory"
	delay_16
# 525 "data/maps/EltheRoad/scripts.pory"
	face_left
	step_end

# 528 "data/maps/EltheRoad/scripts.pory"
EltheRoad_Movement_DemiveeFollow:
# 530 "data/maps/EltheRoad/scripts.pory"
	jump_up
# 531 "data/maps/EltheRoad/scripts.pory"
	walk_fast_up
# 532 "data/maps/EltheRoad/scripts.pory"
	walk_fast_right
# 532 "data/maps/EltheRoad/scripts.pory"
	walk_fast_right
	step_end

# 535 "data/maps/EltheRoad/scripts.pory"
EltheRoad_Movement_DemiveeJoin:
# 537 "data/maps/EltheRoad/scripts.pory"
	walk_slow_right
# 538 "data/maps/EltheRoad/scripts.pory"
	enter_pokeball
	step_end

# 541 "data/maps/EltheRoad/scripts.pory"
EltheRoad_Movement_VinosGetOnLog:
# 543 "data/maps/EltheRoad/scripts.pory"
	walk_fast_right
# 544 "data/maps/EltheRoad/scripts.pory"
	jump_right
# 545 "data/maps/EltheRoad/scripts.pory"
	face_down
	step_end

EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_0:
# 15 "data/maps/EltheRoad/scripts.pory"
	.string "???$"

EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_1:
# 16 "data/maps/EltheRoad/scripts.pory"
	.string "Wait…is it alive…?$"

EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_2:
# 19 "data/maps/EltheRoad/scripts.pory"
	.string "Amelia$"

EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_3:
# 20 "data/maps/EltheRoad/scripts.pory"
	.string "…yes, I am. Personal space?$"

EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_4:
# 21 "data/maps/EltheRoad/scripts.pory"
	.string "Eevee?$"

EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_5:
# 22 "data/maps/EltheRoad/scripts.pory"
	.string "Oh, sorry. I was thinking about\n"
	.string "eating you, but I guess I won't now.$"

EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_6:
# 38 "data/maps/EltheRoad/scripts.pory"
	.string "Dude! Seriously?$"

EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_7:
# 40 "data/maps/EltheRoad/scripts.pory"
	.string "You got tossed around unconscious in\n"
	.string "a flood! How'd you survive, anyway?$"

EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_8:
# 42 "data/maps/EltheRoad/scripts.pory"
	.string "I'm made of tough stuff. It takes\n"
	.string "more than a little water to…$"

EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_9:
# 53 "data/maps/EltheRoad/scripts.pory"
	.string "The flood! What happened to my team?$"

EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_10:
# 57 "data/maps/EltheRoad/scripts.pory"
	.string "My team…ugh, my head. I can't think.$"

EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_11:
# 59 "data/maps/EltheRoad/scripts.pory"
	.string "I have their Poké Balls here.\n"
	.string "Guess I should go find them.$"

EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_12:
# 67 "data/maps/EltheRoad/scripts.pory"
	.string "Wait! You shouldn't go alone.$"

EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_13:
# 72 "data/maps/EltheRoad/scripts.pory"
	.string "The local Pokémon are always testy\n"
	.string "after a flood.\p"
	.string "It's dangerous for a human to go\n"
	.string "alone. Take me!$"

EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_14:
# 74 "data/maps/EltheRoad/scripts.pory"
	.string "I can handle myself pretty well.\n"
	.string "And I'm a Pokémon Ranger, too.$"

EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_15:
# 76 "data/maps/EltheRoad/scripts.pory"
	.string "But if you want to come along,\n"
	.string "I won't say no. Welcome aboard!$"

EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_16:
# 81 "data/maps/EltheRoad/scripts.pory"
	.string "Eevee joined your party!$"

EltheRoad_EventScript_FirstTrigger_Text_0:
# 99 "data/maps/EltheRoad/scripts.pory"
	.string "I meant to ask earlier, but, uh,\n"
	.string "what are you, exactly?\p"
	.string "You look like an Eevee, but those\n"
	.string "markings…are they natural?$"

EltheRoad_EventScript_FirstTrigger_Text_1:
# 101 "data/maps/EltheRoad/scripts.pory"
	.string "Uh, I dunno! I used to be normal,\n"
	.string "but I like to eat these crystals…\l"
	.string "I think I got these markings after\l"
	.string "I started doing that.\p"
	.string "Now when I touch an evolution stone,\n"
	.string "I don't evolve, but…\p"
	.string "It changes my type, I think.\n"
	.string "And my moves.$"

EltheRoad_EventScript_FirstTrigger_Text_2:
# 105 "data/maps/EltheRoad/scripts.pory"
	.string "So you're some kind of…Demi-Vee?$"

EltheRoad_EventScript_FirstTrigger_Text_3:
# 107 "data/maps/EltheRoad/scripts.pory"
	.string "Demi-Vee$"

EltheRoad_EventScript_FirstTrigger_Text_4:
# 108 "data/maps/EltheRoad/scripts.pory"
	.string "Huh?$"

EltheRoad_EventScript_FirstTrigger_Text_5:
# 110 "data/maps/EltheRoad/scripts.pory"
	.string "Um, anyway! If you find any cool\n"
	.string "crystals, give them to me!\l"
	.string "They'll make me stronger in battle.\p"
	.string "And if you need any advice for\n"
	.string "getting around, just ask me!\l"
	.string "I know this place pretty well!$"

EltheRoad_EventScript_FirstTrigger_Text_6:
# 113 "data/maps/EltheRoad/scripts.pory"
	.string "(Press R or talk to Demi-Vee while\n"
	.string "he's following you to get advice!)\p"
	.string "(He will talk about the person\n"
	.string "you're facing, or give general hints\l"
	.string "for how to progress.)$"

EltheRoad_EventScript_FirstSign_Text_0:
# 119 "data/maps/EltheRoad/scripts.pory"
	.string "{CLEAR_TO 60}{LEFT_ARROW} To Rehocan Town\n"
	.string "{CLEAR_TO 76}To Elthe City {RIGHT_ARROW}$"

EltheRoad_Trigger_VinosTrigger_Text_0:
# 125 "data/maps/EltheRoad/scripts.pory"
	.string "Vine Mon$"

EltheRoad_Trigger_VinosTrigger_Text_1:
# 126 "data/maps/EltheRoad/scripts.pory"
	.string "Ugh…stupid flood.\n"
	.string "Washed away a perfect lurking spot.$"

EltheRoad_Trigger_VinosTrigger_Text_2:
# 128 "data/maps/EltheRoad/scripts.pory"
	.string "The Pokémon hasn't noticed you…\n"
	.string "What will you do?$"

EltheRoad_Trigger_VinosTrigger_Text_3:
# 130 "data/maps/EltheRoad/scripts.pory"
	.string "Call Out$"

EltheRoad_Trigger_VinosTrigger_Text_4:
# 130 "data/maps/EltheRoad/scripts.pory"
	.string "Step Forward$"

EltheRoad_Trigger_VinosTrigger_Text_5:
# 130 "data/maps/EltheRoad/scripts.pory"
	.string "Attack$"

EltheRoad_Trigger_VinosTrigger_Text_6:
# 136 "data/maps/EltheRoad/scripts.pory"
	.string "Excuse me…$"

EltheRoad_Trigger_VinosTrigger_Text_7:
# 144 "data/maps/EltheRoad/scripts.pory"
	.string "A human…! I need to get in position!$"

EltheRoad_Trigger_VinosTrigger_Text_8:
# 147 "data/maps/EltheRoad/scripts.pory"
	.string "Now what?$"

EltheRoad_Trigger_VinosTrigger_Text_9:
# 149 "data/maps/EltheRoad/scripts.pory"
	.string "Negotiate$"

EltheRoad_Trigger_VinosTrigger_Text_10:
# 155 "data/maps/EltheRoad/scripts.pory"
	.string "Do you mind if I pass through here?$"

EltheRoad_Trigger_VinosTrigger_Text_11:
# 186 "data/maps/EltheRoad/scripts.pory"
	.string "Demi-Vee, attack!$"

EltheRoad_VinosNegotiationMain_Text_0:
# 205 "data/maps/EltheRoad/scripts.pory"
	.string "Vinos$"

EltheRoad_VinosNegotiationMain_Text_1:
# 206 "data/maps/EltheRoad/scripts.pory"
	.string "Alright, then…$"

EltheRoad_VinosNegotiationMain_Text_2:
# 220 "data/maps/EltheRoad/scripts.pory"
	.string "Dark$"

EltheRoad_VinosNegotiationMain_Text_3:
# 221 "data/maps/EltheRoad/scripts.pory"
	.string "Grass$"

EltheRoad_VinosNegotiationMain_Text_4:
# 222 "data/maps/EltheRoad/scripts.pory"
	.string "Fire$"

EltheRoad_VinosNegotiationMain_Text_5:
# 223 "data/maps/EltheRoad/scripts.pory"
	.string "Which Type of Pokémon is best,\n"
	.string "in your opinion?$"

EltheRoad_VinosNegotiationMain_Text_6:
# 230 "data/maps/EltheRoad/scripts.pory"
	.string "It's, uh…Grass. Yeah. I just love\n"
	.string "Grass type Pokémon…\p"
	.string "… … … … …$"

EltheRoad_VinosNegotiationMain_Text_7:
# 232 "data/maps/EltheRoad/scripts.pory"
	.string "You know what, no, I can't even f{CENSOR}uck{UNCENSOR}ing\n"
	.string "joke about it. All the major\l"
	.string "terrible events in my life were\l"
	.string "caused by Grass types.\l"
	.string "F{CENSOR}uck{UNCENSOR} Grass types. I hate 'em.$"

EltheRoad_VinosNegotiationMain_Text_8:
# 235 "data/maps/EltheRoad/scripts.pory"
	.string "You'd disrespect me to my face…\n"
	.string "You have some nerve, human.$"

EltheRoad_VinosNegotiationMain_Text_9:
# 244 "data/maps/EltheRoad/scripts.pory"
	.string "Oh, Dark is the best, obviously!$"

EltheRoad_VinosNegotiationMain_Text_10:
# 246 "data/maps/EltheRoad/scripts.pory"
	.string "Hmmhmm, yes, we are quite…\n"
	.string "Wait! You're just buttering me up!$"

EltheRoad_VinosNegotiationMain_Text_11:
# 248 "data/maps/EltheRoad/scripts.pory"
	.string "No way! I'm being honest! Some of my\n"
	.string "best friends are Dark types!$"

EltheRoad_VinosNegotiationMain_Text_12:
# 250 "data/maps/EltheRoad/scripts.pory"
	.string "…Well, alright. It's a good answer.$"

EltheRoad_VinosNegotiationMain_Text_13:
# 254 "data/maps/EltheRoad/scripts.pory"
	.string "Hmm…I think it must be Fire.\n"
	.string "It's just such a cool element.$"

EltheRoad_VinosNegotiationMain_Text_14:
# 256 "data/maps/EltheRoad/scripts.pory"
	.string "Plus, I was a Fire type for a while,\n"
	.string "myself. Self love, yo!$"

EltheRoad_VinosNegotiationMain_Text_15:
# 258 "data/maps/EltheRoad/scripts.pory"
	.string "You have some nerve, telling a Grass\n"
	.string "type that Fire is best…\p"
	.string "But I appreciate your honesty.\n"
	.string "The time for tricks has passed.$"

EltheRoad_VinosNegotiationMain_Text_16:
# 265 "data/maps/EltheRoad/scripts.pory"
	.string "Your berries?$"

EltheRoad_VinosNegotiationMain_Text_17:
# 266 "data/maps/EltheRoad/scripts.pory"
	.string "Eat trail mix$"

EltheRoad_VinosNegotiationMain_Text_18:
# 267 "data/maps/EltheRoad/scripts.pory"
	.string "Just eat it$"

EltheRoad_VinosNegotiationMain_Text_19:
# 268 "data/maps/EltheRoad/scripts.pory"
	.string "Would you like to eat\n"
	.string "one of my berries?$"

EltheRoad_VinosNegotiationMain_Text_20:
# 276 "data/maps/EltheRoad/scripts.pory"
	.string "Ooh, I'll take one!$"

EltheRoad_VinosNegotiationMain_Text_21:
# 279 "data/maps/EltheRoad/scripts.pory"
	.string "Urp…$"

EltheRoad_VinosNegotiationMain_Text_22:
# 281 "data/maps/EltheRoad/scripts.pory"
	.string "Ha! What an idiot! You didn't even\n"
	.string "fall for my camouflage, but you\l"
	.string "still ate my paralyzing berries!\l"
	.string "You're mine!$"

EltheRoad_VinosNegotiationMain_Text_23:
# 287 "data/maps/EltheRoad/scripts.pory"
	.string "Berries? They grow on your body?\n"
	.string "And you…WANT us to eat them?$"

EltheRoad_VinosNegotiationMain_Text_24:
# 289 "data/maps/EltheRoad/scripts.pory"
	.string "Well…yes. They're delicious.\n"
	.string "Or so I'm told.$"

EltheRoad_VinosNegotiationMain_Text_25:
# 291 "data/maps/EltheRoad/scripts.pory"
	.string "What about the ones that your eyes\n"
	.string "are on? Are they edible?$"

EltheRoad_VinosNegotiationMain_Text_26:
# 293 "data/maps/EltheRoad/scripts.pory"
	.string "No, they're…my eyes. Not berries.$"

EltheRoad_VinosNegotiationMain_Text_27:
# 295 "data/maps/EltheRoad/scripts.pory"
	.string "Has anyone ever tried to pick your\n"
	.string "eyes instead of a berry?$"

EltheRoad_VinosNegotiationMain_Text_28:
# 297 "data/maps/EltheRoad/scripts.pory"
	.string "Look, are you gonna eat a berry\n"
	.string "or not!?$"

EltheRoad_VinosNegotiationMain_Text_29:
# 299 "data/maps/EltheRoad/scripts.pory"
	.string "Nope.$"

EltheRoad_VinosNegotiationMain_Text_30:
# 301 "data/maps/EltheRoad/scripts.pory"
	.string "… … … … … … … … … …\p"
	.string "Okay, forget it. Next question.$"

EltheRoad_VinosNegotiationMain_Text_31:
# 305 "data/maps/EltheRoad/scripts.pory"
	.string "Oh, that reminds me I have…$"

EltheRoad_VinosNegotiationMain_Text_32:
# 309 "data/maps/EltheRoad/scripts.pory"
	.string "Trail mix!$"

EltheRoad_VinosNegotiationMain_Text_33:
# 311 "data/maps/EltheRoad/scripts.pory"
	.string "… … … … …\p"
	.string "Your ways confuse me, human.\n"
	.string "I would like to stop talking to you.$"

EltheRoad_VinosNegotiationMain_Text_34:
# 318 "data/maps/EltheRoad/scripts.pory"
	.string "To get my team back$"

EltheRoad_VinosNegotiationMain_Text_35:
# 319 "data/maps/EltheRoad/scripts.pory"
	.string "For thrills$"

EltheRoad_VinosNegotiationMain_Text_36:
# 320 "data/maps/EltheRoad/scripts.pory"
	.string "I don't want to fight$"

EltheRoad_VinosNegotiationMain_Text_37:
# 321 "data/maps/EltheRoad/scripts.pory"
	.string "Why should I let you through?$"

EltheRoad_VinosNegotiationMain_Text_38:
# 328 "data/maps/EltheRoad/scripts.pory"
	.string "I need to get my team back! We got\n"
	.string "separated by the flood.\p"
	.string "I'm their Trainer.\n"
	.string "We need each other.$"

EltheRoad_VinosNegotiationMain_Text_39:
# 330 "data/maps/EltheRoad/scripts.pory"
	.string "Why is that my problem?\n"
	.string "I'm hungry.$"

EltheRoad_VinosNegotiationMain_Text_40:
# 332 "data/maps/EltheRoad/scripts.pory"
	.string "Hungr- were you planning to eat me!?$"

EltheRoad_VinosNegotiationMain_Text_41:
# 334 "data/maps/EltheRoad/scripts.pory"
	.string "No. I was just giving an example of\n"
	.string "something that's not your problem.$"

EltheRoad_VinosNegotiationMain_Text_42:
# 343 "data/maps/EltheRoad/scripts.pory"
	.string "There's no reason for us to fight.\n"
	.string "Look at this place, it's a mess.\p"
	.string "Just let me move on to take care of\n"
	.string "my business, and you can get back\l"
	.string "to finding a new tree, or whatever\l"
	.string "it is you're doing.$"

EltheRoad_VinosNegotiationMain_Text_43:
# 347 "data/maps/EltheRoad/scripts.pory"
	.string "Pokémon don't need a reason to\n"
	.string "fight…but now that you mention it,\l"
	.string "it does sound like a waste\l"
	.string "of time right now…$"

EltheRoad_VinosNegotiationMain_Text_44:
# 352 "data/maps/EltheRoad/scripts.pory"
	.string "I bet you fight every Trainer who\n"
	.string "comes through here, right?\p"
	.string "Wouldn't it be a thrill to let\n"
	.string "one pass through, just this once?\l"
	.string "Get a little crazy with it.$"

EltheRoad_VinosNegotiationMain_Text_45:
# 356 "data/maps/EltheRoad/scripts.pory"
	.string "Hmm…perhaps under the circumstances,\n"
	.string "it would serve me better…$"

EltheRoad_VinosNegotiationMain_Text_46:
# 362 "data/maps/EltheRoad/scripts.pory"
	.string "Thirty years$"

EltheRoad_VinosNegotiationMain_Text_47:
# 363 "data/maps/EltheRoad/scripts.pory"
	.string "Long enough$"

EltheRoad_VinosNegotiationMain_Text_48:
# 364 "data/maps/EltheRoad/scripts.pory"
	.string "Just started$"

EltheRoad_VinosNegotiationMain_Text_49:
# 365 "data/maps/EltheRoad/scripts.pory"
	.string "How long has it been since you\n"
	.string "started training Pokémon?$"

EltheRoad_VinosNegotiationMain_Text_50:
# 372 "data/maps/EltheRoad/scripts.pory"
	.string "Hmm, well me and Demi-Vee just met,\n"
	.string "so I guess I just started.$"

EltheRoad_VinosNegotiationMain_Text_51:
# 374 "data/maps/EltheRoad/scripts.pory"
	.string "No wonder you tried talking. You\n"
	.string "have no idea what you're doing.$"

EltheRoad_VinosNegotiationMain_Text_52:
# 383 "data/maps/EltheRoad/scripts.pory"
	.string "Let me think…Python's last birthday\n"
	.string "was, uh…\p"
	.string "Hmm, I can't remember exactly, but\n"
	.string "I think I started in the year…\p"
	.string "So, it must have been at least\n"
	.string "thirty years.$"

EltheRoad_VinosNegotiationMain_Text_53:
# 387 "data/maps/EltheRoad/scripts.pory"
	.string "You expect me to believe that?\n"
	.string "You don't even look like you're\l"
	.string "thirty years old. You're just\l"
	.string "trying to intimidate me.$"

EltheRoad_VinosNegotiationMain_Text_54:
# 390 "data/maps/EltheRoad/scripts.pory"
	.string "It's true, though…$"

EltheRoad_VinosNegotiationMain_Text_55:
# 394 "data/maps/EltheRoad/scripts.pory"
	.string "Long enough.$"

EltheRoad_VinosNegotiationMain_Text_56:
# 396 "data/maps/EltheRoad/scripts.pory"
	.string "…!$"

EltheRoad_VinosNegotiationMain_Text_57:
# 414 "data/maps/EltheRoad/scripts.pory"
	.string "You're getting on my nerves…\p"
	.string "Enough talk! I should have done this\n"
	.string "from the beginning!$"

EltheRoad_VinosNegotiationMidSuccess_Text_0:
# 428 "data/maps/EltheRoad/scripts.pory"
	.string "…well, I suppose you're not wholly\n"
	.string "unpleasant. And I don't feel like\l"
	.string "jumping you anymore anyway.\l"
	.string "You can pass.\p"
	.string "And here, take this. I have no\n"
	.string "use for it anyway.$"

EltheRoad_VinosDoBattle_Text_0:
# 447 "data/maps/EltheRoad/scripts.pory"
	.string "… … … … …\p"
	.string "…well? Aren't you going to\n"
	.string "finish me off?$"

EltheRoad_VinosDoBattle_Text_1:
# 449 "data/maps/EltheRoad/scripts.pory"
	.string "What? No. I only wanted to get\n"
	.string "through here.$"

EltheRoad_VinosDoBattle_Text_2:
# 451 "data/maps/EltheRoad/scripts.pory"
	.string "…Oh.$"

EltheRoad_VinosDoBattle_Text_3:
# 459 "data/maps/EltheRoad/scripts.pory"
	.string "Well, go along then! And if it\n"
	.string "will get you to leave me alone,\l"
	.string "then take this!$"

EltheRoad_VinosDoBattle_Text_4:
# 462 "data/maps/EltheRoad/scripts.pory"
	.string "Ooh! A crystal! Yummy!$"

EltheRoad_VinosDoBattle_Text_5:
# 464 "data/maps/EltheRoad/scripts.pory"
	.string "Those things are all over the\n"
	.string "place here. I think I saw another\l"
	.string "type of crystal next to that stump\l"
	.string "behind me.\p"
	.string "Run along, then.$"

EltheRoad_EventScript_VinosIdle_Text_0:
# 485 "data/maps/EltheRoad/scripts.pory"
	.string "If you truly just wanted to pass\n"
	.string "by, then hurry up already!\p"
	.string "I don't want to see your face\n"
	.string "right now. Begone.$"

EltheRoad_EventScript_VinosIdle_Text_1:
# 491 "data/maps/EltheRoad/scripts.pory"
	.string "Normally, I try to disguise myself\n"
	.string "as a grapevine.\p"
	.string "If anyone is foolish enough to eat\n"
	.string "of my fruit, they'll be paralyzed\l"
	.string "soon enough to become my prey.\p"
	.string "It's just poor fortune that I've\n"
	.string "been left high and dry, so to speak,\l"
	.string "by this unbearable downpour.\p"
	.string "I can't even recall where my\n"
	.string "usual lurking spot is.$"
