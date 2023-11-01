MauvilleCity_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, MauvilleCity_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

MauvilleCity_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	setflag FLAG_VISITED_MAUVILLE_CITY
	setflag FLAG_SYS_TV_START
	end


MauvilleCity_EventScript_CitySign::
	msgbox MauvilleCity_EventScript_CitySign_Text_0, MSGBOX_SIGN
	end


MauvilleCity_EventScript_BurnedTowerSign::
	msgbox MauvilleCity_EventScript_BurnedTowerSign_Text_0, MSGBOX_SIGN
	end


MauvilleCity_EventScript_BellTowerSign::
	msgbox MauvilleCity_EventScript_BellTowerSign_Text_0, MSGBOX_SIGN
	end


MauvilleCity_EventScript_DanceTheaterSign::
	msgbox MauvilleCity_EventScript_DanceTheaterSign_Text_0, MSGBOX_SIGN
	end


MauvilleCity_EventScript_BurnedTowerKid::
	msgbox MauvilleCity_EventScript_BurnedTowerKid_Text_0, MSGBOX_NPC
	end


MauvilleCity_EventScript_Tourist::
	msgbox MauvilleCity_EventScript_Tourist_Text_0, MSGBOX_NPC
	end


MauvilleCity_EventScript_BlackHairBoy::
	msgbox MauvilleCity_EventScript_BlackHairBoy_Text_0, MSGBOX_NPC
	end


MauvilleCity_EventScript_RichKid::
	lock
	faceplayer
	goto_if_set FLAG_HIDE_ECRUTEAK_PHOENIX, MauvilleCity_EventScript_RichKid_1
	msgbox MauvilleCity_EventScript_RichKid_Text_1
	release
	end

MauvilleCity_EventScript_RichKid_1:
	msgbox MauvilleCity_EventScript_RichKid_Text_0
	release
	end


MauvilleCity_EventScript_GymNerd::
	msgbox MauvilleCity_EventScript_GymNerd_Text_0, MSGBOX_NPC
	end


MauvilleCity_EventScript_KimonoGirl::
	lock
	faceplayer
	goto_if_set FLAG_HIDE_ECRUTEAK_PHOENIX, MauvilleCity_EventScript_KimonoGirl_1
	msgbox MauvilleCity_EventScript_KimonoGirl_Text_1
	release
	end

MauvilleCity_EventScript_KimonoGirl_1:
	msgbox MauvilleCity_EventScript_KimonoGirl_Text_0
	release
	end


MauvilleCity_EventScript_CitySign_Text_0:
	.string "ECRUTEAK CITY\n"
	.string "“A Historical City.”$"

MauvilleCity_EventScript_BurnedTowerSign_Text_0:
	.string "BURNED TOWER\n"
	.string "It was destroyed by a mysterious fire.\p"
	.string "Please stay away, as it is unsafe.$"

MauvilleCity_EventScript_BellTowerSign_Text_0:
	.string "BARRIER STATION TO BELL TOWER\n"
	.string "No Trespassing by the Unworthy.$"

MauvilleCity_EventScript_DanceTheaterSign_Text_0:
	.string "ECRUTEAK DANCE THEATER$"

MauvilleCity_EventScript_BurnedTowerKid_Text_0:
	.string "Burned Tower? Historical significance?\p"
	.string "Big deal! Why do I have to write a school\n"
	.string "paper on this stupid place?$"

MauvilleCity_EventScript_Tourist_Text_0:
	.string "I wanted to see the Bell Tower while I\n"
	.string "was here touring with my friends, but\l"
	.string "the jerks inside told me I'm unworthy!\p"
	.string "Don't they know who I am?\p"
	.string "I'm going to write them the nastiest\n"
	.string "review!$"

MauvilleCity_EventScript_BlackHairBoy_Text_0:
	.string "Have you been to Route 42 recently?\p"
	.string "It's been snowing non-stop that way,\n"
	.string "but luckily Ecruteak is still clear.$"

MauvilleCity_EventScript_RichKid_Text_0:
	.string "The Kimono Girls in the Dance Theater\n"
	.string "seem much happier.\p"
	.string "I'm not sure what happened, but it's\n"
	.string "much more fun now!$"

MauvilleCity_EventScript_RichKid_Text_1:
	.string "I went to the Dance Theater, but all of\n"
	.string "the Kimono Girls seemed stressed for\l"
	.string "some reason.\p"
	.string "It's kind of depressing.$"

MauvilleCity_EventScript_GymNerd_Text_0:
	.string "The gym leader here uses WATER-type\n"
	.string "POKéMON, but don't expect a calm\l"
	.string "ripple.\p"
	.string "WATARU will crash down on you like a\n"
	.string "roaring waterfall!$"

MauvilleCity_EventScript_KimonoGirl_Text_0:
	.string "Welcome to the Ecruteak Dance Theater!\p"
	.string "And thank you so much for running off\n"
	.string "those thugs!$"

MauvilleCity_EventScript_KimonoGirl_Text_1:
	.string "Welcome to the Ecruteak Dance Theater!\p"
	.string "Please come in and enjoy yourself...\p"
	.string "...\p"
	.string "Please, you have to help us...\p"
	.string "A group of thugs have taken over our\n"
	.string "Dance Theater, there's a secret switch\l"
	.string "hidden somewhere inside!\p"
	.string "Oops, I shouldn't have spoken so loud.\p"
	.string "They might hear me...$"
