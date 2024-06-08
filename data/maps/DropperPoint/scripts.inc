# 1 "data/maps/DropperPoint/scripts.pory"
.set LOCALID_MORGAN, 3
# 2 "data/maps/DropperPoint/scripts.pory"
.set LOCALID_CALVIN, 2
# 3 "data/maps/DropperPoint/scripts.pory"
.set LOCALID_SLOSHMOSH, 5
# 4 "data/maps/DropperPoint/scripts.pory"
.set LOCALID_ASLEEP_MORGAN, 6
# 5 "data/maps/DropperPoint/scripts.pory"
.set LOCALID_ASLEEP_PLAYER, 7
# 6 "data/maps/DropperPoint/scripts.pory"
.set LOCALID_ASLEEP_CALVIN, 8
# 7 "data/maps/DropperPoint/scripts.pory"

# 8 "data/maps/DropperPoint/scripts.pory"
DropperPoint_MapScripts::
# 9 "data/maps/DropperPoint/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, DropperPoint_OnFrame
# 10 "data/maps/DropperPoint/scripts.pory"
	.byte 0
# 11 "data/maps/DropperPoint/scripts.pory"
	
# 12 "data/maps/DropperPoint/scripts.pory"
DropperPoint_OnFrame::
# 13 "data/maps/DropperPoint/scripts.pory"
	map_script_2 VAR_FONEI_COAST_STATE, 0, DropperPoint_EventScript_PlayerWakeUp
# 14 "data/maps/DropperPoint/scripts.pory"
	.2byte 0
# 15 "data/maps/DropperPoint/scripts.pory"

# 16 "data/maps/DropperPoint/scripts.pory"
DropperPoint_EventScript_PlayerWakeUp::
# 17 "data/maps/DropperPoint/scripts.pory"
	lockall
# 18 "data/maps/DropperPoint/scripts.pory"
	delay 60
# 19 "data/maps/DropperPoint/scripts.pory"
	applymovement LOCALID_ASLEEP_PLAYER, DropperPoint_Movement_WakeUp
# 20 "data/maps/DropperPoint/scripts.pory"
	waitmovement 0
# 21 "data/maps/DropperPoint/scripts.pory"
	playse SE_PIN
# 22 "data/maps/DropperPoint/scripts.pory"
	applymovement LOCALID_ASLEEP_PLAYER, Common_Movement_ExclamationMark
# 23 "data/maps/DropperPoint/scripts.pory"
	waitmovement 0
# 24 "data/maps/DropperPoint/scripts.pory"
	applymovement LOCALID_ASLEEP_PLAYER, Common_Movement_Delay48
# 25 "data/maps/DropperPoint/scripts.pory"
	waitmovement 0
# 26 "data/maps/DropperPoint/scripts.pory"
	playse SE_BIKE_HOP
# 27 "data/maps/DropperPoint/scripts.pory"
	removeobject LOCALID_ASLEEP_PLAYER
# 28 "data/maps/DropperPoint/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, DropperPoint_Movement_ShowPlayer
# 29 "data/maps/DropperPoint/scripts.pory"
	waitmovement 0
# 30 "data/maps/DropperPoint/scripts.pory"
	setvar VAR_FONEI_COAST_STATE, 1
# 31 "data/maps/DropperPoint/scripts.pory"
	releaseall
# 32 "data/maps/DropperPoint/scripts.pory"
	end
# 33 "data/maps/DropperPoint/scripts.pory"

# 34 "data/maps/DropperPoint/scripts.pory"
DropperPoint_Movement_ShowPlayer:
# 35 "data/maps/DropperPoint/scripts.pory"
	set_visible
# 36 "data/maps/DropperPoint/scripts.pory"
	jump_in_place_down
# 37 "data/maps/DropperPoint/scripts.pory"
	delay_16
# 38 "data/maps/DropperPoint/scripts.pory"
	delay_16
# 39 "data/maps/DropperPoint/scripts.pory"
	step_end
# 40 "data/maps/DropperPoint/scripts.pory"
	
# 41 "data/maps/DropperPoint/scripts.pory"
DropperPoint_Movement_WakeJump:
# 42 "data/maps/DropperPoint/scripts.pory"
	jump_in_place_down
# 43 "data/maps/DropperPoint/scripts.pory"
	delay_16
# 44 "data/maps/DropperPoint/scripts.pory"
	delay_16
# 45 "data/maps/DropperPoint/scripts.pory"
	step_end
# 46 "data/maps/DropperPoint/scripts.pory"

# 47 "data/maps/DropperPoint/scripts.pory"
DropperPoint_Sign::
# 48 "data/maps/DropperPoint/scripts.pory"
	msgbox DropperPoint_Text_Sign, MSGBOX_SIGN
# 49 "data/maps/DropperPoint/scripts.pory"
	special DebugCompletePokedex
# 50 "data/maps/DropperPoint/scripts.pory"
	end
# 51 "data/maps/DropperPoint/scripts.pory"
	
# 52 "data/maps/DropperPoint/scripts.pory"
DropperPoint_EventScript_WakeRival::
# 53 "data/maps/DropperPoint/scripts.pory"
	applymovement VAR_LAST_TALKED, DropperPoint_Movement_WakeUp
# 54 "data/maps/DropperPoint/scripts.pory"
	waitmovement 0
# 55 "data/maps/DropperPoint/scripts.pory"
	playse SE_PIN
# 56 "data/maps/DropperPoint/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_ExclamationMark
# 57 "data/maps/DropperPoint/scripts.pory"
	waitmovement 0
# 58 "data/maps/DropperPoint/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_Delay48
# 59 "data/maps/DropperPoint/scripts.pory"
	waitmovement 0
# 60 "data/maps/DropperPoint/scripts.pory"
	playse SE_BIKE_HOP
# 61 "data/maps/DropperPoint/scripts.pory"
	removeobject VAR_LAST_TALKED
# 62 "data/maps/DropperPoint/scripts.pory"
	return	
# 63 "data/maps/DropperPoint/scripts.pory"

# 64 "data/maps/DropperPoint/scripts.pory"
DropperPoint_EventScript_Morgan::
# 65 "data/maps/DropperPoint/scripts.pory"
	lock
# 66 "data/maps/DropperPoint/scripts.pory"
	msgbox DropperPoint_Text_MorganWake, MSGBOX_DEFAULT
# 67 "data/maps/DropperPoint/scripts.pory"
	closemessage
# 68 "data/maps/DropperPoint/scripts.pory"
	call DropperPoint_EventScript_WakeRival
# 69 "data/maps/DropperPoint/scripts.pory"
	addobject LOCALID_MORGAN
# 70 "data/maps/DropperPoint/scripts.pory"
	clearflag FLAG_HIDE_MORGAN_INTRO
# 71 "data/maps/DropperPoint/scripts.pory"
	applymovement LOCALID_MORGAN, DropperPoint_Movement_WakeJump
