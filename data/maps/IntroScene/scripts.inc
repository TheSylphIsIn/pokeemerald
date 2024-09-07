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
# 33 "data/maps/IntroScene/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 34 "data/maps/IntroScene/scripts.pory"
	givemon SPECIES_DEMIVEE_GRASS, 30, ITEM_EXP_CANDY_L, ITEM_POKE_BALL, NATURE_QUIRKY, 0, MON_MALE, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_RAZOR_LEAF, MOVE_SLASH, MOVE_TAIL_WHIP, MOVE_FURY_CUTTER, FALSE, FALSE, TYPE_DRAGON
# 35 "data/maps/IntroScene/scripts.pory"
	setvar VAR_TEMP_0, 1
# 36 "data/maps/IntroScene/scripts.pory"
	warpsilent MAP_ELTHE_ROAD, 0, -1, -1
	return


Test_MonPic::
# 43 "data/maps/IntroScene/scripts.pory"
	msgbox Test_MonPic_Text_0, MSGBOX_AUTOCLOSE
# 44 "data/maps/IntroScene/scripts.pory"
	delay 30
# 45 "data/maps/IntroScene/scripts.pory"
	speakername Test_MonPic_Text_1, PORTRAIT_FLYGON_NEUTRAL, 20, 5, TRUE
# 46 "data/maps/IntroScene/scripts.pory"
	msgbox Test_MonPic_Text_2, MSGBOX_AUTOCLOSE
# 47 "data/maps/IntroScene/scripts.pory"
	delay 30
# 48 "data/maps/IntroScene/scripts.pory"
	msgbox Test_MonPic_Text_0, MSGBOX_AUTOCLOSE
	return


Test_Portrait::
# 53 "data/maps/IntroScene/scripts.pory"
	speakername Test_Portrait_Text_0, PORTRAIT_KINGLER_NEUTRAL, 21, 6, TRUE
# 54 "data/maps/IntroScene/scripts.pory"
	waitbuttonpress
# 55 "data/maps/IntroScene/scripts.pory"
	msgbox Test_Portrait_Text_1, MSGBOX_DEFAULT
# 56 "data/maps/IntroScene/scripts.pory"
	speakername Test_Portrait_Text_2, PORTRAIT_NIDOKING_NEUTRAL
# 57 "data/maps/IntroScene/scripts.pory"
	msgbox Test_Portrait_Text_3, MSGBOX_DEFAULT
# 58 "data/maps/IntroScene/scripts.pory"
	speakername Test_Portrait_Text_0, PORTRAIT_NONE
# 59 "data/maps/IntroScene/scripts.pory"
	msgbox Test_Portrait_Text_4, MSGBOX_DEFAULT
# 60 "data/maps/IntroScene/scripts.pory"
	speakername NULL, PORTRAIT_AMELIA_NEUTRAL
# 61 "data/maps/IntroScene/scripts.pory"
	msgbox Test_Portrait_Text_5, MSGBOX_AUTOCLOSE
	return


# 64 "data/maps/IntroScene/scripts.pory"
IntroScene_Movement_AmeliaSnooze:
# 66 "data/maps/IntroScene/scripts.pory"
	delay_16
# 66 "data/maps/IntroScene/scripts.pory"
	delay_16
# 66 "data/maps/IntroScene/scripts.pory"
	delay_16
# 67 "data/maps/IntroScene/scripts.pory"
	face_up
# 68 "data/maps/IntroScene/scripts.pory"
	delay_16
# 68 "data/maps/IntroScene/scripts.pory"
	delay_16
# 68 "data/maps/IntroScene/scripts.pory"
	delay_16
# 69 "data/maps/IntroScene/scripts.pory"
	face_down
# 70 "data/maps/IntroScene/scripts.pory"
	delay_16
# 70 "data/maps/IntroScene/scripts.pory"
	delay_16
# 70 "data/maps/IntroScene/scripts.pory"
	delay_16
# 71 "data/maps/IntroScene/scripts.pory"
	face_up
# 72 "data/maps/IntroScene/scripts.pory"
	delay_16
# 72 "data/maps/IntroScene/scripts.pory"
	delay_16
# 72 "data/maps/IntroScene/scripts.pory"
	delay_16
# 73 "data/maps/IntroScene/scripts.pory"
	face_down
