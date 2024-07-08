EltheRoad_MapScripts::
# 6 "data/maps/EltheRoad/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 7 "data/maps/EltheRoad/scripts.pory"
	map_script_2 VAR_MAIN_GAME_STATE, 0, EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0
	.2byte 0

EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0:
# 8 "data/maps/EltheRoad/scripts.pory"
	clearflag FLAG_NO_MUSIC_ON_WARP
# 9 "data/maps/EltheRoad/scripts.pory"
	addobjectspriteoffset 2, 5, 0
# 10 "data/maps/EltheRoad/scripts.pory"
	addobjectspriteoffset 1, 6, 0
# 11 "data/maps/EltheRoad/scripts.pory"
	delay 60
# 12 "data/maps/EltheRoad/scripts.pory"
	delay 60
# 13 "data/maps/EltheRoad/scripts.pory"
	delay 60
# 14 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_0
# 15 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_1, MSGBOX_AUTOCLOSE
# 16 "data/maps/EltheRoad/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 17 "data/maps/EltheRoad/scripts.pory"
	delay 60
# 18 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_2, PORTRAIT_AMELIA_NEUTRAL
# 19 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_3, MSGBOX_DEFAULT
# 20 "data/maps/EltheRoad/scripts.pory"
	addobjectspriteoffset 1, 0, 0
# 21 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_4, PORTRAIT_DEMIVEE_NEUTRAL, PORTRAIT_DEFAULT_LEFT
# 22 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_5, MSGBOX_DEFAULT
# 23 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_2, PORTRAIT_AMELIA_SHOCK
# 24 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_6, MSGBOX_DEFAULT
# 25 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_4, PORTRAIT_DEMIVEE_ANNOYED, PORTRAIT_DEFAULT_LEFT
# 26 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_7, MSGBOX_DEFAULT
# 27 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_2, PORTRAIT_AMELIA_NEUTRAL
# 28 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_8, MSGBOX_AUTOCLOSE
# 29 "data/maps/EltheRoad/scripts.pory"
	playse SE_PIN
# 30 "data/maps/EltheRoad/scripts.pory"
	applymovement 2, Common_Movement_ExclamationMark
# 31 "data/maps/EltheRoad/scripts.pory"
	waitmovement 0
# 32 "data/maps/EltheRoad/scripts.pory"
	applymovement 2, Common_Movement_Delay48
# 33 "data/maps/EltheRoad/scripts.pory"
	waitmovement 0
# 34 "data/maps/EltheRoad/scripts.pory"
	removeobject 2
# 35 "data/maps/EltheRoad/scripts.pory"
	playse SE_BIKE_HOP
# 36 "data/maps/EltheRoad/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, EltheRoad_Movement_AmeliaJumpUp
# 37 "data/maps/EltheRoad/scripts.pory"
	waitmovement 0
# 38 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_2, PORTRAIT_AMELIA_SHOCK
# 39 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_9, MSGBOX_AUTOCLOSE
# 40 "data/maps/EltheRoad/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, EltheRoad_Movement_AmeliaLookAround
# 41 "data/maps/EltheRoad/scripts.pory"
	waitmovement 0
# 42 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_2, PORTRAIT_AMELIA_STRAINED
# 43 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_10, MSGBOX_DEFAULT
# 44 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_2, PORTRAIT_AMELIA_NEUTRAL
# 45 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_11, MSGBOX_AUTOCLOSE
# 46 "data/maps/EltheRoad/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, EltheRoad_Movement_AmeliaStartLeaving
# 47 "data/maps/EltheRoad/scripts.pory"
	delay 30
# 48 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_4, PORTRAIT_DEMIVEE_NEUTRAL, PORTRAIT_DEFAULT_LEFT
# 49 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_12, MSGBOX_AUTOCLOSE
# 50 "data/maps/EltheRoad/scripts.pory"
	playse SE_BIKE_HOP
# 51 "data/maps/EltheRoad/scripts.pory"
	applymovement 1, EltheRoad_Movement_DemiveeFollow
# 52 "data/maps/EltheRoad/scripts.pory"
	waitmovement 0
# 53 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_4, PORTRAIT_DEMIVEE_ANNOYED, PORTRAIT_DEFAULT_LEFT
# 54 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_13, MSGBOX_DEFAULT
# 55 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_2, PORTRAIT_AMELIA_SMUG
# 56 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_14, MSGBOX_DEFAULT
# 57 "data/maps/EltheRoad/scripts.pory"
	speakername EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_2, PORTRAIT_AMELIA_NEUTRAL
