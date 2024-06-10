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
	end


DropperPoint_Sign::
# 27 "data/maps/DropperPoint/scripts.pory"
	msgbox DropperPoint_Sign_Text_0, MSGBOX_SIGN
	return


DropperPoint_EventScript_WakeRival::
# 32 "data/maps/DropperPoint/scripts.pory"
	applymovement VAR_LAST_TALKED, DropperPoint_Movement_WakeUp
# 33 "data/maps/DropperPoint/scripts.pory"
	waitmovement 0
# 34 "data/maps/DropperPoint/scripts.pory"
	playse SE_PIN
# 35 "data/maps/DropperPoint/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_ExclamationMark
# 36 "data/maps/DropperPoint/scripts.pory"
	waitmovement 0
# 37 "data/maps/DropperPoint/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_Delay48
# 38 "data/maps/DropperPoint/scripts.pory"
	waitmovement 0
# 39 "data/maps/DropperPoint/scripts.pory"
	playse SE_BIKE_HOP
# 40 "data/maps/DropperPoint/scripts.pory"
	removeobject VAR_LAST_TALKED
	return


DropperPoint_CallScript_RivalGreetPlayer::
# 46 "data/maps/DropperPoint/scripts.pory"
	closemessage
# 47 "data/maps/DropperPoint/scripts.pory"
	call DropperPoint_EventScript_WakeRival
# 48 "data/maps/DropperPoint/scripts.pory"
	addobject VAR_TEMP_1
# 49 "data/maps/DropperPoint/scripts.pory"
	applymovement VAR_TEMP_1, DropperPoint_Movement_WakeJump
# 50 "data/maps/DropperPoint/scripts.pory"
	waitmovement 0
# 51 "data/maps/DropperPoint/scripts.pory"
	applymovement VAR_TEMP_1, Common_Movement_FacePlayer
# 52 "data/maps/DropperPoint/scripts.pory"
	waitmovement 0
	return


DropperPoint_EventScript_Morgan::
# 58 "data/maps/DropperPoint/scripts.pory"
	lock
# 59 "data/maps/DropperPoint/scripts.pory"
	msgbox DropperPoint_EventScript_Morgan_Text_0, MSGBOX_DEFAULT
# 60 "data/maps/DropperPoint/scripts.pory"
	setvar VAR_TEMP_1, 3
# 61 "data/maps/DropperPoint/scripts.pory"
	call DropperPoint_CallScript_RivalGreetPlayer
# 62 "data/maps/DropperPoint/scripts.pory"
	clearflag FLAG_HIDE_MORGAN_INTRO
# 63 "data/maps/DropperPoint/scripts.pory"
	msgbox DropperPoint_EventScript_Morgan_Text_1, MSGBOX_DEFAULT
# 65 "data/maps/DropperPoint/scripts.pory"
	setflag FLAG_FAVORED_MORGAN
# 66 "data/maps/DropperPoint/scripts.pory"
	release
	return


DropperPoint_EventScript_MorganAwake::
# 71 "data/maps/DropperPoint/scripts.pory"
	speakername SpeakerName_Morgan
# 72 "data/maps/DropperPoint/scripts.pory"
	compare VAR_FONEI_COAST_STATE, 2
	goto_if_eq DropperPoint_EventScript_MorganAwake_1
# 78 "data/maps/DropperPoint/scripts.pory"
	msgbox DropperPoint_EventScript_MorganAwake_Text_1, MSGBOX_NPC
	return

DropperPoint_EventScript_MorganAwake_1:
# 74 "data/maps/DropperPoint/scripts.pory"
	msgbox DropperPoint_EventScript_MorganAwake_Text_0, MSGBOX_AUTOCLOSE
	return


DropperPoint_EventScript_Calvin::
# 84 "data/maps/DropperPoint/scripts.pory"
	lock
# 85 "data/maps/DropperPoint/scripts.pory"
	msgbox DropperPoint_EventScript_Calvin_Text_0, MSGBOX_DEFAULT
# 86 "data/maps/DropperPoint/scripts.pory"
	setvar VAR_TEMP_1, 2
# 87 "data/maps/DropperPoint/scripts.pory"
	call DropperPoint_CallScript_RivalGreetPlayer
# 88 "data/maps/DropperPoint/scripts.pory"
	clearflag FLAG_HIDE_CALVIN_INTRO
# 89 "data/maps/DropperPoint/scripts.pory"
	msgbox DropperPoint_EventScript_Calvin_Text_1, MSGBOX_DEFAULT
# 91 "data/maps/DropperPoint/scripts.pory"
	setflag FLAG_FAVORED_CALVIN
# 92 "data/maps/DropperPoint/scripts.pory"
	release
	return


DropperPoint_EventScript_CalvinAwake::
# 97 "data/maps/DropperPoint/scripts.pory"
	speakername SpeakerName_Calvin
# 98 "data/maps/DropperPoint/scripts.pory"
	msgbox DropperPoint_EventScript_CalvinAwake_Text_0, MSGBOX_NPC
	return


DropperPoint_TriggerScript_Bag::
# 103 "data/maps/DropperPoint/scripts.pory"
	lockall
# 104 "data/maps/DropperPoint/scripts.pory"
	goto_if_unset FLAG_FAVORED_CALVIN, DropperPoint_TriggerScript_Bag_2
