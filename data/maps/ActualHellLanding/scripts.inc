.set LOCALID_ENTRANCE_DEMON, 2
.set LOCALID_BLOCK_DEMON, 1

ActualHellLanding_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, ActualHellLanding_OnTransition
	.byte 0

ActualHellLanding_OnTransition::
	call_if_set FLAG_HELL_ENTRANCE_UNBLOCK, ActualHellLanding_MapScript_MoveDemonBlockers
	end

ActualHellLanding_MapScript_MoveDemonBlockers:
	setobjectxyperm LOCALID_ENTRANCE_DEMON, 6, 6
	return

ActualHellLanding_EventScript_EntranceTrainer::
	trainerbattle_single TRAINER_KAREN_1, ActualHellLanding_Text_EntranceIntro, ActualHellLanding_Text_EntranceDefeat, ActualHellLanding_EventScript_EntranceContinue
	msgbox ActualHellLanding_Text_EntrancePostBattle, MSGBOX_AUTOCLOSE
	end

ActualHellLanding_EventScript_EntranceContinue::
	msgbox ActualHellLanding_Text_DemonDefeated, MSGBOX_DEFAULT
	giveitem ITEM_FIRE_DUST
	closemessage
	applymovement LOCALID_ENTRANCE_DEMON, ActualHellLanding_Movement_EntranceDemonStandAside
	waitmovement 0
	setflag FLAG_HELL_ENTRANCE_UNBLOCK
	release
	end

ActualHellLanding_EventScript_Gleis::
	lock
	faceplayer
	goto_if_set FLAG_HELL_GLEIS_HEAL, ActualHellLanding_EventScript_GleisGoFinish
	goto_if_set FLAG_TEMP_1, ActualHellLanding_EventScript_GleisHeal
	msgbox ActualHellLanding_Text_GleisIntro, MSGBOX_DEFAULT
	setflag FLAG_TEMP_1
	goto ActualHellLanding_EventScript_GleisHeal

ActualHellLanding_EventScript_GleisHeal::
	msgbox ActualHellLanding_Text_GleisHealPrompt, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, ActualHellLanding_EventScript_GleisGoFinish
	closemessage
	special HealPlayerParty
	playse SE_USE_ITEM
	waitse
	msgbox ActualHellLanding_Text_PartyHealed, MSGBOX_DEFAULT
	setflag FLAG_HELL_GLEIS_HEAL
	goto ActualHellLanding_EventScript_GleisGoFinish

ActualHellLanding_EventScript_GleisGoFinish:
	msgbox ActualHellLanding_Text_GleisFinish, MSGBOX_DEFAULT
	release
	end

ActualHellLanding_Text_GleisIntro:
	.string "{PLAYER}: Gleis? Is that you?\p"
	.string "{COLOR RED}{SHADOW LIGHT_RED}GLEIS: This is a projected image.\n"
	.string "I thought you might need more help.\p"
	.string "I'm limited in what I can actually\n"
	.string "do to help, however. I must conserve\l"
	.string "the majority of my energy for closing\l"
	.string "the portal when the time comes.$"

ActualHellLanding_Text_GleisHealPrompt:
	.string "{COLOR RED}{SHADOW LIGHT_RED}GLEIS: I can afford enough power to\n"
	.string "restore your POKéMON's health, but\l"
	.string "only once. Do you need it now?$"

ActualHellLanding_Text_PartyHealed:
	.string "{PLAYER}'s party was healed.$"

ActualHellLanding_Text_GleisFinish:
	.string "{COLOR RED}{SHADOW LIGHT_RED}GLEIS: Then you must go.\n"
	.string "Destroy the artefact with all haste!$"

ActualHellLanding_Text_EntranceIntro:
	.string "DEMON: What! A living trespasser!\n"
	.string "Interloper! How did you get through\l"
	.string "the portal?\p"
	.string "{PLAYER}: I'm here on behalf of a\n"
	.string "TAOIST! You monsters are messing up\l"
	.string "my region! I'm evicting you from the\l"
	.string "world of the living!\p"
	.string "DEMON: Fool human! I'll put you in\n"
	.string "your place!$"

ActualHellLanding_Text_EntranceDefeat:
	.string "What!? That's absurd!$"

ActualHellLanding_Text_DemonDefeated:
	.string "DEMON: Waugh! You've killed me!\p"
	.string "DEMON: … … … … …\n"
	.string "{PLAYER}: … … … … …{PAUSE 60}\p"
	.string "DEMON: Well, we're already in hell.\n"
	.string "You can't exactly banish me.\p"
	.string "But we are honorable. I will\n"
	.string "recognize your strength, and\l"
	.string "stand aside. But we will not take\l"
	.string "your assault lying down.\p"
	.string "Take this trifle, and know that it\n"
	.string "will not protect you.$"

ActualHellLanding_Text_EntrancePostBattle:
	.string "Remove your face from my sight,\n"
	.string "lest I remove it from your head!$"

ActualHellLanding_Movement_EntranceDemonStandAside:
	walk_down
	walk_right
	walk_right
	face_down
	step_end

ActualHellLanding_Item::
	finditem ITEM_EVERSTONE
	end

ActualHellLanding_EventScript_Block::
	lock
	faceplayer
	msgbox ActualHellLanding_Text_BlockDemon, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_BLOCK_DEMON, ActualHellLanding_Movement_BlockDemonFlee
	waitmovement 0
	removeobject LOCALID_BLOCK_DEMON
	delay 30
	msgbox ActualHellLanding_Text_PlayerTalkToSelf, MSGBOX_DEFAULT
	release
	end

ActualHellLanding_Text_BlockDemon:
	.string "DEMON: Ack! A mortal! You're here\n"
	.string "to close the portal, aren't you?\p"
	.string "{PLAYER}: Of course! Your reign of\n"
	.string "terror in RUSTBORO is over! I -\p"
	.string "DEMON: Shut up! I won't let you!\n"
	.string "Since I don't have POKéMON, I don't\l"
	.string "need to have honor in defeat!\p"
	.string "I'll go warn everyone! You'll never\n"
	.string "make it to the artefact! Haw haw!$"

ActualHellLanding_Text_PlayerTalkToSelf:
	.string "{PLAYER}: Well…that might make this a\n"
	.string "lot harder.\p"
	.string "But there's no turning back. I'll have\n"
	.string "to power through it.$"

ActualHellLanding_Movement_BlockDemonFlee:
	walk_in_place_down
	walk_in_place_down
	walk_in_place_down
	walk_fast_right
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	step_end
