Church_MapScripts::
	.byte 0


Church_Sign_Painting::
# 5 "data/maps/Church/scripts.pory"
	msgbox Church_Sign_Painting_Text_0, MSGBOX_SIGN
	return


Church_EventScript_Pastor::
# 10 "data/maps/Church/scripts.pory"
	lock
# 11 "data/maps/Church/scripts.pory"
	faceplayer
# 12 "data/maps/Church/scripts.pory"
	goto_if_unset FLAG_SYLVANSHARD_GET, Church_EventScript_Pastor_2
# 44 "data/maps/Church/scripts.pory"
	speakername Church_EventScript_Pastor_Text_0
# 45 "data/maps/Church/scripts.pory"
	msgbox Church_EventScript_Pastor_Text_12
# 46 "data/maps/Church/scripts.pory"
	speakername Church_EventScript_Pastor_Text_2, PORTRAIT_AMELIA_NEUTRAL
# 47 "data/maps/Church/scripts.pory"
	msgbox Church_EventScript_Pastor_Text_13
# 48 "data/maps/Church/scripts.pory"
	speakername Church_EventScript_Pastor_Text_0
# 49 "data/maps/Church/scripts.pory"
	msgbox Church_EventScript_Pastor_Text_14
# 53 "data/maps/Church/scripts.pory"
	speakername Church_EventScript_Pastor_Text_2, PORTRAIT_AMELIA_NEUTRAL
# 54 "data/maps/Church/scripts.pory"
	msgbox Church_EventScript_Pastor_Text_15
# 55 "data/maps/Church/scripts.pory"
	speakername Church_EventScript_Pastor_Text_0
# 56 "data/maps/Church/scripts.pory"
	msgbox Church_EventScript_Pastor_Text_16
# 57 "data/maps/Church/scripts.pory"
	speakername Church_EventScript_Pastor_Text_2, PORTRAIT_AMELIA_NEUTRAL
# 58 "data/maps/Church/scripts.pory"
	msgbox Church_EventScript_Pastor_Text_17
# 59 "data/maps/Church/scripts.pory"
	speakername Church_EventScript_Pastor_Text_0
# 60 "data/maps/Church/scripts.pory"
	msgbox Church_EventScript_Pastor_Text_18
# 61 "data/maps/Church/scripts.pory"
	speakername Church_EventScript_Pastor_Text_2, PORTRAIT_AMELIA_SERIOUSLY
# 62 "data/maps/Church/scripts.pory"
	msgbox Church_EventScript_Pastor_Text_19
Church_EventScript_Pastor_1:
# 64 "data/maps/Church/scripts.pory"
	release
	return

Church_EventScript_Pastor_2:
# 14 "data/maps/Church/scripts.pory"
	speakername Church_EventScript_Pastor_Text_0
# 15 "data/maps/Church/scripts.pory"
	msgbox Church_EventScript_Pastor_Text_1
# 17 "data/maps/Church/scripts.pory"
	speakername Church_EventScript_Pastor_Text_2, PORTRAIT_AMELIA_NEUTRAL
# 18 "data/maps/Church/scripts.pory"
	msgbox Church_EventScript_Pastor_Text_3
# 19 "data/maps/Church/scripts.pory"
	speakername Church_EventScript_Pastor_Text_0
# 20 "data/maps/Church/scripts.pory"
	msgbox Church_EventScript_Pastor_Text_4
# 22 "data/maps/Church/scripts.pory"
	special GetLeadMonSpecies
# 23 "data/maps/Church/scripts.pory"
	compare VAR_RESULT, SPECIES_EEVEE
	goto_if_eq Church_EventScript_Pastor_6
Church_EventScript_Pastor_5:
# 28 "data/maps/Church/scripts.pory"
	speakername Church_EventScript_Pastor_Text_0
# 29 "data/maps/Church/scripts.pory"
	msgbox Church_EventScript_Pastor_Text_7
# 30 "data/maps/Church/scripts.pory"
	speakername NULL
