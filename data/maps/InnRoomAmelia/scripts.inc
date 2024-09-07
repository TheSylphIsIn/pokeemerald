InnRoomAmelia_MapScripts::
	.byte 0


InnTrigger_HealParty::
# 5 "data/maps/InnRoomAmelia/scripts.pory"
	clearflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 6 "data/maps/InnRoomAmelia/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Movement_UnsafeTurn
# 7 "data/maps/InnRoomAmelia/scripts.pory"
	waitmovement 0
# 8 "data/maps/InnRoomAmelia/scripts.pory"
	delay 16
# 9 "data/maps/InnRoomAmelia/scripts.pory"
	msgbox InnTrigger_HealParty_Text_0, MSGBOX_AUTOCLOSE
# 10 "data/maps/InnRoomAmelia/scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 11 "data/maps/InnRoomAmelia/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
	return


# 14 "data/maps/InnRoomAmelia/scripts.pory"
Movement_UnsafeTurn:
# 16 "data/maps/InnRoomAmelia/scripts.pory"
	face_down
	step_end

Inn_CounterScript1::
# 21 "data/maps/InnRoomAmelia/scripts.pory"
	msgbox Inn_CounterScript1_Text_0, MSGBOX_SIGN
	return


Inn_CounterScript2::
# 26 "data/maps/InnRoomAmelia/scripts.pory"
	msgbox Inn_CounterScript2_Text_0, MSGBOX_SIGN
	return


Inn_BathroomDoor::
# 31 "data/maps/InnRoomAmelia/scripts.pory"
	msgbox Inn_BathroomDoor_Text_0, MSGBOX_SIGN
	return


InnTrigger_HealParty_Text_0:
# 9 "data/maps/InnRoomAmelia/scripts.pory"
	.string "Take a rest…$"

Inn_CounterScript1_Text_0:
# 21 "data/maps/InnRoomAmelia/scripts.pory"
	.string "There's a microwave set in the wall.\n"
	.string "But it's useless to you.$"

Inn_CounterScript2_Text_0:
# 26 "data/maps/InnRoomAmelia/scripts.pory"
	.string "There's a TV set in the wall.\n"
	.string "Seems like an inconvenient place.$"

Inn_BathroomDoor_Text_0:
# 31 "data/maps/InnRoomAmelia/scripts.pory"
	.string "There's a bathroom through here,\n"
	.string "but you don't trust it.$"
