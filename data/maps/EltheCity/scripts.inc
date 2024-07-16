EltheCity_MapScripts::
	.byte 0


ObjEventVarTest::
# 13 "data/maps/EltheCity/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_BRENDAN_NORMAL
# 14 "data/maps/EltheCity/scripts.pory"
	removeobject VAR_LAST_TALKED
# 15 "data/maps/EltheCity/scripts.pory"
	addobject VAR_LAST_TALKED
# 16 "data/maps/EltheCity/scripts.pory"
	waitbuttonpress
# 17 "data/maps/EltheCity/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_MAY_NORMAL
# 18 "data/maps/EltheCity/scripts.pory"
	removeobject VAR_LAST_TALKED
# 19 "data/maps/EltheCity/scripts.pory"
	addobject VAR_LAST_TALKED
# 20 "data/maps/EltheCity/scripts.pory"
	waitbuttonpress
# 21 "data/maps/EltheCity/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_ANABEL
# 22 "data/maps/EltheCity/scripts.pory"
	removeobject VAR_LAST_TALKED
# 23 "data/maps/EltheCity/scripts.pory"
	addobject VAR_LAST_TALKED
# 24 "data/maps/EltheCity/scripts.pory"
	waitbuttonpress
# 25 "data/maps/EltheCity/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_SPECIES ( ZOROARK )
# 26 "data/maps/EltheCity/scripts.pory"
	removeobject VAR_LAST_TALKED
# 27 "data/maps/EltheCity/scripts.pory"
	addobject VAR_LAST_TALKED
# 28 "data/maps/EltheCity/scripts.pory"
	waitbuttonpress
	return


Test_ScriptGetInput::
# 33 "data/maps/EltheCity/scripts.pory"
	lock
# 34 "data/maps/EltheCity/scripts.pory"
	message Test_ScriptGetInput_Text_0
# 35 "data/maps/EltheCity/scripts.pory"
	waitmessage
Test_ScriptGetInput_2:
# 37 "data/maps/EltheCity/scripts.pory"
	waitforscriptinput
# 38 "data/maps/EltheCity/scripts.pory"
	switch VAR_RESULT
# 40 "data/maps/EltheCity/scripts.pory"
	case 0x0020, Test_ScriptGetInput_5
# 43 "data/maps/EltheCity/scripts.pory"
	case 0x0010, Test_ScriptGetInput_6
# 46 "data/maps/EltheCity/scripts.pory"
	case 0x0080, Test_ScriptGetInput_7
# 49 "data/maps/EltheCity/scripts.pory"
	case 0x0040, Test_ScriptGetInput_8
	goto Test_ScriptGetInput_2

# 54 "data/maps/EltheCity/scripts.pory"
	release
	return

Test_ScriptGetInput_5:
# 41 "data/maps/EltheCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, StepLeft
# 42 "data/maps/EltheCity/scripts.pory"
	waitmovement 0
	goto Test_ScriptGetInput_2

Test_ScriptGetInput_6:
# 44 "data/maps/EltheCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, StepRight
# 45 "data/maps/EltheCity/scripts.pory"
	waitmovement 0
	goto Test_ScriptGetInput_2

Test_ScriptGetInput_7:
# 47 "data/maps/EltheCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, StepDown
# 48 "data/maps/EltheCity/scripts.pory"
	waitmovement 0
	goto Test_ScriptGetInput_2

Test_ScriptGetInput_8:
# 50 "data/maps/EltheCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, StepUp
# 51 "data/maps/EltheCity/scripts.pory"
	waitmovement 0
	goto Test_ScriptGetInput_2


EltheCity_Sign_InnLeft::
# 59 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_Sign_InnLeft_Text_0, MSGBOX_SIGN
	return


EltheCity_Sign_InnRight::
# 64 "data/maps/EltheCity/scripts.pory"
	speakername EltheCity_Sign_InnRight_Text_0, PORTRAIT_AMELIA_SERIOUSLY
# 65 "data/maps/EltheCity/scripts.pory"
	msgbox EltheCity_Sign_InnRight_Text_1, MSGBOX_SIGN
	return


# 68 "data/maps/EltheCity/scripts.pory"
StepDown:
# 70 "data/maps/EltheCity/scripts.pory"
	walk_down
	step_end

# 73 "data/maps/EltheCity/scripts.pory"
StepUp:
# 75 "data/maps/EltheCity/scripts.pory"
	walk_up
	step_end

# 78 "data/maps/EltheCity/scripts.pory"
StepLeft:
# 80 "data/maps/EltheCity/scripts.pory"
	walk_left
	step_end

