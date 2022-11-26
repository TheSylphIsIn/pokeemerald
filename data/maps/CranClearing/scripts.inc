.set LOCALID_CALVIN, 4
.set LOCALID_MORGAN, 5

CranClearing_MapScripts::
	.byte 0

// item 1

// first girl script
CranClearing_TriggerScript_Morgan1::
	lock
	applymovement LOCALID_MORGAN, Common_Movement_FaceDown
	msgbox CranClearing_Text_MorganGreet, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_MORGAN, CranClearing_Movement_WalkToBattleZone
	waitmovement 0
	setobjectxyperm LOCALID_MORGAN, 12, 15
	setobjectxyperm LOCALID_CALVIN, 30, 7
	setvar VAR_FONEI_COAST_STATE, 5
	release
	end
	
CranClearing_TriggerScript_Calvin1::
	lock
	applymovement LOCALID_CALVIN, Common_Movement_FaceLeft
	msgbox CranClearing_Text_CalvinGreet, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_CALVIN, CranClearing_Movement_WalkToBattleZone
	waitmovement 0
	setobjectxyperm LOCALID_MORGAN, 12, 15
	setobjectxyperm LOCALID_CALVIN, 30, 7
	setvar VAR_FONEI_COAST_STATE, 5
	release
	end
	
CranClearing_Text_MorganGreet:
	.string "MORGAN: Hey, {PLAYER}! I'm going\n"
	.string "up this way.\p"
	.string "CALVIN went through the grass,\n"
	.string "but it's a bit too spooky for me.\p"
	.string "Both paths go to the same place,\n"
	.string "though.$"
	
CranClearing_Text_CalvinGreet:
	.string "CALVIN: Sup, {PLAYER}? I'm\n"
	.string "blazing a trail through this grass!\p"
	.string "We're supposed to toughen up, right?\n"
	.string "Typical MORGAN, took the easy way.\p"
	.string "We'll both end up where we need to\n"
	.string "be, but this way I'll be stronger.$"
	
CranClearing_Movement_WalkToBattleZone:
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	step_end
	
// girl battle script
CranClearing_EventScript_Morgan::
	msgbox Route103_Text_MayLetsBattle, MSGBOX_DEFAULT
	switch VAR_STARTER_MON
	case 0, CranClearing_EventScript_MorganBattleGlasma
	case 1, CranClearing_EventScript_MorganBattleSandude
	case 2, CranClearing_EventScript_MorganBattleEladrift
	end
	
CranClearing_EventScript_MorganBattleGlasma::
	trainerbattle_no_intro TRAINER_MAY_ROUTE_103_TREECKO, CranClearing_Text_MorganDefeated
	goto CranClearing_EventScript_MorganAfterBattle
	end

CranClearing_EventScript_MorganBattleSandude::
	trainerbattle_no_intro TRAINER_MAY_ROUTE_103_TORCHIC, CranClearing_Text_MorganDefeated
	goto CranClearing_EventScript_MorganAfterBattle
	end

CranClearing_EventScript_MorganBattleEladrift::
	trainerbattle_no_intro TRAINER_MAY_ROUTE_103_MUDKIP, CranClearing_Text_MorganDefeated
	goto CranClearing_EventScript_MorganAfterBattle
	end
	
CranClearing_Text_MorganDefeated:
CranClearing_EventScript_MorganAfterBattle:
	
// boy battle script

// youngster

// item 2

// trainer tip sign

// surf hiker
// surf item
// surf hidden item

