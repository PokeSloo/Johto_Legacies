PetalburgCity_House1_MapScripts::
	.byte 0


PetalburgCity_House1_EventScript_KarateGuy::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_BULKUP_TM, PetalburgCity_House1_EventScript_KarateGuy_1
	msgbox PetalburgCity_House1_EventScript_KarateGuy_Text_1
	waitmessage
	giveitem ITEM_TM08
	setflag FLAG_RECEIVED_BULKUP_TM
	msgbox PetalburgCity_House1_EventScript_KarateGuy_Text_2
	release
	end

PetalburgCity_House1_EventScript_KarateGuy_1:
	msgbox PetalburgCity_House1_EventScript_KarateGuy_Text_0
	release
	end


PetalburgCity_House1_EventScript_Woman::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_MACHO_BRACE, PetalburgCity_House1_EventScript_Woman_1
	msgbox PetalburgCity_House1_EventScript_Woman_Text_1
	waitmessage
	giveitem ITEM_MACHO_BRACE
	setflag FLAG_RECEIVED_MACHO_BRACE
	msgbox PetalburgCity_House1_EventScript_Woman_Text_2
	release
	end

PetalburgCity_House1_EventScript_Woman_1:
	msgbox PetalburgCity_House1_EventScript_Woman_Text_0
	release
	end


PetalburgCity_House1_EventScript_KarateGuy_Text_0:
	.string "Hiyah!\p"
	.string "I think you're starting to look a little\n"
	.string "bulkier...\p"
	.string "Maybe it's just my imagination...$"

PetalburgCity_House1_EventScript_KarateGuy_Text_1:
	.string "Hiyah!\p"
	.string "You're a rather scrawny kid, aren't you?\p"
	.string "Believe it or not, I was even smaller\n"
	.string "than you when I was your age.\p"
	.string "What you need is a good bulk...$"

PetalburgCity_House1_EventScript_KarateGuy_Text_2:
	.string "That may not help you grow, but teach it\n"
	.string "to one of your POKéMON and they'll be\l"
	.string "able to raise their attack and defense\l"
	.string "while in battle!$"

PetalburgCity_House1_EventScript_Woman_Text_0:
	.string "My husband and I used to train under\n"
	.string "Master Lee together.\p"
	.string "In fact, that's where we met each other.$"

PetalburgCity_House1_EventScript_Woman_Text_1:
	.string "Hmm... Your POKéMON look like they could\n"
	.string "use a little extra help with their\l"
	.string "training...$"

PetalburgCity_House1_EventScript_Woman_Text_2:
	.string "That Macho Brace will halve your\n"
	.string "POKéMON'S speed, but in return, they\l"
	.string "will become stronger much faster!$"
