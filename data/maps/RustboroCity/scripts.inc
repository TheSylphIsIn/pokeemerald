.set LOCALID_ALICIA, 15
.set LOCALID_GLEIS, 6
.set LOCALID_DANTALION, 20
.set LOCALID_ROXANNE, 21
.set LOCALID_HIKER, 16
.set LOCALID_GAUNTLET_1, 14
.set LOCALID_GAUNTLET_2, 17
.set LOCALID_GAUNTLET_3, 13
.set LOCALID_GAUNTLET_4, 2
.set LOCALID_GAUNTLET_5, 11


RustboroCity_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, RustboroCity_OnTransition
	.byte 0

RustboroCity_OnTransition:
	setflag FLAG_VISITED_RUSTBORO_CITY
	goto_if_eq VAR_RUSTBORO_CITY_STATE, 2, RustboroCity_EventScript_PositionScientistForExit
	call_if_set FLAG_STARTED_ZOMBIE_PIT_EVENT, RustboroCity_MapScript_HandleZombiePit
	end

RustboroCity_EventScript_PositionScientistForExit::
	setobjectxyperm LOCALID_GLEIS, 35, 10
	end
	
RustboroCity_MapScript_HandleZombiePit::
	goto_if_set FLAG_FINISHED_ZOMBIE_PIT_EVENT, RustboroCity_Script_End
	cleartrainerflag TRAINER_JOEY// demon guard
	cleartrainerflag TRAINER_JERRY_1 // pit trainer
	cleartrainerflag TRAINER_JERRY_2// pit trainer
	cleartrainerflag TRAINER_JERRY_3// pit trainer
	cleartrainerflag TRAINER_JERRY_4// pit trainer
	cleartrainerflag TRAINER_JERRY_5// pit trainer
	end
	
RustboroCity_Script_End:
	release
	end

// flying heads
RustboroCity_EventScript_SeveredHead1::
	trainerbattle_single TRAINER_HALEY_2, RustboroCity_Text_SeveredHead1Intro, RustboroCity_Text_SeveredHead1Defeat, RustboroCity_EventScript_SeveredHeadDefeat
	end

RustboroCity_EventScript_SeveredHead2::
	trainerbattle_single TRAINER_HALEY_3, RustboroCity_Text_SeveredHead2Intro, RustboroCity_Text_SeveredHead2Defeat, RustboroCity_EventScript_SeveredHeadDefeat
	end

RustboroCity_EventScript_SeveredHead3::
	trainerbattle_single TRAINER_HALEY_4, RustboroCity_Text_SeveredHead3Intro, RustboroCity_Text_SeveredHead3Defeat, RustboroCity_EventScript_SeveredHeadDefeat
	end

RustboroCity_EventScript_SeveredHeadDefeat::
	call Common_ZombieCrumble
	setvar VAR_TEMP_LOOT_ITEM, ITEM_MAGIC_POWDER
	call Common_LootCorpse
	end
	
RustboroCity_Text_SeveredHead1Intro:
	.string "HEAD: Raaaagh!$"

RustboroCity_Text_SeveredHead1Defeat:
	.string "Gk!$"

RustboroCity_Text_SeveredHead2Intro:
	.string "HEAD: Gnagnagna!$"

RustboroCity_Text_SeveredHead2Defeat:
	.string "Ugoooh!$"

RustboroCity_Text_SeveredHead3Intro:
	.string "HEAD: Shhha!$"

RustboroCity_Text_SeveredHead3Defeat:
	.string "Ssss…$"

RustboroCity_EventScript_PotionCrate::
	lock
	goto_if_ge VAR_POTION_CRATE_PETALBURG_TAKEN, 10, PetalburgCity_House2_EventScript_CrateEmpty
	msgbox PetalburgCity_House2_Text_BattledNormanOnce, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, PetalburgCity_House2_EventScript_DidntTake
	giveitem ITEM_POTION
	addvar VAR_POTION_CRATE_PETALBURG_TAKEN, 1
	release
	end

// demon npc 1
RustboroCity_EventScript_IdleDemon1::
	msgbox RustboroCity_Text_Demon1, MSGBOX_NPC
	end
// demon npc 2
RustboroCity_EventScript_IdleDemon2::
	msgbox RustboroCity_Text_Demon2, MSGBOX_NPC
	end
// demon npc 3
RustboroCity_EventScript_IdleDemon3::
	msgbox RustboroCity_Text_Demon3, MSGBOX_NPC
	end

