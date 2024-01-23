LostMansion_Exit_MapScripts::
	map_script MAP_SCRIPT_ON_RESUME, LostMansion_Exit_OnResume
	.byte 0

LostMansion_Exit_OnResume::
	//call_if_set FLAG_PHANTOM_SOUL_GOT, LostMansion_Exit_RemoveSoul
	end
	
LostMansion_Exit_RemoveSoul::
	setmetatile 2, 2, 0x209, FALSE
	return
	
LostMansion_Exit_EventScript_Soul::
	finditem ITEM_PHANTOM_SOUL
	call LostMansion_Exit_RemoveSoul
	special DrawWholeMapView
	end

