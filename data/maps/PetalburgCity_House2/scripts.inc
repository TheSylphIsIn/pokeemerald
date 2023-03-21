PetalburgCity_House2_MapScripts::
	.byte 0

PetalburgCity_House2_EventScript_Woman::
	lock
	msgbox PetalburgCity_House2_Text_NormanBecameGymLeader, MSGBOX_DEFAULT
	goto_if_set FLAG_PETALBURG_WOMAN_CORPSE_LOOTED, PetalburgCity_House2_EventScript_End
	msgbox PetalburgCity_House2_Text_LootPrompt, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, PetalburgCity_House2_EventScript_DidntLoot
	giveitem ITEM_ZOMBIE_SLOP
	setflag FLAG_PETALBURG_WOMAN_CORPSE_LOOTED
	release
	end
	
PetalburgCity_House2_EventScript_DidntLoot:
	msgbox PetalburgCity_House2_Text_DidntLoot, MSGBOX_DEFAULT
	release
	end
	
PetalburgCity_House2_EventScript_End:
	release
	end

PetalburgCity_House2_EventScript_SchoolKid::
	lock
	goto_if_ge VAR_POTION_CRATE_PETALBURG_TAKEN, 5, PetalburgCity_House2_EventScript_CrateEmpty
	msgbox PetalburgCity_House2_Text_BattledNormanOnce, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, PetalburgCity_House2_EventScript_DidntTake
	giveitem ITEM_POTION
	addvar VAR_POTION_CRATE_PETALBURG_TAKEN, 1
	release
	end
	
PetalburgCity_House2_EventScript_DidntTake::
	msgbox PetalburgCity_House2_Text_LeftCrateAlone, MSGBOX_DEFAULT
	release
	end

PetalburgCity_House2_EventScript_CrateEmpty::
	msgbox PetalburgCity_House2_Text_CrateEmpty, MSGBOX_DEFAULT
	release
	end


PetalburgCity_House2_Text_NormanBecameGymLeader:
	.string "This woman has had her legs gnawed\n"
	.string "off, which accounts for why her corpse\l"
	.string "hasn't fallen off this chair.$"
	
PetalburgCity_House2_Text_LootPrompt:
	.string "Loot her corpse?$"
	
PetalburgCity_House2_Text_DidntLoot:
	.string "Yeah, that would just be horrible,\n"
	.string "wouldn't it?$"

PetalburgCity_House2_Text_BattledNormanOnce::
	.string "There's a SUPPLY CRATE here.\n"
	.string "It contains POTIONs. Take one?$"
	
PetalburgCity_House2_Text_LeftCrateAlone::
	.string "You've heard the one about the\n"
	.string "crate labeled POTIONS full of guts.$"
	
PetalburgCity_House2_Text_CrateEmpty::
	.string "The crate is completely empty.\n"
	.string "You greedy dirtbag.$"

