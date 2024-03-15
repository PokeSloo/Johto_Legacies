SootopolisCity_House5_MapScripts::
	.byte 0


SootopolisCity_House5_EventScript_Collector::
	lock
	faceplayer
	msgbox SootopolisCity_House5_EventScript_Collector_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq SootopolisCity_House5_EventScript_Collector_1
	goto SootopolisCity_House5_EventScript_HeartScaleSale
	end

SootopolisCity_House5_EventScript_Collector_1:
	msgbox SootopolisCity_House5_EventScript_Collector_Text_1
	release
	end


SootopolisCity_House5_EventScript_HeartScaleSale::
	checkitem ITEM_HEART_SCALE
	compare VAR_RESULT, TRUE
	goto_if_eq SootopolisCity_House5_EventScript_HeartScaleSale_2
	msgbox SootopolisCity_House5_EventScript_HeartScaleSale_Text_2
	release
	end

SootopolisCity_House5_EventScript_HeartScaleSale_2:
	msgbox SootopolisCity_House5_EventScript_HeartScaleSale_Text_0
	removeitem ITEM_HEART_SCALE, 1
	giveitem ITEM_EXP_CANDY_L
	msgbox SootopolisCity_House5_EventScript_HeartScaleSale_Text_1, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq SootopolisCity_House5_EventScript_HeartScaleSale_4
	goto SootopolisCity_House5_EventScript_HeartScaleSale
	end

SootopolisCity_House5_EventScript_HeartScaleSale_4:
	msgbox SootopolisCity_House5_EventScript_Collector_Text_1
	release
	end


SootopolisCity_House5_EventScript_Girl::
	msgbox SootopolisCity_House5_EventScript_Girl_Text_0, MSGBOX_NPC
	end


SootopolisCity_House5_EventScript_Collector_Text_0:
	.string "Hiya! I'm the Heart Scale Maniac!\p"
	.string "My favorite hobby is collecting Heart\n"
	.string "Scales. If you have any Heart Scales, I\l"
	.string "would be willing to trade you for some\l"
	.string "Exp.Candy.\p"
	.string "So do we have a deal?$"

SootopolisCity_House5_EventScript_Collector_Text_1:
	.string "Oh, I see.\p"
	.string "Well if you ever change your mind, you\n"
	.string "know where to find me.$"

SootopolisCity_House5_EventScript_HeartScaleSale_Text_0:
	.string "Oh! You have a Heart Scale!\p"
	.string "That's fantastic!\p"
	.string "Here, you can have an Exp.Candy L in\n"
	.string "return.$"

SootopolisCity_House5_EventScript_HeartScaleSale_Text_1:
	.string "Pleasure doing business with you!\p"
	.string "Now, do you have any more Heart Scales\n"
	.string "you would be willing to trade?$"

SootopolisCity_House5_EventScript_HeartScaleSale_Text_2:
	.string "Hmm...\p"
	.string "It appears you don't have any Heart\n"
	.string "Scales on you at the moment.\p"
	.string "If you do find some, you know where to\n"
	.string "find me.$"

SootopolisCity_House5_EventScript_Girl_Text_0:
	.string "My brother has always been crazy about\n"
	.string "Luvdisc, and their scales.\p"
	.string "That's the only kind of “Luv” he'll ever\n"
	.string "be getting, hehe.$"
