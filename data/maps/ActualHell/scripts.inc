.set LOCALID_MIDDLE_FIRST_LEFT, 31
.set LOCALID_MIDDLE_FIRST_RIGHT, 32
.set LOCALID_MIDDLE_SECOND_LEFT, 33
.set LOCALID_MIDDLE_SECOND_RIGHT, 34
.set LOCALID_LEFT_PILLAR_GUARD, 8
.set LOCALID_RIGHT_PILLAR_GUARD, 19
.set LOCALID_ATTENDANT_1, 27
.set LOCALID_ATTENDANT_2, 28
.set LOCALID_ATTENDANT_3, 29
.set LOCALID_ATTENDANT_4, 30
.set LOCALID_ARCHDEMON, 23
.set LOCALID_ARTEFACT, 24

ActualHell_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, ActualHell_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, ActualHell_OnResume
	.byte 0

ActualHell_OnTransition:
	call_if_set TRAINER_KAREN_5+TRAINER_FLAGS_START, ActualHell_MapScript_UnblockLeftPillar
	call_if_set TRAINER_DEVAN+TRAINER_FLAGS_START, ActualHell_MapScript_UnblockRightPillar
	end

ActualHell_OnResume:
	call_if_set FLAG_HELL_LEFT_PILLAR_DONE, ActualHell_EventScript_OpenWayLeftPillar
	call_if_set FLAG_HELL_RIGHT_PILLAR_DONE, ActualHell_EventScript_OpenWayRightPillar
	end

ActualHell_MapScript_UnblockLeftPillar::
	setobjectxyperm LOCALID_LEFT_PILLAR_GUARD, 16, 13
	return

ActualHell_MapScript_UnblockRightPillar::
	setobjectxyperm LOCALID_RIGHT_PILLAR_GUARD, 26, 14
	return

// left first mover
ActualHell_EventScript_MovingDemonLeft1::
	goto_if_set FLAG_TEMP_1, ActualHell_EventScript_Left1Moved
	msgbox ActualHell_Text_Left1, MSGBOX_NPC
	applymovement VAR_LAST_TALKED, ActualHell_Movement_Left1
	waitmovement 0
	copyobjectxytoperm VAR_LAST_TALKED
	setflag FLAG_TEMP_1
	end

ActualHell_EventScript_Left1Moved::
	msgbox ActualHell_Text_Left1Moved, MSGBOX_NPC
	end

ActualHell_Text_Left1:
	.string "DEMON: Hiss! You don't belong here,\n"
	.string "mortal scum!\p"
	.string "{PLAYER}: I've heard that before.\n"
	.string "But I'm gonna destroy that artefact.\p"
	.string "You wanna move out of my way, or get\n"
	.string "wrecked by my POKéMON?\p"
	.string "DEMON: Grrrr…fine.\p"
	.string "Some of us CAN fight back.\n"
	.string "Don't get cocky.$"

ActualHell_Text_Left1Moved:
	.string "DEMON: To be honest, the lack of\n"
	.string "POKéMON is the reason we're all\l"
	.string "still stuck down here.\p"
	.string "No reason to leave if we'll just\n"
	.string "be beaten back immediately.$"

ActualHell_Movement_Left1:
	walk_left
	walk_up
	walk_up
	face_down
	step_end

// left second mover
ActualHell_EventScript_MovingDemonLeft2::
	msgbox ActualHell_Text_Left2, MSGBOX_NPC
	applymovement VAR_LAST_TALKED, ActualHell_Movement_Left2
	waitmovement 0
	copyobjectxytoperm VAR_LAST_TALKED
	setflag FLAG_TEMP_2
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
	waitmovement 0
	msgbox ActualHell_Text_Left2Moved, MSGBOX_DEFAULT
	closemessage
	end

ActualHell_Text_Left2:
	.string "DEMON: What the devil?\n"
	.string "A human…\p"
	.string "You're unbelieveably ugly. It…{PAUSE 45}urp!\p"
	.string "It makes me want to hurl just from\n"
	.string "looking at you…!\l"
	.string "In fact, I'm gonna! Gangway!$"

ActualHell_Text_Left2Moved:
	.string "{PLAYER}: My fragile self-esteem…\n"
	.string "How dare you…!$"

ActualHell_Movement_Left2:
	walk_fast_up
	walk_fast_right
	walk_fast_right
	jump_2_right
	walk_fast_down
	walk_fast_right
	walk_fast_right
	face_up
	step_end

// left third mover
ActualHell_EventScript_MovingDemonLeft3::
	goto_if_set FLAG_TEMP_6, ActualHell_EventScript_Left3FromRight
	goto_if_set FLAG_TEMP_4, ActualHell_EventScript_Left3MovedTwice
	goto_if_set FLAG_TEMP_3, ActualHell_EventScript_Left3MovedOnce
	msgbox ActualHell_Text_Left3, MSGBOX_NPC
	applymovement VAR_LAST_TALKED, ActualHell_Movement_Left3
	waitmovement 0
	copyobjectxytoperm VAR_LAST_TALKED
	setflag FLAG_TEMP_3
	end