# 72 "data/maps/DropperPoint/scripts.pory"
	waitmovement 0
# 73 "data/maps/DropperPoint/scripts.pory"
	applymovement LOCALID_MORGAN, Common_Movement_FacePlayer
# 74 "data/maps/DropperPoint/scripts.pory"
	waitmovement 0
# 75 "data/maps/DropperPoint/scripts.pory"
	msgbox DropperPoint_Text_MorganIntro, MSGBOX_DEFAULT
# 76 "data/maps/DropperPoint/scripts.pory"
	setflag FLAG_FAVORED_MORGAN
# 77 "data/maps/DropperPoint/scripts.pory"
	release
# 78 "data/maps/DropperPoint/scripts.pory"
	end
# 79 "data/maps/DropperPoint/scripts.pory"
	
# 80 "data/maps/DropperPoint/scripts.pory"
DropperPoint_EventScript_Calvin::
# 81 "data/maps/DropperPoint/scripts.pory"
	lock
# 82 "data/maps/DropperPoint/scripts.pory"
	msgbox DropperPoint_Text_CalvinWake, MSGBOX_DEFAULT
# 83 "data/maps/DropperPoint/scripts.pory"
	closemessage
# 84 "data/maps/DropperPoint/scripts.pory"
	call DropperPoint_EventScript_WakeRival
# 85 "data/maps/DropperPoint/scripts.pory"
	addobject LOCALID_CALVIN
# 86 "data/maps/DropperPoint/scripts.pory"
	clearflag FLAG_HIDE_CALVIN_INTRO
# 87 "data/maps/DropperPoint/scripts.pory"
	applymovement LOCALID_CALVIN, DropperPoint_Movement_WakeJump
# 88 "data/maps/DropperPoint/scripts.pory"
	waitmovement 0
# 89 "data/maps/DropperPoint/scripts.pory"
	applymovement LOCALID_CALVIN, Common_Movement_FacePlayer
# 90 "data/maps/DropperPoint/scripts.pory"
	waitmovement 0
# 91 "data/maps/DropperPoint/scripts.pory"
	msgbox DropperPoint_Text_CalvinIntro, MSGBOX_DEFAULT
# 92 "data/maps/DropperPoint/scripts.pory"
	setflag FLAG_FAVORED_CALVIN
# 93 "data/maps/DropperPoint/scripts.pory"
	release
# 94 "data/maps/DropperPoint/scripts.pory"
	end
# 95 "data/maps/DropperPoint/scripts.pory"
	
# 96 "data/maps/DropperPoint/scripts.pory"
DropperPoint_EventScript_MorganAwake::
# 97 "data/maps/DropperPoint/scripts.pory"
	speakername SpeakerName_Morgan
# 98 "data/maps/DropperPoint/scripts.pory"
	goto_if_eq VAR_FONEI_COAST_STATE, 2, DropperPoint_EventScript_MorganPanic
# 99 "data/maps/DropperPoint/scripts.pory"
	msgbox DropperPoint_Text_Morgan2, MSGBOX_NPC
# 100 "data/maps/DropperPoint/scripts.pory"
	end
# 101 "data/maps/DropperPoint/scripts.pory"
	
# 102 "data/maps/DropperPoint/scripts.pory"
DropperPoint_EventScript_CalvinAwake::
# 103 "data/maps/DropperPoint/scripts.pory"
	speakername SpeakerName_Calvin
# 104 "data/maps/DropperPoint/scripts.pory"
	msgbox DropperPoint_Text_Calvin2, MSGBOX_NPC
# 105 "data/maps/DropperPoint/scripts.pory"
	end
# 106 "data/maps/DropperPoint/scripts.pory"

# 107 "data/maps/DropperPoint/scripts.pory"
DropperPoint_Text_Sign:
# 108 "data/maps/DropperPoint/scripts.pory"
	.string "{EMPHASIS_BLUE}DROPPER POINT{EMPHASIS_OFF}\n"
# 109 "data/maps/DropperPoint/scripts.pory"
	.string "“The launching point of the world.”$"
# 110 "data/maps/DropperPoint/scripts.pory"

# 111 "data/maps/DropperPoint/scripts.pory"
DropperPoint_Text_MorganWake:
# 112 "data/maps/DropperPoint/scripts.pory"
	.string "Mmm…\n"
# 113 "data/maps/DropperPoint/scripts.pory"
	.string "Huh…?$"
# 114 "data/maps/DropperPoint/scripts.pory"
	
# 115 "data/maps/DropperPoint/scripts.pory"
DropperPoint_Text_MorganIntro:
# 116 "data/maps/DropperPoint/scripts.pory"
	.string "Huh? Where am I!? Who are you?\p"
# 117 "data/maps/DropperPoint/scripts.pory"
	.string "… … …wait, I know you. You're…\n"
# 118 "data/maps/DropperPoint/scripts.pory"
	.string "{PLAYER}, right? From university?\p"
# 119 "data/maps/DropperPoint/scripts.pory"
	.string "I sit behind you sometimes…\n"
# 120 "data/maps/DropperPoint/scripts.pory"
	.string "I don't know if you know me…\p"
# 121 "data/maps/DropperPoint/scripts.pory"
	.string "My name's Morgan.\n"
# 122 "data/maps/DropperPoint/scripts.pory"
	.string "…do you know where we are?$"
# 123 "data/maps/DropperPoint/scripts.pory"
	
# 124 "data/maps/DropperPoint/scripts.pory"
DropperPoint_Text_Morgan2:
# 125 "data/maps/DropperPoint/scripts.pory"
	.string "This must be a dream, right…?\n"
# 126 "data/maps/DropperPoint/scripts.pory"
	.string "I took the dare to go to camp in\l"
# 127 "data/maps/DropperPoint/scripts.pory"
	.string "front of those ruins, and then…$"
# 128 "data/maps/DropperPoint/scripts.pory"
	
# 129 "data/maps/DropperPoint/scripts.pory"
DropperPoint_Text_CalvinWake:
# 130 "data/maps/DropperPoint/scripts.pory"
	.string "Five more minutes, mom…\n"
# 131 "data/maps/DropperPoint/scripts.pory"
	.string "Zzzzzz-huh?$"
# 132 "data/maps/DropperPoint/scripts.pory"
	
# 133 "data/maps/DropperPoint/scripts.pory"
DropperPoint_Text_CalvinIntro:
# 134 "data/maps/DropperPoint/scripts.pory"
	.string "Whoa! {PLAYER}!? What are you\n"
# 135 "data/maps/DropperPoint/scripts.pory"
	.string "doing in my…\p"
# 136 "data/maps/DropperPoint/scripts.pory"
	.string "Hey, this isn't my room!\n"
# 137 "data/maps/DropperPoint/scripts.pory"
	.string "Where are we? How'd we get here?\p"