# 83 "data/maps/EltheCity/scripts.pory"
StepRight:
# 85 "data/maps/EltheCity/scripts.pory"
	walk_right
	step_end

EltheCity_Trigger_JumpOnBenchLeft_TopTile::
# 90 "data/maps/EltheCity/scripts.pory"
	setvar VAR_0x8004, ANIM_SIT_WEST
# 91 "data/maps/EltheCity/scripts.pory"
	callnative DoAmeliaOverworldAnim
# 92 "data/maps/EltheCity/scripts.pory"
	playse SE_BIKE_HOP
# 93 "data/maps/EltheCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, EltheCity_Movement_JumpOnBenchLeft
# 94 "data/maps/EltheCity/scripts.pory"
	waitmovement 0
# 95 "data/maps/EltheCity/scripts.pory"
	addobjectspriteoffset OBJ_EVENT_ID_PLAYER, 0, -6
EltheCity_Trigger_JumpOnBenchLeft_TopTile_3:
# 97 "data/maps/EltheCity/scripts.pory"
	waitforscriptinput
# 98 "data/maps/EltheCity/scripts.pory"
	switch VAR_RESULT
# 100 "data/maps/EltheCity/scripts.pory"
	case 0x0020, EltheCity_Trigger_JumpOnBenchLeft_TopTile_10
# 101 "data/maps/EltheCity/scripts.pory"
	case 0x0001, EltheCity_Trigger_JumpOnBenchLeft_TopTile_10
# 102 "data/maps/EltheCity/scripts.pory"
	case 0x0002, EltheCity_Trigger_JumpOnBenchLeft_TopTile_10
EltheCity_Trigger_JumpOnBenchLeft_TopTile_2:
# 122 "data/maps/EltheCity/scripts.pory"
	compare VAR_RESULT, 0x0020
	goto_if_ne EltheCity_Trigger_JumpOnBenchLeft_TopTile_5
EltheCity_Trigger_JumpOnBenchLeft_TopTile_1:
# 123 "data/maps/EltheCity/scripts.pory"
	release
	return

EltheCity_Trigger_JumpOnBenchLeft_TopTile_4:
# 122 "data/maps/EltheCity/scripts.pory"
	compare VAR_RESULT, 0x0002
	goto_if_ne EltheCity_Trigger_JumpOnBenchLeft_TopTile_3
	goto EltheCity_Trigger_JumpOnBenchLeft_TopTile_1

EltheCity_Trigger_JumpOnBenchLeft_TopTile_5:
# 122 "data/maps/EltheCity/scripts.pory"
	compare VAR_RESULT, 0x0001
	goto_if_ne EltheCity_Trigger_JumpOnBenchLeft_TopTile_4
	goto EltheCity_Trigger_JumpOnBenchLeft_TopTile_1

EltheCity_Trigger_JumpOnBenchLeft_TopTile_10:
# 103 "data/maps/EltheCity/scripts.pory"
	resetobjectspriteoffset OBJ_EVENT_ID_PLAYER
# 104 "data/maps/EltheCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, EltheCity_Movement_GetOffBenchLeft
# 105 "data/maps/EltheCity/scripts.pory"
	waitmovement 0
	goto EltheCity_Trigger_JumpOnBenchLeft_TopTile_2


EltheCity_Trigger_JumpOnBenchLeft_BottomTile::
# 128 "data/maps/EltheCity/scripts.pory"
	goto EltheCity_Trigger_JumpOnBenchLeft_TopTile
	return


EltheCity_Trigger_JumpOnBenchRight_TopTile::
# 133 "data/maps/EltheCity/scripts.pory"
	setvar VAR_0x8004, ANIM_SIT_EAST
# 134 "data/maps/EltheCity/scripts.pory"
	callnative DoAmeliaOverworldAnim
# 135 "data/maps/EltheCity/scripts.pory"
	playse SE_BIKE_HOP
# 136 "data/maps/EltheCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, EltheCity_Movement_JumpOnBenchRight
# 137 "data/maps/EltheCity/scripts.pory"
	waitmovement 0
# 138 "data/maps/EltheCity/scripts.pory"
	addobjectspriteoffset OBJ_EVENT_ID_PLAYER, 0, -6
EltheCity_Trigger_JumpOnBenchRight_TopTile_3:
# 140 "data/maps/EltheCity/scripts.pory"
	waitforscriptinput
# 141 "data/maps/EltheCity/scripts.pory"
	switch VAR_RESULT
