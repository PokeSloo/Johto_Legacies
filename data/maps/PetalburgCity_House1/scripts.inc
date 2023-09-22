PetalburgCity_House1_MapScripts::
	.byte 0


PetalburgCity_House1_EventScript_TauntKid::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_TAUNT_TM, PetalburgCity_House1_EventScript_TauntKid_1
	msgbox PetalburgCity_House1_EventScript_TauntKid_Text_1
	waitmessage
	giveitem ITEM_TM12_TAUNT
	setflag FLAG_RECEIVED_TAUNT_TM
	release
	end

PetalburgCity_House1_EventScript_TauntKid_1:
	msgbox PetalburgCity_House1_EventScript_TauntKid_Text_0
	release
	end


PetalburgCity_House1_EventScript_Woman::
	msgbox PetalburgCity_House1_EventScript_Woman_Text_0, MSGBOX_NPC
	end


PetalburgCity_House1_EventScript_TauntKid_Text_0:
	.string "Have you tried taunting anyone yet?$"

PetalburgCity_House1_EventScript_TauntKid_Text_1:
	.string "Are you a TRAINER?\p"
	.string "I don't believe it!\p"
	.string "You look like you couldn't even catch a\n"
	.string "cold!\p"
	.string "I bet I could beat you with a single\n"
	.string "level 1 Magikarp!\p"
	.string "...\p"
	.string "It's fun to taunt people, you should try\n"
	.string "it sometime.$"

PetalburgCity_House1_EventScript_Woman_Text_0:
	.string "Oh, I just don't know what to do about\n"
	.string "this child.\p"
	.string "He takes after his father, that's for\n"
	.string "sure!$"
