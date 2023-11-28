MauvilleCity_GameCorner_MapScripts::
	.byte 0

    @ Game Corner prices
	.set TM32_COINS,  1500
	.set TM29_COINS,  3500
	.set TM35_COINS,  4000
	.set TM24_COINS,  4000
	.set TM13_COINS,  4000
	.set PIKACHU_COINS,  1000
	.set APPLIN_COINS,  5000
	.set PORYGON_COINS,  9999

	.set COINS_PRICE_50,  1000
	.set COINS_PRICE_500, 10000

MauvilleCity_GameCorner_EventScript_CoinsClerk::
	lock
	faceplayer
	msgbox MauvilleCity_GameCorner_Text_ThisIsMauvilleGameCorner, MSGBOX_DEFAULT
	checkitem ITEM_COIN_CASE
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NeedCoinCase
	message MauvilleCity_GameCorner_Text_WereYouLookingForCoins
	waitmessage
	showmoneybox 0, 0
	showcoinsbox 1, 6
	goto MauvilleCity_GameCorner_EventScript_ChooseCoinsDefault50

MauvilleCity_GameCorner_EventScript_ChooseCoinsDefault50::
	multichoicedefault 15, 0, MULTI_GAME_CORNER_COINS, 0, FALSE
	switch VAR_RESULT
	case 0, MauvilleCity_GameCorner_EventScript_Buy50Coins
	case 1, MauvilleCity_GameCorner_EventScript_Buy500Coins
	goto MauvilleCity_GameCorner_EventScript_CancelBuyCoins
	end

@ Unused
MauvilleCity_GameCorner_EventScript_ChooseCoinsDefault500::
	multichoicedefault 15, 0, MULTI_GAME_CORNER_COINS, 1, FALSE
	switch VAR_RESULT
	case 0, MauvilleCity_GameCorner_EventScript_Buy50Coins
	case 1, MauvilleCity_GameCorner_EventScript_Buy500Coins
	goto MauvilleCity_GameCorner_EventScript_CancelBuyCoins
	end

MauvilleCity_GameCorner_EventScript_Buy50Coins::
	checkcoins VAR_TEMP_1
	goto_if_ge VAR_TEMP_1, (MAX_COINS + 1 - 50), MauvilleCity_GameCorner_EventScript_NoRoomForCoins
	checkmoney COINS_PRICE_50
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NotEnoughMoney
	addcoins 50
	removemoney COINS_PRICE_50
	updatemoneybox
	updatecoinsbox 1, 6
	playse SE_SHOP
	msgbox MauvilleCity_GameCorner_Text_ThankYouHereAreYourCoins, MSGBOX_DEFAULT
	hidemoneybox
	hidecoinsbox 0, 5
	release
	end

MauvilleCity_GameCorner_EventScript_Buy500Coins::
	checkcoins VAR_TEMP_1
	goto_if_ge VAR_TEMP_1, (MAX_COINS + 1 - 500), MauvilleCity_GameCorner_EventScript_NoRoomForCoins
	checkmoney COINS_PRICE_500
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NotEnoughMoney
	addcoins 500
	removemoney COINS_PRICE_500
	updatemoneybox
	updatecoinsbox 1, 6
	playse SE_SHOP
	msgbox MauvilleCity_GameCorner_Text_ThankYouHereAreYourCoins, MSGBOX_DEFAULT
	hidemoneybox
	hidecoinsbox 0, 5
	release
	end

MauvilleCity_GameCorner_EventScript_NeedCoinCase::
	msgbox MauvilleCity_GameCorner_Text_NeedCoinCaseForCoins, MSGBOX_DEFAULT
	release
	end

MauvilleCity_GameCorner_EventScript_NotEnoughMoney::
	msgbox MauvilleCity_GameCorner_Text_DontHaveEnoughMoney, MSGBOX_DEFAULT
	hidemoneybox
	hidecoinsbox 0, 5
	release
	end

MauvilleCity_GameCorner_EventScript_CancelBuyCoins::
	msgbox MauvilleCity_GameCorner_Text_DontNeedCoinsThen, MSGBOX_DEFAULT
	hidemoneybox
	hidecoinsbox 0, 5
	release
	end

MauvilleCity_GameCorner_EventScript_NoRoomForCoins::
	msgbox MauvilleCity_GameCorner_Text_CoinCaseIsFull, MSGBOX_DEFAULT
	hidemoneybox
	hidecoinsbox 0, 5
	release
	end

