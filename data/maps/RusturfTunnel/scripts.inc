.equ LOCALID_WANDAS_BF, 1
.set LOCALID_BRINEY, 5
.set LOCALID_GLEIS, 5
.set LOCALID_ELISE, 6
.equ LOCALID_WANDA, 10

RusturfTunnel_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, RusturfTunnel_OnFrame
	.byte 0

RusturfTunnel_OnFrame:
	map_script_2 VAR_RUSTURF_TUNNEL_STATE, 2, RusturfTunnel_OnFrameScript
	.2byte 0

RusturfTunnel_OnFrameScript::
	lock
	applymovement LOCALID_GLEIS, RusturfTunnel_Movement_GleisWalkOver
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
	msgbox RusturfTunnel_Text_PostHell, MSGBOX_DEFAULT
	call_if_set FLAG_BORROWED_FACELEECH, RusturfTunnel_EventScript_TakeBackFaceleech
	closemessage
	applymovement LOCALID_GLEIS, RusturfTunnel_Movement_GleisLeave
	waitmovement 0
	removeobject LOCALID_GLEIS
	delay 120
	msgbox RusturfTunnel_Text_DemoOver, MSGBOX_DEFAULT
	closemessage
	setvar VAR_RUSTURF_TUNNEL_STATE, 3
	setrespawn HEAL_LOCATION_RUSTBORO_CITY
	release
	end

RusturfTunnel_EventScript_TakeBackFaceleech:
	msgbox RusturfTunnel_Text_TakeFaceleech, MSGBOX_DEFAULT
	givemon SPECIES_FACELEECH, 20, 0, 0, 0, 2
	return

RusturfTunnel_Text_PostHell:
	.string "{COLOR RED}{SHADOW LIGHT_RED}GLEIS: Good job, {PLAYER}.\n"
	.string "We've closed the portal. Demons can\l"
	.string "no longer reach RUSTBORO from here.\p"
	.string "{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}{PLAYER}: Dammit! I was so close!\p"
	.string "{COLOR RED}{SHADOW LIGHT_RED}GLEIS: What's wrong?\p"
	.string "{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}{PLAYER}: The head demon…he said he\n"
	.string "knew about my past.\p"
	.string "But you pulled me out before I could\n"
	.string "get any answers out of him.\p"
	.string "{COLOR RED}{SHADOW LIGHT_RED}GLEIS: {PAUSE 30}Well…{PAUSE 30}\n"
	.string "demons are untrustworthy, {PLAYER}.\p"
	.string "It's unlikely he had any real knowledge.\n"
	.string "He was just trying to sow discord.\l"
	.string "Don't think about it any more.\p"
	.string "{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}{PLAYER}: Ugh…do YOU know anything?\n"
	.string "About my past? Or my brother?\p"
	.string "{COLOR RED}{SHADOW LIGHT_RED}GLEIS: Hmm…I seem to recall he was\n"
	.string "in this area recently. I believe\l"
	.string "he headed east to VERDANTURF.\l"
	.string "You should follow him.\p"
	.string "{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}{PLAYER}: …Okay. Fine. I'll start there.\n"
	.string "Thanks, GLEIS.\p"
	.string "{COLOR RED}{SHADOW LIGHT_RED}GLEIS: Oh, it's my pleasure.\p"
	.string "{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}{PLAYER}: Hey, what happened to ELISE?\p"
	.string "{COLOR RED}{SHADOW LIGHT_RED}GLEIS: I beg your pardon?\p"
	.string "{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}{PLAYER}: The girl they were using\n"
	.string "for the portal. She's gone.\p"
	.string "{COLOR RED}{SHADOW LIGHT_RED}GLEIS: Closing the portal released a\n"
	.string "discharge of energy. I channeled it\l"
	.string "back into her to contain it.\l"
	.string "It destroyed her.\p"
	.string "{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}{PLAYER}: Y-you killed her!?\p"
	.string "{COLOR RED}{SHADOW LIGHT_RED}GLEIS: The alternative was to let\n"
	.string "it run free and kill us both.\l"
	.string "It was a necessary sacrifice.\p"
	.string "Well, now that my business here is done,\n"
	.string "I must go. I'll try to discover more\l"
	.string "about LANDON in case we cross paths\l"
	.string "again. Until then…$"

RusturfTunnel_Text_TakeFaceleech:
	.string "{COLOR RED}{SHADOW LIGHT_RED}GLEIS: Oh, and I'll need my\n"
	.string "FACELEECH back.$"

