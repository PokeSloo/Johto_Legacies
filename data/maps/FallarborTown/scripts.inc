FallarborTown_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, FallarborTown_OnTransition
	.byte 0

FallarborTown_OnTransition:
	setflag FLAG_VISITED_FALLARBOR_TOWN
	setvar VAR_CONTEST_HALL_STATE, 0
	clearflag FLAG_CONTEST_SKETCH_CREATED
	end

FallarborTown_EventScript_ExpertM::
	msgbox FallarborTown_Text_ShadyCharactersCozmosHome, MSGBOX_NPC
	end

FallarborTown_EventScript_Girl::
	msgbox FallarborTown_Text_MyPreciousAzurill, MSGBOX_NPC
	end

FallarborTown_EventScript_Gentleman::
	msgbox FallarborTown_Text_HaveYouChallengedFlannery, MSGBOX_NPC
	end

FallarborTown_EventScript_GymBlock::
	msgbox FallarborTown_Text_WinterGone, MSGBOX_NPC
	end

FallarborTown_EventScript_Campers::
	msgbox FallarborTown_Text_BlockedRoad, MSGBOX_NPC
	end

FallarborTown_EventScript_Azurill::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_AZURILL, CRY_MODE_WEAK
	msgbox FallarborTown_Text_Azurill, MSGBOX_DEFAULT
	waitmoncry
	release
	end

FallarborTown_EventScript_BattleTentSign::
	msgbox FallarborTown_Text_BattleTentSign, MSGBOX_SIGN
	end

FallarborTown_EventScript_TownSign::
	msgbox FallarborTown_Text_TownSign, MSGBOX_SIGN
	end

FallarborTown_Text_ShadyCharactersCozmosHome:
	.string "Some people hate this snowy weather,\n"
	.string "but I love it.\p"
	.string "It feels good on my old joints.$"

FallarborTown_Text_MyPreciousAzurill:
	.string "Unlike Marill and Azumarill, my little\n"
	.string "Azurill isn't a WATER-type, so I don't\l"
	.string "have to worry about it freezing.$"

FallarborTown_Text_Azurill:
	.string "AZURILL: Azuu...$"

FallarborTown_Text_HaveYouChallengedFlannery:
	.string "I tried to visit the Lake of Rage, but\n"
	.string "the guards wouldn't let me in.\p"
	.string "Huff, I miss the days before they made\n"
	.string "it into a fancy resort.$"

FallarborTown_Text_BattleTentSign:
	.string "MAHOGANY HERBAL MEDICINE STORE$"

FallarborTown_Text_TownSign:
	.string "MAHOGANY TOWN\n"
	.string "“Home of the Ninja”$"

FallarborTown_Text_WinterGone:
	.string "If you're looking for the Gym Leader,\n"
	.string "WINTER, she's gone to Ice Path for some\l"
	.string "training.$"

FallarborTown_Text_BlockedRoad:
	.string "Sorry, but you can't go this way yet.\p"
	.string "We're still clearing off snow from the\n"
	.string "roads.$"

