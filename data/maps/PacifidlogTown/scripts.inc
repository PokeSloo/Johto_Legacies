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


PacifidlogTown_EventScript_Me::
	lock
	faceplayer
	goto_if_set FLAG_FARAWAY_ISLAND_AVAILABLE, PacifidlogTown_EventScript_Me_1
	goto_if_set FLAG_DEFEATED_RED, PacifidlogTown_EventScript_Me_2
	goto_if_set FLAG_BIRTH_ISLAND_AVAILABLE, PacifidlogTown_EventScript_Me_3
	msgbox PacifidlogTown_EventScript_Me_Text_1
	waitmessage
	closemessage
	special DoDomeConfetti
	playse SE_APPLAUSE
	waitse
	msgbox PacifidlogTown_EventScript_Me_Text_2
	waitmessage
	playfanfare MUS_OBTAIN_ITEM
	waitfanfare
	msgbox PacifidlogTown_EventScript_Me_Text_7
	setflag FLAG_BIRTH_ISLAND_AVAILABLE
	release
	end

PacifidlogTown_EventScript_Me_1:
	msgbox PacifidlogTown_EventScript_Me_Text_0
	release
	end

PacifidlogTown_EventScript_Me_2:
	goto_if_unset FLAG_BIRTH_ISLAND_AVAILABLE, PacifidlogTown_EventScript_Me_9
	msgbox PacifidlogTown_EventScript_Me_Text_4
	waitmessage
	playfanfare MUS_OBTAIN_ITEM
	waitfanfare
	msgbox PacifidlogTown_EventScript_Me_Text_5
	setflag FLAG_FARAWAY_ISLAND_AVAILABLE
	release
	end

PacifidlogTown_EventScript_Me_3:
	msgbox PacifidlogTown_EventScript_Me_Text_6
	release
	end

PacifidlogTown_EventScript_Me_9:
	msgbox PacifidlogTown_EventScript_Me_Text_1
	waitmessage
	closemessage
	special DoDomeConfetti
	playse SE_APPLAUSE
	waitse
	msgbox PacifidlogTown_EventScript_Me_Text_2
	waitmessage
	playfanfare MUS_OBTAIN_ITEM
	waitfanfare
	msgbox PacifidlogTown_EventScript_Me_Text_3
	setflag FLAG_BIRTH_ISLAND_AVAILABLE
	setflag FLAG_FARAWAY_ISLAND_AVAILABLE
	release
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

PacifidlogTown_EventScript_Me_Text_0:
	.string "Yo, {PLAYER}, I hope you've enjoyed my\n"
	.string "game.\p"
	.string "Have you tried the contest hall, and\n"
	.string "battle tower yet?\p"
	.string "I updated the POKéMON there too, you\n"
	.string "know.\p"
	.string "Welp, take it easy, {PLAYER}.$"

PacifidlogTown_EventScript_Me_Text_1:
	.string "I know what you must be thinking, “Who\n"
	.string "is this strange, bald man, why did I\l"
	.string "stop to talk to him, and why is he so\l"
	.string "attractive?”\p"
	.string "Ok, maybe not that last part.\p"
	.string "No, I'm not Saitama.\p"
	.string "I'm Sloo, I created this hack!\p"
	.string "I spent a lot of time and effort making\n"
	.string "this game, so I'm taking a well deserved\l"
	.string "vacation.\p"
	.string "By the way, I would like to personally\n"
	.string "congratulate you on completing the\l"
	.string "main story!$"

PacifidlogTown_EventScript_Me_Text_2:
	.string "As a reward for getting this far, I will\n"
	.string "grant you access to Birth Island!$"

PacifidlogTown_EventScript_Me_Text_3:
	.string "Just speak to the ship captain at the\n"
	.string "harbor either here, or in Olivine City.\p"
	.string "Oh, and I see you've already defeated\n"
	.string "the POKéMON League a second time!\p"
	.string "In that case, I will give you another\n"
	.string "reward!\p"
	.string "I'll grant you access to Faraway Island\n"
	.string "as well.\p"
	.string "I hope you've enjoyed playing my game!\p"
	.string "Until next time, {PLAYER}.$"

PacifidlogTown_EventScript_Me_Text_4:
	.string "How's it going, {PLAYER}?\p"
	.string "Hey! I see you defeated Red.\p"
	.string "Congrats! I'm sure that wasn't an easy\n"
	.string "battle.\p"
	.string "As promised, I will give you another\n"
	.string "reward.\p"
	.string "Talk to one of the ship captains, and\n"
	.string "they'll now take you to Faraway Island!$"

PacifidlogTown_EventScript_Me_Text_5:
	.string "I also added a little something extra\n"
	.string "there for you.\p"
	.string "Until next time, {PLAYER}.$"

PacifidlogTown_EventScript_Me_Text_6:
	.string "How's it going, {PLAYER}?\p"
	.string "Are you still enjoying my game?\p"
	.string "Remember, if you defeat the POKéMON\n"
	.string "League a second time, I will give you\l"
	.string "another reward.\p"
	.string "Keep at it!$"

PacifidlogTown_EventScript_Me_Text_7:
	.string "Just speak to the ship captain at the\n"
	.string "harbor either here, or in Olivine City.\p"
	.string "Oh, and if you manage to defeat the\n"
	.string "POKéMON League a second time, I will\l"
	.string "give you another reward!\p"
	.string "Of course, there's still quite a lot\n"
	.string "you'll have to do before the next\l"
	.string "Champion shows up.\p"
	.string "Well, good luck.\p"
	.string "I hope you've enjoyed playing so far,\n"
	.string "and I hope you will enjoy the rest of\l"
	.string "the game!$"
