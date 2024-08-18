EltheRoad_MapScripts::
# 8 "data/maps/EltheRoad/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 9 "data/maps/EltheRoad/scripts.pory"
	map_script_2 VAR_MAIN_GAME_STATE, 0, EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0
	.2byte 0

EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0:
# 10 "data/maps/EltheRoad/scripts.pory"
	clearflag FLAG_NO_MUSIC_ON_WARP
# 11 "data/maps/EltheRoad/scripts.pory"
	addobjectspriteoffset 2, 5, 0
# 12 "data/maps/EltheRoad/scripts.pory"
	addobjectspriteoffset 1, 6, 0
# 13 "data/maps/EltheRoad/scripts.pory"
	delay 60
# 14 "data/maps/EltheRoad/scripts.pory"
	delay 60
# 15 "data/maps/EltheRoad/scripts.pory"
	delay 60
# 16 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_0
# 17 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_1, MSGBOX_AUTOCLOSE
# 18 "data/maps/EltheRoad/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 19 "data/maps/EltheRoad/scripts.pory"
	delay 60
# 20 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_2, PORTRAIT_AMELIA_NEUTRAL
# 21 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_3
# 22 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_4, PORTRAIT_DEMIVEE_NEUTRAL, PORTRAIT_DEFAULT_LEFT
# 23 "data/maps/EltheRoad/scripts.pory"
	message EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_5
# 24 "data/maps/EltheRoad/scripts.pory"
	addobjectspriteoffset 1, -1, 0
# 25 "data/maps/EltheRoad/scripts.pory"
	delay 5
# 26 "data/maps/EltheRoad/scripts.pory"
	addobjectspriteoffset 1, -1, 0
# 27 "data/maps/EltheRoad/scripts.pory"
	delay 5
# 28 "data/maps/EltheRoad/scripts.pory"
	addobjectspriteoffset 1, -1, 0
# 29 "data/maps/EltheRoad/scripts.pory"
	delay 5
# 30 "data/maps/EltheRoad/scripts.pory"
	addobjectspriteoffset 1, -1, 0
# 31 "data/maps/EltheRoad/scripts.pory"
	delay 5
# 32 "data/maps/EltheRoad/scripts.pory"
	addobjectspriteoffset 1, -1, 0
# 33 "data/maps/EltheRoad/scripts.pory"
	delay 5
# 34 "data/maps/EltheRoad/scripts.pory"
	addobjectspriteoffset 1, -1, 0
# 35 "data/maps/EltheRoad/scripts.pory"
	delay 5
# 36 "data/maps/EltheRoad/scripts.pory"
	waitmessage
# 37 "data/maps/EltheRoad/scripts.pory"
	waitbuttonpress
# 38 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_2, PORTRAIT_AMELIA_SHOCK
# 39 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_6
# 40 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_4, PORTRAIT_DEMIVEE_ANNOYED, PORTRAIT_DEFAULT_LEFT
# 41 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_7
# 42 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_2, PORTRAIT_AMELIA_NEUTRAL
# 43 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_8, MSGBOX_AUTOCLOSE
# 44 "data/maps/EltheRoad/scripts.pory"
	playse SE_PIN
# 45 "data/maps/EltheRoad/scripts.pory"
	applymovement 2, Common_Movement_ExclamationMark
# 46 "data/maps/EltheRoad/scripts.pory"
	waitmovement 0
# 47 "data/maps/EltheRoad/scripts.pory"
	applymovement 2, Common_Movement_Delay48
# 48 "data/maps/EltheRoad/scripts.pory"
	waitmovement 0
# 49 "data/maps/EltheRoad/scripts.pory"
	removeobject 2
# 50 "data/maps/EltheRoad/scripts.pory"
	playse SE_BIKE_HOP
# 51 "data/maps/EltheRoad/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, EltheRoad_Movement_AmeliaJumpUp
# 52 "data/maps/EltheRoad/scripts.pory"
	waitmovement 0
# 53 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_2, PORTRAIT_AMELIA_SHOCK
# 54 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_9, MSGBOX_AUTOCLOSE
# 55 "data/maps/EltheRoad/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, EltheRoad_Movement_AmeliaLookAround
# 56 "data/maps/EltheRoad/scripts.pory"
	waitmovement 0
# 57 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_2, PORTRAIT_AMELIA_STRAINED
# 58 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_10
# 59 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_2, PORTRAIT_AMELIA_NEUTRAL
# 60 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_11, MSGBOX_AUTOCLOSE
# 61 "data/maps/EltheRoad/scripts.pory"
	additem ITEM_POKE_BALL
# 62 "data/maps/EltheRoad/scripts.pory"
	additem ITEM_GREAT_BALL
# 63 "data/maps/EltheRoad/scripts.pory"
	additem ITEM_ULTRA_BALL
# 64 "data/maps/EltheRoad/scripts.pory"
	additem ITEM_NEST_BALL
# 65 "data/maps/EltheRoad/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, EltheRoad_Movement_AmeliaStartLeaving
# 66 "data/maps/EltheRoad/scripts.pory"
	delay 30
# 67 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_4, PORTRAIT_DEMIVEE_NEUTRAL, PORTRAIT_DEFAULT_LEFT
# 68 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_12, MSGBOX_AUTOCLOSE
# 69 "data/maps/EltheRoad/scripts.pory"
	playse SE_LEDGE
# 70 "data/maps/EltheRoad/scripts.pory"
	applymovement 1, EltheRoad_Movement_DemiveeFollow
# 71 "data/maps/EltheRoad/scripts.pory"
	waitmovement 0
# 72 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_4, PORTRAIT_DEMIVEE_ANNOYED, PORTRAIT_DEFAULT_LEFT
# 73 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_13
# 74 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_2, PORTRAIT_AMELIA_SMUG
# 75 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_14
# 76 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_2, PORTRAIT_AMELIA_NEUTRAL
# 77 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_15, MSGBOX_AUTOCLOSE
# 78 "data/maps/EltheRoad/scripts.pory"
	applymovement 1, EltheRoad_Movement_DemiveeJoin
# 79 "data/maps/EltheRoad/scripts.pory"
	waitmovement 0
# 80 "data/maps/EltheRoad/scripts.pory"
	removeobject 1
# 81 "data/maps/EltheRoad/scripts.pory"
	playfanfare MUS_EVOLVED
# 82 "data/maps/EltheRoad/scripts.pory"
	additem ITEM_LEAFSHARD
# 83 "data/maps/EltheRoad/scripts.pory"
	message EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_16
# 84 "data/maps/EltheRoad/scripts.pory"
	waitmessage
# 85 "data/maps/EltheRoad/scripts.pory"
	waitfanfare
# 86 "data/maps/EltheRoad/scripts.pory"
	waitbuttonpress
# 87 "data/maps/EltheRoad/scripts.pory"
	closemessage
# 88 "data/maps/EltheRoad/scripts.pory"
	fadedefaultbgm
# 89 "data/maps/EltheRoad/scripts.pory"
	setvar VAR_MAIN_GAME_STATE, 1
	return


EltheRoad_EventScript_FirstTrigger::
# 96 "data/maps/EltheRoad/scripts.pory"
	lock
# 97 "data/maps/EltheRoad/scripts.pory"
	delay 30
# 98 "data/maps/EltheRoad/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 99 "data/maps/EltheRoad/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, Common_Movement_FaceRight
# 100 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_2, PORTRAIT_AMELIA_NEUTRAL
# 101 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_EventScript_FirstTrigger_Text_0
# 102 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_4, PORTRAIT_DEMIVEE_NEUTRAL, PORTRAIT_DEFAULT_LEFT
# 103 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_EventScript_FirstTrigger_Text_1
# 106 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_2, PORTRAIT_AMELIA_SMUG
# 107 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_EventScript_FirstTrigger_Text_2
# 108 "data/maps/EltheRoad/scripts.pory"
	setpartymemberinfo 0
# 109 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_EventScript_FirstTrigger_Text_3, PORTRAIT_DEMIVEE_HUH, PORTRAIT_DEFAULT_LEFT
# 110 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_EventScript_FirstTrigger_Text_4
# 111 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_EventScript_FirstTrigger_Text_3, PORTRAIT_DEMIVEE_NEUTRAL, PORTRAIT_DEFAULT_LEFT
# 112 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_EventScript_FirstTrigger_Text_5
# 114 "data/maps/EltheRoad/scripts.pory"
	speakername NULL, 0
# 115 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_EventScript_FirstTrigger_Text_6, MSGBOX_AUTOCLOSE
# 116 "data/maps/EltheRoad/scripts.pory"
	setvar VAR_MAIN_GAME_STATE, 2
	return


EltheRoad_EventScript_DemiveeTutorialSign::
# 121 "data/maps/EltheRoad/scripts.pory"
	lock
# 122 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_EventScript_DemiveeTutorialSign_Text_0
# 125 "data/maps/EltheRoad/scripts.pory"
	goto EltheRoad_EventScript_DemiveeTutorialMultichoice
	return


EltheRoad_EventScript_DemiveeTutorialMultichoice::
# 130 "data/maps/EltheRoad/scripts.pory"
	message EltheRoad_EventScript_DemiveeTutorialMultichoice_Text_0
# 131 "data/maps/EltheRoad/scripts.pory"
	waitmessage
# 132 "data/maps/EltheRoad/scripts.pory"
	dynmultichoice 0, 0, FALSE, 6, 0, DYN_MULTICHOICE_CB_NONE, EltheRoad_EventScript_DemiveeTutorialMultichoice_Text_1, EltheRoad_EventScript_DemiveeTutorialMultichoice_Text_2, EltheRoad_EventScript_DemiveeTutorialMultichoice_Text_3, EltheRoad_EventScript_DemiveeTutorialMultichoice_Text_4, EltheRoad_EventScript_DemiveeTutorialMultichoice_Text_5, EltheRoad_EventScript_DemiveeTutorialMultichoice_Text_6
# 133 "data/maps/EltheRoad/scripts.pory"
	switch VAR_RESULT
# 135 "data/maps/EltheRoad/scripts.pory"
	case 0, EltheRoad_EventScript_DemiveeTutorialMultichoice_3
# 141 "data/maps/EltheRoad/scripts.pory"
	case 1, EltheRoad_EventScript_DemiveeTutorialMultichoice_4
# 147 "data/maps/EltheRoad/scripts.pory"
	case 2, EltheRoad_EventScript_DemiveeTutorialMultichoice_5
# 152 "data/maps/EltheRoad/scripts.pory"
	case 3, EltheRoad_EventScript_DemiveeTutorialMultichoice_6
# 157 "data/maps/EltheRoad/scripts.pory"
	case 4, EltheRoad_EventScript_DemiveeTutorialMultichoice_7
# 163 "data/maps/EltheRoad/scripts.pory"
	case 5, EltheRoad_EventScript_DemiveeTutorialMultichoice_8
# 164 "data/maps/EltheRoad/scripts.pory"
	case MULTI_B_PRESSED, EltheRoad_EventScript_DemiveeTutorialMultichoice_8
EltheRoad_EventScript_DemiveeTutorialMultichoice_1:
# 168 "data/maps/EltheRoad/scripts.pory"
	goto EltheRoad_EventScript_DemiveeTutorialMultichoice
	return

EltheRoad_EventScript_DemiveeTutorialMultichoice_3:
# 136 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_EventScript_DemiveeTutorialMultichoice_Text_7
	goto EltheRoad_EventScript_DemiveeTutorialMultichoice_1

EltheRoad_EventScript_DemiveeTutorialMultichoice_4:
# 142 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_EventScript_DemiveeTutorialMultichoice_Text_8
	goto EltheRoad_EventScript_DemiveeTutorialMultichoice_1

EltheRoad_EventScript_DemiveeTutorialMultichoice_5:
# 148 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_EventScript_DemiveeTutorialMultichoice_Text_9
	goto EltheRoad_EventScript_DemiveeTutorialMultichoice_1

EltheRoad_EventScript_DemiveeTutorialMultichoice_6:
# 153 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_EventScript_DemiveeTutorialMultichoice_Text_10
	goto EltheRoad_EventScript_DemiveeTutorialMultichoice_1

EltheRoad_EventScript_DemiveeTutorialMultichoice_7:
# 158 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_EventScript_DemiveeTutorialMultichoice_Text_11
	goto EltheRoad_EventScript_DemiveeTutorialMultichoice_1

EltheRoad_EventScript_DemiveeTutorialMultichoice_8:
# 165 "data/maps/EltheRoad/scripts.pory"
	release
	end


EltheRoad_EventScript_FirstSign::
# 174 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_EventScript_FirstSign_Text_0, MSGBOX_SIGN
	return


EltheRoad_Trigger_VinosTrigger::
# 179 "data/maps/EltheRoad/scripts.pory"
	lock
# 180 "data/maps/EltheRoad/scripts.pory"
	delay 32
# 181 "data/maps/EltheRoad/scripts.pory"
	special SpawnCameraObject
