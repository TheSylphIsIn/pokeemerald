Bakery_MapScripts::
# 8 "data/maps/Bakery/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Bakery_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 18 "data/maps/Bakery/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Bakery_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Bakery_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 10 "data/maps/Bakery/scripts.pory"
	goto_if_set FLAG_GOT_VICE, Bakery_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

Bakery_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 12 "data/maps/Bakery/scripts.pory"
	setobjectxyperm 6, 16, 13
# 13 "data/maps/Bakery/scripts.pory"
	setobjectmovementtype 6, MOVEMENT_TYPE_FACE_DOWN
# 14 "data/maps/Bakery/scripts.pory"
	setobjectxyperm 7, 15, 14
# 15 "data/maps/Bakery/scripts.pory"
	setobjectmovementtype 7, MOVEMENT_TYPE_FACE_RIGHT
	return

Bakery_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 19 "data/maps/Bakery/scripts.pory"
	map_script_2 VAR_MAIN_GAME_STATE, 4, Bakery_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0
	.2byte 0

Bakery_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0:
# 21 "data/maps/Bakery/scripts.pory"
	delay 120
# 22 "data/maps/Bakery/scripts.pory"
	special SpawnCameraObject
# 23 "data/maps/Bakery/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Bakery_Movement_CameraScrollToVice
# 24 "data/maps/Bakery/scripts.pory"
	waitmovement 0
# 25 "data/maps/Bakery/scripts.pory"
	delay 16
# 26 "data/maps/Bakery/scripts.pory"
	applymovement 7, Common_Movement_WalkInPlaceUp
# 27 "data/maps/Bakery/scripts.pory"
	speakername Bakery_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_0
# 28 "data/maps/Bakery/scripts.pory"
	msgbox Bakery_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_1
# 29 "data/maps/Bakery/scripts.pory"
	applymovement 5, Common_Movement_WalkInPlaceDown
# 30 "data/maps/Bakery/scripts.pory"
	speakername Bakery_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_2
# 31 "data/maps/Bakery/scripts.pory"
	msgbox Bakery_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_3
# 32 "data/maps/Bakery/scripts.pory"
	applymovement 6, Common_Movement_WalkInPlaceLeft
# 33 "data/maps/Bakery/scripts.pory"
	speakername Bakery_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_4
# 34 "data/maps/Bakery/scripts.pory"
	msgbox Bakery_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_5
# 35 "data/maps/Bakery/scripts.pory"
	turnobject 1, DIR_SOUTH
# 36 "data/maps/Bakery/scripts.pory"
	playmoncry SPECIES_FLYGON, CRY_MODE_NORMAL
# 37 "data/maps/Bakery/scripts.pory"
	speakername Bakery_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_6, PORTRAIT_FLYGON_ANNOYED
# 38 "data/maps/Bakery/scripts.pory"
	msgbox Bakery_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_7
# 39 "data/maps/Bakery/scripts.pory"
	applymovement 7, Common_Movement_WalkInPlaceUp
# 40 "data/maps/Bakery/scripts.pory"
	speakername Bakery_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_0
# 41 "data/maps/Bakery/scripts.pory"
	msgbox Bakery_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_8
# 42 "data/maps/Bakery/scripts.pory"
	speakername Bakery_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_6, PORTRAIT_FLYGON_ANNOYED
# 43 "data/maps/Bakery/scripts.pory"
	msgbox Bakery_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_9, MSGBOX_AUTOCLOSE
# 44 "data/maps/Bakery/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Bakery_Movement_CameraScrollBack
# 45 "data/maps/Bakery/scripts.pory"
	waitmovement 0
# 46 "data/maps/Bakery/scripts.pory"
	special RemoveCameraObject
# 47 "data/maps/Bakery/scripts.pory"
	setvar VAR_MAIN_GAME_STATE, 5
	return


Bakery_ViceScript::
# 54 "data/maps/Bakery/scripts.pory"
	lock