DropperPoint_TriggerScript_Bag_1:
# 119 "data/maps/DropperPoint/scripts.pory"
	goto_if_unset FLAG_FAVORED_MORGAN, DropperPoint_TriggerScript_Bag_5
DropperPoint_TriggerScript_Bag_4:
# 135 "data/maps/DropperPoint/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 136 "data/maps/DropperPoint/scripts.pory"
	waitmovement 0
# 137 "data/maps/DropperPoint/scripts.pory"
	speakername SpeakerName_Calvin
# 138 "data/maps/DropperPoint/scripts.pory"
	msgbox DropperPoint_TriggerScript_Bag_Text_2, MSGBOX_DEFAULT
# 139 "data/maps/DropperPoint/scripts.pory"
	closemessage
# 140 "data/maps/DropperPoint/scripts.pory"
	setmetatile 12, 11, 0x36C, FALSE
# 141 "data/maps/DropperPoint/scripts.pory"
	special DrawWholeMapView
# 142 "data/maps/DropperPoint/scripts.pory"
	applymovement 2, DropperPoint_Movement_CalvinJump1
# 143 "data/maps/DropperPoint/scripts.pory"
	playse SE_BIKE_HOP
# 144 "data/maps/DropperPoint/scripts.pory"
	waitse
# 145 "data/maps/DropperPoint/scripts.pory"
	waitmovement 0
# 146 "data/maps/DropperPoint/scripts.pory"
	applymovement 2, DropperPoint_Movement_CalvinJump2
# 147 "data/maps/DropperPoint/scripts.pory"
	playse SE_BIKE_HOP
# 148 "data/maps/DropperPoint/scripts.pory"
	waitmovement 0
# 149 "data/maps/DropperPoint/scripts.pory"
	setmetatile 12, 11, 0x2E1, FALSE
# 150 "data/maps/DropperPoint/scripts.pory"
	special DrawWholeMapView
# 151 "data/maps/DropperPoint/scripts.pory"
	applymovement 3, DropperPoint_Movement_MorganGoToBag
# 152 "data/maps/DropperPoint/scripts.pory"
	waitmovement 0
# 153 "data/maps/DropperPoint/scripts.pory"
	applymovement 2, Common_Movement_FaceLeft
# 154 "data/maps/DropperPoint/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 155 "data/maps/DropperPoint/scripts.pory"
	waitmovement 0
# 156 "data/maps/DropperPoint/scripts.pory"
	lockall
# 157 "data/maps/DropperPoint/scripts.pory"
	speakername SpeakerName_Morgan
# 158 "data/maps/DropperPoint/scripts.pory"
	msgbox DropperPoint_TriggerScript_Bag_Text_3, MSGBOX_DEFAULT
# 159 "data/maps/DropperPoint/scripts.pory"
	speakername SpeakerName_Calvin
# 160 "data/maps/DropperPoint/scripts.pory"
	msgbox DropperPoint_TriggerScript_Bag_Text_4, MSGBOX_DEFAULT
# 161 "data/maps/DropperPoint/scripts.pory"
	speakername SpeakerName_Morgan
# 162 "data/maps/DropperPoint/scripts.pory"
	msgbox DropperPoint_TriggerScript_Bag_Text_5, MSGBOX_DEFAULT
# 163 "data/maps/DropperPoint/scripts.pory"
	speakername SpeakerName_Calvin
# 164 "data/maps/DropperPoint/scripts.pory"
	msgbox DropperPoint_TriggerScript_Bag_Text_6, MSGBOX_DEFAULT
# 165 "data/maps/DropperPoint/scripts.pory"
	closemessage
# 166 "data/maps/DropperPoint/scripts.pory"
	lockall
# 167 "data/maps/DropperPoint/scripts.pory"
	applymovement 2, Common_Movement_FaceUp
# 168 "data/maps/DropperPoint/scripts.pory"
	waitmovement 0
# 169 "data/maps/DropperPoint/scripts.pory"
	delay 60
# 170 "data/maps/DropperPoint/scripts.pory"
	speakername SpeakerName_Calvin
# 171 "data/maps/DropperPoint/scripts.pory"
	msgbox DropperPoint_TriggerScript_Bag_Text_7, MSGBOX_AUTOCLOSE
# 172 "data/maps/DropperPoint/scripts.pory"
	addobject 5
# 173 "data/maps/DropperPoint/scripts.pory"
	setobjectxy 5, 13, 14
# 174 "data/maps/DropperPoint/scripts.pory"
	applymovement 5, Common_Movement_WalkUp
# 175 "data/maps/DropperPoint/scripts.pory"
	playse SE_BALLOON_BLUE
# 176 "data/maps/DropperPoint/scripts.pory"
	waitse
# 177 "data/maps/DropperPoint/scripts.pory"
	waitmovement 0
# 178 "data/maps/DropperPoint/scripts.pory"
	delay 60
# 179 "data/maps/DropperPoint/scripts.pory"
	applymovement 3, DropperPoint_Movement_MorganRunToPlayer
# 180 "data/maps/DropperPoint/scripts.pory"
	waitmovement 0
# 181 "data/maps/DropperPoint/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 182 "data/maps/DropperPoint/scripts.pory"
	waitmovement 0
