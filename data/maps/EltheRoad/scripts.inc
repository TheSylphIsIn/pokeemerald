EltheRoad_MapScripts::
# 93 "data/maps/EltheRoad/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, EltheRoad_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 9 "data/maps/EltheRoad/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

EltheRoad_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 94 "data/maps/EltheRoad/scripts.pory"
	goto_if_set FLAG_TREES_CLEARED, EltheRoad_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

EltheRoad_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 96 "data/maps/EltheRoad/scripts.pory"
	setobjectxyperm 13, 8, 14
# 97 "data/maps/EltheRoad/scripts.pory"
	setobjectmovementtype 13, MOVEMENT_TYPE_FACE_LEFT
	return

EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 10 "data/maps/EltheRoad/scripts.pory"
	map_script_2 VAR_MAIN_GAME_STATE, 0, EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0
	.2byte 0

EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0:
# 11 "data/maps/EltheRoad/scripts.pory"
	clearflag FLAG_NO_MUSIC_ON_WARP
# 12 "data/maps/EltheRoad/scripts.pory"
	addobjectspriteoffset 2, 5, 0
# 13 "data/maps/EltheRoad/scripts.pory"
	addobjectspriteoffset 1, 6, 0
# 14 "data/maps/EltheRoad/scripts.pory"
	delay 60
# 15 "data/maps/EltheRoad/scripts.pory"
	delay 60
# 16 "data/maps/EltheRoad/scripts.pory"
	delay 60
# 17 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_0
# 18 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_1, MSGBOX_AUTOCLOSE
# 19 "data/maps/EltheRoad/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 20 "data/maps/EltheRoad/scripts.pory"
	delay 60
# 21 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_2, PORTRAIT_AMELIA_NEUTRAL
# 22 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_3
# 23 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_4, PORTRAIT_DEMIVEE_NEUTRAL, PORTRAIT_DEFAULT_LEFT
# 24 "data/maps/EltheRoad/scripts.pory"
	message EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_5
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
	addobjectspriteoffset 1, -1, 0
# 36 "data/maps/EltheRoad/scripts.pory"
	delay 5
# 37 "data/maps/EltheRoad/scripts.pory"
	waitmessage
# 38 "data/maps/EltheRoad/scripts.pory"
	waitbuttonpress
# 39 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_2, PORTRAIT_AMELIA_SHOCK
# 40 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_6
# 41 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_4, PORTRAIT_DEMIVEE_ANNOYED, PORTRAIT_DEFAULT_LEFT
# 42 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_7
# 43 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_2, PORTRAIT_AMELIA_NEUTRAL
# 44 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_8, MSGBOX_AUTOCLOSE
# 45 "data/maps/EltheRoad/scripts.pory"
	playse SE_PIN
# 46 "data/maps/EltheRoad/scripts.pory"
	applymovement 2, Common_Movement_ExclamationMark
# 47 "data/maps/EltheRoad/scripts.pory"
	waitmovement 0
# 48 "data/maps/EltheRoad/scripts.pory"
	applymovement 2, Common_Movement_Delay48
# 49 "data/maps/EltheRoad/scripts.pory"
	waitmovement 0
# 50 "data/maps/EltheRoad/scripts.pory"
	removeobject 2
# 51 "data/maps/EltheRoad/scripts.pory"
	playse SE_BIKE_HOP
# 52 "data/maps/EltheRoad/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, EltheRoad_Movement_AmeliaJumpUp
# 53 "data/maps/EltheRoad/scripts.pory"
	waitmovement 0
# 54 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_2, PORTRAIT_AMELIA_SHOCK
# 55 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_9, MSGBOX_AUTOCLOSE
# 56 "data/maps/EltheRoad/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, EltheRoad_Movement_AmeliaLookAround
# 57 "data/maps/EltheRoad/scripts.pory"
	waitmovement 0
# 58 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_2, PORTRAIT_AMELIA_STRAINED
# 59 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_10
# 60 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_2, PORTRAIT_AMELIA_NEUTRAL
# 61 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_11, MSGBOX_AUTOCLOSE
# 62 "data/maps/EltheRoad/scripts.pory"
	additem ITEM_POKE_BALL
# 63 "data/maps/EltheRoad/scripts.pory"
	additem ITEM_GREAT_BALL
# 64 "data/maps/EltheRoad/scripts.pory"
	additem ITEM_ULTRA_BALL
# 65 "data/maps/EltheRoad/scripts.pory"
	additem ITEM_NEST_BALL
# 66 "data/maps/EltheRoad/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, EltheRoad_Movement_AmeliaStartLeaving
# 67 "data/maps/EltheRoad/scripts.pory"
	delay 30
# 68 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_4, PORTRAIT_DEMIVEE_NEUTRAL, PORTRAIT_DEFAULT_LEFT
# 69 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_12, MSGBOX_AUTOCLOSE
# 70 "data/maps/EltheRoad/scripts.pory"
	playse SE_LEDGE
# 71 "data/maps/EltheRoad/scripts.pory"
	applymovement 1, EltheRoad_Movement_DemiveeFollow
# 72 "data/maps/EltheRoad/scripts.pory"
	waitmovement 0
# 73 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_4, PORTRAIT_DEMIVEE_ANNOYED, PORTRAIT_DEFAULT_LEFT
# 74 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_13
# 75 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_2, PORTRAIT_AMELIA_SMUG
# 76 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_14
# 77 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_2, PORTRAIT_AMELIA_NEUTRAL
# 78 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_15, MSGBOX_AUTOCLOSE
# 79 "data/maps/EltheRoad/scripts.pory"
	applymovement 1, EltheRoad_Movement_DemiveeJoin
# 80 "data/maps/EltheRoad/scripts.pory"
	waitmovement 0
# 81 "data/maps/EltheRoad/scripts.pory"
	removeobject 1
# 82 "data/maps/EltheRoad/scripts.pory"
	playfanfare MUS_EVOLVED
# 83 "data/maps/EltheRoad/scripts.pory"
	additem ITEM_LEAFSHARD
# 84 "data/maps/EltheRoad/scripts.pory"
	message EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_16
# 85 "data/maps/EltheRoad/scripts.pory"
	waitmessage
# 86 "data/maps/EltheRoad/scripts.pory"
	waitfanfare
# 87 "data/maps/EltheRoad/scripts.pory"
	waitbuttonpress
# 88 "data/maps/EltheRoad/scripts.pory"
	closemessage
# 89 "data/maps/EltheRoad/scripts.pory"
	fadedefaultbgm
# 90 "data/maps/EltheRoad/scripts.pory"
	setvar VAR_MAIN_GAME_STATE, 1
	return


EltheRoad_EventScript_FirstTrigger::
# 104 "data/maps/EltheRoad/scripts.pory"
	lock
# 105 "data/maps/EltheRoad/scripts.pory"
	delay 30
# 106 "data/maps/EltheRoad/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 107 "data/maps/EltheRoad/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, Common_Movement_FaceRight
# 108 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_2, PORTRAIT_AMELIA_NEUTRAL
# 109 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_EventScript_FirstTrigger_Text_0
# 110 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_4, PORTRAIT_DEMIVEE_NEUTRAL, PORTRAIT_DEFAULT_LEFT
# 111 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_EventScript_FirstTrigger_Text_1
# 114 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_2, PORTRAIT_AMELIA_SMUG
# 115 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_EventScript_FirstTrigger_Text_2
# 116 "data/maps/EltheRoad/scripts.pory"
	setpartymemberinfo 0
# 117 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_EventScript_FirstTrigger_Text_3, PORTRAIT_DEMIVEE_HUH, PORTRAIT_DEFAULT_LEFT
# 118 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_EventScript_FirstTrigger_Text_4
# 119 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_EventScript_FirstTrigger_Text_3, PORTRAIT_DEMIVEE_NEUTRAL, PORTRAIT_DEFAULT_LEFT
# 120 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_EventScript_FirstTrigger_Text_5
# 122 "data/maps/EltheRoad/scripts.pory"
	speakername NULL, 0
# 123 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_EventScript_FirstTrigger_Text_6, MSGBOX_AUTOCLOSE
# 124 "data/maps/EltheRoad/scripts.pory"
	setvar VAR_MAIN_GAME_STATE, 2
	return


EltheRoad_EventScript_DemiveeTutorialSign::
# 129 "data/maps/EltheRoad/scripts.pory"
	lock
# 130 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_EventScript_DemiveeTutorialSign_Text_0
# 133 "data/maps/EltheRoad/scripts.pory"
	goto EltheRoad_EventScript_DemiveeTutorialMultichoice
	return


EltheRoad_EventScript_DemiveeTutorialMultichoice::
# 138 "data/maps/EltheRoad/scripts.pory"
	message EltheRoad_EventScript_DemiveeTutorialMultichoice_Text_0
# 139 "data/maps/EltheRoad/scripts.pory"
	waitmessage
# 140 "data/maps/EltheRoad/scripts.pory"
	dynmultichoice 0, 0, FALSE, 6, 0, DYN_MULTICHOICE_CB_NONE, EltheRoad_EventScript_DemiveeTutorialMultichoice_Text_1, EltheRoad_EventScript_DemiveeTutorialMultichoice_Text_2, EltheRoad_EventScript_DemiveeTutorialMultichoice_Text_3, EltheRoad_EventScript_DemiveeTutorialMultichoice_Text_4, EltheRoad_EventScript_DemiveeTutorialMultichoice_Text_5, EltheRoad_EventScript_DemiveeTutorialMultichoice_Text_6
# 141 "data/maps/EltheRoad/scripts.pory"
	switch VAR_RESULT
# 143 "data/maps/EltheRoad/scripts.pory"
	case 0, EltheRoad_EventScript_DemiveeTutorialMultichoice_3
# 149 "data/maps/EltheRoad/scripts.pory"
	case 1, EltheRoad_EventScript_DemiveeTutorialMultichoice_4
# 155 "data/maps/EltheRoad/scripts.pory"
	case 2, EltheRoad_EventScript_DemiveeTutorialMultichoice_5
# 160 "data/maps/EltheRoad/scripts.pory"
	case 3, EltheRoad_EventScript_DemiveeTutorialMultichoice_6
# 165 "data/maps/EltheRoad/scripts.pory"
	case 4, EltheRoad_EventScript_DemiveeTutorialMultichoice_7
# 171 "data/maps/EltheRoad/scripts.pory"
	case 5, EltheRoad_EventScript_DemiveeTutorialMultichoice_8
# 172 "data/maps/EltheRoad/scripts.pory"
	case MULTI_B_PRESSED, EltheRoad_EventScript_DemiveeTutorialMultichoice_8
EltheRoad_EventScript_DemiveeTutorialMultichoice_1:
# 176 "data/maps/EltheRoad/scripts.pory"
	goto EltheRoad_EventScript_DemiveeTutorialMultichoice
	return

EltheRoad_EventScript_DemiveeTutorialMultichoice_3:
# 144 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_EventScript_DemiveeTutorialMultichoice_Text_7
	goto EltheRoad_EventScript_DemiveeTutorialMultichoice_1

EltheRoad_EventScript_DemiveeTutorialMultichoice_4:
# 150 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_EventScript_DemiveeTutorialMultichoice_Text_8
	goto EltheRoad_EventScript_DemiveeTutorialMultichoice_1

EltheRoad_EventScript_DemiveeTutorialMultichoice_5:
# 156 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_EventScript_DemiveeTutorialMultichoice_Text_9
	goto EltheRoad_EventScript_DemiveeTutorialMultichoice_1

EltheRoad_EventScript_DemiveeTutorialMultichoice_6:
# 161 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_EventScript_DemiveeTutorialMultichoice_Text_10
	goto EltheRoad_EventScript_DemiveeTutorialMultichoice_1

EltheRoad_EventScript_DemiveeTutorialMultichoice_7:
# 166 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_EventScript_DemiveeTutorialMultichoice_Text_11
	goto EltheRoad_EventScript_DemiveeTutorialMultichoice_1

EltheRoad_EventScript_DemiveeTutorialMultichoice_8:
# 173 "data/maps/EltheRoad/scripts.pory"
	release
	end


EltheRoad_EventScript_FirstSign::
# 182 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_EventScript_FirstSign_Text_0, MSGBOX_SIGN
	return


EltheRoad_Trigger_VinosTrigger::
# 187 "data/maps/EltheRoad/scripts.pory"
	lock
# 188 "data/maps/EltheRoad/scripts.pory"
	delay 32
# 189 "data/maps/EltheRoad/scripts.pory"
	special SpawnCameraObject
# 190 "data/maps/EltheRoad/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp2
# 191 "data/maps/EltheRoad/scripts.pory"
	waitmovement 0
# 192 "data/maps/EltheRoad/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
# 193 "data/maps/EltheRoad/scripts.pory"
	waitmovement 0
# 194 "data/maps/EltheRoad/scripts.pory"
	delay 32
# 195 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_Trigger_VinosTrigger_Text_0, PORTRAIT_VINOS_NEUTRAL, PORTRAIT_DEFAULT_LEFT
# 196 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_Trigger_VinosTrigger_Text_1, MSGBOX_AUTOCLOSE
# 197 "data/maps/EltheRoad/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkDown
# 198 "data/maps/EltheRoad/scripts.pory"
	waitmovement 0
# 199 "data/maps/EltheRoad/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkDown
# 200 "data/maps/EltheRoad/scripts.pory"
	waitmovement 0
# 201 "data/maps/EltheRoad/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkDown
# 202 "data/maps/EltheRoad/scripts.pory"
	waitmovement 0
# 203 "data/maps/EltheRoad/scripts.pory"
	special RemoveCameraObject
# 204 "data/maps/EltheRoad/scripts.pory"
	delay 32
# 205 "data/maps/EltheRoad/scripts.pory"
	message EltheRoad_Trigger_VinosTrigger_Text_2
# 206 "data/maps/EltheRoad/scripts.pory"
	waitmessage
