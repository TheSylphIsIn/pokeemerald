Bakery_MapScripts::
# 10 "data/maps/Bakery/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Bakery_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 21 "data/maps/Bakery/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Bakery_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Bakery_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 12 "data/maps/Bakery/scripts.pory"
	goto_if_set FLAG_GOT_VICE, Bakery_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

Bakery_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 14 "data/maps/Bakery/scripts.pory"
	setobjectxyperm 6, 16, 13
# 15 "data/maps/Bakery/scripts.pory"
	setobjectmovementtype 6, MOVEMENT_TYPE_FACE_DOWN
# 16 "data/maps/Bakery/scripts.pory"
	setobjectxyperm 7, 15, 14
# 17 "data/maps/Bakery/scripts.pory"
	setobjectmovementtype 7, MOVEMENT_TYPE_FACE_RIGHT
# 18 "data/maps/Bakery/scripts.pory"
	setobjectmovementtype 2, MOVEMENT_TYPE_FACE_UP
	return

Bakery_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 22 "data/maps/Bakery/scripts.pory"
	map_script_2 VAR_MAIN_GAME_STATE, 5, Bakery_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0
	.2byte 0

Bakery_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0:
# 24 "data/maps/Bakery/scripts.pory"
	delay 120
# 25 "data/maps/Bakery/scripts.pory"
	special SpawnCameraObject
# 26 "data/maps/Bakery/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Bakery_Movement_CameraScrollToVice
# 27 "data/maps/Bakery/scripts.pory"
	waitmovement 0
# 28 "data/maps/Bakery/scripts.pory"
	delay 16
# 29 "data/maps/Bakery/scripts.pory"
	applymovement 7, Common_Movement_WalkInPlaceUp
# 30 "data/maps/Bakery/scripts.pory"
	speakername Bakery_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_0
# 31 "data/maps/Bakery/scripts.pory"
	msgbox Bakery_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_1
# 32 "data/maps/Bakery/scripts.pory"
	applymovement 5, Common_Movement_WalkInPlaceDown
# 33 "data/maps/Bakery/scripts.pory"
	speakername Bakery_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_2
# 34 "data/maps/Bakery/scripts.pory"
	msgbox Bakery_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_3
# 35 "data/maps/Bakery/scripts.pory"
	applymovement 6, Common_Movement_WalkInPlaceLeft
# 36 "data/maps/Bakery/scripts.pory"
	speakername Bakery_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_4
# 37 "data/maps/Bakery/scripts.pory"
	msgbox Bakery_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_5
# 38 "data/maps/Bakery/scripts.pory"
	turnobject 1, DIR_SOUTH
# 39 "data/maps/Bakery/scripts.pory"
	playmoncry SPECIES_FLYGON, CRY_MODE_NORMAL
# 40 "data/maps/Bakery/scripts.pory"
	speakername Bakery_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_6, PORTRAIT_FLYGON_ANNOYED
# 41 "data/maps/Bakery/scripts.pory"
	msgbox Bakery_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_7
# 42 "data/maps/Bakery/scripts.pory"
	applymovement 7, Common_Movement_WalkInPlaceUp
# 43 "data/maps/Bakery/scripts.pory"
	speakername Bakery_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_0
# 44 "data/maps/Bakery/scripts.pory"
	msgbox Bakery_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_8
# 45 "data/maps/Bakery/scripts.pory"
	speakername Bakery_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_6, PORTRAIT_FLYGON_ANNOYED
# 46 "data/maps/Bakery/scripts.pory"
	msgbox Bakery_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_9, MSGBOX_AUTOCLOSE
# 47 "data/maps/Bakery/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Bakery_Movement_CameraScrollBack
# 48 "data/maps/Bakery/scripts.pory"
	waitmovement 0
# 49 "data/maps/Bakery/scripts.pory"
	special RemoveCameraObject
# 50 "data/maps/Bakery/scripts.pory"
	setvar VAR_MAIN_GAME_STATE, 6
	return


Bakery_ViceScript::
# 57 "data/maps/Bakery/scripts.pory"
	lock
# 58 "data/maps/Bakery/scripts.pory"
	goto_if_set FLAG_TREES_CLEARED, Bakery_ViceScript_2
# 67 "data/maps/Bakery/scripts.pory"
	faceplayer
# 68 "data/maps/Bakery/scripts.pory"
	speakername Bakery_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_6, PORTRAIT_FLYGON_ANNOYED
# 69 "data/maps/Bakery/scripts.pory"
	msgbox Bakery_ViceScript_Text_3
# 70 "data/maps/Bakery/scripts.pory"
	speakername Bakery_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_6, PORTRAIT_FLYGON_NEUTRAL
# 71 "data/maps/Bakery/scripts.pory"
	msgbox Bakery_ViceScript_Text_4
# 72 "data/maps/Bakery/scripts.pory"
	speakername Bakery_ViceScript_Text_1, PORTRAIT_AMELIA_NEUTRAL
# 73 "data/maps/Bakery/scripts.pory"
	msgbox Bakery_ViceScript_Text_5
# 74 "data/maps/Bakery/scripts.pory"
	speakername Bakery_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_6, PORTRAIT_FLYGON_NEUTRAL
# 75 "data/maps/Bakery/scripts.pory"
	msgbox Bakery_ViceScript_Text_6
# 76 "data/maps/Bakery/scripts.pory"
	speakername Bakery_ViceScript_Text_1, PORTRAIT_AMELIA_SERIOUSLY
# 77 "data/maps/Bakery/scripts.pory"
	msgbox Bakery_ViceScript_Text_7
# 79 "data/maps/Bakery/scripts.pory"
	speakername Bakery_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_6, PORTRAIT_FLYGON_NEUTRAL
# 80 "data/maps/Bakery/scripts.pory"
	msgbox Bakery_ViceScript_Text_8
# 81 "data/maps/Bakery/scripts.pory"
	speakername Bakery_ViceScript_Text_1, PORTRAIT_AMELIA_SERIOUSLY
# 82 "data/maps/Bakery/scripts.pory"
	msgbox Bakery_ViceScript_Text_9
# 83 "data/maps/Bakery/scripts.pory"
	speakername Bakery_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_6, PORTRAIT_FLYGON_NEUTRAL
# 84 "data/maps/Bakery/scripts.pory"
	msgbox Bakery_ViceScript_Text_10
# 85 "data/maps/Bakery/scripts.pory"
	special GetLeadMonSpecies
# 86 "data/maps/Bakery/scripts.pory"
	switch VAR_RESULT
# 88 "data/maps/Bakery/scripts.pory"
	case SPECIES_KINGLER, Bakery_ViceScript_7
# 98 "data/maps/Bakery/scripts.pory"
	case SPECIES_EEVEE, Bakery_ViceScript_8
Bakery_ViceScript_5:
# 113 "data/maps/Bakery/scripts.pory"
	setflag FLAG_TREES_CLEARED
Bakery_ViceScript_1:
# 115 "data/maps/Bakery/scripts.pory"
	release
	return

Bakery_ViceScript_2:
# 60 "data/maps/Bakery/scripts.pory"
	speakername Bakery_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_6, PORTRAIT_FLYGON_ANNOYED
# 61 "data/maps/Bakery/scripts.pory"
	msgbox Bakery_ViceScript_Text_0
# 62 "data/maps/Bakery/scripts.pory"
	speakername Bakery_ViceScript_Text_1, PORTRAIT_AMELIA_SERIOUSLY
# 63 "data/maps/Bakery/scripts.pory"
	msgbox Bakery_ViceScript_Text_2, MSGBOX_AUTOCLOSE
	goto Bakery_ViceScript_1

Bakery_ViceScript_7:
# 89 "data/maps/Bakery/scripts.pory"
	speakername Bakery_ViceScript_Text_11, PORTRAIT_KINGLER_LAUGH
# 90 "data/maps/Bakery/scripts.pory"
	msgbox Bakery_ViceScript_Text_12
# 91 "data/maps/Bakery/scripts.pory"
	speakername Bakery_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_6, PORTRAIT_FLYGON_NEUTRAL
# 92 "data/maps/Bakery/scripts.pory"
	msgbox Bakery_ViceScript_Text_13
# 94 "data/maps/Bakery/scripts.pory"
	speakername Bakery_ViceScript_Text_11, PORTRAIT_KINGLER_NEUTRAL
# 95 "data/maps/Bakery/scripts.pory"
	msgbox Bakery_ViceScript_Text_14, MSGBOX_AUTOCLOSE
# 96 "data/maps/Bakery/scripts.pory"
	setflag FLAG_KNOW_VICE_FLAVOR
# 97 "data/maps/Bakery/scripts.pory"
	setvar VAR_MAIN_GAME_STATE, 8
	goto Bakery_ViceScript_5

