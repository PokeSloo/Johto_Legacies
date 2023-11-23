DewfordTown_Hall_MapScripts::
	.byte 0


DewfordTown_Hall_EventScript_Shopkeep::
	lock
	msgbox DewfordTown_Hall_EventScript_Shopkeep_Text_0
	waitmessage
	pokemart DewfordTown_Hall_MartItems
	msgbox DewfordTown_Hall_EventScript_Shopkeep_Text_1
	release
	end


	.align 2
DewfordTown_Hall_MartItems:
	.2byte ITEM_HEAL_POWDER
	.2byte ITEM_ENERGY_POWDER
	.2byte ITEM_ENERGY_ROOT
	.2byte ITEM_REVIVAL_HERB
	.2byte ITEM_CHERI_BERRY
	.2byte ITEM_CHESTO_BERRY
	.2byte ITEM_PECHA_BERRY
	.2byte ITEM_RAWST_BERRY
	.2byte ITEM_ASPEAR_BERRY
	.2byte ITEM_NONE

DewfordTown_Hall_EventScript_OldMan::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_ASSAULT_VEST, DewfordTown_Hall_EventScript_OldMan_1
	msgbox DewfordTown_Hall_EventScript_OldMan_Text_1
	giveitem ITEM_ASSAULT_VEST
	msgbox DewfordTown_Hall_EventScript_OldMan_Text_2
	setflag FLAG_RECEIVED_ASSAULT_VEST
	release
	end

DewfordTown_Hall_EventScript_OldMan_1:
	msgbox DewfordTown_Hall_EventScript_OldMan_Text_0
	release
	end


DewfordTown_Hall_EventScript_Twin::
	msgbox DewfordTown_Hall_EventScript_Twin_Text_0, MSGBOX_NPC
	end


DewfordTown_Hall_EventScript_Woman::
	msgbox DewfordTown_Hall_EventScript_Woman_Text_0, MSGBOX_NPC
	end


DewfordTown_Hall_EventScript_BaldMan::
	msgbox DewfordTown_Hall_EventScript_BaldMan_Text_0, MSGBOX_NPC
	end


DewfordTown_Hall_EventScript_Girl::
	msgbox DewfordTown_Hall_EventScript_Girl_Text_0, MSGBOX_NPC
	end


DewfordTown_Hall_EventScript_Shopkeep_Text_0:
	.string "Welcome!\p"
	.string "How may I serve you?$"

DewfordTown_Hall_EventScript_Shopkeep_Text_1:
	.string "Please come again.$"

DewfordTown_Hall_EventScript_OldMan_Text_0:
	.string "That Assault Vest may not keep you\n"
	.string "warm, but give it to one of your\l"
	.string "POKéMON, and they will be a little more\l"
	.string "protected.$"

DewfordTown_Hall_EventScript_OldMan_Text_1:
	.string "We came in here to get out of the cold,\n"
	.string "it can be pretty harsh this time of\l"
	.string "year.\p"
	.string "Here, you should take this...$"

DewfordTown_Hall_EventScript_OldMan_Text_2:
	.string "That vest may not keep you warm, but\n"
	.string "give it to one of your POKéMON, and\l"
	.string "they will be a little more protected.$"

DewfordTown_Hall_EventScript_Twin_Text_0:
	.string "It's too cold in this town, they really\n"
	.string "need to turn up their heaters outside.$"

DewfordTown_Hall_EventScript_Woman_Text_0:
	.string "My POKéMON don't seem to like the\n"
	.string "herbal medicine sold here, but it's\l"
	.string "cheap.\p"
	.string "They'll just have to learn to like it,\n"
	.string "because I'm broke.$"

DewfordTown_Hall_EventScript_BaldMan_Text_0:
	.string "Have you been to the Contest Hall yet?\p"
	.string "I tried entering my Stunfisk into a\n"
	.string "Beauty Contest, but everyone just\l"
	.string "laughed at him!\p"
	.string "Some people just don't understand\n"
	.string "greatness!$"

DewfordTown_Hall_EventScript_Girl_Text_0:
	.string "I remember them turning the Lake of\n"
	.string "Rage into a resort when I was a little\l"
	.string "girl, it really brings in a lot of people\l"
	.string "now.$"
