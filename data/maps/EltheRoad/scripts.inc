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
	setflag FLAG_SYS_POKEMON_GET
# 83 "data/maps/EltheRoad/scripts.pory"
	givemon SPECIES_EEVEE, 30, ITEM_EVERSTONE, ITEM_POKE_BALL, NATURE_QUIRKY, 0, MON_MALE, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_TAKE_DOWN, MOVE_BITE, MOVE_COPYCAT, MOVE_SWIFT, FALSE, FALSE, TYPE_DRAGON
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
	callnative UpdateFollowingPokemon
# 90 "data/maps/EltheRoad/scripts.pory"
	setvar VAR_MAIN_GAME_STATE, 1
	return


EltheRoad_EventScript_FirstTrigger::
# 97 "data/maps/EltheRoad/scripts.pory"
	lock
# 98 "data/maps/EltheRoad/scripts.pory"
	delay 30
# 99 "data/maps/EltheRoad/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 100 "data/maps/EltheRoad/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, Common_Movement_FaceRight
# 101 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_2, PORTRAIT_AMELIA_NEUTRAL
# 102 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_EventScript_FirstTrigger_Text_0
# 103 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_4, PORTRAIT_DEMIVEE_NEUTRAL, PORTRAIT_DEFAULT_LEFT
# 104 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_EventScript_FirstTrigger_Text_1
# 107 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_2, PORTRAIT_AMELIA_SMUG
# 108 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_EventScript_FirstTrigger_Text_2
# 109 "data/maps/EltheRoad/scripts.pory"
	setpartymemberinfo 0
# 110 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_EventScript_FirstTrigger_Text_3, PORTRAIT_DEMIVEE_HUH, PORTRAIT_DEFAULT_LEFT
# 111 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_EventScript_FirstTrigger_Text_4
# 112 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_EventScript_FirstTrigger_Text_3, PORTRAIT_DEMIVEE_NEUTRAL, PORTRAIT_DEFAULT_LEFT
# 113 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_EventScript_FirstTrigger_Text_5
# 115 "data/maps/EltheRoad/scripts.pory"
	speakername NULL, 0
# 116 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_EventScript_FirstTrigger_Text_6, MSGBOX_AUTOCLOSE
# 117 "data/maps/EltheRoad/scripts.pory"
	setvar VAR_MAIN_GAME_STATE, 2
	return


EltheRoad_EventScript_FirstSign::
# 122 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_EventScript_FirstSign_Text_0, MSGBOX_SIGN
	return


EltheRoad_EventScript_SecondSign::
# 127 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_EventScript_SecondSign_Text_0, MSGBOX_SIGN
# 128 "data/maps/EltheRoad/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceRight
# 129 "data/maps/EltheRoad/scripts.pory"
	waitmovement 0
# 130 "data/maps/EltheRoad/scripts.pory"
	delay 8
# 131 "data/maps/EltheRoad/scripts.pory"
	goto EltheRoad_EventScript_SpiderRoadblock
	return


EltheRoad_Trigger_VinosTrigger::
# 136 "data/maps/EltheRoad/scripts.pory"
	lock
# 137 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_Trigger_VinosTrigger_Text_0
# 138 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_Trigger_VinosTrigger_Text_1
# 139 "data/maps/EltheRoad/scripts.pory"
	speakername NULL, 0
# 140 "data/maps/EltheRoad/scripts.pory"
	message EltheRoad_Trigger_VinosTrigger_Text_2
# 141 "data/maps/EltheRoad/scripts.pory"
	waitmessage
# 142 "data/maps/EltheRoad/scripts.pory"
	dynmultichoice 0, 0, TRUE, 6, 0, DYN_MULTICHOICE_CB_NONE, EltheRoad_Trigger_VinosTrigger_Text_3, EltheRoad_Trigger_VinosTrigger_Text_4, EltheRoad_Trigger_VinosTrigger_Text_5
# 143 "data/maps/EltheRoad/scripts.pory"
	closemessage
# 144 "data/maps/EltheRoad/scripts.pory"
	switch VAR_RESULT
# 146 "data/maps/EltheRoad/scripts.pory"
	case 0, EltheRoad_Trigger_VinosTrigger_2
# 178 "data/maps/EltheRoad/scripts.pory"
	case 1, EltheRoad_Trigger_VinosTrigger_3
# 196 "data/maps/EltheRoad/scripts.pory"
	case 2, EltheRoad_Trigger_VinosTrigger_4
	return

EltheRoad_Trigger_VinosTrigger_2:
# 147 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_2, PORTRAIT_AMELIA_NEUTRAL
# 148 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_Trigger_VinosTrigger_Text_6, MSGBOX_AUTOCLOSE
# 149 "data/maps/EltheRoad/scripts.pory"
	playse SE_PIN
# 150 "data/maps/EltheRoad/scripts.pory"
	applymovement 3, Common_Movement_FaceDown
# 151 "data/maps/EltheRoad/scripts.pory"
	waitmovement 0
# 152 "data/maps/EltheRoad/scripts.pory"
	applymovement 3, Common_Movement_ExclamationMark
# 153 "data/maps/EltheRoad/scripts.pory"
	waitmovement 0
# 154 "data/maps/EltheRoad/scripts.pory"
	delay 48
# 155 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_Trigger_VinosTrigger_Text_0
# 156 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_Trigger_VinosTrigger_Text_7, MSGBOX_AUTOCLOSE
# 157 "data/maps/EltheRoad/scripts.pory"
	applymovement 3, EltheRoad_Movement_VinosGetOnLog
# 158 "data/maps/EltheRoad/scripts.pory"
	waitmovement 0
# 159 "data/maps/EltheRoad/scripts.pory"
	message EltheRoad_Trigger_VinosTrigger_Text_8
# 160 "data/maps/EltheRoad/scripts.pory"
	waitmessage
# 161 "data/maps/EltheRoad/scripts.pory"
	dynmultichoice 0, 0, TRUE, 6, 0, DYN_MULTICHOICE_CB_NONE, EltheRoad_Trigger_VinosTrigger_Text_9, EltheRoad_Trigger_VinosTrigger_Text_4, EltheRoad_Trigger_VinosTrigger_Text_5
# 162 "data/maps/EltheRoad/scripts.pory"
	closemessage
# 163 "data/maps/EltheRoad/scripts.pory"
	switch VAR_RESULT
