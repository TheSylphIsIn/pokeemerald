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
# 177 "data/maps/IntroScene/scripts.pory"
	case 1, FollowerScript_Demivee_8
# 194 "data/maps/IntroScene/scripts.pory"
	case 2, FollowerScript_Demivee_9
FollowerScript_Demivee_5:
# 222 "data/maps/IntroScene/scripts.pory"
	release
# 223 "data/maps/IntroScene/scripts.pory"
	special GetLeadMonSpecies
# 224 "data/maps/IntroScene/scripts.pory"
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
# 156 "data/maps/IntroScene/scripts.pory"
	case 15, FollowerScript_Demivee_22
# 171 "data/maps/IntroScene/scripts.pory"
	case 30, FollowerScript_Demivee_23
# 175 "data/maps/IntroScene/scripts.pory"
	msgbox FollowerScript_Demivee_Text_19
	goto FollowerScript_Demivee_5

FollowerScript_Demivee_8:
# 178 "data/maps/IntroScene/scripts.pory"
	goto_if_set FLAG_FINISHED_WEATHERBANE_QUEST, FollowerScript_Demivee_25
# 182 "data/maps/IntroScene/scripts.pory"
	goto_if_set FLAG_BEAT_WEATHERBANE, FollowerScript_Demivee_26
# 186 "data/maps/IntroScene/scripts.pory"
	goto_if_set FLAG_STARTED_WEATHERBANE_QUEST, FollowerScript_Demivee_27
# 192 "data/maps/IntroScene/scripts.pory"
	msgbox FollowerScript_Demivee_Text_23
	goto FollowerScript_Demivee_5

FollowerScript_Demivee_9:
# 195 "data/maps/IntroScene/scripts.pory"
	switch VAR_TEMP_0
# 197 "data/maps/IntroScene/scripts.pory"
	case MAPSEC_LITTLEROOT_TOWN, FollowerScript_Demivee_33
# 200 "data/maps/IntroScene/scripts.pory"
	case MAPSEC_OLDALE_TOWN, FollowerScript_Demivee_34
# 203 "data/maps/IntroScene/scripts.pory"
	case MAPSEC_DEWFORD_TOWN, FollowerScript_Demivee_35
# 210 "data/maps/IntroScene/scripts.pory"
	case MAPSEC_ROUTE_101, FollowerScript_Demivee_36
# 213 "data/maps/IntroScene/scripts.pory"
	case MAPSEC_ROUTE_102, FollowerScript_Demivee_37
# 218 "data/maps/IntroScene/scripts.pory"
	msgbox FollowerScript_Demivee_Text_29
	goto FollowerScript_Demivee_5

FollowerScript_Demivee_10:
# 226 "data/maps/IntroScene/scripts.pory"
	setvar VAR_0x8004, ANIM_PUT_AWAY_POKEBALL_DOWN
# 227 "data/maps/IntroScene/scripts.pory"
	callnative DoAmeliaOverworldAnim
# 228 "data/maps/IntroScene/scripts.pory"
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
# 157 "data/maps/IntroScene/scripts.pory"
	goto_if_unset FLAG_GOT_VICE, FollowerScript_Demivee_39
# 161 "data/maps/IntroScene/scripts.pory"
	goto_if_unset FLAG_GOT_BRADLEY, FollowerScript_Demivee_40
# 168 "data/maps/IntroScene/scripts.pory"
	msgbox FollowerScript_Demivee_Text_17
	goto FollowerScript_Demivee_5

FollowerScript_Demivee_23:
# 172 "data/maps/IntroScene/scripts.pory"
	msgbox FollowerScript_Demivee_Text_18
	goto FollowerScript_Demivee_5

FollowerScript_Demivee_25:
# 180 "data/maps/IntroScene/scripts.pory"
	msgbox FollowerScript_Demivee_Text_20
	goto FollowerScript_Demivee_5

FollowerScript_Demivee_26:
# 184 "data/maps/IntroScene/scripts.pory"
	msgbox FollowerScript_Demivee_Text_21
	goto FollowerScript_Demivee_5

FollowerScript_Demivee_27:
# 188 "data/maps/IntroScene/scripts.pory"
	msgbox FollowerScript_Demivee_Text_22
	goto FollowerScript_Demivee_5

FollowerScript_Demivee_33:
# 198 "data/maps/IntroScene/scripts.pory"
	speakername FollowerScript_Demivee_Text_0, PORTRAIT_DEMIVEE_HUH
# 199 "data/maps/IntroScene/scripts.pory"
	msgbox FollowerScript_Demivee_Text_24
	goto FollowerScript_Demivee_5

FollowerScript_Demivee_34:
# 201 "data/maps/IntroScene/scripts.pory"
	msgbox FollowerScript_Demivee_Text_25
	goto FollowerScript_Demivee_5

