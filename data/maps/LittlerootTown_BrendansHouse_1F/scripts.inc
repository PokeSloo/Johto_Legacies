LittlerootTown_BrendansHouse_1F_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, LittlerootTown_BrendansHouse_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

LittlerootTown_BrendansHouse_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
	map_script_2 VAR_CHERRYGROVE_STATE, 11, LittlerootTown_BrendansHouse_1F_EventScript_OnFrameAfterE4
	.2byte 0


LittlerootTown_BrendansHouse_1F_EventScript_OnFrameAfterE4::
	lock
	applymovement 1, LittlerootTown_BrendansHouse_1F_FaceLeft
	waitmovement 0
	msgbox LittlerootTown_BrendansHouse_1F_EventScript_OnFrameAfterE4_Text_0
	waitmessage
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_BrendansHouse_1F_Movement_PlayerToTable
	waitmovement 0
	applymovement 1, LittlerootTown_BrendansHouse_1F_FaceRight
	waitmovement 0
	delay 30
	applymovement 3, LittlerootTown_BrendansHouse_1F_Movement_StepLeft
	waitmovement 0
	msgbox LittlerootTown_BrendansHouse_1F_EventScript_OnFrameAfterE4_Text_1
	waitmessage
	applymovement 2, LittlerootTown_BrendansHouse_1F_Movement_StepLeft
	waitmovement 0
	msgbox LittlerootTown_BrendansHouse_1F_EventScript_OnFrameAfterE4_Text_2
	waitmessage
	applymovement 1, LittlerootTown_BrendansHouse_1F_Movement_StepRight
	waitmovement 0
	checkplayergender
	compare VAR_RESULT, MALE
	goto_if_eq LittlerootTown_BrendansHouse_1F_EventScript_OnFrameAfterE4_2
	compare VAR_RESULT, FEMALE
	goto_if_eq LittlerootTown_BrendansHouse_1F_EventScript_OnFrameAfterE4_3
LittlerootTown_BrendansHouse_1F_EventScript_OnFrameAfterE4_1:
	applymovement 3, LittlerootTown_BrendansHouse_1F_Movement_StepLeft
	waitmovement 0
	msgbox LittlerootTown_BrendansHouse_1F_EventScript_OnFrameAfterE4_Text_3
	waitmessage
	applymovement 3, LittlerootTown_BrendansHouse_1F_Movement_StepDown
	applymovement 2, LittlerootTown_BrendansHouse_1F_Movement_StepUp
	waitmovement 0
	checkplayergender
	compare VAR_RESULT, MALE
	goto_if_eq LittlerootTown_BrendansHouse_1F_EventScript_OnFrameAfterE4_7
	compare VAR_RESULT, FEMALE
	goto_if_eq LittlerootTown_BrendansHouse_1F_EventScript_OnFrameAfterE4_8
LittlerootTown_BrendansHouse_1F_EventScript_OnFrameAfterE4_6:
	msgbox LittlerootTown_BrendansHouse_1F_EventScript_OnFrameAfterE4_Text_4
	waitmessage
	applymovement 2, LittlerootTown_BrendansHouse_1F_Movement_StepLeft
	waitmovement 0
	msgbox LittlerootTown_BrendansHouse_1F_EventScript_OnFrameAfterE4_Text_5
	waitmessage
	applymovement 3, LittlerootTown_BrendansHouse_1F_Movement_StepLeft
	waitmovement 0
	msgbox LittlerootTown_BrendansHouse_1F_EventScript_OnFrameAfterE4_Text_6
	waitmessage
	playse SE_PIN
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_BrendansHouse_1F_Movement_Exclamation
	applymovement 1, LittlerootTown_BrendansHouse_1F_Movement_Exclamation
	applymovement 2, LittlerootTown_BrendansHouse_1F_Movement_Exclamation
	waitmovement 0
	waitse
	delay 60
	applymovement 1, LittlerootTown_BrendansHouse_1F_Movement_StepRight
	waitmovement 0
	msgbox LittlerootTown_BrendansHouse_1F_EventScript_OnFrameAfterE4_Text_7
	applymovement 3, LittlerootTown_BrendansHouse_1F_Movement_StepLeft
	waitmovement 0
	msgbox LittlerootTown_BrendansHouse_1F_EventScript_OnFrameAfterE4_Text_8
	waitmessage
	applymovement 3, LittlerootTown_BrendansHouse_1F_Movement_StepDown
	waitmovement 0
	msgbox LittlerootTown_BrendansHouse_1F_EventScript_OnFrameAfterE4_Text_9
	waitmessage
	applymovement 2, LittlerootTown_BrendansHouse_1F_Movement_StepUp
	waitmovement 0
	msgbox LittlerootTown_BrendansHouse_1F_EventScript_OnFrameAfterE4_Text_10
	waitmessage
	applymovement 2, LittlerootTown_BrendansHouse_1F_Movement_StepUp
	waitmovement 0
	msgbox LittlerootTown_BrendansHouse_1F_EventScript_OnFrameAfterE4_Text_11
	waitmessage
	closemessage
	applymovement 2, LittlerootTown_BrendansHouse_1F_Movement_ShaneLeavePostE4
	waitmovement 0
	playse SE_EXIT
	removeobject 2
	waitse
	applymovement 3, LittlerootTown_BrendansHouse_1F_Movement_SilverToPlayer
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_BrendansHouse_1F_Movement_StepDown
	waitmovement 0
	msgbox LittlerootTown_BrendansHouse_1F_EventScript_OnFrameAfterE4_Text_12
	waitmessage
	giveitem ITEM_SS_TICKET
	msgbox LittlerootTown_BrendansHouse_1F_EventScript_OnFrameAfterE4_Text_13
	waitmessage
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_BrendansHouse_1F_FaceLeft
	applymovement 3, LittlerootTown_BrendansHouse_1F_Movement_SilverToCounter
	waitmovement 0
	delay 30
	addobject 5
	clearflag FLAG_HIDE_ENTEI_EGG
	delay 60
	applymovement 3, LittlerootTown_BrendansHouse_1F_Movement_SilverToGatr
	waitmovement 0
	applymovement 7, LittlerootTown_BrendansHouse_1F_Movement_StepRight
	waitmovement 0
	msgbox LittlerootTown_BrendansHouse_1F_EventScript_OnFrameAfterE4_Text_14
	waitmessage
	closemessage
	applymovement 3, LittlerootTown_BrendansHouse_1F_Movement_SilverExit
	applymovement 7, LittlerootTown_BrendansHouse_1F_Movement_GatrExit
	waitmovement 0
	playse SE_EXIT
	waitse
	removeobject 3
	removeobject 7
	setflag FLAG_HIDE_SILVER_IN_HOUSE
	setflag FLAG_HIDE_GOLD_ROUTE_G
	setflag FLAG_HIDE_SILVER_OUTSIDE_ROUJEM
	setflag FLAG_HIDE_SHANE_LAZULAN_POST_THORNE
	addvar VAR_CHERRYGROVE_STATE, 1
	release
	end