# 74 "data/maps/IntroScene/scripts.pory"
	delay_16
# 74 "data/maps/IntroScene/scripts.pory"
	delay_16
# 74 "data/maps/IntroScene/scripts.pory"
	delay_16
# 75 "data/maps/IntroScene/scripts.pory"
	face_up
# 76 "data/maps/IntroScene/scripts.pory"
	delay_16
# 76 "data/maps/IntroScene/scripts.pory"
	delay_16
# 76 "data/maps/IntroScene/scripts.pory"
	delay_16
# 77 "data/maps/IntroScene/scripts.pory"
	face_down
# 78 "data/maps/IntroScene/scripts.pory"
	delay_16
# 78 "data/maps/IntroScene/scripts.pory"
	delay_16
# 78 "data/maps/IntroScene/scripts.pory"
	delay_16
# 79 "data/maps/IntroScene/scripts.pory"
	face_up
# 80 "data/maps/IntroScene/scripts.pory"
	delay_16
# 80 "data/maps/IntroScene/scripts.pory"
	delay_16
# 80 "data/maps/IntroScene/scripts.pory"
	delay_16
# 81 "data/maps/IntroScene/scripts.pory"
	face_down
	step_end

# 84 "data/maps/IntroScene/scripts.pory"
IntroScene_Movement_BradleyInvestigate:
# 86 "data/maps/IntroScene/scripts.pory"
	walk_slow_down
# 87 "data/maps/IntroScene/scripts.pory"
	delay_16
# 87 "data/maps/IntroScene/scripts.pory"
	delay_16
# 88 "data/maps/IntroScene/scripts.pory"
	face_right
# 89 "data/maps/IntroScene/scripts.pory"
	delay_16
# 89 "data/maps/IntroScene/scripts.pory"
	delay_16
# 89 "data/maps/IntroScene/scripts.pory"
	delay_16
# 90 "data/maps/IntroScene/scripts.pory"
	face_left
# 91 "data/maps/IntroScene/scripts.pory"
	delay_16
# 91 "data/maps/IntroScene/scripts.pory"
	delay_16
# 91 "data/maps/IntroScene/scripts.pory"
	delay_16
# 92 "data/maps/IntroScene/scripts.pory"
	walk_slow_left
# 93 "data/maps/IntroScene/scripts.pory"
	delay_16
# 93 "data/maps/IntroScene/scripts.pory"
	delay_16
# 94 "data/maps/IntroScene/scripts.pory"
	face_down
# 95 "data/maps/IntroScene/scripts.pory"
	delay_16
# 95 "data/maps/IntroScene/scripts.pory"
	delay_16
# 95 "data/maps/IntroScene/scripts.pory"
	delay_16
# 95 "data/maps/IntroScene/scripts.pory"
	delay_16
# 95 "data/maps/IntroScene/scripts.pory"
	delay_16
# 96 "data/maps/IntroScene/scripts.pory"
	face_right
	step_end

FollowerScript_Demivee::
# 104 "data/maps/IntroScene/scripts.pory"
	lock
# 105 "data/maps/IntroScene/scripts.pory"
	copyvar VAR_TEMP_0, VAR_RESULT
# 106 "data/maps/IntroScene/scripts.pory"
	special GetLeadMonSpecies
# 107 "data/maps/IntroScene/scripts.pory"
	compare VAR_RESULT, SPECIES_EEVEE
	goto_if_ne FollowerScript_Demivee_2
# 117 "data/maps/IntroScene/scripts.pory"
	faceplayer
FollowerScript_Demivee_1:
# 119 "data/maps/IntroScene/scripts.pory"
	speakername FollowerScript_Demivee_Text_0, PORTRAIT_DEMIVEE_NEUTRAL
# 121 "data/maps/IntroScene/scripts.pory"
	dynmultipush FollowerScript_Demivee_Text_1, 0
# 122 "data/maps/IntroScene/scripts.pory"
	dynmultipush FollowerScript_Demivee_Text_2, 1
# 123 "data/maps/IntroScene/scripts.pory"
	dynmultipush FollowerScript_Demivee_Text_3, 2
# 125 "data/maps/IntroScene/scripts.pory"
	message FollowerScript_Demivee_Text_4
# 126 "data/maps/IntroScene/scripts.pory"
	waitmessage