# 55 "data/maps/Bakery/scripts.pory"
	goto_if_set FLAG_TREES_CLEARED, Bakery_ViceScript_2
# 64 "data/maps/Bakery/scripts.pory"
	faceplayer
# 65 "data/maps/Bakery/scripts.pory"
	speakername Bakery_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_6, PORTRAIT_FLYGON_ANNOYED
# 66 "data/maps/Bakery/scripts.pory"
	msgbox Bakery_ViceScript_Text_3
# 67 "data/maps/Bakery/scripts.pory"
	speakername Bakery_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_6, PORTRAIT_FLYGON_NEUTRAL
# 68 "data/maps/Bakery/scripts.pory"
	msgbox Bakery_ViceScript_Text_4
# 69 "data/maps/Bakery/scripts.pory"
	speakername Bakery_ViceScript_Text_1, PORTRAIT_AMELIA_NEUTRAL
# 70 "data/maps/Bakery/scripts.pory"
	msgbox Bakery_ViceScript_Text_5
# 71 "data/maps/Bakery/scripts.pory"
	speakername Bakery_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_6, PORTRAIT_FLYGON_NEUTRAL
# 72 "data/maps/Bakery/scripts.pory"
	msgbox Bakery_ViceScript_Text_6
# 73 "data/maps/Bakery/scripts.pory"
	speakername Bakery_ViceScript_Text_1, PORTRAIT_AMELIA_SERIOUSLY
# 74 "data/maps/Bakery/scripts.pory"
	msgbox Bakery_ViceScript_Text_7
# 76 "data/maps/Bakery/scripts.pory"
	speakername Bakery_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_6, PORTRAIT_FLYGON_NEUTRAL
# 77 "data/maps/Bakery/scripts.pory"
	msgbox Bakery_ViceScript_Text_8
# 78 "data/maps/Bakery/scripts.pory"
	speakername Bakery_ViceScript_Text_1, PORTRAIT_AMELIA_SERIOUSLY
# 79 "data/maps/Bakery/scripts.pory"
	msgbox Bakery_ViceScript_Text_9
# 80 "data/maps/Bakery/scripts.pory"
	speakername Bakery_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_6, PORTRAIT_FLYGON_NEUTRAL
# 81 "data/maps/Bakery/scripts.pory"
	msgbox Bakery_ViceScript_Text_10
# 82 "data/maps/Bakery/scripts.pory"
	special GetLeadMonSpecies
# 83 "data/maps/Bakery/scripts.pory"
	switch VAR_RESULT
# 85 "data/maps/Bakery/scripts.pory"
	case SPECIES_KINGLER, Bakery_ViceScript_7
# 94 "data/maps/Bakery/scripts.pory"
	case SPECIES_EEVEE, Bakery_ViceScript_8
Bakery_ViceScript_5:
# 108 "data/maps/Bakery/scripts.pory"
	setflag FLAG_TREES_CLEARED
Bakery_ViceScript_1:
# 110 "data/maps/Bakery/scripts.pory"
	release
	return

Bakery_ViceScript_2:
# 57 "data/maps/Bakery/scripts.pory"
	speakername Bakery_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_6, PORTRAIT_FLYGON_ANNOYED
# 58 "data/maps/Bakery/scripts.pory"
	msgbox Bakery_ViceScript_Text_0
# 59 "data/maps/Bakery/scripts.pory"
	speakername Bakery_ViceScript_Text_1, PORTRAIT_AMELIA_SERIOUSLY
# 60 "data/maps/Bakery/scripts.pory"
	msgbox Bakery_ViceScript_Text_2, MSGBOX_AUTOCLOSE
	goto Bakery_ViceScript_1

Bakery_ViceScript_7:
# 86 "data/maps/Bakery/scripts.pory"
	speakername Bakery_ViceScript_Text_11, PORTRAIT_KINGLER_LAUGH
# 87 "data/maps/Bakery/scripts.pory"
	msgbox Bakery_ViceScript_Text_12
