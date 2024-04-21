MtPyre_5F_MapScripts::
	map_script MAP_SCRIPT_ON_LOAD, MtPyre_5F_MapScripts_MAP_SCRIPT_ON_LOAD
	map_script MAP_SCRIPT_ON_FRAME_TABLE, MtPyre_5F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

MtPyre_5F_MapScripts_MAP_SCRIPT_ON_LOAD:
	goto_if_set FLAG_HOOH_BRAILLE_DOOR_OPEN, MtPyre_5F_MapScripts_MAP_SCRIPT_ON_LOAD_2
	end

MtPyre_5F_MapScripts_MAP_SCRIPT_ON_LOAD_2:
	setmetatile 12, 0, 0x263, TRUE
	setmetatile 13, 0, 0x263, TRUE
	setmetatile 12, 1, 0x280, FALSE
	setmetatile 13, 1, 0x280, FALSE
	end

MtPyre_5F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
	map_script_2 VAR_CHERRYGROVE_STATE, 7, MtPyre_5F_On_Frame
	.2byte 0


MtPyre_5F_On_Frame::
	lock
	getplayerxy VAR_TEMP_1, VAR_TEMP_2
	compare VAR_TEMP_1, 8
	goto_if_eq MtPyre_5F_On_Frame_1
	compare VAR_TEMP_1, 9
	goto_if_eq MtPyre_5F_On_Frame_2
	goto MtPyre_5F_PlayerRight
	return

MtPyre_5F_On_Frame_1:
	goto MtPyre_5F_PlayerLeft
	return

MtPyre_5F_On_Frame_2:
	goto MtPyre_5F_PlayerMiddle
	return


MtPyre_5F_PlayerLeft::
	applymovement 1, MtPyre_5F_FaceLeft
	applymovement OBJ_EVENT_ID_PLAYER, MtPyre_5F_FaceRight
	waitmovement 0
	goto MtPyre_5F_Main
	return


MtPyre_5F_PlayerMiddle::
	applymovement 1, MtPyre_5F_FaceDown
	applymovement OBJ_EVENT_ID_PLAYER, MtPyre_5F_FaceUp
	waitmovement 0
	goto MtPyre_5F_Main
	return


MtPyre_5F_PlayerRight::
	applymovement 1, MtPyre_5F_FaceRight
	applymovement OBJ_EVENT_ID_PLAYER, MtPyre_5F_FaceLeft
	waitmovement 0
	goto MtPyre_5F_Main
	return


MtPyre_5F_FaceLeft:
	walk_in_place_left
	step_end

MtPyre_5F_FaceRight:
	walk_in_place_right
	step_end

MtPyre_5F_FaceDown:
	walk_in_place_down
	step_end

MtPyre_5F_FaceUp:
	walk_in_place_up
	step_end

MtPyre_5F_Main::
	msgbox MtPyre_5F_Main_Text_0
	waitmessage
	closemessage
	playse SE_PIN
	applymovement 1, MtPyre_5F_LookAround
	waitmovement 0
	msgbox MtPyre_5F_Main_Text_1
	waitmessage
	closemessage
	delay 30
	playfanfare MUS_REGISTER_MATCH_CALL
	msgbox MtPyre_5F_Main_Text_2
	waitfanfare
	closemessage
	delay 30
	setflag FLAG_ENABLE_PROF_BIRCH_MATCH_CALL
	setflag FLAG_ENABLE_SCOTT_MATCH_CALL
	msgbox MtPyre_5F_Main_Text_3
	waitmessage
	closemessage
	applymovement 1, MtPyre_5F_WalkAway
	waitmovement 0
	addobject 3
	clearflag FLAG_OLIVER_CATACOMBS_RESEARCH
	removeobject 1
	setflag FLAG_OLIVER_CATACOMBS_FALL
	addvar VAR_CHERRYGROVE_STATE, 1
	release
	end


MtPyre_5F_LookAround:
	emote_exclamation_mark
	delay_16
	walk_in_place_up
	delay_8
	walk_in_place_down
	delay_8
	walk_in_place_left
	delay_8
	walk_in_place_right
	delay_8
	face_player
	step_end

MtPyre_5F_WalkAway:
	walk_up
	walk_left
	walk_left
	walk_left
	walk_left
	face_up
	step_end

MtPyre_5F_EventScript_OliverResearching::
	msgbox MtPyre_5F_EventScript_OliverResearching_Text_0, MSGBOX_NPC
	end


MtPyre_5F_EventScript_HallowedTower::
	lock
	checkitem ITEM_ODD_KEYSTONE
	compare VAR_RESULT, TRUE
	goto_if_eq MtPyre_5F_EventScript_HallowedTower_1
	msgbox MtPyre_5F_EventScript_HallowedTower_Text_3
	release
	end

