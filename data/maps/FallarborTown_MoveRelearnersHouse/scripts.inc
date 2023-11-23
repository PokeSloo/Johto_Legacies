FallarborTown_MoveRelearnersHouse_MapScripts::
	.byte 0


FallarborTown_MoveRelearnersHouse_EventScript_Gentleman::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_HISUIAN_ZORUA, FallarborTown_MoveRelearnersHouse_EventScript_Gentleman_1
	msgbox FallarborTown_MoveRelearnersHouse_EventScript_Gentleman_Text_1, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq FallarborTown_MoveRelearnersHouse_EventScript_Gentleman_4
	msgbox FallarborTown_MoveRelearnersHouse_EventScript_Gentleman_Text_3
	givemon SPECIES_ZORUA_HISUIAN, 20, ITEM_SILK_SCARF
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PARTY, FallarborTown_MoveRelearnersHouse_EventScript_ReceiveZoruaParty
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PC, FallarborTown_MoveRelearnersHouse_EventScript_ReceiveZoruaPC
	goto Common_EventScript_NoMoreRoomForPokemon
	end

FallarborTown_MoveRelearnersHouse_EventScript_Gentleman_1:
	msgbox FallarborTown_MoveRelearnersHouse_EventScript_Gentleman_Text_0
	release
	end

FallarborTown_MoveRelearnersHouse_EventScript_Gentleman_4:
	msgbox FallarborTown_MoveRelearnersHouse_EventScript_Gentleman_Text_2
	release
	end


FallarborTown_MoveRelearnersHouse_EventScript_ReceiveZoruaParty::
	call FallarborTown_MoveRelearnersHouse_EventScript_ReceivedZoruaFanfare
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, FallarborTown_MoveRelearnersHouse_EventScript_ExplainZorua
	call Common_EventScript_GetGiftMonPartySlot
	call Common_EventScript_NameReceivedPartyMon
	goto FallarborTown_MoveRelearnersHouse_EventScript_ExplainZorua
	end


FallarborTown_MoveRelearnersHouse_EventScript_ReceiveZoruaPC::
	call FallarborTown_MoveRelearnersHouse_EventScript_ReceivedZoruaFanfare
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, FallarborTown_MoveRelearnersHouse_EventScript_SendZoruaToPC
	call Common_EventScript_NameReceivedBoxMon
	goto FallarborTown_MoveRelearnersHouse_EventScript_SendZoruaToPC
	end


FallarborTown_MoveRelearnersHouse_EventScript_SendZoruaToPC::
	call Common_EventScript_TransferredToPC
	goto FallarborTown_MoveRelearnersHouse_EventScript_ExplainZorua
	end


FallarborTown_MoveRelearnersHouse_EventScript_ReceivedZoruaFanfare::
	playfanfare MUS_OBTAIN_ITEM
	msgbox FallarborTown_MoveRelearnersHouse_EventScript_ReceivedZoruaFanfare_Text_0
	waitmessage
	waitfanfare
	bufferspeciesname STR_VAR_1, SPECIES_ZORUA
	return


FallarborTown_MoveRelearnersHouse_EventScript_ExplainZorua::
	msgbox FallarborTown_MoveRelearnersHouse_EventScript_ExplainZorua_Text_0
	setflag FLAG_RECEIVED_HISUIAN_ZORUA
	release
	end


FallarborTown_MoveRelearnersHouse_EventScript_Gentleman_Text_0:
	.string "Welcome back, TRAINER.\p"
	.string "How is that little Zorua doing?\p"
	.string "Has its malice calmed down any?$"

FallarborTown_MoveRelearnersHouse_EventScript_Gentleman_Text_1:
	.string "Ah, you look like a fine young TRAINER!\p"
	.string "Say, I have a special POKéMON that is in\n"
	.string "need of a good home.\p"
	.string "...\p"
	.string "I must warn you though, this POKéMON\n"
	.string "exudes a bitter malice that most\l"
	.string "people are unable to handle.\p"
	.string "I'm hoping a strong willed individual will\n"
	.string "be able to calm it.\p"
	.string "So then, are you interested?$"

FallarborTown_MoveRelearnersHouse_EventScript_Gentleman_Text_2:
	.string "Very well, I will wait for someone else\n"
	.string "then.$"

FallarborTown_MoveRelearnersHouse_EventScript_Gentleman_Text_3:
	.string "Wonderful!$"

FallarborTown_MoveRelearnersHouse_EventScript_ReceivedZoruaFanfare_Text_0:
	.string "{PLAYER} received the Zorua!$"

FallarborTown_MoveRelearnersHouse_EventScript_ExplainZorua_Text_0:
	.string "Please take good care of that POKéMON,\n"
	.string "it's just misunderstood.$"
