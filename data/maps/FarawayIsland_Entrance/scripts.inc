FarawayIsland_Entrance_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, FarawayIsland_Entrance_OnTransition
	.byte 0

FarawayIsland_Entrance_OnTransition:
	setflag FLAG_ARRIVED_ON_FARAWAY_ISLAND
	end

FarawayIsland_Entrance_EventScript_SetCloudsWeather::
	setweather WEATHER_SUNNY_CLOUDS
	doweather
	end

FarawayIsland_Entrance_EventScript_ClearWeather::
	setweather WEATHER_NONE
	doweather
	end

FarawayIsland_Entrance_EventScript_Sign::
	msgbox FarawayIsland_Entrance_Text_Sign, MSGBOX_SIGN
	end

FarawayIsland_Entrance_EventScript_Sailor::
	lock
	faceplayer
	compare VAR_HARBOR_DEPARTED_FROM, 1
	goto_if_eq FarawayIsland_Entrance_EventScript_Sailor_1
	msgbox FarawayIsland_Entrance_EventScript_Sailor_Text_2, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq FarawayIsland_Entrance_EventScript_Sailor_7
	call FarawayIsland_Entrance_EventScript_Depart
	warpsilent MAP_LILYCOVE_CITY_HARBOR, 8, 11
	waitstate
	release
	end

FarawayIsland_Entrance_EventScript_Sailor_1:
	msgbox FarawayIsland_Entrance_EventScript_Sailor_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq FarawayIsland_Entrance_EventScript_Sailor_4
	call FarawayIsland_Entrance_EventScript_Depart
	warpsilent MAP_FORTREE_CITY_DECORATION_SHOP, 8, 6
	waitstate
	release
	end

FarawayIsland_Entrance_EventScript_Sailor_4:
	msgbox FarawayIsland_Entrance_EventScript_Sailor_Text_1
	release
	end

FarawayIsland_Entrance_EventScript_Sailor_7:
	msgbox FarawayIsland_Entrance_EventScript_Sailor_Text_1
	release
	end


FarawayIsland_Entrance_EventScript_Depart::
	msgbox FarawayIsland_Entrance_EventScript_Depart_Text_0
	waitmessage
	closemessage
	applymovement 1, FortreeCity_DecorationShop_Movement_SailorBoard
	waitmovement 0
	delay 30
	specialvar VAR_RESULT, GetPlayerFacingDirection
	switch VAR_RESULT
	case DIR_EAST, FarawayIsland_Entrance_EventScript_Depart_3
	case DIR_WEST, FarawayIsland_Entrance_EventScript_Depart_4
	case DIR_SOUTH, FarawayIsland_Entrance_EventScript_Depart_5
FarawayIsland_Entrance_EventScript_Depart_1:
	delay 60
	playse SE_RG_SS_ANNE_HORN
	applymovement 2, FortreeCity_DecorationShop_Movement_ShipLeave
	waitmovement 0
	waitse
	return

FarawayIsland_Entrance_EventScript_Depart_3:
	call BirthIsland_Exterior_EventScript_FacingEast
	goto FarawayIsland_Entrance_EventScript_Depart_1

FarawayIsland_Entrance_EventScript_Depart_4:
	call BirthIsland_Exterior_EventScript_FacingWest
	goto FarawayIsland_Entrance_EventScript_Depart_1

FarawayIsland_Entrance_EventScript_Depart_5:
	call BirthIsland_Exterior_EventScript_FacingSouth
	goto FarawayIsland_Entrance_EventScript_Depart_1


FarawayIsland_Entrance_EventScript_Shrine::
	lock
	goto_if_set FLAG_COMPLETED_MEWTWO_EVENT, FarawayIsland_Entrance_EventScript_Shrine_2
	specialvar VAR_RESULT, ScriptGetLeadMonSpecies
	compare VAR_RESULT, SPECIES_CELEBI
	goto_if_eq FarawayIsland_Entrance_EventScript_Shrine_4
	release
	end

FarawayIsland_Entrance_EventScript_Shrine_2:
	release
	end

FarawayIsland_Entrance_EventScript_Shrine_4:
	playse SE_PIN
	applymovement OBJ_EVENT_ID_PLAYER, FarawayIsland_Entrance_Movement_Exclamation
	waitmovement 0
	waitse
	delay 30
	msgbox FarawayIsland_Entrance_EventScript_Shrine_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq FarawayIsland_Entrance_EventScript_Shrine_7
	release
	end

FarawayIsland_Entrance_EventScript_Shrine_7:
	goto FarawayIsland_Entrance_EventScript_BeginTimeTravel
	return


FarawayIsland_Entrance_EventScript_BeginTimeTravel::
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, SootopolisCity_Movement_StepLeft
	waitmovement 0
	delay 30
	addobject 4
	delay 30
	playse SE_BALL_OPEN
	removeobject 4
	addobject 3
	waitse
	delay 30
	waitse
	playmoncry SPECIES_CELEBI, CRY_MODE_NORMAL
	waitmoncry
	playse SE_LEDGE
	applymovement 3, FarawayIsland_Entrance_Movement_CelebiJump
	waitmovement 0
	playse SE_LEDGE
	applymovement 3, FarawayIsland_Entrance_Movement_CelebiJump
	waitmovement 0
	fadescreen FADE_TO_WHITE
	removeobject 3
	playbgm MUS_RAYQUAZA_APPEARS, FALSE
	checkplayergender
	compare VAR_RESULT, MALE
	goto_if_eq FarawayIsland_Entrance_EventScript_BeginTimeTravel_2
	compare VAR_RESULT, FEMALE
	goto_if_eq FarawayIsland_Entrance_EventScript_BeginTimeTravel_3
FarawayIsland_Entrance_EventScript_BeginTimeTravel_1:
	setwarp MAP_SHOAL_CAVE_LOW_TIDE_LOWER_ROOM, 34, 21
	special TimeTravelBackClock
	waitstate
	fadedefaultbgm
	release
	end

FarawayIsland_Entrance_EventScript_BeginTimeTravel_2:
	setvar VAR_0x8004, MALE
	goto FarawayIsland_Entrance_EventScript_BeginTimeTravel_1

FarawayIsland_Entrance_EventScript_BeginTimeTravel_3:
	setvar VAR_0x8004, FEMALE
	goto FarawayIsland_Entrance_EventScript_BeginTimeTravel_1


FarawayIsland_Entrance_Movement_Exclamation:
	emote_exclamation_mark
	step_end

FarawayIsland_Entrance_Movement_CelebiJump:
	jump_in_place_right
	step_end

FarawayIsland_Entrance_EventScript_Sailor_Text_0:
	.string "Would you like to go back to Olivine City\n"
	.string "now?$"

FarawayIsland_Entrance_EventScript_Sailor_Text_1:
	.string "Let me know when you're ready to leave.$"

FarawayIsland_Entrance_EventScript_Sailor_Text_2:
	.string "Would you like to go back to Apricotta\n"
	.string "Beach now?$"

FarawayIsland_Entrance_EventScript_Depart_Text_0:
	.string "All aboard!$"

FarawayIsland_Entrance_EventScript_Shrine_Text_0:
	.string "Celebi is reacting to the shrine!\p"
	.string "Will you let it out?$"