RusturfTunnel_Text_DemoOver:
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Thank you for playing\n"
	.string "SNAKEWOOD RESURRECTED!\p"
	.string "This is the end of the demo. No\n"
	.string "further progress can be made.\p"
	.string "I undertook this project in honor of\n"
	.string "April Fools Day. It's unlikely that I\l"
	.string "will ever develop a full version.\p"
	.string "This is the end. I hope you enjoyed,\n"
	.string "ironically or sincerely.\p"
	.string "If you liked my additions, keep an\n"
	.string "eye out for my main project,\l"
	.string "POKéMON FANDANGO VERSION. I'll\l"
	.string "release a similarly featured demo\l"
	.string "for that game whenever I can.\p"
	.string "Until then, see ya around!\n"
	.string "    - The Sylph of Mind$"

RusturfTunnel_Movement_GleisWalkOver:
	walk_left
	step_end

RusturfTunnel_Movement_GleisLeave:
	walk_up
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	step_end

RusturfTunnel_EventScript_Wanda::
	lock
	faceplayer
	msgbox RusturfTunnel_Text_BoyfriendOnOtherSideOfRock, MSGBOX_DEFAULT
	closemessage
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

RusturfTunnel_Trigger_Gleis::
	lockall
	playse SE_PIN
	applymovement LOCALID_GLEIS, Common_Movement_FaceLeft
	waitmovement 0
	applymovement LOCALID_GLEIS, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement LOCALID_GLEIS, Common_Movement_Delay48
	waitmovement 0
	msgbox RusturfTunnel_Text_GleisCallOut, MSGBOX_AUTOCLOSE
	applymovement OBJ_EVENT_ID_PLAYER, RusturfTunnel_Movement_PlayerApproachGleis
	waitmovement 0
	msgbox RusturfTunnel_Text_TriggerExposition, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_GLEIS, Common_Movement_FaceUp
	waitmovement 0
	setvar VAR_RUSTURF_TUNNEL_STATE, 1
	releaseall
	end

RusturfTunnel_Text_GleisCallOut:
	.string "{COLOR RED}{SHADOW LIGHT_RED}GLEIS: {PLAYER}. You made it.\n"
	.string "Come closer.$"

RusturfTunnel_Text_TriggerExposition:
	.string "{PLAYER}: Who's this girl?\p"
	.string "{COLOR RED}{SHADOW LIGHT_RED}GLEIS: She is the portal. Demonic\n"
	.string "energy is being channeled through\l"
	.string "her body to connect the world of the\l"
	.string "living to the netherworld.\p"
	.string "Normally, my powers of the TAO would\n"
	.string "allow me to seal it from here, but…\p"
	.string "GLEIS: Some strange power is forcing\n"
	.string "the portal to stay open. I believe\l"
	.string "there must be some powerful artefact\l"
	.string "in the netherworld causing this.\p"
	.string "{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}{PLAYER}: Some kind of soul portal\n"
	.string "artefect? So what do we do?\p"
	.string "{COLOR RED}{SHADOW LIGHT_RED}GLEIS: I have a plan involving you.\p"
	.string "I will use the portal to send you in\n"
	.string "to the netherworld so that you may\l"
	.string "destroy the artefact.\p"
	.string "Once its power is broken, I will\n"
	.string "extract you and close the portal.\p"
	.string "{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}{PLAYER}: …you're gonna send me to hell?\p"
	.string "That sounds extremely dangerous.\p"
	.string "{COLOR RED}{SHADOW LIGHT_RED}GLEIS: Well, it's our best shot. I\n"
	.string "can't send DANTALION. My control\l"
	.string "would be broken if he returned there.\p"
	.string "{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}{PLAYER}: I guess I'll give it a shot.\p"
	.string "{COLOR RED}{SHADOW LIGHT_RED}GLEIS: If you have any more questions,\n"
	.string "I will answer them best I can.\p"
	.string "Note well that you will not be able\n"
	.string "to access your PC while there.\l"
	.string "Do not go in unprepared.\p"
	.string "When you're ready, stand before the\n"
	.string "conduit and place your hand upon her.$"

RusturfTunnel_Movement_PlayerApproachGleis:
	walk_right
	walk_right
	walk_right
	step_end

