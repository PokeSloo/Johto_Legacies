LavaridgeTown_Gym_1F_MapScripts::
	map_script MAP_SCRIPT_ON_LOAD, LavaridgeTown_Gym_1F_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

LavaridgeTown_Gym_1F_MapScripts_MAP_SCRIPT_ON_LOAD:
	goto_if_set FLAG_ECRUTEAK_GYM_WATER_DOWN, LavaridgeTown_Gym_1F_MapScripts_MAP_SCRIPT_ON_LOAD_1
	return

LavaridgeTown_Gym_1F_MapScripts_MAP_SCRIPT_ON_LOAD_1:
	call LavaridgeTown_Gym_1F_EventScript_LowerWater
	end


LavaridgeTown_Gym_1F_EventScript_LowerWater::
	setmetatile 0, 2, 0x206, TRUE
	setmetatile 1, 2, 0x206, TRUE
	setmetatile 2, 2, 0x21F, TRUE
	setmetatile 3, 2, 0x206, TRUE
	setmetatile 4, 2, 0x206, TRUE
	setmetatile 5, 2, 0x207, TRUE
	setmetatile 13, 2, 0x205, TRUE
	setmetatile 14, 2, 0x206, TRUE
	setmetatile 15, 2, 0x206, TRUE
	setmetatile 16, 2, 0x206, TRUE
	setmetatile 17, 2, 0x206, TRUE
	setmetatile 18, 2, 0x206, TRUE
	setmetatile 19, 2, 0x206, TRUE
	setmetatile 20, 2, 0x206, TRUE
	setmetatile 21, 2, 0x206, TRUE
	setmetatile 0, 3, 0x20E, TRUE
	setmetatile 1, 3, 0x20E, TRUE
	setmetatile 2, 3, 0x21E, FALSE
	setmetatile 3, 3, 0x20E, TRUE
	setmetatile 4, 3, 0x20E, TRUE
	setmetatile 5, 3, 0x20F, TRUE
	setmetatile 13, 3, 0x20D, TRUE
	setmetatile 14, 3, 0x20E, TRUE
	setmetatile 15, 3, 0x20E, TRUE
	setmetatile 16, 3, 0x20E, TRUE
	setmetatile 17, 3, 0x20E, TRUE
	setmetatile 18, 3, 0x20E, TRUE
	setmetatile 19, 3, 0x20E, TRUE
	setmetatile 20, 3, 0x20E, TRUE
	setmetatile 21, 3, 0x20E, TRUE
	setmetatile 0, 4, 0x201, FALSE
	setmetatile 1, 4, 0x202, FALSE
	setmetatile 2, 4, 0x202, FALSE
	setmetatile 3, 4, 0x202, FALSE
	setmetatile 4, 4, 0x202, FALSE
	setmetatile 5, 4, 0x231, TRUE
	setmetatile 20, 4, 0x22D, TRUE
	setmetatile 21, 4, 0x201, FALSE
	setmetatile 0, 5, 0x209, FALSE
	setmetatile 1, 5, 0x208, FALSE
	setmetatile 2, 5, 0x208, FALSE
	setmetatile 3, 5, 0x208, FALSE
	setmetatile 4, 5, 0x208, FALSE
	setmetatile 5, 5, 0x231, TRUE
	setmetatile 20, 5, 0x230, TRUE
	setmetatile 21, 5, 0x209, FALSE
	setmetatile 0, 6, 0x209, FALSE
	setmetatile 1, 6, 0x208, FALSE
	setmetatile 2, 6, 0x208, FALSE
	setmetatile 3, 6, 0x208, FALSE
	setmetatile 4, 6, 0x208, FALSE
	setmetatile 5, 6, 0x227, TRUE
	setmetatile 6, 6, 0x206, TRUE
	setmetatile 7, 6, 0x206, TRUE
	setmetatile 8, 6, 0x206, TRUE
	setmetatile 9, 6, 0x206, TRUE
	setmetatile 10, 6, 0x206, TRUE
	setmetatile 11, 6, 0x206, TRUE
	setmetatile 12, 6, 0x206, TRUE
	setmetatile 13, 6, 0x206, TRUE
	setmetatile 14, 6, 0x206, TRUE
	setmetatile 15, 6, 0x207, TRUE
	setmetatile 20, 6, 0x230, TRUE
	setmetatile 21, 6, 0x209, FALSE
	setmetatile 0, 7, 0x209, FALSE
	setmetatile 1, 7, 0x22E, TRUE
	setmetatile 3, 7, 0x22D, TRUE
	setmetatile 4, 7, 0x211, FALSE
	setmetatile 5, 7, 0x22F, TRUE
	setmetatile 6, 7, 0x20E, TRUE
	setmetatile 7, 7, 0x20E, TRUE
	setmetatile 8, 7, 0x20E, TRUE
	setmetatile 9, 7, 0x20E, TRUE
	setmetatile 10, 7, 0x20E, TRUE
	setmetatile 11, 7, 0x20E, TRUE
	setmetatile 12, 7, 0x20E, TRUE
	setmetatile 13, 7, 0x20E, TRUE
	setmetatile 14, 7, 0x20E, TRUE
	setmetatile 15, 7, 0x20F, TRUE
	setmetatile 20, 7, 0x230, TRUE
	setmetatile 21, 7, 0x209, FALSE
	setmetatile 0, 8, 0x209, FALSE
	setmetatile 1, 8, 0x231, TRUE
	setmetatile 3, 8, 0x230, TRUE
	setmetatile 4, 8, 0x209, FALSE
	setmetatile 5, 8, 0x210, FALSE
	setmetatile 6, 8, 0x202, FALSE
	setmetatile 7, 8, 0x202, FALSE
	setmetatile 8, 8, 0x202, FALSE
	setmetatile 9, 8, 0x202, FALSE
	setmetatile 10, 8, 0x202, FALSE
	setmetatile 11, 8, 0x202, FALSE
	setmetatile 12, 8, 0x202, FALSE
	setmetatile 13, 8, 0x202, FALSE
	setmetatile 14, 8, 0x202, FALSE
	setmetatile 15, 8, 0x231, TRUE
	setmetatile 17, 8, 0x205, TRUE
	setmetatile 18, 8, 0x206, TRUE
	setmetatile 19, 8, 0x239, FALSE
	setmetatile 20, 8, 0x235, TRUE
	setmetatile 21, 8, 0x209, FALSE
	setmetatile 0, 9, 0x209, FALSE
	setmetatile 1, 9, 0x231, TRUE
	setmetatile 13, 9, 0x22D, TRUE
	setmetatile 14, 9, 0x211, FALSE
	setmetatile 15, 9, 0x231, TRUE
	setmetatile 17, 9, 0x20D, TRUE
	setmetatile 18, 9, 0x20E, TRUE
	setmetatile 19, 9, 0x239, FALSE
	setmetatile 20, 9, 0x236, TRUE
	setmetatile 21, 9, 0x209, FALSE
	setmetatile 0, 10, 0x209, FALSE
	setmetatile 1, 10, 0x231, TRUE
	setmetatile 13, 10, 0x230, TRUE
	setmetatile 14, 10, 0x209, FALSE
	setmetatile 15, 10, 0x231, TRUE
	setmetatile 17, 10, 0x230, TRUE
	setmetatile 18, 10, 0x201, FALSE
	setmetatile 19, 10, 0x202, FALSE
	setmetatile 20, 10, 0x202, FALSE
	setmetatile 21, 10, 0x20A, FALSE
	setmetatile 0, 11, 0x209, FALSE
	setmetatile 1, 11, 0x227, TRUE
	setmetatile 2, 11, 0x206, TRUE
	setmetatile 3, 11, 0x239, FALSE
	setmetatile 4, 11, 0x206, TRUE
	setmetatile 5, 11, 0x206, TRUE
	setmetatile 6, 11, 0x206, TRUE
	setmetatile 7, 11, 0x206, TRUE
	setmetatile 8, 11, 0x206, TRUE
	setmetatile 9, 11, 0x206, TRUE
	setmetatile 10, 11, 0x206, TRUE
	setmetatile 11, 11, 0x207, TRUE
	setmetatile 13, 11, 0x230, TRUE
	setmetatile 14, 11, 0x209, FALSE
	setmetatile 15, 11, 0x231, TRUE
	setmetatile 17, 11, 0x230, TRUE
	setmetatile 18, 11, 0x209, FALSE
	setmetatile 19, 11, 0x208, FALSE
	setmetatile 20, 11, 0x208, FALSE
	setmetatile 21, 11, 0x208, FALSE
	setmetatile 0, 12, 0x209, FALSE
	setmetatile 1, 12, 0x22F, TRUE
	setmetatile 2, 12, 0x20E, TRUE
	setmetatile 3, 12, 0x239, FALSE
	setmetatile 4, 12, 0x20E, TRUE
	setmetatile 5, 12, 0x20E, TRUE
	setmetatile 6, 12, 0x20E, TRUE
	setmetatile 7, 12, 0x20E, TRUE
	setmetatile 8, 12, 0x20E, TRUE
	setmetatile 9, 12, 0x20E, TRUE
	setmetatile 10, 12, 0x20E, TRUE
	setmetatile 11, 12, 0x20F, TRUE
	setmetatile 13, 12, 0x230, TRUE
	setmetatile 14, 12, 0x209, FALSE
	setmetatile 15, 12, 0x231, TRUE
	setmetatile 0, 13, 0x209, FALSE
	setmetatile 1, 13, 0x210, FALSE
	setmetatile 2, 13, 0x202, FALSE
	setmetatile 3, 13, 0x202, FALSE
	setmetatile 4, 13, 0x202, FALSE
	setmetatile 5, 13, 0x202, FALSE
	setmetatile 6, 13, 0x202, FALSE
	setmetatile 7, 13, 0x202, FALSE
	setmetatile 8, 13, 0x202, FALSE
	setmetatile 9, 13, 0x202, FALSE
	setmetatile 10, 13, 0x202, FALSE
	setmetatile 11, 13, 0x231, TRUE
	setmetatile 13, 13, 0x230, TRUE
	setmetatile 14, 13, 0x209, FALSE
	setmetatile 15, 13, 0x231, TRUE
	setmetatile 9, 14, 0x22D, TRUE
	setmetatile 10, 14, 0x211, FALSE
	setmetatile 11, 14, 0x231, TRUE
	setmetatile 13, 14, 0x230, TRUE
	setmetatile 14, 14, 0x209, FALSE
	setmetatile 15, 14, 0x227, TRUE
	setmetatile 16, 14, 0x206, TRUE
	setmetatile 17, 14, 0x206, TRUE
	setmetatile 18, 14, 0x206, TRUE
	setmetatile 19, 14, 0x239, FALSE
	setmetatile 20, 14, 0x207, TRUE
	setmetatile 9, 15, 0x230, TRUE
	setmetatile 10, 15, 0x209, FALSE
	setmetatile 11, 15, 0x231, TRUE
	setmetatile 13, 15, 0x230, TRUE
	setmetatile 14, 15, 0x209, FALSE
	setmetatile 15, 15, 0x22F, TRUE
	setmetatile 16, 15, 0x20E, TRUE
	setmetatile 17, 15, 0x20E, TRUE
	setmetatile 18, 15, 0x20E, TRUE
	setmetatile 19, 15, 0x239, FALSE
	setmetatile 20, 15, 0x20F, TRUE
	setmetatile 1, 16, 0x205, TRUE
	setmetatile 2, 16, 0x206, TRUE
	setmetatile 3, 16, 0x206, TRUE
	setmetatile 4, 16, 0x206, TRUE
	setmetatile 5, 16, 0x206, TRUE
	setmetatile 6, 16, 0x206, TRUE
	setmetatile 7, 16, 0x207, TRUE
	setmetatile 9, 16, 0x230, TRUE
	setmetatile 10, 16, 0x209, FALSE
	setmetatile 11, 16, 0x231, TRUE
	setmetatile 13, 16, 0x230, TRUE
	setmetatile 14, 16, 0x209, FALSE
	setmetatile 15, 16, 0x210, FALSE
	setmetatile 16, 16, 0x202, FALSE
	setmetatile 17, 16, 0x202, FALSE
	setmetatile 18, 16, 0x202, FALSE
	setmetatile 19, 16, 0x202, FALSE
	setmetatile 20, 16, 0x231, TRUE
	setmetatile 1, 17, 0x20D, TRUE
	setmetatile 2, 17, 0x20E, TRUE
	setmetatile 3, 17, 0x20E, TRUE
	setmetatile 4, 17, 0x20E, TRUE
	setmetatile 5, 17, 0x20E, TRUE
	setmetatile 6, 17, 0x20E, TRUE
	setmetatile 7, 17, 0x20F, TRUE
	setmetatile 5, 18, 0x22D, TRUE
	setmetatile 6, 18, 0x201, FALSE
	setmetatile 7, 18, 0x231, TRUE
	setmetatile 5, 19, 0x230, TRUE
	setmetatile 6, 19, 0x201, FALSE
	setmetatile 7, 19, 0x227, TRUE
	setmetatile 8, 19, 0x206, TRUE
	setmetatile 9, 19, 0x206, TRUE
	setmetatile 10, 19, 0x206, TRUE
	setmetatile 11, 19, 0x206, TRUE
	setmetatile 12, 19, 0x206, TRUE
	setmetatile 13, 19, 0x206, TRUE
	setmetatile 14, 19, 0x207, TRUE
	setmetatile 18, 19, 0x205, TRUE
	setmetatile 19, 19, 0x206, TRUE
	setmetatile 20, 19, 0x239, FALSE
	setmetatile 21, 19, 0x206, TRUE
	setmetatile 0, 20, 0x206, TRUE
	setmetatile 1, 20, 0x206, TRUE
	setmetatile 2, 20, 0x206, TRUE
	setmetatile 3, 20, 0x239, FALSE
	setmetatile 4, 20, 0x206, TRUE
	setmetatile 5, 20, 0x235, TRUE
	setmetatile 6, 20, 0x209, FALSE
	setmetatile 7, 20, 0x22F, TRUE
	setmetatile 8, 20, 0x20E, TRUE
	setmetatile 9, 20, 0x20E, TRUE
	setmetatile 10, 20, 0x20E, TRUE
	setmetatile 11, 20, 0x20E, TRUE
	setmetatile 12, 20, 0x20E, TRUE
	setmetatile 13, 20, 0x20E, TRUE
	setmetatile 14, 20, 0x20F, TRUE
	setmetatile 18, 20, 0x20D, TRUE
	setmetatile 19, 20, 0x20E, TRUE
	setmetatile 20, 20, 0x239, FALSE
	setmetatile 21, 20, 0x20E, TRUE
	setmetatile 0, 21, 0x20E, TRUE
	setmetatile 1, 21, 0x20E, TRUE
	setmetatile 2, 21, 0x20E, TRUE
	setmetatile 3, 21, 0x239, FALSE
	setmetatile 4, 21, 0x20E, TRUE
	setmetatile 5, 21, 0x236, TRUE
	setmetatile 6, 21, 0x209, FALSE
	setmetatile 7, 21, 0x210, FALSE
	setmetatile 8, 21, 0x202, FALSE
	setmetatile 9, 21, 0x202, FALSE
	setmetatile 10, 21, 0x202, FALSE
	setmetatile 11, 21, 0x202, FALSE
	setmetatile 12, 21, 0x202, FALSE
	setmetatile 13, 21, 0x202, FALSE
	setmetatile 14, 21, 0x227, TRUE
	setmetatile 15, 21, 0x206, TRUE
	setmetatile 16, 21, 0x206, TRUE
	setmetatile 17, 21, 0x206, TRUE
	setmetatile 18, 21, 0x235, TRUE
	setmetatile 19, 21, 0x201, FALSE
	setmetatile 20, 21, 0x202, FALSE
	setmetatile 21, 21, 0x202, FALSE
	setmetatile 0, 22, 0x201, FALSE
	setmetatile 1, 22, 0x202, FALSE
	setmetatile 2, 22, 0x202, FALSE
	setmetatile 3, 22, 0x202, FALSE
	setmetatile 4, 22, 0x202, FALSE
	setmetatile 5, 22, 0x202, FALSE
	setmetatile 6, 22, 0x20A, FALSE
	setmetatile 7, 22, 0x208, FALSE
	setmetatile 8, 22, 0x22E, TRUE
	setmetatile 13, 22, 0x22D, TRUE
	setmetatile 14, 22, 0x22F, TRUE
	setmetatile 15, 22, 0x20E, TRUE
	setmetatile 16, 22, 0x20E, TRUE
	setmetatile 17, 22, 0x20E, TRUE
	setmetatile 18, 22, 0x236, TRUE
	setmetatile 19, 22, 0x209, FALSE
	setmetatile 20, 22, 0x208, FALSE
	setmetatile 21, 22, 0x208, FALSE
	setmetatile 0, 23, 0x209, FALSE
	setmetatile 1, 23, 0x22E, TRUE
	setmetatile 6, 23, 0x22D, TRUE
	setmetatile 7, 23, 0x211, FALSE
	setmetatile 8, 23, 0x231, TRUE
	setmetatile 13, 23, 0x230, TRUE
	setmetatile 14, 23, 0x201, FALSE
	setmetatile 15, 23, 0x22E, TRUE
	setmetatile 20, 23, 0x22D, TRUE
	setmetatile 21, 23, 0x211, FALSE
	setmetatile 0, 24, 0x209, FALSE
	setmetatile 1, 24, 0x231, TRUE
	setmetatile 6, 24, 0x230, TRUE
	setmetatile 7, 24, 0x209, FALSE
	setmetatile 8, 24, 0x231, TRUE
	setmetatile 13, 24, 0x230, TRUE
	setmetatile 14, 24, 0x209, FALSE
	setmetatile 15, 24, 0x231, TRUE
	setmetatile 20, 24, 0x230, TRUE
	setmetatile 21, 24, 0x209, FALSE
	setmetatile 0, 25, 0x209, FALSE
	setmetatile 1, 25, 0x231, TRUE
	setmetatile 20, 25, 0x230, TRUE
	setmetatile 21, 25, 0x209, FALSE
	setmetatile 0, 26, 0x209, FALSE
	setmetatile 1, 26, 0x231, TRUE
	setmetatile 20, 26, 0x230, TRUE
	setmetatile 21, 26, 0x209, FALSE
	setmetatile 0, 27, 0x209, FALSE
	setmetatile 1, 27, 0x227, TRUE
	setmetatile 2, 27, 0x206, TRUE
	setmetatile 3, 27, 0x239, FALSE
	setmetatile 4, 27, 0x206, TRUE
	setmetatile 5, 27, 0x206, TRUE
	setmetatile 6, 27, 0x206, TRUE
	setmetatile 7, 27, 0x206, TRUE
	setmetatile 8, 27, 0x207, TRUE
	setmetatile 13, 27, 0x205, TRUE
	setmetatile 14, 27, 0x206, TRUE
	setmetatile 15, 27, 0x206, TRUE
	setmetatile 16, 27, 0x206, TRUE
	setmetatile 17, 27, 0x206, TRUE
	setmetatile 18, 27, 0x239, FALSE
	setmetatile 19, 27, 0x206, TRUE
	setmetatile 20, 27, 0x235, TRUE
	setmetatile 21, 27, 0x209, FALSE
	setmetatile 0, 28, 0x209, FALSE
	setmetatile 1, 28, 0x22F, TRUE
	setmetatile 2, 28, 0x20E, TRUE
	setmetatile 3, 28, 0x239, FALSE
	setmetatile 4, 28, 0x20E, TRUE
	setmetatile 5, 28, 0x20E, TRUE
	setmetatile 6, 28, 0x20E, TRUE
	setmetatile 7, 28, 0x20E, TRUE
	setmetatile 8, 28, 0x20F, TRUE
	setmetatile 13, 28, 0x20D, TRUE
	setmetatile 14, 28, 0x20E, TRUE
	setmetatile 15, 28, 0x20E, TRUE
	setmetatile 16, 28, 0x20E, TRUE
	setmetatile 17, 28, 0x20E, TRUE
	setmetatile 18, 28, 0x239, FALSE
	setmetatile 19, 28, 0x20E, TRUE
	setmetatile 20, 28, 0x236, TRUE
	setmetatile 21, 28, 0x209, FALSE
	setmetatile 0, 29, 0x209, FALSE
	setmetatile 1, 29, 0x210, FALSE
	setmetatile 2, 29, 0x202, FALSE
	setmetatile 3, 29, 0x202, FALSE
	setmetatile 4, 29, 0x202, FALSE
	setmetatile 5, 29, 0x202, FALSE
	setmetatile 6, 29, 0x202, FALSE
	setmetatile 7, 29, 0x202, FALSE
	setmetatile 8, 29, 0x231, TRUE
	setmetatile 13, 29, 0x230, TRUE
	setmetatile 14, 29, 0x201, FALSE
	setmetatile 15, 29, 0x202, FALSE
	setmetatile 16, 29, 0x202, FALSE
	setmetatile 17, 29, 0x202, FALSE
	setmetatile 18, 29, 0x202, FALSE
	setmetatile 19, 29, 0x202, FALSE
	setmetatile 20, 29, 0x202, FALSE
	setmetatile 21, 29, 0x20A, FALSE
	return


