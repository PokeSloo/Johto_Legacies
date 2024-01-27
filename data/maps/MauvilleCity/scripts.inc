MauvilleCity_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, MauvilleCity_MapScripts_MAP_SCRIPT_ON_TRANSITION
	map_script MAP_SCRIPT_ON_LOAD, MauvilleCity_MapScripts_MAP_SCRIPT_ON_LOAD
	map_script MAP_SCRIPT_ON_FRAME_TABLE, MauvilleCity_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, MauvilleCity_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
	.byte 0

MauvilleCity_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	setflag FLAG_VISITED_MAUVILLE_CITY
	setflag FLAG_SYS_TV_START
	compare VAR_ECRUTEAK_STATE, 9
	goto_if_eq MauvilleCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
MauvilleCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
	compare VAR_ECRUTEAK_STATE, 10
	goto_if_eq MauvilleCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
MauvilleCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
	end

MauvilleCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
	setweather WEATHER_DROUGHT
	playbgm MUS_B_PYRAMID, TRUE
	setobjectxyperm 7, 46, 41
	goto MauvilleCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

MauvilleCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_5:
	setweather WEATHER_DROUGHT
	playbgm MUS_B_PYRAMID, TRUE
	setobjectxyperm 7, 46, 41
	goto MauvilleCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_4

MauvilleCity_MapScripts_MAP_SCRIPT_ON_LOAD:
	goto_if_set FLAG_HOOH_VS_LUGIA_COMPLETED, MauvilleCity_MapScripts_MAP_SCRIPT_ON_LOAD_2
	goto_if_set FLAG_HIDE_AWAKENED_LUGIA, MauvilleCity_MapScripts_MAP_SCRIPT_ON_LOAD_5
	goto_if_set FLAG_HIDE_MAGMA_HIDEOUT_GRUNTS, MauvilleCity_MapScripts_MAP_SCRIPT_ON_LOAD_7
	return

MauvilleCity_MapScripts_MAP_SCRIPT_ON_LOAD_2:
	setmetatile 33, 10, 0x001, TRUE
	setmetatile 34, 10, 0x001, TRUE
	setmetatile 35, 10, 0x001, TRUE
	setmetatile 36, 10, 0x001, TRUE
	setmetatile 37, 10, 0x001, TRUE
	setmetatile 33, 11, 0x2F0, TRUE
	setmetatile 34, 11, 0x2F1, TRUE
	setmetatile 35, 11, 0x2F2, TRUE
	setmetatile 36, 11, 0x313, TRUE
	setmetatile 37, 11, 0x2F4, TRUE
	setmetatile 33, 12, 0x2F8, TRUE
	setmetatile 34, 12, 0x2F9, TRUE
	setmetatile 35, 12, 0x2FA, TRUE
	setmetatile 36, 12, 0x31B, TRUE
	setmetatile 37, 12, 0x2FC, TRUE
	setmetatile 33, 13, 0x300, TRUE
	setmetatile 34, 13, 0x301, TRUE
	setmetatile 35, 13, 0x302, TRUE
	setmetatile 36, 13, 0x303, TRUE
	setmetatile 37, 13, 0x304, TRUE
	setmetatile 25, 19, 0x121, FALSE
	setmetatile 26, 19, 0x121, FALSE
	setmetatile 27, 19, 0x121, FALSE
	setmetatile 28, 19, 0x121, FALSE
	setmetatile 29, 19, 0x121, FALSE
	setmetatile 25, 20, 0x330, FALSE
	setmetatile 26, 20, 0x331, FALSE
	setmetatile 27, 20, 0x332, FALSE
	setmetatile 28, 20, 0x333, FALSE
	setmetatile 29, 20, 0x334, FALSE
	setmetatile 25, 21, 0x338, TRUE
	setmetatile 26, 21, 0x339, TRUE
	setmetatile 27, 21, 0x33A, TRUE
	setmetatile 28, 21, 0x33B, TRUE
	setmetatile 29, 21, 0x33C, FALSE
	setmetatile 25, 22, 0x340, TRUE
	setmetatile 26, 22, 0x341, TRUE
	setmetatile 27, 22, 0x342, TRUE
	setmetatile 28, 22, 0x343, TRUE
	setmetatile 29, 22, 0x344, FALSE
	end

