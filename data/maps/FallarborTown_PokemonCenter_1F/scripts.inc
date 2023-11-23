.set LOCALID_NURSE, 1

FallarborTown_PokemonCenter_1F_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, FallarborTown_PokemonCenter_1F_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0

FallarborTown_PokemonCenter_1F_OnTransition:
	setrespawn HEAL_LOCATION_FALLARBOR_TOWN
	end

FallarborTown_PokemonCenter_1F_EventScript_Nurse::
	setvar VAR_0x800B, LOCALID_NURSE
	call Common_EventScript_PkmnCenterNurse
	waitmessage
	waitbuttonpress
	release
	end

FallarborTown_PokemonCenter_1F_EventScript_Girl::
	msgbox FallarborTown_PokemonCenter_1F_Text_FossilManiacEdgeOfTown, MSGBOX_NPC
	end

FallarborTown_PokemonCenter_1F_EventScript_ExpertM::
	msgbox FallarborTown_PokemonCenter_1F_Text_PlantHardyTrees, MSGBOX_NPC
	end

FallarborTown_PokemonCenter_1F_EventScript_Lanette::
	msgbox FallarborTown_PokemonCenter_1F_Text_LanetteGreeting, MSGBOX_NPC
	end

FallarborTown_PokemonCenter_1F_Text_LanetteGreeting:
	.string "I tried to go to the Rage Resort, but\n"
	.string "the guards wouldn't let me in.\p"
	.string "I hear it used to be open to everyone\n"
	.string "before they built the resort.$"

FallarborTown_PokemonCenter_1F_Text_FossilManiacEdgeOfTown:
	.string "It gets too cold around here this time\n"
	.string "of year.\p"
	.string "I'm seriously rethinking my decision to\n"
	.string "visit Mahogany Town.$"

FallarborTown_PokemonCenter_1F_Text_PlantHardyTrees:
	.string "Kids today don't know what a harsh\n"
	.string "winter is really like.\p"
	.string "I once got stuck up on Mt. Rage with\n"
	.string "some companions on a hiking trip.\p"
	.string "We had to wait up there for days before\n"
	.string "the snow storm let up.$"