# 88 "data/maps/Bakery/scripts.pory"
	speakername Bakery_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_6, PORTRAIT_FLYGON_NEUTRAL
# 89 "data/maps/Bakery/scripts.pory"
	msgbox Bakery_ViceScript_Text_13
# 91 "data/maps/Bakery/scripts.pory"
	speakername Bakery_ViceScript_Text_11, PORTRAIT_KINGLER_NEUTRAL
# 92 "data/maps/Bakery/scripts.pory"
	msgbox Bakery_ViceScript_Text_14, MSGBOX_AUTOCLOSE
# 93 "data/maps/Bakery/scripts.pory"
	setflag FLAG_KNOW_VICE_FLAVOR
	goto Bakery_ViceScript_5

Bakery_ViceScript_8:
# 95 "data/maps/Bakery/scripts.pory"
	speakername Bakery_ViceScript_Text_15, PORTRAIT_DEMIVEE_NEUTRAL
# 96 "data/maps/Bakery/scripts.pory"
	msgbox Bakery_ViceScript_Text_16
# 97 "data/maps/Bakery/scripts.pory"
	speakername Bakery_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_6, PORTRAIT_FLYGON_NEUTRAL
# 98 "data/maps/Bakery/scripts.pory"
	msgbox Bakery_ViceScript_Text_17
# 101 "data/maps/Bakery/scripts.pory"
	speakername Bakery_ViceScript_Text_15, PORTRAIT_DEMIVEE_NEUTRAL
# 102 "data/maps/Bakery/scripts.pory"
	msgbox Bakery_ViceScript_Text_18
# 103 "data/maps/Bakery/scripts.pory"
	speakername Bakery_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_6, PORTRAIT_FLYGON_NEUTRAL
# 104 "data/maps/Bakery/scripts.pory"
	msgbox Bakery_ViceScript_Text_19
# 105 "data/maps/Bakery/scripts.pory"
	speakername Bakery_ViceScript_Text_15, PORTRAIT_DEMIVEE_ANNOYED
# 106 "data/maps/Bakery/scripts.pory"
	msgbox Bakery_ViceScript_Text_20, MSGBOX_AUTOCLOSE
	goto Bakery_ViceScript_5


# 113 "data/maps/Bakery/scripts.pory"
Bakery_Movement_CameraScrollToVice:
# 115 "data/maps/Bakery/scripts.pory"
	walk_slow_diag_northeast
# 115 "data/maps/Bakery/scripts.pory"
	walk_slow_diag_northeast
# 115 "data/maps/Bakery/scripts.pory"
	walk_slow_diag_northeast
# 115 "data/maps/Bakery/scripts.pory"
	walk_slow_diag_northeast
# 115 "data/maps/Bakery/scripts.pory"
	walk_slow_diag_northeast
# 115 "data/maps/Bakery/scripts.pory"
	walk_slow_diag_northeast
	step_end

# 118 "data/maps/Bakery/scripts.pory"
Bakery_Movement_CameraScrollBack:
# 120 "data/maps/Bakery/scripts.pory"
	walk_slow_diag_southwest
# 120 "data/maps/Bakery/scripts.pory"
	walk_slow_diag_southwest
# 120 "data/maps/Bakery/scripts.pory"
	walk_slow_diag_southwest
# 120 "data/maps/Bakery/scripts.pory"
	walk_slow_diag_southwest
# 120 "data/maps/Bakery/scripts.pory"
	walk_slow_diag_southwest
# 120 "data/maps/Bakery/scripts.pory"
	walk_slow_diag_southwest
	step_end

Bakery_Cashier::
# 127 "data/maps/Bakery/scripts.pory"
	lock
# 128 "data/maps/Bakery/scripts.pory"
	faceplayer
# 129 "data/maps/Bakery/scripts.pory"
	goto_if_set FLAG_TREES_CLEARED, Bakery_Cashier_3
Bakery_Cashier_1:
# 155 "data/maps/Bakery/scripts.pory"
	release
	return