# 182 "data/maps/EltheRoad/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp2
# 183 "data/maps/EltheRoad/scripts.pory"
	waitmovement 0
# 184 "data/maps/EltheRoad/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
# 185 "data/maps/EltheRoad/scripts.pory"
	waitmovement 0
# 186 "data/maps/EltheRoad/scripts.pory"
	delay 32
# 187 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_Trigger_VinosTrigger_Text_0, PORTRAIT_VINOS_NEUTRAL, PORTRAIT_DEFAULT_LEFT
# 188 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_Trigger_VinosTrigger_Text_1, MSGBOX_AUTOCLOSE
# 189 "data/maps/EltheRoad/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkDown
# 190 "data/maps/EltheRoad/scripts.pory"
	waitmovement 0
# 191 "data/maps/EltheRoad/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkDown
# 192 "data/maps/EltheRoad/scripts.pory"
	waitmovement 0
# 193 "data/maps/EltheRoad/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkDown
# 194 "data/maps/EltheRoad/scripts.pory"
	waitmovement 0
# 195 "data/maps/EltheRoad/scripts.pory"
	special RemoveCameraObject
# 196 "data/maps/EltheRoad/scripts.pory"
	delay 32
# 197 "data/maps/EltheRoad/scripts.pory"
	message EltheRoad_Trigger_VinosTrigger_Text_2
# 198 "data/maps/EltheRoad/scripts.pory"
	waitmessage
# 199 "data/maps/EltheRoad/scripts.pory"
	dynmultichoice 0, 0, TRUE, 6, 0, DYN_MULTICHOICE_CB_NONE, EltheRoad_Trigger_VinosTrigger_Text_3, EltheRoad_Trigger_VinosTrigger_Text_4
# 200 "data/maps/EltheRoad/scripts.pory"
	switch VAR_RESULT
# 202 "data/maps/EltheRoad/scripts.pory"
	case 0, EltheRoad_Trigger_VinosTrigger_2
# 231 "data/maps/EltheRoad/scripts.pory"
	case 1, EltheRoad_Trigger_VinosTrigger_3
	return

EltheRoad_Trigger_VinosTrigger_2:
# 203 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_2, PORTRAIT_AMELIA_NEUTRAL
# 204 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_Trigger_VinosTrigger_Text_5, MSGBOX_AUTOCLOSE
# 205 "data/maps/EltheRoad/scripts.pory"
	playse SE_PIN
# 206 "data/maps/EltheRoad/scripts.pory"
	applymovement 3, Common_Movement_FaceDown
# 207 "data/maps/EltheRoad/scripts.pory"
	waitmovement 0
# 208 "data/maps/EltheRoad/scripts.pory"
	applymovement 3, Common_Movement_ExclamationMark
# 209 "data/maps/EltheRoad/scripts.pory"
	waitmovement 0
# 210 "data/maps/EltheRoad/scripts.pory"
	delay 48
# 211 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_Trigger_VinosTrigger_Text_0, PORTRAIT_VINOS_NEUTRAL, PORTRAIT_DEFAULT_LEFT
# 212 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_Trigger_VinosTrigger_Text_6
# 213 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_2, PORTRAIT_AMELIA_NEUTRAL
# 214 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_Trigger_VinosTrigger_Text_7, MSGBOX_AUTOCLOSE
# 215 "data/maps/EltheRoad/scripts.pory"
	playse SE_PIN
# 216 "data/maps/EltheRoad/scripts.pory"
	applymovement 3, Common_Movement_ExclamationMark
# 217 "data/maps/EltheRoad/scripts.pory"
	waitmovement 0
# 218 "data/maps/EltheRoad/scripts.pory"
	delay 48
# 219 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_Trigger_VinosTrigger_Text_0, PORTRAIT_VINOS_NEUTRAL, PORTRAIT_DEFAULT_LEFT
# 220 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_Trigger_VinosTrigger_Text_8
# 221 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_2, PORTRAIT_AMELIA_NEUTRAL
# 222 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_Trigger_VinosTrigger_Text_9
# 223 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_Trigger_VinosTrigger_Text_0, PORTRAIT_VINOS_NEUTRAL, PORTRAIT_DEFAULT_LEFT
# 224 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_Trigger_VinosTrigger_Text_10
# 225 "data/maps/EltheRoad/scripts.pory"
	speakername NULL, 0
# 226 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_Trigger_VinosTrigger_Text_11, MSGBOX_AUTOCLOSE
# 229 "data/maps/EltheRoad/scripts.pory"
	delay 32
# 230 "data/maps/EltheRoad/scripts.pory"
	goto EltheRoad_VinosNegotiationMain
	return

EltheRoad_Trigger_VinosTrigger_3:
# 232 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_2, PORTRAIT_AMELIA_STRAINED
# 233 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_Trigger_VinosTrigger_Text_12, MSGBOX_AUTOCLOSE
# 234 "data/maps/EltheRoad/scripts.pory"
	playse SE_PIN
# 235 "data/maps/EltheRoad/scripts.pory"
	applymovement 3, Common_Movement_FaceDown
# 236 "data/maps/EltheRoad/scripts.pory"
	waitmovement 0
# 237 "data/maps/EltheRoad/scripts.pory"
	applymovement 3, Common_Movement_ExclamationMark
# 238 "data/maps/EltheRoad/scripts.pory"
	waitmovement 0
# 239 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_Trigger_VinosTrigger_Text_0, PORTRAIT_VINOS_MAD, PORTRAIT_DEFAULT_LEFT
# 240 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_Trigger_VinosTrigger_Text_13, MSGBOX_AUTOCLOSE
# 241 "data/maps/EltheRoad/scripts.pory"
	goto EltheRoad_VinosDoBattle
	return


EltheRoad_VinosNegotiationMain::
# 248 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_VinosNegotiationMain_Text_0, PORTRAIT_VINOS_NEUTRAL
# 249 "data/maps/EltheRoad/scripts.pory"
	message EltheRoad_VinosNegotiationMain_Text_1
# 250 "data/maps/EltheRoad/scripts.pory"
	waitmessage
# 251 "data/maps/EltheRoad/scripts.pory"
	waitbuttonpress
# 252 "data/maps/EltheRoad/scripts.pory"
	setvar VAR_0x8008, 4
# 253 "data/maps/EltheRoad/scripts.pory"
	special GetNegotiationTopic
# 254 "data/maps/EltheRoad/scripts.pory"
	compare VAR_RESULT, 0xFF
	goto_if_eq EltheRoad_VinosNegotiationMain_1
# 260 "data/maps/EltheRoad/scripts.pory"
	switch VAR_RESULT
# 262 "data/maps/EltheRoad/scripts.pory"
	case 0, EltheRoad_VinosNegotiationMain_6
# 306 "data/maps/EltheRoad/scripts.pory"
	case 1, EltheRoad_VinosNegotiationMain_7
# 356 "data/maps/EltheRoad/scripts.pory"
	case 2, EltheRoad_VinosNegotiationMain_8
# 400 "data/maps/EltheRoad/scripts.pory"
	case 3, EltheRoad_VinosNegotiationMain_9
EltheRoad_VinosNegotiationMain_4:
# 442 "data/maps/EltheRoad/scripts.pory"
	delay 16
# 443 "data/maps/EltheRoad/scripts.pory"
	compare VAR_NEGOTIATION_SCORE, 3
	goto_if_ge EltheRoad_VinosNegotiationMain_10
# 451 "data/maps/EltheRoad/scripts.pory"
	compare VAR_NEGOTIATION_SCORE, 0
	goto_if_eq EltheRoad_VinosNegotiationMain_11
# 459 "data/maps/EltheRoad/scripts.pory"
	goto EltheRoad_VinosNegotiationMain
	return

EltheRoad_VinosNegotiationMain_1:
# 256 "data/maps/EltheRoad/scripts.pory"
	goto EltheRoad_VinosNegotiationMidSuccess
	return

EltheRoad_VinosNegotiationMain_6:
# 263 "data/maps/EltheRoad/scripts.pory"
	dynmultipush EltheRoad_VinosNegotiationMain_Text_2, 1
# 264 "data/maps/EltheRoad/scripts.pory"
	dynmultipush EltheRoad_VinosNegotiationMain_Text_3, 0
# 265 "data/maps/EltheRoad/scripts.pory"
	dynmultipush EltheRoad_VinosNegotiationMain_Text_4, 2
# 266 "data/maps/EltheRoad/scripts.pory"
	message EltheRoad_VinosNegotiationMain_Text_5
# 267 "data/maps/EltheRoad/scripts.pory"
	waitmessage
# 268 "data/maps/EltheRoad/scripts.pory"
	dynmultistack 0, 0, FALSE, 6, FALSE, 1, DYN_MULTICHOICE_CB_NONE
# 269 "data/maps/EltheRoad/scripts.pory"
	switch VAR_RESULT
# 271 "data/maps/EltheRoad/scripts.pory"
	case 0, EltheRoad_VinosNegotiationMain_16
# 285 "data/maps/EltheRoad/scripts.pory"
	case 1, EltheRoad_VinosNegotiationMain_17
# 295 "data/maps/EltheRoad/scripts.pory"
	case 2, EltheRoad_VinosNegotiationMain_18
	goto EltheRoad_VinosNegotiationMain_4

EltheRoad_VinosNegotiationMain_7:
# 308 "data/maps/EltheRoad/scripts.pory"
	dynmultipush EltheRoad_VinosNegotiationMain_Text_16, 1
# 309 "data/maps/EltheRoad/scripts.pory"
	dynmultipush EltheRoad_VinosNegotiationMain_Text_17, 2
# 310 "data/maps/EltheRoad/scripts.pory"
	dynmultipush EltheRoad_VinosNegotiationMain_Text_18, 0
# 311 "data/maps/EltheRoad/scripts.pory"
	message EltheRoad_VinosNegotiationMain_Text_19
# 312 "data/maps/EltheRoad/scripts.pory"
	waitmessage
# 313 "data/maps/EltheRoad/scripts.pory"
	dynmultistack 0, 0, FALSE, 6, FALSE, 1, DYN_MULTICHOICE_CB_NONE
# 314 "data/maps/EltheRoad/scripts.pory"
	switch VAR_RESULT
# 316 "data/maps/EltheRoad/scripts.pory"
	case 0, EltheRoad_VinosNegotiationMain_20
# 327 "data/maps/EltheRoad/scripts.pory"
	case 1, EltheRoad_VinosNegotiationMain_21
# 345 "data/maps/EltheRoad/scripts.pory"
	case 2, EltheRoad_VinosNegotiationMain_22
	goto EltheRoad_VinosNegotiationMain_4

EltheRoad_VinosNegotiationMain_8:
# 358 "data/maps/EltheRoad/scripts.pory"
	dynmultipush EltheRoad_VinosNegotiationMain_Text_34, 0
# 359 "data/maps/EltheRoad/scripts.pory"
	dynmultipush EltheRoad_VinosNegotiationMain_Text_35, 2
# 360 "data/maps/EltheRoad/scripts.pory"
	dynmultipush EltheRoad_VinosNegotiationMain_Text_36, 1
# 361 "data/maps/EltheRoad/scripts.pory"
	message EltheRoad_VinosNegotiationMain_Text_37
# 362 "data/maps/EltheRoad/scripts.pory"
	waitmessage
# 363 "data/maps/EltheRoad/scripts.pory"
	dynmultistack 0, 0, FALSE, 6, FALSE, 0, DYN_MULTICHOICE_CB_NONE
# 364 "data/maps/EltheRoad/scripts.pory"
	switch VAR_RESULT
# 366 "data/maps/EltheRoad/scripts.pory"
	case 0, EltheRoad_VinosNegotiationMain_24
# 381 "data/maps/EltheRoad/scripts.pory"
	case 1, EltheRoad_VinosNegotiationMain_25
# 390 "data/maps/EltheRoad/scripts.pory"
	case 2, EltheRoad_VinosNegotiationMain_26
	goto EltheRoad_VinosNegotiationMain_4

EltheRoad_VinosNegotiationMain_9:
# 402 "data/maps/EltheRoad/scripts.pory"
	dynmultipush EltheRoad_VinosNegotiationMain_Text_46, 1
# 403 "data/maps/EltheRoad/scripts.pory"
	dynmultipush EltheRoad_VinosNegotiationMain_Text_47, 2
# 404 "data/maps/EltheRoad/scripts.pory"
	dynmultipush EltheRoad_VinosNegotiationMain_Text_48, 0
# 405 "data/maps/EltheRoad/scripts.pory"
	message EltheRoad_VinosNegotiationMain_Text_49
# 406 "data/maps/EltheRoad/scripts.pory"
	waitmessage
# 407 "data/maps/EltheRoad/scripts.pory"
	dynmultistack 0, 0, FALSE, 6, FALSE, 1, DYN_MULTICHOICE_CB_NONE
# 408 "data/maps/EltheRoad/scripts.pory"
	switch VAR_RESULT