LittlerootTown_BrendansHouse_1F_EventScript_OnFrameAfterE4_2:
	call LittlerootTown_BrendansHouse_1F_MalePlayerPostE4
	goto LittlerootTown_BrendansHouse_1F_EventScript_OnFrameAfterE4_1

LittlerootTown_BrendansHouse_1F_EventScript_OnFrameAfterE4_3:
	call LittlerootTown_BrendansHouse_1F_FemalePlayerPostE4
	goto LittlerootTown_BrendansHouse_1F_EventScript_OnFrameAfterE4_1

LittlerootTown_BrendansHouse_1F_EventScript_OnFrameAfterE4_7:
	call LittlerootTown_BrendansHouse_1F_MalePlayerPostE4Dad
	goto LittlerootTown_BrendansHouse_1F_EventScript_OnFrameAfterE4_6

LittlerootTown_BrendansHouse_1F_EventScript_OnFrameAfterE4_8:
	call LittlerootTown_BrendansHouse_1F_FemalePlayerPostE4Dad
	goto LittlerootTown_BrendansHouse_1F_EventScript_OnFrameAfterE4_6


LittlerootTown_BrendansHouse_1F_MalePlayerPostE4::
	msgbox LittlerootTown_BrendansHouse_1F_MalePlayerPostE4_Text_0
	waitmessage
	return


LittlerootTown_BrendansHouse_1F_FemalePlayerPostE4::
	msgbox LittlerootTown_BrendansHouse_1F_FemalePlayerPostE4_Text_0
	waitmessage
	return


LittlerootTown_BrendansHouse_1F_MalePlayerPostE4Dad::
	msgbox LittlerootTown_BrendansHouse_1F_MalePlayerPostE4Dad_Text_0
	waitmessage
	return


LittlerootTown_BrendansHouse_1F_FemalePlayerPostE4Dad::
	msgbox LittlerootTown_BrendansHouse_1F_FemalePlayerPostE4Dad_Text_0
	waitmessage
	return


LittlerootTown_BrendansHouse_1F_Movement_PlayerToTable:
	walk_down
	walk_right
	walk_down
	walk_down
	walk_down
	walk_right
	walk_right
	step_end

LittlerootTown_BrendansHouse_1F_Movement_StepLeft:
	walk_in_place_left
	step_end

LittlerootTown_BrendansHouse_1F_Movement_StepRight:
	walk_in_place_right
	step_end

LittlerootTown_BrendansHouse_1F_Movement_StepDown:
	walk_in_place_down
	step_end

LittlerootTown_BrendansHouse_1F_Movement_StepUp:
	walk_in_place_up
	step_end

LittlerootTown_BrendansHouse_1F_Movement_Exclamation:
	emote_exclamation_mark
	step_end

LittlerootTown_BrendansHouse_1F_Movement_ShaneLeavePostE4:
	walk_down
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_in_place_down
	step_end

LittlerootTown_BrendansHouse_1F_Movement_SilverToPlayer:
	walk_down
	walk_down
	walk_left
	walk_left
	walk_left
	walk_in_place_up
	step_end

