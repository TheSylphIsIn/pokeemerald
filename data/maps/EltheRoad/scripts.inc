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
	msgbox EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_3, MSGBOX_DEFAULT
# 21 "data/maps/EltheRoad/scripts.pory"
	addobjectspriteoffset 1, 0, 0
# 22 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_4, PORTRAIT_DEMIVEE_NEUTRAL, PORTRAIT_DEFAULT_LEFT
# 23 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_5, MSGBOX_DEFAULT
# 24 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_2, PORTRAIT_AMELIA_SHOCK
# 25 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_6, MSGBOX_DEFAULT
# 26 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_4, PORTRAIT_DEMIVEE_ANNOYED, PORTRAIT_DEFAULT_LEFT
# 27 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_7, MSGBOX_DEFAULT
# 28 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_2, PORTRAIT_AMELIA_NEUTRAL
# 29 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_8, MSGBOX_AUTOCLOSE
# 30 "data/maps/EltheRoad/scripts.pory"
	playse SE_PIN
# 31 "data/maps/EltheRoad/scripts.pory"
	applymovement 2, Common_Movement_ExclamationMark
# 32 "data/maps/EltheRoad/scripts.pory"
	waitmovement 0
# 33 "data/maps/EltheRoad/scripts.pory"
	applymovement 2, Common_Movement_Delay48
# 34 "data/maps/EltheRoad/scripts.pory"
	waitmovement 0
# 35 "data/maps/EltheRoad/scripts.pory"
	removeobject 2
# 36 "data/maps/EltheRoad/scripts.pory"
	playse SE_BIKE_HOP
# 37 "data/maps/EltheRoad/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, EltheRoad_Movement_AmeliaJumpUp
# 38 "data/maps/EltheRoad/scripts.pory"
	waitmovement 0
# 39 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_2, PORTRAIT_AMELIA_SHOCK
# 40 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_9, MSGBOX_AUTOCLOSE
# 41 "data/maps/EltheRoad/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, EltheRoad_Movement_AmeliaLookAround
# 42 "data/maps/EltheRoad/scripts.pory"
	waitmovement 0
# 43 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_2, PORTRAIT_AMELIA_STRAINED
# 44 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_10, MSGBOX_DEFAULT
# 45 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_2, PORTRAIT_AMELIA_NEUTRAL
# 46 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_11, MSGBOX_AUTOCLOSE
# 47 "data/maps/EltheRoad/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, EltheRoad_Movement_AmeliaStartLeaving
# 48 "data/maps/EltheRoad/scripts.pory"
	delay 30
# 49 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_4, PORTRAIT_DEMIVEE_NEUTRAL, PORTRAIT_DEFAULT_LEFT
# 50 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_12, MSGBOX_AUTOCLOSE
# 51 "data/maps/EltheRoad/scripts.pory"
	playse SE_BIKE_HOP
# 52 "data/maps/EltheRoad/scripts.pory"
	applymovement 1, EltheRoad_Movement_DemiveeFollow
# 53 "data/maps/EltheRoad/scripts.pory"
	waitmovement 0
# 54 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_4, PORTRAIT_DEMIVEE_ANNOYED, PORTRAIT_DEFAULT_LEFT
# 55 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_13, MSGBOX_DEFAULT
# 56 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_2, PORTRAIT_AMELIA_SMUG
# 57 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_14, MSGBOX_DEFAULT
# 58 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_2, PORTRAIT_AMELIA_NEUTRAL
# 59 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_15, MSGBOX_AUTOCLOSE
# 60 "data/maps/EltheRoad/scripts.pory"
	applymovement 1, EltheRoad_Movement_DemiveeJoin
# 61 "data/maps/EltheRoad/scripts.pory"
	waitmovement 0
# 62 "data/maps/EltheRoad/scripts.pory"
	removeobject 1
# 63 "data/maps/EltheRoad/scripts.pory"
	playfanfare MUS_CAUGHT
# 64 "data/maps/EltheRoad/scripts.pory"
	message EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_16
# 65 "data/maps/EltheRoad/scripts.pory"
	givemon SPECIES_EEVEE, 30, ITEM_EVERSTONE, ITEM_POKE_BALL, NATURE_SERIOUS, 0, MON_MALE, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_TAKE_DOWN, MOVE_BITE, MOVE_COPYCAT, MOVE_SWIFT, FALSE, FALSE, TYPE_DRAGON
# 66 "data/maps/EltheRoad/scripts.pory"
	waitmessage
# 67 "data/maps/EltheRoad/scripts.pory"
	waitfanfare
# 68 "data/maps/EltheRoad/scripts.pory"
	waitbuttonpress
# 69 "data/maps/EltheRoad/scripts.pory"
	closemessage
# 70 "data/maps/EltheRoad/scripts.pory"
	fadedefaultbgm
# 71 "data/maps/EltheRoad/scripts.pory"
	setvar VAR_MAIN_GAME_STATE, 1
	return


EltheRoad_EventScript_FirstTrigger::
# 78 "data/maps/EltheRoad/scripts.pory"
	lock
# 79 "data/maps/EltheRoad/scripts.pory"
	delay 30
