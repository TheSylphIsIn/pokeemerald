DropperPoint_MapScripts::
# 10 "data/maps/DropperPoint/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, DropperPoint_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

DropperPoint_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 11 "data/maps/DropperPoint/scripts.pory"
	map_script_2 VAR_FONEI_COAST_STATE, 0, DropperPoint_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0
	.2byte 0

DropperPoint_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0:
# 12 "data/maps/DropperPoint/scripts.pory"
	lockall
# 13 "data/maps/DropperPoint/scripts.pory"
	delay 60
# 14 "data/maps/DropperPoint/scripts.pory"
	setvar VAR_LAST_TALKED, 7
# 15 "data/maps/DropperPoint/scripts.pory"
	call DropperPoint_EventScript_WakeRival
# 16 "data/maps/DropperPoint/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, DropperPoint_Movement_WakeJump
# 17 "data/maps/DropperPoint/scripts.pory"
	waitmovement 0
# 18 "data/maps/DropperPoint/scripts.pory"
	setvar VAR_FONEI_COAST_STATE, 1
# 19 "data/maps/DropperPoint/scripts.pory"
	releaseall
	return


DropperPoint_Sign::
# 26 "data/maps/DropperPoint/scripts.pory"
	msgbox DropperPoint_Sign_Text_0, MSGBOX_SIGN
	return


DropperPoint_EventScript_WakeRival::
# 31 "data/maps/DropperPoint/scripts.pory"
	applymovement VAR_LAST_TALKED, DropperPoint_Movement_WakeUp
# 32 "data/maps/DropperPoint/scripts.pory"
	waitmovement 0
# 33 "data/maps/DropperPoint/scripts.pory"
	playse SE_PIN
# 34 "data/maps/DropperPoint/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_ExclamationMark
# 35 "data/maps/DropperPoint/scripts.pory"
	waitmovement 0
# 36 "data/maps/DropperPoint/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_Delay48
# 37 "data/maps/DropperPoint/scripts.pory"
	waitmovement 0
# 38 "data/maps/DropperPoint/scripts.pory"
	playse SE_BIKE_HOP
# 39 "data/maps/DropperPoint/scripts.pory"
	removeobject VAR_LAST_TALKED
	return


DropperPoint_CallScript_RivalGreetPlayer::
# 45 "data/maps/DropperPoint/scripts.pory"
	closemessage
# 46 "data/maps/DropperPoint/scripts.pory"
	call DropperPoint_EventScript_WakeRival
# 47 "data/maps/DropperPoint/scripts.pory"
	addobject VAR_TEMP_1
# 48 "data/maps/DropperPoint/scripts.pory"
	applymovement VAR_TEMP_1, DropperPoint_Movement_WakeJump
# 49 "data/maps/DropperPoint/scripts.pory"
	waitmovement 0
# 50 "data/maps/DropperPoint/scripts.pory"
	applymovement VAR_TEMP_1, Common_Movement_FacePlayer
# 51 "data/maps/DropperPoint/scripts.pory"
	waitmovement 0
	return


DropperPoint_EventScript_Morgan::
# 57 "data/maps/DropperPoint/scripts.pory"
	lock
# 58 "data/maps/DropperPoint/scripts.pory"
	msgbox DropperPoint_EventScript_Morgan_Text_0, MSGBOX_DEFAULT
# 59 "data/maps/DropperPoint/scripts.pory"
	setvar VAR_TEMP_1, 3
# 60 "data/maps/DropperPoint/scripts.pory"
	call DropperPoint_CallScript_RivalGreetPlayer
# 61 "data/maps/DropperPoint/scripts.pory"
	clearflag FLAG_HIDE_MORGAN_INTRO
# 62 "data/maps/DropperPoint/scripts.pory"
	msgbox DropperPoint_EventScript_Morgan_Text_1, MSGBOX_DEFAULT
# 64 "data/maps/DropperPoint/scripts.pory"
	setflag FLAG_FAVORED_MORGAN
# 65 "data/maps/DropperPoint/scripts.pory"
	release
	return


DropperPoint_EventScript_MorganAwake::
# 70 "data/maps/DropperPoint/scripts.pory"
	speakername SpeakerName_Morgan
# 71 "data/maps/DropperPoint/scripts.pory"
	compare VAR_FONEI_COAST_STATE, 2
	goto_if_eq DropperPoint_EventScript_MorganAwake_1
# 77 "data/maps/DropperPoint/scripts.pory"
	msgbox DropperPoint_EventScript_MorganAwake_Text_1, MSGBOX_NPC
	return

DropperPoint_EventScript_MorganAwake_1:
# 73 "data/maps/DropperPoint/scripts.pory"
	msgbox DropperPoint_EventScript_MorganAwake_Text_0, MSGBOX_AUTOCLOSE
	return


DropperPoint_EventScript_Calvin::
# 83 "data/maps/DropperPoint/scripts.pory"
	lock
# 84 "data/maps/DropperPoint/scripts.pory"
	msgbox DropperPoint_EventScript_Calvin_Text_0, MSGBOX_DEFAULT
# 85 "data/maps/DropperPoint/scripts.pory"
	setvar VAR_TEMP_1, 2
# 86 "data/maps/DropperPoint/scripts.pory"
	call DropperPoint_CallScript_RivalGreetPlayer
# 87 "data/maps/DropperPoint/scripts.pory"
	clearflag FLAG_HIDE_CALVIN_INTRO
