.set LOCALID_MORGAN, 3
.set LOCALID_CALVIN, 2
.set LOCALID_SLOSHMOSH, 5
.set LOCALID_ASLEEP_MORGAN, 6
.set LOCALID_ASLEEP_PLAYER, 7
.set LOCALID_ASLEEP_CALVIN, 8

DropperPoint_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, DropperPoint_OnFrame
	.byte 0
	
DropperPoint_OnFrame::
	map_script_2 VAR_FONEI_COAST_STATE, 0, DropperPoint_EventScript_PlayerWakeUp
	.2byte 0

DropperPoint_EventScript_PlayerWakeUp::
	lockall
	delay 60
	applymovement LOCALID_ASLEEP_PLAYER, DropperPoint_Movement_WakeUp
	waitmovement 0
	playse SE_PIN
	applymovement LOCALID_ASLEEP_PLAYER, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement LOCALID_ASLEEP_PLAYER, Common_Movement_Delay48
	waitmovement 0
	playse SE_BIKE_HOP
	removeobject LOCALID_ASLEEP_PLAYER
	applymovement OBJ_EVENT_ID_PLAYER, DropperPoint_Movement_ShowPlayer
	waitmovement 0
	setvar VAR_FONEI_COAST_STATE, 1
	releaseall
	end

DropperPoint_Movement_ShowPlayer:
	set_visible
	jump_in_place_down
	delay_16
	delay_16
	step_end
	
DropperPoint_Movement_WakeJump:
	jump_in_place_down
	delay_16
	delay_16
	step_end

DropperPoint_Sign::
	msgbox DropperPoint_Text_Sign, MSGBOX_SIGN
	special DebugCompletePokedex
	end
	
DropperPoint_EventScript_WakeRival::
	applymovement VAR_LAST_TALKED, DropperPoint_Movement_WakeUp
	waitmovement 0
	playse SE_PIN
	applymovement VAR_LAST_TALKED, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement VAR_LAST_TALKED, Common_Movement_Delay48
	waitmovement 0
	playse SE_BIKE_HOP
	removeobject VAR_LAST_TALKED
	return	

DropperPoint_EventScript_Morgan::
	lock
	msgbox DropperPoint_Text_MorganWake, MSGBOX_DEFAULT
	closemessage
	call DropperPoint_EventScript_WakeRival
	addobject LOCALID_MORGAN
	clearflag FLAG_HIDE_MORGAN_INTRO
	applymovement LOCALID_MORGAN, DropperPoint_Movement_WakeJump
	waitmovement 0
	applymovement LOCALID_MORGAN, Common_Movement_FacePlayer
	waitmovement 0
	msgbox DropperPoint_Text_MorganIntro, MSGBOX_DEFAULT
	setflag FLAG_FAVORED_MORGAN
	release
	end
	
DropperPoint_EventScript_Calvin::
	lock
	msgbox DropperPoint_Text_CalvinWake, MSGBOX_DEFAULT
	closemessage
	call DropperPoint_EventScript_WakeRival
	addobject LOCALID_CALVIN
	clearflag FLAG_HIDE_CALVIN_INTRO
	applymovement LOCALID_CALVIN, DropperPoint_Movement_WakeJump
	waitmovement 0
	applymovement LOCALID_CALVIN, Common_Movement_FacePlayer
	waitmovement 0
	msgbox DropperPoint_Text_CalvinIntro, MSGBOX_DEFAULT
	setflag FLAG_FAVORED_CALVIN
	release
	end
	
DropperPoint_EventScript_MorganAwake::
	speakername SpeakerName_Morgan
	goto_if_eq VAR_FONEI_COAST_STATE, 2, DropperPoint_EventScript_MorganPanic
	msgbox DropperPoint_Text_Morgan2, MSGBOX_NPC
	end
	
DropperPoint_EventScript_CalvinAwake::
	speakername SpeakerName_Player
	msgbox DropperPoint_Text_Calvin2, MSGBOX_NPC
	end

DropperPoint_Text_Sign:
	.string "{EMPHASIS_BLUE}DROPPER POINT{EMPHASIS_OFF}\n"
	.string "“The launching point of the world.”$"

DropperPoint_Text_MorganWake:
	.string "Mmm…\n"
	.string "Huh…?$"
	
DropperPoint_Text_MorganIntro:
	.string "Huh? Where am I!? Who are you?\p"
	.string "… … …wait, I know you. You're…\n"
	.string "{PLAYER}, right? From university?\p"
	.string "I sit behind you sometimes…\n"
	.string "I don't know if you know me…\p"
	.string "My name's Morgan.\n"
	.string "…do you know where we are?$"
	
DropperPoint_Text_Morgan2:
	.string "This must be a dream, right…?\n"
	.string "I took the dare to go to camp in\l"
	.string "front of those ruins, and then…$"
	
DropperPoint_Text_CalvinWake:
	.string "Five more minutes, mom…\n"
	.string "Zzzzzz-huh?$"
	
DropperPoint_Text_CalvinIntro:
	.string "Whoa! {PLAYER}!? What are you\n"
	.string "doing in my…\p"
	.string "Hey, this isn't my room!\n"
	.string "Where are we? How'd we get here?\p"
	.string "Huh…you don't know me? I've seen\n"
	.string "you around on campus. Name's Calvin.\p"
	.string "But really, where are we, anyway…?$"
	
