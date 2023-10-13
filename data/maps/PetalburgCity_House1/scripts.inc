PetalburgCity_House1_MapScripts::
	.byte 0


PetalburgCity_House1_EventScript_TauntKid::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_TAUNT_TM, PetalburgCity_House1_EventScript_TauntKid_1
	msgbox PetalburgCity_House1_EventScript_TauntKid_Text_1
	waitmessage
	giveitem ITEM_TM12_TAUNT
	setflag FLAG_RECEIVED_TAUNT_TM
	release
	end

PetalburgCity_House1_EventScript_TauntKid_1:
	msgbox PetalburgCity_House1_EventScript_TauntKid_Text_0
	release
	end


PetalburgCity_House1_EventScript_KarateGuy::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_BULKUP_TM, PetalburgCity_House1_EventScript_KarateGuy_1
	msgbox PetalburgCity_House1_EventScript_KarateGuy_Text_1
	waitmessage
	giveitem ITEM_TM08_BULK_UP
	setflag FLAG_RECEIVED_BULKUP_TM
	msgbox PetalburgCity_House1_EventScript_KarateGuy_Text_2
	release
	end

PetalburgCity_House1_EventScript_KarateGuy_1:
	msgbox PetalburgCity_House1_EventScript_KarateGuy_Text_0
	release
	end


PetalburgCity_House1_EventScript_Woman::
	msgbox PetalburgCity_House1_EventScript_Woman_Text_0, MSGBOX_NPC
	end


PetalburgCity_House1_EventScript_TauntKid_Text_0:
	.string "Have you tried taunting anyone yet?$"

PetalburgCity_House1_EventScript_TauntKid_Text_1:
	.string "Are you a TRAINER?\p"
	.string "I don't believe it!\p"
	.string "You look like you couldn't even catch a\n"
	.string "cold!\p"
	.string "I bet I could beat you with a single\n"
	.string "level 1 Magikarp!\p"
	.string "...\p"
	.string "It's fun to taunt people, you should try\n"
	.string "it sometime.$"

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
