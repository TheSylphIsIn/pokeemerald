FirstTrail_MapScripts::
	.byte 0


FirstTrail_EventScript_TipsSign::
# 9 "data/maps/FirstTrail/scripts.pory"
	speakername SpeakerName_TrainerTips
# 10 "data/maps/FirstTrail/scripts.pory"
	msgbox FirstTrail_EventScript_TipsSign_Text_0, MSGBOX_SIGN
	return


FirstTrail_EventScript_Morgan::
# 16 "data/maps/FirstTrail/scripts.pory"
	speakername SpeakerName_Morgan
# 17 "data/maps/FirstTrail/scripts.pory"
	msgbox FirstTrail_EventScript_Morgan_Text_0, MSGBOX_NPC
	return


FirstTrail_EventScript_Calvin::
# 22 "data/maps/FirstTrail/scripts.pory"
	speakername SpeakerName_Calvin
# 23 "data/maps/FirstTrail/scripts.pory"
	msgbox FirstTrail_EventScript_Calvin_Text_0, MSGBOX_NPC
	return


FirstTrail_TriggerScript_ProfessorMeeting::
# 28 "data/maps/FirstTrail/scripts.pory"
	lockall
# 29 "data/maps/FirstTrail/scripts.pory"
	speakername SpeakerName_Unknown
# 30 "data/maps/FirstTrail/scripts.pory"
	msgbox FirstTrail_TriggerScript_ProfessorMeeting_Text_0, MSGBOX_DEFAULT
# 31 "data/maps/FirstTrail/scripts.pory"
	closemessage
# 32 "data/maps/FirstTrail/scripts.pory"
	addobject 7
# 33 "data/maps/FirstTrail/scripts.pory"
	setobjectxy 7, 34, 16
# 34 "data/maps/FirstTrail/scripts.pory"
	applymovement 7, FirstTrail_Movement_ProfJumpFromTree
# 35 "data/maps/FirstTrail/scripts.pory"
	playse SE_BIKE_HOP
# 36 "data/maps/FirstTrail/scripts.pory"
	waitse
# 37 "data/maps/FirstTrail/scripts.pory"
	waitmovement 0
# 38 "data/maps/FirstTrail/scripts.pory"
	playse SE_PIN
# 39 "data/maps/FirstTrail/scripts.pory"
	applymovement 4, FirstTrail_Movement_MorganShock
# 40 "data/maps/FirstTrail/scripts.pory"
	applymovement 3, Common_Movement_FaceUp
# 41 "data/maps/FirstTrail/scripts.pory"
	waitmovement 3
# 42 "data/maps/FirstTrail/scripts.pory"
	applymovement 3, Common_Movement_ExclamationMark
# 43 "data/maps/FirstTrail/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 44 "data/maps/FirstTrail/scripts.pory"
	waitmovement 4
# 45 "data/maps/FirstTrail/scripts.pory"
	speakername SpeakerName_Unknown
# 46 "data/maps/FirstTrail/scripts.pory"
	msgbox FirstTrail_TriggerScript_ProfessorMeeting_Text_1, MSGBOX_DEFAULT
# 47 "data/maps/FirstTrail/scripts.pory"
	speakername SpeakerName_Calvin
# 48 "data/maps/FirstTrail/scripts.pory"
	msgbox FirstTrail_TriggerScript_ProfessorMeeting_Text_2, MSGBOX_DEFAULT
# 49 "data/maps/FirstTrail/scripts.pory"
	speakername SpeakerName_Unknown
# 50 "data/maps/FirstTrail/scripts.pory"
	msgbox FirstTrail_TriggerScript_ProfessorMeeting_Text_3, MSGBOX_AUTOCLOSE
# 51 "data/maps/FirstTrail/scripts.pory"
	applymovement 7, FirstTrail_Movement_ProfCheckMons
# 52 "data/maps/FirstTrail/scripts.pory"
	delay 120
# 53 "data/maps/FirstTrail/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 54 "data/maps/FirstTrail/scripts.pory"
	waitmovement 7
# 55 "data/maps/FirstTrail/scripts.pory"
	speakername SpeakerName_Morgan
# 56 "data/maps/FirstTrail/scripts.pory"
	msgbox FirstTrail_TriggerScript_ProfessorMeeting_Text_4, MSGBOX_DEFAULT
# 57 "data/maps/FirstTrail/scripts.pory"
	speakername SpeakerName_Mangrove