LittlerootTown_BrendansHouse_1F_Movement_SilverToCounter:
	walk_left
	walk_up
	walk_up
	walk_up
	walk_up
	walk_in_place_right
	step_end

LittlerootTown_BrendansHouse_1F_Movement_SilverToGatr:
	walk_left
	walk_left
	walk_down
	walk_down
	walk_in_place_right
	step_end

LittlerootTown_BrendansHouse_1F_Movement_SilverExit:
	walk_down
	walk_down
	set_invisible
	step_end

LittlerootTown_BrendansHouse_1F_Movement_GatrExit:
	walk_right
	walk_down
	walk_down
	walk_down
	set_invisible
	step_end

LittlerootTown_BrendansHouse_1F_EnteiEgg::
	lock
	getpartysize
	compare VAR_RESULT, PARTY_SIZE
	goto_if_eq LittlerootTown_BrendansHouse_1F_EnteiEgg_1
	playfanfare MUS_OBTAIN_ITEM
	msgbox LittlerootTown_BrendansHouse_1F_EnteiEgg_Text_1
	waitfanfare
	giveegg SPECIES_ENTEI
	removeobject 5
	setflag FLAG_HIDE_ENTEI_EGG
	release
	end

LittlerootTown_BrendansHouse_1F_EnteiEgg_1:
	msgbox LittlerootTown_BrendansHouse_1F_EnteiEgg_Text_0
	release
	end


LittlerootTown_BrendansHouse_1F_Trigger_1::
	lock
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_BrendansHouse_1F_FaceDown
	applymovement 1, LittlerootTown_BrendansHouse_1F_FaceLeft
	waitmovement 0
	msgbox Come_Here
	waitmessage
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_BrendansHouse_1F_WalkDownFromLeft
	waitmovement 0
	goto LittlerootTown_BrendansHouse_1F_Get_Started
	return


LittlerootTown_BrendansHouse_1F_Trigger_2::
	lock
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_BrendansHouse_1F_FaceDown
	applymovement 1, LittlerootTown_BrendansHouse_1F_FaceLeft
	waitmovement 0
	msgbox Come_Here
	waitmessage
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_BrendansHouse_1F_WalkDownFromMiddle
	waitmovement 0
	goto LittlerootTown_BrendansHouse_1F_Get_Started
	return


LittlerootTown_BrendansHouse_1F_Trigger_3::
	lock
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_BrendansHouse_1F_FaceDown
	applymovement 1, LittlerootTown_BrendansHouse_1F_FaceLeft
	waitmovement 0
	msgbox Come_Here
	waitmessage
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_BrendansHouse_1F_WalkDownFromRight
	waitmovement 0
	goto LittlerootTown_BrendansHouse_1F_Get_Started
	return


LittlerootTown_BrendansHouse_1F_Get_Started::
	msgbox LittlerootTown_BrendansHouse_1F_Get_Started_Text_0
	waitmessage
	closemessage
	delay 10
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_BrendansHouse_1F_FaceUp
	applymovement 1, LittlerootTown_BrendansHouse_1F_FaceUp
	waitmovement 0
	delay 10
	msgbox LittlerootTown_BrendansHouse_1F_Get_Started_Text_1
	waitmessage
	closemessage
	delay 120
	clearflag FLAG_GENERAL_HIDE
	playse SE_EXIT
	addobject 4
	playbgm MUS_HG_ENCOUNTER_RIVAL, FALSE
	applymovement 4, LittlerootTown_BrendansHouse_1F_StepDown1
	waitmovement 0
	msgbox LittlerootTown_BrendansHouse_1F_Get_Started_Text_2
	waitmessage
	closemessage
	applymovement 4, LittlerootTown_BrendansHouse_1F_WalktoPlayer
	waitmovement 0
	applymovement 1, LittlerootTown_BrendansHouse_1F_FaceLeft
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_BrendansHouse_1F_PlayerStepDownFaceUP
	waitmovement 0
	checkplayergender
	compare VAR_RESULT, MALE
	goto_if_eq LittlerootTown_BrendansHouse_1F_Get_Started_2
	compare VAR_RESULT, FEMALE
	goto_if_eq LittlerootTown_BrendansHouse_1F_Get_Started_3
LittlerootTown_BrendansHouse_1F_Get_Started_1:
	applymovement 4, LittlerootTown_BrendansHouse_1F_FaceDown
	waitmovement 0
	msgbox LittlerootTown_BrendansHouse_1F_Get_Started_Text_3
	waitmessage
	closemessage
	applymovement 4, LittlerootTown_BrendansHouse_1F_ShaneLeave
	waitmovement 0
	playse SE_EXIT
	removeobject 4
	setflag FLAG_GENERAL_HIDE
	fadedefaultbgm
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_BrendansHouse_1F_StepUpFaceRight
	waitmovement 0
	msgbox LittlerootTown_BrendansHouse_1F_Get_Started_Text_4
	waitmessage
	playfanfare MUS_OBTAIN_ITEM
	msgbox LittlerootTown_BrendansHouse_1F_Get_Started_Text_5
	waitfanfare
	setflag FLAG_SYS_B_DASH
	setflag FLAG_RECEIVED_RUNNING_SHOES
	addvar VAR_CHERRYGROVE_STATE, 1
	msgbox LittlerootTown_BrendansHouse_1F_Get_Started_Text_6
	waitmessage
	closemessage
	applymovement 1, LittlerootTown_BrendansHouse_1F_FaceRight
	waitmovement 0
	release
	end