ActualHell_EventScript_Left3MovedOnce::
	lock
	faceplayer
	msgbox ActualHell_Text_Left3Second, MSGBOX_DEFAULT
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
	waitmovement 0
	delay 60
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
	waitmovement 0
	msgbox ActualHell_Text_Left3PlayerText, MSGBOX_DEFAULT
	closemessage
	applymovement VAR_LAST_TALKED, ActualHell_Movement_Left3Second
	waitmovement 0
	copyobjectxytoperm VAR_LAST_TALKED
	setflag FLAG_TEMP_4
	msgbox ActualHell_Text_Left3FinishText, MSGBOX_DEFAULT
	release
	end

ActualHell_EventScript_Left3MovedTwice::
	msgbox ActualHell_Text_Left3MovedTwice, MSGBOX_NPC
	end

ActualHell_EventScript_Left3FromRight::
	msgbox ActualHell_Text_Left3FromRight, MSGBOX_NPC
	end

ActualHell_Text_Left3:
	.string "{PLAYER}: Out of my way, demon!\p"
	.string "DEMON: As if I didn't know that\n"
	.string "already. You've shouted it at every\l"
	.string "demon this side of the STYX.\p"
	.string "I will submit to your superior volume,\n"
	.string "O brash one.$"

ActualHell_Text_Left3Second:
	.string "{PLAYER}: Um…you're still in my way.\p"
	.string "DEMON: What? Preposterous.\n"
	.string "Can't you just step over that rock?$"

ActualHell_Text_Left3PlayerText:
	.string "{PLAYER}: … … … … …{PAUSE 30}"
	.string "No.\p"
	.string "DEMON: Ugh. Fine. If you weren't a\n"
	.string "filthy POKéMON trainer, I'd rip\l"
	.string "your throat out for this.$"

ActualHell_Text_Left3FinishText:
	.string "DEMON: There. Happy now, princess?\p"
	.string "{PLAYER}: Yes. Thank you kindly.\p"
	.string "DEMON: ngoDlIj Dalo'chugh.$"

ActualHell_Text_Left3MovedTwice:
	.string "DEMON: As soon as that slacker\n"
	.string "NECROMANCER returns with the next\l"
	.string "batch of zombie POKéMON, I'm\l"
	.string "coming for your head.$"

ActualHell_Text_Left3FromRight:
	.string "DEMON: I'm in no mood to listen to\n"
	.string "your useless words. Go away.$"

ActualHell_Movement_Left3:
	walk_right
	face_down
	step_end

ActualHell_Movement_Left3Second:
	walk_up
	face_down
	step_end

ActualHell_EventScript_LeftNPC1::
	msgbox ActualHell_Text_LeftNPC1, MSGBOX_NPC
	end

ActualHell_Text_LeftNPC1:
	.string "{PLAYER}: Hey, shouldn't you guys be\n"
	.string "speaking HADEAN or Black Speech?\p"
	.string "Or at least, something a bit more\n"
	.string "filthy than regular old words.\p"
	.string "DEMON: We could. But being near the\n"
	.string "portal has taught us human speech.\p"
	.string "And why would we speak to you in a\n"
	.string "language you don't understand?\p"
	.string "Here's some filthy words: {PAUSE 30}\n"
	.string "You're a fucking idiot for asking that.\p"
	.string "{PLAYER}: Okay, geez. Sorry I asked.$"

ActualHell_EventScript_LeftNPC2::
	msgbox ActualHell_Text_LeftNPC2, MSGBOX_NPC
	end

ActualHell_Text_LeftNPC2:
	.string "DEMON: Most of the demons who were\n"
	.string "given zombie POKéMON have left\l"
	.string "to assault the city already.\p"
	.string "The others are guarding the\n"
	.string "SOUL PORTAL ARTEFACT.$"

ActualHell_EventScript_LeftNPC3::
	msgbox ActualHell_Text_LeftNPC3, MSGBOX_NPC
	end

ActualHell_Text_LeftNPC3:
	.string "DEMON: If I try to attack you,\n"
	.string "your POKéMON will kill me, won't they?\p"
	.string "{PLAYER}: Yep.\p"
	.string "DEMON: Then I yield.\p"
	.string "Though, you can't really kill us.\n"
	.string "demons are immortal.\p"
	.string "But being dismembered is such an\n"
	.string "inconvenience. I'd rather not.\p"
	.string "{PLAYER}: Don't care.$"

ActualHell_EventScript_LeftNPC4and5::
	msgbox ActualHell_Text_LeftNPC4, MSGBOX_NPC
	end

