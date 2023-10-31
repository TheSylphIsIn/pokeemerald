ForestEntrance_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, ForestEntrance_OnFrame
	.byte 0

ForestEntrance_OnFrame:
	map_script_2 VAR_FOREST_STATE, 0, ForestEntrance_IntroScript
	.2byte 0

ForestEntrance_IntroScript:
	lockall
	givemon SPECIES_TYPHLOSION, 44, 0, 3
	givemon SPECIES_PORYGON2, 65, 0, 1
	delay 60
	applymovement OBJ_EVENT_ID_PLAYER, ForestEntrance_Movement_ExitBedroll
	waitmovement 0
	givemon SPECIES_SKARMORY, 42, 0, 2
	msgbox ForestEntrance_Text_ReviewOrders, MSGBOX_DEFAULT
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, ForestEntrance_Movement_GoToEntrance
	waitmovement 0
	givemon SPECIES_OCTILLERY, 42, 0, 0
	special SpawnCameraObject
	applymovement OBJ_EVENT_ID_CAMERA, ForestEntrance_Movement_PanToForest
	waitmovement 0
	special RemoveCameraObject
	// give the player a party and some items. pokeballs y/n?
	setvar VAR_FOREST_STATE 1
	setflag FLAG_SYS_B_DASH
	setflag FLAG_SYS_POKEMON_GET
	setflag FLAG_KALPA2_MAIN_TREE
	setflag FLAG_KALPA2_TREE1
	additem ITEM_HYPER_POTION, 5
	additem ITEM_MAX_POTION, 3
	additem ITEM_FULL_HEAL, 3
	additem ITEM_REVIVE, 3
	additem ITEM_MAX_REVIVE, 1
	releaseall
	end

ForestEntrance_Text_ReviewOrders:
	.string "You take a moment to review the\n"
	.string "notes Professor Kek gave you…\p"
	.string "This section of woods used to be\n"
	.string "too dense to properly explore, but\l"
	.string "recently, an entrance appeared.\p"
	.string "Considering how often strange new\n"
	.string "species are being discovered,\l"
	.string "it's likely that investigating\l"
	.string "will prove fruitful.\p"
	.string "You've been given a team that\n"
	.string "should do well against whatever's\l"
	.string "living there, if it's aggressive.\p"
	.string "…these notes have been paraphrased\n"
	.string "from Prof. K's less readable style.\p"
	.string "It's time to go.$"

ForestEntrance_Movement_ExitBedroll:
	walk_slow_up
	delay_16
	delay_16
	walk_right
	walk_down
	walk_down
	step_end

ForestEntrance_Movement_GoToEntrance:
	walk_right
	walk_right
	walk_right
	walk_up
	walk_up
	walk_up
	delay_16
	delay_16
	step_end

ForestEntrance_Movement_PanToForest:
	walk_slow_up
	walk_slow_up
	walk_slow_up
	walk_slow_up
	walk_slow_up
	walk_slow_up
	walk_slow_up
	walk_slow_up
	delay_16
	delay_16
	delay_16
	delay_16
	walk_slow_down
	walk_slow_down
	walk_slow_down
	walk_slow_down
	walk_slow_down
	walk_slow_down
	walk_slow_down
	walk_slow_down
	step_end

ForestEntrance_TriggerScript::
	lock
	msgbox ForestEntrance_Text_CantLeave, MSGBOX_DEFAULT
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, ForestEntrance_Movement_WalkUp
	waitmovement 0
	release
	end

ForestEntrance_Text_CantLeave:
	.string "You shouldn't go until you've made\n"
	.string "a full survey of the area.$"

ForestEntrance_Movement_WalkUp:
	walk_up
	step_end

ForestEntrance_BedrollScript::
	lock
	msgbox ForestEntrance_Text_LetsRest, MSGBOX_AUTOCLOSE
	fadescreen FADE_TO_BLACK
	special HealPlayerParty
	playse SE_USE_ITEM
	waitse
	fadescreen FADE_FROM_BLACK
	release
	end

ForestEntrance_Text_LetsRest:
	.string "You and your team could use some\n"
	.string "rest…$"

ForestEntrance_Sign::
	msgbox Forestentrance_Text_Sign, MSGBOX_SIGN
	end

Forestentrance_Text_Sign:
	.string "ENTRANCE OF THE FOREST\n"
	.string "Do not wander off the path.$"