LavaridgeTown_Gym_1F_EventScript_RaiseWater::
	setmetatile 0, 2, 0x22B, TRUE
	setmetatile 1, 2, 0x22B, TRUE
	setmetatile 2, 2, 0x22B, TRUE
	setmetatile 3, 2, 0x22B, TRUE
	setmetatile 4, 2, 0x22B, TRUE
	setmetatile 5, 2, 0x22C, TRUE
	setmetatile 13, 2, 0x22A, TRUE
	setmetatile 14, 2, 0x22B, TRUE
	setmetatile 15, 2, 0x22B, TRUE
	setmetatile 16, 2, 0x22B, TRUE
	setmetatile 17, 2, 0x22B, TRUE
	setmetatile 18, 2, 0x22B, TRUE
	setmetatile 19, 2, 0x22B, TRUE
	setmetatile 20, 2, 0x22B, TRUE
	setmetatile 21, 2, 0x22B, TRUE
	setmetatile 0, 3, 0x0A1, TRUE
	setmetatile 1, 3, 0x0A1, TRUE
	setmetatile 2, 3, 0x0A1, TRUE
	setmetatile 3, 3, 0x0A1, TRUE
	setmetatile 4, 3, 0x0A1, TRUE
	setmetatile 5, 3, 0x229, TRUE
	setmetatile 13, 3, 0x228, TRUE
	setmetatile 14, 3, 0x0A1, TRUE
	setmetatile 15, 3, 0x0A1, TRUE
	setmetatile 16, 3, 0x0A1, TRUE
	setmetatile 17, 3, 0x0A1, TRUE
	setmetatile 18, 3, 0x0A1, TRUE
	setmetatile 19, 3, 0x0A1, TRUE
	setmetatile 20, 3, 0x0A1, TRUE
	setmetatile 21, 3, 0x0A1, TRUE
	setmetatile 0, 4, 0x0A1, TRUE
	setmetatile 1, 4, 0x0A1, TRUE
	setmetatile 2, 4, 0x0A1, TRUE
	setmetatile 3, 4, 0x0A1, TRUE
	setmetatile 4, 4, 0x0A1, TRUE
	setmetatile 5, 4, 0x229, TRUE
	setmetatile 20, 4, 0x21C, TRUE
	setmetatile 21, 4, 0x0A1, TRUE
	setmetatile 0, 5, 0x0A1, TRUE
	setmetatile 1, 5, 0x0A1, TRUE
	setmetatile 2, 5, 0x0A1, TRUE
	setmetatile 3, 5, 0x0A1, TRUE
	setmetatile 4, 5, 0x0A1, TRUE
	setmetatile 5, 5, 0x229, TRUE
	setmetatile 20, 5, 0x228, TRUE
	setmetatile 21, 5, 0x0A1, TRUE
	setmetatile 0, 6, 0x0A1, TRUE
	setmetatile 1, 6, 0x0A1, TRUE
	setmetatile 2, 6, 0x0A1, TRUE
	setmetatile 3, 6, 0x0A1, TRUE
	setmetatile 4, 6, 0x0A1, TRUE
	setmetatile 5, 6, 0x223, TRUE
	setmetatile 6, 6, 0x22B, TRUE
	setmetatile 7, 6, 0x22B, TRUE
	setmetatile 8, 6, 0x22B, TRUE
	setmetatile 9, 6, 0x22B, TRUE
	setmetatile 10, 6, 0x22B, TRUE
	setmetatile 11, 6, 0x22B, TRUE
	setmetatile 12, 6, 0x22B, TRUE
	setmetatile 13, 6, 0x22B, TRUE
	setmetatile 14, 6, 0x22B, TRUE
	setmetatile 15, 6, 0x22C, TRUE
	setmetatile 20, 6, 0x228, TRUE
	setmetatile 21, 6, 0x0A1, TRUE
	setmetatile 0, 7, 0x0A1, TRUE
	setmetatile 1, 7, 0x21B, TRUE
	setmetatile 3, 7, 0x21C, TRUE
	setmetatile 4, 7, 0x0A1, TRUE
	setmetatile 5, 7, 0x0A1, TRUE
	setmetatile 6, 7, 0x0A1, TRUE
	setmetatile 7, 7, 0x0A1, TRUE
	setmetatile 8, 7, 0x0A1, TRUE
	setmetatile 9, 7, 0x0A1, TRUE
	setmetatile 10, 7, 0x0A1, TRUE
	setmetatile 11, 7, 0x0A1, TRUE
	setmetatile 12, 7, 0x0A1, TRUE
	setmetatile 13, 7, 0x0A1, TRUE
	setmetatile 14, 7, 0x0A1, TRUE
	setmetatile 15, 7, 0x229, TRUE
	setmetatile 20, 7, 0x228, TRUE
	setmetatile 21, 7, 0x0A1, TRUE
	setmetatile 0, 8, 0x0A1, TRUE
	setmetatile 1, 8, 0x229, TRUE
	setmetatile 3, 8, 0x228, TRUE
	setmetatile 4, 8, 0x0A1, TRUE
	setmetatile 5, 8, 0x0A1, TRUE
	setmetatile 6, 8, 0x0A1, TRUE
	setmetatile 7, 8, 0x0A1, TRUE
	setmetatile 8, 8, 0x0A1, TRUE
	setmetatile 9, 8, 0x0A1, TRUE
	setmetatile 10, 8, 0x0A1, TRUE
	setmetatile 11, 8, 0x0A1, TRUE
	setmetatile 12, 8, 0x0A1, TRUE
	setmetatile 13, 8, 0x0A1, TRUE
	setmetatile 14, 8, 0x0A1, TRUE
	setmetatile 15, 8, 0x229, TRUE
	setmetatile 17, 8, 0x22A, TRUE
	setmetatile 18, 8, 0x22B, TRUE
	setmetatile 19, 8, 0x238, TRUE
	setmetatile 20, 8, 0x224, TRUE
	setmetatile 21, 8, 0x0A1, TRUE
	setmetatile 0, 9, 0x0A1, TRUE
	setmetatile 1, 9, 0x229, TRUE
	setmetatile 13, 9, 0x21C, TRUE
	setmetatile 14, 9, 0x0A1, TRUE
	setmetatile 15, 9, 0x229, TRUE
	setmetatile 17, 9, 0x228, TRUE
	setmetatile 18, 9, 0x0A1, TRUE
	setmetatile 19, 9, 0x0A1, TRUE
	setmetatile 20, 9, 0x0A1, TRUE
	setmetatile 21, 9, 0x0A1, TRUE
	setmetatile 0, 10, 0x0A1, TRUE
	setmetatile 1, 10, 0x229, TRUE
	setmetatile 13, 10, 0x228, TRUE
	setmetatile 14, 10, 0x0A1, TRUE
	setmetatile 15, 10, 0x229, TRUE
	setmetatile 17, 10, 0x228, TRUE
	setmetatile 18, 10, 0x0A1, TRUE
	setmetatile 19, 10, 0x0A1, TRUE
	setmetatile 20, 10, 0x0A1, TRUE
	setmetatile 21, 10, 0x0A1, TRUE
	setmetatile 0, 11, 0x0A1, TRUE
	setmetatile 1, 11, 0x223, TRUE
	setmetatile 2, 11, 0x22B, TRUE
	setmetatile 3, 11, 0x238, TRUE
	setmetatile 4, 11, 0x22B, TRUE
	setmetatile 5, 11, 0x22B, TRUE
	setmetatile 6, 11, 0x22B, TRUE
	setmetatile 7, 11, 0x22B, TRUE
	setmetatile 8, 11, 0x22B, TRUE
	setmetatile 9, 11, 0x22B, TRUE
	setmetatile 10, 11, 0x22B, TRUE
	setmetatile 11, 11, 0x22C, TRUE
	setmetatile 13, 11, 0x228, TRUE
	setmetatile 14, 11, 0x0A1, TRUE
	setmetatile 15, 11, 0x229, TRUE
	setmetatile 17, 11, 0x228, TRUE
	setmetatile 18, 11, 0x0A1, TRUE
	setmetatile 19, 11, 0x0A1, TRUE
	setmetatile 20, 11, 0x0A1, TRUE
	setmetatile 21, 11, 0x0A1, TRUE
	setmetatile 0, 12, 0x0A1, TRUE
	setmetatile 1, 12, 0x0A1, TRUE
	setmetatile 2, 12, 0x0A1, TRUE
	setmetatile 3, 12, 0x0A1, TRUE
	setmetatile 4, 12, 0x0A1, TRUE
	setmetatile 5, 12, 0x0A1, TRUE
	setmetatile 6, 12, 0x0A1, TRUE
	setmetatile 7, 12, 0x0A1, TRUE
	setmetatile 8, 12, 0x0A1, TRUE
	setmetatile 9, 12, 0x0A1, TRUE
	setmetatile 10, 12, 0x0A1, TRUE
	setmetatile 11, 12, 0x229, TRUE
	setmetatile 13, 12, 0x228, TRUE
	setmetatile 14, 12, 0x0A1, TRUE
	setmetatile 15, 12, 0x229, TRUE
	setmetatile 0, 13, 0x0A1, TRUE
	setmetatile 1, 13, 0x0A1, TRUE
	setmetatile 2, 13, 0x0A1, TRUE
	setmetatile 3, 13, 0x0A1, TRUE
	setmetatile 4, 13, 0x0A1, TRUE
	setmetatile 5, 13, 0x0A1, TRUE
	setmetatile 6, 13, 0x0A1, TRUE
	setmetatile 7, 13, 0x0A1, TRUE
	setmetatile 8, 13, 0x0A1, TRUE
	setmetatile 9, 13, 0x0A1, TRUE
	setmetatile 10, 13, 0x0A1, TRUE
	setmetatile 11, 13, 0x229, TRUE
	setmetatile 13, 13, 0x228, TRUE
	setmetatile 14, 13, 0x0A1, TRUE
	setmetatile 15, 13, 0x229, TRUE
	setmetatile 9, 14, 0x21C, TRUE
	setmetatile 10, 14, 0x0A1, TRUE
	setmetatile 11, 14, 0x229, TRUE
	setmetatile 13, 14, 0x228, TRUE
	setmetatile 14, 14, 0x0A1, TRUE
	setmetatile 15, 14, 0x223, TRUE
	setmetatile 16, 14, 0x22B, TRUE
	setmetatile 17, 14, 0x22B, TRUE
	setmetatile 18, 14, 0x22B, TRUE
	setmetatile 19, 14, 0x238, TRUE
	setmetatile 20, 14, 0x22C, TRUE
	setmetatile 9, 15, 0x228, TRUE
	setmetatile 10, 15, 0x0A1, TRUE
	setmetatile 11, 15, 0x229, TRUE
	setmetatile 13, 15, 0x228, TRUE
	setmetatile 14, 15, 0x0A1, TRUE
	setmetatile 15, 15, 0x0A1, TRUE
	setmetatile 16, 15, 0x0A1, TRUE
	setmetatile 17, 15, 0x0A1, TRUE
	setmetatile 18, 15, 0x0A1, TRUE
	setmetatile 19, 15, 0x0A1, TRUE
	setmetatile 20, 15, 0x229, TRUE
	setmetatile 1, 16, 0x22A, TRUE
	setmetatile 2, 16, 0x22B, TRUE
	setmetatile 3, 16, 0x22B, TRUE
	setmetatile 4, 16, 0x22B, TRUE
	setmetatile 5, 16, 0x22B, TRUE
	setmetatile 6, 16, 0x22B, TRUE
	setmetatile 7, 16, 0x22C, TRUE
	setmetatile 9, 16, 0x228, TRUE
	setmetatile 10, 16, 0x0A1, TRUE
	setmetatile 11, 16, 0x229, TRUE
	setmetatile 13, 16, 0x228, TRUE
	setmetatile 14, 16, 0x0A1, TRUE
	setmetatile 15, 16, 0x0A1, TRUE
	setmetatile 16, 16, 0x0A1, TRUE
	setmetatile 17, 16, 0x0A1, TRUE
	setmetatile 18, 16, 0x0A1, TRUE
	setmetatile 19, 16, 0x0A1, TRUE
	setmetatile 20, 16, 0x229, TRUE
	setmetatile 1, 17, 0x228, TRUE
	setmetatile 2, 17, 0x0A1, TRUE
	setmetatile 3, 17, 0x0A1, TRUE
	setmetatile 4, 17, 0x0A1, TRUE
	setmetatile 5, 17, 0x0A1, TRUE
	setmetatile 6, 17, 0x0A1, TRUE
	setmetatile 7, 17, 0x229, TRUE
	setmetatile 5, 18, 0x21C, TRUE
	setmetatile 6, 18, 0x0A1, TRUE
	setmetatile 7, 18, 0x229, TRUE
	setmetatile 5, 19, 0x228, TRUE
	setmetatile 6, 19, 0x0A1, TRUE
	setmetatile 7, 19, 0x223, TRUE
	setmetatile 8, 19, 0x22B, TRUE
	setmetatile 9, 19, 0x22B, TRUE
	setmetatile 10, 19, 0x22B, TRUE
	setmetatile 11, 19, 0x22B, TRUE
	setmetatile 12, 19, 0x22B, TRUE
	setmetatile 13, 19, 0x22B, TRUE
	setmetatile 14, 19, 0x22C, TRUE
	setmetatile 18, 19, 0x22A, TRUE
	setmetatile 19, 19, 0x22B, TRUE
	setmetatile 20, 19, 0x238, TRUE
	setmetatile 21, 19, 0x22B, TRUE
	setmetatile 0, 20, 0x22B, TRUE
	setmetatile 1, 20, 0x22B, TRUE
	setmetatile 2, 20, 0x22B, TRUE
	setmetatile 3, 20, 0x238, TRUE
	setmetatile 4, 20, 0x22B, TRUE
	setmetatile 5, 20, 0x224, TRUE
	setmetatile 6, 20, 0x0A1, TRUE
	setmetatile 7, 20, 0x0A1, TRUE
	setmetatile 8, 20, 0x0A1, TRUE
	setmetatile 9, 20, 0x0A1, TRUE
	setmetatile 10, 20, 0x0A1, TRUE
	setmetatile 11, 20, 0x0A1, TRUE
	setmetatile 12, 20, 0x0A1, TRUE
	setmetatile 13, 20, 0x0A1, TRUE
	setmetatile 14, 20, 0x229, TRUE
	setmetatile 18, 20, 0x228, TRUE
	setmetatile 19, 20, 0x0A1, TRUE
	setmetatile 20, 20, 0x0A1, TRUE
	setmetatile 21, 20, 0x0A1, TRUE
	setmetatile 0, 21, 0x0A1, TRUE
	setmetatile 1, 21, 0x0A1, TRUE
	setmetatile 2, 21, 0x0A1, TRUE
	setmetatile 3, 21, 0x0A1, TRUE
	setmetatile 4, 21, 0x0A1, TRUE
	setmetatile 5, 21, 0x0A1, TRUE
	setmetatile 6, 21, 0x0A1, TRUE
	setmetatile 7, 21, 0x0A1, TRUE
	setmetatile 8, 21, 0x0A1, TRUE
	setmetatile 9, 21, 0x0A1, TRUE
	setmetatile 10, 21, 0x0A1, TRUE
	setmetatile 11, 21, 0x0A1, TRUE
	setmetatile 12, 21, 0x0A1, TRUE
	setmetatile 13, 21, 0x0A1, TRUE
	setmetatile 14, 21, 0x223, TRUE
	setmetatile 15, 21, 0x22B, TRUE
	setmetatile 16, 21, 0x22B, TRUE
	setmetatile 17, 21, 0x22B, TRUE
	setmetatile 18, 21, 0x224, TRUE
	setmetatile 19, 21, 0x0A1, TRUE
	setmetatile 20, 21, 0x0A1, TRUE
	setmetatile 21, 21, 0x0A1, TRUE
	setmetatile 0, 22, 0x0A1, TRUE
	setmetatile 1, 22, 0x0A1, TRUE
	setmetatile 2, 22, 0x0A1, TRUE
	setmetatile 3, 22, 0x0A1, TRUE
	setmetatile 4, 22, 0x0A1, TRUE
	setmetatile 5, 22, 0x0A1, TRUE
	setmetatile 6, 22, 0x0A1, TRUE
	setmetatile 7, 22, 0x0A1, TRUE
	setmetatile 8, 22, 0x21B, TRUE
	setmetatile 13, 22, 0x21C, TRUE
	setmetatile 14, 22, 0x0A1, TRUE
	setmetatile 15, 22, 0x0A1, TRUE
	setmetatile 16, 22, 0x0A1, TRUE
	setmetatile 17, 22, 0x0A1, TRUE
	setmetatile 18, 22, 0x0A1, TRUE
	setmetatile 19, 22, 0x0A1, TRUE
	setmetatile 20, 22, 0x0A1, TRUE
	setmetatile 21, 22, 0x0A1, TRUE
	setmetatile 0, 23, 0x0A1, TRUE
	setmetatile 1, 23, 0x21B, TRUE
	setmetatile 6, 23, 0x21C, TRUE
	setmetatile 7, 23, 0x0A1, TRUE
	setmetatile 8, 23, 0x229, TRUE
	setmetatile 13, 23, 0x228, TRUE
	setmetatile 14, 23, 0x0A1, TRUE
	setmetatile 15, 23, 0x21B, TRUE
	setmetatile 20, 23, 0x21C, TRUE
	setmetatile 21, 23, 0x0A1, TRUE
	setmetatile 0, 24, 0x0A1, TRUE
	setmetatile 1, 24, 0x229, TRUE
	setmetatile 6, 24, 0x228, TRUE
	setmetatile 7, 24, 0x0A1, FALSE
	setmetatile 8, 24, 0x229, TRUE
	setmetatile 13, 24, 0x228, TRUE
	setmetatile 14, 24, 0x0A1, FALSE
	setmetatile 15, 24, 0x229, TRUE
	setmetatile 20, 24, 0x228, TRUE
	setmetatile 21, 24, 0x0A1, TRUE
	setmetatile 0, 25, 0x0A1, TRUE
	setmetatile 1, 25, 0x229, TRUE
	setmetatile 20, 25, 0x228, TRUE
	setmetatile 21, 25, 0x0A1, TRUE
	setmetatile 0, 26, 0x0A1, TRUE
	setmetatile 1, 26, 0x229, TRUE
	setmetatile 20, 26, 0x228, TRUE
	setmetatile 21, 26, 0x0A1, TRUE
	setmetatile 0, 27, 0x0A1, TRUE
	setmetatile 1, 27, 0x223, TRUE
	setmetatile 2, 27, 0x22B, TRUE
	setmetatile 3, 27, 0x238, TRUE
	setmetatile 4, 27, 0x22B, TRUE
	setmetatile 5, 27, 0x22B, TRUE
	setmetatile 6, 27, 0x22B, TRUE
	setmetatile 7, 27, 0x22B, TRUE
	setmetatile 8, 27, 0x22C, TRUE
	setmetatile 13, 27, 0x22A, TRUE
	setmetatile 14, 27, 0x22B, TRUE
	setmetatile 15, 27, 0x22B, TRUE
	setmetatile 16, 27, 0x22B, TRUE
	setmetatile 17, 27, 0x22B, TRUE
	setmetatile 18, 27, 0x238, TRUE
	setmetatile 19, 27, 0x22B, TRUE
	setmetatile 20, 27, 0x224, TRUE
	setmetatile 21, 27, 0x0A1, TRUE
	setmetatile 0, 28, 0x0A1, TRUE
	setmetatile 1, 28, 0x0A1, TRUE
	setmetatile 2, 28, 0x0A1, TRUE
	setmetatile 3, 28, 0x0A1, TRUE
	setmetatile 4, 28, 0x0A1, TRUE
	setmetatile 5, 28, 0x0A1, TRUE
	setmetatile 6, 28, 0x0A1, TRUE
	setmetatile 7, 28, 0x0A1, TRUE
	setmetatile 8, 28, 0x229, TRUE
	setmetatile 13, 28, 0x228, TRUE
	setmetatile 14, 28, 0x0A1, TRUE
	setmetatile 15, 28, 0x0A1, TRUE
	setmetatile 16, 28, 0x0A1, TRUE
	setmetatile 17, 28, 0x0A1, TRUE
	setmetatile 18, 28, 0x0A1, TRUE
	setmetatile 19, 28, 0x0A1, TRUE
	setmetatile 20, 28, 0x0A1, TRUE
	setmetatile 21, 28, 0x0A1, TRUE
	setmetatile 0, 29, 0x0A1, TRUE
	setmetatile 1, 29, 0x0A1, TRUE
	setmetatile 2, 29, 0x0A1, TRUE
	setmetatile 3, 29, 0x0A1, TRUE
	setmetatile 4, 29, 0x0A1, TRUE
	setmetatile 5, 29, 0x0A1, TRUE
	setmetatile 6, 29, 0x0A1, TRUE
	setmetatile 7, 29, 0x0A1, TRUE
	setmetatile 8, 29, 0x229, TRUE
	setmetatile 13, 29, 0x228, TRUE
	setmetatile 14, 29, 0x0A1, TRUE
	setmetatile 15, 29, 0x0A1, TRUE
	setmetatile 16, 29, 0x0A1, TRUE
	setmetatile 17, 29, 0x0A1, TRUE
	setmetatile 18, 29, 0x0A1, TRUE
	setmetatile 19, 29, 0x0A1, TRUE
	setmetatile 20, 29, 0x0A1, TRUE
	setmetatile 21, 29, 0x0A1, TRUE
	return


