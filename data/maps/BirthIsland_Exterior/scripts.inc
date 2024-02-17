.set LOCALID_DEOXYS, 2

@ Note: LOCALID_BIRTH_ISLAND_EXTERIOR_ROCK is a local id for this map used elsewhere. It's defined in event_objects.h

BirthIsland_Exterior_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, BirthIsland_Exterior_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, BirthIsland_Exterior_OnResume
	map_script MAP_SCRIPT_ON_RETURN_TO_FIELD, BirthIsland_Exterior_OnReturnToField
	.byte 0

BirthIsland_Exterior_OnReturnToField:
	special SetDeoxysRockPalette
	end

BirthIsland_Exterior_OnTransition:
	setflag FLAG_MAP_SCRIPT_CHECKED_DEOXYS
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_RIVAL_BRENDAN_NORMAL
	setvar VAR_DEOXYS_ROCK_STEP_COUNT, 0
	setvar VAR_DEOXYS_ROCK_LEVEL, 0
	call_if_set FLAG_BATTLED_DEOXYS, BirthIsland_Exterior_EventScript_HideDeoxysAndPuzzle
	call_if_unset FLAG_BATTLED_DEOXYS, BirthIsland_Exterior_EventScript_TryShowDeoxysPuzzle
	end

BirthIsland_Exterior_EventScript_HideDeoxysAndPuzzle::
	setflag FLAG_HIDE_DEOXYS
	setflag FLAG_HIDE_BIRTH_ISLAND_DEOXYS_TRIANGLE
	return

BirthIsland_Exterior_EventScript_TryShowDeoxysPuzzle::
	goto_if_set FLAG_DEFEATED_DEOXYS, Common_EventScript_NopReturn
	clearflag FLAG_HIDE_BIRTH_ISLAND_DEOXYS_TRIANGLE
	clearflag FLAG_DEOXYS_ROCK_COMPLETE
	return

BirthIsland_Exterior_OnResume:
	call_if_set FLAG_SYS_CTRL_OBJ_DELETE, BirthIsland_Exterior_EventScript_TryRemoveDeoxys
	end

BirthIsland_Exterior_EventScript_TryRemoveDeoxys::
	specialvar VAR_RESULT, GetBattleOutcome
	goto_if_ne VAR_RESULT, B_OUTCOME_CAUGHT, Common_EventScript_NopReturn
	removeobject LOCALID_DEOXYS
	return

BirthIsland_Exterior_EventScript_Triangle::
	lock
	faceplayer
	special DoDeoxysRockInteraction
	waitstate
	switch VAR_RESULT
	case 0, BirthIsland_Exterior_EventScript_NotSolved1
	case 1, BirthIsland_Exterior_EventScript_NotSolved2
	case 2, BirthIsland_Exterior_EventScript_Deoxys
	case 3, BirthIsland_Exterior_EventScript_NotSolved3
	end

BirthIsland_Exterior_EventScript_NotSolved1::
	release
	end

BirthIsland_Exterior_EventScript_NotSolved2::
	release
	end

BirthIsland_Exterior_EventScript_NotSolved3::
	release
	end

BirthIsland_Exterior_EventScript_Deoxys::
	waitse
	setfieldeffectargument 0, LOCALID_BIRTH_ISLAND_EXTERIOR_ROCK
	setfieldeffectargument 1, MAP_NUM(BIRTH_ISLAND_EXTERIOR)
	setfieldeffectargument 2, MAP_GROUP(BIRTH_ISLAND_EXTERIOR)
	dofieldeffect FLDEFF_DESTROY_DEOXYS_ROCK
	playbgm MUS_RG_ENCOUNTER_DEOXYS, FALSE
	waitfieldeffect FLDEFF_DESTROY_DEOXYS_ROCK
	addobject LOCALID_DEOXYS
	applymovement LOCALID_DEOXYS, BirthIsland_Exterior_Movement_DeoxysApproach
	waitmovement 0
	waitse
	playmoncry SPECIES_DEOXYS, CRY_MODE_ENCOUNTER
	delay 40
	waitmoncry
	setvar VAR_LAST_TALKED, LOCALID_DEOXYS
	seteventmon SPECIES_DEOXYS, 30
	setflag FLAG_SYS_CTRL_OBJ_DELETE
	special BattleSetup_StartLegendaryBattle
	waitstate
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
	specialvar VAR_RESULT, GetBattleOutcome
	goto_if_eq VAR_RESULT, B_OUTCOME_WON, BirthIsland_Exterior_EventScript_DefeatedDeoxys
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, BirthIsland_Exterior_EventScript_RanFromDeoxys
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, BirthIsland_Exterior_EventScript_RanFromDeoxys
	setflag FLAG_BATTLED_DEOXYS
	release
	end