# 80 "data/maps/EltheRoad/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 81 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_2, PORTRAIT_AMELIA_NEUTRAL
# 82 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_EventScript_FirstTrigger_Text_0, MSGBOX_DEFAULT
# 83 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_4, PORTRAIT_DEMIVEE_NEUTRAL, PORTRAIT_DEFAULT_LEFT
# 84 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_EventScript_FirstTrigger_Text_1, MSGBOX_DEFAULT
# 87 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_2, PORTRAIT_AMELIA_SMUG
# 88 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_EventScript_FirstTrigger_Text_2, MSGBOX_DEFAULT
# 89 "data/maps/EltheRoad/scripts.pory"
	setpartymemberinfo 0
# 90 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_EventScript_FirstTrigger_Text_3, PORTRAIT_DEMIVEE_ANNOYED, PORTRAIT_DEFAULT_LEFT
# 91 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_EventScript_FirstTrigger_Text_4, MSGBOX_DEFAULT
# 92 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_EventScript_FirstTrigger_Text_3, PORTRAIT_DEMIVEE_NEUTRAL, PORTRAIT_DEFAULT_LEFT
# 93 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_EventScript_FirstTrigger_Text_5, MSGBOX_DEFAULT
# 95 "data/maps/EltheRoad/scripts.pory"
	speakername NULL, 0
# 96 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_EventScript_FirstTrigger_Text_6, MSGBOX_AUTOCLOSE
# 97 "data/maps/EltheRoad/scripts.pory"
	setvar VAR_MAIN_GAME_STATE, 2
	return


EltheRoad_EventScript_FirstSign::
# 102 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_EventScript_FirstSign_Text_0, MSGBOX_SIGN
	return


EltheRoad_EventScript_SecondSign::
# 107 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_EventScript_SecondSign_Text_0, MSGBOX_SIGN
# 108 "data/maps/EltheRoad/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceRight
# 109 "data/maps/EltheRoad/scripts.pory"
	waitmovement 0
# 110 "data/maps/EltheRoad/scripts.pory"
	delay 8
# 111 "data/maps/EltheRoad/scripts.pory"
	goto EltheRoad_EventScript_SpiderRoadblock
	return


EltheRoad_Trigger_VinosTrigger::
# 116 "data/maps/EltheRoad/scripts.pory"
	lock
# 117 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_Trigger_VinosTrigger_Text_0
# 118 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_Trigger_VinosTrigger_Text_1, MSGBOX_DEFAULT
# 119 "data/maps/EltheRoad/scripts.pory"
	speakername NULL, 0
# 120 "data/maps/EltheRoad/scripts.pory"
	message EltheRoad_Trigger_VinosTrigger_Text_2
# 121 "data/maps/EltheRoad/scripts.pory"
	waitmessage
# 122 "data/maps/EltheRoad/scripts.pory"
	dynmultichoice 0, 0, TRUE, 6, 0, DYN_MULTICHOICE_CB_NONE, EltheRoad_Trigger_VinosTrigger_Text_3, EltheRoad_Trigger_VinosTrigger_Text_4, EltheRoad_Trigger_VinosTrigger_Text_5
# 123 "data/maps/EltheRoad/scripts.pory"
	closemessage
# 124 "data/maps/EltheRoad/scripts.pory"
	switch VAR_RESULT
# 126 "data/maps/EltheRoad/scripts.pory"
	case 0, EltheRoad_Trigger_VinosTrigger_2
# 158 "data/maps/EltheRoad/scripts.pory"
	case 1, EltheRoad_Trigger_VinosTrigger_3
# 176 "data/maps/EltheRoad/scripts.pory"
	case 2, EltheRoad_Trigger_VinosTrigger_4
	return

EltheRoad_Trigger_VinosTrigger_2:
# 127 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_2, PORTRAIT_AMELIA_NEUTRAL
# 128 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_Trigger_VinosTrigger_Text_6, MSGBOX_AUTOCLOSE
# 129 "data/maps/EltheRoad/scripts.pory"
	playse SE_PIN
# 130 "data/maps/EltheRoad/scripts.pory"
	applymovement 3, Common_Movement_FaceDown
# 131 "data/maps/EltheRoad/scripts.pory"
	waitmovement 0
# 132 "data/maps/EltheRoad/scripts.pory"
	applymovement 3, Common_Movement_ExclamationMark
# 133 "data/maps/EltheRoad/scripts.pory"
	waitmovement 0
# 134 "data/maps/EltheRoad/scripts.pory"
	delay 48
# 135 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_Trigger_VinosTrigger_Text_0
# 136 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_Trigger_VinosTrigger_Text_7, MSGBOX_AUTOCLOSE
# 137 "data/maps/EltheRoad/scripts.pory"
	applymovement 3, EltheRoad_Movement_VinosGetOnLog
# 138 "data/maps/EltheRoad/scripts.pory"
	waitmovement 0
# 139 "data/maps/EltheRoad/scripts.pory"
	message EltheRoad_Trigger_VinosTrigger_Text_8
# 140 "data/maps/EltheRoad/scripts.pory"
	waitmessage
# 141 "data/maps/EltheRoad/scripts.pory"
	dynmultichoice 0, 0, TRUE, 6, 0, DYN_MULTICHOICE_CB_NONE, EltheRoad_Trigger_VinosTrigger_Text_9, EltheRoad_Trigger_VinosTrigger_Text_4, EltheRoad_Trigger_VinosTrigger_Text_5
# 142 "data/maps/EltheRoad/scripts.pory"
	closemessage