FollowerScript_Demivee_35:
# 204 "data/maps/IntroScene/scripts.pory"
	msgbox FollowerScript_Demivee_Text_26
	goto FollowerScript_Demivee_5

FollowerScript_Demivee_36:
# 211 "data/maps/IntroScene/scripts.pory"
	msgbox FollowerScript_Demivee_Text_27
	goto FollowerScript_Demivee_5

FollowerScript_Demivee_37:
# 214 "data/maps/IntroScene/scripts.pory"
	msgbox FollowerScript_Demivee_Text_28
	goto FollowerScript_Demivee_5

FollowerScript_Demivee_39:
# 159 "data/maps/IntroScene/scripts.pory"
	msgbox FollowerScript_Demivee_Text_15
	goto FollowerScript_Demivee_5

FollowerScript_Demivee_40:
# 163 "data/maps/IntroScene/scripts.pory"
	msgbox FollowerScript_Demivee_Text_16
	goto FollowerScript_Demivee_5


FollowerScript_Marcel::
# 234 "data/maps/IntroScene/scripts.pory"
	compare VAR_MAIN_GAME_STATE, 6
	goto_if_gt FollowerScript_Marcel_3
FollowerScript_Marcel_2:
# 246 "data/maps/IntroScene/scripts.pory"
	random 3
# 247 "data/maps/IntroScene/scripts.pory"
	switch VAR_RESULT
# 249 "data/maps/IntroScene/scripts.pory"
	case 0, FollowerScript_Marcel_7
	return

FollowerScript_Marcel_1:
# 236 "data/maps/IntroScene/scripts.pory"
	speakername IntroScene_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_3, PORTRAIT_AMELIA_NEUTRAL
# 237 "data/maps/IntroScene/scripts.pory"
	msgbox FollowerScript_Marcel_Text_0
# 238 "data/maps/IntroScene/scripts.pory"
	speakername FollowerScript_Marcel_Text_1, PORTRAIT_KINGLER_NEUTRAL
# 239 "data/maps/IntroScene/scripts.pory"
	msgbox FollowerScript_Marcel_Text_2
# 240 "data/maps/IntroScene/scripts.pory"
	speakername IntroScene_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_3, PORTRAIT_AMELIA_NEUTRAL
# 241 "data/maps/IntroScene/scripts.pory"
	msgbox FollowerScript_Marcel_Text_3, MSGBOX_AUTOCLOSE
# 242 "data/maps/IntroScene/scripts.pory"
	setflag FLAG_KNOW_VICE_FLAVOR
	return

FollowerScript_Marcel_3:
# 234 "data/maps/IntroScene/scripts.pory"
	goto_if_unset FLAG_KNOW_VICE_FLAVOR, FollowerScript_Marcel_1
	goto FollowerScript_Marcel_2

FollowerScript_Marcel_7:
# 250 "data/maps/IntroScene/scripts.pory"
	speakername IntroScene_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_3, PORTRAIT_AMELIA_NEUTRAL
# 251 "data/maps/IntroScene/scripts.pory"
	msgbox FollowerScript_Marcel_Text_4
# 252 "data/maps/IntroScene/scripts.pory"
	speakername FollowerScript_Marcel_Text_1, PORTRAIT_KINGLER_NEUTRAL
# 253 "data/maps/IntroScene/scripts.pory"
	msgbox FollowerScript_Marcel_Text_5
# 254 "data/maps/IntroScene/scripts.pory"
	speakername IntroScene_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_3, PORTRAIT_AMELIA_SMUG
# 255 "data/maps/IntroScene/scripts.pory"
	msgbox FollowerScript_Marcel_Text_6
# 256 "data/maps/IntroScene/scripts.pory"
	speakername IntroScene_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_3, PORTRAIT_AMELIA_SERIOUSLY
# 257 "data/maps/IntroScene/scripts.pory"
	msgbox FollowerScript_Marcel_Text_7, MSGBOX_AUTOCLOSE
	return


FollowerScript_Vice::
# 268 "data/maps/IntroScene/scripts.pory"
	random 3
# 269 "data/maps/IntroScene/scripts.pory"
	switch VAR_RESULT
# 271 "data/maps/IntroScene/scripts.pory"
	case 0, FollowerScript_Vice_2
	return

FollowerScript_Vice_2:
# 272 "data/maps/IntroScene/scripts.pory"
	speakername IntroScene_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_3, PORTRAIT_AMELIA_NEUTRAL
# 273 "data/maps/IntroScene/scripts.pory"
	msgbox FollowerScript_Vice_Text_0
# 274 "data/maps/IntroScene/scripts.pory"
	speakername FollowerScript_Vice_Text_1, PORTRAIT_FLYGON_NEUTRAL
# 275 "data/maps/IntroScene/scripts.pory"
	msgbox FollowerScript_Vice_Text_2
# 276 "data/maps/IntroScene/scripts.pory"
	speakername IntroScene_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_3, PORTRAIT_AMELIA_STRAINED