BirthIsland_Exterior_EventScript_DefeatedDeoxys::
	setflag FLAG_DEFEATED_DEOXYS
	setvar VAR_0x8004, SPECIES_DEOXYS
	goto Common_EventScript_LegendaryFlewAway
	end

BirthIsland_Exterior_EventScript_RanFromDeoxys::
	setvar VAR_0x8004, SPECIES_DEOXYS
	goto Common_EventScript_LegendaryFlewAway
	end

BirthIsland_Exterior_Movement_DeoxysApproach:
	walk_slow_down
	walk_slow_down
	walk_slow_down
	walk_slow_down
	walk_slow_down
	walk_slow_down
	walk_slow_down
	step_end

BirthIsland_Exterior_EventScript_Sailor::
	lock
	faceplayer
	compare VAR_HARBOR_DEPARTED_FROM, 1
	goto_if_eq BirthIsland_Exterior_EventScript_Sailor_1
	msgbox BirthIsland_Exterior_EventScript_Sailor_Text_2, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq BirthIsland_Exterior_EventScript_Sailor_7
	call BirthIsland_Exterior_EventScript_Depart
	warpsilent MAP_LILYCOVE_CITY_HARBOR, 8, 11
	waitstate
	release
	end

BirthIsland_Exterior_EventScript_Sailor_1:
	msgbox BirthIsland_Exterior_EventScript_Sailor_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq BirthIsland_Exterior_EventScript_Sailor_4
	call BirthIsland_Exterior_EventScript_Depart
	warpsilent MAP_FORTREE_CITY_DECORATION_SHOP, 8, 6
	waitstate
	release
	end

BirthIsland_Exterior_EventScript_Sailor_4:
	msgbox BirthIsland_Exterior_EventScript_Sailor_Text_1
	release
	end

BirthIsland_Exterior_EventScript_Sailor_7:
	msgbox BirthIsland_Exterior_EventScript_Sailor_Text_1
	release
	end


BirthIsland_Exterior_EventScript_Depart::
	msgbox BirthIsland_Exterior_EventScript_Depart_Text_0
	waitmessage
	closemessage
	applymovement 4, FortreeCity_DecorationShop_Movement_SailorBoard
	waitmovement 0
	delay 30
	specialvar VAR_RESULT, GetPlayerFacingDirection
	switch VAR_RESULT
	case DIR_EAST, BirthIsland_Exterior_EventScript_Depart_3
	case DIR_WEST, BirthIsland_Exterior_EventScript_Depart_4
	case DIR_SOUTH, BirthIsland_Exterior_EventScript_Depart_5
BirthIsland_Exterior_EventScript_Depart_1:
	delay 60
	playse SE_RG_SS_ANNE_HORN
	applymovement 3, FortreeCity_DecorationShop_Movement_ShipLeave
	waitmovement 0
	waitse
	return

BirthIsland_Exterior_EventScript_Depart_3:
	call BirthIsland_Exterior_EventScript_FacingEast
	goto BirthIsland_Exterior_EventScript_Depart_1

BirthIsland_Exterior_EventScript_Depart_4:
	call BirthIsland_Exterior_EventScript_FacingWest
	goto BirthIsland_Exterior_EventScript_Depart_1

BirthIsland_Exterior_EventScript_Depart_5:
	call BirthIsland_Exterior_EventScript_FacingSouth
	goto BirthIsland_Exterior_EventScript_Depart_1


BirthIsland_Exterior_EventScript_FacingEast::
	applymovement OBJ_EVENT_ID_PLAYER, BirthIsland_Exterior_Movement_PlayerBoardEast
	waitmovement 0
	return


BirthIsland_Exterior_EventScript_FacingWest::
	applymovement OBJ_EVENT_ID_PLAYER, BirthIsland_Exterior_Movement_PlayerBoardWest
	waitmovement 0
	return


BirthIsland_Exterior_EventScript_FacingSouth::
	applymovement OBJ_EVENT_ID_PLAYER, FortreeCity_DecorationShop_Movement_PlayerBoard
	waitmovement 0
	return


BirthIsland_Exterior_Movement_PlayerBoardEast:
	walk_right
	walk_down
	set_invisible
	step_end

BirthIsland_Exterior_Movement_PlayerBoardWest:
	walk_left
	walk_down
	set_invisible
	step_end

BirthIsland_Exterior_EventScript_Sailor_Text_0:
	.string "Would you like to go back to Olivine City\n"
	.string "now?$"

BirthIsland_Exterior_EventScript_Sailor_Text_1:
	.string "Let me know when you're ready to leave.$"

BirthIsland_Exterior_EventScript_Sailor_Text_2:
	.string "Would you like to go back to Apricotta\n"
	.string "Beach now?$"

BirthIsland_Exterior_EventScript_Depart_Text_0:
	.string "All aboard!$"
