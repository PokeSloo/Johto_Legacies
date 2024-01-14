VerdanturfTown_House_MapScripts::
	.byte 0


VerdanturfTown_House_EventScript_Expert::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_HM07, VerdanturfTown_House_EventScript_Expert_1
	goto_if_set FLAG_BADGE08_GET, VerdanturfTown_House_EventScript_Expert_2
	msgbox VerdanturfTown_House_EventScript_Expert_Text_3
	release
	end

VerdanturfTown_House_EventScript_Expert_1:
	msgbox VerdanturfTown_House_EventScript_Expert_Text_0
	release
	end

VerdanturfTown_House_EventScript_Expert_2:
	msgbox VerdanturfTown_House_EventScript_Expert_Text_1
	giveitem ITEM_HM07_WATERFALL
	msgbox VerdanturfTown_House_EventScript_Expert_Text_2
	setflag FLAG_RECEIVED_HM07
	release
	end


VerdanturfTown_House_EventScript_Expert_Text_0:
	.string "That HM will allow you to scale\n"
	.string "waterfalls.\p"
	.string "You will need it to cross through Tohjo\n"
	.string "Falls on your way to the POKéMON\l"
	.string "League.$"

VerdanturfTown_House_EventScript_Expert_Text_1:
	.string "Oh ho! So you defeated CLAIR?\p"
	.string "I wouldn't doubt such a promising young\n"
	.string "TRAINER such as yourself.\p"
	.string "Here, please accept this gift.$"

VerdanturfTown_House_EventScript_Expert_Text_2:
	.string "That HM contains the move Waterfall.\p"
	.string "Along with being a powerful WATER-type\n"
	.string "move, it will allow you to scale\l"
	.string "waterfalls.\p"
	.string "With that, all of Johto should be within\n"
	.string "your reach!$"

VerdanturfTown_House_EventScript_Expert_Text_3:
	.string "Hmm... I can tell just by looking at you\n"
	.string "that you are a very promising young\l"
	.string "TRAINER.\p"
	.string "Please, come see me after you have\n"
	.string "defeated CLAIR.\p"
	.string "I will give you a gift.$"