# 183 "data/maps/DropperPoint/scripts.pory"
	applymovement 2, Common_Movement_FaceRight
# 184 "data/maps/DropperPoint/scripts.pory"
	waitmovement 0
# 185 "data/maps/DropperPoint/scripts.pory"
	speakername SpeakerName_Morgan
# 186 "data/maps/DropperPoint/scripts.pory"
	msgbox DropperPoint_TriggerScript_Bag_Text_8, MSGBOX_DEFAULT
# 187 "data/maps/DropperPoint/scripts.pory"
	speakername SpeakerName_Calvin
# 188 "data/maps/DropperPoint/scripts.pory"
	msgbox DropperPoint_TriggerScript_Bag_Text_9, MSGBOX_AUTOCLOSE
# 189 "data/maps/DropperPoint/scripts.pory"
	applymovement 5, Common_Movement_WalkUp2
# 190 "data/maps/DropperPoint/scripts.pory"
	playse SE_BALLOON_BLUE
# 191 "data/maps/DropperPoint/scripts.pory"
	waitse
# 192 "data/maps/DropperPoint/scripts.pory"
	playse SE_BALLOON_BLUE
# 193 "data/maps/DropperPoint/scripts.pory"
	waitse
# 194 "data/maps/DropperPoint/scripts.pory"
	waitmovement 0
# 195 "data/maps/DropperPoint/scripts.pory"
	applymovement 2, Common_Movement_FaceDown
# 196 "data/maps/DropperPoint/scripts.pory"
	applymovement 3, Common_Movement_FaceDown
# 197 "data/maps/DropperPoint/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
# 198 "data/maps/DropperPoint/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 199 "data/maps/DropperPoint/scripts.pory"
	lockall
# 200 "data/maps/DropperPoint/scripts.pory"
	delay 60
# 201 "data/maps/DropperPoint/scripts.pory"
	delay 60
# 202 "data/maps/DropperPoint/scripts.pory"
	playbgm MUS_HELP, TRUE
# 203 "data/maps/DropperPoint/scripts.pory"
	applymovement 5, DropperPoint_Movement_RushForward
# 204 "data/maps/DropperPoint/scripts.pory"
	playse SE_BALLOON_BLUE
# 205 "data/maps/DropperPoint/scripts.pory"
	waitse
# 206 "data/maps/DropperPoint/scripts.pory"
	playse SE_BALLOON_BLUE
# 207 "data/maps/DropperPoint/scripts.pory"
	waitse
# 208 "data/maps/DropperPoint/scripts.pory"
	applymovement 2, Common_Movement_ExclamationMark
# 209 "data/maps/DropperPoint/scripts.pory"
	applymovement 3, DropperPoint_Movement_Jump
# 210 "data/maps/DropperPoint/scripts.pory"
	waitmovement 0
# 211 "data/maps/DropperPoint/scripts.pory"
	waitse
# 212 "data/maps/DropperPoint/scripts.pory"
	playmoncry SPECIES_SLOSHMOSH, CRY_MODE_NORMAL
# 213 "data/maps/DropperPoint/scripts.pory"
	msgbox DropperPoint_TriggerScript_Bag_Text_10, MSGBOX_DEFAULT
# 214 "data/maps/DropperPoint/scripts.pory"
	waitmoncry
# 215 "data/maps/DropperPoint/scripts.pory"
	closemessage
# 216 "data/maps/DropperPoint/scripts.pory"
	msgbox DropperPoint_TriggerScript_Bag_Text_11, MSGBOX_DEFAULT
# 217 "data/maps/DropperPoint/scripts.pory"
	closemessage
# 218 "data/maps/DropperPoint/scripts.pory"
	setvar VAR_FONEI_COAST_STATE, 2
# 219 "data/maps/DropperPoint/scripts.pory"
	setrespawn HEAL_LOCATION_CRAN_TOWN
# 220 "data/maps/DropperPoint/scripts.pory"
	setflag FLAG_HIDE_FONEI_COAST_NPCS
# 221 "data/maps/DropperPoint/scripts.pory"
	releaseall
	return

DropperPoint_TriggerScript_Bag_2:
# 106 "data/maps/DropperPoint/scripts.pory"
	setvar VAR_LAST_TALKED, 8
# 107 "data/maps/DropperPoint/scripts.pory"
	call DropperPoint_EventScript_WakeRival
# 108 "data/maps/DropperPoint/scripts.pory"
	addobject 2
# 109 "data/maps/DropperPoint/scripts.pory"
	clearflag FLAG_HIDE_CALVIN_INTRO
# 110 "data/maps/DropperPoint/scripts.pory"
	applymovement 2, DropperPoint_Movement_WakeJump
# 111 "data/maps/DropperPoint/scripts.pory"
	waitmovement 0
# 112 "data/maps/DropperPoint/scripts.pory"
	applymovement 2, Common_Movement_FaceUp
# 113 "data/maps/DropperPoint/scripts.pory"
	waitmovement 0
# 114 "data/maps/DropperPoint/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
# 115 "data/maps/DropperPoint/scripts.pory"
	waitmovement 0
# 116 "data/maps/DropperPoint/scripts.pory"
	msgbox DropperPoint_TriggerScript_Bag_Text_0, MSGBOX_DEFAULT