MauvilleCity_GameCorner_EventScript_PrizeCornerDolls::
	lock
	faceplayer
	msgbox MauvilleCity_GameCorner_Text_ExchangeCoinsForPrizes, MSGBOX_DEFAULT
	checkitem ITEM_COIN_CASE
	goto_if_eq VAR_RESULT, TRUE, MauvilleCity_GameCorner_EventScript_ChooseDollPrizeMessage
	release
	end

MauvilleCity_GameCorner_EventScript_ChooseDollPrizeMessage::
	message MauvilleCity_GameCorner_Text_WhichPrize
	waitmessage
	setvar VAR_TEMP_1, 0
	showcoinsbox 1, 1
	goto MauvilleCity_GameCorner_EventScript_ChooseDollPrize

MauvilleCity_GameCorner_EventScript_ReturnToChooseDollPrize::
	message MauvilleCity_GameCorner_Text_WhichPrize
	waitmessage
	goto MauvilleCity_GameCorner_EventScript_ChooseDollPrize

MauvilleCity_GameCorner_EventScript_ChooseDollPrize::
	multichoice 12, 0, MULTI_GAME_CORNER_DOLLS, FALSE
	switch VAR_RESULT
	case 0, MauvilleCity_GameCorner_EventScript_TreeckoDoll
	case 1, MauvilleCity_GameCorner_EventScript_TorchicDoll
	case 2, MauvilleCity_GameCorner_EventScript_MudkipDoll
	case 3, MauvilleCity_GameCorner_EventScript_CancelDollSelect
	goto MauvilleCity_GameCorner_EventScript_CancelDollSelect
	end

MauvilleCity_GameCorner_EventScript_TreeckoDoll::
	setvar VAR_TEMP_1, 1
	bufferspeciesname STR_VAR_1, SPECIES_PIKACHU
	goto MauvilleCity_GameCorner_EventScript_ConfirmDollPrize

MauvilleCity_GameCorner_EventScript_TorchicDoll::
	setvar VAR_TEMP_1, 2
	bufferspeciesname STR_VAR_1, SPECIES_APPLIN
	goto MauvilleCity_GameCorner_EventScript_ConfirmDollPrize

MauvilleCity_GameCorner_EventScript_MudkipDoll::
	setvar VAR_TEMP_1, 3
	bufferspeciesname STR_VAR_1, SPECIES_PORYGON
	goto MauvilleCity_GameCorner_EventScript_ConfirmDollPrize

MauvilleCity_GameCorner_EventScript_ConfirmDollPrize::
	msgbox MauvilleCity_GameCorner_Text_SoYourChoiceIsX, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_CancelDollSelect
	switch VAR_TEMP_1
	case 1, MauvilleCity_GameCorner_EventScript_BuyTreeckoDoll
	case 2, MauvilleCity_GameCorner_EventScript_BuyTorchicDoll
	case 3, MauvilleCity_GameCorner_EventScript_BuyMudkipDoll
	end

MauvilleCity_GameCorner_EventScript_BuyTreeckoDoll::
	checkcoins VAR_TEMP_2
	goto_if_lt VAR_TEMP_2, PIKACHU_COINS, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForDoll
	setvar VAR_TEMP_1, SPECIES_PIKACHU
	givemon SPECIES_PIKACHU, 15
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PARTY, MauvilleCity_GameCorner_EventScript_SendPikachuParty
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PC, MauvilleCity_GameCorner_EventScript_SendPikachuPC
	msgbox gText_NoMoreRoomForPokemon, MSGBOX_DEFAULT
	goto MauvilleCity_GameCorner_EventScript_ReturnToChooseDollPrize
	end

MauvilleCity_GameCorner_EventScript_SendPikachuParty::
	bufferspeciesname STR_VAR_2, SPECIES_PIKACHU
	playfanfare MUS_OBTAIN_ITEM
	message MauvilleCity_GameCorner_Text_ObtainedPikachu
	waitmessage
	waitfanfare
	removecoins PIKACHU_COINS
	updatecoinsbox 1, 1
	playse SE_SHOP
	bufferspeciesname STR_VAR_1, SPECIES_PIKACHU
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ExitDollPrize
	call Common_EventScript_GetGiftMonPartySlot
	call Common_EventScript_NameReceivedPartyMon
	goto MauvilleCity_GameCorner_EventScript_ExitDollPrize
	end