# 88 "data/maps/DropperPoint/scripts.pory"
	msgbox DropperPoint_EventScript_Calvin_Text_1, MSGBOX_DEFAULT
# 90 "data/maps/DropperPoint/scripts.pory"
	setflag FLAG_FAVORED_CALVIN
# 91 "data/maps/DropperPoint/scripts.pory"
	release
	return


DropperPoint_EventScript_CalvinAwake::
# 96 "data/maps/DropperPoint/scripts.pory"
	speakername SpeakerName_Calvin
# 97 "data/maps/DropperPoint/scripts.pory"
	msgbox DropperPoint_EventScript_CalvinAwake_Text_0, MSGBOX_NPC
	return


DropperPoint_TriggerScript_Bag::
# 102 "data/maps/DropperPoint/scripts.pory"
	lockall
# 103 "data/maps/DropperPoint/scripts.pory"
	goto_if_unset FLAG_FAVORED_CALVIN, DropperPoint_TriggerScript_Bag_2
DropperPoint_TriggerScript_Bag_1:
# 118 "data/maps/DropperPoint/scripts.pory"
	goto_if_unset FLAG_FAVORED_MORGAN, DropperPoint_TriggerScript_Bag_5
DropperPoint_TriggerScript_Bag_4:
# 134 "data/maps/DropperPoint/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 135 "data/maps/DropperPoint/scripts.pory"
	waitmovement 0
# 136 "data/maps/DropperPoint/scripts.pory"
	speakername SpeakerName_Calvin
# 137 "data/maps/DropperPoint/scripts.pory"
	msgbox DropperPoint_TriggerScript_Bag_Text_2, MSGBOX_DEFAULT
# 138 "data/maps/DropperPoint/scripts.pory"
	closemessage
# 139 "data/maps/DropperPoint/scripts.pory"
	setmetatile 12, 11, 0x36C, FALSE
# 140 "data/maps/DropperPoint/scripts.pory"
	special DrawWholeMapView
# 141 "data/maps/DropperPoint/scripts.pory"
	applymovement 2, DropperPoint_Movement_CalvinJump1
# 142 "data/maps/DropperPoint/scripts.pory"
	playse SE_BIKE_HOP
# 143 "data/maps/DropperPoint/scripts.pory"
	waitse
# 144 "data/maps/DropperPoint/scripts.pory"
	waitmovement 0
# 145 "data/maps/DropperPoint/scripts.pory"
	applymovement 2, DropperPoint_Movement_CalvinJump2
# 146 "data/maps/DropperPoint/scripts.pory"
	playse SE_BIKE_HOP
# 147 "data/maps/DropperPoint/scripts.pory"
	waitmovement 0
# 148 "data/maps/DropperPoint/scripts.pory"
	setmetatile 12, 11, 0x2E1, FALSE
# 149 "data/maps/DropperPoint/scripts.pory"
	special DrawWholeMapView
# 150 "data/maps/DropperPoint/scripts.pory"
	applymovement 3, DropperPoint_Movement_MorganGoToBag
# 151 "data/maps/DropperPoint/scripts.pory"
	waitmovement 0
# 152 "data/maps/DropperPoint/scripts.pory"
	applymovement 2, Common_Movement_FaceLeft
# 153 "data/maps/DropperPoint/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 154 "data/maps/DropperPoint/scripts.pory"
	waitmovement 0
# 155 "data/maps/DropperPoint/scripts.pory"
	lockall
# 156 "data/maps/DropperPoint/scripts.pory"
	speakername SpeakerName_Morgan
# 157 "data/maps/DropperPoint/scripts.pory"
	msgbox DropperPoint_TriggerScript_Bag_Text_3, MSGBOX_DEFAULT
# 158 "data/maps/DropperPoint/scripts.pory"
	speakername SpeakerName_Calvin
# 159 "data/maps/DropperPoint/scripts.pory"
	msgbox DropperPoint_TriggerScript_Bag_Text_4, MSGBOX_DEFAULT
# 160 "data/maps/DropperPoint/scripts.pory"
	speakername SpeakerName_Morgan
# 161 "data/maps/DropperPoint/scripts.pory"
	msgbox DropperPoint_TriggerScript_Bag_Text_5, MSGBOX_DEFAULT
# 162 "data/maps/DropperPoint/scripts.pory"
	speakername SpeakerName_Calvin
# 163 "data/maps/DropperPoint/scripts.pory"
	msgbox DropperPoint_TriggerScript_Bag_Text_6, MSGBOX_DEFAULT
# 164 "data/maps/DropperPoint/scripts.pory"
	closemessage
# 165 "data/maps/DropperPoint/scripts.pory"
	lockall
# 166 "data/maps/DropperPoint/scripts.pory"
	applymovement 2, Common_Movement_FaceUp
# 167 "data/maps/DropperPoint/scripts.pory"
	waitmovement 0
# 168 "data/maps/DropperPoint/scripts.pory"
	delay 60
# 169 "data/maps/DropperPoint/scripts.pory"
	speakername SpeakerName_Calvin
# 170 "data/maps/DropperPoint/scripts.pory"
	msgbox DropperPoint_TriggerScript_Bag_Text_7, MSGBOX_AUTOCLOSE
# 171 "data/maps/DropperPoint/scripts.pory"
	addobject 5
# 172 "data/maps/DropperPoint/scripts.pory"
	setobjectxy 5, 13, 14
# 173 "data/maps/DropperPoint/scripts.pory"
	applymovement 5, Common_Movement_WalkUp
