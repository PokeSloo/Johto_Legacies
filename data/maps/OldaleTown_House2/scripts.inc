OldaleTown_House2_MapScripts::
	.byte 0

OldaleTown_House2_EventScript_Woman::
	msgbox OldaleTown_House2_Text_YoullGoFurtherWithStrongPokemon, MSGBOX_NPC
	end

OldaleTown_House2_Text_YoullGoFurtherWithStrongPokemon:
	.string "Nice to see you {PLAYER}, how have\n"
	.string "your parents been?\p"
	.string "I haven't seen your father in a while.$"

OldaleTown_House2_EventScript_Man::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_RAIN_DANCE, OldaleTown_House2_EventScript_Man_1
	msgbox OldaleTown_House2_EventScript_Man_Text_1
	giveitem ITEM_TM18
	msgbox OldaleTown_House2_EventScript_Man_Text_2
	setflag FLAG_RECEIVED_RAIN_DANCE
	release
	end

OldaleTown_House2_EventScript_Man_1:
	msgbox OldaleTown_House2_EventScript_Man_Text_0
	release
	end


OldaleTown_House2_EventScript_Man_Text_0:
	.string "Some POKéMON moves seem useless at\n"
	.string "first, but they can be great for\l"
	.string "support.\p"
	.string "You need to do your research when\n"
	.string "building up your POKéMON'S movesets.$"

OldaleTown_House2_EventScript_Man_Text_1:
	.string "Oh, hey {PLAYER}.\p"
	.string "I see you received a POKéMON from PROF.\n"
	.string "ELM, congrats!\p"
	.string "Here, this should also help you get\n"
	.string "started.$"

OldaleTown_House2_EventScript_Man_Text_2:
	.string "That TM contains the move Rain Dance.\p"
	.string "It's not the most powerful TM out\n"
	.string "there, but it can be useful for\l"
	.string "support.\p"
	.string "I hope it helps you on your journey.$"
