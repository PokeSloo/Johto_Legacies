SkyPillar_Top_MapScripts::
	.byte 0


SkyPillar_Top_EventScript_Ampharos::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_LEFTOVERS, SkyPillar_Top_EventScript_Ampharos_1
	waitse
	playmoncry SPECIES_AMPHAROS, CRY_MODE_NORMAL
	applymovement 1, LittlerootTown_BrendansHouse_1F_Heart
	msgbox SkyPillar_Top_EventScript_Ampharos_Text_0
	waitmovement 0
	waitmoncry
	giveitem ITEM_LEFTOVERS
	setflag FLAG_RECEIVED_LEFTOVERS
	release
	end

SkyPillar_Top_EventScript_Ampharos_1:
	waitse
	playmoncry SPECIES_AMPHAROS, CRY_MODE_NORMAL
	applymovement 1, LittlerootTown_BrendansHouse_1F_Heart
	msgbox SkyPillar_Top_EventScript_Ampharos_Text_0
	waitmovement 0
	waitmoncry
	release
	end


SkyPillar_Top_EventScript_Ampharos_Text_0:
	.string "AMPHAROS: Ampha! Ampha!$"