MauvilleCity_MapScripts_MAP_SCRIPT_ON_LOAD_5:
	setmetatile 33, 10, 0x001, TRUE
	setmetatile 34, 10, 0x001, TRUE
	setmetatile 35, 10, 0x001, TRUE
	setmetatile 36, 10, 0x001, TRUE
	setmetatile 37, 10, 0x001, TRUE
	setmetatile 31, 11, 0x22E, TRUE
	setmetatile 33, 11, 0x2F0, TRUE
	setmetatile 34, 11, 0x2F1, TRUE
	setmetatile 35, 11, 0x2F2, TRUE
	setmetatile 36, 11, 0x313, TRUE
	setmetatile 37, 11, 0x2F4, TRUE
	setmetatile 30, 12, 0x22F, TRUE
	setmetatile 33, 12, 0x2F8, TRUE
	setmetatile 34, 12, 0x2F9, TRUE
	setmetatile 35, 12, 0x2FA, TRUE
	setmetatile 36, 12, 0x31B, TRUE
	setmetatile 37, 12, 0x2FC, TRUE
	setmetatile 33, 13, 0x300, TRUE
	setmetatile 34, 13, 0x301, TRUE
	setmetatile 35, 13, 0x302, TRUE
	setmetatile 36, 13, 0x303, TRUE
	setmetatile 37, 13, 0x304, TRUE
	setmetatile 33, 14, 0x237, TRUE
	setmetatile 29, 15, 0x24F, TRUE
	setmetatile 36, 15, 0x247, TRUE
	setmetatile 30, 16, 0x237, TRUE
	setmetatile 37, 16, 0x24F, TRUE
	setmetatile 29, 17, 0x228, TRUE
	setmetatile 31, 17, 0x228, TRUE
	setmetatile 37, 17, 0x24F, TRUE
	setmetatile 29, 18, 0x226, TRUE
	setmetatile 36, 18, 0x247, TRUE
	setmetatile 25, 19, 0x121, FALSE
	setmetatile 26, 19, 0x121, FALSE
	setmetatile 27, 19, 0x121, FALSE
	setmetatile 28, 19, 0x121, FALSE
	setmetatile 29, 19, 0x121, FALSE
	setmetatile 33, 19, 0x228, TRUE
	setmetatile 37, 19, 0x237, TRUE
	setmetatile 39, 19, 0x237, TRUE
	setmetatile 25, 20, 0x330, FALSE
	setmetatile 26, 20, 0x331, FALSE
	setmetatile 27, 20, 0x332, FALSE
	setmetatile 28, 20, 0x333, FALSE
	setmetatile 29, 20, 0x334, FALSE
	setmetatile 32, 20, 0x227, TRUE
	setmetatile 34, 20, 0x228, TRUE
	setmetatile 35, 20, 0x228, TRUE
	setmetatile 38, 20, 0x228, TRUE
	setmetatile 25, 21, 0x338, TRUE
	setmetatile 26, 21, 0x339, TRUE
	setmetatile 27, 21, 0x33A, TRUE
	setmetatile 28, 21, 0x33B, TRUE
	setmetatile 29, 21, 0x33C, FALSE
	setmetatile 25, 22, 0x340, TRUE
	setmetatile 26, 22, 0x341, TRUE
	setmetatile 27, 22, 0x342, TRUE
	setmetatile 28, 22, 0x343, TRUE
	setmetatile 29, 22, 0x344, FALSE
	setmetatile 33, 21, 0x228, TRUE
	setmetatile 36, 21, 0x228, TRUE
	setmetatile 37, 21, 0x228, TRUE
	setmetatile 34, 22, 0x228, TRUE
	setmetatile 29, 23, 0x23F, TRUE
	end