RusturfTunnel_EventScript_Gleis::
	lock
	faceplayer
	message RusturfTunnel_Text_GleisQuestionPrompt
	waitmessage
	dynmultichoice 0, 0, TRUE, 4, 0, DYN_MULTICHOICE_CB_NONE, RusturfTunnel_Text_AskDemons, RusturfTunnel_Text_AskTao, RusturfTunnel_Text_AskFaceleech, RusturfTunnel_Text_AskLandon
	goto_if_eq VAR_RESULT, 0, RusturfTunnel_EventScript_DemonsScript
	goto_if_eq VAR_RESULT, 1, RusturfTunnel_EventScript_TaoScript
	goto_if_eq VAR_RESULT, 2, RusturfTunnel_EventScript_FaceleechScript
	goto_if_eq VAR_RESULT, 3, RusturfTunnel_EventScript_LandonScript
	goto RusturfTunnel_EventScript_NoQuestions

RusturfTunnel_EventScript_NoQuestions:
	msgbox RusturfTunnel_Text_NoQuestions, MSGBOX_DEFAULT
	release
	applymovement LOCALID_GLEIS, Common_Movement_FaceOriginalDirection
	end

RusturfTunnel_EventScript_DemonsScript:
	msgbox RusturfTunnel_Text_AskedDemons, MSGBOX_DEFAULT
	release
	applymovement LOCALID_GLEIS, Common_Movement_FaceOriginalDirection
	end

RusturfTunnel_EventScript_TaoScript:
	msgbox RusturfTunnel_Text_AskedTao, MSGBOX_DEFAULT
	release
	applymovement LOCALID_GLEIS, Common_Movement_FaceOriginalDirection
	end

RusturfTunnel_EventScript_FaceleechScript:
	msgbox RusturfTunnel_Text_AskedFaceleech, MSGBOX_DEFAULT
	goto_if_set FLAG_TEMP_2, RusturfTunnel_EventScript_End
	getpartysize
	goto_if_eq VAR_RESULT, PARTY_SIZE, RusturfTunnel_EventScript_End
	msgbox RusturfTunnel_Text_BorrowFaceleech, MSGBOX_DEFAULT
	closemessage
	setflag FLAG_BORROWED_FACELEECH
	setflag FLAG_TEMP_2
	release
	applymovement LOCALID_GLEIS, Common_Movement_FaceOriginalDirection
	end

RusturfTunnel_EventScript_GiveFaceleech:
	playfanfare MUS_OBTAIN_ITEM
	message RusturfTunnel_Text_BorrowedFaceleech
	waitfanfare
	waitbuttonpress
	givemon SPECIES_FACELEECH, 20, 0, 0, SPECIES_FACELEECH, 1
	msgbox RusturfTunnel_Text_FaceleechEnd, MSGBOX_DEFAULT
	closemessage
	return

RusturfTunnel_EventScript_End:
	release
	applymovement LOCALID_GLEIS, Common_Movement_FaceOriginalDirection
	end

RusturfTunnel_EventScript_LandonScript:
	msgbox RusturfTunnel_Text_AskedLandon, MSGBOX_DEFAULT
	release
	applymovement LOCALID_GLEIS, Common_Movement_FaceOriginalDirection
	end

RusturfTunnel_Text_GleisQuestionPrompt:
	.string "{COLOR RED}{SHADOW LIGHT_RED}GLEIS: Do you have something to ask\n"
	.string "me about?$"

RusturfTunnel_Text_AskDemons:
	.string "DEMONS$"

RusturfTunnel_Text_AskTao:
	.string "TAOISM$"

RusturfTunnel_Text_AskFaceleech:
	.string "FACELEECH$"

RusturfTunnel_Text_AskLandon:
	.string "LANDON$"

RusturfTunnel_Text_AskNone:
	.string "Nope.$"

RusturfTunnel_Text_NoQuestions:
	.string "{COLOR RED}{SHADOW LIGHT_RED}GLEIS: Then stop wasting time. We\n"
	.string "can't linger here any longer than\l"
	.string "absolutely necessary.$"

RusturfTunnel_Text_AskedDemons:
	.string "{PLAYER}: How am I supposed to\n"
	.string "survive against the demons? Won't\l"
	.string "they try to kill me?\p"
	.string "{COLOR RED}{SHADOW LIGHT_RED}GLEIS: Well, you see…you'll be fine,\n"
	.string "for the same reason there are still\l"
	.string "living people in this region.\p"
	.string "POKéMON are more powerful than the\n"
	.string "monsters. That's why they must use\l"
	.string "zombified POKéMON to fight.\p"
	.string "As long as you can win in a POKéMON\n"
	.string "battle, no harm will come to you.\p"
	.string "{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}{PLAYER}: But what about the fire\n"
	.string "and stuff? It is hell, after all…\p"
	.string "{COLOR RED}{SHADOW LIGHT_RED}GLEIS: I will use some of my power\n"
	.string "to shield you from here. Understood?\p"
	.string "{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}{PLAYER}: Okay, fine.$"

