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
	playse SE_LEDGE
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
	additem ITEM_LEAFSHARD
# 82 "data/maps/EltheRoad/scripts.pory"
	message EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_16
# 83 "data/maps/EltheRoad/scripts.pory"
	waitmessage
# 84 "data/maps/EltheRoad/scripts.pory"
	waitfanfare
# 85 "data/maps/EltheRoad/scripts.pory"
	waitbuttonpress
# 86 "data/maps/EltheRoad/scripts.pory"
	closemessage
# 87 "data/maps/EltheRoad/scripts.pory"
	fadedefaultbgm
# 88 "data/maps/EltheRoad/scripts.pory"
	setvar VAR_MAIN_GAME_STATE, 1
	return


EltheRoad_EventScript_FirstTrigger::
# 95 "data/maps/EltheRoad/scripts.pory"
	lock
# 96 "data/maps/EltheRoad/scripts.pory"
	delay 30
# 97 "data/maps/EltheRoad/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 98 "data/maps/EltheRoad/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, Common_Movement_FaceRight
# 99 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_2, PORTRAIT_AMELIA_NEUTRAL
# 100 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_EventScript_FirstTrigger_Text_0
# 101 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_4, PORTRAIT_DEMIVEE_NEUTRAL, PORTRAIT_DEFAULT_LEFT
# 102 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_EventScript_FirstTrigger_Text_1
# 105 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_2, PORTRAIT_AMELIA_SMUG
# 106 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_EventScript_FirstTrigger_Text_2
# 107 "data/maps/EltheRoad/scripts.pory"
	setpartymemberinfo 0
# 108 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_EventScript_FirstTrigger_Text_3, PORTRAIT_DEMIVEE_HUH, PORTRAIT_DEFAULT_LEFT
# 109 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_EventScript_FirstTrigger_Text_4
# 110 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_EventScript_FirstTrigger_Text_3, PORTRAIT_DEMIVEE_NEUTRAL, PORTRAIT_DEFAULT_LEFT
# 111 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_EventScript_FirstTrigger_Text_5
# 113 "data/maps/EltheRoad/scripts.pory"
	speakername NULL, 0
# 114 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_EventScript_FirstTrigger_Text_6, MSGBOX_AUTOCLOSE
# 115 "data/maps/EltheRoad/scripts.pory"
	setvar VAR_MAIN_GAME_STATE, 2
	return


EltheRoad_EventScript_DemiveeTutorialSign::
# 120 "data/maps/EltheRoad/scripts.pory"
	lock
# 121 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_EventScript_DemiveeTutorialSign_Text_0
# 124 "data/maps/EltheRoad/scripts.pory"
	goto EltheRoad_EventScript_DemiveeTutorialMultichoice
	return


EltheRoad_EventScript_DemiveeTutorialMultichoice::
# 129 "data/maps/EltheRoad/scripts.pory"
	message EltheRoad_EventScript_DemiveeTutorialMultichoice_Text_0
# 130 "data/maps/EltheRoad/scripts.pory"
	waitmessage
# 131 "data/maps/EltheRoad/scripts.pory"
	dynmultichoice 0, 0, FALSE, 6, 0, DYN_MULTICHOICE_CB_NONE, EltheRoad_EventScript_DemiveeTutorialMultichoice_Text_1, EltheRoad_EventScript_DemiveeTutorialMultichoice_Text_2, EltheRoad_EventScript_DemiveeTutorialMultichoice_Text_3, EltheRoad_EventScript_DemiveeTutorialMultichoice_Text_4, EltheRoad_EventScript_DemiveeTutorialMultichoice_Text_5, EltheRoad_EventScript_DemiveeTutorialMultichoice_Text_6
# 132 "data/maps/EltheRoad/scripts.pory"
	switch VAR_RESULT
# 134 "data/maps/EltheRoad/scripts.pory"
	case 0, EltheRoad_EventScript_DemiveeTutorialMultichoice_3
# 140 "data/maps/EltheRoad/scripts.pory"
	case 1, EltheRoad_EventScript_DemiveeTutorialMultichoice_4
# 146 "data/maps/EltheRoad/scripts.pory"
	case 2, EltheRoad_EventScript_DemiveeTutorialMultichoice_5
# 151 "data/maps/EltheRoad/scripts.pory"
	case 3, EltheRoad_EventScript_DemiveeTutorialMultichoice_6
# 156 "data/maps/EltheRoad/scripts.pory"
	case 4, EltheRoad_EventScript_DemiveeTutorialMultichoice_7
# 162 "data/maps/EltheRoad/scripts.pory"
	case 5, EltheRoad_EventScript_DemiveeTutorialMultichoice_8
# 163 "data/maps/EltheRoad/scripts.pory"
	case MULTI_B_PRESSED, EltheRoad_EventScript_DemiveeTutorialMultichoice_8
EltheRoad_EventScript_DemiveeTutorialMultichoice_1:
# 167 "data/maps/EltheRoad/scripts.pory"
	goto EltheRoad_EventScript_DemiveeTutorialMultichoice
	return

EltheRoad_EventScript_DemiveeTutorialMultichoice_3:
# 135 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_EventScript_DemiveeTutorialMultichoice_Text_7
	goto EltheRoad_EventScript_DemiveeTutorialMultichoice_1

EltheRoad_EventScript_DemiveeTutorialMultichoice_4:
# 141 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_EventScript_DemiveeTutorialMultichoice_Text_8
	goto EltheRoad_EventScript_DemiveeTutorialMultichoice_1

EltheRoad_EventScript_DemiveeTutorialMultichoice_5:
# 147 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_EventScript_DemiveeTutorialMultichoice_Text_9
	goto EltheRoad_EventScript_DemiveeTutorialMultichoice_1

EltheRoad_EventScript_DemiveeTutorialMultichoice_6:
# 152 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_EventScript_DemiveeTutorialMultichoice_Text_10
	goto EltheRoad_EventScript_DemiveeTutorialMultichoice_1

EltheRoad_EventScript_DemiveeTutorialMultichoice_7:
# 157 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_EventScript_DemiveeTutorialMultichoice_Text_11
	goto EltheRoad_EventScript_DemiveeTutorialMultichoice_1

EltheRoad_EventScript_DemiveeTutorialMultichoice_8:
# 164 "data/maps/EltheRoad/scripts.pory"
	release
	end


EltheRoad_EventScript_FirstSign::
# 173 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_EventScript_FirstSign_Text_0, MSGBOX_SIGN
	return


EltheRoad_Trigger_VinosTrigger::
# 178 "data/maps/EltheRoad/scripts.pory"
	lock
# 179 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_Trigger_VinosTrigger_Text_0, PORTRAIT_VINOS_NEUTRAL, PORTRAIT_DEFAULT_LEFT
# 180 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_Trigger_VinosTrigger_Text_1
# 181 "data/maps/EltheRoad/scripts.pory"
	speakername NULL, 0
# 182 "data/maps/EltheRoad/scripts.pory"
	message EltheRoad_Trigger_VinosTrigger_Text_2
# 183 "data/maps/EltheRoad/scripts.pory"
	waitmessage
# 184 "data/maps/EltheRoad/scripts.pory"
	dynmultichoice 0, 0, TRUE, 6, 0, DYN_MULTICHOICE_CB_NONE, EltheRoad_Trigger_VinosTrigger_Text_3, EltheRoad_Trigger_VinosTrigger_Text_4
# 185 "data/maps/EltheRoad/scripts.pory"
	switch VAR_RESULT
# 187 "data/maps/EltheRoad/scripts.pory"
	case 0, EltheRoad_Trigger_VinosTrigger_2
# 216 "data/maps/EltheRoad/scripts.pory"
	case 1, EltheRoad_Trigger_VinosTrigger_3
	return

EltheRoad_Trigger_VinosTrigger_2:
# 188 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_2, PORTRAIT_AMELIA_NEUTRAL
# 189 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_Trigger_VinosTrigger_Text_5, MSGBOX_AUTOCLOSE
# 190 "data/maps/EltheRoad/scripts.pory"
	playse SE_PIN
# 191 "data/maps/EltheRoad/scripts.pory"
	applymovement 3, Common_Movement_FaceDown
# 192 "data/maps/EltheRoad/scripts.pory"
	waitmovement 0
# 193 "data/maps/EltheRoad/scripts.pory"
	applymovement 3, Common_Movement_ExclamationMark
# 194 "data/maps/EltheRoad/scripts.pory"
	waitmovement 0
# 195 "data/maps/EltheRoad/scripts.pory"
	delay 48
# 196 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_Trigger_VinosTrigger_Text_0, PORTRAIT_VINOS_NEUTRAL, PORTRAIT_DEFAULT_LEFT
# 197 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_Trigger_VinosTrigger_Text_6
# 198 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_2, PORTRAIT_AMELIA_NEUTRAL
# 199 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_Trigger_VinosTrigger_Text_7, MSGBOX_AUTOCLOSE
# 200 "data/maps/EltheRoad/scripts.pory"
	playse SE_PIN
# 201 "data/maps/EltheRoad/scripts.pory"
	applymovement 3, Common_Movement_ExclamationMark
# 202 "data/maps/EltheRoad/scripts.pory"
	waitmovement 0
# 203 "data/maps/EltheRoad/scripts.pory"
	delay 48
# 204 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_Trigger_VinosTrigger_Text_0, PORTRAIT_VINOS_NEUTRAL, PORTRAIT_DEFAULT_LEFT
# 205 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_Trigger_VinosTrigger_Text_8
# 206 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_2, PORTRAIT_AMELIA_NEUTRAL
# 207 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_Trigger_VinosTrigger_Text_9
# 208 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_Trigger_VinosTrigger_Text_0, PORTRAIT_VINOS_NEUTRAL, PORTRAIT_DEFAULT_LEFT
# 209 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_Trigger_VinosTrigger_Text_10
# 210 "data/maps/EltheRoad/scripts.pory"
	speakername NULL, 0
# 211 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_Trigger_VinosTrigger_Text_11, MSGBOX_AUTOCLOSE
# 214 "data/maps/EltheRoad/scripts.pory"
	delay 32
# 215 "data/maps/EltheRoad/scripts.pory"
	goto EltheRoad_VinosNegotiationMain
	return

EltheRoad_Trigger_VinosTrigger_3:
# 217 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_2, PORTRAIT_AMELIA_STRAINED
# 218 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_Trigger_VinosTrigger_Text_12, MSGBOX_AUTOCLOSE
# 219 "data/maps/EltheRoad/scripts.pory"
	playse SE_PIN