ActualHell_Text_LeftNPC4:
	.string "DEMON: We're claw wrestling.\n"
	.string "Want to try?\p"
	.string "{PLAYER}: What is that?\p"
	.string "DEMON: You interlock your claws\n"
	.string "and push against each other.\p"
	.string "First person to lose an eye loses!\p"
	.string "{PLAYER}: Pass.\p"
	.string "DEMON: You don't get to choose - !\p"
	.string "{PLAYER}: One more step and you get\n"
	.string "a POKé blast to the face!\p"
	.string "DEMON: Hssss…!$"

ActualHell_EventScript_LeftNPC6::
	msgbox ActualHell_Text_LeftNPC6, MSGBOX_NPC
	end

ActualHell_Text_LeftNPC6:
	.string "DEMON: Can't you just let us escape\n"
	.string "HELL in peace?\l"
	.string "All we want is a life free from\l"
	.string "torture and suffering.\p"
	.string "{PLAYER}: But you also want to kill\n"
	.string "people and possess their corpses.\p"
	.string "DEMON: Well, yes. It's fun.\p"
	.string "{PLAYER}: So, no.$"

// right first mover
ActualHell_EventScript_MovingDemonRight1::
	goto_if_set FLAG_TEMP_5, ActualHell_EventScript_Right1Moved
	msgbox ActualHell_Text_Right1, MSGBOX_NPC
	applymovement VAR_LAST_TALKED, ActualHell_Movement_Right1
	waitmovement 0
	copyobjectxytoperm VAR_LAST_TALKED
	setflag FLAG_TEMP_5
	end

ActualHell_EventScript_Right1Moved::
	msgbox ActualHell_Text_Right1Moved, MSGBOX_NPC
	end

ActualHell_Text_Right1:
	.string "DEMON: Hiss! You don't belong here,\n"
	.string "mortal scum!\p"
	.string "{PLAYER}: I've heard that before.\n"
	.string "But I'm gonna destroy that artefact.\p"
	.string "You wanna move out of my way, or get\n"
	.string "wrecked by my POKéMON?\p"
	.string "DEMON: Grrrr…fine.\p"
	.string "Some of us CAN fight back.\n"
	.string "Don't get cocky.$"

ActualHell_Text_Right1Moved:
	.string "DEMON: To be honest, the lack of\n"
	.string "POKéMON is the reason we're all\l"
	.string "still stuck down here.\p"
	.string "No reason to leave if we'll just\n"
	.string "be beaten back immediately.$"

ActualHell_Movement_Right1:
	walk_right
	walk_up
	face_down
	step_end

// right second mover
ActualHell_EventScript_MovingDemonRight2::
	goto_if_set FLAG_TEMP_6, ActualHell_EventScript_Right2Moved
	msgbox ActualHell_Text_Right2, MSGBOX_NPC
	applymovement VAR_LAST_TALKED, ActualHell_Movement_Right2
	waitmovement 0
	copyobjectxytoperm VAR_LAST_TALKED
	setflag FLAG_TEMP_6
	end

ActualHell_EventScript_Right2Moved::
	msgbox ActualHell_Text_Right2Moved, MSGBOX_NPC
	end

ActualHell_Text_Right2:
	.string "{PLAYER}: Move. Now.\p"
	.string "DEMON: Aiiie! Mercy, Lord!$"

ActualHell_Text_Right2Moved:
	.string "DEMON: Have mercy!$"

ActualHell_Movement_Right2:
	walk_left
	face_right
	step_end

// right third mover
ActualHell_EventScript_MovingDemonRight3::
	goto_if_set FLAG_TEMP_7, ActualHell_EventScript_Right3Moved
	msgbox ActualHell_Text_Right3, MSGBOX_NPC
	applymovement VAR_LAST_TALKED, ActualHell_Movement_Right3
	waitmovement 0
	copyobjectxytoperm VAR_LAST_TALKED
	setflag FLAG_TEMP_7
	end

ActualHell_EventScript_Right3Moved::
	msgbox ActualHell_Text_Right3Moved, MSGBOX_NPC
	end

ActualHell_Text_Right3:
	.string "{PLAYER}: Move. Now.\p"
	.string "DEMON: Guh huh huh. Okay.$"

ActualHell_Text_Right3Moved:
	.string "DEMON: Fufufu…\n"
	.string "ASMODEUS will tear you apart.$"

ActualHell_Movement_Right3:
	walk_right
	face_left
	step_end

// right battler
ActualHell_EventScript_DemonBattleRight::
	goto_if_set FLAG_TEMP_3, ActualHell_EventScript_RightBattleFromTop
	trainerbattle_single TRAINER_KAREN_2, ActualHell_Text_RightDemonIntro, ActualHell_Text_RightDemonDefeat, ActualHell_EventScript_RightDemonPostBattle
	msgbox ActualHell_Text_RightDemonPostBattle, MSGBOX_AUTOCLOSE
	end

