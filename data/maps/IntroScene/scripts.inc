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
	msgbox Test_MonPic_Text_0, MSGBOX_AUTOCLOSE
# 14 "data/maps/IntroScene/scripts.pory"
	delay 30
# 15 "data/maps/IntroScene/scripts.pory"
	speakername Test_MonPic_Text_1, PORTRAIT_FLYGON_NEUTRAL, 20, 5, TRUE
# 16 "data/maps/IntroScene/scripts.pory"
	msgbox Test_MonPic_Text_2, MSGBOX_AUTOCLOSE
# 17 "data/maps/IntroScene/scripts.pory"
	delay 30
# 18 "data/maps/IntroScene/scripts.pory"
	msgbox Test_MonPic_Text_0, MSGBOX_AUTOCLOSE
	return


Test_Portrait::
# 23 "data/maps/IntroScene/scripts.pory"
	speakername Test_Portrait_Text_0, PORTRAIT_KINGLER_NEUTRAL, 21, 6, TRUE
# 24 "data/maps/IntroScene/scripts.pory"
	waitbuttonpress
# 25 "data/maps/IntroScene/scripts.pory"
	msgbox Test_Portrait_Text_1, MSGBOX_DEFAULT
# 26 "data/maps/IntroScene/scripts.pory"
	speakername Test_Portrait_Text_2, PORTRAIT_NIDOKING_NEUTRAL
# 27 "data/maps/IntroScene/scripts.pory"
	msgbox Test_Portrait_Text_3, MSGBOX_DEFAULT
# 28 "data/maps/IntroScene/scripts.pory"
	speakername Test_Portrait_Text_0, PORTRAIT_NONE
# 29 "data/maps/IntroScene/scripts.pory"
	msgbox Test_Portrait_Text_4, MSGBOX_DEFAULT
# 30 "data/maps/IntroScene/scripts.pory"
	speakername NULL, PORTRAIT_AMELIA_NEUTRAL
# 31 "data/maps/IntroScene/scripts.pory"
	msgbox Test_Portrait_Text_5, MSGBOX_AUTOCLOSE
	return


IntroScene_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_0:
# 5 "data/maps/IntroScene/scripts.pory"
	.string "hello chat$"

Test_MonPic_Text_0:
# 13 "data/maps/IntroScene/scripts.pory"
	.string "message when no tags$"

Test_MonPic_Text_1:
# 15 "data/maps/IntroScene/scripts.pory"
	.string "oenis$"

Test_MonPic_Text_2:
# 16 "data/maps/IntroScene/scripts.pory"
	.string "message when haves tags$"

Test_Portrait_Text_0:
# 23 "data/maps/IntroScene/scripts.pory"
	.string "h$"

Test_Portrait_Text_1:
# 25 "data/maps/IntroScene/scripts.pory"
	.string "It will show up when the message box\n"
	.string "appears.$"

Test_Portrait_Text_2:
# 26 "data/maps/IntroScene/scripts.pory"
	.string "b$"

Test_Portrait_Text_3:
# 27 "data/maps/IntroScene/scripts.pory"
	.string "It can change mid-dialogue.$"

Test_Portrait_Text_4:
# 29 "data/maps/IntroScene/scripts.pory"
	.string "Or even disappear.$"

Test_Portrait_Text_5:
# 31 "data/maps/IntroScene/scripts.pory"
	.string "Portrait and name can be controlled\n"
	.string "separately too.$"