# 207 "data/maps/EltheRoad/scripts.pory"
	dynmultichoice 0, 0, TRUE, 6, 0, DYN_MULTICHOICE_CB_NONE, EltheRoad_Trigger_VinosTrigger_Text_3, EltheRoad_Trigger_VinosTrigger_Text_4
# 208 "data/maps/EltheRoad/scripts.pory"
	switch VAR_RESULT
# 210 "data/maps/EltheRoad/scripts.pory"
	case 0, EltheRoad_Trigger_VinosTrigger_2
# 239 "data/maps/EltheRoad/scripts.pory"
	case 1, EltheRoad_Trigger_VinosTrigger_3
	return

EltheRoad_Trigger_VinosTrigger_2:
# 211 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_2, PORTRAIT_AMELIA_NEUTRAL
# 212 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_Trigger_VinosTrigger_Text_5, MSGBOX_AUTOCLOSE
# 213 "data/maps/EltheRoad/scripts.pory"
	playse SE_PIN
# 214 "data/maps/EltheRoad/scripts.pory"
	applymovement 3, Common_Movement_FaceDown
# 215 "data/maps/EltheRoad/scripts.pory"
	waitmovement 0
# 216 "data/maps/EltheRoad/scripts.pory"
	applymovement 3, Common_Movement_ExclamationMark
# 217 "data/maps/EltheRoad/scripts.pory"
	waitmovement 0
# 218 "data/maps/EltheRoad/scripts.pory"
	delay 48
# 219 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_Trigger_VinosTrigger_Text_0, PORTRAIT_VINOS_NEUTRAL, PORTRAIT_DEFAULT_LEFT
# 220 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_Trigger_VinosTrigger_Text_6
# 221 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_2, PORTRAIT_AMELIA_NEUTRAL
# 222 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_Trigger_VinosTrigger_Text_7, MSGBOX_AUTOCLOSE
# 223 "data/maps/EltheRoad/scripts.pory"
	playse SE_PIN
# 224 "data/maps/EltheRoad/scripts.pory"
	applymovement 3, Common_Movement_ExclamationMark
# 225 "data/maps/EltheRoad/scripts.pory"
	waitmovement 0
# 226 "data/maps/EltheRoad/scripts.pory"
	delay 48
# 227 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_Trigger_VinosTrigger_Text_0, PORTRAIT_VINOS_NEUTRAL, PORTRAIT_DEFAULT_LEFT
# 228 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_Trigger_VinosTrigger_Text_8
# 229 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_2, PORTRAIT_AMELIA_NEUTRAL
# 230 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_Trigger_VinosTrigger_Text_9
# 231 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_Trigger_VinosTrigger_Text_0, PORTRAIT_VINOS_NEUTRAL, PORTRAIT_DEFAULT_LEFT
# 232 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_Trigger_VinosTrigger_Text_10
# 233 "data/maps/EltheRoad/scripts.pory"
	speakername NULL, 0
# 234 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_Trigger_VinosTrigger_Text_11, MSGBOX_AUTOCLOSE
# 237 "data/maps/EltheRoad/scripts.pory"
	delay 32
# 238 "data/maps/EltheRoad/scripts.pory"
	goto EltheRoad_VinosNegotiationMain
	return

EltheRoad_Trigger_VinosTrigger_3:
# 240 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_2, PORTRAIT_AMELIA_STRAINED
# 241 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_Trigger_VinosTrigger_Text_12, MSGBOX_AUTOCLOSE
# 242 "data/maps/EltheRoad/scripts.pory"
	playse SE_PIN
# 243 "data/maps/EltheRoad/scripts.pory"
	applymovement 3, Common_Movement_FaceDown
# 244 "data/maps/EltheRoad/scripts.pory"
	waitmovement 0
# 245 "data/maps/EltheRoad/scripts.pory"
	applymovement 3, Common_Movement_ExclamationMark
# 246 "data/maps/EltheRoad/scripts.pory"
	waitmovement 0
# 247 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_Trigger_VinosTrigger_Text_0, PORTRAIT_VINOS_MAD, PORTRAIT_DEFAULT_LEFT
# 248 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_Trigger_VinosTrigger_Text_13, MSGBOX_AUTOCLOSE
# 249 "data/maps/EltheRoad/scripts.pory"
	goto EltheRoad_VinosDoBattle
	return


EltheRoad_VinosNegotiationMain::
# 256 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_VinosNegotiationMain_Text_0, PORTRAIT_VINOS_NEUTRAL
# 257 "data/maps/EltheRoad/scripts.pory"
	message EltheRoad_VinosNegotiationMain_Text_1
# 258 "data/maps/EltheRoad/scripts.pory"
	waitmessage
# 259 "data/maps/EltheRoad/scripts.pory"
	waitbuttonpress
# 260 "data/maps/EltheRoad/scripts.pory"
	setvar VAR_0x8008, 4
# 261 "data/maps/EltheRoad/scripts.pory"
	special GetNegotiationTopic
# 262 "data/maps/EltheRoad/scripts.pory"
	compare VAR_RESULT, 0xFF
	goto_if_eq EltheRoad_VinosNegotiationMain_1
# 268 "data/maps/EltheRoad/scripts.pory"
	switch VAR_RESULT
# 270 "data/maps/EltheRoad/scripts.pory"
	case 0, EltheRoad_VinosNegotiationMain_6
# 314 "data/maps/EltheRoad/scripts.pory"
	case 1, EltheRoad_VinosNegotiationMain_7
# 364 "data/maps/EltheRoad/scripts.pory"
	case 2, EltheRoad_VinosNegotiationMain_8
# 408 "data/maps/EltheRoad/scripts.pory"
	case 3, EltheRoad_VinosNegotiationMain_9
EltheRoad_VinosNegotiationMain_4:
# 450 "data/maps/EltheRoad/scripts.pory"
	delay 16
# 451 "data/maps/EltheRoad/scripts.pory"
	compare VAR_NEGOTIATION_SCORE, 3
	goto_if_ge EltheRoad_VinosNegotiationMain_10
# 459 "data/maps/EltheRoad/scripts.pory"
	compare VAR_NEGOTIATION_SCORE, 0
	goto_if_eq EltheRoad_VinosNegotiationMain_11
# 467 "data/maps/EltheRoad/scripts.pory"
	goto EltheRoad_VinosNegotiationMain
	return

EltheRoad_VinosNegotiationMain_1:
# 264 "data/maps/EltheRoad/scripts.pory"
	goto EltheRoad_VinosNegotiationMidSuccess
	return

EltheRoad_VinosNegotiationMain_6:
# 271 "data/maps/EltheRoad/scripts.pory"
	dynmultipush EltheRoad_VinosNegotiationMain_Text_2, 1
# 272 "data/maps/EltheRoad/scripts.pory"
	dynmultipush EltheRoad_VinosNegotiationMain_Text_3, 0
# 273 "data/maps/EltheRoad/scripts.pory"
	dynmultipush EltheRoad_VinosNegotiationMain_Text_4, 2
# 274 "data/maps/EltheRoad/scripts.pory"
	message EltheRoad_VinosNegotiationMain_Text_5
# 275 "data/maps/EltheRoad/scripts.pory"
	waitmessage
# 276 "data/maps/EltheRoad/scripts.pory"
	dynmultistack 0, 0, FALSE, 6, FALSE, 1, DYN_MULTICHOICE_CB_NONE
# 277 "data/maps/EltheRoad/scripts.pory"
	switch VAR_RESULT
# 279 "data/maps/EltheRoad/scripts.pory"
	case 0, EltheRoad_VinosNegotiationMain_16
# 293 "data/maps/EltheRoad/scripts.pory"
	case 1, EltheRoad_VinosNegotiationMain_17
# 303 "data/maps/EltheRoad/scripts.pory"
	case 2, EltheRoad_VinosNegotiationMain_18
	goto EltheRoad_VinosNegotiationMain_4

EltheRoad_VinosNegotiationMain_7:
# 316 "data/maps/EltheRoad/scripts.pory"
	dynmultipush EltheRoad_VinosNegotiationMain_Text_16, 1
# 317 "data/maps/EltheRoad/scripts.pory"
	dynmultipush EltheRoad_VinosNegotiationMain_Text_17, 2
# 318 "data/maps/EltheRoad/scripts.pory"
	dynmultipush EltheRoad_VinosNegotiationMain_Text_18, 0
# 319 "data/maps/EltheRoad/scripts.pory"
	message EltheRoad_VinosNegotiationMain_Text_19
# 320 "data/maps/EltheRoad/scripts.pory"
	waitmessage
# 321 "data/maps/EltheRoad/scripts.pory"
	dynmultistack 0, 0, FALSE, 6, FALSE, 1, DYN_MULTICHOICE_CB_NONE
# 322 "data/maps/EltheRoad/scripts.pory"
	switch VAR_RESULT
# 324 "data/maps/EltheRoad/scripts.pory"
	case 0, EltheRoad_VinosNegotiationMain_20
# 335 "data/maps/EltheRoad/scripts.pory"
	case 1, EltheRoad_VinosNegotiationMain_21
# 353 "data/maps/EltheRoad/scripts.pory"
	case 2, EltheRoad_VinosNegotiationMain_22
	goto EltheRoad_VinosNegotiationMain_4

EltheRoad_VinosNegotiationMain_8:
# 366 "data/maps/EltheRoad/scripts.pory"
	dynmultipush EltheRoad_VinosNegotiationMain_Text_34, 0
# 367 "data/maps/EltheRoad/scripts.pory"
	dynmultipush EltheRoad_VinosNegotiationMain_Text_35, 2
# 368 "data/maps/EltheRoad/scripts.pory"
	dynmultipush EltheRoad_VinosNegotiationMain_Text_36, 1
# 369 "data/maps/EltheRoad/scripts.pory"
	message EltheRoad_VinosNegotiationMain_Text_37
# 370 "data/maps/EltheRoad/scripts.pory"
	waitmessage
# 371 "data/maps/EltheRoad/scripts.pory"
	dynmultistack 0, 0, FALSE, 6, FALSE, 0, DYN_MULTICHOICE_CB_NONE
# 372 "data/maps/EltheRoad/scripts.pory"
	switch VAR_RESULT
# 374 "data/maps/EltheRoad/scripts.pory"
	case 0, EltheRoad_VinosNegotiationMain_24
# 389 "data/maps/EltheRoad/scripts.pory"
	case 1, EltheRoad_VinosNegotiationMain_25
# 398 "data/maps/EltheRoad/scripts.pory"
	case 2, EltheRoad_VinosNegotiationMain_26
	goto EltheRoad_VinosNegotiationMain_4

EltheRoad_VinosNegotiationMain_9:
# 410 "data/maps/EltheRoad/scripts.pory"
	dynmultipush EltheRoad_VinosNegotiationMain_Text_46, 1
# 411 "data/maps/EltheRoad/scripts.pory"
	dynmultipush EltheRoad_VinosNegotiationMain_Text_47, 2
# 412 "data/maps/EltheRoad/scripts.pory"
	dynmultipush EltheRoad_VinosNegotiationMain_Text_48, 0
# 413 "data/maps/EltheRoad/scripts.pory"
	message EltheRoad_VinosNegotiationMain_Text_49
# 414 "data/maps/EltheRoad/scripts.pory"
	waitmessage
# 415 "data/maps/EltheRoad/scripts.pory"
	dynmultistack 0, 0, FALSE, 6, FALSE, 1, DYN_MULTICHOICE_CB_NONE
# 416 "data/maps/EltheRoad/scripts.pory"
	switch VAR_RESULT
# 418 "data/maps/EltheRoad/scripts.pory"
	case 0, EltheRoad_VinosNegotiationMain_28
# 429 "data/maps/EltheRoad/scripts.pory"
	case 1, EltheRoad_VinosNegotiationMain_29
# 440 "data/maps/EltheRoad/scripts.pory"
	case 2, EltheRoad_VinosNegotiationMain_30
	goto EltheRoad_VinosNegotiationMain_4

EltheRoad_VinosNegotiationMain_10:
# 453 "data/maps/EltheRoad/scripts.pory"
	goto_if_set FLAG_NOT_PERFECT_CONVERSATION, EltheRoad_VinosNegotiationMain_32
EltheRoad_VinosNegotiationMain_31:
# 457 "data/maps/EltheRoad/scripts.pory"
	goto EltheRoad_VinosNegotiationCompleteSuccess
	return

EltheRoad_VinosNegotiationMain_11:
# 461 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_VinosNegotiationMain_Text_0, PORTRAIT_VINOS_MAD, PORTRAIT_DEFAULT_LEFT
# 462 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_VinosNegotiationMain_Text_57, MSGBOX_AUTOCLOSE
# 463 "data/maps/EltheRoad/scripts.pory"
	goto EltheRoad_VinosDoBattle
	return

EltheRoad_VinosNegotiationMain_16:
# 280 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_2, PORTRAIT_AMELIA_SERIOUSLY
# 281 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_VinosNegotiationMain_Text_6
# 282 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_2, PORTRAIT_AMELIA_SHOCK
# 283 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_VinosNegotiationMain_Text_7
# 285 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_VinosNegotiationMain_Text_0, PORTRAIT_VINOS_MAD, PORTRAIT_DEFAULT_LEFT
# 286 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_VinosNegotiationMain_Text_8, MSGBOX_AUTOCLOSE
# 287 "data/maps/EltheRoad/scripts.pory"
	setflag FLAG_NOT_PERFECT_CONVERSATION
# 288 "data/maps/EltheRoad/scripts.pory"
	compare VAR_NEGOTIATION_SCORE, 0
	goto_if_gt EltheRoad_VinosNegotiationMain_35
EltheRoad_VinosNegotiationMain_34:
# 292 "data/maps/EltheRoad/scripts.pory"
	playse SE_FAILURE
	goto EltheRoad_VinosNegotiationMain_4