LittlerootTown_BrendansHouse_1F_Get_Started_2:
	call LittlerootTown_BrendansHouse_1F_MalePlayer
	goto LittlerootTown_BrendansHouse_1F_Get_Started_1

LittlerootTown_BrendansHouse_1F_Get_Started_3:
	call LittlerootTown_BrendansHouse_1F_FemalePlayer
	goto LittlerootTown_BrendansHouse_1F_Get_Started_1


LittlerootTown_BrendansHouse_1F_MalePlayer::
	msgbox LittlerootTown_BrendansHouse_1F_MalePlayer_Text_0
	waitmessage
	applymovement 4, LittlerootTown_BrendansHouse_1F_StompRight
	waitmovement 0
	msgbox LittlerootTown_BrendansHouse_1F_MalePlayer_Text_1
	waitmessage
	return


LittlerootTown_BrendansHouse_1F_FemalePlayer::
	msgbox LittlerootTown_BrendansHouse_1F_FemalePlayer_Text_0
	waitmessage
	applymovement 4, LittlerootTown_BrendansHouse_1F_StompRight
	waitmovement 0
	msgbox LittlerootTown_BrendansHouse_1F_MalePlayer_Text_1
	waitmessage
	return


LittlerootTown_BrendansHouse_1F_Azumarill::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_AZUMARILL, CRY_MODE_NORMAL
	applymovement 6, LittlerootTown_BrendansHouse_1F_Heart
	msgbox LittlerootTown_BrendansHouse_1F_Azumarill_Text_0
	waitmovement 0
	waitmoncry
	release
	end


LittlerootTown_BrendansHouse_1F_PostBattleTrigger_1::
	lock
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_BrendansHouse_1F_FaceDown
	applymovement 1, LittlerootTown_BrendansHouse_1F_FaceLeft
	waitmovement 0
	msgbox LittlerootTown_BrendansHouse_1F_WhatHappened
	waitmessage
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_BrendansHouse_1F_WalkDownFromLeft
	waitmovement 0
	goto LittlerootTown_BrendansHouse_1F_Get_Nav
	return


LittlerootTown_BrendansHouse_1F_PostBattleTrigger_2::
	lock
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_BrendansHouse_1F_FaceDown
	applymovement 1, LittlerootTown_BrendansHouse_1F_FaceLeft
	waitmovement 0
	msgbox LittlerootTown_BrendansHouse_1F_WhatHappened
	waitmessage
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_BrendansHouse_1F_WalkDownFromMiddle
	waitmovement 0
	goto LittlerootTown_BrendansHouse_1F_Get_Nav
	return


LittlerootTown_BrendansHouse_1F_PostBattleTrigger_3::
	lock
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_BrendansHouse_1F_FaceDown
	applymovement 1, LittlerootTown_BrendansHouse_1F_FaceLeft
	waitmovement 0
	msgbox LittlerootTown_BrendansHouse_1F_WhatHappened
	waitmessage
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_BrendansHouse_1F_WalkDownFromRight
	waitmovement 0
	goto LittlerootTown_BrendansHouse_1F_Get_Nav
	return


LittlerootTown_BrendansHouse_1F_Get_Nav::
	msgbox LittlerootTown_BrendansHouse_1F_Get_Nav_Text_0
	waitmessage
	playfanfare MUS_OBTAIN_ITEM
	msgbox LittlerootTown_BrendansHouse_1F_Get_Nav_Text_1
	waitfanfare
	setflag FLAG_SYS_POKENAV_GET
	setflag FLAG_RECEIVED_POKENAV
	setflag FLAG_HIDE_SHANE_CHERRYGROVE_BATTLE
	addvar VAR_CHERRYGROVE_STATE, 1
	msgbox LittlerootTown_BrendansHouse_1F_Get_Nav_Text_2
	waitmessage
	applymovement 1, LittlerootTown_BrendansHouse_1F_FaceLeft
	waitmovement 0
	msgbox LittlerootTown_BrendansHouse_1F_Get_Nav_Text_3
	waitmessage
	closemessage
	applymovement 1, LittlerootTown_BrendansHouse_1F_FaceRight
	waitmovement 0
	setflag FLAG_HAS_MATCH_CALL
	setflag FLAG_ADDED_MATCH_CALL_TO_POKENAV
	setflag FLAG_ENABLE_MOM_MATCH_CALL
	setflag FLAG_REGISTERED_STEVEN_POKENAV
	setflag FLAG_ADVENTURE_STARTED
	release
	end


LittlerootTown_BrendansHouse_1F_FaceDown:
	face_down
	step_end