# 165 "data/maps/EltheRoad/scripts.pory"
	case 0, EltheRoad_Trigger_VinosTrigger_6
	return

EltheRoad_Trigger_VinosTrigger_3:
# 179 "data/maps/EltheRoad/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, Common_Movement_WalkUp
# 180 "data/maps/EltheRoad/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
# 181 "data/maps/EltheRoad/scripts.pory"
	waitmovement 0
# 182 "data/maps/EltheRoad/scripts.pory"
	delay 30
# 183 "data/maps/EltheRoad/scripts.pory"
	message EltheRoad_Trigger_VinosTrigger_Text_8
# 184 "data/maps/EltheRoad/scripts.pory"
	waitmessage
# 185 "data/maps/EltheRoad/scripts.pory"
	dynmultichoice 0, 0, TRUE, 6, 0, DYN_MULTICHOICE_CB_NONE, EltheRoad_Trigger_VinosTrigger_Text_3, EltheRoad_Trigger_VinosTrigger_Text_4, EltheRoad_Trigger_VinosTrigger_Text_5
# 186 "data/maps/EltheRoad/scripts.pory"
	closemessage
	return

EltheRoad_Trigger_VinosTrigger_4:
# 197 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_2, PORTRAIT_AMELIA_STRAINED
# 198 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_Trigger_VinosTrigger_Text_11, MSGBOX_AUTOCLOSE
	return

EltheRoad_Trigger_VinosTrigger_6:
# 166 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_2, PORTRAIT_AMELIA_NEUTRAL
# 167 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_Trigger_VinosTrigger_Text_10, MSGBOX_AUTOCLOSE
# 168 "data/maps/EltheRoad/scripts.pory"
	playse SE_PIN
# 169 "data/maps/EltheRoad/scripts.pory"
	applymovement 3, Common_Movement_ExclamationMark
# 170 "data/maps/EltheRoad/scripts.pory"
	waitmovement 0
# 171 "data/maps/EltheRoad/scripts.pory"
	delay 48
# 172 "data/maps/EltheRoad/scripts.pory"
	goto EltheRoad_VinosNegotiationMain
	return


EltheRoad_VinosNegotiationMain::
# 218 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_VinosNegotiationMain_Text_0
# 219 "data/maps/EltheRoad/scripts.pory"
	message EltheRoad_VinosNegotiationMain_Text_1
# 220 "data/maps/EltheRoad/scripts.pory"
	waitmessage
# 221 "data/maps/EltheRoad/scripts.pory"
	waitbuttonpress
# 222 "data/maps/EltheRoad/scripts.pory"
	setvar VAR_0x8008, 2
# 223 "data/maps/EltheRoad/scripts.pory"
	special GetNegotiationTopic
# 224 "data/maps/EltheRoad/scripts.pory"
	compare VAR_RESULT, 0xFF
	goto_if_eq EltheRoad_VinosNegotiationMain_1
# 230 "data/maps/EltheRoad/scripts.pory"
	switch VAR_RESULT
# 232 "data/maps/EltheRoad/scripts.pory"
	case 0, EltheRoad_VinosNegotiationMain_6
# 276 "data/maps/EltheRoad/scripts.pory"
	case 1, EltheRoad_VinosNegotiationMain_7
# 329 "data/maps/EltheRoad/scripts.pory"
	case 2, EltheRoad_VinosNegotiationMain_8
# 373 "data/maps/EltheRoad/scripts.pory"
	case 3, EltheRoad_VinosNegotiationMain_9
EltheRoad_VinosNegotiationMain_4:
# 415 "data/maps/EltheRoad/scripts.pory"
	delay 16
# 416 "data/maps/EltheRoad/scripts.pory"
	compare VAR_NEGOTIATION_SCORE, 2
	goto_if_gt EltheRoad_VinosNegotiationMain_10
# 424 "data/maps/EltheRoad/scripts.pory"
	compare VAR_NEGOTIATION_SCORE, 0
	goto_if_eq EltheRoad_VinosNegotiationMain_11
# 432 "data/maps/EltheRoad/scripts.pory"
	goto EltheRoad_VinosNegotiationMain
	return

EltheRoad_VinosNegotiationMain_1:
# 226 "data/maps/EltheRoad/scripts.pory"
	goto EltheRoad_VinosNegotiationMidSuccess
	return

EltheRoad_VinosNegotiationMain_6:
# 233 "data/maps/EltheRoad/scripts.pory"
	dynmultipush EltheRoad_VinosNegotiationMain_Text_2, 1
# 234 "data/maps/EltheRoad/scripts.pory"
	dynmultipush EltheRoad_VinosNegotiationMain_Text_3, 0
# 235 "data/maps/EltheRoad/scripts.pory"
	dynmultipush EltheRoad_VinosNegotiationMain_Text_4, 2
# 236 "data/maps/EltheRoad/scripts.pory"
	message EltheRoad_VinosNegotiationMain_Text_5
# 237 "data/maps/EltheRoad/scripts.pory"
	waitmessage
# 238 "data/maps/EltheRoad/scripts.pory"
	dynmultistack 0, 0, FALSE, 6, TRUE, 0, DYN_MULTICHOICE_CB_NONE
# 239 "data/maps/EltheRoad/scripts.pory"
	switch VAR_RESULT
# 241 "data/maps/EltheRoad/scripts.pory"
	case 0, EltheRoad_VinosNegotiationMain_16
# 255 "data/maps/EltheRoad/scripts.pory"
	case 1, EltheRoad_VinosNegotiationMain_17
# 265 "data/maps/EltheRoad/scripts.pory"
	case 2, EltheRoad_VinosNegotiationMain_18
	goto EltheRoad_VinosNegotiationMain_4

EltheRoad_VinosNegotiationMain_7:
# 278 "data/maps/EltheRoad/scripts.pory"
	dynmultipush EltheRoad_VinosNegotiationMain_Text_16, 1
# 279 "data/maps/EltheRoad/scripts.pory"
	dynmultipush EltheRoad_VinosNegotiationMain_Text_17, 2
# 280 "data/maps/EltheRoad/scripts.pory"
	dynmultipush EltheRoad_VinosNegotiationMain_Text_18, 0
# 281 "data/maps/EltheRoad/scripts.pory"
	message EltheRoad_VinosNegotiationMain_Text_19
# 282 "data/maps/EltheRoad/scripts.pory"
	waitmessage