# 58 "data/maps/FirstTrail/scripts.pory"
	msgbox FirstTrail_TriggerScript_ProfessorMeeting_Text_5, MSGBOX_DEFAULT
# 59 "data/maps/FirstTrail/scripts.pory"
	speakername SpeakerName_Morgan
# 60 "data/maps/FirstTrail/scripts.pory"
	msgbox FirstTrail_TriggerScript_ProfessorMeeting_Text_6, MSGBOX_AUTOCLOSE
# 61 "data/maps/FirstTrail/scripts.pory"
	closemessage
# 62 "data/maps/FirstTrail/scripts.pory"
	applymovement 4, FirstTrail_Movement_MorganGiveBag
# 63 "data/maps/FirstTrail/scripts.pory"
	waitmovement 0
# 64 "data/maps/FirstTrail/scripts.pory"
	delay 30
# 65 "data/maps/FirstTrail/scripts.pory"
	speakername SpeakerName_Mangrove
# 66 "data/maps/FirstTrail/scripts.pory"
	msgbox FirstTrail_TriggerScript_ProfessorMeeting_Text_7, MSGBOX_DEFAULT
# 68 "data/maps/FirstTrail/scripts.pory"
	applymovement 7, Common_Movement_FaceRight
# 69 "data/maps/FirstTrail/scripts.pory"
	msgbox FirstTrail_TriggerScript_ProfessorMeeting_Text_8, MSGBOX_DEFAULT
# 70 "data/maps/FirstTrail/scripts.pory"
	applymovement 7, Common_Movement_FaceLeft
# 71 "data/maps/FirstTrail/scripts.pory"
	msgbox FirstTrail_TriggerScript_ProfessorMeeting_Text_9, MSGBOX_AUTOCLOSE
# 72 "data/maps/FirstTrail/scripts.pory"
	applymovement 7 FirstTrail_Movement_ProfWalkAway
# 73 "data/maps/FirstTrail/scripts.pory"
	delay 60
# 74 "data/maps/FirstTrail/scripts.pory"
	speakername SpeakerName_Morgan
# 75 "data/maps/FirstTrail/scripts.pory"
	msgbox FirstTrail_TriggerScript_ProfessorMeeting_Text_10, MSGBOX_AUTOCLOSE
# 76 "data/maps/FirstTrail/scripts.pory"
	applymovement 4, FirstTrail_Movement_MorganWalkAway
# 77 "data/maps/FirstTrail/scripts.pory"
	delay 20
# 78 "data/maps/FirstTrail/scripts.pory"
	speakername SpeakerName_Calvin
# 79 "data/maps/FirstTrail/scripts.pory"
	msgbox FirstTrail_TriggerScript_ProfessorMeeting_Text_11, MSGBOX_AUTOCLOSE
# 81 "data/maps/FirstTrail/scripts.pory"
	applymovement 3, FirstTrail_Movement_CalvinWalkAway
# 82 "data/maps/FirstTrail/scripts.pory"
	waitmovement 0
# 83 "data/maps/FirstTrail/scripts.pory"
	setvar VAR_FONEI_COAST_STATE, 3
# 84 "data/maps/FirstTrail/scripts.pory"
	setflag FLAG_MET_PROFESSOR
# 85 "data/maps/FirstTrail/scripts.pory"
	removeobject 3
# 86 "data/maps/FirstTrail/scripts.pory"
	removeobject 4
# 87 "data/maps/FirstTrail/scripts.pory"
	removeobject 7
# 88 "data/maps/FirstTrail/scripts.pory"
	releaseall
	return


FirstTrail_EventScript_OldWoman::
# 93 "data/maps/FirstTrail/scripts.pory"
	msgbox FirstTrail_EventScript_OldWoman_Text_0, MSGBOX_NPC
	return


FirstTrail_EventScript_LittleBoy::
# 98 "data/maps/FirstTrail/scripts.pory"
	msgbox FirstTrail_EventScript_LittleBoy_Text_0, MSGBOX_NPC
	return


FirstTrail_EventScript_FatMan::
# 103 "data/maps/FirstTrail/scripts.pory"
	msgbox FirstTrail_EventScript_FatMan_Text_0, MSGBOX_NPC
	return


FirstTrail_EventScript_WelcomeSignLeft::
# 108 "data/maps/FirstTrail/scripts.pory"
	msgbox FirstTrail_EventScript_WelcomeSignLeft_Text_0, MSGBOX_SIGN
	return