# 143 "data/maps/EltheRoad/scripts.pory"
	switch VAR_RESULT
# 145 "data/maps/EltheRoad/scripts.pory"
	case 0, EltheRoad_Trigger_VinosTrigger_6
	return

EltheRoad_Trigger_VinosTrigger_3:
# 159 "data/maps/EltheRoad/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, Common_Movement_WalkUp
# 160 "data/maps/EltheRoad/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
# 161 "data/maps/EltheRoad/scripts.pory"
	waitmovement 0
# 162 "data/maps/EltheRoad/scripts.pory"
	delay 30
# 163 "data/maps/EltheRoad/scripts.pory"
	message EltheRoad_Trigger_VinosTrigger_Text_8
# 164 "data/maps/EltheRoad/scripts.pory"
	waitmessage
# 165 "data/maps/EltheRoad/scripts.pory"
	dynmultichoice 0, 0, TRUE, 6, 0, DYN_MULTICHOICE_CB_NONE, EltheRoad_Trigger_VinosTrigger_Text_3, EltheRoad_Trigger_VinosTrigger_Text_4, EltheRoad_Trigger_VinosTrigger_Text_5
# 166 "data/maps/EltheRoad/scripts.pory"
	closemessage
	return

EltheRoad_Trigger_VinosTrigger_4:
# 177 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_2, PORTRAIT_AMELIA_STRAINED
# 178 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_Trigger_VinosTrigger_Text_11, MSGBOX_AUTOCLOSE
	return

EltheRoad_Trigger_VinosTrigger_6:
# 146 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_2, PORTRAIT_AMELIA_NEUTRAL
# 147 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_Trigger_VinosTrigger_Text_10, MSGBOX_AUTOCLOSE
# 148 "data/maps/EltheRoad/scripts.pory"
	playse SE_PIN
# 149 "data/maps/EltheRoad/scripts.pory"
	applymovement 3, Common_Movement_ExclamationMark
# 150 "data/maps/EltheRoad/scripts.pory"
	waitmovement 0
# 151 "data/maps/EltheRoad/scripts.pory"
	delay 48
# 152 "data/maps/EltheRoad/scripts.pory"
	goto EltheRoad_VinosNegotiationMain
	return


EltheRoad_VinosNegotiationMain::
# 198 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_VinosNegotiationMain_Text_0
# 199 "data/maps/EltheRoad/scripts.pory"
	message EltheRoad_VinosNegotiationMain_Text_1
# 200 "data/maps/EltheRoad/scripts.pory"
	waitmessage
# 201 "data/maps/EltheRoad/scripts.pory"
	waitbuttonpress
# 202 "data/maps/EltheRoad/scripts.pory"
	setvar VAR_0x8008, 2
# 203 "data/maps/EltheRoad/scripts.pory"
	special GetNegotiationTopic
# 204 "data/maps/EltheRoad/scripts.pory"
	compare VAR_RESULT, 0xFF
	goto_if_eq EltheRoad_VinosNegotiationMain_1
# 210 "data/maps/EltheRoad/scripts.pory"
	switch VAR_RESULT
# 212 "data/maps/EltheRoad/scripts.pory"
	case 0, EltheRoad_VinosNegotiationMain_6
# 254 "data/maps/EltheRoad/scripts.pory"
	case 1, EltheRoad_VinosNegotiationMain_7
EltheRoad_VinosNegotiationMain_4:
# 312 "data/maps/EltheRoad/scripts.pory"
	delay 16
# 313 "data/maps/EltheRoad/scripts.pory"
	compare VAR_NEGOTIATION_SCORE, 2
	goto_if_gt EltheRoad_VinosNegotiationMain_8
# 317 "data/maps/EltheRoad/scripts.pory"
	compare VAR_NEGOTIATION_SCORE, 0
	goto_if_eq EltheRoad_VinosNegotiationMain_9
# 323 "data/maps/EltheRoad/scripts.pory"
	goto EltheRoad_VinosNegotiationMain
	return

EltheRoad_VinosNegotiationMain_1:
# 206 "data/maps/EltheRoad/scripts.pory"
	goto EltheRoad_VinosNegotiationMidSuccess
	return

EltheRoad_VinosNegotiationMain_6:
# 213 "data/maps/EltheRoad/scripts.pory"
	dynmultipush EltheRoad_VinosNegotiationMain_Text_2, 1
# 214 "data/maps/EltheRoad/scripts.pory"
	dynmultipush EltheRoad_VinosNegotiationMain_Text_3, 0
# 215 "data/maps/EltheRoad/scripts.pory"
	dynmultipush EltheRoad_VinosNegotiationMain_Text_4, 2
# 216 "data/maps/EltheRoad/scripts.pory"
	message EltheRoad_VinosNegotiationMain_Text_5
# 217 "data/maps/EltheRoad/scripts.pory"
	waitmessage
# 218 "data/maps/EltheRoad/scripts.pory"
	dynmultistack 0, 0, FALSE, 6, TRUE, 0, DYN_MULTICHOICE_CB_NONE
# 219 "data/maps/EltheRoad/scripts.pory"
	switch VAR_RESULT
# 221 "data/maps/EltheRoad/scripts.pory"
	case 0, EltheRoad_VinosNegotiationMain_14
# 234 "data/maps/EltheRoad/scripts.pory"
	case 1, EltheRoad_VinosNegotiationMain_15