RustboroCity_Text_Demon1:
	.string "DEMON: Wahahah! What do you think\n"
	.string "of this nice body I found?\p"
	.string "I took it from some bigwig who\n"
	.string "wandered out of DEVON CORP.\p"
	.string "All those fools wandering around in\n"
	.string "mutilated corpses…I laugh at them!\p"
	.string "Your is pretty good, too.\n"
	.string "{PLAYER}: Umm, right. Thanks. Eheh.$"

RustboroCity_Text_Demon2:
	.string "DEMON: Begone, human. It would be\n"
	.string "beneath me even to consume you.\p"
	.string "This is a home of demons now.\n"
	.string "You have no business here.$"
	
RustboroCity_Text_Demon3:
	.string "DEMON: We were graciously allowed\n"
	.string "to escape the underworld by one of\l"
	.string "the FOUR HORSEMEN OF THE APOCALYPSE.\p"
	.string "The tormented are now the tormentors!$"

// dantalion fence script
RustboroCity_EventScript_DantalionFence::
	goto_if_set FLAG_SAW_GLEIS_EVENT_1, RustboroCity_EventScript_EmptyFence
	msgbox RustboroCity_Text_DantalionPossession, MSGBOX_SIGN
	end
	
RustboroCity_EventScript_EmptyFence:
	msgbox RustboroCity_Text_EmptyFence, MSGBOX_SIGN
	end
	
RustboroCity_Text_DantalionPossession:
	.string "MAN: N-no! Please, let me live!\n"
	.string "I'll do anything!\p"
	.string "DEMON: Then give me your body!\n"
	.string "MASTER needs me in prime form!$"

RustboroCity_Text_EmptyFence:
	.string "{PLAYER}: What I saw across this\n"
	.string "fence earlier was disturbing.\p"
	.string "…was that DANTALION doing that…?$"

// alicia trigger
RustboroCity_Trigger_AliciaLeft1::
	lockall
	applymovement LOCALID_ALICIA, Common_Movement_ExclamationMark
	playse SE_PIN
	waitse
	delay 16
	applymovement LOCALID_ALICIA, RustboroCity_Movement_AliciaApproachPlayerLeft1
	waitmovement 0
	goto RustboroCity_EventScript_AliciaFight

RustboroCity_Trigger_AliciaLeft2::
	lockall
	applymovement LOCALID_ALICIA, Common_Movement_ExclamationMark
	playse SE_PIN
	waitse
	delay 16
	applymovement LOCALID_ALICIA, RustboroCity_Movement_AliciaApproachPlayerLeft2
	waitmovement 0
	goto RustboroCity_EventScript_AliciaFight

RustboroCity_Trigger_AliciaRight1::
	lockall
	applymovement LOCALID_ALICIA, Common_Movement_ExclamationMark
	playse SE_PIN
	waitse
	delay 16
	applymovement LOCALID_ALICIA, RustboroCity_Movement_AliciaApproachPlayerRight1
	waitmovement 0
	goto RustboroCity_EventScript_AliciaFight

RustboroCity_Trigger_AliciaRight2::
	lockall
	applymovement LOCALID_ALICIA, Common_Movement_ExclamationMark
	playse SE_PIN
	waitse
	delay 16
	applymovement LOCALID_ALICIA, RustboroCity_Movement_AliciaApproachPlayerRight2
	waitmovement 0
	goto RustboroCity_EventScript_AliciaFight
	
RustboroCity_Movement_AliciaApproachPlayerLeft1:
	walk_left
	walk_left
	walk_left
	walk_down
	step_end

RustboroCity_Movement_AliciaApproachPlayerLeft2:
	walk_left
	walk_down
	step_end

RustboroCity_Movement_AliciaApproachPlayerRight1:
	walk_down
	step_end

RustboroCity_Movement_AliciaApproachPlayerRight2:
	walk_right
	walk_right
	walk_down
	step_end
	
RustboroCity_EventScript_AliciaFight::
	trainerbattle_single TRAINER_MAY_RUSTBORO_MUDKIP, RustboroCity_Text_AliciaIntro, RustboroCity_Text_AliciaDefeat, RustboroCity_EventScript_AliciaPostBattle
	end

RustboroCity_EventScript_AliciaPostBattle::
	msgbox RustboroCity_Text_AliciaPostBattle, MSGBOX_DEFAULT
	closemessage
	fadescreen FADE_TO_BLACK
	removeobject LOCALID_ALICIA
	setvar VAR_RUSTBORO_CITY_STATE, 1
	fadescreen FADE_FROM_BLACK
	releaseall
	end
	