FirstTrail_EventScript_WelcomeSignRight::
# 113 "data/maps/FirstTrail/scripts.pory"
	speakername FirstTrail_EventScript_WelcomeSignRight_Text_0
# 114 "data/maps/FirstTrail/scripts.pory"
	msgbox FirstTrail_EventScript_WelcomeSignRight_Text_1, MSGBOX_SIGN
	return


# 117 "data/maps/FirstTrail/scripts.pory"
FirstTrail_Movement_ProfJumpFromTree:
# 119 "data/maps/FirstTrail/scripts.pory"
	jump_2_down
	step_end

# 122 "data/maps/FirstTrail/scripts.pory"
FirstTrail_Movement_MorganShock:
# 124 "data/maps/FirstTrail/scripts.pory"
	face_right
# 125 "data/maps/FirstTrail/scripts.pory"
	lock_facing_direction
# 126 "data/maps/FirstTrail/scripts.pory"
	jump_left
# 127 "data/maps/FirstTrail/scripts.pory"
	unlock_facing_direction
# 128 "data/maps/FirstTrail/scripts.pory"
	jump_in_place_right
	step_end

# 131 "data/maps/FirstTrail/scripts.pory"
FirstTrail_Movement_ProfCheckMons:
# 133 "data/maps/FirstTrail/scripts.pory"
	walk_left
# 134 "data/maps/FirstTrail/scripts.pory"
	delay_16
# 134 "data/maps/FirstTrail/scripts.pory"
	delay_16
# 135 "data/maps/FirstTrail/scripts.pory"
	face_down
# 136 "data/maps/FirstTrail/scripts.pory"
	delay_16
# 136 "data/maps/FirstTrail/scripts.pory"
	delay_16
# 137 "data/maps/FirstTrail/scripts.pory"
	walk_right
# 138 "data/maps/FirstTrail/scripts.pory"
	walk_down
# 139 "data/maps/FirstTrail/scripts.pory"
	delay_16
# 139 "data/maps/FirstTrail/scripts.pory"
	delay_16
# 140 "data/maps/FirstTrail/scripts.pory"
	walk_right
# 141 "data/maps/FirstTrail/scripts.pory"
	face_left
	step_end

# 144 "data/maps/FirstTrail/scripts.pory"
FirstTrail_Movement_MorganGiveBag:
# 146 "data/maps/FirstTrail/scripts.pory"
	walk_right
# 146 "data/maps/FirstTrail/scripts.pory"
	walk_right
# 147 "data/maps/FirstTrail/scripts.pory"
	walk_down
# 148 "data/maps/FirstTrail/scripts.pory"
	face_right
# 149 "data/maps/FirstTrail/scripts.pory"
	delay_8
# 150 "data/maps/FirstTrail/scripts.pory"
	walk_in_place_right
# 151 "data/maps/FirstTrail/scripts.pory"
	delay_16
# 152 "data/maps/FirstTrail/scripts.pory"
	walk_fast_up
# 153 "data/maps/FirstTrail/scripts.pory"
	walk_fast_left
# 154 "data/maps/FirstTrail/scripts.pory"
	face_right
	step_end

# 157 "data/maps/FirstTrail/scripts.pory"
FirstTrail_Movement_ProfWalkAway:
# 159 "data/maps/FirstTrail/scripts.pory"
	walk_right
# 159 "data/maps/FirstTrail/scripts.pory"
	walk_right
# 159 "data/maps/FirstTrail/scripts.pory"
	walk_right
# 159 "data/maps/FirstTrail/scripts.pory"
	walk_right
# 159 "data/maps/FirstTrail/scripts.pory"
	walk_right
# 159 "data/maps/FirstTrail/scripts.pory"
	walk_right
# 159 "data/maps/FirstTrail/scripts.pory"
	walk_right
	step_end

# 162 "data/maps/FirstTrail/scripts.pory"
FirstTrail_Movement_MorganWalkAway:
# 164 "data/maps/FirstTrail/scripts.pory"
	walk_fast_right
# 165 "data/maps/FirstTrail/scripts.pory"
	walk_fast_down
# 166 "data/maps/FirstTrail/scripts.pory"
	walk_fast_right
# 166 "data/maps/FirstTrail/scripts.pory"
	walk_fast_right
# 166 "data/maps/FirstTrail/scripts.pory"
	walk_fast_right
# 166 "data/maps/FirstTrail/scripts.pory"
	walk_fast_right
