.set LOCALID_MORGAN, 4
.set LOCALID_CALVIN, 3
.set LOCALID_MANGROVE, 7

FirstTrail_MapScripts::
	.byte 0
	
// morgan idle script
FirstTrail_EventScript_Morgan::
	msgbox FirstTrail_Text_MorganIdle, MSGBOX_NPC
	end

FirstTrail_Text_MorganIdle:
	.string "MORGAN: I think I see a town\n"
	.string "up ahead. I hope they can tell\l"
	.string "us how to get home…$"

// calvin idle script
FirstTrail_EventScript_Calvin::
	msgbox FirstTrail_Text_CalvinIdle, MSGBOX_NPC
	end

FirstTrail_Text_CalvinIdle:
	.string "CALVIN: This little dude's actually\n"
	.string "pretty cool…\p"
	.string "I don't know how I'd fight off\n"
	.string "these monsters on my own.$"
	
// trainer tips sign
FirstTrail_EventScript_TipsSign::
	msgbox FirstTrail_Text_TipsSign, MSGBOX_SIGN
	end
	
FirstTrail_Text_TipsSign:
	.string "{EMPHASIS_RED}TRAINER TIPS{EMPHASIS_OFF}\p"
	.string "If you see something sparkling\n"
	.string "on the ground, pick it up!\p"
	.string "It might be a {EMPHASIS_GREEN}Star Piece{EMPHASIS_OFF}. Some\n"
	.string "people collect them, and they'll\l"
	.string "trade rare items to get yours!$"
	
// professor meeting script
FirstTrail_TriggerScript_ProfessorMeeting::
	lockall
	msgbox FirstTrail_Text_Prof1, MSGBOX_DEFAULT
	closemessage
	addobject LOCALID_MANGROVE
	setobjectxy LOCALID_MANGROVE, 34, 16
	applymovement LOCALID_MANGROVE, FirstTrail_Movement_ProfJumpFromTree
	playse SE_BIKE_HOP
	waitse
	waitmovement 0
	playse SE_PIN
	applymovement LOCALID_MORGAN, FirstTrail_Movement_MorganShock
	applymovement LOCALID_CALVIN, Common_Movement_FaceUp
	applymovement LOCALID_CALVIN, Common_Movement_ExclamationMark
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
	waitmovement LOCALID_MORGAN
	msgbox FirstTrail_Text_Prof2, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_MANGROVE, FirstTrail_Movement_ProfCheckMons
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
	waitmovement 0
	msgbox FirstTrail_Text_Prof3, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_MORGAN, FirstTrail_Movement_MorganGiveBag
	waitmovement 0
	delay 30
	msgbox FirstTrail_Text_Prof4, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_MANGROVE FirstTrail_Movement_ProfWalkAway
	delay 60
	msgbox FirstTrail_Text_MorganTrigger, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_MORGAN, FirstTrail_Movement_MorganWalkAway
	delay 20
	msgbox FirstTrail_Text_CalvinTrigger, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_CALVIN, FirstTrail_Movement_ProfWalkAway
	waitmovement 0
	setvar VAR_FONEI_COAST_STATE, 3
	setflag FLAG_MET_PROFESSOR
	removeobject LOCALID_CALVIN
	removeobject LOCALID_MORGAN
	removeobject LOCALID_MANGROVE
	releaseall
	end
	
	
FirstTrail_Text_Prof1:
	.string "???: Hey, you three!$"
	
FirstTrail_Text_Prof2::
	.string "???: I haven't seen you around here\n"
	.string "before. Are you new in town?\p"
	.string "CALVIN: Who are you?\p"
	.string "???: Oh, pardon me. My name is\n"
	.string "{EMPHASIS_GREEN}Mangrove{EMPHASIS_OFF}. I'm a Pokémon Professor.\p"
	.string "MANGROVE: Speaking of which, those\n"
	.string "Pokémon you have there…$"
	
FirstTrail_Text_Prof3:
	.string "MORGAN: I knew it! We ARE in\n"
	.string "the Pokémon world!\p"
	.string "MANGROVE: Where else would\n"
	.string "you be?\p"
	.string "Anyway, these Pokémon are quite\n"
	.string "rare. Eladrift, Glasma, Sandude…\p"
	.string "MANGROVE: Where did you get them?\p"
	.string "MORGAN: Oh, ummm… we were attacked.\n"
	.string "We got them from this bag to\l"
	.string "defend ourselves.$"
	