RustboroCity_Text_AliciaIntro:
	.string "ALICIA: Hmph, you again…\n"
	.string "I'm surprised you made it this far.\p"
	.string "I thought the demons I left in the\n"
	.string "woods would have taken you down.\p"
	.string "{PLAYER}: What!? Those demons were\n"
	.string "there…because of you?\p"
	.string "ALICIA: Of course. Didn't my\n"
	.string "TRAINER CLASS give it away?\p"
	.string "I'm a DEATHCALLER. I summon forth\n"
	.string "the undead in service of my masters,\l"
	.string "the FOUR HORSEMEN OF THE APOCALYPSE!\p"
	.string "{PLAYER}: … … … … …\n"
	.string "Who?\p"
	.string "ALICIA: Ugh, you pest. I wanted my\n"
	.string "demons to rid me of you.\p"
	.string "Since they failed, I'll have to\n"
	.string "do it myself instead!$"

RustboroCity_Text_AliciaDefeat:
	.string "I lost?\n"
	.string "To you!?$"

RustboroCity_Text_AliciaPostBattle:
	.string "ALICIA: … … … … …\n"
	.string "Grrrr…!\p"
	.string "Whatever! I've already called up a\n"
	.string "goodly number of demons.\p"
	.string "I'll just report back to VERDANTURF.\n"
	.string "You'll stay away if you know what's\l"
	.string "good for you!$"


// gleis trigger 1
RustboroCity_Trigger_GleisIntro::
	lockall
	applymovement LOCALID_GLEIS, RustboroCity_Movement_GleisLookAround
	waitmovement 0
	msgbox RustboroCity_Text_GleisFirstText, MSGBOX_DEFAULT
	closemessage
	addobject LOCALID_DANTALION
	setobjectxy LOCALID_DANTALION, 31, 20
	applymovement LOCALID_GLEIS, Common_Movement_FaceRight
	applymovement LOCALID_DANTALION, RustboroCity_Movement_DantalionRunToGleis
	waitmovement 0
	msgbox RustboroCity_Text_GleisDantalionConversation, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_GLEIS, RustboroCity_Movement_GleisWalkAway
	applymovement LOCALID_DANTALION, RustboroCity_Movement_GleisWalkAway
	waitmovement LOCALID_GLEIS
	setobjectxy LOCALID_GLEIS, 35, 10
	setobjectxyperm LOCALID_GLEIS, 35, 10
	removeobject LOCALID_DANTALION
	delay 30
	msgbox RustboroCity_Text_PlayerTalkToSelf, MSGBOX_DEFAULT
	closemessage
	setvar VAR_RUSTBORO_CITY_STATE, 2
	releaseall
	end

RustboroCity_Text_GleisFirstText:
	.string "{COLOR RED}{SHADOW LIGHT_RED}???: Where is he? The time is now.\n"
	.string "He is unacceptably late.\p"
	.string "{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}???2: COMING, MASTER!$"

RustboroCity_Text_GleisDantalionConversation:
	.string "{COLOR RED}{SHADOW LIGHT_RED}???: You are unacceptably late,\n"
	.string "DANTALION.\p"
	.string "{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}DANTALION: My humble apologies,\n"
	.string "MASTER GLEIS. I had to procure a new\l"
	.string "body for our operation and, well,\l"
	.string "the healthy ones struggle more.\p"
	.string "{COLOR RED}{SHADOW LIGHT_RED}GLEIS: That was wise of you. But we\n"
	.string "mustn't tarry. I've located the portal.\p"
	.string "It's in a cave outside the city.\n"
	.string "We must seal it before They defend it.\p"
	.string "{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}DANTALION: You mean, the F-\n"
	.string "{COLOR RED}{SHADOW LIGHT_RED}GLEIS: Don't speak their names!\p"
	.string "Creatures of such power can sense\n"
	.string "when their name is spoken.\p"
	.string "Although I have power to make the\n"
	.string "undead ignore us, I have no power\l"
	.string "over Them…not yet.\p"
	.string "Now come. Let us stop this unsightly\n"
	.string "outpouring of demons.$"

RustboroCity_Text_PlayerTalkToSelf:
	.string "{PLAYER}: What was that all about?\p"
	.string "Those people looked vaguely familiar,\n"
	.string "but of course I can't remember…\p"
	.string "Maybe I've met them before. But if he\n"
	.string "really has power over demons, can I\l"
	.string "trust him? That seems sinister.\p"
	.string "{PLAYER}: … … … … …\n… … … … …\p"
	.string "Well, it doesn't matter. He said he\n"
	.string "was going to stop the demons.\p"
	.string "I should go help out with that. Maybe\n"
	.string "I'll get some answers too, for once.$"

RustboroCity_Movement_GleisLookAround:
	walk_down
	walk_down
	delay_16
	face_left
	delay_16
	face_right
	delay_16
	face_down
	step_end

RustboroCity_Movement_DantalionRunToGleis:
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	step_end

