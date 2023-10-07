Route114_FossilManiacsHouse_MapScripts::
	.byte 0


Route114_FossilManiacsHouse_EventScript_OldMan::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_AMULET_COIN, Route114_FossilManiacsHouse_EventScript_OldMan_1
	msgbox Route114_FossilManiacsHouse_EventScript_OldMan_Text_1
	giveitem ITEM_AMULET_COIN
	setflag FLAG_RECEIVED_AMULET_COIN
	msgbox Route114_FossilManiacsHouse_EventScript_OldMan_Text_2
	release
	end

Route114_FossilManiacsHouse_EventScript_OldMan_1:
	msgbox Route114_FossilManiacsHouse_EventScript_OldMan_Text_0
	release
	end


Route114_FossilManiacsHouse_EventScript_OldMan_Text_0:
	.string "Have you been making good use of my old\n"
	.string "Amulet Coin?$"

Route114_FossilManiacsHouse_EventScript_OldMan_Text_1:
	.string "You know, I was a pretty good TRAINER\n"
	.string "back in my day.\p"
	.string "This little coin helped me get to where\n"
	.string "I am today, but I don't really have much\l"
	.string "use for it anymore...$"

Route114_FossilManiacsHouse_EventScript_OldMan_Text_2:
	.string "Let one of your POKéMON hold onto that\n"
	.string "Amulet Coin, and you will earn more\l"
	.string "money from trainer battles.\p"
	.string "Needless to say, that POKéMON has to\n"
	.string "enter the battle.$"
