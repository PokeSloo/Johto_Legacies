LilycoveCity_Harbor_MapScripts::
	.byte 0


LilycoveCity_Harbor_EventScript_Sailor::
	lock
	faceplayer
	goto_if_set FLAG_FARAWAY_ISLAND_AVAILABLE, LilycoveCity_Harbor_EventScript_Sailor_1
	goto_if_set FLAG_BIRTH_ISLAND_AVAILABLE, LilycoveCity_Harbor_EventScript_Sailor_2
	msgbox LilycoveCity_Harbor_EventScript_Sailor_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq LilycoveCity_Harbor_EventScript_Sailor_6
	call LilycoveCity_Harbor_EventScript_Depart
	warpsilent MAP_FORTREE_CITY_DECORATION_SHOP, 8, 6
	waitstate
	release
	end

LilycoveCity_Harbor_EventScript_Sailor_1:
	goto LilycoveCity_Harbor_EventScript_ChoiceWithFaraway
	return

LilycoveCity_Harbor_EventScript_Sailor_2:
	goto LilycoveCity_Harbor_EventScript_ChoiceWithBirth
	return

LilycoveCity_Harbor_EventScript_Sailor_6:
	msgbox LilycoveCity_Harbor_EventScript_Sailor_Text_1
	release
	end


LilycoveCity_Harbor_EventScript_Depart::
	msgbox LilycoveCity_Harbor_EventScript_Depart_Text_0
	waitmessage
	closemessage
	applymovement 3, LilycoveCity_Harbor_Movement_SailorBoard
	waitmovement 0
	delay 30
	applymovement OBJ_EVENT_ID_PLAYER, LilycoveCity_Harbor_Movement_PlayerBoard
	waitmovement 0
	delay 60
	playse SE_RG_SS_ANNE_HORN
	applymovement 1, LilycoveCity_Harbor_Movement_ShipLeave
	waitmovement 0
	waitse
	return


LilycoveCity_Harbor_Movement_SailorBoard:
	walk_in_place_up
	set_invisible
	step_end

LilycoveCity_Harbor_Movement_PlayerBoard:
	walk_up
	set_invisible
	step_end

LilycoveCity_Harbor_Movement_ShipLeave:
	delay_16
	delay_16
	walk_slow_left
	walk_slow_left
	walk_slow_left
	walk_slow_left
	walk_slow_left
	walk_slow_left
	step_end

LilycoveCity_Harbor_EventScript_ChoiceWithBirth::
	message LilycoveCity_Harbor_Text_WhereTo
	waitmessage
	multichoice 16, 0, MULTI_APRICOTTA_TO_BIRTH, FALSE
	switch VAR_RESULT
	case 0, LilycoveCity_Harbor_EventScript_ToOlivine
	case 1, LilycoveCity_Harbor_EventScript_ToBirth
	case 2, FortreeCity_DecorationShop_EventScript_Cancel
	case MULTI_B_PRESSED, FortreeCity_DecorationShop_EventScript_Cancel
	end

LilycoveCity_Harbor_EventScript_ChoiceWithFaraway::
	message LilycoveCity_Harbor_Text_WhereTo
	waitmessage
	multichoice 16, 0, MULTI_APRICOTTA_TO_FARAWAY, FALSE
	switch VAR_RESULT
	case 0, LilycoveCity_Harbor_EventScript_ToOlivine
	case 1, LilycoveCity_Harbor_EventScript_ToBirth
    case 2, LilycoveCity_Harbor_EventScript_ToFaraway
	case 3, FortreeCity_DecorationShop_EventScript_Cancel
	case MULTI_B_PRESSED, FortreeCity_DecorationShop_EventScript_Cancel
	end

LilycoveCity_Harbor_EventScript_ToOlivine::
	call LilycoveCity_Harbor_EventScript_Depart
	warpsilent MAP_FORTREE_CITY_DECORATION_SHOP, 8, 6
	waitstate
	release
	end


LilycoveCity_Harbor_EventScript_ToBirth::
	setvar VAR_HARBOR_DEPARTED_FROM, 2
	call LilycoveCity_Harbor_EventScript_Depart
	warpsilent MAP_BIRTH_ISLAND_EXTERIOR, 15, 21
	waitstate
	release
	end


LilycoveCity_Harbor_EventScript_ToFaraway::
	setvar VAR_HARBOR_DEPARTED_FROM, 2
	call LilycoveCity_Harbor_EventScript_Depart
	warpsilent MAP_FARAWAY_ISLAND_ENTRANCE, 13, 38
	waitstate
	release
	end


LilycoveCity_Harbor_EventScript_OldLady::
	msgbox LilycoveCity_Harbor_EventScript_OldLady_Text_0, MSGBOX_NPC
	end


LilycoveCity_Harbor_EventScript_Sailor_Text_0:
	.string "Welcome to the Apricotta Beach harbor!\p"
	.string "Would you like me to take you to Olivine\n"
	.string "City?$"

LilycoveCity_Harbor_EventScript_Sailor_Text_1:
	.string "Very well.\p"
	.string "Let me know if you change your mind.$"

LilycoveCity_Harbor_EventScript_Depart_Text_0:
	.string "All aboard!$"

LilycoveCity_Harbor_EventScript_OldLady_Text_0:
	.string "You're dressed mighty heavily, child.\p"
	.string "Don't spend too much time on the beach\n"
	.string "dressed like that.$"

LilycoveCity_Harbor_Text_WhereTo::
	.string "Welcome to the Apricotta Beach harbor!\p"
	.string "Where would you like me to take you?$"
