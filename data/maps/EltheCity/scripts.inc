EltheCity_MapScripts::
	.byte 0


ObjEventVarTest::
# 13 "data/maps/EltheCity/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_BRENDAN_NORMAL
# 14 "data/maps/EltheCity/scripts.pory"
	waitbuttonpress
# 15 "data/maps/EltheCity/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_MAY_NORMAL
# 16 "data/maps/EltheCity/scripts.pory"
	waitbuttonpress
# 17 "data/maps/EltheCity/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_ANABEL
# 18 "data/maps/EltheCity/scripts.pory"
	waitbuttonpress
# 19 "data/maps/EltheCity/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_SPECIES ( ZOROARK )
# 20 "data/maps/EltheCity/scripts.pory"
	waitbuttonpress
	return


Test_ScriptGetInput::
# 25 "data/maps/EltheCity/scripts.pory"
	lock
# 26 "data/maps/EltheCity/scripts.pory"
	message Test_ScriptGetInput_Text_0
# 27 "data/maps/EltheCity/scripts.pory"
	waitmessage
Test_ScriptGetInput_3:
# 29 "data/maps/EltheCity/scripts.pory"
	waitforscriptinput
# 30 "data/maps/EltheCity/scripts.pory"
	switch VAR_RESULT
# 32 "data/maps/EltheCity/scripts.pory"
	case 0x0020, Test_ScriptGetInput_12
# 34 "data/maps/EltheCity/scripts.pory"
	case 0x0010, Test_ScriptGetInput_13
# 36 "data/maps/EltheCity/scripts.pory"
	case 0x0080, Test_ScriptGetInput_14
# 38 "data/maps/EltheCity/scripts.pory"
	case 0x0040, Test_ScriptGetInput_15
Test_ScriptGetInput_2:
# 41 "data/maps/EltheCity/scripts.pory"
	compare VAR_RESULT, 0x0020
	goto_if_ne Test_ScriptGetInput_5
Test_ScriptGetInput_1:
# 42 "data/maps/EltheCity/scripts.pory"
	release
	return

Test_ScriptGetInput_4:
# 41 "data/maps/EltheCity/scripts.pory"
	compare VAR_RESULT, 0x0080
	goto_if_ne Test_ScriptGetInput_8
	goto Test_ScriptGetInput_1

Test_ScriptGetInput_5:
# 41 "data/maps/EltheCity/scripts.pory"
	compare VAR_RESULT, 0x0010
	goto_if_ne Test_ScriptGetInput_4
	goto Test_ScriptGetInput_1

Test_ScriptGetInput_8:
# 41 "data/maps/EltheCity/scripts.pory"
	compare VAR_RESULT, 0x0040
	goto_if_ne Test_ScriptGetInput_3
	goto Test_ScriptGetInput_1

Test_ScriptGetInput_12:
# 33 "data/maps/EltheCity/scripts.pory"
	msgbox Test_ScriptGetInput_Text_1, MSGBOX_AUTOCLOSE
	goto Test_ScriptGetInput_2

Test_ScriptGetInput_13:
# 35 "data/maps/EltheCity/scripts.pory"
	msgbox Test_ScriptGetInput_Text_2, MSGBOX_AUTOCLOSE
	goto Test_ScriptGetInput_2

Test_ScriptGetInput_14:
# 37 "data/maps/EltheCity/scripts.pory"
	msgbox Test_ScriptGetInput_Text_3, MSGBOX_AUTOCLOSE
	goto Test_ScriptGetInput_2

Test_ScriptGetInput_15:
# 39 "data/maps/EltheCity/scripts.pory"
	msgbox Test_ScriptGetInput_Text_4, MSGBOX_AUTOCLOSE
	goto Test_ScriptGetInput_2


EltheCity_Trigger_JumpOnBenchLeft_TopTile::
# 47 "data/maps/EltheCity/scripts.pory"
	setvar VAR_0x8004, ANIM_SIT_WEST
# 48 "data/maps/EltheCity/scripts.pory"
	callnative DoAmeliaOverworldAnim