# 117 "data/maps/DropperPoint/scripts.pory"
	closemessage
	goto DropperPoint_TriggerScript_Bag_1

DropperPoint_TriggerScript_Bag_5:
# 121 "data/maps/DropperPoint/scripts.pory"
	setvar VAR_LAST_TALKED, 6
# 122 "data/maps/DropperPoint/scripts.pory"
	call DropperPoint_EventScript_WakeRival
# 123 "data/maps/DropperPoint/scripts.pory"
	addobject 3
# 124 "data/maps/DropperPoint/scripts.pory"
	clearflag FLAG_HIDE_MORGAN_INTRO
# 125 "data/maps/DropperPoint/scripts.pory"
	applymovement 3, DropperPoint_Movement_WakeJump
# 126 "data/maps/DropperPoint/scripts.pory"
	waitmovement 0
# 127 "data/maps/DropperPoint/scripts.pory"
	applymovement 3, Common_Movement_FaceRight
# 128 "data/maps/DropperPoint/scripts.pory"
	waitmovement 0
# 129 "data/maps/DropperPoint/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 130 "data/maps/DropperPoint/scripts.pory"
	waitmovement 0
# 131 "data/maps/DropperPoint/scripts.pory"
	msgbox DropperPoint_TriggerScript_Bag_Text_1, MSGBOX_DEFAULT
# 133 "data/maps/DropperPoint/scripts.pory"
	closemessage
	goto DropperPoint_TriggerScript_Bag_4


DropperPoint_EventScript_Sloshmosh::
# 226 "data/maps/DropperPoint/scripts.pory"
	lock
# 227 "data/maps/DropperPoint/scripts.pory"
	faceplayer
# 228 "data/maps/DropperPoint/scripts.pory"
	waitse
# 229 "data/maps/DropperPoint/scripts.pory"
	playmoncry SPECIES_SLOSHMOSH, CRY_MODE_NORMAL
# 230 "data/maps/DropperPoint/scripts.pory"
	msgbox DropperPoint_TriggerScript_Bag_Text_10, MSGBOX_DEFAULT
# 231 "data/maps/DropperPoint/scripts.pory"
	waitmoncry
# 232 "data/maps/DropperPoint/scripts.pory"
	release
	return


DropperPoint_EventScript_Bag::
# 237 "data/maps/DropperPoint/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 238 "data/maps/DropperPoint/scripts.pory"
	fadescreen FADE_TO_BLACK
# 239 "data/maps/DropperPoint/scripts.pory"
	removeobject 5
# 240 "data/maps/DropperPoint/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 241 "data/maps/DropperPoint/scripts.pory"
	waitmovement 0
# 242 "data/maps/DropperPoint/scripts.pory"
	special ChooseStarter
# 243 "data/maps/DropperPoint/scripts.pory"
	waitstate
# 244 "data/maps/DropperPoint/scripts.pory"
	bufferleadmonspeciesname STR_VAR_1
# 245 "data/maps/DropperPoint/scripts.pory"
	msgbox DropperPoint_EventScript_Bag_Text_0, MSGBOX_YESNO
# 246 "data/maps/DropperPoint/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq DropperPoint_EventScript_Bag_2
DropperPoint_EventScript_Bag_1:
# 251 "data/maps/DropperPoint/scripts.pory"
	closemessage
# 252 "data/maps/DropperPoint/scripts.pory"
	lockall
# 253 "data/maps/DropperPoint/scripts.pory"
	applymovement 3, Common_Movement_FaceLeft
# 254 "data/maps/DropperPoint/scripts.pory"
	applymovement 2, Common_Movement_FaceDown
# 255 "data/maps/DropperPoint/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, DropperPoint_Movement_StepBack
# 256 "data/maps/DropperPoint/scripts.pory"
	waitmovement 0
# 257 "data/maps/DropperPoint/scripts.pory"
	lockall
# 258 "data/maps/DropperPoint/scripts.pory"
	speakername SpeakerName_Calvin
# 259 "data/maps/DropperPoint/scripts.pory"
	msgbox DropperPoint_EventScript_Bag_Text_1, MSGBOX_DEFAULT
# 260 "data/maps/DropperPoint/scripts.pory"
	speakername SpeakerName_Morgan
# 261 "data/maps/DropperPoint/scripts.pory"
	msgbox DropperPoint_EventScript_Bag_Text_2, MSGBOX_AUTOCLOSE
# 262 "data/maps/DropperPoint/scripts.pory"
	special HealPlayerParty
# 263 "data/maps/DropperPoint/scripts.pory"
	applymovement 3, DropperPoint_Movement_MorganGoToBagAgain
# 264 "data/maps/DropperPoint/scripts.pory"
	waitmovement 0
# 265 "data/maps/DropperPoint/scripts.pory"
	lockall
# 266 "data/maps/DropperPoint/scripts.pory"
	delay 30
# 267 "data/maps/DropperPoint/scripts.pory"
	speakername SpeakerName_Morgan
# 268 "data/maps/DropperPoint/scripts.pory"
	msgbox DropperPoint_EventScript_Bag_Text_3, MSGBOX_DEFAULT
# 269 "data/maps/DropperPoint/scripts.pory"
	speakername SpeakerName_Calvin
# 270 "data/maps/DropperPoint/scripts.pory"
	msgbox DropperPoint_EventScript_Bag_Text_4, MSGBOX_DEFAULT
