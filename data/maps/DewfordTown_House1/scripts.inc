DewfordTown_House1_MapScripts::
	.byte 0

DewfordTown_House1_EventScript_Zigzagoon::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_WINGULL, CRY_MODE_NORMAL
	msgbox DewfordTown_House1_Text_Zigzagoon, MSGBOX_DEFAULT
	waitmoncry
	release
	end

DewfordTown_House1_Text_Zigzagoon:
	.string "WINGULL: Guguuh!$"

DewfordTown_House1_EventScript_Woman::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_HM02, DewfordTown_House1_EventScript_Woman_1
	msgbox DewfordTown_House1_EventScript_Woman_Text_1
	giveitem ITEM_HM02_FLY
	setflag FLAG_RECEIVED_HM02
	msgbox DewfordTown_House1_EventScript_Woman_Text_2
	release
	end

DewfordTown_House1_EventScript_Woman_1:
	msgbox DewfordTown_House1_EventScript_Woman_Text_0
	release
	end


DewfordTown_House1_EventScript_Woman_Text_0:
	.string "Wait... You say you don't even know who I\n"
	.string "am?\p"
	.string "I guess I gave you that HM for nothing\n"
	.string "then...$"

DewfordTown_House1_EventScript_Woman_Text_1:
	.string "Oh, dear.\n"
	.string "You've found my secret retreat.\p"
	.string "Please don't tell anyone I'm here. I'll\n"
	.string "make it up to you with this!$"

DewfordTown_House1_EventScript_Woman_Text_2:
	.string "That HM contains the move Fly, it will\n"
	.string "allow you to travel around much faster\l"
	.string "than walking or surfing.\p"
	.string "Of course, you will need the Cianwood\n"
	.string "City gym badge to use it.$"