# 283 "data/maps/EltheRoad/scripts.pory"
	dynmultistack 0, 0, FALSE, 6, TRUE, 0, DYN_MULTICHOICE_CB_NONE
# 284 "data/maps/EltheRoad/scripts.pory"
	switch VAR_RESULT
# 286 "data/maps/EltheRoad/scripts.pory"
	case 0, EltheRoad_VinosNegotiationMain_20
# 298 "data/maps/EltheRoad/scripts.pory"
	case 1, EltheRoad_VinosNegotiationMain_21
# 316 "data/maps/EltheRoad/scripts.pory"
	case 2, EltheRoad_VinosNegotiationMain_22
	goto EltheRoad_VinosNegotiationMain_4

EltheRoad_VinosNegotiationMain_8:
# 331 "data/maps/EltheRoad/scripts.pory"
	dynmultipush EltheRoad_VinosNegotiationMain_Text_34, 0
# 332 "data/maps/EltheRoad/scripts.pory"
	dynmultipush EltheRoad_VinosNegotiationMain_Text_35, 2
# 333 "data/maps/EltheRoad/scripts.pory"
	dynmultipush EltheRoad_VinosNegotiationMain_Text_36, 1
# 334 "data/maps/EltheRoad/scripts.pory"
	message EltheRoad_VinosNegotiationMain_Text_37
# 335 "data/maps/EltheRoad/scripts.pory"
	waitmessage
# 336 "data/maps/EltheRoad/scripts.pory"
	dynmultistack 0, 0, FALSE, 6, TRUE, 0, DYN_MULTICHOICE_CB_NONE
# 337 "data/maps/EltheRoad/scripts.pory"
	switch VAR_RESULT
# 339 "data/maps/EltheRoad/scripts.pory"
	case 0, EltheRoad_VinosNegotiationMain_24
# 354 "data/maps/EltheRoad/scripts.pory"
	case 1, EltheRoad_VinosNegotiationMain_25
# 363 "data/maps/EltheRoad/scripts.pory"
	case 2, EltheRoad_VinosNegotiationMain_26
	goto EltheRoad_VinosNegotiationMain_4

EltheRoad_VinosNegotiationMain_9:
# 375 "data/maps/EltheRoad/scripts.pory"
	dynmultipush EltheRoad_VinosNegotiationMain_Text_46, 1
# 376 "data/maps/EltheRoad/scripts.pory"
	dynmultipush EltheRoad_VinosNegotiationMain_Text_47, 2
# 377 "data/maps/EltheRoad/scripts.pory"
	dynmultipush EltheRoad_VinosNegotiationMain_Text_48, 0
# 378 "data/maps/EltheRoad/scripts.pory"
	message EltheRoad_VinosNegotiationMain_Text_49
# 379 "data/maps/EltheRoad/scripts.pory"
	waitmessage
# 380 "data/maps/EltheRoad/scripts.pory"
	dynmultistack 0, 0, FALSE, 6, TRUE, 0, DYN_MULTICHOICE_CB_NONE
# 381 "data/maps/EltheRoad/scripts.pory"
	switch VAR_RESULT
# 383 "data/maps/EltheRoad/scripts.pory"
	case 0, EltheRoad_VinosNegotiationMain_28
# 394 "data/maps/EltheRoad/scripts.pory"
	case 1, EltheRoad_VinosNegotiationMain_29
# 405 "data/maps/EltheRoad/scripts.pory"
	case 2, EltheRoad_VinosNegotiationMain_30
	goto EltheRoad_VinosNegotiationMain_4

EltheRoad_VinosNegotiationMain_10:
# 418 "data/maps/EltheRoad/scripts.pory"
	goto_if_set FLAG_NOT_PERFECT_CONVERSATION, EltheRoad_VinosNegotiationMain_32
EltheRoad_VinosNegotiationMain_31:
# 422 "data/maps/EltheRoad/scripts.pory"
	goto EltheRoad_VinosNegotiationCompleteSuccess
	return

EltheRoad_VinosNegotiationMain_11:
# 426 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_VinosNegotiationMain_Text_0
# 427 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_VinosNegotiationMain_Text_57, MSGBOX_AUTOCLOSE
# 428 "data/maps/EltheRoad/scripts.pory"
	goto EltheRoad_VinosDoBattle
	return

EltheRoad_VinosNegotiationMain_16:
# 242 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_2, PORTRAIT_AMELIA_SERIOUSLY
# 243 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_VinosNegotiationMain_Text_6
# 244 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_2, PORTRAIT_AMELIA_SHOCK
# 245 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_VinosNegotiationMain_Text_7
# 247 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_VinosNegotiationMain_Text_0
# 248 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_VinosNegotiationMain_Text_8, MSGBOX_AUTOCLOSE
# 249 "data/maps/EltheRoad/scripts.pory"
	setflag FLAG_NOT_PERFECT_CONVERSATION
# 250 "data/maps/EltheRoad/scripts.pory"
	compare VAR_NEGOTIATION_SCORE, 0
	goto_if_gt EltheRoad_VinosNegotiationMain_35
EltheRoad_VinosNegotiationMain_34:
# 254 "data/maps/EltheRoad/scripts.pory"
	playse SE_FAILURE
	goto EltheRoad_VinosNegotiationMain_4

EltheRoad_VinosNegotiationMain_17:
# 256 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_2, PORTRAIT_AMELIA_NEUTRAL
# 257 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_VinosNegotiationMain_Text_9
# 258 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_VinosNegotiationMain_Text_0
# 259 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_VinosNegotiationMain_Text_10
# 260 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_2, PORTRAIT_AMELIA_SHOCK
# 261 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_VinosNegotiationMain_Text_11
# 262 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_VinosNegotiationMain_Text_0
# 263 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_VinosNegotiationMain_Text_12, MSGBOX_AUTOCLOSE
# 264 "data/maps/EltheRoad/scripts.pory"
	addvar VAR_NEGOTIATION_SCORE, 1
	goto EltheRoad_VinosNegotiationMain_4

EltheRoad_VinosNegotiationMain_18:
# 266 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_2, PORTRAIT_AMELIA_NEUTRAL
# 267 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_VinosNegotiationMain_Text_13
# 268 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_2, PORTRAIT_AMELIA_WINK
# 269 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_VinosNegotiationMain_Text_14
# 270 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_VinosNegotiationMain_Text_0
# 271 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_VinosNegotiationMain_Text_15, MSGBOX_AUTOCLOSE
# 273 "data/maps/EltheRoad/scripts.pory"
	addvar VAR_NEGOTIATION_SCORE, 2
