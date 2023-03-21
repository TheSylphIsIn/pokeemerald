EndlessPlainPetalburg_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, EndlessPlainPetalburg_OnFrame
	.byte 0

EndlessPlainPetalburg_OnFrame::
	map_script_2 VAR_SCOTT_PETALBURG_ENCOUNTER, 1, EndlessPlainPetalburg_OnFrameScript
	.2byte 0

EndlessPlainPetalburg_OnFrameScript:
	lockall
	msgbox EndlessPlainPetalburg_Text_Tutorial1, MSGBOX_DEFAULT
	closemessage
	playbgm MUS_FOLLOW_ME, FALSE
	applymovement 1, EndlessPlainPetalburg_Movement_BoyWalkToPC
	applymovement OBJ_EVENT_ID_PLAYER, EndlessPlainPetalburg_Movement_PlayerStepUpToTutorial
	waitmovement 1
	msgbox EndlessPlainPetalburg_Text_Tutorial2, MSGBOX_DEFAULT
	closemessage
	applymovement 1, EndlessPlainPetalburg_Movement_BoyWalkToBlender
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
	waitmovement 1
	msgbox EndlessPlainPetalburg_Text_Tutorial3, MSGBOX_DEFAULT
	closemessage
	applymovement 1, EndlessPlainPetalburg_Movement_BoyWalkToAprigacha
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
	waitmovement 1
	msgbox EndlessPlainPetalburg_Text_Tutorial4, MSGBOX_DEFAULT
	closemessage
	fadedefaultbgm
	applymovement 1, EndlessPlainPetalburg_Movement_BoyWalkToPlayer
	waitmovement 1
	msgbox EndlessPlainPetalburg_Text_Tutorial5, MSGBOX_DEFAULT
	closemessage
	applymovement 1, EndlessPlainPetalburg_Movement_BoyLeave
	waitmovement 1
	playse SE_DOOR
	removeobject 1
	waitse
	setvar VAR_SCOTT_PETALBURG_ENCOUNTER, 2
	releaseall
	end
	
EndlessPlainPetalburg_Text_Tutorial1:
	.string "BOY: Good, you made it.\n"
	.string "{PLAYER}: What is this place?\p"
	.string "BOY: This is the ENDLESS PLAIN.\n"
	.string "It's a strange dimension…\p"
	.string "But the zombies can't get in, and\n"
	.string "it has some useful utilities.\l"
	.string "Here, let me show you.$"

EndlessPlainPetalburg_Text_Tutorial2:
	.string "BOY: You can use this PC to access\n"
	.string "your POKéMON and item storage here.\p"
	.string "This shelf has some miscellaneous\n"
	.string "stuff, but it won't help you battle.$"

EndlessPlainPetalburg_Text_Tutorial3:
	.string "This is a MAGIC BLENDER.\n"
	.string "You can put one or two items in,\l"
	.string "and it'll blend them into a new one.\p"
	.string "If you've scavenged some loot from\n"
	.string "the dead, try putting it in here.$"

EndlessPlainPetalburg_Text_Tutorial4:
	.string "This is an APRICORN DISPENSER.\p"
	.string "You can use the MAGIC BLENDER to\n"
	.string "turn APRICORNs into POKé BALLs.\p"
	.string "I hear they can be used to enhance\n"
	.string "POTIONs, as well.$"

EndlessPlainPetalburg_Text_Tutorial5:
	.string "BOY: I've been using this place to\n"
	.string "hide from the undead.\p"
	.string "But don't stay too long. You'll go\n"
	.string "insane if you do.\p"
	.string "{PLAYER}: What was that last bit?\n"
	.string "BOY: I should go. Be safe out there.$"
	
EndlessPlainPetalburg_Movement_PlayerStepUpToTutorial:
	walk_up
	walk_up
	face_left
	step_end
	
EndlessPlainPetalburg_Movement_BoyWalkToPC:
	walk_up
	walk_up
	walk_left
	walk_left
	face_down
	step_end

EndlessPlainPetalburg_Movement_BoyWalkToBlender:
	walk_right
	walk_right
	walk_right
	walk_right
	face_down
	step_end
	
EndlessPlainPetalburg_Movement_BoyWalkToAprigacha:
	walk_right
	walk_right
	face_down
	step_end
	
EndlessPlainPetalburg_Movement_BoyWalkToPlayer:
	walk_down
	walk_left
	walk_left
	walk_left
	step_end
	
