MtPyre_5F_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, MtPyre_5F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

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