Bakery_Cashier_2:
# 131 "data/maps/Bakery/scripts.pory"
	speakername Bakery_ViceScript_Text_1, PORTRAIT_AMELIA_NEUTRAL
# 132 "data/maps/Bakery/scripts.pory"
	msgbox Bakery_Cashier_Text_0
# 133 "data/maps/Bakery/scripts.pory"
	speakername Bakery_Cashier_Text_1
# 134 "data/maps/Bakery/scripts.pory"
	msgbox Bakery_Cashier_Text_2
# 135 "data/maps/Bakery/scripts.pory"
	goto_if_set FLAG_KNOW_VICE_FLAVOR, Bakery_Cashier_6
# 149 "data/maps/Bakery/scripts.pory"
	speakername Bakery_ViceScript_Text_1, PORTRAIT_AMELIA_SERIOUSLY
# 150 "data/maps/Bakery/scripts.pory"
	msgbox Bakery_Cashier_Text_6
# 151 "data/maps/Bakery/scripts.pory"
	speakername Bakery_Cashier_Text_1
# 152 "data/maps/Bakery/scripts.pory"
	msgbox Bakery_Cashier_Text_7, MSGBOX_AUTOCLOSE
	goto Bakery_Cashier_1

Bakery_Cashier_3:
# 129 "data/maps/Bakery/scripts.pory"
	goto_if_unset FLAG_GOT_VICE, Bakery_Cashier_2
	goto Bakery_Cashier_1

Bakery_Cashier_6:
# 137 "data/maps/Bakery/scripts.pory"
	speakername Bakery_ViceScript_Text_1, PORTRAIT_AMELIA_NEUTRAL
# 138 "data/maps/Bakery/scripts.pory"
	msgbox Bakery_Cashier_Text_3
# 139 "data/maps/Bakery/scripts.pory"
	speakername Bakery_Cashier_Text_1
# 140 "data/maps/Bakery/scripts.pory"
	msgbox Bakery_Cashier_Text_4, MSGBOX_AUTOCLOSE
# 143 "data/maps/Bakery/scripts.pory"
	speakername Bakery_Cashier_Text_1
# 144 "data/maps/Bakery/scripts.pory"
	msgbox Bakery_Cashier_Text_5
	goto Bakery_Cashier_1


Bakery_LittleBoy::
# 160 "data/maps/Bakery/scripts.pory"
	lock
# 161 "data/maps/Bakery/scripts.pory"
	faceplayer
# 162 "data/maps/Bakery/scripts.pory"
	goto_if_set FLAG_TEMP_11, Bakery_LittleBoy_2
# 168 "data/maps/Bakery/scripts.pory"
	speakername Bakery_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_4
Bakery_LittleBoy_1:
# 170 "data/maps/Bakery/scripts.pory"
	goto_if_set FLAG_GOT_VICE, Bakery_LittleBoy_6
# 179 "data/maps/Bakery/scripts.pory"
	msgbox Bakery_LittleBoy_Text_3, MSGBOX_AUTOCLOSE
Bakery_LittleBoy_5:
# 181 "data/maps/Bakery/scripts.pory"
	release
	return

Bakery_LittleBoy_2:
# 164 "data/maps/Bakery/scripts.pory"
	speakername Bakery_LittleBoy_Text_0
	goto Bakery_LittleBoy_1

Bakery_LittleBoy_6:
# 173 "data/maps/Bakery/scripts.pory"
	msgbox Bakery_LittleBoy_Text_1
# 174 "data/maps/Bakery/scripts.pory"
	speakername Bakery_ViceScript_Text_1, PORTRAIT_AMELIA_SERIOUSLY
# 175 "data/maps/Bakery/scripts.pory"
	msgbox Bakery_LittleBoy_Text_2, MSGBOX_AUTOCLOSE
	goto Bakery_LittleBoy_5


Bakery_LittleGirl::
# 186 "data/maps/Bakery/scripts.pory"
	lock
# 187 "data/maps/Bakery/scripts.pory"
	faceplayer