# 220 "data/maps/EltheRoad/scripts.pory"
	applymovement 3, Common_Movement_FaceDown
# 221 "data/maps/EltheRoad/scripts.pory"
	waitmovement 0
# 222 "data/maps/EltheRoad/scripts.pory"
	applymovement 3, Common_Movement_ExclamationMark
# 223 "data/maps/EltheRoad/scripts.pory"
	waitmovement 0
# 224 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_Trigger_VinosTrigger_Text_0, PORTRAIT_VINOS_MAD, PORTRAIT_DEFAULT_LEFT
# 225 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_Trigger_VinosTrigger_Text_13, MSGBOX_AUTOCLOSE
# 226 "data/maps/EltheRoad/scripts.pory"
	goto EltheRoad_VinosDoBattle
	return


EltheRoad_VinosNegotiationMain::
# 233 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_VinosNegotiationMain_Text_0, PORTRAIT_VINOS_NEUTRAL
# 234 "data/maps/EltheRoad/scripts.pory"
	message EltheRoad_VinosNegotiationMain_Text_1
# 235 "data/maps/EltheRoad/scripts.pory"
	waitmessage
# 236 "data/maps/EltheRoad/scripts.pory"
	waitbuttonpress
# 237 "data/maps/EltheRoad/scripts.pory"
	setvar VAR_0x8008, 4
# 238 "data/maps/EltheRoad/scripts.pory"
	special GetNegotiationTopic
# 239 "data/maps/EltheRoad/scripts.pory"
	compare VAR_RESULT, 0xFF
	goto_if_eq EltheRoad_VinosNegotiationMain_1
# 245 "data/maps/EltheRoad/scripts.pory"
	switch VAR_RESULT
# 247 "data/maps/EltheRoad/scripts.pory"
	case 0, EltheRoad_VinosNegotiationMain_6
# 291 "data/maps/EltheRoad/scripts.pory"
	case 1, EltheRoad_VinosNegotiationMain_7
# 341 "data/maps/EltheRoad/scripts.pory"
	case 2, EltheRoad_VinosNegotiationMain_8
# 385 "data/maps/EltheRoad/scripts.pory"
	case 3, EltheRoad_VinosNegotiationMain_9
EltheRoad_VinosNegotiationMain_4:
# 427 "data/maps/EltheRoad/scripts.pory"
	delay 16
# 428 "data/maps/EltheRoad/scripts.pory"
	compare VAR_NEGOTIATION_SCORE, 3
	goto_if_ge EltheRoad_VinosNegotiationMain_10
# 436 "data/maps/EltheRoad/scripts.pory"
	compare VAR_NEGOTIATION_SCORE, 0
	goto_if_eq EltheRoad_VinosNegotiationMain_11
# 444 "data/maps/EltheRoad/scripts.pory"
	goto EltheRoad_VinosNegotiationMain
	return

EltheRoad_VinosNegotiationMain_1:
# 241 "data/maps/EltheRoad/scripts.pory"
	goto EltheRoad_VinosNegotiationMidSuccess
	return

EltheRoad_VinosNegotiationMain_6:
# 248 "data/maps/EltheRoad/scripts.pory"
	dynmultipush EltheRoad_VinosNegotiationMain_Text_2, 1
# 249 "data/maps/EltheRoad/scripts.pory"
	dynmultipush EltheRoad_VinosNegotiationMain_Text_3, 0
# 250 "data/maps/EltheRoad/scripts.pory"
	dynmultipush EltheRoad_VinosNegotiationMain_Text_4, 2
# 251 "data/maps/EltheRoad/scripts.pory"
	message EltheRoad_VinosNegotiationMain_Text_5
# 252 "data/maps/EltheRoad/scripts.pory"
	waitmessage
# 253 "data/maps/EltheRoad/scripts.pory"
	dynmultistack 0, 0, FALSE, 6, FALSE, 1, DYN_MULTICHOICE_CB_NONE
# 254 "data/maps/EltheRoad/scripts.pory"
	switch VAR_RESULT
# 256 "data/maps/EltheRoad/scripts.pory"
	case 0, EltheRoad_VinosNegotiationMain_16
# 270 "data/maps/EltheRoad/scripts.pory"
	case 1, EltheRoad_VinosNegotiationMain_17
# 280 "data/maps/EltheRoad/scripts.pory"
	case 2, EltheRoad_VinosNegotiationMain_18
	goto EltheRoad_VinosNegotiationMain_4

EltheRoad_VinosNegotiationMain_7:
# 293 "data/maps/EltheRoad/scripts.pory"
	dynmultipush EltheRoad_VinosNegotiationMain_Text_16, 1
# 294 "data/maps/EltheRoad/scripts.pory"
	dynmultipush EltheRoad_VinosNegotiationMain_Text_17, 2
# 295 "data/maps/EltheRoad/scripts.pory"
	dynmultipush EltheRoad_VinosNegotiationMain_Text_18, 0
# 296 "data/maps/EltheRoad/scripts.pory"
	message EltheRoad_VinosNegotiationMain_Text_19
# 297 "data/maps/EltheRoad/scripts.pory"
	waitmessage
# 298 "data/maps/EltheRoad/scripts.pory"
	dynmultistack 0, 0, FALSE, 6, FALSE, 1, DYN_MULTICHOICE_CB_NONE
# 299 "data/maps/EltheRoad/scripts.pory"
	switch VAR_RESULT
# 301 "data/maps/EltheRoad/scripts.pory"
	case 0, EltheRoad_VinosNegotiationMain_20
# 312 "data/maps/EltheRoad/scripts.pory"
	case 1, EltheRoad_VinosNegotiationMain_21
# 330 "data/maps/EltheRoad/scripts.pory"
	case 2, EltheRoad_VinosNegotiationMain_22
	goto EltheRoad_VinosNegotiationMain_4

EltheRoad_VinosNegotiationMain_8:
# 343 "data/maps/EltheRoad/scripts.pory"
	dynmultipush EltheRoad_VinosNegotiationMain_Text_34, 0
# 344 "data/maps/EltheRoad/scripts.pory"
	dynmultipush EltheRoad_VinosNegotiationMain_Text_35, 2
# 345 "data/maps/EltheRoad/scripts.pory"
	dynmultipush EltheRoad_VinosNegotiationMain_Text_36, 1
# 346 "data/maps/EltheRoad/scripts.pory"
	message EltheRoad_VinosNegotiationMain_Text_37
# 347 "data/maps/EltheRoad/scripts.pory"
	waitmessage
# 348 "data/maps/EltheRoad/scripts.pory"
	dynmultistack 0, 0, FALSE, 6, FALSE, 0, DYN_MULTICHOICE_CB_NONE
# 349 "data/maps/EltheRoad/scripts.pory"
	switch VAR_RESULT
# 351 "data/maps/EltheRoad/scripts.pory"
	case 0, EltheRoad_VinosNegotiationMain_24
# 366 "data/maps/EltheRoad/scripts.pory"
	case 1, EltheRoad_VinosNegotiationMain_25
# 375 "data/maps/EltheRoad/scripts.pory"
	case 2, EltheRoad_VinosNegotiationMain_26
	goto EltheRoad_VinosNegotiationMain_4

EltheRoad_VinosNegotiationMain_9:
# 387 "data/maps/EltheRoad/scripts.pory"
	dynmultipush EltheRoad_VinosNegotiationMain_Text_46, 1
# 388 "data/maps/EltheRoad/scripts.pory"
	dynmultipush EltheRoad_VinosNegotiationMain_Text_47, 2
# 389 "data/maps/EltheRoad/scripts.pory"
	dynmultipush EltheRoad_VinosNegotiationMain_Text_48, 0
# 390 "data/maps/EltheRoad/scripts.pory"
	message EltheRoad_VinosNegotiationMain_Text_49
# 391 "data/maps/EltheRoad/scripts.pory"
	waitmessage
# 392 "data/maps/EltheRoad/scripts.pory"
	dynmultistack 0, 0, FALSE, 6, FALSE, 1, DYN_MULTICHOICE_CB_NONE
# 393 "data/maps/EltheRoad/scripts.pory"
	switch VAR_RESULT
# 395 "data/maps/EltheRoad/scripts.pory"
	case 0, EltheRoad_VinosNegotiationMain_28
# 406 "data/maps/EltheRoad/scripts.pory"
	case 1, EltheRoad_VinosNegotiationMain_29
# 417 "data/maps/EltheRoad/scripts.pory"
	case 2, EltheRoad_VinosNegotiationMain_30
	goto EltheRoad_VinosNegotiationMain_4

EltheRoad_VinosNegotiationMain_10:
# 430 "data/maps/EltheRoad/scripts.pory"
	goto_if_set FLAG_NOT_PERFECT_CONVERSATION, EltheRoad_VinosNegotiationMain_32
EltheRoad_VinosNegotiationMain_31:
# 434 "data/maps/EltheRoad/scripts.pory"
	goto EltheRoad_VinosNegotiationCompleteSuccess
	return

EltheRoad_VinosNegotiationMain_11:
# 438 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_VinosNegotiationMain_Text_0, PORTRAIT_VINOS_MAD, PORTRAIT_DEFAULT_LEFT
# 439 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_VinosNegotiationMain_Text_57, MSGBOX_AUTOCLOSE
# 440 "data/maps/EltheRoad/scripts.pory"
	goto EltheRoad_VinosDoBattle
	return

EltheRoad_VinosNegotiationMain_16:
# 257 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_2, PORTRAIT_AMELIA_SERIOUSLY
# 258 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_VinosNegotiationMain_Text_6
# 259 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_2, PORTRAIT_AMELIA_SHOCK
# 260 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_VinosNegotiationMain_Text_7
# 262 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_VinosNegotiationMain_Text_0, PORTRAIT_VINOS_MAD, PORTRAIT_DEFAULT_LEFT
# 263 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_VinosNegotiationMain_Text_8, MSGBOX_AUTOCLOSE
# 264 "data/maps/EltheRoad/scripts.pory"
	setflag FLAG_NOT_PERFECT_CONVERSATION
# 265 "data/maps/EltheRoad/scripts.pory"
	compare VAR_NEGOTIATION_SCORE, 0
	goto_if_gt EltheRoad_VinosNegotiationMain_35
