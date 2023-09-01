LittlerootTown_ProfessorBirchsLab_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, LittlerootTown_ProfessorBirchsLab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

LittlerootTown_ProfessorBirchsLab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
	map_script_2 VAR_CHERRYGROVE_STATE, 2, LittlerootTown_ProfessorBirchsLab_OnFrame
	.2byte 0


LittlerootTown_ProfessorBirchsLab_OnFrame::
	lock
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_ProfessorBirchsLab_WalkToElm
	waitmovement 0
	msgbox LittlerootTown_ProfessorBirchsLab_OnFrame_Text_0
	waitmessage
	closemessage
	applymovement 2, LittlerootTown_ProfessorBirchsLab_StepLeftFaceRight
	waitmovement 0
	msgbox LittlerootTown_ProfessorBirchsLab_OnFrame_Text_1
	waitmessage
	closemessage
	applymovement 2, LittlerootTown_ProfessorBirchsLab_StepinplaceRight
	waitmovement 0
	msgbox LittlerootTown_ProfessorBirchsLab_OnFrame_Text_2
	waitmessage
	closemessage
	setrespawn HEAL_LOCATION_LITTLEROOT_TOWN_BRENDANS_HOUSE
	clearflag FLAG_HIDE_SHANE_CHERRYGROVE_BATTLE
	addvar VAR_CHERRYGROVE_STATE, 1
	release
	end


LittlerootTown_ProfessorBirchsLab_ChikoritaBall::
	lock
	goto_if_set FLAG_SYS_POKEMON_GET, LittlerootTown_ProfessorBirchsLab_ChikoritaBall_1
	showmonpic SPECIES_CHIKORITA, 10, 3
	msgbox LittlerootTown_ProfessorBirchsLab_ChikoritaBall_Text_1, MSGBOX_YESNO
	compare VAR_RESULT, 1
	goto_if_ne LittlerootTown_ProfessorBirchsLab_ChikoritaBall_4
	givemon SPECIES_CHIKORITA, 5
	playfanfare MUS_OBTAIN_ITEM
	msgbox LittlerootTown_ProfessorBirchsLab_ChikoritaBall_Text_3
	waitmessage
	waitfanfare
	removeobject 6
	setflag FLAG_HIDE_CHIKORITA_BALL
	msgbox LittlerootTown_ProfessorBirchsLab_ChikoritaBall_Text_4, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_ne LittlerootTown_ProfessorBirchsLab_ChikoritaBall_8
LittlerootTown_ProfessorBirchsLab_ChikoritaBall_7:
	call Common_EventScript_GetGiftMonPartySlot
	call Common_EventScript_NameReceivedPartyMon
	goto LittlerootTown_ProfessorBirchsLab_ReceivedChikorita
	return

LittlerootTown_ProfessorBirchsLab_ChikoritaBall_1:
	msgbox LittlerootTown_ProfessorBirchsLab_ChikoritaBall_Text_0
	waitmessage
	closemessage
	release
	end

LittlerootTown_ProfessorBirchsLab_ChikoritaBall_4:
	hidemonpic
	msgbox LittlerootTown_ProfessorBirchsLab_ChikoritaBall_Text_2
	release
	end

LittlerootTown_ProfessorBirchsLab_ChikoritaBall_8:
	goto LittlerootTown_ProfessorBirchsLab_ReceivedChikorita
	goto LittlerootTown_ProfessorBirchsLab_ChikoritaBall_7


LittlerootTown_ProfessorBirchsLab_ReceivedChikorita::
	hidemonpic
	setflag FLAG_SYS_POKEMON_GET
	msgbox LittlerootTown_ProfessorBirchsLab_ReceivedChikorita_Text_0
	waitmessage
	closemessage
	applymovement 2, LittlerootTown_ProfessorBirchsLab_ElmToPlayerChik
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown__ProfessorBirchsLab_FaceDown
	waitmovement 0
	call LittlerootTown_ProfessorBirchsLab_Inbetween
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown__ProfessorBirchsLab_FaceLeft
	applymovement 2, LittlerootTown_ProfessorBirchsLab_ElmToMachine
	waitmovement 0
	msgbox LittlerootTown_ProfessorBirchsLab_ReceivedChikorita_Text_1
	waitmessage
	closemessage
	applymovement 2, LittlerootTown_ProfessorBirchsLab_ElmStepDown
	waitmovement 0
	msgbox LittlerootTown_ProfessorBirchsLab_ReceivedChikorita_Text_2
	waitmessage
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown__ProfessorBirchsLab_FaceDown
	waitmovement 0
	addvar VAR_CHERRYGROVE_STATE, 1
	release
	end