LittlerootTown_BrendansHouse_1F_FaceLeft:
	face_left
	step_end

LittlerootTown_BrendansHouse_1F_FaceRight:
	face_right
	step_end

LittlerootTown_BrendansHouse_1F_StepUpFaceRight:
	walk_up
	face_right
	step_end

LittlerootTown_BrendansHouse_1F_WalkDownFromLeft:
	walk_down
	walk_down
	walk_down
	walk_right
	walk_right
	walk_right
	step_end

LittlerootTown_BrendansHouse_1F_WalkDownFromMiddle:
	walk_down
	walk_down
	walk_right
	walk_right
	step_end

LittlerootTown_BrendansHouse_1F_WalkDownFromRight:
	walk_down
	walk_down
	walk_down
	walk_right
	step_end

LittlerootTown_BrendansHouse_1F_FaceUp:
	face_up
	step_end

LittlerootTown_BrendansHouse_1F_StepDown1:
	walk_down
	step_end

LittlerootTown_BrendansHouse_1F_WalktoPlayer:
	walk_down
	walk_down
	walk_down
	walk_right
	step_end

LittlerootTown_BrendansHouse_1F_ShaneLeave:
	walk_left
	walk_down
	walk_down
	step_end

LittlerootTown_BrendansHouse_1F_PlayerStepDownFaceUP:
	walk_down
	face_up
	step_end

LittlerootTown_BrendansHouse_1F_StompRight:
	walk_in_place_right
	step_end

LittlerootTown_BrendansHouse_1F_Heart:
	emote_heart
	step_end

LittlerootTown_BrendansHouse_1F_DownExclamation:
	emote_exclamation_mark
	walk_in_place_down
	face_down
	step_end

LittlerootTown_BrendansHouse_1F_EventScript_Feraligatr::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_FERALIGATR, CRY_MODE_NORMAL
	applymovement 7, LittlerootTown_BrendansHouse_1F_Heart
	msgbox LittlerootTown_BrendansHouse_1F_EventScript_Feraligatr_Text_0
	waitmovement 0
	waitmoncry
	release
	end


LittlerootTown_BrendansHouse_1F_EventScript_FinalSilver::
	msgbox LittlerootTown_BrendansHouse_1F_EventScript_FinalSilver_Text_0, MSGBOX_NPC
	end


LittlerootTown_BrendansHouse_1F_EventScript_FinalShane::
	msgbox LittlerootTown_BrendansHouse_1F_EventScript_FinalShane_Text_0, MSGBOX_NPC
	end


LittlerootTown_BrendansHouse_1F_EventScript_Mom::
	lock
	faceplayer
	goto_if_set FLAG_DEFEATED_RED, LittlerootTown_BrendansHouse_1F_EventScript_Mom_1
	goto_if_set FLAG_IS_CHAMPION, LittlerootTown_BrendansHouse_1F_EventScript_Mom_2
	goto_if_set FLAG_HOOH_VS_LUGIA_COMPLETED, LittlerootTown_BrendansHouse_1F_EventScript_Mom_3
	goto_if_set FLAG_DEFEATED_DAMON_KIZU, LittlerootTown_BrendansHouse_1F_EventScript_Mom_4
	goto_if_set FLAG_BADGE05_GET, LittlerootTown_BrendansHouse_1F_EventScript_Mom_5
	goto_if_set FLAG_HIDE_SHANE_PHOENIX_CELL, LittlerootTown_BrendansHouse_1F_EventScript_Mom_6
	goto_if_set FLAG_ILEX_BLOCKING_GRUNT, LittlerootTown_BrendansHouse_1F_EventScript_Mom_7
	goto_if_set FLAG_BADGE02_GET, LittlerootTown_BrendansHouse_1F_EventScript_Mom_8
	goto_if_set FLAG_HIDE_RT31_RAIKOU, LittlerootTown_BrendansHouse_1F_EventScript_Mom_9
	goto_if_set FLAG_HAS_MATCH_CALL, LittlerootTown_BrendansHouse_1F_EventScript_Mom_10
	msgbox LittlerootTown_BrendansHouse_1F_EventScript_Mom_Text_10
	release
	end

LittlerootTown_BrendansHouse_1F_EventScript_Mom_1:
	msgbox LittlerootTown_BrendansHouse_1F_EventScript_Mom_Text_0
	release
	end

LittlerootTown_BrendansHouse_1F_EventScript_Mom_2:
	msgbox LittlerootTown_BrendansHouse_1F_EventScript_Mom_Text_1
	release
	end

LittlerootTown_BrendansHouse_1F_EventScript_Mom_3:
	msgbox LittlerootTown_BrendansHouse_1F_EventScript_Mom_Text_2
	release
	end

LittlerootTown_BrendansHouse_1F_EventScript_Mom_4:
	msgbox LittlerootTown_BrendansHouse_1F_EventScript_Mom_Text_3
	release
	end

LittlerootTown_BrendansHouse_1F_EventScript_Mom_5:
	msgbox LittlerootTown_BrendansHouse_1F_EventScript_Mom_Text_4
	release
	end