# 138 "data/maps/DropperPoint/scripts.pory"
	.string "Huh…you don't know me? I've seen\n"
# 139 "data/maps/DropperPoint/scripts.pory"
	.string "you around on campus. Name's Calvin.\p"
# 140 "data/maps/DropperPoint/scripts.pory"
	.string "But really, where are we, anyway…?$"
# 141 "data/maps/DropperPoint/scripts.pory"
	
# 142 "data/maps/DropperPoint/scripts.pory"
DropperPoint_Text_Calvin2:
# 143 "data/maps/DropperPoint/scripts.pory"
	.string "Last thing I remember was, uh…\n"
# 144 "data/maps/DropperPoint/scripts.pory"
	.string "I don't remember… … …\p"
# 145 "data/maps/DropperPoint/scripts.pory"
	.string "I need some coffee…$"
# 146 "data/maps/DropperPoint/scripts.pory"
	
# 147 "data/maps/DropperPoint/scripts.pory"
DropperPoint_TriggerScript_Bag::
# 148 "data/maps/DropperPoint/scripts.pory"
	lock
# 149 "data/maps/DropperPoint/scripts.pory"
	call_if_unset FLAG_FAVORED_CALVIN, DropperPoint_TriggerScript_CalvinSleep
# 150 "data/maps/DropperPoint/scripts.pory"
	call_if_unset FLAG_FAVORED_MORGAN, DropperPoint_TriggerScript_MorganSleep
# 151 "data/maps/DropperPoint/scripts.pory"
	// both rivals awake
# 152 "data/maps/DropperPoint/scripts.pory"
	msgbox DropperPoint_Text_BagText1, MSGBOX_DEFAULT
# 153 "data/maps/DropperPoint/scripts.pory"
	closemessage
# 154 "data/maps/DropperPoint/scripts.pory"
	setmetatile 12, 11, 0x36C, FALSE // dumb thing to fix visual error
# 155 "data/maps/DropperPoint/scripts.pory"
	special DrawWholeMapView
# 156 "data/maps/DropperPoint/scripts.pory"
	applymovement LOCALID_CALVIN, DropperPoint_Movement_CalvinJumpOne
# 157 "data/maps/DropperPoint/scripts.pory"
	playse SE_BIKE_HOP
# 158 "data/maps/DropperPoint/scripts.pory"
	waitse
# 159 "data/maps/DropperPoint/scripts.pory"
	waitmovement 0
# 160 "data/maps/DropperPoint/scripts.pory"
	applymovement LOCALID_CALVIN, DropperPoint_Movement_CalvinJump2
# 161 "data/maps/DropperPoint/scripts.pory"
	playse SE_BIKE_HOP
# 162 "data/maps/DropperPoint/scripts.pory"
	waitmovement 0
# 163 "data/maps/DropperPoint/scripts.pory"
	setmetatile 12, 11, 0x2E1, FALSE // dumb thing to fix visual error
# 164 "data/maps/DropperPoint/scripts.pory"
	special DrawWholeMapView
# 165 "data/maps/DropperPoint/scripts.pory"
	applymovement LOCALID_MORGAN, DropperPoint_Movement_MorganGoToBag
# 166 "data/maps/DropperPoint/scripts.pory"
	waitmovement 0
# 167 "data/maps/DropperPoint/scripts.pory"
	applymovement LOCALID_CALVIN, Common_Movement_FaceLeft
# 168 "data/maps/DropperPoint/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 169 "data/maps/DropperPoint/scripts.pory"
	waitmovement 0
# 170 "data/maps/DropperPoint/scripts.pory"
	msgbox DropperPoint_Text_BagText2, MSGBOX_DEFAULT
# 171 "data/maps/DropperPoint/scripts.pory"
	closemessage
# 172 "data/maps/DropperPoint/scripts.pory"
	goto DropperPoint_TriggerScript_BagContinue
# 173 "data/maps/DropperPoint/scripts.pory"
	
# 174 "data/maps/DropperPoint/scripts.pory"
DropperPoint_TriggerScript_CalvinSleep:
# 175 "data/maps/DropperPoint/scripts.pory"
	applymovement LOCALID_ASLEEP_CALVIN, DropperPoint_Movement_WakeUp
# 176 "data/maps/DropperPoint/scripts.pory"
	waitmovement 0
# 177 "data/maps/DropperPoint/scripts.pory"
	playse SE_PIN
# 178 "data/maps/DropperPoint/scripts.pory"
	applymovement LOCALID_ASLEEP_CALVIN, Common_Movement_ExclamationMark
# 179 "data/maps/DropperPoint/scripts.pory"
	waitmovement 0
# 180 "data/maps/DropperPoint/scripts.pory"
	applymovement LOCALID_ASLEEP_CALVIN, Common_Movement_Delay48
# 181 "data/maps/DropperPoint/scripts.pory"
	waitmovement 0
# 182 "data/maps/DropperPoint/scripts.pory"
	playse SE_BIKE_HOP
# 183 "data/maps/DropperPoint/scripts.pory"
	removeobject LOCALID_ASLEEP_CALVIN
# 184 "data/maps/DropperPoint/scripts.pory"
	addobject LOCALID_CALVIN
# 185 "data/maps/DropperPoint/scripts.pory"
	clearflag FLAG_HIDE_CALVIN_INTRO
# 186 "data/maps/DropperPoint/scripts.pory"
	applymovement LOCALID_CALVIN, DropperPoint_Movement_WakeJump
# 187 "data/maps/DropperPoint/scripts.pory"
	waitmovement 0
# 188 "data/maps/DropperPoint/scripts.pory"
	applymovement LOCALID_CALVIN, Common_Movement_FaceUp
# 189 "data/maps/DropperPoint/scripts.pory"
	waitmovement 0
# 190 "data/maps/DropperPoint/scripts.pory"
	msgbox DropperPoint_Text_CalvinQuickIntro, MSGBOX_DEFAULT
# 191 "data/maps/DropperPoint/scripts.pory"
	closemessage
# 192 "data/maps/DropperPoint/scripts.pory"
	return
# 193 "data/maps/DropperPoint/scripts.pory"

# 194 "data/maps/DropperPoint/scripts.pory"
DropperPoint_TriggerScript_MorganSleep:
# 195 "data/maps/DropperPoint/scripts.pory"
	applymovement LOCALID_ASLEEP_MORGAN, DropperPoint_Movement_WakeUp
# 196 "data/maps/DropperPoint/scripts.pory"
	waitmovement 0
# 197 "data/maps/DropperPoint/scripts.pory"
	playse SE_PIN
# 198 "data/maps/DropperPoint/scripts.pory"
	applymovement LOCALID_ASLEEP_MORGAN, Common_Movement_ExclamationMark
# 199 "data/maps/DropperPoint/scripts.pory"
	waitmovement 0