EltheRoad_VinosNegotiationMain_17:
# 294 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_2, PORTRAIT_AMELIA_NEUTRAL
# 295 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_VinosNegotiationMain_Text_9
# 296 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_VinosNegotiationMain_Text_0, PORTRAIT_VINOS_NEUTRAL, PORTRAIT_DEFAULT_LEFT
# 297 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_VinosNegotiationMain_Text_10
# 298 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_2, PORTRAIT_AMELIA_SHOCK
# 299 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_VinosNegotiationMain_Text_11
# 300 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_VinosNegotiationMain_Text_0, PORTRAIT_VINOS_NEUTRAL, PORTRAIT_DEFAULT_LEFT
# 301 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_VinosNegotiationMain_Text_12, MSGBOX_AUTOCLOSE
# 302 "data/maps/EltheRoad/scripts.pory"
	addvar VAR_NEGOTIATION_SCORE, 1
	goto EltheRoad_VinosNegotiationMain_4

EltheRoad_VinosNegotiationMain_18:
# 304 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_2, PORTRAIT_AMELIA_NEUTRAL
# 305 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_VinosNegotiationMain_Text_13
# 306 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_2, PORTRAIT_AMELIA_WINK
# 307 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_VinosNegotiationMain_Text_14
# 308 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_VinosNegotiationMain_Text_0, PORTRAIT_VINOS_NEUTRAL, PORTRAIT_DEFAULT_LEFT
# 309 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_VinosNegotiationMain_Text_15, MSGBOX_AUTOCLOSE
# 311 "data/maps/EltheRoad/scripts.pory"
	addvar VAR_NEGOTIATION_SCORE, 2
# 312 "data/maps/EltheRoad/scripts.pory"
	playse SE_SUCCESS
	goto EltheRoad_VinosNegotiationMain_4

EltheRoad_VinosNegotiationMain_20:
# 325 "data/maps/EltheRoad/scripts.pory"
	callnative ParalyzeLead
# 326 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_EventScript_FirstTrigger_Text_3, PORTRAIT_DEMIVEE_NEUTRAL
# 327 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_VinosNegotiationMain_Text_20, MSGBOX_AUTOCLOSE
# 328 "data/maps/EltheRoad/scripts.pory"
	delay 90
# 329 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_EventScript_FirstTrigger_Text_3, PORTRAIT_DEMIVEE_ANNOYED
# 330 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_VinosNegotiationMain_Text_21
# 331 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_VinosNegotiationMain_Text_0, PORTRAIT_VINOS_NEUTRAL, PORTRAIT_DEFAULT_LEFT
# 332 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_VinosNegotiationMain_Text_22, MSGBOX_AUTOCLOSE
# 334 "data/maps/EltheRoad/scripts.pory"
	goto EltheRoad_VinosDoBattle
	goto EltheRoad_VinosNegotiationMain_4

EltheRoad_VinosNegotiationMain_21:
# 336 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_2, PORTRAIT_AMELIA_NEUTRAL
# 337 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_VinosNegotiationMain_Text_23
# 338 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_VinosNegotiationMain_Text_0, PORTRAIT_VINOS_NEUTRAL, PORTRAIT_DEFAULT_LEFT
# 339 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_VinosNegotiationMain_Text_24
# 340 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_2, PORTRAIT_AMELIA_NEUTRAL
# 341 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_VinosNegotiationMain_Text_25
# 342 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_VinosNegotiationMain_Text_0, PORTRAIT_VINOS_NEUTRAL, PORTRAIT_DEFAULT_LEFT
# 343 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_VinosNegotiationMain_Text_26
# 344 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_2, PORTRAIT_AMELIA_NEUTRAL
# 345 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_VinosNegotiationMain_Text_27
# 346 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_VinosNegotiationMain_Text_0, PORTRAIT_VINOS_MAD, PORTRAIT_DEFAULT_LEFT
# 347 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_VinosNegotiationMain_Text_28
# 348 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_2, PORTRAIT_AMELIA_SMUG
# 349 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_VinosNegotiationMain_Text_29
# 350 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_VinosNegotiationMain_Text_0, PORTRAIT_VINOS_MAD, PORTRAIT_DEFAULT_LEFT
# 351 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_VinosNegotiationMain_Text_30, MSGBOX_AUTOCLOSE
# 352 "data/maps/EltheRoad/scripts.pory"
	addvar VAR_NEGOTIATION_SCORE, 1
	goto EltheRoad_VinosNegotiationMain_4

EltheRoad_VinosNegotiationMain_22:
# 354 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_2, PORTRAIT_AMELIA_NEUTRAL
# 355 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_VinosNegotiationMain_Text_31
# 356 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_2, PORTRAIT_AMELIA_MUNCH
# 357 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_VinosNegotiationMain_Text_32
# 358 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_VinosNegotiationMain_Text_0, PORTRAIT_VINOS_NEUTRAL, PORTRAIT_DEFAULT_LEFT
# 359 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_VinosNegotiationMain_Text_33, MSGBOX_AUTOCLOSE
# 360 "data/maps/EltheRoad/scripts.pory"
	addvar VAR_NEGOTIATION_SCORE, 2
# 361 "data/maps/EltheRoad/scripts.pory"
	playse SE_SUCCESS
	goto EltheRoad_VinosNegotiationMain_4

EltheRoad_VinosNegotiationMain_24:
# 375 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_2, PORTRAIT_AMELIA_NEUTRAL
# 376 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_VinosNegotiationMain_Text_38
# 377 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_VinosNegotiationMain_Text_0, PORTRAIT_VINOS_MAD, PORTRAIT_DEFAULT_LEFT
# 378 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_VinosNegotiationMain_Text_39
# 379 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_2, PORTRAIT_AMELIA_SHOCK
# 380 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_VinosNegotiationMain_Text_40
# 381 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_VinosNegotiationMain_Text_0, PORTRAIT_VINOS_NEUTRAL, PORTRAIT_DEFAULT_LEFT
# 382 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_VinosNegotiationMain_Text_41, MSGBOX_AUTOCLOSE
# 383 "data/maps/EltheRoad/scripts.pory"
	setflag FLAG_NOT_PERFECT_CONVERSATION
# 384 "data/maps/EltheRoad/scripts.pory"
	compare VAR_NEGOTIATION_SCORE, 0
	goto_if_gt EltheRoad_VinosNegotiationMain_38
EltheRoad_VinosNegotiationMain_37:
# 388 "data/maps/EltheRoad/scripts.pory"
	playse SE_FAILURE
	goto EltheRoad_VinosNegotiationMain_4

EltheRoad_VinosNegotiationMain_25:
# 390 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_2, PORTRAIT_AMELIA_NEUTRAL
# 391 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_VinosNegotiationMain_Text_42
# 394 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_VinosNegotiationMain_Text_0, PORTRAIT_VINOS_NEUTRAL, PORTRAIT_DEFAULT_LEFT
# 395 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_VinosNegotiationMain_Text_43, MSGBOX_AUTOCLOSE
# 397 "data/maps/EltheRoad/scripts.pory"
	addvar VAR_NEGOTIATION_SCORE, 1
	goto EltheRoad_VinosNegotiationMain_4

EltheRoad_VinosNegotiationMain_26:
# 399 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_2, PORTRAIT_AMELIA_SMUG
# 400 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_VinosNegotiationMain_Text_44
# 403 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_VinosNegotiationMain_Text_0, PORTRAIT_VINOS_NEUTRAL, PORTRAIT_DEFAULT_LEFT
# 404 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_VinosNegotiationMain_Text_45, MSGBOX_AUTOCLOSE
# 405 "data/maps/EltheRoad/scripts.pory"
	addvar VAR_NEGOTIATION_SCORE, 2
# 406 "data/maps/EltheRoad/scripts.pory"
	playse SE_SUCCESS
	goto EltheRoad_VinosNegotiationMain_4

EltheRoad_VinosNegotiationMain_28:
# 419 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_2, PORTRAIT_AMELIA_NEUTRAL
# 420 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_VinosNegotiationMain_Text_50
# 421 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_VinosNegotiationMain_Text_0, PORTRAIT_VINOS_NEUTRAL, PORTRAIT_DEFAULT_LEFT
# 422 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_VinosNegotiationMain_Text_51, MSGBOX_AUTOCLOSE
# 423 "data/maps/EltheRoad/scripts.pory"
	setflag FLAG_NOT_PERFECT_CONVERSATION
# 424 "data/maps/EltheRoad/scripts.pory"
	compare VAR_NEGOTIATION_SCORE, 0
	goto_if_gt EltheRoad_VinosNegotiationMain_41
EltheRoad_VinosNegotiationMain_40:
# 428 "data/maps/EltheRoad/scripts.pory"
	playse SE_FAILURE
	goto EltheRoad_VinosNegotiationMain_4

EltheRoad_VinosNegotiationMain_29:
# 430 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_2, PORTRAIT_AMELIA_NEUTRAL
# 431 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_VinosNegotiationMain_Text_52
# 434 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_VinosNegotiationMain_Text_0, PORTRAIT_VINOS_NEUTRAL, PORTRAIT_DEFAULT_LEFT
# 435 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_VinosNegotiationMain_Text_53
# 437 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_2, PORTRAIT_AMELIA_SERIOUSLY
# 438 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_VinosNegotiationMain_Text_54, MSGBOX_AUTOCLOSE
# 439 "data/maps/EltheRoad/scripts.pory"
	addvar VAR_NEGOTIATION_SCORE, 1
	goto EltheRoad_VinosNegotiationMain_4

EltheRoad_VinosNegotiationMain_30:
# 441 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_2, PORTRAIT_AMELIA_SMUG
# 442 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_VinosNegotiationMain_Text_55
# 443 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_VinosNegotiationMain_Text_0, PORTRAIT_VINOS_NEUTRAL, PORTRAIT_DEFAULT_LEFT
# 444 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_VinosNegotiationMain_Text_56, MSGBOX_AUTOCLOSE
# 445 "data/maps/EltheRoad/scripts.pory"
	addvar VAR_NEGOTIATION_SCORE, 2
# 446 "data/maps/EltheRoad/scripts.pory"
	playse SE_SUCCESS
	goto EltheRoad_VinosNegotiationMain_4

EltheRoad_VinosNegotiationMain_32:
# 455 "data/maps/EltheRoad/scripts.pory"
	goto EltheRoad_VinosNegotiationMidSuccess
	goto EltheRoad_VinosNegotiationMain_31

EltheRoad_VinosNegotiationMain_35:
# 290 "data/maps/EltheRoad/scripts.pory"
	subvar VAR_NEGOTIATION_SCORE, 1
	goto EltheRoad_VinosNegotiationMain_34

EltheRoad_VinosNegotiationMain_38:
# 386 "data/maps/EltheRoad/scripts.pory"
	subvar VAR_NEGOTIATION_SCORE, 1
	goto EltheRoad_VinosNegotiationMain_37

EltheRoad_VinosNegotiationMain_41:
# 426 "data/maps/EltheRoad/scripts.pory"
	subvar VAR_NEGOTIATION_SCORE, 1
	goto EltheRoad_VinosNegotiationMain_40


EltheRoad_VinosNegotiationMidSuccess::
# 474 "data/maps/EltheRoad/scripts.pory"
	call EltheRoad_CleanUpNegotiationValues
# 475 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_VinosNegotiationMain_Text_0, PORTRAIT_VINOS_NEUTRAL, PORTRAIT_DEFAULT_LEFT
# 476 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_VinosNegotiationMidSuccess_Text_0, MSGBOX_AUTOCLOSE
# 479 "data/maps/EltheRoad/scripts.pory"
	giveitem ITEM_EXP_CANDY_L, 2
# 480 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_EventScript_FirstTrigger_Text_3, PORTRAIT_DEMIVEE_YAY
# 481 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_VinosNegotiationMidSuccess_Text_1
# 482 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_VinosNegotiationMain_Text_0, PORTRAIT_VINOS_NEUTRAL, PORTRAIT_DEFAULT_LEFT
# 483 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_VinosNegotiationMidSuccess_Text_2
# 484 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_2, PORTRAIT_AMELIA_NEUTRAL
# 485 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_VinosNegotiationMidSuccess_Text_3, MSGBOX_AUTOCLOSE
# 486 "data/maps/EltheRoad/scripts.pory"
	setvar VAR_MAIN_GAME_STATE, 3
# 487 "data/maps/EltheRoad/scripts.pory"
	setflag FLAG_TEMP_9
	return


EltheRoad_VinosNegotiationCompleteSuccess::
# 492 "data/maps/EltheRoad/scripts.pory"
	call EltheRoad_CleanUpNegotiationValues
# 493 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_VinosNegotiationMain_Text_0, PORTRAIT_VINOS_NEUTRAL, PORTRAIT_DEFAULT_LEFT
# 494 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_VinosNegotiationCompleteSuccess_Text_0, MSGBOX_AUTOCLOSE
# 496 "data/maps/EltheRoad/scripts.pory"
	giveitem ITEM_EXP_CANDY_XL, 1
# 497 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_EventScript_FirstTrigger_Text_3, PORTRAIT_DEMIVEE_YAY
# 498 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_VinosNegotiationCompleteSuccess_Text_1
# 499 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_VinosNegotiationMain_Text_0, PORTRAIT_VINOS_NEUTRAL, PORTRAIT_DEFAULT_LEFT
# 500 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_VinosNegotiationCompleteSuccess_Text_2
# 502 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_2, PORTRAIT_AMELIA_NEUTRAL
# 503 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_VinosNegotiationCompleteSuccess_Text_3, MSGBOX_AUTOCLOSE
# 504 "data/maps/EltheRoad/scripts.pory"
	setvar VAR_MAIN_GAME_STATE, 3
# 505 "data/maps/EltheRoad/scripts.pory"
	setflag FLAG_TEMP_8
	return