# 127 "data/maps/IntroScene/scripts.pory"
	dynmultistack 0, 0, FALSE, 6, FALSE, 0, DYN_MULTICHOICE_CB_NONE
# 128 "data/maps/IntroScene/scripts.pory"
	switch VAR_RESULT
# 130 "data/maps/IntroScene/scripts.pory"
	case 0, FollowerScript_Demivee_7
# 157 "data/maps/IntroScene/scripts.pory"
	case 1, FollowerScript_Demivee_8
# 174 "data/maps/IntroScene/scripts.pory"
	case 2, FollowerScript_Demivee_9
FollowerScript_Demivee_5:
# 194 "data/maps/IntroScene/scripts.pory"
	release
# 195 "data/maps/IntroScene/scripts.pory"
	special GetLeadMonSpecies
# 196 "data/maps/IntroScene/scripts.pory"
	compare VAR_RESULT, SPECIES_EEVEE
	goto_if_ne FollowerScript_Demivee_10
	return

FollowerScript_Demivee_2:
# 109 "data/maps/IntroScene/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceDown
# 110 "data/maps/IntroScene/scripts.pory"
	waitmovement 0
# 111 "data/maps/IntroScene/scripts.pory"
	setvar VAR_0x8004, ANIM_GET_OUT_POKEBALL_DOWN
# 112 "data/maps/IntroScene/scripts.pory"
	callnative DoAmeliaOverworldAnim
# 113 "data/maps/IntroScene/scripts.pory"
	delay 32
	goto FollowerScript_Demivee_1

FollowerScript_Demivee_7:
# 131 "data/maps/IntroScene/scripts.pory"
	switch VAR_MAIN_GAME_STATE
# 133 "data/maps/IntroScene/scripts.pory"
	case 1, FollowerScript_Demivee_13
# 139 "data/maps/IntroScene/scripts.pory"
	case 2, FollowerScript_Demivee_14
# 140 "data/maps/IntroScene/scripts.pory"
	case 3, FollowerScript_Demivee_14
# 142 "data/maps/IntroScene/scripts.pory"
	case 4, FollowerScript_Demivee_15
# 144 "data/maps/IntroScene/scripts.pory"
	case 5, FollowerScript_Demivee_16
# 146 "data/maps/IntroScene/scripts.pory"
	case 6, FollowerScript_Demivee_17
# 148 "data/maps/IntroScene/scripts.pory"
	case 7, FollowerScript_Demivee_18
# 150 "data/maps/IntroScene/scripts.pory"
	case 8, FollowerScript_Demivee_19
# 152 "data/maps/IntroScene/scripts.pory"
	case 9, FollowerScript_Demivee_20
# 154 "data/maps/IntroScene/scripts.pory"
	case 10, FollowerScript_Demivee_21
	goto FollowerScript_Demivee_5

FollowerScript_Demivee_8:
# 158 "data/maps/IntroScene/scripts.pory"
	goto_if_set FLAG_FINISHED_WEATHERBANE_QUEST, FollowerScript_Demivee_22
# 162 "data/maps/IntroScene/scripts.pory"
	goto_if_set FLAG_BEAT_WEATHERBANE, FollowerScript_Demivee_23
# 166 "data/maps/IntroScene/scripts.pory"
	goto_if_set FLAG_STARTED_WEATHERBANE_QUEST, FollowerScript_Demivee_24
# 172 "data/maps/IntroScene/scripts.pory"
	msgbox FollowerScript_Demivee_Text_18
	goto FollowerScript_Demivee_5

FollowerScript_Demivee_9:
# 175 "data/maps/IntroScene/scripts.pory"
	switch VAR_TEMP_0
# 177 "data/maps/IntroScene/scripts.pory"
	case MAPSEC_LITTLEROOT_TOWN, FollowerScript_Demivee_30
# 180 "data/maps/IntroScene/scripts.pory"
	case MAPSEC_OLDALE_TOWN, FollowerScript_Demivee_31
# 183 "data/maps/IntroScene/scripts.pory"
	case MAPSEC_DEWFORD_TOWN, FollowerScript_Demivee_32
	goto FollowerScript_Demivee_5

FollowerScript_Demivee_10:
# 198 "data/maps/IntroScene/scripts.pory"
	setvar VAR_0x8004, ANIM_PUT_AWAY_POKEBALL_DOWN