RustboroCity_Movement_GleisWalkAway:
	walk_up
	walk_up
	walk_up
	step_end

// gleis trigger 2 (fight)
RustboroCity_Trigger_GleisNorth1::
	lockall
	applymovement LOCALID_GLEIS, Common_Movement_QuestionMark
	waitmovement 0
	msgbox RustboroCity_Text_GleisBattle1, MSGBOX_DEFAULT
	closemessage
	playse SE_PIN
	applymovement LOCALID_GLEIS, RustboroCity_Movement_GleisAlignWithPlayer1
	waitmovement 0
	applymovement LOCALID_GLEIS, RustboroCity_Movement_GleisApproachPlayer
	waitmovement 0
	goto RustboroCity_Trigger_GleisBattle

RustboroCity_Trigger_GleisNorth2::
	lockall
	applymovement LOCALID_GLEIS, Common_Movement_QuestionMark
	waitmovement 0
	msgbox RustboroCity_Text_GleisBattle1, MSGBOX_DEFAULT
	closemessage
	playse SE_PIN
	applymovement LOCALID_GLEIS, RustboroCity_Movement_GleisAlignWithPlayer2
	waitmovement 0
	applymovement LOCALID_GLEIS, RustboroCity_Movement_GleisApproachPlayer
	waitmovement 0
	goto RustboroCity_Trigger_GleisBattle

RustboroCity_Trigger_GleisNorth3::
	lockall
	applymovement LOCALID_GLEIS, Common_Movement_QuestionMark
	waitmovement 0
	msgbox RustboroCity_Text_GleisBattle1, MSGBOX_DEFAULT
	closemessage
	playse SE_PIN
	applymovement LOCALID_GLEIS, RustboroCity_Movement_GleisAlignWithPlayer3
	waitmovement 0
	applymovement LOCALID_GLEIS, RustboroCity_Movement_GleisApproachPlayer
	waitmovement 0
	goto RustboroCity_Trigger_GleisBattle
	
RustboroCity_Trigger_GleisNorth4::
	lockall
	applymovement LOCALID_GLEIS, Common_Movement_QuestionMark
	waitmovement 0
	msgbox RustboroCity_Text_GleisBattle1, MSGBOX_DEFAULT
	closemessage
	playse SE_PIN
	applymovement LOCALID_GLEIS, RustboroCity_Movement_GleisAlignWithPlayer4
	waitmovement 0
	applymovement LOCALID_GLEIS, RustboroCity_Movement_GleisApproachPlayer
	waitmovement 0
	goto RustboroCity_Trigger_GleisBattle

RustboroCity_Trigger_GleisBattle::
	msgbox RustboroCity_Text_GleisBattle2, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_GLEIS, RustboroCity_Movement_GleisWanderBack
	delay 30
	msgbox RustboroCity_Text_GleisBattle3, MSGBOX_DEFAULT
	waitmovement LOCALID_GLEIS
	closemessage
	applymovement LOCALID_GLEIS, RustboroCity_Movement_GleisWanderForward
	waitmovement 0
	msgbox RustboroCity_Text_GleisBattle4, MSGBOX_DEFAULT
	closemessage
	trainerbattle_no_intro TRAINER_BRENDAN_RUSTBORO_MUDKIP, RustboroCity_Text_GleisDefeat
	msgbox RustboroCity_Text_GleisBattle5, MSGBOX_DEFAULT
	closemessage
	fadescreen FADE_TO_BLACK
	special HealPlayerParty
	playse SE_USE_ITEM
	waitse
	fadescreen FADE_FROM_BLACK
	msgbox RustboroCity_Text_GleisBattle6, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_GLEIS, RustboroCity_Movement_GleisBattleWalkAway
	waitmovement 0
	setvar VAR_RUSTBORO_CITY_STATE, 3
	removeobject LOCALID_GLEIS
	releaseall
	end	
	
RustboroCity_Text_GleisBattle1:
	.string "{COLOR RED}{SHADOW LIGHT_RED}GLEIS: What is this Presence I feel?\n"
	.string "Ever since I arrived in this city…\l"
	.string "It's familiar, but it couldn't be…$"

RustboroCity_Text_GleisBattle2:
	.string "{COLOR RED}{SHADOW LIGHT_RED}GLEIS: YOU! What are YOU doing here?\p"
	.string "{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}{PLAYER}: Wha-? Do I know you?\p"
	.string "{COLOR RED}{SHADOW LIGHT_RED}GLEIS: I spit upon your attempts to\n"
	.string "play innocent! You can't fool me,\l"
	.string "even disguised as you are.\p"
	.string "{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}{PLAYER}: Chill out, dude. Who are you?\n"
	.string "You look familiar, but I lost my\l"
	.string "memory, so I don't know you.\p"
	.string "GLEIS: … … … … …\n"
	.string "{PLAYER}: … … … … …\p"
	.string "I'm {PLAYER}, by the way.$"