EndlessPlainPetalburg_Movement_BoyLeave:
	walk_down
	walk_down
	delay_16
	step_end

EndlessPlainPetalburg_EventScript_ApriGacha::
	lock
	msgbox EndlessPlainPetalburg_Text_ExplainAprigacha, MSGBOX_DEFAULT
	goto EndlessPlainPetalburg_EventScript_ApriGachaStart
	
EndlessPlainPetalburg_EventScript_ApriGachaStart::
	checkmoney 100
	goto_if_eq VAR_RESULT, FALSE, EndlessPlainPetalburg_EventScript_NoMoney
	checkitemspace ITEM_APRICORN
	goto_if_eq VAR_RESULT, FALSE, EndlessPlainPetalburg_EventScript_NoRoom
	checkitemspace ITEM_SUPERCORN
	goto_if_eq VAR_RESULT, FALSE, EndlessPlainPetalburg_EventScript_NoRoom
	msgbox EndlessPlainPetalburg_Text_PromptAprigacha, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, EndlessPlainPetalburg_EventScript_DidntPlay
	removemoney 100
	playse SE_VEND
	msgbox EndlessPlainPetalburg_Text_GachaActivate, MSGBOX_DEFAULT
	random 10
	goto_if_eq VAR_RESULT, 0, EndlessPlainPetalburg_EventScript_GetSupercorn
	giveitem ITEM_APRICORN
	goto EndlessPlainPetalburg_EventScript_ApriGachaStart
	
EndlessPlainPetalburg_EventScript_GetSupercorn::
	giveitem ITEM_SUPERCORN
	goto EndlessPlainPetalburg_EventScript_ApriGachaStart

EndlessPlainPetalburg_EventScript_DidntPlay::
	msgbox EndlessPlainPetalburg_Text_NoMore, MSGBOX_DEFAULT
	release
	end
	
EndlessPlainPetalburg_EventScript_NoMoney::
	msgbox EndlessPlainPetalburg_Text_NoMoney, MSGBOX_DEFAULT
	release
	end
	
EndlessPlainPetalburg_EventScript_NoRoom::
	msgbox EndlessPlainPetalburg_Text_NoRoom, MSGBOX_DEFAULT
	release
	end
	
EndlessPlainPetalburg_Text_ExplainAprigacha::
	.string "This is an APRIGACHA machine.\n"
	.string "It costs ¥100 to play.\p"
	.string "Put the money in, turn the crank,\n"
	.string "and get an APRICORN of randomly\l"
	.string "varying quality.\p"
	.string "RATES:\n"
	.string "APRICORN: 90%, SUPERCORN: 10%.$"
	
EndlessPlainPetalburg_Text_PromptAprigacha::
	.string "Play the APRIGACHA?$"
	
EndlessPlainPetalburg_Text_GachaActivate::
	.string "Turned the crank…\n"
	.string "K-chunk! Something fell out!$"
	
EndlessPlainPetalburg_Text_NoMore::
	.string "I don't want to develop a\n"
	.string "gambling addiction.$"
	
EndlessPlainPetalburg_Text_NoMoney::
	.string "You can't play because you're\n"
	.string "broke.$"
	
EndlessPlainPetalburg_Text_NoRoom::
	.string "You can't play because your bag\n"
	.string "might not have room for the result.$"

EndlessPlainPetalburg_EventScript_GoodiesShelf::
	msgbox EndlessPlainPetalburg_Text_SearchShelf, MSGBOX_DEFAULT
	special BufferShelfFlavorText
	msgbox EndlessPlainPetalburg_Text_VarText, MSGBOX_DEFAULT
	release
	end
	
EndlessPlainPetalburg_Text_SearchShelf:
	.string "{PLAYER} searched the shelf…$"
	
EndlessPlainPetalburg_Text_VarText:
	.string "{STR_VAR_1}$"

EndlessPlainPetalburg_EventScript_BarrierTrigger::
	msgbox EndlessPlainPetalburg_Text_Barrier, MSGBOX_SIGN
	special MovePlayerBack
	end

EndlessPlainPetalburg_Text_Barrier:
	.string "The ENDLESS PLAIN stretches for\n"
	.string "miles and miles, far as your eyes\l"
	.string "can see in any direction…\p"
	.string "You feel more comfortable staying\n"
	.string "close to the door.$"

