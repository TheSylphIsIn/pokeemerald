LostMansion_1F_MapScripts::
	.byte 0

LostMansion_1F_EventScript_TV::
	msgbox LostMansion_1F_Text_TV, MSGBOX_SIGN
	end
	
LostMansion_1F_Text_TV:
	.string "A news report...\n"
	.string "The picture's cutting out.\p"
	.string "You can only make out the words\n"
	.string "'LEFT FOR...$'"
	
LostMansion_1F_EventScript_Small_Drawer::
	msgbox LostMansion_1F_Text_Small_Drawer, MSGBOX_SIGN
	end
	
LostMansion_1F_Text_Small_Drawer:
	.string "It's full of old dolls.$"
	
LostMansion_1F_EventScript_Big_Drawer::
	msgbox LostMansion_1F_Text_Big_Drawer, MSGBOX_SIGN
	end
	
LostMansion_1F_Text_Big_Drawer:
	.string "It won't open.$"