# 274 "data/maps/EltheRoad/scripts.pory"
	playse SE_SUCCESS
	goto EltheRoad_VinosNegotiationMain_4

EltheRoad_VinosNegotiationMain_20:
# 287 "data/maps/EltheRoad/scripts.pory"
	callnative ParalyzeLead
# 288 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_EventScript_FirstTrigger_Text_3, PORTRAIT_DEMIVEE_NEUTRAL
# 289 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_VinosNegotiationMain_Text_20, MSGBOX_AUTOCLOSE
# 290 "data/maps/EltheRoad/scripts.pory"
	delay 90
# 291 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_EventScript_FirstTrigger_Text_3, PORTRAIT_DEMIVEE_ANNOYED
# 292 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_VinosNegotiationMain_Text_21
# 293 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_VinosNegotiationMain_Text_0
# 294 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_VinosNegotiationMain_Text_22, MSGBOX_AUTOCLOSE
# 296 "data/maps/EltheRoad/scripts.pory"
	call EltheRoad_CleanUpNegotiationValues
# 297 "data/maps/EltheRoad/scripts.pory"
	goto EltheRoad_VinosDoBattle
	goto EltheRoad_VinosNegotiationMain_4

EltheRoad_VinosNegotiationMain_21:
# 299 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_2, PORTRAIT_AMELIA_NEUTRAL
# 300 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_VinosNegotiationMain_Text_23
# 301 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_VinosNegotiationMain_Text_0
# 302 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_VinosNegotiationMain_Text_24
# 303 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_2, PORTRAIT_AMELIA_NEUTRAL
# 304 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_VinosNegotiationMain_Text_25
# 305 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_VinosNegotiationMain_Text_0
# 306 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_VinosNegotiationMain_Text_26
# 307 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_2, PORTRAIT_AMELIA_NEUTRAL
# 308 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_VinosNegotiationMain_Text_27
# 309 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_VinosNegotiationMain_Text_0
# 310 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_VinosNegotiationMain_Text_28
# 311 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_2, PORTRAIT_AMELIA_SMUG
# 312 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_VinosNegotiationMain_Text_29
# 313 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_VinosNegotiationMain_Text_0
# 314 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_VinosNegotiationMain_Text_30, MSGBOX_AUTOCLOSE
# 315 "data/maps/EltheRoad/scripts.pory"
	addvar VAR_NEGOTIATION_SCORE, 1
	goto EltheRoad_VinosNegotiationMain_4

EltheRoad_VinosNegotiationMain_22:
# 317 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_2, PORTRAIT_AMELIA_NEUTRAL
# 318 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_VinosNegotiationMain_Text_31, MSGBOX_AUTOCLOSE
# 321 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_2, PORTRAIT_AMELIA_MUNCH
# 322 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_VinosNegotiationMain_Text_32
# 323 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_VinosNegotiationMain_Text_0
# 324 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_VinosNegotiationMain_Text_33, MSGBOX_AUTOCLOSE
# 325 "data/maps/EltheRoad/scripts.pory"
	addvar VAR_NEGOTIATION_SCORE, 2
# 326 "data/maps/EltheRoad/scripts.pory"
	playse SE_SUCCESS
	goto EltheRoad_VinosNegotiationMain_4

EltheRoad_VinosNegotiationMain_24:
# 340 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_2, PORTRAIT_AMELIA_NEUTRAL
# 341 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_VinosNegotiationMain_Text_38
# 342 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_VinosNegotiationMain_Text_0
# 343 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_VinosNegotiationMain_Text_39
# 344 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_2, PORTRAIT_AMELIA_SHOCK
# 345 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_VinosNegotiationMain_Text_40
# 346 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_VinosNegotiationMain_Text_0
# 347 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_VinosNegotiationMain_Text_41, MSGBOX_AUTOCLOSE
# 348 "data/maps/EltheRoad/scripts.pory"
	setflag FLAG_NOT_PERFECT_CONVERSATION
# 349 "data/maps/EltheRoad/scripts.pory"
	compare VAR_NEGOTIATION_SCORE, 0
	goto_if_gt EltheRoad_VinosNegotiationMain_38
EltheRoad_VinosNegotiationMain_37:
# 353 "data/maps/EltheRoad/scripts.pory"
	playse SE_FAILURE
	goto EltheRoad_VinosNegotiationMain_4

EltheRoad_VinosNegotiationMain_25:
# 355 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_2, PORTRAIT_AMELIA_NEUTRAL
# 356 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_VinosNegotiationMain_Text_42
# 359 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_VinosNegotiationMain_Text_0
# 360 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_VinosNegotiationMain_Text_43, MSGBOX_AUTOCLOSE
# 362 "data/maps/EltheRoad/scripts.pory"
	addvar VAR_NEGOTIATION_SCORE, 1
	goto EltheRoad_VinosNegotiationMain_4

EltheRoad_VinosNegotiationMain_26:
# 364 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_2, PORTRAIT_AMELIA_SMUG
# 365 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_VinosNegotiationMain_Text_44
# 368 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_VinosNegotiationMain_Text_0
# 369 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_VinosNegotiationMain_Text_45, MSGBOX_AUTOCLOSE
# 370 "data/maps/EltheRoad/scripts.pory"
	addvar VAR_NEGOTIATION_SCORE, 2
# 371 "data/maps/EltheRoad/scripts.pory"
	playse SE_SUCCESS
	goto EltheRoad_VinosNegotiationMain_4

EltheRoad_VinosNegotiationMain_28:
# 384 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_2, PORTRAIT_AMELIA_NEUTRAL
# 385 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_VinosNegotiationMain_Text_50
# 386 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_VinosNegotiationMain_Text_0
# 387 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_VinosNegotiationMain_Text_51, MSGBOX_AUTOCLOSE
# 388 "data/maps/EltheRoad/scripts.pory"
	setflag FLAG_NOT_PERFECT_CONVERSATION
# 389 "data/maps/EltheRoad/scripts.pory"
	compare VAR_NEGOTIATION_SCORE, 0
	goto_if_gt EltheRoad_VinosNegotiationMain_41