# 200 "data/maps/DropperPoint/scripts.pory"
	applymovement LOCALID_ASLEEP_MORGAN, Common_Movement_Delay48
# 201 "data/maps/DropperPoint/scripts.pory"
	waitmovement 0
# 202 "data/maps/DropperPoint/scripts.pory"
	playse SE_BIKE_HOP
# 203 "data/maps/DropperPoint/scripts.pory"
	removeobject LOCALID_ASLEEP_MORGAN
# 204 "data/maps/DropperPoint/scripts.pory"
	addobject LOCALID_MORGAN
# 205 "data/maps/DropperPoint/scripts.pory"
	clearflag FLAG_HIDE_MORGAN_INTRO
# 206 "data/maps/DropperPoint/scripts.pory"
	applymovement LOCALID_MORGAN, DropperPoint_Movement_WakeJump
# 207 "data/maps/DropperPoint/scripts.pory"
	waitmovement 0
# 208 "data/maps/DropperPoint/scripts.pory"
	applymovement LOCALID_MORGAN, Common_Movement_FaceRight
# 209 "data/maps/DropperPoint/scripts.pory"
	waitmovement 0
# 210 "data/maps/DropperPoint/scripts.pory"
	msgbox DropperPoint_Text_MorganQuickIntro, MSGBOX_DEFAULT
# 211 "data/maps/DropperPoint/scripts.pory"
	closemessage
# 212 "data/maps/DropperPoint/scripts.pory"
	return
# 213 "data/maps/DropperPoint/scripts.pory"
	
# 214 "data/maps/DropperPoint/scripts.pory"
DropperPoint_Text_CalvinQuickIntro:
# 215 "data/maps/DropperPoint/scripts.pory"
	.string "Huh…? {PLAYER}, is that you?\n"
# 216 "data/maps/DropperPoint/scripts.pory"
	.string "It's me, Calvin, from uni!\l"
# 217 "data/maps/DropperPoint/scripts.pory"
	.string "Where am I?$"
# 218 "data/maps/DropperPoint/scripts.pory"
	
# 219 "data/maps/DropperPoint/scripts.pory"
DropperPoint_Text_MorganQuickIntro:
# 220 "data/maps/DropperPoint/scripts.pory"
	.string "Urgh… weird dream…\n"
# 221 "data/maps/DropperPoint/scripts.pory"
	.string "{PLAYER}? It's me, Morgan…\l"
# 222 "data/maps/DropperPoint/scripts.pory"
	.string "We go to college together.\p"	
# 223 "data/maps/DropperPoint/scripts.pory"
	.string "What is this place? I don't remember\n"
# 224 "data/maps/DropperPoint/scripts.pory"
	.string "how I got here…$"
# 225 "data/maps/DropperPoint/scripts.pory"

# 226 "data/maps/DropperPoint/scripts.pory"
DropperPoint_TriggerScript_BagContinue::
# 227 "data/maps/DropperPoint/scripts.pory"
	addobject LOCALID_SLOSHMOSH
# 228 "data/maps/DropperPoint/scripts.pory"
	setobjectxy LOCALID_SLOSHMOSH, 13, 14
# 229 "data/maps/DropperPoint/scripts.pory"
	applymovement LOCALID_SLOSHMOSH, Common_Movement_WalkUp
# 230 "data/maps/DropperPoint/scripts.pory"
	playse SE_BALLOON_BLUE
# 231 "data/maps/DropperPoint/scripts.pory"
	waitse
# 232 "data/maps/DropperPoint/scripts.pory"
	waitmovement 0
# 233 "data/maps/DropperPoint/scripts.pory"
	delay 60
# 234 "data/maps/DropperPoint/scripts.pory"
	applymovement LOCALID_MORGAN, DropperPoint_Movement_MorganRunToPlayer
# 235 "data/maps/DropperPoint/scripts.pory"
	waitmovement 0
# 236 "data/maps/DropperPoint/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 237 "data/maps/DropperPoint/scripts.pory"
	waitmovement 0
# 238 "data/maps/DropperPoint/scripts.pory"
	applymovement LOCALID_CALVIN, Common_Movement_FaceRight
# 239 "data/maps/DropperPoint/scripts.pory"
	waitmovement 0
# 240 "data/maps/DropperPoint/scripts.pory"
	msgbox DropperPoint_Text_SlimeApproaching1, MSGBOX_DEFAULT
# 241 "data/maps/DropperPoint/scripts.pory"
	closemessage
# 242 "data/maps/DropperPoint/scripts.pory"
	applymovement LOCALID_SLOSHMOSH, Common_Movement_WalkUp2
# 243 "data/maps/DropperPoint/scripts.pory"
	playse SE_BALLOON_BLUE
# 244 "data/maps/DropperPoint/scripts.pory"
	waitse
# 245 "data/maps/DropperPoint/scripts.pory"
	playse SE_BALLOON_BLUE
# 246 "data/maps/DropperPoint/scripts.pory"
	waitse
# 247 "data/maps/DropperPoint/scripts.pory"
	waitmovement 0
# 248 "data/maps/DropperPoint/scripts.pory"
	applymovement LOCALID_CALVIN, Common_Movement_FaceDown
# 249 "data/maps/DropperPoint/scripts.pory"
	applymovement LOCALID_MORGAN, Common_Movement_FaceDown
# 250 "data/maps/DropperPoint/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
# 251 "data/maps/DropperPoint/scripts.pory"
	delay 60
# 252 "data/maps/DropperPoint/scripts.pory"
	delay 60
# 253 "data/maps/DropperPoint/scripts.pory"
	playbgm MUS_HELP, TRUE
# 254 "data/maps/DropperPoint/scripts.pory"
	applymovement LOCALID_SLOSHMOSH,DropperPoint_Movement_RushForward
# 255 "data/maps/DropperPoint/scripts.pory"
	playse SE_BALLOON_BLUE
# 256 "data/maps/DropperPoint/scripts.pory"
	waitse
# 257 "data/maps/DropperPoint/scripts.pory"
	playse SE_BALLOON_BLUE
# 258 "data/maps/DropperPoint/scripts.pory"
	waitse
# 259 "data/maps/DropperPoint/scripts.pory"
	applymovement LOCALID_CALVIN, Common_Movement_ExclamationMark
# 260 "data/maps/DropperPoint/scripts.pory"
	applymovement LOCALID_MORGAN, DropperPoint_Movement_Jump
# 261 "data/maps/DropperPoint/scripts.pory"
	waitmovement 0
# 262 "data/maps/DropperPoint/scripts.pory"
	waitse
# 263 "data/maps/DropperPoint/scripts.pory"
	playmoncry SPECIES_SLOSHMOSH, CRY_MODE_NORMAL
# 264 "data/maps/DropperPoint/scripts.pory"
	msgbox DropperPoint_Text_SloshmoshYell, MSGBOX_DEFAULT
