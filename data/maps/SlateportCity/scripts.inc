SlateportCity_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, SlateportCity_MapScripts_MAP_SCRIPT_ON_TRANSITION
	map_script MAP_SCRIPT_ON_LOAD, SlateportCity_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

SlateportCity_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	setflag FLAG_VISITED_SLATEPORT_CITY
	end

SlateportCity_MapScripts_MAP_SCRIPT_ON_LOAD:
	goto_if_set FLAG_GOLDENROD_SEWER_OPEN, SlateportCity_MapScripts_MAP_SCRIPT_ON_LOAD_2
	end

SlateportCity_MapScripts_MAP_SCRIPT_ON_LOAD_2:
	setmetatile 46, 25, 0x277, TRUE
	setmetatile 47, 25, 0x27A, TRUE
	return


SlateportCity_EventScript_CitySign::
	msgbox SlateportCity_EventScript_CitySign_Text_0, MSGBOX_SIGN
	end


SlateportCity_EventScript_FlowerShopSign::
	msgbox SlateportCity_EventScript_FlowerShopSign_Text_0, MSGBOX_SIGN
	end


SlateportCity_EventScript_HyperloopSign::
	msgbox SlateportCity_EventScript_HyperloopSign_Text_0, MSGBOX_SIGN
	end


SlateportCity_EventScript_BikeShopSign::
	msgbox SlateportCity_EventScript_BikeShopSign_Text_0, MSGBOX_SIGN
	end


SlateportCity_EventScript_CasinoSign::
	msgbox SlateportCity_EventScript_CasinoSign_Text_0, MSGBOX_SIGN
	end


SlateportCity_EventScript_TopCook::
	msgbox SlateportCity_EventScript_TopCook_Text_0, MSGBOX_NPC
	end


SlateportCity_EventScript_GymFatMan::
	lock
	faceplayer
	goto_if_set FLAG_BADGE03_GET, SlateportCity_EventScript_GymFatMan_2
	msgbox SlateportCity_EventScript_GymFatMan_Text_1
	release
	end

SlateportCity_EventScript_GymFatMan_2:
	msgbox SlateportCity_EventScript_GymFatMan_Text_0
	release
	end


SlateportCity_EventScript_FlowerWoman::
	msgbox SlateportCity_EventScript_FlowerWoman_Text_0, MSGBOX_NPC
	end


SlateportCity_EventScript_UnreachableWoman::
	msgbox SlateportCity_EventScript_UnreachableWoman_Text_0, MSGBOX_NPC
	end


SlateportCity_EventScript_SewerBaldMan::
	msgbox SlateportCity_EventScript_SewerBaldMan_Text_0, MSGBOX_NPC
	end


SlateportCity_EventScript_HyperloopRichBoy::
	msgbox SlateportCity_EventScript_HyperloopRichBoy_Text_0, MSGBOX_NPC
	end


SlateportCity_EventScript_HyperloopBlondeGuy::
	msgbox SlateportCity_EventScript_HyperloopBlondeGuy_Text_0, MSGBOX_NPC
	end


SlateportCity_EventScript_GoldenvineSailor::
	msgbox SlateportCity_EventScript_GoldenvineSailor_Text_0, MSGBOX_NPC
	end


SlateportCity_EventScript_GoldenvineNerd::
	lock
	faceplayer
	goto_if_set FLAG_GOLDENROD_SEWER_OPEN, SlateportCity_EventScript_GoldenvineNerd_2
	msgbox SlateportCity_EventScript_GoldenvineNerd_Text_1
	release
	end

SlateportCity_EventScript_GoldenvineNerd_2:
	msgbox SlateportCity_EventScript_GoldenvineNerd_Text_0
	release
	end


SlateportCity_EventScript_BenchGirl::
	msgbox SlateportCity_EventScript_BenchGirl_Text_0, MSGBOX_NPC
	end


SlateportCity_EventScript_BenchMan::
	msgbox SlateportCity_EventScript_BenchMan_Text_0, MSGBOX_NPC
	end


