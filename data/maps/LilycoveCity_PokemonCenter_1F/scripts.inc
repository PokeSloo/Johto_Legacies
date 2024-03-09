.set LOCALID_NURSE, 1

LilycoveCity_PokemonCenter_1F_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, LilycoveCity_PokemonCenter_1F_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0

LilycoveCity_PokemonCenter_1F_OnTransition:
	setrespawn HEAL_LOCATION_LILYCOVE_CITY
	end

LilycoveCity_PokemonCenter_1F_EventScript_Nurse::
	setvar VAR_0x800B, LOCALID_NURSE
	call Common_EventScript_PkmnCenterNurse
	waitmessage
	waitbuttonpress
	release
	end

LilycoveCity_PokemonCenter_1F_EventScript_Boy::
	msgbox LilycoveCity_PokemonCenter_1F_Text_HowManyKindsOfPokemon, MSGBOX_NPC
	end

LilycoveCity_PokemonCenter_1F_EventScript_Maniac::
	msgbox LilycoveCity_PokemonCenter_1F_Text_HaventSeenRottenScoundrels, MSGBOX_NPC
	end

LilycoveCity_PokemonCenter_1F_EventScript_Psychic::
	msgbox LilycoveCity_PokemonCenter_1F_Text_NewText, MSGBOX_NPC
	end

LilycoveCity_PokemonCenter_1F_Text_HowManyKindsOfPokemon:
	.string "I thought I could stay here and wait\n"
	.string "out the rain, but it's still not letting\l"
	.string "up.\p"
	.string "I heard about the rainy season before I\n"
	.string "came here, but come on!$"

LilycoveCity_PokemonCenter_1F_Text_HaventSeenRottenScoundrels:
	.string "The weather up on Mt. Tempest is pretty\n"
	.string "rough this time of year.\p"
	.string "Be careful if you decide to climb up the\n"
	.string "mountain.$"

LilycoveCity_PokemonCenter_1F_Text_NewText:
	.string "Hmm... I sense you've been through a lot\n"
	.string "on your journey here.\p"
	.string "And your future is...\p"
	.string "Ufufu...$"

