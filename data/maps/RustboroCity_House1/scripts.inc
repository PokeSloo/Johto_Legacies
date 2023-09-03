RustboroCity_House1_MapScripts::
	.byte 0

RustboroCity_House1_EventScript_Trader::
	lock
	faceplayer
	goto_if_set FLAG_RUSTBORO_NPC_TRADE_COMPLETED, RustboroCity_House1_EventScript_TradeCompleted
	setvar VAR_0x8008, INGAME_TRADE_SEEDOT
	copyvar VAR_0x8004, VAR_0x8008
	specialvar VAR_RESULT, GetInGameTradeSpeciesInfo
	copyvar VAR_0x8009, VAR_RESULT
	msgbox RustboroCity_House1_Text_IllTradeIfYouWant, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, RustboroCity_House1_EventScript_DeclineTrade
	special ChoosePartyMon
	waitstate
	copyvar VAR_0x800A, VAR_0x8004
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, RustboroCity_House1_EventScript_DeclineTrade
	copyvar VAR_0x8005, VAR_0x800A
	specialvar VAR_RESULT, GetTradeSpecies
	copyvar VAR_0x800B, VAR_RESULT
	goto_if_ne VAR_RESULT, VAR_0x8009, RustboroCity_House1_EventScript_NotRequestedMon
	copyvar VAR_0x8004, VAR_0x8008
	copyvar VAR_0x8005, VAR_0x800A
	special CreateInGameTradePokemon
	special DoInGameTradeScene
	waitstate
	msgbox RustboroCity_House1_Text_PleaseBeGoodToMyPokemon, MSGBOX_DEFAULT
	setflag FLAG_RUSTBORO_NPC_TRADE_COMPLETED
	release
	end

RustboroCity_House1_EventScript_DeclineTrade::
	msgbox RustboroCity_House1_Text_YouDontWantToThatsOkay, MSGBOX_DEFAULT
	release
	end

RustboroCity_House1_EventScript_NotRequestedMon::
	bufferspeciesname STR_VAR_1, VAR_0x8009
	msgbox RustboroCity_House1_Text_DoesntLookLikeMonToMe, MSGBOX_DEFAULT
	release
	end

RustboroCity_House1_EventScript_TradeCompleted::
	msgbox RustboroCity_House1_Text_AnyPokemonCanBeCute, MSGBOX_DEFAULT
	release
	end

RustboroCity_House1_EventScript_Hiker::
	msgbox RustboroCity_House1_Text_AllSortsOfPlaces, MSGBOX_NPC
	end

RustboroCity_House1_Text_IllTradeIfYouWant:
	.string "I have so many ROCK type POKéMON that\n"
	.string "I don't know what to do with them all.\p"
	.string "Say, would you be willing to trade me a\n"
	.string "{STR_VAR_1} for my Own Tempo\n"
	.string "{STR_VAR_2}?$"

RustboroCity_House1_Text_PleaseBeGoodToMyPokemon:
	.string "Please be good to that little RUFFIAN.$"

RustboroCity_House1_Text_DoesntLookLikeMonToMe:
	.string "You can't fool me, I know what a\n"
	.string "{STR_VAR_1} looks like, and that's\l"
	.string "not one.$"

RustboroCity_House1_Text_YouDontWantToThatsOkay:
	.string "Fine if you don't want to, but this is a\n"
	.string "very special Rockruff.$"

RustboroCity_House1_Text_AnyPokemonCanBeCute:
	.string "That Rockruff is special, it will only\n"
	.string "evolve between 5pm and 6pm.$"

RustboroCity_House1_Text_AllSortsOfPlaces:
	.string "I changed my Geodude's ability to\n"
	.string "Sturdy using an Ability Capsule.\p"
	.string "It seems to be happy about the change.$"

RustboroCity_House1_EventScript_Girl::
	msgbox RustboroCity_House1_EventScript_Girl_Text_0, MSGBOX_NPC
	end


RustboroCity_House1_EventScript_ShopKeep::
	lock
	msgbox RustboroCity_House1_EventScript_ShopKeep_Text_0
	waitmessage
	pokemart RustboroCity_House1_MartItems
	msgbox RustboroCity_House1_EventScript_ShopKeep_Text_1
	release
	end


	.align 2
RustboroCity_House1_MartItems:
	.2byte ITEM_ABILITY_CAPSULE
	.2byte ITEM_ABILITY_PATCH
	.2byte ITEM_LONELY_MINT
	.2byte ITEM_ADAMANT_MINT
	.2byte ITEM_NAUGHTY_MINT
	.2byte ITEM_BRAVE_MINT
	.2byte ITEM_BOLD_MINT
	.2byte ITEM_IMPISH_MINT
	.2byte ITEM_LAX_MINT
	.2byte ITEM_RELAXED_MINT
	.2byte ITEM_MODEST_MINT
	.2byte ITEM_MILD_MINT
	.2byte ITEM_RASH_MINT
	.2byte ITEM_QUIET_MINT
	.2byte ITEM_CALM_MINT
	.2byte ITEM_GENTLE_MINT
	.2byte ITEM_CAREFUL_MINT
	.2byte ITEM_SASSY_MINT
	.2byte ITEM_TIMID_MINT
	.2byte ITEM_HASTY_MINT
	.2byte ITEM_JOLLY_MINT
	.2byte ITEM_NAIVE_MINT
	.2byte ITEM_SERIOUS_MINT
	.2byte ITEM_NONE

RustboroCity_House1_EventScript_Girl_Text_0:
	.string "I love Mareep, they're my favorite\n"
	.string "POKéMON!\p"
	.string "I saw a bunch on Route 32.\p"
	.string "They look so cuddly, but try not to get\n"
	.string "electrocuted.$"

RustboroCity_House1_EventScript_ShopKeep_Text_0:
	.string "Welcome!\p"
	.string "How may I serve you?$"

RustboroCity_House1_EventScript_ShopKeep_Text_1:
	.string "Please come again.$"