Bakery_ViceScript_8:
# 99 "data/maps/Bakery/scripts.pory"
	speakername Bakery_ViceScript_Text_15, PORTRAIT_DEMIVEE_NEUTRAL
# 100 "data/maps/Bakery/scripts.pory"
	msgbox Bakery_ViceScript_Text_16
# 101 "data/maps/Bakery/scripts.pory"
	speakername Bakery_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_6, PORTRAIT_FLYGON_NEUTRAL
# 102 "data/maps/Bakery/scripts.pory"
	msgbox Bakery_ViceScript_Text_17
# 105 "data/maps/Bakery/scripts.pory"
	speakername Bakery_ViceScript_Text_15, PORTRAIT_DEMIVEE_NEUTRAL
# 106 "data/maps/Bakery/scripts.pory"
	msgbox Bakery_ViceScript_Text_18
# 107 "data/maps/Bakery/scripts.pory"
	speakername Bakery_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_6, PORTRAIT_FLYGON_NEUTRAL
# 108 "data/maps/Bakery/scripts.pory"
	msgbox Bakery_ViceScript_Text_19
# 109 "data/maps/Bakery/scripts.pory"
	speakername Bakery_ViceScript_Text_15, PORTRAIT_DEMIVEE_ANNOYED
# 110 "data/maps/Bakery/scripts.pory"
	msgbox Bakery_ViceScript_Text_20, MSGBOX_AUTOCLOSE
# 111 "data/maps/Bakery/scripts.pory"
	setvar VAR_MAIN_GAME_STATE, 7
	goto Bakery_ViceScript_5


# 118 "data/maps/Bakery/scripts.pory"
Bakery_Movement_CameraScrollToVice:
# 120 "data/maps/Bakery/scripts.pory"
	walk_slow_diag_northeast
# 120 "data/maps/Bakery/scripts.pory"
	walk_slow_diag_northeast
# 120 "data/maps/Bakery/scripts.pory"
	walk_slow_diag_northeast
# 120 "data/maps/Bakery/scripts.pory"
	walk_slow_diag_northeast
# 120 "data/maps/Bakery/scripts.pory"
	walk_slow_diag_northeast
# 120 "data/maps/Bakery/scripts.pory"
	walk_slow_diag_northeast
	step_end

# 123 "data/maps/Bakery/scripts.pory"
Bakery_Movement_CameraScrollBack:
# 125 "data/maps/Bakery/scripts.pory"
	walk_slow_diag_southwest
# 125 "data/maps/Bakery/scripts.pory"
	walk_slow_diag_southwest
# 125 "data/maps/Bakery/scripts.pory"
	walk_slow_diag_southwest
# 125 "data/maps/Bakery/scripts.pory"
	walk_slow_diag_southwest
# 125 "data/maps/Bakery/scripts.pory"
	walk_slow_diag_southwest
# 125 "data/maps/Bakery/scripts.pory"
	walk_slow_diag_southwest
	step_end

Bakery_Baker::
# 130 "data/maps/Bakery/scripts.pory"
	msgbox Bakery_Baker_Text_0, MSGBOX_AUTOCLOSE
	return


Bakery_Cashier::
# 137 "data/maps/Bakery/scripts.pory"
	lock
# 138 "data/maps/Bakery/scripts.pory"
	faceplayer
# 139 "data/maps/Bakery/scripts.pory"
	goto_if_set FLAG_TREES_CLEARED, Bakery_Cashier_6
Bakery_Cashier_5:
# 188 "data/maps/Bakery/scripts.pory"
	goto_if_set FLAG_GOT_VICE, Bakery_Cashier_3
# 198 "data/maps/Bakery/scripts.pory"
	speakername Bakery_Cashier_Text_1
# 199 "data/maps/Bakery/scripts.pory"
	msgbox Bakery_Cashier_Text_12
Bakery_Cashier_1:
# 201 "data/maps/Bakery/scripts.pory"
	release
	return

Bakery_Cashier_2:
# 141 "data/maps/Bakery/scripts.pory"
	speakername Bakery_ViceScript_Text_1, PORTRAIT_AMELIA_NEUTRAL
# 142 "data/maps/Bakery/scripts.pory"
	msgbox Bakery_Cashier_Text_0
# 143 "data/maps/Bakery/scripts.pory"
	speakername Bakery_Cashier_Text_1
# 144 "data/maps/Bakery/scripts.pory"
	msgbox Bakery_Cashier_Text_2
# 145 "data/maps/Bakery/scripts.pory"
	goto_if_set FLAG_KNOW_VICE_FLAVOR, Bakery_Cashier_9
# 182 "data/maps/Bakery/scripts.pory"
	speakername Bakery_ViceScript_Text_1, PORTRAIT_AMELIA_SERIOUSLY
# 183 "data/maps/Bakery/scripts.pory"
	msgbox Bakery_Cashier_Text_8
# 184 "data/maps/Bakery/scripts.pory"
	speakername Bakery_Cashier_Text_1
# 185 "data/maps/Bakery/scripts.pory"
	msgbox Bakery_Cashier_Text_9, MSGBOX_AUTOCLOSE
	goto Bakery_Cashier_1

Bakery_Cashier_3:
# 190 "data/maps/Bakery/scripts.pory"
	speakername Bakery_Cashier_Text_1
# 191 "data/maps/Bakery/scripts.pory"
	msgbox Bakery_Cashier_Text_10
# 193 "data/maps/Bakery/scripts.pory"
	speakername Bakery_ViceScript_Text_1, PORTRAIT_AMELIA_NEUTRAL
# 194 "data/maps/Bakery/scripts.pory"
	msgbox Bakery_Cashier_Text_11
	goto Bakery_Cashier_1

Bakery_Cashier_6:
# 139 "data/maps/Bakery/scripts.pory"
	goto_if_unset FLAG_GOT_VICE, Bakery_Cashier_2
	goto Bakery_Cashier_5

Bakery_Cashier_9:
# 147 "data/maps/Bakery/scripts.pory"
	speakername Bakery_ViceScript_Text_1, PORTRAIT_AMELIA_NEUTRAL
# 148 "data/maps/Bakery/scripts.pory"
	msgbox Bakery_Cashier_Text_3
# 149 "data/maps/Bakery/scripts.pory"
	speakername Bakery_Cashier_Text_1
# 150 "data/maps/Bakery/scripts.pory"
	msgbox Bakery_Cashier_Text_4, MSGBOX_AUTOCLOSE
# 151 "data/maps/Bakery/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_WalkInPlaceUp
# 152 "data/maps/Bakery/scripts.pory"
	waitmovement 0
# 153 "data/maps/Bakery/scripts.pory"
	delay 16
# 154 "data/maps/Bakery/scripts.pory"
	applymovement 9, Common_Movement_WalkInPlaceDown
# 155 "data/maps/Bakery/scripts.pory"
	waitmovement 0
# 156 "data/maps/Bakery/scripts.pory"
	applymovement 9, Common_Movement_WalkInPlaceDown
# 157 "data/maps/Bakery/scripts.pory"
	waitmovement 0
# 158 "data/maps/Bakery/scripts.pory"
	delay 32
# 159 "data/maps/Bakery/scripts.pory"
	faceplayer
# 160 "data/maps/Bakery/scripts.pory"
	speakername Bakery_Cashier_Text_1
# 161 "data/maps/Bakery/scripts.pory"
	msgbox Bakery_Cashier_Text_5
# 162 "data/maps/Bakery/scripts.pory"
	checkitem ITEM_SPELON_BERRY, 3
# 163 "data/maps/Bakery/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Bakery_Cashier_12
# 172 "data/maps/Bakery/scripts.pory"
	msgbox Bakery_Cashier_Text_7
# 174 "data/maps/Bakery/scripts.pory"
	compare VAR_MAIN_GAME_STATE, 9
	goto_if_lt Bakery_Cashier_15
	goto Bakery_Cashier_1

Bakery_Cashier_12:
# 165 "data/maps/Bakery/scripts.pory"
	msgbox Bakery_Cashier_Text_6, MSGBOX_AUTOCLOSE
# 166 "data/maps/Bakery/scripts.pory"
	removeitem ITEM_SPELON_BERRY, 3
# 167 "data/maps/Bakery/scripts.pory"
	fadescreen FADE_TO_BLACK
# 168 "data/maps/Bakery/scripts.pory"
	goto Bakery_ViceRecruitCutscene
	goto Bakery_Cashier_1

Bakery_Cashier_15:
# 176 "data/maps/Bakery/scripts.pory"
	setvar VAR_MAIN_GAME_STATE, 9
	goto Bakery_Cashier_1


Bakery_ViceRecruitCutscene::
# 206 "data/maps/Bakery/scripts.pory"
	setmetatile 10, 13, 0x2AF, FALSE
# 207 "data/maps/Bakery/scripts.pory"
	setmetatile 10, 14, 0x2B7, FALSE