LittlerootTown_ProfessorBirchsLab_TotodileBall::
	lock
	goto_if_set FLAG_SYS_POKEMON_GET, LittlerootTown_ProfessorBirchsLab_TotodileBall_1
	showmonpic SPECIES_TOTODILE, 10, 3
	msgbox LittlerootTown_ProfessorBirchsLab_TotodileBall_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, 1
	goto_if_ne LittlerootTown_ProfessorBirchsLab_TotodileBall_4
	givemon SPECIES_TOTODILE, 5
	playfanfare MUS_OBTAIN_ITEM
	msgbox LittlerootTown_ProfessorBirchsLab_TotodileBall_Text_1
	waitmessage
	waitfanfare
	removeobject 5
	setflag FLAG_HIDE_TOTODILE_BALL
	msgbox LittlerootTown_ProfessorBirchsLab_TotodileBall_Text_2, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_ne LittlerootTown_ProfessorBirchsLab_TotodileBall_8
LittlerootTown_ProfessorBirchsLab_TotodileBall_7:
	call Common_EventScript_GetGiftMonPartySlot
	call Common_EventScript_NameReceivedPartyMon
	goto LittlerootTown_ProfessorBirchsLab_ReceivedTotodile
	return

LittlerootTown_ProfessorBirchsLab_TotodileBall_1:
	msgbox LittlerootTown_ProfessorBirchsLab_ChikoritaBall_Text_0
	waitmessage
	closemessage
	release
	end

LittlerootTown_ProfessorBirchsLab_TotodileBall_4:
	hidemonpic
	msgbox LittlerootTown_ProfessorBirchsLab_ChikoritaBall_Text_2
	release
	end

LittlerootTown_ProfessorBirchsLab_TotodileBall_8:
	goto LittlerootTown_ProfessorBirchsLab_ReceivedTotodile
	goto LittlerootTown_ProfessorBirchsLab_TotodileBall_7


LittlerootTown_ProfessorBirchsLab_ReceivedTotodile::
	hidemonpic
	setflag FLAG_SYS_POKEMON_GET
	msgbox LittlerootTown_ProfessorBirchsLab_ReceivedChikorita_Text_0
	waitmessage
	closemessage
	applymovement 2, LittlerootTown_ProfessorBirchsLab_ElmToPlayerToto
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown__ProfessorBirchsLab_FaceDown
	waitmovement 0
	call LittlerootTown_ProfessorBirchsLab_Inbetween
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown__ProfessorBirchsLab_FaceLeft
	applymovement 2, LittlerootTown_ProfessorBirchsLab_ElmToMachineToto
	waitmovement 0
	msgbox LittlerootTown_ProfessorBirchsLab_ReceivedChikorita_Text_1
	waitmessage
	closemessage
	applymovement 2, LittlerootTown_ProfessorBirchsLab_ElmStepDown
	waitmovement 0
	msgbox LittlerootTown_ProfessorBirchsLab_ReceivedChikorita_Text_2
	waitmessage
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown__ProfessorBirchsLab_FaceDown
	waitmovement 0
	addvar VAR_CHERRYGROVE_STATE, 1
	release
	end