# 31 "data/maps/Church/scripts.pory"
	giveitem ITEM_SYLVANSHARD
# 32 "data/maps/Church/scripts.pory"
	setflag FLAG_SYLVANSHARD_GET
# 33 "data/maps/Church/scripts.pory"
	speakername Church_EventScript_Pastor_Text_2, PORTRAIT_AMELIA_NEUTRAL
# 34 "data/maps/Church/scripts.pory"
	msgbox Church_EventScript_Pastor_Text_8
# 35 "data/maps/Church/scripts.pory"
	speakername Church_EventScript_Pastor_Text_0
# 36 "data/maps/Church/scripts.pory"
	msgbox Church_EventScript_Pastor_Text_9
# 37 "data/maps/Church/scripts.pory"
	speakername Church_EventScript_Pastor_Text_2, PORTRAIT_AMELIA_SERIOUSLY
# 38 "data/maps/Church/scripts.pory"
	msgbox Church_EventScript_Pastor_Text_10
# 39 "data/maps/Church/scripts.pory"
	speakername Church_EventScript_Pastor_Text_2, PORTRAIT_AMELIA_NEUTRAL
# 40 "data/maps/Church/scripts.pory"
	msgbox Church_EventScript_Pastor_Text_11
	goto Church_EventScript_Pastor_1

Church_EventScript_Pastor_6:
# 25 "data/maps/Church/scripts.pory"
	speakername Church_EventScript_Pastor_Text_5, PORTRAIT_DEMIVEE_HUH
# 26 "data/maps/Church/scripts.pory"
	msgbox Church_EventScript_Pastor_Text_6
	goto Church_EventScript_Pastor_5


Church_EventScript_Minior::
# 69 "data/maps/Church/scripts.pory"
	speakername Church_EventScript_Minior_Text_0
# 70 "data/maps/Church/scripts.pory"
	msgbox Church_EventScript_Minior_Text_1, MSGBOX_NPC
	return


Church_EventScript_BaldGuy::
# 77 "data/maps/Church/scripts.pory"
	speakername Church_EventScript_BaldGuy_Text_0
# 78 "data/maps/Church/scripts.pory"
	msgbox Church_EventScript_BaldGuy_Text_1, MSGBOX_NPC
	return


Church_Sign_Backstage::
# 83 "data/maps/Church/scripts.pory"
	msgbox Church_Sign_Backstage_Text_0, MSGBOX_SIGN
	return


Church_Sign_Painting_Text_0:
# 5 "data/maps/Church/scripts.pory"
	.string "This painting depicts the view of\n"
	.string "Mt. Coronet from Lake Acuity.$"

Church_EventScript_Pastor_Text_0:
# 14 "data/maps/Church/scripts.pory"
	.string "Mido$"

Church_EventScript_Pastor_Text_1:
# 15 "data/maps/Church/scripts.pory"
	.string "Hello, I don't think I've seen you\n"
	.string "around before. My name is Mido.\l"
	.string "I'm the minister here at this church.\p"
	.string "We don't have a service today.\n"
	.string "What brings you here?$"

Church_EventScript_Pastor_Text_2:
# 17 "data/maps/Church/scripts.pory"
	.string "Amelia$"

Church_EventScript_Pastor_Text_3:
# 18 "data/maps/Church/scripts.pory"
	.string "Hi, I'm Amelia. I'm a Pokémon Ranger.\n"
	.string "I came here to deal with the flood.$"

Church_EventScript_Pastor_Text_4:
# 20 "data/maps/Church/scripts.pory"
	.string "Bless your heart. I was hoping that\n"
	.string "someone like you would come along.\p"
	.string "A strong outsider who could tame the\n"
	.string "Crystal Eevee and use his power to\l"
	.string "clear the pall that hangs over us.$"

Church_EventScript_Pastor_Text_5:
# 25 "data/maps/Church/scripts.pory"
	.string "Demi-Vee$"

Church_EventScript_Pastor_Text_6:
# 26 "data/maps/Church/scripts.pory"
	.string "I'm supposed to do that?\n"
	.string "Why didn't anyone ever tell me?$"

