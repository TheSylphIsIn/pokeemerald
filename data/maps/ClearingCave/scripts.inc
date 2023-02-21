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
	.string "KEY RESEARCH FACILITY\n"
	.string "UNDERGROUND LAB No. 1\p"
	.string "Authorized personnel only.$"

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
	release
	end
	
ClearingCave_Text_MorganIdle1:
	.string "MORGAN: CALVIN, you're hopeless…\n"
	.string "Listen, I'll guide you.$"

ClearingCave_Text_MorganIdle2:
	.string "MORGAN: {PLAYER}, go on ahead.\n"
	.string "This might take a while…\l"
	.string "We'll follow eventually.$"
	
// guard trigger