# 208 "data/maps/Bakery/scripts.pory"
	setobjectxy OBJ_EVENT_ID_PLAYER, 12, 13
# 209 "data/maps/Bakery/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_WEST
# 210 "data/maps/Bakery/scripts.pory"
	setobjectxy OBJ_EVENT_ID_FOLLOWER, 13, 14
# 211 "data/maps/Bakery/scripts.pory"
	turnobject OBJ_EVENT_ID_FOLLOWER, DIR_NORTH
# 212 "data/maps/Bakery/scripts.pory"
	setobjectxyperm 9, 10, 13
# 213 "data/maps/Bakery/scripts.pory"
	setobjectmovementtype 9, MOVEMENT_TYPE_FACE_DOWN
# 214 "data/maps/Bakery/scripts.pory"
	removeobject 9
# 215 "data/maps/Bakery/scripts.pory"
	addobject 9
# 216 "data/maps/Bakery/scripts.pory"
	setvar VAR_0x8000, 12
# 217 "data/maps/Bakery/scripts.pory"
	setvar VAR_0x8001, 13
# 218 "data/maps/Bakery/scripts.pory"
	special TeleportCamera
# 219 "data/maps/Bakery/scripts.pory"
	delay 32
# 220 "data/maps/Bakery/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 221 "data/maps/Bakery/scripts.pory"
	delay 64
# 222 "data/maps/Bakery/scripts.pory"
	speakername Bakery_ViceRecruitCutscene_Text_0
# 223 "data/maps/Bakery/scripts.pory"
	msgbox Bakery_ViceRecruitCutscene_Text_1, MSGBOX_AUTOCLOSE
# 225 "data/maps/Bakery/scripts.pory"
	delay 32
# 226 "data/maps/Bakery/scripts.pory"
	special SpawnCameraObject
# 227 "data/maps/Bakery/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Bakery_Movement_CameraMoveLeft
# 228 "data/maps/Bakery/scripts.pory"
	waitmovement 0
# 229 "data/maps/Bakery/scripts.pory"
	special RemoveCameraObject
# 230 "data/maps/Bakery/scripts.pory"
	applymovement 2, Bakery_Movement_DubsnakeGoInFire
# 231 "data/maps/Bakery/scripts.pory"
	waitmovement 0
# 232 "data/maps/Bakery/scripts.pory"
	playse SE_M_SELF_DESTRUCT
# 233 "data/maps/Bakery/scripts.pory"
	fadescreen FADE_TO_WHITE
# 234 "data/maps/Bakery/scripts.pory"
	applymovement 9, Common_Movement_WalkUp
# 235 "data/maps/Bakery/scripts.pory"
	playse SE_M_SELF_DESTRUCT
# 236 "data/maps/Bakery/scripts.pory"
	delay 8
# 237 "data/maps/Bakery/scripts.pory"
	playse SE_M_SELF_DESTRUCT
# 238 "data/maps/Bakery/scripts.pory"
	delay 8
# 239 "data/maps/Bakery/scripts.pory"
	playse SE_M_SELF_DESTRUCT
# 240 "data/maps/Bakery/scripts.pory"
	delay 8
# 241 "data/maps/Bakery/scripts.pory"
	playse SE_M_EXPLOSION
# 242 "data/maps/Bakery/scripts.pory"
	waitse
# 243 "data/maps/Bakery/scripts.pory"
	delay 60
# 244 "data/maps/Bakery/scripts.pory"
	turnobject 2, DIR_NORTH
# 245 "data/maps/Bakery/scripts.pory"
	setobjectxy OBJ_EVENT_ID_FOLLOWER, 9, 16
# 246 "data/maps/Bakery/scripts.pory"
	turnobject OBJ_EVENT_ID_FOLLOWER, DIR_NORTH
# 247 "data/maps/Bakery/scripts.pory"
	setobjectxy OBJ_EVENT_ID_PLAYER, 10, 16
# 248 "data/maps/Bakery/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 249 "data/maps/Bakery/scripts.pory"
	setmetatile 10, 13, 0x2AE, FALSE
# 250 "data/maps/Bakery/scripts.pory"
	setmetatile 10, 14, 0x2B6, FALSE
# 251 "data/maps/Bakery/scripts.pory"
	special DrawWholeMapView
# 252 "data/maps/Bakery/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 253 "data/maps/Bakery/scripts.pory"
	delay 16
# 254 "data/maps/Bakery/scripts.pory"
	playmoncry SPECIES_HYDROIL, CRY_MODE_NORMAL
# 255 "data/maps/Bakery/scripts.pory"
	applymovement 2, Bakery_Movement_HydroilRoar
# 256 "data/maps/Bakery/scripts.pory"
	waitmovement 0
# 257 "data/maps/Bakery/scripts.pory"
	speakername Bakery_ViceScript_Text_1, PORTRAIT_AMELIA_SHOCK
# 258 "data/maps/Bakery/scripts.pory"
	msgbox Bakery_ViceRecruitCutscene_Text_2, MSGBOX_AUTOCLOSE
# 259 "data/maps/Bakery/scripts.pory"
	playse SE_PIN
# 260 "data/maps/Bakery/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 261 "data/maps/Bakery/scripts.pory"
	delay 48
# 262 "data/maps/Bakery/scripts.pory"
	applymovement 1, Bakery_Movement_ViceSwoopIn
# 263 "data/maps/Bakery/scripts.pory"
	givemon SPECIES_FLYGON, 50, ITEM_DRAGON_FANG, ITEM_POKE_BALL, NATURE_BRAVE, 0, MON_FEMALE, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_OUTRAGE, MOVE_DRAGON_CLAW, MOVE_BONE_CLUB, MOVE_AERIAL_ACE, FALSE, FALSE, TYPE_WATER
# 264 "data/maps/Bakery/scripts.pory"
	setpartymemberinfo 2
# 265 "data/maps/Bakery/scripts.pory"
	speakername Bakery_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_6, PORTRAIT_FLYGON_NEUTRAL
# 266 "data/maps/Bakery/scripts.pory"
	msgbox Bakery_ViceRecruitCutscene_Text_3, MSGBOX_AUTOCLOSE
# 267 "data/maps/Bakery/scripts.pory"
	playmoncry SPECIES_HYDROIL, CRY_MODE_NORMAL
# 268 "data/maps/Bakery/scripts.pory"
	applymovement 2, Bakery_Movement_HydroilRoar
# 269 "data/maps/Bakery/scripts.pory"
	waitmovement 0
# 270 "data/maps/Bakery/scripts.pory"
	delay 32
# 271 "data/maps/Bakery/scripts.pory"
	createmon 1, 0, SPECIES_HYDROIL, 52, ITEM_NONE, 0, NATURE_RASH, 0, MON_MALE, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_FLAME_BURST, MOVE_WATER_PULSE, MOVE_DRAGON_PULSE, MOVE_GLARE, FALSE, 0, TYPE_WATER
# 272 "data/maps/Bakery/scripts.pory"
	dowildbattle
# 273 "data/maps/Bakery/scripts.pory"
	delay 64
# 274 "data/maps/Bakery/scripts.pory"
	speakername Bakery_ViceRecruitCutscene_Text_4, PORTRAIT_HYDROIL_WATER
# 275 "data/maps/Bakery/scripts.pory"
	msgbox Bakery_ViceRecruitCutscene_Text_5
# 276 "data/maps/Bakery/scripts.pory"
	speakername Bakery_ViceRecruitCutscene_Text_4, PORTRAIT_HYDROIL_FIRE
# 277 "data/maps/Bakery/scripts.pory"
	msgbox Bakery_ViceRecruitCutscene_Text_6
# 278 "data/maps/Bakery/scripts.pory"
	applymovement 1, Common_Movement_FaceDown
# 279 "data/maps/Bakery/scripts.pory"
	waitmovement 0
# 280 "data/maps/Bakery/scripts.pory"
	speakername Bakery_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_6, PORTRAIT_FLYGON_NEUTRAL
# 281 "data/maps/Bakery/scripts.pory"
	msgbox Bakery_ViceRecruitCutscene_Text_7
# 282 "data/maps/Bakery/scripts.pory"
	speakername Bakery_ViceScript_Text_1, PORTRAIT_AMELIA_NEUTRAL
# 283 "data/maps/Bakery/scripts.pory"
	msgbox Bakery_ViceRecruitCutscene_Text_8
# 284 "data/maps/Bakery/scripts.pory"
	speakername Bakery_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_6, PORTRAIT_FLYGON_NEUTRAL
# 285 "data/maps/Bakery/scripts.pory"
	msgbox Bakery_ViceRecruitCutscene_Text_9
# 286 "data/maps/Bakery/scripts.pory"
	speakername Bakery_ViceScript_Text_1, PORTRAIT_AMELIA_SHOCK