# 199 "data/maps/IntroScene/scripts.pory"
	callnative DoAmeliaOverworldAnim
# 200 "data/maps/IntroScene/scripts.pory"
	delay 32
	return

FollowerScript_Demivee_13:
# 134 "data/maps/IntroScene/scripts.pory"
	speakername FollowerScript_Demivee_Text_0, PORTRAIT_DEMIVEE_HUH
# 135 "data/maps/IntroScene/scripts.pory"
	msgbox FollowerScript_Demivee_Text_5
# 136 "data/maps/IntroScene/scripts.pory"
	speakername FollowerScript_Demivee_Text_0, PORTRAIT_DEMIVEE_NEUTRAL
# 137 "data/maps/IntroScene/scripts.pory"
	msgbox FollowerScript_Demivee_Text_6
	goto FollowerScript_Demivee_5

FollowerScript_Demivee_14:
# 141 "data/maps/IntroScene/scripts.pory"
	msgbox FollowerScript_Demivee_Text_7
	goto FollowerScript_Demivee_5

FollowerScript_Demivee_15:
# 143 "data/maps/IntroScene/scripts.pory"
	msgbox FollowerScript_Demivee_Text_8
	goto FollowerScript_Demivee_5

FollowerScript_Demivee_16:
# 145 "data/maps/IntroScene/scripts.pory"
	msgbox FollowerScript_Demivee_Text_9
	goto FollowerScript_Demivee_5

FollowerScript_Demivee_17:
# 147 "data/maps/IntroScene/scripts.pory"
	msgbox FollowerScript_Demivee_Text_10
	goto FollowerScript_Demivee_5

FollowerScript_Demivee_18:
# 149 "data/maps/IntroScene/scripts.pory"
	msgbox FollowerScript_Demivee_Text_11
	goto FollowerScript_Demivee_5

FollowerScript_Demivee_19:
# 151 "data/maps/IntroScene/scripts.pory"
	msgbox FollowerScript_Demivee_Text_12
	goto FollowerScript_Demivee_5

FollowerScript_Demivee_20:
# 153 "data/maps/IntroScene/scripts.pory"
	msgbox FollowerScript_Demivee_Text_13
	goto FollowerScript_Demivee_5

FollowerScript_Demivee_21:
# 155 "data/maps/IntroScene/scripts.pory"
	msgbox FollowerScript_Demivee_Text_14
	goto FollowerScript_Demivee_5

FollowerScript_Demivee_22:
# 160 "data/maps/IntroScene/scripts.pory"
	msgbox FollowerScript_Demivee_Text_15
	goto FollowerScript_Demivee_5

FollowerScript_Demivee_23:
# 164 "data/maps/IntroScene/scripts.pory"
	msgbox FollowerScript_Demivee_Text_16
	goto FollowerScript_Demivee_5

FollowerScript_Demivee_24:
# 168 "data/maps/IntroScene/scripts.pory"
	msgbox FollowerScript_Demivee_Text_17
	goto FollowerScript_Demivee_5

FollowerScript_Demivee_30:
# 178 "data/maps/IntroScene/scripts.pory"
	speakername FollowerScript_Demivee_Text_0, PORTRAIT_DEMIVEE_HUH
# 179 "data/maps/IntroScene/scripts.pory"
	msgbox FollowerScript_Demivee_Text_19
	goto FollowerScript_Demivee_5

FollowerScript_Demivee_31:
# 181 "data/maps/IntroScene/scripts.pory"
	msgbox FollowerScript_Demivee_Text_20
	goto FollowerScript_Demivee_5

FollowerScript_Demivee_32:
# 184 "data/maps/IntroScene/scripts.pory"
	msgbox FollowerScript_Demivee_Text_21
	goto FollowerScript_Demivee_5


FollowerScript_Marcel::
# 206 "data/maps/IntroScene/scripts.pory"
	compare VAR_MAIN_GAME_STATE, 6
	goto_if_gt FollowerScript_Marcel_3
FollowerScript_Marcel_2:
	return

FollowerScript_Marcel_1:
# 208 "data/maps/IntroScene/scripts.pory"
	speakername IntroScene_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_3, PORTRAIT_AMELIA_NEUTRAL
# 209 "data/maps/IntroScene/scripts.pory"
	msgbox FollowerScript_Marcel_Text_0