# 265 "data/maps/DropperPoint/scripts.pory"
	waitmoncry
# 266 "data/maps/DropperPoint/scripts.pory"
	closemessage
# 267 "data/maps/DropperPoint/scripts.pory"
	msgbox DropperPoint_Text_SlimeApproaching2, MSGBOX_DEFAULT
# 268 "data/maps/DropperPoint/scripts.pory"
	closemessage
# 269 "data/maps/DropperPoint/scripts.pory"
	setvar VAR_FONEI_COAST_STATE, 2
# 270 "data/maps/DropperPoint/scripts.pory"
	setrespawn HEAL_LOCATION_CRAN_TOWN
# 271 "data/maps/DropperPoint/scripts.pory"
	setflag FLAG_HIDE_FONEI_COAST_NPCS
# 272 "data/maps/DropperPoint/scripts.pory"
	release
# 273 "data/maps/DropperPoint/scripts.pory"
	end
# 274 "data/maps/DropperPoint/scripts.pory"

# 275 "data/maps/DropperPoint/scripts.pory"
DropperPoint_TriggerScript_Roadblock::
# 276 "data/maps/DropperPoint/scripts.pory"
	lock
# 277 "data/maps/DropperPoint/scripts.pory"
	goto_if_set FLAG_FAVORED_CALVIN, DropperPoint_TriggerScript_RoadblockCalvin
# 278 "data/maps/DropperPoint/scripts.pory"
	msgbox DropperPoint_Text_CantLeave, MSGBOX_DEFAULT
# 279 "data/maps/DropperPoint/scripts.pory"
	closemessage
# 280 "data/maps/DropperPoint/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, DropperPoint_Movement_ComeBack
# 281 "data/maps/DropperPoint/scripts.pory"
	waitmovement 0
# 282 "data/maps/DropperPoint/scripts.pory"
	release
# 283 "data/maps/DropperPoint/scripts.pory"
	end
# 284 "data/maps/DropperPoint/scripts.pory"
	
# 285 "data/maps/DropperPoint/scripts.pory"
DropperPoint_TriggerScript_RoadblockCalvin:
# 286 "data/maps/DropperPoint/scripts.pory"
	msgbox DropperPoint_Text_CalvinRoadblock, MSGBOX_DEFAULT
# 287 "data/maps/DropperPoint/scripts.pory"
	closemessage
# 288 "data/maps/DropperPoint/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, DropperPoint_Movement_ComeBack
# 289 "data/maps/DropperPoint/scripts.pory"
	waitmovement 0
# 290 "data/maps/DropperPoint/scripts.pory"
	release
# 291 "data/maps/DropperPoint/scripts.pory"
	end
# 292 "data/maps/DropperPoint/scripts.pory"

# 293 "data/maps/DropperPoint/scripts.pory"
DropperPoint_Text_CantLeave:
# 294 "data/maps/DropperPoint/scripts.pory"
	.string "But what about those other people?$"
# 295 "data/maps/DropperPoint/scripts.pory"
	
# 296 "data/maps/DropperPoint/scripts.pory"
DropperPoint_Text_CalvinRoadblock:
# 297 "data/maps/DropperPoint/scripts.pory"
	.string "CALVIN: {PLAYER}! Where ya going?\n"
# 298 "data/maps/DropperPoint/scripts.pory"
	.string "I see something back there!\n"
# 299 "data/maps/DropperPoint/scripts.pory"
	.string "Go check it out!$"
# 300 "data/maps/DropperPoint/scripts.pory"
	
# 301 "data/maps/DropperPoint/scripts.pory"
DropperPoint_Movement_ComeBack:
# 302 "data/maps/DropperPoint/scripts.pory"
	walk_left
# 303 "data/maps/DropperPoint/scripts.pory"
	walk_left
# 304 "data/maps/DropperPoint/scripts.pory"
	walk_left
# 305 "data/maps/DropperPoint/scripts.pory"
	walk_left
# 306 "data/maps/DropperPoint/scripts.pory"
	step_end
# 307 "data/maps/DropperPoint/scripts.pory"

# 308 "data/maps/DropperPoint/scripts.pory"
DropperPoint_EventScript_Bag::
# 309 "data/maps/DropperPoint/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 310 "data/maps/DropperPoint/scripts.pory"
	fadescreen FADE_TO_BLACK
# 311 "data/maps/DropperPoint/scripts.pory"
	removeobject LOCALID_SLOSHMOSH
# 312 "data/maps/DropperPoint/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 313 "data/maps/DropperPoint/scripts.pory"
	waitmovement 0
# 314 "data/maps/DropperPoint/scripts.pory"
	special ChooseStarter
# 315 "data/maps/DropperPoint/scripts.pory"
	waitstate
# 316 "data/maps/DropperPoint/scripts.pory"
	bufferleadmonspeciesname STR_VAR_1
# 317 "data/maps/DropperPoint/scripts.pory"
	msgbox DropperPoint_Text_NicknamePrompt, MSGBOX_YESNO
# 318 "data/maps/DropperPoint/scripts.pory"
	goto_if_eq VAR_RESULT, YES, DropperPoint_EventScript_NicknameStarter
# 319 "data/maps/DropperPoint/scripts.pory"
	goto_if_eq VAR_RESULT, NO, DropperPoint_EventScript_BagContinue
# 320 "data/maps/DropperPoint/scripts.pory"
	end
# 321 "data/maps/DropperPoint/scripts.pory"

# 322 "data/maps/DropperPoint/scripts.pory"
DropperPoint_EventScript_NicknameStarter:
# 323 "data/maps/DropperPoint/scripts.pory"
	setvar VAR_0x8004, 0
# 324 "data/maps/DropperPoint/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
# 325 "data/maps/DropperPoint/scripts.pory"
	goto DropperPoint_EventScript_BagContinue
# 326 "data/maps/DropperPoint/scripts.pory"
	end
# 327 "data/maps/DropperPoint/scripts.pory"
	
# 328 "data/maps/DropperPoint/scripts.pory"
DropperPoint_EventScript_BagContinue:
# 329 "data/maps/DropperPoint/scripts.pory"
	applymovement LOCALID_MORGAN, Common_Movement_FacePlayer
# 330 "data/maps/DropperPoint/scripts.pory"
	applymovement LOCALID_CALVIN, Common_Movement_FacePlayer
# 331 "data/maps/DropperPoint/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, DropperPoint_Movement_StepBack
# 332 "data/maps/DropperPoint/scripts.pory"
	waitmovement 0
# 333 "data/maps/DropperPoint/scripts.pory"
	msgbox DropperPoint_Text_AfterBattle1, MSGBOX_DEFAULT
# 334 "data/maps/DropperPoint/scripts.pory"
	closemessage