# 188 "data/maps/Bakery/scripts.pory"
	goto_if_set FLAG_TEMP_11, Bakery_LittleGirl_2
# 194 "data/maps/Bakery/scripts.pory"
	speakername Bakery_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_0
Bakery_LittleGirl_1:
# 196 "data/maps/Bakery/scripts.pory"
	goto_if_set FLAG_GOT_VICE, Bakery_LittleGirl_6
# 203 "data/maps/Bakery/scripts.pory"
	msgbox Bakery_LittleGirl_Text_2, MSGBOX_AUTOCLOSE
Bakery_LittleGirl_5:
# 205 "data/maps/Bakery/scripts.pory"
	release
	return

Bakery_LittleGirl_2:
# 190 "data/maps/Bakery/scripts.pory"
	speakername Bakery_LittleGirl_Text_0
	goto Bakery_LittleGirl_1

Bakery_LittleGirl_6:
# 199 "data/maps/Bakery/scripts.pory"
	msgbox Bakery_LittleGirl_Text_1
	goto Bakery_LittleGirl_5


Bakery_KidsMom::
# 210 "data/maps/Bakery/scripts.pory"
	lock
# 211 "data/maps/Bakery/scripts.pory"
	faceplayer
# 212 "data/maps/Bakery/scripts.pory"
	goto_if_set FLAG_TEMP_11, Bakery_KidsMom_2
# 229 "data/maps/Bakery/scripts.pory"
	speakername Bakery_ViceScript_Text_1, PORTRAIT_AMELIA_NEUTRAL
# 230 "data/maps/Bakery/scripts.pory"
	msgbox Bakery_KidsMom_Text_7
# 231 "data/maps/Bakery/scripts.pory"
	speakername Bakery_KidsMom_Text_8
# 232 "data/maps/Bakery/scripts.pory"
	msgbox Bakery_KidsMom_Text_9
# 233 "data/maps/Bakery/scripts.pory"
	speakername Bakery_ViceScript_Text_1, PORTRAIT_AMELIA_NEUTRAL
# 234 "data/maps/Bakery/scripts.pory"
	msgbox Bakery_KidsMom_Text_10
# 235 "data/maps/Bakery/scripts.pory"
	speakername Bakery_KidsMom_Text_8
# 236 "data/maps/Bakery/scripts.pory"
	msgbox Bakery_KidsMom_Text_11
# 237 "data/maps/Bakery/scripts.pory"
	speakername Bakery_ViceScript_Text_1, PORTRAIT_AMELIA_SERIOUSLY
# 238 "data/maps/Bakery/scripts.pory"
	msgbox Bakery_KidsMom_Text_12
# 239 "data/maps/Bakery/scripts.pory"
	speakername Bakery_ViceScript_Text_1, PORTRAIT_AMELIA_NEUTRAL
# 240 "data/maps/Bakery/scripts.pory"
	msgbox Bakery_KidsMom_Text_13
# 241 "data/maps/Bakery/scripts.pory"
	speakername Bakery_KidsMom_Text_0
# 242 "data/maps/Bakery/scripts.pory"
	msgbox Bakery_KidsMom_Text_14, MSGBOX_AUTOCLOSE
# 243 "data/maps/Bakery/scripts.pory"
	setflag FLAG_TEMP_11
Bakery_KidsMom_1:
# 245 "data/maps/Bakery/scripts.pory"
	release
	return

Bakery_KidsMom_2:
# 214 "data/maps/Bakery/scripts.pory"
	speakername Bakery_KidsMom_Text_0
# 215 "data/maps/Bakery/scripts.pory"
	msgbox Bakery_KidsMom_Text_1
# 216 "data/maps/Bakery/scripts.pory"
	speakername Bakery_ViceScript_Text_1, PORTRAIT_AMELIA_NEUTRAL
# 217 "data/maps/Bakery/scripts.pory"
	msgbox Bakery_KidsMom_Text_2