EltheRoad_VinosNegotiationMain_40:
# 393 "data/maps/EltheRoad/scripts.pory"
	playse SE_FAILURE
	goto EltheRoad_VinosNegotiationMain_4

EltheRoad_VinosNegotiationMain_29:
# 395 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_2, PORTRAIT_AMELIA_NEUTRAL
# 396 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_VinosNegotiationMain_Text_52
# 399 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_VinosNegotiationMain_Text_0
# 400 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_VinosNegotiationMain_Text_53
# 402 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_2, PORTRAIT_AMELIA_SERIOUSLY
# 403 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_VinosNegotiationMain_Text_54, MSGBOX_AUTOCLOSE
# 404 "data/maps/EltheRoad/scripts.pory"
	addvar VAR_NEGOTIATION_SCORE, 1
	goto EltheRoad_VinosNegotiationMain_4

EltheRoad_VinosNegotiationMain_30:
# 406 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_2, PORTRAIT_AMELIA_SMUG
# 407 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_VinosNegotiationMain_Text_55
# 408 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_VinosNegotiationMain_Text_0
# 409 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_VinosNegotiationMain_Text_56, MSGBOX_AUTOCLOSE
# 410 "data/maps/EltheRoad/scripts.pory"
	addvar VAR_NEGOTIATION_SCORE, 2
# 411 "data/maps/EltheRoad/scripts.pory"
	playse SE_SUCCESS
	goto EltheRoad_VinosNegotiationMain_4

EltheRoad_VinosNegotiationMain_32:
# 420 "data/maps/EltheRoad/scripts.pory"
	goto EltheRoad_VinosNegotiationMidSuccess
	goto EltheRoad_VinosNegotiationMain_31

EltheRoad_VinosNegotiationMain_35:
# 252 "data/maps/EltheRoad/scripts.pory"
	subvar VAR_NEGOTIATION_SCORE, 1
	goto EltheRoad_VinosNegotiationMain_34

EltheRoad_VinosNegotiationMain_38:
# 351 "data/maps/EltheRoad/scripts.pory"
	subvar VAR_NEGOTIATION_SCORE, 1
	goto EltheRoad_VinosNegotiationMain_37

EltheRoad_VinosNegotiationMain_41:
# 391 "data/maps/EltheRoad/scripts.pory"
	subvar VAR_NEGOTIATION_SCORE, 1
	goto EltheRoad_VinosNegotiationMain_40


EltheRoad_VinosNegotiationMidSuccess::
# 439 "data/maps/EltheRoad/scripts.pory"
	call EltheRoad_CleanUpNegotiationValues
# 440 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_VinosNegotiationMain_Text_0
# 441 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_VinosNegotiationMidSuccess_Text_0, MSGBOX_AUTOCLOSE
# 444 "data/maps/EltheRoad/scripts.pory"
	giveitem ITEM_RARE_CANDY, 1
	return


EltheRoad_VinosNegotiationCompleteSuccess::
# 450 "data/maps/EltheRoad/scripts.pory"
	call EltheRoad_CleanUpNegotiationValues
	return


EltheRoad_VinosDoBattle::
# 455 "data/maps/EltheRoad/scripts.pory"
	setwildbattle SPECIES_BELLSPROUT, 35, ITEM_NONE
# 456 "data/maps/EltheRoad/scripts.pory"
	dowildbattle
# 457 "data/maps/EltheRoad/scripts.pory"
	waitstate
# 458 "data/maps/EltheRoad/scripts.pory"
	call EltheRoad_CleanUpNegotiationValues
	return


EltheRoad_CleanUpNegotiationValues::
# 463 "data/maps/EltheRoad/scripts.pory"
	setvar VAR_NEGOTIATION_SCORE, 0
# 464 "data/maps/EltheRoad/scripts.pory"
	clearflag FLAG_TEMP_4
# 465 "data/maps/EltheRoad/scripts.pory"
	clearflag FLAG_TEMP_1
# 466 "data/maps/EltheRoad/scripts.pory"
	clearflag FLAG_TEMP_2
# 467 "data/maps/EltheRoad/scripts.pory"
	clearflag FLAG_TEMP_3
# 468 "data/maps/EltheRoad/scripts.pory"
	clearflag FLAG_NOT_PERFECT_CONVERSATION
	return


EltheRoad_EventScript_SpiderRoadblock::
# 473 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_2, PORTRAIT_AMELIA_SERIOUSLY
# 474 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_EventScript_SpiderRoadblock_Text_0, MSGBOX_AUTOCLOSE
	return


# 477 "data/maps/EltheRoad/scripts.pory"
EltheRoad_Movement_AmeliaJumpUp:
# 479 "data/maps/EltheRoad/scripts.pory"
	set_visible
# 480 "data/maps/EltheRoad/scripts.pory"
	jump_in_place_left
	step_end

# 483 "data/maps/EltheRoad/scripts.pory"
EltheRoad_Movement_AmeliaLookAround:
# 485 "data/maps/EltheRoad/scripts.pory"
	face_up
# 486 "data/maps/EltheRoad/scripts.pory"
	delay_16
# 487 "data/maps/EltheRoad/scripts.pory"
	face_down
# 488 "data/maps/EltheRoad/scripts.pory"
	delay_16
# 489 "data/maps/EltheRoad/scripts.pory"
	face_up
# 490 "data/maps/EltheRoad/scripts.pory"
	delay_16
# 491 "data/maps/EltheRoad/scripts.pory"
	face_down
# 492 "data/maps/EltheRoad/scripts.pory"
	delay_16
# 493 "data/maps/EltheRoad/scripts.pory"
	face_right
# 494 "data/maps/EltheRoad/scripts.pory"
	delay_16
# 494 "data/maps/EltheRoad/scripts.pory"
	delay_16
# 494 "data/maps/EltheRoad/scripts.pory"
	delay_16
# 495 "data/maps/EltheRoad/scripts.pory"
	face_left
# 496 "data/maps/EltheRoad/scripts.pory"
	delay_16
# 496 "data/maps/EltheRoad/scripts.pory"
	delay_16
# 496 "data/maps/EltheRoad/scripts.pory"
	delay_16
	step_end

# 499 "data/maps/EltheRoad/scripts.pory"
EltheRoad_Movement_AmeliaStartLeaving:
# 501 "data/maps/EltheRoad/scripts.pory"
	walk_up
