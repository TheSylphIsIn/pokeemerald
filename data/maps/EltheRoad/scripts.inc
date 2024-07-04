EltheRoad_MapScripts::
	.byte 0


EltheRoad_EventScript_FirstTrigger::
# 5 "data/maps/EltheRoad/scripts.pory"
	lock
# 6 "data/maps/EltheRoad/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
	return