# 218 "data/maps/Bakery/scripts.pory"
	speakername Bakery_KidsMom_Text_0
# 219 "data/maps/Bakery/scripts.pory"
	msgbox Bakery_KidsMom_Text_3
# 220 "data/maps/Bakery/scripts.pory"
	speakername Bakery_ViceScript_Text_1, PORTRAIT_AMELIA_SERIOUSLY
# 221 "data/maps/Bakery/scripts.pory"
	msgbox Bakery_KidsMom_Text_4
# 222 "data/maps/Bakery/scripts.pory"
	speakername Bakery_KidsMom_Text_0
# 223 "data/maps/Bakery/scripts.pory"
	msgbox Bakery_KidsMom_Text_5
# 224 "data/maps/Bakery/scripts.pory"
	speakername Bakery_ViceScript_Text_1, PORTRAIT_AMELIA_NEUTRAL
# 225 "data/maps/Bakery/scripts.pory"
	msgbox Bakery_KidsMom_Text_6, MSGBOX_AUTOCLOSE
	goto Bakery_KidsMom_1


Bakery_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_0:
# 27 "data/maps/Bakery/scripts.pory"
	.string "Little girl$"

Bakery_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_1:
# 28 "data/maps/Bakery/scripts.pory"
	.string "What's this Pokémon's name, mommy?$"

Bakery_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_2:
# 30 "data/maps/Bakery/scripts.pory"
	.string "Her mom$"

Bakery_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_3:
# 31 "data/maps/Bakery/scripts.pory"
	.string "That's a Flygon, sweetie. That kind\n"
	.string "doesn't live around here.$"

Bakery_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_4:
# 33 "data/maps/Bakery/scripts.pory"
	.string "Little boy$"

Bakery_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_5:
# 34 "data/maps/Bakery/scripts.pory"
	.string "Where does it live?$"

Bakery_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_6:
# 37 "data/maps/Bakery/scripts.pory"
	.string "Vice$"

Bakery_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_7:
# 38 "data/maps/Bakery/scripts.pory"
	.string "I'm not a jungle gym, little runts.\n"
	.string "If it wasn't raining so hard, I'd be\l"
	.string "far, far away from you.$"

Bakery_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_8:
# 41 "data/maps/Bakery/scripts.pory"
	.string "He made a funny noise!\n"
	.string "Ggnnnrrr!$"

Bakery_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_9:
# 43 "data/maps/Bakery/scripts.pory"
	.string "Sigh…$"

Bakery_ViceScript_Text_0:
# 58 "data/maps/Bakery/scripts.pory"
	.string "Can you tell these kids that I'm\n"
	.string "not a boy? It's starting to get to me.$"

Bakery_ViceScript_Text_1:
# 59 "data/maps/Bakery/scripts.pory"
	.string "Amelia$"

Bakery_ViceScript_Text_2:
# 60 "data/maps/Bakery/scripts.pory"
	.string "No, I don't think I can. They probably\n"
	.string "think I'M a boy…\p"
	.string "Kids just sort of decide.$"

Bakery_ViceScript_Text_3:
# 66 "data/maps/Bakery/scripts.pory"
	.string "What, another one? I'm about to…$"

Bakery_ViceScript_Text_4:
# 68 "data/maps/Bakery/scripts.pory"
	.string "Hey, you're not a kid.$"

Bakery_ViceScript_Text_5:
# 70 "data/maps/Bakery/scripts.pory"
	.string "Vice! Glad I found you. Can you come\n"
	.string "help me find Python?$"

Bakery_ViceScript_Text_6:
# 72 "data/maps/Bakery/scripts.pory"
	.string "Who? And what? And why?\n"
	.string "Why are you talking to me?$"

Bakery_ViceScript_Text_7:
# 74 "data/maps/Bakery/scripts.pory"
	.string "Oh, come on. You're acting stupid too?\n"
	.string "Well, I guess it's nothing new…\p"
	.string "Everyone's memories are fogged up.\n"
	.string "You don't remember me at all?$"

