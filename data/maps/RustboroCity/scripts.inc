RustboroCity_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, RustboroCity_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

RustboroCity_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	setflag FLAG_VISITED_RUSTBORO_CITY
	return


RustboroCity_Text_CitySign::
	msgbox RustboroCity_Text_CitySign_Text_0, MSGBOX_SIGN
	end


RustboroCity_Text_VioletUniversity::
	msgbox RustboroCity_Text_VioletUniversity_Text_0, MSGBOX_SIGN
	end


RustboroCity_Text_HerbalMedicineShop::
	msgbox RustboroCity_Text_HerbalMedicineShop_Text_0, MSGBOX_SIGN
	end


RustboroCity_Text_SproutTower::
	msgbox RustboroCity_Text_SproutTower_Text_0, MSGBOX_SIGN
	end


RustboroCity_EventScript_BridgeMan::
	msgbox RustboroCity_EventScript_BridgeMan_Text_0, MSGBOX_NPC
	end


RustboroCity_EventScript_NinjaBoy::
	msgbox RustboroCity_EventScript_NinjaBoy_Text_0, MSGBOX_NPC
	end


RustboroCity_EventScript_Rt36Guy::
	msgbox RustboroCity_EventScript_Rt36Guy_Text_0, MSGBOX_NPC
	end


RustboroCity_EventScript_HerbShopSage::
	msgbox RustboroCity_EventScript_HerbShopSage_Text_0, MSGBOX_NPC
	end


RustboroCity_EventScript_BlondeMan::
	msgbox RustboroCity_EventScript_BlondeMan_Text_0, MSGBOX_NPC
	end


RustboroCity_EventScript_GymGuy::
	msgbox RustboroCity_EventScript_GymGuy_Text_0, MSGBOX_NPC
	end


RustboroCity_EventScript_UniversityGuy::
	msgbox RustboroCity_EventScript_UniversityGuy_Text_0, MSGBOX_NPC
	end


RustboroCity_EventScript_PCgirl::
	msgbox RustboroCity_EventScript_PCgirl_Text_0, MSGBOX_NPC
	end


RustboroCity_EventScript_Twin::
	msgbox RustboroCity_EventScript_Twin_Text_0, MSGBOX_NPC
	end


RustboroCity_EventScript_BenchBoy::
	msgbox RustboroCity_EventScript_BenchBoy_Text_0, MSGBOX_NPC
	end


RustboroCity_EventScript_BenchGirl::
	lock
	faceplayer
	msgbox RustboroCity_EventScript_BenchGirl_Text_0
	waitmessage
	special ChoosePartyMon
	waitstate
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, RustboroCity_EventScript_CancelMonSelect
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
	goto_if_eq VAR_RESULT, SPECIES_EGG, RustboroCity_EventScript_ShowEgg
	setvar VAR_0x8005, 3
	special ChangeMonNature
	compare VAR_RESULT, FALSE
	goto_if_eq RustboroCity_EventScript_BenchGirl_1
	msgbox RustboroCity_EventScript_BenchGirl_Text_2
	release
	end

RustboroCity_EventScript_BenchGirl_1:
	msgbox RustboroCity_EventScript_BenchGirl_Text_1
	release
	end


RustboroCity_EventScript_CancelMonSelect::
	msgbox RustboroCity_EventScript_CancelMonSelect_Text_0
	release
	end


RustboroCity_EventScript_ShowEgg::
	msgbox RustboroCity_EventScript_ShowEgg_Text_0
	release
	end


RustboroCity_EventScript_ItemQuickClaw::
	finditem ITEM_QUICK_CLAW
	end


RustboroCity_EventScript_ItemRareCandy::
	finditem ITEM_RARE_CANDY
	end


RustboroCity_Text_CitySign_Text_0:
	.string "VIOLET CITY\n"
	.string "“The City of Nostalgic Scents.”$"

RustboroCity_Text_VioletUniversity_Text_0:
	.string "VIOLET UNIVERSITY$"

RustboroCity_Text_HerbalMedicineShop_Text_0:
	.string "VIOLET SUPPLEMENT SHOP$"

RustboroCity_Text_SproutTower_Text_0:
	.string "SPROUT TOWER$"

RustboroCity_EventScript_BridgeMan_Text_0:
	.string "Have you been to Sprout Tower yet?\p"
	.string "You may receive a gift from the Elder\n"
	.string "Sage if he deems you worthy of it.$"

RustboroCity_EventScript_NinjaBoy_Text_0:
	.string "FLYING-type POKéMON really are the\n"
	.string "best, don't you agree?$"

RustboroCity_EventScript_Rt36Guy_Text_0:
	.string "Weird trees keep popping up on Route\n"
	.string "36, they make it difficult to get to\l"
	.string "Goldenrod City.$"

RustboroCity_EventScript_HerbShopSage_Text_0:
	.string "This shop sells “medicines” that can\n"
	.string "alter a POKéMON's ability.\p"
	.string "Such blasphemy!\p"
	.string "POKéMON are sacred beings that deserve\n"
	.string "the utmost respect!$"

RustboroCity_EventScript_BlondeMan_Text_0:
	.string "I think our gym leader, FALKNER, has\n"
	.string "really lost his edge over the years.\p"
	.string "Maybe it's time for Violet City to find a\n"
	.string "new gym leader.$"

RustboroCity_EventScript_GymGuy_Text_0:
	.string "The gym leader here is a pushover.\p"
	.string "He uses FLYING-type POKéMON, but\n"
	.string "ROCK-type POKéMON and ELECTRIC-type\l"
	.string "POKéMON are so easy to find around\l"
	.string "here.$"

RustboroCity_EventScript_UniversityGuy_Text_0:
	.string "Oh, man, I just don't know what to do.\p"
	.string "I'm failing all of my classes, and don't\n"
	.string "know how to tell my parents they've\l"
	.string "spent so much money for my education,\l"
	.string "but it's all going to waste.\p"
	.string "I guess I can always become a check\n"
	.string "station guard.$"

RustboroCity_EventScript_PCgirl_Text_0:
	.string "I just love the rustic feel of Violet\n"
	.string "City, I could stay here forever.$"

RustboroCity_EventScript_Twin_Text_0:
	.string "Have you been to the Ruins of Alph?\p"
	.string "My friends and I like to play there, but\n"
	.string "the sages always run us off.$"

RustboroCity_EventScript_BenchBoy_Text_0:
	.string "Where are we?\p"
	.string "Is it time for my nap?$"

RustboroCity_EventScript_BenchGirl_Text_0:
	.string "Adamant nature test, select a mon.$"

RustboroCity_EventScript_BenchGirl_Text_1:
	.string "That mon is already Adamant$"

RustboroCity_EventScript_BenchGirl_Text_2:
	.string "nature has changed$"

RustboroCity_EventScript_CancelMonSelect_Text_0:
	.string "Maybe some other time.$"

RustboroCity_EventScript_ShowEgg_Text_0:
	.string "Eggs don't have natures.$"
