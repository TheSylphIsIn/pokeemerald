ForestKalpa3_MapScripts::
	map_script MAP_SCRIPT_ON_RESUME, ForestKalpa3_OnLoad
	.byte 0

ForestKalpa3_OnLoad::
	call_if_eq VAR_FOREST_STATE, 4, ForestKalpa3_CloseExit
	end

ForestKalpa3_CloseExit:
	setmetatile 33, 9, 0x1C6, FALSE
	setmetatile 33, 10, 0x1D4, TRUE
	setmetatile 33, 11, 0x1F3, TRUE
	setmetatile 34, 8, 0x1DE, TRUE
	setmetatile 34, 9, 0x23B, TRUE
	setmetatile 34, 10, 0x22D, TRUE
	setmetatile 34, 11, 0x253, TRUE
	setmetatile 35, 7, 0X236, TRUE
	setmetatile 35, 8, 0x22E, TRUE
	setmetatile 35, 9, 0X236, TRUE
	setmetatile 35, 10, 0x22E, TRUE
	setmetatile 35, 11, 0x254, TRUE
	setmetatile 36, 8, 0x22D, TRUE
	setmetatile 36, 9, 0X235, TRUE
	setmetatile 36, 7, 0X235, TRUE
	setmetatile 36, 10, 0x22D, TRUE
	setmetatile 36, 11, 0x253, TRUE
	setmetatile 37, 8, 0x22E, TRUE
	setmetatile 37, 9, 0X236, TRUE
	setmetatile 37, 7, 0X236, TRUE
	setmetatile 37, 10, 0x22E, TRUE
	setmetatile 37, 11, 0x254, TRUE
	setmetatile 38, 8, 0x22D, TRUE
	setmetatile 38, 9, 0X235, TRUE
	setmetatile 38, 7, 0X235, TRUE
	setmetatile 38, 10, 0x22D, TRUE
	setmetatile 38, 11, 0x253, TRUE
	setmetatile 39, 8, 0x22E, TRUE
	setmetatile 39, 9, 0X236, TRUE
	setmetatile 39, 7, 0X236, TRUE
	setmetatile 39, 10, 0x22E, TRUE
	setmetatile 39, 11, 0x254, TRUE
	setmetatile 40, 8, 0x22D, TRUE
	setmetatile 40, 9, 0X235, TRUE
	setmetatile 40, 7, 0X235, TRUE
	setmetatile 40, 10, 0x22D, TRUE
	setmetatile 40, 11, 0x253, TRUE
	setmetatile 41, 8, 0x22E, TRUE
	setmetatile 41, 9, 0X236, TRUE
	setmetatile 41, 7, 0X236, TRUE
	setmetatile 41, 10, 0x22E, TRUE
	setmetatile 41, 11, 0x254, TRUE
	setmetatile 41, 8, 0x22D, TRUE
	return
	
ForestKalpa3_Trigger_SetupStepCounter::
	special EnterSafariMode
	setvar VAR_FOREST_STATE, 4
	setmetatile 33, 9, 0x1C6, FALSE
	setmetatile 33, 10, 0x1D4, TRUE
	setmetatile 33, 11, 0x1F3, TRUE
	setmetatile 34, 8, 0x1DE, TRUE
	setmetatile 34, 9, 0x23B, TRUE
	setmetatile 34, 10, 0x22D, TRUE
	setmetatile 34, 11, 0x253, TRUE
	setmetatile 35, 7, 0X236, TRUE
	setmetatile 35, 8, 0x22E, TRUE
	setmetatile 35, 9, 0X236, TRUE
	setmetatile 35, 10, 0x22E, TRUE
	setmetatile 35, 11, 0x254, TRUE
	setmetatile 36, 8, 0x22D, TRUE
	setmetatile 36, 9, 0X235, TRUE
	setmetatile 36, 7, 0X235, TRUE
	setmetatile 36, 10, 0x22D, TRUE
	setmetatile 36, 11, 0x253, TRUE
	setmetatile 37, 8, 0x22E, TRUE
	setmetatile 37, 9, 0X236, TRUE
	setmetatile 37, 7, 0X236, TRUE
	setmetatile 37, 10, 0x22E, TRUE
	setmetatile 37, 11, 0x254, TRUE
	setmetatile 38, 8, 0x22D, TRUE
	setmetatile 38, 9, 0X235, TRUE
	setmetatile 38, 7, 0X235, TRUE
	setmetatile 38, 10, 0x22D, TRUE
	setmetatile 38, 11, 0x253, TRUE
	setmetatile 39, 8, 0x22E, TRUE
	setmetatile 39, 9, 0X236, TRUE
	setmetatile 39, 7, 0X236, TRUE
	setmetatile 39, 10, 0x22E, TRUE
	setmetatile 39, 11, 0x254, TRUE
	setmetatile 40, 8, 0x22D, TRUE
	setmetatile 40, 9, 0X235, TRUE
	setmetatile 40, 7, 0X235, TRUE
	setmetatile 40, 10, 0x22D, TRUE
	setmetatile 40, 11, 0x253, TRUE
	setmetatile 41, 8, 0x22E, TRUE
	setmetatile 41, 9, 0X236, TRUE
	setmetatile 41, 7, 0X236, TRUE
	setmetatile 41, 10, 0x22E, TRUE
	setmetatile 41, 11, 0x254, TRUE
	setmetatile 41, 8, 0x22D, TRUE
	end