LittlerootTown_ProfessorBirchsLab_CyndaquilBall::
	lock
	goto_if_set FLAG_SYS_POKEMON_GET, LittlerootTown_ProfessorBirchsLab_CyndaquilBall_1
	showmonpic SPECIES_CYNDAQUIL, 10, 3
	msgbox LittlerootTown_ProfessorBirchsLab_CyndaquilBall_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, 1
	goto_if_ne LittlerootTown_ProfessorBirchsLab_CyndaquilBall_4
	givemon SPECIES_CYNDAQUIL, 5
	playfanfare MUS_OBTAIN_ITEM
	msgbox LittlerootTown_ProfessorBirchsLab_CyndaquilBall_Text_1
	waitmessage
	waitfanfare
	removeobject 4
	setflag FLAG_HIDE_CYNDAQUIL_BALL
	msgbox LittlerootTown_ProfessorBirchsLab_CyndaquilBall_Text_2, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_ne LittlerootTown_ProfessorBirchsLab_CyndaquilBall_8
LittlerootTown_ProfessorBirchsLab_CyndaquilBall_7:
	call Common_EventScript_GetGiftMonPartySlot
	call Common_EventScript_NameReceivedPartyMon
	goto LittlerootTown_ProfessorBirchsLab_ReceivedCyndaquil
	return

LittlerootTown_ProfessorBirchsLab_CyndaquilBall_1:
	msgbox LittlerootTown_ProfessorBirchsLab_ChikoritaBall_Text_0
	waitmessage
	closemessage
	release
	end

LittlerootTown_ProfessorBirchsLab_CyndaquilBall_4:
	hidemonpic
	msgbox LittlerootTown_ProfessorBirchsLab_ChikoritaBall_Text_2
	release
	end

LittlerootTown_ProfessorBirchsLab_CyndaquilBall_8:
	goto LittlerootTown_ProfessorBirchsLab_ReceivedCyndaquil
	goto LittlerootTown_ProfessorBirchsLab_CyndaquilBall_7


LittlerootTown_ProfessorBirchsLab_ReceivedCyndaquil::
	hidemonpic
	setflag FLAG_SYS_POKEMON_GET
	msgbox LittlerootTown_ProfessorBirchsLab_ReceivedChikorita_Text_0
	waitmessage
	closemessage
	applymovement 2, LittlerootTown_ProfessorBirchsLab_ElmToPlayerCynda
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown__ProfessorBirchsLab_FaceDown
	waitmovement 0
	call LittlerootTown_ProfessorBirchsLab_Inbetween
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown__ProfessorBirchsLab_FaceLeft
	applymovement 2, LittlerootTown_ProfessorBirchsLab_ElmToMachineCynda
	waitmovement 0
	msgbox LittlerootTown_ProfessorBirchsLab_ReceivedChikorita_Text_1
	waitmessage
	closemessage
	applymovement 2, LittlerootTown_ProfessorBirchsLab_ElmStepDown
	waitmovement 0
	msgbox LittlerootTown_ProfessorBirchsLab_ReceivedChikorita_Text_2
	waitmessage
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown__ProfessorBirchsLab_FaceDown
	waitmovement 0
	addvar VAR_CHERRYGROVE_STATE, 1
	release
	end


LittlerootTown_ProfessorBirchsLab_Inbetween::
	msgbox LittlerootTown_ProfessorBirchsLab_Inbetween_Text_0
	waitmessage
	closemessage
	applymovement 2, LittlerootTown_ProfessorBirchsLab_ElmStepRight
	waitmovement 0
	msgbox LittlerootTown_ProfessorBirchsLab_Inbetween_Text_1
	waitmessage
	closemessage
	applymovement 2, LittlerootTown_ProfessorBirchsLab_ElmStepUp
	waitmovement 0
	msgbox LittlerootTown_ProfessorBirchsLab_Inbetween_Text_2
	waitmessage
	closemessage
	playfanfare MUS_OBTAIN_ITEM
	msgbox LittlerootTown_ProfessorBirchsLab_Inbetween_Text_3
	waitfanfare
	setflag FLAG_SYS_POKEDEX_GET
	special SetUnlockedPokedexFlags
	setflag FLAG_RECEIVED_POKEDEX_FROM_BIRCH
	setflag FLAG_SYS_NATIONAL_DEX
	special EnableNationalPokedex
	setvar VAR_CABLE_CLUB_TUTORIAL_STATE, 1
	msgbox LittlerootTown_ProfessorBirchsLab_Inbetween_Text_4
	waitmessage
	closemessage
	applymovement 2, LittlerootTown_ProfessorBirchsLab_ElmStepDown
	waitmovement 0
	msgbox LittlerootTown_ProfessorBirchsLab_Inbetween_Text_5
	waitmessage
	closemessage
	applymovement 2, LittlerootTown_ProfessorBirchsLab_ElmStepUp
	waitmovement 0
	msgbox LittlerootTown_ProfessorBirchsLab_Inbetween_Text_6
	waitmessage
	closemessage
	giveitem ITEM_OAKS_PARCEL, 1
	msgbox LittlerootTown_ProfessorBirchsLab_Inbetween_Text_7
	waitmessage
	closemessage
	return


