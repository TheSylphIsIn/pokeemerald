.set LOCALID_MORGAN, 3
.set LOCALID_CALVIN, 2
.set LOCALID_SLOSHMOSH, 5

DropperPoint_MapScripts::
	.byte 0

DropperPoint_Sign::
	msgbox DropperPoint_Text_Sign, MSGBOX_DEFAULT
	end
	
DropperPoint_EventScript_Morgan::
	lock
	goto_if_eq VAR_FONEI_COAST_STATE, 1, DropperPoint_EventScript_MorganPanic
	goto_if_set FLAG_WOKE_MORGAN, DropperPoint_EventScript_MorganAwake
	msgbox DropperPoint_Text_MorganWake, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_MORGAN, DropperPoint_Movement_WakeUp
	waitmovement 0
	faceplayer
	msgbox DropperPoint_Text_MorganIntro, MSGBOX_DEFAULT
	setflag FLAG_WOKE_MORGAN
	setobjectmovementtype LOCALID_MORGAN, MOVEMENT_TYPE_LOOK_AROUND
	addvar VAR_PENDING_ACHIEVEMENTS, 1
	release
	end
	
DropperPoint_EventScript_Calvin::
	lock
	goto_if_set FLAG_WOKE_CALVIN, DropperPoint_EventScript_CalvinAwake
	msgbox DropperPoint_Text_CalvinWake, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_CALVIN, DropperPoint_Movement_WakeUp
	waitmovement 0
	faceplayer
	msgbox DropperPoint_Text_CalvinIntro, MSGBOX_DEFAULT
	setflag FLAG_WOKE_CALVIN
	setobjectmovementtype LOCALID_CALVIN, MOVEMENT_TYPE_LOOK_AROUND
	release
	end
	
DropperPoint_EventScript_MorganAwake::
	msgbox DropperPoint_Text_Morgan2, MSGBOX_NPC
	end
	
DropperPoint_EventScript_CalvinAwake::
	msgbox DropperPoint_Text_Calvin2, MSGBOX_NPC
	end

DropperPoint_Text_Sign:
	.string "DROPPER POINT\n"
	.string "The launching point of the world.$"

DropperPoint_Text_MorganWake:
	.string "Mmm…\n"
	.string "Huh…?$"
	
DropperPoint_Text_MorganIntro:
	.string "Huh? Where am I!? Who are you?\p"
	.string "… … …wait, I know you. You're…\n"
	.string "{PLAYER}, right? From school?\p"
	.string "I sit behind you in chemistry…\n"
	.string "I don't know if you know me…\p"
	.string "My name's MORGAN.\n"
	.string "…do you know where we are?$"
	
DropperPoint_Text_Morgan2:
	.string "This must be a dream, right…?\n"
	.string "I took the dare to go to sleep in\l"
	.string "front of those ruins, and then…$"
	
DropperPoint_Text_CalvinWake:
	.string "Five more minutes, mom…\n"
	.string "Zzzzzz-huh?$"
	
DropperPoint_Text_CalvinIntro:
	.string "Whoa! {PLAYER}!? What are you\n"
	.string "doing in my…\p"
	.string "Hey, this isn't my room!\n"
	.string "Where are we? How'd we get here?\p"
	.string "Huh…you don't remember me? From gym?\n"
	.string "Name's CALVIN. But really, where\l"
	.string "are we, anyway…?$"
	
DropperPoint_Text_Calvin2:
	.string "Last thing I remember was, uh…\n"
	.string "I don't remember… … …\p"
	.string "I need some coffee…$"
	
DropperPoint_TriggerScript_Bag::
	lock
	call_if_unset FLAG_WOKE_CALVIN, DropperPoint_TriggerScript_CalvinSleep
	call_if_unset FLAG_WOKE_MORGAN, DropperPoint_TriggerScript_MorganSleep
	// both rivals awake
	msgbox DropperPoint_Text_BagText1, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_CALVIN, DropperPoint_Movement_CalvinGoToBag
	playse SE_BIKE_HOP
	waitse
	waitmovement 0
	applymovement LOCALID_MORGAN, DropperPoint_Movement_MorganGoToBag
	waitmovement 0
	applymovement LOCALID_CALVIN, Common_Movement_FaceLeft
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
	waitmovement 0
	msgbox DropperPoint_Text_BagText2, MSGBOX_DEFAULT
	closemessage
	goto DropperPoint_TriggerScript_BagContinue
	
