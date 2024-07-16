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
# 152 "data/maps/EltheRoad/scripts.pory"
	case 1, EltheRoad_Trigger_VinosTrigger_3
# 170 "data/maps/EltheRoad/scripts.pory"
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
	return

EltheRoad_Trigger_VinosTrigger_3:
# 153 "data/maps/EltheRoad/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, Common_Movement_WalkUp
# 154 "data/maps/EltheRoad/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
# 155 "data/maps/EltheRoad/scripts.pory"
	waitmovement 0
# 156 "data/maps/EltheRoad/scripts.pory"
	delay 30
# 157 "data/maps/EltheRoad/scripts.pory"
	message EltheRoad_Trigger_VinosTrigger_Text_8
# 158 "data/maps/EltheRoad/scripts.pory"
	waitmessage
# 159 "data/maps/EltheRoad/scripts.pory"
	dynmultichoice 0, 0, TRUE, 6, 0, DYN_MULTICHOICE_CB_NONE, EltheRoad_Trigger_VinosTrigger_Text_3, EltheRoad_Trigger_VinosTrigger_Text_4, EltheRoad_Trigger_VinosTrigger_Text_5
# 160 "data/maps/EltheRoad/scripts.pory"
	closemessage
	return

EltheRoad_Trigger_VinosTrigger_4:
# 171 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_2, PORTRAIT_AMELIA_STRAINED
# 172 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_Trigger_VinosTrigger_Text_10, MSGBOX_AUTOCLOSE
	return


EltheRoad_EventScript_SpiderRoadblock::
# 194 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_2, PORTRAIT_AMELIA_SERIOUSLY
# 195 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_EventScript_SpiderRoadblock_Text_0, MSGBOX_AUTOCLOSE
	return


# 198 "data/maps/EltheRoad/scripts.pory"
EltheRoad_Movement_AmeliaJumpUp:
# 200 "data/maps/EltheRoad/scripts.pory"
	set_visible
# 201 "data/maps/EltheRoad/scripts.pory"
	jump_in_place_left
	step_end

# 204 "data/maps/EltheRoad/scripts.pory"
EltheRoad_Movement_AmeliaLookAround:
# 206 "data/maps/EltheRoad/scripts.pory"
	face_up
# 207 "data/maps/EltheRoad/scripts.pory"
	delay_16
# 208 "data/maps/EltheRoad/scripts.pory"
	face_down
# 209 "data/maps/EltheRoad/scripts.pory"
	delay_16
# 210 "data/maps/EltheRoad/scripts.pory"
	face_up
# 211 "data/maps/EltheRoad/scripts.pory"
	delay_16
# 212 "data/maps/EltheRoad/scripts.pory"
	face_down
# 213 "data/maps/EltheRoad/scripts.pory"
	delay_16
# 214 "data/maps/EltheRoad/scripts.pory"
	face_right
# 215 "data/maps/EltheRoad/scripts.pory"
	delay_16
# 215 "data/maps/EltheRoad/scripts.pory"
	delay_16
# 215 "data/maps/EltheRoad/scripts.pory"
	delay_16
# 216 "data/maps/EltheRoad/scripts.pory"
	face_left
# 217 "data/maps/EltheRoad/scripts.pory"
	delay_16
# 217 "data/maps/EltheRoad/scripts.pory"
	delay_16
# 217 "data/maps/EltheRoad/scripts.pory"
	delay_16
	step_end

# 220 "data/maps/EltheRoad/scripts.pory"
EltheRoad_Movement_AmeliaStartLeaving:
# 222 "data/maps/EltheRoad/scripts.pory"
	walk_up
# 222 "data/maps/EltheRoad/scripts.pory"
	walk_up
# 223 "data/maps/EltheRoad/scripts.pory"
	walk_right
# 223 "data/maps/EltheRoad/scripts.pory"
	walk_right
# 223 "data/maps/EltheRoad/scripts.pory"
	walk_right
# 224 "data/maps/EltheRoad/scripts.pory"
	delay_16
# 224 "data/maps/EltheRoad/scripts.pory"
	delay_16
# 225 "data/maps/EltheRoad/scripts.pory"
	face_left
	step_end

# 228 "data/maps/EltheRoad/scripts.pory"
EltheRoad_Movement_DemiveeFollow:
# 230 "data/maps/EltheRoad/scripts.pory"
	jump_up
# 231 "data/maps/EltheRoad/scripts.pory"
	walk_fast_up
# 232 "data/maps/EltheRoad/scripts.pory"
	walk_fast_right
# 232 "data/maps/EltheRoad/scripts.pory"
	walk_fast_right
	step_end

# 235 "data/maps/EltheRoad/scripts.pory"
EltheRoad_Movement_DemiveeJoin:
# 237 "data/maps/EltheRoad/scripts.pory"
	walk_slow_right
# 238 "data/maps/EltheRoad/scripts.pory"
	enter_pokeball
	step_end

# 241 "data/maps/EltheRoad/scripts.pory"
EltheRoad_Movement_VinosGetOnLog:
# 243 "data/maps/EltheRoad/scripts.pory"
	walk_fast_right
# 244 "data/maps/EltheRoad/scripts.pory"
	jump_right
# 245 "data/maps/EltheRoad/scripts.pory"
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
	.string "{CLEAR_TO 60}{LEFT_ARROW} To {CENSOR}Rehocan{UNCENSOR} Town\n"
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
# 172 "data/maps/EltheRoad/scripts.pory"
	.string "Demi-Vee, attack!$"

EltheRoad_EventScript_SpiderRoadblock_Text_0:
# 195 "data/maps/EltheRoad/scripts.pory"
	.string "Guess we can't go this way.\n"
	.string "…not that I wanted to anyway.\p"
	.string "I won't complain about avoiding\n"
	.string "a spider nest.$"