RustboroCity_Text_GleisBattle3:
	.string "{COLOR RED}{SHADOW LIGHT_RED}GLEIS: Can it be?\n"
	.string "I do not believe this to be a lie…\l"
	.string "And yet…well, if it's true…Hmm…$"

RustboroCity_Text_GleisBattle4:
	.string "{COLOR RED}{SHADOW LIGHT_RED}GLEIS: My apologies. I…must have\n"
	.string "mistaken you for someone else.\p"
	.string "What business do you have here?\n"
	.string "It's not for the faint of heart.\p"
	.string "{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}{PLAYER}: I'm looking for someone.\n"
	.string "But I sort of…picked up this task of\l"
	.string "getting rid of all the demons in\l"
	.string "RUSTBORO as a side job.\p"
	.string "{COLOR RED}{SHADOW LIGHT_RED}GLEIS: I see. What a…fortuitous\n"
	.string "coincidence, hmm hmm hmm.\p"
	.string "I just so happen to have located the\n"
	.string "source of the demons in this area.\l"
	.string "I was on my way there to destroy it.\p"
	.string "{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}{PLAYER}: Let me help. I'm a strong\n"
	.string "trainer. I've fought plenty of demons.\p"
	.string "{COLOR RED}{SHADOW LIGHT_RED}GLEIS: If you don't mind, I must test\n"
	.string "your abilities first. I can't afford\l"
	.string "to be dragged down by you.\p"
	.string "{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}{PLAYER}: Sure. Bring it on!$"

RustboroCity_Text_GleisDefeat:
	.string "Well done. You will make a useful ally.$"

RustboroCity_Text_GleisBattle5:
	.string "{COLOR RED}{SHADOW LIGHT_RED}GLEIS: Very Well. You are fit\n"
	.string "to accompany me.\l"
	.string "I shall now heal your POKéMON.$"

RustboroCity_Text_GleisBattle6:
	.string "{COLOR RED}{SHADOW LIGHT_RED}GLEIS: My servant, DANTALION, is\n"
	.string "waiting at the cave mouth east of here.\p"
	.string "I will go and join him now. Prepare\n"
	.string "yourself and come as soon as possible.$"

RustboroCity_Movement_GleisAlignWithPlayer1:
	face_left
	emote_exclamation_mark
	delay_16
	delay_16
	delay_16
	walk_fast_up
	step_end
	
RustboroCity_Movement_GleisAlignWithPlayer2:
	face_left
	emote_exclamation_mark
	delay_16
	delay_16
	delay_16
	step_end
	
RustboroCity_Movement_GleisAlignWithPlayer3:
	face_left
	emote_exclamation_mark
	delay_16
	delay_16
	delay_16
	walk_fast_down
	step_end

RustboroCity_Movement_GleisAlignWithPlayer4:
	face_left
	emote_exclamation_mark
	delay_16
	delay_16
	delay_16
	walk_fast_down
	walk_fast_down
	step_end

RustboroCity_Movement_GleisApproachPlayer:
	walk_fast_left
	walk_fast_left
	walk_fast_left
	step_end

RustboroCity_Movement_GleisWanderBack:
	walk_slow_right
	delay_16
	delay_16
	walk_slow_right
	step_end

RustboroCity_Movement_GleisWanderForward:
	walk_left
	walk_left
	step_end

RustboroCity_Movement_GleisBattleWalkAway:
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	step_end

// demon trainer / zombie pit script
RustboroCity_EventScript_ZombiePitFirstTry::
	lockall
	msgbox RustboroCity_Text_PitDemonIdle, MSGBOX_DEFAULT
	goto_if_set FLAG_STARTED_ZOMBIE_PIT_EVENT, RustboroCity_EventScript_ZombiePitSecondTry
	trainerbattle_single TRAINER_JOEY, RustboroCity_Text_PitDemonFirstTryIntro, RustboroCity_Text_PitDemonDefeat, RustboroCity_EventScript_ZombiePitMain
	end

RustboroCity_EventScript_ZombiePitSecondTry::
	setflag FLAG_TEMP_1
	addobject LOCALID_GAUNTLET_4
	addobject LOCALID_GAUNTLET_5
	setobjectxy LOCALID_GAUNTLET_1, 8, 31
	setobjectxy LOCALID_GAUNTLET_2, 7, 31
	setobjectxy LOCALID_GAUNTLET_3, 9, 31
	setobjectxy LOCALID_GAUNTLET_4, 7, 32
	setobjectxy LOCALID_GAUNTLET_5, 9, 32
	trainerbattle_single TRAINER_JOEY, RustboroCity_Text_PitDemonSecondTryIntro, RustboroCity_Text_PitDemonDefeat, RustboroCity_EventScript_ZombiePitMain
	end