# 287 "data/maps/Bakery/scripts.pory"
	msgbox Bakery_ViceRecruitCutscene_Text_10
# 288 "data/maps/Bakery/scripts.pory"
	speakername Bakery_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_6, PORTRAIT_FLYGON_NEUTRAL
# 289 "data/maps/Bakery/scripts.pory"
	msgbox Bakery_ViceRecruitCutscene_Text_11
# 290 "data/maps/Bakery/scripts.pory"
	speakername Bakery_ViceScript_Text_1, PORTRAIT_AMELIA_SERIOUSLY
# 291 "data/maps/Bakery/scripts.pory"
	msgbox Bakery_ViceRecruitCutscene_Text_12
# 292 "data/maps/Bakery/scripts.pory"
	goto_if_set FLAG_GOT_BRADLEY, Bakery_ViceRecruitCutscene_2
Bakery_ViceRecruitCutscene_1:
# 305 "data/maps/Bakery/scripts.pory"
	closemessage
# 306 "data/maps/Bakery/scripts.pory"
	removeitem ITEM_POKE_BALL, 1
# 307 "data/maps/Bakery/scripts.pory"
	delay 32
# 308 "data/maps/Bakery/scripts.pory"
	applymovement 1, EnterPokeballMovement
# 309 "data/maps/Bakery/scripts.pory"
	waitmovement 0
# 310 "data/maps/Bakery/scripts.pory"
	removeobject 1
# 311 "data/maps/Bakery/scripts.pory"
	delay 16
# 312 "data/maps/Bakery/scripts.pory"
	playfanfare MUS_EVOLVED
# 313 "data/maps/Bakery/scripts.pory"
	message Bakery_ViceRecruitCutscene_Text_16
# 314 "data/maps/Bakery/scripts.pory"
	waitmessage
# 315 "data/maps/Bakery/scripts.pory"
	waitfanfare
# 316 "data/maps/Bakery/scripts.pory"
	waitbuttonpress
# 317 "data/maps/Bakery/scripts.pory"
	closemessage
# 318 "data/maps/Bakery/scripts.pory"
	fadescreen FADE_TO_BLACK
# 319 "data/maps/Bakery/scripts.pory"
	setobjectxy 2, 9, 12
# 320 "data/maps/Bakery/scripts.pory"
	setobjectxyperm 9, 6, 13
# 321 "data/maps/Bakery/scripts.pory"
	setobjectmovementtype 9, MOVEMENT_TYPE_WANDER_UP_AND_DOWN
# 322 "data/maps/Bakery/scripts.pory"
	removeobject 9
# 323 "data/maps/Bakery/scripts.pory"
	addobject 9
# 324 "data/maps/Bakery/scripts.pory"
	setvar VAR_MAIN_GAME_STATE, 15
# 325 "data/maps/Bakery/scripts.pory"
	setmetatile 10, 13, 0x20C, FALSE
# 326 "data/maps/Bakery/scripts.pory"
	setmetatile 10, 14, 0x20C, FALSE
# 327 "data/maps/Bakery/scripts.pory"
	setvar VAR_0x8000, 10
# 328 "data/maps/Bakery/scripts.pory"
	setvar VAR_0x8001, 16
# 329 "data/maps/Bakery/scripts.pory"
	special TeleportCamera
# 330 "data/maps/Bakery/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 331 "data/maps/Bakery/scripts.pory"
	release
	return

Bakery_ViceRecruitCutscene_2:
# 294 "data/maps/Bakery/scripts.pory"
	speakername Bakery_ViceScript_Text_1, PORTRAIT_AMELIA_NEUTRAL
# 295 "data/maps/Bakery/scripts.pory"
	msgbox Bakery_ViceRecruitCutscene_Text_13
# 296 "data/maps/Bakery/scripts.pory"
	speakername Bakery_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_6, PORTRAIT_FLYGON_NEUTRAL
# 297 "data/maps/Bakery/scripts.pory"
	msgbox Bakery_ViceRecruitCutscene_Text_14
# 299 "data/maps/Bakery/scripts.pory"
	speakername Bakery_ViceScript_Text_1, PORTRAIT_AMELIA_NEUTRAL
# 300 "data/maps/Bakery/scripts.pory"
	msgbox Bakery_ViceRecruitCutscene_Text_15
# 303 "data/maps/Bakery/scripts.pory"
	setflag FLAG_CAN_FIND_PYTHON
	goto Bakery_ViceRecruitCutscene_1


# 334 "data/maps/Bakery/scripts.pory"
Bakery_Movement_ViceSwoopIn:
# 336 "data/maps/Bakery/scripts.pory"
	walk_fast_left
# 336 "data/maps/Bakery/scripts.pory"
	walk_fast_left
# 336 "data/maps/Bakery/scripts.pory"
	walk_fast_left
# 337 "data/maps/Bakery/scripts.pory"
	walk_fast_down
# 337 "data/maps/Bakery/scripts.pory"
	walk_fast_down
# 337 "data/maps/Bakery/scripts.pory"
	walk_fast_down
# 338 "data/maps/Bakery/scripts.pory"
	walk_fast_left
# 338 "data/maps/Bakery/scripts.pory"
	walk_fast_left
# 338 "data/maps/Bakery/scripts.pory"
	walk_fast_left
# 339 "data/maps/Bakery/scripts.pory"
	face_up
	step_end

# 342 "data/maps/Bakery/scripts.pory"
Bakery_Movement_HydroilRoar:
# 344 "data/maps/Bakery/scripts.pory"
	walk_in_place_up
# 344 "data/maps/Bakery/scripts.pory"
	walk_in_place_up
# 344 "data/maps/Bakery/scripts.pory"
	walk_in_place_up
# 344 "data/maps/Bakery/scripts.pory"
	walk_in_place_up
	step_end

# 346 "data/maps/Bakery/scripts.pory"
Bakery_Movement_CameraMoveLeft:
# 348 "data/maps/Bakery/scripts.pory"
	walk_slow_left
# 349 "data/maps/Bakery/scripts.pory"
	walk_slow_left
# 350 "data/maps/Bakery/scripts.pory"
	walk_slow_diag_southwest
	step_end

# 353 "data/maps/Bakery/scripts.pory"
Bakery_Movement_DubsnakeGoInFire:
# 355 "data/maps/Bakery/scripts.pory"
	delay_16
# 356 "data/maps/Bakery/scripts.pory"
	walk_slow_down
# 357 "data/maps/Bakery/scripts.pory"
	delay_16
# 357 "data/maps/Bakery/scripts.pory"
	delay_16
# 358 "data/maps/Bakery/scripts.pory"
	walk_slow_down
# 359 "data/maps/Bakery/scripts.pory"
	delay_16
# 359 "data/maps/Bakery/scripts.pory"
	delay_16
# 359 "data/maps/Bakery/scripts.pory"
	delay_16
# 359 "data/maps/Bakery/scripts.pory"
	delay_16
# 360 "data/maps/Bakery/scripts.pory"
	walk_in_place_right
# 360 "data/maps/Bakery/scripts.pory"
	walk_in_place_right
	step_end

Bakery_LittleBoy::
# 365 "data/maps/Bakery/scripts.pory"
	lock
# 366 "data/maps/Bakery/scripts.pory"
	faceplayer
# 367 "data/maps/Bakery/scripts.pory"
	goto_if_set FLAG_TEMP_11, Bakery_LittleBoy_2
# 373 "data/maps/Bakery/scripts.pory"
	speakername Bakery_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_4
Bakery_LittleBoy_1:
# 375 "data/maps/Bakery/scripts.pory"
	goto_if_set FLAG_GOT_VICE, Bakery_LittleBoy_6
# 384 "data/maps/Bakery/scripts.pory"
	msgbox Bakery_LittleBoy_Text_3, MSGBOX_AUTOCLOSE
Bakery_LittleBoy_5:
# 386 "data/maps/Bakery/scripts.pory"
	release
	return

Bakery_LittleBoy_2:
# 369 "data/maps/Bakery/scripts.pory"
	speakername Bakery_LittleBoy_Text_0
	goto Bakery_LittleBoy_1

Bakery_LittleBoy_6:
# 378 "data/maps/Bakery/scripts.pory"
	msgbox Bakery_LittleBoy_Text_1
# 379 "data/maps/Bakery/scripts.pory"
	speakername Bakery_ViceScript_Text_1, PORTRAIT_AMELIA_SERIOUSLY
# 380 "data/maps/Bakery/scripts.pory"
	msgbox Bakery_LittleBoy_Text_2, MSGBOX_AUTOCLOSE
	goto Bakery_LittleBoy_5


Bakery_LittleGirl::
# 391 "data/maps/Bakery/scripts.pory"
	lock
# 392 "data/maps/Bakery/scripts.pory"
	faceplayer
