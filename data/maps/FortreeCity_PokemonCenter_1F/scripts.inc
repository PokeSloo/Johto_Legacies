.set LOCALID_NURSE, 1

FortreeCity_PokemonCenter_1F_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, FortreeCity_PokemonCenter_1F_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0

FortreeCity_PokemonCenter_1F_OnTransition:
	setrespawn HEAL_LOCATION_FORTREE_CITY
	end

FortreeCity_PokemonCenter_1F_EventScript_Nurse::
	setvar VAR_0x800B, LOCALID_NURSE
	call Common_EventScript_PkmnCenterNurse
	waitmessage
	waitbuttonpress
	release
	end

FortreeCity_PokemonCenter_1F_EventScript_Gentleman::
	msgbox FortreeCity_PokemonCenter_1F_Text_GoToSafariZone, MSGBOX_NPC
	end

FortreeCity_PokemonCenter_1F_EventScript_Man::
	msgbox FortreeCity_PokemonCenter_1F_Text_RecordCornerIsNeat, MSGBOX_NPC
	end

FortreeCity_PokemonCenter_1F_EventScript_Boy::
	msgbox FortreeCity_PokemonCenter_1F_Text_DoYouKnowAboutPokenav, MSGBOX_NPC
	end

FortreeCity_PokemonCenter_1F_Text_GoToSafariZone:
	.string "Have you been to the Safari Zone yet?\p"
	.string "It used to be way out past Cianwood\n"
	.string "City, but it was so out of the way that\l"
	.string "nobody went there.\p"
	.string "Now they've moved it to a much more\n"
	.string "convenient location, and very close to\l"
	.string "Olivine!$"

FortreeCity_PokemonCenter_1F_Text_RecordCornerIsNeat:
	.string "The Safari Zone has all kinds of\n"
	.string "POKéMON that can't be found anywhere\l"
	.string "else in Johto, it's great!$"

FortreeCity_PokemonCenter_1F_Text_DoYouKnowAboutPokenav:
	.string "There's a shop in town that sells all\n"
	.string "kinds of sweets.\p"
	.string "I think some might even cause certain\n"
	.string "POKéMON to evolve!$"