MauvilleCity_GameCorner_EventScript_SendPikachuPC::
	bufferspeciesname STR_VAR_2, SPECIES_PIKACHU
	playfanfare MUS_OBTAIN_ITEM
	message MauvilleCity_GameCorner_Text_ObtainedPikachu
	waitmessage
	waitfanfare
	removecoins PIKACHU_COINS
	updatecoinsbox 1, 1
	playse SE_SHOP
	bufferspeciesname STR_VAR_1, SPECIES_PIKACHU
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_MonTransferredPC
	call Common_EventScript_NameReceivedBoxMon
	goto MauvilleCity_GameCorner_EventScript_MonTransferredPC
	end

MauvilleCity_GameCorner_EventScript_MonTransferredPC::
	call Common_EventScript_TransferredToPC
	goto MauvilleCity_GameCorner_EventScript_ExitDollPrize
	end

MauvilleCity_GameCorner_EventScript_ExitDollPrize::
	msgbox MauvilleCity_GameCorner_Text_EnjoyMon, MSGBOX_DEFAULT
	waitmessage
	hidecoinsbox 0, 0
	release
	end

MauvilleCity_GameCorner_EventScript_BuyTorchicDoll::
	checkcoins VAR_TEMP_2
	goto_if_lt VAR_TEMP_2, APPLIN_COINS, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForDoll
	setvar VAR_TEMP_1, SPECIES_APPLIN
	givemon SPECIES_APPLIN, 15
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PARTY, MauvilleCity_GameCorner_EventScript_SendApplinParty
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PC, MauvilleCity_GameCorner_EventScript_SendApplinPC
	msgbox gText_NoMoreRoomForPokemon, MSGBOX_DEFAULT
	goto MauvilleCity_GameCorner_EventScript_ReturnToChooseDollPrize
	end

MauvilleCity_GameCorner_EventScript_SendApplinParty::
	bufferspeciesname STR_VAR_2, SPECIES_APPLIN
	playfanfare MUS_OBTAIN_ITEM
	message MauvilleCity_GameCorner_Text_ObtainedApplin
	waitmessage
	waitfanfare
	removecoins APPLIN_COINS
	updatecoinsbox 1, 1
	playse SE_SHOP
	bufferspeciesname STR_VAR_1, SPECIES_APPLIN
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ExitDollPrize
	call Common_EventScript_GetGiftMonPartySlot
	call Common_EventScript_NameReceivedPartyMon
	goto MauvilleCity_GameCorner_EventScript_ExitDollPrize
	end

MauvilleCity_GameCorner_EventScript_SendApplinPC::
	bufferspeciesname STR_VAR_2, SPECIES_APPLIN
	playfanfare MUS_OBTAIN_ITEM
	message MauvilleCity_GameCorner_Text_ObtainedApplin
	waitmessage
	waitfanfare
	removecoins APPLIN_COINS
	updatecoinsbox 1, 1
	playse SE_SHOP
	bufferspeciesname STR_VAR_1, SPECIES_APPLIN
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_MonTransferredPC
	call Common_EventScript_NameReceivedBoxMon
	goto MauvilleCity_GameCorner_EventScript_MonTransferredPC
	end

MauvilleCity_GameCorner_EventScript_BuyMudkipDoll::
	checkcoins VAR_TEMP_2
	goto_if_lt VAR_TEMP_2, PORYGON_COINS, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForDoll
	setvar VAR_TEMP_1, SPECIES_PORYGON
	givemon SPECIES_PORYGON, 15
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PARTY, MauvilleCity_GameCorner_EventScript_SendPorygonParty
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PC, MauvilleCity_GameCorner_EventScript_SendPorygonPC
	msgbox gText_NoMoreRoomForPokemon, MSGBOX_DEFAULT
	goto MauvilleCity_GameCorner_EventScript_ReturnToChooseDollPrize
	end

MauvilleCity_GameCorner_EventScript_SendPorygonParty::
	bufferspeciesname STR_VAR_2, SPECIES_PORYGON
	playfanfare MUS_OBTAIN_ITEM
	message MauvilleCity_GameCorner_Text_ObtainedPorygon
	waitmessage
	waitfanfare
	removecoins PORYGON_COINS
	updatecoinsbox 1, 1
	playse SE_SHOP
	bufferspeciesname STR_VAR_1, SPECIES_PORYGON
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ExitDollPrize
	call Common_EventScript_GetGiftMonPartySlot
	call Common_EventScript_NameReceivedPartyMon
	goto MauvilleCity_GameCorner_EventScript_ExitDollPrize
	end

