ForestKalpa3_MapScripts::
	.byte 0
	
ForestKalpa3_Trigger_SetupStepCounter::
	special EnterSafariMode
	setvar VAR_FOREST_STATE, 4
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