LavaridgeTown_Gym_1F_EventScript_RedButton::
	lock
	goto_if_set FLAG_ECRUTEAK_GYM_WATER_DOWN, LavaridgeTown_Gym_1F_EventScript_RedButton_2
	playse SE_SWITCH
	call LavaridgeTown_Gym_1F_EventScript_LowerWater
	special DrawWholeMapView
	waitse
	setflag FLAG_ECRUTEAK_GYM_WATER_DOWN
	release
	end

LavaridgeTown_Gym_1F_EventScript_RedButton_2:
	release
	end


LavaridgeTown_Gym_1F_EventScript_BlueButton::
	lock
	goto_if_unset FLAG_ECRUTEAK_GYM_WATER_DOWN, LavaridgeTown_Gym_1F_EventScript_BlueButton_2
	playse SE_SWITCH
	call LavaridgeTown_Gym_1F_EventScript_RaiseWater
	special DrawWholeMapView
	waitse
	clearflag FLAG_ECRUTEAK_GYM_WATER_DOWN
	release
	end

LavaridgeTown_Gym_1F_EventScript_BlueButton_2:
	release
	end


LavaridgeTown_Gym_1F_EventScript_Flannery::
	trainerbattle_single TRAINER_FLANNERY_1, LavaridgeTown_Gym_1F_Text_FlanneryIntro, LavaridgeTown_Gym_1F_Text_FlanneryDefeat, LavaridgeTown_Gym_1F_EventScript_FlanneryDefeated, NO_MUSIC
	goto_if_unset FLAG_RECEIVED_TM50, LavaridgeTown_Gym_1F_EventScript_GiveOverheat2
	msgbox LavaridgeTown_Gym_1F_Text_FlanneryPostBattle, MSGBOX_DEFAULT
	release
	end