# 271 "data/maps/DropperPoint/scripts.pory"
	speakername SpeakerName_Morgan
# 272 "data/maps/DropperPoint/scripts.pory"
	msgbox DropperPoint_EventScript_Bag_Text_5, MSGBOX_AUTOCLOSE
# 273 "data/maps/DropperPoint/scripts.pory"
	applymovement 2, Common_Movement_FaceRight
# 274 "data/maps/DropperPoint/scripts.pory"
	waitmovement 0
# 275 "data/maps/DropperPoint/scripts.pory"
	lockall
# 276 "data/maps/DropperPoint/scripts.pory"
	delay 30
# 277 "data/maps/DropperPoint/scripts.pory"
	speakername SpeakerName_Calvin
# 278 "data/maps/DropperPoint/scripts.pory"
	msgbox DropperPoint_EventScript_Bag_Text_6
# 279 "data/maps/DropperPoint/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceRight
# 280 "data/maps/DropperPoint/scripts.pory"
	speakername SpeakerName_Morgan
# 281 "data/maps/DropperPoint/scripts.pory"
	msgbox DropperPoint_EventScript_Bag_Text_7, MSGBOX_DEFAULT
# 282 "data/maps/DropperPoint/scripts.pory"
	speakername SpeakerName_Calvin
# 283 "data/maps/DropperPoint/scripts.pory"
	msgbox DropperPoint_EventScript_Bag_Text_8
# 284 "data/maps/DropperPoint/scripts.pory"
	speakername SpeakerName_Morgan
# 285 "data/maps/DropperPoint/scripts.pory"
	msgbox DropperPoint_EventScript_Bag_Text_9, MSGBOX_AUTOCLOSE
# 286 "data/maps/DropperPoint/scripts.pory"
	applymovement 2, DropperPoint_Movement_CalvinStartWalkingAway
# 287 "data/maps/DropperPoint/scripts.pory"
	playse SE_BIKE_HOP
# 288 "data/maps/DropperPoint/scripts.pory"
	applymovement 3, DropperPoint_Movement_MorganStartWalkingAway
# 289 "data/maps/DropperPoint/scripts.pory"
	removeobject 1
# 290 "data/maps/DropperPoint/scripts.pory"
	waitmovement 0
# 291 "data/maps/DropperPoint/scripts.pory"
	lockall
# 292 "data/maps/DropperPoint/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 293 "data/maps/DropperPoint/scripts.pory"
	waitmovement 0
# 294 "data/maps/DropperPoint/scripts.pory"
	lockall
# 295 "data/maps/DropperPoint/scripts.pory"
	speakername SpeakerName_Morgan
# 296 "data/maps/DropperPoint/scripts.pory"
	msgbox DropperPoint_EventScript_Bag_Text_10, MSGBOX_AUTOCLOSE
# 297 "data/maps/DropperPoint/scripts.pory"
	closemessage
# 298 "data/maps/DropperPoint/scripts.pory"
	applymovement 3, DropperPoint_Movement_MorganFinishWalkingAway
# 299 "data/maps/DropperPoint/scripts.pory"
	waitmovement 0
# 300 "data/maps/DropperPoint/scripts.pory"
	removeobject 2
# 301 "data/maps/DropperPoint/scripts.pory"
	removeobject 3
# 302 "data/maps/DropperPoint/scripts.pory"
	clearflag FLAG_FAVORED_MORGAN
# 303 "data/maps/DropperPoint/scripts.pory"
	clearflag FLAG_FAVORED_CALVIN
# 304 "data/maps/DropperPoint/scripts.pory"
	releaseall
	return

DropperPoint_EventScript_Bag_2:
# 248 "data/maps/DropperPoint/scripts.pory"
	setvar VAR_0x8004, 0
# 249 "data/maps/DropperPoint/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	goto DropperPoint_EventScript_Bag_1


DropperPoint_TriggerScript_Roadblock::
# 309 "data/maps/DropperPoint/scripts.pory"
	lock
# 310 "data/maps/DropperPoint/scripts.pory"
	goto_if_set FLAG_FAVORED_CALVIN, DropperPoint_TriggerScript_Roadblock_2
# 317 "data/maps/DropperPoint/scripts.pory"
	msgbox DropperPoint_TriggerScript_Roadblock_Text_1, MSGBOX_AUTOCLOSE
DropperPoint_TriggerScript_Roadblock_1:
# 319 "data/maps/DropperPoint/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, DropperPoint_Movement_ComeBack
# 320 "data/maps/DropperPoint/scripts.pory"
	waitmovement 0
# 321 "data/maps/DropperPoint/scripts.pory"
	release
	return

DropperPoint_TriggerScript_Roadblock_2:
# 312 "data/maps/DropperPoint/scripts.pory"
	speakername SpeakerName_Calvin
# 313 "data/maps/DropperPoint/scripts.pory"
	msgbox DropperPoint_TriggerScript_Roadblock_Text_0, MSGBOX_AUTOCLOSE
	goto DropperPoint_TriggerScript_Roadblock_1


# 324 "data/maps/DropperPoint/scripts.pory"
DropperPoint_Movement_WakeUp:
# 326 "data/maps/DropperPoint/scripts.pory"
	face_up
