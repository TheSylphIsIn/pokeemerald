.set LOCALID_MART_EMPLOYEE, 2
.set LOCALID_FOOTPRINTS_MAN, 3
.set LOCALID_RIVAL, 4
.set LOCALID_BIRCH, 5

OldaleTown_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, OldaleTown_OnTransition
	map_script MAP_SCRIPT_ON_FRAME_TABLE, OldaleTown_OnFrame
	.byte 0

OldaleTown_OnTransition:
	setflag FLAG_VISITED_OLDALE_TOWN
	call_if_unset FLAG_ADVENTURE_STARTED, OldaleTown_EventScript_BlockWestEntrance
	call_if_unset FLAG_RECEIVED_POTION_OLDALE, OldaleTown_EventScript_MoveMartEmployee
	end

OldaleTown_OnFrame:
	map_script_2 VAR_ROUTE101_STATE, 3, OldaleTown_OnFrameScript
	.2byte 0

OldaleTown_OnFrameScript::
	lockall
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
	msgbox OldaleTown_BirchEventText1, MSGBOX_DEFAULT
	closemessage
	delay 60
	msgbox OldaleTown_BirchEventText2, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_BIRCH, OldaleTown_Movement_BirchWalkOffscreen
	waitmovement 0
	removeobject LOCALID_BIRCH
	setvar VAR_ROUTE101_STATE, 4
	releaseall
	end
	
OldaleTown_Movement_BirchWalkOffscreen:
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

OldaleTown_BirchEventText1:
	.string "PROF. BIRCH: So, {PLAYER}. You really\n"
	.string "don't remember your older brother?\p"
	.string "{PLAYER}: Nope.\n"
	.string "PROF. BIRCH: My daughter MAY?\l"
	.string "{PLAYER}: Nuh-uh.\p"
	.string "PROF. BIRCH: The zombie plague that\n"
	.string "drove our home and society to ruin?\p"
	.string "{PLAYER}: You'd think I'd remember\n"
	.string "something like that, but no.\p"
	.string "I have AMNESIA, dumbass! I don't\n"
	.string "remember ANYTHING!\p"
	.string "PROF. BIRCH: Okay, okay, you don't\n"
	.string "have to shout.$"
	
OldaleTown_BirchEventText2:
	.string "{PLAYER}: Actually… I do recognize\n"
	.string "you. And I recall a zombie POKéMON.\p"
	.string "PROF. BIRCH: Really? Then I daresay\n"
	.string "you'll remember more over time.\p"
	.string "In any case, go ahead and settle in\n"
	.string "here. OLDALE TOWN has guards posted,\l"
	.string "so we're safe from the zombies here.\p"
	.string "I'll be on ROUTE 103 if you need me.$"
	

OldaleTown_EventScript_BlockWestEntrance::
	setobjectxyperm LOCALID_FOOTPRINTS_MAN, 2, 11
	setobjectmovementtype LOCALID_FOOTPRINTS_MAN, MOVEMENT_TYPE_FACE_LEFT
	return

OldaleTown_EventScript_MoveMartEmployee::
	setobjectxyperm LOCALID_MART_EMPLOYEE, 13, 14
	setobjectmovementtype LOCALID_MART_EMPLOYEE, MOVEMENT_TYPE_FACE_DOWN
	return

OldaleTown_EventScript_TownSign::
	msgbox OldaleTown_Text_TownSign, MSGBOX_SIGN
	end

OldaleTown_EventScript_Girl::
	msgbox OldaleTown_Text_SavingMyProgress, MSGBOX_NPC
	end

OldaleTown_EventScript_MartEmployee::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_POTION_OLDALE, OldaleTown_EventScript_ExplainPotion
	goto_if_set FLAG_TEMP_1, OldaleTown_EventScript_ExplainPotion
	setflag FLAG_TEMP_1
	playbgm MUS_FOLLOW_ME, FALSE
	msgbox OldaleTown_Text_IWorkAtPokemonMart, MSGBOX_DEFAULT
	closemessage
	switch VAR_FACING
	case DIR_SOUTH, OldaleTown_EventScript_GoToMartSouth
	case DIR_NORTH, OldaleTown_EventScript_GoToMartNorth
	case DIR_EAST, OldaleTown_EventScript_GoToMartEast
	end

OldaleTown_EventScript_GoToMartSouth::
	applymovement LOCALID_MART_EMPLOYEE, OldaleTown_Movement_EmployeeSouth
	applymovement OBJ_EVENT_ID_PLAYER, OldaleTown_Movement_PlayerSouth
	waitmovement 0
	goto OldaleTown_EventScript_ExplainPokemonMart
	end

