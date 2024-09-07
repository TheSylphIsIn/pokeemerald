InnFloor1_MapScripts::
# 2 "data/maps/InnFloor1/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, InnFloor1_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

InnFloor1_MapScripts_MAP_SCRIPT_ON_LOAD:
# 4 "data/maps/InnFloor1/scripts.pory"
	checkitem ITEM_KEY_TO_ROOM_1
# 5 "data/maps/InnFloor1/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq InnFloor1_MapScripts_MAP_SCRIPT_ON_LOAD_1
	return

InnFloor1_MapScripts_MAP_SCRIPT_ON_LOAD_1:
# 7 "data/maps/InnFloor1/scripts.pory"
	setmetatile 15, 2, 0x245, TRUE
	return


InnFloor1_Concierge::
# 14 "data/maps/InnFloor1/scripts.pory"
	lock
# 15 "data/maps/InnFloor1/scripts.pory"
	faceplayer
# 16 "data/maps/InnFloor1/scripts.pory"
	goto_if_unset FLAG_STARTED_WEATHERBANE_QUEST, InnFloor1_Concierge_2
# 36 "data/maps/InnFloor1/scripts.pory"
	goto_if_set FLAG_FINISHED_WEATHERBANE_QUEST, InnFloor1_Concierge_3
# 41 "data/maps/InnFloor1/scripts.pory"
	goto_if_set FLAG_BEAT_WEATHERBANE, InnFloor1_Concierge_4
# 59 "data/maps/InnFloor1/scripts.pory"
	speakername InnFloor1_Concierge_Text_2
# 60 "data/maps/InnFloor1/scripts.pory"
	msgbox InnFloor1_Concierge_Text_14
InnFloor1_Concierge_1:
# 63 "data/maps/InnFloor1/scripts.pory"
	release
	return

InnFloor1_Concierge_2:
# 18 "data/maps/InnFloor1/scripts.pory"
	speakername InnFloor1_Concierge_Text_0, PORTRAIT_AMELIA_NEUTRAL
# 19 "data/maps/InnFloor1/scripts.pory"
	msgbox InnFloor1_Concierge_Text_1
# 20 "data/maps/InnFloor1/scripts.pory"
	speakername InnFloor1_Concierge_Text_2
# 21 "data/maps/InnFloor1/scripts.pory"
	msgbox InnFloor1_Concierge_Text_3
# 22 "data/maps/InnFloor1/scripts.pory"
	speakername InnFloor1_Concierge_Text_0, PORTRAIT_AMELIA_NEUTRAL
# 23 "data/maps/InnFloor1/scripts.pory"
	msgbox InnFloor1_Concierge_Text_4
# 24 "data/maps/InnFloor1/scripts.pory"
	speakername InnFloor1_Concierge_Text_2
# 25 "data/maps/InnFloor1/scripts.pory"
	msgbox InnFloor1_Concierge_Text_5
# 28 "data/maps/InnFloor1/scripts.pory"
	speakername InnFloor1_Concierge_Text_0, PORTRAIT_AMELIA_SERIOUSLY
# 29 "data/maps/InnFloor1/scripts.pory"
	msgbox InnFloor1_Concierge_Text_6
# 30 "data/maps/InnFloor1/scripts.pory"
	speakername InnFloor1_Concierge_Text_0, PORTRAIT_AMELIA_NEUTRAL
# 31 "data/maps/InnFloor1/scripts.pory"
	msgbox InnFloor1_Concierge_Text_7
# 32 "data/maps/InnFloor1/scripts.pory"
	speakername InnFloor1_Concierge_Text_2
# 33 "data/maps/InnFloor1/scripts.pory"
	msgbox InnFloor1_Concierge_Text_8, MSGBOX_AUTOCLOSE
# 34 "data/maps/InnFloor1/scripts.pory"
	setflag FLAG_STARTED_WEATHERBANE_QUEST
	goto InnFloor1_Concierge_1

InnFloor1_Concierge_3:
# 38 "data/maps/InnFloor1/scripts.pory"
	speakername InnFloor1_Concierge_Text_2
