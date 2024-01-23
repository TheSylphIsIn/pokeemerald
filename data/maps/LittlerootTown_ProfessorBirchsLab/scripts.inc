.set LOCALID_MANGROVE, 1
.set LOCALID_MORGAN, 2
.set LOCALID_CALVIN, 3
.set LOCALID_GRUNT, 4

LittlerootTown_ProfessorBirchsLab_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, LittlerootTown_ProfessorBirchsLab_OnFrame
	map_script MAP_SCRIPT_ON_LOAD, CranTown_Lab_OnLoad
	.byte 0

CranTown_Lab_OnLoad:
	call_if_ge VAR_FONEI_COAST_STATE, 4, CranTown_Lab_RemoveAbilScanner
	end
	
CranTown_Lab_RemoveAbilScanner:
	setmetatile 6, 1, 0x20B, TRUE
	return
	
LittlerootTown_ProfessorBirchsLab_OnFrame:
	map_script_2 VAR_FONEI_COAST_STATE, 3, CranTown_Lab_GetPokedexScript
	.2byte 0

CranTown_Lab_GetPokedexScript::
	lockall
	msgbox CranTown_Lab_Text_ProfCallToPlayer, MSGBOX_DEFAULT
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_ProfessorBirchsLab_Movement_PlayerEnterLabForPokedex
	waitmovement 0
	msgbox CranTown_Lab_Text_PokedexPreamble, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_MANGROVE, CranTown_Lab_Movement_ProfGiveDex
	waitmovement 0
	call LittlerootTown_ProfessorBirchsLab_EventScript_ReceivePokedex
	msgbox CranTown_Lab_Text_ProfPokeBalls, MSGBOX_DEFAULT
	closemessage
	giveitem ITEM_POKE_BALL, 10
	applymovement LOCALID_MANGROVE, CranTown_Lab_Movement_ProfGiveDexesToRivals
	applymovement LOCALID_GRUNT, CranTown_Lab_Movement_GruntStealAbilScanner
	waitmovement LOCALID_MANGROVE
	msgbox CranTown_Lab_Text_EndingText, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_MANGROVE, Common_Movement_FaceUp
	applymovement LOCALID_GRUNT, Common_Movement_ExclamationMark
	msgbox CranTown_Lab_Text_GruntText, MSGBOX_DEFAULT
	closemessage
	setmetatile 6, 1, 0x20B, TRUE
	special DrawWholeMapView
	applymovement LOCALID_GRUNT, CranTown_Lab_Movement_GruntRunAway1
	waitmovement 0
	applymovement LOCALID_MANGROVE, CranTown_Lab_Movement_TryStopGrunt
	applymovement LOCALID_GRUNT, CranTown_Lab_Movement_GruntRunAway2
	delay 16
	msgbox CranTown_Lab_Text_MorganScream
	waitmovement LOCALID_GRUNT
	removeobject LOCALID_GRUNT
	closemessage
	delay 60
	applymovement LOCALID_MANGROVE, Common_Movement_FaceDown
	delay 30
	msgbox CranTown_Lab_Text_GetItBack
	closemessage
	releaseall
	setvar VAR_FONEI_COAST_STATE, 4
	clearflag FLAG_HIDE_FONEI_COAST_NPCS
	end
	
CranTown_Lab_Text_ProfCallToPlayer:
	.string "MANGROVE: {PLAYER}! You made it!\n"
	.string "Get on up here.$"
	
CranTown_Lab_Text_PokedexPreamble:
	.string "MANGROVE: So, I've heard the story\n"
	.string "from your friends, here.\p"
	.string "You say you were transported here\n"
	.string "from another world…one where\l"
	.string "Pokémon and Trainers don't exist.\p"
	.string "MANGROVE: Well, frankly…\n"
	.string "I believe it!\p"
	.string "MORGAN: What? R-really?\p"
	.string "CALVIN: Wow…I didn't even believe\n"
	.string "her, and I know Pokémon aren't real!\p"
	.string "MANGROVE: Well, I have my reasons…\n"
	.string "But before I get into that, take this.$"
	
CranTown_Lab_Movement_ProfGiveDex:
	walk_down
	delay_16
	walk_in_place_faster_down
	delay_16
	step_end
	
CranTown_Lab_Text_ProfPokeBalls:
	.string "MANGROVE: I'm sure you know what\n"
	.string "that is. Take these, too.$"
	
CranTown_Lab_Movement_ProfGiveDexesToRivals:
	walk_right
	face_down
	delay_16
	walk_in_place_down
	delay_16
	delay_16
	walk_left
	walk_left
	face_down
	delay_16
	walk_in_place_down
	delay_16
	delay_16
	walk_right
	walk_up
	face_down
	step_end

