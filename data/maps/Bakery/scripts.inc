Bakery_MapScripts::
# 8 "data/maps/Bakery/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Bakery_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Bakery_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 9 "data/maps/Bakery/scripts.pory"
	map_script_2 VAR_MAIN_GAME_STATE, 4, Bakery_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0
	.2byte 0

Bakery_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0:
# 10 "data/maps/Bakery/scripts.pory"
	delay 120
# 11 "data/maps/Bakery/scripts.pory"
	special SpawnCameraObject
# 12 "data/maps/Bakery/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Bakery_Movement_CameraScrollToVice
# 13 "data/maps/Bakery/scripts.pory"
	waitmovement 0
# 14 "data/maps/Bakery/scripts.pory"
	delay 16
# 15 "data/maps/Bakery/scripts.pory"
	applymovement 7, Common_Movement_WalkInPlaceUp
# 16 "data/maps/Bakery/scripts.pory"
	speakername Bakery_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_0
# 17 "data/maps/Bakery/scripts.pory"
	msgbox Bakery_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_1
# 18 "data/maps/Bakery/scripts.pory"
	applymovement 5, Common_Movement_WalkInPlaceDown
# 19 "data/maps/Bakery/scripts.pory"
	speakername Bakery_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_2
# 20 "data/maps/Bakery/scripts.pory"
	msgbox Bakery_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_3
# 21 "data/maps/Bakery/scripts.pory"
	applymovement 6, Common_Movement_WalkInPlaceLeft
# 22 "data/maps/Bakery/scripts.pory"
	speakername Bakery_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_4
# 23 "data/maps/Bakery/scripts.pory"
	msgbox Bakery_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_5
# 24 "data/maps/Bakery/scripts.pory"
	turnobject 1, DIR_SOUTH
# 25 "data/maps/Bakery/scripts.pory"
	playmoncry SPECIES_FLYGON, CRY_MODE_NORMAL
# 26 "data/maps/Bakery/scripts.pory"
	speakername Bakery_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_6, PORTRAIT_FLYGON_ANNOYED
# 27 "data/maps/Bakery/scripts.pory"
	msgbox Bakery_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_7
# 28 "data/maps/Bakery/scripts.pory"
	applymovement 7, Common_Movement_WalkInPlaceUp
# 29 "data/maps/Bakery/scripts.pory"
	speakername Bakery_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_0
# 30 "data/maps/Bakery/scripts.pory"
	msgbox Bakery_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_8
# 31 "data/maps/Bakery/scripts.pory"
	speakername Bakery_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_6, PORTRAIT_FLYGON_ANNOYED
# 32 "data/maps/Bakery/scripts.pory"
	msgbox Bakery_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_9, MSGBOX_AUTOCLOSE
# 33 "data/maps/Bakery/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Bakery_Movement_CameraScrollBack
# 34 "data/maps/Bakery/scripts.pory"
	waitmovement 0
# 35 "data/maps/Bakery/scripts.pory"
	special RemoveCameraObject
# 36 "data/maps/Bakery/scripts.pory"
	setvar VAR_MAIN_GAME_STATE, 5
	return


# 41 "data/maps/Bakery/scripts.pory"
Bakery_Movement_CameraScrollToVice:
# 43 "data/maps/Bakery/scripts.pory"
	walk_slow_diag_northeast
# 43 "data/maps/Bakery/scripts.pory"
	walk_slow_diag_northeast
# 43 "data/maps/Bakery/scripts.pory"
	walk_slow_diag_northeast
# 43 "data/maps/Bakery/scripts.pory"
	walk_slow_diag_northeast
# 43 "data/maps/Bakery/scripts.pory"
	walk_slow_diag_northeast
# 43 "data/maps/Bakery/scripts.pory"
	walk_slow_diag_northeast
	step_end

# 46 "data/maps/Bakery/scripts.pory"
Bakery_Movement_CameraScrollBack:
# 48 "data/maps/Bakery/scripts.pory"
	walk_slow_diag_southwest
# 48 "data/maps/Bakery/scripts.pory"
	walk_slow_diag_southwest
# 48 "data/maps/Bakery/scripts.pory"
	walk_slow_diag_southwest
# 48 "data/maps/Bakery/scripts.pory"
	walk_slow_diag_southwest
# 48 "data/maps/Bakery/scripts.pory"
	walk_slow_diag_southwest
# 48 "data/maps/Bakery/scripts.pory"
	walk_slow_diag_southwest
	step_end

Bakery_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_0:
# 16 "data/maps/Bakery/scripts.pory"
	.string "Little girl$"

Bakery_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_1:
# 17 "data/maps/Bakery/scripts.pory"
	.string "What's this Pokémon's name, mommy?$"

Bakery_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_2:
# 19 "data/maps/Bakery/scripts.pory"
	.string "Her mom$"

Bakery_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_3:
# 20 "data/maps/Bakery/scripts.pory"
	.string "That's a Flygon, sweetie. That kind\n"
	.string "doesn't live around here.$"

Bakery_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_4:
# 22 "data/maps/Bakery/scripts.pory"
	.string "Little boy$"

Bakery_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_5:
# 23 "data/maps/Bakery/scripts.pory"
	.string "Where does it live?$"

Bakery_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_6:
# 26 "data/maps/Bakery/scripts.pory"
	.string "Vice$"

Bakery_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_7:
# 27 "data/maps/Bakery/scripts.pory"
	.string "I'm not a jungle gym, little runts.\n"
	.string "If it wasn't raining so hard, I'd be\l"
	.string "far, far away from you.$"

Bakery_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_8:
# 30 "data/maps/Bakery/scripts.pory"
	.string "He made a funny noise!\n"
	.string "Ggnnnrrr!$"

Bakery_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_9:
# 32 "data/maps/Bakery/scripts.pory"
	.string "Sigh…$"
