SlateportCity_PokemonFanClub_MapScripts:: @ 8209E95
	.byte 0

SlateportCity_PokemonFanClub_EventScript_209E96:: @ 8209E96
	lock
	faceplayer
	checkflag FLAG_0x155
	goto_if 0, SlateportCity_PokemonFanClub_EventScript_20A152
	checkflag FLAG_0x156
	call_if 0, SlateportCity_PokemonFanClub_EventScript_20A172
	switch VAR_0x40B7
	case 0, SlateportCity_PokemonFanClub_EventScript_209ED2
	case 1, SlateportCity_PokemonFanClub_EventScript_209EE5
	case 2, SlateportCity_PokemonFanClub_EventScript_209F3B
	release
	end

SlateportCity_PokemonFanClub_EventScript_209ED2:: @ 8209ED2
	setvar VAR_0x40B7, 1
	msgbox SlateportCity_PokemonFanClub_Text_20A445, 4
	goto SlateportCity_PokemonFanClub_EventScript_209F45
	end

SlateportCity_PokemonFanClub_EventScript_209EE5:: @ 8209EE5
	setvar VAR_0x4002, 0
	checkflag FLAG_0x0CC
	call_if 1, SlateportCity_PokemonFanClub_EventScript_209FD0
	checkflag FLAG_0x0CB
	call_if 1, SlateportCity_PokemonFanClub_EventScript_209FD0
	checkflag FLAG_0x0CA
	call_if 1, SlateportCity_PokemonFanClub_EventScript_209FD0
	checkflag FLAG_0x0C9
	call_if 1, SlateportCity_PokemonFanClub_EventScript_209FD0
	checkflag FLAG_0x0C8
	call_if 1, SlateportCity_PokemonFanClub_EventScript_209FD0
	compare_var_to_value VAR_0x4002, 5
	call_if 1, SlateportCity_PokemonFanClub_EventScript_209FCA
	compare_var_to_value VAR_0x40B7, 2
	goto_eq SlateportCity_PokemonFanClub_EventScript_209F3B
	msgbox SlateportCity_PokemonFanClub_Text_20A62A, 4
	goto SlateportCity_PokemonFanClub_EventScript_209F45
	end

SlateportCity_PokemonFanClub_EventScript_209F3B:: @ 8209F3B
	msgbox SlateportCity_PokemonFanClub_Text_20A9E1, 4
	release
	end

SlateportCity_PokemonFanClub_EventScript_209F45:: @ 8209F45
	msgbox SlateportCity_PokemonFanClub_Text_20A65F, 4
	setvar VAR_0x4001, 0
	checkflag FLAG_0x0CC
	call_if 0, SlateportCity_PokemonFanClub_EventScript_20A13B
	checkflag FLAG_0x0CB
	call_if 0, SlateportCity_PokemonFanClub_EventScript_20A124
	checkflag FLAG_0x0CA
	call_if 0, SlateportCity_PokemonFanClub_EventScript_20A10D
	checkflag FLAG_0x0C9
	call_if 0, SlateportCity_PokemonFanClub_EventScript_20A0F6
	checkflag FLAG_0x0C8
	call_if 0, SlateportCity_PokemonFanClub_EventScript_20A0DF
	bufferleadmonspeciesname 0
	switch VAR_0x4001
	case 0, SlateportCity_PokemonFanClub_EventScript_209FD6
	case 1, SlateportCity_PokemonFanClub_EventScript_209FE0
	case 2, SlateportCity_PokemonFanClub_EventScript_20A011
	case 3, SlateportCity_PokemonFanClub_EventScript_20A042
	case 4, SlateportCity_PokemonFanClub_EventScript_20A073
	case 5, SlateportCity_PokemonFanClub_EventScript_20A0A4
	release
	end

SlateportCity_PokemonFanClub_EventScript_209FCA:: @ 8209FCA
	setvar VAR_0x40B7, 2
	return

SlateportCity_PokemonFanClub_EventScript_209FD0:: @ 8209FD0
	addvar VAR_0x4002, 1
	return

SlateportCity_PokemonFanClub_EventScript_209FD6:: @ 8209FD6
	msgbox SlateportCity_PokemonFanClub_Text_20A66E, 4
	release
	end

SlateportCity_PokemonFanClub_EventScript_209FE0:: @ 8209FE0
	checkitemspace ITEM_RED_SCARF, 1
	compare_var_to_value VAR_RESULT, 0
	goto_eq SlateportCity_PokemonFanClub_EventScript_20A0D5
	msgbox SlateportCity_PokemonFanClub_Text_20A795, 4
	setflag FLAG_0x0C8
	giveitem_std ITEM_RED_SCARF
	msgbox SlateportCity_PokemonFanClub_Text_20A827, 4
	release
	end

