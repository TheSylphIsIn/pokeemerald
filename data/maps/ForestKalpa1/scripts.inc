ForestKalpa1_MapScripts::
	.byte 0
	
ForestKalpa1_EventScript_CutItem::
	finditem ITEM_HM01
	end

ForestKalpa1_EventScript_Twins::
	trainerbattle_double TRAINER_DEZ_AND_LUKE, ForestKalpa1_Text_TwinsIntro, ForestKalpa1_Text_TwinsDefeat, ForestKalpa1_Text_TwinsNotEnoughMons
	msgbox ForestKalpa1_Text_TwinsAfterBattle, MSGBOX_DEFAULT
	release
	end

ForestKalpa1_Text_TwinsIntro:
	.string "We're looking for a mossy rock!$"

ForestKalpa1_Text_TwinsDefeat:
	.string "You chipped our stones!$"

ForestKalpa1_Text_TwinsNotEnoughMons:
	.string "Your POKéMON looks lonely…\p"
	.string "It's not safe to explore\n"
	.string "The Forest alone.$"

ForestKalpa1_Text_TwinsAfterBattle:
	.string "Maybe we could find them deeper\n"
	.string "in The Forest…$"

ForestKalpa1_EventScript_BugCatcher::
	trainerbattle_single TRAINER_IVAN, ForestKalpa1_Text_BugCatcherIntro, ForestKalpa1_Text_BugCatcherDefeat
	msgbox ForestKalpa1_Text_BugCatcherAfter, MSGBOX_AUTOCLOSE
	end

ForestKalpa1_Text_BugCatcherIntro:
	.string "I raised my KONEKOTH myself.\n"
	.string "But I heard the ones in The Forest\l"
	.string "were stronger than any I could raise.$"

ForestKalpa1_Text_BugCatcherDefeat:
	.string "See? I need a new one!$"

ForestKalpa1_Text_BugCatcherAfter:
	.string "I was hoping my KONEKOTH would\n"
	.string "lure the wild ones out.$"

ForestKalpa1_EventScript_Lass::
	trainerbattle_single TRAINER_CLAUDE, ForestKalpa1_Text_LassIntro, ForestKalpa1_Text_LassDefeat
	msgbox ForestKalpa1_Text_LassAfter, MSGBOX_AUTOCLOSE
	end

ForestKalpa1_Text_LassIntro:
	.string "You better watch out!\n"
	.string "I'm pretty, but I've got friends\l"
	.string "in high places!$"

ForestKalpa1_Text_LassDefeat:
	.string "What? No way!$"

ForestKalpa1_Text_LassAfter:
	.string "My MAFIADON keeps me safe when I\n"
	.string "wander around The Forest.$"

ForestKalpa1_EventScript_Youngster::
	trainerbattle_single TRAINER_NED, ForestKalpa1_Text_YoungsterIntro, ForestKalpa1_Text_YoungsterDefeat
	msgbox ForestKalpa1_Text_YoungsterAfter, MSGBOX_AUTOCLOSE
	end

ForestKalpa1_Text_YoungsterIntro:
	.string "My eyes in the sky are locked on\n"
	.string "to you! TURTURRET, open fire!$"

ForestKalpa1_Text_YoungsterDefeat:
	.string "I've been sapped!$"

ForestKalpa1_Text_YoungsterAfter:
	.string "I like playing war with TURTURRET.\n"
	.string "But SPYCRAB makes it no fun.$"

ForestKalpa1_EventScript_Ranger::
	trainerbattle_single TRAINER_DALE, ForestKalpa1_Text_RangerIntro, ForestKalpa1_Text_RangerDefeat
	msgbox ForestKalpa1_Text_RangerAfter, MSGBOX_AUTOCLOSE
	end

ForestKalpa1_Text_RangerIntro:
	.string "You there, halt!\n"
	.string "I need to check your readiness!$"

ForestKalpa1_Text_RangerDefeat:
	.string "Yep, you're ready.$"

ForestKalpa1_Text_RangerAfter:
	.string "You're strong enough to explore\n"
	.string "The Forest on your own.\l"
	.string "But don't go too deep. It's safer\l"
	.string "near the flowers.$"

ForestKalpa1_EventScript_Triathlete::
	trainerbattle_single TRAINER_NOLAN, ForestKalpa1_Text_TriathleteIntro, ForestKalpa1_Text_TriathleteDefeat
	msgbox ForestKalpa1_Text_TriathleteAfter, MSGBOX_AUTOCLOSE
	end

ForestKalpa1_Text_TriathleteIntro:
	.string "Huff! Huff! Gotta stay in shape!\n"
	.string "The Forest is a great place to run!$"

ForestKalpa1_Text_TriathleteDefeat:
	.string "It's hard to breathe…$"

ForestKalpa1_Text_TriathleteAfter:
	.string "Today, I'm running for no reason.\n"
	.string "Some day, I'll disappear for no reason.$"

ForestKalpa1_EventScript_IdleRanger::
	msgbox ForestKalpa1_Text_IdleRanger, MSGBOX_NPC
	end

ForestKalpa1_Text_IdleRanger:
	.string "I'm on watch to make sure no one\n"
	.string "harms the trees here.\p"
	.string "The Forest is very important to\n"
	.string "our community. Something terrible\l"
	.string "might happen if it's hurt.$"

ForestKalpa1_EventScript_Item1::
	finditem ITEM_REVIVE
	end

ForestKalpa1_EventScript_Item2::
	finditem ITEM_FULL_RESTORE
	end


