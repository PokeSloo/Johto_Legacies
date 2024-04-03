FortreeCity_House1_MapScripts::
	.byte 0

FortreeCity_House1_EventScript_Trader::
	lock
	faceplayer
	goto_if_set FLAG_FORTREE_NPC_TRADE_COMPLETED, FortreeCity_House1_EventScript_TradeCompleted
	setvar VAR_0x8008, INGAME_TRADE_HORSEA
	copyvar VAR_0x8004, VAR_0x8008
	specialvar VAR_RESULT, GetInGameTradeSpeciesInfo
	copyvar VAR_0x8009, VAR_RESULT
	msgbox FortreeCity_House1_Text_YouWillTradeWontYou, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, FortreeCity_House1_EventScript_DeclineTrade
	special ChoosePartyMon
	waitstate
	copyvar VAR_0x800A, VAR_0x8004
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, FortreeCity_House1_EventScript_DeclineTrade
	copyvar VAR_0x8005, VAR_0x800A
	specialvar VAR_RESULT, GetTradeSpecies
	copyvar VAR_0x800B, VAR_RESULT
	goto_if_ne VAR_RESULT, VAR_0x8009, FortreeCity_House1_EventScript_NotRequestedMon
	copyvar VAR_0x8004, VAR_0x8008
	copyvar VAR_0x8005, VAR_0x800A
	special CreateInGameTradePokemon
	special DoInGameTradeScene
	waitstate
	bufferspeciesname STR_VAR_1, VAR_0x8009
	msgbox FortreeCity_House1_Text_MonYouTakeCare, MSGBOX_DEFAULT
	setflag FLAG_FORTREE_NPC_TRADE_COMPLETED
	release
	end

FortreeCity_House1_EventScript_DeclineTrade::
	msgbox FortreeCity_House1_Text_YouWontTradeMe, MSGBOX_DEFAULT
	release
	end

FortreeCity_House1_EventScript_NotRequestedMon::
	bufferspeciesname STR_VAR_1, VAR_0x8009
	msgbox FortreeCity_House1_Text_ThisIsntAMon, MSGBOX_DEFAULT
	release
	end

FortreeCity_House1_EventScript_TradeCompleted::
	msgbox FortreeCity_House1_Text_GoingToMakeVolbeatStrong, MSGBOX_DEFAULT
	release
	end

FortreeCity_House1_EventScript_Trader2::
	lock
	faceplayer
	goto_if_set FLAG_SECOND_OLIVINE_TRADE, FortreeCity_House1_EventScript_Trade2Completed
	setvar VAR_0x8008, INGAME_TRADE_MEOWTH
	copyvar VAR_0x8004, VAR_0x8008
	specialvar VAR_RESULT, GetInGameTradeSpeciesInfo
	copyvar VAR_0x8009, VAR_RESULT
	msgbox FortreeCity_House1_Text_YouWillTradeWontYou, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, FortreeCity_House1_EventScript_DeclineTrade
	special ChoosePartyMon
	waitstate
	copyvar VAR_0x800A, VAR_0x8004
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, FortreeCity_House1_EventScript_DeclineTrade
	copyvar VAR_0x8005, VAR_0x800A
	specialvar VAR_RESULT, GetTradeSpecies
	copyvar VAR_0x800B, VAR_RESULT
	goto_if_ne VAR_RESULT, VAR_0x8009, FortreeCity_House1_EventScript_NotRequestedMon
	copyvar VAR_0x8004, VAR_0x8008
	copyvar VAR_0x8005, VAR_0x800A
	special CreateInGameTradePokemon
	special DoInGameTradeScene
	waitstate
	bufferspeciesname STR_VAR_1, VAR_0x8009
	msgbox FortreeCity_House1_Text_MonYouTakeCare, MSGBOX_DEFAULT
	setflag FLAG_SECOND_OLIVINE_TRADE
	release
	end

FortreeCity_House1_EventScript_Trade2Completed::
	msgbox FortreeCity_House1_Text_NewCompleted, MSGBOX_DEFAULT
	release
	end

FortreeCity_House1_Text_YouWillTradeWontYou:
	.string "I really want a {STR_VAR_1}, but I\n"
	.string "don't want to trade with my stupid\l"
	.string "brother over there.\p"
	.string "Say, do you have a {STR_VAR_1}? Will\n"
	.string "you trade me for my {STR_VAR_2}?$"

FortreeCity_House1_Text_MonYouTakeCare:
	.string "Aw man, I wanted a {STR_VAR_1}, but\n"
	.string "it evolved as soon as I got it.\p"
	.string "Thanks anyway...$"

FortreeCity_House1_Text_ThisIsntAMon:
	.string "Uh, no, I don't think so.\n"
	.string "That isn't a {STR_VAR_1}.$"

FortreeCity_House1_Text_YouWontTradeMe:
	.string "You won't trade with me?\p"
	.string "Well, I'm still not going to trade with my\n"
	.string "stupid brother.$"

FortreeCity_House1_Text_GoingToMakeVolbeatStrong:
	.string "I keep trying to find a Shelmet, but\n"
	.string "they always just evolve as soon as I\l"
	.string "get them.$"

FortreeCity_House1_Text_NewCompleted:
	.string "I keep trying to find a Karrablast, but\n"
	.string "they always just evolve as soon as I\l"
	.string "get them.$"

FortreeCity_House1_Text_TradingMemoriesWithOthers:
	.string "Oh, these boys...\p"
	.string "Why can't they just learn to accept\n"
	.string "what they have?$"

FortreeCity_House1_EventScript_ExpertF::
	lock
	faceplayer
	goto_if_set FLAG_FIND_OUT_GUY_IN_CHERRYGROVE, FortreeCity_House1_EventScript_ExpertF_1
	goto_if_set FLAG_TOOK_ROUJEM_CRAZY_GIRL_OFFER, FortreeCity_House1_EventScript_ExpertF_2
	msgbox FortreeCity_House1_Text_TradingMemoriesWithOthers
	release
	end

FortreeCity_House1_EventScript_ExpertF_1:
	msgbox FortreeCity_House1_EventScript_ExpertF_Text_0
	release
	end

FortreeCity_House1_EventScript_ExpertF_2:
	msgbox FortreeCity_House1_EventScript_ExpertF_Text_1
	setflag FLAG_FIND_OUT_GUY_IN_CHERRYGROVE
	release
	end


FortreeCity_House1_EventScript_ExpertF_Text_0:
	.string "It's you again.\p"
	.string "Did you find the mystery boyfriend?\p"
	.string "He should still live in Cherrygrove City\n"
	.string "now.$"

FortreeCity_House1_EventScript_ExpertF_Text_1:
	.string "What's that?\p"
	.string "A long distance boyfriend?\p"
	.string "...\p"
	.string "Hmm, nobody like that lives here.\p"
	.string "You must be thinking of the previous\n"
	.string "resident.\p"
	.string "I'm pretty sure he moved to Cherrygrove\n"
	.string "City.\p"
	.string "Good luck finding him.$"