SlateportCity_PokemonFanClub_EventScript_20A011:: @ 820A011
	checkitemspace ITEM_BLUE_SCARF, 1
	compare_var_to_value VAR_RESULT, 0
	goto_eq SlateportCity_PokemonFanClub_EventScript_20A0D5
	msgbox SlateportCity_PokemonFanClub_Text_20A795, 4
	setflag FLAG_0x0C9
	giveitem_std ITEM_BLUE_SCARF
	msgbox SlateportCity_PokemonFanClub_Text_20A880, 4
	release
	end

SlateportCity_PokemonFanClub_EventScript_20A042:: @ 820A042
	checkitemspace ITEM_PINK_SCARF, 1
	compare_var_to_value VAR_RESULT, 0
	goto_eq SlateportCity_PokemonFanClub_EventScript_20A0D5
	msgbox SlateportCity_PokemonFanClub_Text_20A795, 4
	setflag FLAG_0x0CA
	giveitem_std ITEM_PINK_SCARF
	msgbox SlateportCity_PokemonFanClub_Text_20A8D7, 4
	release
	end

SlateportCity_PokemonFanClub_EventScript_20A073:: @ 820A073
	checkitemspace ITEM_GREEN_SCARF, 1
	compare_var_to_value VAR_RESULT, 0
	goto_eq SlateportCity_PokemonFanClub_EventScript_20A0D5
	msgbox SlateportCity_PokemonFanClub_Text_20A795, 4
	setflag FLAG_0x0CB
	giveitem_std ITEM_GREEN_SCARF
	msgbox SlateportCity_PokemonFanClub_Text_20A933, 4
	release
	end

SlateportCity_PokemonFanClub_EventScript_20A0A4:: @ 820A0A4
	checkitemspace ITEM_YELLOW_SCARF, 1
	compare_var_to_value VAR_RESULT, 0
	goto_eq SlateportCity_PokemonFanClub_EventScript_20A0D5
	msgbox SlateportCity_PokemonFanClub_Text_20A795, 4
	setflag FLAG_0x0CC
	giveitem_std ITEM_YELLOW_SCARF
	msgbox SlateportCity_PokemonFanClub_Text_20A984, 4
	release
	end

SlateportCity_PokemonFanClub_EventScript_20A0D5:: @ 820A0D5
	msgbox SlateportCity_PokemonFanClub_Text_20A719, 4
	release
	end

SlateportCity_PokemonFanClub_EventScript_20A0DF:: @ 820A0DF
	specialvar VAR_RESULT, sub_8139004
	compare_var_to_value VAR_RESULT, 1
	call_if 1, SlateportCity_PokemonFanClub_EventScript_20A0F0
	return

SlateportCity_PokemonFanClub_EventScript_20A0F0:: @ 820A0F0
	setvar VAR_0x4001, 1
	return

SlateportCity_PokemonFanClub_EventScript_20A0F6:: @ 820A0F6
	specialvar VAR_RESULT, sub_8139030
	compare_var_to_value VAR_RESULT, 1
	call_if 1, SlateportCity_PokemonFanClub_EventScript_20A107
	return

SlateportCity_PokemonFanClub_EventScript_20A107:: @ 820A107
	setvar VAR_0x4001, 2
	return

SlateportCity_PokemonFanClub_EventScript_20A10D:: @ 820A10D
	specialvar VAR_RESULT, sub_813905C
	compare_var_to_value VAR_RESULT, 1
	call_if 1, SlateportCity_PokemonFanClub_EventScript_20A11E
	return

SlateportCity_PokemonFanClub_EventScript_20A11E:: @ 820A11E
	setvar VAR_0x4001, 3
	return

SlateportCity_PokemonFanClub_EventScript_20A124:: @ 820A124
	specialvar VAR_RESULT, sub_8139088
	compare_var_to_value VAR_RESULT, 1
	call_if 1, SlateportCity_PokemonFanClub_EventScript_20A135
	return

SlateportCity_PokemonFanClub_EventScript_20A135:: @ 820A135
	setvar VAR_0x4001, 4
	return

SlateportCity_PokemonFanClub_EventScript_20A13B:: @ 820A13B
	specialvar VAR_RESULT, sub_81390B4
	compare_var_to_value VAR_RESULT, 1
	call_if 1, SlateportCity_PokemonFanClub_EventScript_20A14C
	return

SlateportCity_PokemonFanClub_EventScript_20A14C:: @ 820A14C
	setvar VAR_0x4001, 5
	return

SlateportCity_PokemonFanClub_EventScript_20A152:: @ 820A152
	checkflag FLAG_0x156
	goto_eq SlateportCity_PokemonFanClub_EventScript_20A168
	msgbox SlateportCity_PokemonFanClub_Text_20A233, 4
	setflag FLAG_0x156
	release
	end