LittlerootTown_ProfessorBirchsLab_Trigger::
	lock
	msgbox LittlerootTown_ProfessorBirchsLab_Trigger_Text_0
	waitmessage
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_PlayerWalkUp
	waitmovement 0
	release
	end


LittlerootTown_ProfessorBirchsLab_AidTrigger1::
	lock
	playse SE_PIN
	applymovement 1, LittlerootTown_ProfessorBirchsLab_Apostraphe
	waitmovement 0
	delay 30
	applymovement 1, LittlerootTown_ProfessorBirchsLab_ElmToPlayerChik
	waitmovement 0
	msgbox LittlerootTown_ProfessorBirchsLab_AidTrigger1_Text_0
	waitmessage
	closemessage
	giveitem ITEM_POKE_BALL, 5
	msgbox LittlerootTown_ProfessorBirchsLab_AidTrigger1_Text_1
	waitmessage
	closemessage
	applymovement 1, LittlerootTown_ProfessorBirchsLab_AidBack1
	waitmovement 0
	addvar VAR_CHERRYGROVE_STATE, 1
	release
	end


LittlerootTown_ProfessorBirchsLab_AidTrigger2::
	lock
	playse SE_PIN
	applymovement 1, LittlerootTown_ProfessorBirchsLab_Apostraphe
	waitmovement 0
	delay 30
	applymovement 1, LittlerootTown_ProfessorBirchsLab_ElmToPlayerToto
	waitmovement 0
	msgbox LittlerootTown_ProfessorBirchsLab_AidTrigger1_Text_0
	waitmessage
	closemessage
	giveitem ITEM_POKE_BALL, 5
	msgbox LittlerootTown_ProfessorBirchsLab_AidTrigger1_Text_1
	waitmessage
	closemessage
	applymovement 1, LittlerootTown_ProfessorBirchsLab_AidBack2
	waitmovement 0
	addvar VAR_CHERRYGROVE_STATE, 1
	release
	end


LittlerootTown_ProfessorBirchsLab_AidTrigger3::
	lock
	playse SE_PIN
	applymovement 1, LittlerootTown_ProfessorBirchsLab_Apostraphe
	waitmovement 0
	delay 30
	applymovement 1, LittlerootTown_ProfessorBirchsLab_ElmToPlayerCynda
	waitmovement 0
	msgbox LittlerootTown_ProfessorBirchsLab_AidTrigger1_Text_0
	waitmessage
	closemessage
	giveitem ITEM_POKE_BALL, 5
	msgbox LittlerootTown_ProfessorBirchsLab_AidTrigger1_Text_1
	waitmessage
	closemessage
	applymovement 1, LittlerootTown_ProfessorBirchsLab_AidBack3
	waitmovement 0
	addvar VAR_CHERRYGROVE_STATE, 1
	release
	end


LittlerootTown_ProfessorBirchsLab_AidTrigger4::
	lock
	playse SE_PIN
	applymovement 1, LittlerootTown_ProfessorBirchsLab_Apostraphe
	waitmovement 0
	delay 30
	applymovement 1, LittlerootTown_ProfessorBirchsLab_AidtoPlayer4
	waitmovement 0
	msgbox LittlerootTown_ProfessorBirchsLab_AidTrigger1_Text_0
	waitmessage
	closemessage
	giveitem ITEM_POKE_BALL, 5
	msgbox LittlerootTown_ProfessorBirchsLab_AidTrigger1_Text_1
	waitmessage
	closemessage
	applymovement 1, LittlerootTown_ProfessorBirchsLab_AidBack4
	waitmovement 0
	addvar VAR_CHERRYGROVE_STATE, 1
	release
	end


