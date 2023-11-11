FortreeCity_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, FortreeCity_OnTransition
	.byte 0

FortreeCity_OnTransition:
	setflag FLAG_VISITED_FORTREE_CITY
	end

FortreeCity_EventScript_Man::
	msgbox FortreeCity_Text_SawGiganticPokemonInSky, MSGBOX_NPC
	end

FortreeCity_EventScript_Woman::
	lock
	faceplayer
	goto_if_set FLAG_BADGE05_GET, FortreeCity_EventScript_WomanGymAccessible
	msgbox FortreeCity_Text_SomethingBlockingGym, MSGBOX_DEFAULT
	release
	end

FortreeCity_EventScript_WomanGymAccessible::
	msgbox FortreeCity_Text_ThisTimeIllBeatWinona, MSGBOX_DEFAULT
	release
	end

FortreeCity_EventScript_Girl::
	msgbox FortreeCity_Text_TreesGrowByDrinkingRainwater, MSGBOX_NPC
	end

FortreeCity_EventScript_OldMan::
	msgbox FortreeCity_Text_EveryoneHealthyAndLively, MSGBOX_NPC
	end

FortreeCity_EventScript_Boy::
	msgbox FortreeCity_Text_BugPokemonComeThroughWindow, MSGBOX_NPC
	end

FortreeCity_EventScript_GameboyKid::
	msgbox FortreeCity_Text_PokemonThatEvolveWhenTraded, MSGBOX_NPC
	end

FortreeCity_EventScript_CitySign::
	msgbox FortreeCity_Text_CitySign, MSGBOX_SIGN
	end

FortreeCity_EventScript_GymSign::
	msgbox FortreeCity_Text_GymSign, MSGBOX_SIGN
	end

FortreeCity_EventScript_SweetShopSign::
	msgbox FortreeCity_Text_SweetShopSign, MSGBOX_SIGN
	end

FortreeCity_EventScript_DollShopSign::
	msgbox FortreeCity_Text_DollShopSign, MSGBOX_SIGN
	end

FortreeCity_EventScript_LighthouseSign::
	msgbox FortreeCity_Text_LighthouseSign, MSGBOX_SIGN
	end

FortreeCity_Text_SawGiganticPokemonInSky:
	.string "Cargo ships regularly come to this port\n"
	.string "from Roujem City on the Golden Islands,\l"
	.string "I wonder what they're transporting.$"

FortreeCity_Text_SomethingBlockingGym:
	.string "The Thunderbolts will be putting on\n"
	.string "another concert soon, I can't wait!$"

FortreeCity_Text_ThisTimeIllBeatWinona:
	.string "That concert was great!\p"
	.string "They even played my favorite song.$"

FortreeCity_Text_TreesGrowByDrinkingRainwater:
	.string "I love the feel and smell of the ocean\n"
	.string "breeze, that's why I moved here!$"

FortreeCity_Text_EveryoneHealthyAndLively:
	.string "The Olivine Sweet Shop has so much to\n"
	.string "choose from, I can't make up my mind.\p"
	.string "Maybe I'll just buy one of everything.$"

FortreeCity_Text_BugPokemonComeThroughWindow:
	.string "The gym here is also used as a concert\n"
	.string "hall, people come from all over the\l"
	.string "world to hear The Thunderbolts play\l"
	.string "live!$"

FortreeCity_Text_PokemonThatEvolveWhenTraded:
	.string "Urp...\p"
	.string "You wouldn't expect a sailor to get\n"
	.string "seasick, but crossing the Goldenvine\l"
	.string "Sea always does a number on me...$"

FortreeCity_Text_CitySign:
	.string "OLIVINE CITY\n"
	.string "“The Port with Sea Breezes.”$"

FortreeCity_Text_GymSign:
	.string "OLIVINE CITY POKéMON GYM\n"
	.string "LEADER: CHARLIE\p"
	.string "“The electrified rockstar.”$"

FortreeCity_Text_SweetShopSign:
	.string "OLIVINE SWEET SHOP$"

FortreeCity_Text_DollShopSign:
	.string "OLIVINE DOLL SHOP$"

FortreeCity_Text_LighthouseSign:
	.string "Olivine's Lighthouse\p"
	.string "It is also known as\n"
	.string "the GLITTER LIGHTHOUSE.$"