SlateportCity_PokemonFanClub_EventScript_20A168:: @ 820A168
	msgbox SlateportCity_PokemonFanClub_Text_20A3EE, 4
	release
	end

SlateportCity_PokemonFanClub_EventScript_20A172:: @ 820A172
	msgbox SlateportCity_PokemonFanClub_Text_20A233, 4
	setflag FLAG_0x156
	return

SlateportCity_PokemonFanClub_EventScript_20A17E:: @ 820A17E
	lock
	faceplayer
	checkflag FLAG_0x116
	goto_eq SlateportCity_PokemonFanClub_EventScript_20A1DE
	msgbox SlateportCity_PokemonFanClub_Text_20AA77, 4
	specialvar VAR_RESULT, sub_8138C04
	compare_var_to_value VAR_RESULT, 4
	goto_if 4, SlateportCity_PokemonFanClub_EventScript_20A1A3
	release
	end

SlateportCity_PokemonFanClub_EventScript_20A1A3:: @ 820A1A3
	playse SE_PIN
	applymovement VAR_LAST_TALKED, SlateportCity_PokemonFanClub_Movement_272598
	waitmovement 0
	applymovement VAR_LAST_TALKED, SlateportCity_PokemonFanClub_Movement_27259A
	waitmovement 0
	msgbox SlateportCity_PokemonFanClub_Text_20AB63, 4
	giveitem_std ITEM_SOOTHE_BELL
	compare_var_to_value VAR_RESULT, 0
	goto_eq SlateportCity_PokemonFanClub_EventScript_272054
	setflag FLAG_0x116
	release
	end

SlateportCity_PokemonFanClub_EventScript_20A1DE:: @ 820A1DE
	msgbox SlateportCity_PokemonFanClub_Text_20ABC4, 4
	release
	end

SlateportCity_PokemonFanClub_EventScript_20A1E8:: @ 820A1E8
	msgbox SlateportCity_PokemonFanClub_Text_20AC47, 2
	end

SlateportCity_PokemonFanClub_EventScript_20A1F1:: @ 820A1F1
	msgbox SlateportCity_PokemonFanClub_Text_20ACF9, 2
	end

SlateportCity_PokemonFanClub_EventScript_20A1FA:: @ 820A1FA
	lock
	faceplayer
	waitse
	playmoncry SPECIES_SKITTY, 0
	msgbox SlateportCity_PokemonFanClub_Text_20AD5A, 4
	waitmoncry
	release
	end

SlateportCity_PokemonFanClub_EventScript_20A20D:: @ 820A20D
	lock
	faceplayer
	waitse
	playmoncry SPECIES_ZIGZAGOON, 0
	msgbox SlateportCity_PokemonFanClub_Text_20AD6E, 4
	waitmoncry
	release
	end

SlateportCity_PokemonFanClub_EventScript_20A220:: @ 820A220
	lock
	faceplayer
	waitse
	playmoncry SPECIES_AZUMARILL, 0
	msgbox SlateportCity_PokemonFanClub_Text_20AD80, 4
	waitmoncry
	release
	end

SlateportCity_PokemonFanClub_Text_20A233: @ 820A233
	.string "Er-hem! I am the CHAIRMAN of the\n"
	.string "POKéMON FAN CLUB!\p"
	.string "Being the CHAIRMAN, I am naturally\n"
	.string "the most important!\p"
	.string "No one can best me when it comes\n"
	.string "to raising POKéMON. No one!\p"
	.string "Well, let me tell you about\n"
	.string "POKéMON CONTESTS.\p"
	.string "They’re events where one can show off\n"
	.string "POKéMON for the world to see!\p"
	.string "However, they’re held in far-off towns,\n"
	.string "so I cannot participate often enough.\p"
	.string "That is why we gather here to show\n"
	.string "off our POKéMON, and have others\l"
	.string "show us theirs.$"

SlateportCity_PokemonFanClub_Text_20A3EE: @ 820A3EE
	.string "The POKéMON of a TRAINER who has\n"
	.string "entered a POKéMON CONTEST…\l"
	.string "That, I would like to see.$"

SlateportCity_PokemonFanClub_Text_20A445: @ 820A445
	.string "Er-hem! I see you’ve participated in\n"
	.string "a POKéMON CONTEST!\p"
	.string "Please! Allow me to examine how you\n"
	.string "have raised your POKéMON.\p"
	.string "It delights me no end to see POKéMON\n"
	.string "raised by other TRAINERS.\p"
	.string "The happy expressions of POKéMON\n"
	.string "raised with proper care…\p"
	.string "The kindly eyes of the TRAINER that\n"
	.string "nurtured and raised the POKéMON…\p"
	.string "The very thought fills my heart to\n"
	.string "overwhelming with joy.\p"
	.string "Oh! I do beg your pardon!\n"
	.string "Forgive me for prattling on so!\p"
	.string "Please! Allow me to examine how much\n"
	.string "your POKéMON has grown!$"

