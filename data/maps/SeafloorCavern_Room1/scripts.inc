SeafloorCavern_Room1_MapScripts::
	.byte 0

SeafloorCavern_Room1_Text_Grunt1Intro:
	.string "We don't need a kid around!\n"
	.string "Go on home already!$"

SeafloorCavern_Room1_Text_Grunt1Defeat:
	.string "I want to go home…$"

SeafloorCavern_Room1_Text_Grunt1PostBattle:
	.string "I want to get a promotion so I can\n"
	.string "boss around the GRUNTS…$"

SeafloorCavern_Room1_Text_Grunt2Intro:
	.string "That submarine… It's tiny inside.\n"
	.string "I'm sore all over!$"

SeafloorCavern_Room1_Text_Grunt2Defeat:
	.string "Losing makes me sore!$"

SeafloorCavern_Room1_Text_Grunt2PostBattle:
	.string "That submarine we jacked, man,\n"
	.string "it's brutal as a ride.\l"
	.string "It's way too tight in there!$"

SeafloorCavern_Room1_EventScript_Moltres::
	lock
	waitse
	playmoncry SPECIES_MOLTRES, CRY_MODE_NORMAL
	msgbox SeafloorCavern_Room1_EventScript_Moltres_Text_0
	waitmessage
	waitmoncry
	setwildbattle SPECIES_MOLTRES, 50
	dowildbattle
	removeobject 4
	setflag FLAG_CAUGHT_MOLTRES
	release
	end


SeafloorCavern_Room1_EventScript_Moltres_Text_0:
	.string "Gyaoo!$"
