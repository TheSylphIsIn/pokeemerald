InnFloor1_MapScripts::
	.byte 0


InnFloor1_Concierge::
# 5 "data/maps/InnFloor1/scripts.pory"
	lock
# 6 "data/maps/InnFloor1/scripts.pory"
	faceplayer
# 7 "data/maps/InnFloor1/scripts.pory"
	goto_if_unset FLAG_STARTED_WEATHERBANE_QUEST, InnFloor1_Concierge_2
# 27 "data/maps/InnFloor1/scripts.pory"
	goto_if_set FLAG_FINISHED_WEATHERBANE_QUEST, InnFloor1_Concierge_3
# 31 "data/maps/InnFloor1/scripts.pory"
	speakername InnFloor1_Concierge_Text_2
# 32 "data/maps/InnFloor1/scripts.pory"
	msgbox InnFloor1_Concierge_Text_9
InnFloor1_Concierge_1:
# 35 "data/maps/InnFloor1/scripts.pory"
	release
	return

InnFloor1_Concierge_2:
# 9 "data/maps/InnFloor1/scripts.pory"
	speakername InnFloor1_Concierge_Text_0, PORTRAIT_AMELIA_NEUTRAL
# 10 "data/maps/InnFloor1/scripts.pory"
	msgbox InnFloor1_Concierge_Text_1
# 11 "data/maps/InnFloor1/scripts.pory"
	speakername InnFloor1_Concierge_Text_2
# 12 "data/maps/InnFloor1/scripts.pory"
	msgbox InnFloor1_Concierge_Text_3
# 13 "data/maps/InnFloor1/scripts.pory"
	speakername InnFloor1_Concierge_Text_0, PORTRAIT_AMELIA_NEUTRAL
# 14 "data/maps/InnFloor1/scripts.pory"
	msgbox InnFloor1_Concierge_Text_4
# 15 "data/maps/InnFloor1/scripts.pory"
	speakername InnFloor1_Concierge_Text_2
# 16 "data/maps/InnFloor1/scripts.pory"
	msgbox InnFloor1_Concierge_Text_5
# 19 "data/maps/InnFloor1/scripts.pory"
	speakername InnFloor1_Concierge_Text_0, PORTRAIT_AMELIA_SERIOUSLY
# 20 "data/maps/InnFloor1/scripts.pory"
	msgbox InnFloor1_Concierge_Text_6
# 21 "data/maps/InnFloor1/scripts.pory"
	speakername InnFloor1_Concierge_Text_0, PORTRAIT_AMELIA_NEUTRAL
# 22 "data/maps/InnFloor1/scripts.pory"
	msgbox InnFloor1_Concierge_Text_7
# 23 "data/maps/InnFloor1/scripts.pory"
	speakername InnFloor1_Concierge_Text_2
# 24 "data/maps/InnFloor1/scripts.pory"
	msgbox InnFloor1_Concierge_Text_8, MSGBOX_AUTOCLOSE
# 25 "data/maps/InnFloor1/scripts.pory"
	setflag FLAG_STARTED_WEATHERBANE_QUEST
	goto InnFloor1_Concierge_1

InnFloor1_Concierge_3:
	goto InnFloor1_Concierge_1


InnFloor1_Concierge_Text_0:
# 9 "data/maps/InnFloor1/scripts.pory"
	.string "Amelia$"

InnFloor1_Concierge_Text_1:
# 10 "data/maps/InnFloor1/scripts.pory"
	.string "Hello, could I get a room here?\n"
	.string "Just for a short while.$"

InnFloor1_Concierge_Text_2:
# 11 "data/maps/InnFloor1/scripts.pory"
	.string "Innkeeper$"

InnFloor1_Concierge_Text_3:
# 12 "data/maps/InnFloor1/scripts.pory"
	.string "Sure, sure. We have vacancies.\n"
	.string "The cost of one room is…$"

InnFloor1_Concierge_Text_4:
# 14 "data/maps/InnFloor1/scripts.pory"
	.string "Well, you see, I'm a Pokémon Ranger.\n"
	.string "I don't carry money, but I do\l"
	.string "Pokémon-related odd jobs in exchange\l"
	.string "for favors, if that's alright?$"

InnFloor1_Concierge_Text_5:
# 16 "data/maps/InnFloor1/scripts.pory"
	.string "Ah, yes. I've seen your people before.\p"
	.string "In that case, could you go up on\n"
	.string "the roof and take care of something?\p"
	.string "The Weatherbane has been making noise\n"
	.string "something fierce lately.\l"
	.string "It's disturbing the guests.\p"
	.string "Could you go up there and set it\n"
	.string "right? I'll put a ladder out…$"

InnFloor1_Concierge_Text_6:
# 20 "data/maps/InnFloor1/scripts.pory"
	.string "The weathervane? That's not exactly…$"

InnFloor1_Concierge_Text_7:
# 22 "data/maps/InnFloor1/scripts.pory"
	.string "Okay, sure. I'll take care of it.$"

InnFloor1_Concierge_Text_8:
# 24 "data/maps/InnFloor1/scripts.pory"
	.string "Thanks, dearie. I'm just too old to\n"
	.string "take care of that thing anymore.$"

InnFloor1_Concierge_Text_9:
# 32 "data/maps/InnFloor1/scripts.pory"
	.string "Just go outside, up the ladder, and\n"
	.string "quiet that Weatherbane down.\p"
	.string "I'll give you your room key when\n"
	.string "you're done.$"