# 327 "data/maps/DropperPoint/scripts.pory"
	delay_16
# 328 "data/maps/DropperPoint/scripts.pory"
	face_down
# 329 "data/maps/DropperPoint/scripts.pory"
	delay_8
# 330 "data/maps/DropperPoint/scripts.pory"
	face_up
# 331 "data/maps/DropperPoint/scripts.pory"
	delay_16
# 332 "data/maps/DropperPoint/scripts.pory"
	face_down
# 333 "data/maps/DropperPoint/scripts.pory"
	delay_8
# 334 "data/maps/DropperPoint/scripts.pory"
	face_up
# 335 "data/maps/DropperPoint/scripts.pory"
	delay_16
# 336 "data/maps/DropperPoint/scripts.pory"
	face_left
	step_end

# 339 "data/maps/DropperPoint/scripts.pory"
DropperPoint_Movement_WakeJump:
# 341 "data/maps/DropperPoint/scripts.pory"
	set_visible
# 342 "data/maps/DropperPoint/scripts.pory"
	jump_in_place_down
# 343 "data/maps/DropperPoint/scripts.pory"
	delay_16
# 343 "data/maps/DropperPoint/scripts.pory"
	delay_16
# 344 "data/maps/DropperPoint/scripts.pory"
	step_end

# 347 "data/maps/DropperPoint/scripts.pory"
DropperPoint_Movement_CalvinJump1:
# 349 "data/maps/DropperPoint/scripts.pory"
	jump_2_up
# 350 "data/maps/DropperPoint/scripts.pory"
	walk_up
	step_end

# 353 "data/maps/DropperPoint/scripts.pory"
DropperPoint_Movement_CalvinJump2:
# 355 "data/maps/DropperPoint/scripts.pory"
	jump_2_up
# 356 "data/maps/DropperPoint/scripts.pory"
	face_right
	step_end

# 359 "data/maps/DropperPoint/scripts.pory"
DropperPoint_Movement_MorganGoToBag:
# 361 "data/maps/DropperPoint/scripts.pory"
	walk_right
# 361 "data/maps/DropperPoint/scripts.pory"
	walk_right
# 362 "data/maps/DropperPoint/scripts.pory"
	delay_16
# 363 "data/maps/DropperPoint/scripts.pory"
	walk_right
# 363 "data/maps/DropperPoint/scripts.pory"
	walk_right
	step_end

# 366 "data/maps/DropperPoint/scripts.pory"
DropperPoint_Movement_MorganRunToPlayer:
# 368 "data/maps/DropperPoint/scripts.pory"
	walk_fast_right
# 368 "data/maps/DropperPoint/scripts.pory"
	walk_fast_right
# 368 "data/maps/DropperPoint/scripts.pory"
	walk_fast_right
# 368 "data/maps/DropperPoint/scripts.pory"
	walk_fast_right
# 369 "data/maps/DropperPoint/scripts.pory"
	walk_fast_up
# 370 "data/maps/DropperPoint/scripts.pory"
	face_down
	step_end

# 373 "data/maps/DropperPoint/scripts.pory"
DropperPoint_Movement_RushForward:
# 375 "data/maps/DropperPoint/scripts.pory"
	walk_fast_up
# 375 "data/maps/DropperPoint/scripts.pory"
	walk_fast_up
	step_end

# 378 "data/maps/DropperPoint/scripts.pory"
DropperPoint_Movement_Jump:
# 380 "data/maps/DropperPoint/scripts.pory"
	jump_in_place_down
	step_end

# 383 "data/maps/DropperPoint/scripts.pory"
DropperPoint_Movement_StepBack:
# 385 "data/maps/DropperPoint/scripts.pory"
	walk_down
# 386 "data/maps/DropperPoint/scripts.pory"
	face_up
	step_end

# 389 "data/maps/DropperPoint/scripts.pory"
DropperPoint_Movement_MorganGoToBagAgain:
# 391 "data/maps/DropperPoint/scripts.pory"
	walk_left
# 392 "data/maps/DropperPoint/scripts.pory"
	face_up
	step_end

# 395 "data/maps/DropperPoint/scripts.pory"
DropperPoint_Movement_CalvinStartWalkingAway:
# 397 "data/maps/DropperPoint/scripts.pory"
	jump_2_down
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
# 399 "data/maps/DropperPoint/scripts.pory"
	walk_right
# 400 "data/maps/DropperPoint/scripts.pory"
	walk_down
# 400 "data/maps/DropperPoint/scripts.pory"
	walk_down
# 400 "data/maps/DropperPoint/scripts.pory"
	walk_down
# 401 "data/maps/DropperPoint/scripts.pory"
	walk_right
# 401 "data/maps/DropperPoint/scripts.pory"
	walk_right
# 401 "data/maps/DropperPoint/scripts.pory"
	walk_right
# 401 "data/maps/DropperPoint/scripts.pory"
	walk_right
	step_end

# 404 "data/maps/DropperPoint/scripts.pory"
DropperPoint_Movement_MorganStartWalkingAway:
# 406 "data/maps/DropperPoint/scripts.pory"
	walk_in_place_up
# 407 "data/maps/DropperPoint/scripts.pory"
	delay_16
# 408 "data/maps/DropperPoint/scripts.pory"
	walk_right