MauvilleCity_MapScripts_MAP_SCRIPT_ON_LOAD_7:
	setmetatile 36, 11, 0x22E, TRUE
	setmetatile 30, 12, 0x22F, TRUE
	setmetatile 35, 12, 0x22F, TRUE
	setmetatile 33, 14, 0x237, TRUE
	setmetatile 29, 15, 0x24F, TRUE
	setmetatile 36, 15, 0x247, TRUE
	setmetatile 30, 16, 0x237, TRUE
	setmetatile 37, 16, 0x24F, TRUE
	setmetatile 29, 17, 0x228, TRUE
	setmetatile 31, 17, 0x228, TRUE
	setmetatile 37, 17, 0x24F, TRUE
	setmetatile 29, 18, 0x226, TRUE
	setmetatile 36, 18, 0x247, TRUE
	setmetatile 33, 19, 0x228, TRUE
	setmetatile 37, 19, 0x237, TRUE
	setmetatile 39, 19, 0x237, TRUE
	setmetatile 28, 20, 0x22E, TRUE
	setmetatile 32, 20, 0x227, TRUE
	setmetatile 34, 20, 0x228, TRUE
	setmetatile 35, 20, 0x228, TRUE
	setmetatile 38, 20, 0x228, TRUE
	setmetatile 27, 21, 0x22F, TRUE
	setmetatile 33, 21, 0x228, TRUE
	setmetatile 36, 21, 0x228, TRUE
	setmetatile 37, 21, 0x228, TRUE
	setmetatile 34, 22, 0x228, TRUE
	setmetatile 29, 23, 0x23F, TRUE
	end

MauvilleCity_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
	map_script_2 VAR_ECRUTEAK_STATE, 7, MauvilleCity_OnFrame
	map_script_2 VAR_ECRUTEAK_STATE, 10, MauvilleCity_OnFrame_Later
	.2byte 0

MauvilleCity_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
	map_script_2 VAR_ECRUTEAK_STATE, 7, BattleFrontier_RankingHall_OnWarp
	map_script_2 VAR_ECRUTEAK_STATE, 10, BattleFrontier_RankingHall_OnWarp
	.2byte 0


MauvilleCity_OnFrame::
	lock
	delay 30
	waitse
	playmoncry SPECIES_HO_OH, CRY_MODE_NORMAL
	waitmoncry
	playse SE_PIN
	applymovement 8, MauvilleCity_Movement_ExclamationRunAway
	waitmovement 0
	waitse
	addobject 9
	applymovement 9, MauvilleCity_Movement_HoOhInFrame
	waitmovement 0
	delay 30
	waitse
	playmoncry SPECIES_HO_OH, CRY_MODE_NORMAL
	waitmoncry
	playse SE_M_SACRED_FIRE
	fadescreenspeed FADE_TO_WHITE, 4
	waitse
	playse SE_M_SACRED_FIRE2
	setmetatile 36, 11, 0x22E, TRUE
	setmetatile 30, 12, 0x22F, TRUE
	setmetatile 35, 12, 0x22F, TRUE
	setmetatile 33, 14, 0x237, TRUE
	setmetatile 29, 15, 0x24F, TRUE
	setmetatile 36, 15, 0x247, TRUE
	setmetatile 30, 16, 0x237, TRUE
	setmetatile 37, 16, 0x24F, TRUE
	setmetatile 29, 17, 0x228, TRUE
	setmetatile 31, 17, 0x228, TRUE
	setmetatile 37, 17, 0x24F, TRUE
	setmetatile 29, 18, 0x226, TRUE
	setmetatile 36, 18, 0x247, TRUE
	setmetatile 33, 19, 0x228, TRUE
	setmetatile 37, 19, 0x237, TRUE
	setmetatile 39, 19, 0x237, TRUE
	setmetatile 28, 20, 0x22E, TRUE
	setmetatile 32, 20, 0x227, TRUE
	setmetatile 34, 20, 0x228, TRUE
	setmetatile 35, 20, 0x228, TRUE
	setmetatile 38, 20, 0x228, TRUE
	setmetatile 27, 21, 0x22F, TRUE
	setmetatile 33, 21, 0x228, TRUE
	setmetatile 36, 21, 0x228, TRUE
	setmetatile 37, 21, 0x228, TRUE
	setmetatile 34, 22, 0x228, TRUE
	setmetatile 29, 23, 0x23F, TRUE
	special DrawWholeMapView
	setweather WEATHER_DROUGHT
	doweather
	waitse
	fadescreenspeed FADE_FROM_WHITE, 4
	delay 180
	playbgm MUS_RG_ROCKET_HIDEOUT, TRUE
	addvar VAR_ECRUTEAK_STATE, 1
	warpsilent MAP_MAGMA_HIDEOUT_4F, 10, 9
	waitstate
	release
	end