# 58 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_15, MSGBOX_AUTOCLOSE
# 59 "data/maps/EltheRoad/scripts.pory"
	applymovement 1, EltheRoad_Movement_DemiveeJoin
# 60 "data/maps/EltheRoad/scripts.pory"
	waitmovement 0
# 61 "data/maps/EltheRoad/scripts.pory"
	removeobject 1
# 62 "data/maps/EltheRoad/scripts.pory"
	playfanfare MUS_CAUGHT
# 63 "data/maps/EltheRoad/scripts.pory"
	message EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_16
# 64 "data/maps/EltheRoad/scripts.pory"
	givemon SPECIES_EEVEE, 30, ITEM_EVERSTONE, ITEM_POKE_BALL, NATURE_SERIOUS, 0, MON_MALE, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_TAKE_DOWN, MOVE_BITE, MOVE_COPYCAT, MOVE_SWIFT, FALSE, FALSE, TYPE_DRAGON
# 65 "data/maps/EltheRoad/scripts.pory"
	waitmessage
# 66 "data/maps/EltheRoad/scripts.pory"
	waitfanfare
# 67 "data/maps/EltheRoad/scripts.pory"
	waitbuttonpress
# 68 "data/maps/EltheRoad/scripts.pory"
	closemessage
# 69 "data/maps/EltheRoad/scripts.pory"
	fadedefaultbgm
# 70 "data/maps/EltheRoad/scripts.pory"
	setvar VAR_MAIN_GAME_STATE, 1
	return


EltheRoad_EventScript_FirstTrigger::
# 77 "data/maps/EltheRoad/scripts.pory"
	lock
# 78 "data/maps/EltheRoad/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
	return


EltheRoad_EventScript_FirstSign::
# 83 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_EventScript_FirstSign_Text_0, MSGBOX_SIGN
	return


EltheRoad_EventScript_SecondSign::
# 88 "data/maps/EltheRoad/scripts.pory"
	msgbox EltheRoad_EventScript_SecondSign_Text_0, MSGBOX_SIGN
	return


# 91 "data/maps/EltheRoad/scripts.pory"
EltheRoad_Movement_AmeliaJumpUp:
# 93 "data/maps/EltheRoad/scripts.pory"
	set_visible
# 94 "data/maps/EltheRoad/scripts.pory"
	jump_in_place_left
	step_end

# 97 "data/maps/EltheRoad/scripts.pory"
EltheRoad_Movement_AmeliaLookAround:
# 99 "data/maps/EltheRoad/scripts.pory"
	face_up
# 100 "data/maps/EltheRoad/scripts.pory"
	delay_16
# 101 "data/maps/EltheRoad/scripts.pory"
	face_down
# 102 "data/maps/EltheRoad/scripts.pory"
	delay_16
# 103 "data/maps/EltheRoad/scripts.pory"
	face_up
# 104 "data/maps/EltheRoad/scripts.pory"
	delay_16
# 105 "data/maps/EltheRoad/scripts.pory"
	face_down
# 106 "data/maps/EltheRoad/scripts.pory"
	delay_16
# 107 "data/maps/EltheRoad/scripts.pory"
	face_right
# 108 "data/maps/EltheRoad/scripts.pory"
	delay_16
# 108 "data/maps/EltheRoad/scripts.pory"
	delay_16
# 108 "data/maps/EltheRoad/scripts.pory"
	delay_16
# 109 "data/maps/EltheRoad/scripts.pory"
	face_left
# 110 "data/maps/EltheRoad/scripts.pory"
	delay_16
# 110 "data/maps/EltheRoad/scripts.pory"
	delay_16
# 110 "data/maps/EltheRoad/scripts.pory"
	delay_16
	step_end

# 113 "data/maps/EltheRoad/scripts.pory"
EltheRoad_Movement_AmeliaStartLeaving:
# 115 "data/maps/EltheRoad/scripts.pory"
	walk_up
# 115 "data/maps/EltheRoad/scripts.pory"
	walk_up
# 116 "data/maps/EltheRoad/scripts.pory"
	walk_right
# 116 "data/maps/EltheRoad/scripts.pory"
	walk_right
# 116 "data/maps/EltheRoad/scripts.pory"
	walk_right
# 117 "data/maps/EltheRoad/scripts.pory"
	delay_16