Bakery_ViceScript_Text_8:
# 77 "data/maps/Bakery/scripts.pory"
	.string "I dunno, I think I've seen your face\n"
	.string "before. You're a good trainer, right?$"

Bakery_ViceScript_Text_9:
# 79 "data/maps/Bakery/scripts.pory"
	.string "I'm YOUR trainer. Look, I have your\n"
	.string "Poké Ball right here.$"

Bakery_ViceScript_Text_10:
# 81 "data/maps/Bakery/scripts.pory"
	.string "Okay, but like…I'm busy. I'm waiting\n"
	.string "until the end of the day so the\l"
	.string "baker will give me all the leftovers\l"
	.string "instead of throwing them away.$"

Bakery_ViceScript_Text_11:
# 86 "data/maps/Bakery/scripts.pory"
	.string "Marcel$"

Bakery_ViceScript_Text_12:
# 87 "data/maps/Bakery/scripts.pory"
	.string "You'll come with use if we get you\n"
	.string "a spicy treat, won't you?\l"
	.string "Spicy is your favorite flavor.$"

Bakery_ViceScript_Text_13:
# 89 "data/maps/Bakery/scripts.pory"
	.string "Woah…a spicy treat from a cutie…\n"
	.string "That does sound like a good deal…\p"
	.string "Okay, then! I'll come with you if\n"
	.string "you bring me a spicy bakery treat.\l"
	.string "Otherwise you gotta wait till later.$"

Bakery_ViceScript_Text_14:
# 92 "data/maps/Bakery/scripts.pory"
	.string "It's settled! Come on, Amelia, let's\n"
	.string "ask the baker about special orders.$"

Bakery_ViceScript_Text_15:
# 95 "data/maps/Bakery/scripts.pory"
	.string "Demi-Vee$"

Bakery_ViceScript_Text_16:
# 96 "data/maps/Bakery/scripts.pory"
	.string "Is there anything we could do to\n"
	.string "get you to come with us NOW?$"

Bakery_ViceScript_Text_17:
# 98 "data/maps/Bakery/scripts.pory"
	.string "Hmm…well, the reason I have to wait\n"
	.string "is I don't have any money…\p"
	.string "If you could get me a treat, I'll\n"
	.string "go with you.\p"
	.string "But it has to be a kind that I like!$"

Bakery_ViceScript_Text_18:
# 102 "data/maps/Bakery/scripts.pory"
	.string "Okay, then…sounds like a plan.\n"
	.string "What kind do you like?$"

Bakery_ViceScript_Text_19:
# 104 "data/maps/Bakery/scripts.pory"
	.string "I dunno!$"

Bakery_ViceScript_Text_20:
# 106 "data/maps/Bakery/scripts.pory"
	.string "… … … … …\p"
	.string "Okay, let's just go.$"

Bakery_Cashier_Text_0:
# 132 "data/maps/Bakery/scripts.pory"
	.string "'Scuse me, what's your policy on\n"
	.string "special orders? That Flygon over there\l"
	.string "is mine, but she wants a treat\l"
	.string "before we go.$"

Bakery_Cashier_Text_1:
# 133 "data/maps/Bakery/scripts.pory"
	.string "Cashier$"

Bakery_Cashier_Text_2:
# 134 "data/maps/Bakery/scripts.pory"
	.string "Uh, I think we can do it. It\n"
	.string "depends, I guess. What did you want?$"

Bakery_Cashier_Text_3:
# 138 "data/maps/Bakery/scripts.pory"
	.string "Something spicy. Can you do spicy?$"

Bakery_Cashier_Text_4:
# 140 "data/maps/Bakery/scripts.pory"
	.string "I'm not sure. Lemme ask the boss.$"

Bakery_Cashier_Text_5:
# 144 "data/maps/Bakery/scripts.pory"
	.string "We don't have anything on hand.\n"
	.string "If you're committed enough to bring\l"
	.string "your own spicy berries, we could\l"
	.string "make something out of them.$"