# 174 "data/maps/DropperPoint/scripts.pory"
	playse SE_BALLOON_BLUE
# 175 "data/maps/DropperPoint/scripts.pory"
	waitse
# 176 "data/maps/DropperPoint/scripts.pory"
	waitmovement 0
# 177 "data/maps/DropperPoint/scripts.pory"
	delay 60
# 178 "data/maps/DropperPoint/scripts.pory"
	applymovement 3, DropperPoint_Movement_MorganRunToPlayer
# 179 "data/maps/DropperPoint/scripts.pory"
	waitmovement 0
# 180 "data/maps/DropperPoint/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 181 "data/maps/DropperPoint/scripts.pory"
	waitmovement 0
# 182 "data/maps/DropperPoint/scripts.pory"
	applymovement 2, Common_Movement_FaceRight
# 183 "data/maps/DropperPoint/scripts.pory"
	waitmovement 0
# 184 "data/maps/DropperPoint/scripts.pory"
	speakername SpeakerName_Morgan
# 185 "data/maps/DropperPoint/scripts.pory"
	msgbox DropperPoint_TriggerScript_Bag_Text_8, MSGBOX_DEFAULT
# 186 "data/maps/DropperPoint/scripts.pory"
	speakername SpeakerName_Calvin
# 187 "data/maps/DropperPoint/scripts.pory"
	msgbox DropperPoint_TriggerScript_Bag_Text_9, MSGBOX_AUTOCLOSE
# 188 "data/maps/DropperPoint/scripts.pory"
	applymovement 5, Common_Movement_WalkUp2
# 189 "data/maps/DropperPoint/scripts.pory"
	playse SE_BALLOON_BLUE
# 190 "data/maps/DropperPoint/scripts.pory"
	waitse
# 191 "data/maps/DropperPoint/scripts.pory"
	playse SE_BALLOON_BLUE
# 192 "data/maps/DropperPoint/scripts.pory"
	waitse
# 193 "data/maps/DropperPoint/scripts.pory"
	waitmovement 0
# 194 "data/maps/DropperPoint/scripts.pory"
	applymovement 2, Common_Movement_FaceDown
# 195 "data/maps/DropperPoint/scripts.pory"
	applymovement 3, Common_Movement_FaceDown
# 196 "data/maps/DropperPoint/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
# 197 "data/maps/DropperPoint/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 198 "data/maps/DropperPoint/scripts.pory"
	lockall
# 199 "data/maps/DropperPoint/scripts.pory"
	delay 60
# 200 "data/maps/DropperPoint/scripts.pory"
	delay 60
# 201 "data/maps/DropperPoint/scripts.pory"
	playbgm MUS_HELP, TRUE
# 202 "data/maps/DropperPoint/scripts.pory"
	applymovement 5, DropperPoint_Movement_RushForward
# 203 "data/maps/DropperPoint/scripts.pory"
	playse SE_BALLOON_BLUE
# 204 "data/maps/DropperPoint/scripts.pory"
	waitse
# 205 "data/maps/DropperPoint/scripts.pory"
	playse SE_BALLOON_BLUE
# 206 "data/maps/DropperPoint/scripts.pory"
	waitse
# 207 "data/maps/DropperPoint/scripts.pory"
	applymovement 2, Common_Movement_ExclamationMark
# 208 "data/maps/DropperPoint/scripts.pory"
	applymovement 3, DropperPoint_Movement_Jump
# 209 "data/maps/DropperPoint/scripts.pory"
	waitmovement 0
# 210 "data/maps/DropperPoint/scripts.pory"
	waitse
# 211 "data/maps/DropperPoint/scripts.pory"
	playmoncry SPECIES_SLOSHMOSH, CRY_MODE_NORMAL
# 212 "data/maps/DropperPoint/scripts.pory"
	msgbox DropperPoint_TriggerScript_Bag_Text_10, MSGBOX_DEFAULT
# 213 "data/maps/DropperPoint/scripts.pory"
	waitmoncry
# 214 "data/maps/DropperPoint/scripts.pory"
	closemessage
# 215 "data/maps/DropperPoint/scripts.pory"
	msgbox DropperPoint_TriggerScript_Bag_Text_11, MSGBOX_DEFAULT
# 216 "data/maps/DropperPoint/scripts.pory"
	closemessage
# 217 "data/maps/DropperPoint/scripts.pory"
	setvar VAR_FONEI_COAST_STATE, 2
# 218 "data/maps/DropperPoint/scripts.pory"
	setrespawn HEAL_LOCATION_CRAN_TOWN
# 219 "data/maps/DropperPoint/scripts.pory"
	setflag FLAG_HIDE_FONEI_COAST_NPCS
# 220 "data/maps/DropperPoint/scripts.pory"
	releaseall
	return

DropperPoint_TriggerScript_Bag_2:
# 105 "data/maps/DropperPoint/scripts.pory"
	setvar VAR_LAST_TALKED, 8
# 106 "data/maps/DropperPoint/scripts.pory"
	call DropperPoint_EventScript_WakeRival
# 107 "data/maps/DropperPoint/scripts.pory"
	addobject 2
# 108 "data/maps/DropperPoint/scripts.pory"
	clearflag FLAG_HIDE_CALVIN_INTRO
# 109 "data/maps/DropperPoint/scripts.pory"
	applymovement 2, DropperPoint_Movement_WakeJump
# 110 "data/maps/DropperPoint/scripts.pory"
	waitmovement 0
