.set LOCALID_MORGAN, 5
.set LOCALID_CALVIN, 3
.set LOCALID_LACKEY, 1

ClearingCave_MapScripts::
	.byte 0

//keep out sign
ClearingCave_Sign_KeepOut::
	msgbox ClearingCave_Text_KeepOut, MSGBOX_SIGN
	end

// lab sign
ClearingCave_Sign_Lab::
	msgbox ClearingCave_Text_Lab, MSGBOX_SIGN
	end

// keypad sign
ClearingCave_Sign_Keypad::
	msgbox ClearingCave_Text_Keypad, MSGBOX_SIGN
	end

// door sign
ClearingCave_Sign_LockedDoor::
	msgbox ClearingCave_Text_LockedDoor, MSGBOX_SIGN
	end

ClearingCave_Text_KeepOut:
	.string "PRIVATE PROPERTY\n"
	.string "KEEP OUT$"

ClearingCave_Text_Keypad:
	.string "It's a keypad for the door.\n"
	.string "You don't know the code.$"

ClearingCave_Text_Lab:
	.string "{EMPHASIS_GREEN}KEY RESEARCH FACILITY\n"
	.string "UNDERGROUND LAB No. 1\p"
	.string "{EMPHASIS_OFF}Authorized personnel only.$"

ClearingCave_Text_LockedDoor:
	.string "The door is firmly sealed by an\n"
	.string "electronic lock.$"

// calvin stuck script
ClearingCave_EventScript_Calvin::
	msgbox ClearingCave_Text_CalvinIdle, MSGBOX_NPC
	end
	
ClearingCave_Text_CalvinIdle:
	.string "CALVIN: Gah! Stupid ice!\p"
	.string "The way forward is right there, but\n"
	.string "I keep missing it!$"

// morgan idle script
ClearingCave_EventScript_Morgan::
	lock
	msgbox ClearingCave_Text_MorganIdle1, MSGBOX_DEFAULT
	closemessage
	faceplayer
	msgbox ClearingCave_Text_MorganIdle2, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_MORGAN, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end
	
ClearingCave_Text_MorganIdle1:
	.string "MORGAN: Calvin, you're hopeless…\n"
	.string "Listen, I'll guide you.$"

ClearingCave_Text_MorganIdle2:
	.string "MORGAN: {PLAYER}, go on ahead.\n"
	.string "This might take a while…\l"
	.string "We'll follow eventually.$"
	
// guard trigger
ClearingCave_TriggerScript_LackeyFight::
	lockall
	applymovement OBJ_EVENT_ID_PLAYER, ClearingCave_Movement_PlayerApproachGrunt
	waitmovement 0
	playse SE_PIN
	applymovement LOCALID_LACKEY, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement LOCALID_LACKEY, Common_Movement_Delay48
	waitmovement 0
	playbgm MUS_ENCOUNTER_AQUA, TRUE
	applymovement LOCALID_LACKEY, ClearingCave_Movement_LackeyApproachPlayer
	waitmovement 0
	msgbox ClearingCave_Text_Lackey1, MSGBOX_DEFAULT
	trainerbattle_no_intro TRAINER_KEY_LACKEY_FISHEYE_LAKE, ClearingCave_Text_LackeyDefeat
	lockall
	applymovement LOCALID_LACKEY, ClearingCave_Movement_LackeyBeaten
	waitmovement 0
	msgbox ClearingCave_Text_Lackey2, MSGBOX_DEFAULT
	savebgm MUS_DUMMY
	fadedefaultbgm
	closemessage
	addobject LOCALID_CALVIN
	addobject LOCALID_MORGAN
	setobjectxy LOCALID_MORGAN, 14, 5
	setobjectxy LOCALID_CALVIN, 13, 5
	applymovement LOCALID_MORGAN, ClearingCave_Movement_MorganSlideIn
	applymovement LOCALID_CALVIN, ClearingCave_Movement_CalvinSlideIn
	waitmovement LOCALID_MORGAN
	msgbox ClearingCave_Text_RivalsAppear, MSGBOX_DEFAULT
	giveitem ITEM_ABILITY_SCANNER
	closemessage
	playse SE_TRUCK_DOOR
	setmetatile 21, 0, 0x3A7, TRUE
	setmetatile 22, 0, 0x397, TRUE
	setmetatile 23, 0, 0x3A6, TRUE
	setmetatile 21, 1, 0x3A1, TRUE
	setmetatile 22, 1, 0x3A5, FALSE
	setmetatile 23, 1, 0x3A0, TRUE
	special DrawWholeMapView
	waitse
	applymovement LOCALID_LACKEY, Common_Movement_FaceUp
	msgbox ClearingCave_Text_Lackey3, MSGBOX_DEFAULT
	applymovement LOCALID_LACKEY, Common_Movement_FaceDown
	msgbox ClearingCave_Text_Lackey4, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_LACKEY, Common_Movement_WalkUp
	waitmovement 0
	removeobject LOCALID_LACKEY
	playse SE_TRUCK_DOOR
	setmetatile 21, 0, 0x39A, TRUE
	setmetatile 22, 0, 0x39E, TRUE
	setmetatile 23, 0, 0x39F, TRUE
	setmetatile 21, 1, 0x3A2, TRUE
	setmetatile 22, 1, 0x3A3, TRUE
	setmetatile 23, 1, 0x3A4, TRUE
	special DrawWholeMapView
	waitse
	delay 60
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
	msgbox  ClearingCave_Text_Finish, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_MORGAN, ClearingCave_Movement_WalkOffscreen
	applymovement LOCALID_CALVIN, ClearingCave_Movement_StepRight2
	waitmovement LOCALID_CALVIN
	applymovement LOCALID_CALVIN, ClearingCave_Movement_WalkOffscreen
	waitmovement LOCALID_CALVIN
	removeobject LOCALID_MORGAN
	removeobject LOCALID_CALVIN
	setvar VAR_TEAM_KEY_STATE, 1
	setflag FLAG_RECOVERED_ABILITY_SCANNER
	releaseall
	end
	