LavaridgeTown_Gym_1F_EventScript_FlanneryDefeated::
	message LavaridgeTown_Gym_1F_Text_ReceivedHeatBadge
	waitmessage
	call Common_EventScript_PlayGymBadgeFanfare
	msgbox LavaridgeTown_Gym_1F_Text_ExplainHeatBadgeTakeThis, MSGBOX_DEFAULT
	setflag FLAG_DEFEATED_LAVARIDGE_GYM
	setflag FLAG_BADGE04_GET
	setvar VAR_0x8008, 4
	call Common_EventScript_SetGymTrainers
	setflag FLAG_HIDE_KIZU_PHOENIX
	setflag FLAG_HIDE_OLIVER_KIZU
	setflag FLAG_HIDE_SHANE_ROUTE_43
	setflag FLAG_OLIVER_CATACOMBS_RESEARCH
	setflag FLAG_HIDE_OLIVINE_GYM_TRAINER_1
	setflag FLAG_HIDE_OLIVINE_GYM_TRAINER_2
	setflag FLAG_HIDE_OLIVINE_GYM_TRAINER_3
	call LavaridgeTown_Gym_1F_EventScript_GiveOverheat
	closemessage
	release
	end


LavaridgeTown_Gym_1F_EventScript_GiveOverheat2::
	giveitem ITEM_TM03_WATER_PULSE
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
	msgbox LavaridgeTown_Gym_1F_Text_ExplainOverheat, MSGBOX_DEFAULT
	setflag FLAG_RECEIVED_TM50
	release
	end


