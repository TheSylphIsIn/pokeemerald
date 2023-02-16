.set LOCALID_RIVAL, 2

Route103_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route103_OnTransition
	map_script MAP_SCRIPT_ON_LOAD, Route103_OnLoad
	.byte 0

Route103_OnTransition:
	end

Route103_OnLoad:
	call_if_set FLAG_SYS_GAME_CLEAR, Route103_EventScript_OpenAlteringCave
	end

Route103_EventScript_OpenAlteringCave::
	setmetatile 45, 5, METATILE_General_CaveEntrance_Top, TRUE
	setmetatile 45, 6, METATILE_General_CaveEntrance_Bottom, FALSE
	return

Route103_EventScript_Rival::
	goto_if_set FLAG_ADVENTURE_STARTED, Route103_EventScript_BirchIdle
	msgbox Route103_Text_MayRoute103Pokemon, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_RIVAL, Common_Movement_FacePlayer
	waitmovement 0
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
	waitmovement 0
	msgbox Route103_Text_MayLetsBattle, MSGBOX_DEFAULT
	closemessage
	playfanfare MUS_OBTAIN_ITEM
	message LavaridgeTown_Text_ReceivedTheEgg
	waitfanfare
	giveegg SPECIES_MYSTERYEGG
	msgbox Route103_Text_BirchText2, MSGBOX_DEFAULT
	closemessage
	setflag FLAG_SYS_POKENAV_GET
	setflag FLAG_RECEIVED_POKENAV
	playfanfare MUS_OBTAIN_ITEM
	message Route103_Text_GotPokenav
	waitfanfare
	msgbox Route103_Text_BirchText3, MSGBOX_DEFAULT
	closemessage
	goto Route103_EventScript_RivalEnd
	
Route103_EventScript_BirchIdle:
	msgbox Route103_Text_BirchIdle, MSGBOX_NPC
	end
	
Route103_Text_BirchIdle:
	.string "PROF. BIRCH: Don't worry about me.\n"
	.string "HOENN is depending on you!\p"
	.string "{PLAYER}: Gee, that's for taking the\n"
	.string "pressure off, PROF.$"
	
Route103_Text_BirchText2:
	.string "Anyway, did you need something?\p"
	.string "{PLAYER}: Yeah. Can you tell me\n"
	.string "about my brother?\p"
	.string "BIRCH: Of course. LANDON was an\n"
	.string "accomplished trainer. He beat the\l"
	.string "POKéMON league a few years ago.\p"
	.string "He was traveling the world with\n"
	.string "my daughter, MAY, working on the\l"
	.string "POKéDEX, when the zombies appeared.\p"
	.string "He came back to protect LITTLEROOT for\n"
	.string "a while, but a few weeks ago he and\l"
	.string "MAY headed west to try to find the\l"
	.string "source of the zombies and stop it.\p"
	.string "BIRCH: … but we haven't heard from\n"
	.string "them since then. We have no idea what\l"
	.string "happened to them.\p"
	.string "{PLAYER}: … Why don't I go look for\n"
	.string "them? Retrace their steps, find out\l"
	.string "what could have happened.\p"
	.string "BIRCH: That would be… incredibly\n"
	.string "dangerous. But, if you succeeded…\p"
	.string "{PLAYER}: It's our best shot, right?\n"
	.string "What can I really do sitting around\l"
	.string "in OLDALE TOWN?\p"
	.string "BIRCH: Alright. Then here, take this.$"
	
Route103_Text_GotPokenav:
	.string "{PLAYER} got the POKéNAV.$"
	
Route103_Text_BirchText3:
	.string "BIRCH: That POKéNAV has a phone in\n"
	.string "it, so I can call you if anything\l"
	.string "urgent comes up.\p"
	.string "{PLAYER}: Can I call you to let you\n"
	.string "know I'm not dead?\p"
	.string "BIRCH: Um, no. The feature is still\n"
	.string "experimental…\p"
	.string "In any case. You should start by\n"
	.string "heading west to PETALBURG.\p"
	.string "We haven't had contact with outside,\n"
	.string "so there could be survivors there.\p"
	.string "And {PLAYER}, please… don't die!\p"
	.string "{PLAYER}: … I'll do my best, PROF.$"

Route103_EventScript_RivalEnd::
	setflag FLAG_DEFEATED_RIVAL_ROUTE103
	clearflag FLAG_HIDE_OLDALE_TOWN_RIVAL
	clearflag FLAG_KILLED_OLDALE_MART_ZOMBIE
	setflag FLAG_ADVENTURE_STARTED
	savebgm MUS_DUMMY
	fadedefaultbgm
	releaseall
	end