# 210 "data/maps/IntroScene/scripts.pory"
	speakername FollowerScript_Marcel_Text_1, PORTRAIT_KINGLER_NEUTRAL
# 211 "data/maps/IntroScene/scripts.pory"
	msgbox FollowerScript_Marcel_Text_2
# 212 "data/maps/IntroScene/scripts.pory"
	speakername IntroScene_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_3, PORTRAIT_AMELIA_NEUTRAL
# 213 "data/maps/IntroScene/scripts.pory"
	msgbox FollowerScript_Marcel_Text_3, MSGBOX_AUTOCLOSE
# 214 "data/maps/IntroScene/scripts.pory"
	setflag FLAG_KNOW_VICE_FLAVOR
	return

FollowerScript_Marcel_3:
# 206 "data/maps/IntroScene/scripts.pory"
	goto_if_unset FLAG_KNOW_VICE_FLAVOR, FollowerScript_Marcel_1
	goto FollowerScript_Marcel_2


FollowerScript_Vice::
	return


FollowerScript_Bradley::
	return


FollowerScript_Python::
	return


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
# 43 "data/maps/IntroScene/scripts.pory"
	.string "message when no tags$"

Test_MonPic_Text_1:
# 45 "data/maps/IntroScene/scripts.pory"
	.string "oenis$"

Test_MonPic_Text_2:
# 46 "data/maps/IntroScene/scripts.pory"
	.string "message when haves tags$"

Test_Portrait_Text_0:
# 53 "data/maps/IntroScene/scripts.pory"
	.string "h$"

Test_Portrait_Text_1:
# 55 "data/maps/IntroScene/scripts.pory"
	.string "It will show up when the message box\n"
	.string "appears.$"

Test_Portrait_Text_2:
# 56 "data/maps/IntroScene/scripts.pory"
	.string "b$"

Test_Portrait_Text_3:
# 57 "data/maps/IntroScene/scripts.pory"
	.string "It can change mid-dialogue.$"

Test_Portrait_Text_4:
# 59 "data/maps/IntroScene/scripts.pory"
	.string "Or even disappear.$"

Test_Portrait_Text_5:
# 61 "data/maps/IntroScene/scripts.pory"
	.string "Portrait and name can be controlled\n"
	.string "separately too.$"

FollowerScript_Demivee_Text_0:
# 119 "data/maps/IntroScene/scripts.pory"
	.string "Demi-Vee$"

FollowerScript_Demivee_Text_1:
# 121 "data/maps/IntroScene/scripts.pory"
	.string "What to do$"

FollowerScript_Demivee_Text_2:
# 122 "data/maps/IntroScene/scripts.pory"
	.string "Resting my team$"

FollowerScript_Demivee_Text_3:
# 123 "data/maps/IntroScene/scripts.pory"
	.string "Tattle this area$"

FollowerScript_Demivee_Text_4:
# 125 "data/maps/IntroScene/scripts.pory"
	.string "What did you want to ask about?$"

FollowerScript_Demivee_Text_5:
# 135 "data/maps/IntroScene/scripts.pory"
	.string "Hey, you're not supposed to know\n"
	.string "about this feature yet!$"

FollowerScript_Demivee_Text_6:
# 137 "data/maps/IntroScene/scripts.pory"
	.string "Well, then, you can have a little\n"
	.string "secret info…\p"
	.string "After I decide how you trigger\n"
	.string "the superboss, anyway.$"

FollowerScript_Demivee_Text_7:
# 141 "data/maps/IntroScene/scripts.pory"
	.string "Just keep moving forward! If your\n"
	.string "team members are still around this\l"
	.string "area, they'll probably gather in\l"
	.string "the city up ahead.$"

FollowerScript_Demivee_Text_8:
# 143 "data/maps/IntroScene/scripts.pory"
	.string "Hey, we found one! That's a good\n"
	.string "sign that the others are here.\l"
	.string "Keep heading toward Elthe City.$"

FollowerScript_Demivee_Text_9:
# 145 "data/maps/IntroScene/scripts.pory"
	.string "Marcel said Vice would hide from the\n"
	.string "rain, right? Let's check inside\l"
	.string "these buildings.$"