LittlerootTown_ProfessorBirchsLab_AidTrigger5::
	lock
	playse SE_PIN
	applymovement 1, LittlerootTown_ProfessorBirchsLab_Apostraphe
	waitmovement 0
	delay 30
	applymovement 1, LittlerootTown_ProfessorBirchsLab_AidtoPlayer5
	waitmovement 0
	msgbox LittlerootTown_ProfessorBirchsLab_AidTrigger1_Text_0
	waitmessage
	closemessage
	giveitem ITEM_POKE_BALL, 5
	msgbox LittlerootTown_ProfessorBirchsLab_AidTrigger1_Text_1
	waitmessage
	closemessage
	applymovement 1, LittlerootTown_ProfessorBirchsLab_AidBack5
	waitmovement 0
	addvar VAR_CHERRYGROVE_STATE, 1
	release
	end


LittlerootTown_ProfessorBirchsLab_HealingMachine::
	lock
	goto_if_unset FLAG_SYS_POKEMON_GET, LittlerootTown_ProfessorBirchsLab_HealingMachine_2
	playse SE_PC_ON
	waitse
	msgbox LittlerootTown_ProfessorBirchsLab_HealingMachine_Text_1, MSGBOX_YESNO
	compare VAR_RESULT, 1
	goto_if_ne LittlerootTown_ProfessorBirchsLab_HealingMachine_4
	msgbox LittlerootTown_ProfessorBirchsLab_HealingMachine_Text_2
	delay 30
	special HealPlayerParty
	playse SE_USE_ITEM
	waitse
	msgbox LittlerootTown_ProfessorBirchsLab_HealingMachine_Text_3
	waitmessage
	closemessage
	playse SE_PC_OFF
	waitse
	release
	end

LittlerootTown_ProfessorBirchsLab_HealingMachine_2:
	msgbox LittlerootTown_ProfessorBirchsLab_HealingMachine_Text_0
	waitmessage
	closemessage
	release
	end

LittlerootTown_ProfessorBirchsLab_HealingMachine_4:
	playse SE_PC_OFF
	waitse
	release
	end


LittlerootTown_ProfessorBirchsLab_WalkToElm:
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

LittlerootTown_ProfessorBirchsLab_StepLeftFaceRight:
	walk_left
	walk_left
	face_right
	step_end

LittlerootTown_ProfessorBirchsLab_StepinplaceRight:
	walk_in_place_right
	step_end

LittlerootTown_PlayerWalkUp:
	walk_up
	step_end

LittlerootTown_ProfessorBirchsLab_ElmToPlayerChik:
	walk_right
	face_up
	step_end

LittlerootTown_ProfessorBirchsLab_ElmToPlayerToto:
	walk_right
	walk_right
	face_up
	step_end

LittlerootTown_ProfessorBirchsLab_ElmToPlayerCynda:
	walk_right
	walk_right
	walk_right
	face_up
	step_end

LittlerootTown_ProfessorBirchsLab_AidtoPlayer4:
	walk_right
	walk_right
	walk_right
	walk_right
	face_up
	step_end

LittlerootTown_ProfessorBirchsLab_AidtoPlayer5:
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	face_up
	step_end

LittlerootTown_ProfessorBirchsLab_AidBack1:
	walk_left
	face_down
	step_end

LittlerootTown_ProfessorBirchsLab_AidBack2:
	walk_left
	walk_left
	face_down
	step_end

LittlerootTown_ProfessorBirchsLab_AidBack3:
	walk_left
	walk_left
	walk_left
	face_down
	step_end

LittlerootTown_ProfessorBirchsLab_AidBack4:
	walk_left
	walk_left
	walk_left
	walk_left
	face_down
	step_end

LittlerootTown_ProfessorBirchsLab_AidBack5:
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	face_down
	step_end

LittlerootTown__ProfessorBirchsLab_FaceDown:
	face_down
	step_end

