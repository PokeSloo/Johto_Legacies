SeafloorCavern_Room2_MapScripts::
	.byte 0


SeafloorCavern_Room2_EventScript_Zapdos::
	lock
	waitse
	playmoncry SPECIES_ZAPDOS, CRY_MODE_NORMAL
	msgbox SeafloorCavern_Room2_EventScript_Zapdos_Text_0
	waitmessage
	waitmoncry
	setwildbattle SPECIES_ZAPDOS, 50
	dowildbattle
	removeobject 9
	setflag FLAG_CAUGHT_ZAPDOS
	release
	end


SeafloorCavern_Room2_EventScript_Zapdos_Text_0:
	.string "Gyaoo!$"