LavaridgeTown_Gym_1F_EventScript_GiveOverheat::
	giveitem ITEM_TM03_WATER_PULSE
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_BagIsFull
	msgbox LavaridgeTown_Gym_1F_Text_ExplainOverheat, MSGBOX_DEFAULT
	setflag FLAG_RECEIVED_TM50
	return


LavaridgeTown_Gym_1F_EventScript_WataruRound2::
	lock
	faceplayer
	goto_if_unset FLAG_DEFEATED_WATARU_REMATCH, LavaridgeTown_Gym_1F_EventScript_WataruRound2_2
LavaridgeTown_Gym_1F_EventScript_WataruRound2_1:
	trainerbattle_double TRAINER_FLANNERY_2, LavaridgeTown_Gym_1F_Text_WataruRematchIntro, LavaridgeTown_Gym_1F_Text_WataruRematchDefeat, LavaridgeTown_Gym_1F_Text_WataruRematchNotEnoughMons, LavaridgeTown_Gym_1F_EventScript_WataruRematchDefeated, NO_MUSIC
	msgbox LavaridgeTown_Gym_1F_EventScript_WataruRound2_Text_0
	compare VAR_GYM_LEADERS_ROUND2_COUNT, 8
	goto_if_eq LavaridgeTown_Gym_1F_EventScript_WataruRound2_4
	release
	end