EltheRoad_VinosDoBattle::
# 510 "data/maps/EltheRoad/scripts.pory"
	createmon 1, 0, SPECIES_VINOS, 35, ITEM_NONE, 0, NATURE_IMPISH, 0, MON_MALE, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_WRAP, MOVE_FEINT_ATTACK, MOVE_GLARE, MOVE_LEER, FALSE, 0, TYPE_WATER
# 511 "data/maps/EltheRoad/scripts.pory"
	dowildbattle
# 512 "data/maps/EltheRoad/scripts.pory"
	call EltheRoad_CleanUpNegotiationValues
# 513 "data/maps/EltheRoad/scripts.pory"
	turnobject 3, DIR_SOUTH
# 514 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_VinosNegotiationMain_Text_0, PORTRAIT_VINOS_NEUTRAL, PORTRAIT_DEFAULT_LEFT
# 515 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_VinosDoBattle_Text_0
# 516 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_2, PORTRAIT_AMELIA_SERIOUSLY
# 517 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_VinosDoBattle_Text_1
# 518 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_VinosNegotiationMain_Text_0, PORTRAIT_VINOS_NEUTRAL, PORTRAIT_DEFAULT_LEFT
# 519 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_VinosDoBattle_Text_2, MSGBOX_AUTOCLOSE
# 520 "data/maps/EltheRoad/scripts.pory"
	delay 60
# 521 "data/maps/EltheRoad/scripts.pory"
	applymovement 3, Common_Movement_FaceLeft
# 522 "data/maps/EltheRoad/scripts.pory"
	delay 120
# 523 "data/maps/EltheRoad/scripts.pory"
	applymovement 3, Common_Movement_FaceRight
# 524 "data/maps/EltheRoad/scripts.pory"
	delay 120
# 525 "data/maps/EltheRoad/scripts.pory"
	applymovement 3, Common_Movement_FaceDown
# 526 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_VinosNegotiationMain_Text_0, PORTRAIT_VINOS_MAD, PORTRAIT_DEFAULT_LEFT
# 527 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_VinosDoBattle_Text_3, MSGBOX_AUTOCLOSE
# 528 "data/maps/EltheRoad/scripts.pory"
	giveitem ITEM_EXP_CANDY_L
# 529 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_EventScript_FirstTrigger_Text_3, PORTRAIT_DEMIVEE_YAY
# 530 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_VinosNegotiationMidSuccess_Text_1
# 531 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_VinosNegotiationMain_Text_0, PORTRAIT_VINOS_NEUTRAL, PORTRAIT_DEFAULT_LEFT
# 532 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_VinosDoBattle_Text_4, MSGBOX_AUTOCLOSE
# 533 "data/maps/EltheRoad/scripts.pory"
	setvar VAR_MAIN_GAME_STATE, 3
# 534 "data/maps/EltheRoad/scripts.pory"
	setflag FLAG_TEMP_9
	return


EltheRoad_CleanUpNegotiationValues::
# 539 "data/maps/EltheRoad/scripts.pory"
	setvar VAR_NEGOTIATION_SCORE, 0
# 540 "data/maps/EltheRoad/scripts.pory"
	clearflag FLAG_TEMP_4
# 541 "data/maps/EltheRoad/scripts.pory"
	clearflag FLAG_TEMP_1
# 542 "data/maps/EltheRoad/scripts.pory"
	clearflag FLAG_TEMP_2
# 543 "data/maps/EltheRoad/scripts.pory"
	clearflag FLAG_TEMP_3
# 544 "data/maps/EltheRoad/scripts.pory"
	clearflag FLAG_NOT_PERFECT_CONVERSATION
	return


EltheRoad_EventScript_VinosIdle::
# 550 "data/maps/EltheRoad/scripts.pory"
	lock
# 551 "data/maps/EltheRoad/scripts.pory"
	faceplayer
# 552 "data/maps/EltheRoad/scripts.pory"
	goto_if_set FLAG_TEMP_9, EltheRoad_EventScript_VinosIdle_2
# 558 "data/maps/EltheRoad/scripts.pory"
	goto_if_unset FLAG_FLARESHARD_GET, EltheRoad_EventScript_VinosIdle_3
# 617 "data/maps/EltheRoad/scripts.pory"
	goto_if_set FLAG_TEMP_8, EltheRoad_EventScript_VinosIdle_4
# 635 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_VinosNegotiationMain_Text_0, PORTRAIT_VINOS_NEUTRAL, PORTRAIT_DEFAULT_LEFT
# 636 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_EventScript_VinosIdle_Text_8, MSGBOX_NPC
EltheRoad_EventScript_VinosIdle_1:
# 641 "data/maps/EltheRoad/scripts.pory"
	release
	return

EltheRoad_EventScript_VinosIdle_2:
# 554 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_VinosNegotiationMain_Text_0, PORTRAIT_VINOS_MAD, PORTRAIT_DEFAULT_LEFT
# 555 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_EventScript_VinosIdle_Text_0, MSGBOX_AUTOCLOSE
	goto EltheRoad_EventScript_VinosIdle_1

EltheRoad_EventScript_VinosIdle_3:
# 560 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_VinosNegotiationMain_Text_0, PORTRAIT_VINOS_NEUTRAL
# 561 "data/maps/EltheRoad/scripts.pory"
	message EltheRoad_EventScript_VinosIdle_Text_1
# 562 "data/maps/EltheRoad/scripts.pory"
	waitmessage
# 563 "data/maps/EltheRoad/scripts.pory"
	special SpawnCameraObject
# 564 "data/maps/EltheRoad/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 565 "data/maps/EltheRoad/scripts.pory"
	switch VAR_RESULT
# 567 "data/maps/EltheRoad/scripts.pory"
	case DIR_EAST, EltheRoad_EventScript_VinosIdle_11
# 572 "data/maps/EltheRoad/scripts.pory"
	case DIR_NORTH, EltheRoad_EventScript_VinosIdle_12
EltheRoad_EventScript_VinosIdle_9:
# 576 "data/maps/EltheRoad/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, EltheRoad_Movement_CameraShowItem
# 577 "data/maps/EltheRoad/scripts.pory"
	waitmovement 0
# 578 "data/maps/EltheRoad/scripts.pory"
	message EltheRoad_EventScript_VinosIdle_Text_2
# 579 "data/maps/EltheRoad/scripts.pory"
	setmetatile 26, 20, 0x247, FALSE
# 580 "data/maps/EltheRoad/scripts.pory"
	special DrawWholeMapView
# 581 "data/maps/EltheRoad/scripts.pory"
	delay 16
# 582 "data/maps/EltheRoad/scripts.pory"
	setmetatile 26, 20, 0x20C, FALSE
# 583 "data/maps/EltheRoad/scripts.pory"
	special DrawWholeMapView
# 584 "data/maps/EltheRoad/scripts.pory"
	delay 16
# 585 "data/maps/EltheRoad/scripts.pory"
	setmetatile 26, 20, 0x247, FALSE
# 586 "data/maps/EltheRoad/scripts.pory"
	special DrawWholeMapView
# 587 "data/maps/EltheRoad/scripts.pory"
	delay 16
# 588 "data/maps/EltheRoad/scripts.pory"
	setmetatile 26, 20, 0x20C, FALSE
# 589 "data/maps/EltheRoad/scripts.pory"
	special DrawWholeMapView
# 590 "data/maps/EltheRoad/scripts.pory"
	delay 16
# 591 "data/maps/EltheRoad/scripts.pory"
	setmetatile 26, 20, 0x247, FALSE
# 592 "data/maps/EltheRoad/scripts.pory"
	special DrawWholeMapView
# 593 "data/maps/EltheRoad/scripts.pory"
	delay 16
# 594 "data/maps/EltheRoad/scripts.pory"
	setmetatile 26, 20, 0x20C, FALSE
# 595 "data/maps/EltheRoad/scripts.pory"
	special DrawWholeMapView
# 596 "data/maps/EltheRoad/scripts.pory"
	delay 16
# 597 "data/maps/EltheRoad/scripts.pory"
	waitbuttonpress
# 598 "data/maps/EltheRoad/scripts.pory"
	closemessage
# 599 "data/maps/EltheRoad/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, EltheRoad_Movement_CameraReturn
# 600 "data/maps/EltheRoad/scripts.pory"
	waitmovement 0
# 601 "data/maps/EltheRoad/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 602 "data/maps/EltheRoad/scripts.pory"
	switch VAR_RESULT
# 604 "data/maps/EltheRoad/scripts.pory"
	case DIR_EAST, EltheRoad_EventScript_VinosIdle_15
# 609 "data/maps/EltheRoad/scripts.pory"
	case DIR_NORTH, EltheRoad_EventScript_VinosIdle_16
EltheRoad_EventScript_VinosIdle_13:
# 615 "data/maps/EltheRoad/scripts.pory"
	special RemoveCameraObject
	goto EltheRoad_EventScript_VinosIdle_1

EltheRoad_EventScript_VinosIdle_4:
# 619 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_VinosNegotiationMain_Text_0, PORTRAIT_VINOS_NEUTRAL, PORTRAIT_DEFAULT_LEFT
# 620 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_EventScript_VinosIdle_Text_3
# 621 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_2, PORTRAIT_AMELIA_SERIOUSLY
# 622 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_EventScript_VinosIdle_Text_4
# 626 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_VinosNegotiationMain_Text_0, PORTRAIT_VINOS_NEUTRAL, PORTRAIT_DEFAULT_LEFT
# 627 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_EventScript_VinosIdle_Text_5
# 628 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_2, PORTRAIT_AMELIA_NEUTRAL
# 629 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_EventScript_VinosIdle_Text_6
# 630 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_VinosNegotiationMain_Text_0, PORTRAIT_VINOS_NEUTRAL, PORTRAIT_DEFAULT_LEFT
# 631 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_EventScript_VinosIdle_Text_7, MSGBOX_AUTOCLOSE
	goto EltheRoad_EventScript_VinosIdle_1

EltheRoad_EventScript_VinosIdle_11:
# 568 "data/maps/EltheRoad/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkRight
# 569 "data/maps/EltheRoad/scripts.pory"
	waitmovement 0
# 570 "data/maps/EltheRoad/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
# 571 "data/maps/EltheRoad/scripts.pory"
	waitmovement 0
	goto EltheRoad_EventScript_VinosIdle_9

EltheRoad_EventScript_VinosIdle_12:
# 573 "data/maps/EltheRoad/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp2
# 574 "data/maps/EltheRoad/scripts.pory"
	waitmovement 0
	goto EltheRoad_EventScript_VinosIdle_9

EltheRoad_EventScript_VinosIdle_15:
# 605 "data/maps/EltheRoad/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkDown
# 606 "data/maps/EltheRoad/scripts.pory"
	waitmovement 0
# 607 "data/maps/EltheRoad/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkLeft
# 608 "data/maps/EltheRoad/scripts.pory"
	waitmovement 0
	goto EltheRoad_EventScript_VinosIdle_13

EltheRoad_EventScript_VinosIdle_16:
# 610 "data/maps/EltheRoad/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkDown
# 611 "data/maps/EltheRoad/scripts.pory"
	waitmovement 0
# 612 "data/maps/EltheRoad/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkDown
# 613 "data/maps/EltheRoad/scripts.pory"
	waitmovement 0
	goto EltheRoad_EventScript_VinosIdle_13


EltheRoad_Trigger_VinosAltTrigger::
# 646 "data/maps/EltheRoad/scripts.pory"
	lock
# 647 "data/maps/EltheRoad/scripts.pory"
	playse SE_PIN
# 648 "data/maps/EltheRoad/scripts.pory"
	applymovement 3, Common_Movement_FaceLeft
# 649 "data/maps/EltheRoad/scripts.pory"
	waitmovement 0
# 650 "data/maps/EltheRoad/scripts.pory"
	applymovement 3, Common_Movement_ExclamationMark
# 651 "data/maps/EltheRoad/scripts.pory"
	waitmovement 0
# 652 "data/maps/EltheRoad/scripts.pory"
	delay 48
# 653 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_Trigger_VinosTrigger_Text_0, PORTRAIT_VINOS_MAD, PORTRAIT_DEFAULT_LEFT
# 654 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_Trigger_VinosAltTrigger_Text_0
# 655 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_2, PORTRAIT_AMELIA_NEUTRAL
# 656 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_Trigger_VinosAltTrigger_Text_1
# 657 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_Trigger_VinosTrigger_Text_0, PORTRAIT_VINOS_NEUTRAL, PORTRAIT_DEFAULT_LEFT
# 658 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_Trigger_VinosAltTrigger_Text_2
# 659 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_2, PORTRAIT_AMELIA_NEUTRAL
# 660 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_Trigger_VinosAltTrigger_Text_3
# 661 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_VinosNegotiationMain_Text_0, PORTRAIT_VINOS_NEUTRAL, PORTRAIT_DEFAULT_LEFT
# 662 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_Trigger_VinosAltTrigger_Text_4
# 664 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_2, PORTRAIT_AMELIA_SMUG
# 665 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_Trigger_VinosAltTrigger_Text_5
# 666 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_VinosNegotiationMain_Text_0, PORTRAIT_VINOS_NEUTRAL, PORTRAIT_DEFAULT_LEFT
# 667 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_Trigger_VinosAltTrigger_Text_6, MSGBOX_AUTOCLOSE
# 668 "data/maps/EltheRoad/scripts.pory"
	giveitem ITEM_EXP_CANDY_XL, 1
# 669 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_EventScript_FirstTrigger_Text_3, PORTRAIT_DEMIVEE_YAY
# 670 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_VinosNegotiationCompleteSuccess_Text_1
# 671 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_VinosNegotiationMain_Text_0, PORTRAIT_VINOS_NEUTRAL, PORTRAIT_DEFAULT_LEFT
# 672 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_VinosNegotiationCompleteSuccess_Text_2
# 674 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_2, PORTRAIT_AMELIA_NEUTRAL
# 675 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_VinosNegotiationCompleteSuccess_Text_3, MSGBOX_AUTOCLOSE
# 676 "data/maps/EltheRoad/scripts.pory"
	setvar VAR_MAIN_GAME_STATE, 3