# 335 "data/maps/DropperPoint/scripts.pory"
	special HealPlayerParty
# 336 "data/maps/DropperPoint/scripts.pory"
	applymovement LOCALID_CALVIN, Common_Movement_FaceRight
# 337 "data/maps/DropperPoint/scripts.pory"
	applymovement LOCALID_MORGAN, DropperPoint_Movement_MorganGoToBagAgain
# 338 "data/maps/DropperPoint/scripts.pory"
	waitmovement 0
# 339 "data/maps/DropperPoint/scripts.pory"
	msgbox DropperPoint_Text_AfterBattle2, MSGBOX_DEFAULT
# 340 "data/maps/DropperPoint/scripts.pory"
	closemessage
# 341 "data/maps/DropperPoint/scripts.pory"
	applymovement LOCALID_CALVIN, DropperPoint_Movement_CalvinStartWalkingAway
# 342 "data/maps/DropperPoint/scripts.pory"
	applymovement LOCALID_MORGAN, DropperPoint_Movement_MorganStartWalkingAway
# 343 "data/maps/DropperPoint/scripts.pory"
	removeobject 1
# 344 "data/maps/DropperPoint/scripts.pory"
	waitmovement 0
# 345 "data/maps/DropperPoint/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 346 "data/maps/DropperPoint/scripts.pory"
	waitmovement 0
# 347 "data/maps/DropperPoint/scripts.pory"
	msgbox DropperPoint_Text_MorganLeave, MSGBOX_DEFAULT
# 348 "data/maps/DropperPoint/scripts.pory"
	closemessage
# 349 "data/maps/DropperPoint/scripts.pory"
	applymovement LOCALID_MORGAN, DropperPoint_Movement_MorganFinishWalkingAway
# 350 "data/maps/DropperPoint/scripts.pory"
	waitmovement 0
# 351 "data/maps/DropperPoint/scripts.pory"
	removeobject LOCALID_CALVIN
# 352 "data/maps/DropperPoint/scripts.pory"
	removeobject LOCALID_MORGAN
# 353 "data/maps/DropperPoint/scripts.pory"
	clearflag FLAG_FAVORED_MORGAN
# 354 "data/maps/DropperPoint/scripts.pory"
	clearflag FLAG_FAVORED_CALVIN
# 355 "data/maps/DropperPoint/scripts.pory"
	release
# 356 "data/maps/DropperPoint/scripts.pory"
	end
# 357 "data/maps/DropperPoint/scripts.pory"
	
# 358 "data/maps/DropperPoint/scripts.pory"
DropperPoint_Text_BagText1:
# 359 "data/maps/DropperPoint/scripts.pory"
	.string "CALVIN: Hey, {PLAYER}, what'cha\n"
# 360 "data/maps/DropperPoint/scripts.pory"
	.string "looking at?$"
# 361 "data/maps/DropperPoint/scripts.pory"
	
# 362 "data/maps/DropperPoint/scripts.pory"
DropperPoint_Text_BagText2:
# 363 "data/maps/DropperPoint/scripts.pory"
	.string "MORGAN: So… not to point out the\n"
# 364 "data/maps/DropperPoint/scripts.pory"
	.string "obvious, but we have no idea\l"
# 365 "data/maps/DropperPoint/scripts.pory"
	.string "where we are, right…?\p"
# 366 "data/maps/DropperPoint/scripts.pory"
	.string "CALVIN: Well, I don't. You don't.\n"
# 367 "data/maps/DropperPoint/scripts.pory"
	.string "{PLAYER} doesn't. So, guess not.\p"
# 368 "data/maps/DropperPoint/scripts.pory"
	.string "MORGAN: I have a theory…\p"
# 369 "data/maps/DropperPoint/scripts.pory"
	.string "MORGAN: We all know each other, and\n"
# 370 "data/maps/DropperPoint/scripts.pory"
	.string "we all went to that creepy monument\l"
# 371 "data/maps/DropperPoint/scripts.pory"
	.string "in the woods, right?\p"
# 372 "data/maps/DropperPoint/scripts.pory"
	.string "CALVIN: Um… yes, apparently.\p"
# 373 "data/maps/DropperPoint/scripts.pory"
	.string "MORGAN: So what if we got teleported\n"
# 374 "data/maps/DropperPoint/scripts.pory"
	.string "to a parallel world?\p"
# 375 "data/maps/DropperPoint/scripts.pory"
	.string "CALVIN: … … … … …\n"
# 376 "data/maps/DropperPoint/scripts.pory"
	.string "You read too much manga.\l"
# 377 "data/maps/DropperPoint/scripts.pory"
	.string "This doesn't look like a parallel\l"
# 378 "data/maps/DropperPoint/scripts.pory"
	.string "world to me…$"
# 379 "data/maps/DropperPoint/scripts.pory"
	
# 380 "data/maps/DropperPoint/scripts.pory"
DropperPoint_Text_SlimeApproaching1:
# 381 "data/maps/DropperPoint/scripts.pory"
	.string "MORGAN: W-what was that noise?\p"
# 382 "data/maps/DropperPoint/scripts.pory"
	.string "CALVIN: Relax. It was just a wave, or…$"
# 383 "data/maps/DropperPoint/scripts.pory"
	
# 384 "data/maps/DropperPoint/scripts.pory"
DropperPoint_Text_SlimeApproaching2:
# 385 "data/maps/DropperPoint/scripts.pory"
	.string "MORGAN: AAAAH! What is that thing!?\n"
# 386 "data/maps/DropperPoint/scripts.pory"
	.string "CALVIN: {PLAYER}! Do something!$"
# 387 "data/maps/DropperPoint/scripts.pory"

# 388 "data/maps/DropperPoint/scripts.pory"
DropperPoint_EventScript_Sloshmosh::
# 389 "data/maps/DropperPoint/scripts.pory"
	lock
# 390 "data/maps/DropperPoint/scripts.pory"
	faceplayer
# 391 "data/maps/DropperPoint/scripts.pory"
	waitse
# 392 "data/maps/DropperPoint/scripts.pory"
	playmoncry SPECIES_SLOSHMOSH, CRY_MODE_NORMAL
# 393 "data/maps/DropperPoint/scripts.pory"
	msgbox DropperPoint_Text_SloshmoshYell, MSGBOX_DEFAULT
# 394 "data/maps/DropperPoint/scripts.pory"
	waitmoncry
# 395 "data/maps/DropperPoint/scripts.pory"
	release
# 396 "data/maps/DropperPoint/scripts.pory"
	end
# 397 "data/maps/DropperPoint/scripts.pory"
	
# 398 "data/maps/DropperPoint/scripts.pory"
DropperPoint_EventScript_MorganPanic::
# 399 "data/maps/DropperPoint/scripts.pory"
	lock
# 400 "data/maps/DropperPoint/scripts.pory"
	msgbox DropperPoint_Text_MorganPanic, MSGBOX_DEFAULT
