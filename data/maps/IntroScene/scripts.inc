IntroScene_MapScripts::
# 6 "data/maps/IntroScene/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, IntroScene_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

IntroScene_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 7 "data/maps/IntroScene/scripts.pory"
	map_script_2 VAR_TEMP_0, 0, IntroScene_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0
	.2byte 0

IntroScene_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0:
# 8 "data/maps/IntroScene/scripts.pory"
	applymovement 2, IntroScene_Movement_AmeliaSnooze
# 9 "data/maps/IntroScene/scripts.pory"
	waitmovement 0
# 10 "data/maps/IntroScene/scripts.pory"
	playse SE_RAIN
# 11 "data/maps/IntroScene/scripts.pory"
	delay 60
# 12 "data/maps/IntroScene/scripts.pory"
	applymovement 1, Common_Movement_QuestionMark
# 13 "data/maps/IntroScene/scripts.pory"
	waitmovement 0
# 14 "data/maps/IntroScene/scripts.pory"
	delay 60
# 15 "data/maps/IntroScene/scripts.pory"
	speakername IntroScene_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_0, PORTRAIT_NIDOKING_NEUTRAL, PORTRAIT_DEFAULT_X, PORTRAIT_DEFAULT_Y, TRUE
# 16 "data/maps/IntroScene/scripts.pory"
	msgbox IntroScene_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_1, MSGBOX_AUTOCLOSE
# 17 "data/maps/IntroScene/scripts.pory"
	applymovement 1, IntroScene_Movement_BradleyInvestigate
# 18 "data/maps/IntroScene/scripts.pory"
	waitmovement 0
# 19 "data/maps/IntroScene/scripts.pory"
	speakername IntroScene_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_0, PORTRAIT_NIDOKING_NEUTRAL, PORTRAIT_DEFAULT_X, PORTRAIT_DEFAULT_Y, TRUE
# 20 "data/maps/IntroScene/scripts.pory"
	msgbox IntroScene_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_2, MSGBOX_DEFAULT
# 21 "data/maps/IntroScene/scripts.pory"
	speakername IntroScene_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_3, PORTRAIT_AMELIA_ASLEEP
# 22 "data/maps/IntroScene/scripts.pory"
	msgbox IntroScene_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_4, MSGBOX_DEFAULT
# 23 "data/maps/IntroScene/scripts.pory"
	speakername IntroScene_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_5, PORTRAIT_NIDOKING_NERVOUS, PORTRAIT_DEFAULT_X, PORTRAIT_DEFAULT_Y, TRUE
# 24 "data/maps/IntroScene/scripts.pory"
	msgbox IntroScene_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_6, MSGBOX_DEFAULT
# 25 "data/maps/IntroScene/scripts.pory"
	speakername IntroScene_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_3, PORTRAIT_AMELIA_ASLEEP
# 26 "data/maps/IntroScene/scripts.pory"
	msgbox IntroScene_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_7, MSGBOX_AUTOCLOSE
# 27 "data/maps/IntroScene/scripts.pory"
	playse SE_M_HYDRO_PUMP
# 28 "data/maps/IntroScene/scripts.pory"
	fadescreen FADE_TO_WHITE
# 29 "data/maps/IntroScene/scripts.pory"
	delay 60
# 30 "data/maps/IntroScene/scripts.pory"
	setflag FLAG_SPAWN_INVISIBLE
# 31 "data/maps/IntroScene/scripts.pory"
	setflag FLAG_REMOVE_WARP_FADE
# 32 "data/maps/IntroScene/scripts.pory"
	setflag FLAG_NO_MUSIC_ON_WARP
# 32 "data/maps/IntroScene/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 33 "data/maps/IntroScene/scripts.pory"
	givemon SPECIES_EEVEE, 30, ITEM_EVERSTONE, ITEM_POKE_BALL, NATURE_QUIRKY, 0, MON_MALE, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_TAKE_DOWN, MOVE_BITE, MOVE_COPYCAT, MOVE_QUICK_ATTACK, FALSE, FALSE, TYPE_DRAGON
# 34 "data/maps/IntroScene/scripts.pory"
	setvar VAR_TEMP_0, 1
# 35 "data/maps/IntroScene/scripts.pory"
	warpsilent MAP_ELTHE_ROAD, 0, -1, -1
	return


Test_MonPic::
# 42 "data/maps/IntroScene/scripts.pory"
	msgbox Test_MonPic_Text_0, MSGBOX_AUTOCLOSE
