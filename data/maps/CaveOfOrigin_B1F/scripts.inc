CaveOfOrigin_B1F_MapScripts::
	.byte 0


CaveOfOrigin_B1F_EventScript_Master::
	lock
	faceplayer
	dotimebasedevents
	goto_if_set FLAG_RECEIVED_DRAGONS_DEN_MON, CaveOfOrigin_B1F_EventScript_Master_1
	goto_if_set FLAG_DENIED_DRAGONS_DEN_MON, CaveOfOrigin_B1F_EventScript_Master_2
	msgbox CaveOfOrigin_B1F_EventScript_Master_Text_2, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq CaveOfOrigin_B1F_EventScript_Master_6
	msgbox CaveOfOrigin_B1F_EventScript_Master_Text_3
	release
	end

CaveOfOrigin_B1F_EventScript_Master_1:
	msgbox CaveOfOrigin_B1F_EventScript_Master_Text_0
	release
	end

CaveOfOrigin_B1F_EventScript_Master_2:
	msgbox CaveOfOrigin_B1F_EventScript_Master_Text_1
	release
	end

CaveOfOrigin_B1F_EventScript_Master_6:
	goto CaveOfOrigin_B1F_EventScript_DragonQuiz
	return


CaveOfOrigin_B1F_EventScript_DragonQuiz::
	clearflag FLAG_DRAGONS_DEN_WRONG_ANSWER
	msgbox CaveOfOrigin_B1F_EventScript_DragonQuiz_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq CaveOfOrigin_B1F_EventScript_DragonQuiz_1
	msgbox CaveOfOrigin_B1F_Text_IUnderstand
	setflag FLAG_DRAGONS_DEN_WRONG_ANSWER
	goto CaveOfOrigin_B1F_EventScript_DragonQuiz_Q2
	return

CaveOfOrigin_B1F_EventScript_DragonQuiz_1:
	msgbox CaveOfOrigin_B1F_Text_IUnderstand
	goto CaveOfOrigin_B1F_EventScript_DragonQuiz_Q2
	return


CaveOfOrigin_B1F_EventScript_DragonQuiz_Q2::
	msgbox CaveOfOrigin_B1F_EventScript_DragonQuiz_Q2_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq CaveOfOrigin_B1F_EventScript_DragonQuiz_Q2_1
	msgbox CaveOfOrigin_B1F_Text_IUnderstand
	goto CaveOfOrigin_B1F_EventScript_DragonQuiz_Q3
	return

CaveOfOrigin_B1F_EventScript_DragonQuiz_Q2_1:
	msgbox CaveOfOrigin_B1F_Text_IUnderstand
	setflag FLAG_DRAGONS_DEN_WRONG_ANSWER
	goto CaveOfOrigin_B1F_EventScript_DragonQuiz_Q3
	return


CaveOfOrigin_B1F_EventScript_DragonQuiz_Q3::
	msgbox CaveOfOrigin_B1F_EventScript_DragonQuiz_Q3_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq CaveOfOrigin_B1F_EventScript_DragonQuiz_Q3_1
	msgbox CaveOfOrigin_B1F_Text_IUnderstand
	setflag FLAG_DRAGONS_DEN_WRONG_ANSWER
	goto CaveOfOrigin_B1F_EventScript_DragonQuiz_Q4
	return

CaveOfOrigin_B1F_EventScript_DragonQuiz_Q3_1:
	msgbox CaveOfOrigin_B1F_Text_IUnderstand
	goto CaveOfOrigin_B1F_EventScript_DragonQuiz_Q4
	return


CaveOfOrigin_B1F_EventScript_DragonQuiz_Q4::
	msgbox CaveOfOrigin_B1F_EventScript_DragonQuiz_Q4_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq CaveOfOrigin_B1F_EventScript_DragonQuiz_Q4_1
	msgbox CaveOfOrigin_B1F_Text_IUnderstand
	goto CaveOfOrigin_B1F_EventScript_DragonQuiz_Q5
	return

CaveOfOrigin_B1F_EventScript_DragonQuiz_Q4_1:
	msgbox CaveOfOrigin_B1F_Text_IUnderstand
	setflag FLAG_DRAGONS_DEN_WRONG_ANSWER
	goto CaveOfOrigin_B1F_EventScript_DragonQuiz_Q5
	return