# 393 "data/maps/Bakery/scripts.pory"
	goto_if_set FLAG_TEMP_11, Bakery_LittleGirl_2
# 399 "data/maps/Bakery/scripts.pory"
	speakername Bakery_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_0
Bakery_LittleGirl_1:
# 401 "data/maps/Bakery/scripts.pory"
	goto_if_set FLAG_GOT_VICE, Bakery_LittleGirl_6
# 408 "data/maps/Bakery/scripts.pory"
	msgbox Bakery_LittleGirl_Text_2, MSGBOX_AUTOCLOSE
Bakery_LittleGirl_5:
# 410 "data/maps/Bakery/scripts.pory"
	release
	return

Bakery_LittleGirl_2:
# 395 "data/maps/Bakery/scripts.pory"
	speakername Bakery_LittleGirl_Text_0
	goto Bakery_LittleGirl_1

Bakery_LittleGirl_6:
# 404 "data/maps/Bakery/scripts.pory"
	msgbox Bakery_LittleGirl_Text_1
	goto Bakery_LittleGirl_5


Bakery_KidsMom::
# 415 "data/maps/Bakery/scripts.pory"
	lock
# 416 "data/maps/Bakery/scripts.pory"
	faceplayer
# 417 "data/maps/Bakery/scripts.pory"
	goto_if_set FLAG_TEMP_11, Bakery_KidsMom_2
# 434 "data/maps/Bakery/scripts.pory"
	speakername Bakery_ViceScript_Text_1, PORTRAIT_AMELIA_NEUTRAL
# 435 "data/maps/Bakery/scripts.pory"
	msgbox Bakery_KidsMom_Text_7
# 436 "data/maps/Bakery/scripts.pory"
	speakername Bakery_KidsMom_Text_8
# 437 "data/maps/Bakery/scripts.pory"
	msgbox Bakery_KidsMom_Text_9
# 438 "data/maps/Bakery/scripts.pory"
	speakername Bakery_ViceScript_Text_1, PORTRAIT_AMELIA_NEUTRAL
# 439 "data/maps/Bakery/scripts.pory"
	msgbox Bakery_KidsMom_Text_10
# 440 "data/maps/Bakery/scripts.pory"
	speakername Bakery_KidsMom_Text_8
# 441 "data/maps/Bakery/scripts.pory"
	msgbox Bakery_KidsMom_Text_11
# 442 "data/maps/Bakery/scripts.pory"
	speakername Bakery_ViceScript_Text_1, PORTRAIT_AMELIA_SERIOUSLY
# 443 "data/maps/Bakery/scripts.pory"
	msgbox Bakery_KidsMom_Text_12
# 444 "data/maps/Bakery/scripts.pory"
	speakername Bakery_ViceScript_Text_1, PORTRAIT_AMELIA_NEUTRAL
# 445 "data/maps/Bakery/scripts.pory"
	msgbox Bakery_KidsMom_Text_13
# 446 "data/maps/Bakery/scripts.pory"
	speakername Bakery_KidsMom_Text_0
# 447 "data/maps/Bakery/scripts.pory"
	msgbox Bakery_KidsMom_Text_14, MSGBOX_AUTOCLOSE
# 448 "data/maps/Bakery/scripts.pory"
	setflag FLAG_TEMP_11
Bakery_KidsMom_1:
# 450 "data/maps/Bakery/scripts.pory"
	release
	return

Bakery_KidsMom_2:
# 419 "data/maps/Bakery/scripts.pory"
	speakername Bakery_KidsMom_Text_0
# 420 "data/maps/Bakery/scripts.pory"
	msgbox Bakery_KidsMom_Text_1
# 421 "data/maps/Bakery/scripts.pory"
	speakername Bakery_ViceScript_Text_1, PORTRAIT_AMELIA_NEUTRAL
# 422 "data/maps/Bakery/scripts.pory"
	msgbox Bakery_KidsMom_Text_2
# 423 "data/maps/Bakery/scripts.pory"
	speakername Bakery_KidsMom_Text_0
# 424 "data/maps/Bakery/scripts.pory"
	msgbox Bakery_KidsMom_Text_3
# 425 "data/maps/Bakery/scripts.pory"
	speakername Bakery_ViceScript_Text_1, PORTRAIT_AMELIA_SERIOUSLY
# 426 "data/maps/Bakery/scripts.pory"
	msgbox Bakery_KidsMom_Text_4
# 427 "data/maps/Bakery/scripts.pory"
	speakername Bakery_KidsMom_Text_0
# 428 "data/maps/Bakery/scripts.pory"
	msgbox Bakery_KidsMom_Text_5
# 429 "data/maps/Bakery/scripts.pory"
	speakername Bakery_ViceScript_Text_1, PORTRAIT_AMELIA_NEUTRAL
# 430 "data/maps/Bakery/scripts.pory"
	msgbox Bakery_KidsMom_Text_6, MSGBOX_AUTOCLOSE
	goto Bakery_KidsMom_1


Bakery_Sign_Bread::
# 455 "data/maps/Bakery/scripts.pory"
	msgbox Bakery_Sign_Bread_Text_0, MSGBOX_SIGN
	return


Bakery_Sign_Cookies::
# 460 "data/maps/Bakery/scripts.pory"
	msgbox Bakery_Sign_Cookies_Text_0, MSGBOX_SIGN
	return


Bakery_Sign_Pretzels::
# 465 "data/maps/Bakery/scripts.pory"
	msgbox Bakery_Sign_Pretzels_Text_0, MSGBOX_SIGN
	return


Bakery_Sign_Baguettes::
# 470 "data/maps/Bakery/scripts.pory"
	msgbox Bakery_Sign_Baguettes_Text_0, MSGBOX_SIGN
	return


Bakery_Sign_MenuLeft::
# 475 "data/maps/Bakery/scripts.pory"
	msgbox Bakery_Sign_MenuLeft_Text_0, MSGBOX_SIGN
	return


Bakery_Sign_MenuRight::
# 480 "data/maps/Bakery/scripts.pory"
	msgbox Bakery_Sign_MenuRight_Text_0, MSGBOX_SIGN
	return


Bakery_Sign_PantomPicture::
# 485 "data/maps/Bakery/scripts.pory"
	msgbox Bakery_Sign_PantomPicture_Text_0, MSGBOX_SIGN
	return


Bakery_Sign_MountainPicture::
# 490 "data/maps/Bakery/scripts.pory"
	msgbox Bakery_Sign_MountainPicture_Text_0, MSGBOX_SIGN
	return


Bakery_DubsnakeHydroil::
# 495 "data/maps/Bakery/scripts.pory"
	lock
# 496 "data/maps/Bakery/scripts.pory"
	goto_if_set FLAG_GOT_VICE, Bakery_DubsnakeHydroil_2
# 520 "data/maps/Bakery/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 521 "data/maps/Bakery/scripts.pory"
	switch VAR_RESULT
# 523 "data/maps/Bakery/scripts.pory"
	case DIR_EAST, Bakery_DubsnakeHydroil_10
# 526 "data/maps/Bakery/scripts.pory"
	case DIR_WEST, Bakery_DubsnakeHydroil_11
# 529 "data/maps/Bakery/scripts.pory"
	case DIR_NORTH, Bakery_DubsnakeHydroil_12
Bakery_DubsnakeHydroil_1:
# 545 "data/maps/Bakery/scripts.pory"
	release
	return

Bakery_DubsnakeHydroil_2:
# 498 "data/maps/Bakery/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 499 "data/maps/Bakery/scripts.pory"
	switch VAR_RESULT
# 501 "data/maps/Bakery/scripts.pory"
	case DIR_EAST, Bakery_DubsnakeHydroil_6
# 504 "data/maps/Bakery/scripts.pory"
	case DIR_WEST, Bakery_DubsnakeHydroil_7
# 507 "data/maps/Bakery/scripts.pory"
	case DIR_NORTH, Bakery_DubsnakeHydroil_8
	goto Bakery_DubsnakeHydroil_1

Bakery_DubsnakeHydroil_6:
# 502 "data/maps/Bakery/scripts.pory"
	speakername Bakery_ViceRecruitCutscene_Text_4, PORTRAIT_HYDROIL_WATER
# 503 "data/maps/Bakery/scripts.pory"
	msgbox Bakery_DubsnakeHydroil_Text_0
	goto Bakery_DubsnakeHydroil_1

Bakery_DubsnakeHydroil_7:
# 505 "data/maps/Bakery/scripts.pory"
	speakername Bakery_ViceRecruitCutscene_Text_4, PORTRAIT_HYDROIL_FIRE
# 506 "data/maps/Bakery/scripts.pory"
	msgbox Bakery_DubsnakeHydroil_Text_1
	goto Bakery_DubsnakeHydroil_1