Church_EventScript_Pastor_Text_7:
# 29 "data/maps/Church/scripts.pory"
	.string "I've been keeping this for him.\n"
	.string "It should help you on your quest.$"

Church_EventScript_Pastor_Text_8:
# 34 "data/maps/Church/scripts.pory"
	.string "Oh, thank you…are you sure?\n"
	.string "I'm a stranger, you know…$"

Church_EventScript_Pastor_Text_9:
# 36 "data/maps/Church/scripts.pory"
	.string "I have been praying for peace…\n"
	.string "I believe it will come when the rain\l"
	.string "finally passes over us. And I believe\l"
	.string "you will make that happen.$"

Church_EventScript_Pastor_Text_10:
# 38 "data/maps/Church/scripts.pory"
	.string "(No pressure or anything…)$"

Church_EventScript_Pastor_Text_11:
# 40 "data/maps/Church/scripts.pory"
	.string "I'll do everything I can. Thank you.$"

Church_EventScript_Pastor_Text_12:
# 45 "data/maps/Church/scripts.pory"
	.string "Are you familiar with the Arcane\n"
	.string "teachings, Amelia?$"

Church_EventScript_Pastor_Text_13:
# 47 "data/maps/Church/scripts.pory"
	.string "Not formally. I've heard a bit, but…$"

Church_EventScript_Pastor_Text_14:
# 49 "data/maps/Church/scripts.pory"
	.string "We believe that the Plates of Creation\n"
	.string "each represent an aspect of divinity.\p"
	.string "Fulfillment is achieved when these\n"
	.string "aspects are in balance within you.\p"
	.string "For example, Fire is the aspect of\n"
	.string "passion. It's not good to be controlled\l"
	.string "by rage, but complete directionlessness\l"
	.string "is no good either. Balance is needed.\p"
	.string "Do you understand what I'm saying?$"

Church_EventScript_Pastor_Text_15:
# 54 "data/maps/Church/scripts.pory"
	.string "Where are you going with this?\n"
	.string "Not to be rude, but…$"

Church_EventScript_Pastor_Text_16:
# 56 "data/maps/Church/scripts.pory"
	.string "Yes, sorry. My point was, this constant\n"
	.string "downpour is a clear overabundance of\l"
	.string "the element of Water. That is why\l"
	.string "I believe it is vital to resolve.$"

Church_EventScript_Pastor_Text_17:
# 58 "data/maps/Church/scripts.pory"
	.string "Understood. I'll do my best here.\p"
	.string "…Does this conversation end with you\n"
	.string "asking me to come back so you can\l"
	.string "evaluate my type balances and sign up\l"
	.string "for a Grass study?$"

Church_EventScript_Pastor_Text_18:
# 60 "data/maps/Church/scripts.pory"
	.string "Well, we do have a guest reception\n"
	.string "every--$"

Church_EventScript_Pastor_Text_19:
# 62 "data/maps/Church/scripts.pory"
	.string "Not interested, sorry. See ya.$"

Church_EventScript_Minior_Text_0:
# 69 "data/maps/Church/scripts.pory"
	.string "Minior$"

Church_EventScript_Minior_Text_1:
# 70 "data/maps/Church/scripts.pory"
	.string "Some people think my core is a sign\n"
	.string "from Arceus about type balance.\p"
	.string "Some people say if that were true, it\n"
	.string "would change color over time.\p"
	.string "I think I'm just a space rock.$"

Church_EventScript_BaldGuy_Text_0:
# 77 "data/maps/Church/scripts.pory"
	.string "Kris$"

Church_EventScript_BaldGuy_Text_1:
# 78 "data/maps/Church/scripts.pory"
	.string "My wife told me I need more Fairy type\n"
	.string "energy at home. I came to ask\l"
	.string "Minister Mido what that could mean.$"

Church_Sign_Backstage_Text_0:
# 83 "data/maps/Church/scripts.pory"
	.string "You shouldn't go backstage. More to\n"
	.string "the point, you don't want to.$"