LavaridgeTown_Gym_1F_EventScript_WataruRound2_2:
	setweather WEATHER_RAIN
	doweather
	goto LavaridgeTown_Gym_1F_EventScript_WataruRound2_1

LavaridgeTown_Gym_1F_EventScript_WataruRound2_4:
	msgbox LavaridgeTown_Gym_1F_EventScript_WataruRound2_Text_1
	release
	end


LavaridgeTown_Gym_1F_EventScript_WataruRematchDefeated::
	setweather WEATHER_NONE
	doweather
	msgbox LavaridgeTown_Gym_1F_EventScript_WataruRematchDefeated_Text_0
	setflag FLAG_DEFEATED_WATARU_REMATCH
	addvar VAR_GYM_LEADERS_ROUND2_COUNT, 1
	compare VAR_GYM_LEADERS_ROUND2_COUNT, 8
	goto_if_eq LavaridgeTown_Gym_1F_EventScript_WataruRematchDefeated_1
	release
	end

LavaridgeTown_Gym_1F_EventScript_WataruRematchDefeated_1:
	msgbox LavaridgeTown_Gym_1F_EventScript_WataruRound2_Text_1
	setflag FLAG_DEFEATED_ALL_GYM_LEADERS_2ND_TIME
	release
	end


LavaridgeTown_Gym_1F_EventScript_Cole::
	trainerbattle_single TRAINER_COLE, LavaridgeTown_Gym_1F_Text_ColeIntro, LavaridgeTown_Gym_1F_Text_ColeDefeat
	msgbox LavaridgeTown_Gym_1F_Text_ColePostBattle, MSGBOX_AUTOCLOSE
	end