# 409 "data/maps/DropperPoint/scripts.pory"
	walk_down
# 410 "data/maps/DropperPoint/scripts.pory"
	walk_right
# 410 "data/maps/DropperPoint/scripts.pory"
	walk_right
# 411 "data/maps/DropperPoint/scripts.pory"
	delay_8
# 412 "data/maps/DropperPoint/scripts.pory"
	face_left
# 413 "data/maps/DropperPoint/scripts.pory"
	delay_16
# 414 "data/maps/DropperPoint/scripts.pory"
	face_right
# 415 "data/maps/DropperPoint/scripts.pory"
	delay_16
# 415 "data/maps/DropperPoint/scripts.pory"
	delay_16
# 416 "data/maps/DropperPoint/scripts.pory"
	face_left
# 417 "data/maps/DropperPoint/scripts.pory"
	delay_16
	step_end

# 420 "data/maps/DropperPoint/scripts.pory"
DropperPoint_Movement_MorganFinishWalkingAway:
# 422 "data/maps/DropperPoint/scripts.pory"
	lock_facing_direction
# 423 "data/maps/DropperPoint/scripts.pory"
	walk_slow_right
# 424 "data/maps/DropperPoint/scripts.pory"
	jump_left
# 425 "data/maps/DropperPoint/scripts.pory"
	unlock_facing_direction
# 426 "data/maps/DropperPoint/scripts.pory"
	face_right
# 427 "data/maps/DropperPoint/scripts.pory"
	delay_16
# 427 "data/maps/DropperPoint/scripts.pory"
	delay_16
# 428 "data/maps/DropperPoint/scripts.pory"
	walk_fast_down
# 428 "data/maps/DropperPoint/scripts.pory"
	walk_fast_down
# 428 "data/maps/DropperPoint/scripts.pory"
	walk_fast_down
# 428 "data/maps/DropperPoint/scripts.pory"
	walk_fast_down
# 429 "data/maps/DropperPoint/scripts.pory"
	walk_fast_right
# 429 "data/maps/DropperPoint/scripts.pory"
	walk_fast_right
# 429 "data/maps/DropperPoint/scripts.pory"
	walk_fast_right
# 429 "data/maps/DropperPoint/scripts.pory"
	walk_fast_right
# 429 "data/maps/DropperPoint/scripts.pory"
	walk_fast_right
	step_end

# 432 "data/maps/DropperPoint/scripts.pory"
DropperPoint_Movement_ComeBack:
# 434 "data/maps/DropperPoint/scripts.pory"
	walk_left
# 434 "data/maps/DropperPoint/scripts.pory"
	walk_left
# 434 "data/maps/DropperPoint/scripts.pory"
	walk_left
# 434 "data/maps/DropperPoint/scripts.pory"
	walk_left
	step_end

DropperPoint_Sign_Text_0:
# 27 "data/maps/DropperPoint/scripts.pory"
	.string "{EMPHASIS_BLUE}DROPPER POINT{EMPHASIS_OFF}\n"
	.string "“Pick up a fresh start.”$"

DropperPoint_EventScript_Morgan_Text_0:
# 59 "data/maps/DropperPoint/scripts.pory"
	.string "Mmm…\n"
	.string "Huh…?$"

DropperPoint_EventScript_Morgan_Text_1:
# 63 "data/maps/DropperPoint/scripts.pory"
	.string "Huh? Where am I!? Who are you?\p"
	.string "…{PLAYER}? Wait, I think I know you…\n"
	.string "We go to the same university.\p"
	.string "I sit behind you sometimes…\n"
	.string "You might not know me.\p"
	.string "My name's Morgan.\n"
	.string "…do you know where we are?$"

DropperPoint_EventScript_MorganAwake_Text_0:
# 74 "data/maps/DropperPoint/scripts.pory"
	.string "W-what is that thing!?\n"
	.string "Do something, {PLAYER}!$"

DropperPoint_EventScript_MorganAwake_Text_1:
# 78 "data/maps/DropperPoint/scripts.pory"
	.string "Am I dreaming…?\n"
	.string "Maybe the rumors were true…$"

DropperPoint_EventScript_Calvin_Text_0:
# 85 "data/maps/DropperPoint/scripts.pory"
	.string "Five more minutes, mom…\n"
	.string "Zzzzz-huh?$"

DropperPoint_EventScript_Calvin_Text_1:
# 89 "data/maps/DropperPoint/scripts.pory"
	.string "Whoa! {PLAYER}!? What are you\n"
	.string "doing in my…\p"
	.string "Hey, this isn't my room!\n"
	.string "Where are we? How'd we get here?\p"
	.string "Huh…you don't know me? I've seen\n"
	.string "you around on campus. Name's Calvin.\p"
	.string "But really, where are we, anyway?$"

DropperPoint_EventScript_CalvinAwake_Text_0:
# 98 "data/maps/DropperPoint/scripts.pory"
	.string "Last thing I remember is, uh…\n"
	.string "I don't remember…\p"
	.string "I need some coffee…$"

DropperPoint_TriggerScript_Bag_Text_0:
# 116 "data/maps/DropperPoint/scripts.pory"
	.string "Huh…? {PLAYER}, is that you?\n"
	.string "It's me, Calvin, from uni!\l"
	.string "Where the heck are we?$"