# 677 "data/maps/EltheRoad/scripts.pory"
	setflag FLAG_TEMP_8
	return


EltheRoad_Trigger_Marcel_Right::
# 682 "data/maps/EltheRoad/scripts.pory"
	lock
# 683 "data/maps/EltheRoad/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkLeft
# 684 "data/maps/EltheRoad/scripts.pory"
	waitmovement 0
# 685 "data/maps/EltheRoad/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 686 "data/maps/EltheRoad/scripts.pory"
	waitmovement 0
# 687 "data/maps/EltheRoad/scripts.pory"
	playse SE_PIN
# 688 "data/maps/EltheRoad/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 689 "data/maps/EltheRoad/scripts.pory"
	waitmovement 0
# 690 "data/maps/EltheRoad/scripts.pory"
	delay 48
# 691 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_2, PORTRAIT_AMELIA_SHOCK
# 692 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_Trigger_Marcel_Right_Text_0, MSGBOX_AUTOCLOSE
# 693 "data/maps/EltheRoad/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, EltheRoad_Movement_AmeliaGoToMarcel
# 694 "data/maps/EltheRoad/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, EltheRoad_Movement_DemiveeGoToMarcel_Right
# 695 "data/maps/EltheRoad/scripts.pory"
	applymovement 5, Common_Movement_QuestionMark
# 696 "data/maps/EltheRoad/scripts.pory"
	waitmovement 5
# 697 "data/maps/EltheRoad/scripts.pory"
	applymovement 5, Common_Movement_WalkInPlaceFasterRight
# 698 "data/maps/EltheRoad/scripts.pory"
	waitmovement 5
# 699 "data/maps/EltheRoad/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 700 "data/maps/EltheRoad/scripts.pory"
	goto EltheRoad_Trigger_MarcelMain
	return


EltheRoad_Trigger_Marcel_Left::
# 705 "data/maps/EltheRoad/scripts.pory"
	lock
# 706 "data/maps/EltheRoad/scripts.pory"
	playse SE_PIN
# 707 "data/maps/EltheRoad/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 708 "data/maps/EltheRoad/scripts.pory"
	waitmovement 0
# 709 "data/maps/EltheRoad/scripts.pory"
	delay 48
# 710 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_2, PORTRAIT_AMELIA_SHOCK
# 711 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_Trigger_Marcel_Right_Text_0, MSGBOX_AUTOCLOSE
# 712 "data/maps/EltheRoad/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, EltheRoad_Movement_AmeliaGoToMarcel
# 713 "data/maps/EltheRoad/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, EltheRoad_Movement_DemiveeGoToMarcel_Left
# 714 "data/maps/EltheRoad/scripts.pory"
	applymovement 5, Common_Movement_QuestionMark
# 715 "data/maps/EltheRoad/scripts.pory"
	waitmovement 5
# 716 "data/maps/EltheRoad/scripts.pory"
	applymovement 5, Common_Movement_WalkInPlaceFasterRight
# 717 "data/maps/EltheRoad/scripts.pory"
	waitmovement 5
# 718 "data/maps/EltheRoad/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 719 "data/maps/EltheRoad/scripts.pory"
	goto EltheRoad_Trigger_MarcelMain
	return


EltheRoad_Trigger_MarcelMain::
# 724 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_2, PORTRAIT_AMELIA_NEUTRAL
# 725 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_Trigger_MarcelMain_Text_0
# 726 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_Trigger_MarcelMain_Text_1, PORTRAIT_KINGLER_NEUTRAL
# 727 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_Trigger_MarcelMain_Text_2
# 728 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_2, PORTRAIT_AMELIA_NEUTRAL
# 729 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_Trigger_MarcelMain_Text_3
# 730 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_EventScript_FirstTrigger_Text_3, PORTRAIT_DEMIVEE_HUH
# 731 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_Trigger_MarcelMain_Text_4
# 732 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_2, PORTRAIT_AMELIA_STRAINED
# 733 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_Trigger_MarcelMain_Text_5
# 734 "data/maps/EltheRoad/scripts.pory"
	applymovement 5, Common_Movement_WalkRight
# 735 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_Trigger_MarcelMain_Text_1, PORTRAIT_KINGLER_NEUTRAL
# 736 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_Trigger_MarcelMain_Text_6
# 737 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_EventScript_FirstTrigger_Text_3, PORTRAIT_DEMIVEE_NEUTRAL
# 738 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_Trigger_MarcelMain_Text_7
# 739 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_2, PORTRAIT_AMELIA_SHOCK
# 740 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_Trigger_MarcelMain_Text_8
# 741 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_Trigger_MarcelMain_Text_1, PORTRAIT_KINGLER_LAUGH
# 742 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_Trigger_MarcelMain_Text_9, MSGBOX_AUTOCLOSE
# 743 "data/maps/EltheRoad/scripts.pory"
	playse SE_PIN
# 744 "data/maps/EltheRoad/scripts.pory"
	applymovement 5, Common_Movement_ExclamationMark
# 745 "data/maps/EltheRoad/scripts.pory"
	waitmovement 0
# 746 "data/maps/EltheRoad/scripts.pory"
	delay 48
# 747 "data/maps/EltheRoad/scripts.pory"
	applymovement 5, EltheRoad_Movement_MarcelRunToAmelia
# 748 "data/maps/EltheRoad/scripts.pory"
	waitmovement 0
# 749 "data/maps/EltheRoad/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_EAST
# 750 "data/maps/EltheRoad/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, EltheRoad_Movement_DemiveeRunFromMarcel
# 751 "data/maps/EltheRoad/scripts.pory"
	playse SE_LEDGE
# 752 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_Trigger_MarcelMain_Text_1, PORTRAIT_KINGLER_NEUTRAL
# 753 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_Trigger_MarcelMain_Text_10
# 754 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_2, PORTRAIT_AMELIA_SHOCK
# 755 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_Trigger_MarcelMain_Text_11
# 756 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_Trigger_MarcelMain_Text_1, PORTRAIT_KINGLER_NEUTRAL
# 757 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_Trigger_MarcelMain_Text_12, MSGBOX_AUTOCLOSE
# 759 "data/maps/EltheRoad/scripts.pory"
	removeitem ITEM_GREAT_BALL, 1
# 760 "data/maps/EltheRoad/scripts.pory"
	delay 32
# 761 "data/maps/EltheRoad/scripts.pory"
	applymovement 5, EnterPokeballMovement
# 762 "data/maps/EltheRoad/scripts.pory"
	waitmovement 0
# 763 "data/maps/EltheRoad/scripts.pory"
	removeobject 5
# 764 "data/maps/EltheRoad/scripts.pory"
	delay 16
# 765 "data/maps/EltheRoad/scripts.pory"
	playfanfare MUS_EVOLVED
# 766 "data/maps/EltheRoad/scripts.pory"
	message EltheRoad_Trigger_MarcelMain_Text_13
# 767 "data/maps/EltheRoad/scripts.pory"
	waitmessage
# 768 "data/maps/EltheRoad/scripts.pory"
	waitfanfare
# 769 "data/maps/EltheRoad/scripts.pory"
	waitbuttonpress
# 770 "data/maps/EltheRoad/scripts.pory"
	closemessage
# 771 "data/maps/EltheRoad/scripts.pory"
	givemon SPECIES_KINGLER, 50, ITEM_SPLASH_PLATE, ITEM_GREAT_BALL, NATURE_QUIET, 1, MON_FEMALE, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_LIQUIDATION, MOVE_BODY_SLAM, MOVE_GUILLOTINE, MOVE_HAMMER_ARM, FALSE, FALSE, TYPE_DRAGON
# 772 "data/maps/EltheRoad/scripts.pory"
	setpartymemberinfo 1
# 773 "data/maps/EltheRoad/scripts.pory"
	setvar VAR_MAIN_GAME_STATE, 4
	return


EltheRoad_EventScript_TreeCleanupMan::
# 778 "data/maps/EltheRoad/scripts.pory"
	goto_if_set FLAG_TREES_CLEARED, EltheRoad_EventScript_TreeCleanupMan_1
# 785 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_EventScript_TreeCleanupMan_Text_0
# 786 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_EventScript_TreeCleanupMan_Text_2, MSGBOX_NPC
	return

EltheRoad_EventScript_TreeCleanupMan_1:
# 780 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_EventScript_TreeCleanupMan_Text_0
# 781 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_EventScript_TreeCleanupMan_Text_1, MSGBOX_NPC
	return


EltheRoad_EventScript_BerryFieldsSign::
# 792 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_EventScript_BerryFieldsSign_Text_0, MSGBOX_SIGN
	return


EltheRoad_BerrySpot_WeakBerries::
# 797 "data/maps/EltheRoad/scripts.pory"
	lock
# 798 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_BerrySpot_WeakBerries_Text_0, MSGBOX_YESNO
# 799 "data/maps/EltheRoad/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq EltheRoad_BerrySpot_WeakBerries_2
EltheRoad_BerrySpot_WeakBerries_1:
# 814 "data/maps/EltheRoad/scripts.pory"
	release
	return

EltheRoad_BerrySpot_WeakBerries_2:
# 801 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_BerrySpot_WeakBerries_Text_1
# 802 "data/maps/EltheRoad/scripts.pory"
	delay 32
# 803 "data/maps/EltheRoad/scripts.pory"
	random 3
# 804 "data/maps/EltheRoad/scripts.pory"
	switch VAR_RESULT
# 806 "data/maps/EltheRoad/scripts.pory"
	case 0, EltheRoad_BerrySpot_WeakBerries_5
# 808 "data/maps/EltheRoad/scripts.pory"
	case 1, EltheRoad_BerrySpot_WeakBerries_6
# 810 "data/maps/EltheRoad/scripts.pory"
	case 2, EltheRoad_BerrySpot_WeakBerries_7
	goto EltheRoad_BerrySpot_WeakBerries_1

EltheRoad_BerrySpot_WeakBerries_5:
# 807 "data/maps/EltheRoad/scripts.pory"
	giveitem ITEM_ORAN_BERRY
	goto EltheRoad_BerrySpot_WeakBerries_1

EltheRoad_BerrySpot_WeakBerries_6:
# 809 "data/maps/EltheRoad/scripts.pory"
	giveitem ITEM_CHERI_BERRY
	goto EltheRoad_BerrySpot_WeakBerries_1

EltheRoad_BerrySpot_WeakBerries_7:
# 811 "data/maps/EltheRoad/scripts.pory"
	giveitem ITEM_PERSIM_BERRY
	goto EltheRoad_BerrySpot_WeakBerries_1


EltheRoad_BerrySpot_StrongBerries::
# 819 "data/maps/EltheRoad/scripts.pory"
	lock
# 820 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_BerrySpot_WeakBerries_Text_0, MSGBOX_YESNO
# 821 "data/maps/EltheRoad/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq EltheRoad_BerrySpot_StrongBerries_2
EltheRoad_BerrySpot_StrongBerries_1:
# 836 "data/maps/EltheRoad/scripts.pory"
	release
	return

EltheRoad_BerrySpot_StrongBerries_2:
# 823 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_BerrySpot_WeakBerries_Text_1
# 824 "data/maps/EltheRoad/scripts.pory"
	delay 32
# 825 "data/maps/EltheRoad/scripts.pory"
	random 3
# 826 "data/maps/EltheRoad/scripts.pory"
	switch VAR_RESULT
# 828 "data/maps/EltheRoad/scripts.pory"
	case 0, EltheRoad_BerrySpot_StrongBerries_5
# 830 "data/maps/EltheRoad/scripts.pory"
	case 1, EltheRoad_BerrySpot_StrongBerries_6
# 832 "data/maps/EltheRoad/scripts.pory"
	case 2, EltheRoad_BerrySpot_StrongBerries_7
	goto EltheRoad_BerrySpot_StrongBerries_1

EltheRoad_BerrySpot_StrongBerries_5:
# 829 "data/maps/EltheRoad/scripts.pory"
	giveitem ITEM_SITRUS_BERRY
	goto EltheRoad_BerrySpot_StrongBerries_1

EltheRoad_BerrySpot_StrongBerries_6:
# 831 "data/maps/EltheRoad/scripts.pory"
	giveitem ITEM_LUM_BERRY
	goto EltheRoad_BerrySpot_StrongBerries_1

EltheRoad_BerrySpot_StrongBerries_7:
# 833 "data/maps/EltheRoad/scripts.pory"
	giveitem ITEM_LEPPA_BERRY
	goto EltheRoad_BerrySpot_StrongBerries_1


EltheRoad_BerrySpot_PinchBerries::
# 843 "data/maps/EltheRoad/scripts.pory"
	lock
# 844 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_BerrySpot_WeakBerries_Text_0, MSGBOX_YESNO
# 845 "data/maps/EltheRoad/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq EltheRoad_BerrySpot_PinchBerries_2
EltheRoad_BerrySpot_PinchBerries_1:
# 860 "data/maps/EltheRoad/scripts.pory"
	release
	return

EltheRoad_BerrySpot_PinchBerries_2:
# 847 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_BerrySpot_WeakBerries_Text_1
# 848 "data/maps/EltheRoad/scripts.pory"
	delay 32
# 849 "data/maps/EltheRoad/scripts.pory"
	random 3
# 850 "data/maps/EltheRoad/scripts.pory"
	switch VAR_RESULT
# 852 "data/maps/EltheRoad/scripts.pory"
	case 0, EltheRoad_BerrySpot_PinchBerries_5
# 854 "data/maps/EltheRoad/scripts.pory"
	case 1, EltheRoad_BerrySpot_PinchBerries_6
# 856 "data/maps/EltheRoad/scripts.pory"
	case 2, EltheRoad_BerrySpot_PinchBerries_7
	goto EltheRoad_BerrySpot_PinchBerries_1

