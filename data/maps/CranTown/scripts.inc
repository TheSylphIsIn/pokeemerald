CranTown_MapScripts::
# 6 "data/maps/CranTown/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, CranTown_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

CranTown_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 8 "data/maps/CranTown/scripts.pory"
	map_script_2 VAR_FONEI_COAST_STATE, 2, CranTown_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0
# 25 "data/maps/CranTown/scripts.pory"
	map_script_2 VAR_FONEI_COAST_STATE, 4, CranTown_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_1
	.2byte 0

CranTown_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0:
# 10 "data/maps/CranTown/scripts.pory"
	lock
# 11 "data/maps/CranTown/scripts.pory"
	addobject 6
# 12 "data/maps/CranTown/scripts.pory"
	setobjectxy 6, 9, 21
# 13 "data/maps/CranTown/scripts.pory"
	applymovement 6, CranTown_Movement_CalvinCheckOnWipedPlayer
# 14 "data/maps/CranTown/scripts.pory"
	waitmovement 0
# 15 "data/maps/CranTown/scripts.pory"
	speakername SpeakerName_Calvin
# 16 "data/maps/CranTown/scripts.pory"
	msgbox CranTown_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_0, MSGBOX_AUTOCLOSE
# 18 "data/maps/CranTown/scripts.pory"
	applymovement 6, CranTown_Movement_CalvinWalkOffscreen
# 19 "data/maps/CranTown/scripts.pory"
	waitmovement 0
# 20 "data/maps/CranTown/scripts.pory"
	removeobject 6
# 21 "data/maps/CranTown/scripts.pory"
	setvar VAR_FONEI_COAST_STATE, 3
# 22 "data/maps/CranTown/scripts.pory"
	setflag FLAG_MET_PROFESSOR
# 23 "data/maps/CranTown/scripts.pory"
	release
	return

CranTown_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_1:
# 27 "data/maps/CranTown/scripts.pory"
	lock
# 28 "data/maps/CranTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
# 29 "data/maps/CranTown/scripts.pory"
	waitmovement 0
# 30 "data/maps/CranTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 31 "data/maps/CranTown/scripts.pory"
	waitmovement 0
# 32 "data/maps/CranTown/scripts.pory"
	opendoor 15, 19
# 33 "data/maps/CranTown/scripts.pory"
	delay 30
# 34 "data/maps/CranTown/scripts.pory"
	addobject 5
# 35 "data/maps/CranTown/scripts.pory"
	applymovement 5, CranTown_Movement_DownAndLeft
# 36 "data/maps/CranTown/scripts.pory"
	waitmovement 0
# 37 "data/maps/CranTown/scripts.pory"
	addobject 6
# 38 "data/maps/CranTown/scripts.pory"
	applymovement 6, Common_Movement_WalkDown
# 39 "data/maps/CranTown/scripts.pory"
	waitmovement 0
# 40 "data/maps/CranTown/scripts.pory"
	closedoor 15, 19
# 41 "data/maps/CranTown/scripts.pory"
	delay 10
# 42 "data/maps/CranTown/scripts.pory"
	speakername SpeakerName_Calvin
# 43 "data/maps/CranTown/scripts.pory"
	msgbox CranTown_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_1_Text_0, MSGBOX_DEFAULT
# 44 "data/maps/CranTown/scripts.pory"
	speakername SpeakerName_Morgan
# 45 "data/maps/CranTown/scripts.pory"
	msgbox CranTown_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_1_Text_1, MSGBOX_DEFAULT
# 46 "data/maps/CranTown/scripts.pory"
	speakername SpeakerName_Calvin
# 47 "data/maps/CranTown/scripts.pory"
	msgbox CranTown_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_1_Text_2, MSGBOX_DEFAULT
# 48 "data/maps/CranTown/scripts.pory"
	speakername SpeakerName_Morgan