ActualHell_EventScript_RightDemonPostBattle:
	lock
	msgbox ActualHell_Text_RightBattleOuttro, MSGBOX_DEFAULT
	giveitem ITEM_ELEC_DUST
	closemessage
	applymovement VAR_LAST_TALKED, ActualHell_Movement_RightBattle
	waitmovement 0
	copyobjectxytoperm VAR_LAST_TALKED
	release
	end

ActualHell_EventScript_RightBattleFromTop:
	msgbox ActualHell_Text_RightBattleSkip, MSGBOX_NPC
	end

ActualHell_Text_RightDemonIntro:
	.string "DEMON: Kekeke! I managed to swipe\n"
	.string "a POKéMON! Your body is mine!$"

ActualHell_Text_RightDemonDefeat:
	.string "What!$"

ActualHell_Text_RightBattleOuttro:
	.string "DEMON: Well if you think you're\n"
	.string "getting through here because of\l"
	.string "that, think again!\p"
	.string "And eat my dust!$"

ActualHell_Text_RightDemonPostBattle:
	.string "DEMON: Nyeah nyeah!\p"
	.string "{PLAYER}: Move before I destroy you!\p"
	.string "DEMON: Puny human! I see right\n"
	.string "through your bravado!\l"
	.string "You won't do it!\p"
	.string "{PLAYER}: (Dammit. He's right. I can't\n"
	.string "risk tiring out my team like that.\l"
	.string "I'll have to find another way around.)$"

ActualHell_Text_RightBattleSkip:
	.string "DEMON: Go away! You've no business\n"
	.string "on this side of the NETHERWORLD.$"

ActualHell_Movement_RightBattle:
	walk_up
	face_left
	delay_2
	face_down
	delay_2
	face_right
	delay_2
	face_up
	delay_2
	face_left
	delay_2
	face_down
	delay_2
	step_end

ActualHell_EventScript_RightNPC1::
	msgbox ActualHell_Text_RightNPC1, MSGBOX_NPC
	end

ActualHell_Text_RightNPC1:
	.string "POKéMON trainers can go to hell!\p"
	.string "Except you! I'd rather you go out\n"
	.string "of hell! I wish you were dead!\l"
	.string "But not in hell! Go to heaven!$"

ActualHell_EventScript_RightNPC2::
	msgbox ActualHell_Text_RightNPC2, MSGBOX_NPC
	end

ActualHell_Text_RightNPC2:
	.string "DEMON: You have no hope against our\n"
	.string "elite guards! The portal will\l"
	.string "remain forever! Give up!$"

ActualHell_EventScript_RightNPC3::
	msgbox ActualHell_Text_RightNPC3, MSGBOX_NPC
	end

ActualHell_Text_RightNPC3:
	.string "DEMON: Well, you've found the short\n"
	.string "cut. But will it save you?$"

ActualHell_EventScript_RightNPC4::
	msgbox ActualHell_Text_RightNPC4, MSGBOX_NPC
	end

ActualHell_Text_RightNPC4:
	.string "{PLAYER}: Hey, why are there wild\n"
	.string "POKéMON down here, anyway?\p"
	.string "DEMON: They are leftovers. These\n"
	.string "species were created in hell.\p"
	.string "{PLAYER}: Huh? Why?\p"
	.string "DEMON: Well, we made SHUCKLE because\n"
	.string "it creates a new form of suffering.\p"
	.string "And the fossils are…well…\p"
	.string "Part of a deception that didn't\n"
	.string "really work out, I think.$"

ActualHell_EventScript_RightNPC5::
	msgbox ActualHell_Text_RightNPC5, MSGBOX_SIGN
	end

ActualHell_Text_RightNPC5:
	.string "DEMON: (Human vision is based on\n"
	.string "movement, I believe. If I stay still,\l"
	.string "it won't attack me.)$"

ActualHell_EventScript_RightNPC6::
	msgbox ActualHell_Text_RightNPC6, MSGBOX_NPC
	end

ActualHell_Text_RightNPC6:
	.string "DEMON: I bet you think we demons\n"
	.string "are much nicer than you expected.\p"
	.string "We're not trying to claw you to\n"
	.string "ribbons or dump you in lava.\p"
	.string "But the truth is that you have\n"
	.string "power over us. We are instinctively\l"
	.string "submissive when we know we have\l"
	.string "no hope of winning.\p"
	.string "If it weren't for your POKéMON or\n"
	.string "that strange magic surrounding you,\l"
	.string "you'd be dead where you stand.$"

ActualHell_EventScript_RightNPC7::
	msgbox ActualHell_Text_RightNPC7, MSGBOX_SIGN
	end

