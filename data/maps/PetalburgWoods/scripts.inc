.set LOCALID_GRUNT, 3
.set LOCALID_DEVON_EMPLOYEE, 4

PetalburgWoods_MapScripts::
	.byte 0

PetalburgWoods_EventScript_DevonResearcherLeft::
	lockall
	call PetalburgWoods_EventScript_DevonResearcherIntro
	applymovement LOCALID_DEVON_EMPLOYEE, PetalburgWoods_Movement_DevonResearcherApproachPlayerLeft
	waitmovement 0
	msgbox PetalburgWoods_Text_HaveYouSeenShroomish, MSGBOX_DEFAULT
	trainerbattle_no_intro TRAINER_GRUNT_PETALBURG_WOODS, PetalburgWoods_Text_YoureKiddingMe
	msgbox PetalburgWoods_Text_DemonLastWords, MSGBOX_DEFAULT
	message Common_Text_DemonCrumbled
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_CrumbleToDust
	waitmovement 0
	removeobject LOCALID_DEVON_EMPLOYEE
	msgbox PetalburgWoods_Text_LootDemonCorpse, MSGBOX_DEFAULT
	setflag FLAG_BADGE01_GET
	message PetalburgWoods_Text_ReceivedStoneBadge
	waitmessage
	call Common_EventScript_PlayGymBadgeFanfare
	msgbox PetalburgWoods_Text_RecallStoneBadge, MSGBOX_DEFAULT
	closemessage
	fadescreen FADE_TO_WHITE
	fadescreen FADE_FROM_WHITE
	msgbox PetalburgWoods_Text_GettingFlashback, MSGBOX_DEFAULT
	fadescreen FADE_TO_WHITE
	msgbox PetalburgWoods_Text_Flashback, MSGBOX_DEFAULT
	closemessage
	delay 16
	fadescreen FADE_FROM_WHITE
	delay 8
	msgbox PetalburgWoods_Text_AfterFlashback, MSGBOX_DEFAULT
	setvar VAR_PETALBURG_WOODS_STATE, 1
	closemessage
	releaseall
	end
	
PetalburgWoods_Text_DemonLastWords:
	.string "LEVITATING LEGLESS CORPSE: Gah…\n"
	.string "I am defeated.\p"
	.string "We demons are honorable. Since you\n"
	.string "bested me, I will warn you.\p"
	.string "Stronger demons than I lurk ahead,\n"
	.string "in the city you call RUSTBORO.\p"
	.string "Beware…\n"
	.string "Keh heh heh…!$"

PetalburgWoods_Text_LootDemonCorpse:
	.string "{PLAYER} sifted through the remains…$"

PetalburgWoods_Text_RecallStoneBadge:
	.string "{PLAYER}: This badge…\n"
	.string "It's familiar to me…$"

PetalburgWoods_Text_GettingFlashback:
	.string "{PLAYER}: Ack! My head hurts…\n"
	.string "I think I'm getting a flashback…$"

PetalburgWoods_Text_Flashback:
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}LANDON: This is the STONE BADGE!\n"
	.string "I got it from defeating ROXANNE.\p"
	.string "It shows my mastery as a trainer,\n"
	.string "and boosts my POKéMON's ATTACK, too!$"

PetalburgWoods_Text_AfterFlashback:
	.string "{PLAYER}: Flashbacks hurt…\n"
	.string "But I remember.\p"
	.string "ROXANNE is RUSTBORO's GYM LEADER.\n"
	.string "GYM LEADERs are powerful trainers…\p"
	.string "So RUSTBORO should have been safe.\n"
	.string "But if it's overrun by demons…\p"
	.string "I need to be EXTREMELY careful\n"
	.string "from now on.$"
	
PetalburgWoods_Text_ReceivedStoneBadge:
	.string "{PLAYER} found a GYM BADGE!$"

PetalburgWoods_EventScript_DevonResearcherIntro::
	applymovement LOCALID_DEVON_EMPLOYEE, PetalburgWoods_Movement_DevonResearcherLookAround
	waitmovement 0
	msgbox PetalburgWoods_Text_NotAOneToBeFound, MSGBOX_DEFAULT
	closemessage
	return

PetalburgWoods_Movement_DevonResearcherLookAround:
	face_up
	delay_16
	delay_4
	face_right
	delay_16
	delay_8
	face_left
	delay_16
	delay_8
	face_down
	delay_16
	face_right
	delay_16
	delay_8
	face_up
	delay_16
	step_end

PetalburgWoods_Movement_DevonResearcherApproachPlayerLeft:
	delay_16
	face_player
	walk_slow_down
	walk_slow_down
	step_end

PetalburgWoods_EventScript_Boy1::
	msgbox PetalburgWoods_Text_StayOutOfTallGrass, MSGBOX_AUTOCLOSE
	end

PetalburgWoods_EventScript_Boy2::
	lock
	faceplayer
	msgbox PetalburgWoods_Text_HiddenItemsExplanation, MSGBOX_DEFAULT
	pokemart PetalburgWoods_LarryShop, 1
	msgbox PetalburgWoods_Text_LarryBye, MSGBOX_DEFAULT
	release
	end
	
PetalburgWoods_Text_LarryBye:
	.string "LARRY: If I ran out of anything you\n"
	.string "needed, then, well, that's life!\p"
	.string "Stay safe out there!$"