# 277 "data/maps/IntroScene/scripts.pory"
	msgbox FollowerScript_Vice_Text_3
# 279 "data/maps/IntroScene/scripts.pory"
	speakername FollowerScript_Vice_Text_1, PORTRAIT_FLYGON_NEUTRAL
# 280 "data/maps/IntroScene/scripts.pory"
	msgbox FollowerScript_Vice_Text_4
# 282 "data/maps/IntroScene/scripts.pory"
	speakername IntroScene_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_3, PORTRAIT_AMELIA_STRAINED
# 283 "data/maps/IntroScene/scripts.pory"
	msgbox FollowerScript_Vice_Text_5
# 284 "data/maps/IntroScene/scripts.pory"
	speakername FollowerScript_Vice_Text_1, PORTRAIT_FLYGON_NEUTRAL
# 285 "data/maps/IntroScene/scripts.pory"
	msgbox FollowerScript_Vice_Text_6, MSGBOX_AUTOCLOSE
	return


FollowerScript_Bradley::
# 293 "data/maps/IntroScene/scripts.pory"
	random 3
# 294 "data/maps/IntroScene/scripts.pory"
	switch VAR_RESULT
# 296 "data/maps/IntroScene/scripts.pory"
	case 0, FollowerScript_Bradley_2
# 315 "data/maps/IntroScene/scripts.pory"
	case 1, FollowerScript_Bradley_3
# 325 "data/maps/IntroScene/scripts.pory"
	case 2, FollowerScript_Bradley_4
	return

FollowerScript_Bradley_2:
# 297 "data/maps/IntroScene/scripts.pory"
	speakername IntroScene_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_5, PORTRAIT_NIDOKING_NEUTRAL, PORTRAIT_DEFAULT_LEFT
# 298 "data/maps/IntroScene/scripts.pory"
	msgbox FollowerScript_Bradley_Text_0
# 299 "data/maps/IntroScene/scripts.pory"
	speakername IntroScene_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_3, PORTRAIT_AMELIA_NEUTRAL
# 300 "data/maps/IntroScene/scripts.pory"
	msgbox FollowerScript_Bradley_Text_1
# 301 "data/maps/IntroScene/scripts.pory"
	speakername IntroScene_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_5, PORTRAIT_NIDOKING_NEUTRAL, PORTRAIT_DEFAULT_LEFT
# 302 "data/maps/IntroScene/scripts.pory"
	msgbox FollowerScript_Bradley_Text_2
# 304 "data/maps/IntroScene/scripts.pory"
	speakername IntroScene_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_3, PORTRAIT_AMELIA_NEUTRAL
# 305 "data/maps/IntroScene/scripts.pory"
	msgbox FollowerScript_Bradley_Text_3
# 306 "data/maps/IntroScene/scripts.pory"
	speakername IntroScene_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_3, PORTRAIT_AMELIA_SERIOUSLY
# 307 "data/maps/IntroScene/scripts.pory"
	msgbox FollowerScript_Bradley_Text_4
# 308 "data/maps/IntroScene/scripts.pory"
	speakername IntroScene_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_3, PORTRAIT_AMELIA_NEUTRAL
# 309 "data/maps/IntroScene/scripts.pory"
	msgbox FollowerScript_Bradley_Text_5
# 310 "data/maps/IntroScene/scripts.pory"
	speakername IntroScene_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_5, PORTRAIT_NIDOKING_NEUTRAL, PORTRAIT_DEFAULT_LEFT
# 311 "data/maps/IntroScene/scripts.pory"
	msgbox FollowerScript_Bradley_Text_6
# 313 "data/maps/IntroScene/scripts.pory"
	speakername IntroScene_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_3, PORTRAIT_AMELIA_SERIOUSLY
# 314 "data/maps/IntroScene/scripts.pory"
	msgbox FollowerScript_Bradley_Text_7, MSGBOX_AUTOCLOSE
	return

FollowerScript_Bradley_3:
# 316 "data/maps/IntroScene/scripts.pory"
	speakername IntroScene_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_3, PORTRAIT_AMELIA_NEUTRAL
# 317 "data/maps/IntroScene/scripts.pory"
	msgbox FollowerScript_Bradley_Text_8
# 318 "data/maps/IntroScene/scripts.pory"
	speakername IntroScene_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_5, PORTRAIT_NIDOKING_NEUTRAL, PORTRAIT_DEFAULT_LEFT
# 319 "data/maps/IntroScene/scripts.pory"
	msgbox FollowerScript_Bradley_Text_9
# 320 "data/maps/IntroScene/scripts.pory"
	speakername IntroScene_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_3, PORTRAIT_AMELIA_NEUTRAL
# 321 "data/maps/IntroScene/scripts.pory"
	msgbox FollowerScript_Bradley_Text_10
