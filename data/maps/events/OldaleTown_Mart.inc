OldaleTown_Mart_MapObjects: @ 852D95C
	object_event 1, MAP_OBJ_GFX_MART_EMPLOYEE, 0, 0, 1, 3, 3, 10, 0, 0, 0, 0, OldaleTown_Mart_EventScript_1FC240, 0, 0, 0
	object_event 2, MAP_OBJ_GFX_WOMAN_7, 0, 0, 5, 5, 3, 10, 0, 0, 0, 0, OldaleTown_Mart_EventScript_1FC28A, 0, 0, 0
	object_event 3, MAP_OBJ_GFX_BOY_1, 0, 0, 9, 4, 3, 3, 16, 0, 0, 0, OldaleTown_Mart_EventScript_1FC2A9, 0, 0, 0

OldaleTown_Mart_MapWarps: @ 852D9A4
	warp_def 3, 7, 0, 3, OLDALE_TOWN
	warp_def 4, 7, 0, 3, OLDALE_TOWN

OldaleTown_Mart_MapEvents:: @ 852D9B4
	map_events OldaleTown_Mart_MapObjects, OldaleTown_Mart_MapWarps, 0x0, 0x0