# 49 "data/maps/EltheCity/scripts.pory"
	playse SE_BIKE_HOP
# 50 "data/maps/EltheCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, EltheCity_Movement_JumpOnBenchLeft
# 51 "data/maps/EltheCity/scripts.pory"
	waitmovement 0
# 52 "data/maps/EltheCity/scripts.pory"
	addobjectspriteoffset OBJ_EVENT_ID_PLAYER, 0, -6
EltheCity_Trigger_JumpOnBenchLeft_TopTile_3:
# 54 "data/maps/EltheCity/scripts.pory"
	waitforscriptinput
# 55 "data/maps/EltheCity/scripts.pory"
	switch VAR_RESULT
# 57 "data/maps/EltheCity/scripts.pory"
	case 0x0020, EltheCity_Trigger_JumpOnBenchLeft_TopTile_10
# 58 "data/maps/EltheCity/scripts.pory"
	case 0x0001, EltheCity_Trigger_JumpOnBenchLeft_TopTile_10
# 59 "data/maps/EltheCity/scripts.pory"
	case 0x0002, EltheCity_Trigger_JumpOnBenchLeft_TopTile_10
EltheCity_Trigger_JumpOnBenchLeft_TopTile_2:
# 79 "data/maps/EltheCity/scripts.pory"
	compare VAR_RESULT, 0x0020
	goto_if_ne EltheCity_Trigger_JumpOnBenchLeft_TopTile_5
EltheCity_Trigger_JumpOnBenchLeft_TopTile_1:
# 80 "data/maps/EltheCity/scripts.pory"
	release
	return

EltheCity_Trigger_JumpOnBenchLeft_TopTile_4:
# 79 "data/maps/EltheCity/scripts.pory"
	compare VAR_RESULT, 0x0002
	goto_if_ne EltheCity_Trigger_JumpOnBenchLeft_TopTile_3
	goto EltheCity_Trigger_JumpOnBenchLeft_TopTile_1

EltheCity_Trigger_JumpOnBenchLeft_TopTile_5:
# 79 "data/maps/EltheCity/scripts.pory"
	compare VAR_RESULT, 0x0001
	goto_if_ne EltheCity_Trigger_JumpOnBenchLeft_TopTile_4
	goto EltheCity_Trigger_JumpOnBenchLeft_TopTile_1

EltheCity_Trigger_JumpOnBenchLeft_TopTile_10:
# 60 "data/maps/EltheCity/scripts.pory"
	resetobjectspriteoffset OBJ_EVENT_ID_PLAYER
# 61 "data/maps/EltheCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, EltheCity_Movement_GetOffBenchLeft
# 62 "data/maps/EltheCity/scripts.pory"
	waitmovement 0
	goto EltheCity_Trigger_JumpOnBenchLeft_TopTile_2


EltheCity_Trigger_JumpOnBenchLeft_BottomTile::
# 85 "data/maps/EltheCity/scripts.pory"
	goto EltheCity_Trigger_JumpOnBenchLeft_TopTile
	return


EltheCity_Trigger_JumpOnBenchRight_TopTile::
# 90 "data/maps/EltheCity/scripts.pory"
	setvar VAR_0x8004, ANIM_SIT_EAST
# 91 "data/maps/EltheCity/scripts.pory"
	callnative DoAmeliaOverworldAnim
# 92 "data/maps/EltheCity/scripts.pory"
	playse SE_BIKE_HOP
# 93 "data/maps/EltheCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, EltheCity_Movement_JumpOnBenchRight
# 94 "data/maps/EltheCity/scripts.pory"
	waitmovement 0
# 95 "data/maps/EltheCity/scripts.pory"
	addobjectspriteoffset OBJ_EVENT_ID_PLAYER, 0, -6
EltheCity_Trigger_JumpOnBenchRight_TopTile_2:
# 97 "data/maps/EltheCity/scripts.pory"
	waitforscriptinput
# 98 "data/maps/EltheCity/scripts.pory"
	switch VAR_RESULT
# 100 "data/maps/EltheCity/scripts.pory"
	case 0x0010, EltheCity_Trigger_JumpOnBenchRight_TopTile_9