SlateportCity_EventScript_AlleySailor::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_COIN_CASE, SlateportCity_EventScript_AlleySailor_2
	msgbox SlateportCity_EventScript_AlleySailor_Text_1
	giveitem ITEM_COIN_CASE
	setflag FLAG_RECEIVED_COIN_CASE
	msgbox SlateportCity_EventScript_AlleySailor_Text_2
	release
	end

SlateportCity_EventScript_AlleySailor_2:
	msgbox SlateportCity_EventScript_AlleySailor_Text_0
	release
	end


SlateportCity_EventScript_AlleyBaldMan::
	msgbox SlateportCity_EventScript_AlleyBaldMan_Text_0, MSGBOX_NPC
	end


SlateportCity_EventScript_CasinoGirl::
	msgbox SlateportCity_EventScript_CasinoGirl_Text_0, MSGBOX_NPC
	end


SlateportCity_EventScript_MartWoman::
	msgbox SlateportCity_EventScript_MartWoman_Text_0, MSGBOX_NPC
	end


SlateportCity_EventScript_SewerGirl::
	msgbox SlateportCity_EventScript_SewerGirl_Text_0, MSGBOX_NPC
	end


SlateportCity_EventScript_BikeShopBlonde::
	msgbox SlateportCity_EventScript_BikeShopBlonde_Text_0, MSGBOX_NPC
	end


SlateportCity_EventScript_BikeShopFatMan::
	msgbox SlateportCity_EventScript_BikeShopFatMan_Text_0, MSGBOX_NPC
	end


SlateportCity_EventScript_MartEmployee::
	msgbox SlateportCity_EventScript_MartEmployee_Text_0, MSGBOX_NPC
	end


SlateportCity_EventScript_BottomBitch::
	msgbox SlateportCity_EventScript_BottomBitch_Text_0, MSGBOX_NPC
	end


SlateportCity_EventScript_CitySign_Text_0:
	.string "GOLDENROD CITY\n"
	.string "“A Happening Big City.”$"

SlateportCity_EventScript_FlowerShopSign_Text_0:
	.string "GOLDENROD FLOWER SHOP\n"
	.string "A Small Shop Providing Lots of Beauty.$"

SlateportCity_EventScript_HyperloopSign_Text_0:
	.string "JOHTO-KANTO HYPERLOOP\n"
	.string "Still under construction.$"

SlateportCity_EventScript_BikeShopSign_Text_0:
	.string "GOLDENROD BIKE SHOP\n"
	.string "The World is a Cycling Path!$"

SlateportCity_EventScript_CasinoSign_Text_0:
	.string "GOLDENROD CITY GAME CORNER\n"
	.string "A Safe and Sound Playground!$"

SlateportCity_EventScript_TopCook_Text_0:
	.string "This city just doesn't stop, I need to\n"
	.string "go on vacation.\p"
	.string "Apricotta Beach is supposed to be nice\n"
	.string "this time of year.$"

SlateportCity_EventScript_GymFatMan_Text_0:
	.string "Wow, you actually beat Whitney!?\p"
	.string "I saw it all on TV! She really had you on\n"
	.string "the ropes for a while there!$"

SlateportCity_EventScript_GymFatMan_Text_1:
	.string "They'll be recording another episode of\n"
	.string "The Challenge soon.\p"
	.string "It's not like anyone has a chance of\n"
	.string "beating Whitney, but I still watch\l"
	.string "every season!$"

SlateportCity_EventScript_FlowerWoman_Text_0:
	.string "You there!\p"
	.string "Why not stop by our flower shop for a\n"
	.string "quick look around?\p"
	.string "We sell specialty nectars as well!$"

SlateportCity_EventScript_UnreachableWoman_Text_0:
	.string "Cheaters never win, kiddo.$"

SlateportCity_EventScript_SewerBaldMan_Text_0:
	.string "Can you believe I got kicked out of the\n"
	.string "POKéMON Fan Club?\p"
	.string "Apperently there's a limit to how much\n"
	.string "you're allowed to love POKéMON.$"

