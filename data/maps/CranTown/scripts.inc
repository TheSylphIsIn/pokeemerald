.set LOCALID_MORGAN, 5
.set LOCALID_CALVIN, 6

CranTown_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, CranTown_OnFrame
	.byte 0

CranTown_OnFrame:
	map_script_2 VAR_FONEI_COAST_STATE, 1, CranTown_MapScript_WipedBeforeMeetingProf
	map_script_2 VAR_FONEI_COAST_STATE, 3, CranTown_MapScript_LeavingLab
	.2byte 0

CranTown_MapScript_WipedBeforeMeetingProf:
	lock
	addobject LOCALID_CALVIN
	setobjectxy LOCALID_CALVIN, 9, 24
	applymovement LOCALID_CALVIN, CranTown_Movement_CalvinCheckOnWipedPlayer
	waitmovement 0
	msgbox CranTown_Text_CalvinCheckOnWipedPlayer, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_CALVIN, CranTown_Movement_CalvinWalkOffscreen
	waitmovement 0
	removeobject LOCALID_CALVIN
	setvar VAR_FONEI_COAST_STATE, 2
	setflag FLAG_MET_PROFESSOR
	release
	end
	
CranTown_Movement_CalvinCheckOnWipedPlayer:
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	face_left
	step_end
	
CranTown_Movement_CalvinWalkOffscreen:
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	step_end

CranTown_Text_CalvinCheckOnWipedPlayer:
	.string "CALVIN: You okay, {PLAYER}? You got\n"
	.string "punked by a wild POKéMON.\p"
	.string "We rushed you here to get help.\n"
	.string "On the way, we met a lady named\l"
	.string "PROFESSOR MANGROVE who wants to\l"
	.string "talk to us in her lab down here.\p"
	.string "Oh, yeah, we're in the POKéMON\n"
	.string "WORLD, by the way.\p"
	.string "Come along when you're feeling\n"
	.string "up to it, yeah?$"

CranTown_TriggerScript_NorthBlock::
	msgbox CranTown_Text_Block, MSGBOX_SIGN
	applymovement OBJ_EVENT_ID_PLAYER, CranTown_Movement_StepDown
	end
	
CranTown_TriggerScript_MeetProf::
	msgbox CranTown_Text_Block, MSGBOX_SIGN
	applymovement OBJ_EVENT_ID_PLAYER, CranTown_Movement_StepLeft
	end
	
CranTown_TriggerScript_Scanner::
	msgbox CranTown_Text_Scanner, MSGBOX_SIGN
	applymovement OBJ_EVENT_ID_PLAYER, CranTown_Movement_StepLeft
	end
	
CranTown_Text_Block:
	.string "PROFESSOR MANGROVE's words echoed…\n"
	.string "Come visit my lab, if you please.$"
	
CranTown_Text_Scanner:
	.string "You should return the PROFESSOR's\n"
	.string "scanner before you go anywhere.$"
	
CranTown_Movement_StepDown:
	walk_down
	step_end
	
CranTown_Movement_StepLeft:
	walk_left
	step_end
	
CranTown_MapScript_LeavingLab::
	lock
	applymovement OBJ_EVENT_ID_PLAYER, CranTown_Movement_StepDown
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
	waitmovement 0
	opendoor 15, 22
	addobject LOCALID_MORGAN
	applymovement LOCALID_MORGAN, CranTown_Movement_DownAndLeft
	waitmovement 0
	addobject LOCALID_CALVIN
	applymovement LOCALID_CALVIN, CranTown_Movement_StepDown
	waitmovement 0
	closedoor 15, 22
	delay 10
	msgbox CranTown_Text_GoGetScanner, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_CALVIN, CranTown_Movement_CalvinWalkAway
	delay 10
	applymovement LOCALID_MORGAN, CranTown_Movement_MorganWalkAway
	waitmovement LOCALID_MORGAN
	removeobject LOCALID_CALVIN
	removeobject LOCALID_MORGAN
	setvar VAR_FONEI_COAST_STATE, 4
	release
	end

CranTown_Text_GoGetScanner:
	.string "CALVIN: The PROF said the thief\n"
	.string "ran up to the clearing up there.\p"
	.string "Let's go pound him so we can\n"
	.string "start finding our way home!\p"
	.string "MORGAN: Don't you think we should,\n"
	.string "um, use these POKé BALLS…\p"
	.string "You know, to fill out our teams\n"
	.string "so we're prepared to face him?\p"
	.string "CALVIN: Nah. Who cares about\n"
	.string "a team? This guy's strong enough.\p"
	.string "MORGAN: O-okay…$"

CranTown_Movement_CalvinWalkAway:
	walk_right
	walk_right
	walk_right
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

CranTown_Movement_MorganWalkAway:
	walk_left
	walk_left
	walk_left
	walk_left
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	step_end
	
CranTown_Movement_DownAndLeft:
	walk_down
	walk_left
	face_down
	step_end
	
// little boy script
CranTown_EventScript_Boy::
	msgbox CranTown_Text_Boy, MSGBOX_NPC
	applymovement 4, Common_Movement_FaceOriginalDirection
	end
	
CranTown_Text_Boy:
	.string "Yah! Yah! Yah!\p"
	.string "I'm trying to knock this tree down.\n"
	.string "It's in my way!$"

// little girl script
CranTown_EventScript_Girl::
	msgbox CranTown_Text_Girl, MSGBOX_NPC
	end
	
CranTown_Text_Girl:
	.string "Mommy says the statues on\n"
	.string "STONEFACE WAY are hiding treasure.\p"
	.string "But I'm a big girl! I know\n"
	.string "treasure hunts aren't real!$"

// Mart script
CranTown_EventScript_Shop::
	lock
	faceplayer
	message CranTown_Text_ShopIntro
	waitmessage
	pokemart CranTown_Mart
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

CranTown_Text_ShopIntro:
	.string "Um, hello! We don't have much here,\n"
	.string "but I sell some basic supplies.$"

	.align 2
CranTown_Mart:
	.2byte ITEM_BERRY_JUICE
	.2byte ITEM_POKE_BALL
	.2byte ITEM_CHERI_BERRY
	.2byte ITEM_PECHA_BERRY
	.2byte ITEM_REPEL
	.2byte ITEM_NONE
	release
	end
// Old man script

CranTown_Sign_TownSign::
	msgbox CranTown_Text_TownSign, MSGBOX_SIGN
	end
	
CranTown_Sign_TrainerTips::
	msgbox CranTown_Text_TrainerTips, MSGBOX_SIGN
	end
	
CranTown_Sign_FamilySign::
	msgbox CranTown_Text_FamilySign, MSGBOX_SIGN
	end
	
CranTown_Text_TownSign:
	.string "CRAN TOWN\n"
	.string "“A town of humble beginnings.”$"
	
CranTown_Text_FamilySign:
	.string "MOVE MACHINE FAMILY\n"
	.string "Home-made TMs and HMs!$"
	
CranTown_Text_TrainerTips:
	.string "TRAINER TIPS\p"
	.string "Be sure to read the MANUAL!\p"
	.string "Even if you're a POKéMON\n"
	.string "expert, it will still tell you\l"
	.string "about this game's unique features!\p"
	.string "For example, ICE resists GRASS,\n"
	.string "GROUND, and FLYING.\p"
	.string "You may even find something there\n"
	.string "that makes you want to start over…\p"
	.string "…sorry for breaking the FOURTH WALL.$"


