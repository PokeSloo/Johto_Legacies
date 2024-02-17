FortreeCity_DecorationShop_MapScripts::
	.byte 0


FortreeCity_DecorationShop_EventScript_FatMan::
	msgbox FortreeCity_DecorationShop_EventScript_FatMan_Text_0, MSGBOX_NPC
	end


FortreeCity_DecorationShop_EventScript_Girl::
	msgbox FortreeCity_DecorationShop_EventScript_Girl_Text_0, MSGBOX_NPC
	end


FortreeCity_DecorationShop_EventScript_Guy::
	msgbox FortreeCity_DecorationShop_EventScript_Guy_Text_0, MSGBOX_NPC
	end


FortreeCity_DecorationShop_EventScript_flaggirl::
	lock
	faceplayer
	goto_if_set FLAG_BIRTH_ISLAND_AVAILABLE, FortreeCity_DecorationShop_EventScript_flaggirl_1
	setflag FLAG_BIRTH_ISLAND_AVAILABLE
	msgbox FortreeCity_DecorationShop_EventScript_flaggirl_Text_1
	release
	end

FortreeCity_DecorationShop_EventScript_flaggirl_1:
	setflag FLAG_FARAWAY_ISLAND_AVAILABLE
	msgbox FortreeCity_DecorationShop_EventScript_flaggirl_Text_0
	release
	end


FortreeCity_DecorationShop_EventScript_Sailor::
	lock
	faceplayer
	goto_if_set FLAG_FARAWAY_ISLAND_AVAILABLE, FortreeCity_DecorationShop_EventScript_Sailor_1
	goto_if_set FLAG_BIRTH_ISLAND_AVAILABLE, FortreeCity_DecorationShop_EventScript_Sailor_2
	goto_if_set FLAG_SHOWED_SS_TICKET_OLIVINE, FortreeCity_DecorationShop_EventScript_Sailor_3
	goto_if_set FLAG_IS_CHAMPION, FortreeCity_DecorationShop_EventScript_Sailor_4
	msgbox FortreeCity_DecorationShop_EventScript_Sailor_Text_3
	release
	end

FortreeCity_DecorationShop_EventScript_Sailor_1:
	goto FortreeCity_DecorationShop_EventScript_ChoiceWithFaraway
	return

FortreeCity_DecorationShop_EventScript_Sailor_2:
	goto FortreeCity_DecorationShop_EventScript_ChoiceWithBirth
	return

FortreeCity_DecorationShop_EventScript_Sailor_3:
	msgbox FortreeCity_DecorationShop_EventScript_Sailor_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq FortreeCity_DecorationShop_EventScript_Sailor_10
	call FortreeCity_DecorationShop_EventScript_Depart
	warpsilent MAP_LILYCOVE_CITY_HARBOR, 8, 11
	waitstate
	release
	end

FortreeCity_DecorationShop_EventScript_Sailor_4:
	setflag FLAG_SHOWED_SS_TICKET_OLIVINE
	msgbox FortreeCity_DecorationShop_EventScript_Sailor_Text_2, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq FortreeCity_DecorationShop_EventScript_Sailor_13
	call FortreeCity_DecorationShop_EventScript_Depart
	warpsilent MAP_LILYCOVE_CITY_HARBOR, 8, 11
	waitstate
	release
	end

FortreeCity_DecorationShop_EventScript_Sailor_10:
	msgbox FortreeCity_DecorationShop_EventScript_Sailor_Text_1
	release
	end

FortreeCity_DecorationShop_EventScript_Sailor_13:
	msgbox FortreeCity_DecorationShop_EventScript_Sailor_Text_1
	release
	end


FortreeCity_DecorationShop_EventScript_Depart::
	msgbox FortreeCity_DecorationShop_EventScript_Depart_Text_0
	waitmessage
	closemessage
	applymovement 1, FortreeCity_DecorationShop_Movement_SailorBoard
	waitmovement 0
	delay 30
	applymovement OBJ_EVENT_ID_PLAYER, FortreeCity_DecorationShop_Movement_PlayerBoard
	waitmovement 0
	delay 60
	playse SE_RG_SS_ANNE_HORN
	applymovement 5, FortreeCity_DecorationShop_Movement_ShipLeave
	waitmovement 0
	waitse
	return


FortreeCity_DecorationShop_Movement_SailorBoard:
	walk_down
	set_invisible
	step_end

FortreeCity_DecorationShop_Movement_PlayerBoard:
	walk_down
	walk_down
	set_invisible
	step_end

FortreeCity_DecorationShop_Movement_ShipLeave:
	delay_16
	delay_16
	walk_slow_left
	walk_slow_left
	walk_slow_left
	walk_slow_left
	walk_slow_left
	walk_slow_left
	step_end

