.set LOCALID_CALVIN, 4
.set LOCALID_MORGAN, 5

CranClearing_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, CranClearing_MapScript_OnTransition
	.byte 0

CranClearing_MapScript_OnTransition:
	call_if_eq VAR_FONEI_COAST_STATE, 6, CranClearing_MapScript_SetRivalPositions
	end
	
CranClearing_MapScript_SetRivalPositions:
	setobjectxyperm LOCALID_MORGAN, 12, 15
	setobjectxyperm LOCALID_CALVIN, 30, 7
	return
	
// item 1

// first girl script
CranClearing_TriggerScript_Morgan1::
	lock
	applymovement LOCALID_MORGAN, Common_Movement_FaceDown
	msgbox CranClearing_Text_MorganGreet, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_MORGAN, CranClearing_Movement_WalkToBattleZone
	waitmovement 0
	setobjectxy LOCALID_MORGAN, 12, 15
	setobjectxy LOCALID_CALVIN, 30, 7
	setobjectxyperm LOCALID_MORGAN, 12, 15
	setobjectxyperm LOCALID_CALVIN, 30, 7
	setvar VAR_FONEI_COAST_STATE, 6
	release
	end
	
CranClearing_TriggerScript_Calvin1::
	lock
	applymovement LOCALID_CALVIN, Common_Movement_FaceLeft
	msgbox CranClearing_Text_CalvinGreet, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_CALVIN, CranClearing_Movement_WalkToBattleZone
	waitmovement 0
	setobjectxy LOCALID_MORGAN, 12, 15
	setobjectxy LOCALID_CALVIN, 30, 7
	setobjectxyperm LOCALID_MORGAN, 12, 15
	setobjectxyperm LOCALID_CALVIN, 30, 7
	setvar VAR_FONEI_COAST_STATE, 6
	release
	end
	
CranClearing_Text_MorganGreet:
	.string "MORGAN: Hey, {PLAYER}! I'm going\n"
	.string "up this way.\p"
	.string "Calvin went through the grass,\n"
	.string "but this way looks safer.\p"
	.string "{EMPHASIS_RED}Both paths go to the same place{EMPHASIS_OFF},\n"
	.string "so go whichever way you want.$"
	
CranClearing_Text_CalvinGreet:
	.string "CALVIN: Sup, {PLAYER}? I'm\n"
	.string "blazing a trail through this grass!\p"
	.string "We're supposed to toughen up, right?\n"
	.string "Typical Morgan, took the easy way.\p"
	.string "{EMPHASIS_RED}We'll both end up where we need to\n"
	.string "{EMPHASIS_OFF}be, but this way I'll be stronger.$"
	
CranClearing_Movement_WalkToBattleZone:
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	step_end
	
// girl battle script
CranClearing_EventScript_Morgan::
	lock
	faceplayer
	call_if_set FLAG_FAVORED_CALVIN, CranClearing_EventScript_MorganReactToCalvinDefeat
	msgbox CranClearing_Text_MorganBattleIntro, MSGBOX_DEFAULT
	closemessage
	specialvar VAR_RESULT, GetPlayerFacingDirection
	call_if_eq VAR_RESULT, DIR_WEST, CranClearing_EventScript_MorganBattleFromStart
	call_if_ne VAR_RESULT, DIR_WEST, CranClearing_EventScript_MorganBattleFromEnd
	msgbox CranClearing_Text_MorganBattleIntro2, MSGBOX_DEFAULT
	closemessage
	trainerbattle_no_intro TRAINER_MORGAN_FISHEYE_LAKE, CranClearing_Text_MorganDefeated
	special HealPlayerParty
	msgbox CranClearing_Text_MorganAfterBattle1, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_MORGAN, CranClearing_Movement_MorganGiveFlash
	waitmovement 0
	giveitem ITEM_HM05
	msgbox CranClearing_Text_MorganExplainFlash, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_MORGAN, CranClearing_Movement_MorganWalkOffscreen
	waitmovement 0
	removeobject LOCALID_MORGAN
	setflag FLAG_FAVORED_MORGAN
	end
	
CranClearing_EventScript_MorganReactToCalvinDefeat:
	msgbox CranClearing_Text_MorganCalvinBeaten, MSGBOX_DEFAULT
	closemessage
	return
	
CranClearing_EventScript_MorganBattleFromStart:
	applymovement LOCALID_MORGAN, CranClearing_Movement_MorganWalkToArena
	delay 10
	applymovement OBJ_EVENT_ID_PLAYER, CranClearing_Movement_PlayerWalkToMArena
	waitmovement LOCALID_MORGAN
	return
	
CranClearing_EventScript_MorganBattleFromEnd:
	call_if_eq VAR_RESULT, DIR_SOUTH, CranClearing_EventScript_MorganBattlePlayerTop
	call_if_ne VAR_RESULT, DIR_SOUTH, CranClearing_EventScript_MorganBattlePlayerLeft
	applymovement LOCALID_MORGAN, CranClearing_Movement_MorganWalkToArena
	waitmovement LOCALID_MORGAN
	return