# 111 "data/maps/DropperPoint/scripts.pory"
	applymovement 2, Common_Movement_FaceUp
# 112 "data/maps/DropperPoint/scripts.pory"
	waitmovement 0
# 113 "data/maps/DropperPoint/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
# 114 "data/maps/DropperPoint/scripts.pory"
	waitmovement 0
# 115 "data/maps/DropperPoint/scripts.pory"
	msgbox DropperPoint_TriggerScript_Bag_Text_0, MSGBOX_DEFAULT
# 116 "data/maps/DropperPoint/scripts.pory"
	closemessage
	goto DropperPoint_TriggerScript_Bag_1

DropperPoint_TriggerScript_Bag_5:
# 120 "data/maps/DropperPoint/scripts.pory"
	setvar VAR_LAST_TALKED, 6
# 121 "data/maps/DropperPoint/scripts.pory"
	call DropperPoint_EventScript_WakeRival
# 122 "data/maps/DropperPoint/scripts.pory"
	addobject 3
# 123 "data/maps/DropperPoint/scripts.pory"
	clearflag FLAG_HIDE_MORGAN_INTRO
# 124 "data/maps/DropperPoint/scripts.pory"
	applymovement 3, DropperPoint_Movement_WakeJump
# 125 "data/maps/DropperPoint/scripts.pory"
	waitmovement 0
# 126 "data/maps/DropperPoint/scripts.pory"
	applymovement 3, Common_Movement_FaceRight
# 127 "data/maps/DropperPoint/scripts.pory"
	waitmovement 0
# 128 "data/maps/DropperPoint/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 129 "data/maps/DropperPoint/scripts.pory"
	waitmovement 0
# 130 "data/maps/DropperPoint/scripts.pory"
	msgbox DropperPoint_TriggerScript_Bag_Text_1, MSGBOX_DEFAULT
# 132 "data/maps/DropperPoint/scripts.pory"
	closemessage
	goto DropperPoint_TriggerScript_Bag_4


DropperPoint_EventScript_Sloshmosh::
# 225 "data/maps/DropperPoint/scripts.pory"
	lock
# 226 "data/maps/DropperPoint/scripts.pory"
	faceplayer
# 227 "data/maps/DropperPoint/scripts.pory"
	waitse
# 228 "data/maps/DropperPoint/scripts.pory"
	playmoncry SPECIES_SLOSHMOSH, CRY_MODE_NORMAL
# 229 "data/maps/DropperPoint/scripts.pory"
	msgbox DropperPoint_TriggerScript_Bag_Text_10, MSGBOX_DEFAULT
# 230 "data/maps/DropperPoint/scripts.pory"
	waitmoncry
# 231 "data/maps/DropperPoint/scripts.pory"
	release
	return


DropperPoint_EventScript_Bag::
# 236 "data/maps/DropperPoint/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 237 "data/maps/DropperPoint/scripts.pory"
	fadescreen FADE_TO_BLACK
# 238 "data/maps/DropperPoint/scripts.pory"
	removeobject 5
# 239 "data/maps/DropperPoint/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 240 "data/maps/DropperPoint/scripts.pory"
	waitmovement 0
# 241 "data/maps/DropperPoint/scripts.pory"
	special ChooseStarter
# 242 "data/maps/DropperPoint/scripts.pory"
	waitstate
# 243 "data/maps/DropperPoint/scripts.pory"
	bufferleadmonspeciesname STR_VAR_1
# 244 "data/maps/DropperPoint/scripts.pory"
	msgbox DropperPoint_EventScript_Bag_Text_0, MSGBOX_YESNO
# 245 "data/maps/DropperPoint/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq DropperPoint_EventScript_Bag_2
DropperPoint_EventScript_Bag_1:
# 250 "data/maps/DropperPoint/scripts.pory"
	closemessage
# 251 "data/maps/DropperPoint/scripts.pory"
	lockall
# 252 "data/maps/DropperPoint/scripts.pory"
	applymovement 3, Common_Movement_FaceLeft
# 253 "data/maps/DropperPoint/scripts.pory"
	applymovement 2, Common_Movement_FaceDown
# 254 "data/maps/DropperPoint/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, DropperPoint_Movement_StepBack
# 255 "data/maps/DropperPoint/scripts.pory"
	waitmovement 0
# 256 "data/maps/DropperPoint/scripts.pory"
	lockall
# 257 "data/maps/DropperPoint/scripts.pory"
	speakername SpeakerName_Calvin
# 258 "data/maps/DropperPoint/scripts.pory"
	msgbox DropperPoint_EventScript_Bag_Text_1, MSGBOX_DEFAULT
# 259 "data/maps/DropperPoint/scripts.pory"
	speakername SpeakerName_Morgan
# 260 "data/maps/DropperPoint/scripts.pory"
	msgbox DropperPoint_EventScript_Bag_Text_2, MSGBOX_AUTOCLOSE
# 261 "data/maps/DropperPoint/scripts.pory"
	special HealPlayerParty
# 262 "data/maps/DropperPoint/scripts.pory"
	applymovement 3, DropperPoint_Movement_MorganGoToBagAgain
# 263 "data/maps/DropperPoint/scripts.pory"
	waitmovement 0
# 264 "data/maps/DropperPoint/scripts.pory"
	lockall
# 265 "data/maps/DropperPoint/scripts.pory"
	delay 30
# 266 "data/maps/DropperPoint/scripts.pory"
	speakername SpeakerName_Morgan