# 323 "data/maps/IntroScene/scripts.pory"
	speakername IntroScene_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_5, PORTRAIT_NIDOKING_NERVOUS, PORTRAIT_DEFAULT_LEFT
# 324 "data/maps/IntroScene/scripts.pory"
	msgbox FollowerScript_Bradley_Text_11, MSGBOX_AUTOCLOSE
	return

FollowerScript_Bradley_4:
# 326 "data/maps/IntroScene/scripts.pory"
	speakername IntroScene_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_5, PORTRAIT_NIDOKING_NEUTRAL, PORTRAIT_DEFAULT_LEFT
# 327 "data/maps/IntroScene/scripts.pory"
	msgbox FollowerScript_Bradley_Text_12
# 329 "data/maps/IntroScene/scripts.pory"
	speakername IntroScene_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_3, PORTRAIT_AMELIA_NEUTRAL
# 330 "data/maps/IntroScene/scripts.pory"
	msgbox FollowerScript_Bradley_Text_13
# 331 "data/maps/IntroScene/scripts.pory"
	speakername IntroScene_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_5, PORTRAIT_NIDOKING_NEUTRAL, PORTRAIT_DEFAULT_LEFT
# 332 "data/maps/IntroScene/scripts.pory"
	msgbox FollowerScript_Bradley_Text_14
# 335 "data/maps/IntroScene/scripts.pory"
	speakername IntroScene_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_3, PORTRAIT_AMELIA_SHOCK
# 336 "data/maps/IntroScene/scripts.pory"
	msgbox FollowerScript_Bradley_Text_15
# 337 "data/maps/IntroScene/scripts.pory"
	speakername IntroScene_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_5, PORTRAIT_NIDOKING_NEUTRAL, PORTRAIT_DEFAULT_LEFT
# 338 "data/maps/IntroScene/scripts.pory"
	msgbox FollowerScript_Bradley_Text_16, MSGBOX_AUTOCLOSE
	return


FollowerScript_Python::
# 344 "data/maps/IntroScene/scripts.pory"
	random 3
# 345 "data/maps/IntroScene/scripts.pory"
	switch VAR_RESULT
# 347 "data/maps/IntroScene/scripts.pory"
	case 0, FollowerScript_Python_2
# 362 "data/maps/IntroScene/scripts.pory"
	case 1, FollowerScript_Python_3
# 382 "data/maps/IntroScene/scripts.pory"
	case 2, FollowerScript_Python_4
	return

FollowerScript_Python_2:
# 348 "data/maps/IntroScene/scripts.pory"
	speakername IntroScene_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_3, PORTRAIT_AMELIA_NEUTRAL
# 349 "data/maps/IntroScene/scripts.pory"
	msgbox FollowerScript_Python_Text_0
# 350 "data/maps/IntroScene/scripts.pory"
	speakername FollowerScript_Python_Text_1, PORTRAIT_ZOROARK_NEUTRAL
# 351 "data/maps/IntroScene/scripts.pory"
	msgbox FollowerScript_Python_Text_2
# 352 "data/maps/IntroScene/scripts.pory"
	speakername IntroScene_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_3, PORTRAIT_AMELIA_SMUG
# 353 "data/maps/IntroScene/scripts.pory"
	msgbox FollowerScript_Python_Text_3
# 354 "data/maps/IntroScene/scripts.pory"
	speakername FollowerScript_Python_Text_1, PORTRAIT_ZOROARK_NERVOUS
# 355 "data/maps/IntroScene/scripts.pory"
	msgbox FollowerScript_Python_Text_4
# 356 "data/maps/IntroScene/scripts.pory"
	speakername IntroScene_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_3, PORTRAIT_AMELIA_SMUG
# 357 "data/maps/IntroScene/scripts.pory"
	msgbox FollowerScript_Python_Text_5
# 358 "data/maps/IntroScene/scripts.pory"
	speakername FollowerScript_Python_Text_1, PORTRAIT_ZOROARK_NERVOUS
# 359 "data/maps/IntroScene/scripts.pory"
	msgbox FollowerScript_Python_Text_6
# 360 "data/maps/IntroScene/scripts.pory"
	speakername IntroScene_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_3, PORTRAIT_AMELIA_SMUG
# 361 "data/maps/IntroScene/scripts.pory"
	msgbox FollowerScript_Python_Text_7, MSGBOX_AUTOCLOSE
	return

FollowerScript_Python_3:
# 363 "data/maps/IntroScene/scripts.pory"
	speakername FollowerScript_Python_Text_1, PORTRAIT_ZOROARK_NEUTRAL
# 364 "data/maps/IntroScene/scripts.pory"
	msgbox FollowerScript_Python_Text_8
# 365 "data/maps/IntroScene/scripts.pory"
	speakername IntroScene_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_3, PORTRAIT_AMELIA_NEUTRAL
# 366 "data/maps/IntroScene/scripts.pory"
	msgbox FollowerScript_Python_Text_9
