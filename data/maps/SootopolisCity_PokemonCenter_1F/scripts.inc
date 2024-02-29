.set LOCALID_NURSE, 1

SootopolisCity_PokemonCenter_1F_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, SootopolisCity_PokemonCenter_1F_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0

SootopolisCity_PokemonCenter_1F_OnTransition:
	setrespawn HEAL_LOCATION_SOOTOPOLIS_CITY
	end

SootopolisCity_PokemonCenter_1F_EventScript_Nurse::
	setvar VAR_0x800B, LOCALID_NURSE
	call Common_EventScript_PkmnCenterNurse
	waitmessage
	waitbuttonpress
	release
	end

SootopolisCity_PokemonCenter_1F_EventScript_Gentleman::
	msgbox SootopolisCity_PokemonCenter_1F_Text_WallaceToughestInHoenn, MSGBOX_NPC
	end

SootopolisCity_PokemonCenter_1F_EventScript_Woman::
	msgbox SootopolisCity_PokemonCenter_1F_Text_AlwaysBeFriendsWithPokemon, MSGBOX_NPC
	end

SootopolisCity_PokemonCenter_1F_Text_WallaceToughestInHoenn:
	.string "You must be here for the festival too,\n"
	.string "where are you from?\p"
	.string "...\p"
	.string "Johto? Of course!\p"
	.string "Enjoy your stay on the islands!$"

SootopolisCity_PokemonCenter_1F_Text_AlwaysBeFriendsWithPokemon:
	.string "Ah! There's nothing I love more than\n"
	.string "life on the open seas!\p"
	.string "I'm here for the festival, but I can't\n"
	.string "wait to get back out on the water.$"