LittlerootTown_BrendansHouse_1F_EventScript_Mom_6:
	msgbox LittlerootTown_BrendansHouse_1F_EventScript_Mom_Text_5
	release
	end

LittlerootTown_BrendansHouse_1F_EventScript_Mom_7:
	msgbox LittlerootTown_BrendansHouse_1F_EventScript_Mom_Text_6
	release
	end

LittlerootTown_BrendansHouse_1F_EventScript_Mom_8:
	msgbox LittlerootTown_BrendansHouse_1F_EventScript_Mom_Text_7
	release
	end

LittlerootTown_BrendansHouse_1F_EventScript_Mom_9:
	msgbox LittlerootTown_BrendansHouse_1F_EventScript_Mom_Text_8
	release
	end

LittlerootTown_BrendansHouse_1F_EventScript_Mom_10:
	msgbox LittlerootTown_BrendansHouse_1F_EventScript_Mom_Text_9
	release
	end


LittlerootTown_BrendansHouse_1F_EventScript_OnFrameAfterE4_Text_0:
	.string "MOM: There's my new Champion!\p"
	.string "You're finally awake.$"

LittlerootTown_BrendansHouse_1F_EventScript_OnFrameAfterE4_Text_1:
	.string "DAD: Our battle must have exhausted\n"
	.string "you, {PLAYER}.\p"
	.string "You've been sleeping all morning!$"

LittlerootTown_BrendansHouse_1F_EventScript_OnFrameAfterE4_Text_2:
	.string "SHANE: Yeah! It's about time you woke\n"
	.string "up, you lazy bum!$"

LittlerootTown_BrendansHouse_1F_EventScript_OnFrameAfterE4_Text_3:
	.string "DAD: Thanks LYRA, I'll take it from here.$"

LittlerootTown_BrendansHouse_1F_EventScript_OnFrameAfterE4_Text_4:
	.string "We must strive to help all of those\n"
	.string "around us reach their full potential.\p"
	.string "Besides, you shouldn't discount your\n"
	.string "own growth.\p"
	.string "You really had me on the ropes through\n"
	.string "most of our battle!$"

LittlerootTown_BrendansHouse_1F_EventScript_OnFrameAfterE4_Text_5:
	.string "SHANE: Well, whatever.\p"
	.string "...\p"
	.string "Good job, I guess... {PLAYER}.$"

LittlerootTown_BrendansHouse_1F_EventScript_OnFrameAfterE4_Text_6:
	.string "DAD: Haha, it's a start.\p"
	.string "...\p"
	.string "You know, I always thought I could\n"
	.string "balance my POKéMON League duties with\l"
	.string "my home life, but I was wrong.\p"
	.string "Seeing you kids again made me realize\n"
	.string "that I want to spend as much time with\l"
	.string "you all as possible.\p"
	.string "So, I've decided to retire from the\n"
	.string "POKéMON League!$"

LittlerootTown_BrendansHouse_1F_EventScript_OnFrameAfterE4_Text_7:
	.string "MOM: That's wonderful!\p"
	.string "Although, it must have been a difficult\n"
	.string "decision.\p"
	.string "I know how much the League means to\n"
	.string "you.$"

LittlerootTown_BrendansHouse_1F_EventScript_OnFrameAfterE4_Text_8:
	.string "DAD: It was actually an easy choice to\n"
	.string "make.\p"
	.string "...\p"
	.string "By the way, an old friend of mine has\n"
	.string "invited me to the Millennium Comet\l"
	.string "Festival in Lazulan City.$"

LittlerootTown_BrendansHouse_1F_EventScript_OnFrameAfterE4_Text_9:
	.string "{PLAYER}, SHANE, I would like to bring\n"
	.string "you two along with me.$"

LittlerootTown_BrendansHouse_1F_EventScript_OnFrameAfterE4_Text_10:
	.string "SHANE: Really!?\p"
	.string "I've always wanted to visit the Golden\n"
	.string "Islands!\p"
	.string "I hear there are all kinds of strong\n"
	.string "TRAINERS that gather there.\p"
	.string "DAD: True, but you two shouldn't have\n"
	.string "any issues with them.\p"
	.string "Here, you'll need this S.S. Ticket.\p"
	.string "Hand it to the captian in Olivine City,\n"
	.string "and he'll take you to Apricotta Beach,\l"
	.string "a neighboring island.$"

LittlerootTown_BrendansHouse_1F_EventScript_OnFrameAfterE4_Text_11:
	.string "SHANE: This is great!\p"
	.string "I'll head there right now!$"

LittlerootTown_BrendansHouse_1F_EventScript_OnFrameAfterE4_Text_12:
	.string "DAD: Here, {PLAYER}.$"

LittlerootTown_BrendansHouse_1F_EventScript_OnFrameAfterE4_Text_13:
	.string "DAD: I'll see you in Lazulan City.\p"
	.string "Oh, by the way, I have a special gift for\n"
	.string "you.\p"
	.string "I'll leave it over here in case you need\n"
	.string "to make room in your party.$"

