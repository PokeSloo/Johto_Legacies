MauvilleCity_House1_MapScripts::
	.byte 0


MauvilleCity_House1_EventScript_Collector::
	lock
	faceplayer
	msgbox MauvilleCity_House1_EventScript_Collector_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq MauvilleCity_House1_EventScript_Collector_1
	goto MauvilleCity_House1_EventScript_BottleCapSale
	end

MauvilleCity_House1_EventScript_Collector_1:
	msgbox MauvilleCity_House1_EventScript_Collector_Text_1
	release
	end


MauvilleCity_House1_EventScript_BottleCapSale::
	checkitem ITEM_GOLD_BOTTLE_CAP
	compare VAR_RESULT, TRUE
	goto_if_eq MauvilleCity_House1_EventScript_BottleCapSale_2
	checkitem ITEM_BOTTLE_CAP
	compare VAR_RESULT, TRUE
	goto_if_eq MauvilleCity_House1_EventScript_BottleCapSale_5
	msgbox MauvilleCity_House1_EventScript_BottleCapSale_Text_4
	release
	end

MauvilleCity_House1_EventScript_BottleCapSale_2:
	msgbox MauvilleCity_House1_EventScript_BottleCapSale_Text_0
	removeitem ITEM_GOLD_BOTTLE_CAP, 1
	giveitem ITEM_EXP_CANDY_M
	msgbox MauvilleCity_House1_EventScript_BottleCapSale_Text_1, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq MauvilleCity_House1_EventScript_BottleCapSale_7
	goto MauvilleCity_House1_EventScript_BottleCapSale
	end

MauvilleCity_House1_EventScript_BottleCapSale_5:
	msgbox MauvilleCity_House1_EventScript_BottleCapSale_Text_2
	removeitem ITEM_BOTTLE_CAP, 1
	giveitem ITEM_EXP_CANDY_S
	msgbox MauvilleCity_House1_EventScript_BottleCapSale_Text_3, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq MauvilleCity_House1_EventScript_BottleCapSale_10
	goto MauvilleCity_House1_EventScript_BottleCapSale
	end

MauvilleCity_House1_EventScript_BottleCapSale_7:
	msgbox MauvilleCity_House1_EventScript_Collector_Text_1
	release
	end

MauvilleCity_House1_EventScript_BottleCapSale_10:
	msgbox MauvilleCity_House1_EventScript_Collector_Text_1
	release
	end


MauvilleCity_House1_EventScript_TauntKid::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_TAUNT_TM, MauvilleCity_House1_EventScript_TauntKid_1
	msgbox MauvilleCity_House1_EventScript_TauntKid_Text_1
	waitmessage
	giveitem ITEM_TM12
	setflag FLAG_RECEIVED_TAUNT_TM
	release
	end

MauvilleCity_House1_EventScript_TauntKid_1:
	msgbox MauvilleCity_House1_EventScript_TauntKid_Text_0
	release
	end


MauvilleCity_House1_EventScript_Collector_Text_0:
	.string "Hiya! I'm the Bottle Cap Maniac!\p"
	.string "My favorite hobby is collecting Bottle\n"
	.string "Caps. If you have any Bottle Caps, I\l"
	.string "would be willing to trade you for some\l"
	.string "Exp.Candy.\p"
	.string "So do we have a deal?$"

MauvilleCity_House1_EventScript_Collector_Text_1:
	.string "Oh, I see.\p"
	.string "Well if you ever change your mind, you\n"
	.string "know where to find me.$"

MauvilleCity_House1_EventScript_BottleCapSale_Text_0:
	.string "Oh! You have a Gold Bottle Cap!\p"
	.string "That's fantastic!\p"
	.string "Here, you can have an Exp.Candy M in\n"
	.string "return.$"

MauvilleCity_House1_EventScript_BottleCapSale_Text_1:
	.string "Pleasure doing business with you!\p"
	.string "Now, do you have any more Bottle Caps\n"
	.string "you would be willing to trade?$"

MauvilleCity_House1_EventScript_BottleCapSale_Text_2:
	.string "Ah, I see you have a Bottle Cap.\p"
	.string "Hmm, for that you can have an Exp.Candy\n"
	.string "S in return.$"

MauvilleCity_House1_EventScript_BottleCapSale_Text_3:
	.string "Pleasure doing business with you.\p"
	.string "Now, do you have any more Bottle Caps\n"
	.string "you would be willing to trade?$"

MauvilleCity_House1_EventScript_BottleCapSale_Text_4:
	.string "Hmmm...\p"
	.string "It appears you don't have any Bottle\n"
	.string "Caps on you at the moment.\p"
	.string "If you do find some, you know where to\n"
	.string "find me.$"

MauvilleCity_House1_EventScript_TauntKid_Text_0:
	.string "Have you tried taunting anyone yet?$"

MauvilleCity_House1_EventScript_TauntKid_Text_1:
	.string "Are you a TRAINER?\p"
	.string "I don't believe it!\p"
	.string "You look like you couldn't even catch a\n"
	.string "cold!\p"
	.string "I bet I could beat you with a single\n"
	.string "level 1 Magikarp!\p"
	.string "...\p"
	.string "It's fun to taunt people, you should try\n"
	.string "it sometime.$"