# 244 "data/maps/EltheRoad/scripts.pory"
	case 2, EltheRoad_VinosNegotiationMain_16
	goto EltheRoad_VinosNegotiationMain_4

EltheRoad_VinosNegotiationMain_7:
# 256 "data/maps/EltheRoad/scripts.pory"
	dynmultipush EltheRoad_VinosNegotiationMain_Text_16, 1
# 257 "data/maps/EltheRoad/scripts.pory"
	dynmultipush EltheRoad_VinosNegotiationMain_Text_17, 2
# 258 "data/maps/EltheRoad/scripts.pory"
	dynmultipush EltheRoad_VinosNegotiationMain_Text_18, 0
# 259 "data/maps/EltheRoad/scripts.pory"
	message EltheRoad_VinosNegotiationMain_Text_19
# 260 "data/maps/EltheRoad/scripts.pory"
	waitmessage
# 261 "data/maps/EltheRoad/scripts.pory"
	dynmultistack 0, 0, FALSE, 6, TRUE, 0, DYN_MULTICHOICE_CB_NONE
# 262 "data/maps/EltheRoad/scripts.pory"
	switch VAR_RESULT
# 264 "data/maps/EltheRoad/scripts.pory"
	case 0, EltheRoad_VinosNegotiationMain_18
# 276 "data/maps/EltheRoad/scripts.pory"
	case 1, EltheRoad_VinosNegotiationMain_19
# 294 "data/maps/EltheRoad/scripts.pory"
	case 2, EltheRoad_VinosNegotiationMain_20
	goto EltheRoad_VinosNegotiationMain_4

EltheRoad_VinosNegotiationMain_8:
	return

EltheRoad_VinosNegotiationMain_9:
# 319 "data/maps/EltheRoad/scripts.pory"
	goto EltheRoad_VinosDoBattle
	return

EltheRoad_VinosNegotiationMain_14:
# 222 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_2, PORTRAIT_AMELIA_SERIOUSLY
# 223 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_VinosNegotiationMain_Text_6, MSGBOX_DEFAULT
# 224 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_2, PORTRAIT_AMELIA_SHOCK
# 225 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_VinosNegotiationMain_Text_7, MSGBOX_DEFAULT
# 227 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_VinosNegotiationMain_Text_0
# 228 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_VinosNegotiationMain_Text_8, MSGBOX_AUTOCLOSE
# 229 "data/maps/EltheRoad/scripts.pory"
	setflag FLAG_NOT_PERFECT_CONVERSATION
# 230 "data/maps/EltheRoad/scripts.pory"
	compare VAR_NEGOTIATION_SCORE, 0
	goto_if_gt EltheRoad_VinosNegotiationMain_21
	goto EltheRoad_VinosNegotiationMain_4

EltheRoad_VinosNegotiationMain_15:
# 235 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_2, PORTRAIT_AMELIA_NEUTRAL
# 236 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_VinosNegotiationMain_Text_9, MSGBOX_DEFAULT
# 237 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_VinosNegotiationMain_Text_0
# 238 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_VinosNegotiationMain_Text_10, MSGBOX_DEFAULT
# 239 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_2, PORTRAIT_AMELIA_SHOCK
# 240 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_VinosNegotiationMain_Text_11, MSGBOX_DEFAULT
# 241 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_VinosNegotiationMain_Text_0
# 242 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_VinosNegotiationMain_Text_12, MSGBOX_AUTOCLOSE
# 243 "data/maps/EltheRoad/scripts.pory"
	addvar VAR_NEGOTIATION_SCORE, 1
	goto EltheRoad_VinosNegotiationMain_4

EltheRoad_VinosNegotiationMain_16:
# 245 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_2, PORTRAIT_AMELIA_NEUTRAL
# 246 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_VinosNegotiationMain_Text_13, MSGBOX_DEFAULT
# 247 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_2, PORTRAIT_AMELIA_WINK
# 248 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_VinosNegotiationMain_Text_14, MSGBOX_DEFAULT
# 249 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_VinosNegotiationMain_Text_0
# 250 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_VinosNegotiationMain_Text_15, MSGBOX_AUTOCLOSE
# 252 "data/maps/EltheRoad/scripts.pory"
	addvar VAR_NEGOTIATION_SCORE, 2
	goto EltheRoad_VinosNegotiationMain_4

EltheRoad_VinosNegotiationMain_18:
# 265 "data/maps/EltheRoad/scripts.pory"
	callnative ParalyzeLead
# 266 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_EventScript_FirstTrigger_Text_3, PORTRAIT_DEMIVEE_NEUTRAL
# 267 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_VinosNegotiationMain_Text_20, MSGBOX_AUTOCLOSE
# 268 "data/maps/EltheRoad/scripts.pory"
	delay 90
# 269 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_EventScript_FirstTrigger_Text_3, PORTRAIT_DEMIVEE_ANNOYED
# 270 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_VinosNegotiationMain_Text_21, MSGBOX_DEFAULT
# 271 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_VinosNegotiationMain_Text_0
# 272 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_VinosNegotiationMain_Text_22, MSGBOX_AUTOCLOSE
# 274 "data/maps/EltheRoad/scripts.pory"
	call EltheRoad_CleanUpNegotiationValues
# 275 "data/maps/EltheRoad/scripts.pory"
	goto EltheRoad_VinosDoBattle
	goto EltheRoad_VinosNegotiationMain_4

