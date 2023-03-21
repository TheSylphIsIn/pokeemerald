RustboroCity_Flat2_1F_MapScripts::
	.byte 0

RustboroCity_Flat2_1F_EventScript_OldWoman::
	trainerbattle_single TRAINER_HALEY_5, RustboroCity_Flat2_1F_Text_DemonIntro, RustboroCity_Flat2_1F_Text_DemonDefeat, RustboroCity_Flat2_1F_EventScript_DemonDefeat
	end

RustboroCity_Flat2_1F_EventScript_DemonDefeat::
	call Common_DemonCrumble
	setvar VAR_TEMP_LOOT_ITEM, ITEM_FULL_HEAL
	call Common_LootCorpse
	end
	
RustboroCity_Flat2_1F_Text_DemonIntro::
	.string "So this is what it's like to live\n"
	.string "a normal life in the upper world…\p"
	.string "I think I'd enjoy it more if I had\n"
	.string "a healthier body…one like yours!$"

RustboroCity_Flat2_1F_Text_DemonDefeat::
	.string "No! Not into the pit! It burns!$"


RustboroCity_Flat2_1F_EventScript_Skitty::
	lock
	msgbox RustboroCity_Flat2_1F_Text_Skitty, MSGBOX_DEFAULT
	release
	end

RustboroCity_Flat2_1F_Text_DevonWorkersLiveHere:
	.string "DEVON CORPORATION's workers live in\n"
	.string "this building.$"

RustboroCity_Flat2_1F_Text_Skitty:
	.string "There's a SKITTY sleeping here.\n"
	.string "I'd better not disturb it.$"