MauvilleCity_OnFrame_Later::
	lock
	delay 60
	waitse
	playmoncry SPECIES_LUGIA, CRY_MODE_NORMAL
	waitmoncry
	playse SE_PIN
	applymovement 10, MauvilleCity_Movement_ExclamationLookLeft
	applymovement 11, MauvilleCity_Movement_ExclamationLookLeft
	applymovement 12, MauvilleCity_Movement_ExclamationLookLeft
	waitmovement 0
	waitse
	fadeoutbgm 1
	addobject 13
	applymovement 13, MauvilleCity_Movement_LugiaApproach
	waitmovement 0
	delay 30
	waitse
	playmoncry SPECIES_HO_OH, CRY_MODE_NORMAL
	applymovement 10, MauvilleCity_Movement_HoohFlapLeft
	waitmovement 0
	waitmoncry
	applymovement 10, MauvilleCity_Movement_HoohToLugia
	applymovement OBJ_EVENT_ID_PLAYER, MauvilleCity_Movement_CameraBetweenLugiaHooh
	waitmovement 0
	waitse
	playmoncry SPECIES_LUGIA, CRY_MODE_NORMAL
	applymovement 13, MauvilleCity_Movement_LugiaFlapRight
	waitmovement 0
	setweather WEATHER_RAIN
	doweather
	waitmoncry
	delay 90
	setmetatile 31, 11, 0x263, TRUE
	setmetatile 33, 14, 0x209, FALSE
	setmetatile 37, 16, 0x001, FALSE
	setmetatile 29, 18, 0x219, FALSE
	setmetatile 34, 20, 0x211, FALSE
	setmetatile 37, 19, 0x209, FALSE
	special DrawWholeMapView
	delay 90
	setmetatile 30, 12, 0x26A, TRUE
	setmetatile 29, 15, 0x001, FALSE
	setmetatile 36, 15, 0x212, FALSE
	setmetatile 29, 17, 0x211, FALSE
	setmetatile 31, 17, 0x211, FALSE
	setmetatile 33, 19, 0x211, FALSE
	setmetatile 35, 20, 0x211, FALSE
	setmetatile 33, 21, 0x211, FALSE
	setmetatile 34, 22, 0x211, FALSE
	setmetatile 29, 23, 0x121, FALSE
	special DrawWholeMapView
	delay 90
	setmetatile 30, 16, 0x209, FALSE
	setmetatile 37, 17, 0x001, FALSE
	setmetatile 36, 18, 0x212, FALSE
	setmetatile 39, 19, 0x209, FALSE
	setmetatile 32, 20, 0x210, FALSE
	setmetatile 38, 20, 0x211, FALSE
	setmetatile 36, 21, 0x211, FALSE
	setmetatile 37, 21, 0x211, FALSE
	special DrawWholeMapView
	delay 120
	waitse
	playmoncry SPECIES_HO_OH, CRY_MODE_NORMAL
	applymovement 10, MauvilleCity_Movement_HoohFlapLeft
	waitmovement 0
	waitmoncry
	applymovement 10, MauvilleCity_Movement_HoohExit
	waitmovement 0
	removeobject 10
	delay 30
	applymovement 13, MauvilleCity_Movement_LugiaExit
	waitmovement 0
	delay 30
	setweather WEATHER_SUNNY
	doweather
	delay 60
	playbgm MUS_HG_ECRUTEAK, TRUE
	applymovement OBJ_EVENT_ID_PLAYER, MauvilleCity_Movement_CameraToSilver
	waitmovement 0
	applymovement 11, MauvilleCity_Movement_FaceDown
	applymovement 12, MauvilleCity_Movement_FaceDown
	waitmovement 0
	call BattleFrontier_BattleDomeBattleRoom_EventScript_SetPlayerGfx
	addobject 14
	applymovement 14, MauvilleCity_Movement_PlayerToPlayer
	waitmovement 0
	removeobject 14
	applymovement OBJ_EVENT_ID_PLAYER, MauvilleCity_Movement_ShowPlayer
	waitmovement 0
	msgbox MauvilleCity_OnFrame_Later_Text_0
	waitmessage
	closemessage
	playse SE_POKENAV_CALL
	waitse
	delay 30
	msgbox MauvilleCity_OnFrame_Later_Text_1
	waitmessage
	closemessage
	applymovement 12, MauvilleCity_Movement_SilverExit
	applymovement 11, MauvilleCity_Movement_FeraligatrExit
	waitmovement 0
	removeobject 11
	removeobject 12
	setflag FLAG_HIDE_SILVER_ECRUTEAK
	setflag FLAG_HOOH_VS_LUGIA_COMPLETED
	addvar VAR_ECRUTEAK_STATE, 1
	release
	end


