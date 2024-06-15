LittlerootTown_ProfessorBirchsLab_MapScripts::
# 8 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, LittlerootTown_ProfessorBirchsLab_MapScripts_MAP_SCRIPT_ON_LOAD
# 15 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, LittlerootTown_ProfessorBirchsLab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

LittlerootTown_ProfessorBirchsLab_MapScripts_MAP_SCRIPT_ON_LOAD:
# 10 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_FONEI_COAST_STATE, 4
	goto_if_ge LittlerootTown_ProfessorBirchsLab_MapScripts_MAP_SCRIPT_ON_LOAD_1
	return

LittlerootTown_ProfessorBirchsLab_MapScripts_MAP_SCRIPT_ON_LOAD_1:
# 12 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setmetatile 6, 1, 0x20B, TRUE
	return

LittlerootTown_ProfessorBirchsLab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 17 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	map_script_2 VAR_FONEI_COAST_STATE, 3, LittlerootTown_ProfessorBirchsLab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0
	.2byte 0

LittlerootTown_ProfessorBirchsLab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0:
# 19 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	lockall
# 20 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	speakername SpeakerName_Mangrove
# 21 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_0, MSGBOX_AUTOCLOSE
# 22 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp6
# 23 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmovement 0
# 24 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	speakername SpeakerName_Mangrove
# 25 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_1, MSGBOX_AUTOCLOSE
# 28 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement 1, Common_Movement_FaceRight
# 29 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmovement 0
# 30 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	delay 30
# 31 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	speakername SpeakerName_Mangrove
# 32 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_2, MSGBOX_DEFAULT
# 33 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement 1, Common_Movement_FaceDown
# 34 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_3, MSGBOX_DEFAULT
# 35 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	speakername SpeakerName_Morgan
# 36 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_4, MSGBOX_DEFAULT
# 37 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	speakername SpeakerName_Mangrove
# 38 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_5, MSGBOX_AUTOCLOSE
# 41 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement 1, CranTown_Lab_Movement_ProfGiveDex
# 42 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmovement 0
# 43 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call LittlerootTown_ProfessorBirchsLab_EventScript_ReceivePokedex
# 44 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	speakername SpeakerName_Mangrove
# 45 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_6, MSGBOX_AUTOCLOSE
# 46 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	giveitem ITEM_POKE_BALL, 10
# 47 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	closemessage
# 48 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement 1, CranTown_Lab_Movement_ProfGiveDexesToRivals
# 49 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement 4, CranTown_Lab_Movement_GruntStealAbilScanner
# 50 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmovement 1
# 51 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	speakername SpeakerName_Calvin
# 52 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_7, MSGBOX_DEFAULT
# 53 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	speakername SpeakerName_Mangrove
# 54 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_8, MSGBOX_DEFAULT
# 58 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	speakername SpeakerName_Calvin
# 59 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_9, MSGBOX_DEFAULT
# 60 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	speakername SpeakerName_Mangrove
# 61 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_10, MSGBOX_DEFAULT
# 62 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	speakername NULL
# 63 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_11, MSGBOX_DEFAULT
# 64 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	speakername SpeakerName_Mangrove
# 65 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_12, MSGBOX_DEFAULT
# 66 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	speakername SpeakerName_Calvin
# 67 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_13, MSGBOX_DEFAULT
# 68 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement 1, Common_Movement_FaceUp
# 69 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmovement 0
# 70 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	playse SE_PIN
# 71 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement 4, Common_Movement_ExclamationMark
# 72 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	speakername SpeakerName_Mangrove
# 73 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_14, MSGBOX_DEFAULT
# 74 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement 4, Common_Movement_FaceDown
# 75 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	speakername SpeakerName_Unknown
# 76 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_15, MSGBOX_AUTOCLOSE
# 77 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setmetatile 6, 1, 0x20B, TRUE
# 78 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	special DrawWholeMapView
# 79 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement 4, CranTown_Lab_Movement_GruntRunAway1
# 80 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmovement 0
# 81 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement 4, CranTown_Lab_Movement_GruntRunAway2
# 82 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	delay 8
# 83 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement 1, CranTown_Lab_Movement_TryStopGrunt
# 84 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	delay 16
# 85 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement 3, CranTown_Lab_Movement_CalvinWatchGrunt
# 86 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	speakername SpeakerName_Morgan
# 87 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_16
# 88 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmovement 4
# 89 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	removeobject 4
# 90 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	closemessage
# 91 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	delay 60
# 92 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	delay 30
# 93 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	speakername SpeakerName_Mangrove
# 94 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_17, MSGBOX_AUTOCLOSE
# 96 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	closemessage
# 97 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	releaseall
# 98 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_FONEI_COAST_STATE, 4
# 99 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	clearflag FLAG_HIDE_FONEI_COAST_NPCS
	return