MauvilleCity_GameCorner_EventScript_SendPorygonPC::
	bufferspeciesname STR_VAR_2, SPECIES_PORYGON
	playfanfare MUS_OBTAIN_ITEM
	message MauvilleCity_GameCorner_Text_ObtainedPorygon
	waitmessage
	waitfanfare
	removecoins PORYGON_COINS
	updatecoinsbox 1, 1
	playse SE_SHOP
	bufferspeciesname STR_VAR_1, SPECIES_PORYGON
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_MonTransferredPC
	call Common_EventScript_NameReceivedBoxMon
	goto MauvilleCity_GameCorner_EventScript_MonTransferredPC
	end

MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForDoll::
	msgbox MauvilleCity_GameCorner_Text_NotEnoughCoins, MSGBOX_DEFAULT
	goto MauvilleCity_GameCorner_EventScript_ReturnToChooseDollPrize
	end

MauvilleCity_GameCorner_EventScript_NoRoomForDoll::
	call Common_EventScript_NoRoomForDecor
	goto MauvilleCity_GameCorner_EventScript_ReturnToChooseDollPrize
	end

MauvilleCity_GameCorner_EventScript_CancelDollSelect::
	msgbox MauvilleCity_GameCorner_Text_OhIsThatSo, MSGBOX_DEFAULT
	hidecoinsbox 0, 0
	release
	end

MauvilleCity_GameCorner_EventScript_PrizeCornerTMs::
	lock
	faceplayer
	msgbox MauvilleCity_GameCorner_Text_ExchangeCoinsForPrizes, MSGBOX_DEFAULT
	checkitem ITEM_COIN_CASE
	goto_if_eq VAR_RESULT, TRUE, MauvilleCity_GameCorner_EventScript_ChooseTMPrizeMessage
	release
	end

MauvilleCity_GameCorner_EventScript_ChooseTMPrizeMessage::
	message MauvilleCity_GameCorner_Text_WhichPrize
	waitmessage
	setvar VAR_TEMP_1, 0
	showcoinsbox 1, 1
	goto MauvilleCity_GameCorner_EventScript_ChooseTMPrize

MauvilleCity_GameCorner_EventScript_ReturnToChooseTMPrize::
	message MauvilleCity_GameCorner_Text_WhichPrize
	waitmessage
	goto MauvilleCity_GameCorner_EventScript_ChooseTMPrize

MauvilleCity_GameCorner_EventScript_ChooseTMPrize::
	multichoice 12, 0, MULTI_GAME_CORNER_TMS, FALSE
	switch VAR_RESULT
	case 0, MauvilleCity_GameCorner_EventScript_TM32
	case 1, MauvilleCity_GameCorner_EventScript_TM29
	case 2, MauvilleCity_GameCorner_EventScript_TM35
	case 3, MauvilleCity_GameCorner_EventScript_TM24
	case 4, MauvilleCity_GameCorner_EventScript_TM13
	case 5, MauvilleCity_GameCorner_EventScript_CancelTMSelect
	goto MauvilleCity_GameCorner_EventScript_CancelTMSelect
	end

MauvilleCity_GameCorner_EventScript_TM32::
	setvar VAR_TEMP_1, 1
	bufferitemname STR_VAR_1, ITEM_TM32
	setvar VAR_0x8004, ITEM_TM32
	goto MauvilleCity_GameCorner_EventScript_ConfirmTMPrize

MauvilleCity_GameCorner_EventScript_TM29::
	setvar VAR_TEMP_1, 2
	bufferitemname STR_VAR_1, ITEM_TM29
	setvar VAR_0x8004, ITEM_TM29
	goto MauvilleCity_GameCorner_EventScript_ConfirmTMPrize

MauvilleCity_GameCorner_EventScript_TM35::
	setvar VAR_TEMP_1, 3
	bufferitemname STR_VAR_1, ITEM_TM35
	setvar VAR_0x8004, ITEM_TM35
	goto MauvilleCity_GameCorner_EventScript_ConfirmTMPrize

MauvilleCity_GameCorner_EventScript_TM24::
	setvar VAR_TEMP_1, 4
	bufferitemname STR_VAR_1, ITEM_TM24
	setvar VAR_0x8004, ITEM_TM24
	goto MauvilleCity_GameCorner_EventScript_ConfirmTMPrize