FollowerScript_Demivee_Text_10:
# 147 "data/maps/IntroScene/scripts.pory"
	.string "So Vice was in the Bakery…but she\n"
	.string "seems a bit pissed off. I'm not sure\l"
	.string "she'll want to just come with us.$"

FollowerScript_Demivee_Text_11:
# 149 "data/maps/IntroScene/scripts.pory"
	.string "We need to know what kind of treat\n"
	.string "Vice likes so we can get her one.\p"
	.string "Do you think maybe Marcel would know?\n"
	.string "She said Vice was her girlfriend.\l"
	.string "I wouldn't be surprised if she forgot,\l"
	.string "but it's worth a shot, isn't it?$"

FollowerScript_Demivee_Text_12:
# 151 "data/maps/IntroScene/scripts.pory"
	.string "Alright, let's ask the bakers to\n"
	.string "make us a spicy treat for Vice.$"

FollowerScript_Demivee_Text_13:
# 153 "data/maps/IntroScene/scripts.pory"
	.string "So we need to go back to Road to Elthe\n"
	.string "and head east. I think I saw some\l"
	.string "stumps we could jump across, near\l"
	.string "where we met Marcel.$"

FollowerScript_Demivee_Text_14:
# 155 "data/maps/IntroScene/scripts.pory"
	.string "We need to find 3 of a berry that's\n"
	.string "high in Spicy and low in other flavors.\p"
	.string "Don't forget to check the berry tag!$"

FollowerScript_Demivee_Text_15:
# 160 "data/maps/IntroScene/scripts.pory"
	.string "We can rest at the inn. Our room is\n"
	.string "on the right, up the stairs.$"

FollowerScript_Demivee_Text_16:
# 164 "data/maps/IntroScene/scripts.pory"
	.string "Now that we've cleared up the issue,\n"
	.string "we can get our room key from the\l"
	.string "front desk at the inn.$"

FollowerScript_Demivee_Text_17:
# 168 "data/maps/IntroScene/scripts.pory"
	.string "We can get a room key if we quiet\n"
	.string "down the weathervane. Climb up the\l"
	.string "ladder on the outside of the inn.$"

FollowerScript_Demivee_Text_18:
# 172 "data/maps/IntroScene/scripts.pory"
	.string "There's an inn in town. If you need\n"
	.string "to rest, you could try to get a room.$"

FollowerScript_Demivee_Text_19:
# 179 "data/maps/IntroScene/scripts.pory"
	.string "Huh?? How'd you get back here?$"

FollowerScript_Demivee_Text_20:
# 181 "data/maps/IntroScene/scripts.pory"
	.string "This is the road to Elthe City.\n"
	.string "It normally looks a bit nicer than\l"
	.string "this, but the flood and constant rain\l"
	.string "made a mess of it.\p"
	.string "On the east side of this road are\n"
	.string "the city's Berry fields. But they've\l"
	.string "been flooded, too. I guess we could\l"
	.string "try scavenging in the pools anyway.$"

FollowerScript_Demivee_Text_21:
# 184 "data/maps/IntroScene/scripts.pory"
	.string "This is Elthe City.\p"
	.string "It's been raining here for as long\n"
	.string "as anyone can remember.\p"
	.string "In the southwest are the inn\n"
	.string "and the bakery.\p"
	.string "The east side is a residential area.\n"
	.string "There's also a battle arena there.\p"
	.string "In the northwest is an Arcean church.\n"
	.string "I never go there.\p"
	.string "It's kind of gloomy around here…\n"
	.string "Maybe there's something we can do…\l"
	.string "What do you think, Amelia?$"

FollowerScript_Marcel_Text_0:
# 209 "data/maps/IntroScene/scripts.pory"
	.string "Hey, Marcel, do you know what Vice's\n"
	.string "favorite flavor is?$"

FollowerScript_Marcel_Text_1:
# 210 "data/maps/IntroScene/scripts.pory"
	.string "Marcel$"

FollowerScript_Marcel_Text_2:
# 211 "data/maps/IntroScene/scripts.pory"
	.string "Yeah, she loves spicy things. She\n"
	.string "would always eat the Spelon Berries\l"
	.string "off of the plant before you could\l"
	.string "even pick them.$"

FollowerScript_Marcel_Text_3:
# 213 "data/maps/IntroScene/scripts.pory"
	.string "Oh. Cool. That was easy.$"
