.set LOCALID_NURSE, 1

VerdanturfTown_PokemonCenter_1F_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, VerdanturfTown_PokemonCenter_1F_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0

VerdanturfTown_PokemonCenter_1F_OnTransition:
	setrespawn HEAL_LOCATION_VERDANTURF_TOWN
	end

VerdanturfTown_PokemonCenter_1F_EventScript_Nurse::
	setvar VAR_0x800B, LOCALID_NURSE
	call Common_EventScript_PkmnCenterNurse
	waitmessage
	waitbuttonpress
	release
	end

VerdanturfTown_PokemonCenter_1F_EventScript_Gentleman::
	msgbox VerdanturfTown_PokemonCenter_1F_Text_FaithInYourPokemon, MSGBOX_NPC
	end

VerdanturfTown_PokemonCenter_1F_EventScript_ExpertM::
	msgbox VerdanturfTown_PokemonCenter_1F_Text_VisitForBattleTent, MSGBOX_NPC
	end

VerdanturfTown_PokemonCenter_1F_EventScript_Lass::
	msgbox VerdanturfTown_PokemonCenter_1F_Text_NewLass, MSGBOX_NPC
	end

VerdanturfTown_PokemonCenter_1F_Text_FaithInYourPokemon:
	.string "Blackthorn City is great!\p"
	.string "There are so many hills and caves\n"
	.string "around, how could anyone not love it?$"

VerdanturfTown_PokemonCenter_1F_Text_VisitForBattleTent:
	.string "I've traveled all across Johto, but\n"
	.string "there's still one area I have yet to\l"
	.string "visit.\p"
	.string "Mt. Silver is only accessible to the few\n"
	.string "who are skilled enough to have\l"
	.string "defeated the League Champion, or so\l"
	.string "the rumors say.$"

VerdanturfTown_PokemonCenter_1F_Text_NewLass:
	.string "I'm not sure who BILL is, but his\n"
	.string "POKéMON storage system is great!\p"
	.string "I use it all the time!$"