MauvilleCity_Movement_ExclamationLookLeft:
	emote_exclamation_mark
	walk_in_place_left
	face_left
	step_end

MauvilleCity_Movement_ExclamationRunAway:
	emote_exclamation_mark
	walk_in_place_up
	delay_16
	delay_16
	delay_16
	delay_16
	walk_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	step_end

MauvilleCity_Movement_HoOhInFrame:
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	step_end

MauvilleCity_Movement_LugiaApproach:
	walk_right
	walk_right
	walk_right
	walk_right
	face_right
	step_end

MauvilleCity_Movement_HoohToLugia:
	walk_left
	walk_left
	face_left
	step_end

MauvilleCity_Movement_CameraBetweenLugiaHooh:
	walk_left
	walk_left
	walk_left
	walk_left
	step_end

MauvilleCity_Movement_LugiaFlapRight:
	walk_in_place_right
	walk_in_place_right
	walk_in_place_right
	step_end

MauvilleCity_Movement_HoohFlapLeft:
	walk_in_place_left
	walk_in_place_left
	walk_in_place_left
	step_end

MauvilleCity_Movement_HoohExit:
	walk_right
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

MauvilleCity_Movement_LugiaExit:
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	step_end

MauvilleCity_Movement_CameraToSilver:
	walk_right
	walk_right
	walk_right
	walk_right
	walk_down
	walk_down
	walk_down
	walk_down
	face_up
	step_end

MauvilleCity_Movement_FaceDown:
	face_down
	step_end

MauvilleCity_Movement_PlayerToPlayer:
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

MauvilleCity_Movement_ShowPlayer:
	set_visible
	step_end

MauvilleCity_Movement_SilverExit:
	walk_right
	walk_right
	walk_down
	walk_down
	walk_down
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	step_end

MauvilleCity_Movement_FeraligatrExit:
	walk_down
	walk_right
	walk_right
	walk_down
	walk_down
	walk_down
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	step_end

MauvilleCity_EventScript_CitySign::
	msgbox MauvilleCity_EventScript_CitySign_Text_0, MSGBOX_SIGN
	end


MauvilleCity_EventScript_BurnedTowerSign::
	msgbox MauvilleCity_EventScript_BurnedTowerSign_Text_0, MSGBOX_SIGN
	end


MauvilleCity_EventScript_BellTowerSign::
	msgbox MauvilleCity_EventScript_BellTowerSign_Text_0, MSGBOX_SIGN
	end