# 410 "data/maps/EltheRoad/scripts.pory"
	case 0, EltheRoad_VinosNegotiationMain_28
# 421 "data/maps/EltheRoad/scripts.pory"
	case 1, EltheRoad_VinosNegotiationMain_29
# 432 "data/maps/EltheRoad/scripts.pory"
	case 2, EltheRoad_VinosNegotiationMain_30
	goto EltheRoad_VinosNegotiationMain_4

EltheRoad_VinosNegotiationMain_10:
# 445 "data/maps/EltheRoad/scripts.pory"
	goto_if_set FLAG_NOT_PERFECT_CONVERSATION, EltheRoad_VinosNegotiationMain_32
EltheRoad_VinosNegotiationMain_31:
# 449 "data/maps/EltheRoad/scripts.pory"
	goto EltheRoad_VinosNegotiationCompleteSuccess
	return

EltheRoad_VinosNegotiationMain_11:
# 453 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_VinosNegotiationMain_Text_0, PORTRAIT_VINOS_MAD, PORTRAIT_DEFAULT_LEFT
# 454 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_VinosNegotiationMain_Text_57, MSGBOX_AUTOCLOSE
# 455 "data/maps/EltheRoad/scripts.pory"
	goto EltheRoad_VinosDoBattle
	return

EltheRoad_VinosNegotiationMain_16:
# 272 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_2, PORTRAIT_AMELIA_SERIOUSLY
# 273 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_VinosNegotiationMain_Text_6
# 274 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_2, PORTRAIT_AMELIA_SHOCK
# 275 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_VinosNegotiationMain_Text_7
# 277 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_VinosNegotiationMain_Text_0, PORTRAIT_VINOS_MAD, PORTRAIT_DEFAULT_LEFT
# 278 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_VinosNegotiationMain_Text_8, MSGBOX_AUTOCLOSE
# 279 "data/maps/EltheRoad/scripts.pory"
	setflag FLAG_NOT_PERFECT_CONVERSATION
# 280 "data/maps/EltheRoad/scripts.pory"
	compare VAR_NEGOTIATION_SCORE, 0
	goto_if_gt EltheRoad_VinosNegotiationMain_35
EltheRoad_VinosNegotiationMain_34:
# 284 "data/maps/EltheRoad/scripts.pory"
	playse SE_FAILURE
	goto EltheRoad_VinosNegotiationMain_4

EltheRoad_VinosNegotiationMain_17:
# 286 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_2, PORTRAIT_AMELIA_NEUTRAL
# 287 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_VinosNegotiationMain_Text_9
# 288 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_VinosNegotiationMain_Text_0, PORTRAIT_VINOS_NEUTRAL, PORTRAIT_DEFAULT_LEFT
# 289 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_VinosNegotiationMain_Text_10
# 290 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_2, PORTRAIT_AMELIA_SHOCK
# 291 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_VinosNegotiationMain_Text_11
# 292 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_VinosNegotiationMain_Text_0, PORTRAIT_VINOS_NEUTRAL, PORTRAIT_DEFAULT_LEFT
# 293 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_VinosNegotiationMain_Text_12, MSGBOX_AUTOCLOSE
# 294 "data/maps/EltheRoad/scripts.pory"
	addvar VAR_NEGOTIATION_SCORE, 1
	goto EltheRoad_VinosNegotiationMain_4

EltheRoad_VinosNegotiationMain_18:
# 296 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_2, PORTRAIT_AMELIA_NEUTRAL
# 297 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_VinosNegotiationMain_Text_13
# 298 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_2, PORTRAIT_AMELIA_WINK
# 299 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_VinosNegotiationMain_Text_14
# 300 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_VinosNegotiationMain_Text_0, PORTRAIT_VINOS_NEUTRAL, PORTRAIT_DEFAULT_LEFT
# 301 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_VinosNegotiationMain_Text_15, MSGBOX_AUTOCLOSE
# 303 "data/maps/EltheRoad/scripts.pory"
	addvar VAR_NEGOTIATION_SCORE, 2
# 304 "data/maps/EltheRoad/scripts.pory"
	playse SE_SUCCESS
	goto EltheRoad_VinosNegotiationMain_4

EltheRoad_VinosNegotiationMain_20:
# 317 "data/maps/EltheRoad/scripts.pory"
	callnative ParalyzeLead
# 318 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_EventScript_FirstTrigger_Text_3, PORTRAIT_DEMIVEE_NEUTRAL
# 319 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_VinosNegotiationMain_Text_20, MSGBOX_AUTOCLOSE
# 320 "data/maps/EltheRoad/scripts.pory"
	delay 90
# 321 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_EventScript_FirstTrigger_Text_3, PORTRAIT_DEMIVEE_ANNOYED
# 322 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_VinosNegotiationMain_Text_21
# 323 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_VinosNegotiationMain_Text_0, PORTRAIT_VINOS_NEUTRAL, PORTRAIT_DEFAULT_LEFT
# 324 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_VinosNegotiationMain_Text_22, MSGBOX_AUTOCLOSE
# 326 "data/maps/EltheRoad/scripts.pory"
	goto EltheRoad_VinosDoBattle
	goto EltheRoad_VinosNegotiationMain_4

EltheRoad_VinosNegotiationMain_21:
# 328 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_2, PORTRAIT_AMELIA_NEUTRAL
# 329 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_VinosNegotiationMain_Text_23
# 330 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_VinosNegotiationMain_Text_0, PORTRAIT_VINOS_NEUTRAL, PORTRAIT_DEFAULT_LEFT
# 331 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_VinosNegotiationMain_Text_24
# 332 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_2, PORTRAIT_AMELIA_NEUTRAL
# 333 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_VinosNegotiationMain_Text_25
# 334 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_VinosNegotiationMain_Text_0, PORTRAIT_VINOS_NEUTRAL, PORTRAIT_DEFAULT_LEFT
# 335 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_VinosNegotiationMain_Text_26
# 336 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_2, PORTRAIT_AMELIA_NEUTRAL
# 337 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_VinosNegotiationMain_Text_27
# 338 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_VinosNegotiationMain_Text_0, PORTRAIT_VINOS_MAD, PORTRAIT_DEFAULT_LEFT
# 339 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_VinosNegotiationMain_Text_28
# 340 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_2, PORTRAIT_AMELIA_SMUG
# 341 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_VinosNegotiationMain_Text_29
# 342 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_VinosNegotiationMain_Text_0, PORTRAIT_VINOS_MAD, PORTRAIT_DEFAULT_LEFT
# 343 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_VinosNegotiationMain_Text_30, MSGBOX_AUTOCLOSE
# 344 "data/maps/EltheRoad/scripts.pory"
	addvar VAR_NEGOTIATION_SCORE, 1
	goto EltheRoad_VinosNegotiationMain_4

EltheRoad_VinosNegotiationMain_22:
# 346 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_2, PORTRAIT_AMELIA_NEUTRAL
# 347 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_VinosNegotiationMain_Text_31
# 348 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_2, PORTRAIT_AMELIA_MUNCH
# 349 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_VinosNegotiationMain_Text_32
# 350 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_VinosNegotiationMain_Text_0, PORTRAIT_VINOS_NEUTRAL, PORTRAIT_DEFAULT_LEFT
# 351 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_VinosNegotiationMain_Text_33, MSGBOX_AUTOCLOSE
# 352 "data/maps/EltheRoad/scripts.pory"
	addvar VAR_NEGOTIATION_SCORE, 2
# 353 "data/maps/EltheRoad/scripts.pory"
	playse SE_SUCCESS
	goto EltheRoad_VinosNegotiationMain_4

EltheRoad_VinosNegotiationMain_24:
# 367 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_2, PORTRAIT_AMELIA_NEUTRAL
# 368 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_VinosNegotiationMain_Text_38
# 369 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_VinosNegotiationMain_Text_0, PORTRAIT_VINOS_MAD, PORTRAIT_DEFAULT_LEFT
# 370 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_VinosNegotiationMain_Text_39
# 371 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_2, PORTRAIT_AMELIA_SHOCK
# 372 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_VinosNegotiationMain_Text_40
# 373 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_VinosNegotiationMain_Text_0, PORTRAIT_VINOS_NEUTRAL, PORTRAIT_DEFAULT_LEFT
# 374 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_VinosNegotiationMain_Text_41, MSGBOX_AUTOCLOSE
# 375 "data/maps/EltheRoad/scripts.pory"
	setflag FLAG_NOT_PERFECT_CONVERSATION
# 376 "data/maps/EltheRoad/scripts.pory"
	compare VAR_NEGOTIATION_SCORE, 0
	goto_if_gt EltheRoad_VinosNegotiationMain_38
EltheRoad_VinosNegotiationMain_37:
# 380 "data/maps/EltheRoad/scripts.pory"
	playse SE_FAILURE
	goto EltheRoad_VinosNegotiationMain_4

EltheRoad_VinosNegotiationMain_25:
# 382 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_2, PORTRAIT_AMELIA_NEUTRAL
# 383 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_VinosNegotiationMain_Text_42
# 386 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_VinosNegotiationMain_Text_0, PORTRAIT_VINOS_NEUTRAL, PORTRAIT_DEFAULT_LEFT
# 387 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_VinosNegotiationMain_Text_43, MSGBOX_AUTOCLOSE
# 389 "data/maps/EltheRoad/scripts.pory"
	addvar VAR_NEGOTIATION_SCORE, 1
	goto EltheRoad_VinosNegotiationMain_4

EltheRoad_VinosNegotiationMain_26:
# 391 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_2, PORTRAIT_AMELIA_SMUG
# 392 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_VinosNegotiationMain_Text_44
# 395 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_VinosNegotiationMain_Text_0, PORTRAIT_VINOS_NEUTRAL, PORTRAIT_DEFAULT_LEFT
# 396 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_VinosNegotiationMain_Text_45, MSGBOX_AUTOCLOSE
# 397 "data/maps/EltheRoad/scripts.pory"
	addvar VAR_NEGOTIATION_SCORE, 2
# 398 "data/maps/EltheRoad/scripts.pory"
	playse SE_SUCCESS
	goto EltheRoad_VinosNegotiationMain_4

EltheRoad_VinosNegotiationMain_28:
# 411 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_2, PORTRAIT_AMELIA_NEUTRAL
# 412 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_VinosNegotiationMain_Text_50
# 413 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_VinosNegotiationMain_Text_0, PORTRAIT_VINOS_NEUTRAL, PORTRAIT_DEFAULT_LEFT
# 414 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_VinosNegotiationMain_Text_51, MSGBOX_AUTOCLOSE
# 415 "data/maps/EltheRoad/scripts.pory"
	setflag FLAG_NOT_PERFECT_CONVERSATION
# 416 "data/maps/EltheRoad/scripts.pory"
	compare VAR_NEGOTIATION_SCORE, 0
	goto_if_gt EltheRoad_VinosNegotiationMain_41
EltheRoad_VinosNegotiationMain_40:
# 420 "data/maps/EltheRoad/scripts.pory"
	playse SE_FAILURE
	goto EltheRoad_VinosNegotiationMain_4

EltheRoad_VinosNegotiationMain_29:
# 422 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_2, PORTRAIT_AMELIA_NEUTRAL
# 423 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_VinosNegotiationMain_Text_52
# 426 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_VinosNegotiationMain_Text_0, PORTRAIT_VINOS_NEUTRAL, PORTRAIT_DEFAULT_LEFT
# 427 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_VinosNegotiationMain_Text_53
# 429 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_2, PORTRAIT_AMELIA_SERIOUSLY
# 430 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_VinosNegotiationMain_Text_54, MSGBOX_AUTOCLOSE
# 431 "data/maps/EltheRoad/scripts.pory"
	addvar VAR_NEGOTIATION_SCORE, 1
	goto EltheRoad_VinosNegotiationMain_4

EltheRoad_VinosNegotiationMain_30:
# 433 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_2, PORTRAIT_AMELIA_SMUG
# 434 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_VinosNegotiationMain_Text_55
# 435 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_VinosNegotiationMain_Text_0, PORTRAIT_VINOS_NEUTRAL, PORTRAIT_DEFAULT_LEFT
# 436 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_VinosNegotiationMain_Text_56, MSGBOX_AUTOCLOSE
# 437 "data/maps/EltheRoad/scripts.pory"
	addvar VAR_NEGOTIATION_SCORE, 2
# 438 "data/maps/EltheRoad/scripts.pory"
	playse SE_SUCCESS
	goto EltheRoad_VinosNegotiationMain_4

EltheRoad_VinosNegotiationMain_32:
# 447 "data/maps/EltheRoad/scripts.pory"
	goto EltheRoad_VinosNegotiationMidSuccess
	goto EltheRoad_VinosNegotiationMain_31

EltheRoad_VinosNegotiationMain_35:
# 282 "data/maps/EltheRoad/scripts.pory"
	subvar VAR_NEGOTIATION_SCORE, 1
	goto EltheRoad_VinosNegotiationMain_34