ForestKalpa3_Sign_Blank::
	msgbox ForestKalpa3_Text_Blank, MSGBOX_SIGN
	end

ForestKalpa3_Text_Blank:
	.string "                              \n"
	.string "                               $"

ForestKalpa3_Sign_House::
	msgbox ForestKalpa3_Text_House, MSGBOX_SIGN
	end

ForestKalpa3_Text_House:
	.string "The doorknob is missing.$"

ForestKalpa3_TriggerScript_FlowersTrigger1::
	lock
	msgbox ForestKalpa3_Text_Flowers1, MSGBOX_AUTOCLOSE
	waitmessage
	setvar VAR_TEMP_0, 1
	release
	end

ForestKalpa3_TriggerScript_FlowersTrigger2::
	lock
	applymovement 2, Common_Movement_FaceUp
	waitmovement 0
	msgbox ForestKalpa3_Text_Flowers2, MSGBOX_DEFAULT
	closemessage
	applymovement 2, ForestKalpa3_Movement_HikerRunUp
	waitmovement 0
	msgbox ForestKalpa3_Text_Flowers3, MSGBOX_DEFAULT
	applymovement 2, Common_Movement_FaceRight
	waitmovement 0
	setobjectxyperm 2, 43, 29
	setvar VAR_TEMP_0, 2
	release
	end

ForestKalpa3_EventScript_Hiker::
	msgbox ForestKalpa3_Text_Flowers4, MSGBOX_AUTOCLOSE
	end

ForestKalpa3_Movement_HikerRunUp::
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_left
	walk_fast_left
	walk_fast_left
	step_end

ForestKalpa3_Text_Flowers1:
	.string "Oh no…\n"
	.string "Is someone there?\p"
	.string "Please, don't come any closer!$"

ForestKalpa3_Text_Flowers2:
	.string "No…get away!\n"
	.string "I'm safe here!$"

ForestKalpa3_Text_Flowers3:
	.string "It doesn't like the flowers…\n"
	.string "I'm safe here. I can escape soon.\p"
	.string "But you…it's already too late for you.\n"
	.string "You're contaminated. It'll get you.\p"
	.string "If you draw it here, I'm done for…\n"
	.string "So please…stay away…$"

ForestKalpa3_Text_Flowers4:
	.string "Stay away…\n"
	.string "Stay away…\l"
	.string "Stay away…\l"
	.string "Stay away…\l"
	.string "Stay away…\l"
	.string "Stay away…\l"
	.string "Stay away…\l"
	.string "Stay away…\l"
	.string "Stay away…\l"
	.string "Stay away…\l"
	.string "Stay away…\l"
	.string "Stay away…$"

ForestKalpa3_EmptyBall::
	msgbox ForestKalpa3_Text_EmptyBall, MSGBOX_SIGN
	end

ForestKalpa3_Text_EmptyBall:
	.string "It's locked shut.\n"
	.string "Looks like it's empty.$"

ForestKalpa3_BrokenBall::
	msgbox ForestKalpa3_Text_BrokenBall, MSGBOX_SIGN
	end

ForestKalpa3_Text_BrokenBall:
	.string "Shards of metal and plastic.$"