LittlerootTown_BrendansHouse_1F_EventScript_OnFrameAfterE4_Text_14:
	.string "DAD: Until next time.$"

LittlerootTown_BrendansHouse_1F_MalePlayerPostE4_Text_0:
	.string "MOM: SHANE!\p"
	.string "Be nice to your little brother!\p"
	.string "He deserves a break.$"

LittlerootTown_BrendansHouse_1F_FemalePlayerPostE4_Text_0:
	.string "MOM: SHANE!\p"
	.string "Be nice to your little sister!\p"
	.string "She deserves a break.$"

LittlerootTown_BrendansHouse_1F_MalePlayerPostE4Dad_Text_0:
	.string "Look, SHANE, I can tell you feel like\n"
	.string "{PLAYER} has surpassed you, and I'm\l"
	.string "sure it seems unfair, but you shouldn't\l"
	.string "lash out at him for it.\p"
	.string "A truly confident man would be happy to\n"
	.string "see his little brother's growth, and be\l"
	.string "proud of him.$"

LittlerootTown_BrendansHouse_1F_FemalePlayerPostE4Dad_Text_0:
	.string "Look, SHANE, I can tell you feel like\n"
	.string "{PLAYER} has surpassed you, and I'm\l"
	.string "sure it seems unfair, but you shouldn't\l"
	.string "lash out at her for it.\p"
	.string "A truly confident man would be happy to\n"
	.string "see his little sister's growth, and be\l"
	.string "proud of her.$"

LittlerootTown_BrendansHouse_1F_EnteiEgg_Text_0:
	.string "It's a POKéMON egg.\p"
	.string "There's no more room in your party for\n"
	.string "it.$"

LittlerootTown_BrendansHouse_1F_EnteiEgg_Text_1:
	.string "{PLAYER} received a POKéMON egg!$"

LittlerootTown_BrendansHouse_1F_Get_Started_Text_0:
	.string "MOM: Today is the day!\p"
	.string "Today you get to go choose your very\n"
	.string "first POKéMON.\p"
	.string "I'm so excited for you!\p"
	.string "Now, Route 29 can be dangerous.\p"
	.string "There are patches of grass where wild\n"
	.string "POKéMON can jump out and attack you.\p"
	.string "You will need someone to go with you and\n"
	.string "keep you safe.$"

LittlerootTown_BrendansHouse_1F_Get_Started_Text_1:
	.string "SHANE!$"

LittlerootTown_BrendansHouse_1F_Get_Started_Text_2:
	.string "SHANE: What, MOM?\n"
	.string "I'm busy right now.\p"
	.string "MOM: You can't be that busy, we all hear\n"
	.string "your drumming up there.\p"
	.string "Now come over here, I need to talk to\n"
	.string "you.\p"
	.string "SHANE: Ugh, fine.$"

LittlerootTown_BrendansHouse_1F_Get_Started_Text_3:
	.string "Just keep quiet, and follow me.$"

LittlerootTown_BrendansHouse_1F_Get_Started_Text_4:
	.string "MOM: Don't worry, sweetie.\p"
	.string "If SHANE gives you any trouble, just let\n"
	.string "me know.\p"
	.string "Azumarill and I will set him straight!\p"
	.string "Oh, and don't forget to take your shoes\n"
	.string "with you.$"

LittlerootTown_BrendansHouse_1F_Get_Started_Text_5:
	.string "{PLAYER} received the running shoes!$"

LittlerootTown_BrendansHouse_1F_Get_Started_Text_6:
	.string "Just remember to hold B when you want\n"
	.string "to run.\p"
	.string "Now go have fun!$"

LittlerootTown_BrendansHouse_1F_MalePlayer_Text_0:
	.string "MOM: SHANE, I need you to take your\n"
	.string "little brother over to New Bark Town to\l"
	.string "pick out his first POKéMON.$"

LittlerootTown_BrendansHouse_1F_MalePlayer_Text_1:
	.string "SHANE: What!? Why do I have to?\p"
	.string "MOM: That's enough, SHANE.\p"
	.string "You already have your first badge, and\n"
	.string "you're so close to getting your second.\p"
	.string "{PLAYER} can learn a lot from you.\p"
	.string "SHANE: Fine, I'll go.$"

LittlerootTown_BrendansHouse_1F_FemalePlayer_Text_0:
	.string "MOM: SHANE, I need you to take your\n"
	.string "little sister over to New Bark Town to\l"
	.string "pick out her first POKéMON.$"

LittlerootTown_BrendansHouse_1F_Azumarill_Text_0:
	.string "AZUMARILL: Azu! Azu!$"

LittlerootTown_BrendansHouse_1F_Get_Nav_Text_0:
	.string "...\p"
	.string "...\p"
	.string "Uh huh...\p"
	.string "...\p"
	.string "Oh that SHANE!\p"
	.string "He's really on my last nerve now!\p"
	.string "Ok, sweetie, take this with you.$"

LittlerootTown_BrendansHouse_1F_Get_Nav_Text_1:
	.string "{PLAYER} received a POKéNAV.$"

