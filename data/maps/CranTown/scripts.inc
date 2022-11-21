CranTown_MapScripts::
	.byte 0

// trigger scripts North
CranTown_TriggerScript_NorthBlock::
	msgbox CranTown_Text_Block, MSGBOX_DEFAULT
	applymovement OBJ_EVENT_ID_PLAYER, CranTown_Movement_StepDown
	end
	
// trigger scripts East
CranTown_TriggerScript_EastBlock::
	msgbox CranTown_Text_Block, MSGBOX_DEFAULT
	applymovement OBJ_EVENT_ID_PLAYER, CranTown_Movement_StepLeft
	end
	
CranTown_Text_Block:
	.string "PROFESSOR MANGROVE's words echoed…\n"
	.string "Come visit my lab, if you please.$"
	
CranTown_Movement_StepDown:
	walk_down
	step_end
	
CranTown_Movement_StepLeft:
	walk_left
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

Test_Boss::
	msgbox CranTown_Text_Block, MSGBOX_NPC
	setflag FLAG_BOSS_FIGHT
	end

Test_Dynamic::
	msgbox CranTown_Text_Block, MSGBOX_NPC
	setflag FLAG_DYNAMIC_LEVEL_ZONE
	end
// trainer tips script

