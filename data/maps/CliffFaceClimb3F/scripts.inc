CliffFaceClimb3F_MapScripts::
	.byte 0


TrainerScript_Rosalyn::
	trainerbattle_single TRAINER_ROSALYN, TrainerScript_Text_RosalynIntro,TrainerScript_Text_RosalynDefeated
	msgbox TrainerScript_Text_RosalynPostBattle, MSGBOX_AUTOCLOSE
	end

TrainerScript_Text_RosalynIntro:
	.string "What are you doing?\n"
	.string "It's dangerous down here!\l"
	.string "Go back home!$"

TrainerScript_Text_RosalynDefeated:
	.string "Huh? You're not a\n"
	.string "Penzelcase kid?$"

TrainerScript_Text_RosalynPostBattle:
	.string "You're not a kid at all? My bad…\n"
	.string "Kids from Penzelcase city are\l"
	.string "always trying to sneak down\l"
	.string "here to play.$"