OldaleTown_EventScript_GoToMartNorth::
	applymovement LOCALID_MART_EMPLOYEE, OldaleTown_Movement_EmployeeNorth
	applymovement OBJ_EVENT_ID_PLAYER, OldaleTown_Movement_PlayerNorth
	waitmovement 0
	goto OldaleTown_EventScript_ExplainPokemonMart
	end

OldaleTown_EventScript_GoToMartEast::
	applymovement OBJ_EVENT_ID_PLAYER, OldaleTown_Movement_PlayerEast
	applymovement LOCALID_MART_EMPLOYEE, OldaleTown_Movement_EmployeeEast
	waitmovement 0
	goto OldaleTown_EventScript_ExplainPokemonMart
	end

OldaleTown_EventScript_ExplainPokemonMart::
	msgbox OldaleTown_Text_ThisIsAPokemonMart, MSGBOX_DEFAULT
	giveitem ITEM_POTION
	goto_if_eq VAR_RESULT, FALSE, OldaleTown_EventScript_BagIsFull
	msgbox OldaleTown_Text_PotionExplanation, MSGBOX_DEFAULT
	setflag FLAG_RECEIVED_POTION_OLDALE
	fadedefaultbgm
	release
	end

OldaleTown_EventScript_ExplainPotion::
	msgbox OldaleTown_Text_PotionExplanation, MSGBOX_DEFAULT
	release
	end

OldaleTown_EventScript_BagIsFull::
	msgbox gText_TooBadBagIsFull, MSGBOX_DEFAULT
	fadedefaultbgm
	release
	end

OldaleTown_Movement_EmployeeEast:
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_in_place_faster_down
	step_end

OldaleTown_Movement_EmployeeSouth:
	walk_left
	walk_up
	walk_up
	walk_right
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_in_place_faster_down
	step_end

OldaleTown_Movement_EmployeeNorth:
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_in_place_faster_down
	step_end

OldaleTown_Movement_Unknown1:
	walk_up
	walk_up
	walk_right
	walk_right
	walk_right
	walk_right
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	delay_8
	walk_in_place_faster_down
	step_end

OldaleTown_Movement_PlayerEast:
	walk_right
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

OldaleTown_Movement_PlayerSouth:
	delay_16
	delay_16
	delay_16
	delay_16
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

OldaleTown_Movement_PlayerNorth:
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

OldaleTown_Movement_Unknown2:
	walk_left
	walk_up
	walk_up
	walk_right
	walk_right
	walk_right
	walk_right
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

OldaleTown_EventScript_FootprintsMan::
	lock
	faceplayer
	goto_if_set FLAG_ADVENTURE_STARTED, OldaleTown_EventScript_NotBlockingPath
	msgbox OldaleTown_Text_DiscoveredFootprints, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_FOOTPRINTS_MAN, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

OldaleTown_EventScript_BlockedPath::
	lockall
	goto_if_set FLAG_ADVENTURE_STARTED, OldaleTown_EventScript_AliciaBattle
	applymovement OBJ_EVENT_ID_PLAYER, OldaleTown_Movement_PlayerStepBack
	applymovement LOCALID_FOOTPRINTS_MAN, OldaleTown_Movement_BackUp
	waitmovement 0
	msgbox OldaleTown_Text_WaitDontComeInHere, MSGBOX_DEFAULT
	closemessage
	msgbox OldaleTown_Text_DiscoveredFootprints, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_FOOTPRINTS_MAN, OldaleTown_Movement_ReturnToOriginalPosition
	waitmovement 0
	releaseall
	end

OldaleTown_EventScript_NotBlockingPath::
	msgbox OldaleTown_Text_FinishedSketchingFootprints, MSGBOX_DEFAULT
	release
	end

OldaleTown_EventScript_Rival::
	msgbox OldaleTown_Text_AliciaTalksToSelf, MSGBOX_NPC
	end

OldaleTown_Text_AliciaTalksToSelf:
	.string "Fufufu… this quaint little town has\n"
	.string "escaped my grasp long enough…\p"
	.string "I'd love to stick around to see it\n"
	.string "torn to shreds, but alas, I have\l"
	.string "other business to attend.\p"
	.string "… what? Leave me alone, fool.$"
	
OldaleTown_EventScript_AliciaBattle::
	lock
	applymovement LOCALID_RIVAL, OldaleTown_Movement_AliciaStepDown
	msgbox OldaleTown_Text_AliciaNoticePlayer, MSGBOX_DEFAULT
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
	msgbox OldaleTown_Text_PreAliciaBattle, MSGBOX_DEFAULT
	trainerbattle_no_intro TRAINER_MAY_ROUTE_103_TREECKO, OldaleTown_Text_AliciaDefeat
	msgbox OldaleTown_Text_PostAliciaBattle MSGBOX_DEFAULT
	closemessage
	fadescreen FADE_TO_BLACK
	removeobject LOCALID_RIVAL
	setvar VAR_ROUTE101_STATE, 5
	fadescreen FADE_FROM_BLACK
	msgbox OldaleTown_Text_AliciaEventEnd, MSGBOX_DEFAULT
	closemessage
	release
	end
	