EltheRoad_VinosNegotiationMain_38:
# 378 "data/maps/EltheRoad/scripts.pory"
	subvar VAR_NEGOTIATION_SCORE, 1
	goto EltheRoad_VinosNegotiationMain_37

EltheRoad_VinosNegotiationMain_41:
# 418 "data/maps/EltheRoad/scripts.pory"
	subvar VAR_NEGOTIATION_SCORE, 1
	goto EltheRoad_VinosNegotiationMain_40


EltheRoad_VinosNegotiationMidSuccess::
# 466 "data/maps/EltheRoad/scripts.pory"
	call EltheRoad_CleanUpNegotiationValues
# 467 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_VinosNegotiationMain_Text_0, PORTRAIT_VINOS_NEUTRAL, PORTRAIT_DEFAULT_LEFT
# 468 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_VinosNegotiationMidSuccess_Text_0, MSGBOX_AUTOCLOSE
# 471 "data/maps/EltheRoad/scripts.pory"
	giveitem ITEM_EXP_CANDY_L, 2
# 472 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_EventScript_FirstTrigger_Text_3, PORTRAIT_DEMIVEE_YAY
# 473 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_VinosNegotiationMidSuccess_Text_1
# 474 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_VinosNegotiationMain_Text_0, PORTRAIT_VINOS_NEUTRAL, PORTRAIT_DEFAULT_LEFT
# 475 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_VinosNegotiationMidSuccess_Text_2
# 476 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_2, PORTRAIT_AMELIA_NEUTRAL
# 477 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_VinosNegotiationMidSuccess_Text_3, MSGBOX_AUTOCLOSE
# 478 "data/maps/EltheRoad/scripts.pory"
	setvar VAR_MAIN_GAME_STATE, 3
# 479 "data/maps/EltheRoad/scripts.pory"
	setflag FLAG_TEMP_9
	return


EltheRoad_VinosNegotiationCompleteSuccess::
# 484 "data/maps/EltheRoad/scripts.pory"
	call EltheRoad_CleanUpNegotiationValues
# 485 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_VinosNegotiationMain_Text_0, PORTRAIT_VINOS_NEUTRAL, PORTRAIT_DEFAULT_LEFT
# 486 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_VinosNegotiationCompleteSuccess_Text_0, MSGBOX_AUTOCLOSE
# 488 "data/maps/EltheRoad/scripts.pory"
	giveitem ITEM_EXP_CANDY_XL, 1
# 489 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_EventScript_FirstTrigger_Text_3, PORTRAIT_DEMIVEE_YAY
# 490 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_VinosNegotiationCompleteSuccess_Text_1
# 491 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_VinosNegotiationMain_Text_0, PORTRAIT_VINOS_NEUTRAL, PORTRAIT_DEFAULT_LEFT
# 492 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_VinosNegotiationCompleteSuccess_Text_2
# 494 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_2, PORTRAIT_AMELIA_NEUTRAL
# 495 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_VinosNegotiationCompleteSuccess_Text_3, MSGBOX_AUTOCLOSE
# 496 "data/maps/EltheRoad/scripts.pory"
	setvar VAR_MAIN_GAME_STATE, 3
# 497 "data/maps/EltheRoad/scripts.pory"
	setflag FLAG_TEMP_8
	return


EltheRoad_VinosDoBattle::
# 502 "data/maps/EltheRoad/scripts.pory"
	setwildbattle SPECIES_VINOS, 35, ITEM_NONE
# 503 "data/maps/EltheRoad/scripts.pory"
	dowildbattle
# 504 "data/maps/EltheRoad/scripts.pory"
	call EltheRoad_CleanUpNegotiationValues
# 505 "data/maps/EltheRoad/scripts.pory"
	turnobject 3, DIR_SOUTH
# 506 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_VinosNegotiationMain_Text_0, PORTRAIT_VINOS_NEUTRAL, PORTRAIT_DEFAULT_LEFT
# 507 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_VinosDoBattle_Text_0
# 508 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_2, PORTRAIT_AMELIA_SERIOUSLY
# 509 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_VinosDoBattle_Text_1
# 510 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_VinosNegotiationMain_Text_0, PORTRAIT_VINOS_NEUTRAL, PORTRAIT_DEFAULT_LEFT
# 511 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_VinosDoBattle_Text_2, MSGBOX_AUTOCLOSE
# 512 "data/maps/EltheRoad/scripts.pory"
	delay 60
# 513 "data/maps/EltheRoad/scripts.pory"
	applymovement 3, Common_Movement_FaceLeft
# 514 "data/maps/EltheRoad/scripts.pory"
	delay 120
# 515 "data/maps/EltheRoad/scripts.pory"
	applymovement 3, Common_Movement_FaceRight
# 516 "data/maps/EltheRoad/scripts.pory"
	delay 120
# 517 "data/maps/EltheRoad/scripts.pory"
	applymovement 3, Common_Movement_FaceDown
# 518 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_VinosNegotiationMain_Text_0, PORTRAIT_VINOS_MAD, PORTRAIT_DEFAULT_LEFT
# 519 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_VinosDoBattle_Text_3, MSGBOX_AUTOCLOSE
# 520 "data/maps/EltheRoad/scripts.pory"
	giveitem ITEM_EXP_CANDY_L
# 521 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_EventScript_FirstTrigger_Text_3, PORTRAIT_DEMIVEE_YAY
# 522 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_VinosNegotiationMidSuccess_Text_1
# 523 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_VinosNegotiationMain_Text_0, PORTRAIT_VINOS_NEUTRAL, PORTRAIT_DEFAULT_LEFT
# 524 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_VinosDoBattle_Text_4, MSGBOX_AUTOCLOSE
# 525 "data/maps/EltheRoad/scripts.pory"
	setvar VAR_MAIN_GAME_STATE, 3
# 526 "data/maps/EltheRoad/scripts.pory"
	setflag FLAG_TEMP_9
	return


EltheRoad_CleanUpNegotiationValues::
# 531 "data/maps/EltheRoad/scripts.pory"
	setvar VAR_NEGOTIATION_SCORE, 0
# 532 "data/maps/EltheRoad/scripts.pory"
	clearflag FLAG_TEMP_4
# 533 "data/maps/EltheRoad/scripts.pory"
	clearflag FLAG_TEMP_1
# 534 "data/maps/EltheRoad/scripts.pory"
	clearflag FLAG_TEMP_2
# 535 "data/maps/EltheRoad/scripts.pory"
	clearflag FLAG_TEMP_3
# 536 "data/maps/EltheRoad/scripts.pory"
	clearflag FLAG_NOT_PERFECT_CONVERSATION
	return


EltheRoad_EventScript_VinosIdle::
# 542 "data/maps/EltheRoad/scripts.pory"
	lock
# 543 "data/maps/EltheRoad/scripts.pory"
	faceplayer
# 544 "data/maps/EltheRoad/scripts.pory"
	goto_if_set FLAG_TEMP_9, EltheRoad_EventScript_VinosIdle_2
# 550 "data/maps/EltheRoad/scripts.pory"
	goto_if_unset FLAG_FLARESHARD_GET, EltheRoad_EventScript_VinosIdle_3
# 609 "data/maps/EltheRoad/scripts.pory"
	goto_if_set FLAG_TEMP_8, EltheRoad_EventScript_VinosIdle_4
# 627 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_VinosNegotiationMain_Text_0, PORTRAIT_VINOS_NEUTRAL, PORTRAIT_DEFAULT_LEFT
# 628 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_EventScript_VinosIdle_Text_8, MSGBOX_NPC
EltheRoad_EventScript_VinosIdle_1:
# 633 "data/maps/EltheRoad/scripts.pory"
	release
	return

EltheRoad_EventScript_VinosIdle_2:
# 546 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_VinosNegotiationMain_Text_0, PORTRAIT_VINOS_MAD, PORTRAIT_DEFAULT_LEFT
# 547 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_EventScript_VinosIdle_Text_0, MSGBOX_AUTOCLOSE
	goto EltheRoad_EventScript_VinosIdle_1

EltheRoad_EventScript_VinosIdle_3:
# 552 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_VinosNegotiationMain_Text_0, PORTRAIT_VINOS_NEUTRAL
# 553 "data/maps/EltheRoad/scripts.pory"
	message EltheRoad_EventScript_VinosIdle_Text_1
# 554 "data/maps/EltheRoad/scripts.pory"
	waitmessage
# 555 "data/maps/EltheRoad/scripts.pory"
	special SpawnCameraObject
# 556 "data/maps/EltheRoad/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 557 "data/maps/EltheRoad/scripts.pory"
	switch VAR_RESULT
# 559 "data/maps/EltheRoad/scripts.pory"
	case DIR_EAST, EltheRoad_EventScript_VinosIdle_11
# 564 "data/maps/EltheRoad/scripts.pory"
	case DIR_NORTH, EltheRoad_EventScript_VinosIdle_12
EltheRoad_EventScript_VinosIdle_9:
# 568 "data/maps/EltheRoad/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, EltheRoad_Movement_CameraShowItem
# 569 "data/maps/EltheRoad/scripts.pory"
	waitmovement 0
# 570 "data/maps/EltheRoad/scripts.pory"
	message EltheRoad_EventScript_VinosIdle_Text_2
# 571 "data/maps/EltheRoad/scripts.pory"
	setmetatile 26, 20, 0x247, FALSE
# 572 "data/maps/EltheRoad/scripts.pory"
	special DrawWholeMapView
# 573 "data/maps/EltheRoad/scripts.pory"
	delay 16
# 574 "data/maps/EltheRoad/scripts.pory"
	setmetatile 26, 20, 0x20C, FALSE
# 575 "data/maps/EltheRoad/scripts.pory"
	special DrawWholeMapView
# 576 "data/maps/EltheRoad/scripts.pory"
	delay 16
# 577 "data/maps/EltheRoad/scripts.pory"
	setmetatile 26, 20, 0x247, FALSE
# 578 "data/maps/EltheRoad/scripts.pory"
	special DrawWholeMapView
# 579 "data/maps/EltheRoad/scripts.pory"
	delay 16
# 580 "data/maps/EltheRoad/scripts.pory"
	setmetatile 26, 20, 0x20C, FALSE
# 581 "data/maps/EltheRoad/scripts.pory"
	special DrawWholeMapView
# 582 "data/maps/EltheRoad/scripts.pory"
	delay 16
# 583 "data/maps/EltheRoad/scripts.pory"
	setmetatile 26, 20, 0x247, FALSE
# 584 "data/maps/EltheRoad/scripts.pory"
	special DrawWholeMapView
# 585 "data/maps/EltheRoad/scripts.pory"
	delay 16
# 586 "data/maps/EltheRoad/scripts.pory"
	setmetatile 26, 20, 0x20C, FALSE
# 587 "data/maps/EltheRoad/scripts.pory"
	special DrawWholeMapView
# 588 "data/maps/EltheRoad/scripts.pory"
	delay 16
# 589 "data/maps/EltheRoad/scripts.pory"
	waitbuttonpress
# 590 "data/maps/EltheRoad/scripts.pory"
	closemessage
# 591 "data/maps/EltheRoad/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, EltheRoad_Movement_CameraReturn
# 592 "data/maps/EltheRoad/scripts.pory"
	waitmovement 0
# 593 "data/maps/EltheRoad/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 594 "data/maps/EltheRoad/scripts.pory"
	switch VAR_RESULT
# 596 "data/maps/EltheRoad/scripts.pory"
	case DIR_EAST, EltheRoad_EventScript_VinosIdle_15
# 601 "data/maps/EltheRoad/scripts.pory"
	case DIR_NORTH, EltheRoad_EventScript_VinosIdle_16
EltheRoad_EventScript_VinosIdle_13:
# 607 "data/maps/EltheRoad/scripts.pory"
	special RemoveCameraObject
	goto EltheRoad_EventScript_VinosIdle_1

EltheRoad_EventScript_VinosIdle_4:
# 611 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_VinosNegotiationMain_Text_0, PORTRAIT_VINOS_NEUTRAL, PORTRAIT_DEFAULT_LEFT
# 612 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_EventScript_VinosIdle_Text_3
# 613 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_2, PORTRAIT_AMELIA_SERIOUSLY
# 614 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_EventScript_VinosIdle_Text_4
# 618 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_VinosNegotiationMain_Text_0, PORTRAIT_VINOS_NEUTRAL, PORTRAIT_DEFAULT_LEFT
# 619 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_EventScript_VinosIdle_Text_5
# 620 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_2, PORTRAIT_AMELIA_NEUTRAL
# 621 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_EventScript_VinosIdle_Text_6
# 622 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_VinosNegotiationMain_Text_0, PORTRAIT_VINOS_NEUTRAL, PORTRAIT_DEFAULT_LEFT
# 623 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_EventScript_VinosIdle_Text_7, MSGBOX_AUTOCLOSE
	goto EltheRoad_EventScript_VinosIdle_1

EltheRoad_EventScript_VinosIdle_11:
# 560 "data/maps/EltheRoad/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkRight
# 561 "data/maps/EltheRoad/scripts.pory"
	waitmovement 0