# 267 "data/maps/DropperPoint/scripts.pory"
	msgbox DropperPoint_EventScript_Bag_Text_3, MSGBOX_DEFAULT
# 268 "data/maps/DropperPoint/scripts.pory"
	speakername SpeakerName_Calvin
# 269 "data/maps/DropperPoint/scripts.pory"
	msgbox DropperPoint_EventScript_Bag_Text_4, MSGBOX_DEFAULT
# 270 "data/maps/DropperPoint/scripts.pory"
	speakername SpeakerName_Morgan
# 271 "data/maps/DropperPoint/scripts.pory"
	msgbox DropperPoint_EventScript_Bag_Text_5, MSGBOX_AUTOCLOSE
# 272 "data/maps/DropperPoint/scripts.pory"
	applymovement 2, Common_Movement_FaceRight
# 273 "data/maps/DropperPoint/scripts.pory"
	waitmovement 0
# 274 "data/maps/DropperPoint/scripts.pory"
	lockall
# 275 "data/maps/DropperPoint/scripts.pory"
	delay 30
# 276 "data/maps/DropperPoint/scripts.pory"
	speakername SpeakerName_Calvin
# 277 "data/maps/DropperPoint/scripts.pory"
	msgbox DropperPoint_EventScript_Bag_Text_6
# 278 "data/maps/DropperPoint/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceRight
# 279 "data/maps/DropperPoint/scripts.pory"
	speakername SpeakerName_Morgan
# 280 "data/maps/DropperPoint/scripts.pory"
	msgbox DropperPoint_EventScript_Bag_Text_7, MSGBOX_DEFAULT
# 281 "data/maps/DropperPoint/scripts.pory"
	speakername SpeakerName_Calvin
# 282 "data/maps/DropperPoint/scripts.pory"
	msgbox DropperPoint_EventScript_Bag_Text_8
# 283 "data/maps/DropperPoint/scripts.pory"
	speakername SpeakerName_Morgan
# 284 "data/maps/DropperPoint/scripts.pory"
	msgbox DropperPoint_EventScript_Bag_Text_9, MSGBOX_AUTOCLOSE
# 285 "data/maps/DropperPoint/scripts.pory"
	applymovement 2, DropperPoint_Movement_CalvinStartWalkingAway
# 286 "data/maps/DropperPoint/scripts.pory"
	playse SE_BIKE_HOP
# 287 "data/maps/DropperPoint/scripts.pory"
	applymovement 3, DropperPoint_Movement_MorganStartWalkingAway
# 288 "data/maps/DropperPoint/scripts.pory"
	removeobject 1
# 289 "data/maps/DropperPoint/scripts.pory"
	waitmovement 0
# 290 "data/maps/DropperPoint/scripts.pory"
	lockall
# 291 "data/maps/DropperPoint/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 292 "data/maps/DropperPoint/scripts.pory"
	waitmovement 0
# 293 "data/maps/DropperPoint/scripts.pory"
	lockall
# 294 "data/maps/DropperPoint/scripts.pory"
	speakername SpeakerName_Morgan
# 295 "data/maps/DropperPoint/scripts.pory"
	msgbox DropperPoint_EventScript_Bag_Text_10, MSGBOX_AUTOCLOSE
# 296 "data/maps/DropperPoint/scripts.pory"
	closemessage
# 297 "data/maps/DropperPoint/scripts.pory"
	applymovement 3, DropperPoint_Movement_MorganFinishWalkingAway
# 298 "data/maps/DropperPoint/scripts.pory"
	waitmovement 0
# 299 "data/maps/DropperPoint/scripts.pory"
	removeobject 2
# 300 "data/maps/DropperPoint/scripts.pory"
	removeobject 3
# 301 "data/maps/DropperPoint/scripts.pory"
	clearflag FLAG_FAVORED_MORGAN
# 302 "data/maps/DropperPoint/scripts.pory"
	clearflag FLAG_FAVORED_CALVIN
# 303 "data/maps/DropperPoint/scripts.pory"
	releaseall
	return

DropperPoint_EventScript_Bag_2:
# 247 "data/maps/DropperPoint/scripts.pory"
	setvar VAR_0x8004, 0
# 248 "data/maps/DropperPoint/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	goto DropperPoint_EventScript_Bag_1


DropperPoint_TriggerScript_Roadblock::
# 308 "data/maps/DropperPoint/scripts.pory"
	lock
# 309 "data/maps/DropperPoint/scripts.pory"
	goto_if_set FLAG_FAVORED_CALVIN, DropperPoint_TriggerScript_Roadblock_2
# 316 "data/maps/DropperPoint/scripts.pory"
	msgbox DropperPoint_TriggerScript_Roadblock_Text_1, MSGBOX_AUTOCLOSE
DropperPoint_TriggerScript_Roadblock_1:
# 318 "data/maps/DropperPoint/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, DropperPoint_Movement_ComeBack
# 319 "data/maps/DropperPoint/scripts.pory"
	waitmovement 0
# 320 "data/maps/DropperPoint/scripts.pory"
	release
	return

DropperPoint_TriggerScript_Roadblock_2:
# 311 "data/maps/DropperPoint/scripts.pory"
	speakername SpeakerName_Calvin
# 312 "data/maps/DropperPoint/scripts.pory"
	msgbox DropperPoint_TriggerScript_Roadblock_Text_0, MSGBOX_AUTOCLOSE
	goto DropperPoint_TriggerScript_Roadblock_1


