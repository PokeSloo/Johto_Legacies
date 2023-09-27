AlteringCave_MapScripts::
	.byte 0


AlteringCave_EventScript_Guard::
	msgbox AlteringCave_EventScript_Guard_Text_0, MSGBOX_NPC
	end


AlteringCave_EventScript_Woman::
	msgbox AlteringCave_EventScript_Woman_Text_0, MSGBOX_NPC
	end


AlteringCave_EventScript_Guard_Text_0:
	.string "Ilex Forest is big. Be careful!\n"
	.string "Don't get lost.$"

AlteringCave_EventScript_Woman_Text_0:
	.string "The forest is watched over by its\n"
	.string "protector.\p"
	.string "Stay out of mischief!$"