LittlerootTown_BrendansHouse_1F_Get_Nav_Text_2:
	.string "MOM: That is a POKéNAV, you can\n"
	.string "register people and call them anytime.\p"
	.string "It also has a map of the Johto region.\p"
	.string "Don't hesitate to call me if SHANE acts\n"
	.string "up again.\p"
	.string "Azumarill and I will take care of him!$"

LittlerootTown_BrendansHouse_1F_Get_Nav_Text_3:
	.string "MOM: Now get going, and don't worry\n"
	.string "about SHANE, ok.$"

LittlerootTown_BrendansHouse_1F_EventScript_Feraligatr_Text_0:
	.string "FERALIGATR: Grrahh!$"

LittlerootTown_BrendansHouse_1F_EventScript_FinalSilver_Text_0:
	.string "DAD: That festival was fun, but it's\n"
	.string "nice to be back home.\p"
	.string "I missed these relaxing days.$"

LittlerootTown_BrendansHouse_1F_EventScript_FinalShane_Text_0:
	.string "SHANE: What are you looking at, nerd?\p"
	.string "I could totally beat the new League\n"
	.string "Champion too, just wait for me to train\l"
	.string "up a bit more!$"

LittlerootTown_BrendansHouse_1F_EventScript_Mom_Text_0:
	.string "MOM: It's so nice to have your father\n"
	.string "home.\p"
	.string "You know, we really didn't get along\n"
	.string "very well when we first met.\p"
	.string "Fate sure has a strange sense of humor.$"

LittlerootTown_BrendansHouse_1F_EventScript_Mom_Text_1:
	.string "MOM: It was so nice to see your father\n"
	.string "again.\p"
	.string "It might be greedy of me, but I hope\n"
	.string "he's all finished with battling now.\p"
	.string "Then he could just stay here all the\n"
	.string "time!$"

LittlerootTown_BrendansHouse_1F_EventScript_Mom_Text_2:
	.string "MOM: Your father called to tell me all\n"
	.string "about what happened with Lugia and\l"
	.string "Ho-oh.\p"
	.string "We're both so proud of you!\p"
	.string "Oh, and I heard you met your\n"
	.string "grandmother...\p"
	.string "I hope you can forgive us for hiding her\n"
	.string "from you.\p"
	.string "She's such a nasty woman.$"

LittlerootTown_BrendansHouse_1F_EventScript_Mom_Text_3:
	.string "...\p"
	.string "MOM: What's that sweetie?\p"
	.string "...\p"
	.string "Hmm... Battling criminal groups and\n"
	.string "saving POKéMON is right up your\l"
	.string "father's alley.\p"
	.string "Someone needs to stop those jerks!$"

LittlerootTown_BrendansHouse_1F_EventScript_Mom_Text_4:
	.string "MOM: You saw a live Thunderbolts\n"
	.string "concert?\p"
	.string "That sounds like fun!\p"
	.string "I hope SHANE got to watch them too.\p"
	.string "The Thunderbolts are his favorite band,\n"
	.string "you know!$"

LittlerootTown_BrendansHouse_1F_EventScript_Mom_Text_5:
	.string "...\p"
	.string "MOM: What's that sweetie?\p"
	.string "...\p"
	.string "This Phoenix gang sounds like a nasty\n"
	.string "bunch of folks!\p"
	.string "We used to have a similar group who\n"
	.string "called themselves Team Rocket.$"

LittlerootTown_BrendansHouse_1F_EventScript_Mom_Text_6:
	.string "...\p"
	.string "MOM: What's that sweetie?\p"
	.string "...\p"
	.string "Time travel?\p"
	.string "You kids sure have wild imaginations!$"

LittlerootTown_BrendansHouse_1F_EventScript_Mom_Text_7:
	.string "MOM: Oh, you have two badges now?\p"
	.string "Keep at it, {PLAYER}!\p"
	.string "I know you'll become a POKéMON Master\n"
	.string "one day.$"

LittlerootTown_BrendansHouse_1F_EventScript_Mom_Text_8:
	.string "...\p"
	.string "MOM: What's that sweetie?\p"
	.string "You saw a legendary POKéMON?\p"
	.string "Yellow with black stripes?\p"
	.string "Your father will love to hear about\n"
	.string "this.$"

LittlerootTown_BrendansHouse_1F_EventScript_Mom_Text_9:
	.string "MOM: That POKéNAV is a really handy\n"
	.string "tool.\p"
	.string "All of the best POKéMON TRAINERS have\n"
	.string "one!$"

LittlerootTown_BrendansHouse_1F_EventScript_Mom_Text_10:
	.string "MOM: Don't worry, sweetie.\p"
	.string "If SHANE gives you any trouble, just let\n"
	.string "me know.\p"
	.string "Azumarill and I will set him straight!$"

Come_Here::
	.string "MOM: There you are, {PLAYER}.$"

LittlerootTown_BrendansHouse_1F_WhatHappened::
	.string "MOM: {PLAYER}, you're awake!\p"
	.string "Come over and tell me what happened.$"