# 323 "data/maps/DropperPoint/scripts.pory"
DropperPoint_Movement_WakeUp:
# 325 "data/maps/DropperPoint/scripts.pory"
	face_up
# 326 "data/maps/DropperPoint/scripts.pory"
	delay_16
# 327 "data/maps/DropperPoint/scripts.pory"
	face_down
# 328 "data/maps/DropperPoint/scripts.pory"
	delay_8
# 329 "data/maps/DropperPoint/scripts.pory"
	face_up
# 330 "data/maps/DropperPoint/scripts.pory"
	delay_16
# 331 "data/maps/DropperPoint/scripts.pory"
	face_down
# 332 "data/maps/DropperPoint/scripts.pory"
	delay_8
# 333 "data/maps/DropperPoint/scripts.pory"
	face_up
# 334 "data/maps/DropperPoint/scripts.pory"
	delay_16
# 335 "data/maps/DropperPoint/scripts.pory"
	face_left
	step_end

# 338 "data/maps/DropperPoint/scripts.pory"
DropperPoint_Movement_WakeJump:
# 340 "data/maps/DropperPoint/scripts.pory"
	set_visible
# 341 "data/maps/DropperPoint/scripts.pory"
	jump_in_place_down
# 342 "data/maps/DropperPoint/scripts.pory"
	delay_16
# 342 "data/maps/DropperPoint/scripts.pory"
	delay_16
	step_end

# 345 "data/maps/DropperPoint/scripts.pory"
DropperPoint_Movement_CalvinJump1:
# 347 "data/maps/DropperPoint/scripts.pory"
	jump_2_up
# 348 "data/maps/DropperPoint/scripts.pory"
	walk_up
	step_end

# 351 "data/maps/DropperPoint/scripts.pory"
DropperPoint_Movement_CalvinJump2:
# 353 "data/maps/DropperPoint/scripts.pory"
	jump_2_up
# 354 "data/maps/DropperPoint/scripts.pory"
	face_right
	step_end

# 357 "data/maps/DropperPoint/scripts.pory"
DropperPoint_Movement_MorganGoToBag:
# 359 "data/maps/DropperPoint/scripts.pory"
	walk_right
# 359 "data/maps/DropperPoint/scripts.pory"
	walk_right
# 360 "data/maps/DropperPoint/scripts.pory"
	delay_16
# 361 "data/maps/DropperPoint/scripts.pory"
	walk_right
# 361 "data/maps/DropperPoint/scripts.pory"
	walk_right
	step_end

# 364 "data/maps/DropperPoint/scripts.pory"
DropperPoint_Movement_MorganRunToPlayer:
# 366 "data/maps/DropperPoint/scripts.pory"
	walk_fast_right
# 366 "data/maps/DropperPoint/scripts.pory"
	walk_fast_right
# 366 "data/maps/DropperPoint/scripts.pory"
	walk_fast_right
# 366 "data/maps/DropperPoint/scripts.pory"
	walk_fast_right
# 367 "data/maps/DropperPoint/scripts.pory"
	walk_fast_up
# 368 "data/maps/DropperPoint/scripts.pory"
	face_down
	step_end

# 371 "data/maps/DropperPoint/scripts.pory"
DropperPoint_Movement_RushForward:
# 373 "data/maps/DropperPoint/scripts.pory"
	walk_fast_up
# 373 "data/maps/DropperPoint/scripts.pory"
	walk_fast_up
	step_end

# 376 "data/maps/DropperPoint/scripts.pory"
DropperPoint_Movement_Jump:
# 378 "data/maps/DropperPoint/scripts.pory"
	jump_in_place_down
	step_end

# 381 "data/maps/DropperPoint/scripts.pory"
DropperPoint_Movement_StepBack:
# 383 "data/maps/DropperPoint/scripts.pory"
	walk_down
# 384 "data/maps/DropperPoint/scripts.pory"
	face_up
	step_end

# 387 "data/maps/DropperPoint/scripts.pory"
DropperPoint_Movement_MorganGoToBagAgain:
# 389 "data/maps/DropperPoint/scripts.pory"
	walk_left
# 390 "data/maps/DropperPoint/scripts.pory"
	face_up
	step_end

# 393 "data/maps/DropperPoint/scripts.pory"
DropperPoint_Movement_CalvinStartWalkingAway:
# 395 "data/maps/DropperPoint/scripts.pory"
	jump_2_down
# 396 "data/maps/DropperPoint/scripts.pory"
	walk_down
# 396 "data/maps/DropperPoint/scripts.pory"
	walk_down
# 397 "data/maps/DropperPoint/scripts.pory"
	walk_right
# 397 "data/maps/DropperPoint/scripts.pory"
	walk_right
# 397 "data/maps/DropperPoint/scripts.pory"
	walk_right
# 397 "data/maps/DropperPoint/scripts.pory"
	walk_right
# 397 "data/maps/DropperPoint/scripts.pory"
	walk_right
# 398 "data/maps/DropperPoint/scripts.pory"
	walk_down
# 398 "data/maps/DropperPoint/scripts.pory"
	walk_down
# 398 "data/maps/DropperPoint/scripts.pory"
	walk_down
# 399 "data/maps/DropperPoint/scripts.pory"
	walk_right
# 399 "data/maps/DropperPoint/scripts.pory"
	walk_right
# 399 "data/maps/DropperPoint/scripts.pory"
	walk_right
# 399 "data/maps/DropperPoint/scripts.pory"
	walk_right
	step_end

