VerdanturfTown_WandasHouse_MapScripts::
	.byte 0


VerdanturfTown_WandasHouse_EventScript_Trader::
	lock
	faceplayer
	goto_if_set FLAG_COMPLETED_BELDUM_TRADE, VerdanturfTown_WandasHouse_EventScript_TradeCompleted
	setvar VAR_0x8008, INGAME_TRADE_BELDUM
	copyvar VAR_0x8004, VAR_0x8008
	specialvar VAR_RESULT, GetInGameTradeSpeciesInfo
	copyvar VAR_0x8009, VAR_RESULT
	msgbox VerdanturfTown_WandasHouse_EventScript_Trader_Text_0
	goto_if_eq VAR_RESULT, NO, VerdanturfTown_WandasHouse_EventScript_DeclineTrade
	special ChoosePartyMon
	waitstate
	copyvar VAR_0x800A, VAR_0x8004
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, VerdanturfTown_WandasHouse_EventScript_DeclineTrade
	copyvar VAR_0x8005, VAR_0x800A
	specialvar VAR_RESULT, GetTradeSpecies
	copyvar VAR_0x800B, VAR_RESULT
	goto_if_ne VAR_RESULT, VAR_0x8009, VerdanturfTown_WandasHouse_EventScript_NotRequestedMon
	copyvar VAR_0x8004, VAR_0x8008
	copyvar VAR_0x8005, VAR_0x800A
	special CreateInGameTradePokemon
	special DoInGameTradeScene
	waitstate
	msgbox VerdanturfTown_WandasHouse_EventScript_Trader_Text_1
	setflag FLAG_COMPLETED_BELDUM_TRADE
	release
	end


VerdanturfTown_WandasHouse_EventScript_DeclineTrade::
	msgbox VerdanturfTown_WandasHouse_EventScript_DeclineTrade_Text_0
	release
	end


VerdanturfTown_WandasHouse_EventScript_NotRequestedMon::
	bufferspeciesname STR_VAR_1, VAR_0x8009
	msgbox VerdanturfTown_WandasHouse_EventScript_NotRequestedMon_Text_0
	release
	end


VerdanturfTown_WandasHouse_EventScript_TradeCompleted::
	msgbox VerdanturfTown_WandasHouse_EventScript_TradeCompleted_Text_0
	release
	end


VerdanturfTown_WandasHouse_EventScript_Mom::
	msgbox VerdanturfTown_WandasHouse_EventScript_Mom_Text_0, MSGBOX_NPC
	end


VerdanturfTown_WandasHouse_EventScript_Dad::
	msgbox VerdanturfTown_WandasHouse_EventScript_Dad_Text_0, MSGBOX_NPC
	end


VerdanturfTown_WandasHouse_EventScript_Trader_Text_0:
	.string "I've always dreamed of raising up a\n"
	.string "Larvitar, but my parents won't let me\l"
	.string "leave Blackthorn City.\p"
	.string "I'll never find one!\p"
	.string "Say, if you have a Larvitar, would you be\n"
	.string "willing to trade it for my Beldum?$"

VerdanturfTown_WandasHouse_EventScript_Trader_Text_1:
	.string "Yes! I've always wanted a Larvitar!\p"
	.string "Please take good care of Beldum.$"

VerdanturfTown_WandasHouse_EventScript_DeclineTrade_Text_0:
	.string "Man, I'll never find a Larvitar!$"

VerdanturfTown_WandasHouse_EventScript_NotRequestedMon_Text_0:
	.string "Uhh, really?\p"
	.string "I know a Larvitar when I see one, and\n"
	.string "that thing is no Larvitar.$"

VerdanturfTown_WandasHouse_EventScript_TradeCompleted_Text_0:
	.string "Have you been treating STEVEN well?\p"
	.string "I've enjoyed spending time with\n"
	.string "Larvitar, I just wish I could leave\l"
	.string "Blackthorn City to train it up!$"

VerdanturfTown_WandasHouse_EventScript_Mom_Text_0:
	.string "Our son wants to travel around Johto,\n"
	.string "but I'm afraid he's just too young.\p"
	.string "By the way, where are your parents?\p"
	.string "Do they know you're here in Blackthorn\n"
	.string "City?$"

VerdanturfTown_WandasHouse_EventScript_Dad_Text_0:
	.string "I paid good money to get my son a\n"
	.string "Beldum, but all he wants is a stupid\l"
	.string "Larvitar!\p"
	.string "I swear, some kids will never be happy.$"
