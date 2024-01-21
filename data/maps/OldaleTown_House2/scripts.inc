OldaleTown_House2_MapScripts::
	.byte 0

CranTown_House2_Mother::
	msgbox CranTown_House2_Text_Flash, MSGBOX_NPC
	end

CranTown_House2_Son::
	goto_if_unset FLAG_BADGE01_GET, CranTown_House2_SonNothing // If you don't fight Calvin in Fisheye Pond, this is unavailable until after the first dungeon
	checkitem ITEM_TM100
	goto_if_eq VAR_RESULT, FALSE, CranTown_House2_SonGiveSwift
	end

CranTown_House2_SonGiveSwift: // maybe you should have to buy these
	msgbox CranTown_House2_Text_Swift, MSGBOX_NPC
	giveitem ITEM_TM100
	end

CranTown_House2_Text_Swift:
	.string "$"

CranTown_House2_SonNothing:
	msgbox CranTown_House2_Text_SonTooEarly, MSGBOX_NPC
	end

CranTown_House2_Text_Flash:
	.string "Crafting Move Machines is a\n"
	.string "family tradition for me and my son.\p"
	.string "Unfortunately, I gave my last HM05\n"
	.string "to a shy girl who came in here\l"
	.string "looking for Mangrove's lab earlier.\p"
	.string "I'm working on another TM now,\n"
	.string "but it won't be ready for a while.$"

CranTown_House2_Text_SonTooEarly:
	.string "My mom taught me how to make\n"
	.string "Technical Machines.\p"
	.string "I made one that teaches Swift, but\n"
	.string "I gave it to a goofy haired kid.\p"
	.string "Next time I make one, I'll give it\n"
	.string "to you if you're around.$"