EltheRoad_VinosNegotiationMain_34:
# 269 "data/maps/EltheRoad/scripts.pory"
	playse SE_FAILURE
	goto EltheRoad_VinosNegotiationMain_4

EltheRoad_VinosNegotiationMain_17:
# 271 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_2, PORTRAIT_AMELIA_NEUTRAL
# 272 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_VinosNegotiationMain_Text_9
# 273 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_VinosNegotiationMain_Text_0, PORTRAIT_VINOS_NEUTRAL, PORTRAIT_DEFAULT_LEFT
# 274 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_VinosNegotiationMain_Text_10
# 275 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_2, PORTRAIT_AMELIA_SHOCK
# 276 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_VinosNegotiationMain_Text_11
# 277 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_VinosNegotiationMain_Text_0, PORTRAIT_VINOS_NEUTRAL, PORTRAIT_DEFAULT_LEFT
# 278 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_VinosNegotiationMain_Text_12, MSGBOX_AUTOCLOSE
# 279 "data/maps/EltheRoad/scripts.pory"
	addvar VAR_NEGOTIATION_SCORE, 1
	goto EltheRoad_VinosNegotiationMain_4

EltheRoad_VinosNegotiationMain_18:
# 281 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_2, PORTRAIT_AMELIA_NEUTRAL
# 282 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_VinosNegotiationMain_Text_13
# 283 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_2, PORTRAIT_AMELIA_WINK
# 284 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_VinosNegotiationMain_Text_14
# 285 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_VinosNegotiationMain_Text_0, PORTRAIT_VINOS_NEUTRAL, PORTRAIT_DEFAULT_LEFT
# 286 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_VinosNegotiationMain_Text_15, MSGBOX_AUTOCLOSE
# 288 "data/maps/EltheRoad/scripts.pory"
	addvar VAR_NEGOTIATION_SCORE, 2
# 289 "data/maps/EltheRoad/scripts.pory"
	playse SE_SUCCESS
	goto EltheRoad_VinosNegotiationMain_4

EltheRoad_VinosNegotiationMain_20:
# 302 "data/maps/EltheRoad/scripts.pory"
	callnative ParalyzeLead
# 303 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_EventScript_FirstTrigger_Text_3, PORTRAIT_DEMIVEE_NEUTRAL
# 304 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_VinosNegotiationMain_Text_20, MSGBOX_AUTOCLOSE
# 305 "data/maps/EltheRoad/scripts.pory"
	delay 90
# 306 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_EventScript_FirstTrigger_Text_3, PORTRAIT_DEMIVEE_ANNOYED
# 307 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_VinosNegotiationMain_Text_21
# 308 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_VinosNegotiationMain_Text_0, PORTRAIT_VINOS_NEUTRAL, PORTRAIT_DEFAULT_LEFT
# 309 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_VinosNegotiationMain_Text_22, MSGBOX_AUTOCLOSE
# 311 "data/maps/EltheRoad/scripts.pory"
	goto EltheRoad_VinosDoBattle
	goto EltheRoad_VinosNegotiationMain_4

EltheRoad_VinosNegotiationMain_21:
# 313 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_2, PORTRAIT_AMELIA_NEUTRAL
# 314 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_VinosNegotiationMain_Text_23
# 315 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_VinosNegotiationMain_Text_0, PORTRAIT_VINOS_NEUTRAL, PORTRAIT_DEFAULT_LEFT
# 316 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_VinosNegotiationMain_Text_24
# 317 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_2, PORTRAIT_AMELIA_NEUTRAL
# 318 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_VinosNegotiationMain_Text_25
# 319 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_VinosNegotiationMain_Text_0, PORTRAIT_VINOS_NEUTRAL, PORTRAIT_DEFAULT_LEFT
# 320 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_VinosNegotiationMain_Text_26
# 321 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_2, PORTRAIT_AMELIA_NEUTRAL
# 322 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_VinosNegotiationMain_Text_27
# 323 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_VinosNegotiationMain_Text_0, PORTRAIT_VINOS_MAD, PORTRAIT_DEFAULT_LEFT
# 324 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_VinosNegotiationMain_Text_28
# 325 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_2, PORTRAIT_AMELIA_SMUG
# 326 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_VinosNegotiationMain_Text_29
# 327 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_VinosNegotiationMain_Text_0, PORTRAIT_VINOS_MAD, PORTRAIT_DEFAULT_LEFT
# 328 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_VinosNegotiationMain_Text_30, MSGBOX_AUTOCLOSE
# 329 "data/maps/EltheRoad/scripts.pory"
	addvar VAR_NEGOTIATION_SCORE, 1
	goto EltheRoad_VinosNegotiationMain_4

EltheRoad_VinosNegotiationMain_22:
# 331 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_2, PORTRAIT_AMELIA_NEUTRAL
# 332 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_VinosNegotiationMain_Text_31
# 333 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_2, PORTRAIT_AMELIA_MUNCH
# 334 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_VinosNegotiationMain_Text_32
# 335 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_VinosNegotiationMain_Text_0, PORTRAIT_VINOS_NEUTRAL, PORTRAIT_DEFAULT_LEFT
# 336 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_VinosNegotiationMain_Text_33, MSGBOX_AUTOCLOSE
# 337 "data/maps/EltheRoad/scripts.pory"
	addvar VAR_NEGOTIATION_SCORE, 2
# 338 "data/maps/EltheRoad/scripts.pory"
	playse SE_SUCCESS
	goto EltheRoad_VinosNegotiationMain_4

EltheRoad_VinosNegotiationMain_24:
# 352 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_2, PORTRAIT_AMELIA_NEUTRAL
# 353 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_VinosNegotiationMain_Text_38
# 354 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_VinosNegotiationMain_Text_0, PORTRAIT_VINOS_MAD, PORTRAIT_DEFAULT_LEFT
# 355 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_VinosNegotiationMain_Text_39
# 356 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_2, PORTRAIT_AMELIA_SHOCK
# 357 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_VinosNegotiationMain_Text_40
# 358 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_VinosNegotiationMain_Text_0, PORTRAIT_VINOS_NEUTRAL, PORTRAIT_DEFAULT_LEFT
# 359 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_VinosNegotiationMain_Text_41, MSGBOX_AUTOCLOSE
# 360 "data/maps/EltheRoad/scripts.pory"
	setflag FLAG_NOT_PERFECT_CONVERSATION
# 361 "data/maps/EltheRoad/scripts.pory"
	compare VAR_NEGOTIATION_SCORE, 0
	goto_if_gt EltheRoad_VinosNegotiationMain_38
EltheRoad_VinosNegotiationMain_37:
# 365 "data/maps/EltheRoad/scripts.pory"
	playse SE_FAILURE
	goto EltheRoad_VinosNegotiationMain_4

EltheRoad_VinosNegotiationMain_25:
# 367 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_2, PORTRAIT_AMELIA_NEUTRAL
# 368 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_VinosNegotiationMain_Text_42
# 371 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_VinosNegotiationMain_Text_0, PORTRAIT_VINOS_NEUTRAL, PORTRAIT_DEFAULT_LEFT
# 372 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_VinosNegotiationMain_Text_43, MSGBOX_AUTOCLOSE
# 374 "data/maps/EltheRoad/scripts.pory"
	addvar VAR_NEGOTIATION_SCORE, 1
	goto EltheRoad_VinosNegotiationMain_4

EltheRoad_VinosNegotiationMain_26:
# 376 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_2, PORTRAIT_AMELIA_SMUG
# 377 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_VinosNegotiationMain_Text_44
# 380 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_VinosNegotiationMain_Text_0, PORTRAIT_VINOS_NEUTRAL, PORTRAIT_DEFAULT_LEFT
# 381 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_VinosNegotiationMain_Text_45, MSGBOX_AUTOCLOSE
# 382 "data/maps/EltheRoad/scripts.pory"
	addvar VAR_NEGOTIATION_SCORE, 2
# 383 "data/maps/EltheRoad/scripts.pory"
	playse SE_SUCCESS
	goto EltheRoad_VinosNegotiationMain_4

EltheRoad_VinosNegotiationMain_28:
# 396 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_2, PORTRAIT_AMELIA_NEUTRAL
# 397 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_VinosNegotiationMain_Text_50
# 398 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_VinosNegotiationMain_Text_0, PORTRAIT_VINOS_NEUTRAL, PORTRAIT_DEFAULT_LEFT
# 399 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_VinosNegotiationMain_Text_51, MSGBOX_AUTOCLOSE
# 400 "data/maps/EltheRoad/scripts.pory"
	setflag FLAG_NOT_PERFECT_CONVERSATION
# 401 "data/maps/EltheRoad/scripts.pory"
	compare VAR_NEGOTIATION_SCORE, 0
	goto_if_gt EltheRoad_VinosNegotiationMain_41
EltheRoad_VinosNegotiationMain_40:
# 405 "data/maps/EltheRoad/scripts.pory"
	playse SE_FAILURE
	goto EltheRoad_VinosNegotiationMain_4

EltheRoad_VinosNegotiationMain_29:
# 407 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_2, PORTRAIT_AMELIA_NEUTRAL
# 408 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_VinosNegotiationMain_Text_52
# 411 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_VinosNegotiationMain_Text_0, PORTRAIT_VINOS_NEUTRAL, PORTRAIT_DEFAULT_LEFT
# 412 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_VinosNegotiationMain_Text_53
# 414 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_2, PORTRAIT_AMELIA_SERIOUSLY
# 415 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_VinosNegotiationMain_Text_54, MSGBOX_AUTOCLOSE
# 416 "data/maps/EltheRoad/scripts.pory"
	addvar VAR_NEGOTIATION_SCORE, 1
	goto EltheRoad_VinosNegotiationMain_4

EltheRoad_VinosNegotiationMain_30:
# 418 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_2, PORTRAIT_AMELIA_SMUG
# 419 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_VinosNegotiationMain_Text_55
# 420 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_VinosNegotiationMain_Text_0, PORTRAIT_VINOS_NEUTRAL, PORTRAIT_DEFAULT_LEFT
# 421 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_VinosNegotiationMain_Text_56, MSGBOX_AUTOCLOSE
# 422 "data/maps/EltheRoad/scripts.pory"
	addvar VAR_NEGOTIATION_SCORE, 2
# 423 "data/maps/EltheRoad/scripts.pory"
	playse SE_SUCCESS
	goto EltheRoad_VinosNegotiationMain_4