MauvilleCity_GameCorner_EventScript_TM13::
	setvar VAR_TEMP_1, 5
	bufferitemname STR_VAR_1, ITEM_TM13
	setvar VAR_0x8004, ITEM_TM13
	goto MauvilleCity_GameCorner_EventScript_ConfirmTMPrize

MauvilleCity_GameCorner_EventScript_ConfirmTMPrize::
	special BufferTMHMMoveName
	msgbox MauvilleCity_GameCorner_Text_SoYourChoiceIsTheTMX, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_CancelTMSelect
	switch VAR_TEMP_1
	case 1, MauvilleCity_GameCorner_EventScript_BuyTM32
	case 2, MauvilleCity_GameCorner_EventScript_BuyTM29
	case 3, MauvilleCity_GameCorner_EventScript_BuyTM35
	case 4, MauvilleCity_GameCorner_EventScript_BuyTM24
	case 5, MauvilleCity_GameCorner_EventScript_BuyTM13
	end

MauvilleCity_GameCorner_EventScript_BuyTM32::
	checkcoins VAR_TEMP_2
	goto_if_lt VAR_TEMP_2, TM32_COINS, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForTM
	checkitemspace ITEM_TM32
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoRoomForTM
	removecoins TM32_COINS
	additem ITEM_TM32
	updatecoinsbox 1, 1
	playse SE_SHOP
	msgbox MauvilleCity_GameCorner_Text_HereYouGo, MSGBOX_DEFAULT
	goto MauvilleCity_GameCorner_EventScript_ReturnToChooseTMPrize
	end

MauvilleCity_GameCorner_EventScript_BuyTM29::
	checkcoins VAR_TEMP_2
	goto_if_lt VAR_TEMP_2, TM29_COINS, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForTM
	checkitemspace ITEM_TM29
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoRoomForTM
	removecoins TM29_COINS
	additem ITEM_TM29
	updatecoinsbox 1, 1
	playse SE_SHOP
	msgbox MauvilleCity_GameCorner_Text_HereYouGo, MSGBOX_DEFAULT
	goto MauvilleCity_GameCorner_EventScript_ReturnToChooseTMPrize
	end

MauvilleCity_GameCorner_EventScript_BuyTM35::
	checkcoins VAR_TEMP_2
	goto_if_lt VAR_TEMP_2, TM35_COINS, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForTM
	checkitemspace ITEM_TM35
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoRoomForTM
	removecoins TM35_COINS
	additem ITEM_TM35
	updatecoinsbox 1, 1
	playse SE_SHOP
	msgbox MauvilleCity_GameCorner_Text_HereYouGo, MSGBOX_DEFAULT
	goto MauvilleCity_GameCorner_EventScript_ReturnToChooseTMPrize
	end

MauvilleCity_GameCorner_EventScript_BuyTM24::
	checkcoins VAR_TEMP_2
	goto_if_lt VAR_TEMP_2, TM24_COINS, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForTM
	checkitemspace ITEM_TM24
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoRoomForTM
	removecoins TM24_COINS
	additem ITEM_TM24
	updatecoinsbox 1, 1
	playse SE_SHOP
	msgbox MauvilleCity_GameCorner_Text_HereYouGo, MSGBOX_DEFAULT
	goto MauvilleCity_GameCorner_EventScript_ReturnToChooseTMPrize
	end

MauvilleCity_GameCorner_EventScript_BuyTM13::
	checkcoins VAR_TEMP_2
	goto_if_lt VAR_TEMP_2, TM13_COINS, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForTM
	checkitemspace ITEM_TM13
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoRoomForTM
	removecoins TM13_COINS
	additem ITEM_TM13
	updatecoinsbox 1, 1
	playse SE_SHOP
	msgbox MauvilleCity_GameCorner_Text_HereYouGo, MSGBOX_DEFAULT
	goto MauvilleCity_GameCorner_EventScript_ReturnToChooseTMPrize
	end

MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForTM::
	msgbox MauvilleCity_GameCorner_Text_NotEnoughCoins, MSGBOX_DEFAULT
	goto MauvilleCity_GameCorner_EventScript_ReturnToChooseTMPrize
	end

MauvilleCity_GameCorner_EventScript_NoRoomForTM::
	call Common_EventScript_BagIsFull
	goto MauvilleCity_GameCorner_EventScript_ReturnToChooseTMPrize
	end

MauvilleCity_GameCorner_EventScript_CancelTMSelect::
	msgbox MauvilleCity_GameCorner_Text_OhIsThatSo, MSGBOX_DEFAULT
	hidecoinsbox 0, 0
	release
	end