FirstTrail_Text_Prof4:
	.string "MANGROVE: I see…\n"
	.string "This bag belongs to a buddy of mine.\p"
	.string "MANGROVE: … … … … …\p"
	.string "I think we need to talk more.\n"
	.string "Come visit my lab, if you please.\l"
	.string "It's just past here, in {EMPHASIS_BLUE}Cran Town{EMPHASIS_OFF}.$"
	
FirstTrail_Text_MorganTrigger:
	.string "MORGAN: W-wait! We're not thieves!\n"
	.string "It's a complicated story!$"

FirstTrail_Text_CalvinTrigger:
	.string "CALVIN: Heh, guess we gotta trust\n"
	.string "this lady, unless you wanna swim\l"
	.string "home. Catch up, okay, {PLAYER}?$"

FirstTrail_Movement_ProfJumpFromTree:
	jump_2_down
	step_end
	
FirstTrail_Movement_MorganShock:
	face_right
	lock_facing_direction
	jump_left
	unlock_facing_direction
	jump_in_place_right
	step_end
	
FirstTrail_Movement_ProfCheckMons:
	walk_left
	delay_16
	delay_16
	face_down
	delay_16
	delay_16
	walk_right
	walk_down
	delay_16
	delay_16
	walk_right
	face_left
	step_end
	
FirstTrail_Movement_MorganGiveBag:
	walk_right
	walk_right
	walk_down
	face_right
	delay_8
	walk_in_place_right
	delay_16
	walk_fast_up
	walk_fast_left
	face_right
	step_end
	
FirstTrail_Movement_ProfWalkAway:
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	step_end
	
FirstTrail_Movement_MorganWalkAway:
	walk_fast_right
	walk_fast_down
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	step_end

// NPC scripts
FirstTrail_EventScript_OldWoman::
	msgbox FirstTrail_Text_OldWoman, MSGBOX_NPC
	end

FirstTrail_EventScript_LittleBoy::
	msgbox FirstTrail_Text_LittleBoy, MSGBOX_NPC
	end

FirstTrail_EventScript_FatMan::
	msgbox FirstTrail_Text_FatMan, MSGBOX_NPC
	end

FirstTrail_Text_OldWoman::
	.string "Ohoho…my family has been in this\n"
	.string "region since its founding, you know.\p"
	.string "My ancestors marched up this trail\n"
	.string "when they first made landfall.\p"
	.string "We surely weren't the first people\n"
	.string "to ever live here, but whoever was\l"
	.string "here before us must have been long\l"
	.string "gone by the time we arrived.\p"
	.string "I wonder where they went…\n"
	.string "Ohohoho… … …$"

FirstTrail_Text_LittleBoy::
	.string "I bet there's secret treasure buried\n"
	.string "around here somewhere!$"

FirstTrail_Text_FatMan::
	.string "What kind of crappy sign is this?\p"
	.string "It doesn't list the year the settlers\n"
	.string "arrived or anything.\p"
	.string "Come on, not everyone knows it was…\n"
	.string "Was in, uh… … …\l"
	.string "Darn! I forgot!$"

TrainerScript_Kyle::
	trainerbattle_single TRAINER_KYLE, TrainerScript_Text_KyleIntro,TrainerScript_Text_KyleDefeated
	msgbox TrainerScript_Text_KylePostBattle, MSGBOX_AUTOCLOSE
	end

TrainerScript_Text_KyleIntro:
	.string "Hey! Got any cool Pokémon?\n"
	.string "Show me, show me!$"

TrainerScript_Text_KyleDefeated:
	.string "Aw, it's cooler than mine!$"

TrainerScript_Text_KylePostBattle:
	.string "I wanna catch a cool Water type, but\n"
	.string "they always swim away too fast.$"

// welcome to fonei sign script
FirstTrail_EventScript_WelcomeSignLeft::
	msgbox FirstTrail_Text_SignLeft, MSGBOX_SIGN
	end
	
FirstTrail_EventScript_WelcomeSignRight::
	msgbox FirstTrail_Text_SignRight, MSGBOX_SIGN
	end

FirstTrail_Text_SignLeft:
	.string "Welcome to {EMPHASIS_BLUE}the Fonei region{EMPHASIS_OFF}!\p"
	.string "Free real estate to the north.\n"
	.string "Inquire in {EMPHASIS_BLUE}Penzelcase City{EMPHASIS_OFF}.$"

FirstTrail_Text_SignRight:
	.string "{EMPHASIS_RED}HISTORY OF FONEI{EMPHASIS_OFF}\p"
	.string "This is the trail that the first\n"
	.string "humans to explore Fonei followed\l"
	.string "upon starting their expedition.$"