LittlerootTown_ProfessorBirchsLab_ElmStepRight:
	walk_in_place_right
	step_end

LittlerootTown_ProfessorBirchsLab_ElmStepUp:
	walk_in_place_up
	step_end

LittlerootTown_ProfessorBirchsLab_ElmStepDown:
	walk_in_place_down
	step_end

LittlerootTown_ProfessorBirchsLab_ElmToMachine:
	walk_left
	walk_up
	walk_up
	walk_left
	step_end

LittlerootTown_ProfessorBirchsLab_ElmToMachineToto:
	walk_left
	walk_left
	walk_up
	walk_up
	walk_left
	step_end

LittlerootTown_ProfessorBirchsLab_ElmToMachineCynda:
	walk_left
	walk_left
	walk_left
	walk_up
	walk_up
	walk_left
	step_end

LittlerootTown__ProfessorBirchsLab_FaceLeft:
	face_left
	step_end

LittlerootTown_ProfessorBirchsLab_Apostraphe:
	emote_exclamation_mark
	step_end

LittlerootTown_ProfessorBirchsLab_EventScript_Aide1::
	msgbox LittlerootTown_ProfessorBirchsLab_EventScript_Aide1_Text_0, MSGBOX_NPC
	end


LittlerootTown_ProfessorBirchsLab_EventScript_Aide2::
	msgbox LittlerootTown_ProfessorBirchsLab_EventScript_Aide2_Text_0, MSGBOX_NPC
	end


LittlerootTown_ProfessorBirchsLab_EventScript_Elm::
	lock
	faceplayer
	goto_if_unset FLAG_SYS_POKEMON_GET, LittlerootTown_ProfessorBirchsLab_EventScript_Elm_1
	msgbox LittlerootTown_ProfessorBirchsLab_EventScript_Elm_Text_1, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_ne LittlerootTown_ProfessorBirchsLab_EventScript_Elm_4
	setvar VAR_0x8004, 1
	specialvar VAR_RESULT, ScriptGetPokedexInfo
	copyvar VAR_0x8008, VAR_0x8005
	copyvar VAR_0x8009, VAR_0x8006
	buffernumberstring STR_VAR_1, VAR_0x8008
	buffernumberstring STR_VAR_2, VAR_0x8009
	msgbox gBirchDexRatingText_OnANationwideBasis, MSGBOX_DEFAULT
	call ProfBirch_EventScript_ShowRatingMessage
	release
	end

LittlerootTown_ProfessorBirchsLab_EventScript_Elm_1:
	msgbox LittlerootTown_ProfessorBirchsLab_EventScript_Elm_Text_0
	waitmessage
	closemessage
	release
	end

LittlerootTown_ProfessorBirchsLab_EventScript_Elm_4:
	msgbox LittlerootTown_ProfessorBirchsLab_EventScript_Elm_Text_2
	waitmessage
	closemessage
	release
	end


LittlerootTown_ProfessorBirchsLab_EventScript_PC::
	msgbox LittlerootTown_ProfessorBirchsLab_Text_PCUsedForResearch, MSGBOX_SIGN
	end

LittlerootTown_ProfessorBirchsLab_EventScript_Bookshelf::
	msgbox LittlerootTown_ProfessorBirchsLab_Text_CrammedWithBooksOnPokemon, MSGBOX_SIGN
	end

LittlerootTown_ProfessorBirchsLab_EventScript_Book::
	msgbox LittlerootTown_ProfessorBirchsLab_Text_BookTooHardToRead, MSGBOX_SIGN
	end

LittlerootTown_ProfessorBirchsLab_Text_PCUsedForResearch:
	.string "It's a PC used for research.\n"
	.string "Better not mess around with it.$"

LittlerootTown_ProfessorBirchsLab_Text_CrammedWithBooksOnPokemon:
	.string "It's crammed with books on POKéMON.$"

LittlerootTown_ProfessorBirchsLab_Text_BookTooHardToRead:
	.string "It's a book that's too hard to read.$"

