.set LOCALID_NURSE, 1

LavaridgeTown_PokemonCenter_1F_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, LavaridgeTown_PokemonCenter_1F_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0

LavaridgeTown_PokemonCenter_1F_OnTransition:
	setrespawn HEAL_LOCATION_LAVARIDGE_TOWN
	end

LavaridgeTown_PokemonCenter_1F_EventScript_Nurse::
	setvar VAR_0x800B, LOCALID_NURSE
	call Common_EventScript_PkmnCenterNurse
	waitmessage
	waitbuttonpress
	release
	end

LavaridgeTown_PokemonCenter_1F_EventScript_Youngster::
	msgbox LavaridgeTown_PokemonCenter_1F_Text_HotSpringCanInvigorate, MSGBOX_NPC
	end

LavaridgeTown_PokemonCenter_1F_EventScript_Woman::
	msgbox LavaridgeTown_PokemonCenter_1F_Text_TrainersPokemonSpendTimeTogether, MSGBOX_NPC
	end

LavaridgeTown_PokemonCenter_1F_EventScript_Gentleman::
	msgbox LavaridgeTown_PokemonCenter_1F_Text_TrainersShouldRestToo, MSGBOX_NPC
	end

LavaridgeTown_PokemonCenter_1F_Text_TrainersPokemonSpendTimeTogether:
	.string "Hey, you look familiar...\p"
	.string "Were you on an episode of The\n"
	.string "Challenge?\p"
	.string "...\p"
	.string "I knew it!\p"
	.string "You were the first person to defeat\n"
	.string "WHITNEY in years!$"

LavaridgeTown_PokemonCenter_1F_Text_HotSpringCanInvigorate:
	.string "I thought my FLYING-type POKéMON\n"
	.string "would give me an edge against LEE, but\l"
	.string "he seemed well prepared to deal with\l"
	.string "them.\p"
	.string "I'll have to re-think my strategy...$"

LavaridgeTown_PokemonCenter_1F_Text_TrainersShouldRestToo:
	.string "There's nothing more a fisherman such\n"
	.string "as myself could ask for than to be\l"
	.string "surrounded by water.\p"
	.string "Well, maybe a good lure.$"