# 562 "data/maps/EltheRoad/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
# 563 "data/maps/EltheRoad/scripts.pory"
	waitmovement 0
	goto EltheRoad_EventScript_VinosIdle_9

EltheRoad_EventScript_VinosIdle_12:
# 565 "data/maps/EltheRoad/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp2
# 566 "data/maps/EltheRoad/scripts.pory"
	waitmovement 0
	goto EltheRoad_EventScript_VinosIdle_9

EltheRoad_EventScript_VinosIdle_15:
# 597 "data/maps/EltheRoad/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkDown
# 598 "data/maps/EltheRoad/scripts.pory"
	waitmovement 0
# 599 "data/maps/EltheRoad/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkLeft
# 600 "data/maps/EltheRoad/scripts.pory"
	waitmovement 0
	goto EltheRoad_EventScript_VinosIdle_13

EltheRoad_EventScript_VinosIdle_16:
# 602 "data/maps/EltheRoad/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkDown
# 603 "data/maps/EltheRoad/scripts.pory"
	waitmovement 0
# 604 "data/maps/EltheRoad/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkDown
# 605 "data/maps/EltheRoad/scripts.pory"
	waitmovement 0
	goto EltheRoad_EventScript_VinosIdle_13


EltheRoad_Trigger_VinosAltTrigger::
# 638 "data/maps/EltheRoad/scripts.pory"
	lock
# 639 "data/maps/EltheRoad/scripts.pory"
	playse SE_PIN
# 640 "data/maps/EltheRoad/scripts.pory"
	applymovement 3, Common_Movement_FaceLeft
# 641 "data/maps/EltheRoad/scripts.pory"
	waitmovement 0
# 642 "data/maps/EltheRoad/scripts.pory"
	applymovement 3, Common_Movement_ExclamationMark
# 643 "data/maps/EltheRoad/scripts.pory"
	waitmovement 0
# 644 "data/maps/EltheRoad/scripts.pory"
	delay 48
# 645 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_Trigger_VinosTrigger_Text_0, PORTRAIT_VINOS_MAD, PORTRAIT_DEFAULT_LEFT
# 646 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_Trigger_VinosAltTrigger_Text_0
# 647 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_2, PORTRAIT_AMELIA_NEUTRAL
# 648 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_Trigger_VinosAltTrigger_Text_1
# 649 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_Trigger_VinosTrigger_Text_0, PORTRAIT_VINOS_NEUTRAL, PORTRAIT_DEFAULT_LEFT
# 650 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_Trigger_VinosAltTrigger_Text_2
# 651 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_2, PORTRAIT_AMELIA_NEUTRAL
# 652 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_Trigger_VinosAltTrigger_Text_3
# 653 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_VinosNegotiationMain_Text_0, PORTRAIT_VINOS_NEUTRAL, PORTRAIT_DEFAULT_LEFT
# 654 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_Trigger_VinosAltTrigger_Text_4
# 656 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_2, PORTRAIT_AMELIA_SMUG
# 657 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_Trigger_VinosAltTrigger_Text_5
# 658 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_VinosNegotiationMain_Text_0, PORTRAIT_VINOS_NEUTRAL, PORTRAIT_DEFAULT_LEFT
# 659 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_Trigger_VinosAltTrigger_Text_6, MSGBOX_AUTOCLOSE
# 660 "data/maps/EltheRoad/scripts.pory"
	giveitem ITEM_EXP_CANDY_XL, 1
# 661 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_EventScript_FirstTrigger_Text_3, PORTRAIT_DEMIVEE_YAY
# 662 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_VinosNegotiationCompleteSuccess_Text_1
# 663 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_VinosNegotiationMain_Text_0, PORTRAIT_VINOS_NEUTRAL, PORTRAIT_DEFAULT_LEFT
# 664 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_VinosNegotiationCompleteSuccess_Text_2
# 666 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_2, PORTRAIT_AMELIA_NEUTRAL
# 667 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_VinosNegotiationCompleteSuccess_Text_3, MSGBOX_AUTOCLOSE
# 668 "data/maps/EltheRoad/scripts.pory"
	setvar VAR_MAIN_GAME_STATE, 3
# 669 "data/maps/EltheRoad/scripts.pory"
	setflag FLAG_TEMP_8
	return


EltheRoad_Trigger_Marcel_Right::
# 674 "data/maps/EltheRoad/scripts.pory"
	lock
# 675 "data/maps/EltheRoad/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkLeft
# 676 "data/maps/EltheRoad/scripts.pory"
	waitmovement 0
# 677 "data/maps/EltheRoad/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 678 "data/maps/EltheRoad/scripts.pory"
	waitmovement 0
# 679 "data/maps/EltheRoad/scripts.pory"
	playse SE_PIN
# 680 "data/maps/EltheRoad/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 681 "data/maps/EltheRoad/scripts.pory"
	waitmovement 0
# 682 "data/maps/EltheRoad/scripts.pory"
	delay 48
# 683 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_2, PORTRAIT_AMELIA_SHOCK
# 684 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_Trigger_Marcel_Right_Text_0, MSGBOX_AUTOCLOSE
# 685 "data/maps/EltheRoad/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, EltheRoad_Movement_AmeliaGoToMarcel
# 686 "data/maps/EltheRoad/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, EltheRoad_Movement_DemiveeGoToMarcel_Right
# 687 "data/maps/EltheRoad/scripts.pory"
	applymovement 5, Common_Movement_QuestionMark
# 688 "data/maps/EltheRoad/scripts.pory"
	waitmovement 5
# 689 "data/maps/EltheRoad/scripts.pory"
	applymovement 5, Common_Movement_WalkInPlaceFasterRight
# 690 "data/maps/EltheRoad/scripts.pory"
	waitmovement 5
# 691 "data/maps/EltheRoad/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 692 "data/maps/EltheRoad/scripts.pory"
	goto EltheRoad_Trigger_MarcelMain
	return


EltheRoad_Trigger_Marcel_Left::
# 697 "data/maps/EltheRoad/scripts.pory"
	lock
# 698 "data/maps/EltheRoad/scripts.pory"
	playse SE_PIN
# 699 "data/maps/EltheRoad/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 700 "data/maps/EltheRoad/scripts.pory"
	waitmovement 0
# 701 "data/maps/EltheRoad/scripts.pory"
	delay 48
# 702 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_2, PORTRAIT_AMELIA_SHOCK
# 703 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_Trigger_Marcel_Right_Text_0, MSGBOX_AUTOCLOSE
# 704 "data/maps/EltheRoad/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, EltheRoad_Movement_AmeliaGoToMarcel
# 705 "data/maps/EltheRoad/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, EltheRoad_Movement_DemiveeGoToMarcel_Left
# 706 "data/maps/EltheRoad/scripts.pory"
	applymovement 5, Common_Movement_QuestionMark
# 707 "data/maps/EltheRoad/scripts.pory"
	waitmovement 5
# 708 "data/maps/EltheRoad/scripts.pory"
	applymovement 5, Common_Movement_WalkInPlaceFasterRight
# 709 "data/maps/EltheRoad/scripts.pory"
	waitmovement 5
# 710 "data/maps/EltheRoad/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 711 "data/maps/EltheRoad/scripts.pory"
	goto EltheRoad_Trigger_MarcelMain
	return


EltheRoad_Trigger_MarcelMain::
# 716 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_2, PORTRAIT_AMELIA_NEUTRAL
# 717 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_Trigger_MarcelMain_Text_0
# 718 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_Trigger_MarcelMain_Text_1, PORTRAIT_KINGLER_NEUTRAL
# 719 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_Trigger_MarcelMain_Text_2
# 720 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_2, PORTRAIT_AMELIA_NEUTRAL
# 721 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_Trigger_MarcelMain_Text_3
# 722 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_EventScript_FirstTrigger_Text_3, PORTRAIT_DEMIVEE_HUH
# 723 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_Trigger_MarcelMain_Text_4
# 724 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_2, PORTRAIT_AMELIA_STRAINED
# 725 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_Trigger_MarcelMain_Text_5
# 726 "data/maps/EltheRoad/scripts.pory"
	applymovement 5, Common_Movement_WalkRight
# 727 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_Trigger_MarcelMain_Text_1, PORTRAIT_KINGLER_NEUTRAL
# 728 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_Trigger_MarcelMain_Text_6
# 729 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_EventScript_FirstTrigger_Text_3, PORTRAIT_DEMIVEE_NEUTRAL
# 730 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_Trigger_MarcelMain_Text_7
# 731 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_2, PORTRAIT_AMELIA_SHOCK
# 732 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_Trigger_MarcelMain_Text_8
# 733 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_Trigger_MarcelMain_Text_1, PORTRAIT_KINGLER_LAUGH
# 734 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_Trigger_MarcelMain_Text_9, MSGBOX_AUTOCLOSE
# 735 "data/maps/EltheRoad/scripts.pory"
	playse SE_PIN
# 736 "data/maps/EltheRoad/scripts.pory"
	applymovement 5, Common_Movement_ExclamationMark
# 737 "data/maps/EltheRoad/scripts.pory"
	waitmovement 0
# 738 "data/maps/EltheRoad/scripts.pory"
	delay 48
# 739 "data/maps/EltheRoad/scripts.pory"
	applymovement 5, EltheRoad_Movement_MarcelRunToAmelia
# 740 "data/maps/EltheRoad/scripts.pory"
	waitmovement 0
# 741 "data/maps/EltheRoad/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_EAST
# 742 "data/maps/EltheRoad/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, EltheRoad_Movement_DemiveeRunFromMarcel
# 743 "data/maps/EltheRoad/scripts.pory"
	playse SE_LEDGE
# 744 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_Trigger_MarcelMain_Text_1, PORTRAIT_KINGLER_NEUTRAL
# 745 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_Trigger_MarcelMain_Text_10
# 746 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_2, PORTRAIT_AMELIA_SHOCK
# 747 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_Trigger_MarcelMain_Text_11
# 748 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_Trigger_MarcelMain_Text_1, PORTRAIT_KINGLER_NEUTRAL
# 749 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_Trigger_MarcelMain_Text_12, MSGBOX_AUTOCLOSE
# 751 "data/maps/EltheRoad/scripts.pory"
	removeitem ITEM_GREAT_BALL, 1
# 752 "data/maps/EltheRoad/scripts.pory"
	delay 32
# 753 "data/maps/EltheRoad/scripts.pory"
	applymovement 5, EnterPokeballMovement
# 754 "data/maps/EltheRoad/scripts.pory"
	waitmovement 0
# 755 "data/maps/EltheRoad/scripts.pory"
	removeobject 5
# 756 "data/maps/EltheRoad/scripts.pory"
	delay 16
# 757 "data/maps/EltheRoad/scripts.pory"
	playfanfare MUS_EVOLVED
# 758 "data/maps/EltheRoad/scripts.pory"
	message EltheRoad_Trigger_MarcelMain_Text_13
# 759 "data/maps/EltheRoad/scripts.pory"
	waitmessage
# 760 "data/maps/EltheRoad/scripts.pory"
	waitfanfare
# 761 "data/maps/EltheRoad/scripts.pory"
	waitbuttonpress
# 762 "data/maps/EltheRoad/scripts.pory"
	closemessage
# 763 "data/maps/EltheRoad/scripts.pory"
	givemon SPECIES_KINGLER, 50, ITEM_SPLASH_PLATE, ITEM_GREAT_BALL, NATURE_QUIET, 1, MON_FEMALE, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_LIQUIDATION, MOVE_BODY_SLAM, MOVE_GUILLOTINE, MOVE_HAMMER_ARM, FALSE, FALSE, TYPE_DRAGON
# 764 "data/maps/EltheRoad/scripts.pory"
	setpartymemberinfo 1
# 765 "data/maps/EltheRoad/scripts.pory"
	setvar VAR_MAIN_GAME_STATE, 4
	return


EltheRoad_EventScript_TreeCleanupMan::
# 770 "data/maps/EltheRoad/scripts.pory"
	goto_if_set FLAG_TREES_CLEARED, EltheRoad_EventScript_TreeCleanupMan_1
# 777 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_EventScript_TreeCleanupMan_Text_0
# 778 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_EventScript_TreeCleanupMan_Text_2, MSGBOX_NPC
	return

EltheRoad_EventScript_TreeCleanupMan_1:
# 772 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_EventScript_TreeCleanupMan_Text_0
# 773 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_EventScript_TreeCleanupMan_Text_1, MSGBOX_NPC
	return


EltheRoad_EventScript_BerryFieldsSign::
# 784 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_EventScript_BerryFieldsSign_Text_0, MSGBOX_SIGN
	return


# 787 "data/maps/EltheRoad/scripts.pory"
EltheRoad_Movement_DemiveeRunFromMarcel:
# 789 "data/maps/EltheRoad/scripts.pory"
	lock_facing_direction
# 790 "data/maps/EltheRoad/scripts.pory"
	jump_down