DropperPoint_TriggerScript_CalvinSleep:
	applymovement LOCALID_CALVIN, DropperPoint_Movement_WakeUp
	waitmovement 0
	applymovement LOCALID_CALVIN, Common_Movement_FacePlayer
	msgbox DropperPoint_Text_CalvinQuickIntro, MSGBOX_DEFAULT
	closemessage
	return

DropperPoint_TriggerScript_MorganSleep:
	applymovement LOCALID_MORGAN, DropperPoint_Movement_WakeUp
	waitmovement 0
	applymovement LOCALID_MORGAN, Common_Movement_FacePlayer
	msgbox DropperPoint_Text_MorganQuickIntro, MSGBOX_DEFAULT
	closemessage
	return
	
DropperPoint_Text_CalvinQuickIntro:
	.string "Huh…? {PLAYER}, is that you?\n"
	.string "It's me, CALVIN, from gym!\l"
	.string "Where am I?$"
	
DropperPoint_Text_MorganQuickIntro:
	.string "Urgh… weird dream…\n"
	.string "{PLAYER}? It's me, MORGAN…\l"
	.string "We go to school together.\p"	
	.string "What is this place? I don't remember\n"
	.string "how I got here…$"

DropperPoint_TriggerScript_BagContinue::
	addobject LOCALID_SLOSHMOSH
	setobjectxy LOCALID_SLOSHMOSH, 18, 14
	applymovement LOCALID_SLOSHMOSH, Common_Movement_WalkUp
	playse SE_BALLOON_BLUE
	waitse
	waitmovement 0
	delay 60
	applymovement LOCALID_MORGAN, DropperPoint_Movement_MorganRunToPlayer
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
	waitmovement 0
	applymovement LOCALID_CALVIN, Common_Movement_FaceRight
	waitmovement 0
	msgbox DropperPoint_Text_SlimeApproaching1, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_SLOSHMOSH, Common_Movement_WalkUp2
	playse SE_BALLOON_BLUE
	waitse
	playse SE_BALLOON_BLUE
	waitse
	waitmovement 0
	applymovement LOCALID_CALVIN, Common_Movement_FaceDown
	applymovement LOCALID_MORGAN, Common_Movement_FaceDown
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
	delay 60
	delay 60
	playbgm MUS_HELP, TRUE
	applymovement LOCALID_SLOSHMOSH,DropperPoint_Movement_RushForward
	playse SE_BALLOON_BLUE
	waitse
	playse SE_BALLOON_BLUE
	waitse
	applymovement LOCALID_CALVIN, Common_Movement_ExclamationMark
	applymovement LOCALID_MORGAN, DropperPoint_Movement_Jump
	waitmovement 0
	waitse
	playmoncry SPECIES_SLOSHMOSH, CRY_MODE_NORMAL
	msgbox DropperPoint_Text_SloshmoshYell, MSGBOX_DEFAULT
	waitmoncry
	closemessage
	msgbox DropperPoint_Text_SlimeApproaching2, MSGBOX_DEFAULT
	closemessage
	setvar VAR_FONEI_COAST_STATE, 1
	setflag FLAG_HIDE_FONEI_COAST_NPCS
	clearflag FLAG_ACCEPT_CHEAT_CODES
	release
	end

DropperPoint_TriggerScript_Roadblock::
	lock
	goto_if_set FLAG_WOKE_CALVIN, DropperPoint_TriggerScript_RoadblockCalvin
	msgbox DropperPoint_Text_CantLeave, MSGBOX_DEFAULT
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, DropperPoint_Movement_ComeBack
	waitmovement 0
	release
	end
	