ActualHell_Text_RightNPC7:
	.string "This demon is slamming its head\n"
	.string "against the rock repeatedly.\p"
	.string "You think you'd best leave him\n"
	.string "alone.$"

// middle first double battle
ActualHell_EventScript_DoubleDemons1::
	trainerbattle_double TRAINER_KAREN_3, ActualHell_Text_DoubleDemons1Intro, ActualHell_Text_DoubleDemons1Defeat, ActualHell_Text_DoubleDemons1NeedTwoMons, ActualHell_EventScript_DoubleDemons1Defeated
	end

ActualHell_EventScript_DoubleDemons1Defeated:
	msgbox ActualHell_Text_DoubleDemonsDefeated, MSGBOX_DEFAULT
	closemessage
	playse SE_BIKE_HOP
	applymovement LOCALID_MIDDLE_FIRST_LEFT, ActualHell_Movement_LeftMiddleJump
	applymovement LOCALID_MIDDLE_FIRST_RIGHT, ActualHell_Movement_RightMiddleJump
	waitmovement LOCALID_MIDDLE_FIRST_RIGHT
	removeobject LOCALID_MIDDLE_FIRST_LEFT
	removeobject LOCALID_MIDDLE_FIRST_RIGHT
	playse SE_M_FLAME_WHEEL
	waitse
	end

ActualHell_Text_DoubleDemons1Intro:
	.string "DEMON: You'll never get the artefact!\n"
	.string "We are ASMODEUS's elite guards, and\l"
	.string "we are unbeatable!$"

ActualHell_Text_DoubleDemons1Defeat:
	.string "Nooooooo!$"

ActualHell_Text_DoubleDemons1NeedTwoMons:
	.string "DEMON: You're pathetic. No hope.\n"
	.string "A cocky trainer with only one\l"
	.string "POKéMON is not even worth our time.$"

ActualHell_Text_DoubleDemonsDefeated:
	.string "Waugh! Dishonor!$"

ActualHell_Movement_LeftMiddleJump:
	jump_2_left
	slide_left
	step_end

ActualHell_Movement_RightMiddleJump:
	jump_2_right
	slide_right
	step_end

// middle second double battle
ActualHell_EventScript_DoubleDemons2::
	trainerbattle_double TRAINER_KAREN_4, ActualHell_Text_DoubleDemons2Intro, ActualHell_Text_DoubleDemons1Defeat, ActualHell_Text_DoubleDemons1NeedTwoMons, ActualHell_EventScript_DoubleDemons2Defeated
	end

ActualHell_EventScript_DoubleDemons2Defeated:
	msgbox ActualHell_Text_DoubleDemonsDefeated, MSGBOX_DEFAULT
	closemessage
	playse SE_BIKE_HOP
	applymovement LOCALID_MIDDLE_SECOND_LEFT, ActualHell_Movement_LeftMiddleJump
	applymovement LOCALID_MIDDLE_SECOND_RIGHT, ActualHell_Movement_RightMiddleJump
	waitmovement LOCALID_MIDDLE_SECOND_RIGHT
	removeobject LOCALID_MIDDLE_SECOND_LEFT
	removeobject LOCALID_MIDDLE_SECOND_RIGHT
	playse SE_M_FLAME_WHEEL
	waitse
	end

ActualHell_Text_DoubleDemons2Intro:
	.string "DEMON: You'll never get the artefact!\n"
	.string "We are ASMODEUS's…SECOND set of elite\l"
	.string "guards, and we are more unbeatable!$"

// left pillar guard
ActualHell_EventScript_LeftPillarBattle::
	trainerbattle_single TRAINER_KAREN_5, ActualHell_Text_LeftPillarIntro, ActualHell_Text_LeftPillarDefeat, ActualHell_EventScript_LeftPillarPostBattle
	msgbox ActualHell_Text_LeftPillarPostBattle, MSGBOX_AUTOCLOSE
	end

ActualHell_EventScript_LeftPillarPostBattle:
	lock
	msgbox ActualHell_Text_LeftPillarOuttro, MSGBOX_DEFAULT
	giveitem ITEM_WATER_DUST
	closemessage
	applymovement VAR_LAST_TALKED, ActualHell_Movement_LeftPillar
	waitmovement 0
	copyobjectxytoperm VAR_LAST_TALKED
	release
	end

ActualHell_Text_LeftPillarIntro:
	.string "DEMON: This pillar is blocking the\n"
	.string "way to the artefact.\p"
	.string "And I am blocking your way to the\n"
	.string "pillar! En garde!$"

ActualHell_Text_LeftPillarDefeat:
	.string "I'm a failure!$"

ActualHell_Text_LeftPillarOuttro:
	.string "DEMON: This honor thing is getting\n"
	.string "really old. But I step aside.\l"
	.string "Take this trifle and know that\l"
	.string "ASMODEUS will flay your soul.$"

