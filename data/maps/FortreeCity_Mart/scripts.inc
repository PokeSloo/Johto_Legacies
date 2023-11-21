FortreeCity_Mart_MapScripts::
	.byte 0


FortreeCity_Mart_EventScript_Beauty::
	lock
	faceplayer
	goto_if_unset FLAG_TALKED_TO_CHARLIE, FortreeCity_Mart_EventScript_Beauty_1
	msgbox FortreeCity_Mart_EventScript_Beauty_Text_1
	trainerbattle_no_intro TRAINER_ALEXIA, FortreeCity_Mart_Text_DefeatedAlexia
	msgbox FortreeCity_Mart_EventScript_Beauty_Text_2
	waitmessage
	closemessage
	fadescreen FADE_TO_BLACK
	removeobject 5
	clearflag FLAG_HIDE_OLIVINE_GYM_TRAINER_1
	setflag FLAG_HIDE_BEAUTY_MART
	fadescreen FADE_FROM_BLACK
	release
	end

FortreeCity_Mart_EventScript_Beauty_1:
	msgbox FortreeCity_Mart_EventScript_Beauty_Text_0
	release
	end


FortreeCity_Mart_EventScript_Clerk::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	pokemart FortreeCity_Mart_Pokemart
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

	.align 2
FortreeCity_Mart_Pokemart:
	.2byte ITEM_GREAT_BALL
	.2byte ITEM_ULTRA_BALL
	.2byte ITEM_SUPER_POTION
	.2byte ITEM_HYPER_POTION
	.2byte ITEM_ANTIDOTE
	.2byte ITEM_PARALYZE_HEAL
	.2byte ITEM_AWAKENING
	.2byte ITEM_REVIVE
	.2byte ITEM_SUPER_REPEL
	.2byte ITEM_HARBOR_MAIL
	.2byte ITEM_NONE
	release
	end

FortreeCity_Mart_EventScript_Woman::
	msgbox FortreeCity_Mart_Text_SuperRepelBetter, MSGBOX_NPC
	end

FortreeCity_Mart_EventScript_Girl::
	msgbox FortreeCity_Mart_Text_StockUpOnItems, MSGBOX_NPC
	end

FortreeCity_Mart_EventScript_Boy::
	msgbox FortreeCity_Mart_Text_RareCandyMakesMonGrow, MSGBOX_NPC
	end

FortreeCity_Mart_Text_SuperRepelBetter:
	.string "I tried climbing up the lighthouse, but\n"
	.string "there are TRAINERS in there wanting to\l"
	.string "battle.\p"
	.string "I didn't know having POKéMON was a\n"
	.string "requirement to go sight seeing.$"

FortreeCity_Mart_Text_StockUpOnItems:
	.string "I'll be setting sail soon, I'd better\n"
	.string "stock up on items before we depart.$"

FortreeCity_Mart_Text_RareCandyMakesMonGrow:
	.string "Hmm... Should I go with the red or yellow\n"
	.string "amorphous object?\p"
	.string "I'm still not sure what they are.$"

FortreeCity_Mart_EventScript_Beauty_Text_0:
	.string "Who, me?\p"
	.string "Yeah, I play bass for The Thunderbolts.\p"
	.string "Sorry, I can't sign autographs right\n"
	.string "now, I'm kind of busy.$"

FortreeCity_Mart_EventScript_Beauty_Text_1:
	.string "Who, me?\p"
	.string "Yeah, I play bass for The Thunderbolts.\p"
	.string "Sorry, I can't sign autographs right\n"
	.string "now, I'm kind of busy.\p"
	.string "...\p"
	.string "Please leave, I don't have time right\n"
	.string "now...\p"
	.string "...\p"
	.string "Really, you're not going to leave me\n"
	.string "alone?\p"
	.string "Fine, I'll make you leave!$"

FortreeCity_Mart_EventScript_Beauty_Text_2:
	.string "...\p"
	.string "Sorry I went off on you, I just get\n"
	.string "nervous before we play a show.\p"
	.string "...\p"
	.string "Really? CHARLIE was looking for me?\p"
	.string "Alright, I'd better go!$"

FortreeCity_Mart_Text_DefeatedAlexia::
	.string "Well, I guess you're better than I\n"
	.string "thought.$"
