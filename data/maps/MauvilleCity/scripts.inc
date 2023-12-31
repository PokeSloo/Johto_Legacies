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
	end

MauvilleCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
	setweather WEATHER_DROUGHT
	playbgm MUS_B_PYRAMID, TRUE
	setobjectxyperm 7, 46, 41
	goto MauvilleCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

MauvilleCity_MapScripts_MAP_SCRIPT_ON_LOAD:
	goto_if_set FLAG_HIDE_MAGMA_HIDEOUT_GRUNTS, MauvilleCity_MapScripts_MAP_SCRIPT_ON_LOAD_1
	return

MauvilleCity_MapScripts_MAP_SCRIPT_ON_LOAD_1:
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
	.2byte 0

MauvilleCity_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
	map_script_2 VAR_ECRUTEAK_STATE, 7, BattleFrontier_RankingHall_OnWarp
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
	msgbox MauvilleCity_EventScript_BlackHairBoy_Text_0, MSGBOX_NPC
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
	goto_if_set FLAG_HIDE_ECRUTEAK_PHOENIX, MauvilleCity_EventScript_KimonoGirl_1
	msgbox MauvilleCity_EventScript_KimonoGirl_Text_1
	release
	end

MauvilleCity_EventScript_KimonoGirl_1:
	msgbox MauvilleCity_EventScript_KimonoGirl_Text_0
	release
	end


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
	.string "And thank you so much for running off\n"
	.string "those thugs!$"

MauvilleCity_EventScript_KimonoGirl_Text_1:
	.string "Welcome to the Ecruteak Dance Theater!\p"
	.string "Please come in and enjoy yourself...\p"
	.string "...\p"
	.string "Please, you have to help us...\p"
	.string "A group of thugs have taken over our\n"
	.string "Dance Theater, there's a secret switch\l"
	.string "hidden somewhere inside!\p"
	.string "Oops, I shouldn't have spoken so loud.\p"
	.string "They might hear me...$"