# 166 "data/maps/FirstTrail/scripts.pory"
	walk_fast_right
# 166 "data/maps/FirstTrail/scripts.pory"
	walk_fast_right
# 166 "data/maps/FirstTrail/scripts.pory"
	walk_fast_right
	step_end

# 169 "data/maps/FirstTrail/scripts.pory"
FirstTrail_Movement_CalvinWalkAway:
# 171 "data/maps/FirstTrail/scripts.pory"
	walk_right
# 171 "data/maps/FirstTrail/scripts.pory"
	walk_right
# 172 "data/maps/FirstTrail/scripts.pory"
	walk_fast_right
# 172 "data/maps/FirstTrail/scripts.pory"
	walk_fast_right
# 172 "data/maps/FirstTrail/scripts.pory"
	walk_fast_right
# 172 "data/maps/FirstTrail/scripts.pory"
	walk_fast_right
# 172 "data/maps/FirstTrail/scripts.pory"
	walk_fast_right
	step_end

# 175 "data/maps/FirstTrail/scripts.pory"

# 176 "data/maps/FirstTrail/scripts.pory"

# 177 "data/maps/FirstTrail/scripts.pory"
TrainerScript_Kyle::
# 178 "data/maps/FirstTrail/scripts.pory"
	trainerbattle_single TRAINER_KYLE, TrainerScript_Text_KyleIntro,TrainerScript_Text_KyleDefeated
# 179 "data/maps/FirstTrail/scripts.pory"
	msgbox TrainerScript_Text_KylePostBattle, MSGBOX_AUTOCLOSE
# 180 "data/maps/FirstTrail/scripts.pory"
	end
# 181 "data/maps/FirstTrail/scripts.pory"

# 182 "data/maps/FirstTrail/scripts.pory"
TrainerScript_Text_KyleIntro:
# 183 "data/maps/FirstTrail/scripts.pory"
	.string "Hey! Got any cool Pokémon?\n"
# 184 "data/maps/FirstTrail/scripts.pory"
	.string "Show me, show me!$"
# 185 "data/maps/FirstTrail/scripts.pory"

# 186 "data/maps/FirstTrail/scripts.pory"
TrainerScript_Text_KyleDefeated:
# 187 "data/maps/FirstTrail/scripts.pory"
	.string "Aw, it's cooler than mine!$"
# 188 "data/maps/FirstTrail/scripts.pory"

# 189 "data/maps/FirstTrail/scripts.pory"
TrainerScript_Text_KylePostBattle:
# 190 "data/maps/FirstTrail/scripts.pory"
	.string "I wanna catch a cool Water type, but\n"
# 191 "data/maps/FirstTrail/scripts.pory"
	.string "they always swim away too fast.$"

FirstTrail_EventScript_TipsSign_Text_0:
# 10 "data/maps/FirstTrail/scripts.pory"
	.string "If you see a little sparkle on the\n"
	.string "ground, pick it up!\p"
	.string "It might be a {EMPHASIS_GREEN}Star Piece{EMPHASIS_OFF}.\n"
	.string "Some people like to barter with them.\p"
	.string "You might be able to buy rare items\n"
	.string "if you collect a lot!$"

FirstTrail_EventScript_Morgan_Text_0:
# 17 "data/maps/FirstTrail/scripts.pory"
	.string "I think I see a town up ahead.\n"
	.string "Maybe we can find out where we are.$"

FirstTrail_EventScript_Calvin_Text_0:
# 23 "data/maps/FirstTrail/scripts.pory"
	.string "This little guy can do some work.\n"
	.string "These wild monsters don't stand\l"
	.string "a chance!$"

FirstTrail_TriggerScript_ProfessorMeeting_Text_0:
# 30 "data/maps/FirstTrail/scripts.pory"
	.string "Hey, you three!$"

FirstTrail_TriggerScript_ProfessorMeeting_Text_1:
# 46 "data/maps/FirstTrail/scripts.pory"
	.string "I haven't seen you around here.\n"
	.string "Where are you from?$"

FirstTrail_TriggerScript_ProfessorMeeting_Text_2:
# 48 "data/maps/FirstTrail/scripts.pory"
	.string "Who are you?$"

FirstTrail_TriggerScript_ProfessorMeeting_Text_3:
# 50 "data/maps/FirstTrail/scripts.pory"
	.string "Oh, pardon me. My name is Mangrove.\n"
	.string "I'm a Pokémon Professor.\p"
	.string "Speaking of which, those Pokémon\n"
	.string "you have there…let me see…$"