EltheRoad_VinosNegotiationMain_32:
# 432 "data/maps/EltheRoad/scripts.pory"
	goto EltheRoad_VinosNegotiationMidSuccess
	goto EltheRoad_VinosNegotiationMain_31

EltheRoad_VinosNegotiationMain_35:
# 267 "data/maps/EltheRoad/scripts.pory"
	subvar VAR_NEGOTIATION_SCORE, 1
	goto EltheRoad_VinosNegotiationMain_34

EltheRoad_VinosNegotiationMain_38:
# 363 "data/maps/EltheRoad/scripts.pory"
	subvar VAR_NEGOTIATION_SCORE, 1
	goto EltheRoad_VinosNegotiationMain_37

EltheRoad_VinosNegotiationMain_41:
# 403 "data/maps/EltheRoad/scripts.pory"
	subvar VAR_NEGOTIATION_SCORE, 1
	goto EltheRoad_VinosNegotiationMain_40


EltheRoad_VinosNegotiationMidSuccess::
# 451 "data/maps/EltheRoad/scripts.pory"
	call EltheRoad_CleanUpNegotiationValues
# 452 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_VinosNegotiationMain_Text_0, PORTRAIT_VINOS_NEUTRAL, PORTRAIT_DEFAULT_LEFT
# 453 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_VinosNegotiationMidSuccess_Text_0, MSGBOX_AUTOCLOSE
# 456 "data/maps/EltheRoad/scripts.pory"
	giveitem ITEM_EXP_CANDY_L, 2
# 457 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_EventScript_FirstTrigger_Text_3, PORTRAIT_DEMIVEE_YAY
# 458 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_VinosNegotiationMidSuccess_Text_1
# 459 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_VinosNegotiationMain_Text_0, PORTRAIT_VINOS_NEUTRAL, PORTRAIT_DEFAULT_LEFT
# 460 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_VinosNegotiationMidSuccess_Text_2
# 461 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_2, PORTRAIT_AMELIA_NEUTRAL
# 462 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_VinosNegotiationMidSuccess_Text_3, MSGBOX_AUTOCLOSE
# 463 "data/maps/EltheRoad/scripts.pory"
	setvar VAR_MAIN_GAME_STATE, 3
# 464 "data/maps/EltheRoad/scripts.pory"
	setflag FLAG_TEMP_9
	return


EltheRoad_VinosNegotiationCompleteSuccess::
# 469 "data/maps/EltheRoad/scripts.pory"
	call EltheRoad_CleanUpNegotiationValues
# 470 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_VinosNegotiationMain_Text_0, PORTRAIT_VINOS_NEUTRAL, PORTRAIT_DEFAULT_LEFT
# 471 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_VinosNegotiationCompleteSuccess_Text_0, MSGBOX_AUTOCLOSE
# 473 "data/maps/EltheRoad/scripts.pory"
	giveitem ITEM_EXP_CANDY_XL, 1
# 474 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_EventScript_FirstTrigger_Text_3, PORTRAIT_DEMIVEE_YAY
# 475 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_VinosNegotiationCompleteSuccess_Text_1
# 476 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_VinosNegotiationMain_Text_0, PORTRAIT_VINOS_NEUTRAL, PORTRAIT_DEFAULT_LEFT
# 477 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_VinosNegotiationCompleteSuccess_Text_2
# 479 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_2, PORTRAIT_AMELIA_NEUTRAL
# 480 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_VinosNegotiationCompleteSuccess_Text_3, MSGBOX_AUTOCLOSE
# 481 "data/maps/EltheRoad/scripts.pory"
	setvar VAR_MAIN_GAME_STATE, 3
# 482 "data/maps/EltheRoad/scripts.pory"
	setflag FLAG_TEMP_8
	return


EltheRoad_VinosDoBattle::
# 487 "data/maps/EltheRoad/scripts.pory"
	setwildbattle SPECIES_BELLSPROUT, 35, ITEM_NONE
# 488 "data/maps/EltheRoad/scripts.pory"
	dowildbattle
# 489 "data/maps/EltheRoad/scripts.pory"
	call EltheRoad_CleanUpNegotiationValues
# 490 "data/maps/EltheRoad/scripts.pory"
	turnobject 3, DIR_SOUTH
# 491 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_VinosNegotiationMain_Text_0, PORTRAIT_VINOS_NEUTRAL, PORTRAIT_DEFAULT_LEFT
# 492 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_VinosDoBattle_Text_0
# 493 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_2, PORTRAIT_AMELIA_SERIOUSLY
# 494 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_VinosDoBattle_Text_1
# 495 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_VinosNegotiationMain_Text_0, PORTRAIT_VINOS_NEUTRAL, PORTRAIT_DEFAULT_LEFT
# 496 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_VinosDoBattle_Text_2, MSGBOX_AUTOCLOSE
# 497 "data/maps/EltheRoad/scripts.pory"
	delay 60
# 498 "data/maps/EltheRoad/scripts.pory"
	applymovement 3, Common_Movement_FaceLeft
# 499 "data/maps/EltheRoad/scripts.pory"
	delay 120
# 500 "data/maps/EltheRoad/scripts.pory"
	applymovement 3, Common_Movement_FaceRight
# 501 "data/maps/EltheRoad/scripts.pory"
	delay 120
# 502 "data/maps/EltheRoad/scripts.pory"
	applymovement 3, Common_Movement_FaceDown
# 503 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_VinosNegotiationMain_Text_0, PORTRAIT_VINOS_MAD, PORTRAIT_DEFAULT_LEFT
# 504 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_VinosDoBattle_Text_3, MSGBOX_AUTOCLOSE
# 505 "data/maps/EltheRoad/scripts.pory"
	giveitem ITEM_EXP_CANDY_L
# 506 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_EventScript_FirstTrigger_Text_3, PORTRAIT_DEMIVEE_YAY
# 507 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_VinosNegotiationMidSuccess_Text_1
# 508 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_VinosNegotiationMain_Text_0, PORTRAIT_VINOS_NEUTRAL, PORTRAIT_DEFAULT_LEFT
# 509 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_VinosDoBattle_Text_4, MSGBOX_AUTOCLOSE
# 510 "data/maps/EltheRoad/scripts.pory"
	setvar VAR_MAIN_GAME_STATE, 3
# 511 "data/maps/EltheRoad/scripts.pory"
	setflag FLAG_TEMP_9
	return


EltheRoad_CleanUpNegotiationValues::
# 516 "data/maps/EltheRoad/scripts.pory"
	setvar VAR_NEGOTIATION_SCORE, 0
# 517 "data/maps/EltheRoad/scripts.pory"
	clearflag FLAG_TEMP_4
# 518 "data/maps/EltheRoad/scripts.pory"
	clearflag FLAG_TEMP_1
# 519 "data/maps/EltheRoad/scripts.pory"
	clearflag FLAG_TEMP_2
# 520 "data/maps/EltheRoad/scripts.pory"
	clearflag FLAG_TEMP_3
# 521 "data/maps/EltheRoad/scripts.pory"
	clearflag FLAG_NOT_PERFECT_CONVERSATION
	return


EltheRoad_EventScript_VinosIdle::
# 527 "data/maps/EltheRoad/scripts.pory"
	lock
# 528 "data/maps/EltheRoad/scripts.pory"
	faceplayer
# 529 "data/maps/EltheRoad/scripts.pory"
	goto_if_set FLAG_TEMP_9, EltheRoad_EventScript_VinosIdle_2
# 535 "data/maps/EltheRoad/scripts.pory"
	goto_if_unset FLAG_FLARESHARD_GET, EltheRoad_EventScript_VinosIdle_3
# 594 "data/maps/EltheRoad/scripts.pory"
	goto_if_set FLAG_TEMP_8, EltheRoad_EventScript_VinosIdle_4
# 612 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_VinosNegotiationMain_Text_0, PORTRAIT_VINOS_NEUTRAL, PORTRAIT_DEFAULT_LEFT
# 613 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_EventScript_VinosIdle_Text_8, MSGBOX_NPC
EltheRoad_EventScript_VinosIdle_1:
# 618 "data/maps/EltheRoad/scripts.pory"
	release
	return

EltheRoad_EventScript_VinosIdle_2:
# 531 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_VinosNegotiationMain_Text_0, PORTRAIT_VINOS_MAD, PORTRAIT_DEFAULT_LEFT
# 532 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_EventScript_VinosIdle_Text_0, MSGBOX_AUTOCLOSE
	goto EltheRoad_EventScript_VinosIdle_1

EltheRoad_EventScript_VinosIdle_3:
# 537 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_VinosNegotiationMain_Text_0, PORTRAIT_VINOS_NEUTRAL
# 538 "data/maps/EltheRoad/scripts.pory"
	message EltheRoad_EventScript_VinosIdle_Text_1
# 539 "data/maps/EltheRoad/scripts.pory"
	waitmessage
# 540 "data/maps/EltheRoad/scripts.pory"
	special SpawnCameraObject
# 541 "data/maps/EltheRoad/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 542 "data/maps/EltheRoad/scripts.pory"
	switch VAR_RESULT
# 544 "data/maps/EltheRoad/scripts.pory"
	case DIR_EAST, EltheRoad_EventScript_VinosIdle_11
# 549 "data/maps/EltheRoad/scripts.pory"
	case DIR_NORTH, EltheRoad_EventScript_VinosIdle_12
EltheRoad_EventScript_VinosIdle_9:
# 553 "data/maps/EltheRoad/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, EltheRoad_Movement_CameraShowItem
# 554 "data/maps/EltheRoad/scripts.pory"
	waitmovement 0
# 555 "data/maps/EltheRoad/scripts.pory"
	message EltheRoad_EventScript_VinosIdle_Text_2
# 556 "data/maps/EltheRoad/scripts.pory"
	setmetatile 26, 20, 0x247, FALSE
# 557 "data/maps/EltheRoad/scripts.pory"
	special DrawWholeMapView
# 558 "data/maps/EltheRoad/scripts.pory"
	delay 16
# 559 "data/maps/EltheRoad/scripts.pory"
	setmetatile 26, 20, 0x20C, FALSE
# 560 "data/maps/EltheRoad/scripts.pory"
	special DrawWholeMapView
# 561 "data/maps/EltheRoad/scripts.pory"
	delay 16
# 562 "data/maps/EltheRoad/scripts.pory"
	setmetatile 26, 20, 0x247, FALSE
