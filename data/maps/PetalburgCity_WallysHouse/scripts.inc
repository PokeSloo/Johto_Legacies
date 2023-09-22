PetalburgCity_WallysHouse_MapScripts::
	.byte 0


PetalburgCity_WallysHouse_EventScript_MushroomGuy::
	lock
	faceplayer
	msgbox PetalburgCity_WallysHouse_EventScript_MushroomGuy_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq PetalburgCity_WallysHouse_EventScript_MushroomGuy_1
	goto PetalburgCity_WallysHouse_EventScript_MushroomSale
	end

PetalburgCity_WallysHouse_EventScript_MushroomGuy_1:
	msgbox PetalburgCity_WallysHouse_EventScript_MushroomGuy_Text_1
	release
	end


PetalburgCity_WallysHouse_EventScript_MushroomSale::
	checkitem ITEM_BIG_MUSHROOM
	compare VAR_RESULT, TRUE
	goto_if_eq PetalburgCity_WallysHouse_EventScript_MushroomSale_2
	checkitem ITEM_TINY_MUSHROOM
	compare VAR_RESULT, TRUE
	goto_if_eq PetalburgCity_WallysHouse_EventScript_MushroomSale_5
	msgbox PetalburgCity_WallysHouse_EventScript_MushroomSale_Text_4
	release
	end

PetalburgCity_WallysHouse_EventScript_MushroomSale_2:
	msgbox PetalburgCity_WallysHouse_EventScript_MushroomSale_Text_0
	removeitem ITEM_BIG_MUSHROOM, 1
	giveitem ITEM_EXP_CANDY_S
	msgbox PetalburgCity_WallysHouse_EventScript_MushroomSale_Text_1, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq PetalburgCity_WallysHouse_EventScript_MushroomSale_7
	goto PetalburgCity_WallysHouse_EventScript_MushroomSale
	end

PetalburgCity_WallysHouse_EventScript_MushroomSale_5:
	msgbox PetalburgCity_WallysHouse_EventScript_MushroomSale_Text_2
	removeitem ITEM_TINY_MUSHROOM, 1
	giveitem ITEM_EXP_CANDY_XS
	msgbox PetalburgCity_WallysHouse_EventScript_MushroomSale_Text_3, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq PetalburgCity_WallysHouse_EventScript_MushroomSale_10
	goto PetalburgCity_WallysHouse_EventScript_MushroomSale
	end

PetalburgCity_WallysHouse_EventScript_MushroomSale_7:
	msgbox PetalburgCity_WallysHouse_EventScript_MushroomGuy_Text_1
	release
	end

PetalburgCity_WallysHouse_EventScript_MushroomSale_10:
	msgbox PetalburgCity_WallysHouse_EventScript_MushroomGuy_Text_1
	release
	end


PetalburgCity_WallysHouse_EventScript_MushroomGirl::
	msgbox PetalburgCity_WallysHouse_EventScript_MushroomGirl_Text_0, MSGBOX_NPC
	end


PetalburgCity_WallysHouse_EventScript_MushroomGuy_Text_0:
	.string "Hiya! I'm the Mushroom Maniac!\p"
	.string "My favorite hobby is collecting\n"
	.string "mushrooms. If you have any mushrooms,\l"
	.string "I would be willing to trade you for some\l"
	.string "Exp.Candy.\p"
	.string "So do we have a deal?$"

PetalburgCity_WallysHouse_EventScript_MushroomGuy_Text_1:
	.string "Oh, I see.\p"
	.string "Well if you ever change your mind, you\n"
	.string "know where to find me.$"

PetalburgCity_WallysHouse_EventScript_MushroomSale_Text_0:
	.string "Oh! You have a Big Mushroom!\p"
	.string "That's fantastic!\p"
	.string "Here, you can have an Exp.Candy S in\n"
	.string "return.$"

PetalburgCity_WallysHouse_EventScript_MushroomSale_Text_1:
	.string "Pleasure doing business with you!\p"
	.string "Now, do you have any more mushrooms you\n"
	.string "would be willing to trade?$"

PetalburgCity_WallysHouse_EventScript_MushroomSale_Text_2:
	.string "Ah, I see you have a Tiny Mushroom.\p"
	.string "Hmm, for that you can have an Exp.Candy\n"
	.string "XS in return.$"

PetalburgCity_WallysHouse_EventScript_MushroomSale_Text_3:
	.string "Pleasure doing business with you.\p"
	.string "Now, do you have any more mushrooms you\n"
	.string "would be willing to trade?$"

PetalburgCity_WallysHouse_EventScript_MushroomSale_Text_4:
	.string "Hmmm...\p"
	.string "It appears you don't have any\n"
	.string "mushrooms on you at the moment.\p"
	.string "If you do find some, you know where to\n"
	.string "find me.$"

PetalburgCity_WallysHouse_EventScript_MushroomGirl_Text_0:
	.string "My husband makes the best Mushroom\n"
	.string "Soup!\p"
	.string "Don't tell him, but it's the only reason I\n"
	.string "married him.$"
