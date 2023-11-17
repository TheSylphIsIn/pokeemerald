@ Interact with cuttable tree
EventScript_CutTree::
	lockall
	goto_if_unset FLAG_BADGE01_GET, EventScript_CheckTreeCantCut
	goto_if_set FLAG_FREE_HMS, EventScript_CutTreeDown @ Skips party check; mon being able to learn the move is not required
	checkpartymove MOVE_CUT
	goto_if_eq VAR_RESULT, PARTY_SIZE, EventScript_CheckTreeCantCut
	goto_if_set FLAG_FAST_HMS, EventScript_CutTreeDown @ Skips animation
	setfieldeffectargument 0, VAR_RESULT
	bufferpartymonnick STR_VAR_1, VAR_RESULT
	buffermovename STR_VAR_2, MOVE_CUT
	msgbox Text_WantToCut, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, EventScript_CancelCut
	msgbox Text_MonUsedFieldMove, MSGBOX_DEFAULT
	closemessage
	dofieldeffect FLDEFF_USE_CUT_ON_TREE
	waitstate
	goto EventScript_CutTreeDown
	end

@ Use cut from party menu
EventScript_UseCut::
	lockall
	dofieldeffect FLDEFF_USE_CUT_ON_TREE
	waitstate
	goto EventScript_CutTreeDown
	end

EventScript_CutTreeDown::
	applymovement VAR_LAST_TALKED, Movement_CutTreeDown
	waitmovement 0
	removeobject VAR_LAST_TALKED
	releaseall
	end

Movement_CutTreeDown:
	cut_tree
	step_end

EventScript_CheckTreeCantCut::
	msgbox Text_CantCut, MSGBOX_DEFAULT
	releaseall
	end

EventScript_CancelCut::
	closemessage
	releaseall
	end

Text_WantToCut:
	.string "This looks like it can be CUT down!\n"
	.string "Would you like to CUT it?$"

Text_MonUsedFieldMove:
	.string "{STR_VAR_1} used {STR_VAR_2}!$"

Text_CantCut:
	.string "This looks like it can be CUT down!$"

@ Interact with smashable rock
EventScript_RockSmash::
	lockall
	goto_if_unset FLAG_BADGE03_GET, EventScript_CantSmashRock
	goto_if_set FLAG_FREE_HMS, EventScript_SmashRock
	checkpartymove MOVE_ROCK_SMASH
	goto_if_eq VAR_RESULT, PARTY_SIZE, EventScript_CantSmashRock
	goto_if_set FLAG_FAST_HMS, EventScript_SmashRock
	setfieldeffectargument 0, VAR_RESULT
	bufferpartymonnick STR_VAR_1, VAR_RESULT
	buffermovename STR_VAR_2, MOVE_ROCK_SMASH
	msgbox Text_WantToSmash, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, EventScript_CancelSmash
	msgbox Text_MonUsedFieldMove, MSGBOX_DEFAULT
	closemessage
	dofieldeffect FLDEFF_USE_ROCK_SMASH
	waitstate
	goto EventScript_SmashRock
	end

@ Use rock smash from party menu
EventScript_UseRockSmash::
	lockall
	dofieldeffect FLDEFF_USE_ROCK_SMASH
	waitstate
	goto EventScript_SmashRock
	end

EventScript_SmashRock::
	applymovement VAR_LAST_TALKED, Movement_SmashRock
	waitmovement 0
	removeobject VAR_LAST_TALKED
	specialvar VAR_RESULT, TryUpdateRusturfTunnelState
	goto_if_eq VAR_RESULT, TRUE, EventScript_EndSmash
	special RockSmashWildEncounter
	goto_if_eq VAR_RESULT, FALSE, EventScript_EndSmash
	waitstate
	releaseall
	end

EventScript_EndSmash::
	releaseall
	end

Movement_SmashRock:
	rock_smash_break
	step_end

EventScript_CantSmashRock::
	msgbox Text_CantSmash, MSGBOX_DEFAULT
	releaseall
	end

EventScript_CancelSmash::
	closemessage
	releaseall
	end

Text_WantToSmash:
	.string "This rock appears to be breakable.\n"
	.string "Would you like to use ROCK SMASH?$"

Text_CantSmash:
	.string "It's a rugged rock, but a POKéMON\n"
	.string "may be able to smash it.$"

EventScript_StrengthBoulder::
	lockall
	bufferstring STR_VAR_1, Text_DefaultBuffer
	goto_if_unset FLAG_BADGE04_GET, EventScript_CantStrength
	goto_if_set FLAG_SYS_USE_STRENGTH, EventScript_CheckActivatedBoulder
	goto_if_set FLAG_FREE_HMS, EventScript_ActivateStrength
	checkpartymove MOVE_STRENGTH
	goto_if_eq VAR_RESULT, PARTY_SIZE, EventScript_CantStrength
	goto_if_set FLAG_FAST_HMS, EventScript_ActivateStrength
	setfieldeffectargument 0, VAR_RESULT
	msgbox Text_WantToStrength, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, EventScript_CancelStrength
	closemessage
	dofieldeffect FLDEFF_USE_STRENGTH
	waitstate
	goto EventScript_ActivateStrength
	end