SlateportCity_PokemonFanClub_Text_20A62A: @ 820A62A
	.string "How is your POKéMON growing?\n"
	.string "Allow me to examine it.$"

SlateportCity_PokemonFanClub_Text_20A65F: @ 820A65F
	.string "Hm, hm…\n"
	.string "I see…$"

SlateportCity_PokemonFanClub_Text_20A66E: @ 820A66E
	.string "Hmmm… It’s not bad, but it’s not\n"
	.string "good, either…\p"
	.string "You, the TRAINER, must put more\n"
	.string "effort into raising this POKéMON!\p"
	.string "For instance, may I suggest that\n"
	.string "you give it more {POKEBLOCK}S?$"

SlateportCity_PokemonFanClub_Text_20A719: @ 820A719
	.string "Oh, my…\p"
	.string "Your POKéMON is growing quite well,\n"
	.string "so you deserve a reward.\p"
	.string "Unfortunately, you have no space for\n"
	.string "this in your BAG.$"

SlateportCity_PokemonFanClub_Text_20A795: @ 820A795
	.string "Your {STR_VAR_1}, it is growing in\n"
	.string "a most impressive manner!\l"
	.string "It is one fine specimen!\p"
	.string "But! If you were to give it this,\n"
	.string "it would grow even better! Indeed!$"

SlateportCity_PokemonFanClub_Text_20A827: @ 820A827
	.string "Let a POKéMON hold that RED SCARF.\p"
	.string "Everyone will recognize the coolness\n"
	.string "of that POKéMON!$"

SlateportCity_PokemonFanClub_Text_20A880: @ 820A880
	.string "Let a POKéMON hold that BLUE SCARF.\p"
	.string "Its beauty will be accentuated much\n"
	.string "more than now!$"

SlateportCity_PokemonFanClub_Text_20A8D7: @ 820A8D7
	.string "Let a POKéMON hold that PINK SCARF.\p"
	.string "It will draw out the cuteness of\n"
	.string "the POKéMON some more!$"

SlateportCity_PokemonFanClub_Text_20A933: @ 820A933
	.string "Let a POKéMON hold that GREEN SCARF.\p"
	.string "That will enhance the\n"
	.string "smartness of POKéMON!$"

SlateportCity_PokemonFanClub_Text_20A984: @ 820A984
	.string "Let a POKéMON hold that YELLOW SCARF.\p"
	.string "It will bolster your POKéMON’s\n"
	.string "toughness so much more!$"

SlateportCity_PokemonFanClub_Text_20A9E1: @ 820A9E1
	.string "I’m sorry, but I’ve nothing else to\n"
	.string "give you! None at all!\p"
	.string "After all, you’re blessed with the gift\n"
	.string "of raising POKéMON without resorting\l"
	.string "to any items!$"

SlateportCity_PokemonFanClub_Text_20AA77: @ 820AA77
	.string "I love seeing POKéMON that love\n"
	.string "their TRAINERS.\p"
	.string "POKéMON are very sensitive to\n"
	.string "the feelings of their TRAINERS.\p"
	.string "If you treat your POKéMON with love\n"
	.string "and care, they’ll love you back.\p"
	.string "When your POKéMON grow to love you,\n"
	.string "please come show me.$"

SlateportCity_PokemonFanClub_Text_20AB63: @ 820AB63
	.string "Your POKéMON really adores you.\p"
	.string "For you, a most compassionate\n"
	.string "TRAINER, a gift from the FAN CLUB!$"

SlateportCity_PokemonFanClub_Text_20ABC4: @ 820ABC4
	.string "POKéMON are very sensitive to\n"
	.string "the feelings of their TRAINERS.\p"
	.string "If you treat your POKéMON with love\n"
	.string "and care, they’ll love you back.$"

SlateportCity_PokemonFanClub_Text_20AC47: @ 820AC47
	.string "If you keep letting a POKéMON faint\n"
	.string "in battle, it’ll come to resent it.\p"
	.string "Soon, it will become less trusting\n"
	.string "of the TRAINER.\p"
	.string "In other words, it certainly won’t\n"
	.string "like you very much.$"

SlateportCity_PokemonFanClub_Text_20ACF9: @ 820ACF9
	.string "Do POKéMON enjoy having items used\n"
	.string "on them?\p"
	.string "Mine acted really happy when I gave\n"
	.string "it some PROTEIN.$"

SlateportCity_PokemonFanClub_Text_20AD5A: @ 820AD5A
	.string "SKITTY: Fffnyaaaah…$"

SlateportCity_PokemonFanClub_Text_20AD6E: @ 820AD6E
	.string "ZIGZAGOON: Kyuuu…$"

SlateportCity_PokemonFanClub_Text_20AD80: @ 820AD80
	.string "AZUMARILL: Marimari?$"

