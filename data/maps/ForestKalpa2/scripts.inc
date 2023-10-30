ForestKalpa2_MapScripts::
	map_script MAP_SCRIPT_ON_LOAD, ForestKalpa2_OnLoad
	.byte 0

ForestKalpa2_OnLoad::
	call_if_eq VAR_FOREST_STATE, 3, ForestKalpa2_OpenExitPath
	end

ForestKalpa2_OpenExitPath:
	setmetatile 29, 5, 0x00D, 0
	setmetatile 29, 6, 0x1CF, 0
	setmetatile 29, 7, 0x23C, 1
	setmetatile 30, 5, 0x00D, 0
	setmetatile 30, 6, 0x1CE, 0
	setmetatile 30, 7, 0x23B, 1
	setmetatile 31, 5, 0x1E4, 1
	setmetatile 31, 6, 0x1CF, 0
	setmetatile 31, 7, 0x23C, 1
	setmetatile 32, 5, 0x1E5, 1
	setmetatile 32, 6, 0x00D, 0
	setmetatile 32, 7, 0x1CF, 0
	setmetatile 32, 8, 0x1D5, 1
	setmetatile 33, 5, 0x1E4, 1
	setmetatile 33, 6, 0x00D, 0
	setmetatile 33, 7, 0x00D, 0
	setmetatile 33, 8, 0x00D, 0
	setmetatile 33, 9, 0x00D, 0
	setmetatile 34, 6, 0x1DC, 1
	setmetatile 34, 7, 0x1D4, 1
	setmetatile 34, 8, 0x1E4, 1
	setmetatile 34, 9, 0x001, 0
	return

ForestKalpa2_TriggerScript_Left::
	lockall
	setflag FLAG_TEMP_1
	goto_if_set FLAG_TEMP_2, ForestKalpa2_ShowMainTree
	releaseall
	end

ForestKalpa2_TriggerScript_Right::
	lockall
	setflag FLAG_TEMP_2
	goto_if_set FLAG_TEMP_1, ForestKalpa2_ShowMainTree
	releaseall
	end

ForestKalpa2_ShowMainTree::
	clearflag FLAG_KALPA2_MAIN_TREE
	addobject 8
	setvar VAR_FOREST_STATE, 2
	setflag FLAG_KALPA1_TREE1
	setflag FLAG_KALPA1_TREE2
	setflag FLAG_KALPA1_TREE3
	setflag FLAG_ENTRANCE_CUT_TREE
	end

ForestKalpa2_EventScript_Ranger::
	trainerbattle_single TRAINER_BARNY, ForestKalpa2_Text_RangerIntro, ForestKalpa2_Text_RangerDefeat
	msgbox ForestKalpa2_Text_RangerAfter, MSGBOX_AUTOCLOSE
	end

ForestKalpa2_Text_RangerIntro:
	.string "Halt! Only authorized RANGERs are\n"
	.string "allowed past this point.\p"
	.string "You need to turn back.$"

ForestKalpa2_Text_RangerDefeat:
	.string "Hmmm.$"

ForestKalpa2_Text_RangerAfter:
	.string "I can't stop you from going deeper\n"
	.string "into The Forest. But it's unwise.$"