# 501 "data/maps/EltheRoad/scripts.pory"
	walk_up
# 502 "data/maps/EltheRoad/scripts.pory"
	walk_right
# 502 "data/maps/EltheRoad/scripts.pory"
	walk_right
# 502 "data/maps/EltheRoad/scripts.pory"
	walk_right
# 503 "data/maps/EltheRoad/scripts.pory"
	delay_16
# 503 "data/maps/EltheRoad/scripts.pory"
	delay_16
# 504 "data/maps/EltheRoad/scripts.pory"
	face_left
	step_end

# 507 "data/maps/EltheRoad/scripts.pory"
EltheRoad_Movement_DemiveeFollow:
# 509 "data/maps/EltheRoad/scripts.pory"
	jump_up
# 510 "data/maps/EltheRoad/scripts.pory"
	walk_fast_up
# 511 "data/maps/EltheRoad/scripts.pory"
	walk_fast_right
# 511 "data/maps/EltheRoad/scripts.pory"
	walk_fast_right
	step_end

# 514 "data/maps/EltheRoad/scripts.pory"
EltheRoad_Movement_DemiveeJoin:
# 516 "data/maps/EltheRoad/scripts.pory"
	walk_slow_right
# 517 "data/maps/EltheRoad/scripts.pory"
	enter_pokeball
	step_end

# 520 "data/maps/EltheRoad/scripts.pory"
EltheRoad_Movement_VinosGetOnLog:
# 522 "data/maps/EltheRoad/scripts.pory"
	walk_fast_right
# 523 "data/maps/EltheRoad/scripts.pory"
	jump_right
# 524 "data/maps/EltheRoad/scripts.pory"
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
# 102 "data/maps/EltheRoad/scripts.pory"
	.string "I meant to ask earlier, but, uh,\n"
	.string "what are you, exactly?\p"
	.string "You look like an Eevee, but those\n"
	.string "markings…are they natural?$"

EltheRoad_EventScript_FirstTrigger_Text_1:
# 104 "data/maps/EltheRoad/scripts.pory"
	.string "Uh, I dunno! I used to be normal,\n"
	.string "but I like to eat these crystals…\l"
	.string "I think I got these markings after\l"
	.string "I started doing that.\p"
	.string "Now when I touch an evolution stone,\n"
	.string "I don't evolve, but…\p"
	.string "It changes my type, I think.\n"
	.string "And my moves.$"

EltheRoad_EventScript_FirstTrigger_Text_2:
# 108 "data/maps/EltheRoad/scripts.pory"
	.string "So you're some kind of…Demi-Vee?$"

EltheRoad_EventScript_FirstTrigger_Text_3:
# 110 "data/maps/EltheRoad/scripts.pory"
	.string "Demi-Vee$"

EltheRoad_EventScript_FirstTrigger_Text_4:
# 111 "data/maps/EltheRoad/scripts.pory"
	.string "Huh?$"

EltheRoad_EventScript_FirstTrigger_Text_5:
# 113 "data/maps/EltheRoad/scripts.pory"
	.string "Um, anyway! If you find any cool\n"
	.string "crystals, give them to me!\l"
	.string "They'll make me stronger in battle.\p"
	.string "And if you need any advice for\n"
	.string "getting around, just ask me!\l"
	.string "I know this place pretty well!$"

EltheRoad_EventScript_FirstTrigger_Text_6:
# 116 "data/maps/EltheRoad/scripts.pory"
	.string "(Press R or talk to Demi-Vee while\n"
	.string "he's following you to get advice!)\p"
	.string "(He will talk about the person\n"
	.string "you're facing, or give general hints\l"
	.string "for how to progress.)$"

EltheRoad_EventScript_FirstSign_Text_0:
# 122 "data/maps/EltheRoad/scripts.pory"
	.string "{CLEAR_TO 60}{LEFT_ARROW} To Rehocan Town\n"
	.string "{CLEAR_TO 76}To Elthe City {RIGHT_ARROW}$"

EltheRoad_EventScript_SecondSign_Text_0:
# 127 "data/maps/EltheRoad/scripts.pory"
	.string "{CLEAR_TO 66}{LEFT_ARROW} To Elthe City\n"
	.string "{CLEAR_TO 36}BEWARE BILLIARACH WEBS {RIGHT_ARROW}$"

EltheRoad_Trigger_VinosTrigger_Text_0:
# 137 "data/maps/EltheRoad/scripts.pory"
	.string "Vine Mon$"

EltheRoad_Trigger_VinosTrigger_Text_1:
# 138 "data/maps/EltheRoad/scripts.pory"
	.string "Ugh…stupid flood.\n"
	.string "Washed away a perfect lurking spot.$"

EltheRoad_Trigger_VinosTrigger_Text_2:
# 140 "data/maps/EltheRoad/scripts.pory"
	.string "The Pokémon hasn't noticed you…\n"
	.string "What will you do?$"

EltheRoad_Trigger_VinosTrigger_Text_3:
# 142 "data/maps/EltheRoad/scripts.pory"
	.string "Call Out$"

EltheRoad_Trigger_VinosTrigger_Text_4:
# 142 "data/maps/EltheRoad/scripts.pory"
	.string "Step Forward$"

EltheRoad_Trigger_VinosTrigger_Text_5:
# 142 "data/maps/EltheRoad/scripts.pory"
	.string "Attack$"

EltheRoad_Trigger_VinosTrigger_Text_6:
# 148 "data/maps/EltheRoad/scripts.pory"
	.string "Excuse me…$"

EltheRoad_Trigger_VinosTrigger_Text_7:
# 156 "data/maps/EltheRoad/scripts.pory"
	.string "A human…! I need to get in position!$"

EltheRoad_Trigger_VinosTrigger_Text_8:
# 159 "data/maps/EltheRoad/scripts.pory"
	.string "Now what?$"

EltheRoad_Trigger_VinosTrigger_Text_9:
# 161 "data/maps/EltheRoad/scripts.pory"
	.string "Negotiate$"

EltheRoad_Trigger_VinosTrigger_Text_10:
# 167 "data/maps/EltheRoad/scripts.pory"
	.string "Do you mind if I pass through here?$"

EltheRoad_Trigger_VinosTrigger_Text_11:
# 198 "data/maps/EltheRoad/scripts.pory"
	.string "Demi-Vee, attack!$"

