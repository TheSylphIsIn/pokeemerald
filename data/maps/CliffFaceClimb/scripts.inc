CliffFaceClimb_MapScripts::
	.byte 0

CliffFaceClimb_EventScript_Sign::
	msgbox CliffFaceClimb_Text_Sign, MSGBOX_SIGN
	end
	
CliffFaceClimb_Text_Sign:
	.string "{EMPHASIS_BLUE}CLIFF CLIMB CAVE{EMPHASIS_OFF}\p"
	.string "Leads directly to Penzelcase City.\n"
	.string "Watch your step outside!$"

TrainerScript_Kris::
	trainerbattle_single TRAINER_KRIS, TrainerScript_Text_KrisIntro,TrainerScript_Text_KrisDefeated
	msgbox TrainerScript_Text_KrisPostBattle, MSGBOX_AUTOCLOSE
	end

TrainerScript_Text_KrisIntro:
	.string "Don't tell my mom I'm down here!$"

TrainerScript_Text_KrisDefeated:
	.string "Please don't tell!$"

TrainerScript_Text_KrisPostBattle:
	.string "I'm not supposed to play in the\n"
	.string "cliff caves, but they're way more\l"
	.string "fun than the city!$"


