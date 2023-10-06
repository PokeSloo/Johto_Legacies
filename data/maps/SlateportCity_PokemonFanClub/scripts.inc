SlateportCity_PokemonFanClub_MapScripts::
	.byte 0


SlateportCity_PokemonFanClub_EventScript_Trader::
	lock
	faceplayer
	goto_if_set FLAG_GOLDENROD_CLOBBOPUS_TRADE, SlateportCity_PokemonFanClub_EventScript_TradeCompleted
	setvar VAR_0x8008, INGAME_TRADE_PLUSLE
	copyvar VAR_0x8004, VAR_0x8008
	specialvar VAR_RESULT, GetInGameTradeSpeciesInfo
	copyvar VAR_0x8009, VAR_RESULT
	msgbox SlateportCity_PokemonFanClub_EventScript_Trader_Text_0
	goto_if_eq VAR_RESULT, NO, SlateportCity_PokemonFanClub_EventScript_DeclineTrade
	special ChoosePartyMon
	waitstate
	copyvar VAR_0x800A, VAR_0x8004
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, SlateportCity_PokemonFanClub_EventScript_DeclineTrade
	copyvar VAR_0x8005, VAR_0x800A
	specialvar VAR_RESULT, GetTradeSpecies
	copyvar VAR_0x800B, VAR_RESULT
	goto_if_ne VAR_RESULT, VAR_0x8009, SlateportCity_PokemonFanClub_EventScript_NotRequestedMon
	copyvar VAR_0x8004, VAR_0x8008
	copyvar VAR_0x8005, VAR_0x800A
	special CreateInGameTradePokemon
	special DoInGameTradeScene
	waitstate
	msgbox SlateportCity_PokemonFanClub_EventScript_Trader_Text_1
	setflag FLAG_GOLDENROD_CLOBBOPUS_TRADE
	release
	end


SlateportCity_PokemonFanClub_EventScript_DeclineTrade::
	msgbox SlateportCity_PokemonFanClub_EventScript_DeclineTrade_Text_0
	release
	end


SlateportCity_PokemonFanClub_EventScript_NotRequestedMon::
	bufferspeciesname STR_VAR_1, VAR_0x8009
	msgbox SlateportCity_PokemonFanClub_EventScript_NotRequestedMon_Text_0
	release
	end


SlateportCity_PokemonFanClub_EventScript_TradeCompleted::
	msgbox SlateportCity_PokemonFanClub_EventScript_TradeCompleted_Text_0
	release
	end


SlateportCity_PokemonFanClub_EventScript_Twin::
	lock
	faceplayer
	msgbox SlateportCity_PokemonFanClub_EventScript_Twin_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq SlateportCity_PokemonFanClub_EventScript_Twin_1
	msgbox SlateportCity_PokemonFanClub_EventScript_Twin_Text_2
	release
	end

SlateportCity_PokemonFanClub_EventScript_Twin_1:
	msgbox SlateportCity_PokemonFanClub_EventScript_Twin_Text_1
	release
	end


SlateportCity_PokemonFanClub_EventScript_SootheBellWoman::
	msgbox SlateportCity_PokemonFanClub_EventScript_SootheBellWoman_Text_0, MSGBOX_NPC
	end


SlateportCity_PokemonFanClub_EventScript_Chairman::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_FOCUS_SASH, SlateportCity_PokemonFanClub_EventScript_Chairman_1
	msgbox SlateportCity_PokemonFanClub_EventScript_Chairman_Text_1, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq SlateportCity_PokemonFanClub_EventScript_Chairman_4
	msgbox SlateportCity_PokemonFanClub_EventScript_Chairman_Text_3
	waitmessage
	giveitem ITEM_FOCUS_SASH
	msgbox SlateportCity_PokemonFanClub_EventScript_Chairman_Text_4
	setflag FLAG_RECEIVED_FOCUS_SASH
	release
	end

SlateportCity_PokemonFanClub_EventScript_Chairman_1:
	msgbox SlateportCity_PokemonFanClub_EventScript_Chairman_Text_0
	release
	end

SlateportCity_PokemonFanClub_EventScript_Chairman_4:
	msgbox SlateportCity_PokemonFanClub_EventScript_Chairman_Text_2
	release
	end


SlateportCity_PokemonFanClub_EventScript_Man::
	msgbox SlateportCity_PokemonFanClub_EventScript_Man_Text_0, MSGBOX_NPC
	end


SlateportCity_PokemonFanClub_EventScript_Azumarill::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_AZUMARILL, CRY_MODE_NORMAL
	msgbox SlateportCity_PokemonFanClub_EventScript_Azumarill_Text_0
	waitmoncry
	release
	end


SlateportCity_PokemonFanClub_EventScript_Slowpoke::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_SLOWPOKE, CRY_MODE_NORMAL
	msgbox SlateportCity_PokemonFanClub_EventScript_Slowpoke_Text_0
	waitmoncry
	release
	end


SlateportCity_PokemonFanClub_EventScript_Miltank::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_MILTANK, CRY_MODE_NORMAL
	msgbox SlateportCity_PokemonFanClub_EventScript_Miltank_Text_0
	waitmoncry
	release
	end


