Underwater_SeafloorCavern_MapScripts:: @ 823433B
	map_script 5, Underwater_SeafloorCavern_MapScript1_2343D3
	map_script 3, Underwater_SeafloorCavern_MapScript1_23434B
	map_script 1, Underwater_SeafloorCavern_MapScript1_23435C
	.byte 0

Underwater_SeafloorCavern_MapScript1_23434B: @ 823434B
	setflag FLAG_0x8A7
	checkflag FLAG_0x081
	goto_eq Underwater_SeafloorCavern_EventScript_234358
	end

Underwater_SeafloorCavern_EventScript_234358:: @ 8234358
	setflag FLAG_0x3D4
	end

Underwater_SeafloorCavern_MapScript1_23435C: @ 823435C
	checkflag FLAG_0x081
	call_if 1, Underwater_SeafloorCavern_EventScript_234366
	end

Underwater_SeafloorCavern_EventScript_234366:: @ 8234366
	setmetatile 5, 3, 542, 1
	setmetatile 6, 3, 542, 1
	setmetatile 7, 3, 542, 1
	setmetatile 8, 3, 542, 1
	setmetatile 5, 4, 552, 0
	setmetatile 6, 4, 552, 0
	setmetatile 7, 4, 552, 0
	setmetatile 8, 4, 552, 0
	setmetatile 5, 5, 552, 0
	setmetatile 6, 5, 552, 0
	setmetatile 7, 5, 552, 0
	setmetatile 8, 5, 552, 0
	return

Underwater_SeafloorCavern_MapScript1_2343D3: @ 82343D3
	setdivewarp SEAFLOOR_CAVERN_ENTRANCE, 255, 10, 17
	end

Underwater_SeafloorCavern_EventScript_2343DC:: @ 82343DC
	msgbox Underwater_SeafloorCavern_Text_2343E5, 3
	end

Underwater_SeafloorCavern_Text_2343E5: @ 82343E5
	.string "“SUBMARINE EXPLORER 1” is painted\n"
	.string "on the hull.\p"
	.string "This is the submarine TEAM AQUA\n"
	.string "stole in SLATEPORT!\p"
	.string "TEAM AQUA must have gone\n"
	.string "ashore here.$"