RustboroCity_EventScript_ZombiePitMain::
	setflag FLAG_STARTED_ZOMBIE_PIT_EVENT
	msgbox RustboroCity_Text_PitDemonDies, MSGBOX_DEFAULT
	closemessage
	call Common_DemonCrumble
	setvar VAR_TEMP_LOOT_ITEM, ITEM_ROOM_1_KEY
	call Common_LootCorpse
	closemessage
	playse SE_PIN
	applymovement LOCALID_GAUNTLET_1, Common_Movement_FaceUp
	applymovement LOCALID_GAUNTLET_2, Common_Movement_FaceUp
	applymovement LOCALID_GAUNTLET_3, Common_Movement_FaceUp
	applymovement LOCALID_GAUNTLET_4, Common_Movement_FaceUp
	applymovement LOCALID_GAUNTLET_5, Common_Movement_FaceUp
	waitmovement 0
	applymovement LOCALID_GAUNTLET_5, Common_Movement_ExclamationMark
	applymovement LOCALID_GAUNTLET_1, Common_Movement_ExclamationMark
	applymovement LOCALID_GAUNTLET_2, Common_Movement_ExclamationMark
	applymovement LOCALID_GAUNTLET_3, Common_Movement_ExclamationMark
	applymovement LOCALID_GAUNTLET_4, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement LOCALID_GAUNTLET_4, Common_Movement_Delay48
	applymovement LOCALID_GAUNTLET_5, Common_Movement_Delay48
	applymovement LOCALID_GAUNTLET_1, Common_Movement_Delay48
	applymovement LOCALID_GAUNTLET_2, Common_Movement_Delay48
	applymovement LOCALID_GAUNTLET_3, Common_Movement_Delay48
	waitmovement 0
	delay 60
	msgbox RustboroCity_Text_PlayerUhOh, MSGBOX_DEFAULT
	closemessage
	setvar VAR_LAST_TALKED, LOCALID_GAUNTLET_1
	applymovement VAR_LAST_TALKED, RustboroCity_Movement_PitZombie1Attack
	waitmovement VAR_LAST_TALKED
	trainerbattle_no_intro TRAINER_JERRY_1, RustboroCity_Text_PitZombieDefeat
	call Common_ZombieCrumble
	setvar VAR_TEMP_LOOT_ITEM, ITEM_ZOMBIE_LIVER
	call_if_unset FLAG_TEMP_1, Common_LootCorpse
	closemessage
	setvar VAR_LAST_TALKED, LOCALID_GAUNTLET_2
	applymovement VAR_LAST_TALKED, RustboroCity_Movement_PitZombie2Attack
	waitmovement VAR_LAST_TALKED
	trainerbattle_no_intro TRAINER_JERRY_2, RustboroCity_Text_PitZombieDefeat
	call Common_ZombieCrumble
	setvar VAR_TEMP_LOOT_ITEM, ITEM_DRIED_ROOT
	call_if_unset FLAG_TEMP_1, Common_LootCorpse
	closemessage
	setvar VAR_LAST_TALKED, LOCALID_GAUNTLET_3
	applymovement VAR_LAST_TALKED, RustboroCity_Movement_PitZombie3Attack
	waitmovement VAR_LAST_TALKED
	msgbox RustboroCity_Text_HalfwayPoint, MSGBOX_DEFAULT
	trainerbattle_no_intro TRAINER_JERRY_3, RustboroCity_Text_PitZombieDefeat
	call Common_ZombieCrumble
	setvar VAR_TEMP_LOOT_ITEM, ITEM_DRIED_HERB
	call_if_unset FLAG_TEMP_1, Common_LootCorpse
	closemessage
	setvar VAR_LAST_TALKED, LOCALID_GAUNTLET_4
	applymovement VAR_LAST_TALKED, RustboroCity_Movement_PitZombie4Attack
	waitmovement VAR_LAST_TALKED
	trainerbattle_no_intro TRAINER_JERRY_4, RustboroCity_Text_PitZombieDefeat
	call Common_ZombieCrumble
	setvar VAR_TEMP_LOOT_ITEM, ITEM_DURIN_BERRY
	call_if_unset FLAG_TEMP_1, Common_LootCorpse
	closemessage
	setvar VAR_LAST_TALKED, LOCALID_GAUNTLET_5
	applymovement VAR_LAST_TALKED, RustboroCity_Movement_PitZombie5Attack
	waitmovement VAR_LAST_TALKED
	msgbox RustboroCity_Text_LastZombieReached, MSGBOX_DEFAULT
	addobject LOCALID_ROXANNE
	addobject LOCALID_HIKER
	setobjectxy LOCALID_ROXANNE, 8, 32
	setobjectxy LOCALID_HIKER, 9, 32
	applymovement LOCALID_ROXANNE, Common_Movement_FaceUp
	applymovement LOCALID_HIKER, Common_Movement_FaceUp
	trainerbattle_no_intro TRAINER_JERRY_5, RustboroCity_Text_PitZombieDefeat
	lockall
	call Common_ZombieCrumble
	setvar VAR_TEMP_LOOT_ITEM, ITEM_DURIN_BERRY
	call_if_unset FLAG_TEMP_1, Common_LootCorpse
	closemessage
	delay 60
	msgbox RustboroCity_Text_LastZombieBeaten, MSGBOX_DEFAULT
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, RustboroCity_Movement_PlayerApproachRoxanne
	waitmovement 0
	msgbox RustboroCity_Text_SavedRoxanneAndTrainer, MSGBOX_DEFAULT
	closemessage
	removeitem ITEM_ROOM_1_KEY
	fadescreen FADE_TO_BLACK
	removeobject LOCALID_ROXANNE
	removeobject LOCALID_HIKER
	fadescreen FADE_FROM_BLACK
	releaseall
	end