EventScript_UseStrength::
	lockall
	dofieldeffect FLDEFF_USE_STRENGTH
	waitstate
	goto EventScript_ActivateStrength
	end

EventScript_ActivateStrength::
	setflag FLAG_SYS_USE_STRENGTH
	msgbox Text_MonUsedStrength, MSGBOX_DEFAULT
	releaseall
	end

EventScript_CantStrength::
	msgbox Text_CantStrength, MSGBOX_DEFAULT
	releaseall
	end

EventScript_CheckActivatedBoulder::
	msgbox Text_StrengthActivated, MSGBOX_DEFAULT
	releaseall
	end

EventScript_CancelStrength::
	closemessage
	releaseall
	end

Text_WantToStrength:
	.string "It's a big boulder, but a POKéMON\n"
	.string "may be able to push it aside.\p"
	.string "Would you like to use STRENGTH?$"

Text_MonUsedStrength:
	.string "{STR_VAR_1} used STRENGTH!\p"
	.string "{STR_VAR_1}'s STRENGTH made it\n"
	.string "possible to move boulders around!$"

Text_CantStrength:
	.string "It's a big boulder, but a POKéMON\n"
	.string "may be able to push it aside.$"

Text_StrengthActivated:
	.string "STRENGTH made it possible to move\n"
	.string "boulders around.$"

EventScript_UseWaterfall::
	lockall
	bufferstring STR_VAR_1, Text_DefaultBuffer
	goto_if_set FLAG_FREE_HMS, EventScript_WaterfallSkipPrompt
	checkpartymove MOVE_WATERFALL
	goto_if_eq VAR_RESULT, PARTY_SIZE, EventScript_CantWaterfall
	bufferpartymonnick STR_VAR_1, VAR_RESULT
	setfieldeffectargument 0, VAR_RESULT
	msgbox Text_WantToWaterfall, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, EventScript_EndWaterfall
EventScript_WaterfallSkipPrompt::
	msgbox Text_MonUsedWaterfall, MSGBOX_DEFAULT
	dofieldeffect FLDEFF_USE_WATERFALL
	goto EventScript_EndWaterfall

EventScript_CannotUseWaterfall::
	lockall

EventScript_CantWaterfall::
	msgbox Text_CantWaterfall, MSGBOX_DEFAULT

EventScript_EndWaterfall::
	releaseall
	end

Text_CantWaterfall:
	.string "A wall of water is crashing down with\n"
	.string "a mighty roar.$"

Text_WantToWaterfall:
	.string "It's a large waterfall.\n"
	.string "Would you like to use WATERFALL?$"

Text_MonUsedWaterfall:
	.string "{STR_VAR_1} used WATERFALL.$"

EventScript_UseDive::
	lockall
	bufferstring STR_VAR_1, Text_DefaultBuffer
	goto_if_set FLAG_FREE_HMS, EventScript_DiveSkipPrompt
	checkpartymove MOVE_DIVE
	goto_if_eq VAR_RESULT, PARTY_SIZE, EventScript_CantDive
	bufferpartymonnick STR_VAR_1, VAR_RESULT
	setfieldeffectargument 0, VAR_RESULT
	setfieldeffectargument 1, 1
	msgbox Text_WantToDive, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, EventScript_EndDive
EventScript_DiveSkipPrompt::
	msgbox Text_MonUsedDive, MSGBOX_DEFAULT
	dofieldeffect FLDEFF_USE_DIVE
	goto EventScript_EndDive
	end

EventScript_CantDive::
	msgbox Text_CantDive, MSGBOX_DEFAULT
	releaseall
	end

EventScript_EndDive::
	releaseall
	end

EventScript_UseDiveUnderwater::
	lockall
	bufferstring STR_VAR_1, Text_DefaultBuffer
	goto_if_set FLAG_FREE_HMS, EventScript_DiveSurfaceSkipPrompt
	checkpartymove MOVE_DIVE
	goto_if_eq VAR_RESULT, PARTY_SIZE, EventScript_CantSurface
	bufferpartymonnick STR_VAR_1, VAR_RESULT
	setfieldeffectargument 0, VAR_RESULT
	setfieldeffectargument 1, 1
	msgbox Text_WantToSurface, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, EventScript_EndSurface
EventScript_DiveSurfaceSkipPrompt::
	msgbox Text_MonUsedDive, MSGBOX_DEFAULT
	dofieldeffect FLDEFF_USE_DIVE
	goto EventScript_EndSurface
	end

EventScript_CantSurface::
	lockall
	msgbox Text_CantSurface, MSGBOX_DEFAULT
	goto EventScript_EndSurface
	end

EventScript_EndSurface::
	releaseall
	end

Text_CantDive:
	.string "The sea is deep here. A POKéMON\n"
	.string "may be able to go underwater.$"

Text_WantToDive:
	.string "The sea is deep here.\n"
	.string "Would you like to use DIVE?$"

Text_MonUsedDive:
	.string "{STR_VAR_1} used DIVE.$"

Text_CantSurface:
	.string "Light is filtering down from above.\n"
	.string "A POKéMON may be able to surface.$"