# 402 "data/maps/DropperPoint/scripts.pory"
DropperPoint_Movement_MorganStartWalkingAway:
# 404 "data/maps/DropperPoint/scripts.pory"
	walk_in_place_up
# 405 "data/maps/DropperPoint/scripts.pory"
	delay_16
# 406 "data/maps/DropperPoint/scripts.pory"
	walk_right
# 407 "data/maps/DropperPoint/scripts.pory"
	walk_down
# 408 "data/maps/DropperPoint/scripts.pory"
	walk_right
# 408 "data/maps/DropperPoint/scripts.pory"
	walk_right
# 409 "data/maps/DropperPoint/scripts.pory"
	delay_8
# 410 "data/maps/DropperPoint/scripts.pory"
	face_left
# 411 "data/maps/DropperPoint/scripts.pory"
	delay_16
# 412 "data/maps/DropperPoint/scripts.pory"
	face_right
# 413 "data/maps/DropperPoint/scripts.pory"
	delay_16
# 413 "data/maps/DropperPoint/scripts.pory"
	delay_16
# 414 "data/maps/DropperPoint/scripts.pory"
	face_left
# 415 "data/maps/DropperPoint/scripts.pory"
	delay_16
	step_end

# 418 "data/maps/DropperPoint/scripts.pory"
DropperPoint_Movement_MorganFinishWalkingAway:
# 420 "data/maps/DropperPoint/scripts.pory"
	lock_facing_direction
# 421 "data/maps/DropperPoint/scripts.pory"
	walk_slow_right
# 422 "data/maps/DropperPoint/scripts.pory"
	jump_left
# 423 "data/maps/DropperPoint/scripts.pory"
	unlock_facing_direction
# 424 "data/maps/DropperPoint/scripts.pory"
	face_right
# 425 "data/maps/DropperPoint/scripts.pory"
	delay_16
# 425 "data/maps/DropperPoint/scripts.pory"
	delay_16
# 426 "data/maps/DropperPoint/scripts.pory"
	walk_fast_down
# 426 "data/maps/DropperPoint/scripts.pory"
	walk_fast_down
# 426 "data/maps/DropperPoint/scripts.pory"
	walk_fast_down
# 426 "data/maps/DropperPoint/scripts.pory"
	walk_fast_down
# 427 "data/maps/DropperPoint/scripts.pory"
	walk_fast_right
# 427 "data/maps/DropperPoint/scripts.pory"
	walk_fast_right
# 427 "data/maps/DropperPoint/scripts.pory"
	walk_fast_right
# 427 "data/maps/DropperPoint/scripts.pory"
	walk_fast_right
# 427 "data/maps/DropperPoint/scripts.pory"
	walk_fast_right
	step_end

# 430 "data/maps/DropperPoint/scripts.pory"
DropperPoint_Movement_ComeBack:
# 432 "data/maps/DropperPoint/scripts.pory"
	walk_left
# 432 "data/maps/DropperPoint/scripts.pory"
	walk_left
# 432 "data/maps/DropperPoint/scripts.pory"
	walk_left
# 432 "data/maps/DropperPoint/scripts.pory"
	walk_left
	step_end

DropperPoint_Sign_Text_0:
# 26 "data/maps/DropperPoint/scripts.pory"
	.string "{EMPHASIS_BLUE}DROPPER POINT{EMPHASIS_OFF}\n"
	.string "“Pick up a fresh start.”$"

DropperPoint_EventScript_Morgan_Text_0:
# 58 "data/maps/DropperPoint/scripts.pory"
	.string "Mmm…\n"
	.string "Huh…?$"

DropperPoint_EventScript_Morgan_Text_1:
# 62 "data/maps/DropperPoint/scripts.pory"
	.string "Huh? Where am I!? Who are you?\p"
	.string "…{PLAYER}? Wait, I think I know you…\n"
	.string "We go to the same university.\p"
	.string "I sit behind you sometimes…\n"
	.string "You might not know me.\p"
	.string "My name's Morgan.\n"
	.string "…do you know where we are?$"

DropperPoint_EventScript_MorganAwake_Text_0:
# 73 "data/maps/DropperPoint/scripts.pory"
	.string "W-what is that thing!?\n"
	.string "Do something, {PLAYER}!$"

DropperPoint_EventScript_MorganAwake_Text_1:
# 77 "data/maps/DropperPoint/scripts.pory"
	.string "Am I dreaming…?\n"
	.string "Maybe the rumors were true…$"

DropperPoint_EventScript_Calvin_Text_0:
# 84 "data/maps/DropperPoint/scripts.pory"
	.string "Five more minutes, mom…\n"
	.string "Zzzzz-huh?$"

DropperPoint_EventScript_Calvin_Text_1:
# 88 "data/maps/DropperPoint/scripts.pory"
	.string "Whoa! {PLAYER}!? What are you\n"
	.string "doing in my…\p"
	.string "Hey, this isn't my room!\n"
	.string "Where are we? How'd we get here?\p"
	.string "Huh…you don't know me? I've seen\n"
	.string "you around on campus. Name's Calvin.\p"
	.string "But really, where are we, anyway?$"

DropperPoint_EventScript_CalvinAwake_Text_0:
# 97 "data/maps/DropperPoint/scripts.pory"
	.string "Last thing I remember is, uh…\n"
	.string "I don't remember…\p"
	.string "I need some coffee…$"