EltheRoad_BerrySpot_PinchBerries_5:
# 853 "data/maps/EltheRoad/scripts.pory"
	giveitem ITEM_LIECHI_BERRY
	goto EltheRoad_BerrySpot_PinchBerries_1

EltheRoad_BerrySpot_PinchBerries_6:
# 855 "data/maps/EltheRoad/scripts.pory"
	giveitem ITEM_SALAC_BERRY
	goto EltheRoad_BerrySpot_PinchBerries_1

EltheRoad_BerrySpot_PinchBerries_7:
# 857 "data/maps/EltheRoad/scripts.pory"
	giveitem ITEM_PETAYA_BERRY
	goto EltheRoad_BerrySpot_PinchBerries_1


EltheRoad_BerrySpot_PlotBerries::
# 867 "data/maps/EltheRoad/scripts.pory"
	lock
# 868 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_BerrySpot_WeakBerries_Text_0, MSGBOX_YESNO
# 869 "data/maps/EltheRoad/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq EltheRoad_BerrySpot_PlotBerries_2
EltheRoad_BerrySpot_PlotBerries_1:
# 884 "data/maps/EltheRoad/scripts.pory"
	release
	return

EltheRoad_BerrySpot_PlotBerries_2:
# 871 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_BerrySpot_WeakBerries_Text_1
# 872 "data/maps/EltheRoad/scripts.pory"
	delay 32
# 873 "data/maps/EltheRoad/scripts.pory"
	random 3
# 874 "data/maps/EltheRoad/scripts.pory"
	switch VAR_RESULT
# 876 "data/maps/EltheRoad/scripts.pory"
	case 0, EltheRoad_BerrySpot_PlotBerries_5
# 878 "data/maps/EltheRoad/scripts.pory"
	case 1, EltheRoad_BerrySpot_PlotBerries_6
# 880 "data/maps/EltheRoad/scripts.pory"
	case 2, EltheRoad_BerrySpot_PlotBerries_7
	goto EltheRoad_BerrySpot_PlotBerries_1

EltheRoad_BerrySpot_PlotBerries_5:
# 877 "data/maps/EltheRoad/scripts.pory"
	giveitem ITEM_SPELON_BERRY
	goto EltheRoad_BerrySpot_PlotBerries_1

EltheRoad_BerrySpot_PlotBerries_6:
# 879 "data/maps/EltheRoad/scripts.pory"
	giveitem ITEM_WATMEL_BERRY
	goto EltheRoad_BerrySpot_PlotBerries_1

EltheRoad_BerrySpot_PlotBerries_7:
# 881 "data/maps/EltheRoad/scripts.pory"
	giveitem ITEM_BELUE_BERRY
	goto EltheRoad_BerrySpot_PlotBerries_1


# 888 "data/maps/EltheRoad/scripts.pory"
EltheRoad_Movement_DemiveeRunFromMarcel:
# 890 "data/maps/EltheRoad/scripts.pory"
	lock_facing_direction
# 891 "data/maps/EltheRoad/scripts.pory"
	jump_down
# 892 "data/maps/EltheRoad/scripts.pory"
	unlock_facing_direction
# 893 "data/maps/EltheRoad/scripts.pory"
	delay_16
# 893 "data/maps/EltheRoad/scripts.pory"
	delay_16
# 894 "data/maps/EltheRoad/scripts.pory"
	walk_fast_left
# 894 "data/maps/EltheRoad/scripts.pory"
	walk_fast_left
# 895 "data/maps/EltheRoad/scripts.pory"
	walk_fast_up
# 896 "data/maps/EltheRoad/scripts.pory"
	face_right
	step_end

# 899 "data/maps/EltheRoad/scripts.pory"
EltheRoad_Movement_MarcelRunToAmelia:
# 901 "data/maps/EltheRoad/scripts.pory"
	walk_fast_down
# 901 "data/maps/EltheRoad/scripts.pory"
	walk_fast_down
	step_end

# 904 "data/maps/EltheRoad/scripts.pory"
EltheRoad_Movement_AmeliaGoToMarcel:
# 906 "data/maps/EltheRoad/scripts.pory"
	walk_fast_up
# 906 "data/maps/EltheRoad/scripts.pory"
	walk_fast_up
	step_end

# 909 "data/maps/EltheRoad/scripts.pory"
EltheRoad_Movement_DemiveeGoToMarcel_Left:
# 911 "data/maps/EltheRoad/scripts.pory"
	walk_slow_up
# 911 "data/maps/EltheRoad/scripts.pory"
	walk_slow_up
# 912 "data/maps/EltheRoad/scripts.pory"
	walk_slow_right
# 913 "data/maps/EltheRoad/scripts.pory"
	walk_slow_up
	step_end

# 916 "data/maps/EltheRoad/scripts.pory"
EltheRoad_Movement_DemiveeGoToMarcel_Right:
# 918 "data/maps/EltheRoad/scripts.pory"
	walk_slow_up
# 918 "data/maps/EltheRoad/scripts.pory"
	walk_slow_up
	step_end

# 921 "data/maps/EltheRoad/scripts.pory"
EltheRoad_Movement_CameraShowItem:
# 923 "data/maps/EltheRoad/scripts.pory"
	walk_up
# 923 "data/maps/EltheRoad/scripts.pory"
	walk_up
# 923 "data/maps/EltheRoad/scripts.pory"
	walk_up
# 924 "data/maps/EltheRoad/scripts.pory"
	walk_right
	step_end

# 927 "data/maps/EltheRoad/scripts.pory"
EltheRoad_Movement_CameraReturn:
# 929 "data/maps/EltheRoad/scripts.pory"
	walk_left
# 930 "data/maps/EltheRoad/scripts.pory"
	walk_down
# 930 "data/maps/EltheRoad/scripts.pory"
	walk_down
# 930 "data/maps/EltheRoad/scripts.pory"
	walk_down
	step_end

# 933 "data/maps/EltheRoad/scripts.pory"
EltheRoad_Movement_AmeliaJumpUp:
# 935 "data/maps/EltheRoad/scripts.pory"
	set_visible
# 936 "data/maps/EltheRoad/scripts.pory"
	jump_in_place_left
	step_end

# 939 "data/maps/EltheRoad/scripts.pory"
EltheRoad_Movement_AmeliaLookAround:
# 941 "data/maps/EltheRoad/scripts.pory"
	face_up
# 942 "data/maps/EltheRoad/scripts.pory"
	delay_16
# 943 "data/maps/EltheRoad/scripts.pory"
	face_down
# 944 "data/maps/EltheRoad/scripts.pory"
	delay_16
# 945 "data/maps/EltheRoad/scripts.pory"
	face_up
# 946 "data/maps/EltheRoad/scripts.pory"
	delay_16
# 947 "data/maps/EltheRoad/scripts.pory"
	face_down
# 948 "data/maps/EltheRoad/scripts.pory"
	delay_16
# 949 "data/maps/EltheRoad/scripts.pory"
	face_right
# 950 "data/maps/EltheRoad/scripts.pory"
	delay_16
# 950 "data/maps/EltheRoad/scripts.pory"
	delay_16
# 950 "data/maps/EltheRoad/scripts.pory"
	delay_16
# 951 "data/maps/EltheRoad/scripts.pory"
	face_left
# 952 "data/maps/EltheRoad/scripts.pory"
	delay_16
# 952 "data/maps/EltheRoad/scripts.pory"
	delay_16
# 952 "data/maps/EltheRoad/scripts.pory"
	delay_16
	step_end

# 955 "data/maps/EltheRoad/scripts.pory"
EltheRoad_Movement_AmeliaStartLeaving:
# 957 "data/maps/EltheRoad/scripts.pory"
	walk_up
# 957 "data/maps/EltheRoad/scripts.pory"
	walk_up
# 958 "data/maps/EltheRoad/scripts.pory"
	walk_right
# 958 "data/maps/EltheRoad/scripts.pory"
	walk_right
# 958 "data/maps/EltheRoad/scripts.pory"
	walk_right
# 959 "data/maps/EltheRoad/scripts.pory"
	delay_16
# 959 "data/maps/EltheRoad/scripts.pory"
	delay_16
# 960 "data/maps/EltheRoad/scripts.pory"
	face_left
	step_end

# 963 "data/maps/EltheRoad/scripts.pory"
EltheRoad_Movement_DemiveeFollow:
# 965 "data/maps/EltheRoad/scripts.pory"
	jump_up
# 966 "data/maps/EltheRoad/scripts.pory"
	walk_fast_up
# 967 "data/maps/EltheRoad/scripts.pory"
	walk_fast_right
# 967 "data/maps/EltheRoad/scripts.pory"
	walk_fast_right
	step_end

# 970 "data/maps/EltheRoad/scripts.pory"
EltheRoad_Movement_DemiveeJoin:
# 972 "data/maps/EltheRoad/scripts.pory"
	walk_slow_right
# 973 "data/maps/EltheRoad/scripts.pory"
	enter_pokeball
	step_end

# 976 "data/maps/EltheRoad/scripts.pory"
EltheRoad_Movement_VinosGetOnLog:
# 978 "data/maps/EltheRoad/scripts.pory"
	walk_fast_right
# 979 "data/maps/EltheRoad/scripts.pory"
	jump_right
# 980 "data/maps/EltheRoad/scripts.pory"
	face_down
	step_end

EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_0:
# 17 "data/maps/EltheRoad/scripts.pory"
	.string "???$"

EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_1:
# 18 "data/maps/EltheRoad/scripts.pory"
	.string "Wait…is it alive…?$"

EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_2:
# 21 "data/maps/EltheRoad/scripts.pory"
	.string "Amelia$"

EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_3:
# 22 "data/maps/EltheRoad/scripts.pory"
	.string "…yes, I am. Personal space?$"

EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_4:
# 23 "data/maps/EltheRoad/scripts.pory"
	.string "Eevee?$"

EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_5:
# 24 "data/maps/EltheRoad/scripts.pory"
	.string "Oh, sorry. I was thinking about\n"
	.string "eating you, but I guess I won't now.$"

EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_6:
# 40 "data/maps/EltheRoad/scripts.pory"
	.string "Dude! Seriously?$"

EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_7:
# 42 "data/maps/EltheRoad/scripts.pory"
	.string "You got tossed around unconscious in\n"
	.string "a flood! How'd you survive, anyway?$"

EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_8:
# 44 "data/maps/EltheRoad/scripts.pory"
	.string "I'm made of tough stuff. It takes\n"
	.string "more than a little water to…$"

EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_9:
# 55 "data/maps/EltheRoad/scripts.pory"
	.string "The flood! What happened to my team?$"

EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_10:
# 59 "data/maps/EltheRoad/scripts.pory"
	.string "My team…ugh, my head. I can't think.$"

EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_11:
# 61 "data/maps/EltheRoad/scripts.pory"
	.string "I have their Poké Balls here.\n"
	.string "Guess I should go find them.$"

EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_12:
# 69 "data/maps/EltheRoad/scripts.pory"
	.string "Wait! You shouldn't go alone.$"

EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_13:
# 74 "data/maps/EltheRoad/scripts.pory"
	.string "The local Pokémon are always testy\n"
	.string "after a flood.\p"
	.string "It's dangerous for a human to go\n"
	.string "alone. Take me!$"

EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_14:
# 76 "data/maps/EltheRoad/scripts.pory"
	.string "I can handle myself pretty well.\n"
	.string "And I'm a Pokémon Ranger, too.$"

EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_15:
# 78 "data/maps/EltheRoad/scripts.pory"
	.string "But if you want to come along,\n"
	.string "I won't say no. Welcome aboard!$"

EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_16:
# 84 "data/maps/EltheRoad/scripts.pory"
	.string "Eevee joined your party!$"

EltheRoad_EventScript_FirstTrigger_Text_0:
# 109 "data/maps/EltheRoad/scripts.pory"
	.string "I meant to ask earlier, but, uh,\n"
	.string "what are you, exactly?\p"
	.string "You look like an Eevee, but those\n"
	.string "markings…are they natural?$"

EltheRoad_EventScript_FirstTrigger_Text_1:
# 111 "data/maps/EltheRoad/scripts.pory"
	.string "Uh, I dunno! I used to be normal,\n"
	.string "but I like to eat these crystals…\l"
	.string "I think I got these markings after\l"
	.string "I started doing that.\p"
	.string "Now when I touch an evolution stone,\n"
	.string "I don't evolve, but…\p"
	.string "It changes my type, I think.\n"
	.string "And my moves.$"

EltheRoad_EventScript_FirstTrigger_Text_2:
# 115 "data/maps/EltheRoad/scripts.pory"
	.string "So you're some kind of…Demi-Vee?$"

EltheRoad_EventScript_FirstTrigger_Text_3:
# 117 "data/maps/EltheRoad/scripts.pory"
	.string "Demi-Vee$"

EltheRoad_EventScript_FirstTrigger_Text_4:
# 118 "data/maps/EltheRoad/scripts.pory"
	.string "Huh?$"

EltheRoad_EventScript_FirstTrigger_Text_5:
# 120 "data/maps/EltheRoad/scripts.pory"
	.string "Um, anyway! If you find any cool\n"
	.string "crystals, give them to me!\l"
	.string "They'll make me stronger in battle.\p"
	.string "And if you need any advice for\n"
	.string "getting around, just ask me!\l"
	.string "I know this place pretty well!$"

EltheRoad_EventScript_FirstTrigger_Text_6:
# 123 "data/maps/EltheRoad/scripts.pory"
	.string "(Press the Select button or talk to\n"
	.string "Demi-Vee to get advice!)\p"
	.string "(He can give you hints about how to\n"
	.string "progress through the game.)$"

