SootopolisCity_House6_MapScripts:: @ 8226F5B
	.byte 0

SootopolisCity_House6_EventScript_226F5C:: @ 8226F5C
	lock
	faceplayer
	checkflag FLAG_0x0F5
	goto_eq SootopolisCity_House6_EventScript_226FA3
	msgbox SootopolisCity_House6_Text_226FC3, 5
	compare_var_to_value VAR_RESULT, 0
	call_if 1, SootopolisCity_House6_EventScript_226F99
	msgbox SootopolisCity_House6_Text_227034, 4
	givedecoration_std 117
	compare_var_to_value VAR_RESULT, 0
	goto_eq SootopolisCity_House6_EventScript_226FAD
	setflag FLAG_0x0F5
	release
	end

SootopolisCity_House6_EventScript_226F99:: @ 8226F99
	msgbox SootopolisCity_House6_Text_22708F, 4
	release
	end

SootopolisCity_House6_EventScript_226FA3:: @ 8226FA3
	msgbox SootopolisCity_House6_Text_2270B7, 4
	release
	end

SootopolisCity_House6_EventScript_226FAD:: @ 8226FAD
	bufferdecorationname 1, 117
	msgbox gUnknown_08272B1A, 4
	msgbox SootopolisCity_House6_Text_22704A, 4
	release
	end

SootopolisCity_House6_Text_226FC3: @ 8226FC3
	.string "Hello! You’re our first guest in\n"
	.string "a good while.\p"
	.string "You’ve brightened up my day, so I’ll\n"
	.string "give you a big WAILMER DOLL.$"

SootopolisCity_House6_Text_227034: @ 8227034
	.string "Take good care of it!$"

SootopolisCity_House6_Text_22704A: @ 822704A
	.string "Oh, you want it, but not right now?\n"
	.string "Okay, then I’ll hold it for you.$"

SootopolisCity_House6_Text_22708F: @ 822708F
	.string "Are you sure?\n"
	.string "You don’t want this DOLL?$"

SootopolisCity_House6_Text_2270B7: @ 82270B7
	.string "I love plush DOLLS!$"