FortreeCity_DecorationShop_EventScript_ChoiceWithBirth::
	message FortreeCity_DecorationShop_Text_WhereTo
	waitmessage
	multichoice 16, 0, MULTI_OLIVINE_TO_BIRTH, FALSE
	switch VAR_RESULT
	case 0, FortreeCity_DecorationShop_EventScript_ToApricotta
	case 1, FortreeCity_DecorationShop_EventScript_ToBirth
	case 2, FortreeCity_DecorationShop_EventScript_Cancel
	case MULTI_B_PRESSED, FortreeCity_DecorationShop_EventScript_Cancel
	end

FortreeCity_DecorationShop_EventScript_ChoiceWithFaraway::
	message FortreeCity_DecorationShop_Text_WhereTo
	waitmessage
	multichoice 16, 0, MULTI_OLIVINE_TO_FARAWAY, FALSE
	switch VAR_RESULT
	case 0, FortreeCity_DecorationShop_EventScript_ToApricotta
	case 1, FortreeCity_DecorationShop_EventScript_ToBirth
    case 2, FortreeCity_DecorationShop_EventScript_ToFaraway
	case 3, FortreeCity_DecorationShop_EventScript_Cancel
	case MULTI_B_PRESSED, FortreeCity_DecorationShop_EventScript_Cancel
	end

FortreeCity_DecorationShop_EventScript_ToApricotta::
	call FortreeCity_DecorationShop_EventScript_Depart
	warpsilent MAP_LILYCOVE_CITY_HARBOR, 8, 11
	waitstate
	release
	end


FortreeCity_DecorationShop_EventScript_ToBirth::
	setvar VAR_HARBOR_DEPARTED_FROM, 1
	call FortreeCity_DecorationShop_EventScript_Depart
	warpsilent MAP_BIRTH_ISLAND_EXTERIOR, 15, 26
	waitstate
	release
	end


FortreeCity_DecorationShop_EventScript_ToFaraway::
	setvar VAR_HARBOR_DEPARTED_FROM, 1
	call FortreeCity_DecorationShop_EventScript_Depart
	warpsilent MAP_FARAWAY_ISLAND_ENTRANCE, 13, 38
	waitstate
	release
	end


FortreeCity_DecorationShop_EventScript_Cancel::
	msgbox FortreeCity_DecorationShop_EventScript_Sailor_Text_1
	release
	end


FortreeCity_DecorationShop_EventScript_FatMan_Text_0:
	.string "I wanted to visit Vermilion City in\n"
	.string "Kanto, but they said they've had\l"
	.string "trouble accessing the region lately.\p"
	.string "What does that even mean?$"

FortreeCity_DecorationShop_EventScript_Girl_Text_0:
	.string "I'll be taking my little brother to\n"
	.string "Apricotta Beach soon, it's lovely this\l"
	.string "time of year.\p"
	.string "I recommend the trip if you ever get a\n"
	.string "chance.$"

FortreeCity_DecorationShop_EventScript_Guy_Text_0:
	.string "Yay! I can't wait to go to the nice warm\n"
	.string "beach!$"

FortreeCity_DecorationShop_EventScript_flaggirl_Text_0:
	.string "faraway available$"

FortreeCity_DecorationShop_EventScript_flaggirl_Text_1:
	.string "birth available$"

FortreeCity_DecorationShop_EventScript_Sailor_Text_0:
	.string "Welcome to the Olivine City harbor!\p"
	.string "Would you like me to take you to\n"
	.string "Apricotta Beach?$"

FortreeCity_DecorationShop_EventScript_Sailor_Text_1:
	.string "Very well.\p"
	.string "Let me know if you change your mind.$"

FortreeCity_DecorationShop_EventScript_Sailor_Text_2:
	.string "Welcome to the Olivine City harbor!\p"
	.string "May I please see your ticket?\p"
	.string "...\p"
	.string "Yes! That is indeed an S.S. Ticket!\p"
	.string "Would you like me to take you to\n"
	.string "Apricotta Beach?$"

FortreeCity_DecorationShop_EventScript_Sailor_Text_3:
	.string "Welcome to the Olivine City harbor!\p"
	.string "May I please see your ticket?\p"
	.string "...\p"
	.string "I'm sorry, our services are only\n"
	.string "available to those who have an S.S.\l"
	.string "Ticket.$"

FortreeCity_DecorationShop_EventScript_Depart_Text_0:
	.string "All aboard!$"

FortreeCity_DecorationShop_Text_WhereTo::
	.string "Welcome to the Olivine City harbor!\p"
	.string "Where would you like me to take you?$"