CranTown_Lab_Movement_GruntStealAbilScanner:
	walk_slow_up
	walk_slow_right
	walk_slow_up
	walk_slow_right
	delay_16
	walk_slow_right
	walk_slow_up
	walk_slow_right
	walk_slow_right
	walk_slow_right
	face_up
	step_end
	
CranTown_Lab_Text_EndingText:
	.string "CALVIN: What is this, a bribe?\p"
	.string "MANGROVE: Ha, no. It's a tool.\n"
	.string "Listen closely, now.\p"
	.string "MANGROVE: The Fonei region is vast.\n"
	.string "Most of its land is unexplored.\p"
	.string "But it has a long history of\n"
	.string "folklore, much of which speaks\l"
	.string "of brief contact with strange,\l"
	.string "unfamiliar worlds…\p"
	.string "They say the keys to traveling to\n"
	.string "other worlds are hidden somewhere\l"
	.string "in the Fonei region…\p"
	.string "Whether it's true or not is another\n"
	.string "matter, but when three strangers\l"
	.string "appear on the beach saying they came\l"
	.string "from another world, I can't help\l"
	.string "but humor them at the very least…\p"
	.string "Regardless, if you want to get back\n"
	.string "to your home world, you'll need\l"
	.string "powerful Pokémon to help you explore.\p"
	.string "Plus, it's my duty as a\n"
	.string "Pokémon Professor to…\p"
	.string "CALVIN: Who's that?$"

LittlerootTown_ProfessorBirchsLab_Movement_PlayerEnterLabForPokedex:
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	step_end
	
CranTown_Lab_Movement_GruntRunAway1:
	walk_fast_left
	walk_fast_left
	jump_2_down
	step_end
	
CranTown_Lab_Movement_TryStopGrunt:
	walk_left
	delay_16
	delay_16
	step_end
	
CranTown_Lab_Movement_GruntRunAway2:
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_right
	walk_fast_right
	step_end
	
CranTown_Lab_Text_GruntText:
	.string "MANGROVE: Hey! Get your hands off\n"
	.string "my {EMPHASIS_GREEN}Ability Scanner{EMPHASIS_OFF}!\p"
	.string "???: Uh-oh! I've been spotted!$"
	
CranTown_Lab_Text_MorganScream:
	.string "MORGAN: EEEEEEEK!!$"
	
CranTown_Lab_Text_GetItBack:
	.string "… … … … …\p"
	.string "MANGROVE: Well, we can't let that\n"
	.string "stand.\p"
	.string "Remember what I said about needing\n"
	.string "strong Pokémon? Now's your chance\l"
	.string "to toughen up! Go get that thief!$"
	
LittlerootTown_ProfessorBirchsLab_EventScript_Birch::
	lock
	faceplayer
	goto_if_le VAR_FONEI_COAST_STATE, 6, CranTown_Lab_EventScript_ProfScannerStolen
	goto ProfBirch_EventScript_RatePokedexOrRegister
	end
	
CranTown_Lab_EventScript_ProfScannerStolen:
	goto_if_set FLAG_RECOVERED_ABILITY_SCANNER, CranTown_Lab_EventScript_ReturnScanner
	msgbox CranTown_Lab_Text_Prof1, MSGBOX_NPC
	end
	
CranTown_Lab_Text_Prof1:
	.string "MANGROVE: He probably ran to the\n"
	.string "clearing north of town.\p"
	.string "When you get my Ability Scanner\n"
	.string "back, we can finish our talk.$"

CranTown_Lab_EventScript_ReturnScanner:
	msgbox CranTown_Lab_Text_ReturnScanner1, MSGBOX_DEFAULT
	playfanfare MUS_OBTAIN_ITEM
	msgbox CranTown_Lab_Text_PlayerReturnedScanner, MSGBOX_DEFAULT
	removeitem ITEM_ABILITY_SCANNER
	waitfanfare
	msgbox CranTown_Lab_Text_ReturnScanner2, MSGBOX_DEFAULT
	//giveitem ITEM_RESEARCH_BAG
	msgbox CranTown_Lab_Text_ReturnScannerEnd, MSGBOX_DEFAULT
	setvar VAR_FONEI_COAST_STATE, 10
	release
	end
	

CranTown_Lab_Text_ReturnScanner1:
	.string "MANGROVE: {PLAYER}, good to see you.\n"
	.string "Did you get the scanner back?$"

CranTown_Lab_Text_PlayerReturnedScanner:
	.string "{PLAYER} returned the ABILITY SCANNER\n"
	.string "to PROFESSOR MANGROVE.$"
	
