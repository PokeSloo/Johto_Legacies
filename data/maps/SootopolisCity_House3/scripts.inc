SootopolisCity_House3_MapScripts::
	.byte 0


SootopolisCity_House3_EventScript_Woman::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_KUBFU, SootopolisCity_House3_EventScript_Woman_1
	msgbox SootopolisCity_House3_EventScript_Woman_Text_1, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq SootopolisCity_House3_EventScript_Woman_4
	msgbox SootopolisCity_House3_EventScript_Woman_Text_3
	setvar VAR_TEMP_1, SPECIES_KUBFU
	givemon SPECIES_KUBFU, 20, ITEM_BIG_NUGGET
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PARTY, SootopolisCity_House3_EventScript_ReceiveKubfuParty
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PC, SootopolisCity_House3_EventScript_ReceiveKubfuPC
	goto Common_EventScript_NoMoreRoomForPokemon
	end

SootopolisCity_House3_EventScript_Woman_1:
	msgbox SootopolisCity_House3_EventScript_Woman_Text_0
	release
	end

SootopolisCity_House3_EventScript_Woman_4:
	msgbox SootopolisCity_House3_EventScript_Woman_Text_2
	release
	end


SootopolisCity_House3_EventScript_ReceiveKubfuParty::
	call SootopolisCity_House3_EventScript_ReceivedKubfuFanfare
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, SootopolisCity_House3_EventScript_ExplainKubfu
	call Common_EventScript_GetGiftMonPartySlot
	call Common_EventScript_NameReceivedPartyMon
	goto SootopolisCity_House3_EventScript_ExplainKubfu
	end


SootopolisCity_House3_EventScript_ReceiveKubfuPC::
	call SootopolisCity_House3_EventScript_ReceivedKubfuFanfare
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, SootopolisCity_House3_EventScript_SendKubfuToPC
	call Common_EventScript_NameReceivedBoxMon
	goto SootopolisCity_House3_EventScript_SendKubfuToPC
	end


SootopolisCity_House3_EventScript_SendKubfuToPC::
	call Common_EventScript_TransferredToPC
	goto SootopolisCity_House3_EventScript_ExplainKubfu
	end


SootopolisCity_House3_EventScript_ReceivedKubfuFanfare::
	bufferspeciesname STR_VAR_2, SPECIES_KUBFU
	playfanfare MUS_OBTAIN_ITEM
	msgbox SootopolisCity_House3_EventScript_ReceivedKubfuFanfare_Text_0
	waitmessage
	waitfanfare
	bufferspeciesname STR_VAR_1, SPECIES_KUBFU
	return


SootopolisCity_House3_EventScript_ExplainKubfu::
	msgbox SootopolisCity_House3_EventScript_ExplainKubfu_Text_0
	setflag FLAG_RECEIVED_KUBFU
	release
	end


SootopolisCity_House3_EventScript_Woman_Text_0:
	.string "Hmm... You're the TRAINER that took my\n"
	.string "little Kubfu.\p"
	.string "I hope you're treating it well.$"

SootopolisCity_House3_EventScript_Woman_Text_1:
	.string "Hmm... You look like a powerful young\n"
	.string "TRAINER...\p"
	.string "I have a particularly rowdy little\n"
	.string "POKéMON, and I'm afraid it's just too\l"
	.string "much for me to handle in my old age.\p"
	.string "Tell me, would you take care of it?$"

SootopolisCity_House3_EventScript_Woman_Text_2:
	.string "Hmm... Perhaps you aren't as powerful as\n"
	.string "I thought you were...$"

SootopolisCity_House3_EventScript_Woman_Text_3:
	.string "Oh, what a relief!$"

SootopolisCity_House3_EventScript_ReceivedKubfuFanfare_Text_0:
	.string "{PLAYER} received the Kubfu!$"

SootopolisCity_House3_EventScript_ExplainKubfu_Text_0:
	.string "Please take good care of that little\n"
	.string "POKéMON.$"