CranClearing_EventScript_MorganBattlePlayerTop:
	applymovement OBJ_EVENT_ID_PLAYER, CranClearing_Movement_PlayerWalkToMArenaFromTop
	return

CranClearing_EventScript_MorganBattlePlayerLeft:
	applymovement OBJ_EVENT_ID_PLAYER, CranClearing_Movement_PlayerWalkToMArenaFromLeft
	delay 16
	return

CranClearing_Movement_PlayerWalkToMArenaFromTop:
	walk_left
	delay_16
	walk_down
	walk_left
	walk_left
	step_end

CranClearing_Movement_PlayerWalkToMArenaFromLeft:
	walk_up
	face_down
	delay_16
	delay_16
	walk_down
	walk_left
	walk_left
	step_end
	
CranClearing_Text_MorganCalvinBeaten:
	.string "MORGAN: Huh…? Did you already go\n"
	.string "and beat Calvin? Wow…$"
	
CranClearing_Text_MorganBattleIntro:
	.string "MORGAN: {PLAYER}, I just realized…\n"
	.string "We're Pokémon Trainers now!\p"
	.string "Do you know what that means?\p"
	.string "When our eyes meet… well, we have\n"
	.string "to have a battle! Come over here…$"
	
CranClearing_Text_MorganBattleIntro2:
	.string "H-here I come!$"
	
CranClearing_Text_MorganDefeated:
	.string "MORGAN: Whew… my first battle\n"
	.string "as a real Pokémon Trainer…$"
	
CranClearing_Movement_MorganWalkToArena:
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	delay_16
	face_right
	step_end

CranClearing_Movement_PlayerWalkToMArena:
	walk_left
	walk_left
	walk_left
	walk_left
	step_end
	
CranClearing_Text_MorganAfterBattle1:
	.string "MORGAN: That was exhilarating…!\n"
	.string "I know it was a simple battle,\l"
	.string "but still… wow!\p"
	.string "I wanna battle again whenever\n"
	.string "our Pokémon get stronger.\p"
	.string "Okay, {PLAYER}?\n"
	.string "Oh, speaking of which…\p"
	.string "These friendly people in Cran\n"
	.string "Town gave me these.\p"
	.string "You can have one too, {PLAYER}.$"

CranClearing_Text_MorganExplainFlash:
	.string "It's an HM for Flash. Just like\n"
	.string "in {EMPHASIS_BLUE}Kanto{EMPHASIS_OFF}, remember?\p"
	.string "I wonder if you'd…\n"
	.string "… … u-um, never mind!\p"
	.string "I'll go ahead to try to catch\n"
	.string "the thief. See you!$"
	
CranClearing_Movement_MorganGiveFlash:
	walk_right
	delay_16
	walk_in_place_slow_right
	step_end
	
CranClearing_Movement_MorganWalkOffscreen:
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	step_end
	
// boy battle script
CranClearing_EventScript_Calvin::
	lock
	faceplayer
	call_if_set FLAG_FAVORED_MORGAN, CranClearing_EventScript_CalvinReactToMorganDefeat
	msgbox CranClearing_Text_CalvinBattleIntro, MSGBOX_DEFAULT
	closemessage
	specialvar VAR_RESULT, GetPlayerFacingDirection
	call_if_eq VAR_RESULT, DIR_NORTH, CranClearing_EventScript_CalvinBattleFromStart
	call_if_ne VAR_RESULT, DIR_NORTH, CranClearing_EventScript_CalvinBattleFromEnd
	msgbox CranClearing_Text_CalvinBattleIntro2, MSGBOX_DEFAULT
	closemessage
	trainerbattle_no_intro TRAINER_CALVIN_FISHEYE_LAKE, CranClearing_Text_CalvinDefeated
	special HealPlayerParty
	msgbox CranClearing_Text_CalvinAfterBattle1, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_CALVIN, CranClearing_Movement_CalvinGiveSwift
	waitmovement 0
	giveitem ITEM_TM100
	msgbox CranClearing_Text_CalvinExplainSwift, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_CALVIN, CranClearing_Movement_CalvinWalkOffscreen
	waitmovement 0
	removeobject LOCALID_CALVIN
	setflag FLAG_FAVORED_CALVIN
	end
	
CranClearing_EventScript_CalvinReactToMorganDefeat:
	msgbox CranClearing_Text_CalvinMorganBeaten, MSGBOX_DEFAULT
	closemessage
	return
	
CranClearing_EventScript_CalvinBattleFromStart:
	applymovement LOCALID_CALVIN, CranClearing_Movement_CalvinWalkToArena
	delay 10
	applymovement OBJ_EVENT_ID_PLAYER, CranClearing_Movement_PlayerWalkToCArena
	waitmovement LOCALID_CALVIN
	return
	