CaveOfOrigin_B1F_EventScript_DragonQuiz_Q5::
	msgbox CaveOfOrigin_B1F_EventScript_DragonQuiz_Q5_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq CaveOfOrigin_B1F_EventScript_DragonQuiz_Q5_1
	msgbox CaveOfOrigin_B1F_Text_IUnderstand
	goto CaveOfOrigin_B1F_EventScript_DragonQuiz_End
	return

CaveOfOrigin_B1F_EventScript_DragonQuiz_Q5_1:
	msgbox CaveOfOrigin_B1F_Text_IUnderstand
	setflag FLAG_DRAGONS_DEN_WRONG_ANSWER
	goto CaveOfOrigin_B1F_EventScript_DragonQuiz_End
	return


CaveOfOrigin_B1F_EventScript_DragonQuiz_End::
	goto_if_set FLAG_DRAGONS_DEN_WRONG_ANSWER, CaveOfOrigin_B1F_EventScript_DragonQuiz_End_1
	msgbox CaveOfOrigin_B1F_EventScript_DragonQuiz_End_Text_1
	setvar VAR_TEMP_1, SPECIES_GIBLE
	givemon SPECIES_GIBLE, 20, ITEM_LUCKY_EGG
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PARTY, CaveOfOrigin_B1F_EventScript_ReceiveGibleParty
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PC, CaveOfOrigin_B1F_EventScript_ReceiveGiblePC
	goto Common_EventScript_NoMoreRoomForPokemon
	end

CaveOfOrigin_B1F_EventScript_DragonQuiz_End_1:
	msgbox CaveOfOrigin_B1F_EventScript_DragonQuiz_End_Text_0
	setflag FLAG_DENIED_DRAGONS_DEN_MON
	release
	end


CaveOfOrigin_B1F_EventScript_ReceiveGibleParty::
	call CaveOfOrigin_B1F_EventScript_ReceivedGibleFanfare
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, CaveOfOrigin_B1F_EventScript_ExplainGible
	call Common_EventScript_GetGiftMonPartySlot
	call Common_EventScript_NameReceivedPartyMon
	goto CaveOfOrigin_B1F_EventScript_ExplainGible
	end


CaveOfOrigin_B1F_EventScript_ReceiveGiblePC::
	call CaveOfOrigin_B1F_EventScript_ReceivedGibleFanfare
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, CaveOfOrigin_B1F_EventScript_SendGibleToPC
	call Common_EventScript_NameReceivedBoxMon
	goto CaveOfOrigin_B1F_EventScript_SendGibleToPC
	end


CaveOfOrigin_B1F_EventScript_SendGibleToPC::
	call Common_EventScript_TransferredToPC
	goto CaveOfOrigin_B1F_EventScript_ExplainGible
	end


CaveOfOrigin_B1F_EventScript_ReceivedGibleFanfare::
	bufferspeciesname STR_VAR_2, SPECIES_GIBLE
	playfanfare MUS_OBTAIN_ITEM
	msgbox CaveOfOrigin_B1F_EventScript_ReceivedGibleFanfare_Text_0
	waitmessage
	waitfanfare
	bufferspeciesname STR_VAR_1, SPECIES_GIBLE
	return


CaveOfOrigin_B1F_EventScript_ExplainGible::
	msgbox CaveOfOrigin_B1F_EventScript_ExplainGible_Text_0
	setflag FLAG_RECEIVED_DRAGONS_DEN_MON
	release
	end


CaveOfOrigin_B1F_EventScript_LeftSage::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_DRAGONS_DEN_MON, CaveOfOrigin_B1F_EventScript_LeftSage_1
	msgbox CaveOfOrigin_B1F_EventScript_LeftSage_Text_1
	release
	end

CaveOfOrigin_B1F_EventScript_LeftSage_1:
	msgbox CaveOfOrigin_B1F_EventScript_LeftSage_Text_0
	release
	end


CaveOfOrigin_B1F_EventScript_RightSage::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_DRAGONS_DEN_MON, CaveOfOrigin_B1F_EventScript_RightSage_1
	msgbox CaveOfOrigin_B1F_EventScript_RightSage_Text_1
	release
	end

CaveOfOrigin_B1F_EventScript_RightSage_1:
	msgbox CaveOfOrigin_B1F_EventScript_RightSage_Text_0
	release
	end