# 49 "data/maps/CranTown/scripts.pory"
	msgbox CranTown_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_1_Text_3, MSGBOX_AUTOCLOSE
# 50 "data/maps/CranTown/scripts.pory"
	applymovement 6, CranTown_Movement_CalvinWalkAway
# 51 "data/maps/CranTown/scripts.pory"
	delay 10
# 52 "data/maps/CranTown/scripts.pory"
	applymovement 5, CranTown_Movement_MorganWalkAway
# 53 "data/maps/CranTown/scripts.pory"
	waitmovement 5
# 54 "data/maps/CranTown/scripts.pory"
	removeobject 6
# 55 "data/maps/CranTown/scripts.pory"
	removeobject 5
# 56 "data/maps/CranTown/scripts.pory"
	setvar VAR_FONEI_COAST_STATE, 5
# 57 "data/maps/CranTown/scripts.pory"
	release
	return


CranTown_TriggerScript_NorthBlock::
# 64 "data/maps/CranTown/scripts.pory"
	msgbox CranTown_TriggerScript_NorthBlock_Text_0, MSGBOX_SIGN
# 65 "data/maps/CranTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
# 66 "data/maps/CranTown/scripts.pory"
	waitmovement 0
	return


CranTown_TriggerScript_MeetProf::
# 71 "data/maps/CranTown/scripts.pory"
	msgbox CranTown_TriggerScript_NorthBlock_Text_0, MSGBOX_SIGN
# 72 "data/maps/CranTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkLeft
# 73 "data/maps/CranTown/scripts.pory"
	waitmovement 0
	return


CranTown_TriggerScript_Scanner::
# 78 "data/maps/CranTown/scripts.pory"
	msgbox CranTown_TriggerScript_Scanner_Text_0, MSGBOX_SIGN
# 79 "data/maps/CranTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkLeft
	return


CranTown_EventScript_TechnologyGuy::
# 84 "data/maps/CranTown/scripts.pory"
	msgbox CranTown_EventScript_TechnologyGuy_Text_0, MSGBOX_NPC
	return


CranTown_EventScript_Girl::
# 89 "data/maps/CranTown/scripts.pory"
	msgbox CranTown_EventScript_Girl_Text_0, MSGBOX_NPC
	return


CranTown_EventScript_OldMan::
# 94 "data/maps/CranTown/scripts.pory"
	msgbox CranTown_EventScript_OldMan_Text_0, MSGBOX_NPC
	return


CranTown_EventScript_Shop::
# 100 "data/maps/CranTown/scripts.pory"
	lock
# 101 "data/maps/CranTown/scripts.pory"
	faceplayer
# 102 "data/maps/CranTown/scripts.pory"
	message CranTown_EventScript_Shop_Text_0
# 103 "data/maps/CranTown/scripts.pory"
	waitmessage
# 104 "data/maps/CranTown/scripts.pory"
	pokemart CranTown_Mart
# 105 "data/maps/CranTown/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 106 "data/maps/CranTown/scripts.pory"
	release
	return


	.align 2
# 109 "data/maps/CranTown/scripts.pory"
CranTown_Mart:
# 111 "data/maps/CranTown/scripts.pory"
	.2byte ITEM_BERRY_JUICE
# 112 "data/maps/CranTown/scripts.pory"
	.2byte ITEM_POKE_BALL
# 113 "data/maps/CranTown/scripts.pory"
	.2byte ITEM_CHERI_BERRY
# 114 "data/maps/CranTown/scripts.pory"
	.2byte ITEM_PECHA_BERRY
# 115 "data/maps/CranTown/scripts.pory"
	.2byte ITEM_REPEL
	.2byte ITEM_NONE

CranTown_Sign_TownSign::
# 121 "data/maps/CranTown/scripts.pory"
	msgbox CranTown_Sign_TownSign_Text_0, MSGBOX_SIGN
	return