# 563 "data/maps/EltheRoad/scripts.pory"
	special DrawWholeMapView
# 564 "data/maps/EltheRoad/scripts.pory"
	delay 16
# 565 "data/maps/EltheRoad/scripts.pory"
	setmetatile 26, 20, 0x20C, FALSE
# 566 "data/maps/EltheRoad/scripts.pory"
	special DrawWholeMapView
# 567 "data/maps/EltheRoad/scripts.pory"
	delay 16
# 568 "data/maps/EltheRoad/scripts.pory"
	setmetatile 26, 20, 0x247, FALSE
# 569 "data/maps/EltheRoad/scripts.pory"
	special DrawWholeMapView
# 570 "data/maps/EltheRoad/scripts.pory"
	delay 16
# 571 "data/maps/EltheRoad/scripts.pory"
	setmetatile 26, 20, 0x20C, FALSE
# 572 "data/maps/EltheRoad/scripts.pory"
	special DrawWholeMapView
# 573 "data/maps/EltheRoad/scripts.pory"
	delay 16
# 574 "data/maps/EltheRoad/scripts.pory"
	waitbuttonpress
# 575 "data/maps/EltheRoad/scripts.pory"
	closemessage
# 576 "data/maps/EltheRoad/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, EltheRoad_Movement_CameraReturn
# 577 "data/maps/EltheRoad/scripts.pory"
	waitmovement 0
# 578 "data/maps/EltheRoad/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 579 "data/maps/EltheRoad/scripts.pory"
	switch VAR_RESULT
# 581 "data/maps/EltheRoad/scripts.pory"
	case DIR_EAST, EltheRoad_EventScript_VinosIdle_15
# 586 "data/maps/EltheRoad/scripts.pory"
	case DIR_NORTH, EltheRoad_EventScript_VinosIdle_16
EltheRoad_EventScript_VinosIdle_13:
# 592 "data/maps/EltheRoad/scripts.pory"
	special RemoveCameraObject
	goto EltheRoad_EventScript_VinosIdle_1

EltheRoad_EventScript_VinosIdle_4:
# 596 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_VinosNegotiationMain_Text_0, PORTRAIT_VINOS_NEUTRAL, PORTRAIT_DEFAULT_LEFT
# 597 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_EventScript_VinosIdle_Text_3
# 598 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_2, PORTRAIT_AMELIA_SERIOUSLY
# 599 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_EventScript_VinosIdle_Text_4
# 603 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_VinosNegotiationMain_Text_0, PORTRAIT_VINOS_NEUTRAL, PORTRAIT_DEFAULT_LEFT
# 604 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_EventScript_VinosIdle_Text_5
# 605 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_2, PORTRAIT_AMELIA_NEUTRAL
# 606 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_EventScript_VinosIdle_Text_6
# 607 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_VinosNegotiationMain_Text_0, PORTRAIT_VINOS_NEUTRAL, PORTRAIT_DEFAULT_LEFT
# 608 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_EventScript_VinosIdle_Text_7, MSGBOX_AUTOCLOSE
	goto EltheRoad_EventScript_VinosIdle_1

EltheRoad_EventScript_VinosIdle_11:
# 545 "data/maps/EltheRoad/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkRight
# 546 "data/maps/EltheRoad/scripts.pory"
	waitmovement 0
# 547 "data/maps/EltheRoad/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
# 548 "data/maps/EltheRoad/scripts.pory"
	waitmovement 0
	goto EltheRoad_EventScript_VinosIdle_9

EltheRoad_EventScript_VinosIdle_12:
# 550 "data/maps/EltheRoad/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp2
# 551 "data/maps/EltheRoad/scripts.pory"
	waitmovement 0
	goto EltheRoad_EventScript_VinosIdle_9

EltheRoad_EventScript_VinosIdle_15:
# 582 "data/maps/EltheRoad/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkDown
# 583 "data/maps/EltheRoad/scripts.pory"
	waitmovement 0
# 584 "data/maps/EltheRoad/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkLeft
# 585 "data/maps/EltheRoad/scripts.pory"
	waitmovement 0
	goto EltheRoad_EventScript_VinosIdle_13

EltheRoad_EventScript_VinosIdle_16:
# 587 "data/maps/EltheRoad/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkDown
# 588 "data/maps/EltheRoad/scripts.pory"
	waitmovement 0
# 589 "data/maps/EltheRoad/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkDown
# 590 "data/maps/EltheRoad/scripts.pory"
	waitmovement 0
	goto EltheRoad_EventScript_VinosIdle_13


EltheRoad_Trigger_VinosAltTrigger::
# 623 "data/maps/EltheRoad/scripts.pory"
	lock
# 624 "data/maps/EltheRoad/scripts.pory"
	playse SE_PIN
# 625 "data/maps/EltheRoad/scripts.pory"
	applymovement 3, Common_Movement_FaceLeft
# 626 "data/maps/EltheRoad/scripts.pory"
	waitmovement 0
# 627 "data/maps/EltheRoad/scripts.pory"
	applymovement 3, Common_Movement_ExclamationMark
# 628 "data/maps/EltheRoad/scripts.pory"
	waitmovement 0
# 629 "data/maps/EltheRoad/scripts.pory"
	delay 48
# 630 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_Trigger_VinosTrigger_Text_0, PORTRAIT_VINOS_MAD, PORTRAIT_DEFAULT_LEFT
# 631 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_Trigger_VinosAltTrigger_Text_0
# 632 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_2, PORTRAIT_AMELIA_NEUTRAL
# 633 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_Trigger_VinosAltTrigger_Text_1
# 634 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_Trigger_VinosTrigger_Text_0, PORTRAIT_VINOS_NEUTRAL, PORTRAIT_DEFAULT_LEFT
# 635 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_Trigger_VinosAltTrigger_Text_2
# 636 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_2, PORTRAIT_AMELIA_NEUTRAL
# 637 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_Trigger_VinosAltTrigger_Text_3
# 638 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_VinosNegotiationMain_Text_0, PORTRAIT_VINOS_NEUTRAL, PORTRAIT_DEFAULT_LEFT
# 639 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_Trigger_VinosAltTrigger_Text_4
# 641 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_2, PORTRAIT_AMELIA_SMUG
# 642 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_Trigger_VinosAltTrigger_Text_5
# 643 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_VinosNegotiationMain_Text_0, PORTRAIT_VINOS_NEUTRAL, PORTRAIT_DEFAULT_LEFT
# 644 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_Trigger_VinosAltTrigger_Text_6, MSGBOX_AUTOCLOSE
# 645 "data/maps/EltheRoad/scripts.pory"
	giveitem ITEM_EXP_CANDY_XL, 1
# 646 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_EventScript_FirstTrigger_Text_3, PORTRAIT_DEMIVEE_YAY
# 647 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_VinosNegotiationCompleteSuccess_Text_1
# 648 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_VinosNegotiationMain_Text_0, PORTRAIT_VINOS_NEUTRAL, PORTRAIT_DEFAULT_LEFT
# 649 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_VinosNegotiationCompleteSuccess_Text_2
# 651 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_2, PORTRAIT_AMELIA_NEUTRAL
# 652 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_VinosNegotiationCompleteSuccess_Text_3, MSGBOX_AUTOCLOSE
# 653 "data/maps/EltheRoad/scripts.pory"
	setvar VAR_MAIN_GAME_STATE, 3
# 654 "data/maps/EltheRoad/scripts.pory"
	setflag FLAG_TEMP_8
	return


# 657 "data/maps/EltheRoad/scripts.pory"
EltheRoad_Movement_CameraShowItem:
# 659 "data/maps/EltheRoad/scripts.pory"
	walk_up
# 659 "data/maps/EltheRoad/scripts.pory"
	walk_up
# 659 "data/maps/EltheRoad/scripts.pory"
	walk_up
# 660 "data/maps/EltheRoad/scripts.pory"
	walk_right
	step_end

# 663 "data/maps/EltheRoad/scripts.pory"
EltheRoad_Movement_CameraReturn:
# 665 "data/maps/EltheRoad/scripts.pory"
	walk_left
# 666 "data/maps/EltheRoad/scripts.pory"
	walk_down
# 666 "data/maps/EltheRoad/scripts.pory"
	walk_down
# 666 "data/maps/EltheRoad/scripts.pory"
	walk_down
	step_end

# 669 "data/maps/EltheRoad/scripts.pory"
EltheRoad_Movement_AmeliaJumpUp:
# 671 "data/maps/EltheRoad/scripts.pory"
	set_visible
# 672 "data/maps/EltheRoad/scripts.pory"
	jump_in_place_left
	step_end

# 675 "data/maps/EltheRoad/scripts.pory"
EltheRoad_Movement_AmeliaLookAround:
# 677 "data/maps/EltheRoad/scripts.pory"
	face_up
# 678 "data/maps/EltheRoad/scripts.pory"
	delay_16
# 679 "data/maps/EltheRoad/scripts.pory"
	face_down
# 680 "data/maps/EltheRoad/scripts.pory"
	delay_16
# 681 "data/maps/EltheRoad/scripts.pory"
	face_up
# 682 "data/maps/EltheRoad/scripts.pory"
	delay_16
# 683 "data/maps/EltheRoad/scripts.pory"
	face_down
# 684 "data/maps/EltheRoad/scripts.pory"
	delay_16
# 685 "data/maps/EltheRoad/scripts.pory"
	face_right
# 686 "data/maps/EltheRoad/scripts.pory"
	delay_16
# 686 "data/maps/EltheRoad/scripts.pory"
	delay_16
# 686 "data/maps/EltheRoad/scripts.pory"
	delay_16
# 687 "data/maps/EltheRoad/scripts.pory"
	face_left
# 688 "data/maps/EltheRoad/scripts.pory"
	delay_16
# 688 "data/maps/EltheRoad/scripts.pory"
	delay_16
# 688 "data/maps/EltheRoad/scripts.pory"
	delay_16
	step_end

# 691 "data/maps/EltheRoad/scripts.pory"
EltheRoad_Movement_AmeliaStartLeaving:
# 693 "data/maps/EltheRoad/scripts.pory"
	walk_up
# 693 "data/maps/EltheRoad/scripts.pory"
	walk_up
# 694 "data/maps/EltheRoad/scripts.pory"
	walk_right
# 694 "data/maps/EltheRoad/scripts.pory"
	walk_right