EltheRoad_EventScript_DemiveeTutorialSign_Text_0:
# 130 "data/maps/EltheRoad/scripts.pory"
	.string "{EMPHASIS_RED}!! NON-DIEGETIC SIGN ALERT !!{EMPHASIS_OFF}\p"
	.string "This sign does not really exist!\n"
	.string "It is just here to help you, Player.\p"
	.string "Your new companion is a very\n"
	.string "unique Pokémon. He doesn't grow\l"
	.string "in the way you're used to.\p"
	.string "If you want to make the best of his\n"
	.string "unique traits, read on.$"

EltheRoad_EventScript_DemiveeTutorialMultichoice_Text_0:
# 138 "data/maps/EltheRoad/scripts.pory"
	.string "What would you like to read about?$"

EltheRoad_EventScript_DemiveeTutorialMultichoice_Text_1:
# 140 "data/maps/EltheRoad/scripts.pory"
	.string "Forms$"

EltheRoad_EventScript_DemiveeTutorialMultichoice_Text_2:
# 140 "data/maps/EltheRoad/scripts.pory"
	.string "Shards$"

EltheRoad_EventScript_DemiveeTutorialMultichoice_Text_3:
# 140 "data/maps/EltheRoad/scripts.pory"
	.string "Leveling Up$"

EltheRoad_EventScript_DemiveeTutorialMultichoice_Text_4:
# 140 "data/maps/EltheRoad/scripts.pory"
	.string "Stat Points$"

EltheRoad_EventScript_DemiveeTutorialMultichoice_Text_5:
# 140 "data/maps/EltheRoad/scripts.pory"
	.string "Learning Skills$"

EltheRoad_EventScript_DemiveeTutorialMultichoice_Text_6:
# 140 "data/maps/EltheRoad/scripts.pory"
	.string "Stop Reading$"

EltheRoad_EventScript_DemiveeTutorialMultichoice_Text_7:
# 144 "data/maps/EltheRoad/scripts.pory"
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
# 150 "data/maps/EltheRoad/scripts.pory"
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
# 156 "data/maps/EltheRoad/scripts.pory"
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
# 161 "data/maps/EltheRoad/scripts.pory"
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
# 166 "data/maps/EltheRoad/scripts.pory"
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
# 182 "data/maps/EltheRoad/scripts.pory"
	.string "{CLEAR_TO 60}{LEFT_ARROW} To Rehocan Town\n"
	.string "{CLEAR_TO 76}To Elthe City {RIGHT_ARROW}$"

EltheRoad_Trigger_VinosTrigger_Text_0:
# 195 "data/maps/EltheRoad/scripts.pory"
	.string "Vine Mon$"

EltheRoad_Trigger_VinosTrigger_Text_1:
# 196 "data/maps/EltheRoad/scripts.pory"
	.string "Ugh…stupid flood.\n"
	.string "Washed away a perfect lurking spot.$"

EltheRoad_Trigger_VinosTrigger_Text_2:
# 205 "data/maps/EltheRoad/scripts.pory"
	.string "The Pokémon hasn't noticed you…\n"
	.string "What will you do?$"

EltheRoad_Trigger_VinosTrigger_Text_3:
# 207 "data/maps/EltheRoad/scripts.pory"
	.string "Negotiate$"

EltheRoad_Trigger_VinosTrigger_Text_4:
# 207 "data/maps/EltheRoad/scripts.pory"
	.string "Attack$"

EltheRoad_Trigger_VinosTrigger_Text_5:
# 212 "data/maps/EltheRoad/scripts.pory"
	.string "Excuse me…$"

EltheRoad_Trigger_VinosTrigger_Text_6:
# 220 "data/maps/EltheRoad/scripts.pory"
	.string "What? A human speaks to me…$"

EltheRoad_Trigger_VinosTrigger_Text_7:
# 222 "data/maps/EltheRoad/scripts.pory"
	.string "Do you mind if I pass through here?$"

EltheRoad_Trigger_VinosTrigger_Text_8:
# 228 "data/maps/EltheRoad/scripts.pory"
	.string "You're asking my permission? As if you\n"
	.string "can understand my speech?$"

EltheRoad_Trigger_VinosTrigger_Text_9:
# 230 "data/maps/EltheRoad/scripts.pory"
	.string "Yeah, I can. It's kinda my thing.\n"
	.string "Let's talk this out.$"

EltheRoad_Trigger_VinosTrigger_Text_10:
# 232 "data/maps/EltheRoad/scripts.pory"
	.string "Fascinating…this may be an interesting\n"
	.string "exercise. I am Vinos. Let us begin.$"

EltheRoad_Trigger_VinosTrigger_Text_11:
# 234 "data/maps/EltheRoad/scripts.pory"
	.string "Try to make Vinos happy so it'll\n"
	.string "you pass through! It will ask you\l"
	.string "a series of questions.\p"
	.string "If you make Vinos angry, it may\n"
	.string "decide to attack you instead.\p"
	.string "If it likes your answers, you may\n"
	.string "get a gift as well.$"

EltheRoad_Trigger_VinosTrigger_Text_12:
# 241 "data/maps/EltheRoad/scripts.pory"
	.string "Demi-Vee, attack!$"

EltheRoad_Trigger_VinosTrigger_Text_13:
# 248 "data/maps/EltheRoad/scripts.pory"
	.string "What!? You -$"

EltheRoad_VinosNegotiationMain_Text_0:
# 256 "data/maps/EltheRoad/scripts.pory"
	.string "Vinos$"

EltheRoad_VinosNegotiationMain_Text_1:
# 257 "data/maps/EltheRoad/scripts.pory"
	.string "Alright, then…$"

EltheRoad_VinosNegotiationMain_Text_2:
# 271 "data/maps/EltheRoad/scripts.pory"
	.string "Dark$"

EltheRoad_VinosNegotiationMain_Text_3:
# 272 "data/maps/EltheRoad/scripts.pory"
	.string "Grass$"

EltheRoad_VinosNegotiationMain_Text_4:
# 273 "data/maps/EltheRoad/scripts.pory"
	.string "Fire$"

EltheRoad_VinosNegotiationMain_Text_5:
# 274 "data/maps/EltheRoad/scripts.pory"
	.string "Which Type of Pokémon is best,\n"
	.string "in your opinion?$"

EltheRoad_VinosNegotiationMain_Text_6:
# 281 "data/maps/EltheRoad/scripts.pory"
	.string "It's, uh…Grass. Yeah. I just love\n"
	.string "Grass type Pokémon…\p"
	.string "… … … … …$"

EltheRoad_VinosNegotiationMain_Text_7:
# 283 "data/maps/EltheRoad/scripts.pory"
	.string "You know what, no, I can't even f{CENSOR}uck{UNCENSOR}ing\n"
	.string "joke about it. All the major\l"
	.string "terrible events in my life were\l"
	.string "caused by Grass types.\l"
	.string "F{CENSOR}uck{UNCENSOR} Grass types. I hate 'em.$"

EltheRoad_VinosNegotiationMain_Text_8:
# 286 "data/maps/EltheRoad/scripts.pory"
	.string "You'd disrespect me to my face…\n"
	.string "You have some nerve, human.$"

EltheRoad_VinosNegotiationMain_Text_9:
# 295 "data/maps/EltheRoad/scripts.pory"
	.string "Oh, Dark is the best, obviously!$"

EltheRoad_VinosNegotiationMain_Text_10:
# 297 "data/maps/EltheRoad/scripts.pory"
	.string "Hmmhmm, yes, we are quite…\n"
	.string "Wait! You're just buttering me up!$"

EltheRoad_VinosNegotiationMain_Text_11:
# 299 "data/maps/EltheRoad/scripts.pory"
	.string "No way! I'm being honest! Some of my\n"
	.string "best friends are Dark types!$"

EltheRoad_VinosNegotiationMain_Text_12:
# 301 "data/maps/EltheRoad/scripts.pory"
	.string "…Well, alright. It's a good answer.$"

EltheRoad_VinosNegotiationMain_Text_13:
# 305 "data/maps/EltheRoad/scripts.pory"
	.string "Hmm…I think it must be Fire.\n"
	.string "It's just such a cool element.$"

EltheRoad_VinosNegotiationMain_Text_14:
# 307 "data/maps/EltheRoad/scripts.pory"
	.string "Plus, I was a Fire type for a while,\n"
	.string "myself. Self love, yo!$"

EltheRoad_VinosNegotiationMain_Text_15:
# 309 "data/maps/EltheRoad/scripts.pory"
	.string "You have some nerve, telling a Grass\n"
	.string "type that Fire is best…\p"
	.string "But I appreciate your honesty.\n"
	.string "The time for tricks has passed.$"

EltheRoad_VinosNegotiationMain_Text_16:
# 316 "data/maps/EltheRoad/scripts.pory"
	.string "Your berries?$"

EltheRoad_VinosNegotiationMain_Text_17:
# 317 "data/maps/EltheRoad/scripts.pory"
	.string "Eat trail mix$"

EltheRoad_VinosNegotiationMain_Text_18:
# 318 "data/maps/EltheRoad/scripts.pory"
	.string "Just eat it$"

EltheRoad_VinosNegotiationMain_Text_19:
# 319 "data/maps/EltheRoad/scripts.pory"
	.string "Would you like to eat\n"
	.string "one of my berries?$"

EltheRoad_VinosNegotiationMain_Text_20:
# 327 "data/maps/EltheRoad/scripts.pory"
	.string "Ooh, I'll take one!$"

EltheRoad_VinosNegotiationMain_Text_21:
# 330 "data/maps/EltheRoad/scripts.pory"
	.string "Urp…$"

EltheRoad_VinosNegotiationMain_Text_22:
# 332 "data/maps/EltheRoad/scripts.pory"
	.string "Ha! What an idiot! You didn't even\n"
	.string "fall for my camouflage, but you\l"
	.string "still ate my paralyzing berries!\l"
	.string "You're mine!$"

EltheRoad_VinosNegotiationMain_Text_23:
# 337 "data/maps/EltheRoad/scripts.pory"
	.string "Berries? They grow on your body?\n"
	.string "And you…WANT us to eat them?$"

EltheRoad_VinosNegotiationMain_Text_24:
# 339 "data/maps/EltheRoad/scripts.pory"
	.string "Well…yes. They're delicious.\n"
	.string "Or so I'm told.$"

EltheRoad_VinosNegotiationMain_Text_25:
# 341 "data/maps/EltheRoad/scripts.pory"
	.string "What about the ones that your eyes\n"
	.string "are on? Are they edible?$"

EltheRoad_VinosNegotiationMain_Text_26:
# 343 "data/maps/EltheRoad/scripts.pory"
	.string "No, they're…my eyes. Not berries.$"

EltheRoad_VinosNegotiationMain_Text_27:
# 345 "data/maps/EltheRoad/scripts.pory"
	.string "Has anyone ever tried to pick your\n"
	.string "eyes instead of a berry?$"

EltheRoad_VinosNegotiationMain_Text_28:
# 347 "data/maps/EltheRoad/scripts.pory"
	.string "Look, are you gonna eat a berry\n"
	.string "or not!?$"

EltheRoad_VinosNegotiationMain_Text_29:
# 349 "data/maps/EltheRoad/scripts.pory"
	.string "Nope.$"

EltheRoad_VinosNegotiationMain_Text_30:
# 351 "data/maps/EltheRoad/scripts.pory"
	.string "… … … … … … … … … …\p"
	.string "Okay, forget it. Next question.$"

EltheRoad_VinosNegotiationMain_Text_31:
# 355 "data/maps/EltheRoad/scripts.pory"
	.string "Oh, that reminds me I have…$"

EltheRoad_VinosNegotiationMain_Text_32:
# 357 "data/maps/EltheRoad/scripts.pory"
	.string "Trail mix!$"

EltheRoad_VinosNegotiationMain_Text_33:
# 359 "data/maps/EltheRoad/scripts.pory"
	.string "… … … … …\p"
	.string "Your ways confuse me, human.\n"
	.string "I would like to stop talking to you.$"

EltheRoad_VinosNegotiationMain_Text_34:
# 366 "data/maps/EltheRoad/scripts.pory"
	.string "To get my team back$"

EltheRoad_VinosNegotiationMain_Text_35:
# 367 "data/maps/EltheRoad/scripts.pory"
	.string "For thrills$"

EltheRoad_VinosNegotiationMain_Text_36:
# 368 "data/maps/EltheRoad/scripts.pory"
	.string "I don't want to fight$"

EltheRoad_VinosNegotiationMain_Text_37:
# 369 "data/maps/EltheRoad/scripts.pory"
	.string "Why should I let you through?$"

EltheRoad_VinosNegotiationMain_Text_38:
# 376 "data/maps/EltheRoad/scripts.pory"
	.string "I need to get my team back! We got\n"
	.string "separated by the flood.\p"
	.string "I'm their Trainer.\n"
	.string "We need each other.$"

EltheRoad_VinosNegotiationMain_Text_39:
# 378 "data/maps/EltheRoad/scripts.pory"
	.string "Why is that my problem?\n"
	.string "I'm hungry.$"

EltheRoad_VinosNegotiationMain_Text_40:
# 380 "data/maps/EltheRoad/scripts.pory"
	.string "Hungr- were you planning to eat me!?$"

EltheRoad_VinosNegotiationMain_Text_41:
# 382 "data/maps/EltheRoad/scripts.pory"
	.string "No. I was just giving an example of\n"
	.string "something that's not your problem.$"

EltheRoad_VinosNegotiationMain_Text_42:
# 391 "data/maps/EltheRoad/scripts.pory"
	.string "There's no reason for us to fight.\n"
	.string "Look at this place, it's a mess.\p"
	.string "Just let me move on to take care of\n"
	.string "my business, and you can get back\l"
	.string "to finding a new tree, or whatever\l"
	.string "it is you're doing.$"

EltheRoad_VinosNegotiationMain_Text_43:
# 395 "data/maps/EltheRoad/scripts.pory"
	.string "Pokémon don't need a reason to\n"
	.string "fight…but now that you mention it,\l"
	.string "it does sound like a waste\l"
	.string "of time right now…$"

