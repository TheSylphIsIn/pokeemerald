RustboroCity_Flat1_1F_MapScripts::
	.byte 0

RustboroCity_Flat1_1F_EventScript_Man::
	msgbox RustboroCity_Flat1_1F_Text_EveryPokemonHasAbility, MSGBOX_NPC
	end

RustboroCity_Flat1_1F_EventScript_Woman::
	msgbox RustboroCity_Flat1_1F_Text_PokemonStrange, MSGBOX_NPC
	end

RustboroCity_Flat1_1F_Text_EveryPokemonHasAbility:
	.string "Whew…I think I don't want to ever\n"
	.string "walk again, for the rest of my life.$"

RustboroCity_Flat1_1F_Text_PokemonStrange:
	.string "ROXANNE: Thank you again for saving\n"
	.string "our lives, {PLAYER}.\p"
	.string "I would offer to spar with you for\n"
	.string "training, but I have no POKéMON.$"