CranTown_Sign_TrainerTips::
# 126 "data/maps/CranTown/scripts.pory"
	speakername SpeakerName_TrainerTips
# 127 "data/maps/CranTown/scripts.pory"
	msgbox CranTown_Sign_TrainerTips_Text_0, MSGBOX_DEFAULT
# 128 "data/maps/CranTown/scripts.pory"
	speakername NULL
# 129 "data/maps/CranTown/scripts.pory"
	msgbox CranTown_Sign_TrainerTips_Text_1, MSGBOX_AUTOCLOSE
	return


CranTown_Sign_FamilySign::
# 134 "data/maps/CranTown/scripts.pory"
	msgbox CranTown_Sign_FamilySign_Text_0, MSGBOX_SIGN
	return


# 137 "data/maps/CranTown/scripts.pory"
CranTown_Movement_CalvinCheckOnWipedPlayer:
# 139 "data/maps/CranTown/scripts.pory"
	walk_up
# 139 "data/maps/CranTown/scripts.pory"
	walk_up
# 139 "data/maps/CranTown/scripts.pory"
	walk_up
# 139 "data/maps/CranTown/scripts.pory"
	walk_up
# 139 "data/maps/CranTown/scripts.pory"
	walk_up
# 139 "data/maps/CranTown/scripts.pory"
	walk_up
# 139 "data/maps/CranTown/scripts.pory"
	walk_up
# 140 "data/maps/CranTown/scripts.pory"
	face_left
	step_end

# 143 "data/maps/CranTown/scripts.pory"
CranTown_Movement_CalvinWalkOffscreen:
# 145 "data/maps/CranTown/scripts.pory"
	walk_down
# 145 "data/maps/CranTown/scripts.pory"
	walk_down
# 145 "data/maps/CranTown/scripts.pory"
	walk_down
# 145 "data/maps/CranTown/scripts.pory"
	walk_down
# 145 "data/maps/CranTown/scripts.pory"
	walk_down
# 145 "data/maps/CranTown/scripts.pory"
	walk_down
# 145 "data/maps/CranTown/scripts.pory"
	walk_down
# 145 "data/maps/CranTown/scripts.pory"
	walk_down
	step_end

# 148 "data/maps/CranTown/scripts.pory"
CranTown_Movement_DownAndLeft:
# 150 "data/maps/CranTown/scripts.pory"
	walk_down
# 151 "data/maps/CranTown/scripts.pory"
	walk_left
# 152 "data/maps/CranTown/scripts.pory"
	face_down
	step_end

# 155 "data/maps/CranTown/scripts.pory"
CranTown_Movement_CalvinWalkAway:
# 157 "data/maps/CranTown/scripts.pory"
	walk_right
# 157 "data/maps/CranTown/scripts.pory"
	walk_right
# 157 "data/maps/CranTown/scripts.pory"
	walk_right
# 158 "data/maps/CranTown/scripts.pory"
	walk_up
# 158 "data/maps/CranTown/scripts.pory"
	walk_up
# 158 "data/maps/CranTown/scripts.pory"
	walk_up
# 158 "data/maps/CranTown/scripts.pory"
	walk_up
# 158 "data/maps/CranTown/scripts.pory"
	walk_up
	step_end

# 161 "data/maps/CranTown/scripts.pory"
CranTown_Movement_MorganWalkAway:
# 163 "data/maps/CranTown/scripts.pory"
	walk_left
# 163 "data/maps/CranTown/scripts.pory"
	walk_left
# 163 "data/maps/CranTown/scripts.pory"
	walk_left
# 163 "data/maps/CranTown/scripts.pory"
	walk_left
# 164 "data/maps/CranTown/scripts.pory"
	walk_up
# 164 "data/maps/CranTown/scripts.pory"
	walk_up
# 164 "data/maps/CranTown/scripts.pory"
	walk_up
# 164 "data/maps/CranTown/scripts.pory"
	walk_up