RusturfTunnel_Text_AskedTao:
	.string "{PLAYER}: You're a TAOIST, right? What\n"
	.string "does that really mean?\p"
	.string "{COLOR RED}{SHADOW LIGHT_RED}GLEIS: Well, I have some power over\n"
	.string "things which are mystical in nature.\p"
	.string "I can dominate the feeble minds of\n"
	.string "the undead, and I know other spells\l"
	.string "as well. Invisibility, portals…\p"
	.string "{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}{PLAYER}: Okay, but Taoism is a real\n"
	.string "thing, isn't it? A philosophy, or…\p"
	.string "I dunno exactly, but why does the Tao\n"
	.string "give you magic powers?\p"
	.string "{COLOR RED}{SHADOW LIGHT_RED}GLEIS: It…{PAUSE 60}\n"
	.string "well, I…\p"
	.string "GLEIS: Look, it's not important. We\n"
	.string "must focus on sealing this portal.$"

RusturfTunnel_Text_AskedFaceleech:
	.string "{PLAYER}: What's that…thing you used\n"
	.string "when you battled me?\l"
	.string "I've never seen a POKéMON like that.\p"
	.string "{COLOR RED}{SHADOW LIGHT_RED}GLEIS: I'm sure you haven't.\p"
	.string "FACELEECH is a creature made from my\n"
	.string "own power. You see…\p"
	.string "I chanced across a strange POKéMON\n"
	.string "one day. It was gravely damaged.\p"
	.string "I revitalized it with my powers, and\n"
	.string "it morphed into the form of FACELEECH.$"

RusturfTunnel_Text_BorrowFaceleech:
	.string "{PLAYER}: Well…since I'm going to be\n"
	.string "doing all the fighting while you\l"
	.string "hang around up here…\p"
	.string "Could I borrow FACELEECH?\p"
	.string "{COLOR RED}{SHADOW LIGHT_RED}GLEIS: What?{PAUSE 20}\n"
	.string "You're…{PAUSE 10}audacious. Why should I?\l"
	.string "FACELEECH is my creation.\p"
	.string "{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}{PLAYER}: Well, I'm still a noob.\n"
	.string "And I saw what that thing can do to\l"
	.string "these monsters. Just look outside.\p"
	.string "It's our best shot at success, isn't\n"
	.string "it?\p"
	.string "{COLOR RED}{SHADOW LIGHT_RED}GLEIS: … … … … …\n"
	.string "I suppose you're right. Fine.\p"
	.string "When I send you through the portal,\n"
	.string "I'll send FACELEECH with you.$"

RusturfTunnel_Text_BorrowedFaceleech:
	.string "{PLAYER} borrowed the FACELEECH\n"
	.string "from GLEIS!$"

RusturfTunnel_Text_FaceleechEnd:
	.string "{COLOR RED}{SHADOW LIGHT_RED}GLEIS: I'll be taking that back if…{PAUSE 45}\n"
	.string "that is, WHEN you return.\l"
	.string "Don't get too attached.$"

RusturfTunnel_Text_AskedLandon:
	.string "{PLAYER}: I'm looking for someone.\n"
	.string "Have you seen him around recently?\l"
	.string "His name's LANDON.\p"
	.string "{COLOR RED}{SHADOW LIGHT_RED}GLEIS: What does he look like?\p"
	.string "{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}{PLAYER}: … {PAUSE 10}… {PAUSE 10}… {PAUSE 10}… {PAUSE 10}…\n"
	.string "I have no damned idea.\p"
	.string "But he's the CHAMPION of HOENN.\n"
	.string "He's famous. Surely you know?\p"
	.string "{COLOR RED}{SHADOW LIGHT_RED}GLEIS: Hmm…I don't make a habit of\n"
	.string "following celebrity gossip.\p"
	.string "I may recall something about the\n"
	.string "CHAMPION, but we need to focus on\l"
	.string "the task at hand. Ask me afterward.$"

RusturfTunnel_EventScript_Elise::
	lock
	msgbox RusturfTunnel_Text_ReadyToGo, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, RusturfTunnel_EventScript_NoQuestions
	msgbox RusturfTunnel_Text_PreFlashback, MSGBOX_DEFAULT
	fadescreen FADE_TO_WHITE
	delay 10
	fadescreen FADE_FROM_WHITE
	msgbox RusturfTunnel_Text_PostFlashback, MSGBOX_DEFAULT
	closemessage
	setrespawn HEAL_LOCATION_ACTUAL_HELL_LANDING
	call_if_set FLAG_TEMP_2, RusturfTunnel_EventScript_GiveFaceleech
	playse SE_WARP_IN
	waitse
	warp MAP_ACTUAL_HELL_LANDING, 4, 4
	waitstate
	release
	end

