FallarborTown_CozmosHouse_MapScripts::
	.byte 0


FallarborTown_CozmosHouse_EventScript_Fisherman::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_SUPER_ROD, FallarborTown_CozmosHouse_EventScript_Fisherman_1
	msgbox FallarborTown_CozmosHouse_EventScript_Fisherman_Text_1, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq FallarborTown_CozmosHouse_EventScript_Fisherman_4
	msgbox FallarborTown_CozmosHouse_EventScript_Fisherman_Text_3
	giveitem ITEM_SUPER_ROD
	msgbox FallarborTown_CozmosHouse_EventScript_Fisherman_Text_4
	setflag FLAG_RECEIVED_SUPER_ROD
	release
	end

FallarborTown_CozmosHouse_EventScript_Fisherman_1:
	msgbox FallarborTown_CozmosHouse_EventScript_Fisherman_Text_0
	release
	end

FallarborTown_CozmosHouse_EventScript_Fisherman_4:
	msgbox FallarborTown_CozmosHouse_EventScript_Fisherman_Text_2
	release
	end


FallarborTown_CozmosHouse_EventScript_Wife::
	msgbox FallarborTown_CozmosHouse_EventScript_Wife_Text_0, MSGBOX_NPC
	end


FallarborTown_CozmosHouse_EventScript_Fisherman_Text_0:
	.string "You should try ice fishing with that\n"
	.string "Super Rod, one of my buddies seems to\l"
	.string "really enjoy it.$"

FallarborTown_CozmosHouse_EventScript_Fisherman_Text_1:
	.string "Tell me, do you like fishing?$"

FallarborTown_CozmosHouse_EventScript_Fisherman_Text_2:
	.string "Great!\p"
	.string "The world would be better off with more\n"
	.string "avid fishermen like us!$"

FallarborTown_CozmosHouse_EventScript_Fisherman_Text_3:
	.string "Hmm... That's unfortunate...\p"
	.string "Perhaps you just aren't using the right\n"
	.string "fishing rod.\p"
	.string "Here, try this one out!$"

FallarborTown_CozmosHouse_EventScript_Fisherman_Text_4:
	.string "A Good Rod is pretty good, but a Super\n"
	.string "Rod is super!$"

FallarborTown_CozmosHouse_EventScript_Wife_Text_0:
	.string "My husband really loves his fishing.\p"
	.string "While he's out there, I just enjoy\n"
	.string "reading a good book in this cozy little\l"
	.string "cabin.$"