# 43 "data/maps/IntroScene/scripts.pory"
	delay 30
# 44 "data/maps/IntroScene/scripts.pory"
	speakername Test_MonPic_Text_1, PORTRAIT_FLYGON_NEUTRAL, 20, 5, TRUE
# 45 "data/maps/IntroScene/scripts.pory"
	msgbox Test_MonPic_Text_2, MSGBOX_AUTOCLOSE
# 46 "data/maps/IntroScene/scripts.pory"
	delay 30
# 47 "data/maps/IntroScene/scripts.pory"
	msgbox Test_MonPic_Text_0, MSGBOX_AUTOCLOSE
	return


Test_Portrait::
# 52 "data/maps/IntroScene/scripts.pory"
	speakername Test_Portrait_Text_0, PORTRAIT_KINGLER_NEUTRAL, 21, 6, TRUE
# 53 "data/maps/IntroScene/scripts.pory"
	waitbuttonpress
# 54 "data/maps/IntroScene/scripts.pory"
	msgbox Test_Portrait_Text_1, MSGBOX_DEFAULT
# 55 "data/maps/IntroScene/scripts.pory"
	speakername Test_Portrait_Text_2, PORTRAIT_NIDOKING_NEUTRAL
# 56 "data/maps/IntroScene/scripts.pory"
	msgbox Test_Portrait_Text_3, MSGBOX_DEFAULT
# 57 "data/maps/IntroScene/scripts.pory"
	speakername Test_Portrait_Text_0, PORTRAIT_NONE
# 58 "data/maps/IntroScene/scripts.pory"
	msgbox Test_Portrait_Text_4, MSGBOX_DEFAULT
# 59 "data/maps/IntroScene/scripts.pory"
	speakername NULL, PORTRAIT_AMELIA_NEUTRAL
# 60 "data/maps/IntroScene/scripts.pory"
	msgbox Test_Portrait_Text_5, MSGBOX_AUTOCLOSE
	return


# 63 "data/maps/IntroScene/scripts.pory"
IntroScene_Movement_AmeliaSnooze:
# 65 "data/maps/IntroScene/scripts.pory"
	delay_16
# 65 "data/maps/IntroScene/scripts.pory"
	delay_16
# 65 "data/maps/IntroScene/scripts.pory"
	delay_16
# 66 "data/maps/IntroScene/scripts.pory"
	face_up
# 67 "data/maps/IntroScene/scripts.pory"
	delay_16
# 67 "data/maps/IntroScene/scripts.pory"
	delay_16
# 67 "data/maps/IntroScene/scripts.pory"
	delay_16
# 68 "data/maps/IntroScene/scripts.pory"
	face_down
# 69 "data/maps/IntroScene/scripts.pory"
	delay_16
# 69 "data/maps/IntroScene/scripts.pory"
	delay_16
# 69 "data/maps/IntroScene/scripts.pory"
	delay_16
# 70 "data/maps/IntroScene/scripts.pory"
	face_up
# 71 "data/maps/IntroScene/scripts.pory"
	delay_16
# 71 "data/maps/IntroScene/scripts.pory"
	delay_16
# 71 "data/maps/IntroScene/scripts.pory"
	delay_16
# 72 "data/maps/IntroScene/scripts.pory"
	face_down
# 73 "data/maps/IntroScene/scripts.pory"
	delay_16
# 73 "data/maps/IntroScene/scripts.pory"
	delay_16
# 73 "data/maps/IntroScene/scripts.pory"
	delay_16
# 74 "data/maps/IntroScene/scripts.pory"
	face_up
# 75 "data/maps/IntroScene/scripts.pory"
	delay_16
# 75 "data/maps/IntroScene/scripts.pory"
	delay_16
# 75 "data/maps/IntroScene/scripts.pory"
	delay_16
# 76 "data/maps/IntroScene/scripts.pory"
	face_down
# 77 "data/maps/IntroScene/scripts.pory"
	delay_16
# 77 "data/maps/IntroScene/scripts.pory"
	delay_16
# 77 "data/maps/IntroScene/scripts.pory"
	delay_16
# 78 "data/maps/IntroScene/scripts.pory"
	face_up
# 79 "data/maps/IntroScene/scripts.pory"
	delay_16
# 79 "data/maps/IntroScene/scripts.pory"
	delay_16