RusturfTunnel_Text_ReadyToGo:
	.string "{COLOR RED}{SHADOW LIGHT_RED}GLEIS: You'll be stuck in there\n"
	.string "until the job is done. Ready?$"

RusturfTunnel_Text_PreFlashback:
	.string "{PLAYER}: Yes. Let's do this…\n"
	.string "Ngh…?\p"
	.string "Aaaargh!$"

RusturfTunnel_Text_PostFlashback:
	.string "{COLOR RED}{SHADOW LIGHT_RED}GLEIS: {PLAYER}! Are you quite alright?\p"
	.string "{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}{PLAYER}: Yeah. I just had a flashback.\n"
	.string "They're painful, but I remember who\l"
	.string "this girl is now.\p"
	.string "She's the CUT MAN's daughter, ELISE.\n"
	.string "She was friends with MAY.\p"
	.string "{COLOR RED}{SHADOW LIGHT_RED}GLEIS: Well, that's quite nice. Now\n"
	.string "are you ready to close this portal?\p"
	.string "{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}{PLAYER}: Yeah, yeah. Send me in.$"

RusturfTunnel_EventScript_WandasBoyfriend::
	lock
	faceplayer
	goto_if_set FLAG_TEMP_1, RusturfTunnel_EventScript_AlreadySpokenTo
	setflag FLAG_TEMP_1
	msgbox RusturfTunnel_Text_WhyCantTheyKeepDigging, MSGBOX_DEFAULT
	closemessage
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

RusturfTunnel_EventScript_AlreadySpokenTo::
	msgbox RusturfTunnel_Text_ToGetToVerdanturf, MSGBOX_DEFAULT
	closemessage
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

RusturfTunnel_EventScript_ClearTunnelScene::
	lockall
	call_if_eq VAR_TEMP_1, 1, RusturfTunnel_EventScript_FaceWandasBoyfriend1
	call_if_eq VAR_TEMP_1, 2, RusturfTunnel_EventScript_FaceWandasBoyfriend2
	call_if_eq VAR_TEMP_1, 3, RusturfTunnel_EventScript_FaceWandasBoyfriend3
	call RusturfTunnel_EventScript_WandasBoyfriendNotice
	msgbox RusturfTunnel_Text_YouShatteredBoulderTakeHM, MSGBOX_DEFAULT
	call_if_eq VAR_TEMP_1, 2, RusturfTunnel_EventScript_WandasBoyfriendApproachPlayer
	call_if_eq VAR_TEMP_1, 3, RusturfTunnel_EventScript_WandasBoyfriendApproachPlayer
	giveitem ITEM_HM04
	setflag FLAG_RECEIVED_HM04
	msgbox RusturfTunnel_Text_ExplainStrength, MSGBOX_DEFAULT
	closemessage
	call_if_eq VAR_TEMP_1, 1, RusturfTunnel_EventScript_BoyfriendApproachWanda1
	call_if_eq VAR_TEMP_1, 2, RusturfTunnel_EventScript_BoyfriendApproachWanda2
	call_if_eq VAR_TEMP_1, 3, RusturfTunnel_EventScript_BoyfriendApproachWanda3
	msgbox RusturfTunnel_Text_WandaReunion, MSGBOX_DEFAULT
	closemessage
	call_if_eq VAR_TEMP_1, 1, RusturfTunnel_EventScript_WandaAndBoyfriendExit1
	call_if_eq VAR_TEMP_1, 2, RusturfTunnel_EventScript_WandaAndBoyfriendExit
	call_if_eq VAR_TEMP_1, 3, RusturfTunnel_EventScript_WandaAndBoyfriendExit
	call RusturfTunnel_EventScript_SetRusturfTunnelOpen
	releaseall
	end

RusturfTunnel_EventScript_BoyfriendApproachWanda1::
	applymovement OBJ_EVENT_ID_PLAYER, RusturfTunnel_Movement_PlayerWatchBoyfriend1
	applymovement LOCALID_WANDAS_BF, RusturfTunnel_Movement_BoyfriendApproachWanda1
	waitmovement 0
	return