# 164 "data/maps/CranTown/scripts.pory"
	walk_up
	step_end

CranTown_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_0:
# 16 "data/maps/CranTown/scripts.pory"
	.string "You okay, {PLAYER}? A wild Pokémon\n"
	.string "got to you.\p"
	.string "We rushed you to this town for help,\n"
	.string "and on the way we met this lady\l"
	.string "named Professor Mangrove. She wants\l"
	.string "to talk to us about something.\p"
	.string "Come down here when you're feeling\n"
	.string "better, yeah?$"

CranTown_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_1_Text_0:
# 43 "data/maps/CranTown/scripts.pory"
	.string "The thief ran up to that clearing.\n"
	.string "Let's go pound him so we can start\l"
	.string "looking for the way home!$"

CranTown_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_1_Text_1:
# 45 "data/maps/CranTown/scripts.pory"
	.string "Don't you think we should, um,\n"
	.string "use these Poké Balls…\l"
	.string "to fill out our Pokémon teams?$"

CranTown_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_1_Text_2:
# 47 "data/maps/CranTown/scripts.pory"
	.string "Nah, our starters are good enough.\n"
	.string "Let's hurry up!$"

CranTown_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_1_Text_3:
# 49 "data/maps/CranTown/scripts.pory"
	.string "O-okay, sure.$"

CranTown_TriggerScript_NorthBlock_Text_0:
# 64 "data/maps/CranTown/scripts.pory"
	.string "Professor Mangrove's words echoed…\n"
	.string "Come visit my lab, if you please.$"

CranTown_TriggerScript_Scanner_Text_0:
# 78 "data/maps/CranTown/scripts.pory"
	.string "But the scanner…$"

CranTown_EventScript_TechnologyGuy_Text_0:
# 84 "data/maps/CranTown/scripts.pory"
	.string "Technology is incredible!\n"
	.string "You can use a Pokédex to view data\l"
	.string "about a species, like Abilities or\l"
	.string "what Moves it learns by leveling up!$"

CranTown_EventScript_Girl_Text_0:
# 89 "data/maps/CranTown/scripts.pory"
	.string "Some day I'll be good at teaching\n"
	.string "Pokémon moves like Mommy and Theo are!$"

CranTown_EventScript_OldMan_Text_0:
# 94 "data/maps/CranTown/scripts.pory"
	.string "Can you see land on the horizon?\n"
	.string "There are many islands out there.\p"
	.string "As a matter of fact, I was born out\n"
	.string "there in the {EMPHASIS_BLUE}Glue Valley Pit{EMPHASIS_OFF}.\p"
	.string "…I promise it's more pleasant\n"
	.string "than it sounds. Keheheh…$"

CranTown_EventScript_Shop_Text_0:
# 102 "data/maps/CranTown/scripts.pory"
	.string "Um, hello! We don't have much here,\n"
	.string "but I sell some basic supplies.$"

CranTown_Sign_TownSign_Text_0:
# 121 "data/maps/CranTown/scripts.pory"
	.string "{EMPHASIS_BLUE}Cran Town{EMPHASIS_OFF}\n"
	.string "“A town of humble beginnings.”$"

CranTown_Sign_TrainerTips_Text_0:
# 127 "data/maps/CranTown/scripts.pory"
	.string "Don't forget to check out the Options\n"
	.string "menu to customize your experience!\p$"

CranTown_Sign_TrainerTips_Text_1:
# 129 "data/maps/CranTown/scripts.pory"
	.string "{EMPHASIS_PLAYER}…The sign doesn't specify an app\n"
	.string "or anything. What could it mean?$"

CranTown_Sign_FamilySign_Text_0:
# 134 "data/maps/CranTown/scripts.pory"
	.string "Move Machine Family: Home-made TMs\n"
	.string "and HMs! {EMPHASIS_GREEN}Teachy TV{EMPHASIS_OFF} sold here!$"