# 79 "data/maps/IntroScene/scripts.pory"
	delay_16
# 80 "data/maps/IntroScene/scripts.pory"
	face_down
	step_end

# 83 "data/maps/IntroScene/scripts.pory"
IntroScene_Movement_BradleyInvestigate:
# 85 "data/maps/IntroScene/scripts.pory"
	walk_slow_down
# 86 "data/maps/IntroScene/scripts.pory"
	delay_16
# 86 "data/maps/IntroScene/scripts.pory"
	delay_16
# 87 "data/maps/IntroScene/scripts.pory"
	face_right
# 88 "data/maps/IntroScene/scripts.pory"
	delay_16
# 88 "data/maps/IntroScene/scripts.pory"
	delay_16
# 88 "data/maps/IntroScene/scripts.pory"
	delay_16
# 89 "data/maps/IntroScene/scripts.pory"
	face_left
# 90 "data/maps/IntroScene/scripts.pory"
	delay_16
# 90 "data/maps/IntroScene/scripts.pory"
	delay_16
# 90 "data/maps/IntroScene/scripts.pory"
	delay_16
# 91 "data/maps/IntroScene/scripts.pory"
	walk_slow_left
# 92 "data/maps/IntroScene/scripts.pory"
	delay_16
# 92 "data/maps/IntroScene/scripts.pory"
	delay_16
# 93 "data/maps/IntroScene/scripts.pory"
	face_down
# 94 "data/maps/IntroScene/scripts.pory"
	delay_16
# 94 "data/maps/IntroScene/scripts.pory"
	delay_16
# 94 "data/maps/IntroScene/scripts.pory"
	delay_16
# 94 "data/maps/IntroScene/scripts.pory"
	delay_16
# 94 "data/maps/IntroScene/scripts.pory"
	delay_16
# 95 "data/maps/IntroScene/scripts.pory"
	face_right
	step_end

IntroScene_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_0:
# 15 "data/maps/IntroScene/scripts.pory"
	.string "Nidoking$"

IntroScene_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_1:
# 16 "data/maps/IntroScene/scripts.pory"
	.string "Hmm? I hear something…$"

IntroScene_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_2:
# 20 "data/maps/IntroScene/scripts.pory"
	.string "Amelia, I hear a strange noise…\n"
	.string "It sounds like rushing water.$"

IntroScene_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_3:
# 21 "data/maps/IntroScene/scripts.pory"
	.string "Amelia$"

IntroScene_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_4:
# 22 "data/maps/IntroScene/scripts.pory"
	.string "No, Bradley, I just got comfortable…\n"
	.string "Don't talk to me about rushing water.\p"
	.string "It's probably nothing.$"

IntroScene_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_5:
# 23 "data/maps/IntroScene/scripts.pory"
	.string "Bradley$"

IntroScene_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_6:
# 24 "data/maps/IntroScene/scripts.pory"
	.string "I'm on watch! It's my job to talk\n"
	.string "to you about these things.\p"
	.string "It's getting louder…$"

IntroScene_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_7:
# 26 "data/maps/IntroScene/scripts.pory"
	.string "Unless it's a flash flood, we can\n"
	.string "just deal with it in the morning -$"

Test_MonPic_Text_0:
# 42 "data/maps/IntroScene/scripts.pory"
	.string "message when no tags$"

Test_MonPic_Text_1:
# 44 "data/maps/IntroScene/scripts.pory"
	.string "oenis$"

Test_MonPic_Text_2:
# 45 "data/maps/IntroScene/scripts.pory"
	.string "message when haves tags$"

Test_Portrait_Text_0:
# 52 "data/maps/IntroScene/scripts.pory"
	.string "h$"

Test_Portrait_Text_1:
# 54 "data/maps/IntroScene/scripts.pory"
	.string "It will show up when the message box\n"
	.string "appears.$"

Test_Portrait_Text_2:
# 55 "data/maps/IntroScene/scripts.pory"
	.string "b$"

Test_Portrait_Text_3:
# 56 "data/maps/IntroScene/scripts.pory"
	.string "It can change mid-dialogue.$"

Test_Portrait_Text_4:
# 58 "data/maps/IntroScene/scripts.pory"
	.string "Or even disappear.$"

Test_Portrait_Text_5:
# 60 "data/maps/IntroScene/scripts.pory"
	.string "Portrait and name can be controlled\n"
	.string "separately too.$"
