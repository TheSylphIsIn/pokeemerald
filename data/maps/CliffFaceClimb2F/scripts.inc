CliffFaceClimb2F_MapScripts::
	.byte 0

TrainerScript_Wilbur::
	trainerbattle_single TRAINER_WILBUR, TrainerScript_Text_WilburIntro,TrainerScript_Text_WilburDefeated
	msgbox TrainerScript_Text_WilburPostBattle, MSGBOX_AUTOCLOSE
	end

TrainerScript_Text_WilburIntro:
	.string "I will get stronger!\n"
	.string "I will overcome the rocks!$"

TrainerScript_Text_WilburDefeated:
	.string "Not a chance!$"

TrainerScript_Text_WilburPostBattle:
	.string "People look down on bugs.\n"
	.string "It makes me mad!\p"
	.string "I want to prove them wrong, so\n"
	.string "I'm trying to train my bugs to\l"
	.string "beat Rock types.$"

TrainerScript_Grant::
	trainerbattle_single TRAINER_GRANT, TrainerScript_Text_GrantIntro,TrainerScript_Text_GrantDefeated
	msgbox TrainerScript_Text_GrantPostBattle, MSGBOX_AUTOCLOSE
	end

TrainerScript_Text_GrantIntro:
	.string "You've been to Dropper Point?\n"
	.string "Show me what you got there!$"

TrainerScript_Text_GrantDefeated:
	.string "I should've known!$"

TrainerScript_Text_GrantPostBattle:
	.string "My poor Lav is no good against\n"
	.string "beach Pokemon.$"