EltheRoad_VinosNegotiationMain_19:
# 277 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_2, PORTRAIT_AMELIA_NEUTRAL
# 278 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_VinosNegotiationMain_Text_23, MSGBOX_DEFAULT
# 279 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_VinosNegotiationMain_Text_0
# 280 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_VinosNegotiationMain_Text_24, MSGBOX_DEFAULT
# 281 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_2, PORTRAIT_AMELIA_NEUTRAL
# 282 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_VinosNegotiationMain_Text_25, MSGBOX_DEFAULT
# 283 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_VinosNegotiationMain_Text_0
# 284 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_VinosNegotiationMain_Text_26, MSGBOX_DEFAULT
# 285 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_2, PORTRAIT_AMELIA_NEUTRAL
# 286 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_VinosNegotiationMain_Text_27, MSGBOX_DEFAULT
# 287 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_VinosNegotiationMain_Text_0
# 288 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_VinosNegotiationMain_Text_28, MSGBOX_DEFAULT
# 289 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_2, PORTRAIT_AMELIA_SMUG
# 290 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_VinosNegotiationMain_Text_29, MSGBOX_DEFAULT
# 291 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_VinosNegotiationMain_Text_0
# 292 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_VinosNegotiationMain_Text_30, MSGBOX_AUTOCLOSE
# 293 "data/maps/EltheRoad/scripts.pory"
	addvar VAR_NEGOTIATION_SCORE, 1
	goto EltheRoad_VinosNegotiationMain_4

EltheRoad_VinosNegotiationMain_20:
# 295 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_2, PORTRAIT_AMELIA_NEUTRAL
# 296 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_VinosNegotiationMain_Text_31, MSGBOX_AUTOCLOSE
# 299 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_2, PORTRAIT_AMELIA_MUNCH
# 300 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_VinosNegotiationMain_Text_32, MSGBOX_DEFAULT
# 301 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_VinosNegotiationMain_Text_0
# 302 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_VinosNegotiationMain_Text_33, MSGBOX_AUTOCLOSE
# 303 "data/maps/EltheRoad/scripts.pory"
	addvar VAR_NEGOTIATION_SCORE, 2
	goto EltheRoad_VinosNegotiationMain_4

EltheRoad_VinosNegotiationMain_21:
# 232 "data/maps/EltheRoad/scripts.pory"
	subvar VAR_NEGOTIATION_SCORE, 1
	goto EltheRoad_VinosNegotiationMain_4


EltheRoad_VinosNegotiationMidSuccess::
	return


EltheRoad_VinosDoBattle::
# 335 "data/maps/EltheRoad/scripts.pory"
	setwildbattle SPECIES_BELLSPROUT, 35, ITEM_NONE
# 336 "data/maps/EltheRoad/scripts.pory"
	dowildbattle
# 337 "data/maps/EltheRoad/scripts.pory"
	waitstate
	return


EltheRoad_CleanUpNegotiationValues::
# 342 "data/maps/EltheRoad/scripts.pory"
	setvar VAR_NEGOTIATION_SCORE, 0
# 343 "data/maps/EltheRoad/scripts.pory"
	clearflag FLAG_TEMP_4
# 344 "data/maps/EltheRoad/scripts.pory"
	clearflag FLAG_TEMP_1
# 345 "data/maps/EltheRoad/scripts.pory"
	clearflag FLAG_TEMP_2
# 346 "data/maps/EltheRoad/scripts.pory"
	clearflag FLAG_TEMP_3
# 347 "data/maps/EltheRoad/scripts.pory"
	clearflag FLAG_NOT_PERFECT_CONVERSATION
	return


EltheRoad_EventScript_SpiderRoadblock::
# 352 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_2, PORTRAIT_AMELIA_SERIOUSLY
# 353 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_EventScript_SpiderRoadblock_Text_0, MSGBOX_AUTOCLOSE
	return


# 356 "data/maps/EltheRoad/scripts.pory"
EltheRoad_Movement_AmeliaJumpUp:
# 358 "data/maps/EltheRoad/scripts.pory"
	set_visible
# 359 "data/maps/EltheRoad/scripts.pory"
	jump_in_place_left
	step_end

# 362 "data/maps/EltheRoad/scripts.pory"
EltheRoad_Movement_AmeliaLookAround:
# 364 "data/maps/EltheRoad/scripts.pory"
	face_up
# 365 "data/maps/EltheRoad/scripts.pory"
	delay_16
# 366 "data/maps/EltheRoad/scripts.pory"
	face_down
# 367 "data/maps/EltheRoad/scripts.pory"
	delay_16
# 368 "data/maps/EltheRoad/scripts.pory"
	face_up
# 369 "data/maps/EltheRoad/scripts.pory"
	delay_16
# 370 "data/maps/EltheRoad/scripts.pory"
	face_down
# 371 "data/maps/EltheRoad/scripts.pory"
	delay_16
# 372 "data/maps/EltheRoad/scripts.pory"
	face_right
# 373 "data/maps/EltheRoad/scripts.pory"
	delay_16
# 373 "data/maps/EltheRoad/scripts.pory"
	delay_16
# 373 "data/maps/EltheRoad/scripts.pory"
	delay_16
# 374 "data/maps/EltheRoad/scripts.pory"
	face_left
# 375 "data/maps/EltheRoad/scripts.pory"
	delay_16
