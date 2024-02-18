PacifidlogTown_House1_MapScripts::
	.byte 0

PacifidlogTown_House1_EventScript_Man::
	msgbox PacifidlogTown_House1_Text_RegiStory, MSGBOX_SIGN
	end

PacifidlogTown_House1_EventScript_Woman::
	msgbox PacifidlogTown_House1_Text_SixDotsOpenThreeDoors, MSGBOX_NPC
	end

PacifidlogTown_House1_Text_RegiStory:
	.string "In the Hoenn region, there are three\n"
	.string "POKéMON that represent the power of\l"
	.string "rock, ice, and steel.\p"
	.string "...\p"
	.string "Wait, this isn't Hoenn...\p"
	.string "...\p"
	.string "Somebody peed in my pants!$"

PacifidlogTown_House1_Text_SixDotsOpenThreeDoors:
	.string "Ugh, I can't deal with this myself.\p"
	.string "Where did that husband of mine run off\n"
	.string "to?$"