CranTown_Lab_EventScript_ProfessorMangrove::
# 106 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	lock
# 107 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	faceplayer
# 108 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	checkitem ITEM_SCANNER, 1
# 109 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq CranTown_Lab_EventScript_ProfessorMangrove_2
CranTown_Lab_EventScript_ProfessorMangrove_1:
# 113 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	speakername SpeakerName_Mangrove
# 114 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	message CranTown_Lab_EventScript_ProfessorMangrove_Text_1
# 115 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmessage
# 116 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	dynmultipush CranTown_Lab_EventScript_ProfessorMangrove_Text_2, 1
# 117 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	dynmultipush CranTown_Lab_EventScript_ProfessorMangrove_Text_3, 2
# 118 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	dynmultipush CranTown_Lab_EventScript_ProfessorMangrove_Text_4, 3
# 119 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	dynmultistack 0, 0, TRUE, 6, FALSE, 0, DYN_MULTICHOICE_CB_NONE
# 120 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	switch VAR_RESULT
# 122 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case 0, CranTown_Lab_EventScript_ProfessorMangrove_6
# 135 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case 1, CranTown_Lab_EventScript_ProfessorMangrove_7
# 137 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case 2, CranTown_Lab_EventScript_ProfessorMangrove_8
# 141 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case 3, CranTown_Lab_EventScript_ProfessorMangrove_9
CranTown_Lab_EventScript_ProfessorMangrove_4:
# 147 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	release
	return

CranTown_Lab_EventScript_ProfessorMangrove_2:
# 111 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	dynmultipush CranTown_Lab_EventScript_ProfessorMangrove_Text_0, 0
	goto CranTown_Lab_EventScript_ProfessorMangrove_1

CranTown_Lab_EventScript_ProfessorMangrove_6:
# 123 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 124 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	removeitem ITEM_SCANNER
# 125 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	message CranTown_Lab_EventScript_ProfessorMangrove_Text_5
# 126 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitfanfare
# 127 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	speakername SpeakerName_Mangrove
# 128 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox CranTown_Lab_EventScript_ProfessorMangrove_Text_6, MSGBOX_AUTOCLOSE
# 134 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_FONEI_COAST_STATE, 7
	goto CranTown_Lab_EventScript_ProfessorMangrove_4

CranTown_Lab_EventScript_ProfessorMangrove_7:
# 136 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto ProfBirch_EventScript_RatePokedexOrRegister
	goto CranTown_Lab_EventScript_ProfessorMangrove_4

CranTown_Lab_EventScript_ProfessorMangrove_8:
# 138 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	message CranTown_Lab_EventScript_ProfessorMangrove_Text_7
# 139 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	dynmultipush CranTown_Lab_EventScript_ProfessorMangrove_Text_8, 0
# 140 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	dynmultipush CranTown_Lab_EventScript_ProfessorMangrove_Text_9, 1
	goto CranTown_Lab_EventScript_ProfessorMangrove_4

CranTown_Lab_EventScript_ProfessorMangrove_9:
# 142 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_FONEI_COAST_STATE, 6
	goto_if_gt CranTown_Lab_EventScript_ProfessorMangrove_10
	goto CranTown_Lab_EventScript_ProfessorMangrove_4

CranTown_Lab_EventScript_ProfessorMangrove_10:
# 144 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox CranTown_Lab_EventScript_ProfessorMangrove_Text_10, MSGBOX_DEFAULT
	goto CranTown_Lab_EventScript_ProfessorMangrove_4


CranTown_Lab_EventScript_Morgan::
# 152 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	speakername SpeakerName_Morgan
# 153 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox CranTown_Lab_EventScript_Morgan_Text_0, MSGBOX_NPC
	return


CranTown_Lab_EventScript_Calvin::
# 158 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	speakername SpeakerName_Calvin
# 159 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox CranTown_Lab_EventScript_Calvin_Text_0, MSGBOX_NPC
	return


# 162 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
CranTown_Lab_Movement_ProfGiveDex:
# 164 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_down
# 165 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	delay_16
# 166 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_in_place_down
# 167 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	delay_16
	step_end

# 170 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
CranTown_Lab_Movement_ProfGiveDexesToRivals:
# 172 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_right
# 173 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	face_down
# 174 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	delay_16
# 175 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_in_place_down
# 176 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	delay_16
# 176 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	delay_16
# 177 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_left
# 177 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_left
# 178 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	face_down
# 179 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	delay_16
# 180 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_in_place_down
# 181 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	delay_16
# 181 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	delay_16
# 182 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_right
# 183 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_up
# 184 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	face_down
	step_end

# 187 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
CranTown_Lab_Movement_GruntStealAbilScanner:
# 189 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_slow_up
# 190 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_slow_right
# 191 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_slow_up
# 192 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_slow_right
# 193 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	delay_16
# 194 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_slow_right
# 195 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_slow_up
# 196 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_slow_right
# 196 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_slow_right
# 196 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_slow_right
# 197 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	face_up
	step_end