# 401 "data/maps/DropperPoint/scripts.pory"
	closemessage
# 402 "data/maps/DropperPoint/scripts.pory"
	release
# 403 "data/maps/DropperPoint/scripts.pory"
	end
# 404 "data/maps/DropperPoint/scripts.pory"
	
# 405 "data/maps/DropperPoint/scripts.pory"
DropperPoint_Text_MorganPanic:
# 406 "data/maps/DropperPoint/scripts.pory"
	.string "MORGAN: W-what is that thing!?\n"
# 407 "data/maps/DropperPoint/scripts.pory"
	.string "Do something, {PLAYER}!$"
# 408 "data/maps/DropperPoint/scripts.pory"
	
# 409 "data/maps/DropperPoint/scripts.pory"
DropperPoint_Text_SloshmoshYell:
# 410 "data/maps/DropperPoint/scripts.pory"
	.string "Spchwerrrrrr!$"
# 411 "data/maps/DropperPoint/scripts.pory"
	
# 412 "data/maps/DropperPoint/scripts.pory"
DropperPoint_Text_NicknamePrompt:
# 413 "data/maps/DropperPoint/scripts.pory"
	.string "Give a nickname to your {STR_VAR_1}?$"
# 414 "data/maps/DropperPoint/scripts.pory"
	
# 415 "data/maps/DropperPoint/scripts.pory"
DropperPoint_Movement_WakeUp:
# 416 "data/maps/DropperPoint/scripts.pory"
	face_up
# 417 "data/maps/DropperPoint/scripts.pory"
	delay_16
# 418 "data/maps/DropperPoint/scripts.pory"
	face_down
# 419 "data/maps/DropperPoint/scripts.pory"
	delay_8
# 420 "data/maps/DropperPoint/scripts.pory"
	face_up
# 421 "data/maps/DropperPoint/scripts.pory"
	delay_16
# 422 "data/maps/DropperPoint/scripts.pory"
	face_down
# 423 "data/maps/DropperPoint/scripts.pory"
	delay_8
# 424 "data/maps/DropperPoint/scripts.pory"
	face_up
# 425 "data/maps/DropperPoint/scripts.pory"
	delay_16
# 426 "data/maps/DropperPoint/scripts.pory"
	face_left
# 427 "data/maps/DropperPoint/scripts.pory"
	step_end
# 428 "data/maps/DropperPoint/scripts.pory"
	
# 429 "data/maps/DropperPoint/scripts.pory"
DropperPoint_Movement_CalvinJumpOne:
# 430 "data/maps/DropperPoint/scripts.pory"
	jump_2_up
# 431 "data/maps/DropperPoint/scripts.pory"
	walk_up
# 432 "data/maps/DropperPoint/scripts.pory"
	step_end
# 433 "data/maps/DropperPoint/scripts.pory"
	
# 434 "data/maps/DropperPoint/scripts.pory"
DropperPoint_Movement_CalvinJump2:
# 435 "data/maps/DropperPoint/scripts.pory"
	jump_2_up
# 436 "data/maps/DropperPoint/scripts.pory"
	face_right
# 437 "data/maps/DropperPoint/scripts.pory"
	step_end
# 438 "data/maps/DropperPoint/scripts.pory"
	
# 439 "data/maps/DropperPoint/scripts.pory"
DropperPoint_Movement_MorganGoToBag:
# 440 "data/maps/DropperPoint/scripts.pory"
	walk_right
# 441 "data/maps/DropperPoint/scripts.pory"
	walk_right
# 442 "data/maps/DropperPoint/scripts.pory"
	delay_16
# 443 "data/maps/DropperPoint/scripts.pory"
	walk_right
# 444 "data/maps/DropperPoint/scripts.pory"
	walk_right
# 445 "data/maps/DropperPoint/scripts.pory"
	step_end
# 446 "data/maps/DropperPoint/scripts.pory"
	
# 447 "data/maps/DropperPoint/scripts.pory"
DropperPoint_Movement_MorganRunToPlayer:
# 448 "data/maps/DropperPoint/scripts.pory"
	walk_fast_right
# 449 "data/maps/DropperPoint/scripts.pory"
	walk_fast_right
# 450 "data/maps/DropperPoint/scripts.pory"
	walk_fast_right
# 451 "data/maps/DropperPoint/scripts.pory"
	walk_fast_right
# 452 "data/maps/DropperPoint/scripts.pory"
	walk_fast_up
# 453 "data/maps/DropperPoint/scripts.pory"
	face_down
# 454 "data/maps/DropperPoint/scripts.pory"
	step_end
# 455 "data/maps/DropperPoint/scripts.pory"
	
# 456 "data/maps/DropperPoint/scripts.pory"
DropperPoint_Movement_RushForward:
# 457 "data/maps/DropperPoint/scripts.pory"
	walk_fast_up
# 458 "data/maps/DropperPoint/scripts.pory"
	walk_fast_up
# 459 "data/maps/DropperPoint/scripts.pory"
	step_end
# 460 "data/maps/DropperPoint/scripts.pory"
	
# 461 "data/maps/DropperPoint/scripts.pory"
DropperPoint_Movement_Jump:
# 462 "data/maps/DropperPoint/scripts.pory"
	jump_in_place_down
# 463 "data/maps/DropperPoint/scripts.pory"
	step_end
# 464 "data/maps/DropperPoint/scripts.pory"
	
# 465 "data/maps/DropperPoint/scripts.pory"
DropperPoint_Text_AfterBattle1:
# 466 "data/maps/DropperPoint/scripts.pory"
	.string "CALVIN: Where did you get that\n"
# 467 "data/maps/DropperPoint/scripts.pory"
	.string "monster from?\p"
# 468 "data/maps/DropperPoint/scripts.pory"
	.string "MORGAN: The bag…? Wait, is that…?$"
# 469 "data/maps/DropperPoint/scripts.pory"
	
# 470 "data/maps/DropperPoint/scripts.pory"
DropperPoint_Text_AfterBattle2:
# 471 "data/maps/DropperPoint/scripts.pory"
	.string "MORGAN: Yes! I knew it!\n"
# 472 "data/maps/DropperPoint/scripts.pory"
	.string "Poké Balls! These are Pokémon!\p"
# 473 "data/maps/DropperPoint/scripts.pory"
	.string "CALVIN: Pokémon? Isn't that that\n"
# 474 "data/maps/DropperPoint/scripts.pory"
	.string "game for nerds who don't have pets?\p"
# 475 "data/maps/DropperPoint/scripts.pory"
	.string "MORGAN: … … … … …\n"
# 476 "data/maps/DropperPoint/scripts.pory"
	.string "Well, I was right. We're not home\l"
# 477 "data/maps/DropperPoint/scripts.pory"
	.string "now. We're in the Pokémon world!\p"