Bakery_DubsnakeHydroil_8:
# 508 "data/maps/Bakery/scripts.pory"
	speakername Bakery_ViceRecruitCutscene_Text_4, PORTRAIT_HYDROIL_FIRE
# 509 "data/maps/Bakery/scripts.pory"
	msgbox Bakery_DubsnakeHydroil_Text_2
# 510 "data/maps/Bakery/scripts.pory"
	speakername Bakery_ViceRecruitCutscene_Text_4, PORTRAIT_HYDROIL_WATER
# 511 "data/maps/Bakery/scripts.pory"
	msgbox Bakery_DubsnakeHydroil_Text_3
# 512 "data/maps/Bakery/scripts.pory"
	speakername Bakery_ViceScript_Text_1, PORTRAIT_AMELIA_SERIOUSLY
# 513 "data/maps/Bakery/scripts.pory"
	msgbox Bakery_DubsnakeHydroil_Text_4
# 514 "data/maps/Bakery/scripts.pory"
	speakername Bakery_ViceScript_Text_1, PORTRAIT_AMELIA_NEUTRAL
# 515 "data/maps/Bakery/scripts.pory"
	msgbox Bakery_DubsnakeHydroil_Text_5
	goto Bakery_DubsnakeHydroil_1

Bakery_DubsnakeHydroil_10:
# 524 "data/maps/Bakery/scripts.pory"
	speakername Bakery_DubsnakeHydroil_Text_6, PORTRAIT_DUBSNAKE_ICE
# 525 "data/maps/Bakery/scripts.pory"
	msgbox Bakery_DubsnakeHydroil_Text_7
	goto Bakery_DubsnakeHydroil_1

Bakery_DubsnakeHydroil_11:
# 527 "data/maps/Bakery/scripts.pory"
	speakername Bakery_DubsnakeHydroil_Text_6, PORTRAIT_DUBSNAKE_OIL
# 528 "data/maps/Bakery/scripts.pory"
	msgbox Bakery_DubsnakeHydroil_Text_8
	goto Bakery_DubsnakeHydroil_1

Bakery_DubsnakeHydroil_12:
# 530 "data/maps/Bakery/scripts.pory"
	speakername Bakery_ViceScript_Text_1, PORTRAIT_AMELIA_NEUTRAL
# 531 "data/maps/Bakery/scripts.pory"
	msgbox Bakery_DubsnakeHydroil_Text_9
# 532 "data/maps/Bakery/scripts.pory"
	speakername Bakery_DubsnakeHydroil_Text_6, PORTRAIT_DUBSNAKE_ICE
# 533 "data/maps/Bakery/scripts.pory"
	msgbox Bakery_DubsnakeHydroil_Text_10
# 534 "data/maps/Bakery/scripts.pory"
	speakername Bakery_ViceScript_Text_1, PORTRAIT_AMELIA_NEUTRAL
# 535 "data/maps/Bakery/scripts.pory"
	msgbox Bakery_DubsnakeHydroil_Text_11
# 536 "data/maps/Bakery/scripts.pory"
	speakername Bakery_DubsnakeHydroil_Text_6, PORTRAIT_DUBSNAKE_ICE
# 537 "data/maps/Bakery/scripts.pory"
	msgbox Bakery_DubsnakeHydroil_Text_12
# 538 "data/maps/Bakery/scripts.pory"
	speakername Bakery_DubsnakeHydroil_Text_6, PORTRAIT_DUBSNAKE_OIL
# 539 "data/maps/Bakery/scripts.pory"
	msgbox Bakery_DubsnakeHydroil_Text_12
# 540 "data/maps/Bakery/scripts.pory"
	speakername Bakery_ViceScript_Text_1, PORTRAIT_AMELIA_SMUG
# 541 "data/maps/Bakery/scripts.pory"
	msgbox Bakery_DubsnakeHydroil_Text_13
	goto Bakery_DubsnakeHydroil_1


Bakery_ComputerGuy::
# 550 "data/maps/Bakery/scripts.pory"
	speakername Bakery_ComputerGuy_Text_0
# 551 "data/maps/Bakery/scripts.pory"
	msgbox Bakery_ComputerGuy_Text_1, MSGBOX_NPC
	return


Bakery_LeftGuy::
# 556 "data/maps/Bakery/scripts.pory"
	speakername Bakery_LeftGuy_Text_0
# 557 "data/maps/Bakery/scripts.pory"
	msgbox Bakery_LeftGuy_Text_1, MSGBOX_NPC
# 558 "data/maps/Bakery/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 559 "data/maps/Bakery/scripts.pory"
	waitmovement 0
	return


Bakery_RightGuy::
# 564 "data/maps/Bakery/scripts.pory"
	speakername Bakery_RightGuy_Text_0
# 565 "data/maps/Bakery/scripts.pory"
	msgbox Bakery_RightGuy_Text_1, MSGBOX_AUTOCLOSE
	return


Bakery_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_0:
# 30 "data/maps/Bakery/scripts.pory"
	.string "Little girl$"

Bakery_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_1:
# 31 "data/maps/Bakery/scripts.pory"
	.string "What's this Pokémon's name, mommy?$"

Bakery_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_2:
# 33 "data/maps/Bakery/scripts.pory"
	.string "Her mom$"

Bakery_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_3:
# 34 "data/maps/Bakery/scripts.pory"
	.string "That's a Flygon, sweetie. That kind\n"
	.string "doesn't live around here.$"

Bakery_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_4:
# 36 "data/maps/Bakery/scripts.pory"
	.string "Little boy$"

Bakery_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_5:
# 37 "data/maps/Bakery/scripts.pory"
	.string "Where does it live?$"

Bakery_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_6:
# 40 "data/maps/Bakery/scripts.pory"
	.string "Vice$"

Bakery_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_7:
# 41 "data/maps/Bakery/scripts.pory"
	.string "I'm not a jungle gym, little runts.\n"
	.string "If it wasn't raining so hard, I'd be\l"
	.string "far, far away from you.$"

Bakery_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_8:
# 44 "data/maps/Bakery/scripts.pory"
	.string "He made a funny noise!\n"
	.string "Ggnnnrrr!$"

Bakery_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_9:
# 46 "data/maps/Bakery/scripts.pory"
	.string "Sigh…$"

Bakery_ViceScript_Text_0:
# 61 "data/maps/Bakery/scripts.pory"
	.string "Can you tell these kids that I'm\n"
	.string "not a boy? It's starting to get to me.$"

Bakery_ViceScript_Text_1:
# 62 "data/maps/Bakery/scripts.pory"
	.string "Amelia$"

Bakery_ViceScript_Text_2:
# 63 "data/maps/Bakery/scripts.pory"
	.string "No, I don't think I can. They probably\n"
	.string "think I'M a boy…\p"
	.string "Kids just sort of decide.$"

Bakery_ViceScript_Text_3:
# 69 "data/maps/Bakery/scripts.pory"
	.string "What, another one? I'm about to…$"

Bakery_ViceScript_Text_4:
# 71 "data/maps/Bakery/scripts.pory"
	.string "Hey, you're not a kid.$"

Bakery_ViceScript_Text_5:
# 73 "data/maps/Bakery/scripts.pory"
	.string "Vice! Glad I found you. Can you come\n"
	.string "help me find Python?$"

Bakery_ViceScript_Text_6:
# 75 "data/maps/Bakery/scripts.pory"
	.string "Who? And what? And why?\n"
	.string "Why are you talking to me?$"

Bakery_ViceScript_Text_7:
# 77 "data/maps/Bakery/scripts.pory"
	.string "Oh, come on. You're acting stupid too?\n"
	.string "Well, I guess it's nothing new…\p"
	.string "Everyone's memories are fogged up.\n"
	.string "You don't remember me at all?$"

Bakery_ViceScript_Text_8:
# 80 "data/maps/Bakery/scripts.pory"
	.string "I dunno, I think I've seen your face\n"
	.string "before. You're a good trainer, right?$"

Bakery_ViceScript_Text_9:
# 82 "data/maps/Bakery/scripts.pory"
	.string "I'm YOUR trainer. Look, I have your\n"
	.string "Poké Ball right here.$"

Bakery_ViceScript_Text_10:
# 84 "data/maps/Bakery/scripts.pory"
	.string "Okay, but like…I'm busy. I'm waiting\n"
	.string "until the end of the day so the\l"
	.string "baker will give me all the leftovers\l"
	.string "instead of throwing them away.$"

Bakery_ViceScript_Text_11:
# 89 "data/maps/Bakery/scripts.pory"
	.string "Marcel$"

Bakery_ViceScript_Text_12:
# 90 "data/maps/Bakery/scripts.pory"
	.string "You'll come with use if we get you\n"
	.string "a spicy treat, won't you?\l"
	.string "Spicy is your favorite flavor.$"