# 791 "data/maps/EltheRoad/scripts.pory"
	unlock_facing_direction
# 792 "data/maps/EltheRoad/scripts.pory"
	delay_16
# 792 "data/maps/EltheRoad/scripts.pory"
	delay_16
# 793 "data/maps/EltheRoad/scripts.pory"
	walk_fast_left
# 793 "data/maps/EltheRoad/scripts.pory"
	walk_fast_left
# 794 "data/maps/EltheRoad/scripts.pory"
	walk_fast_up
# 795 "data/maps/EltheRoad/scripts.pory"
	face_right
	step_end

# 798 "data/maps/EltheRoad/scripts.pory"
EltheRoad_Movement_MarcelRunToAmelia:
# 800 "data/maps/EltheRoad/scripts.pory"
	walk_fast_down
# 800 "data/maps/EltheRoad/scripts.pory"
	walk_fast_down
	step_end

# 803 "data/maps/EltheRoad/scripts.pory"
EltheRoad_Movement_AmeliaGoToMarcel:
# 805 "data/maps/EltheRoad/scripts.pory"
	walk_fast_up
# 805 "data/maps/EltheRoad/scripts.pory"
	walk_fast_up
	step_end

# 808 "data/maps/EltheRoad/scripts.pory"
EltheRoad_Movement_DemiveeGoToMarcel_Left:
# 810 "data/maps/EltheRoad/scripts.pory"
	walk_slow_up
# 810 "data/maps/EltheRoad/scripts.pory"
	walk_slow_up
# 811 "data/maps/EltheRoad/scripts.pory"
	walk_slow_right
# 812 "data/maps/EltheRoad/scripts.pory"
	walk_slow_up
	step_end

# 815 "data/maps/EltheRoad/scripts.pory"
EltheRoad_Movement_DemiveeGoToMarcel_Right:
# 817 "data/maps/EltheRoad/scripts.pory"
	walk_slow_up
# 817 "data/maps/EltheRoad/scripts.pory"
	walk_slow_up
	step_end

# 820 "data/maps/EltheRoad/scripts.pory"
EltheRoad_Movement_CameraShowItem:
# 822 "data/maps/EltheRoad/scripts.pory"
	walk_up
# 822 "data/maps/EltheRoad/scripts.pory"
	walk_up
# 822 "data/maps/EltheRoad/scripts.pory"
	walk_up
# 823 "data/maps/EltheRoad/scripts.pory"
	walk_right
	step_end

# 826 "data/maps/EltheRoad/scripts.pory"
EltheRoad_Movement_CameraReturn:
# 828 "data/maps/EltheRoad/scripts.pory"
	walk_left
# 829 "data/maps/EltheRoad/scripts.pory"
	walk_down
# 829 "data/maps/EltheRoad/scripts.pory"
	walk_down
# 829 "data/maps/EltheRoad/scripts.pory"
	walk_down
	step_end

# 832 "data/maps/EltheRoad/scripts.pory"
EltheRoad_Movement_AmeliaJumpUp:
# 834 "data/maps/EltheRoad/scripts.pory"
	set_visible
# 835 "data/maps/EltheRoad/scripts.pory"
	jump_in_place_left
	step_end

# 838 "data/maps/EltheRoad/scripts.pory"
EltheRoad_Movement_AmeliaLookAround:
# 840 "data/maps/EltheRoad/scripts.pory"
	face_up
# 841 "data/maps/EltheRoad/scripts.pory"
	delay_16
# 842 "data/maps/EltheRoad/scripts.pory"
	face_down
# 843 "data/maps/EltheRoad/scripts.pory"
	delay_16
# 844 "data/maps/EltheRoad/scripts.pory"
	face_up
# 845 "data/maps/EltheRoad/scripts.pory"
	delay_16
# 846 "data/maps/EltheRoad/scripts.pory"
	face_down
# 847 "data/maps/EltheRoad/scripts.pory"
	delay_16
# 848 "data/maps/EltheRoad/scripts.pory"
	face_right
# 849 "data/maps/EltheRoad/scripts.pory"
	delay_16
# 849 "data/maps/EltheRoad/scripts.pory"
	delay_16
# 849 "data/maps/EltheRoad/scripts.pory"
	delay_16
# 850 "data/maps/EltheRoad/scripts.pory"
	face_left
# 851 "data/maps/EltheRoad/scripts.pory"
	delay_16
# 851 "data/maps/EltheRoad/scripts.pory"
	delay_16
# 851 "data/maps/EltheRoad/scripts.pory"
	delay_16
	step_end

# 854 "data/maps/EltheRoad/scripts.pory"
EltheRoad_Movement_AmeliaStartLeaving:
# 856 "data/maps/EltheRoad/scripts.pory"
	walk_up
# 856 "data/maps/EltheRoad/scripts.pory"
	walk_up
# 857 "data/maps/EltheRoad/scripts.pory"
	walk_right
# 857 "data/maps/EltheRoad/scripts.pory"
	walk_right
# 857 "data/maps/EltheRoad/scripts.pory"
	walk_right
# 858 "data/maps/EltheRoad/scripts.pory"
	delay_16
# 858 "data/maps/EltheRoad/scripts.pory"
	delay_16
# 859 "data/maps/EltheRoad/scripts.pory"
	face_left
	step_end

# 862 "data/maps/EltheRoad/scripts.pory"
EltheRoad_Movement_DemiveeFollow:
# 864 "data/maps/EltheRoad/scripts.pory"
	jump_up
# 865 "data/maps/EltheRoad/scripts.pory"
	walk_fast_up
# 866 "data/maps/EltheRoad/scripts.pory"
	walk_fast_right
# 866 "data/maps/EltheRoad/scripts.pory"
	walk_fast_right
	step_end

# 869 "data/maps/EltheRoad/scripts.pory"
EltheRoad_Movement_DemiveeJoin:
# 871 "data/maps/EltheRoad/scripts.pory"
	walk_slow_right
# 872 "data/maps/EltheRoad/scripts.pory"
	enter_pokeball
	step_end

# 875 "data/maps/EltheRoad/scripts.pory"
EltheRoad_Movement_VinosGetOnLog:
# 877 "data/maps/EltheRoad/scripts.pory"
	walk_fast_right
# 878 "data/maps/EltheRoad/scripts.pory"
	jump_right
# 879 "data/maps/EltheRoad/scripts.pory"
	face_down
	step_end

EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_0:
# 16 "data/maps/EltheRoad/scripts.pory"
	.string "???$"

EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_1:
# 17 "data/maps/EltheRoad/scripts.pory"
	.string "Wait…is it alive…?$"

EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_2:
# 20 "data/maps/EltheRoad/scripts.pory"
	.string "Amelia$"

EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_3:
# 21 "data/maps/EltheRoad/scripts.pory"
	.string "…yes, I am. Personal space?$"

EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_4:
# 22 "data/maps/EltheRoad/scripts.pory"
	.string "Eevee?$"

EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_5:
# 23 "data/maps/EltheRoad/scripts.pory"
	.string "Oh, sorry. I was thinking about\n"
	.string "eating you, but I guess I won't now.$"

EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_6:
# 39 "data/maps/EltheRoad/scripts.pory"
	.string "Dude! Seriously?$"

EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_7:
# 41 "data/maps/EltheRoad/scripts.pory"
	.string "You got tossed around unconscious in\n"
	.string "a flood! How'd you survive, anyway?$"

EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_8:
# 43 "data/maps/EltheRoad/scripts.pory"
	.string "I'm made of tough stuff. It takes\n"
	.string "more than a little water to…$"

EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_9:
# 54 "data/maps/EltheRoad/scripts.pory"
	.string "The flood! What happened to my team?$"

EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_10:
# 58 "data/maps/EltheRoad/scripts.pory"
	.string "My team…ugh, my head. I can't think.$"

EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_11:
# 60 "data/maps/EltheRoad/scripts.pory"
	.string "I have their Poké Balls here.\n"
	.string "Guess I should go find them.$"

EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_12:
# 68 "data/maps/EltheRoad/scripts.pory"
	.string "Wait! You shouldn't go alone.$"

EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_13:
# 73 "data/maps/EltheRoad/scripts.pory"
	.string "The local Pokémon are always testy\n"
	.string "after a flood.\p"
	.string "It's dangerous for a human to go\n"
	.string "alone. Take me!$"

EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_14:
# 75 "data/maps/EltheRoad/scripts.pory"
	.string "I can handle myself pretty well.\n"
	.string "And I'm a Pokémon Ranger, too.$"

EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_15:
# 77 "data/maps/EltheRoad/scripts.pory"
	.string "But if you want to come along,\n"
	.string "I won't say no. Welcome aboard!$"

EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_16:
# 83 "data/maps/EltheRoad/scripts.pory"
	.string "Eevee joined your party!$"

EltheRoad_EventScript_FirstTrigger_Text_0:
# 101 "data/maps/EltheRoad/scripts.pory"
	.string "I meant to ask earlier, but, uh,\n"
	.string "what are you, exactly?\p"
	.string "You look like an Eevee, but those\n"
	.string "markings…are they natural?$"

EltheRoad_EventScript_FirstTrigger_Text_1:
# 103 "data/maps/EltheRoad/scripts.pory"
	.string "Uh, I dunno! I used to be normal,\n"
	.string "but I like to eat these crystals…\l"
	.string "I think I got these markings after\l"
	.string "I started doing that.\p"
	.string "Now when I touch an evolution stone,\n"
	.string "I don't evolve, but…\p"
	.string "It changes my type, I think.\n"
	.string "And my moves.$"

EltheRoad_EventScript_FirstTrigger_Text_2:
# 107 "data/maps/EltheRoad/scripts.pory"
	.string "So you're some kind of…Demi-Vee?$"

EltheRoad_EventScript_FirstTrigger_Text_3:
# 109 "data/maps/EltheRoad/scripts.pory"
	.string "Demi-Vee$"

EltheRoad_EventScript_FirstTrigger_Text_4:
# 110 "data/maps/EltheRoad/scripts.pory"
	.string "Huh?$"

EltheRoad_EventScript_FirstTrigger_Text_5:
# 112 "data/maps/EltheRoad/scripts.pory"
	.string "Um, anyway! If you find any cool\n"
	.string "crystals, give them to me!\l"
	.string "They'll make me stronger in battle.\p"
	.string "And if you need any advice for\n"
	.string "getting around, just ask me!\l"
	.string "I know this place pretty well!$"

EltheRoad_EventScript_FirstTrigger_Text_6:
# 115 "data/maps/EltheRoad/scripts.pory"
	.string "(Press R or talk to Demi-Vee while\n"
	.string "he's following you to get advice!)\p"
	.string "(He will talk about the person\n"
	.string "you're facing, or give general hints\l"
	.string "for how to progress.)$"

EltheRoad_EventScript_DemiveeTutorialSign_Text_0:
# 122 "data/maps/EltheRoad/scripts.pory"
	.string "{EMPHASIS_RED}!! NON-DIEGETIC SIGN ALERT !!{EMPHASIS_OFF}\p"
	.string "This sign does not really exist!\n"
	.string "It is just here to help you, Player.\p"
	.string "Your new companion is a very\n"
	.string "unique Pokémon. He doesn't grow\l"
	.string "in the way you're used to.\p"
	.string "If you want to make the best of his\n"
	.string "unique traits, read on.$"

EltheRoad_EventScript_DemiveeTutorialMultichoice_Text_0:
# 130 "data/maps/EltheRoad/scripts.pory"
	.string "What would you like to read about?$"

EltheRoad_EventScript_DemiveeTutorialMultichoice_Text_1:
# 132 "data/maps/EltheRoad/scripts.pory"
	.string "Forms$"

EltheRoad_EventScript_DemiveeTutorialMultichoice_Text_2:
# 132 "data/maps/EltheRoad/scripts.pory"
	.string "Shards$"

EltheRoad_EventScript_DemiveeTutorialMultichoice_Text_3:
# 132 "data/maps/EltheRoad/scripts.pory"
	.string "Leveling Up$"

EltheRoad_EventScript_DemiveeTutorialMultichoice_Text_4:
# 132 "data/maps/EltheRoad/scripts.pory"
	.string "Stat Points$"

EltheRoad_EventScript_DemiveeTutorialMultichoice_Text_5:
# 132 "data/maps/EltheRoad/scripts.pory"
	.string "Learning Skills$"

EltheRoad_EventScript_DemiveeTutorialMultichoice_Text_6:
# 132 "data/maps/EltheRoad/scripts.pory"
	.string "Stop Reading$"

EltheRoad_EventScript_DemiveeTutorialMultichoice_Text_7:
# 136 "data/maps/EltheRoad/scripts.pory"
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
# 142 "data/maps/EltheRoad/scripts.pory"
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
# 148 "data/maps/EltheRoad/scripts.pory"
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
# 153 "data/maps/EltheRoad/scripts.pory"
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
# 158 "data/maps/EltheRoad/scripts.pory"
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
# 174 "data/maps/EltheRoad/scripts.pory"
	.string "{CLEAR_TO 60}{LEFT_ARROW} To Rehocan Town\n"
	.string "{CLEAR_TO 76}To Elthe City {RIGHT_ARROW}$"