DropperPoint_TriggerScript_RoadblockCalvin:
	msgbox DropperPoint_Text_CalvinRoadblock, MSGBOX_DEFAULT
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, DropperPoint_Movement_ComeBack
	waitmovement 0
	release
	end

DropperPoint_Text_CantLeave:
	.string "But what about those other people?$"
	
DropperPoint_Text_CalvinRoadblock:
	.string "CALVIN: {PLAYER}! Where ya going?\n"
	.string "I see something back there!\n"
	.string "Go check it out!$"
	
DropperPoint_Movement_ComeBack:
	walk_left
	walk_left
	walk_left
	walk_left
	step_end

DropperPoint_EventScript_Bag::
	setflag FLAG_SYS_POKEMON_GET
	fadescreen FADE_TO_BLACK
	removeobject LOCALID_SLOSHMOSH
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
	waitmovement 0
	setvar VAR_STARTER_SET, 1
	special ChooseStarter
	waitstate
	bufferleadmonspeciesname STR_VAR_1
	msgbox DropperPoint_Text_NicknamePrompt, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, DropperPoint_EventScript_NicknameStarter
	goto_if_eq VAR_RESULT, NO, DropperPoint_EventScript_BagContinue
	end

DropperPoint_EventScript_NicknameStarter:
	setvar VAR_0x8004, 0
	call Common_EventScript_NameReceivedPartyMon
	goto DropperPoint_EventScript_BagContinue
	end
	
DropperPoint_EventScript_BagContinue:
	applymovement LOCALID_MORGAN, Common_Movement_FacePlayer
	applymovement LOCALID_CALVIN, Common_Movement_FacePlayer
	applymovement OBJ_EVENT_ID_PLAYER, DropperPoint_Movement_StepBack
	waitmovement 0
	msgbox DropperPoint_Text_AfterBattle1, MSGBOX_DEFAULT
	closemessage
	special HealPlayerParty
	applymovement LOCALID_CALVIN, Common_Movement_FaceRight
	applymovement LOCALID_MORGAN, DropperPoint_Movement_MorganGoToBagAgain
	waitmovement 0
	msgbox DropperPoint_Text_AfterBattle2, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_CALVIN, DropperPoint_Movement_CalvinStartWalkingAway
	applymovement LOCALID_MORGAN, DropperPoint_Movement_MorganStartWalkingAway
	removeobject 1
	waitmovement 0
	msgbox DropperPoint_Text_MorganLeave, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_MORGAN, DropperPoint_Movement_MorganFinishWalkingAway
	waitmovement 0
	removeobject LOCALID_CALVIN
	removeobject LOCALID_MORGAN
	release
	end
	
DropperPoint_Text_BagText1:
	.string "CALVIN: Hey, {PLAYER}, what'cha\n"
	.string "looking at?$"
	
DropperPoint_Text_BagText2:
	.string "MORGAN: So… not to point out the\n"
	.string "obvious, but we have no idea\l"
	.string "where we are, right…?\p"
	.string "CALVIN: Well, I don't. You don't.\n"
	.string "{PLAYER} doesn't. So, guess not.\p"
	.string "MORGAN: I have a theory…\p"
	.string "MORGAN: We all know each other, and\n"
	.string "we all went to that creepy monument\l"
	.string "in the woods, right?\p"
	.string "CALVIN: Um… yes, apparently.\p"
	.string "MORGAN: So what if we got teleported\n"
	.string "to a parallel world?\p"
	.string "CALVIN: … … … … …\n"
	.string "You read too much manga.\l"
	.string "This doesn't look like a parallel\l"
	.string "world to me…$"
	
DropperPoint_Text_SlimeApproaching1:
	.string "MORGAN: W-what was that noise?\p"
	.string "CALVIN: Relax. It was just a wave…$"
	
DropperPoint_Text_SlimeApproaching2:
	.string "MORGAN: AAAAH! What is that thing!?\n"
	.string "CALVIN: {PLAYER}! Do something!$"