# 375 "data/maps/EltheRoad/scripts.pory"
	delay_16
# 375 "data/maps/EltheRoad/scripts.pory"
	delay_16
	step_end

# 378 "data/maps/EltheRoad/scripts.pory"
EltheRoad_Movement_AmeliaStartLeaving:
# 380 "data/maps/EltheRoad/scripts.pory"
	walk_up
# 380 "data/maps/EltheRoad/scripts.pory"
	walk_up
# 381 "data/maps/EltheRoad/scripts.pory"
	walk_right
# 381 "data/maps/EltheRoad/scripts.pory"
	walk_right
# 381 "data/maps/EltheRoad/scripts.pory"
	walk_right
# 382 "data/maps/EltheRoad/scripts.pory"
	delay_16
# 382 "data/maps/EltheRoad/scripts.pory"
	delay_16
# 383 "data/maps/EltheRoad/scripts.pory"
	face_left
	step_end

# 386 "data/maps/EltheRoad/scripts.pory"
EltheRoad_Movement_DemiveeFollow:
# 388 "data/maps/EltheRoad/scripts.pory"
	jump_up
# 389 "data/maps/EltheRoad/scripts.pory"
	walk_fast_up
# 390 "data/maps/EltheRoad/scripts.pory"
	walk_fast_right
# 390 "data/maps/EltheRoad/scripts.pory"
	walk_fast_right
	step_end

# 393 "data/maps/EltheRoad/scripts.pory"
EltheRoad_Movement_DemiveeJoin:
# 395 "data/maps/EltheRoad/scripts.pory"
	walk_slow_right
# 396 "data/maps/EltheRoad/scripts.pory"
	enter_pokeball
	step_end

# 399 "data/maps/EltheRoad/scripts.pory"
EltheRoad_Movement_VinosGetOnLog:
# 401 "data/maps/EltheRoad/scripts.pory"
	walk_fast_right
# 402 "data/maps/EltheRoad/scripts.pory"
	jump_right
# 403 "data/maps/EltheRoad/scripts.pory"
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
# 22 "data/maps/EltheRoad/scripts.pory"
	.string "Eevee?$"

EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_5:
# 23 "data/maps/EltheRoad/scripts.pory"
	.string "Oh. Pardon me. I was considering\n"
	.string "eating you.$"

EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_6:
# 25 "data/maps/EltheRoad/scripts.pory"
	.string "Dude! Seriously?$"

EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_7:
# 27 "data/maps/EltheRoad/scripts.pory"
	.string "I saw you getting tossed around\n"
	.string "unconscious in a flood.\l"
	.string "I really didn't think you survived.$"

EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_8:
# 29 "data/maps/EltheRoad/scripts.pory"
	.string "I'm made of tough stuff. It takes\n"
	.string "more than a little water to…$"

EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_9:
# 40 "data/maps/EltheRoad/scripts.pory"
	.string "The flood! What happened to my team?$"

EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_10:
# 44 "data/maps/EltheRoad/scripts.pory"
	.string "My team…ugh, my head. I can't think.$"

EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_11:
# 46 "data/maps/EltheRoad/scripts.pory"
	.string "I have their Poké Balls here.\n"
	.string "Guess I should go find them.$"

EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_12:
# 50 "data/maps/EltheRoad/scripts.pory"
	.string "Wait! You shouldn't go alone.$"

EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_13:
# 55 "data/maps/EltheRoad/scripts.pory"
	.string "The local Pokémon always get irate\n"
	.string "after a flood. It would be dangerous\l"
	.string "for a human wandering alone.$"

EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_14:
# 57 "data/maps/EltheRoad/scripts.pory"
	.string "I can handle myself pretty well.\n"
	.string "And I'm a Pokémon Ranger, too.$"

EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_15:
# 59 "data/maps/EltheRoad/scripts.pory"
	.string "But if you want to come along,\n"
	.string "I won't say no. Welcome aboard!$"

EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_16:
# 64 "data/maps/EltheRoad/scripts.pory"
	.string "Eevee joined your party!$"

EltheRoad_EventScript_FirstTrigger_Text_0:
# 82 "data/maps/EltheRoad/scripts.pory"
	.string "I meant to ask earlier, but, uh,\n"
	.string "what are you, exactly?\p"
	.string "You look like an Eevee, but those\n"
	.string "markings…are they natural?$"

EltheRoad_EventScript_FirstTrigger_Text_1:
# 84 "data/maps/EltheRoad/scripts.pory"
	.string "Yes, I…well, I don't fully remember\n"
	.string "the circumstances. My body has gone\l"
	.string "through some changes.\p"
	.string "It probably has something to do\n"
	.string "with these crystals I eat…\p"
	.string "But now, I can't really evolve.\n"
	.string "I gain power from evolution stones,\l"
	.string "but it's different.$"

EltheRoad_EventScript_FirstTrigger_Text_2:
# 88 "data/maps/EltheRoad/scripts.pory"
	.string "So you're some kind of…Demi-Vee?$"

EltheRoad_EventScript_FirstTrigger_Text_3:
# 90 "data/maps/EltheRoad/scripts.pory"
	.string "Demi-Vee$"

EltheRoad_EventScript_FirstTrigger_Text_4:
# 91 "data/maps/EltheRoad/scripts.pory"
	.string "What?$"