MauvilleCity_GameCorner_EventScript_Woman2::
	msgbox MauvilleCity_GameCorner_Text_CoinsAreNeededToPlay, MSGBOX_NPC
	end

MauvilleCity_GameCorner_EventScript_Gentleman::
	msgbox MauvilleCity_GameCorner_Text_RouletteOnlyLuck, MSGBOX_NPC
	end

MauvilleCity_GameCorner_EventScript_Girl::
	lock
	msgbox MauvilleCity_GameCorner_Text_GotTwoOfSameDollWantOne, MSGBOX_DEFAULT
	release
	end

MauvilleCity_GameCorner_EventScript_PokefanM::
	lock
	faceplayer
	checkitem ITEM_COIN_CASE
	goto_if_eq VAR_RESULT, TRUE, MauvilleCity_GameCorner_EventScript_TryGive20Coins
	msgbox MauvilleCity_GameCorner_Text_NeedCoinCaseGoNextDoor, MSGBOX_DEFAULT
	goto MauvilleCity_GameCorner_EventScript_NPCReturnToSlots
	end

MauvilleCity_GameCorner_EventScript_TryGive20Coins::
	goto_if_set FLAG_RECEIVED_20_COINS, MauvilleCity_GameCorner_EventScript_PokefanMNormal
	checkcoins VAR_TEMP_1
	goto_if_ge VAR_TEMP_1, 1, MauvilleCity_GameCorner_EventScript_PokefanMNormal @ Only give 20 coins if player has no coins
	setflag FLAG_RECEIVED_20_COINS
	addcoins 50
	msgbox MauvilleCity_GameCorner_Text_LuckOnlyLastSoLongTakeCoins, MSGBOX_DEFAULT
	playse SE_SHOP
	goto MauvilleCity_GameCorner_EventScript_PokefanMNormal
	end

MauvilleCity_GameCorner_EventScript_PokefanMNormal::
	msgbox MauvilleCity_GameCorner_Text_MauvilleSomethingForEveryone, MSGBOX_DEFAULT
	goto MauvilleCity_GameCorner_EventScript_NPCReturnToSlots
	end

MauvilleCity_GameCorner_EventScript_OldMan::
	lock
	faceplayer
	msgbox MauvilleCity_GameCorner_Text_RouletteTablesDifferentRates, MSGBOX_DEFAULT
	goto MauvilleCity_GameCorner_EventScript_NPCReturnToSlots
	end

MauvilleCity_GameCorner_EventScript_Cook::
	lock
	faceplayer
	msgbox MauvilleCity_GameCorner_Text_EasyToLoseTrackOfTime, MSGBOX_DEFAULT
	goto MauvilleCity_GameCorner_EventScript_NPCReturnToSlots
	end

MauvilleCity_GameCorner_EventScript_Man::
	lock
	faceplayer
	msgbox MauvilleCity_GameCorner_Text_UpTo3CoinsCanBeUsed, MSGBOX_DEFAULT
	goto MauvilleCity_GameCorner_EventScript_NPCReturnToSlots
	end

MauvilleCity_GameCorner_EventScript_NPCReturnToSlots::
	closemessage
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

MauvilleCity_GameCorner_EventScript_Maniac::
	lock
	faceplayer
	msgbox MauvilleCity_GameCorner_Text_DifficultToStopOn7, MSGBOX_DEFAULT
	goto MauvilleCity_GameCorner_EventScript_NPCReturnToSlots
	end

MauvilleCity_GameCorner_EventScript_Woman::
	lock
	faceplayer
	msgbox MauvilleCity_GameCorner_Text_HeresSomeSlotsInfo, MSGBOX_DEFAULT
	goto MauvilleCity_GameCorner_EventScript_NPCReturnToSlots
	end

MauvilleCity_GameCorner_EventScript_SlotMachine0::
	lockall
	checkitem ITEM_COIN_CASE
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoCoinCase
	setvar VAR_0x8004, 0
	specialvar VAR_RESULT, GetSlotMachineId
	playslotmachine VAR_RESULT
	releaseall
	end

MauvilleCity_GameCorner_EventScript_SlotMachine1::
	lockall
	checkitem ITEM_COIN_CASE
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoCoinCase
	setvar VAR_0x8004, 1
	specialvar VAR_RESULT, GetSlotMachineId
	playslotmachine VAR_RESULT
	releaseall
	end