# 368 "data/maps/IntroScene/scripts.pory"
	speakername FollowerScript_Python_Text_1, PORTRAIT_ZOROARK_NEUTRAL
# 369 "data/maps/IntroScene/scripts.pory"
	msgbox FollowerScript_Python_Text_10
# 370 "data/maps/IntroScene/scripts.pory"
	speakername IntroScene_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_3, PORTRAIT_AMELIA_NEUTRAL
# 371 "data/maps/IntroScene/scripts.pory"
	msgbox FollowerScript_Python_Text_11
# 372 "data/maps/IntroScene/scripts.pory"
	speakername FollowerScript_Python_Text_1, PORTRAIT_ZOROARK_NEUTRAL
# 373 "data/maps/IntroScene/scripts.pory"
	msgbox FollowerScript_Python_Text_12
# 374 "data/maps/IntroScene/scripts.pory"
	speakername IntroScene_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_3, PORTRAIT_AMELIA_NEUTRAL
# 375 "data/maps/IntroScene/scripts.pory"
	msgbox FollowerScript_Python_Text_13
# 376 "data/maps/IntroScene/scripts.pory"
	speakername FollowerScript_Python_Text_1, PORTRAIT_ZOROARK_NEUTRAL
# 377 "data/maps/IntroScene/scripts.pory"
	msgbox FollowerScript_Python_Text_14
# 378 "data/maps/IntroScene/scripts.pory"
	speakername IntroScene_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_3, PORTRAIT_AMELIA_SERIOUSLY
# 379 "data/maps/IntroScene/scripts.pory"
	msgbox FollowerScript_Python_Text_15
# 380 "data/maps/IntroScene/scripts.pory"
	speakername FollowerScript_Python_Text_1, PORTRAIT_ZOROARK_LAUGH
# 381 "data/maps/IntroScene/scripts.pory"
	msgbox FollowerScript_Python_Text_16, MSGBOX_AUTOCLOSE
	return

FollowerScript_Python_4:
# 383 "data/maps/IntroScene/scripts.pory"
	speakername FollowerScript_Python_Text_1, PORTRAIT_ZOROARK_LAUGH
# 384 "data/maps/IntroScene/scripts.pory"
	msgbox FollowerScript_Python_Text_17
# 385 "data/maps/IntroScene/scripts.pory"
	speakername IntroScene_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_3, PORTRAIT_AMELIA_SERIOUSLY
# 386 "data/maps/IntroScene/scripts.pory"
	msgbox FollowerScript_Python_Text_18
# 387 "data/maps/IntroScene/scripts.pory"
	speakername FollowerScript_Python_Text_1, PORTRAIT_ZOROARK_LAUGH
# 388 "data/maps/IntroScene/scripts.pory"
	msgbox FollowerScript_Python_Text_19
# 389 "data/maps/IntroScene/scripts.pory"
	speakername IntroScene_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_3, PORTRAIT_AMELIA_SERIOUSLY
# 390 "data/maps/IntroScene/scripts.pory"
	msgbox FollowerScript_Python_Text_20
# 391 "data/maps/IntroScene/scripts.pory"
	speakername FollowerScript_Python_Text_1, PORTRAIT_ZOROARK_NEUTRAL
# 392 "data/maps/IntroScene/scripts.pory"
	msgbox FollowerScript_Python_Text_21, MSGBOX_AUTOCLOSE
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
# 159 "data/maps/IntroScene/scripts.pory"
	.string "Have you checked the businesses near\n"
	.string "the entrance to town? Vice might have\l"
	.string "taken shelter as soon as she could.$"

FollowerScript_Demivee_Text_16:
# 163 "data/maps/IntroScene/scripts.pory"
	.string "Did you try fighting in the arena\n"
	.string "at the north end of town?\p"
	.string "If you're having trouble winning, try\n"
	.string "exploring to find more Rock Candy\l"
	.string "to power me up and counter what the\l"
	.string "foes will use.$"

FollowerScript_Demivee_Text_17:
# 168 "data/maps/IntroScene/scripts.pory"
	.string "Your last missing friend is in\n"
	.string "disguise somewhere in town.\p"
	.string "Have Bradley follow you and try to\n"
	.string "pick out the person who isn't\l"
	.string "normally there.$"

FollowerScript_Demivee_Text_18:
# 172 "data/maps/IntroScene/scripts.pory"
	.string "You've got your team back together,\n"
	.string "but you still need to help the town.\p"
	.string "Python said you could clear up the\n"
	.string "rain if you confront whatever is\l"
	.string "lurking in the shrine on the north\l"
	.string "end of town.$"

FollowerScript_Demivee_Text_19:
# 175 "data/maps/IntroScene/scripts.pory"
	.string "Huh? I didn't know you could reach\n"
	.string "this game state! My mistake!$"