Route103_Movement_RivalExitFacingNorth1:
	walk_left
	walk_down
	step_end

Route103_Movement_RivalExitFacingNorth2:
	jump_2_down
	delay_16
	walk_down
	walk_down
	walk_down
	walk_down
	step_end

Route103_Movement_WatchRivalExitFacingNorth:
	delay_16
	delay_4
	walk_in_place_faster_left
	delay_16
	walk_in_place_faster_down
	step_end

Route103_Movement_RivalExit1:
	walk_down
	step_end

Route103_Movement_RivalExit2:
	jump_2_down
	delay_16
	walk_down
	walk_down
	walk_down
	step_end

Route103_Movement_WatchRivalExitFacingEastOrWest:
	delay_16
	walk_in_place_faster_down
	step_end

Route103_EventScript_Boy::
	msgbox Route103_Text_ShouldHaveBroughtPotion, MSGBOX_NPC
	end

Route103_EventScript_Man::
	msgbox Route103_Text_ShortcutToOldale, MSGBOX_NPC
	end

Route103_EventScript_RouteSign::
	msgbox Route103_Text_RouteSign, MSGBOX_SIGN
	end

Route103_EventScript_Daisy::
	trainerbattle_single TRAINER_DAISY, Route103_Text_DaisyIntro, Route103_Text_DaisyDefeated
	msgbox Route103_Text_DaisyPostBattle, MSGBOX_AUTOCLOSE
	end

Route103_EventScript_Amy::
	trainerbattle_double TRAINER_AMY_AND_LIV_1, Route103_Text_AmyIntro, Route103_Text_AmyDefeated, Route103_Text_AmyNotEnoughPokemon, Route102_EventScript_AmyRegisterMatchCallAfterBattle
	specialvar VAR_RESULT, ShouldTryRematchBattle
	goto_if_eq VAR_RESULT, TRUE, Route102_EventScript_AmyRematch
	msgbox Route103_Text_AmyPostBattle, MSGBOX_AUTOCLOSE
	end

Route102_EventScript_AmyRegisterMatchCallAfterBattle::
	msgbox Route103_Text_AmyLivRegister, MSGBOX_DEFAULT
	register_matchcall TRAINER_AMY_AND_LIV_1
	release
	end

Route102_EventScript_AmyRematch::
	trainerbattle_rematch_double TRAINER_AMY_AND_LIV_1, Route103_Text_AmyRematchIntro, Route103_Text_AmyRematchDefeated, Route103_Text_AmyRematchNotEnoughPokemon
	msgbox Route103_Text_AmyRematchPostBattle, MSGBOX_AUTOCLOSE
	end

Route103_EventScript_Liv::
	trainerbattle_double TRAINER_AMY_AND_LIV_1, Route103_Text_LivIntro, Route103_Text_LivDefeated, Route103_Text_LivNotEnoughPokemon, Route102_EventScript_LivRegisterMatchCallAfterBattle
	specialvar VAR_RESULT, ShouldTryRematchBattle
	goto_if_eq VAR_RESULT, TRUE, Route102_EventScript_LivRematch
	msgbox Route103_Text_LivPostBattle, MSGBOX_AUTOCLOSE
	end

Route102_EventScript_LivRegisterMatchCallAfterBattle::
	msgbox Route103_Text_AmyLivRegister, MSGBOX_DEFAULT
	register_matchcall TRAINER_AMY_AND_LIV_1
	release
	end

Route102_EventScript_LivRematch::
	trainerbattle_rematch_double TRAINER_AMY_AND_LIV_1, Route103_Text_LivRematchIntro, Route103_Text_LivRematchDefeated, Route103_Text_LivRematchNotEnoughPokemon
	msgbox Route103_Text_LivRematchPostBattle, MSGBOX_AUTOCLOSE
	end

Route103_EventScript_Andrew::
	trainerbattle_single TRAINER_ANDREW, Route103_Text_AndrewIntro, Route103_Text_AndrewDefeated
	msgbox Route103_Text_AndrewPostBattle, MSGBOX_AUTOCLOSE
	end

Route103_EventScript_Miguel::
	trainerbattle_single TRAINER_MIGUEL_1, Route103_Text_MiguelIntro, Route103_Text_MiguelDefeated, Route102_EventScript_MiguelRegisterMatchCallAfterBattle
	specialvar VAR_RESULT, ShouldTryRematchBattle
	goto_if_eq VAR_RESULT, TRUE, Route103_EventScript_MiguelRematch
	msgbox Route103_Text_MiguelPostBattle, MSGBOX_DEFAULT
	release
	end