# 694 "data/maps/EltheRoad/scripts.pory"
	walk_right
# 695 "data/maps/EltheRoad/scripts.pory"
	delay_16
# 695 "data/maps/EltheRoad/scripts.pory"
	delay_16
# 696 "data/maps/EltheRoad/scripts.pory"
	face_left
	step_end

# 699 "data/maps/EltheRoad/scripts.pory"
EltheRoad_Movement_DemiveeFollow:
# 701 "data/maps/EltheRoad/scripts.pory"
	jump_up
# 702 "data/maps/EltheRoad/scripts.pory"
	walk_fast_up
# 703 "data/maps/EltheRoad/scripts.pory"
	walk_fast_right
# 703 "data/maps/EltheRoad/scripts.pory"
	walk_fast_right
	step_end

# 706 "data/maps/EltheRoad/scripts.pory"
EltheRoad_Movement_DemiveeJoin:
# 708 "data/maps/EltheRoad/scripts.pory"
	walk_slow_right
# 709 "data/maps/EltheRoad/scripts.pory"
	enter_pokeball
	step_end

# 712 "data/maps/EltheRoad/scripts.pory"
EltheRoad_Movement_VinosGetOnLog:
# 714 "data/maps/EltheRoad/scripts.pory"
	walk_fast_right
# 715 "data/maps/EltheRoad/scripts.pory"
	jump_right
# 716 "data/maps/EltheRoad/scripts.pory"
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
# 82 "data/maps/EltheRoad/scripts.pory"
	.string "Eevee joined your party!$"

EltheRoad_EventScript_FirstTrigger_Text_0:
# 100 "data/maps/EltheRoad/scripts.pory"
	.string "I meant to ask earlier, but, uh,\n"
	.string "what are you, exactly?\p"
	.string "You look like an Eevee, but those\n"
	.string "markings…are they natural?$"

EltheRoad_EventScript_FirstTrigger_Text_1:
# 102 "data/maps/EltheRoad/scripts.pory"
	.string "Uh, I dunno! I used to be normal,\n"
	.string "but I like to eat these crystals…\l"
	.string "I think I got these markings after\l"
	.string "I started doing that.\p"
	.string "Now when I touch an evolution stone,\n"
	.string "I don't evolve, but…\p"
	.string "It changes my type, I think.\n"
	.string "And my moves.$"

EltheRoad_EventScript_FirstTrigger_Text_2:
# 106 "data/maps/EltheRoad/scripts.pory"
	.string "So you're some kind of…Demi-Vee?$"

EltheRoad_EventScript_FirstTrigger_Text_3:
# 108 "data/maps/EltheRoad/scripts.pory"
	.string "Demi-Vee$"

EltheRoad_EventScript_FirstTrigger_Text_4:
# 109 "data/maps/EltheRoad/scripts.pory"
	.string "Huh?$"

EltheRoad_EventScript_FirstTrigger_Text_5:
# 111 "data/maps/EltheRoad/scripts.pory"
	.string "Um, anyway! If you find any cool\n"
	.string "crystals, give them to me!\l"
	.string "They'll make me stronger in battle.\p"
	.string "And if you need any advice for\n"
	.string "getting around, just ask me!\l"
	.string "I know this place pretty well!$"

EltheRoad_EventScript_FirstTrigger_Text_6:
# 114 "data/maps/EltheRoad/scripts.pory"
	.string "(Press R or talk to Demi-Vee while\n"
	.string "he's following you to get advice!)\p"
	.string "(He will talk about the person\n"
	.string "you're facing, or give general hints\l"
	.string "for how to progress.)$"

EltheRoad_EventScript_DemiveeTutorialSign_Text_0:
# 121 "data/maps/EltheRoad/scripts.pory"
	.string "{EMPHASIS_RED}!! NON-DIEGETIC SIGN ALERT !!{EMPHASIS_OFF}\p"
	.string "This sign does not really exist!\n"
	.string "It is just here to help you, Player.\p"
	.string "Your new companion is a very\n"
	.string "unique Pokémon. He doesn't grow\l"
	.string "in the way you're used to.\p"
	.string "If you want to make the best of his\n"
	.string "unique traits, read on.$"

EltheRoad_EventScript_DemiveeTutorialMultichoice_Text_0:
# 129 "data/maps/EltheRoad/scripts.pory"
	.string "What would you like to read about?$"

EltheRoad_EventScript_DemiveeTutorialMultichoice_Text_1:
# 131 "data/maps/EltheRoad/scripts.pory"
	.string "Forms$"

EltheRoad_EventScript_DemiveeTutorialMultichoice_Text_2:
# 131 "data/maps/EltheRoad/scripts.pory"
	.string "Shards$"

EltheRoad_EventScript_DemiveeTutorialMultichoice_Text_3:
# 131 "data/maps/EltheRoad/scripts.pory"
	.string "Leveling Up$"

EltheRoad_EventScript_DemiveeTutorialMultichoice_Text_4:
# 131 "data/maps/EltheRoad/scripts.pory"
	.string "Stat Points$"

EltheRoad_EventScript_DemiveeTutorialMultichoice_Text_5:
# 131 "data/maps/EltheRoad/scripts.pory"
	.string "Learning Skills$"

EltheRoad_EventScript_DemiveeTutorialMultichoice_Text_6:
# 131 "data/maps/EltheRoad/scripts.pory"
	.string "Stop Reading$"

EltheRoad_EventScript_DemiveeTutorialMultichoice_Text_7:
# 135 "data/maps/EltheRoad/scripts.pory"
	.string "Demi-Vee can't evolve, but he can\n"
	.string "change forms using special Shards.\p"
	.string "Each form matches the type of a\n"
	.string "normal evolution and has similar\l"
	.string "stats and moves.\p"
	.string "The four moves he starts with also\n"
	.string "change depending on his form.\p"
	.string "For example, his first move will be\n"
	.string "a mid-power move matching his Type.\p"
	.string "Be careful, though; if you delete\n"
	.string "one of these base moves, he will\l"
	.string "lose access to it in all forms.\l"
	.string "For example, if you delete Razor Leaf\l"
	.string "while in Grass form, you will also\l"
	.string "lose Shock Wave in Electric form.$"

EltheRoad_EventScript_DemiveeTutorialMultichoice_Text_8:
# 141 "data/maps/EltheRoad/scripts.pory"
	.string "There are various Shards scattered\n"
	.string "throughout this area.\p"
	.string "They are pieces of Evolution Stones\n"
	.string "which allow Demi-Vee to change form.\p"
	.string "You may find them on the ground, or\n"
	.string "get them as rewards for doing favors.\p"
	.string "You can see your currently owned\n"
	.string "shards in the Key Items pocket.\p"
	.string "To change Demi-Vee's form, open the\n"
	.string "POKéMON menu, select Demi-Vee, and\l"
	.string "pick the SHARDS option. On this\l"
	.string "screen, you can change forms using\l"
	.string "the L and R buttons.$"

EltheRoad_EventScript_DemiveeTutorialMultichoice_Text_9:
# 147 "data/maps/EltheRoad/scripts.pory"
	.string "Demi-Vee does not gain Exp. Points\n"
	.string "from participating in battle.\p"
	.string "He gains Exp. Points from eating\n"
	.string "Rock Candy instead.\p"
	.string "Like Shards, these can be found\n"
	.string "around town or received as rewards.\p"
	.string "It can be useful to save them if\n"
	.string "you're not planning to fight soon,\l"
	.string "as leveling up becomes more valuable\l"
	.string "when you have more Shards.$"

EltheRoad_EventScript_DemiveeTutorialMultichoice_Text_10:
# 152 "data/maps/EltheRoad/scripts.pory"
	.string "For each level the Demi-Vee gains,\n"
	.string "he earns 4 Stat Points.\p"
	.string "You can spend them in the Shards menu\n"
	.string "to increase his Base Stats.\p"
	.string "Press the A Button, then use the\n"
	.string "Control Pad to assign the points,\l"
	.string "and the A Button to save, or the\l"
	.string "B Button to cancel.\p"
	.string "You can't re-allocate points after\n"
	.string "spending them, so choose carefully.$"

EltheRoad_EventScript_DemiveeTutorialMultichoice_Text_11:
# 157 "data/maps/EltheRoad/scripts.pory"
	.string "When Demi-Vee levels up, he will\n"
	.string "have an opportunity to learn a\l"
	.string "skill from the Shard he is using.\p"
	.string "The first two skills are Moves that\n"
	.string "Demi-Vee can learn. Moves learned\l"
	.string "in this way can be used no\l"
	.string "matter what form he is in.\p"
	.string "The third skill lets you choose to\n"
	.string "permanently replace his Ability.\l"
	.string "This, too, persists between forms.\p"
	.string "You can see the skills each Shard\n"
	.string "will teach in the bottom right\l"
	.string "corner of the Shards menu.\l"
	.string "Skills you have already learned\l"
	.string "will be displayed with blue text.\p"
	.string "Skills cannot be relearned if you\n"
	.string "pass on them or delete them.\l"
	.string "It may be wise to carefully consider\l"
	.string "the skills each Shard can teach\l"
	.string "before you use your Rock Candy.$"

EltheRoad_EventScript_FirstSign_Text_0:
# 173 "data/maps/EltheRoad/scripts.pory"
	.string "{CLEAR_TO 60}{LEFT_ARROW} To Rehocan Town\n"
	.string "{CLEAR_TO 76}To Elthe City {RIGHT_ARROW}$"

EltheRoad_Trigger_VinosTrigger_Text_0:
# 179 "data/maps/EltheRoad/scripts.pory"
	.string "Vine Mon$"

EltheRoad_Trigger_VinosTrigger_Text_1:
# 180 "data/maps/EltheRoad/scripts.pory"
	.string "Ugh…stupid flood.\n"
	.string "Washed away a perfect lurking spot.$"

EltheRoad_Trigger_VinosTrigger_Text_2:
# 182 "data/maps/EltheRoad/scripts.pory"
	.string "The Pokémon hasn't noticed you…\n"
	.string "What will you do?$"

EltheRoad_Trigger_VinosTrigger_Text_3:
# 184 "data/maps/EltheRoad/scripts.pory"
	.string "Negotiate$"

EltheRoad_Trigger_VinosTrigger_Text_4:
# 184 "data/maps/EltheRoad/scripts.pory"
	.string "Attack$"

