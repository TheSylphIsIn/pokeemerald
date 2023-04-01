.set LOCALID_WALLY, 2
.set LOCALID_BOY, 3
.set LOCALID_WALLYS_DAD, 5
.set LOCALID_GYM_BOY, 8
.set LOCALID_SCOTT, 9

PetalburgCity_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, PetalburgCity_OnTransition
	.byte 0

PetalburgCity_OnTransition:
	setflag FLAG_VISITED_PETALBURG_CITY
	end

PetalburgCity_EventScript_CenterZombie::
	trainerbattle_single TRAINER_CALVIN_2, PetalburgCity_Text_CenterZombieIntro, PetalburgCity_Text_CenterZombieDefeated, PetalburgCity_EventScript_ZombieDefeated_Center
	end
	
PetalburgCity_EventScript_ZombieDefeated_Center::
	call Common_ZombieCrumble
	setvar VAR_TEMP_LOOT_ITEM, ITEM_ZOMBIE_LIVER
	call Common_LootCorpse
	end
	
PetalburgCity_EventScript_HouseZombie::
	trainerbattle_single TRAINER_CALVIN_3, PetalburgCity_Text_HouseZombieIntro, PetalburgCity_Text_HouseZombieDefeated, PetalburgCity_EventScript_ZombieDefeated_House
	end
	
PetalburgCity_EventScript_ZombieDefeated_House::
	call Common_ZombieCrumble
	setvar VAR_TEMP_LOOT_ITEM, ITEM_DRIED_ROOT
	call Common_LootCorpse
	end
	
PetalburgCity_EventScript_GymZombie::
	trainerbattle_single TRAINER_CALVIN_4, PetalburgCity_Text_GymZombieIntro, PetalburgCity_Text_GymZombieDefeated, PetalburgCity_EventScript_ZombieDefeated_Gym
	end
	
PetalburgCity_EventScript_ZombieDefeated_Gym::
	call Common_ZombieCrumble
	setvar VAR_TEMP_LOOT_ITEM, ITEM_APRICORN
	call Common_LootCorpse // need Miasby data
	end
	
PetalburgCity_EventScript_ExitZombie::
	trainerbattle_single TRAINER_CALVIN_5, PetalburgCity_Text_ExitZombieIntro, PetalburgCity_Text_ExitZombieDefeated, PetalburgCity_EventScript_ZombieDefeated_Exit
	end
	
PetalburgCity_EventScript_ZombieDefeated_Exit::
	call Common_ZombieCrumble
	setvar VAR_TEMP_LOOT_ITEM, ITEM_SUPERCORN
	call Common_LootCorpse
	end
	
PetalburgCity_Text_CenterZombieIntro: // open advancemap
	.string "ZOMBIE: Fleeesh…!$"

PetalburgCity_Text_CenterZombieDefeated:
	.string "Gurk!$"

PetalburgCity_Text_HouseZombieIntro:
	.string "ZOMBIE: Hhhhhh… … … … …$"

PetalburgCity_Text_HouseZombieDefeated:
	.string "Raaaagh!$"

PetalburgCity_Text_GymZombieIntro:
	.string "ZOMBIE: Chhhhhhaaaaa!$"

PetalburgCity_Text_GymZombieDefeated:
	.string "Congraaaaaaaats…$"

PetalburgCity_Text_ExitZombieIntro:
	.string "ZOMBIE: Grrah!$"

PetalburgCity_Text_ExitZombieDefeated:
	.string "Aaaack!$"

PetalburgCity_EventScript_GymSign::
	msgbox PetalburgCity_Text_GymSign, MSGBOX_SIGN
	end

PetalburgCity_EventScript_CitySign::
	msgbox PetalburgCity_Text_CitySign, MSGBOX_SIGN
	end

PetalburgCity_EventScript_WallyHouseSign::
	msgbox PetalburgCity_Text_WallyHouseSign, MSGBOX_SIGN
	end
	
PetalburgCity_EventScript_Medkit::
	lock
	msgbox PetalburgCity_Text_AskForUseMedkit, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, PetalburgCity_EventScript_DontUseMedkit
	closemessage
	fadescreen FADE_TO_BLACK
	special HealPlayerParty
	playse SE_USE_ITEM
	setrespawn HEAL_LOCATION_PETALBURG_CITY
	waitse
	removeobject VAR_LAST_TALKED
	fadescreen FADE_FROM_BLACK
	msgbox PetalburgCity_Text_PartyHealed, MSGBOX_DEFAULT
	release
	end
	
PetalburgCity_Text_PartyHealed:
	.string "{PLAYER}'s POKéMON were completely\n"
	.string "healed.$"
	
PetalburgCity_EventScript_DontUseMedkit:
	release
	end
	
PetalburgCity_Text_AskForUseMedkit:
	.string "There's a single-use medkit here…\n"
	.string "Use it?$"

PetalburgCity_EventScript_EndlessPlainsTrigger::
	lock
	opendoor 7, 8
	delay 16
	addobject 6
	msgbox PetalburgCity_Text_EndlessPlainsCallout, MSGBOX_DEFAULT
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_Delay48
	waitmovement 0
	msgbox PetalburgCity_Text_EndlessPlainsCallout2, MSGBOX_DEFAULT
	closemessage
	removeobject 6
	delay 16
	closedoor 7, 8
	delay 32
	setvar VAR_SCOTT_PETALBURG_ENCOUNTER, 1
	release
	end
	
PetalburgCity_Text_EndlessPlainsCallout:
	.string "Psst!$"
	
PetalburgCity_Text_EndlessPlainsCallout2:
	.string "BOY: Come up here, quick!\n"
	.string "It's safe!$"

PetalburgCity_Text_GymSign:
	.string "PETALBURG CITY POKéMON GYM\n"
	.string "LEADER: NORMAN\l"
	.string "“A man in pursuit of power!”$"

PetalburgCity_Text_CitySign:
	.string "PETALBURG CITY\n"
	.string "“Where people mingle with nature.”$"

PetalburgCity_Text_WallyHouseSign:
	.string "WALLY'S HOUSE$"

PetalburgCity_EventScript_GymDoor::
	msgbox PetalburgCity_Text_BlockedDoor, MSGBOX_SIGN
	end
	
PetalburgCity_Text_BlockedDoor:
	.string "There's a mess of skulls and stuff\n"
	.string "wedged behind the door.\p"
	.string "Even if you could force your way\n"
	.string "in, you'd rather not.$"
