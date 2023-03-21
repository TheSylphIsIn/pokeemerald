EndlessPlainRustboro_MapScripts::
	.byte 0

EndlessPlainRustboro_EventScript_ApriGacha::
	lock
	msgbox EndlessPlainRustboro_Text_ExplainAprigacha, MSGBOX_DEFAULT
	goto EndlessPlainRustboro_EventScript_ApriGachaStart
	
EndlessPlainRustboro_EventScript_ApriGachaStart::
	checkmoney 150
	goto_if_eq VAR_RESULT, FALSE, EndlessPlainPetalburg_EventScript_NoMoney
	checkitemspace ITEM_APRICORN
	goto_if_eq VAR_RESULT, FALSE, EndlessPlainPetalburg_EventScript_NoRoom
	checkitemspace ITEM_SUPERCORN
	goto_if_eq VAR_RESULT, FALSE, EndlessPlainPetalburg_EventScript_NoRoom
	checkitemspace ITEM_HYPERCORN
	goto_if_eq VAR_RESULT, FALSE, EndlessPlainPetalburg_EventScript_NoRoom
	msgbox EndlessPlainPetalburg_Text_PromptAprigacha, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, EndlessPlainPetalburg_EventScript_DidntPlay
	removemoney 150
	playse SE_VEND
	msgbox EndlessPlainPetalburg_Text_GachaActivate, MSGBOX_DEFAULT
	random 5
	goto_if_eq VAR_RESULT, 0, EndlessPlainRustboro_EventScript_GetSupercorn
	giveitem ITEM_APRICORN
	goto EndlessPlainRustboro_EventScript_ApriGachaStart
	
EndlessPlainRustboro_EventScript_GetSupercorn::
	random 20
	goto_if_eq VAR_RESULT, 0, EndlessPlainRustboro_EventScript_GetHypercorn
	giveitem ITEM_SUPERCORN
	goto EndlessPlainRustboro_EventScript_ApriGachaStart
	
EndlessPlainRustboro_EventScript_GetHypercorn::
	giveitem ITEM_HYPERCORN
	goto EndlessPlainRustboro_EventScript_ApriGachaStart
	
EndlessPlainRustboro_Text_ExplainAprigacha::
	.string "This is an APRIGACHA machine.\n"
	.string "It costs ¥150 to play.\p"
	.string "Put the money in, turn the crank,\n"
	.string "and get an APRICORN of randomly\l"
	.string "varying quality.\p"
	.string "RATES:\n"
	.string "APRI: 90%, SUPER: 19%, HYPER: 1%.$"

EndlessPlainRustboro_EventScript_Healmadio::
	lock
	msgbox EndlessPlainRustboro_Text_AskHealmadio, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, EndlessPlainRustboro_EventScript_DontHeal
	closemessage
	special HealPlayerParty
	playse SE_USE_ITEM
	setrespawn HEAL_LOCATION_RUSTBORO_CITY
	waitse
	msgbox EndlessPlainRustboro_Text_PartyHealed, MSGBOX_DEFAULT
	release
	end
	
EndlessPlainRustboro_Text_PartyHealed:
	.string "{PLAYER}'s body felt strange…\n"
	.string "but the party was completely healed.$"
	
EndlessPlainRustboro_EventScript_DontHeal:
	release
	end
	
EndlessPlainRustboro_Text_AskHealmadio:
	.string "HEALMADIO: Heeeeeee!\p"
	.string "Touch the HEALMADIO?$"

EndlessPlainRustboro_EventScript_Larry::
	lock
	faceplayer
	msgbox EndlessPlainRustboro_Text_LarryIntro, MSGBOX_DEFAULT
	pokemart EndlessPlainRustboro_LarryShop, 2
	msgbox EndlessPlainRustboro_Text_LarryOutro, MSGBOX_DEFAULT
	release
	end

EndlessPlainRustboro_Text_LarryIntro:
	.string "Hey, hey, hey! I'm LARRY the LOOTER!\p"
	.string "I've looted so much stuff that I've\n"
	.string "got plenty to spare.\p"
	.string "I'll even sell you some of it.\n"
	.string "Step right up!$"

EndlessPlainRustboro_Text_LarryOutro:
	.string "LARRY: If I ran out of anything you\n"
	.string "needed, then, well, that's life!\p"
	.string "Stay safe out there!$"

EndlessPlainRustboro_LarryShop:
	.2byte ITEM_GREAT_BALL
	.2byte ITEM_ETHER
	.2byte ITEM_POTION
	.2byte ITEM_ICE_HEAL
	.2byte ITEM_AWAKENING
	.2byte ITEM_DURIN_BERRY
	.2byte ITEM_NOMEL_BERRY
	.2byte ITEM_WATMEL_BERRY
	.2byte ITEM_NONE
	release
	end
	
EndlessPlainRustboro_EventScript_Girl::
	msgbox EndlessPlainRustboro_Text_Girl, MSGBOX_NPC
	end

EndlessPlainRustboro_EventScript_RichBoy::
	msgbox EndlessPlainRustboro_Text_RichBoy, MSGBOX_NPC
	end
	
EndlessPlainRustboro_Text_Girl:
	.string "We thought we were doomed when the\n"
	.string "POKéMON CENTER was destroyed.\p"
	.string "But then this strange woman appeared\n"
	.string "and opened a portal to the ENDLESS\l"
	.string "PLAIN in the CUTTER's house.\p"
	.string "…I hate it here. But if I leave,\n"
	.string "I'll get eaten by demons…$"

EndlessPlainRustboro_Text_RichBoy:
	.string "The CUTTER tried to defend the city\n"
	.string "when the zombies and demons came.\p"
	.string "But he failed.\p"
	.string "He must be dead now. But I wonder\n"
	.string "what happened to his HMs…\l"
	.string "or his daughter.$"