MauvilleCity_GameCorner_EventScript_SlotMachine2::
	lockall
	checkitem ITEM_COIN_CASE
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoCoinCase
	setvar VAR_0x8004, 2
	specialvar VAR_RESULT, GetSlotMachineId
	playslotmachine VAR_RESULT
	releaseall
	end

MauvilleCity_GameCorner_EventScript_SlotMachine3::
	lockall
	checkitem ITEM_COIN_CASE
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoCoinCase
	setvar VAR_0x8004, 3
	specialvar VAR_RESULT, GetSlotMachineId
	playslotmachine VAR_RESULT
	releaseall
	end

MauvilleCity_GameCorner_EventScript_SlotMachine4::
	lockall
	checkitem ITEM_COIN_CASE
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoCoinCase
	setvar VAR_0x8004, 4
	specialvar VAR_RESULT, GetSlotMachineId
	playslotmachine VAR_RESULT
	releaseall
	end

MauvilleCity_GameCorner_EventScript_SlotMachine5::
	lockall
	checkitem ITEM_COIN_CASE
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoCoinCase
	setvar VAR_0x8004, 5
	specialvar VAR_RESULT, GetSlotMachineId
	playslotmachine VAR_RESULT
	releaseall
	end

MauvilleCity_GameCorner_EventScript_SlotMachine6::
	lockall
	checkitem ITEM_COIN_CASE
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoCoinCase
	setvar VAR_0x8004, 6
	specialvar VAR_RESULT, GetSlotMachineId
	playslotmachine VAR_RESULT
	releaseall
	end

MauvilleCity_GameCorner_EventScript_SlotMachine7::
	lockall
	checkitem ITEM_COIN_CASE
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoCoinCase
	setvar VAR_0x8004, 7
	specialvar VAR_RESULT, GetSlotMachineId
	playslotmachine VAR_RESULT
	releaseall
	end

MauvilleCity_GameCorner_EventScript_SlotMachine8::
	lockall
	checkitem ITEM_COIN_CASE
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoCoinCase
	setvar VAR_0x8004, 8
	specialvar VAR_RESULT, GetSlotMachineId
	playslotmachine VAR_RESULT
	releaseall
	end

MauvilleCity_GameCorner_EventScript_SlotMachine9::
	lockall
	checkitem ITEM_COIN_CASE
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoCoinCase
	setvar VAR_0x8004, 9
	specialvar VAR_RESULT, GetSlotMachineId
	playslotmachine VAR_RESULT
	releaseall
	end

MauvilleCity_GameCorner_EventScript_SlotMachine10::
	lockall
	checkitem ITEM_COIN_CASE
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoCoinCase
	setvar VAR_0x8004, 10
	specialvar VAR_RESULT, GetSlotMachineId
	playslotmachine VAR_RESULT
	releaseall
	end

MauvilleCity_GameCorner_EventScript_SlotMachine11::
	lockall
	checkitem ITEM_COIN_CASE
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoCoinCase
	setvar VAR_0x8004, 11
	specialvar VAR_RESULT, GetSlotMachineId
	playslotmachine VAR_RESULT
	releaseall
	end

MauvilleCity_GameCorner_EventScript_NoCoinCase::
	msgbox MauvilleCity_GameCorner_Text_CantPlayWithNoCoinCase, MSGBOX_DEFAULT
	releaseall
	end

MauvilleCity_GameCorner_Text_ThisIsMauvilleGameCorner:
	.string "Welcome to the Goldenrod City Game\n"
	.string "Corner!$"

MauvilleCity_GameCorner_Text_NeedCoinCaseForCoins:
	.string "Okay, you wanted some COINS for\n"
	.string "the games?\p"
	.string "But you don't have a Coin Case for\n"
	.string "stowing the COINS.$"

MauvilleCity_GameCorner_Text_WereYouLookingForCoins:
	.string "Were you looking for COINS?\p"
	.string "It's ¥1000 for 50 COINS.\n"
	.string "Would you like some?$"

MauvilleCity_GameCorner_Text_ThankYouHereAreYourCoins:
	.string "Thank you very much!\n"
	.string "Here are your COINS!$"

MauvilleCity_GameCorner_Text_DontHaveEnoughMoney:
	.string "Um… You don't appear to have\n"
	.string "enough money…$"

MauvilleCity_GameCorner_Text_CoinCaseIsFull:
	.string "Oh?\n"
	.string "Your Coin Case is full.$"