ClearingCave_Text_Lackey1:
	.string "Ah! I've been followed!\p"
	.string "So, you want this Ability Scanner\n"
	.string "back, do you? Do you even understand\l"
	.string "what this device does?\p"
	.string "It reads the energies of Pokémon.\p"
	.string "Using an amazing device like this\n"
	.string "just to make yourself better\l"
	.string "in battle is childish!\p"
	.string "{EMPHASIS_GREEN}Team Key{EMPHASIS_OFF} has a much better use in\n"
	.string "mind! So begone!$"

ClearingCave_Text_LackeyDefeat:
	.string "Ack! I'm just a scout!$"
	
ClearingCave_Text_Lackey2:
	.string "How irritating…\p"
	.string "The information I've recorded so far\n"
	.string "will still be useful, but we could\l"
	.string "progress much faster if we had the\l"
	.string "device itself…you…!$"

ClearingCave_Text_RivalsAppear:
	.string "CALVIN: Yo, {PLAYER}! You win already?\n"
	.string "MORGAN: Sorry for being late…\p"
	.string "LACKEY: More of you, eh…\p"
	.string "Fine! I admit defeat. Take it.$"

ClearingCave_Text_Lackey3:
	.string "LACKEY: Ugh, finally! Lousy laggy\n"
	.string "security system.$"

ClearingCave_Text_Lackey4:
	.string "Listen here! You twerps don't\n"
	.string "understand what you're messing with.\p"
	.string "What Team Key does is none of your\n"
	.string "business! So butt out!$"

ClearingCave_Text_Finish:
	.string "MORGAN: {EMPHASIS_GREEN}Team Key{EMPHASIS_OFF}? So, that guy was\n"
	.string "working for someone else…\p"
	.string "CALVIN: Who cares? We got the thing\n"
	.string "back, right? Let's just get going.\p"
	.string "MORGAN: Oh, alright. {PLAYER}, do you\n"
	.string "mind {EMPHASIS_RED}giving that back to the professor?{EMPHASIS_OFF}\p"
	.string "We'll go on ahead, if that's okay.$"

ClearingCave_Movement_PlayerApproachGrunt:
	walk_right
	walk_right
	walk_up
	step_end

ClearingCave_Movement_LackeyApproachPlayer:
	walk_fast_left
	walk_fast_left
	walk_fast_down
	step_end

ClearingCave_Movement_LackeyBeaten:
	lock_facing_direction
	walk_slow_up
	unlock_facing_direction
	step_end

ClearingCave_Movement_MorganSlideIn:
	face_right
	lock_anim
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	unlock_anim
	walk_right
	walk_right
	walk_right
	face_up
	step_end

ClearingCave_Movement_CalvinSlideIn:
	face_right
	delay_8
	lock_anim
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	unlock_anim
	walk_right
	face_up
	step_end

ClearingCave_Movement_WalkOffscreen:
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	step_end

ClearingCave_Movement_StepRight2:
	walk_right
	walk_right
	step_end