SlateportCity_EventScript_HyperloopRichBoy_Text_0:
	.string "They tore down the Magnet Train to\n"
	.string "build this new Hyperloop, but now\l"
	.string "there's no quick way to get to Kanto!\p"
	.string "The city council really didn't think this\n"
	.string "one through.$"

SlateportCity_EventScript_HyperloopBlondeGuy_Text_0:
	.string "The Hyperloop has been under\n"
	.string "construction for so long, I don't think\l"
	.string "they'll ever finish it!$"

SlateportCity_EventScript_GoldenvineSailor_Text_0:
	.string "The Goldenvine Sea was recently opened\n"
	.string "up for public access, but take caution,\l"
	.string "those waters are not for the faint of\l"
	.string "heart.$"

SlateportCity_EventScript_GoldenvineNerd_Text_0:
	.string "I can't believe I missed Whitney on the\n"
	.string "Night and Dave Show!\p"
	.string "Maybe they'll let me in next time if I\n"
	.string "look really desparate.$"

SlateportCity_EventScript_GoldenvineNerd_Text_1:
	.string "I heard Whitney will be on the Night and\n"
	.string "Dave Show tonight.\p"
	.string "I wish I could afford tickets, I can't\n"
	.string "get enough of Whitney!$"

SlateportCity_EventScript_BenchGirl_Text_0:
	.string "The breeze from the Goldenvine Sea is\n"
	.string "nice this time of year, I could sit here\l"
	.string "all day.$"

SlateportCity_EventScript_BenchMan_Text_0:
	.string "Although it's winter, the sea breeze\n"
	.string "keeps Goldenrod City's temperatures\l"
	.string "nice and moderate.$"

SlateportCity_EventScript_AlleySailor_Text_0:
	.string "Argh, how has that old Coin Case been\n"
	.string "treatin' you?\p"
	.string "Hopefully better than it's treated me.$"

SlateportCity_EventScript_AlleySailor_Text_1:
	.string "Argh! I lost all me money in that\n"
	.string "blasted Game Corner!\p"
	.string "I belong to the seas, not some fancy\n"
	.string "city!\p"
	.string "Here, you take this. Me days of gambling\n"
	.string "are over...$"

SlateportCity_EventScript_AlleySailor_Text_2:
	.string "Maybe you'll have better luck than I\n"
	.string "have...$"

SlateportCity_EventScript_AlleyBaldMan_Text_0:
	.string "The groomer here said she can't do\n"
	.string "anything with my hair!\p"
	.string "This discrimination is just appalling!$"

SlateportCity_EventScript_CasinoGirl_Text_0:
	.string "You there! Come on in and enjoy\n"
	.string "yourself!\p"
	.string "The Goldenrod City Game Corner is open\n"
	.string "to everyone of all ages!\p"
	.string "We don't care as long as you have money!$"

SlateportCity_EventScript_MartWoman_Text_0:
	.string "I really need to get a handle on my\n"
	.string "shopping, but I just can't help myself!\p"
	.string "Besides, my husband's money won't spend\n"
	.string "itself!$"

SlateportCity_EventScript_SewerGirl_Text_0:
	.string "I've been hearing a lot of construction\n"
	.string "sounds coming from the sewers lately, I\l"
	.string "wonder what they've been working on.$"

SlateportCity_EventScript_BikeShopBlonde_Text_0:
	.string "Have you heard of the legendary bird\n"
	.string "trio in Kanto?\p"
	.string "Rumor has it they've been spotted near\n"
	.string "the Whirl Islands.\p"
	.string "I wonder what drove them away from\n"
	.string "Kanto.$"

SlateportCity_EventScript_BikeShopFatMan_Text_0:
	.string "All of the bikes I've bought from this\n"
	.string "place have broken, they must be\l"
	.string "defective...$"

SlateportCity_EventScript_MartEmployee_Text_0:
	.string "Come in an shop around!\p"
	.string "We sell evolution stones and other\n"
	.string "items nobody else in Johto has!$"

SlateportCity_EventScript_BottomBitch_Text_0:
	.string "Big cities like this always make me\n"
	.string "dizzy, they're such a sensory overload!$"
