ShoalCave_HighTideInnerRoom_MapScripts::
	.byte 0


ShoalCave_HighTideInnerRoom_EventScript_Mewtwo::
	lock
	waitse
	playmoncry SPECIES_MEWTWO, CRY_MODE_NORMAL
	msgbox ShoalCave_HighTideInnerRoom_EventScript_Mewtwo_Text_0
	waitmessage
	waitmoncry
	setwildbattle SPECIES_MEWTWO, 70
	dowildbattle
	removeobject 1
	setflag FLAG_COMPLETED_MEWTWO_EVENT
	delay 30
	waitse
	playmoncry SPECIES_CELEBI, CRY_MODE_NORMAL
	waitmoncry
	delay 30
	fadescreen FADE_TO_WHITE
	playbgm MUS_RAYQUAZA_APPEARS, FALSE
	checkplayergender
	compare VAR_RESULT, MALE
	goto_if_eq ShoalCave_HighTideInnerRoom_EventScript_Mewtwo_2
	compare VAR_RESULT, FEMALE
	goto_if_eq ShoalCave_HighTideInnerRoom_EventScript_Mewtwo_3
ShoalCave_HighTideInnerRoom_EventScript_Mewtwo_1:
	setwarp MAP_FARAWAY_ISLAND_ENTRANCE, 13, 5
	special TimeTravelForwardClock
	waitstate
	fadedefaultbgm
	release
	end

ShoalCave_HighTideInnerRoom_EventScript_Mewtwo_2:
	setvar VAR_0x8004, MALE
	goto ShoalCave_HighTideInnerRoom_EventScript_Mewtwo_1

ShoalCave_HighTideInnerRoom_EventScript_Mewtwo_3:
	setvar VAR_0x8004, FEMALE
	goto ShoalCave_HighTideInnerRoom_EventScript_Mewtwo_1


ShoalCave_HighTideInnerRoom_EventScript_Mewtwo_Text_0:
	.string "Mew!$"
