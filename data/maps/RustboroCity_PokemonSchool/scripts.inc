RustboroCity_PokemonSchool_MapScripts::
	.byte 0

RustboroCity_PokemonSchool_EventScript_Blackboard::
	lockall
	msgbox RustboroCity_PokemonSchool_Text_BlackboardListsStatusChanges, MSGBOX_DEFAULT
	goto RustboroCity_PokemonSchool_EventScript_ChooseBlackboardTopic
	end

RustboroCity_PokemonSchool_EventScript_ChooseBlackboardTopic::
	message RustboroCity_PokemonSchool_Text_ReadWhichTopic
	waitmessage
	multichoicegrid 8, 1, MULTI_STATUS_INFO, 3, FALSE
	switch VAR_RESULT
	case 0, RustboroCity_PokemonSchool_EventScript_Poison
	case 1, RustboroCity_PokemonSchool_EventScript_Paralysis
	case 2, RustboroCity_PokemonSchool_EventScript_Sleep
	case 3, RustboroCity_PokemonSchool_EventScript_Burn
	case 4, RustboroCity_PokemonSchool_EventScript_Freeze
	case 5, RustboroCity_PokemonSchool_EventScript_ExitTopicSelect
	case MULTI_B_PRESSED, RustboroCity_PokemonSchool_EventScript_ExitTopicSelect
	end

RustboroCity_PokemonSchool_EventScript_Poison::
	msgbox RustboroCity_PokemonSchool_Text_ExplainPoison, MSGBOX_DEFAULT
	goto RustboroCity_PokemonSchool_EventScript_ChooseBlackboardTopic
	end

RustboroCity_PokemonSchool_EventScript_Paralysis::
	msgbox RustboroCity_PokemonSchool_Text_ExplainParalysis, MSGBOX_DEFAULT
	goto RustboroCity_PokemonSchool_EventScript_ChooseBlackboardTopic
	end

RustboroCity_PokemonSchool_EventScript_Sleep::
	msgbox RustboroCity_PokemonSchool_Text_ExplainSleep, MSGBOX_DEFAULT
	goto RustboroCity_PokemonSchool_EventScript_ChooseBlackboardTopic
	end

RustboroCity_PokemonSchool_EventScript_Burn::
	msgbox RustboroCity_PokemonSchool_Text_ExplainBurn, MSGBOX_DEFAULT
	goto RustboroCity_PokemonSchool_EventScript_ChooseBlackboardTopic
	end

RustboroCity_PokemonSchool_EventScript_Freeze::
	msgbox RustboroCity_PokemonSchool_Text_ExplainFreeze, MSGBOX_DEFAULT
	goto RustboroCity_PokemonSchool_EventScript_ChooseBlackboardTopic
	end

RustboroCity_PokemonSchool_EventScript_ExitTopicSelect::
	releaseall
	end

RustboroCity_PokemonSchool_EventScript_StudentNotebook::
	msgbox RustboroCity_PokemonSchool_Text_StudentsNotes, MSGBOX_SIGN
	end

RustboroCity_PokemonSchool_EventScript_Teacher::
	finditem ITEM_QUICK_CLAW
	end

RustboroCity_PokemonSchool_Text_BlackboardListsStatusChanges:
	.string "The blackboard lists status changes\n"
	.string "that may affect POKéMON in battle.$"

RustboroCity_PokemonSchool_Text_ReadWhichTopic:
	.string "Which topic do you want to read?$"

RustboroCity_PokemonSchool_Text_ExplainPoison:
	.string "If a POKéMON is poisoned, it will\n"
	.string "steadily lose HP.\p"
	.string "The effects of poison remain after\n"
	.string "a battle.\p"
	.string "A poisoned POKéMON's HP will drop\n"
	.string "while it is traveling.\p"
	.string "Heal a poisoning using an ANTIDOTE.$"

RustboroCity_PokemonSchool_Text_ExplainParalysis:
	.string "If a POKéMON becomes paralyzed,\n"
	.string "its SPEED drops.\p"
	.string "It may also not be able to move while\n"
	.string "it is in battle.\p"
	.string "Paralysis remains after battle.\n"
	.string "Cure it using a PARLYZ HEAL.$"

RustboroCity_PokemonSchool_Text_ExplainSleep:
	.string "If a POKéMON falls asleep, it will be\n"
	.string "unable to attack.\p"
	.string "A POKéMON may wake up on its own,\n"
	.string "but if a battle ends while it is\l"
	.string "sleeping, it will stay asleep.\p"
	.string "Wake it up using an AWAKENING.$"

RustboroCity_PokemonSchool_Text_ExplainBurn:
	.string "A burn reduces ATTACK power, and it\n"
	.string "steadily reduces the victim's HP.\p"
	.string "A burn lingers after battle.\n"
	.string "Cure a burn using a BURN HEAL.$"

RustboroCity_PokemonSchool_Text_ExplainFreeze:
	.string "If a POKéMON is frozen, it becomes\n"
	.string "completely helpless.\p"
	.string "It will remain frozen after battle.\n"
	.string "Thaw it out using an ICE HEAL.$"

RustboroCity_PokemonSchool_Text_StudentsNotes:
	.string "It's a student's notebook…\n"
	.string "The open page reads:\p"
	.string "We blocked the door with DEREK's\n"
	.string "corpse, but it didn't do any good.\p"
	.string "No matter what we block it with, the\n"
	.string "demons just eat their way through.\p"
	.string "ELISE was taken today.\n"
	.string "It's just me left.\p"
	.string "I have the teacher's QUICK CLAW,\n"
	.string "but I don't have any POKéMON.\p"
	.string "But it's sharp.\p"
	.string "I think I know how I can use it to\n"
	.string "stop the demons from taking me alive.$"

