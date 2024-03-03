SootopolisCity_House1_MapScripts::
	.byte 0

SootopolisCity_House1_EventScript_BrickBreakBlackBelt::
	msgbox SootopolisCity_House1_Text_ExplainBrickBreak, MSGBOX_NPC
	end

SootopolisCity_House1_EventScript_Kecleon::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_POOCHYENA, CRY_MODE_NORMAL
	msgbox SootopolisCity_House1_Text_Kecleon, MSGBOX_DEFAULT
	waitmoncry
	release
	end

SootopolisCity_House1_Text_ExplainBrickBreak:
	.string "My gramps in Darkoal Town keeps telling\n"
	.string "me he's looking for the ultimate\l"
	.string "disciple to train, but he refuses to\l"
	.string "train me.\p"
	.string "I guess I just don't have what it takes.$"

SootopolisCity_House1_Text_Kecleon:
	.string "POOCHYENA: Puu puhyaah.$"