# 101 "data/maps/EltheCity/scripts.pory"
	case 0x0001, EltheCity_Trigger_JumpOnBenchRight_TopTile_9
# 102 "data/maps/EltheCity/scripts.pory"
	case 0x0002, EltheCity_Trigger_JumpOnBenchRight_TopTile_9
EltheCity_Trigger_JumpOnBenchRight_TopTile_1:
# 122 "data/maps/EltheCity/scripts.pory"
	compare VAR_RESULT, 0x0010
	goto_if_ne EltheCity_Trigger_JumpOnBenchRight_TopTile_4
	return

EltheCity_Trigger_JumpOnBenchRight_TopTile_3:
# 122 "data/maps/EltheCity/scripts.pory"
	compare VAR_RESULT, 0x0002
	goto_if_ne EltheCity_Trigger_JumpOnBenchRight_TopTile_2
	return

EltheCity_Trigger_JumpOnBenchRight_TopTile_4:
# 122 "data/maps/EltheCity/scripts.pory"
	compare VAR_RESULT, 0x0001
	goto_if_ne EltheCity_Trigger_JumpOnBenchRight_TopTile_3
	return

EltheCity_Trigger_JumpOnBenchRight_TopTile_9:
# 103 "data/maps/EltheCity/scripts.pory"
	resetobjectspriteoffset OBJ_EVENT_ID_PLAYER
# 104 "data/maps/EltheCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, EltheCity_Movement_GetOffBenchRight
# 105 "data/maps/EltheCity/scripts.pory"
	waitmovement 0
	goto EltheCity_Trigger_JumpOnBenchRight_TopTile_1


EltheCity_Trigger_JumpOnBenchRight_BottomTile::
# 127 "data/maps/EltheCity/scripts.pory"
	goto EltheCity_Trigger_JumpOnBenchRight_TopTile
	return


# 130 "data/maps/EltheCity/scripts.pory"
EltheCity_Movement_JumpOnBenchLeft:
# 132 "data/maps/EltheCity/scripts.pory"
	lock_anim
# 133 "data/maps/EltheCity/scripts.pory"
	jump_in_place_left
	step_end

# 136 "data/maps/EltheCity/scripts.pory"
EltheCity_Movement_GetOffBenchLeft:
# 138 "data/maps/EltheCity/scripts.pory"
	unlock_anim
# 139 "data/maps/EltheCity/scripts.pory"
	walk_slow_left
	step_end

# 142 "data/maps/EltheCity/scripts.pory"
EltheCity_Movement_JumpOnBenchRight:
# 144 "data/maps/EltheCity/scripts.pory"
	lock_anim
# 145 "data/maps/EltheCity/scripts.pory"
	jump_in_place_right
	step_end

# 148 "data/maps/EltheCity/scripts.pory"
EltheCity_Movement_GetOffBenchRight:
# 150 "data/maps/EltheCity/scripts.pory"
	unlock_anim
# 151 "data/maps/EltheCity/scripts.pory"
	walk_slow_right
	step_end

# 154 "data/maps/EltheCity/scripts.pory"
EltheCity_Movement_MoveDownBench:
# 156 "data/maps/EltheCity/scripts.pory"
	walk_slow_down
	step_end

# 159 "data/maps/EltheCity/scripts.pory"
EltheCity_Movement_MoveUpBench:
# 161 "data/maps/EltheCity/scripts.pory"
	walk_slow_up
	step_end

Test_ScriptGetInput_Text_0:
# 26 "data/maps/EltheCity/scripts.pory"
	.string "Which button will you press?$"

Test_ScriptGetInput_Text_1:
# 33 "data/maps/EltheCity/scripts.pory"
	.string "Left!$"

Test_ScriptGetInput_Text_2:
# 35 "data/maps/EltheCity/scripts.pory"
	.string "Right!$"

Test_ScriptGetInput_Text_3:
# 37 "data/maps/EltheCity/scripts.pory"
	.string "Down!$"

Test_ScriptGetInput_Text_4:
# 39 "data/maps/EltheCity/scripts.pory"
	.string "Up!$"
