EndlessPlainPetalburg_MapScripts::
	.byte 0



EndlessPlainPetalburg_EventScript_ApriGacha::
	lock
	msgbox EndlessPlainPetalburg_Text_ExplainAprigacha, MSGBOX_DEFAULT
	goto EndlessPlainPetalburg_EventScript_ApriGachaStart
	
EndlessPlainPetalburg_EventScript_ApriGachaStart::
	checkmoney 100
	goto_if_eq VAR_RESULT, FALSE, EndlessPlainPetalburg_EventScript_NoMoney
	checkitemspace ITEM_APRICORN
	goto_if_eq VAR_RESULT, FALSE, EndlessPlainPetalburg_EventScript_NoRoom
	checkitemspace ITEM_SUPERCORN
	goto_if_eq VAR_RESULT, FALSE, EndlessPlainPetalburg_EventScript_NoRoom
	msgbox EndlessPlainPetalburg_Text_PromptAprigacha, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, EndlessPlainPetalburg_EventScript_DidntPlay
	removemoney 100
	playse SE_VEND
	msgbox EndlessPlainPetalburg_Text_GachaActivate, MSGBOX_DEFAULT
	random 10
	goto_if_eq VAR_RESULT, 0, EndlessPlainPetalburg_EventScript_GetSupercorn
	giveitem ITEM_APRICORN
	goto EndlessPlainPetalburg_EventScript_ApriGachaStart
	
EndlessPlainPetalburg_EventScript_GetSupercorn:
	giveitem ITEM_SUPERCORN
	goto EndlessPlainPetalburg_EventScript_ApriGachaStart

EndlessPlainPetalburg_EventScript_DidntPlay:
	msgbox EndlessPlainPetalburg_Text_NoMore, MSGBOX_DEFAULT
	release
	end
	
EndlessPlainPetalburg_EventScript_NoMoney:
	msgbox EndlessPlainPetalburg_Text_NoMoney, MSGBOX_DEFAULT
	release
	end
	
EndlessPlainPetalburg_EventScript_NoRoom:
	msgbox EndlessPlainPetalburg_Text_NoRoom, MSGBOX_DEFAULT
	release
	end
	
EndlessPlainPetalburg_Text_ExplainAprigacha:
	.string "This is an APRIGACHA machine.\n"
	.string "It costs ¥100 to play.\p"
	.string "Put the money in, turn the crank,\n"
	.string "and get an APRICORN of randomly\l"
	.string "varying quality.\p"
	.string "RATES:\n"
	.string "APRICORN: 90%, SUPERCORN: 10%.$"
	
EndlessPlainPetalburg_Text_PromptAprigacha:
	.string "Play the APRIGACHA?$"
	
EndlessPlainPetalburg_Text_GachaActivate:
	.string "Turned the crank…\n"
	.string "K-chunk! Something fell out!$"
	
EndlessPlainPetalburg_Text_NoMore:
	.string "I don't want to develop a\n"
	.string "gambling addiction.$"
	
EndlessPlainPetalburg_Text_NoMoney:
	.string "You can't play because you're\n"
	.string "broke.$"
	
EndlessPlainPetalburg_Text_NoRoom:
	.string "You can't play because your bag\n"
	.string "might not have room for the result.$"

EndlessPlainPetalburg_EventScript_GoodiesShelf::
	msgbox EndlessPlainPetalburg_Text_SearchShelf, MSGBOX_DEFAULT
	special BufferShelfFlavorText
	msgbox EndlessPlainPetalburg_Text_VarText, MSGBOX_DEFAULT
	release
	end
	
EndlessPlainPetalburg_Text_SearchShelf:
	.string "{PLAYER} searched the shelf…$"
	
EndlessPlainPetalburg_Text_VarText:
	.string "{STR_VAR_1}$"

EndlessPlainPetalburg_EventScript_BarrierTrigger::
	msgbox EndlessPlainPetalburg_Text_Barrier, MSGBOX_SIGN
	special MovePlayerBack
	end

EndlessPlainPetalburg_Text_Barrier:
	.string "The ENDLESS PLAIN stretches for\n"
	.string "miles and miles, far as your eyes\l"
	.string "can see in any direction…\p"
	.string "You feel more comfortable staying\n"
	.string "close to the door.$"