# 39 "data/maps/InnFloor1/scripts.pory"
	msgbox InnFloor1_Concierge_Text_9
	goto InnFloor1_Concierge_1

InnFloor1_Concierge_4:
# 43 "data/maps/InnFloor1/scripts.pory"
	setflag FLAG_FINISHED_WEATHERBANE_QUEST
# 44 "data/maps/InnFloor1/scripts.pory"
	speakername InnFloor1_Concierge_Text_0, PORTRAIT_AMELIA_NEUTRAL
# 45 "data/maps/InnFloor1/scripts.pory"
	msgbox InnFloor1_Concierge_Text_10
# 47 "data/maps/InnFloor1/scripts.pory"
	speakername InnFloor1_Concierge_Text_2
# 48 "data/maps/InnFloor1/scripts.pory"
	msgbox InnFloor1_Concierge_Text_11, MSGBOX_AUTOCLOSE
# 49 "data/maps/InnFloor1/scripts.pory"
	giveitem ITEM_KEY_TO_ROOM_1
# 50 "data/maps/InnFloor1/scripts.pory"
	setmetatile 15, 2, 0x245, TRUE
# 51 "data/maps/InnFloor1/scripts.pory"
	special DrawWholeMapView
# 52 "data/maps/InnFloor1/scripts.pory"
	speakername InnFloor1_Concierge_Text_2
# 53 "data/maps/InnFloor1/scripts.pory"
	msgbox InnFloor1_Concierge_Text_12
# 54 "data/maps/InnFloor1/scripts.pory"
	speakername InnFloor1_Concierge_Text_0, PORTRAIT_AMELIA_NEUTRAL
# 55 "data/maps/InnFloor1/scripts.pory"
	msgbox InnFloor1_Concierge_Text_13, MSGBOX_AUTOCLOSE
	goto InnFloor1_Concierge_1


InnFloor1_Stark::
# 68 "data/maps/InnFloor1/scripts.pory"
	speakername InnFloor1_Stark_Text_0
# 69 "data/maps/InnFloor1/scripts.pory"
	msgbox InnFloor1_Stark_Text_1, MSGBOX_AUTOCLOSE
	return


InnFloor1_WanderingGuy::
# 74 "data/maps/InnFloor1/scripts.pory"
	lock
# 75 "data/maps/InnFloor1/scripts.pory"
	faceplayer
# 76 "data/maps/InnFloor1/scripts.pory"
	speakername InnFloor1_WanderingGuy_Text_0
# 77 "data/maps/InnFloor1/scripts.pory"
	msgbox InnFloor1_WanderingGuy_Text_1
# 79 "data/maps/InnFloor1/scripts.pory"
	speakername InnFloor1_Concierge_Text_0, PORTRAIT_AMELIA_SERIOUSLY
# 80 "data/maps/InnFloor1/scripts.pory"
	msgbox InnFloor1_WanderingGuy_Text_2
# 81 "data/maps/InnFloor1/scripts.pory"
	release
	return


InnFloor1_WanderingGirl::
# 86 "data/maps/InnFloor1/scripts.pory"
	speakername InnFloor1_WanderingGirl_Text_0
# 87 "data/maps/InnFloor1/scripts.pory"
	msgbox InnFloor1_WanderingGirl_Text_1, MSGBOX_NPC
	return


InnFloor1_Concierge_Text_0:
# 18 "data/maps/InnFloor1/scripts.pory"
	.string "Amelia$"

InnFloor1_Concierge_Text_1:
# 19 "data/maps/InnFloor1/scripts.pory"
	.string "Hello, could I get a room here?\n"
	.string "Just for a short while.$"

InnFloor1_Concierge_Text_2:
# 20 "data/maps/InnFloor1/scripts.pory"
	.string "Innkeeper$"

InnFloor1_Concierge_Text_3:
# 21 "data/maps/InnFloor1/scripts.pory"
	.string "Sure, sure. We have vacancies.\n"
	.string "The cost of one room is…$"