DropperPoint_Text_Calvin2:
	.string "Last thing I remember was, uh…\n"
	.string "I don't remember… … …\p"
	.string "I need some coffee…$"
	
DropperPoint_TriggerScript_Bag::
	lock
	call_if_unset FLAG_FAVORED_CALVIN, DropperPoint_TriggerScript_CalvinSleep
	call_if_unset FLAG_FAVORED_MORGAN, DropperPoint_TriggerScript_MorganSleep
	// both rivals awake
	msgbox DropperPoint_Text_BagText1, MSGBOX_DEFAULT
	closemessage
	setmetatile 12, 11, 0x36C, FALSE // dumb thing to fix visual error
	special DrawWholeMapView
	applymovement LOCALID_CALVIN, DropperPoint_Movement_CalvinJumpOne
	playse SE_BIKE_HOP
	waitse
	waitmovement 0
	applymovement LOCALID_CALVIN, DropperPoint_Movement_CalvinJump2
	playse SE_BIKE_HOP
	waitmovement 0
	setmetatile 12, 11, 0x2E1, FALSE // dumb thing to fix visual error
	special DrawWholeMapView
	applymovement LOCALID_MORGAN, DropperPoint_Movement_MorganGoToBag
	waitmovement 0
	applymovement LOCALID_CALVIN, Common_Movement_FaceLeft
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
	waitmovement 0
	msgbox DropperPoint_Text_BagText2, MSGBOX_DEFAULT
	closemessage
	goto DropperPoint_TriggerScript_BagContinue
	
DropperPoint_TriggerScript_CalvinSleep:
	applymovement LOCALID_ASLEEP_CALVIN, DropperPoint_Movement_WakeUp
	waitmovement 0
	playse SE_PIN
	applymovement LOCALID_ASLEEP_CALVIN, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement LOCALID_ASLEEP_CALVIN, Common_Movement_Delay48
	waitmovement 0
	playse SE_BIKE_HOP
	removeobject LOCALID_ASLEEP_CALVIN
	addobject LOCALID_CALVIN
	clearflag FLAG_HIDE_CALVIN_INTRO
	applymovement LOCALID_CALVIN, DropperPoint_Movement_WakeJump
	waitmovement 0
	applymovement LOCALID_CALVIN, Common_Movement_FaceUp
	waitmovement 0
	msgbox DropperPoint_Text_CalvinQuickIntro, MSGBOX_DEFAULT
	closemessage
	return

DropperPoint_TriggerScript_MorganSleep:
	applymovement LOCALID_ASLEEP_MORGAN, DropperPoint_Movement_WakeUp
	waitmovement 0
	playse SE_PIN
	applymovement LOCALID_ASLEEP_MORGAN, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement LOCALID_ASLEEP_MORGAN, Common_Movement_Delay48
	waitmovement 0
	playse SE_BIKE_HOP
	removeobject LOCALID_ASLEEP_MORGAN
	addobject LOCALID_MORGAN
	clearflag FLAG_HIDE_MORGAN_INTRO
	applymovement LOCALID_MORGAN, DropperPoint_Movement_WakeJump
	waitmovement 0
	applymovement LOCALID_MORGAN, Common_Movement_FaceRight
	waitmovement 0
	msgbox DropperPoint_Text_MorganQuickIntro, MSGBOX_DEFAULT
	closemessage
	return
	
DropperPoint_Text_CalvinQuickIntro:
	.string "Huh…? {PLAYER}, is that you?\n"
	.string "It's me, Calvin, from uni!\l"
	.string "Where am I?$"
	
DropperPoint_Text_MorganQuickIntro:
	.string "Urgh… weird dream…\n"
	.string "{PLAYER}? It's me, Morgan…\l"
	.string "We go to college together.\p"	
	.string "What is this place? I don't remember\n"
	.string "how I got here…$"

DropperPoint_TriggerScript_BagContinue::
	addobject LOCALID_SLOSHMOSH
	setobjectxy LOCALID_SLOSHMOSH, 13, 14
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
	setvar VAR_FONEI_COAST_STATE, 2
	setrespawn HEAL_LOCATION_CRAN_TOWN
	setflag FLAG_HIDE_FONEI_COAST_NPCS
	release
	end

DropperPoint_TriggerScript_Roadblock::
	lock
	goto_if_set FLAG_FAVORED_CALVIN, DropperPoint_TriggerScript_RoadblockCalvin
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
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
	waitmovement 0
	msgbox DropperPoint_Text_MorganLeave, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_MORGAN, DropperPoint_Movement_MorganFinishWalkingAway
	waitmovement 0
	removeobject LOCALID_CALVIN
	removeobject LOCALID_MORGAN
	clearflag FLAG_FAVORED_MORGAN
	clearflag FLAG_FAVORED_CALVIN
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
	.string "CALVIN: Relax. It was just a wave, or…$"
	
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
	face_up
	delay_16
	face_down
	delay_8
	face_up
	delay_16
	face_down
	delay_8
	face_up
	delay_16
	face_left
	step_end
	
DropperPoint_Movement_CalvinJumpOne:
	jump_2_up
	walk_up
	step_end
	
DropperPoint_Movement_CalvinJump2:
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
	.string "Poké Balls! These are Pokémon!\p"
	.string "CALVIN: Pokémon? Isn't that that\n"
	.string "game for nerds who don't have pets?\p"
	.string "MORGAN: … … … … …\n"
	.string "Well, I was right. We're not home\l"
	.string "now. We're in the Pokémon world!\p"
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
	
	