DropperPoint_TriggerScript_Bag_Text_0:
# 115 "data/maps/DropperPoint/scripts.pory"
	.string "Huh…? {PLAYER}, is that you?\n"
	.string "It's me, Calvin, from uni!\l"
	.string "Where the heck are we?$"

DropperPoint_TriggerScript_Bag_Text_1:
# 130 "data/maps/DropperPoint/scripts.pory"
	.string "Urgh…weird dream…\p"
	.string "Wait, are you {PLAYER}?\n"
	.string "I recognize you from college.\p"
	.string "What is this place? I don't remember\n"
	.string "how I got here…$"

DropperPoint_TriggerScript_Bag_Text_2:
# 137 "data/maps/DropperPoint/scripts.pory"
	.string "Did'ja find something, {PLAYER}?\n"
	.string "Let me see.$"

DropperPoint_TriggerScript_Bag_Text_3:
# 157 "data/maps/DropperPoint/scripts.pory"
	.string "So…not to point out the obvious,\n"
	.string "but nobody knows where we are or\l"
	.string "how we got here, right…?$"

DropperPoint_TriggerScript_Bag_Text_4:
# 159 "data/maps/DropperPoint/scripts.pory"
	.string "Sure doesn't seem like it.\n"
	.string "Last I remember, I took that dare to\l"
	.string "camp out in those creepy ruins.$"

DropperPoint_TriggerScript_Bag_Text_5:
# 161 "data/maps/DropperPoint/scripts.pory"
	.string "The ruins…! Do you think that maybe…\p"
	.string "No, it's too silly. Never mind.$"

DropperPoint_TriggerScript_Bag_Text_6:
# 163 "data/maps/DropperPoint/scripts.pory"
	.string "Some punk probably just moved us\n"
	.string "while we were sleeping as a prank.\p"
	.string "I'll look up a map.$"

DropperPoint_TriggerScript_Bag_Text_7:
# 170 "data/maps/DropperPoint/scripts.pory"
	.string "Dang, no signal.$"

DropperPoint_TriggerScript_Bag_Text_8:
# 185 "data/maps/DropperPoint/scripts.pory"
	.string "W-what was that noise?$"

DropperPoint_TriggerScript_Bag_Text_9:
# 187 "data/maps/DropperPoint/scripts.pory"
	.string "Relax. It was just a wave, or…$"

DropperPoint_TriggerScript_Bag_Text_10:
# 212 "data/maps/DropperPoint/scripts.pory"
	.string "Spchwerrrrrr!$"

DropperPoint_TriggerScript_Bag_Text_11:
# 215 "data/maps/DropperPoint/scripts.pory"
	.string "MORGAN: Aaahh! What is that thing!?\n"
	.string "CALVIN: Punch it or something!$"

DropperPoint_EventScript_Bag_Text_0:
# 244 "data/maps/DropperPoint/scripts.pory"
	.string "Give a nickname to your {STR_VAR_1}?$"

DropperPoint_EventScript_Bag_Text_1:
# 258 "data/maps/DropperPoint/scripts.pory"
	.string "How'd you make that monster appear?$"

DropperPoint_EventScript_Bag_Text_2:
# 260 "data/maps/DropperPoint/scripts.pory"
	.string "Huh? The bag…? Let me see…$"

DropperPoint_EventScript_Bag_Text_3:
# 267 "data/maps/DropperPoint/scripts.pory"
	.string "What? These look like…Poké Balls…\n"
	.string "These monsters are…Pocket Monsters?$"

DropperPoint_EventScript_Bag_Text_4:
# 269 "data/maps/DropperPoint/scripts.pory"
	.string "Pokémon? Isn't that a video game?$"

DropperPoint_EventScript_Bag_Text_5:
# 271 "data/maps/DropperPoint/scripts.pory"
	.string "See for yourself! They're here!$"

DropperPoint_EventScript_Bag_Text_6:
# 277 "data/maps/DropperPoint/scripts.pory"
	.string "Huh…well whatever they are, if they\n"
	.string "can protect us from monsters,\l"
	.string "we'd better each take one.\l"
	.string "You can keep that one, {PLAYER}.$"

DropperPoint_EventScript_Bag_Text_7:
# 280 "data/maps/DropperPoint/scripts.pory"
	.string "I don't recognize this Pokémon, but\n"
	.string "it's still kind of exciting…\l"
	.string "I wish I had this dream every night.$"

DropperPoint_EventScript_Bag_Text_8:
# 282 "data/maps/DropperPoint/scripts.pory"
	.string "We'd better get moving. If there's\n"
	.string "monsters about, we'd better hope we\l"
	.string "find a town before more show up.$"

DropperPoint_EventScript_Bag_Text_9:
# 284 "data/maps/DropperPoint/scripts.pory"
	.string "Oh, yes. Hmm…maybe these Pokémon\n"
	.string "belong to someone who lives nearby?\p"
	.string "I'll bring the bag with me, just in case.$"

DropperPoint_EventScript_Bag_Text_10:
# 295 "data/maps/DropperPoint/scripts.pory"
	.string "I hope you come too, {PLAYER}. I mean…\n"
	.string "Safety in numbers and all that, right?$"

DropperPoint_TriggerScript_Roadblock_Text_0:
# 312 "data/maps/DropperPoint/scripts.pory"
	.string "{PLAYER}! Where ya going? There's\n"
	.string "something here you should check out!$"

DropperPoint_TriggerScript_Roadblock_Text_1:
# 316 "data/maps/DropperPoint/scripts.pory"
	.string "What about those other people…?$"