CaveOfOrigin_B1F_EventScript_Master_Text_0:
	.string "Hmm... Good to see you here.\p"
	.string "I trust you are treating Gible well.$"

CaveOfOrigin_B1F_EventScript_Master_Text_1:
	.string "You are welcome to try the Dragon\n"
	.string "Master Challenge again tomorrow.\p"
	.string "Please, take some time to reflect upon\n"
	.string "what is truly important in this world.$"

CaveOfOrigin_B1F_EventScript_Master_Text_2:
	.string "Hmm... Good to see you here.\p"
	.string "No need to explain why you came.\p"
	.string "CLAIR sent you here, didn't she?\p"
	.string "She must have taken a liking to you.\p"
	.string "Very well, are you ready to take the\n"
	.string "Dragon Master Challenge?$"

CaveOfOrigin_B1F_EventScript_Master_Text_3:
	.string "I see...\p"
	.string "Please come back when you feel you are\n"
	.string "more prepared.$"

CaveOfOrigin_B1F_EventScript_DragonQuiz_Text_0:
	.string "Then let's begin.\p"
	.string "Would you say that POKéMON are meant\n"
	.string "to be our friends?$"

CaveOfOrigin_B1F_EventScript_DragonQuiz_Q2_Text_0:
	.string "Would you say that cheating is an\n"
	.string "effective way to win battles?$"

CaveOfOrigin_B1F_EventScript_DragonQuiz_Q3_Text_0:
	.string "Would you say having fun while battling\n"
	.string "is more important than winning?$"

CaveOfOrigin_B1F_EventScript_DragonQuiz_Q4_Text_0:
	.string "Would you say absolute obedience is\n"
	.string "important for raising POKéMON?$"

CaveOfOrigin_B1F_EventScript_DragonQuiz_Q5_Text_0:
	.string "Would you say strong POKéMON are more\n"
	.string "important than weak POKéMON?$"

CaveOfOrigin_B1F_EventScript_DragonQuiz_End_Text_0:
	.string "Hmm... I see...\p"
	.string "Unfortunately, it seems your values do\n"
	.string "not align with the values of our clan.\p"
	.string "You are welcome to try again tomorrow.\p"
	.string "Please, take some time to reflect upon\n"
	.string "what is truly important in this world.$"

CaveOfOrigin_B1F_EventScript_DragonQuiz_End_Text_1:
	.string "Hmm... I see...\n"
	.string "You care deeply for POKéMON.\p"
	.string "Very commendable.\p"
	.string "{PLAYER}, don't lose that belief.\p"
	.string "...\p"
	.string "Dragon POKéMON are symbolic of our\n"
	.string "clan.\p"
	.string "You have shown that you can be\n"
	.string "entrusted with one.\p"
	.string "Please, take this POKéMON as proof that\n"
	.string "I now know your worth.$"

CaveOfOrigin_B1F_EventScript_ReceivedGibleFanfare_Text_0:
	.string "{PLAYER} received Gible from the\n"
	.string "Dragon Master!$"

CaveOfOrigin_B1F_EventScript_ExplainGible_Text_0:
	.string "Please take good care of Gible.\p"
	.string "May it see you through the POKéMON\n"
	.string "League as a beloved ally.$"

CaveOfOrigin_B1F_EventScript_LeftSage_Text_0:
	.string "Only the select few pass the Dragon\n"
	.string "Master Challenge.\p"
	.string "There is no denying your great love for\n"
	.string "POKéMON.$"

CaveOfOrigin_B1F_EventScript_LeftSage_Text_1:
	.string "Only the select few pass the Dragon\n"
	.string "Master Challenge.$"

CaveOfOrigin_B1F_EventScript_RightSage_Text_0:
	.string "Our clan has trained Dragon POKéMON for\n"
	.string "generations.\p"
	.string "Since you passed the Dragon Master\n"
	.string "Challenge, you must also see POKéMON\l"
	.string "as both friends and allies.$"

CaveOfOrigin_B1F_EventScript_RightSage_Text_1:
	.string "Our clan has trained Dragon POKéMON for\n"
	.string "generations, they are our friends and\l"
	.string "allies.$"

CaveOfOrigin_B1F_Text_IUnderstand::
	.string "Oh, I understand...$"