EltheRoad_VinosNegotiationMain_Text_0:
# 218 "data/maps/EltheRoad/scripts.pory"
	.string "Vinos$"

EltheRoad_VinosNegotiationMain_Text_1:
# 219 "data/maps/EltheRoad/scripts.pory"
	.string "Alright, then…$"

EltheRoad_VinosNegotiationMain_Text_2:
# 233 "data/maps/EltheRoad/scripts.pory"
	.string "Dark$"

EltheRoad_VinosNegotiationMain_Text_3:
# 234 "data/maps/EltheRoad/scripts.pory"
	.string "Grass$"

EltheRoad_VinosNegotiationMain_Text_4:
# 235 "data/maps/EltheRoad/scripts.pory"
	.string "Fire$"

EltheRoad_VinosNegotiationMain_Text_5:
# 236 "data/maps/EltheRoad/scripts.pory"
	.string "Which Type of Pokémon is best,\n"
	.string "in your opinion?$"

EltheRoad_VinosNegotiationMain_Text_6:
# 243 "data/maps/EltheRoad/scripts.pory"
	.string "It's, uh…Grass. Yeah. I just love\n"
	.string "Grass type Pokémon…\p"
	.string "… … … … …$"

EltheRoad_VinosNegotiationMain_Text_7:
# 245 "data/maps/EltheRoad/scripts.pory"
	.string "You know what, no, I can't even {CENSOR}fuck{UNCENSOR}ing\n"
	.string "joke about it. All the major\l"
	.string "terrible events in my life were\l"
	.string "caused by Grass types.\l"
	.string "{CENSOR}Fuck{UNCENSOR} Grass types. I hate 'em.$"

EltheRoad_VinosNegotiationMain_Text_8:
# 248 "data/maps/EltheRoad/scripts.pory"
	.string "You'd disrespect me to my face…\n"
	.string "You have some nerve, human.$"

EltheRoad_VinosNegotiationMain_Text_9:
# 257 "data/maps/EltheRoad/scripts.pory"
	.string "Oh, Dark is the best, obviously!$"

EltheRoad_VinosNegotiationMain_Text_10:
# 259 "data/maps/EltheRoad/scripts.pory"
	.string "Hmmhmm, yes, we are quite…\n"
	.string "Wait! You're just buttering me up!$"

EltheRoad_VinosNegotiationMain_Text_11:
# 261 "data/maps/EltheRoad/scripts.pory"
	.string "No way! I'm being honest! Some of my\n"
	.string "best friends are Dark types!$"

EltheRoad_VinosNegotiationMain_Text_12:
# 263 "data/maps/EltheRoad/scripts.pory"
	.string "…Well, alright. It's a good answer.$"

EltheRoad_VinosNegotiationMain_Text_13:
# 267 "data/maps/EltheRoad/scripts.pory"
	.string "Hmm…I think it must be Fire.\n"
	.string "It's just such a cool element.$"

EltheRoad_VinosNegotiationMain_Text_14:
# 269 "data/maps/EltheRoad/scripts.pory"
	.string "Plus, I was a Fire type for a while,\n"
	.string "myself. Self love, yo!$"

EltheRoad_VinosNegotiationMain_Text_15:
# 271 "data/maps/EltheRoad/scripts.pory"
	.string "You have some nerve, telling a Grass\n"
	.string "type that Fire is best…\p"
	.string "But I appreciate your honesty.\n"
	.string "The time for tricks has passed.$"

EltheRoad_VinosNegotiationMain_Text_16:
# 278 "data/maps/EltheRoad/scripts.pory"
	.string "Your berries?$"

EltheRoad_VinosNegotiationMain_Text_17:
# 279 "data/maps/EltheRoad/scripts.pory"
	.string "Eat trail mix$"

EltheRoad_VinosNegotiationMain_Text_18:
# 280 "data/maps/EltheRoad/scripts.pory"
	.string "Just eat it$"

EltheRoad_VinosNegotiationMain_Text_19:
# 281 "data/maps/EltheRoad/scripts.pory"
	.string "Would you like to eat\n"
	.string "one of my berries?$"

EltheRoad_VinosNegotiationMain_Text_20:
# 289 "data/maps/EltheRoad/scripts.pory"
	.string "Ooh, I'll take one!$"

EltheRoad_VinosNegotiationMain_Text_21:
# 292 "data/maps/EltheRoad/scripts.pory"
	.string "Urp…$"

EltheRoad_VinosNegotiationMain_Text_22:
# 294 "data/maps/EltheRoad/scripts.pory"
	.string "Ha! What an idiot! You didn't even\n"
	.string "fall for my camouflage, but you\l"
	.string "still ate my paralyzing berries!\l"
	.string "You're mine!$"

EltheRoad_VinosNegotiationMain_Text_23:
# 300 "data/maps/EltheRoad/scripts.pory"
	.string "Berries? They grow on your body?\n"
	.string "And you…WANT us to eat them?$"

EltheRoad_VinosNegotiationMain_Text_24:
# 302 "data/maps/EltheRoad/scripts.pory"
	.string "Well…yes. They're delicious.\n"
	.string "Or so I'm told.$"

EltheRoad_VinosNegotiationMain_Text_25:
# 304 "data/maps/EltheRoad/scripts.pory"
	.string "What about the ones that your eyes\n"
	.string "are on? Are they edible?$"

EltheRoad_VinosNegotiationMain_Text_26:
# 306 "data/maps/EltheRoad/scripts.pory"
	.string "No, they're…my eyes. Not berries.$"

EltheRoad_VinosNegotiationMain_Text_27:
# 308 "data/maps/EltheRoad/scripts.pory"
	.string "Has anyone ever tried to pick your\n"
	.string "eyes instead of a berry?$"

EltheRoad_VinosNegotiationMain_Text_28:
# 310 "data/maps/EltheRoad/scripts.pory"
	.string "Look, are you gonna eat a berry\n"
	.string "or not!?$"

EltheRoad_VinosNegotiationMain_Text_29:
# 312 "data/maps/EltheRoad/scripts.pory"
	.string "Nope.$"

EltheRoad_VinosNegotiationMain_Text_30:
# 314 "data/maps/EltheRoad/scripts.pory"
	.string "… … … … … … … … … …\p"
	.string "Okay, forget it. Next question.$"

EltheRoad_VinosNegotiationMain_Text_31:
# 318 "data/maps/EltheRoad/scripts.pory"
	.string "Oh, that reminds me I have…$"