LittlerootTown_ProfessorBirchsLab_OnFrame_Text_0:
	.string "PROF. ELM: Welcome!\p"
	.string "You must be {PLAYER}, I've been\n"
	.string "expecting you.\p"
	.string "My name is PROF. ELM. I specialize in the\n"
	.string "study of POKéMON evolution and\l"
	.string "reproduction, but enough about me.\p"
	.string "I've heard from your mother that you\n"
	.string "want to become a great POKéMON master.\l"
	.string "Following in your father's footsteps,\l"
	.string "it seems.\p"
	.string "I admire your ambition, those are big\n"
	.string "shoes for anyone to fill. Very well\l"
	.string "then, if you want to become a great\l"
	.string "POKéMON master, you will first need a\l"
	.string "POKéMON of your own.$"

LittlerootTown_ProfessorBirchsLab_OnFrame_Text_1:
	.string "On this table are three POKéBALLs, and\n"
	.string "each one contains a POKéMON.\p"
	.string "Each has its own strengths and\n"
	.string "weaknesses, but will certainly become a\l"
	.string "strong member of any team, and a\l"
	.string "valuable ally that I hope you will\l"
	.string "cherish for many years.$"

LittlerootTown_ProfessorBirchsLab_OnFrame_Text_2:
	.string "Now go on, you may choose one of the\n"
	.string "three.$"

LittlerootTown_ProfessorBirchsLab_ChikoritaBall_Text_0:
	.string "One of PROF. ELM's POKéMON, better not\n"
	.string "get greedy.$"

LittlerootTown_ProfessorBirchsLab_ChikoritaBall_Text_1:
	.string "So, you will take the grass type,\n"
	.string "CHIKORITA?$"

LittlerootTown_ProfessorBirchsLab_ChikoritaBall_Text_2:
	.string "Please take your time, no need to rush.$"

LittlerootTown_ProfessorBirchsLab_ChikoritaBall_Text_3:
	.string "{PLAYER} received the CHIKORITA!$"

LittlerootTown_ProfessorBirchsLab_ChikoritaBall_Text_4:
	.string "Do you want to give a nickname to this\n"
	.string "CHIKORITA?$"

LittlerootTown_ProfessorBirchsLab_ReceivedChikorita_Text_0:
	.string "PROF. ELM: A fantastic choice! It seems\n"
	.string "rather fond of you.$"

LittlerootTown_ProfessorBirchsLab_ReceivedChikorita_Text_1:
	.string "By the way, if your POKéMON get injured,\n"
	.string "feel free to use this machine to heal\l"
	.string "them.$"

LittlerootTown_ProfessorBirchsLab_ReceivedChikorita_Text_2:
	.string "Now then, off you go. Good luck!$"

LittlerootTown_ProfessorBirchsLab_TotodileBall_Text_0:
	.string "So, you will take the water type,\n"
	.string "TOTODILE?$"

LittlerootTown_ProfessorBirchsLab_TotodileBall_Text_1:
	.string "{PLAYER} received the TOTODILE!$"

LittlerootTown_ProfessorBirchsLab_TotodileBall_Text_2:
	.string "Do you want to give a nickname to this\n"
	.string "TOTODILE?$"

LittlerootTown_ProfessorBirchsLab_CyndaquilBall_Text_0:
	.string "So, you will take the fire type,\n"
	.string "CYNDAQUIL?$"

LittlerootTown_ProfessorBirchsLab_CyndaquilBall_Text_1:
	.string "{PLAYER} received the CYNDAQUIL!$"

LittlerootTown_ProfessorBirchsLab_CyndaquilBall_Text_2:
	.string "Do you want to give a nickname to this\n"
	.string "CYNDAQUIL?$"

LittlerootTown_ProfessorBirchsLab_Inbetween_Text_0:
	.string "You know, I gave your brother his first\n"
	.string "POKéMON just a few years ago. Such a\l"
	.string "rambunctious child.\p"
	.string "Just between you and me; I much prefer\n"
	.string "your attitude over his.$"

LittlerootTown_ProfessorBirchsLab_Inbetween_Text_1:
	.string "Ehrm, back to business.$"

