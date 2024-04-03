MossdeepCity_House1_MapScripts::
	.byte 0


MossdeepCity_House1_EventScript_Cowgirl::
	msgbox MossdeepCity_House1_EventScript_Cowgirl_Text_0, MSGBOX_NPC
	end


MossdeepCity_House1_EventScript_BugCatcher::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_SCIZORITE, MossdeepCity_House1_EventScript_BugCatcher_1
	msgbox MossdeepCity_House1_EventScript_BugCatcher_Text_1, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq MossdeepCity_House1_EventScript_BugCatcher_4
	checkitem ITEM_CHIPPED_POT
	compare VAR_RESULT, TRUE
	goto_if_eq MossdeepCity_House1_EventScript_BugCatcher_7
	msgbox MossdeepCity_House1_EventScript_BugCatcher_Text_5
	release
	end

MossdeepCity_House1_EventScript_BugCatcher_1:
	msgbox MossdeepCity_House1_EventScript_BugCatcher_Text_0
	release
	end

MossdeepCity_House1_EventScript_BugCatcher_4:
	msgbox MossdeepCity_House1_EventScript_BugCatcher_Text_2
	release
	end

MossdeepCity_House1_EventScript_BugCatcher_7:
	msgbox MossdeepCity_House1_EventScript_BugCatcher_Text_3
	removeitem ITEM_CHIPPED_POT, 1
	giveitem ITEM_SCIZORITE
	msgbox MossdeepCity_House1_EventScript_BugCatcher_Text_4
	setflag FLAG_RECEIVED_SCIZORITE
	release
	end


MossdeepCity_House1_EventScript_Cowgirl_Text_0:
	.string "The cost of living is crazy high on this\n"
	.string "island.\p"
	.string "I love living here, but it definitely\n"
	.string "comes at a price.$"

MossdeepCity_House1_EventScript_BugCatcher_Text_0:
	.string "I hope you put that Scizorite to good\n"
	.string "use.\p"
	.string "Thanks to you, I finally got an antique\n"
	.string "Polteageist!$"

MossdeepCity_House1_EventScript_BugCatcher_Text_1:
	.string "Just my luck.\p"
	.string "I finally caught a Sinistea with a stamp\n"
	.string "of authenticity, but I'm flat broke.\p"
	.string "I need a Chipped Pot to evolve my\n"
	.string "Sinistea, but they're way too\l"
	.string "expensive!\p"
	.string "Hey, if you happen to have a Chipped\n"
	.string "Pot, then I'll trade you for a Scizorite.\p"
	.string "They're super rare, and I don't think\n"
	.string "you'll find one anywhere else.\p"
	.string "So how about it, do we have a deal?$"

MossdeepCity_House1_EventScript_BugCatcher_Text_2:
	.string "That's too bad.\p"
	.string "I guess I'll have to start saving up for\n"
	.string "it.$"

MossdeepCity_House1_EventScript_BugCatcher_Text_3:
	.string "Really!? You'll trade me?\p"
	.string "That's great!$"

MossdeepCity_House1_EventScript_BugCatcher_Text_4:
	.string "I don't know how long it would have\n"
	.string "taken me to save up for one.$"

MossdeepCity_House1_EventScript_BugCatcher_Text_5:
	.string "Hey, you don't have a Chipped Pot!\p"
	.string "Quit messing around with me.$"