EltheRoad_VinosNegotiationMain_Text_32:
# 322 "data/maps/EltheRoad/scripts.pory"
	.string "Trail mix!$"

EltheRoad_VinosNegotiationMain_Text_33:
# 324 "data/maps/EltheRoad/scripts.pory"
	.string "… … … … …\p"
	.string "Your ways confuse me, human.\n"
	.string "I would like to stop talking to you.$"

EltheRoad_VinosNegotiationMain_Text_34:
# 331 "data/maps/EltheRoad/scripts.pory"
	.string "To get my team back$"

EltheRoad_VinosNegotiationMain_Text_35:
# 332 "data/maps/EltheRoad/scripts.pory"
	.string "For thrills$"

EltheRoad_VinosNegotiationMain_Text_36:
# 333 "data/maps/EltheRoad/scripts.pory"
	.string "I don't want to fight$"

EltheRoad_VinosNegotiationMain_Text_37:
# 334 "data/maps/EltheRoad/scripts.pory"
	.string "Why should I let you through?$"

EltheRoad_VinosNegotiationMain_Text_38:
# 341 "data/maps/EltheRoad/scripts.pory"
	.string "I need to get my team back! We got\n"
	.string "separated by the flood.\p"
	.string "I'm their Trainer.\n"
	.string "We need each other.$"

EltheRoad_VinosNegotiationMain_Text_39:
# 343 "data/maps/EltheRoad/scripts.pory"
	.string "Why is that my problem?\n"
	.string "I'm hungry.$"

EltheRoad_VinosNegotiationMain_Text_40:
# 345 "data/maps/EltheRoad/scripts.pory"
	.string "Hungr- were you planning to eat me!?$"

EltheRoad_VinosNegotiationMain_Text_41:
# 347 "data/maps/EltheRoad/scripts.pory"
	.string "No. I was just giving an example of\n"
	.string "something that's not your problem.$"

EltheRoad_VinosNegotiationMain_Text_42:
# 356 "data/maps/EltheRoad/scripts.pory"
	.string "There's no reason for us to fight.\n"
	.string "Look at this place, it's a mess.\p"
	.string "Just let me move on to take care of\n"
	.string "my business, and you can get back\l"
	.string "to finding a new tree, or whatever\l"
	.string "it is you're doing.$"

EltheRoad_VinosNegotiationMain_Text_43:
# 360 "data/maps/EltheRoad/scripts.pory"
	.string "Pokémon don't need a reason to\n"
	.string "fight…but now that you mention it,\l"
	.string "it does sound like a waste\l"
	.string "of time right now…$"

EltheRoad_VinosNegotiationMain_Text_44:
# 365 "data/maps/EltheRoad/scripts.pory"
	.string "I bet you fight every Trainer who\n"
	.string "comes through here, right?\p"
	.string "Wouldn't it be a thrill to let\n"
	.string "one pass through, just this once?\l"
	.string "Get a little crazy with it.$"

EltheRoad_VinosNegotiationMain_Text_45:
# 369 "data/maps/EltheRoad/scripts.pory"
	.string "Hmm…perhaps under the circumstances,\n"
	.string "it would serve me better…$"

EltheRoad_VinosNegotiationMain_Text_46:
# 375 "data/maps/EltheRoad/scripts.pory"
	.string "Thirty years$"

EltheRoad_VinosNegotiationMain_Text_47:
# 376 "data/maps/EltheRoad/scripts.pory"
	.string "Long enough$"

EltheRoad_VinosNegotiationMain_Text_48:
# 377 "data/maps/EltheRoad/scripts.pory"
	.string "Just started$"

EltheRoad_VinosNegotiationMain_Text_49:
# 378 "data/maps/EltheRoad/scripts.pory"
	.string "How long has it been since you\n"
	.string "started training Pokémon?$"

EltheRoad_VinosNegotiationMain_Text_50:
# 385 "data/maps/EltheRoad/scripts.pory"
	.string "Hmm, well me and Demi-Vee just met,\n"
	.string "so I guess I just started.$"

EltheRoad_VinosNegotiationMain_Text_51:
# 387 "data/maps/EltheRoad/scripts.pory"
	.string "No wonder you tried talking. You\n"
	.string "have no idea what you're doing.$"

EltheRoad_VinosNegotiationMain_Text_52:
# 396 "data/maps/EltheRoad/scripts.pory"
	.string "Let me think…Python's last birthday\n"
	.string "was, uh…\p"
	.string "Hmm, I can't remember exactly, but\n"
	.string "I think I started in the year…\p"
	.string "So, it must have been at least\n"
	.string "thirty years.$"

EltheRoad_VinosNegotiationMain_Text_53:
# 400 "data/maps/EltheRoad/scripts.pory"
	.string "You expect me to believe that?\n"
	.string "You don't even look like you're\l"
	.string "thirty years old. You're just\l"
	.string "trying to intimidate me.$"

EltheRoad_VinosNegotiationMain_Text_54:
# 403 "data/maps/EltheRoad/scripts.pory"
	.string "It's true, though…$"

EltheRoad_VinosNegotiationMain_Text_55:
# 407 "data/maps/EltheRoad/scripts.pory"
	.string "Long enough.$"

EltheRoad_VinosNegotiationMain_Text_56:
# 409 "data/maps/EltheRoad/scripts.pory"
	.string "…!$"

EltheRoad_VinosNegotiationMain_Text_57:
# 427 "data/maps/EltheRoad/scripts.pory"
	.string "You're getting on my nerves…\p"
	.string "Enough talk! I should have done this\n"
	.string "from the beginning!$"

EltheRoad_VinosNegotiationMidSuccess_Text_0:
# 441 "data/maps/EltheRoad/scripts.pory"
	.string "…well, I suppose you're not wholly\n"
	.string "unpleasant. And I don't feel like\l"
	.string "jumping you anymore anyway.\l"
	.string "You can pass.\p"
	.string "And here, take this. I have no\n"
	.string "use for it anyway.$"

EltheRoad_EventScript_SpiderRoadblock_Text_0:
# 474 "data/maps/EltheRoad/scripts.pory"
	.string "Guess we can't go this way.\n"
	.string "…not that I wanted to anyway.\p"
	.string "I won't complain about avoiding\n"
	.string "a spider nest.$"
