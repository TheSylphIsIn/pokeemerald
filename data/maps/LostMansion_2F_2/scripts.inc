LostMansion_2F_2_MapScripts::
	.byte 0

LostMansion_2F_2_EventScript_DoorSign::
	msgbox LostMansion_2F_2_DoorSignText, MSGBOX_SIGN
	end
	
LostMansion_2F_2_DoorSignText:
	.string "Look the other way!$"

LostMansion_2F_2_EventScript_Bed::
	msgbox LostMansion_2F_2_BedText, MSGBOX_SIGN
	end
	
LostMansion_2F_2_BedText:
	.string "The sheets are rumpled...\n"
	.string "Who lives here?$"
	
LostMansion_2F_2_EventScript_Fridge::
	playmoncry SPECIES_WYCERN, CRY_MODE_NORMAL
	msgbox LostMansion_2F_2_FridgeText, MSGBOX_SIGN
	waitmoncry
	end
	
LostMansion_2F_2_FridgeText:
	.string "There's a dragon in the fridge.\n"
	.string "Better not disturb it.$"
	
LostMansion_2F_2_EventScript_Sink::
	msgbox LostMansion_2F_2_SinkText, MSGBOX_SIGN
	end
	
LostMansion_2F_2_SinkText:
	.string "It's making a sound, as if it's\n"
	.string "draining, but there's no water...$"
	
LostMansion_2F_2_EventScript_Drawers::
	msgbox LostMansion_2F_2_DrawersText, MSGBOX_SIGN
	end
	
LostMansion_2F_2_DrawersText:
	.string "The drawers are decorative.\n"
	.string "They don't come out.$"

LostMansion_2F_2_EventScript_TV::
	msgbox LostMansion_2F_2_TVText, MSGBOX_SIGN
	end
	
LostMansion_2F_2_TVText:
	.string "It seems to be a video of a game."
	.string "Someone is winding a music box.$"

LostMansion_2F_2_EventScript_SignCheckedAlready::
	msgbox LostMansion_2F_2_Text_SignTorn, MSGBOX_NPC
	end
	
LostMansion_2F_2_Text_SignGeneric:
	.string "A poster on the wall.\n"
	.string "The text is unreadable.\p"
	.string "Look behind it?$"
	
LostMansion_2F_2_Text_SignNo:
	.string "Decided to leave well enough alone.$"
	
LostMansion_2F_2_Text_SignTorn:
	.string "The sign was viciously torn to\n"
	.string "pieces...\p"
	.string "Huh? No it wasn't?$"
	
LostMansion_2F_2_Text_Boo:
	.string "BOO!$"

LostMansion_2F_2_EventScript_TrappedSign1::
	lock
	goto_if_set FLAG_TEMP_11, LostMansion_2F_2_EventScript_SignCheckedAlready
	msgbox LostMansion_2F_2_Text_SignGeneric, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, LostMansion_2F_2_EventScript_TrappedSign1_Yes
	goto_if_eq VAR_RESULT, NO, LostMansion_2F_2_EventScript_Signs_No
	end
	
LostMansion_2F_2_EventScript_TrappedSign1_Yes::
	setwildbattle SPECIES_SHUPPET, 30
	waitse
	playmoncry SPECIES_SHUPPET, CRY_MODE_ENCOUNTER
	msgbox LostMansion_2F_2_Text_Boo, MSGBOX_NPC
	waitmoncry
	setflag FLAG_TEMP_11
	dowildbattle
	release
	end

LostMansion_2F_2_EventScript_Signs_No::
	msgbox LostMansion_2F_2_Text_SignNo, MSGBOX_SIGN
	release
	end
	
LostMansion_2F_2_EventScript_TrappedSign2::
	lock
	goto_if_set FLAG_TEMP_12, LostMansion_2F_2_EventScript_SignCheckedAlready
	msgbox LostMansion_2F_2_Text_SignGeneric, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, LostMansion_2F_2_EventScript_TrappedSign2_Yes
	goto_if_eq VAR_RESULT, NO, LostMansion_2F_2_EventScript_Signs_No
	end
	
LostMansion_2F_2_EventScript_TrappedSign2_Yes::
	setwildbattle SPECIES_BANETTE, 37
	waitse
	playmoncry SPECIES_BANETTE, CRY_MODE_ENCOUNTER
	msgbox LostMansion_2F_2_Text_Boo, MSGBOX_NPC
	waitmoncry
	setflag FLAG_TEMP_12
	dowildbattle
	release
	end