MauvilleCity_EventScript_DanceTheaterSign::
	msgbox MauvilleCity_EventScript_DanceTheaterSign_Text_0, MSGBOX_SIGN
	end


MauvilleCity_EventScript_BurnedTowerKid::
	msgbox MauvilleCity_EventScript_BurnedTowerKid_Text_0, MSGBOX_NPC
	end


MauvilleCity_EventScript_Tourist::
	msgbox MauvilleCity_EventScript_Tourist_Text_0, MSGBOX_NPC
	end


MauvilleCity_EventScript_BlackHairBoy::
	lock
	faceplayer
	goto_if_set FLAG_HOOH_VS_LUGIA_COMPLETED, MauvilleCity_EventScript_BlackHairBoy_1
	goto_if_set FLAG_HIDE_MAGMA_HIDEOUT_GRUNTS, MauvilleCity_EventScript_BlackHairBoy_2
	msgbox MauvilleCity_EventScript_BlackHairBoy_Text_2
	release
	end

MauvilleCity_EventScript_BlackHairBoy_1:
	msgbox MauvilleCity_EventScript_BlackHairBoy_Text_0
	release
	end

MauvilleCity_EventScript_BlackHairBoy_2:
	msgbox MauvilleCity_EventScript_BlackHairBoy_Text_1
	release
	end


MauvilleCity_EventScript_RichKid::
	lock
	faceplayer
	goto_if_set FLAG_HIDE_ECRUTEAK_PHOENIX, MauvilleCity_EventScript_RichKid_1
	msgbox MauvilleCity_EventScript_RichKid_Text_1
	release
	end

MauvilleCity_EventScript_RichKid_1:
	msgbox MauvilleCity_EventScript_RichKid_Text_0
	release
	end


MauvilleCity_EventScript_GymNerd::
	msgbox MauvilleCity_EventScript_GymNerd_Text_0, MSGBOX_NPC
	end


MauvilleCity_EventScript_KimonoGirl::
	lock
	faceplayer
	goto_if_set FLAG_HOOH_VS_LUGIA_COMPLETED, MauvilleCity_EventScript_KimonoGirl_1
	goto_if_set FLAG_HIDE_MAGMA_HIDEOUT_GRUNTS, MauvilleCity_EventScript_KimonoGirl_2
	goto_if_set FLAG_HIDE_ECRUTEAK_PHOENIX, MauvilleCity_EventScript_KimonoGirl_3
	msgbox MauvilleCity_EventScript_KimonoGirl_Text_3
	release
	end

MauvilleCity_EventScript_KimonoGirl_1:
	msgbox MauvilleCity_EventScript_KimonoGirl_Text_0
	release
	end

MauvilleCity_EventScript_KimonoGirl_2:
	msgbox MauvilleCity_EventScript_KimonoGirl_Text_1
	release
	end

MauvilleCity_EventScript_KimonoGirl_3:
	msgbox MauvilleCity_EventScript_KimonoGirl_Text_2
	release
	end


MauvilleCity_OnFrame_Later_Text_0:
	.string "DAD: I knew I could count on you,\n"
	.string "{PLAYER}.\p"
	.string "Lucky for us, it appears that Ho-oh was\n"
	.string "calmed down by Lugia.\p"
	.string "My intuition seems to have been\n"
	.string "correct, plus, you managed to find and\l"
	.string "awaken Lugia in no time!\p"
	.string "Feraligatr and I barely broke a sweat\n"
	.string "before you got here.\p"
	.string "...\p"
	.string "Boy, you and your brother sure have\n"
	.string "grown...\p"
	.string "It's unfortunate that my duties as\n"
	.string "League Champion keep me so busy.\p"
	.string "Speaking of which, you seem to be\n"
	.string "almost ready to challenge me.\p"
	.string "I see you only need one more badge.\p"
	.string "Keep it up, {PLAYER}!$"

