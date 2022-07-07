LostMansion3_2F_2_MapScripts::
	.byte 0

LostMansion3_2F_2_EventScript_Girls::
	msgbox LostMansion_2F_2_Text_Girls, MSGBOX_NPC
	end
	
LostMansion3_2F_2_EventScript_Boys::
	msgbox LostMansion_2F_2_Text_Boys, MSGBOX_NPC
	end
	
LostMansion3_2F_2_EventScript_Item::
	finditem ITEM_DUSK_STONE
	end
	
LostMansion_2F_2_Text_Boys:
	.string "I just can't wait!$"
	
LostMansion_2F_2_Text_Girls:
	.string "It will be so awesome!$"