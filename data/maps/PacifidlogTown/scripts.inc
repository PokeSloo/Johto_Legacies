PacifidlogTown_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, PacifidlogTown_OnTransition
	.byte 0

PacifidlogTown_OnTransition:
	setflag FLAG_VISITED_PACIFIDLOG_TOWN
	end

PacifidlogTown_EventScript_NinjaBoy::
	msgbox PacifidlogTown_Text_NeatHousesOnWater, MSGBOX_NPC
	end

PacifidlogTown_EventScript_Girl::
	msgbox PacifidlogTown_Text_FastRunningCurrent, MSGBOX_NPC
	end

PacifidlogTown_EventScript_Fisherman::
	msgbox PacifidlogTown_Text_SkyPillarTooScary, MSGBOX_NPC
	end

PacifidlogTown_EventScript_TownSign::
	msgbox PacifidlogTown_Text_TownSign, MSGBOX_SIGN
	end

PacifidlogTown_Text_FastRunningCurrent:
	.string "Luckily for me, my kids love playing at\n"
	.string "the beach.\p"
	.string "I can keep them entertained and get a\n"
	.string "tan at the same time!$"

PacifidlogTown_Text_NeatHousesOnWater:
	.string "I built a huge sand castle, but a group\n"
	.string "of KRABBY popped out from underneath\l"
	.string "and destroyed it!$"

PacifidlogTown_Text_SkyPillarTooScary:
	.string "Don't tell my wife, but I snuck off to do\n"
	.string "a little fishing while we're here\l"
	.string "visiting her father in the retirement\l"
	.string "home.$"

PacifidlogTown_Text_TownSign:
	.string "APRICOTTA BEACH\p"
	.string "“The relaxing tropical beach town.”$"

PacifidlogTown_EventScript_HarborSign::
	msgbox PacifidlogTown_EventScript_HarborSign_Text_0, MSGBOX_SIGN
	end


PacifidlogTown_EventScript_CaveSign::
	msgbox PacifidlogTown_EventScript_CaveSign_Text_0, MSGBOX_SIGN
	end


PacifidlogTown_EventScript_RetirementSign::
	msgbox PacifidlogTown_EventScript_RetirementSign_Text_0, MSGBOX_SIGN
	end


PacifidlogTown_EventScript_TuberF::
	msgbox PacifidlogTown_EventScript_TuberF_Text_0, MSGBOX_NPC
	end


PacifidlogTown_EventScript_OldWoman::
	msgbox PacifidlogTown_EventScript_OldWoman_Text_0, MSGBOX_NPC
	end


PacifidlogTown_EventScript_Artist::
	msgbox PacifidlogTown_EventScript_Artist_Text_0, MSGBOX_NPC
	end


PacifidlogTown_EventScript_Beauty::
	msgbox PacifidlogTown_EventScript_Beauty_Text_0, MSGBOX_NPC
	end


PacifidlogTown_EventScript_Tourist::
	msgbox PacifidlogTown_EventScript_Tourist_Text_0, MSGBOX_NPC
	end


PacifidlogTown_EventScript_HarborSign_Text_0:
	.string "APRICOTTA BEACH HARBOR$"

PacifidlogTown_EventScript_CaveSign_Text_0:
	.string "SEARED CAVE$"

PacifidlogTown_EventScript_RetirementSign_Text_0:
	.string "APRICOTTA BEACH RETIREMENT COMMUNITY$"

PacifidlogTown_EventScript_TuberF_Text_0:
	.string "Look! That man's head is so shiny!\p"
	.string "I can see myself in it!$"

PacifidlogTown_EventScript_OldWoman_Text_0:
	.string "Hmm... You're not one of mine are you?\p"
	.string "No, I don't think I had any red-heads.$"

PacifidlogTown_EventScript_Artist_Text_0:
	.string "'Tis a thing of beauty, this town.\p"
	.string "Whenever I need a little inspiration, I\n"
	.string "come to this spot and gaze upon the\l"
	.string "beach.$"

PacifidlogTown_EventScript_Beauty_Text_0:
	.string "The beach is nice, but don't forget to\n"
	.string "wear sunscreen.\p"
	.string "The damaging rays from the sun can\n"
	.string "make you look much older!$"

PacifidlogTown_EventScript_Tourist_Text_0:
	.string "Ugh, this beach is too hot, and some\n"
	.string "sand got in my shorts!\p"
	.string "This is just awful!$"