EltheRoad_EventScript_FirstTrigger_Text_5:
# 93 "data/maps/EltheRoad/scripts.pory"
	.string "Regardless…if you find any evolution\n"
	.string "shards, I can change form with them.\p"
	.string "My stats and moves in battle\n"
	.string "depend on my current form.\p"
	.string "Also, I've lived here for as long\n"
	.string "as I can remember.\p"
	.string "If you need more info or advice\n"
	.string "about anything, just ask me.$"

EltheRoad_EventScript_FirstTrigger_Text_6:
# 96 "data/maps/EltheRoad/scripts.pory"
	.string "(Press R while Demi-Vee is following\n"
	.string "you to get advice!)\p"
	.string "(He will talk about the person\n"
	.string "you're facing, or give general hints\l"
	.string "for how to progress.)$"

EltheRoad_EventScript_FirstSign_Text_0:
# 102 "data/maps/EltheRoad/scripts.pory"
	.string "{CLEAR_TO 60}{LEFT_ARROW} To Rehocan Town\n"
	.string "{CLEAR_TO 76}To Elthe City {RIGHT_ARROW}$"

EltheRoad_EventScript_SecondSign_Text_0:
# 107 "data/maps/EltheRoad/scripts.pory"
	.string "{CLEAR_TO 66}{LEFT_ARROW} To Elthe City\n"
	.string "{CLEAR_TO 36}BEWARE BILLIARACH WEBS {RIGHT_ARROW}$"

EltheRoad_Trigger_VinosTrigger_Text_0:
# 117 "data/maps/EltheRoad/scripts.pory"
	.string "Vine Mon$"

EltheRoad_Trigger_VinosTrigger_Text_1:
# 118 "data/maps/EltheRoad/scripts.pory"
	.string "Ugh…stupid flood.\n"
	.string "Washed away a perfect lurking spot.$"

EltheRoad_Trigger_VinosTrigger_Text_2:
# 120 "data/maps/EltheRoad/scripts.pory"
	.string "The Pokémon hasn't noticed you…\n"
	.string "What will you do?$"

EltheRoad_Trigger_VinosTrigger_Text_3:
# 122 "data/maps/EltheRoad/scripts.pory"
	.string "Call Out$"

EltheRoad_Trigger_VinosTrigger_Text_4:
# 122 "data/maps/EltheRoad/scripts.pory"
	.string "Step Forward$"

EltheRoad_Trigger_VinosTrigger_Text_5:
# 122 "data/maps/EltheRoad/scripts.pory"
	.string "Attack$"

EltheRoad_Trigger_VinosTrigger_Text_6:
# 128 "data/maps/EltheRoad/scripts.pory"
	.string "Excuse me…$"

EltheRoad_Trigger_VinosTrigger_Text_7:
# 136 "data/maps/EltheRoad/scripts.pory"
	.string "A human…! I need to get in position!$"

EltheRoad_Trigger_VinosTrigger_Text_8:
# 139 "data/maps/EltheRoad/scripts.pory"
	.string "Now what?$"

EltheRoad_Trigger_VinosTrigger_Text_9:
# 141 "data/maps/EltheRoad/scripts.pory"
	.string "Negotiate$"

EltheRoad_Trigger_VinosTrigger_Text_10:
# 147 "data/maps/EltheRoad/scripts.pory"
	.string "Do you mind if I pass through here?$"

EltheRoad_Trigger_VinosTrigger_Text_11:
# 178 "data/maps/EltheRoad/scripts.pory"
	.string "Demi-Vee, attack!$"

EltheRoad_VinosNegotiationMain_Text_0:
# 198 "data/maps/EltheRoad/scripts.pory"
	.string "Vinos$"

EltheRoad_VinosNegotiationMain_Text_1:
# 199 "data/maps/EltheRoad/scripts.pory"
	.string "Alright, then…$"

EltheRoad_VinosNegotiationMain_Text_2:
# 213 "data/maps/EltheRoad/scripts.pory"
	.string "Dark$"

EltheRoad_VinosNegotiationMain_Text_3:
# 214 "data/maps/EltheRoad/scripts.pory"
	.string "Grass$"

EltheRoad_VinosNegotiationMain_Text_4:
# 215 "data/maps/EltheRoad/scripts.pory"
	.string "Fire$"

EltheRoad_VinosNegotiationMain_Text_5:
# 216 "data/maps/EltheRoad/scripts.pory"
	.string "Which Type of Pokémon is best,\n"
	.string "in your opinion?$"

EltheRoad_VinosNegotiationMain_Text_6:
# 223 "data/maps/EltheRoad/scripts.pory"
	.string "It's, uh…Grass. Yeah. I just love\n"
	.string "Grass type Pokémon…\p"
	.string "… … … … …$"

EltheRoad_VinosNegotiationMain_Text_7:
# 225 "data/maps/EltheRoad/scripts.pory"
	.string "You know what, no, I can't even {CENSOR}fuck{UNCENSOR}ing\n"
	.string "joke about it. All the major\l"
	.string "terrible events in my life were\l"
	.string "caused by Grass types.\l"
	.string "{CENSOR}Fuck{UNCENSOR} Grass types. I hate 'em.$"

EltheRoad_VinosNegotiationMain_Text_8:
# 228 "data/maps/EltheRoad/scripts.pory"
	.string "You'd disrespect me to my face…\n"
	.string "You have some nerve, human.$"