RusturfTunnel_EventScript_BoyfriendApproachWanda2::
	applymovement OBJ_EVENT_ID_PLAYER, RusturfTunnel_Movement_PlayerWatchBoyfriend
	applymovement LOCALID_WANDAS_BF, RusturfTunnel_Movement_BoyfriendApproachWanda
	waitmovement 0
	applymovement LOCALID_WANDA, Common_Movement_WalkInPlaceFasterDown
	waitmovement 0
	return

RusturfTunnel_EventScript_BoyfriendApproachWanda3::
	applymovement OBJ_EVENT_ID_PLAYER, RusturfTunnel_Movement_PlayerWatchBoyfriend
	applymovement LOCALID_WANDAS_BF, RusturfTunnel_Movement_BoyfriendApproachWanda
	waitmovement 0
	applymovement LOCALID_WANDA, Common_Movement_WalkInPlaceFasterDown
	waitmovement 0
	return

RusturfTunnel_EventScript_FaceWandasBoyfriend1::
	applymovement LOCALID_WANDAS_BF, Common_Movement_WalkInPlaceFasterUp
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
	waitmovement 0
	return

RusturfTunnel_EventScript_FaceWandasBoyfriend2::
	applymovement LOCALID_WANDAS_BF, RusturfTunnel_Movement_BoyfriendFaceRight
	waitmovement 0
	return

RusturfTunnel_EventScript_FaceWandasBoyfriend3::
	return

RusturfTunnel_EventScript_WandasBoyfriendApproachPlayer::
	closemessage
	applymovement LOCALID_WANDAS_BF, RusturfTunnel_Movement_WandasBoyfriendApproachPlayer
	waitmovement 0
	return

RusturfTunnel_EventScript_WandaAndBoyfriendExit1::
	applymovement LOCALID_WANDA, RusturfTunnel_Movement_WandaExit1
	applymovement LOCALID_WANDAS_BF, RusturfTunnel_Movement_WandasBoyfriendExit1
	waitmovement 0
	return

RusturfTunnel_EventScript_WandaAndBoyfriendExit::
	applymovement OBJ_EVENT_ID_PLAYER, RusturfTunnel_Movement_PlayerWatchWandaExit
	applymovement LOCALID_WANDA, RusturfTunnel_Movement_WandaExit
	applymovement LOCALID_WANDAS_BF, RusturfTunnel_Movement_WandasBoyfriendExit
	waitmovement 0
	return

RusturfTunnel_EventScript_WandasBoyfriendNotice::
	playse SE_PIN
	applymovement LOCALID_WANDAS_BF, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement LOCALID_WANDAS_BF, Common_Movement_Delay48
	waitmovement 0
	return

RusturfTunnel_Movement_WandaExit1:
	walk_right
	walk_right
	walk_right
	walk_right
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	step_end

RusturfTunnel_Movement_WandaExit:
	walk_right
	walk_right
	walk_right
	walk_right
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	step_end

RusturfTunnel_Movement_PlayerWatchWandaExit:
	delay_8
	walk_in_place_faster_up
	delay_16
	delay_16
	walk_in_place_faster_right
	step_end

RusturfTunnel_Movement_Unused1:
	walk_left
	walk_in_place_faster_right
	step_end

RusturfTunnel_Movement_Unused2:
	walk_down
	walk_in_place_faster_up
	delay_8
	walk_in_place_faster_right
	step_end

RusturfTunnel_Movement_Unused3:
	walk_up
	walk_in_place_faster_down
	delay_8
	walk_in_place_faster_right
	step_end

RusturfTunnel_Movement_PlayerWatchBoyfriend1:
	walk_left
	walk_in_place_faster_right
	step_end

RusturfTunnel_Movement_PlayerWatchBoyfriend:
	walk_right
	walk_in_place_faster_left
	step_end

RusturfTunnel_Movement_BoyfriendFaceRight:
	walk_up
	walk_in_place_faster_right
	step_end

RusturfTunnel_Movement_WandasBoyfriendExit1:
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	step_end

RusturfTunnel_Movement_WandasBoyfriendExit:
	walk_up
	walk_right
	walk_right
	walk_right
	walk_right
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	step_end

RusturfTunnel_Movement_WandasBoyfriendApproachPlayer:
	walk_right
	step_end

RusturfTunnel_Movement_BoyfriendApproachWanda1:
	walk_in_place_fast_up
	walk_in_place_fast_up
	walk_fast_up
	walk_fast_right
	step_end

RusturfTunnel_Movement_BoyfriendApproachWanda:
	walk_in_place_fast_right
	walk_in_place_fast_right
	walk_fast_right
	walk_in_place_faster_up
	step_end

RusturfTunnel_EventScript_TunnelBlockagePos1::
	setvar VAR_TEMP_1, 1
	end

