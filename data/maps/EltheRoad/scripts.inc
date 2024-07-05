EltheRoad_MapScripts::
	.byte 0


EltheRoad_EventScript_FirstTrigger::
# 5 "data/maps/EltheRoad/scripts.pory"
	lock
# 6 "data/maps/EltheRoad/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
	return


Sign_Test::
# 11 "data/maps/EltheRoad/scripts.pory"
	msgbox Sign_Test_Text_0, MSGBOX_DEFAULT
# 12 "data/maps/EltheRoad/scripts.pory"
	speakername Sign_Test_Text_1, PORTRAIT_AMELIA_NEUTRAL
# 13 "data/maps/EltheRoad/scripts.pory"
	msgbox Sign_Test_Text_2, MSGBOX_DEFAULT
# 14 "data/maps/EltheRoad/scripts.pory"
	speakername NULL, 0
# 15 "data/maps/EltheRoad/scripts.pory"
	msgbox Sign_Test_Text_3, MSGBOX_DEFAULT
# 16 "data/maps/EltheRoad/scripts.pory"
	speakername Sign_Test_Text_1, PORTRAIT_AMELIA_SHOCK
# 17 "data/maps/EltheRoad/scripts.pory"
	playbgm MUS_DUMMY, FALSE
# 18 "data/maps/EltheRoad/scripts.pory"
	playse SE_THUNDER
# 19 "data/maps/EltheRoad/scripts.pory"
	msgbox Sign_Test_Text_4, MSGBOX_AUTOCLOSE
	return


Sign_Test_Text_0:
# 11 "data/maps/EltheRoad/scripts.pory"
	.string "Cave Story$"

Sign_Test_Text_1:
# 12 "data/maps/EltheRoad/scripts.pory"
	.string "Amelia$"

Sign_Test_Text_2:
# 13 "data/maps/EltheRoad/scripts.pory"
	.string "What's Cave Story?$"

Sign_Test_Text_3:
# 15 "data/maps/EltheRoad/scripts.pory"
	.string "CAVE STORE DEEZ NUTS IN YOUR MOUTH$"

Sign_Test_Text_4:
# 19 "data/maps/EltheRoad/scripts.pory"
	.string "!!!!!$"
