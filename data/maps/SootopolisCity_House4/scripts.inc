SootopolisCity_House4_MapScripts::
	.byte 0

SootopolisCity_House4_EventScript_Man::
	msgbox SootopolisCity_House4_Text_AncientTreasuresWaitingInSea, MSGBOX_NPC
	end

SootopolisCity_House4_EventScript_Woman::
	msgbox SootopolisCity_House4_Text_StrollUnderwaterWithPokemon, MSGBOX_SIGN
	end

SootopolisCity_House4_EventScript_Azumarill::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_WINGULL, CRY_MODE_NORMAL
	msgbox SootopolisCity_House4_Text_Azumarill, MSGBOX_DEFAULT
	waitmoncry
	release
	end

SootopolisCity_House4_Text_AncientTreasuresWaitingInSea:
	.string "Ugh, I don't know how our daughter\n"
	.string "convinced me to get a pet bird POKéMON.\p"
	.string "Even worse, she's never home, and we\n"
	.string "have to take care of it.$"

SootopolisCity_House4_Text_StrollUnderwaterWithPokemon:
	.string "WINGULL! You get down from there!$"

SootopolisCity_House4_Text_Azumarill:
	.string "WINGULL: Gullaa!$"