RustboroCity_Text_PitDemonIdle:
	.string "DEMON: Ugh…I can't believe I'm stuck\n"
	.string "guarding the gate AGAIN.\p"
	.string "I can't even see the action from here.\n"
	.string "This is just like it was in HELL.$"

RustboroCity_Text_PitDemonFirstTryIntro:
	.string "DEMON: What!? A living person!\n"
	.string "You must die!$"

RustboroCity_Text_PitDemonDefeat:
	.string "Ghhk! I was rusty from standing\n"
	.string "guard for so long…!$"

RustboroCity_Text_PitDemonSecondTryIntro:
	.string "DEMON: What!? A living person!\p"
	.string "{PLAYER}: Hey, wait. I killed and\n"
	.string "banished you already, didn't I?\p"
	.string "DEMON: Fool! You whited out, so it\n"
	.string "doesn't count! It's not canon!\p"
	.string "{PLAYER}: Will I get another key?\p"
	.string "DEMON: Well, yes, but no other items.\n"
	.string "Maybe it'll have a secret use in the\l"
	.string "full version. Heh, as if!\p"
	.string "Now you must die!$"

RustboroCity_Text_PitDemonDies:
	.string "DEMON: Ghh…you fool…!\p"
	.string "Now that I'm gone, the zombies will\n"
	.string "pour forth from this pen…\p"
	.string "Just try to survive their onslaught…\n"
	.string "Heh heh heh heh heh…!$"

RustboroCity_Text_PlayerUhOh:
	.string "{PLAYER}: … … … … …\n"
	.string "{PAUSE 30}Uh oh.\p"
	.string "ZOMBIES: GRRRAHHH!$"
	
RustboroCity_Text_HalfwayPoint:
	.string "{PLAYER}: Halfway there after this one!$"

RustboroCity_Text_LastZombieReached:
	.string "{PLAYER}: Last one! Hold on, team!$"

RustboroCity_Text_LastZombieBeaten:
	.string "{PLAYER}: Phew…made it.\p"
	.string "…Oh? Who's that?$"

RustboroCity_Text_SavedRoxanneAndTrainer:
	.string "WOMAN: You saved our lives. We…\n"
	.string "wait, are you {PLAYER}?\p"
	.string "{PLAYER}: As it happens, I am. But I\n"
	.string "don't have any memories…well, it's a\l"
	.string "whole thing. Who are you?\p"
	.string "ROXANNE: I am ROXANNE. I'm the GYM\n"
	.string "LEADER in this town…or, I was.\p"
	.string "When the demons appeared, I tried to\n"
	.string "protect my city, but…I was too weak.\p"
	.string "They threw the survivors into this pen\n"
	.string "with the zombies. For entertainment,\l"
	.string "no doubt, those monsters.\p"
	.string "Me and MARC were the only survivors.\n"
	.string "The others were…{PAUSE 60}\n"
	.string "… … … … …\p"
	.string "{PLAYER}: I see…well, you're safe now. I'm\n"
	.string "doing all I can to destroy the undead.\p"
	.string "ROXANNE: Thank you so much. I'd give\n"
	.string "you a GYM BADGE, but as you can see, we\l"
	.string "barely escaped with our lives, much less\l"
	.string "any GYM BADGES…\p"
	.string "{PLAYER}: It's fine. I, uh, already\n"
	.string "found one earlier.\p"
	.string "Here, take this key. The demon dropped\n"
	.string "it. It probably goes to that house.\l"
	.string "You should be safe holing up in there\l"
	.string "while I clear out the demons.\p"
	.string "ROXANNE: Thank you so much, {PLAYER}.\n"
	.string "If you ever have the time, you may\l"
	.string "visit. For now, we'll hide. Bless you.$"