ActualHell_Text_LeftPillarPostBattle:
	.string "{PLAYER}: So you're telling me you\n"
	.string "have this artefact behind like\l"
	.string "four layers of guards, and NONE\l"
	.string "of them have stopped me?\p"
	.string "DEMON: This doesn't usually happen.$"

ActualHell_Movement_LeftPillar:
	walk_right
	face_down
	step_end

// right pillar guard
ActualHell_EventScript_RightPillarBattle::
	trainerbattle_single TRAINER_DEVAN, ActualHell_Text_RightPillarIntro, ActualHell_Text_RightPillarDefeat, ActualHell_EventScript_RightPillarPostBattle
	msgbox ActualHell_Text_RightPillarPostBattle, MSGBOX_AUTOCLOSE
	end

ActualHell_EventScript_RightPillarPostBattle:
	lock
	msgbox ActualHell_Text_RightPillarOuttro, MSGBOX_DEFAULT
	giveitem ITEM_LEAF_DUST
	closemessage
	applymovement VAR_LAST_TALKED, ActualHell_Movement_RightPillar
	waitmovement 0
	copyobjectxytoperm VAR_LAST_TALKED
	release
	end

ActualHell_Text_RightPillarIntro:
	.string "DEMON: This pillar is blocking the\n"
	.string "way to the artefact.\p"
	.string "And I am blocking your way to the\n"
	.string "pillar! En garde!$"

ActualHell_Text_RightPillarDefeat:
	.string "I'm a failure!$"

ActualHell_Text_RightPillarOuttro:
	.string "DEMON: …why…\p"
	.string "Human, your power is unnatural.\p"
	.string "You will know how to use this, if\n"
	.string "you live that long.$"

ActualHell_Text_RightPillarPostBattle:
	.string "DEMON: What happens now is out of\n"
	.string "my control.\p"
	.string "I hope my superiors bear that in\n"
	.string "mind when doling out punishment.$"

ActualHell_Movement_RightPillar:
	walk_left
	face_down
	step_end

ActualHell_EventScript_OpenWayLeftPillar::
	setmetatile 16, 8, 0x271, FALSE
	setmetatile 16, 9, 0x271, FALSE
	setmetatile 21, 8, 0x3A5, FALSE
	setmetatile 22, 8, 0x3A6, FALSE
	setmetatile 23, 8, 0x3A7, FALSE
	setmetatile 21, 9, 0x3AD, FALSE
	setmetatile 22, 9, 0x271, FALSE
	setmetatile 23, 9, 0x3AF, FALSE
	return

ActualHell_EventScript_OpenWayRightPillar::
	setmetatile 26, 9, 0x271, FALSE
	setmetatile 26, 10, 0x271, FALSE
	setmetatile 21, 11, 0x3B5, FALSE
	setmetatile 22, 11, 0x3B6, FALSE
	setmetatile 23, 11, 0x3B7, FALSE
	setmetatile 21, 10, 0x3AD, FALSE
	setmetatile 22, 10, 0x271, FALSE
	setmetatile 23, 10, 0x3AF, FALSE
	return

ActualHell_EventScript_LeftPillar::
	lock
	faceplayer
	goto_if_set FLAG_HELL_LEFT_PILLAR_DONE, ActualHell_EventScript_PillarDone
	msgbox ActualHell_Text_LeftPillar, MSGBOX_DEFAULT
	closemessage
	applymovement VAR_LAST_TALKED, Common_Movement_FaceRight
	fadescreen FADE_TO_WHITE
	playse SE_M_ROCK_THROW
	waitse
	call ActualHell_EventScript_OpenWayLeftPillar
	special DrawWholeMapView
	fadescreen FADE_FROM_WHITE
	msgbox ActualHell_Text_PillarOpen, MSGBOX_DEFAULT
	setflag FLAG_HELL_LEFT_PILLAR_DONE
	release
	end

ActualHell_EventScript_PillarDone:
	msgbox ActualHell_Text_PillarDone, MSGBOX_DEFAULT
	release
	end

ActualHell_Text_LeftPillar:
	.string "{PLAYER}: So I hear you can open the\n"
	.string "way to the artefact, huh?\p"
	.string "Make it snappy.\p"
	.string "DEMON: Y-yes, I do as I'm told…$"

ActualHell_Text_PillarOpen:
	.string "DEMON: I can't wait to see\n"
	.string "ASMODEUS put you in your place!$"

ActualHell_Text_PillarDone:
	.string "DEMON: What are you waiting for?$"