FollowerScript_Demivee_Text_20:
# 180 "data/maps/IntroScene/scripts.pory"
	.string "We can rest at the inn. Our room is\n"
	.string "on the right, up the stairs.$"

FollowerScript_Demivee_Text_21:
# 184 "data/maps/IntroScene/scripts.pory"
	.string "Now that we've cleared up the issue,\n"
	.string "we can get our room key from the\l"
	.string "front desk at the inn.$"

FollowerScript_Demivee_Text_22:
# 188 "data/maps/IntroScene/scripts.pory"
	.string "We can get a room key if we quiet\n"
	.string "down the weathervane. Climb up the\l"
	.string "ladder on the outside of the inn.$"

FollowerScript_Demivee_Text_23:
# 192 "data/maps/IntroScene/scripts.pory"
	.string "There's an inn in town. If you need\n"
	.string "to rest, you could try to get a room.$"

FollowerScript_Demivee_Text_24:
# 199 "data/maps/IntroScene/scripts.pory"
	.string "Huh?? How'd you get back here?$"

FollowerScript_Demivee_Text_25:
# 201 "data/maps/IntroScene/scripts.pory"
	.string "This is the road to Elthe City.\n"
	.string "It normally looks a bit nicer than\l"
	.string "this, but the flood and constant rain\l"
	.string "made a mess of it.\p"
	.string "On the east side of this road are\n"
	.string "the city's Berry fields. But they've\l"
	.string "been flooded, too. I guess we could\l"
	.string "try scavenging in the pools anyway.$"

FollowerScript_Demivee_Text_26:
# 204 "data/maps/IntroScene/scripts.pory"
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

FollowerScript_Demivee_Text_27:
# 211 "data/maps/IntroScene/scripts.pory"
	.string "This is the Elysi Inn. It's a motel\n"
	.string "for people passing through here.\p"
	.string "If you need to heal us after battle,\n"
	.string "you could ask for a room here.$"

FollowerScript_Demivee_Text_28:
# 214 "data/maps/IntroScene/scripts.pory"
	.string "This is Pomona Bread, the bakery.\n"
	.string "They make all sorts of baked goods.\p"
	.string "I started eating crystals after the\n"
	.string "people here caught me stealing from\l"
	.string "the displays, haha. But the joke's\l"
	.string "on them, because I was controlling the\l"
	.string "Pantom population. Now their kitchen\l"
	.string "gets haunted once in a while.\p"
	.string "But if you ask me, there's nothing\n"
	.string "wrong with haunted bread.$"

FollowerScript_Demivee_Text_29:
# 218 "data/maps/IntroScene/scripts.pory"
	.string "Sorry, I forgot to write an entry\n"
	.string "for this area, ahaha...$"

FollowerScript_Marcel_Text_0:
# 237 "data/maps/IntroScene/scripts.pory"
	.string "Hey, Marcel, do you know what Vice's\n"
	.string "favorite flavor is?$"

FollowerScript_Marcel_Text_1:
# 238 "data/maps/IntroScene/scripts.pory"
	.string "Marcel$"

FollowerScript_Marcel_Text_2:
# 239 "data/maps/IntroScene/scripts.pory"
	.string "Yeah, she loves spicy things. She\n"
	.string "would always eat the Spelon Berries\l"
	.string "off of the plant before you could\l"
	.string "even pick them.$"

FollowerScript_Marcel_Text_3:
# 241 "data/maps/IntroScene/scripts.pory"
	.string "Oh. Cool. That was easy.$"

FollowerScript_Marcel_Text_4:
# 251 "data/maps/IntroScene/scripts.pory"
	.string "How did you and Vice get together?$"

FollowerScript_Marcel_Text_5:
# 253 "data/maps/IntroScene/scripts.pory"
	.string "I knew Guillotine…\n"
	.string "She knew Outrage…\l"
	.string "Can I make it any more obvious?$"

FollowerScript_Marcel_Text_6:
# 255 "data/maps/IntroScene/scripts.pory"
	.string "Ah, yes, incredible violence. The\n"
	.string "foundation of any good relationship.$"

FollowerScript_Marcel_Text_7:
# 257 "data/maps/IntroScene/scripts.pory"
	.string "…That came out wrong.$"

FollowerScript_Vice_Text_0:
# 273 "data/maps/IntroScene/scripts.pory"
	.string "Vice, do you remember Valora?$"

FollowerScript_Vice_Text_1:
# 274 "data/maps/IntroScene/scripts.pory"
	.string "Vice$"

FollowerScript_Vice_Text_2:
# 275 "data/maps/IntroScene/scripts.pory"
	.string "Valora, Valora, Valora…hmm, was she\n"
	.string "a Bellsprout?$"

FollowerScript_Vice_Text_3:
# 277 "data/maps/IntroScene/scripts.pory"
	.string "Yeah, I think so. I'm having trouble\n"
	.string "remembering anything else about her.\p"
	.string "And since I know this memory thing\n"
	.string "suppresses bad memories…I wonder if\l"
	.string "something bad happened to her.$"