EltheRoad_VinosNegotiationMain_Text_9:
# 236 "data/maps/EltheRoad/scripts.pory"
	.string "Oh, Dark is the best, obviously!$"

EltheRoad_VinosNegotiationMain_Text_10:
# 238 "data/maps/EltheRoad/scripts.pory"
	.string "Hmmhmm, yes, we are quite…\n"
	.string "Wait! You're just buttering me up!$"

EltheRoad_VinosNegotiationMain_Text_11:
# 240 "data/maps/EltheRoad/scripts.pory"
	.string "No way! I'm being honest! Some of my\n"
	.string "best friends are Dark types!$"

EltheRoad_VinosNegotiationMain_Text_12:
# 242 "data/maps/EltheRoad/scripts.pory"
	.string "…Well, alright. It's a good answer.$"

EltheRoad_VinosNegotiationMain_Text_13:
# 246 "data/maps/EltheRoad/scripts.pory"
	.string "Hmm…I think it must be Fire.\n"
	.string "It's just such a cool element.$"

EltheRoad_VinosNegotiationMain_Text_14:
# 248 "data/maps/EltheRoad/scripts.pory"
	.string "Plus, I was a Fire type for a while,\n"
	.string "myself. Self love, yo!$"

EltheRoad_VinosNegotiationMain_Text_15:
# 250 "data/maps/EltheRoad/scripts.pory"
	.string "You have some nerve, telling a Grass\n"
	.string "type that Fire is best…\p"
	.string "But I appreciate your honesty.\n"
	.string "The time for tricks has passed.$"

EltheRoad_VinosNegotiationMain_Text_16:
# 256 "data/maps/EltheRoad/scripts.pory"
	.string "Your berries?$"

EltheRoad_VinosNegotiationMain_Text_17:
# 257 "data/maps/EltheRoad/scripts.pory"
	.string "Eat trail mix$"

EltheRoad_VinosNegotiationMain_Text_18:
# 258 "data/maps/EltheRoad/scripts.pory"
	.string "Just eat it$"

EltheRoad_VinosNegotiationMain_Text_19:
# 259 "data/maps/EltheRoad/scripts.pory"
	.string "Would you like to eat\n"
	.string "one of my berries?$"

EltheRoad_VinosNegotiationMain_Text_20:
# 267 "data/maps/EltheRoad/scripts.pory"
	.string "Ooh, I'll take one!$"

EltheRoad_VinosNegotiationMain_Text_21:
# 270 "data/maps/EltheRoad/scripts.pory"
	.string "Urp…$"

EltheRoad_VinosNegotiationMain_Text_22:
# 272 "data/maps/EltheRoad/scripts.pory"
	.string "Ha! What an idiot! You didn't even\n"
	.string "fall for my camouflage, but you\l"
	.string "still ate my paralyzing berries!\l"
	.string "You're mine!$"

EltheRoad_VinosNegotiationMain_Text_23:
# 278 "data/maps/EltheRoad/scripts.pory"
	.string "Berries? They grow on your body?\n"
	.string "And you…WANT us to eat them?$"

EltheRoad_VinosNegotiationMain_Text_24:
# 280 "data/maps/EltheRoad/scripts.pory"
	.string "Well…yes. They're delicious.\n"
	.string "Or so I'm told.$"

EltheRoad_VinosNegotiationMain_Text_25:
# 282 "data/maps/EltheRoad/scripts.pory"
	.string "What about the ones that your eyes\n"
	.string "are on? Are they edible?$"

EltheRoad_VinosNegotiationMain_Text_26:
# 284 "data/maps/EltheRoad/scripts.pory"
	.string "No, they're…my eyes. Not berries.$"

EltheRoad_VinosNegotiationMain_Text_27:
# 286 "data/maps/EltheRoad/scripts.pory"
	.string "Has anyone ever tried to pick your\n"
	.string "eyes instead of a berry?$"

EltheRoad_VinosNegotiationMain_Text_28:
# 288 "data/maps/EltheRoad/scripts.pory"
	.string "Look, are you gonna eat a berry\n"
	.string "or not!?$"

EltheRoad_VinosNegotiationMain_Text_29:
# 290 "data/maps/EltheRoad/scripts.pory"
	.string "Nope.$"

EltheRoad_VinosNegotiationMain_Text_30:
# 292 "data/maps/EltheRoad/scripts.pory"
	.string "… … … … … … … … … …\p"
	.string "Okay, forget it. Next question.$"

EltheRoad_VinosNegotiationMain_Text_31:
# 296 "data/maps/EltheRoad/scripts.pory"
	.string "Oh, that reminds me I have…$"

EltheRoad_VinosNegotiationMain_Text_32:
# 300 "data/maps/EltheRoad/scripts.pory"
	.string "Trail mix!$"

EltheRoad_VinosNegotiationMain_Text_33:
# 302 "data/maps/EltheRoad/scripts.pory"
	.string "… … … … …\p"
	.string "Your ways confuse me, human.\n"
	.string "I would like to stop talking to you.$"

EltheRoad_EventScript_SpiderRoadblock_Text_0:
# 353 "data/maps/EltheRoad/scripts.pory"
	.string "Guess we can't go this way.\n"
	.string "…not that I wanted to anyway.\p"
	.string "I won't complain about avoiding\n"
	.string "a spider nest.$"