Text_WantToSurface:
	.string "Light is filtering down from above.\n"
	.string "Would you like to use DIVE?$"

EventScript_FailSweetScent::
	msgbox Text_FailSweetScent, MSGBOX_SIGN
	end

Text_FailSweetScent:
	.string "Looks like there's nothing here…$"
	
EventScript_EnableStarterSets::
	lock
	setflag FLAG_SYS_ENABLE_STARTER_SETS 
	msgbox Text_EnabledStarterSets, MSGBOX_DEFAULT
	closemessage
	release
	end

Text_EnabledStarterSets:
	.string "Enabled starter sets!\n"
	.string "Press {UP_ARROW} or {DOWN_ARROW} when selecting to swap.$"

EventScript_AwardAchievement::
	lock
	playse SE_PIN
	msgbox Text_AchievementGet, MSGBOX_POKENAV
	release
	end
	
Text_AchievementGet:
	.string "ACHIEVEMENT UNLOCKED!\n"
	.string "{STR_VAR_1}!$"
	
EventScript_DoCheatSequenceResult::
	lock
	switch VAR_RESULT
	case 0, EventScript_RareCandyCode
	case 1, EventScript_KonamiCode
	case 2, EventScript_HealCode
	case 3, EventScript_FreeHMsCode
	case 4, EventScript_NoEncountersCode
	case 5, EventScript_NoTrainerSeeCode
	goto EventScript_FailSweetScent
	
EventScript_KonamiCode:
	message Text_GetItems
	additem ITEM_MAX_REVIVE, 30
	waitbuttonpress
	release
	end
	
EventScript_RareCandyCode:
	message Text_GetItems
	additem ITEM_RARE_CANDY, 40
	waitbuttonpress
	release
	end

EventScript_HealCode:
	goto_if_set FLAG_PORTABLE_HEAL_USED, EventScript_HealCodeUsed
	playse SE_USE_ITEM
	message Text_HealCode
	special HealPlayerParty
	setflag FLAG_PORTABLE_HEAL_USED
	waitbuttonpress
	release
	end

EventScript_HealCodeUsed:
	message Text_HealCodeUsed
	waitbuttonpress
	release
	end

EventScript_FreeHMsCode:
	goto_if_unset FLAG_FREE_HMS, EventScript_SetFreeHMs
	goto_if_set FLAG_FREE_HMS, EventScript_ClearFreeHMs
	release
	end
	
EventScript_SetFreeHMs:
	message Text_HMsFree
	setflag FLAG_FREE_HMS
	waitbuttonpress
	release
	end

EventScript_ClearFreeHMs:
	message Text_HMsNotFree
	clearflag FLAG_FREE_HMS
	waitbuttonpress
	release
	end

Text_DefaultBuffer:: @ String for "<NAME> used <MOVE>!" HMs vis a vis free HMs.
	.string "NOBODY$"
	
EventScript_NoEncountersCode:
	goto_if_unset FLAG_DISABLE_ENCOUNTERS, EventScript_DisableEncounters
	goto_if_set FLAG_DISABLE_ENCOUNTERS, EventScript_EnableEncounters
	release
	end
	
EventScript_DisableEncounters:
	message Text_EncountersOn
	setflag FLAG_DISABLE_ENCOUNTERS
	waitbuttonpress
	release
	end

EventScript_EnableEncounters:
	message Text_EncountersOff
	clearflag FLAG_DISABLE_ENCOUNTERS
	waitbuttonpress
	release
	end

Text_EncountersOn:
	.string "Random encounters are disabled!\n"
	.string "It's like an unlimited repel!$"

Text_EncountersOff:
	.string "Random encounters enabled.\n"
	.string "Repel's effect wore off!$"

EventScript_NoTrainerSeeCode:
	goto_if_unset FLAG_DISABLE_TRAINER_SIGHT, EventScript_DisableTrainerSee
	goto_if_set FLAG_DISABLE_TRAINER_SIGHT, EventScript_EnableTrainerSee
	release
	end
	
EventScript_DisableTrainerSee:
	message Text_TrainersCantSee
	setflag FLAG_DISABLE_TRAINER_SIGHT
	waitbuttonpress
	release
	end

EventScript_EnableTrainerSee:
	message Text_TrainersCanSee
	clearflag FLAG_DISABLE_TRAINER_SIGHT
	waitbuttonpress
	release
	end
	
Text_TrainersCantSee:
	.string "Trainer sight disabled!\n"
	.string "Interact with them to battle.$"

Text_TrainersCanSee:
	.string "Trainer sight enabled!\n"
	.string "Watch your step!$"

Text_GetItems:
	.string "The cheat code gave you items!$"

Text_HealCode:
	.string "The cheat code healed your party!$"

Text_HealCodeUsed:
	.string "This code can't be used again until\n"
	.string "you use a healing spot.$"

Text_HMsFree:
	.string "HMs can now be used without needing\n"
	.string "a party mon to use them!$"

Text_HMsNotFree:
	.string "Free HMs are now disabled! A party\n"
	.string "member must be able to learn them.$"