LittlerootTown_ProfessorBirchsLab_Inbetween_Text_2:
	.string "You should also take this with you...$"

LittlerootTown_ProfessorBirchsLab_Inbetween_Text_3:
	.string "{PLAYER} received the POKéDEX!$"

LittlerootTown_ProfessorBirchsLab_Inbetween_Text_4:
	.string "PROF. ELM: That POKéDEX is a high-tech\n"
	.string "encyclopedia that will automatically\l"
	.string "record any POKéMON you see or catch.\l"
	.string "There are an extensive number of\l"
	.string "POKéMON in the Johto region these\l"
	.string "days, so filling it out will certainly be\l"
	.string "a challenge.$"

LittlerootTown_ProfessorBirchsLab_Inbetween_Text_5:
	.string "Now, I actually have a personal favor to\n"
	.string "ask of you.$"

LittlerootTown_ProfessorBirchsLab_Inbetween_Text_6:
	.string "My son, OLIVER is studying ancient and\n"
	.string "legendary POKéMON at the university in\l"
	.string "Violet City.\p"
	.string "He is currently at the Ruins of Alph\n"
	.string "doing field research, but he forgot his\l"
	.string "notebook here in the lab.\p"
	.string "Would you mind bringing it to him?$"

LittlerootTown_ProfessorBirchsLab_Inbetween_Text_7:
	.string "PROF. ELM: Thank you for your help,\n"
	.string "{PLAYER}!\p"
	.string "I suspect you will be headed to Violet\n"
	.string "City anyway, as it is also the home of\l"
	.string "the Violet City Gym.\p"
	.string "Battling gym leaders and collecting gym\n"
	.string "badges is an integral part of becoming\l"
	.string "a POKéMON master after-all.$"

LittlerootTown_ProfessorBirchsLab_Trigger_Text_0:
	.string "Wait, don't leave yet. You still haven't\n"
	.string "chosen your POKéMON.$"

LittlerootTown_ProfessorBirchsLab_AidTrigger1_Text_0:
	.string "Hi! I am one of PROF. ELM's aids.\p"
	.string "I would like you to take these for your\n"
	.string "journey.$"

LittlerootTown_ProfessorBirchsLab_AidTrigger1_Text_1:
	.string "That should help you get started. Feel\n"
	.string "free to stop by and visit the lab any\l"
	.string "time!$"

LittlerootTown_ProfessorBirchsLab_HealingMachine_Text_0:
	.string "It's some kind of machine, probably\n"
	.string "shouldn't mess with it.$"

LittlerootTown_ProfessorBirchsLab_HealingMachine_Text_1:
	.string "Would you like to heal your POKéMON?$"

LittlerootTown_ProfessorBirchsLab_HealingMachine_Text_2:
	.string "Healing sequence initiated...$"

LittlerootTown_ProfessorBirchsLab_HealingMachine_Text_3:
	.string "Your POKéMON have been fully restored.$"

LittlerootTown_ProfessorBirchsLab_EventScript_Aide1_Text_0:
	.string "PROF. ELM has been credited with the\n"
	.string "discovery of POKéMON eggs.\p"
	.string "I still find it hard to believe that\n"
	.string "nobody had seen a POKéMON egg before\l"
	.string "that.$"

LittlerootTown_ProfessorBirchsLab_EventScript_Aide2_Text_0:
	.string "Have you heard of Hidden Abilities?\p"
	.string "Using an Ability Patch on your POKéMON\n"
	.string "will change its non-Hidden Ability to\l"
	.string "its Hidden Ability permanently.$"

LittlerootTown_ProfessorBirchsLab_EventScript_Elm_Text_0:
	.string "Go on, you may choose one of the three.$"

LittlerootTown_ProfessorBirchsLab_EventScript_Elm_Text_1:
	.string "PROF. ELM: {PLAYER}, how are you? I\n"
	.string "hope you've been treating my old\l"
	.string "POKéMON well.\p"
	.string "Oh, would you like me to rate your\n"
	.string "POKéDEX?$"

LittlerootTown_ProfessorBirchsLab_EventScript_Elm_Text_2:
	.string "Maybe some other time, then.$"
