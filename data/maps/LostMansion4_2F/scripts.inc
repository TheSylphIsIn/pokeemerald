LostMansion4_2F_MapScripts::
	.byte 0
	
LostMansion4_2F_EventScript_Hex::
	msgbox LostMansion4_2F_EventScript_Hex_Text, MSGBOX_NPC
	end
	
LostMansion4_2F_EventScript_Item_1::
	finditem ITEM_TM01
	end

LostMansion4_2F_EventScript_Hex_Text:
	.string "Hah…so you did make it.\n"
	.string "I heard you approaching, but I was\l"
	.string "expecting you to get lost.\p"
	.string "Many have tried and failed…\p"
	.string "It's just as well. The item at the\n"
	.string "top…you can have it. It's slept here\l"
	.string "long enough.\p"
	.string "Take good care of me. Hoohoohoo…$"
	
