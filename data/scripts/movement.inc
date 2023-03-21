Common_Movement_QuestionMark:
	emote_question_mark
	step_end

Common_Movement_ExclamationMark:
	emote_exclamation_mark
	step_end

Common_Movement_Delay48:
	delay_16
	delay_16
	delay_16
	step_end

Common_Movement_FacePlayer:
	face_player
	step_end

Common_Movement_FaceAwayPlayer:
	face_away_player
	step_end

Common_Movement_FaceOriginalDirection:
	face_original_direction
	step_end

Common_Movement_WalkInPlaceFasterLeft:
	walk_in_place_faster_left
	step_end

Common_Movement_WalkInPlaceFasterUp:
	walk_in_place_faster_up
	step_end

Common_Movement_WalkInPlaceFasterRight:
	walk_in_place_faster_right
	step_end

Common_Movement_WalkInPlaceFasterDown:
	walk_in_place_faster_down
	step_end

Common_Movement_FaceRight:
	face_right
	step_end

Common_Movement_FaceLeft:
	face_left
	step_end

Common_Movement_FaceDown:
	face_down
	step_end

Common_Movement_FaceUp:
	face_up
	step_end

Common_Movement_WalkInPlaceDown:
	walk_in_place_down
	step_end

Common_Movement_WalkInPlaceLeft:
	walk_in_place_left
	step_end

Common_Movement_WalkInPlaceRight:
	walk_in_place_right
	step_end

Common_Movement_WalkUp6:
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

Common_Movement_WalkUp4:
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

Common_Movement_Delay32:
	delay_16
	delay_16
	step_end

Common_Movement_WalkUp:
	walk_up
	step_end

@ Unused
Common_Movement_WalkUp2::
	walk_up
	walk_up
	step_end

StepAwayLeft::
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_StepLeft
	waitmovement 0
	releaseall
	end
	
Common_Movement_StepLeft::
	walk_left
	step_end

StepAwayRight::
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_StepRight
	waitmovement 0
	releaseall
	end
	
Common_Movement_StepRight::
	walk_right
	step_end

StepAwayUp::
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_StepUp
	waitmovement 0
	releaseall
	end
	
Common_Movement_StepUp::
	walk_up
	step_end

StepAwayDown::
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_StepDown
	waitmovement 0
	releaseall
	end

Common_ZombieCrumble::
	message Common_Text_ZombieCrumbled
	applymovement VAR_LAST_TALKED, Common_Movement_CrumbleToDust
	waitmovement 0
	removeobject VAR_LAST_TALKED
	waitbuttonpress
	return
	
Common_LootCorpse::
	message Common_Text_PlayerLooted
	waitbuttonpress
	finditem VAR_TEMP_LOOT_ITEM
	return
	
Common_DemonCrumble::
	message Common_Text_DemonCrumbled
	applymovement VAR_LAST_TALKED, Common_Movement_CrumbleToDust
	waitmovement 0
	removeobject VAR_LAST_TALKED
	waitmessage
	waitbuttonpress
	return
	
Common_Movement_CrumbleToDust::
	crumble
	delay_16
	step_end
	
Common_Text_ZombieCrumbled::
	.string "The zombie crumbled to dust.$"
	
Common_Text_DemonCrumbled::
	.string "The corpse crumbled to dust.\p"
	.string "The demon flitted back to the\n"
	.string "netherworld!$"
	
Common_Text_PlayerLooted:
	.string "{PLAYER} looted the body…$"
	
Common_Movement_StepDown::
	walk_down
	step_end