# 478 "data/maps/DropperPoint/scripts.pory"
	.string "CALVIN: … Well, if these things can\n"
# 479 "data/maps/DropperPoint/scripts.pory"
	.string "protect us from monsters, then we\l"
# 480 "data/maps/DropperPoint/scripts.pory"
	.string "may as well take them.\p"
# 481 "data/maps/DropperPoint/scripts.pory"
	.string "I'm taking the one strong against\n"
# 482 "data/maps/DropperPoint/scripts.pory"
	.string "yours, {PLAYER}! Haha!\p"
# 483 "data/maps/DropperPoint/scripts.pory"
	.string "MORGAN: Oh, well… umm, okay.\p"
# 484 "data/maps/DropperPoint/scripts.pory"
	.string "Guess we better move on. Maybe we\n"
# 485 "data/maps/DropperPoint/scripts.pory"
	.string "can find someone who knows where\l"
# 486 "data/maps/DropperPoint/scripts.pory"
	.string "exactly we are.\p"
# 487 "data/maps/DropperPoint/scripts.pory"
	.string "MORGAN: …and maybe whoever owns\n"
# 488 "data/maps/DropperPoint/scripts.pory"
	.string "this bag.$"
# 489 "data/maps/DropperPoint/scripts.pory"
	
# 490 "data/maps/DropperPoint/scripts.pory"
DropperPoint_Text_MorganLeave:
# 491 "data/maps/DropperPoint/scripts.pory"
	.string "MORGAN: You'll follow too, right,\n"
# 492 "data/maps/DropperPoint/scripts.pory"
	.string "{PLAYER}? I… I'd feel safer that way.$"
# 493 "data/maps/DropperPoint/scripts.pory"
	
# 494 "data/maps/DropperPoint/scripts.pory"
DropperPoint_Movement_StepBack:
# 495 "data/maps/DropperPoint/scripts.pory"
	walk_down
# 496 "data/maps/DropperPoint/scripts.pory"
	face_up
# 497 "data/maps/DropperPoint/scripts.pory"
	step_end
# 498 "data/maps/DropperPoint/scripts.pory"
	
# 499 "data/maps/DropperPoint/scripts.pory"
DropperPoint_Movement_MorganGoToBagAgain:
# 500 "data/maps/DropperPoint/scripts.pory"
	walk_left
# 501 "data/maps/DropperPoint/scripts.pory"
	face_up
# 502 "data/maps/DropperPoint/scripts.pory"
	step_end
# 503 "data/maps/DropperPoint/scripts.pory"
	
# 504 "data/maps/DropperPoint/scripts.pory"
DropperPoint_Movement_CalvinStartWalkingAway:
# 505 "data/maps/DropperPoint/scripts.pory"
	jump_2_down
# 506 "data/maps/DropperPoint/scripts.pory"
	walk_down
# 507 "data/maps/DropperPoint/scripts.pory"
	walk_down
# 508 "data/maps/DropperPoint/scripts.pory"
	walk_right
# 509 "data/maps/DropperPoint/scripts.pory"
	walk_right
# 510 "data/maps/DropperPoint/scripts.pory"
	walk_right
# 511 "data/maps/DropperPoint/scripts.pory"
	walk_right
# 512 "data/maps/DropperPoint/scripts.pory"
	walk_right
# 513 "data/maps/DropperPoint/scripts.pory"
	walk_down
# 514 "data/maps/DropperPoint/scripts.pory"
	walk_down
# 515 "data/maps/DropperPoint/scripts.pory"
	walk_down
# 516 "data/maps/DropperPoint/scripts.pory"
	walk_right
# 517 "data/maps/DropperPoint/scripts.pory"
	walk_right
# 518 "data/maps/DropperPoint/scripts.pory"
	walk_right
# 519 "data/maps/DropperPoint/scripts.pory"
	walk_right
# 520 "data/maps/DropperPoint/scripts.pory"
	step_end
# 521 "data/maps/DropperPoint/scripts.pory"
	
# 522 "data/maps/DropperPoint/scripts.pory"
DropperPoint_Movement_MorganStartWalkingAway:
# 523 "data/maps/DropperPoint/scripts.pory"
	walk_in_place_up
# 524 "data/maps/DropperPoint/scripts.pory"
	delay_16
# 525 "data/maps/DropperPoint/scripts.pory"
	walk_right
# 526 "data/maps/DropperPoint/scripts.pory"
	walk_down
# 527 "data/maps/DropperPoint/scripts.pory"
	walk_right
# 528 "data/maps/DropperPoint/scripts.pory"
	walk_right
# 529 "data/maps/DropperPoint/scripts.pory"
	delay_8
# 530 "data/maps/DropperPoint/scripts.pory"
	face_left
# 531 "data/maps/DropperPoint/scripts.pory"
	delay_16
# 532 "data/maps/DropperPoint/scripts.pory"
	face_right
# 533 "data/maps/DropperPoint/scripts.pory"
	delay_16
# 534 "data/maps/DropperPoint/scripts.pory"
	delay_16
# 535 "data/maps/DropperPoint/scripts.pory"
	face_left
# 536 "data/maps/DropperPoint/scripts.pory"
	delay_16
# 537 "data/maps/DropperPoint/scripts.pory"
	step_end
# 538 "data/maps/DropperPoint/scripts.pory"
	
# 539 "data/maps/DropperPoint/scripts.pory"
DropperPoint_Movement_MorganFinishWalkingAway:
# 540 "data/maps/DropperPoint/scripts.pory"
	lock_facing_direction
# 541 "data/maps/DropperPoint/scripts.pory"
	walk_slow_right
# 542 "data/maps/DropperPoint/scripts.pory"
	jump_left
# 543 "data/maps/DropperPoint/scripts.pory"
	unlock_facing_direction
# 544 "data/maps/DropperPoint/scripts.pory"
	face_right
# 545 "data/maps/DropperPoint/scripts.pory"
	delay_16
# 546 "data/maps/DropperPoint/scripts.pory"
	delay_16
# 547 "data/maps/DropperPoint/scripts.pory"
	walk_fast_down
# 548 "data/maps/DropperPoint/scripts.pory"
	walk_fast_down
# 549 "data/maps/DropperPoint/scripts.pory"
	walk_fast_right
# 550 "data/maps/DropperPoint/scripts.pory"
	walk_fast_right
# 551 "data/maps/DropperPoint/scripts.pory"
	walk_fast_right
# 552 "data/maps/DropperPoint/scripts.pory"
	walk_fast_right
# 553 "data/maps/DropperPoint/scripts.pory"
	walk_fast_down
# 554 "data/maps/DropperPoint/scripts.pory"
	walk_fast_down
# 555 "data/maps/DropperPoint/scripts.pory"
	walk_fast_right
# 556 "data/maps/DropperPoint/scripts.pory"
	step_end