MauvilleCity_GameCorner_Text_DontNeedCoinsThen:
	.string "Oh… You don't need COINS, then?\n"
	.string "Good luck on your adventure!$"

MauvilleCity_GameCorner_Text_ExchangeCoinsForPrizes:
	.string "Welcome.\p"
	.string "You can exchange your COINS for\n"
	.string "prizes here.$"

MauvilleCity_GameCorner_Text_WhichPrize:
	.string "Which prize would you like?$"

MauvilleCity_GameCorner_Text_SoYourChoiceIsTheTMX:
	.string "So your choice is\n"
	.string "the {STR_VAR_1} {STR_VAR_2}?$"

MauvilleCity_GameCorner_Text_SendToYourHomePC:
	.string "Thank you!\n"
	.string "We'll send it to your PC at home.$"

MauvilleCity_GameCorner_Text_NotEnoughCoins:
	.string "You don't have enough COINS.$"

@ Unused
MauvilleCity_GameCorner_Text_NoRoomForPlacingDecor:
	.string "There isn't any room available for\n"
	.string "placing {STR_VAR_1}.$"

MauvilleCity_GameCorner_Text_OhIsThatSo:
	.string "Oh, is that so? \n"
	.string "You need to save some COINS before\l"
	.string "coming back here.$"

MauvilleCity_GameCorner_Text_SoYourChoiceIsX:
	.string "So your choice is {STR_VAR_1}?$"

MauvilleCity_GameCorner_Text_HereYouGo:
	.string "Here you go!$"

@ Unused
MauvilleCity_GameCorner_Text_CantCarryAnyMore:
	.string "Oh, you can't carry any more than that.$"

MauvilleCity_GameCorner_Text_GotTwoOfSameDollWantOne:
	.string "Can we go now, Gran Gran?\p"
	.string "I'm hungry.$"

MauvilleCity_GameCorner_Text_NeedCoinCaseGoNextDoor:
	.string "Hey, kid, if you want to play here,\n"
	.string "you need a Coin Case.$"

MauvilleCity_GameCorner_Text_LuckOnlyLastSoLongTakeCoins:
	.string "Don't have any coins, huh?\p"
	.string "Here, this should get you started.$"

MauvilleCity_GameCorner_Text_MauvilleSomethingForEveryone:
	.string "I can't keep up with all these old folks,\n"
	.string "my lever pulling arm is worn out!$"

MauvilleCity_GameCorner_Text_RouletteTablesDifferentRates:
	.string "The ROULETTE tables have different\n"
	.string "rates.\p"
	.string "Check your COINS if you're going to\n"
	.string "pick a table.$"

MauvilleCity_GameCorner_Text_EasyToLoseTrackOfTime:
	.string "Win or lose, I don't care either way.\p"
	.string "I'm just here for the flashing lights\n"
	.string "and sounds.$"

MauvilleCity_GameCorner_Text_CoinsAreNeededToPlay:
	.string "One of the prizes they're offering is an\n"
	.string "apple, I couldn't believe it!\p"
	.string "Who would spend all of their coins on\n"
	.string "fruit?$"

MauvilleCity_GameCorner_Text_RouletteOnlyLuck:
	.string "This ROULETTE thing…\n"
	.string "It's rather demanding.\p"
	.string "Win or lose, it's only by luck.$"

MauvilleCity_GameCorner_Text_UpTo3CoinsCanBeUsed:
	.string "I've done nothing but lose here, that\n"
	.string "just means I'm more likely to win now...\p"
	.string "Right?$"

MauvilleCity_GameCorner_Text_DifficultToStopOn7:
	.string "Don't bother me kid, I'm just about to\n"
	.string "win my money back.$"

MauvilleCity_GameCorner_Text_HeresSomeSlotsInfo:
	.string "I'm not leaving until I hit triple 7's!\p"
	.string "I know I'm getting close to winning big,\n"
	.string "I can feel it in my bones!$"

MauvilleCity_GameCorner_Text_CantPlayWithNoCoinCase:
	.string "You can't play if you don't have\n"
	.string "a COIN CASE.$"

MauvilleCity_GameCorner_Text_ObtainedPikachu:
	.string "{PLAYER} received a Pikachu.$"

MauvilleCity_GameCorner_Text_ObtainedApplin:
	.string "{PLAYER} received an Applin.$"

MauvilleCity_GameCorner_Text_ObtainedPorygon:
	.string "{PLAYER} received a Porygon.$"

MauvilleCity_GameCorner_Text_EnjoyMon:
	.string "Please come again.$"