Bakery_Cashier_Text_6:
# 150 "data/maps/Bakery/scripts.pory"
	.string "…Um, good question…$"

Bakery_Cashier_Text_7:
# 152 "data/maps/Bakery/scripts.pory"
	.string "… … … … …\n"
	.string "Well, we need something to work from.\l"
	.string "Could you figure out what flavor\l"
	.string "it likes, at least?$"

Bakery_LittleBoy_Text_0:
# 164 "data/maps/Bakery/scripts.pory"
	.string "Louis$"

Bakery_LittleBoy_Text_1:
# 173 "data/maps/Bakery/scripts.pory"
	.string "How do you talk to Pokémon?$"

Bakery_LittleBoy_Text_2:
# 175 "data/maps/Bakery/scripts.pory"
	.string "I learned it at the school of\n"
	.string "hard knocks. You don't wanna go there…$"

Bakery_LittleBoy_Text_3:
# 179 "data/maps/Bakery/scripts.pory"
	.string "Go away! My Fygon!$"

Bakery_LittleGirl_Text_0:
# 190 "data/maps/Bakery/scripts.pory"
	.string "Leah$"

Bakery_LittleGirl_Text_1:
# 199 "data/maps/Bakery/scripts.pory"
	.string "Donut!$"

Bakery_LittleGirl_Text_2:
# 203 "data/maps/Bakery/scripts.pory"
	.string "Can he take off his glasses?$"

Bakery_KidsMom_Text_0:
# 214 "data/maps/Bakery/scripts.pory"
	.string "Lisa$"

Bakery_KidsMom_Text_1:
# 215 "data/maps/Bakery/scripts.pory"
	.string "Do you have any kids, Amelia?$"

Bakery_KidsMom_Text_2:
# 217 "data/maps/Bakery/scripts.pory"
	.string "Oh, no. My Pokémon are like my kids.$"

Bakery_KidsMom_Text_3:
# 219 "data/maps/Bakery/scripts.pory"
	.string "Ah, you're one of those…$"

Bakery_KidsMom_Text_4:
# 221 "data/maps/Bakery/scripts.pory"
	.string "My circumstances are a bit…abnormal,\n"
	.string "to be fair…$"

Bakery_KidsMom_Text_5:
# 223 "data/maps/Bakery/scripts.pory"
	.string "Sorry, sorry! I didn't mean it like\n"
	.string "that! It's all alright.$"

Bakery_KidsMom_Text_6:
# 225 "data/maps/Bakery/scripts.pory"
	.string "Eh…whatever.$"

Bakery_KidsMom_Text_7:
# 230 "data/maps/Bakery/scripts.pory"
	.string "I hope I don't ruin your day by\n"
	.string "taking back my Flygon.$"

Bakery_KidsMom_Text_8:
# 231 "data/maps/Bakery/scripts.pory"
	.string "Kids' mom$"

Bakery_KidsMom_Text_9:
# 232 "data/maps/Bakery/scripts.pory"
	.string "Oh, the kids will be fine. Maybe\n"
	.string "it'll get them to actually eat.$"

Bakery_KidsMom_Text_10:
# 234 "data/maps/Bakery/scripts.pory"
	.string "Do you have any Pokémon of your own?$"

Bakery_KidsMom_Text_11:
# 236 "data/maps/Bakery/scripts.pory"
	.string "Not yet. When they're a little older,\n"
	.string "I'll get them each a Keesh.$"

Bakery_KidsMom_Text_12:
# 238 "data/maps/Bakery/scripts.pory"
	.string "(A…quiche?)$"

Bakery_KidsMom_Text_13:
# 240 "data/maps/Bakery/scripts.pory"
	.string "Er, that's nice. When they're old\n"
	.string "enough to take responsibility, right?$"

Bakery_KidsMom_Text_14:
# 242 "data/maps/Bakery/scripts.pory"
	.string "Of course!\n"
	.string "By the way, I'm Lisa. And the kids\l"
	.string "are Louis and Leah.$"