EltheRoad_Trigger_VinosTrigger_Text_0:
# 187 "data/maps/EltheRoad/scripts.pory"
	.string "Vine Mon$"

EltheRoad_Trigger_VinosTrigger_Text_1:
# 188 "data/maps/EltheRoad/scripts.pory"
	.string "Ugh…stupid flood.\n"
	.string "Washed away a perfect lurking spot.$"

EltheRoad_Trigger_VinosTrigger_Text_2:
# 197 "data/maps/EltheRoad/scripts.pory"
	.string "The Pokémon hasn't noticed you…\n"
	.string "What will you do?$"

EltheRoad_Trigger_VinosTrigger_Text_3:
# 199 "data/maps/EltheRoad/scripts.pory"
	.string "Negotiate$"

EltheRoad_Trigger_VinosTrigger_Text_4:
# 199 "data/maps/EltheRoad/scripts.pory"
	.string "Attack$"

EltheRoad_Trigger_VinosTrigger_Text_5:
# 204 "data/maps/EltheRoad/scripts.pory"
	.string "Excuse me…$"

EltheRoad_Trigger_VinosTrigger_Text_6:
# 212 "data/maps/EltheRoad/scripts.pory"
	.string "What? A human speaks to me…$"

EltheRoad_Trigger_VinosTrigger_Text_7:
# 214 "data/maps/EltheRoad/scripts.pory"
	.string "Do you mind if I pass through here?$"

EltheRoad_Trigger_VinosTrigger_Text_8:
# 220 "data/maps/EltheRoad/scripts.pory"
	.string "You're asking my permission? As if you\n"
	.string "can understand my speech?$"

EltheRoad_Trigger_VinosTrigger_Text_9:
# 222 "data/maps/EltheRoad/scripts.pory"
	.string "Yeah, I can. It's kinda my thing.\n"
	.string "Let's talk this out.$"

EltheRoad_Trigger_VinosTrigger_Text_10:
# 224 "data/maps/EltheRoad/scripts.pory"
	.string "Fascinating…this may be an interesting\n"
	.string "exercise. I am Vinos. Let us begin.$"

EltheRoad_Trigger_VinosTrigger_Text_11:
# 226 "data/maps/EltheRoad/scripts.pory"
	.string "Try to make Vinos happy so it'll\n"
	.string "you pass through! It will ask you\l"
	.string "a series of questions.\p"
	.string "If you make Vinos angry, it may\n"
	.string "decide to attack you instead.\p"
	.string "If it likes your answers, you may\n"
	.string "get a gift as well.$"

EltheRoad_Trigger_VinosTrigger_Text_12:
# 233 "data/maps/EltheRoad/scripts.pory"
	.string "Demi-Vee, attack!$"

EltheRoad_Trigger_VinosTrigger_Text_13:
# 240 "data/maps/EltheRoad/scripts.pory"
	.string "What!? You -$"

EltheRoad_VinosNegotiationMain_Text_0:
# 248 "data/maps/EltheRoad/scripts.pory"
	.string "Vinos$"

EltheRoad_VinosNegotiationMain_Text_1:
# 249 "data/maps/EltheRoad/scripts.pory"
	.string "Alright, then…$"

EltheRoad_VinosNegotiationMain_Text_2:
# 263 "data/maps/EltheRoad/scripts.pory"
	.string "Dark$"

EltheRoad_VinosNegotiationMain_Text_3:
# 264 "data/maps/EltheRoad/scripts.pory"
	.string "Grass$"

EltheRoad_VinosNegotiationMain_Text_4:
# 265 "data/maps/EltheRoad/scripts.pory"
	.string "Fire$"

EltheRoad_VinosNegotiationMain_Text_5:
# 266 "data/maps/EltheRoad/scripts.pory"
	.string "Which Type of Pokémon is best,\n"
	.string "in your opinion?$"

EltheRoad_VinosNegotiationMain_Text_6:
# 273 "data/maps/EltheRoad/scripts.pory"
	.string "It's, uh…Grass. Yeah. I just love\n"
	.string "Grass type Pokémon…\p"
	.string "… … … … …$"

EltheRoad_VinosNegotiationMain_Text_7:
# 275 "data/maps/EltheRoad/scripts.pory"
	.string "You know what, no, I can't even f{CENSOR}uck{UNCENSOR}ing\n"
	.string "joke about it. All the major\l"
	.string "terrible events in my life were\l"
	.string "caused by Grass types.\l"
	.string "F{CENSOR}uck{UNCENSOR} Grass types. I hate 'em.$"

EltheRoad_VinosNegotiationMain_Text_8:
# 278 "data/maps/EltheRoad/scripts.pory"
	.string "You'd disrespect me to my face…\n"
	.string "You have some nerve, human.$"

EltheRoad_VinosNegotiationMain_Text_9:
# 287 "data/maps/EltheRoad/scripts.pory"
	.string "Oh, Dark is the best, obviously!$"

EltheRoad_VinosNegotiationMain_Text_10:
# 289 "data/maps/EltheRoad/scripts.pory"
	.string "Hmmhmm, yes, we are quite…\n"
	.string "Wait! You're just buttering me up!$"

EltheRoad_VinosNegotiationMain_Text_11:
# 291 "data/maps/EltheRoad/scripts.pory"
	.string "No way! I'm being honest! Some of my\n"
	.string "best friends are Dark types!$"

EltheRoad_VinosNegotiationMain_Text_12:
# 293 "data/maps/EltheRoad/scripts.pory"
	.string "…Well, alright. It's a good answer.$"

EltheRoad_VinosNegotiationMain_Text_13:
# 297 "data/maps/EltheRoad/scripts.pory"
	.string "Hmm…I think it must be Fire.\n"
	.string "It's just such a cool element.$"

EltheRoad_VinosNegotiationMain_Text_14:
# 299 "data/maps/EltheRoad/scripts.pory"
	.string "Plus, I was a Fire type for a while,\n"
	.string "myself. Self love, yo!$"

EltheRoad_VinosNegotiationMain_Text_15:
# 301 "data/maps/EltheRoad/scripts.pory"
	.string "You have some nerve, telling a Grass\n"
	.string "type that Fire is best…\p"
	.string "But I appreciate your honesty.\n"
	.string "The time for tricks has passed.$"

EltheRoad_VinosNegotiationMain_Text_16:
# 308 "data/maps/EltheRoad/scripts.pory"
	.string "Your berries?$"

EltheRoad_VinosNegotiationMain_Text_17:
# 309 "data/maps/EltheRoad/scripts.pory"
	.string "Eat trail mix$"

EltheRoad_VinosNegotiationMain_Text_18:
# 310 "data/maps/EltheRoad/scripts.pory"
	.string "Just eat it$"

EltheRoad_VinosNegotiationMain_Text_19:
# 311 "data/maps/EltheRoad/scripts.pory"
	.string "Would you like to eat\n"
	.string "one of my berries?$"

EltheRoad_VinosNegotiationMain_Text_20:
# 319 "data/maps/EltheRoad/scripts.pory"
	.string "Ooh, I'll take one!$"

EltheRoad_VinosNegotiationMain_Text_21:
# 322 "data/maps/EltheRoad/scripts.pory"
	.string "Urp…$"

EltheRoad_VinosNegotiationMain_Text_22:
# 324 "data/maps/EltheRoad/scripts.pory"
	.string "Ha! What an idiot! You didn't even\n"
	.string "fall for my camouflage, but you\l"
	.string "still ate my paralyzing berries!\l"
	.string "You're mine!$"

EltheRoad_VinosNegotiationMain_Text_23:
# 329 "data/maps/EltheRoad/scripts.pory"
	.string "Berries? They grow on your body?\n"
	.string "And you…WANT us to eat them?$"

EltheRoad_VinosNegotiationMain_Text_24:
# 331 "data/maps/EltheRoad/scripts.pory"
	.string "Well…yes. They're delicious.\n"
	.string "Or so I'm told.$"

EltheRoad_VinosNegotiationMain_Text_25:
# 333 "data/maps/EltheRoad/scripts.pory"
	.string "What about the ones that your eyes\n"
	.string "are on? Are they edible?$"

EltheRoad_VinosNegotiationMain_Text_26:
# 335 "data/maps/EltheRoad/scripts.pory"
	.string "No, they're…my eyes. Not berries.$"

EltheRoad_VinosNegotiationMain_Text_27:
# 337 "data/maps/EltheRoad/scripts.pory"
	.string "Has anyone ever tried to pick your\n"
	.string "eyes instead of a berry?$"

EltheRoad_VinosNegotiationMain_Text_28:
# 339 "data/maps/EltheRoad/scripts.pory"
	.string "Look, are you gonna eat a berry\n"
	.string "or not!?$"

EltheRoad_VinosNegotiationMain_Text_29:
# 341 "data/maps/EltheRoad/scripts.pory"
	.string "Nope.$"

EltheRoad_VinosNegotiationMain_Text_30:
# 343 "data/maps/EltheRoad/scripts.pory"
	.string "… … … … … … … … … …\p"
	.string "Okay, forget it. Next question.$"

EltheRoad_VinosNegotiationMain_Text_31:
# 347 "data/maps/EltheRoad/scripts.pory"
	.string "Oh, that reminds me I have…$"

EltheRoad_VinosNegotiationMain_Text_32:
# 349 "data/maps/EltheRoad/scripts.pory"
	.string "Trail mix!$"

EltheRoad_VinosNegotiationMain_Text_33:
# 351 "data/maps/EltheRoad/scripts.pory"
	.string "… … … … …\p"
	.string "Your ways confuse me, human.\n"
	.string "I would like to stop talking to you.$"

EltheRoad_VinosNegotiationMain_Text_34:
# 358 "data/maps/EltheRoad/scripts.pory"
	.string "To get my team back$"

EltheRoad_VinosNegotiationMain_Text_35:
# 359 "data/maps/EltheRoad/scripts.pory"
	.string "For thrills$"

EltheRoad_VinosNegotiationMain_Text_36:
# 360 "data/maps/EltheRoad/scripts.pory"
	.string "I don't want to fight$"

EltheRoad_VinosNegotiationMain_Text_37:
# 361 "data/maps/EltheRoad/scripts.pory"
	.string "Why should I let you through?$"

EltheRoad_VinosNegotiationMain_Text_38:
# 368 "data/maps/EltheRoad/scripts.pory"
	.string "I need to get my team back! We got\n"
	.string "separated by the flood.\p"
	.string "I'm their Trainer.\n"
	.string "We need each other.$"

EltheRoad_VinosNegotiationMain_Text_39:
# 370 "data/maps/EltheRoad/scripts.pory"
	.string "Why is that my problem?\n"
	.string "I'm hungry.$"

EltheRoad_VinosNegotiationMain_Text_40:
# 372 "data/maps/EltheRoad/scripts.pory"
	.string "Hungr- were you planning to eat me!?$"

EltheRoad_VinosNegotiationMain_Text_41:
# 374 "data/maps/EltheRoad/scripts.pory"
	.string "No. I was just giving an example of\n"
	.string "something that's not your problem.$"

EltheRoad_VinosNegotiationMain_Text_42:
# 383 "data/maps/EltheRoad/scripts.pory"
	.string "There's no reason for us to fight.\n"
	.string "Look at this place, it's a mess.\p"
	.string "Just let me move on to take care of\n"
	.string "my business, and you can get back\l"
	.string "to finding a new tree, or whatever\l"
	.string "it is you're doing.$"

EltheRoad_VinosNegotiationMain_Text_43:
# 387 "data/maps/EltheRoad/scripts.pory"
	.string "Pokémon don't need a reason to\n"
	.string "fight…but now that you mention it,\l"
	.string "it does sound like a waste\l"
	.string "of time right now…$"

EltheRoad_VinosNegotiationMain_Text_44:
# 392 "data/maps/EltheRoad/scripts.pory"
	.string "I bet you fight every Trainer who\n"
	.string "comes through here, right?\p"
	.string "Wouldn't it be a thrill to let\n"
	.string "one pass through, just this once?\l"
	.string "Get a little crazy with it.$"

EltheRoad_VinosNegotiationMain_Text_45:
# 396 "data/maps/EltheRoad/scripts.pory"
	.string "Hmm…perhaps under the circumstances,\n"
	.string "it would serve me better…$"

EltheRoad_VinosNegotiationMain_Text_46:
# 402 "data/maps/EltheRoad/scripts.pory"
	.string "Thirty years$"

EltheRoad_VinosNegotiationMain_Text_47:
# 403 "data/maps/EltheRoad/scripts.pory"
	.string "Long enough$"

EltheRoad_VinosNegotiationMain_Text_48:
# 404 "data/maps/EltheRoad/scripts.pory"
	.string "Just started$"