DropperPoint_TriggerScript_Bag_Text_1:
# 131 "data/maps/DropperPoint/scripts.pory"
	.string "Urgh…weird dream…\p"
	.string "Wait, are you {PLAYER}?\n"
	.string "I recognize you from college.\p"
	.string "What is this place? I don't remember\n"
	.string "how I got here…$"

DropperPoint_TriggerScript_Bag_Text_2:
# 138 "data/maps/DropperPoint/scripts.pory"
	.string "Did'ja find something, {PLAYER}?\n"
	.string "Let me see.$"

DropperPoint_TriggerScript_Bag_Text_3:
# 158 "data/maps/DropperPoint/scripts.pory"
	.string "So…not to point out the obvious,\n"
	.string "but nobody knows where we are or\l"
	.string "how we got here, right…?$"

DropperPoint_TriggerScript_Bag_Text_4:
# 160 "data/maps/DropperPoint/scripts.pory"
	.string "Sure doesn't seem like it.\n"
	.string "Last I remember, I took that dare to\l"
	.string "camp out in those creepy ruins.$"

DropperPoint_TriggerScript_Bag_Text_5:
# 162 "data/maps/DropperPoint/scripts.pory"
	.string "The ruins…! Do you think that maybe…\p"
	.string "No, it's too silly. Never mind.$"

DropperPoint_TriggerScript_Bag_Text_6:
# 164 "data/maps/DropperPoint/scripts.pory"
	.string "Some punk probably just moved us\n"
	.string "while we were sleeping as a prank.\p"
	.string "I'll look up a map.$"

DropperPoint_TriggerScript_Bag_Text_7:
# 171 "data/maps/DropperPoint/scripts.pory"
	.string "Dang, no signal.$"

DropperPoint_TriggerScript_Bag_Text_8:
# 186 "data/maps/DropperPoint/scripts.pory"
	.string "W-what was that noise?$"

DropperPoint_TriggerScript_Bag_Text_9:
# 188 "data/maps/DropperPoint/scripts.pory"
	.string "Relax. It was just a wave, or…$"

DropperPoint_TriggerScript_Bag_Text_10:
# 213 "data/maps/DropperPoint/scripts.pory"
	.string "Spchwerrrrrr!$"

DropperPoint_TriggerScript_Bag_Text_11:
# 216 "data/maps/DropperPoint/scripts.pory"
	.string "MORGAN: Aaahh! What is that thing!?\n"
	.string "CALVIN: Punch it or something!$"

DropperPoint_EventScript_Bag_Text_0:
# 245 "data/maps/DropperPoint/scripts.pory"
	.string "Give a nickname to your {STR_VAR_1}?$"

DropperPoint_EventScript_Bag_Text_1:
# 259 "data/maps/DropperPoint/scripts.pory"
	.string "How'd you make that monster appear?$"

DropperPoint_EventScript_Bag_Text_2:
# 261 "data/maps/DropperPoint/scripts.pory"
	.string "Huh? The bag…? Let me see…$"

DropperPoint_EventScript_Bag_Text_3:
# 268 "data/maps/DropperPoint/scripts.pory"
	.string "What? These look like…Poké Balls…\n"
	.string "These monsters are…Pocket Monsters?$"

DropperPoint_EventScript_Bag_Text_4:
# 270 "data/maps/DropperPoint/scripts.pory"
	.string "Pokémon? Isn't that a video game?$"

DropperPoint_EventScript_Bag_Text_5:
# 272 "data/maps/DropperPoint/scripts.pory"
	.string "See for yourself! They're here!$"

DropperPoint_EventScript_Bag_Text_6:
# 278 "data/maps/DropperPoint/scripts.pory"
	.string "Huh…well whatever they are, if they\n"
	.string "can protect us from monsters,\l"
	.string "we'd better each take one.\l"
	.string "You can keep that one, {PLAYER}.$"

DropperPoint_EventScript_Bag_Text_7:
# 281 "data/maps/DropperPoint/scripts.pory"
	.string "I don't recognize this Pokémon, but\n"
	.string "it's still kind of exciting…\l"
	.string "I wish I had this dream every night.$"

DropperPoint_EventScript_Bag_Text_8:
# 283 "data/maps/DropperPoint/scripts.pory"
	.string "We'd better get moving. If there's\n"
	.string "monsters about, we'd better hope we\l"
	.string "find a town before more show up.$"

DropperPoint_EventScript_Bag_Text_9:
# 285 "data/maps/DropperPoint/scripts.pory"
	.string "Oh, yes. Hmm…maybe these Pokémon\n"
	.string "belong to someone who lives nearby?\p"
	.string "I'll bring the bag with me, just in case.$"

DropperPoint_EventScript_Bag_Text_10:
# 296 "data/maps/DropperPoint/scripts.pory"
	.string "I hope you come too, {PLAYER}. I mean…\n"
	.string "Safety in numbers and all that, right?$"

DropperPoint_TriggerScript_Roadblock_Text_0:
# 313 "data/maps/DropperPoint/scripts.pory"
	.string "{PLAYER}! Where ya going? There's\n"
	.string "something here you should check out!$"

DropperPoint_TriggerScript_Roadblock_Text_1:
# 317 "data/maps/DropperPoint/scripts.pory"
	.string "What about those other people…?$"