FirstTrail_TriggerScript_ProfessorMeeting_Text_4:
# 56 "data/maps/FirstTrail/scripts.pory"
	.string "A Pokémon Professor! For real?$"

FirstTrail_TriggerScript_ProfessorMeeting_Text_5:
# 58 "data/maps/FirstTrail/scripts.pory"
	.string "Indeed. And I know that these Pokémon\n"
	.string "don't live around here.\l"
	.string "Where did you get them?$"

FirstTrail_TriggerScript_ProfessorMeeting_Text_6:
# 60 "data/maps/FirstTrail/scripts.pory"
	.string "Umm…a monster attacked us, but we\n"
	.string "found the Pokémon in this bag.$"

FirstTrail_TriggerScript_ProfessorMeeting_Text_7:
# 66 "data/maps/FirstTrail/scripts.pory"
	.string "I see…as I thought, this belongs to\n"
	.string "one of my colleagues.\p"
	.string "He was studying these Pokémon.\n"
	.string "I don't know how his bag ended up\l"
	.string "laying on {EMPHASIS_BLUE}Dropper Point{EMPHASIS_OFF} like that.$"

FirstTrail_TriggerScript_ProfessorMeeting_Text_8:
# 69 "data/maps/FirstTrail/scripts.pory"
	.string "Hmm… … {PAUSE 15}… … {PAUSE 15}… … {PAUSE 15}… … {PAUSE 15}… …$"

FirstTrail_TriggerScript_ProfessorMeeting_Text_9:
# 71 "data/maps/FirstTrail/scripts.pory"
	.string "I think we need to talk more.\n"
	.string "But this isn't a good place to talk.\p"
	.string "Come visit my lab in {EMPHASIS_BLUE}Cran Town{EMPHASIS_OFF},\n"
	.string "if you please. And bring the Pokémon.$"

FirstTrail_TriggerScript_ProfessorMeeting_Text_10:
# 75 "data/maps/FirstTrail/scripts.pory"
	.string "W-wait, it was self-defense, really!\n"
	.string "We're not thieves! You get that, right?$"

FirstTrail_TriggerScript_ProfessorMeeting_Text_11:
# 79 "data/maps/FirstTrail/scripts.pory"
	.string "I hope she points us on our way\n"
	.string "home instead of throwing us in jail.\p"
	.string "Think our Pokémon are strong enough\n"
	.string "to fight off a whole town?\l"
	.string "If you hear me yell, run away.\l"
	.string "Heh, just kidding. …Kinda. Whatever.$"

FirstTrail_EventScript_OldWoman_Text_0:
# 93 "data/maps/FirstTrail/scripts.pory"
	.string "I remember walking this path as a\n"
	.string "little girl when we first arrived\l"
	.string "in this region.\p"
	.string "It seemed so much longer back then.$"

FirstTrail_EventScript_LittleBoy_Text_0:
# 98 "data/maps/FirstTrail/scripts.pory"
	.string "If I had a Pokémon with {EMPHASIS_RED}Dig{EMPHASIS_OFF},\n"
	.string "I could look for buried treasure.\p"
	.string "I think there's some around here\n"
	.string "somewhere! It's my instinct!$"

FirstTrail_EventScript_FatMan_Text_0:
# 103 "data/maps/FirstTrail/scripts.pory"
	.string "History…yeah, right!\n"
	.string "It was less than two generations ago!$"

FirstTrail_EventScript_WelcomeSignLeft_Text_0:
# 108 "data/maps/FirstTrail/scripts.pory"
	.string "Welcome to the {EMPHASIS_BLUE}Fonei{EMPHASIS_OFF} region!\p"
	.string "Free real estate to the north.\n"
	.string "Inquire in {EMPHASIS_BLUE}Penzelcase City{EMPHASIS_OFF}.$"

FirstTrail_EventScript_WelcomeSignRight_Text_0:
# 113 "data/maps/FirstTrail/scripts.pory"
	.string "HISTORY$"

FirstTrail_EventScript_WelcomeSignRight_Text_1:
# 114 "data/maps/FirstTrail/scripts.pory"
	.string "{EMPHASIS_BLUE}The first modern settlers of Fonei\n"
	.string "made landfall at Dropper Point and\l"
	.string "followed this trail to reach the\l"
	.string "site of historic Cran Town.{EMPHASIS_OFF}$"
