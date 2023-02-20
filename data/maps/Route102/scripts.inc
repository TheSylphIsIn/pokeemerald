Route102_MapScripts::
	.byte 0

Route102_EventScript_LittleBoy::
	msgbox Route102_Text_ImNotVeryTall, MSGBOX_SIGN
	end

Route102_EventScript_RouteSignOldale::
	msgbox Route102_Text_RouteSignOldale, MSGBOX_SIGN
	end

Route102_EventScript_RouteSignPetalburg::
	msgbox Route102_Text_RouteSignPetalburg, MSGBOX_SIGN
	end

Route102_EventScript_Boy::
	msgbox Route102_Text_CatchWholeBunchOfPokemon, MSGBOX_NPC
	end

Route102_EventScript_Calvin::
	trainerbattle_single TRAINER_CALVIN_1, Route102_Text_CalvinIntro, Route102_Text_CalvinDefeated, Route102_EventScript_LootingTutorial
	release
	end
	
Route102_EventScript_LootingTutorial:
	call Common_ZombieCrumble
	msgbox Route102_Text_LootingTutorial, MSGBOX_DEFAULT
	closemessage
	setvar VAR_TEMP_LOOT_ITEM, ITEM_POTION
	call Common_LootCorpse
	msgbox Route102_Text_LootingTutorialDone, MSGBOX_DEFAULT
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, Route102_Movement_LetYoungsterOut
	applymovement 2, Route102_Movement_YoungsterWalkToOldale
	waitmovement 2
	removeobject 2
	clearflag FLAG_HIDE_OLDALE_102_YOUNGSTER
	end
	
Route102_Movement_LetYoungsterOut:
	walk_down
	face_up
	step_end
	
Route102_Movement_YoungsterWalkToOldale:
	walk_down
	walk_down
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	step_end
	
Route102_Text_LootingTutorialDone:
	.string "See? Easy money. Now don't forget\n"
	.string "to do that to every zombie.\p"
	.string "And thanks again for saving my life.\n"
	.string "See you in OLDALE!$"
	
Route102_Text_LootingTutorial:
	.string "Thanks! You saved my life. I can\n"
	.string "finally relax in OLDALE now.\p"
	.string "Hey, you should loot the remains.\n"
	.string "{PLAYER}: What??\p"
	.string "I'm serious! You might find something\n"
	.string "that will save your life. That's how\l"
	.string "I made it this far.\p"
	.string "{PLAYER}: But that's disgusting.\p"
	.string "It's the apocalypse, weenie. You\n"
	.string "gotta do what you can to survive.\l"
	.string "besides, it's mostly dust anyway."
	.string "{PLAYER}: Ugh, fine. Here goes...$"

Route102_EventScript_Rick::
	trainerbattle_single TRAINER_RICK, Route102_Text_RickIntro, Route102_Text_RickDefeated, Route102_EventScript_ZombieDefeated_Rick
	end

Route102_EventScript_Tiana::
	trainerbattle_single TRAINER_TIANA, Route102_Text_TianaIntro, Route102_Text_TianaDefeated, Route102_EventScript_ZombieDefeated_Tiana
	end

Route102_EventScript_Allen::
	trainerbattle_single TRAINER_ALLEN, Route102_Text_AllenIntro, Route102_Text_AllenDefeated, Route102_EventScript_ZombieDefeated_Allen
	end
	
Route102_EventScript_ZombieDefeated_Rick::
	call Common_ZombieCrumble
	setvar VAR_TEMP_LOOT_ITEM, ITEM_POKE_BALL
	call Common_LootCorpse
	end
	
Route102_EventScript_ZombieDefeated_Tiana::
	call Common_ZombieCrumble
	setvar VAR_TEMP_LOOT_ITEM, ITEM_ANTIDOTE
	call Common_LootCorpse
	end
	
Route102_EventScript_ZombieDefeated_Allen::
	call Common_ZombieCrumble
	setvar VAR_TEMP_LOOT_ITEM, ITEM_ORAN_BERRY
	call Common_LootCorpse
	end

Route102_Text_WatchMeCatchPokemon:
	.string "WALLY: {PLAYER}…\n"
	.string "POKéMON hide in tall grass like this,\l"
	.string "don't they?\p"
	.string "Please watch me and see if I can\n"
	.string "catch one properly.\p"
	.string "…Whoa!$"

Route102_Text_WallyIDidIt:
	.string "WALLY: I did it… It's my…\n"
	.string "My POKéMON!$"

Route102_Text_LetsGoBack:
	.string "{PLAYER}, thank you!\n"
	.string "Let's go back to the GYM!$"

Route102_Text_ImNotVeryTall:
	.string "ZOMBIE: Munch… chomp… chew…\n"
	.string "Sluuuuurp… … …\p"
	.string "This zombie is clearly eating, but\n"
	.string "you don't feel like seeing what.$"

Route102_Text_CatchWholeBunchOfPokemon:
	.string "I'm going to catch a whole bunch of\n"
	.string "POKéMON!$"

Route102_Text_RouteSignOldale:
	.string "ROUTE 102\n"
	.string "{RIGHT_ARROW} OLDALE TOWN$"

Route102_Text_RouteSignPetalburg:
	.string "ROUTE 102\n"
	.string "{LEFT_ARROW} PETALBURG CITY$"