RusturfTunnel_EventScript_TunnelBlockagePos2::
	setvar VAR_TEMP_1, 2
	end

RusturfTunnel_EventScript_TunnelBlockagePos3::
	setvar VAR_TEMP_1, 3
	end

RusturfTunnel_EventScript_AquaGruntBackUp::
	lockall
	msgbox RusturfTunnel_Text_ComeAndGetSome, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_GRUNT, RusturfTunnel_Movement_GruntAndPeekoBackUp
	applymovement LOCALID_PEEKO, RusturfTunnel_Movement_GruntAndPeekoBackUp
	waitmovement 0
	copyobjectxytoperm LOCALID_GRUNT
	copyobjectxytoperm LOCALID_PEEKO
	setvar VAR_RUSTURF_TUNNEL_STATE, 3
	releaseall
	end

RusturfTunnel_Movement_GruntAndPeekoBackUp:
	lock_facing_direction
	walk_right
	unlock_facing_direction
	step_end

RusturfTunnel_EventScript_Peeko::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_WINGULL, CRY_MODE_NORMAL
	msgbox RusturfTunnel_Text_Peeko, MSGBOX_DEFAULT
	waitmoncry
	release
	end

RusturfTunnel_EventScript_Grunt::
	lock
	faceplayer
	playbgm MUS_ENCOUNTER_AQUA, FALSE
	msgbox RusturfTunnel_Text_GruntIntro, MSGBOX_DEFAULT
	trainerbattle_no_intro TRAINER_GRUNT_RUSTURF_TUNNEL, RusturfTunnel_Text_GruntDefeat
	msgbox RusturfTunnel_Text_GruntTakePackage, MSGBOX_DEFAULT
	giveitem ITEM_DEVON_GOODS
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, RusturfTunnel_Movement_PushPlayerAsideForGrunt
	applymovement LOCALID_GRUNT, RusturfTunnel_Movement_GruntEscape
	waitmovement 0
	removeobject LOCALID_GRUNT
	delay 50
	addobject LOCALID_BRINEY
	applymovement LOCALID_BRINEY, RusturfTunnel_Movement_BrineyApproachPeeko1
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, RusturfTunnel_Movement_PlayerMoveAsideForBriney
	applymovement LOCALID_BRINEY, RusturfTunnel_Movement_BrineyApproachPeeko2
	waitmovement 0
	msgbox RusturfTunnel_Text_PeekoGladToSeeYouSafe, MSGBOX_DEFAULT
	applymovement LOCALID_BRINEY, Common_Movement_FacePlayer
	waitmovement 0
	message RusturfTunnel_Text_ThankYouLetsGoHomePeeko
	waitmessage
	waitse
	playmoncry SPECIES_WINGULL, CRY_MODE_NORMAL
	waitbuttonpress
	waitmoncry
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, RusturfTunnel_Movement_PlayerWatchBrineyExit
	applymovement LOCALID_BRINEY, RusturfTunnel_Movement_BrineyExit
	applymovement LOCALID_PEEKO, RusturfTunnel_Movement_PeekoExit
	waitmovement 0
	removeobject LOCALID_BRINEY
	removeobject LOCALID_PEEKO
	clearflag FLAG_DEVON_GOODS_STOLEN
	setflag FLAG_RECOVERED_DEVON_GOODS
	setvar VAR_RUSTBORO_CITY_STATE, 4
	setvar VAR_BRINEY_HOUSE_STATE, 1
	setflag FLAG_HIDE_ROUTE_116_MR_BRINEY
	release
	end

RusturfTunnel_Movement_PushPlayerAsideForGrunt:
	face_down
	lock_facing_direction
	walk_up
	unlock_facing_direction
	walk_in_place_faster_left
	step_end

RusturfTunnel_Movement_PlayerMoveAsideForBriney:
	walk_down
	walk_in_place_faster_up
	step_end

RusturfTunnel_Movement_GruntEscape:
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	step_end

RusturfTunnel_Movement_BrineyApproachPeeko1:
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	step_end

RusturfTunnel_Movement_BrineyExit:
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	step_end

RusturfTunnel_Movement_PlayerWatchBrineyExit:
	delay_16
	delay_8
	delay_4
	walk_in_place_faster_left
	step_end

RusturfTunnel_Movement_BrineyApproachPeeko2:
	delay_16
	walk_right
	step_end

RusturfTunnel_Movement_PeekoExit:
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	step_end