SlateportCity_PokemonFanClub_EventScript_Trader_Text_0:
	.string "I'm just in love with FIGHTING-type\n"
	.string "POKéMON, but I really want to start\l"
	.string "branching out, you feel me?\p"
	.string "Hey, would you be willing to trade me an\n"
	.string "Abra for my Clobbopus?$"

SlateportCity_PokemonFanClub_EventScript_Trader_Text_1:
	.string "Perfect!\p"
	.string "I think Abra is a good POKéMON to get me\n"
	.string "started with PSYCHIC-types.$"

SlateportCity_PokemonFanClub_EventScript_DeclineTrade_Text_0:
	.string "Suit yourself. I thought maybe you\n"
	.string "could use a little help against Whitney,\l"
	.string "but I guess not.$"

SlateportCity_PokemonFanClub_EventScript_NotRequestedMon_Text_0:
	.string "Hmm... That doesn't look like an Abra to\n"
	.string "me.\p"
	.string "I mean, sure, I love all POKéMON, but I\n"
	.string "really want an Abra.$"

SlateportCity_PokemonFanClub_EventScript_TradeCompleted_Text_0:
	.string "How's old been SQUIDWARD treating you?\p"
	.string "You know, Clobbopus can't be found\n"
	.string "anywhere in the Johto region.\p"
	.string "I caught SQUIDWARD on the Golden\n"
	.string "Islands.$"

SlateportCity_PokemonFanClub_EventScript_Twin_Text_0:
	.string "POKéMON are the best!\n"
	.string "Don't you agree?$"

SlateportCity_PokemonFanClub_EventScript_Twin_Text_1:
	.string "No? What do you mean no??\p"
	.string "You're wrong!\p"
	.string "POKéMON are the greatest!\p"
	.string "Your opinion is stupid, and I don't like\n"
	.string "your face!\p"
	.string "Get away from me!$"

SlateportCity_PokemonFanClub_EventScript_Twin_Text_2:
	.string "Yay! POKéMON are the greatest!$"

SlateportCity_PokemonFanClub_EventScript_SootheBellWoman_Text_0:
	.string "We recently had to reject a very\n"
	.string "unsightly man from joining our FanClub.\p"
	.string "We strongly disapprove of his...\n"
	.string "behavior towards POKéMON...$"

SlateportCity_PokemonFanClub_EventScript_Chairman_Text_0:
	.string "Sorry, but I can't give you any more\n"
	.string "Focus Sashes.\p"
	.string "I need to keep at least 6 at all times,\n"
	.string "one for each of my POKéMON.\p"
	.string "I just can't stand the thought of them\n"
	.string "fainting in battle.\p"
	.string "I'm sure you will find another Focus\n"
	.string "Sash somewhere else.$"

SlateportCity_PokemonFanClub_EventScript_Chairman_Text_1:
	.string "Welcome to the POKéMON FanClub!\p"
	.string "I am the chairman here, and I just love\n"
	.string "POKéMON!\p"
	.string "Tell me TRAINER, how much do you love\n"
	.string "POKéMON?$"

SlateportCity_PokemonFanClub_EventScript_Chairman_Text_2:
	.string "Oh, I see...\p"
	.string "Some people just don't appreciate\n"
	.string "POKéMON as much as we all should.$"

SlateportCity_PokemonFanClub_EventScript_Chairman_Text_3:
	.string "Wonderful! A POKéMON lover with a fine\n"
	.string "sense of humor!\p"
	.string "I would gladly accept you as a member\n"
	.string "of our FanClub!\p"
	.string "I'll tell you what; I see that your love\n"
	.string "for POKéMON is genuine, and I like your\l"
	.string "attitude.\p"
	.string "I would like to present you with this\n"
	.string "little welcoming gift!$"

SlateportCity_PokemonFanClub_EventScript_Chairman_Text_4:
	.string "There's nothing I can't stand more than\n"
	.string "letting my POKéMON faint in battle.\p"
	.string "That Focus Sash will prevent your\n"
	.string "POKéMON from fainting if it's at full\l"
	.string "health before the opponents attack.\p"
	.string "Use it wisely though, it will be\n"
	.string "destroyed after saving one of your\l"
	.string "POKéMON...$"

SlateportCity_PokemonFanClub_EventScript_Man_Text_0:
	.string "I thought this would be a fun club to\n"
	.string "join, but all these people ever do is sit\l"
	.string "around and talk about how much they\l"
	.string "love POKéMON!\p"
	.string "Seriously!\p"
	.string "All I've heard for the last 3 weeks has\n"
	.string "been POKéMON this, POKéMON that,\l"
	.string "POKéMON, POKéMON, POKéMON, POKéMON!\p"
	.string "I'm losing my mind here!$"

SlateportCity_PokemonFanClub_EventScript_Azumarill_Text_0:
	.string "AZUMARILL: Azu azu!$"

SlateportCity_PokemonFanClub_EventScript_Slowpoke_Text_0:
	.string "SLOWPOKE: Slooowww?$"

SlateportCity_PokemonFanClub_EventScript_Miltank_Text_0:
	.string "MILTANK: Moo moo!$"