EltheRoad_Trigger_VinosTrigger_Text_5:
# 189 "data/maps/EltheRoad/scripts.pory"
	.string "Excuse me…$"

EltheRoad_Trigger_VinosTrigger_Text_6:
# 197 "data/maps/EltheRoad/scripts.pory"
	.string "What? A human speaks to me…$"

EltheRoad_Trigger_VinosTrigger_Text_7:
# 199 "data/maps/EltheRoad/scripts.pory"
	.string "Do you mind if I pass through here?$"

EltheRoad_Trigger_VinosTrigger_Text_8:
# 205 "data/maps/EltheRoad/scripts.pory"
	.string "You're asking my permission? As if you\n"
	.string "can understand my speech?$"

EltheRoad_Trigger_VinosTrigger_Text_9:
# 207 "data/maps/EltheRoad/scripts.pory"
	.string "Yeah, I can. It's kinda my thing.\n"
	.string "Let's talk this out.$"

EltheRoad_Trigger_VinosTrigger_Text_10:
# 209 "data/maps/EltheRoad/scripts.pory"
	.string "Fascinating…this may be an interesting\n"
	.string "exercise. I am Vinos. Let us begin.$"

EltheRoad_Trigger_VinosTrigger_Text_11:
# 211 "data/maps/EltheRoad/scripts.pory"
	.string "Try to make Vinos happy so it'll\n"
	.string "you pass through! It will ask you\l"
	.string "a series of questions.\p"
	.string "If you make Vinos angry, it may\n"
	.string "decide to attack you instead.\p"
	.string "If it likes your answers, you may\n"
	.string "get a gift as well.$"

EltheRoad_Trigger_VinosTrigger_Text_12:
# 218 "data/maps/EltheRoad/scripts.pory"
	.string "Demi-Vee, attack!$"

EltheRoad_Trigger_VinosTrigger_Text_13:
# 225 "data/maps/EltheRoad/scripts.pory"
	.string "What!? You -$"

EltheRoad_VinosNegotiationMain_Text_0:
# 233 "data/maps/EltheRoad/scripts.pory"
	.string "Vinos$"

EltheRoad_VinosNegotiationMain_Text_1:
# 234 "data/maps/EltheRoad/scripts.pory"
	.string "Alright, then…$"

EltheRoad_VinosNegotiationMain_Text_2:
# 248 "data/maps/EltheRoad/scripts.pory"
	.string "Dark$"

EltheRoad_VinosNegotiationMain_Text_3:
# 249 "data/maps/EltheRoad/scripts.pory"
	.string "Grass$"

EltheRoad_VinosNegotiationMain_Text_4:
# 250 "data/maps/EltheRoad/scripts.pory"
	.string "Fire$"

EltheRoad_VinosNegotiationMain_Text_5:
# 251 "data/maps/EltheRoad/scripts.pory"
	.string "Which Type of Pokémon is best,\n"
	.string "in your opinion?$"

EltheRoad_VinosNegotiationMain_Text_6:
# 258 "data/maps/EltheRoad/scripts.pory"
	.string "It's, uh…Grass. Yeah. I just love\n"
	.string "Grass type Pokémon…\p"
	.string "… … … … …$"

EltheRoad_VinosNegotiationMain_Text_7:
# 260 "data/maps/EltheRoad/scripts.pory"
	.string "You know what, no, I can't even f{CENSOR}uck{UNCENSOR}ing\n"
	.string "joke about it. All the major\l"
	.string "terrible events in my life were\l"
	.string "caused by Grass types.\l"
	.string "F{CENSOR}uck{UNCENSOR} Grass types. I hate 'em.$"

EltheRoad_VinosNegotiationMain_Text_8:
# 263 "data/maps/EltheRoad/scripts.pory"
	.string "You'd disrespect me to my face…\n"
	.string "You have some nerve, human.$"

EltheRoad_VinosNegotiationMain_Text_9:
# 272 "data/maps/EltheRoad/scripts.pory"
	.string "Oh, Dark is the best, obviously!$"

EltheRoad_VinosNegotiationMain_Text_10:
# 274 "data/maps/EltheRoad/scripts.pory"
	.string "Hmmhmm, yes, we are quite…\n"
	.string "Wait! You're just buttering me up!$"

EltheRoad_VinosNegotiationMain_Text_11:
# 276 "data/maps/EltheRoad/scripts.pory"
	.string "No way! I'm being honest! Some of my\n"
	.string "best friends are Dark types!$"

EltheRoad_VinosNegotiationMain_Text_12:
# 278 "data/maps/EltheRoad/scripts.pory"
	.string "…Well, alright. It's a good answer.$"

EltheRoad_VinosNegotiationMain_Text_13:
# 282 "data/maps/EltheRoad/scripts.pory"
	.string "Hmm…I think it must be Fire.\n"
	.string "It's just such a cool element.$"

EltheRoad_VinosNegotiationMain_Text_14:
# 284 "data/maps/EltheRoad/scripts.pory"
	.string "Plus, I was a Fire type for a while,\n"
	.string "myself. Self love, yo!$"

EltheRoad_VinosNegotiationMain_Text_15:
# 286 "data/maps/EltheRoad/scripts.pory"
	.string "You have some nerve, telling a Grass\n"
	.string "type that Fire is best…\p"
	.string "But I appreciate your honesty.\n"
	.string "The time for tricks has passed.$"

EltheRoad_VinosNegotiationMain_Text_16:
# 293 "data/maps/EltheRoad/scripts.pory"
	.string "Your berries?$"

EltheRoad_VinosNegotiationMain_Text_17:
# 294 "data/maps/EltheRoad/scripts.pory"
	.string "Eat trail mix$"

EltheRoad_VinosNegotiationMain_Text_18:
# 295 "data/maps/EltheRoad/scripts.pory"
	.string "Just eat it$"

EltheRoad_VinosNegotiationMain_Text_19:
# 296 "data/maps/EltheRoad/scripts.pory"
	.string "Would you like to eat\n"
	.string "one of my berries?$"

EltheRoad_VinosNegotiationMain_Text_20:
# 304 "data/maps/EltheRoad/scripts.pory"
	.string "Ooh, I'll take one!$"

EltheRoad_VinosNegotiationMain_Text_21:
# 307 "data/maps/EltheRoad/scripts.pory"
	.string "Urp…$"

EltheRoad_VinosNegotiationMain_Text_22:
# 309 "data/maps/EltheRoad/scripts.pory"
	.string "Ha! What an idiot! You didn't even\n"
	.string "fall for my camouflage, but you\l"
	.string "still ate my paralyzing berries!\l"
	.string "You're mine!$"

EltheRoad_VinosNegotiationMain_Text_23:
# 314 "data/maps/EltheRoad/scripts.pory"
	.string "Berries? They grow on your body?\n"
	.string "And you…WANT us to eat them?$"

EltheRoad_VinosNegotiationMain_Text_24:
# 316 "data/maps/EltheRoad/scripts.pory"
	.string "Well…yes. They're delicious.\n"
	.string "Or so I'm told.$"

EltheRoad_VinosNegotiationMain_Text_25:
# 318 "data/maps/EltheRoad/scripts.pory"
	.string "What about the ones that your eyes\n"
	.string "are on? Are they edible?$"

EltheRoad_VinosNegotiationMain_Text_26:
# 320 "data/maps/EltheRoad/scripts.pory"
	.string "No, they're…my eyes. Not berries.$"

EltheRoad_VinosNegotiationMain_Text_27:
# 322 "data/maps/EltheRoad/scripts.pory"
	.string "Has anyone ever tried to pick your\n"
	.string "eyes instead of a berry?$"

EltheRoad_VinosNegotiationMain_Text_28:
# 324 "data/maps/EltheRoad/scripts.pory"
	.string "Look, are you gonna eat a berry\n"
	.string "or not!?$"

EltheRoad_VinosNegotiationMain_Text_29:
# 326 "data/maps/EltheRoad/scripts.pory"
	.string "Nope.$"

EltheRoad_VinosNegotiationMain_Text_30:
# 328 "data/maps/EltheRoad/scripts.pory"
	.string "… … … … … … … … … …\p"
	.string "Okay, forget it. Next question.$"

EltheRoad_VinosNegotiationMain_Text_31:
# 332 "data/maps/EltheRoad/scripts.pory"
	.string "Oh, that reminds me I have…$"

EltheRoad_VinosNegotiationMain_Text_32:
# 334 "data/maps/EltheRoad/scripts.pory"
	.string "Trail mix!$"

EltheRoad_VinosNegotiationMain_Text_33:
# 336 "data/maps/EltheRoad/scripts.pory"
	.string "… … … … …\p"
	.string "Your ways confuse me, human.\n"
	.string "I would like to stop talking to you.$"

EltheRoad_VinosNegotiationMain_Text_34:
# 343 "data/maps/EltheRoad/scripts.pory"
	.string "To get my team back$"

EltheRoad_VinosNegotiationMain_Text_35:
# 344 "data/maps/EltheRoad/scripts.pory"
	.string "For thrills$"

EltheRoad_VinosNegotiationMain_Text_36:
# 345 "data/maps/EltheRoad/scripts.pory"
	.string "I don't want to fight$"

EltheRoad_VinosNegotiationMain_Text_37:
# 346 "data/maps/EltheRoad/scripts.pory"
	.string "Why should I let you through?$"

EltheRoad_VinosNegotiationMain_Text_38:
# 353 "data/maps/EltheRoad/scripts.pory"
	.string "I need to get my team back! We got\n"
	.string "separated by the flood.\p"
	.string "I'm their Trainer.\n"
	.string "We need each other.$"

EltheRoad_VinosNegotiationMain_Text_39:
# 355 "data/maps/EltheRoad/scripts.pory"
	.string "Why is that my problem?\n"
	.string "I'm hungry.$"

EltheRoad_VinosNegotiationMain_Text_40:
# 357 "data/maps/EltheRoad/scripts.pory"
	.string "Hungr- were you planning to eat me!?$"

EltheRoad_VinosNegotiationMain_Text_41:
# 359 "data/maps/EltheRoad/scripts.pory"
	.string "No. I was just giving an example of\n"
	.string "something that's not your problem.$"

EltheRoad_VinosNegotiationMain_Text_42:
# 368 "data/maps/EltheRoad/scripts.pory"
	.string "There's no reason for us to fight.\n"
	.string "Look at this place, it's a mess.\p"
	.string "Just let me move on to take care of\n"
	.string "my business, and you can get back\l"
	.string "to finding a new tree, or whatever\l"
	.string "it is you're doing.$"