RusturfTunnel_EventScript_Mike::
	trainerbattle_single TRAINER_MIKE_2, RusturfTunnel_Text_MikeIntro, RusturfTunnel_Text_MikeDefeat
	msgbox RusturfTunnel_Text_MikePostBattle, MSGBOX_AUTOCLOSE
	end

RusturfTunnel_Text_ComeAndGetSome:
	.string "What, are you coming?\n"
	.string "Come and get some, then!$"

RusturfTunnel_Text_Peeko:
	.string "PEEKO: Pii pihyoh!$"

RusturfTunnel_Text_GruntIntro:
	.string "Grah, keelhaul it all!\p"
	.string "That hostage POKéMON turned out to\n"
	.string "be worthless!\p"
	.string "And to think I made a getaway…\n"
	.string "In this tunnel to nowhere!\p"
	.string "Hey! You!\n"
	.string "So you want to battle me?$"

RusturfTunnel_Text_GruntDefeat:
	.string "Urrrggh! My career in crime comes to\n"
	.string "a dead end!$"

RusturfTunnel_Text_GruntTakePackage:
	.string "This is plain not right…\p"
	.string "The BOSS told me this would be a\n"
	.string "slick-and-easy job to pull.\p"
	.string "All I had to do was steal some package\n"
	.string "from DEVON.\p"
	.string "Tch!\n"
	.string "You want it back that badly, take it!$"

RusturfTunnel_Text_PeekoGladToSeeYouSafe:
	.string "PEEKO!\n"
	.string "Am I glad to see you're safe!$"

RusturfTunnel_Text_ThankYouLetsGoHomePeeko:
	.string "PEEKO owes her life to you!\p"
	.string "They call me MR. BRINEY.\n"
	.string "And, you are?\p"
	.string "… … … … … … … …\n"
	.string "… … … … … … … …\p"
	.string "Ah, so you are {PLAYER}{KUN}!\n"
	.string "I sincerely thank you!\p"
	.string "Now, if there's anything that troubles\n"
	.string "you, don't hesitate to tell me!\p"
	.string "You can usually find me in my cottage\n"
	.string "by the sea near PETALBURG WOODS.\p"
	.string "Come, PEEKO, we should make our way\n"
	.string "home.\p"
	.string "PEEKO: Pihyoh!$"

RusturfTunnel_Text_WhyCantTheyKeepDigging:
	.string "… …\p"
	.string "Why can't they keep digging?\n"
	.string "Is the bedrock too hard?\p"
	.string "My beloved awaits me in VERDANTURF\n"
	.string "TOWN just beyond here…\p"
	.string "If RUSTBORO and VERDANTURF were\n"
	.string "joined by this tunnel, I could visit\l"
	.string "her every day…\p"
	.string "But this…\n"
	.string "What am I to do?$"

RusturfTunnel_Text_ToGetToVerdanturf:
	.string "To get from RUSTBORO to VERDANTURF,\n"
	.string "you need to go to DEWFORD, then pass\l"
	.string "through SLATEPORT and MAUVILLE…$"

RusturfTunnel_Text_YouShatteredBoulderTakeHM:
	.string "Wow! You shattered that boulder\n"
	.string "blocking the way.\p"
	.string "To show you how much I appreciate it,\n"
	.string "I'd like you to have this HM.$"

RusturfTunnel_Text_ExplainStrength:
	.string "That HM contains STRENGTH.\p"
	.string "If a muscular POKéMON were to learn\n"
	.string "that, it would be able to move even\l"
	.string "large boulders.$"

RusturfTunnel_Text_WandaReunion:
	.string "WANDA!\n"
	.string "Now I can see you anytime!\p"
	.string "WANDA: That's…wonderful.\p"
	.string "Please, take some rest at my home.$"

RusturfTunnel_Text_BoyfriendOnOtherSideOfRock:
	.string "On the other side of this rock…\n"
	.string "My boyfriend is there.\p"
	.string "He… He's not just digging the tunnel\n"
	.string "to come see me.\p"
	.string "He works his hands raw and rough\n"
	.string "for the benefit of everyone.$"

RusturfTunnel_Text_MikeIntro:
	.string "What do you call a wild man up in the\n"
	.string "mountains? A mountain man, right?\p"
	.string "So why don't they call a POKéMON in\n"
	.string "the mountains a mountain POKéMON?$"

RusturfTunnel_Text_MikeDefeat:
	.string "My POKéMON…\n"
	.string "Ran out of power…$"

RusturfTunnel_Text_MikePostBattle:
	.string "They halted development here to\n"
	.string "protect POKéMON, right?\l"
	.string "There's a feel-good story!$"