# 117 "data/maps/EltheRoad/scripts.pory"
	delay_16
# 118 "data/maps/EltheRoad/scripts.pory"
	face_left
	step_end

# 121 "data/maps/EltheRoad/scripts.pory"
EltheRoad_Movement_DemiveeFollow:
# 123 "data/maps/EltheRoad/scripts.pory"
	jump_up
# 124 "data/maps/EltheRoad/scripts.pory"
	walk_fast_up
# 125 "data/maps/EltheRoad/scripts.pory"
	walk_fast_right
# 125 "data/maps/EltheRoad/scripts.pory"
	walk_fast_right
	step_end

# 128 "data/maps/EltheRoad/scripts.pory"
EltheRoad_Movement_DemiveeJoin:
# 130 "data/maps/EltheRoad/scripts.pory"
	walk_slow_right
# 131 "data/maps/EltheRoad/scripts.pory"
	delay_16
# 131 "data/maps/EltheRoad/scripts.pory"
	delay_16
# 131 "data/maps/EltheRoad/scripts.pory"
	delay_16
# 131 "data/maps/EltheRoad/scripts.pory"
	delay_16
# 132 "data/maps/EltheRoad/scripts.pory"
	enter_pokeball
	step_end

EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_0:
# 14 "data/maps/EltheRoad/scripts.pory"
	.string "???$"

EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_1:
# 15 "data/maps/EltheRoad/scripts.pory"
	.string "Wait…is it alive…?$"

EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_2:
# 18 "data/maps/EltheRoad/scripts.pory"
	.string "Amelia$"

EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_3:
# 19 "data/maps/EltheRoad/scripts.pory"
	.string "…yes, I am. Personal space?$"

EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_4:
# 21 "data/maps/EltheRoad/scripts.pory"
	.string "Eevee?$"

EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_5:
# 22 "data/maps/EltheRoad/scripts.pory"
	.string "Oh. Pardon me. I was considering\n"
	.string "eating you.$"

EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_6:
# 24 "data/maps/EltheRoad/scripts.pory"
	.string "Dude! Seriously?$"

EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_7:
# 26 "data/maps/EltheRoad/scripts.pory"
	.string "I saw you getting tossed around\n"
	.string "unconscious in a flood.\l"
	.string "I really didn't think you survived.$"

EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_8:
# 28 "data/maps/EltheRoad/scripts.pory"
	.string "I'm made of tough stuff. It takes\n"
	.string "more than a little water to…$"

EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_9:
# 39 "data/maps/EltheRoad/scripts.pory"
	.string "The flood! What happened to my team?$"

EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_10:
# 43 "data/maps/EltheRoad/scripts.pory"
	.string "My team…ugh, my head. I can't think.$"

EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_11:
# 45 "data/maps/EltheRoad/scripts.pory"
	.string "I have their Poké Balls here.\n"
	.string "Guess I should go find them.$"

EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_12:
# 49 "data/maps/EltheRoad/scripts.pory"
	.string "Wait! You shouldn't go alone.$"

EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_13:
# 54 "data/maps/EltheRoad/scripts.pory"
	.string "The local Pokémon always get irate\n"
	.string "after a flood. It would be dangerous\l"
	.string "for a human wandering alone.$"

EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_14:
# 56 "data/maps/EltheRoad/scripts.pory"
	.string "I can handle myself pretty well.\n"
	.string "And I'm a Pokémon Ranger, too.$"

EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_15:
# 58 "data/maps/EltheRoad/scripts.pory"
	.string "But if you want to come along,\n"
	.string "I won't say no. Welcome aboard!$"

EltheRoad_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_16:
# 63 "data/maps/EltheRoad/scripts.pory"
	.string "Eevee joined your party!$"

EltheRoad_EventScript_FirstSign_Text_0:
# 83 "data/maps/EltheRoad/scripts.pory"
	.string "{CLEAR_TO 60}{LEFT_ARROW} To Rehocan Town\n"
	.string "{CLEAR_TO 76}To Elthe City {RIGHT_ARROW}$"

EltheRoad_EventScript_SecondSign_Text_0:
# 88 "data/maps/EltheRoad/scripts.pory"
	.string "{CLEAR_TO 66}{LEFT_ARROW} To Elthe City\n"
	.string "{CLEAR_TO 36}BEWARE BILLIARACH WEBS {RIGHT_ARROW}$"