# 143 "data/maps/EltheCity/scripts.pory"
	case 0x0010, EltheCity_Trigger_JumpOnBenchRight_TopTile_10
# 144 "data/maps/EltheCity/scripts.pory"
	case 0x0001, EltheCity_Trigger_JumpOnBenchRight_TopTile_10
# 145 "data/maps/EltheCity/scripts.pory"
	case 0x0002, EltheCity_Trigger_JumpOnBenchRight_TopTile_10
EltheCity_Trigger_JumpOnBenchRight_TopTile_2:
# 165 "data/maps/EltheCity/scripts.pory"
	compare VAR_RESULT, 0x0010
	goto_if_ne EltheCity_Trigger_JumpOnBenchRight_TopTile_5
EltheCity_Trigger_JumpOnBenchRight_TopTile_1:
# 166 "data/maps/EltheCity/scripts.pory"
	release
	return

EltheCity_Trigger_JumpOnBenchRight_TopTile_4:
# 165 "data/maps/EltheCity/scripts.pory"
	compare VAR_RESULT, 0x0002
	goto_if_ne EltheCity_Trigger_JumpOnBenchRight_TopTile_3
	goto EltheCity_Trigger_JumpOnBenchRight_TopTile_1

EltheCity_Trigger_JumpOnBenchRight_TopTile_5:
# 165 "data/maps/EltheCity/scripts.pory"
	compare VAR_RESULT, 0x0001
	goto_if_ne EltheCity_Trigger_JumpOnBenchRight_TopTile_4
	goto EltheCity_Trigger_JumpOnBenchRight_TopTile_1

EltheCity_Trigger_JumpOnBenchRight_TopTile_10:
# 146 "data/maps/EltheCity/scripts.pory"
	resetobjectspriteoffset OBJ_EVENT_ID_PLAYER
# 147 "data/maps/EltheCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, EltheCity_Movement_GetOffBenchRight
# 148 "data/maps/EltheCity/scripts.pory"
	waitmovement 0
	goto EltheCity_Trigger_JumpOnBenchRight_TopTile_2


EltheCity_Trigger_JumpOnBenchRight_BottomTile::
# 171 "data/maps/EltheCity/scripts.pory"
	goto EltheCity_Trigger_JumpOnBenchRight_TopTile
	return


# 174 "data/maps/EltheCity/scripts.pory"
EltheCity_Movement_JumpOnBenchLeft:
# 176 "data/maps/EltheCity/scripts.pory"
	lock_anim
# 177 "data/maps/EltheCity/scripts.pory"
	jump_in_place_left
	step_end

# 180 "data/maps/EltheCity/scripts.pory"
EltheCity_Movement_GetOffBenchLeft:
# 182 "data/maps/EltheCity/scripts.pory"
	unlock_anim
# 183 "data/maps/EltheCity/scripts.pory"
	walk_slow_left
	step_end

# 186 "data/maps/EltheCity/scripts.pory"
EltheCity_Movement_JumpOnBenchRight:
# 188 "data/maps/EltheCity/scripts.pory"
	lock_anim
# 189 "data/maps/EltheCity/scripts.pory"
	jump_in_place_right
	step_end

# 192 "data/maps/EltheCity/scripts.pory"
EltheCity_Movement_GetOffBenchRight:
# 194 "data/maps/EltheCity/scripts.pory"
	unlock_anim
# 195 "data/maps/EltheCity/scripts.pory"
	walk_slow_right
	step_end

# 198 "data/maps/EltheCity/scripts.pory"
EltheCity_Movement_MoveDownBench:
# 200 "data/maps/EltheCity/scripts.pory"
	walk_slow_down
	step_end

# 203 "data/maps/EltheCity/scripts.pory"
EltheCity_Movement_MoveUpBench:
# 205 "data/maps/EltheCity/scripts.pory"
	walk_slow_up
	step_end

Test_ScriptGetInput_Text_0:
# 34 "data/maps/EltheCity/scripts.pory"
	.string "Which button will you press?$"

EltheCity_Sign_InnLeft_Text_0:
# 59 "data/maps/EltheCity/scripts.pory"
	.string "Elysi Inn$"

EltheCity_Sign_InnRight_Text_0:
# 64 "data/maps/EltheCity/scripts.pory"
	.string "Amelia$"

EltheCity_Sign_InnRight_Text_1:
# 65 "data/maps/EltheCity/scripts.pory"
	.string "Phew, these room prices…I'm glad\n"
	.string "Pokémon Centers were free…\p"
	.string "Then again, not like I have any\n"
	.string "money anyway…$"