FollowerScript_Vice_Text_4:
# 280 "data/maps/IntroScene/scripts.pory"
	.string "I see…\p"
	.string "I don't think you should worry about\n"
	.string "it, Amelia. It's not like you're\l"
	.string "getting careless. Somebody is\l"
	.string "ACTIVELY hurting your memory.$"

FollowerScript_Vice_Text_5:
# 283 "data/maps/IntroScene/scripts.pory"
	.string "I guess you're right…I still feel\n"
	.string "guilty, though.$"

FollowerScript_Vice_Text_6:
# 285 "data/maps/IntroScene/scripts.pory"
	.string "Don't! I'll bite you!$"

FollowerScript_Bradley_Text_0:
# 298 "data/maps/IntroScene/scripts.pory"
	.string "Do you remember our first real battle?$"

FollowerScript_Bradley_Text_1:
# 300 "data/maps/IntroScene/scripts.pory"
	.string "Hmm…it wasn't in Alola, was it?\n"
	.string "Alola is a blur to me.$"

FollowerScript_Bradley_Text_2:
# 302 "data/maps/IntroScene/scripts.pory"
	.string "No, it was in Johto. Back then, you\n"
	.string "visited my hiding place by chance,\l"
	.string "and your Dunsparce convinced me to\l"
	.string "act as a sparring partner.\p"
	.string "Then we were attacked in the night\n"
	.string "by a strange creature. Did you ever\l"
	.string "find out why it targeted us?$"

FollowerScript_Bradley_Text_3:
# 305 "data/maps/IntroScene/scripts.pory"
	.string "Hm? Oh, yes, I remember. That was\n"
	.string "the night that…$"

FollowerScript_Bradley_Text_4:
# 307 "data/maps/IntroScene/scripts.pory"
	.string "The night that I…\p"
	.string "Yeah, I think that was my fault.\n"
	.string "I, uh, attracted it somehow.$"

FollowerScript_Bradley_Text_5:
# 309 "data/maps/IntroScene/scripts.pory"
	.string "You know, that thing turned out to be\n"
	.string "the guy that Sundown was looking for\l"
	.string "the whole time? Crazy coincidence that\l"
	.string "it attacked us before we even knew.$"

FollowerScript_Bradley_Text_6:
# 311 "data/maps/IntroScene/scripts.pory"
	.string "Indeed. But I just wanted to say, the\n"
	.string "leadership you showed in that fight is\l"
	.string "the reason that I accepted your offer\l"
	.string "to train me.\p"
	.string "You kept your head in a dangerous\n"
	.string "situation and kept everyone safe.$"

FollowerScript_Bradley_Text_7:
# 314 "data/maps/IntroScene/scripts.pory"
	.string "It was sheer luck that my plan even\n"
	.string "worked…but thanks, Bradley.$"

FollowerScript_Bradley_Text_8:
# 317 "data/maps/IntroScene/scripts.pory"
	.string "Do you know what happened to your\n"
	.string "old trainer?$"

FollowerScript_Bradley_Text_9:
# 319 "data/maps/IntroScene/scripts.pory"
	.string "No. And I do not care.\p"
	.string "He said he would reform his ways.\n"
	.string "I commend him if he truly does, but\l"
	.string "I still won't ever forgive him.$"

FollowerScript_Bradley_Text_10:
# 321 "data/maps/IntroScene/scripts.pory"
	.string "I see. …I have someone like that, too.\n"
	.string "I mean, it's a little different…\l"
	.string "I was his trainer instead of him\l"
	.string "being mine, but it's like…\p"
	.string "Well right now I can't remember\n"
	.string "exactly what he did, but I still can't\l"
	.string "stand him, so it must have been bad.$"

FollowerScript_Bradley_Text_11:
# 324 "data/maps/IntroScene/scripts.pory"
	.string "… … … … …\n"
	.string "Of course.$"

FollowerScript_Bradley_Text_12:
# 327 "data/maps/IntroScene/scripts.pory"
	.string "I'm sorry again for causing trouble.\p"
	.string "I felt like I was back in my younger\n"
	.string "days, and I just wanted to rampage.\p"
	.string "It felt good, but it's not…helpful.$"

FollowerScript_Bradley_Text_13:
# 330 "data/maps/IntroScene/scripts.pory"
	.string "It's okay. It's fine to let yourself\n"
	.string "have fun once in a while.$"

FollowerScript_Bradley_Text_14:
# 332 "data/maps/IntroScene/scripts.pory"
	.string "It's not just that. I lowered my\n"
	.string "standards…\p"
	.string "You know, when I first started with\n"
	.string "my old trainer, I did whatever he\l"
	.string "told me to. I knew it was wrong, but\l"
	.string "it felt good to be a beast.\p"
	.string "Because of me, more Pokémon suffered…$"

