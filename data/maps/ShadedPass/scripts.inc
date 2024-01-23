ShadedPass_MapScripts::
	.byte 0

ShadedPass_EventScript_Item1::
	finditem ITEM_GREAT_BALL
	end
	
ShadedPass_EventScript_Item2::
	finditem ITEM_HYPER_POTION
	end
	
ShadedPass_EventTile_HideGirl::
	removeobject 2
	setvar VAR_TEMP_1, 1
	//setflag FLAG_HIDE_SHADED_PASS_GIRL
	end
	