OldaleTown_Movement_AliciaStepDown:
	walk_fast_down
	step_end

OldaleTown_Text_AliciaNoticePlayer:
	.string "What!? YOU! You're alive?$"
	
OldaleTown_Text_PreAliciaBattle:
	.string "{PLAYER}: Duh. Why does everyone keep\n"
	.string "asking that? If I wasn't, then…\p"
	.string "Well, I guess I could be standing here\n"
	.string "while dead if I was a zombie, so all\l"
	.string "things considered, it's a reasonable…\p"
	.string "???: Quit your babbling! I won't\n"
	.string "stand here while you mock me!\p"
	.string "{PLAYER}: Lady, who do you think\n"
	.string "you are? I lost my memory, so if\l"
	.string "you know me, then sorry, but I\l"
	.string "don't know you.\p"
	.string "???: What? Truly…?\n"
	.string "Hmmm…\p"
	.string "Well, then, listen well! I am ALICIA!\n"
	.string "And for the sake of my mission…\p"
	.string "ALICIA: You must be eliminated!$"
	
OldaleTown_Text_AliciaDefeat:
	.string "Hmph. So you still have some power…$"
	
OldaleTown_Text_PostAliciaBattle:
	.string "ALICIA: Bah! You just got lucky.\n"
	.string "But tremble in fear!\p"
	.string "This world no longer belongs to\n"
	.string "the living! Me and my s…\l"
	.string "er, MASTERS will make sure of it!$"
	
OldaleTown_Text_AliciaEventEnd:
	.string "{PLAYER}: Oh yeah, I'm trembling\n"
	.string "at your level FIVE SNEASEL.\p"
	.string "What a weirdo. But I guess I\n"
	.string "need to be careful. After all…\p"
	.string "Without my memories, my enemies\n"
	.string "will know me before I know them.\p"
	.string "Just 'cause they're alive doesn't\n"
	.string "mean they're my friend.$"

OldaleTown_Movement_PlayerStepBack:
	delay_8
	walk_right
	step_end

OldaleTown_Movement_BackUp:
	walk_fast_up
	walk_in_place_faster_left
	lock_facing_direction
	walk_right
	unlock_facing_direction
	step_end

OldaleTown_Movement_ReturnToOriginalPosition:
	walk_down
	walk_left
	step_end

OldaleTown_Text_SavingMyProgress:
	.string "When the zombies first appeared, we\n"
	.string "hired a trainer from DEVON CORP to\l"
	.string "protect the border of the town.\p"
	.string "That's why OLDALE wasn't destroyed.\n"
	.string "But LITTLEROOT wasn't so lucky…$"

OldaleTown_Text_IWorkAtPokemonMart:
	.string "Hi!\n"
	.string "I work at a POKéMON MART.\p"
	.string "Can I get you to come with me?$"

OldaleTown_Text_ThisIsAPokemonMart:
	.string "This is a POKéMON MART.\n"
	.string "Just look for our blue roof.\p"
	.string "We sell a variety of goods including\n"
	.string "POKé BALLS for catching POKéMON.\p"
	.string "Even though our supply chain was\n"
	.string "destroyed by demons, we have enough\l"
	.string "stocked to keep you supplied.\p"
	.string "Unlike LOOTER MERCHANTS you'll find\n"
	.string "outside, we won't run out of stock.\p"
	.string "Here's a free sample!$"

OldaleTown_Text_PotionExplanation:
	.string "A POTION can be used anytime, so it\n"
	.string "could save your life if your POKéMON\l"
	.string "are getting tired out.$"

OldaleTown_Text_WaitDontComeInHere:
	.string "Hey! Didn't you hear me?\n"
	.string "It's not safe out there!$"

OldaleTown_Text_DiscoveredFootprints:
	.string "The road to PETALBURG is crawling\n"
	.string "with zombies. They'll eat you.\p"
	.string "No one goes this way without a\n"
	.string "good reason to.$"

OldaleTown_Text_FinishedSketchingFootprints:
	.string "I heard about your mission from\n"
	.string "PROFESSOR BIRCH.\p"
	.string "Stay safe out there. You're our\n"
	.string "only hope for saving HOENN.$"

OldaleTown_Text_TownSign:
	.string "OLDALE TOWN\n"
	.string "“Where things start off scarce.”$"