LavaridgeTown_Gym_1F_EventScript_Axle::
	trainerbattle_single TRAINER_AXLE, LavaridgeTown_Gym_1F_Text_AxleIntro, LavaridgeTown_Gym_1F_Text_AxleDefeat
	msgbox LavaridgeTown_Gym_1F_Text_AxlePostBattle, MSGBOX_AUTOCLOSE
	end

LavaridgeTown_Gym_B1F_EventScript_Keegan::
	trainerbattle_single TRAINER_KEEGAN, LavaridgeTown_Gym_B1F_Text_KeeganIntro, LavaridgeTown_Gym_B1F_Text_KeeganDefeat
	msgbox LavaridgeTown_Gym_B1F_Text_KeeganPostBattle, MSGBOX_AUTOCLOSE
	end

LavaridgeTown_Gym_1F_EventScript_Danielle::
	trainerbattle_single TRAINER_DANIELLE, LavaridgeTown_Gym_1F_Text_DanielleIntro, LavaridgeTown_Gym_1F_Text_DanielleDefeat
	msgbox LavaridgeTown_Gym_1F_Text_DaniellePostBattle, MSGBOX_AUTOCLOSE
	end

LavaridgeTown_Gym_1F_EventScript_Gerald::
	trainerbattle_single TRAINER_GERALD, LavaridgeTown_Gym_1F_Text_GeraldIntro, LavaridgeTown_Gym_1F_Text_GeraldDefeat
	msgbox LavaridgeTown_Gym_1F_Text_GeraldPostBattle, MSGBOX_AUTOCLOSE
	end

LavaridgeTown_Gym_B1F_EventScript_Jace::
	trainerbattle_single TRAINER_JACE, LavaridgeTown_Gym_B1F_Text_JaceIntro, LavaridgeTown_Gym_B1F_Text_JaceDefeat
	msgbox LavaridgeTown_Gym_B1F_Text_JacePostBattle, MSGBOX_AUTOCLOSE
	end

LavaridgeTown_Gym_B1F_EventScript_Jeff::
	trainerbattle_single TRAINER_JEFF, LavaridgeTown_Gym_B1F_Text_JeffIntro, LavaridgeTown_Gym_B1F_Text_JeffDefeat
	msgbox LavaridgeTown_Gym_B1F_Text_JeffPostBattle, MSGBOX_AUTOCLOSE
	end

LavaridgeTown_Gym_B1F_EventScript_Eli::
	trainerbattle_single TRAINER_ELI, LavaridgeTown_Gym_B1F_Text_EliIntro, LavaridgeTown_Gym_B1F_Text_EliDefeat
	msgbox LavaridgeTown_Gym_B1F_Text_EliPostBattle, MSGBOX_AUTOCLOSE
	end

LavaridgeTown_Gym_1F_EventScript_GymGuide::
	lock
	faceplayer
	goto_if_set FLAG_DEFEATED_LAVARIDGE_GYM, LavaridgeTown_Gym_1F_EventScript_GymGuidePostVictory
	msgbox LavaridgeTown_Gym_1F_Text_GymGuideAdvice, MSGBOX_DEFAULT
	release
	end

LavaridgeTown_Gym_1F_EventScript_GymGuidePostVictory::
	msgbox LavaridgeTown_Gym_1F_Text_GymGuidePostVictory, MSGBOX_DEFAULT
	release
	end

LavaridgeTown_Gym_1F_EventScript_LeftGymStatue::
	lockall
	goto_if_set FLAG_BADGE04_GET, LavaridgeTown_Gym_1F_EventScript_GymStatueCertified
	goto LavaridgeTown_Gym_1F_EventScript_GymStatue
	end

LavaridgeTown_Gym_1F_EventScript_RightGymStatue::
	lockall
	goto_if_set FLAG_BADGE04_GET, LavaridgeTown_Gym_1F_EventScript_GymStatueCertified
	goto LavaridgeTown_Gym_1F_EventScript_GymStatue
	end

LavaridgeTown_Gym_1F_EventScript_GymStatueCertified::
	msgbox LavaridgeTown_Gym_1F_Text_GymStatueCertified, MSGBOX_DEFAULT
	releaseall
	end

LavaridgeTown_Gym_1F_EventScript_GymStatue::
	msgbox LavaridgeTown_Gym_1F_Text_GymStatue, MSGBOX_DEFAULT
	releaseall
	end