LostMansion_2F_2_EventScript_TrappedSign3::
	lock
	goto_if_set FLAG_TEMP_13, LostMansion_2F_2_EventScript_SignCheckedAlready
	msgbox LostMansion_2F_2_Text_SignGeneric, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, LostMansion_2F_2_EventScript_TrappedSign3_Yes
	goto_if_eq VAR_RESULT, NO, LostMansion_2F_2_EventScript_Signs_No
	end
	
LostMansion_2F_2_EventScript_TrappedSign3_Yes::
	setwildbattle SPECIES_BANETTE, 38 // should be banette's evolution
	waitse
	playmoncry SPECIES_BANETTE, CRY_MODE_ENCOUNTER
	msgbox LostMansion_2F_2_Text_Boo, MSGBOX_NPC
	waitmoncry
	setflag FLAG_TEMP_13
	dowildbattle
	release
	end
	
LostMansion_2F_2_EventScript_NormalSign1::
	lock
	goto_if_set FLAG_TEMP_14, LostMansion_2F_2_EventScript_SignCheckedAlready
	msgbox LostMansion_2F_2_Text_SignGeneric, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, LostMansion_2F_2_EventScript_NormalSign1_Yes
	goto_if_eq VAR_RESULT, NO, LostMansion_2F_2_EventScript_Signs_No
	end

LostMansion_2F_2_EventScript_NormalSign1_Yes::
	playfanfare MUS_OBTAIN_B_POINTS
	msgbox LostMansion_2F_2_Text_NormalSign1, MSGBOX_SIGN
	waitfanfare
	msgbox LostMansion_2F_2_Text_NormalSign1_2, MSGBOX_SIGN
	setflag FLAG_TEMP_14
	release
	end
	
LostMansion_2F_2_EventScript_NormalSign2::
	lock
	goto_if_set FLAG_TEMP_16, LostMansion_2F_2_EventScript_SignCheckedAlready
	msgbox LostMansion_2F_2_Text_SignGeneric, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, LostMansion_2F_2_EventScript_NormalSign2_Yes
	goto_if_eq VAR_RESULT, NO, LostMansion_2F_2_EventScript_Signs_No
	end

LostMansion_2F_2_EventScript_NormalSign2_Yes::
	msgbox LostMansion_2F_2_Text_NormalSign2, MSGBOX_SIGN
	finditem ITEM_POKE_BALL
	setflag FLAG_TEMP_16
	release
	end
	
LostMansion_2F_2_EventScript_NormalSign3::
	lock
	goto_if_set FLAG_TEMP_17, LostMansion_2F_2_EventScript_SignCheckedAlready
	msgbox LostMansion_2F_2_Text_SignGeneric, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, LostMansion_2F_2_EventScript_NormalSign3_Yes
	goto_if_eq VAR_RESULT, NO, LostMansion_2F_2_EventScript_Signs_No
	end

LostMansion_2F_2_EventScript_NormalSign3_Yes::
	msgbox LostMansion_2F_2_Text_NormalSign3, MSGBOX_SIGN
	setflag FLAG_TEMP_17
	release
	end
	
LostMansion_2F_2_Text_NormalSign1:
	.string "Congratulations! You have just won\n"
	.string "The JEF and PAUL award for excellence\l"
	.string "in shopping centers!$"
	
LostMansion_2F_2_Text_NormalSign1_2:
	.string "...actually, there was nothing\n"
	.string "behind the poster.$"
	
LostMansion_2F_2_Text_NormalSign2:
	.string "Huh? Something fell out!$"
	
LostMansion_2F_2_Text_NormalSign3:
	.string "Nothing back here but a blank wall.$"
	
LostMansion_2F_2_EventScript_CorrectSign::
	lock
	goto_if_set FLAG_TEMP_18, LostMansion_2F_2_EventScript_SignCheckedAlready
	msgbox LostMansion_2F_2_Text_SignGeneric, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, LostMansion_2F_2_EventScript_CorrectSign_Yes
	goto_if_eq VAR_RESULT, NO, LostMansion_2F_2_EventScript_Signs_No
	end
	
LostMansion_2F_2_EventScript_CorrectSign_Yes::
	msgbox LostMansion_2F_2_Text_CorrectSign, MSGBOX_NPC
	playse SE_PIN
	setmetatile 1, 3, 0x224, FALSE
	setmetatile 1, 4, 0x224, FALSE
	special DrawWholeMapView
	setflag FLAG_TEMP_18
	msgbox LostMansion_2F_2_Text_CorrectSign2, MSGBOX_NPC
	release
	end
	
LostMansion_2F_2_Text_CorrectSign:
	.string "There's a button behind the poster.\n"
	.string "Let's press it.$"
	
LostMansion_2F_2_Text_CorrectSign2:
	.string "Something clicked...$"