ActualHell_EventScript_RightPillar::
	lock
	faceplayer
	goto_if_set FLAG_HELL_RIGHT_PILLAR_DONE, ActualHell_EventScript_PillarDone
	msgbox ActualHell_Text_RightPillar, MSGBOX_DEFAULT
	closemessage
	applymovement VAR_LAST_TALKED, Common_Movement_FaceLeft
	fadescreen FADE_TO_WHITE
	playse SE_M_ROCK_THROW
	waitse
	call ActualHell_EventScript_OpenWayRightPillar
	special DrawWholeMapView
	fadescreen FADE_FROM_WHITE
	msgbox ActualHell_Text_PillarOpen, MSGBOX_DEFAULT
	setflag FLAG_HELL_RIGHT_PILLAR_DONE
	release
	end

ActualHell_Text_RightPillar:
	.string "{PLAYER}: Open the passage.\p"
	.string "Stop having it be closed.$"

// boss battle trigger
ActualHell_Trigger_Boss::
	lockall
	playse SE_PIN
	applymovement LOCALID_ARCHDEMON, Common_Movement_FaceDown
	applymovement LOCALID_ATTENDANT_1, Common_Movement_FaceDown
	applymovement LOCALID_ATTENDANT_2, Common_Movement_FaceDown
	applymovement LOCALID_ATTENDANT_3, Common_Movement_FaceDown
	applymovement LOCALID_ATTENDANT_4, Common_Movement_FaceDown
	waitmovement 0
	applymovement LOCALID_ARCHDEMON, Common_Movement_ExclamationMark
	applymovement LOCALID_ATTENDANT_1, Common_Movement_ExclamationMark
	applymovement LOCALID_ATTENDANT_2, Common_Movement_ExclamationMark
	applymovement LOCALID_ATTENDANT_3, Common_Movement_ExclamationMark
	applymovement LOCALID_ATTENDANT_4, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement LOCALID_ARCHDEMON, Common_Movement_Delay48
	applymovement LOCALID_ATTENDANT_1, Common_Movement_Delay48
	applymovement LOCALID_ATTENDANT_2, Common_Movement_Delay48
	applymovement LOCALID_ATTENDANT_3, Common_Movement_Delay48
	applymovement LOCALID_ATTENDANT_4, Common_Movement_Delay48
	waitmovement 0
	applymovement LOCALID_ARCHDEMON, ActualHell_Movement_StepDown
	msgbox ActualHell_Text_ArchdemonIntro, MSGBOX_DEFAULT
	closemessage
	trainerbattle_no_intro TRAINER_CLARK, ActualHell_Text_ArchdemonDefeat
	playse SE_SUPER_EFFECTIVE
	applymovement LOCALID_ARCHDEMON, ActualHell_Movement_ArchdemonStepBack
	waitmovement 0
	applymovement LOCALID_ATTENDANT_4, ActualHell_Text_Attendant4Leave
	waitmovement 0
	removeobject LOCALID_ATTENDANT_4
	applymovement LOCALID_ATTENDANT_2, ActualHell_Movement_Attendant2Leave
	msgbox ActualHell_Text_ArchdemonPostBattle1, MSGBOX_DEFAULT
	waitmovement LOCALID_ATTENDANT_2
	removeobject LOCALID_ATTENDANT_2
	closemessage
	applymovement LOCALID_ARCHDEMON, ActualHell_Movement_Lunge
	waitmovement 0
	playse SE_M_SWIFT
	waitse
	applymovement LOCALID_ARCHDEMON, ActualHell_Movement_KnockBack 
	setvar VAR_0x8004, 1  @ vertical pan
	setvar VAR_0x8005, 1  @ horizontal pan
	setvar VAR_0x8006, 2  @ num shakes
	setvar VAR_0x8007, 5  @ shake delay
	special ShakeCamera
	waitstate
	waitmovement LOCALID_ARCHDEMON
	playse SE_ICE_BREAK
	removeobject LOCALID_ARTEFACT
	applymovement LOCALID_ARCHDEMON, ActualHell_Movement_Bounce
	waitmovement 0
	applymovement LOCALID_ATTENDANT_1, ActualHell_Movement_Attendant1Leave
	applymovement LOCALID_ATTENDANT_3, ActualHell_Movement_Attendant3Leave
	waitmovement LOCALID_ATTENDANT_1
	removeobject LOCALID_ATTENDANT_1
	waitmovement LOCALID_ATTENDANT_3
	removeobject LOCALID_ATTENDANT_3
	msgbox ActualHell_Text_ArchdemonPostBattle2, MSGBOX_DEFAULT
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, ActualHell_Movement_PlayerRushUp
	waitmovement 0
	applymovement LOCALID_ARCHDEMON, Common_Movement_FaceLeft
	msgbox ActualHell_Text_ArchdemonPostBattle3, MSGBOX_DEFAULT
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
	msgbox ActualHell_Text_ArchdemonPostBattle4, MSGBOX_DEFAULT
	setvar VAR_RUSTURF_TUNNEL_STATE, 2
	warp MAP_RUSTURF_TUNNEL, 12, 5
	waitstate
	releaseall
	end
	