Bakery_ViceScript_Text_13:
# 92 "data/maps/Bakery/scripts.pory"
	.string "Woah…a spicy treat from a cutie…\n"
	.string "That does sound like a good deal…\p"
	.string "Okay, then! I'll come with you if\n"
	.string "you bring me a spicy bakery treat.\l"
	.string "Otherwise you gotta wait till later.$"

Bakery_ViceScript_Text_14:
# 95 "data/maps/Bakery/scripts.pory"
	.string "It's settled! Come on, Amelia, let's\n"
	.string "ask the baker about special orders.$"

Bakery_ViceScript_Text_15:
# 99 "data/maps/Bakery/scripts.pory"
	.string "Demi-Vee$"

Bakery_ViceScript_Text_16:
# 100 "data/maps/Bakery/scripts.pory"
	.string "Is there anything we could do to\n"
	.string "get you to come with us NOW?$"

Bakery_ViceScript_Text_17:
# 102 "data/maps/Bakery/scripts.pory"
	.string "Hmm…well, the reason I have to wait\n"
	.string "is I don't have any money…\p"
	.string "If you could get me a treat, I'll\n"
	.string "go with you.\p"
	.string "But it has to be a kind that I like!$"

Bakery_ViceScript_Text_18:
# 106 "data/maps/Bakery/scripts.pory"
	.string "Okay, then…sounds like a plan.\n"
	.string "What kind do you like?$"

Bakery_ViceScript_Text_19:
# 108 "data/maps/Bakery/scripts.pory"
	.string "I dunno!$"

Bakery_ViceScript_Text_20:
# 110 "data/maps/Bakery/scripts.pory"
	.string "… … … … …\p"
	.string "Okay, let's just go.$"

Bakery_Baker_Text_0:
# 130 "data/maps/Bakery/scripts.pory"
	.string "He's taking inventory. Probably best\n"
	.string "not to bother him now.$"

Bakery_Cashier_Text_0:
# 142 "data/maps/Bakery/scripts.pory"
	.string "'Scuse me, what's your policy on\n"
	.string "special orders? That Flygon over there\l"
	.string "is mine, but she wants a treat\l"
	.string "before we go.$"

Bakery_Cashier_Text_1:
# 143 "data/maps/Bakery/scripts.pory"
	.string "Cashier$"

Bakery_Cashier_Text_2:
# 144 "data/maps/Bakery/scripts.pory"
	.string "Uh, I think we can do it. It\n"
	.string "depends, I guess. What did you want?$"

Bakery_Cashier_Text_3:
# 148 "data/maps/Bakery/scripts.pory"
	.string "Something spicy. Can you do spicy?$"

Bakery_Cashier_Text_4:
# 150 "data/maps/Bakery/scripts.pory"
	.string "I'm not sure. Lemme ask the boss.$"

Bakery_Cashier_Text_5:
# 161 "data/maps/Bakery/scripts.pory"
	.string "We don't have anything on hand.\n"
	.string "If you're committed enough to bring\l"
	.string "your own spicy berries, we could\l"
	.string "make something out of them.$"

Bakery_Cashier_Text_6:
# 165 "data/maps/Bakery/scripts.pory"
	.string "Ah, you've got them! Okay, just\n"
	.string "one moment…$"

Bakery_Cashier_Text_7:
# 172 "data/maps/Bakery/scripts.pory"
	.string "We'll need at least 3 berries with\n"
	.string "high Spicy content. And if the other\l"
	.string "flavors are too strong, it won't work.\p"
	.string "There's berry fields outside of town\n"
	.string "to the east. Maybe you can get them\l"
	.string "to give you what you need.$"

Bakery_Cashier_Text_8:
# 183 "data/maps/Bakery/scripts.pory"
	.string "…Um, good question…$"

Bakery_Cashier_Text_9:
# 185 "data/maps/Bakery/scripts.pory"
	.string "… … … … …\n"
	.string "Well, we need something to work from.\l"
	.string "Could you figure out what flavor\l"
	.string "it likes, at least?$"

Bakery_Cashier_Text_10:
# 191 "data/maps/Bakery/scripts.pory"
	.string "Sorry about the mess. I did not see\n"
	.string "that coming. If that thing went wild,\n"
	.string "it could have burned down the\l"
	.string "whole place…\p"
	.string "Well, you prevented that, so we'll\n"
	.string "consider that your payment for\l"
	.string "the special order. So don't worry\l"
	.string "about paying.$"

Bakery_Cashier_Text_11:
# 194 "data/maps/Bakery/scripts.pory"
	.string "(I kinda thought they wouldn't make\n"
	.string "me pay anyway since I brought in\l"
	.string "my own ingredients. But oh well,\l"
	.string "I guess it worked out.)$"

Bakery_Cashier_Text_12:
# 199 "data/maps/Bakery/scripts.pory"
	.string "Welcome to Pomona Bread!\n"
	.string "Let me know if you need anything.$"

Bakery_ViceRecruitCutscene_Text_0:
# 222 "data/maps/Bakery/scripts.pory"
	.string "Baker$"

Bakery_ViceRecruitCutscene_Text_1:
# 223 "data/maps/Bakery/scripts.pory"
	.string "Since you so graciously provided me\n"
	.string "with these wonderful Spelon Berries,\l"
	.string "I'll whip up some Spicy Poffins\l"
	.string "for you and your Flygon.\p"
	.string "You'll have to bear with me here.\n"
	.string "It takes some careful mixing to\l"
	.string "get the dough to settle right.$"

Bakery_ViceRecruitCutscene_Text_2:
# 258 "data/maps/Bakery/scripts.pory"
	.string "This thing looks pissed…\n"
	.string "Vice, we could use your help!$"

Bakery_ViceRecruitCutscene_Text_3:
# 266 "data/maps/Bakery/scripts.pory"
	.string "Hey, hey! That spicy goodness is mine!\n"
	.string "Back up off!$"

Bakery_ViceRecruitCutscene_Text_4:
# 274 "data/maps/Bakery/scripts.pory"
	.string "Hydroil$"

Bakery_ViceRecruitCutscene_Text_5:
# 275 "data/maps/Bakery/scripts.pory"
	.string "… … … … …\n"
	.string "SORRY.$"

Bakery_ViceRecruitCutscene_Text_6:
# 277 "data/maps/Bakery/scripts.pory"
	.string "WE GOT SUCH A RUSH FROM EVOLVING.\n"
	.string "WE HAD TO TEST OUR STRENGTH.$"

Bakery_ViceRecruitCutscene_Text_7:
# 281 "data/maps/Bakery/scripts.pory"
	.string "Oh well! All's well that ends well!$"

Bakery_ViceRecruitCutscene_Text_8:
# 283 "data/maps/Bakery/scripts.pory"
	.string "…Well, if that's over, you can\n"
	.string "finally have your treat.$"

Bakery_ViceRecruitCutscene_Text_9:
# 285 "data/maps/Bakery/scripts.pory"
	.string "Oh, I already ate it.$"

Bakery_ViceRecruitCutscene_Text_10:
# 287 "data/maps/Bakery/scripts.pory"
	.string "What!? But it was boiling hot, and\n"
	.string "not even fully cooked…!$"

Bakery_ViceRecruitCutscene_Text_11:
# 289 "data/maps/Bakery/scripts.pory"
	.string "Yup! Just the way I like it.$"

Bakery_ViceRecruitCutscene_Text_12:
# 291 "data/maps/Bakery/scripts.pory"
	.string "…It's good to have you back, Vice.$"

Bakery_ViceRecruitCutscene_Text_13:
# 295 "data/maps/Bakery/scripts.pory"
	.string "Now, the last one left is Python.\n"
	.string "He's a Zoroark, an illusionist…\l"
	.string "How are we supposed to find him?$"

Bakery_ViceRecruitCutscene_Text_14:
# 297 "data/maps/Bakery/scripts.pory"
	.string "Ooh, maybe Bradley can help!\n"
	.string "Those big ol' ears of his must be\l"
	.string "useful for something.\p"
	.string "Zoroark only make visual illusions.\n"
	.string "Maybe he can hear the difference.$"

Bakery_ViceRecruitCutscene_Text_15:
# 300 "data/maps/Bakery/scripts.pory"
	.string "I don't know if that's actually true…\n"
	.string "But it's worth a shot.\p"
	.string "So if I bring Bradley out, he can\n"
	.string "help me single out the impostor.\p"
	.string "Thanks for the idea, Vice!\n"
	.string "Now let's get going.$"

Bakery_ViceRecruitCutscene_Text_16:
# 313 "data/maps/Bakery/scripts.pory"
	.string "You recalled Vice the Flygon!$"

Bakery_LittleBoy_Text_0:
# 369 "data/maps/Bakery/scripts.pory"
	.string "Louis$"

Bakery_LittleBoy_Text_1:
# 378 "data/maps/Bakery/scripts.pory"
	.string "How do you talk to Pokémon?$"