# 200 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
CranTown_Lab_Movement_GruntRunAway1:
# 202 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_fast_left
# 202 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_fast_left
	step_end

# 205 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
CranTown_Lab_Movement_GruntRunAway2:
# 207 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	jump_2_down
# 208 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_fast_down
# 208 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_fast_down
# 208 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_fast_down
# 208 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_fast_down
# 208 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_fast_down
# 208 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_fast_down
# 208 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_fast_down
# 208 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_fast_down
# 209 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_fast_right
# 209 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_fast_right
	step_end

# 212 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
CranTown_Lab_Movement_TryStopGrunt:
# 214 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_fast_left
# 215 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	delay_16
# 216 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	delay_16
# 217 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	face_down
	step_end

# 220 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
CranTown_Lab_Movement_CalvinWatchGrunt:
# 222 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_fast_up
# 223 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	face_left
# 224 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	delay_16
# 225 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_fast_down
# 225 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_fast_down
	step_end

# 228 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 229 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
.set LOCALID_MANGROVE, 1
# 230 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
.set LOCALID_MORGAN, 2
# 231 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
.set LOCALID_CALVIN, 3
# 232 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
.set LOCALID_GRUNT, 4
# 233 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 234 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_ReceivePokedex::
# 235 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 236 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	message LittlerootTown_ProfessorBirchsLab_Text_ReceivedPokedex
# 237 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitfanfare
# 238 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 239 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	special SetUnlockedPokedexFlags
# 240 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	return
# 241 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 242 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_Machine::
# 243 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_SeriousLookingMachine, MSGBOX_SIGN
# 244 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 245 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 246 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_PC::
# 247 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_PCUsedForResearch, MSGBOX_SIGN
# 248 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 249 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 250 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_Bookshelf::
# 251 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_CrammedWithBooksOnPokemon, MSGBOX_SIGN
# 252 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 253 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 254 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_Book::
# 255 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_BookTooHardToRead, MSGBOX_SIGN
# 256 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 257 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 258 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_ReceivedPokedex:
# 259 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "{PLAYER} received the Pokédex!$"
# 260 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 261 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_SeriousLookingMachine:
# 262 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "It's a serious-looking machine.\n"
# 263 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "The Prof must use this for research.$"
# 264 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 265 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_PCUsedForResearch:
# 266 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "It's a PC used for research.\n"
# 267 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Better not mess around with it.$"
# 268 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 269 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_CrammedWithBooksOnPokemon:
# 270 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "It's crammed with books on Pokémon.$"
# 271 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 272 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_BookTooHardToRead:
# 273 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "It's a book that's too hard to read.$"

LittlerootTown_ProfessorBirchsLab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_0:
# 21 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "{PLAYER}, there you are.\n"
	.string "Come here, please.$"

LittlerootTown_ProfessorBirchsLab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_1:
# 25 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Your friends were just telling me\n"
	.string "an interesting story…\p"
	.string "You say you're from a world where\n"
	.string "Pokémon only exist in video games.\l"
	.string "The three of you spent a night\l"
	.string "camping in some supposedly haunted\l"
	.string "ruins, and when you woke up, you were\l"
	.string "here in the {EMPHASIS_BLUE}Fonei{EMPHASIS_OFF} region.$"

LittlerootTown_ProfessorBirchsLab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_2:
# 32 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "It sounds quite unbelievable…$"

LittlerootTown_ProfessorBirchsLab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_3:
# 34 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "But, I do believe it.$"

LittlerootTown_ProfessorBirchsLab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_4:
# 36 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Oh, that's a relief.{PAUSE 30}\n"
	.string "…Wait, why?$"

LittlerootTown_ProfessorBirchsLab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_5:
# 38 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "This sort of story is very common\n"
	.string "in the Fonei region.\p"
	.string "Either everyone who doesn't want to\n"
	.string "talk about their past makes up the\l"
	.string "same story, or it's actually true.\p"
	.string "It lines up with some folklore we've\n"
	.string "found records of as well…\p"
	.string "But that's not what I called you\n"
	.string "here to talk about.\l"
	.string "First, please take this.$"

LittlerootTown_ProfessorBirchsLab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_6:
# 45 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "I'm sure you know what that is.\n"
	.string "Take these, too.$"

LittlerootTown_ProfessorBirchsLab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_7:
# 52 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Wait, what? I thought we were in big\n"
	.string "trouble…you're giving us gifts?$"

