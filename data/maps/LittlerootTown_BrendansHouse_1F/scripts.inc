LittlerootTown_BrendansHouse_1F_MapScripts::
	.byte 0


LittlerootTown_BrendansHouse_1F_Trigger_1::
	lockall
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
	lockall
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
	lockall
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
	playse SE_DOOR
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
	playse SE_DOOR
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
	releaseall
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
	lockall
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
	lockall
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
	lockall
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
	applymovement 1, LittlerootTown_BrendansHouse_1F_FaceRight
	waitmovement 0
	msgbox LittlerootTown_BrendansHouse_1F_Get_Nav_Text_3
	waitmessage
	closemessage
	waitse
	playmoncry SPECIES_AZUMARILL, CRY_MODE_NORMAL
	applymovement 6, LittlerootTown_BrendansHouse_1F_DownExclamation
	waitmovement 0
	msgbox LittlerootTown_BrendansHouse_1F_Azumarill_Text_0
	waitmessage
	closemessage
	waitmoncry
	applymovement 1, LittlerootTown_BrendansHouse_1F_FaceLeft
	waitmovement 0
	msgbox LittlerootTown_BrendansHouse_1F_Get_Nav_Text_4
	waitmessage
	closemessage
	applymovement 1, LittlerootTown_BrendansHouse_1F_FaceRight
	waitmovement 0
	setflag FLAG_HAS_MATCH_CALL
	setflag FLAG_ADDED_MATCH_CALL_TO_POKENAV
	setflag FLAG_ENABLE_MOM_MATCH_CALL
	setflag FLAG_ADVENTURE_STARTED
	releaseall
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
	walk_in_place_down
	emote_exclamation_mark
	step_end

LittlerootTown_BrendansHouse_1F_Get_Started_Text_0:
	.string "Today is the day!\p"
	.string "Today you get to go choose your very\n"
	.string "first POKéMON. I'm so excited for you!\p"
	.string "Now, Route 29 can be dangerous. There\n"
	.string "are patches of grass where wild\l"
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
	.string "MOM: Don't worry, sweetie. If SHANE\n"
	.string "gives you any trouble, just let me know.\l"
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
	.string "MOM: That's enough, SHANE. You already\n"
	.string "have your first badge, and you're close\l"
	.string "to getting your second. {PLAYER} can\l"
	.string "learn a lot from you.\p"
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
	.string "register people and call them anytime.\l"
	.string "It also has a map of the Johto region.\p"
	.string "Don't hesitate to call me if SHANE acts\n"
	.string "up again. Azumarill and I will take care\l"
	.string "of him.$"

LittlerootTown_BrendansHouse_1F_Get_Nav_Text_3:
	.string "Right, Azumarill?$"

LittlerootTown_BrendansHouse_1F_Get_Nav_Text_4:
	.string "MOM: Now get going, and don't worry\n"
	.string "about SHANE, ok.$"

Come_Here::
	.string "MOM: There you are, {PLAYER}.$"

LittlerootTown_BrendansHouse_1F_WhatHappened::
	.string "MOM: {PLAYER}, you're awake!\p"
	.string "Come over and tell me what happened.$"