Bakery_LittleBoy_Text_2:
# 380 "data/maps/Bakery/scripts.pory"
	.string "I learned it at the school of\n"
	.string "hard knocks. You don't wanna go there…$"

Bakery_LittleBoy_Text_3:
# 384 "data/maps/Bakery/scripts.pory"
	.string "Go away! My Fygon!$"

Bakery_LittleGirl_Text_0:
# 395 "data/maps/Bakery/scripts.pory"
	.string "Leah$"

Bakery_LittleGirl_Text_1:
# 404 "data/maps/Bakery/scripts.pory"
	.string "Donut!$"

Bakery_LittleGirl_Text_2:
# 408 "data/maps/Bakery/scripts.pory"
	.string "Can he take off his glasses?$"

Bakery_KidsMom_Text_0:
# 419 "data/maps/Bakery/scripts.pory"
	.string "Lisa$"

Bakery_KidsMom_Text_1:
# 420 "data/maps/Bakery/scripts.pory"
	.string "Do you have any kids, Amelia?$"

Bakery_KidsMom_Text_2:
# 422 "data/maps/Bakery/scripts.pory"
	.string "Oh, no. My Pokémon are like my kids.$"

Bakery_KidsMom_Text_3:
# 424 "data/maps/Bakery/scripts.pory"
	.string "Ah, you're one of those…$"

Bakery_KidsMom_Text_4:
# 426 "data/maps/Bakery/scripts.pory"
	.string "My circumstances are a bit…abnormal,\n"
	.string "to be fair…$"

Bakery_KidsMom_Text_5:
# 428 "data/maps/Bakery/scripts.pory"
	.string "Sorry, sorry! I didn't mean it like\n"
	.string "that! It's all alright.$"

Bakery_KidsMom_Text_6:
# 430 "data/maps/Bakery/scripts.pory"
	.string "Eh…whatever.$"

Bakery_KidsMom_Text_7:
# 435 "data/maps/Bakery/scripts.pory"
	.string "I hope I don't ruin your day by\n"
	.string "taking back my Flygon.$"

Bakery_KidsMom_Text_8:
# 436 "data/maps/Bakery/scripts.pory"
	.string "Kids' mom$"

Bakery_KidsMom_Text_9:
# 437 "data/maps/Bakery/scripts.pory"
	.string "Oh, the kids will be fine. Maybe\n"
	.string "it'll get them to actually eat.$"

Bakery_KidsMom_Text_10:
# 439 "data/maps/Bakery/scripts.pory"
	.string "Do you have any Pokémon of your own?$"

Bakery_KidsMom_Text_11:
# 441 "data/maps/Bakery/scripts.pory"
	.string "Not yet. When they're a little older,\n"
	.string "I'll get them each a Keesh.$"

Bakery_KidsMom_Text_12:
# 443 "data/maps/Bakery/scripts.pory"
	.string "(A…quiche?)$"

Bakery_KidsMom_Text_13:
# 445 "data/maps/Bakery/scripts.pory"
	.string "Er, that's nice. When they're old\n"
	.string "enough to take responsibility, right?$"

Bakery_KidsMom_Text_14:
# 447 "data/maps/Bakery/scripts.pory"
	.string "Of course!\n"
	.string "By the way, I'm Lisa. And the kids\l"
	.string "are Louis and Leah.$"

Bakery_Sign_Bread_Text_0:
# 455 "data/maps/Bakery/scripts.pory"
	.string "A fresh-baked loaf of bread. It looks\n"
	.string "so hearty, it could raise your HP.$"

Bakery_Sign_Cookies_Text_0:
# 460 "data/maps/Bakery/scripts.pory"
	.string "Chocolate chip cookies. The chips are\n"
	.string "still melty.$"

Bakery_Sign_Pretzels_Text_0:
# 465 "data/maps/Bakery/scripts.pory"
	.string "Soft pretzels. You feel like you need\n"
	.string "a drink just from looking at them.$"

Bakery_Sign_Baguettes_Text_0:
# 470 "data/maps/Bakery/scripts.pory"
	.string "French bread. Or is it Italian?\n"
	.string "Sorry, you mean Kalosian.$"

Bakery_Sign_MenuLeft_Text_0:
# 475 "data/maps/Bakery/scripts.pory"
	.string "Food menu. They serve baked goods\n"
	.string "and sandwiches here.$"

Bakery_Sign_MenuRight_Text_0:
# 480 "data/maps/Bakery/scripts.pory"
	.string "Drink menu. You're at a loss trying\n"
	.string "to figure out these drink names.$"

Bakery_Sign_PantomPicture_Text_0:
# 485 "data/maps/Bakery/scripts.pory"
	.string "A picture commemorating an incident\n"
	.string "where a Pokémon called Pantom\l"
	.string "haunted the kitchen.$"

Bakery_Sign_MountainPicture_Text_0:
# 490 "data/maps/Bakery/scripts.pory"
	.string "“Morning over Lake Elthe”, painting\n"
	.string "by L. D. Vinki.$"

Bakery_DubsnakeHydroil_Text_0:
# 503 "data/maps/Bakery/scripts.pory"
	.string "SORRY ABOUT THE MESS. ONE OF US HAS\n"
	.string "NO SELF-CONTROL.$"

Bakery_DubsnakeHydroil_Text_1:
# 506 "data/maps/Bakery/scripts.pory"
	.string "YOU SHOULD STICK YOUR HEAD IN A FIRE.\n"
	.string "I HIGHLY RECOMMEND THE EXPERIENCE.$"

Bakery_DubsnakeHydroil_Text_2:
# 509 "data/maps/Bakery/scripts.pory"
	.string "YOU'RE REALLY STRONG. IN ANOTHER\n"
	.string "TIME, WE WOULD BE GREAT FRIENDS.$"

Bakery_DubsnakeHydroil_Text_3:
# 511 "data/maps/Bakery/scripts.pory"
	.string "BUT I MUST STAY HERE. I AM LOYAL\n"
	.string "TO THIS BAKERY.$"

Bakery_DubsnakeHydroil_Text_4:
# 513 "data/maps/Bakery/scripts.pory"
	.string "(I wasn't planning to ask them to\n"
	.string "come with me, but whatever.)$"

Bakery_DubsnakeHydroil_Text_5:
# 515 "data/maps/Bakery/scripts.pory"
	.string "Okay. Take care of yourself, Hydroil.$"

Bakery_DubsnakeHydroil_Text_6:
# 524 "data/maps/Bakery/scripts.pory"
	.string "Dubsnake$"

Bakery_DubsnakeHydroil_Text_7:
# 525 "data/maps/Bakery/scripts.pory"
	.string "You get a discount on cold drinks if\n"
	.string "you're brave enough to let them make\l"
	.string "it with the ice from my head.$"

Bakery_DubsnakeHydroil_Text_8:
# 528 "data/maps/Bakery/scripts.pory"
	.string "I think I'm ready to evolve. I just\n"
	.string "need a heat source to start it.$"

Bakery_DubsnakeHydroil_Text_9:
# 531 "data/maps/Bakery/scripts.pory"
	.string "What kind of Pokémon are you?$"

Bakery_DubsnakeHydroil_Text_10:
# 533 "data/maps/Bakery/scripts.pory"
	.string "We're called Dubsnake!$"

Bakery_DubsnakeHydroil_Text_11:
# 535 "data/maps/Bakery/scripts.pory"
	.string "Cool. I've never seen one of you\n"
	.string "before. Which head is the main one?$"

Bakery_DubsnakeHydroil_Text_12:
# 537 "data/maps/Bakery/scripts.pory"
	.string "I am!$"

Bakery_DubsnakeHydroil_Text_13:
# 541 "data/maps/Bakery/scripts.pory"
	.string "Got it, got it. Great. Thanks.$"

Bakery_ComputerGuy_Text_0:
# 550 "data/maps/Bakery/scripts.pory"
	.string "Linus$"

Bakery_ComputerGuy_Text_1:
# 551 "data/maps/Bakery/scripts.pory"
	.string "The wi-fi in my house has been out\n"
	.string "because of the storm, so I have to\l"
	.string "come here to get my work done.$"

Bakery_LeftGuy_Text_0:
# 556 "data/maps/Bakery/scripts.pory"
	.string "Peter$"

Bakery_LeftGuy_Text_1:
# 557 "data/maps/Bakery/scripts.pory"
	.string "Could you move along? I'm trying to\n"
	.string "have a date, here…$"

Bakery_RightGuy_Text_0:
# 564 "data/maps/Bakery/scripts.pory"
	.string "Dave$"

Bakery_RightGuy_Text_1:
# 565 "data/maps/Bakery/scripts.pory"
	.string "I always tell myself I'll try other\n"
	.string "items on the menu, but then I just\l"
	.string "end up getting the crepes again, haha.$"