LavaridgeTown_Gym_1F_Text_GymGuideAdvice:
	.string "Hey, how's it going, Champion-\n"
	.string "bound {PLAYER}?\p"
	.string "The Ecruteak Gym Leader, WATARU, uses\n"
	.string "WATER-type POKéMON.\p"
	.string "He's as fierce as a roaring waterfall, so\n"
	.string "don't take him lightly!\p"
	.string "Try using a GRASS or ELECTRIC-type to\n"
	.string "show him what's up.\p"
	.string "Well then, go for it!$"

LavaridgeTown_Gym_1F_Text_GymGuidePostVictory:
	.string "Wow, you really mopped the floor with\n"
	.string "him!\p"
	.string "I didn't doubt you for a second.$"

LavaridgeTown_Gym_1F_Text_ColeIntro:
	.string "Left or right, which way to go?$"

LavaridgeTown_Gym_1F_Text_ColeDefeat:
	.string "I'm all dried up!$"

LavaridgeTown_Gym_1F_Text_ColePostBattle:
	.string "I guess our puzzle isn't that tricky.$"

LavaridgeTown_Gym_1F_Text_AxleIntro:
	.string "You don't need floaties too, do you?$"

LavaridgeTown_Gym_1F_Text_AxleDefeat:
	.string "You let all my air out!$"

LavaridgeTown_Gym_1F_Text_AxlePostBattle:
	.string "I can't swim yet, but I love the water!$"

LavaridgeTown_Gym_B1F_Text_KeeganIntro:
	.string "Raise the water back up, I was having\n"
	.string "fun!$"

LavaridgeTown_Gym_B1F_Text_KeeganDefeat:
	.string "Ok, that battle was pretty fun too.$"

LavaridgeTown_Gym_B1F_Text_KeeganPostBattle:
	.string "Hey, can you go raise the water back\n"
	.string "up?$"

LavaridgeTown_Gym_1F_Text_GeraldIntro:
	.string "I can't catch a single fish in these\n"
	.string "waters!$"

LavaridgeTown_Gym_1F_Text_GeraldDefeat:
	.string "Hey, you're not half bad.$"

LavaridgeTown_Gym_1F_Text_GeraldPostBattle:
	.string "I guess the fish wouldn't survive with\n"
	.string "the water being drained.$"

LavaridgeTown_Gym_1F_Text_DanielleIntro:
	.string "You didn't have to battle me, you know.$"

LavaridgeTown_Gym_1F_Text_DanielleDefeat:
	.string "Oh, but you're too strong.$"

LavaridgeTown_Gym_1F_Text_DaniellePostBattle:
	.string "How do you like our gym?\p"
	.string "I helped WATARU set it up.$"

LavaridgeTown_Gym_B1F_Text_JaceIntro:
	.string "You're not lost, are you?$"

LavaridgeTown_Gym_B1F_Text_JaceDefeat:
	.string "Hmm... You might have what it takes...$"

LavaridgeTown_Gym_B1F_Text_JacePostBattle:
	.string "Can you find your way though our maze?$"

LavaridgeTown_Gym_B1F_Text_JeffIntro:
	.string "I hope you know how to swim!$"

LavaridgeTown_Gym_B1F_Text_JeffDefeat:
	.string "Something didn't go right.$"

LavaridgeTown_Gym_B1F_Text_JeffPostBattle:
	.string "Knowing how to swim opens up the world\n"
	.string "just a little bit more.$"

LavaridgeTown_Gym_B1F_Text_EliIntro:
	.string "Oh, I think I hooked a big one!$"

LavaridgeTown_Gym_B1F_Text_EliDefeat:
	.string "You were too much for my line to handle.$"

LavaridgeTown_Gym_B1F_Text_EliPostBattle:
	.string "Maybe I can get a better fishing rod\n"
	.string "from my buddy in town.$"

LavaridgeTown_Gym_1F_Text_FlanneryIntro:
	.string "Welcome, TRAINER.\p"
	.string "I am the Ecruteak City Gym Leader,\n"
	.string "WATARU.\p"
	.string "...\p"
	.string "You may not believe it, but I can tell a\n"
	.string "lot about a person I've just met simply\l"
	.string "by the feel of their aura.\p"
	.string "You emit a calm, yet powerful aura\n"
	.string "similar to my own.\p"
	.string "But let's not waste any time.\p"
	.string "As you and I both know, the truly\n"
	.string "powerful let their actions speak for\l"
	.string "them.$"

LavaridgeTown_Gym_1F_Text_FlanneryDefeat:
	.string "Marvelous, I knew my intuition was\n"
	.string "correct.\p"
	.string "With your skill, I wouldn't be surprised\n"
	.string "to see you claim the title of Champion\l"
	.string "some day.\p"
	.string "Here, you are certainly deserving of\n"
	.string "this...$"

LavaridgeTown_Gym_1F_Text_ReceivedHeatBadge:
	.string "{PLAYER} received the TORRENT BADGE\n"
	.string "from WATARU.$"

LavaridgeTown_Gym_1F_Text_ExplainHeatBadgeTakeThis:
	.string "With the TORRENT BADGE, all POKéMON up\n"
	.string "to Level 55 will obey you completely.\l"
	.string "Even those that you receive in trades.\p"
	.string "It will also allow you to use the HM\n"
	.string "move, Strength, outside of battle.\p"
	.string "...\p"
	.string "You should also take this...$"

LavaridgeTown_Gym_1F_Text_ExplainOverheat:
	.string "That TM contains the move Scald.\p"
	.string "It is a very powerful WATER-type move\n"
	.string "that may leave your foe with a burn.\p"
	.string "Consider it a special gift from myself.$"

LavaridgeTown_Gym_1F_Text_FlanneryPostBattle:
	.string "Your aura reminds me of another person\n"
	.string "besides myself.\p"
	.string "Could it be...$"

LavaridgeTown_Gym_1F_Text_GymStatue:
	.string "LAVARIDGE TOWN POKéMON GYM$"

LavaridgeTown_Gym_1F_Text_GymStatueCertified:
	.string "LAVARIDGE TOWN POKéMON GYM\p"
	.string "FLANNERY'S CERTIFIED TRAINERS:\n"
	.string "{PLAYER}$"

LavaridgeTown_Gym_1F_EventScript_WataruRound2_Text_0:
	.string "Your aura reminds me of the previous\n"
	.string "Champion, Silver...$"

LavaridgeTown_Gym_1F_EventScript_WataruRound2_Text_1:
	.string "By the way, I've heard rumors that the\n"
	.string "POKéMON League has found a new\l"
	.string "Champion.\p"
	.string "I have no doubt you will claim victory\n"
	.string "with ease!$"

LavaridgeTown_Gym_1F_EventScript_WataruRematchDefeated_Text_0:
	.string "I may have lost to you a second time,\n"
	.string "but I feel as though I put up a good\l"
	.string "fight.\p"
	.string "If another disaster ever befalls\n"
	.string "Ecruteak City, I will be fully prepared\l"
	.string "to act.$"

LavaridgeTown_Gym_1F_Text_WataruRematchIntro::
	.string "{PLAYER}, I must thank you for\n"
	.string "summoning Lugia and calming Ho-oh's\l"
	.string "rage.\p"
	.string "As Ecruteak City's gym leader, I should\n"
	.string "have joined the battle, and held off\l"
	.string "Ho-oh.\p"
	.string "I am a disgrace to all gym leaders!\p"
	.string "Please, grant me a POKéMON battle in\n"
	.string "order to begin my redemption.\p"
	.string "I will prove that I am not worthless!$"

LavaridgeTown_Gym_1F_Text_WataruRematchDefeat::
	.string "A loss, but not a brutal loss...$"

LavaridgeTown_Gym_1F_Text_WataruRematchNotEnoughMons::
	.string "...\p"
	.string "I'm sorry, but I would prefer a double\n"
	.string "battle.\p"
	.string "Please come back when you have more\n"
	.string "than one POKéMON with you.$"