FollowerScript_Bradley_Text_15:
# 336 "data/maps/IntroScene/scripts.pory"
	.string "Hey, don't blame yourself for that\n"
	.string "piece of s{CENSOR}hit{UNCENSOR}'s business.\p"
	.string "It's in the past, alright?$"

FollowerScript_Bradley_Text_16:
# 338 "data/maps/IntroScene/scripts.pory"
	.string "…$"

FollowerScript_Python_Text_0:
# 349 "data/maps/IntroScene/scripts.pory"
	.string "So you still remember everything?$"

FollowerScript_Python_Text_1:
# 350 "data/maps/IntroScene/scripts.pory"
	.string "Python$"

FollowerScript_Python_Text_2:
# 351 "data/maps/IntroScene/scripts.pory"
	.string "Yup! I'm a Dark type illusionist.\n"
	.string "No Psychic type would be able to\l"
	.string "put the mind whammy on me!$"

FollowerScript_Python_Text_3:
# 353 "data/maps/IntroScene/scripts.pory"
	.string "Okay, so refresh my memory. When that\n"
	.string "Hatterene got the jump on us that\l"
	.string "time in the woods, you were…?$"

FollowerScript_Python_Text_4:
# 355 "data/maps/IntroScene/scripts.pory"
	.string "…Holding back of my own free will!\n"
	.string "I thought we could deescelate the\l"
	.string "situation, you see, if we only\l"
	.string "identified ourselves.$"

FollowerScript_Python_Text_5:
# 357 "data/maps/IntroScene/scripts.pory"
	.string "And you disguised yourself as a\n"
	.string "Grimmsnarl because…$"

FollowerScript_Python_Text_6:
# 359 "data/maps/IntroScene/scripts.pory"
	.string "A diplomatic move, of course.\n"
	.string "(How do you remember this??)$"

FollowerScript_Python_Text_7:
# 361 "data/maps/IntroScene/scripts.pory"
	.string "Uh huh. Of course. Got it.$"

FollowerScript_Python_Text_8:
# 364 "data/maps/IntroScene/scripts.pory"
	.string "So how much do you remember?$"

FollowerScript_Python_Text_9:
# 366 "data/maps/IntroScene/scripts.pory"
	.string "I still have a general idea of how\n"
	.string "we got here and everything, but when\l"
	.string "I try to remember specific events,\l"
	.string "it makes my head hurt.\p"
	.string "It's easier to recall good memories\n"
	.string "than bad ones.$"

FollowerScript_Python_Text_10:
# 369 "data/maps/IntroScene/scripts.pory"
	.string "Mmhmm. So you still remember how\n"
	.string "you caught me?$"

FollowerScript_Python_Text_11:
# 371 "data/maps/IntroScene/scripts.pory"
	.string "Yup, you were practically fresh out\n"
	.string "of the egg.$"

FollowerScript_Python_Text_12:
# 373 "data/maps/IntroScene/scripts.pory"
	.string "How about meeting back up with\n"
	.string "your dad?$"

FollowerScript_Python_Text_13:
# 375 "data/maps/IntroScene/scripts.pory"
	.string "It was great once I figured out he\n"
	.string "wasn't serious about being hired\l"
	.string "to kill me. …Only inconvenience me.$"

FollowerScript_Python_Text_14:
# 377 "data/maps/IntroScene/scripts.pory"
	.string "And how {CENSOR}you lost your virginity{UNCENSOR}?$"

FollowerScript_Python_Text_15:
# 379 "data/maps/IntroScene/scripts.pory"
	.string "…You're too young to be asking that.$"

FollowerScript_Python_Text_16:
# 381 "data/maps/IntroScene/scripts.pory"
	.string "Soooorryyy! I just wanted to see\n"
	.string "if you'd slip up.$"

FollowerScript_Python_Text_17:
# 384 "data/maps/IntroScene/scripts.pory"
	.string "The people in this town are kinda\n"
	.string "funny. They just wander back and forth\l"
	.string "between the same places all day.$"

FollowerScript_Python_Text_18:
# 386 "data/maps/IntroScene/scripts.pory"
	.string "It's not funny, it's sad. They're\n"
	.string "basically hypnotized. That's why\l"
	.string "we're trying to fix it.$"

FollowerScript_Python_Text_19:
# 388 "data/maps/IntroScene/scripts.pory"
	.string "It's kinda funny. Imagine doing the\n"
	.string "same thing on loop every day and\l"
	.string "never questioning it.$"

FollowerScript_Python_Text_20:
# 390 "data/maps/IntroScene/scripts.pory"
	.string "I don't wanna imagine it, that's why\n"
	.string "I became a Pokémon Trainer instead\l"
	.string "of going to college.$"

FollowerScript_Python_Text_21:
# 392 "data/maps/IntroScene/scripts.pory"
	.string "…Damn.$"