Route102_EventScript_MiguelRegisterMatchCallAfterBattle::
	special PlayerFaceTrainerAfterBattle
	waitmovement 0
	msgbox Route103_Text_MiguelRegister, MSGBOX_DEFAULT
	register_matchcall TRAINER_MIGUEL_1
	release
	end

Route103_EventScript_MiguelRematch::
	trainerbattle_rematch TRAINER_MIGUEL_1, Route103_Text_MiguelRematchIntro, Route103_Text_MiguelRematchDefeated
	msgbox Route103_Text_MiguelRematchPostBattle, MSGBOX_AUTOCLOSE
	end

Route103_EventScript_Marcos::
	trainerbattle_single TRAINER_MARCOS, Route103_Text_MarcosIntro, Route103_Text_MarcosDefeated
	msgbox Route103_Text_MarcosPostBattle, MSGBOX_AUTOCLOSE
	end

Route103_EventScript_Rhett::
	trainerbattle_single TRAINER_RHETT, Route103_Text_RhettIntro, Route103_Text_RhettDefeated
	msgbox Route103_Text_RhettPostBattle, MSGBOX_AUTOCLOSE
	end

Route103_EventScript_Pete::
	trainerbattle_single TRAINER_PETE, Route103_Text_PeteIntro, Route103_Text_PeteDefeated
	msgbox Route103_Text_PetePostBattle, MSGBOX_AUTOCLOSE
	end

Route103_EventScript_Isabelle::
	trainerbattle_single TRAINER_ISABELLE, Route103_Text_IsabelleIntro, Route103_Text_IsabelleDefeated
	msgbox Route103_Text_IsabellePostBattle, MSGBOX_AUTOCLOSE
	end

Route103_Text_MayRoute103Pokemon:
	.string "PROF. BIRCH: Simply fascinating!\n"
	.string "POKéMON breeding has never been\l"
	.string "observed in the wild, and yet…!$"

Route103_Text_MayLetsBattle:
	.string "Oh, hello, {PLAYER}{KUN}.\n"
	.string "Take a look at this!\p"
	.string "{PLAYER}: Uh… what's with the egg?\p"
	.string "BIRCH: Even when zombies besiege our\n"
	.string "homes, and our families vanish\l"
	.string "without a trace, there is always\l"
	.string "time for science!\p"
	.string "{PLAYER}: … … … … …\p"
	.string "BIRCH: The presence of this EGG is\n"
	.string "mystifying. You should take it.\p"
	.string "EGGs only hatch in the presence\n"
	.string "of POKéMON, and I don't have any.\l"
	.string "They were all in my lab when…\p"
	.string "Well, that's not important.\n"
	.string "Take it!$"

Route103_Text_MayDefeated:
	.string "Wow! That's great!\n"
	.string "{PLAYER}{KUN}, you're pretty good!$"

Route103_Text_MayTimeToHeadBack:
	.string "MAY: I think I know why my dad has\n"
	.string "an eye out for you now.\p"
	.string "I mean, you just got that POKéMON,\n"
	.string "but it already likes you.\p"
	.string "You might be able to befriend any\n"
	.string "kind of POKéMON easily.\p"
	.string "Well, it's time to head back to\n"
	.string "the LAB.$"

Route103_Text_BrendanRoute103Pokemon:
	.string "BRENDAN: Okay, so it's this one and\n"
	.string "that one that live on ROUTE 103…$"

Route103_Text_BrendanLetsBattle:
	.string "Hey, it's {PLAYER}!\p"
	.string "…Oh, yeah, Dad gave you a POKéMON.\p"
	.string "Since we're here, how about a little\n"
	.string "battle?\p"
	.string "I'll teach you what being a TRAINER's\n"
	.string "about!$"

Route103_Text_BrendanDefeated:
	.string "Huh, {PLAYER}, you're not too shabby.$"

Route103_Text_BrendanTimeToHeadBack:
	.string "BRENDAN: I think I get it.\n"
	.string "I think I know why my dad has his eye\l"
	.string "out for you now.\p"
	.string "Look, your POKéMON already likes you,\n"
	.string "even though you just got it.\p"
	.string "{PLAYER}, I get the feeling that you\n"
	.string "could befriend any POKéMON with ease.\p"
	.string "We should head back to the LAB.$"

Route103_Text_ShouldHaveBroughtPotion:
	.string "My POKéMON is staggeringly tired…\n"
	.string "I should have brought a POTION…$"

Route103_Text_ShortcutToOldale:
	.string "If you cross the sea from here,\n"
	.string "it'll be a shortcut to OLDALE TOWN.\p"
	.string "Fufufu, that's useful, isn't it?$"

Route103_Text_RouteSign:
	.string "ROUTE 103\n"
	.string "{DOWN_ARROW} OLDALE TOWN$"

