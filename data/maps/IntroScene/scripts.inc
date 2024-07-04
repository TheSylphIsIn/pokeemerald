IntroScene_MapScripts::
# 3 "data/maps/IntroScene/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, IntroScene_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

IntroScene_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 4 "data/maps/IntroScene/scripts.pory"
	map_script_2 VAR_TEMP_0, 0, IntroScene_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0
	.2byte 0

IntroScene_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0:
# 5 "data/maps/IntroScene/scripts.pory"
	msgbox IntroScene_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_0, MSGBOX_AUTOCLOSE
# 6 "data/maps/IntroScene/scripts.pory"
	setvar VAR_TEMP_0, 1
	return


Test_MonPic::
# 13 "data/maps/IntroScene/scripts.pory"
	showmonpic SPECIES_DUNSPARCE, 0, 0
# 14 "data/maps/IntroScene/scripts.pory"
	waitbuttonpress
# 15 "data/maps/IntroScene/scripts.pory"
	showmonpic SPECIES_DUSKULL, 2, 2
# 16 "data/maps/IntroScene/scripts.pory"
	waitbuttonpress
# 17 "data/maps/IntroScene/scripts.pory"
	hidemonpic
# 18 "data/maps/IntroScene/scripts.pory"
	showmonpic SPECIES_DUSKULL, 0, 0
# 19 "data/maps/IntroScene/scripts.pory"
	waitbuttonpress
# 20 "data/maps/IntroScene/scripts.pory"
	hidemonpic
	return


IntroScene_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_0:
# 5 "data/maps/IntroScene/scripts.pory"
	.string "hello chat$"