InnFloor1_Concierge_Text_4:
# 23 "data/maps/InnFloor1/scripts.pory"
	.string "Well, you see, I'm a Pokémon Ranger.\n"
	.string "I don't carry money, but I do\l"
	.string "Pokémon-related odd jobs in exchange\l"
	.string "for favors, if that's alright?$"

InnFloor1_Concierge_Text_5:
# 25 "data/maps/InnFloor1/scripts.pory"
	.string "Ah, yes. I've seen your people before.\p"
	.string "In that case, could you go up on\n"
	.string "the roof and take care of something?\p"
	.string "The Weatherbane has been making noise\n"
	.string "something fierce lately.\l"
	.string "It's disturbing the guests.\p"
	.string "Could you go up there and set it\n"
	.string "right? I'll put a ladder out…$"

InnFloor1_Concierge_Text_6:
# 29 "data/maps/InnFloor1/scripts.pory"
	.string "The weathervane? That's not exactly…$"

InnFloor1_Concierge_Text_7:
# 31 "data/maps/InnFloor1/scripts.pory"
	.string "Okay, sure. I'll take care of it.$"

InnFloor1_Concierge_Text_8:
# 33 "data/maps/InnFloor1/scripts.pory"
	.string "Thanks, dearie. I'm just too old to\n"
	.string "take care of that thing anymore.$"

InnFloor1_Concierge_Text_9:
# 39 "data/maps/InnFloor1/scripts.pory"
	.string "Thanks for taking care of the\n"
	.string "Weatherbane, dearie.\p"
	.string "I used to calm him down by winning\n"
	.string "shouting matches with him, but my\l"
	.string "voice isn't strong enough for that\l"
	.string "these days.$"

InnFloor1_Concierge_Text_10:
# 45 "data/maps/InnFloor1/scripts.pory"
	.string "It's done. He said there's something\n"
	.string "in town bothering him, so I promised\l"
	.string "to take care of it. He might get\l"
	.string "loud again if I fail, but I don't\l"
	.string "usually do that.\p"
	.string "Can I have my room key now?$"

InnFloor1_Concierge_Text_11:
# 48 "data/maps/InnFloor1/scripts.pory"
	.string "Of course, dear. Here you are.$"

InnFloor1_Concierge_Text_12:
# 53 "data/maps/InnFloor1/scripts.pory"
	.string "Your room is up the stairs on\n"
	.string "the right. Just be sure to give\l"
	.string "the key back before you leave town.$"

InnFloor1_Concierge_Text_13:
# 55 "data/maps/InnFloor1/scripts.pory"
	.string "Thank you very much.$"

InnFloor1_Concierge_Text_14:
# 60 "data/maps/InnFloor1/scripts.pory"
	.string "Just go outside, up the ladder, and\n"
	.string "quiet that Weatherbane down.\p"
	.string "I'll give you your room key when\n"
	.string "you're done.$"

InnFloor1_Stark_Text_0:
# 68 "data/maps/InnFloor1/scripts.pory"
	.string "Stark$"

InnFloor1_Stark_Text_1:
# 69 "data/maps/InnFloor1/scripts.pory"
	.string "Please open the door! I'll let you pick\n"
	.string "out something from the bakery if you\l"
	.string "just tell me what I did…!$"

InnFloor1_WanderingGuy_Text_0:
# 76 "data/maps/InnFloor1/scripts.pory"
	.string "Dorcas$"

InnFloor1_WanderingGuy_Text_1:
# 77 "data/maps/InnFloor1/scripts.pory"
	.string "People come and go around here so\n"
	.string "often, I never remember their faces.\p"
	.string "But I have a feeling I'll\n"
	.string "remember yours.$"

InnFloor1_WanderingGuy_Text_2:
# 80 "data/maps/InnFloor1/scripts.pory"
	.string "… … … … …$"

InnFloor1_WanderingGirl_Text_0:
# 86 "data/maps/InnFloor1/scripts.pory"
	.string "Haley$"

InnFloor1_WanderingGirl_Text_1:
# 87 "data/maps/InnFloor1/scripts.pory"
	.string "You can use the stairs if you want\n"
	.string "to go up a level.$"