PetalburgWoods_LarryShop:
	.2byte ITEM_SUPER_POTION
	.2byte ITEM_POKE_BALL
	.2byte ITEM_ANTIDOTE
	.2byte ITEM_PARALYZE_HEAL
	.2byte ITEM_BURN_HEAL
	.2byte ITEM_REPEL
	.2byte ITEM_ESCAPE_ROPE
	.2byte ITEM_NONE
	release
	end

PetalburgWoods_EventScript_Girl::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_MIRACLE_SEED, PetalburgWoods_EventScript_ExplainMiracleSeed
	msgbox PetalburgWoods_Text_TryUsingThisItem, MSGBOX_DEFAULT
	giveitem ITEM_MIRACLE_SEED
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
	setflag FLAG_RECEIVED_MIRACLE_SEED
	release
	end

PetalburgWoods_EventScript_ExplainMiracleSeed::
	msgbox PetalburgWoods_Text_MiracleSeedExplanation, MSGBOX_DEFAULT
	release
	end

PetalburgWoods_EventScript_Sign1::
	msgbox PetalburgWoods_Text_TrainerTipsExperience, MSGBOX_SIGN
	end

PetalburgWoods_EventScript_Sign2::
	msgbox PetalburgWoods_Text_TrainerTipsPP, MSGBOX_SIGN
	end

PetalburgWoods_EventScript_Lyle::
	trainerbattle_single TRAINER_LYLE, PetalburgWoods_Text_GoBugPokemonTeam, PetalburgWoods_Text_ICouldntWin
	msgbox PetalburgWoods_Text_ImOutOfPokeBalls, MSGBOX_AUTOCLOSE
	end

PetalburgWoods_EventScript_James::
	trainerbattle_single TRAINER_JAMES_1, PetalburgWoods_Text_InstantlyPopularWithBugPokemon, PetalburgWoods_Text_CantBePopularIfILose, PetalburgWoods_EventScript_TryRegisterJames
	release
	end

PetalburgWoods_EventScript_TryRegisterJames::
	Call Common_DemonCrumble
	setvar VAR_TEMP_LOOT_ITEM, ITEM_MAGIC_POWDER
	Call Common_LootCorpse
	end

PetalburgWoods_Text_NotAOneToBeFound:
	.string "LEVITATING LEGLESS CORPSE: Uoooh…\n"
	.string "the misery…\p"
	.string "This body was a poor choice…but\n"
	.string "it still beats being in HELL!$"

PetalburgWoods_Text_HaveYouSeenShroomish:
	.string "Young one…\n"
	.string "Your body is in such good shape.\p"
	.string "I will leave this decrepit one and\n"
	.string "possess you instead!$"

PetalburgWoods_Text_YoureKiddingMe:
	.string "Aack! Such strength!$"

PetalburgWoods_Text_GoBugPokemonTeam:
	.string "I can't let you go any further!\p"
	.string "There are…THINGS out there! They're\n"
	.string "too powerful! They'll kill you!$"

PetalburgWoods_Text_ICouldntWin:
	.string "Please listen to me…$"

PetalburgWoods_Text_ImOutOfPokeBalls:
	.string "I just can't bear to stand by and\n"
	.string "watch people like you throw your\l"
	.string "lives away…$"

PetalburgWoods_Text_InstantlyPopularWithBugPokemon:
	.string "Mmmm, a fresh body ripe for the\n"
	.string "taking!$"

PetalburgWoods_Text_CantBePopularIfILose:
	.string "Curses! You've banished me!$"

PetalburgWoods_Text_StayOutOfTallGrass:
	.string "This boy appears to be dead.\p"
	.string "On closer inspection, his corpse is\n"
	.string "possessed by a demon.\p"
	.string "But it must be a pretty lazy demon,\n"
	.string "given that it's not attacking you.$"

PetalburgWoods_Text_HiddenItemsExplanation:
	.string "Hey, hey, hey! I'm LARRY the LOOTER!\p"
	.string "I've looted so much stuff that I've\n"
	.string "got plenty to spare.\p"
	.string "I'll even sell you some of it.\n"
	.string "Step right up!$"

PetalburgWoods_Text_TryUsingThisItem:
	.string "Oh, neat!\n"
	.string "That's the BADGE from RUSTBORO GYM!\p"
	.string "You must be a TRAINER.\n"
	.string "You should try using this item.$"

PetalburgWoods_Text_MiracleSeedExplanation:
	.string "It's a MIRACLE SEED.\n"
	.string "If a POKéMON holds that item, its\l"
	.string "GRASS-type moves become stronger.\p"
	.string "Besides MIRACLE SEED, I think there are\n"
	.string "other convenient items for POKéMON\l"
	.string "to hold.$"

PetalburgWoods_Text_TrainerTipsExperience:
	.string "TRAINER TIPS\p"
	.string "Any POKéMON that appears even once\n"
	.string "in a battle is awarded EXP Points.\p"
	.string "To raise a weak POKéMON, put it at the\n"
	.string "left of the team list.\p"
	.string "As soon as a battle starts, switch it\n"
	.string "out. It will earn EXP Points without\l"
	.string "being exposed to any harm.$"

PetalburgWoods_Text_TrainerTipsPP:
	.string "TRAINER TIPS\p"
	.string "In addition to Hit Points (HP), POKéMON\n"
	.string "have Power Points (PP) that are used to\l"
	.string "make moves during battle.\p"
	.string "If a POKéMON runs out of PP, it must be\n"
	.string "taken to a POKéMON CENTER.$"