ActualHell_Text_ArchdemonIntro:
	.string "ARCHDEMON: Oh? You finally made it.\n"
	.string "I've heard about you, human.\p"
	.string "{PLAYER}: Yeah, yeah. I know I wasn't\n"
	.string "exactly stealthy, here.\p"
	.string "ARCHDEMON: No, not that. I mean\n"
	.string "your reputation from your…old life.\p"
	.string "{PLAYER}: WHAT!? You know about\n"
	.string "my old life? My lost memories?\p"
	.string "Answer me!\p"
	.string "ARCHDEMON: Heh heh. I have no need\n"
	.string "to do that. You're in MY domain.\l"
	.string "You have no place to make demands.\p"
	.string "I am ASMODEUS, ARCH DEMON of this\n"
	.string "sector of HELL!\p"
	.string "Me and my elite attendants will\n"
	.string "make mincemeat out of you.\p"
	.string "{PLAYER}: So what? You're gonna make\n"
	.string "me fight all four of them first?\p"
	.string "ASMODEUS: No, that's trite. I'll\n"
	.string "kill you myself!$"

ActualHell_Text_ArchdemonDefeat:
	.string "B-but that's impossible!\n"
	.string "WAR said that you were weakened…!$"

ActualHell_Text_ArchdemonPostBattle1:
	.string "ASMODEUS: No…NO! I've lost!\n"
	.string "This cannot be…you were supposed\l"
	.string "to be easy pickings…!\p"
	.string "{PLAYER}: Yeah, funny story. You\n"
	.string "monstrous freaks haven't stopped\l"
	.string "underestimating me since I woke up.\p"
	.string "Now here's how this is gonna go.\n"
	.string "You'll tell me about my past, and\l"
	.string "then I destroy that SOUL PORTAL\l"
	.string "ARTEFACT so you can't mess up\l"
	.string "my region any more.\p"
	.string "ASMODEUS: Grr…as if! I'm not as\n"
	.string "cowardly as my subordinates!\l"
	.string "Who needs POKéMON? I'll kill you\l"
	.string "with my own claws!$"

ActualHell_Text_ArchdemonPostBattle2:
	.string "ASMODEUS: Damned protective spell!\p"
	.string "{PLAYER}: The artefact! It broke!\p"
	.string "Mission accomplished.\n"
	.string "{PAUSE 30}…wait, no!$"

ActualHell_Text_ArchdemonPostBattle3:
	.string "{PLAYER}: You! Give me answers!\p"
	.string "What was I before? Who tried to kill\n"
	.string "me? Why? How did I survive?\p"
	.string "ASMODEUS: Keh heh…such desperation!\p"
	.string "You may have beaten me, but you are\n"
	.string "still powerless in the grand scheme.\p"
	.string "How amusing…\p"
	.string "{PLAYER}: Shut up and answer me, you-!$"

ActualHell_Text_ArchdemonPostBattle4:
	.string "{COLOR RED}{SHADOW LIGHT_RED}GLEIS: {PLAYER}! I can feel that the\n"
	.string "seal has broken! I'll extract you now!\p"
	.string "{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}{PLAYER}: No! Wait! I need to know-!$"
	
ActualHell_Movement_StepDown:
	walk_down
	step_end

ActualHell_Movement_ArchdemonStepBack:
	lock_facing_direction
	walk_slow_up
	unlock_facing_direction
	step_end

ActualHell_Text_Attendant4Leave:
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_up
	step_end

ActualHell_Movement_Attendant2Leave:
	delay_16
	delay_16
	delay_16
	delay_16
	walk_slow_right
	delay_16
	walk_right
	delay_8
	walk_fast_right
	walk_fast_up
	set_invisible
	step_end

ActualHell_Movement_Lunge:
	jump_down
	step_end

ActualHell_Movement_KnockBack:
	lock_facing_direction
	slide_up
	unlock_facing_direction
	step_end

ActualHell_Movement_Bounce:
	lock_facing_direction
	jump_right
	unlock_facing_direction
	step_end

ActualHell_Movement_Attendant1Leave:
	emote_exclamation_mark
	delay_16
	delay_16
	delay_16
	walk_fast_right
	walk_fast_up
	walk_fast_up
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_up
	step_end

ActualHell_Movement_Attendant3Leave:
	emote_exclamation_mark
	delay_16
	delay_16
	delay_16
	delay_16
	walk_fast_left
	walk_fast_up
	walk_fast_up
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_up
	step_end

ActualHell_Movement_PlayerRushUp:
	walk_fast_up
	walk_fast_up
	face_right
	step_end
	

	// demons see player
	// archdemon monologues
	// arch demon battle
	// demons flee
	// player destroys artefact
	// warps back out
	// gleis tells the player elis edied an then leaves, then you get a "the demo is over" message