MauvilleCity_OnFrame_Later_Text_1:
	.string "DAD: Sorry, it looks like they need me\n"
	.string "back at the POKéMON League now.\p"
	.string "I hope to see you again soon,\n"
	.string "{PLAYER}.$"

MauvilleCity_EventScript_CitySign_Text_0:
	.string "ECRUTEAK CITY\n"
	.string "“A Historical City.”$"

MauvilleCity_EventScript_BurnedTowerSign_Text_0:
	.string "BURNED TOWER\n"
	.string "It was destroyed by a mysterious fire.\p"
	.string "Please stay away, as it is unsafe.$"

MauvilleCity_EventScript_BellTowerSign_Text_0:
	.string "BARRIER STATION TO BELL TOWER\n"
	.string "No Trespassing by the Unworthy.$"

MauvilleCity_EventScript_DanceTheaterSign_Text_0:
	.string "ECRUTEAK DANCE THEATER$"

MauvilleCity_EventScript_BurnedTowerKid_Text_0:
	.string "Burned Tower? Historical significance?\p"
	.string "Big deal! Why do I have to write a school\n"
	.string "paper on this stupid place?$"

MauvilleCity_EventScript_Tourist_Text_0:
	.string "I wanted to see the Bell Tower while I\n"
	.string "was here touring with my friends, but\l"
	.string "the jerks inside told me I'm unworthy!\p"
	.string "Don't they know who I am?\p"
	.string "I'm going to write them the nastiest\n"
	.string "review!$"

MauvilleCity_EventScript_BlackHairBoy_Text_0:
	.string "Well, the weather seems to be back to\n"
	.string "normal now.\p"
	.string "I wonder what made Ho-oh so angry.$"

MauvilleCity_EventScript_BlackHairBoy_Text_1:
	.string "Is it hot out here, or is it just me?\p"
	.string "No, it's definitely hot out here!$"

MauvilleCity_EventScript_BlackHairBoy_Text_2:
	.string "Have you been to Route 42 recently?\p"
	.string "It's been snowing non-stop that way,\n"
	.string "but luckily Ecruteak is still clear.$"

MauvilleCity_EventScript_RichKid_Text_0:
	.string "The Kimono Girls in the Dance Theater\n"
	.string "seem much happier.\p"
	.string "I'm not sure what happened, but it's\n"
	.string "much more fun now!$"

MauvilleCity_EventScript_RichKid_Text_1:
	.string "I went to the Dance Theater, but all of\n"
	.string "the Kimono Girls seemed stressed for\l"
	.string "some reason.\p"
	.string "It's kind of depressing.$"

MauvilleCity_EventScript_GymNerd_Text_0:
	.string "The gym leader here uses WATER-type\n"
	.string "POKéMON, but don't expect a calm\l"
	.string "ripple.\p"
	.string "WATARU will crash down on you like a\n"
	.string "roaring waterfall!$"

MauvilleCity_EventScript_KimonoGirl_Text_0:
	.string "Welcome to the Ecruteak Dance Theater!\p"
	.string "Please come in and enjoy yourself!$"

MauvilleCity_EventScript_KimonoGirl_Text_1:
	.string "Welcome to the Ecruteak Dance Theater!\p"
	.string "Hmm... It sure has gotten hot here\n"
	.string "lately.\p"
	.string "Pretty strange for this time of year.$"

MauvilleCity_EventScript_KimonoGirl_Text_2:
	.string "Welcome to the Ecruteak Dance Theater!\p"
	.string "And thank you so much for running off\n"
	.string "those thugs!$"

MauvilleCity_EventScript_KimonoGirl_Text_3:
	.string "Welcome to the Ecruteak Dance Theater!\p"
	.string "Please come in and enjoy yourself...\p"
	.string "...\p"
	.string "Please, you have to help us...\p"
	.string "A group of thugs have taken over our\n"
	.string "Dance Theater, there's a secret switch\l"
	.string "hidden somewhere inside!\p"
	.string "Oops, I shouldn't have spoken so loud.\p"
	.string "They might hear me...$"