RustboroCity_Text_PitZombieDefeat:
	.string "Gak!$"

RustboroCity_Movement_PitZombie1Attack:
	walk_fast_up
	walk_fast_up
	step_end

RustboroCity_Movement_PitZombie2Attack:
	walk_fast_right
	walk_fast_up
	walk_fast_up
	step_end

RustboroCity_Movement_PitZombie3Attack:
	walk_fast_left
	walk_fast_up
	walk_fast_up
	step_end

RustboroCity_Movement_PitZombie4Attack:
	walk_fast_right
	walk_fast_up
	walk_fast_up
	walk_fast_up
	step_end

RustboroCity_Movement_PitZombie5Attack:
	walk_fast_left
	walk_fast_up
	walk_fast_up
	walk_fast_up
	step_end

RustboroCity_Movement_PlayerApproachRoxanne:
	walk_down
	walk_down
	walk_down
	step_end

// devon corp block script
RustboroCity_Trigger_DevonCorpBlocked::
	msgbox RustboroCity_Text_TurnBack, MSGBOX_SIGN
	special MovePlayerBack
	end
	
RustboroCity_Text_TurnBack:
	.string "{PLAYER}: Wait! There's a sign here…\n"
	.string "“Authorized Personnel Only.”\p"
	.string "{PLAYER}: That was close. I almost\n"
	.string "went somewhere I wasn't meant to!$"

RustboroCity_EventScript_TunnelSign::
	msgbox RustboroCity_Text_TunnelNearingCompletion, MSGBOX_SIGN
	end

RustboroCity_EventScript_DevonCorpSign::
	msgbox RustboroCity_Text_DevonCorpSign, MSGBOX_SIGN
	end

RustboroCity_EventScript_GymSign::
	msgbox RustboroCity_Text_GymSign, MSGBOX_SIGN
	end

@ Unused
RustboroCity_EventScript_DevonCorpBranchOfficeSign::
	msgbox RustboroCity_Text_DevonCorpBranchOfficeSign, MSGBOX_SIGN
	end

RustboroCity_EventScript_CitySign::
	msgbox RustboroCity_Text_CitySign, MSGBOX_SIGN
	end

RustboroCity_EventScript_TrainersSchoolSign::
	msgbox RustboroCity_Text_TrainersSchoolSign, MSGBOX_SIGN
	end

RustboroCity_EventScript_CuttersHouseSign::
	msgbox RustboroCity_Text_CuttersHouse, MSGBOX_SIGN
	end

RustboroCity_EventScript_LittleBoy::
	lock
	faceplayer
	applymovement LOCALID_LITTLE_BOY, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

RustboroCity_EventScript_LittleGirl::
	lock
	faceplayer
	applymovement LOCALID_LITTLE_GIRL, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

RustboroCity_Text_TunnelNearingCompletion:
	.string "“Timesaving tunnel nearing\n"
	.string "completion!”\p"
	.string "…Is what it says on the sign, but\n"
	.string "there's also a big “X” splashed\l"
	.string "across it in red paint…$"

RustboroCity_Text_DevonCorpSign:
	.string "DEVON CORPORATION\p"
	.string "“For all your living needs, we make\n"
	.string "it all.”\p"
	.string "{PLAYER}: …Ironic.$"

RustboroCity_Text_GymSign:
	.string "RUSTBORO CITY POKéMON GYM\n"
	.string "LEADER: ROXANNE\p"
	.string "“The ROCK-loving honors student!”$"

RustboroCity_Text_DevonCorpBranchOfficeSign:
	.string "DEVON CORP. BRANCH OFFICE\p"
	.string "“Access limited to DEVON employees\n"
	.string "and authorized personnel.”$"

RustboroCity_Text_CitySign:
	.string "RUSTBORO CITY\p"
	.string "“The city probing the integration of\n"
	.string "nature and science.”$"

RustboroCity_Text_TrainersSchoolSign:
	.string "POKéMON TRAINER'S SCHOOL\p"
	.string "“We'll teach you anything about\n"
	.string "POKéMON!”$"

RustboroCity_Text_CuttersHouse:
	.string "CUTTER'S HOUSE$"