MtPyre_5F_EventScript_HallowedTower_1:
	msgbox MtPyre_5F_EventScript_HallowedTower_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq MtPyre_5F_EventScript_HallowedTower_4
	msgbox MtPyre_5F_EventScript_HallowedTower_Text_1
	waitmessage
	waitse
	playmoncry SPECIES_SPIRITOMB, CRY_MODE_NORMAL
	msgbox MtPyre_5F_EventScript_HallowedTower_Text_2
	waitmessage
	waitmoncry
	setwildbattle SPECIES_SPIRITOMB, 25
	dowildbattle
	specialvar VAR_RESULT, GetBattleOutcome
	goto_if_eq VAR_RESULT, B_OUTCOME_WON, MtPyre_5F_EventScript_DefeatedSpiritomb
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, MtPyre_5F_EventScript_DefeatedSpiritomb
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, MtPyre_5F_EventScript_DefeatedSpiritomb
	removeitem ITEM_ODD_KEYSTONE, 1
	release
	end

MtPyre_5F_EventScript_HallowedTower_4:
	release
	end


MtPyre_5F_EventScript_DefeatedSpiritomb::
	removeitem ITEM_ODD_KEYSTONE, 1
	release
	end


MtPyre_5F_EventScript_Braille::
	lock
	goto_if_set FLAG_HOOH_BRAILLE_DOOR_OPEN, MtPyre_5F_EventScript_Braille_1
	braillemsgbox MtPyre_5F_Text_HoohBraille
	waitmessage
	closemessage
	specialvar VAR_RESULT, ScriptGetLeadMonSpecies
	compare VAR_RESULT, SPECIES_HO_OH
	goto_if_eq MtPyre_5F_EventScript_Braille_4
	release
	end

MtPyre_5F_EventScript_Braille_1:
	braillemsgbox MtPyre_5F_Text_HoohBraille
	release
	end

MtPyre_5F_EventScript_Braille_4:
	fadeoutbgm 1
	playse SE_M_ROCK_THROW
	setvar VAR_0x8004, 1
	setvar VAR_0x8005, 1
	setvar VAR_0x8006, 12
	setvar VAR_0x8007, 5
	special ShakeCamera
	waitstate
	setmetatile 12, 0, 0x263, TRUE
	setmetatile 13, 0, 0x263, TRUE
	setmetatile 12, 1, 0x280, FALSE
	setmetatile 13, 1, 0x280, FALSE
	special DrawWholeMapView
	fadeinbgm 1
	setflag FLAG_HOOH_BRAILLE_DOOR_OPEN
	release
	end


MtPyre_5F_Text_HoohBraille:
    .braille "RESURRECTOR\n"
    .braille "SHALL PASS.$"

MtPyre_5F_Main_Text_0:
	.string "OLIVER: Are you alright, {PLAYER}?\p"
	.string "That was a big fall, I didn't expect the\n"
	.string "floor to give out.\p"
	.string "I wonder what caused that earthquake.$"

MtPyre_5F_Main_Text_1:
	.string "{PLAYER}! Do you know what this place\n"
	.string "is!?\p"
	.string "These are catacombs!\p"
	.string "It's not an absolute validation, but\n"
	.string "this definitely aligns with my theory.\p"
	.string "These could be the remains of humans\n"
	.string "who were resurrected as Unown.\p"
	.string "I'll have to stay here and do some\n"
	.string "research, this is a huge find!\p"
	.string "I will give you a call if I find out\n"
	.string "anything.\p"
	.string "Sorry, this would help…$"

MtPyre_5F_Main_Text_2:
	.string "Registered OLIVER in the POKéNAV.$"

MtPyre_5F_Main_Text_3:
	.string "OLIVER: I noticed my father wasn't in\n"
	.string "your POKéNAV, so I registered him as\l"
	.string "well.\p"
	.string "By the way, my university professor is\n"
	.string "an expert on legendary POKéMON. I will\l"
	.string "tell him about your encounter with\l"
	.string "Raikou, I'm sure he will be excited to\l"
	.string "hear about it.\p"
	.string "Ok, back to my research. Good luck to\n"
	.string "you!$"

MtPyre_5F_EventScript_OliverResearching_Text_0:
	.string "OLIVER: Oh, it's {PLAYER}.\p"
	.string "I haven't discovered anything yet, but\n"
	.string "I will keep researching these\l"
	.string "catacombs.$"

MtPyre_5F_EventScript_HallowedTower_Text_0:
	.string "It's a Hollowed Tower. There is a strong\n"
	.string "presence... It appears ready to emerge!\p"
	.string "Would you like to insert the Odd\n"
	.string "Keystone?$"

MtPyre_5F_EventScript_HallowedTower_Text_1:
	.string "{PLAYER} inserted the Odd Keystone\n"
	.string "into the Hollowed Tower...$"

MtPyre_5F_EventScript_HallowedTower_Text_2:
	.string "Yulaaah!$"

MtPyre_5F_EventScript_HallowedTower_Text_3:
	.string "It's a Hollowed Tower. It appears to\n"
	.string "have been built many years ago.$"
