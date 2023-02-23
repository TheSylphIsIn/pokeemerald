.set LOCALID_PARAS_BALL, 3
.set LOCALID_BALTOY_BALL, 1
.set LOCALID_KOFFING_BALL, 2 

LittlerootTown_MapScripts::
	.byte 0

LittlerootTown_EventScript_NeedPokemonTrigger::
	lockall
	msgbox LittlerootTown_Text_PlayerNeedsPkmn, MSGBOX_DEFAULT
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_Movement_PlayerWalkBack
	waitmovement 0
	releaseall
	end
	
LittlerootTown_EventScript_ParasBall::
	lock
	goto_if_set FLAG_SYS_POKEMON_GET, LittlerootTown_EventScript_HaveStarter
	msgbox LittlerootTown_Text_ParasBall, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, LittlerootTown_EventScript_StarterNo
	givemon SPECIES_PARAS, 5, ITEM_ORAN_BERRY
	removeobject LOCALID_PARAS_BALL
	goto LittlerootTown_EventScript_CommonStarter
	
LittlerootTown_EventScript_BaltoyBall::
	lock
	goto_if_set FLAG_SYS_POKEMON_GET, LittlerootTown_EventScript_HaveStarter
	msgbox LittlerootTown_Text_BaltoyBall, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, LittlerootTown_EventScript_StarterNo
	givemon SPECIES_BALTOY, 5, ITEM_ORAN_BERRY
	removeobject LOCALID_BALTOY_BALL
	goto LittlerootTown_EventScript_CommonStarter
	
LittlerootTown_EventScript_KoffingBall::
	lock
	goto_if_set FLAG_SYS_POKEMON_GET, LittlerootTown_EventScript_HaveStarter
	msgbox LittlerootTown_Text_KoffingBall, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, LittlerootTown_EventScript_StarterNo
	givemon SPECIES_KOFFING, 5, ITEM_ORAN_BERRY
	removeobject LOCALID_KOFFING_BALL
	goto LittlerootTown_EventScript_CommonStarter
	
LittlerootTown_EventScript_CommonStarter:
	setflag FLAG_SYS_POKEMON_GET
	setvar VAR_LITTLEROOT_TOWN_STATE, 1
	bufferleadmonspeciesname STR_VAR_1
	playfanfare MUS_OBTAIN_TMHM
	msgbox LittlerootTown_Text_ReceivedStarter, MSGBOX_DEFAULT
	waitmessage
	waitfanfare
	closemessage
	msgbox LittlerootTown_Text_NicknamePrompt, MSGBOX_YESNO
	call_if_eq VAR_RESULT, YES, Littleroot_Town_NicknameStarter
	release
	end

Littleroot_Town_NicknameStarter:
	setvar VAR_0x8004, 0
	call Common_EventScript_NameReceivedPartyMon
	return
	
LittlerootTown_EventScript_HaveStarter:
	msgbox LittlerootTown_Text_HaveStarter, MSGBOX_DEFAULT
	release
	end
	
LittlerootTown_EventScript_StarterNo:
	msgbox LittlerootTown_Text_PickDifferentOne, MSGBOX_DEFAULT
	release
	end
	
LittlerootTown_Text_ParasBall:
	.string "This POKé BALL has an air of\n"
	.string "ill health about it… take it?$"
	
LittlerootTown_Text_BaltoyBall:
	.string "This POKé BALL is slowly turning\n"
	.string "on its own axis… take it?$"
	
LittlerootTown_Text_KoffingBall:
	.string "This POKé BALL is gently spewing\n"
	.string "exhaust fumes… take it?$"
	
LittlerootTown_Text_ReceivedStarter:
	.string "Found a {STR_VAR_1}!$"
	
LittlerootTown_Text_NicknamePrompt:
	.string "Should I nickname the {STR_VAR_1}?$"
	
LittlerootTown_Text_HaveStarter:
	.string "Huh? I thought there were more\n"
	.string "POKéMON here, but this ball's empty…$"
	
LittlerootTown_Text_PickDifferentOne:
	.string "I feel like a thief, but I won't\n"
	.string "survive without one. Maybe there's\l"
	.string "a better one around here…$"
	
LittlerootTown_Text_PlayerNeedsPkmn:
	.string "I may have lost most of my memories,\n"
	.string "but I know there are wild POKéMON\l"
	.string "out there.\p"
	.string "It isn't safe without a POKéMON\n"
	.string "of my own.$"
	
LittlerootTown_Movement_PlayerWalkBack:
	walk_slow_down
	walk_slow_down
	step_end

LittlerootTown_EventScript_TownSign::
	msgbox LittlerootTown_Text_TownSign, MSGBOX_SIGN
	giveitem ITEM_POTION
	giveitem ITEM_SHOAL_SHELL
	giveitem ITEM_POKE_BALL
	end

LittlerootTown_EventScript_BirchsLabSign::
	msgbox LittlerootTown_Text_ProfBirchsLab, MSGBOX_SIGN
	end

LittlerootTown_EventScript_BrendansHouseSign::
	lockall
	checkplayergender
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_PlayersHouseSignMale
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_BirchsHouseSignFemale
	releaseall
	end

LittlerootTown_EventScript_PlayersHouseSignMale::
	msgbox LittlerootTown_Text_PlayersHouse, MSGBOX_DEFAULT
	return

LittlerootTown_EventScript_BirchsHouseSignFemale::
	msgbox LittlerootTown_Text_ProfBirchsHouse, MSGBOX_DEFAULT
	return

LittlerootTown_EventScript_MaysHouseSign::
	lockall
	checkplayergender
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_BirchsHouseSignMale
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_PlayersHouseSignFemale
	releaseall
	end

LittlerootTown_EventScript_BirchsHouseSignMale::
	msgbox LittlerootTown_Text_ProfBirchsHouse, MSGBOX_DEFAULT
	return

LittlerootTown_EventScript_PlayersHouseSignFemale::
	msgbox LittlerootTown_Text_PlayersHouse, MSGBOX_DEFAULT
	return

LittlerootTown_Text_TownSign:
	.string "LITTLEROOT TOWN\n"
	.string "“A town that can't be shaded any hue.”\p"
	.string "The sign is shaded reddish brown\n"
	.string "because of the blood on it.$"

LittlerootTown_Text_ProfBirchsLab:
	.string "PROF. BIRCH'S POKéMON LAB$"

LittlerootTown_Text_PlayersHouse:
	.string "{PLAYER}'s HOUSE$"

LittlerootTown_Text_ProfBirchsHouse:
	.string "PROF. BIRCH'S HOUSE$"