EltheRoad_VinosNegotiationMain_Text_44:
# 400 "data/maps/EltheRoad/scripts.pory"
	.string "I bet you fight every Trainer who\n"
	.string "comes through here, right?\p"
	.string "Wouldn't it be a thrill to let\n"
	.string "one pass through, just this once?\l"
	.string "Get a little crazy with it.$"

EltheRoad_VinosNegotiationMain_Text_45:
# 404 "data/maps/EltheRoad/scripts.pory"
	.string "Hmm…perhaps under the circumstances,\n"
	.string "it would serve me better…$"

EltheRoad_VinosNegotiationMain_Text_46:
# 410 "data/maps/EltheRoad/scripts.pory"
	.string "Thirty years$"

EltheRoad_VinosNegotiationMain_Text_47:
# 411 "data/maps/EltheRoad/scripts.pory"
	.string "Long enough$"

EltheRoad_VinosNegotiationMain_Text_48:
# 412 "data/maps/EltheRoad/scripts.pory"
	.string "Just started$"

EltheRoad_VinosNegotiationMain_Text_49:
# 413 "data/maps/EltheRoad/scripts.pory"
	.string "How long has it been since you\n"
	.string "started training Pokémon?$"

EltheRoad_VinosNegotiationMain_Text_50:
# 420 "data/maps/EltheRoad/scripts.pory"
	.string "Hmm, well me and Demi-Vee just met,\n"
	.string "so I guess I just started.$"

EltheRoad_VinosNegotiationMain_Text_51:
# 422 "data/maps/EltheRoad/scripts.pory"
	.string "No wonder you tried talking. You\n"
	.string "have no idea what you're doing.$"

EltheRoad_VinosNegotiationMain_Text_52:
# 431 "data/maps/EltheRoad/scripts.pory"
	.string "Let me think…Python's last birthday\n"
	.string "was, uh…\p"
	.string "Hmm, I can't remember exactly, but\n"
	.string "I think I started in the year…\p"
	.string "So, it must have been at least\n"
	.string "thirty years.$"

EltheRoad_VinosNegotiationMain_Text_53:
# 435 "data/maps/EltheRoad/scripts.pory"
	.string "You expect me to believe that?\n"
	.string "You don't even look like you're\l"
	.string "thirty years old. You're just\l"
	.string "trying to intimidate me.$"

EltheRoad_VinosNegotiationMain_Text_54:
# 438 "data/maps/EltheRoad/scripts.pory"
	.string "It's true, though…$"

EltheRoad_VinosNegotiationMain_Text_55:
# 442 "data/maps/EltheRoad/scripts.pory"
	.string "Long enough.$"

EltheRoad_VinosNegotiationMain_Text_56:
# 444 "data/maps/EltheRoad/scripts.pory"
	.string "…!$"

EltheRoad_VinosNegotiationMain_Text_57:
# 462 "data/maps/EltheRoad/scripts.pory"
	.string "You're getting on my nerves…\p"
	.string "Enough talk! I should have done this\n"
	.string "from the beginning!$"

EltheRoad_VinosNegotiationMidSuccess_Text_0:
# 476 "data/maps/EltheRoad/scripts.pory"
	.string "…well, I suppose you're not wholly\n"
	.string "unpleasant. And I don't feel like\l"
	.string "jumping you anymore anyway.\l"
	.string "You can pass.\p"
	.string "And here, take this. I have no\n"
	.string "use for it anyway.$"

EltheRoad_VinosNegotiationMidSuccess_Text_1:
# 481 "data/maps/EltheRoad/scripts.pory"
	.string "Ooh! A crystal! Yummy!$"

EltheRoad_VinosNegotiationMidSuccess_Text_2:
# 483 "data/maps/EltheRoad/scripts.pory"
	.string "Run along, now.$"

EltheRoad_VinosNegotiationMidSuccess_Text_3:
# 485 "data/maps/EltheRoad/scripts.pory"
	.string "Okay, then. Thanks for your\n"
	.string "patience. Buh-bye!$"

EltheRoad_VinosNegotiationCompleteSuccess_Text_0:
# 494 "data/maps/EltheRoad/scripts.pory"
	.string "Hmm. That was a nice change of pace.\n"
	.string "Rarely do I speak even to those of\l"
	.string "my own kind. Even rarer to speak to\l"
	.string "a human as an equal.\p"
	.string "Here. Take this as a token\n"
	.string "of my appreciation.$"

EltheRoad_VinosNegotiationCompleteSuccess_Text_1:
# 498 "data/maps/EltheRoad/scripts.pory"
	.string "Ooh! A huge crystal! Yummy!\n"
	.string "I'll save it for later!$"

EltheRoad_VinosNegotiationCompleteSuccess_Text_2:
# 500 "data/maps/EltheRoad/scripts.pory"
	.string "I saw another such crystal a bit further\n"
	.string "up the path, behind a tree. A red one.\p"
	.string "Look for it if it interests you.\n"
	.string "Keep yourself safe.$"

EltheRoad_VinosNegotiationCompleteSuccess_Text_3:
# 503 "data/maps/EltheRoad/scripts.pory"
	.string "Okay, thanks for the tip!\n"
	.string "See you around, Vinos!$"

EltheRoad_VinosDoBattle_Text_0:
# 515 "data/maps/EltheRoad/scripts.pory"
	.string "… … … … …\p"
	.string "…well? Aren't you going to\n"
	.string "finish me off?$"

EltheRoad_VinosDoBattle_Text_1:
# 517 "data/maps/EltheRoad/scripts.pory"
	.string "What? No. I only wanted to get\n"
	.string "through here.$"

EltheRoad_VinosDoBattle_Text_2:
# 519 "data/maps/EltheRoad/scripts.pory"
	.string "…Oh.$"

EltheRoad_VinosDoBattle_Text_3:
# 527 "data/maps/EltheRoad/scripts.pory"
	.string "Well, go along then! And if it\n"
	.string "will get you to leave me alone,\l"
	.string "then take this!$"

EltheRoad_VinosDoBattle_Text_4:
# 532 "data/maps/EltheRoad/scripts.pory"
	.string "Those things are all over the\n"
	.string "place here. I think I saw another\l"
	.string "type of crystal next to that stump\l"
	.string "behind me.\p"
	.string "Run along, then.$"

EltheRoad_EventScript_VinosIdle_Text_0:
# 555 "data/maps/EltheRoad/scripts.pory"
	.string "If you truly just wanted to pass\n"
	.string "by, then hurry up already!\p"
	.string "I don't want to see your face\n"
	.string "right now. Begone.$"

EltheRoad_EventScript_VinosIdle_Text_1:
# 561 "data/maps/EltheRoad/scripts.pory"
	.string "If you want more crystals, there's\n"
	.string "one stuck in a tree…$"

EltheRoad_EventScript_VinosIdle_Text_2:
# 578 "data/maps/EltheRoad/scripts.pory"
	.string "Right here.$"

EltheRoad_EventScript_VinosIdle_Text_3:
# 620 "data/maps/EltheRoad/scripts.pory"
	.string "How exactly are you able to\n"
	.string "understand my speech?$"

EltheRoad_EventScript_VinosIdle_Text_4:
# 622 "data/maps/EltheRoad/scripts.pory"
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
# 627 "data/maps/EltheRoad/scripts.pory"
	.string "I see…so no other humans have\n"
	.string "this ability?$"

EltheRoad_EventScript_VinosIdle_Text_6:
# 629 "data/maps/EltheRoad/scripts.pory"
	.string "I think some do, but…not the same\n"
	.string "kind as me.$"

EltheRoad_EventScript_VinosIdle_Text_7:
# 631 "data/maps/EltheRoad/scripts.pory"
	.string "How curious.$"

EltheRoad_EventScript_VinosIdle_Text_8:
# 636 "data/maps/EltheRoad/scripts.pory"
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
# 654 "data/maps/EltheRoad/scripts.pory"
	.string "Ack! A trainer!?$"

EltheRoad_Trigger_VinosAltTrigger_Text_1:
# 656 "data/maps/EltheRoad/scripts.pory"
	.string "Hi. I just wanted to sneak by you.\n"
	.string "Do you mind?$"

EltheRoad_Trigger_VinosAltTrigger_Text_2:
# 658 "data/maps/EltheRoad/scripts.pory"
	.string "You're…asking my permission? What?$"

EltheRoad_Trigger_VinosAltTrigger_Text_3:
# 660 "data/maps/EltheRoad/scripts.pory"
	.string "Yeah. Don't wanna be rude.\n"
	.string "What kind of Pokémon are you?\l"
	.string "I've never seen this kind before.$"

EltheRoad_Trigger_VinosAltTrigger_Text_4:
# 662 "data/maps/EltheRoad/scripts.pory"
	.string "…I am called Vinos.\n"
	.string "…Apologies, I am very confused.\p"
	.string "I have never seen a human interact\n"
	.string "with a Pokémon in this way. Usually\l"
	.string "they just attack. And I thought\l"
	.string "humans couldn't hear our speech.$"

EltheRoad_Trigger_VinosAltTrigger_Text_5:
# 665 "data/maps/EltheRoad/scripts.pory"
	.string "Well, most can't. But I can.$"

EltheRoad_Trigger_VinosAltTrigger_Text_6:
# 667 "data/maps/EltheRoad/scripts.pory"
	.string "Fascinating. A gift, then, for one\n"
	.string "who has shown me something new.$"

EltheRoad_Trigger_Marcel_Right_Text_0:
# 692 "data/maps/EltheRoad/scripts.pory"
	.string "Hey! You! Kingler!$"

EltheRoad_Trigger_MarcelMain_Text_0:
# 725 "data/maps/EltheRoad/scripts.pory"
	.string "You're…you are…\n"
	.string "What's your name again?$"

EltheRoad_Trigger_MarcelMain_Text_1:
# 726 "data/maps/EltheRoad/scripts.pory"
	.string "Marcel$"

EltheRoad_Trigger_MarcelMain_Text_2:
# 727 "data/maps/EltheRoad/scripts.pory"
	.string "I'm Marcel. I think I know you.\n"
	.string "Do you know me?$"

EltheRoad_Trigger_MarcelMain_Text_3:
# 729 "data/maps/EltheRoad/scripts.pory"
	.string "I guess so. I have a Poké Ball here\n"
	.string "with your name on it.$"

EltheRoad_Trigger_MarcelMain_Text_4:
# 731 "data/maps/EltheRoad/scripts.pory"
	.string "Is this one of your team members?\n"
	.string "Why don't you, like, know each other?$"

EltheRoad_Trigger_MarcelMain_Text_5:
# 733 "data/maps/EltheRoad/scripts.pory"
	.string "I haven't been able to think straight\n"
	.string "ever since the flood…$"

EltheRoad_Trigger_MarcelMain_Text_6:
# 736 "data/maps/EltheRoad/scripts.pory"
	.string "Oh, who's this cute little thing?$"

EltheRoad_Trigger_MarcelMain_Text_7:
# 738 "data/maps/EltheRoad/scripts.pory"
	.string "I'm the Demi-Vee! I'm tagging along\n"
	.string "to keep Amelia out of trouble!$"

EltheRoad_Trigger_MarcelMain_Text_8:
# 740 "data/maps/EltheRoad/scripts.pory"
	.string "As if! Nobody keeps me out of trouble!$"

EltheRoad_Trigger_MarcelMain_Text_9:
# 742 "data/maps/EltheRoad/scripts.pory"
	.string "Heh heh heh! That sounds right to me!\n"
	.string "I remember Vice told me about that\l"
	.string "time when your ex-boyfriend…$"

EltheRoad_Trigger_MarcelMain_Text_10:
# 753 "data/maps/EltheRoad/scripts.pory"
	.string "Vice! That's it, Amelia! You need\n"
	.string "to help me find my girlfriend!$"

EltheRoad_Trigger_MarcelMain_Text_11:
# 755 "data/maps/EltheRoad/scripts.pory"
	.string "Of course! How could I forget about\n"
	.string "my favorite battle couple!$"

EltheRoad_Trigger_MarcelMain_Text_12:
# 757 "data/maps/EltheRoad/scripts.pory"
	.string "There's a town nearby. She hates\n"
	.string "rain, so she's probably holed up\l"
	.string "inside somewhere. Let's go!$"

EltheRoad_Trigger_MarcelMain_Text_13:
# 766 "data/maps/EltheRoad/scripts.pory"
	.string "You recalled Marcel the Kingler!$"

EltheRoad_EventScript_TreeCleanupMan_Text_0:
# 780 "data/maps/EltheRoad/scripts.pory"
	.string "Logan$"

EltheRoad_EventScript_TreeCleanupMan_Text_1:
# 781 "data/maps/EltheRoad/scripts.pory"
	.string "There's something unsettling about\n"
	.string "the path behind these branches…\p"
	.string "Maybe I should just leave these\n"
	.string "where they are…$"

EltheRoad_EventScript_TreeCleanupMan_Text_2:
# 786 "data/maps/EltheRoad/scripts.pory"
	.string "Hail, traveler! I'm working on\nclearing out all these branches.\p"
	.string "You should be able to make it to the\n"
	.string "city now. I'll get the road all clear\l"
	.string "as soon as I can.$"

EltheRoad_EventScript_BerryFieldsSign_Text_0:
# 792 "data/maps/EltheRoad/scripts.pory"
	.string "Elthe City Berry Fields\p"
	.string "Please see overseer before picking\n"
	.string "any berries!$"

EltheRoad_BerrySpot_WeakBerries_Text_0:
# 798 "data/maps/EltheRoad/scripts.pory"
	.string "Some berries are floating in the\n"
	.string "water…grab one?$"

EltheRoad_BerrySpot_WeakBerries_Text_1:
# 801 "data/maps/EltheRoad/scripts.pory"
	.string "You plunged your hand into the water…$"