EltheRoad_VinosNegotiationMain_Text_43:
# 372 "data/maps/EltheRoad/scripts.pory"
	.string "Pokémon don't need a reason to\n"
	.string "fight…but now that you mention it,\l"
	.string "it does sound like a waste\l"
	.string "of time right now…$"

EltheRoad_VinosNegotiationMain_Text_44:
# 377 "data/maps/EltheRoad/scripts.pory"
	.string "I bet you fight every Trainer who\n"
	.string "comes through here, right?\p"
	.string "Wouldn't it be a thrill to let\n"
	.string "one pass through, just this once?\l"
	.string "Get a little crazy with it.$"

EltheRoad_VinosNegotiationMain_Text_45:
# 381 "data/maps/EltheRoad/scripts.pory"
	.string "Hmm…perhaps under the circumstances,\n"
	.string "it would serve me better…$"

EltheRoad_VinosNegotiationMain_Text_46:
# 387 "data/maps/EltheRoad/scripts.pory"
	.string "Thirty years$"

EltheRoad_VinosNegotiationMain_Text_47:
# 388 "data/maps/EltheRoad/scripts.pory"
	.string "Long enough$"

EltheRoad_VinosNegotiationMain_Text_48:
# 389 "data/maps/EltheRoad/scripts.pory"
	.string "Just started$"

EltheRoad_VinosNegotiationMain_Text_49:
# 390 "data/maps/EltheRoad/scripts.pory"
	.string "How long has it been since you\n"
	.string "started training Pokémon?$"

EltheRoad_VinosNegotiationMain_Text_50:
# 397 "data/maps/EltheRoad/scripts.pory"
	.string "Hmm, well me and Demi-Vee just met,\n"
	.string "so I guess I just started.$"

EltheRoad_VinosNegotiationMain_Text_51:
# 399 "data/maps/EltheRoad/scripts.pory"
	.string "No wonder you tried talking. You\n"
	.string "have no idea what you're doing.$"

EltheRoad_VinosNegotiationMain_Text_52:
# 408 "data/maps/EltheRoad/scripts.pory"
	.string "Let me think…Python's last birthday\n"
	.string "was, uh…\p"
	.string "Hmm, I can't remember exactly, but\n"
	.string "I think I started in the year…\p"
	.string "So, it must have been at least\n"
	.string "thirty years.$"

EltheRoad_VinosNegotiationMain_Text_53:
# 412 "data/maps/EltheRoad/scripts.pory"
	.string "You expect me to believe that?\n"
	.string "You don't even look like you're\l"
	.string "thirty years old. You're just\l"
	.string "trying to intimidate me.$"

EltheRoad_VinosNegotiationMain_Text_54:
# 415 "data/maps/EltheRoad/scripts.pory"
	.string "It's true, though…$"

EltheRoad_VinosNegotiationMain_Text_55:
# 419 "data/maps/EltheRoad/scripts.pory"
	.string "Long enough.$"

EltheRoad_VinosNegotiationMain_Text_56:
# 421 "data/maps/EltheRoad/scripts.pory"
	.string "…!$"

EltheRoad_VinosNegotiationMain_Text_57:
# 439 "data/maps/EltheRoad/scripts.pory"
	.string "You're getting on my nerves…\p"
	.string "Enough talk! I should have done this\n"
	.string "from the beginning!$"

EltheRoad_VinosNegotiationMidSuccess_Text_0:
# 453 "data/maps/EltheRoad/scripts.pory"
	.string "…well, I suppose you're not wholly\n"
	.string "unpleasant. And I don't feel like\l"
	.string "jumping you anymore anyway.\l"
	.string "You can pass.\p"
	.string "And here, take this. I have no\n"
	.string "use for it anyway.$"

EltheRoad_VinosNegotiationMidSuccess_Text_1:
# 458 "data/maps/EltheRoad/scripts.pory"
	.string "Ooh! A crystal! Yummy!$"

EltheRoad_VinosNegotiationMidSuccess_Text_2:
# 460 "data/maps/EltheRoad/scripts.pory"
	.string "Run along, now.$"

EltheRoad_VinosNegotiationMidSuccess_Text_3:
# 462 "data/maps/EltheRoad/scripts.pory"
	.string "Okay, then. Thanks for your\n"
	.string "patience. Buh-bye!$"

EltheRoad_VinosNegotiationCompleteSuccess_Text_0:
# 471 "data/maps/EltheRoad/scripts.pory"
	.string "Hmm. That was a nice change of pace.\n"
	.string "Rarely do I speak even to those of\l"
	.string "my own kind. Even rarer to speak to\l"
	.string "a human as an equal.\p"
	.string "Here. Take this as a token\n"
	.string "of my appreciation.$"

EltheRoad_VinosNegotiationCompleteSuccess_Text_1:
# 475 "data/maps/EltheRoad/scripts.pory"
	.string "Ooh! A huge crystal! Yummy!\n"
	.string "I'll save it for later!$"

EltheRoad_VinosNegotiationCompleteSuccess_Text_2:
# 477 "data/maps/EltheRoad/scripts.pory"
	.string "I saw another such crystal a bit further\n"
	.string "up the path, behind a tree. A red one.\p"
	.string "Look for it if it interests you.\n"
	.string "Keep yourself safe.$"

EltheRoad_VinosNegotiationCompleteSuccess_Text_3:
# 480 "data/maps/EltheRoad/scripts.pory"
	.string "Okay, thanks for the tip!\n"
	.string "See you around, Vinos!$"

EltheRoad_VinosDoBattle_Text_0:
# 492 "data/maps/EltheRoad/scripts.pory"
	.string "… … … … …\p"
	.string "…well? Aren't you going to\n"
	.string "finish me off?$"

EltheRoad_VinosDoBattle_Text_1:
# 494 "data/maps/EltheRoad/scripts.pory"
	.string "What? No. I only wanted to get\n"
	.string "through here.$"

EltheRoad_VinosDoBattle_Text_2:
# 496 "data/maps/EltheRoad/scripts.pory"
	.string "…Oh.$"

EltheRoad_VinosDoBattle_Text_3:
# 504 "data/maps/EltheRoad/scripts.pory"
	.string "Well, go along then! And if it\n"
	.string "will get you to leave me alone,\l"
	.string "then take this!$"

EltheRoad_VinosDoBattle_Text_4:
# 509 "data/maps/EltheRoad/scripts.pory"
	.string "Those things are all over the\n"
	.string "place here. I think I saw another\l"
	.string "type of crystal next to that stump\l"
	.string "behind me.\p"
	.string "Run along, then.$"

EltheRoad_EventScript_VinosIdle_Text_0:
# 532 "data/maps/EltheRoad/scripts.pory"
	.string "If you truly just wanted to pass\n"
	.string "by, then hurry up already!\p"
	.string "I don't want to see your face\n"
	.string "right now. Begone.$"

EltheRoad_EventScript_VinosIdle_Text_1:
# 538 "data/maps/EltheRoad/scripts.pory"
	.string "If you want more crystals, there's\n"
	.string "one stuck in a tree…$"

EltheRoad_EventScript_VinosIdle_Text_2:
# 555 "data/maps/EltheRoad/scripts.pory"
	.string "Right here.$"

EltheRoad_EventScript_VinosIdle_Text_3:
# 597 "data/maps/EltheRoad/scripts.pory"
	.string "How exactly are you able to\n"
	.string "understand my speech?$"

EltheRoad_EventScript_VinosIdle_Text_4:
# 599 "data/maps/EltheRoad/scripts.pory"
	.string "Oh, it's a long story…\n"
	.string "A long, deeply stupid story…\p"
	.string "It starts with me kidnapping a\n"
	.string "Totodile from a Pokémon Professor,\l"
	.string "and ends with my arm falling off\l"
	.string "and getting stuck in the body of a…\p"
	.string "You know, I'd really rather not\n"
	.string "get into it.\p"
	.string "The short version is that it's a\n"
	.string "highly unique circumstance.$"

EltheRoad_EventScript_VinosIdle_Text_5:
# 604 "data/maps/EltheRoad/scripts.pory"
	.string "I see…so no other humans have\n"
	.string "this ability?$"

EltheRoad_EventScript_VinosIdle_Text_6:
# 606 "data/maps/EltheRoad/scripts.pory"
	.string "I think some do, but…not the same\n"
	.string "kind as me.$"

EltheRoad_EventScript_VinosIdle_Text_7:
# 608 "data/maps/EltheRoad/scripts.pory"
	.string "How curious.$"

EltheRoad_EventScript_VinosIdle_Text_8:
# 613 "data/maps/EltheRoad/scripts.pory"
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

EltheRoad_Trigger_VinosAltTrigger_Text_0:
# 631 "data/maps/EltheRoad/scripts.pory"
	.string "Ack! A trainer!?$"

EltheRoad_Trigger_VinosAltTrigger_Text_1:
# 633 "data/maps/EltheRoad/scripts.pory"
	.string "Hi. I just wanted to sneak by you.\n"
	.string "Do you mind?$"

EltheRoad_Trigger_VinosAltTrigger_Text_2:
# 635 "data/maps/EltheRoad/scripts.pory"
	.string "You're…asking my permission? What?$"

EltheRoad_Trigger_VinosAltTrigger_Text_3:
# 637 "data/maps/EltheRoad/scripts.pory"
	.string "Yeah. Don't wanna be rude.\n"
	.string "What kind of Pokémon are you?\l"
	.string "I've never seen this kind before.$"

EltheRoad_Trigger_VinosAltTrigger_Text_4:
# 639 "data/maps/EltheRoad/scripts.pory"
	.string "…I am called Vinos.\n"
	.string "…Apologies, I am very confused.\p"
	.string "I have never seen a human interact\n"
	.string "with a Pokémon in this way. Usually\l"
	.string "they just attack. And I thought\l"
	.string "humans couldn't hear our speech.$"

EltheRoad_Trigger_VinosAltTrigger_Text_5:
# 642 "data/maps/EltheRoad/scripts.pory"
	.string "Well, most can't. But I can.$"

EltheRoad_Trigger_VinosAltTrigger_Text_6:
# 644 "data/maps/EltheRoad/scripts.pory"
	.string "Fascinating. A gift, then, for one\n"
	.string "who has shown me something new.$"
