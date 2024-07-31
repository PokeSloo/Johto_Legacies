BattleFrontier_BattlePalaceLobby_MapScripts::
	map_script MAP_SCRIPT_ON_LOAD, BattleFrontier_BattlePalaceLobby_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

BattleFrontier_BattlePalaceLobby_MapScripts_MAP_SCRIPT_ON_LOAD:
	goto_if_set FLAG_CAUGHT_ROTOM, BattleFrontier_BattlePalaceLobby_MapScripts_MAP_SCRIPT_ON_LOAD_1
	goto_if_set FLAG_DIDNT_CATCH_ROTOM, BattleFrontier_BattlePalaceLobby_MapScripts_MAP_SCRIPT_ON_LOAD_2
	return

BattleFrontier_BattlePalaceLobby_MapScripts_MAP_SCRIPT_ON_LOAD_1:
	setmetatile 4, 1, 0x002, TRUE
	end

BattleFrontier_BattlePalaceLobby_MapScripts_MAP_SCRIPT_ON_LOAD_2:
	setmetatile 4, 1, 0x002, TRUE
	end


BattleFrontier_BattlePalaceLobby_EventScript_TV::
	lock
	dotimebasedevents
	goto_if_set FLAG_CAUGHT_ROTOM, BattleFrontier_BattlePalaceLobby_EventScript_TV_1
	goto_if_set FLAG_DIDNT_CATCH_ROTOM, BattleFrontier_BattlePalaceLobby_EventScript_TV_2
	waitse
	playmoncry SPECIES_ROTOM, CRY_MODE_NORMAL
	msgbox BattleFrontier_BattlePalaceLobby_EventScript_TV_Text_0
	waitmessage
	waitmoncry
	setwildbattle SPECIES_ROTOM, 50
	dowildbattle
	specialvar VAR_RESULT, GetBattleOutcome
	goto_if_eq VAR_RESULT, B_OUTCOME_WON, BattleFrontier_BattlePalaceLobby_EventScript_DefeatedRotom
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, BattleFrontier_BattlePalaceLobby_EventScript_DefeatedRotom
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, BattleFrontier_BattlePalaceLobby_EventScript_DefeatedRotom
	setmetatile 4, 1, 0x002, TRUE
	special DrawWholeMapView
	setflag FLAG_CAUGHT_ROTOM
	release
	end

BattleFrontier_BattlePalaceLobby_EventScript_TV_1:
	release
	end

BattleFrontier_BattlePalaceLobby_EventScript_TV_2:
	release
	end


BattleFrontier_BattlePalaceLobby_EventScript_DefeatedRotom::
	setmetatile 4, 1, 0x002, TRUE
	special DrawWholeMapView
	setflag FLAG_DIDNT_CATCH_ROTOM
	release
	end


BattleFrontier_BattlePalaceLobby_EventScript_TV_Text_0:
	.string "Zzzzt!$"