CranTown_Lab_Text_ReturnScanner2:
	.string "Wonderful!\p"
	.string "Oh, Morgan and Calvin aren't with\n"
	.string "you? Ah well, their loss.\p"
	.string "Well, as I was saying…I have\n"
	.string "obligations as a Pokémon Professor.\p"
	.string "There's no formal research data on\n"
	.string "the wildlife of Fonei.\l"
	.string "It's my job to fix that.\p"
	.string "But the three of you will be exploring\n"
	.string "the region already, won't you?\p"
	.string "It's your choice whether to focus on\n"
	.string "that, but the Pokédex automatically\l"
	.string "records data as you fight, so please\l"
	.string "keep it with you as you search.\p"
	.string "The Pokédex can record data about\n"
	.string "how a species battles, such as {EMPHASIS_RED}stats,\l"
	.string "abilities, or what moves it learns.{EMPHASIS_OFF}\p"
	.string "You'll discover more detailed info\n"
	.string "with further study, so {EMPHASIS_RED}filling out the\l"
	.string "Pokédex is useful even if you only\l"
	.string "care about battling.{EMPHASIS_OFF}\p"
	.string "You can see this info on the species'\n"
	.string "Pokédex page under DATA.\p"
	.string "Anyway, as for your next move…\p"
	.string "Those Pokémon you took belonged to\n"
	.string "my associate, {EMPHASIS_GREEN}Doctor Spade{EMPHASIS_OFF}.\l"
	.string "He lives in {EMPHASIS_BLUE}Penzelcase City{EMPHASIS_OFF}.\p"
	.string "He'll allow you to keep the Pokémon,\n"
	.string "but you should take responsibility\l"
	.string "for returning his bag and notes.$"

CranTown_Lab_Text_ReturnScannerEnd:
	.string "You can reach the city by going\n"
	.string "east to {EMPHASIS_BLUE}Cliff Climb Cave{EMPHASIS_OFF}.\p"
	.string "Good luck out there!$"

LittlerootTown_ProfessorBirchsLab_EventScript_ReceivePokedex::
	playfanfare MUS_OBTAIN_ITEM
	message LittlerootTown_ProfessorBirchsLab_Text_ReceivedPokedex
	waitfanfare
	setflag FLAG_SYS_POKEDEX_GET
	special SetUnlockedPokedexFlags
	setvar VAR_CABLE_CLUB_TUTORIAL_STATE, 1
	return

LittlerootTown_ProfessorBirchsLab_EventScript_Machine::
	msgbox LittlerootTown_ProfessorBirchsLab_Text_SeriousLookingMachine, MSGBOX_SIGN
	end

LittlerootTown_ProfessorBirchsLab_EventScript_PC::
	msgbox LittlerootTown_ProfessorBirchsLab_Text_PCUsedForResearch, MSGBOX_SIGN
	end

LittlerootTown_ProfessorBirchsLab_EventScript_Bookshelf::
	msgbox LittlerootTown_ProfessorBirchsLab_Text_CrammedWithBooksOnPokemon, MSGBOX_SIGN
	end

LittlerootTown_ProfessorBirchsLab_EventScript_Book::
	msgbox LittlerootTown_ProfessorBirchsLab_Text_BookTooHardToRead, MSGBOX_SIGN
	end
	
CranTown_Lab_EventScript_Morgan::
	msgbox CranTown_Lab_Text_Morgan, MSGBOX_NPC
	end
	
CranTown_Lab_EventScript_Calvin::
	msgbox CranTown_Lab_Text_Calvin, MSGBOX_NPC
	end
	
CranTown_Lab_Text_Morgan:
	.string "MORGAN: That was scary! I've never\n"
	.string "seen a real life robbery before!$"
	
CranTown_Lab_Text_Calvin:
	.string "CALVIN: What a punk!\n"
	.string "But he was bold, too…$"

LittlerootTown_ProfessorBirchsLab_Text_ReceivedPokedex:
	.string "{PLAYER} received the Pokédex!$"

LittlerootTown_ProfessorBirchsLab_Text_SeriousLookingMachine:
	.string "It's a serious-looking machine.\n"
	.string "The Prof must use this for research.$"

LittlerootTown_ProfessorBirchsLab_Text_PCUsedForResearch:
	.string "It's a PC used for research.\n"
	.string "Better not mess around with it.$"

LittlerootTown_ProfessorBirchsLab_Text_CrammedWithBooksOnPokemon:
	.string "It's crammed with books on Pokémon.$"

LittlerootTown_ProfessorBirchsLab_Text_BookTooHardToRead:
	.string "It's a book that's too hard to read.$"