DropperPoint_EventScript_Sloshmosh::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_SLOSHMOSH, CRY_MODE_NORMAL
	msgbox DropperPoint_Text_SloshmoshYell, MSGBOX_DEFAULT
	waitmoncry
	release
	end
	
DropperPoint_EventScript_MorganPanic::
	lock
	msgbox DropperPoint_Text_MorganPanic, MSGBOX_DEFAULT
	closemessage
	release
	end
	
DropperPoint_Text_MorganPanic:
	.string "MORGAN: W-what is that thing!?\n"
	.string "Do something, {PLAYER}!$"
	
DropperPoint_Text_SloshmoshYell:
	.string "Spchwerrrrrr!$"
	
DropperPoint_Text_NicknamePrompt:
	.string "Give a nickname to your {STR_VAR_1}?$"
	
DropperPoint_Movement_WakeUp:
	face_left
	delay_8
	face_right
	delay_8
	face_left
	delay_8
	face_right
	delay_8
	emote_exclamation_mark
	delay_16
	jump_in_place_down
	delay_16
	step_end
	
DropperPoint_Movement_CalvinGoToBag:
	jump_2_up
	walk_up
	jump_2_up
	face_right
	step_end
	
DropperPoint_Movement_MorganGoToBag:
	walk_right
	walk_right
	delay_16
	walk_right
	walk_right
	step_end
	
DropperPoint_Movement_MorganRunToPlayer:
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_up
	face_down
	step_end
	
DropperPoint_Movement_RushForward:
	walk_fast_up
	walk_fast_up
	step_end
	
DropperPoint_Movement_Jump:
	jump_in_place_down
	step_end
	
DropperPoint_Text_AfterBattle1:
	.string "CALVIN: Where did you get that\n"
	.string "monster from?\p"
	.string "MORGAN: The bag…? Wait, is that…?$"
	
DropperPoint_Text_AfterBattle2:
	.string "MORGAN: Yes! I knew it!\n"
	.string "POKé BALLS! These are POKéMON!\p"
	.string "CALVIN: POKéMON? Isn't that that\n"
	.string "game for nerds who don't have pets?\p"
	.string "MORGAN: … … … … …\n"
	.string "Well, I was right. We're not home\l"
	.string "now. We're in the POKéMON world!\p"
	.string "CALVIN: … Well, if these things can\n"
	.string "protect us from monsters, then we\l"
	.string "may as well take them.\p"
	.string "I'm taking the one strong against\n"
	.string "yours, {PLAYER}! Haha!\p"
	.string "MORGAN: Oh, well… umm, okay.\p"
	.string "Guess we better move on. Maybe we\n"
	.string "can find someone who knows where\l"
	.string "exactly we are.\p"
	.string "MORGAN: …and maybe whoever owns\n"
	.string "this bag.$"
	
DropperPoint_Text_MorganLeave:
	.string "MORGAN: You'll follow too, right,\n"
	.string "{PLAYER}? I… I'd feel safer that way.$"
	
DropperPoint_Movement_StepBack:
	walk_down
	face_up
	step_end
	
DropperPoint_Movement_MorganGoToBagAgain:
	walk_left
	face_up
	step_end
	
DropperPoint_Movement_CalvinStartWalkingAway:
	jump_2_down
	walk_down
	walk_down
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_down
	walk_down
	walk_down
	walk_right
	walk_right
	walk_right
	walk_right
	step_end
	
DropperPoint_Movement_MorganStartWalkingAway:
	walk_in_place_up
	delay_16
	walk_right
	walk_down
	walk_right
	walk_right
	delay_8
	face_left
	delay_16
	face_right
	delay_16
	delay_16
	face_left
	delay_16
	step_end
	
DropperPoint_Movement_MorganFinishWalkingAway:
	lock_facing_direction
	walk_slow_right
	jump_left
	unlock_facing_direction
	face_right
	delay_16
	delay_16
	walk_fast_down
	walk_fast_down
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_down
	walk_fast_down
	walk_fast_right
	step_end
	
	