EltheRoad_VinosNegotiationMain_Text_49:
# 405 "data/maps/EltheRoad/scripts.pory"
	.string "How long has it been since you\n"
	.string "started training Pokémon?$"

EltheRoad_VinosNegotiationMain_Text_50:
# 412 "data/maps/EltheRoad/scripts.pory"
	.string "Hmm, well me and Demi-Vee just met,\n"
	.string "so I guess I just started.$"

EltheRoad_VinosNegotiationMain_Text_51:
# 414 "data/maps/EltheRoad/scripts.pory"
	.string "No wonder you tried talking. You\n"
	.string "have no idea what you're doing.$"

EltheRoad_VinosNegotiationMain_Text_52:
# 423 "data/maps/EltheRoad/scripts.pory"
	.string "Let me think…Python's last birthday\n"
	.string "was, uh…\p"
	.string "Hmm, I can't remember exactly, but\n"
	.string "I think I started in the year…\p"
	.string "So, it must have been at least\n"
	.string "thirty years.$"

EltheRoad_VinosNegotiationMain_Text_53:
# 427 "data/maps/EltheRoad/scripts.pory"
	.string "You expect me to believe that?\n"
	.string "You don't even look like you're\l"
	.string "thirty years old. You're just\l"
	.string "trying to intimidate me.$"

EltheRoad_VinosNegotiationMain_Text_54:
# 430 "data/maps/EltheRoad/scripts.pory"
	.string "It's true, though…$"

EltheRoad_VinosNegotiationMain_Text_55:
# 434 "data/maps/EltheRoad/scripts.pory"
	.string "Long enough.$"

EltheRoad_VinosNegotiationMain_Text_56:
# 436 "data/maps/EltheRoad/scripts.pory"
	.string "…!$"

EltheRoad_VinosNegotiationMain_Text_57:
# 454 "data/maps/EltheRoad/scripts.pory"
	.string "You're getting on my nerves…\p"
	.string "Enough talk! I should have done this\n"
	.string "from the beginning!$"

EltheRoad_VinosNegotiationMidSuccess_Text_0:
# 468 "data/maps/EltheRoad/scripts.pory"
	.string "…well, I suppose you're not wholly\n"
	.string "unpleasant. And I don't feel like\l"
	.string "jumping you anymore anyway.\l"
	.string "You can pass.\p"
	.string "And here, take this. I have no\n"
	.string "use for it anyway.$"

EltheRoad_VinosNegotiationMidSuccess_Text_1:
# 473 "data/maps/EltheRoad/scripts.pory"
	.string "Ooh! A crystal! Yummy!$"

EltheRoad_VinosNegotiationMidSuccess_Text_2:
# 475 "data/maps/EltheRoad/scripts.pory"
	.string "Run along, now.$"

EltheRoad_VinosNegotiationMidSuccess_Text_3:
# 477 "data/maps/EltheRoad/scripts.pory"
	.string "Okay, then. Thanks for your\n"
	.string "patience. Buh-bye!$"

EltheRoad_VinosNegotiationCompleteSuccess_Text_0:
# 486 "data/maps/EltheRoad/scripts.pory"
	.string "Hmm. That was a nice change of pace.\n"
	.string "Rarely do I speak even to those of\l"
	.string "my own kind. Even rarer to speak to\l"
	.string "a human as an equal.\p"
	.string "Here. Take this as a token\n"
	.string "of my appreciation.$"

EltheRoad_VinosNegotiationCompleteSuccess_Text_1:
# 490 "data/maps/EltheRoad/scripts.pory"
	.string "Ooh! A huge crystal! Yummy!\n"
	.string "I'll save it for later!$"

EltheRoad_VinosNegotiationCompleteSuccess_Text_2:
# 492 "data/maps/EltheRoad/scripts.pory"
	.string "I saw another such crystal a bit further\n"
	.string "up the path, behind a tree. A red one.\p"
	.string "Look for it if it interests you.\n"
	.string "Keep yourself safe.$"

EltheRoad_VinosNegotiationCompleteSuccess_Text_3:
# 495 "data/maps/EltheRoad/scripts.pory"
	.string "Okay, thanks for the tip!\n"
	.string "See you around, Vinos!$"

EltheRoad_VinosDoBattle_Text_0:
# 507 "data/maps/EltheRoad/scripts.pory"
	.string "… … … … …\p"
	.string "…well? Aren't you going to\n"
	.string "finish me off?$"

EltheRoad_VinosDoBattle_Text_1:
# 509 "data/maps/EltheRoad/scripts.pory"
	.string "What? No. I only wanted to get\n"
	.string "through here.$"

EltheRoad_VinosDoBattle_Text_2:
# 511 "data/maps/EltheRoad/scripts.pory"
	.string "…Oh.$"

EltheRoad_VinosDoBattle_Text_3:
# 519 "data/maps/EltheRoad/scripts.pory"
	.string "Well, go along then! And if it\n"
	.string "will get you to leave me alone,\l"
	.string "then take this!$"

EltheRoad_VinosDoBattle_Text_4:
# 524 "data/maps/EltheRoad/scripts.pory"
	.string "Those things are all over the\n"
	.string "place here. I think I saw another\l"
	.string "type of crystal next to that stump\l"
	.string "behind me.\p"
	.string "Run along, then.$"

EltheRoad_EventScript_VinosIdle_Text_0:
# 547 "data/maps/EltheRoad/scripts.pory"
	.string "If you truly just wanted to pass\n"
	.string "by, then hurry up already!\p"
	.string "I don't want to see your face\n"
	.string "right now. Begone.$"

EltheRoad_EventScript_VinosIdle_Text_1:
# 553 "data/maps/EltheRoad/scripts.pory"
	.string "If you want more crystals, there's\n"
	.string "one stuck in a tree…$"

EltheRoad_EventScript_VinosIdle_Text_2:
# 570 "data/maps/EltheRoad/scripts.pory"
	.string "Right here.$"

EltheRoad_EventScript_VinosIdle_Text_3:
# 612 "data/maps/EltheRoad/scripts.pory"
	.string "How exactly are you able to\n"
	.string "understand my speech?$"

EltheRoad_EventScript_VinosIdle_Text_4:
# 614 "data/maps/EltheRoad/scripts.pory"
	.string "Oh, it's a long story…\n"
	.string "A long, deeply stupid story…\p"
	.string "My head's a bit hazy on the details\n"
	.string "right now. I think it starts with me\l"
	.string "kidnapping a Pokémon from a Professor,\l"
	.string "and then at some point my arm fell\l"
	.string "off, and I got stuck in the body of a…\p"
	.string "You know, I'd really rather not\n"
	.string "get into it.\p"
	.string "The short version is that it's a\n"
	.string "highly unique circumstance.$"

EltheRoad_EventScript_VinosIdle_Text_5:
# 619 "data/maps/EltheRoad/scripts.pory"
	.string "I see…so no other humans have\n"
	.string "this ability?$"

EltheRoad_EventScript_VinosIdle_Text_6:
# 621 "data/maps/EltheRoad/scripts.pory"
	.string "I think some do, but…not the same\n"
	.string "kind as me.$"

EltheRoad_EventScript_VinosIdle_Text_7:
# 623 "data/maps/EltheRoad/scripts.pory"
	.string "How curious.$"

EltheRoad_EventScript_VinosIdle_Text_8:
# 628 "data/maps/EltheRoad/scripts.pory"
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
# 646 "data/maps/EltheRoad/scripts.pory"
	.string "Ack! A trainer!?$"

EltheRoad_Trigger_VinosAltTrigger_Text_1:
# 648 "data/maps/EltheRoad/scripts.pory"
	.string "Hi. I just wanted to sneak by you.\n"
	.string "Do you mind?$"

EltheRoad_Trigger_VinosAltTrigger_Text_2:
# 650 "data/maps/EltheRoad/scripts.pory"
	.string "You're…asking my permission? What?$"

EltheRoad_Trigger_VinosAltTrigger_Text_3:
# 652 "data/maps/EltheRoad/scripts.pory"
	.string "Yeah. Don't wanna be rude.\n"
	.string "What kind of Pokémon are you?\l"
	.string "I've never seen this kind before.$"

EltheRoad_Trigger_VinosAltTrigger_Text_4:
# 654 "data/maps/EltheRoad/scripts.pory"
	.string "…I am called Vinos.\n"
	.string "…Apologies, I am very confused.\p"
	.string "I have never seen a human interact\n"
	.string "with a Pokémon in this way. Usually\l"
	.string "they just attack. And I thought\l"
	.string "humans couldn't hear our speech.$"

EltheRoad_Trigger_VinosAltTrigger_Text_5:
# 657 "data/maps/EltheRoad/scripts.pory"
	.string "Well, most can't. But I can.$"

EltheRoad_Trigger_VinosAltTrigger_Text_6:
# 659 "data/maps/EltheRoad/scripts.pory"
	.string "Fascinating. A gift, then, for one\n"
	.string "who has shown me something new.$"

EltheRoad_Trigger_Marcel_Right_Text_0:
# 684 "data/maps/EltheRoad/scripts.pory"
	.string "Hey! You! Kingler!$"

EltheRoad_Trigger_MarcelMain_Text_0:
# 717 "data/maps/EltheRoad/scripts.pory"
	.string "You're…you are…\n"
	.string "What's your name again?$"

EltheRoad_Trigger_MarcelMain_Text_1:
# 718 "data/maps/EltheRoad/scripts.pory"
	.string "Marcel$"

EltheRoad_Trigger_MarcelMain_Text_2:
# 719 "data/maps/EltheRoad/scripts.pory"
	.string "I'm Marcel. I think I know you.\n"
	.string "Do you know me?$"

EltheRoad_Trigger_MarcelMain_Text_3:
# 721 "data/maps/EltheRoad/scripts.pory"
	.string "I guess so. I have a Poké Ball here\n"
	.string "with your name on it.$"

EltheRoad_Trigger_MarcelMain_Text_4:
# 723 "data/maps/EltheRoad/scripts.pory"
	.string "Is this one of your team members?\n"
	.string "Why don't you, like, know each other?$"

EltheRoad_Trigger_MarcelMain_Text_5:
# 725 "data/maps/EltheRoad/scripts.pory"
	.string "I haven't been able to think straight\n"
	.string "ever since the flood…$"

EltheRoad_Trigger_MarcelMain_Text_6:
# 728 "data/maps/EltheRoad/scripts.pory"
	.string "Oh, who's this cute little thing?$"

EltheRoad_Trigger_MarcelMain_Text_7:
# 730 "data/maps/EltheRoad/scripts.pory"
	.string "I'm the Demi-Vee! I'm tagging along\n"
	.string "to keep Amelia out of trouble!$"

EltheRoad_Trigger_MarcelMain_Text_8:
# 732 "data/maps/EltheRoad/scripts.pory"
	.string "As if! Nobody keeps me out of trouble!$"

EltheRoad_Trigger_MarcelMain_Text_9:
# 734 "data/maps/EltheRoad/scripts.pory"
	.string "Heh heh heh! That sounds right to me!\n"
	.string "I remember Vice told me about that\l"
	.string "time when your ex-boyfriend…$"

EltheRoad_Trigger_MarcelMain_Text_10:
# 745 "data/maps/EltheRoad/scripts.pory"
	.string "Vice! That's it, Amelia! You need\n"
	.string "to help me find my girlfriend!$"

EltheRoad_Trigger_MarcelMain_Text_11:
# 747 "data/maps/EltheRoad/scripts.pory"
	.string "Of course! How could I forget about\n"
	.string "my favorite battle couple!$"

EltheRoad_Trigger_MarcelMain_Text_12:
# 749 "data/maps/EltheRoad/scripts.pory"
	.string "There's a town nearby. She hates\n"
	.string "rain, so she's probably holed up\l"
	.string "inside somewhere. Let's go!$"

EltheRoad_Trigger_MarcelMain_Text_13:
# 758 "data/maps/EltheRoad/scripts.pory"
	.string "You recalled Marcel the Kingler!$"

EltheRoad_EventScript_TreeCleanupMan_Text_0:
# 772 "data/maps/EltheRoad/scripts.pory"
	.string "Logan$"

EltheRoad_EventScript_TreeCleanupMan_Text_1:
# 773 "data/maps/EltheRoad/scripts.pory"
	.string "There's something unsettling about\n"
	.string "the path behind these branches…\p"
	.string "Maybe I should just leave these\n"
	.string "where they are…$"

EltheRoad_EventScript_TreeCleanupMan_Text_2:
# 778 "data/maps/EltheRoad/scripts.pory"
	.string "Hail, traveler! I'm working on\nclearing out all these branches.\p"
	.string "You should be able to make it to the\n"
	.string "city now. I'll get the road all clear\l"
	.string "as soon as I can.$"

EltheRoad_EventScript_BerryFieldsSign_Text_0:
# 784 "data/maps/EltheRoad/scripts.pory"
	.string "Elthe City Berry Fields\p"
	.string "Please see overseer before picking\n"
	.string "any berries!$"