CranClearing_EventScript_CalvinBattleFromEnd:
	call_if_eq VAR_RESULT, DIR_SOUTH, CranClearing_EventScript_CalvinBattlePlayerTop
	call_if_ne VAR_RESULT, DIR_SOUTH, CranClearing_EventScript_CalvinBattlePlayerLeft
	applymovement LOCALID_CALVIN, CranClearing_Movement_CalvinWalkToArena
	waitmovement LOCALID_CALVIN
	return

CranClearing_EventScript_CalvinBattlePlayerTop:
	applymovement OBJ_EVENT_ID_PLAYER, CranClearing_Movement_PlayerWalkToCArenaFromTop
	delay 16
	return

CranClearing_EventScript_CalvinBattlePlayerLeft:
	applymovement OBJ_EVENT_ID_PLAYER, CranClearing_Movement_PlayerWalkToCArenaFromLeft
	return

CranClearing_Movement_PlayerWalkToCArenaFromTop:
	walk_left
	face_right
	delay_16
	delay_16
	walk_up
	delay_16
	walk_up
	face_left
	step_end

CranClearing_Movement_PlayerWalkToCArenaFromLeft:
	walk_up
	delay_16
	delay_16
	walk_up
	delay_16
	delay_8
	walk_up
	face_left
	step_end

	
CranClearing_Text_CalvinMorganBeaten:
	.string "CALVIN: You fought Morgan and came\n"
	.string "back? You like this battle thing,\l"
	.string "huh.$"
	
CranClearing_Text_CalvinBattleIntro:
	.string "CALVIN: So, if we're trying to\n"
	.string "toughen up, I guess we'd better\l"
	.string "battle each other, right?\p"
	.string "If you think you can keep up\n"
	.string "with my pace… let's find out!$"
	
CranClearing_Text_CalvinBattleIntro2:
	.string "Prepare yourself!$"
	
CranClearing_Text_CalvinDefeated:
	.string "CALVIN: Huh, you're better\n"
	.string "than I expected.$"
	
CranClearing_Movement_CalvinWalkToArena:
	walk_up
	walk_up
	walk_up
	walk_left
	walk_left
	walk_left
	delay_16
	face_right
	step_end

CranClearing_Movement_PlayerWalkToCArena:
	walk_up
	walk_up
	walk_up
	walk_up
	walk_left
	step_end
	
CranClearing_Text_CalvinAfterBattle1:
	.string "CALVIN: Dang, you're good.\n"
	.string "How'd you get strong so quick?\p"
	.string "Ah well, maybe you just know more\n"
	.string "about Pokémon than me.\p"
	.string "I'll get better than you, though,\n"
	.string "mark my words.\p"
	.string "I even used this, but it didn't\n"
	.string "help. You can have it, I guess.$"

CranClearing_Text_CalvinExplainSwift:
	.string "It's a TM for Swift. Decent move.\n"
	.string "It's {EMPHASIS_RED}reusable{EMPHASIS_OFF}, too, so try it out.\p"
	.string "I'm going on ahead. I guess the thief\n"
	.string "is hiding out in that cave.\l"
	.string "Don't be a slowpoke!$"
	
CranClearing_Movement_CalvinGiveSwift:
	walk_right
	delay_16
	walk_in_place_slow_right
	step_end
	
CranClearing_Movement_CalvinWalkOffscreen:
	walk_up
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	step_end
	
// youngster
TrainerScript_Bobby::
	trainerbattle_single TRAINER_BOBBY, TrainerScript_Text_BobbyIntro,TrainerScript_Text_BobbyDefeated
	msgbox TrainerScript_Text_BobbyPostBattle, MSGBOX_AUTOCLOSE
	end

TrainerScript_Text_BobbyIntro:
	.string "You wanna know why it's called\n"
	.string "Fisheye Pond? I'll tell if you win!$"

TrainerScript_Text_BobbyDefeated:
	.string "Glub!$"

TrainerScript_Text_BobbyPostBattle:
	.string "It's called Fisheye Pond because\n"
	.string "it's shaped like a fish Pokémon!\l"
	.string "I think its name is Guppage.$"

// trainer tip sign
CranClearing_EventScript_TrainerTipsSign::
	msgbox CranClearing_Text_TrainerTips, MSGBOX_SIGN
	end
	
CranClearing_Text_TrainerTips:
	.string "{EMPHASIS_RED}TRAINER TIPS{EMPHASIS_OFF}\p"
	.string "Be sure to read the MANUAL!\p"
	.string "Even if you're a Pokémon\n"
	.string "expert, it will still tell you\l"
	.string "about this game's unique features!\p"
	.string "For example, {EMPHASIS_RED}Ice resists Grass,\n"
	.string "Ground, and Flying.{EMPHASIS_OFF}$"

// surf hiker
// surf item
// surf hidden item

