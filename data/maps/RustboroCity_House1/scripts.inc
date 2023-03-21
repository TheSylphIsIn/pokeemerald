RustboroCity_House1_MapScripts::
	.byte 0

RustboroCity_House1_EventScript_Hiker::
	lock
	msgbox RustboroCity_House1_Text_CorpseMessage, MSGBOX_DEFAULT
	goto_if_set FLAG_RUSTBORO_HIKER_CORPSE, RustboroCity_House1_EventScript_End
	msgbox RustboroCity_House1_Text_LootPrompt, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, RustboroCity_House1_EventScript_DidntLoot
	giveitem ITEM_ZOMBIE_LIVER
	setflag FLAG_RUSTBORO_HIKER_CORPSE
	release
	end
	
RustboroCity_House1_EventScript_DidntLoot:
	msgbox RustboroCity_House1_Text_DidntLoot, MSGBOX_DEFAULT
	release
	end
	
RustboroCity_House1_EventScript_End:
	release
	end
	
RustboroCity_House1_Text_CorpseMessage:
	.string "This HIKER is dead. Someone seems\n"
	.string "to have hollowed him out from behind\l"
	.string "with their teeth.\p"
	.string "You could wear him like a suit if\n"
	.string "you wanted to, but you don't.$"
	
RustboroCity_House1_Text_LootPrompt:
	.string "Loot his corpse?$"
	
RustboroCity_House1_Text_DidntLoot:
	.string "You don't really want to grope\n"
	.string "around inside this dead hiker.$"