LittlerootTown_ProfessorBirchsLab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_8:
# 54 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Yes. Listen closely. Those Pokémon\n"
	.string "are part of our research.\p"
	.string "I am the head of a research team\n"
	.string "whose goal is to survey the Pokémon\l"
	.string "of the Fonei region. Fonei has only\l"
	.string "recently been settled by humans.\p"
	.string "There's no scientific data on the\n"
	.string "unique Pokémon that live here.\p"
	.string "It's our team's goal to change that,\n"
	.string "but…none of us are Trainers.\l"
	.string "It's too dangerous to explore far\l"
	.string "from civilization without Pokémon.\p"
	.string "I'll let you keep the Pokémon if you\n"
	.string "collect data for our Pokédex by\l"
	.string "exploring and catching more Pokémon.$"

LittlerootTown_ProfessorBirchsLab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_9:
# 59 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Why do you need us to do your work?\n"
	.string "We're not Trainers either!$"

LittlerootTown_ProfessorBirchsLab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_10:
# 61 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "You want to find a way back to your\n"
	.string "home world, don't you?$"

LittlerootTown_ProfessorBirchsLab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_11:
# 63 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "CALVIN: Well, duh!\n"
	.string "MORGAN: Um…yeah…?$"

LittlerootTown_ProfessorBirchsLab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_12:
# 65 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Then you'll want to become Trainers\n"
	.string "anyway, so it's a fair exchange. It's…$"

LittlerootTown_ProfessorBirchsLab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_13:
# 67 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Hey, who's that?$"

LittlerootTown_ProfessorBirchsLab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_14:
# 73 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Hey! Get your hands off my Scanner!$"

LittlerootTown_ProfessorBirchsLab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_15:
# 76 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Uh-oh! I've been spotted!$"

LittlerootTown_ProfessorBirchsLab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_16:
# 87 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "EEEEEEEEK!!$"

LittlerootTown_ProfessorBirchsLab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_17:
# 94 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "… … … … … … … … … …\p"
	.string "Well, this seems like a good chance\n"
	.string "for you beginner Trainers to hone\l"
	.string "your skills, hmmm?\p"
	.string "Follow that thief and get back my\n"
	.string "Scanner, please. He is likely hiding\l"
	.string "in the clearing north of town.$"

CranTown_Lab_EventScript_ProfessorMangrove_Text_0:
# 111 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Return Scanner$"

CranTown_Lab_EventScript_ProfessorMangrove_Text_1:
# 114 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Did you need something from me?$"

CranTown_Lab_EventScript_ProfessorMangrove_Text_2:
# 116 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Check Pokédex$"

CranTown_Lab_EventScript_ProfessorMangrove_Text_3:
# 117 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "About Fonei$"

CranTown_Lab_EventScript_ProfessorMangrove_Text_4:
# 118 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Where to go?$"

CranTown_Lab_EventScript_ProfessorMangrove_Text_5:
# 125 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "{PLAYER} returned the Scanner to\n"
	.string "Professor Mangrove.$"

CranTown_Lab_EventScript_ProfessorMangrove_Text_6:
# 128 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Wonderful!\p"
	.string "Oh, Morgan and Calvin aren't with\n"
	.string "you? This is important…\l"
	.string "Well, you'll have to fill them in.\p"
	.string "About your chances of going home…\n"
	.string "It…MIGHT be possible.\p"
	.string "I study Pokémon, not history, so I\n"
	.string "can't say for sure if it's\l"
	.string "ever happened before.\p"
	.string "But traveling between worlds is a\n"
	.string "common theme in Fonei folklore.\p"
	.string "Perhaps by exploring, you could\n"
	.string "find clues about how this might\l"
	.string "be done.\p"
	.string "But first, I'd ask another favor…\p"
	.string "Those Pokémon I gave you were in the\n"
	.string "care of Professor Spade, my colleague.\l"
	.string "If you meet him, please show that\l"
	.string "Pokémon to him. His lab is near\l"
	.string "{EMPHASIS_BLUE}Port Wander{EMPHASIS_OFF}, but he tends to make\l"
	.string "trips to the city regularly.\p"
	.string "Oh, pardon me, you wouldn't know\n"
	.string "where those are…I think there's a\l"
	.string "map in the Pokémon Center.\p"
	.string "If you need any help, you can\n"
	.string "always ask me. I'll be here.$"

CranTown_Lab_EventScript_ProfessorMangrove_Text_7:
# 138 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "What are you curious about?$"

CranTown_Lab_EventScript_ProfessorMangrove_Text_8:
# 139 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Cran Town$"

CranTown_Lab_EventScript_ProfessorMangrove_Text_9:
# 140 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Folklore: World travel$"

CranTown_Lab_EventScript_ProfessorMangrove_Text_10:
# 144 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "$"

CranTown_Lab_EventScript_Morgan_Text_0:
# 153 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "That was scary! A robber ran right\n"
	.string "past me…$"

CranTown_Lab_EventScript_Calvin_Text_0:
# 159 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "That punk! But he was bold, too…$"
