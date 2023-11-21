FortreeCity_House4_MapScripts::
	.byte 0


FortreeCity_House4_EventScript_Clerk::
	lock
	msgbox FortreeCity_House4_EventScript_Clerk_Text_0
	waitmessage
	pokemart FortreeCity_House4_MartItems
	msgbox FortreeCity_House4_EventScript_Clerk_Text_1
	release
	end


	.align 2
FortreeCity_House4_MartItems:
	.2byte ITEM_RAGE_CANDY_BAR
	.2byte ITEM_STRAWBERRY_SWEET
	.2byte ITEM_LOVE_SWEET
	.2byte ITEM_CLOVER_SWEET
	.2byte ITEM_BERRY_SWEET
	.2byte ITEM_STAR_SWEET
	.2byte ITEM_WHIPPED_DREAM
	.2byte ITEM_TART_APPLE
	.2byte ITEM_SWEET_APPLE
	.2byte ITEM_NONE

FortreeCity_House4_EventScript_Boy::
	msgbox FortreeCity_House4_EventScript_Boy_Text_0, MSGBOX_NPC
	end


FortreeCity_House4_EventScript_Tourist::
	msgbox FortreeCity_House4_EventScript_Tourist_Text_0, MSGBOX_NPC
	end


FortreeCity_House4_EventScript_Beauty::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_SACHET, FortreeCity_House4_EventScript_Beauty_2
	msgbox FortreeCity_House4_EventScript_Beauty_Text_1
	giveitem ITEM_SACHET
	setflag FLAG_RECEIVED_SACHET
	release
	end

FortreeCity_House4_EventScript_Beauty_2:
	msgbox FortreeCity_House4_EventScript_Beauty_Text_0
	release
	end


FortreeCity_House4_EventScript_Drummer::
	lock
	faceplayer
	goto_if_unset FLAG_TALKED_TO_CHARLIE, FortreeCity_House4_EventScript_Drummer_1
	msgbox FortreeCity_House4_EventScript_Drummer_Text_1
	trainerbattle_no_intro TRAINER_RANDALL, FortreeCity_House4_Text_DefeatedRandall
	msgbox FortreeCity_House4_EventScript_Drummer_Text_2
	waitmessage
	closemessage
	fadescreen FADE_TO_BLACK
	removeobject 5
	clearflag FLAG_HIDE_OLIVINE_GYM_TRAINER_2
	setflag FLAG_HIDE_DRUMMER_SWEET_SHOP
	fadescreen FADE_FROM_BLACK
	release
	end

FortreeCity_House4_EventScript_Drummer_1:
	msgbox FortreeCity_House4_EventScript_Drummer_Text_0
	release
	end


FortreeCity_House4_EventScript_Clerk_Text_0:
	.string "Welcome!\p"
	.string "How may I serve you?$"

FortreeCity_House4_EventScript_Clerk_Text_1:
	.string "Please come again.$"

FortreeCity_House4_EventScript_Boy_Text_0:
	.string "I let my Milcery hold a Clover Sweet, and\n"
	.string "it evolved after growing a level.\p"
	.string "How crazy is that!?$"

FortreeCity_House4_EventScript_Tourist_Text_0:
	.string "I read reviews about this shop online.\p"
	.string "The candy isn't too terrible, I guess.$"

FortreeCity_House4_EventScript_Beauty_Text_0:
	.string "Ah, you smell much better now.\p"
	.string "How did you get so stinky before?$"

FortreeCity_House4_EventScript_Beauty_Text_1:
	.string "Ugh, I'm sorry to tell you, but you\n"
	.string "stink!\p"
	.string "You smell like you've been crawling\n"
	.string "around in a sewer.\p"
	.string "Here, maybe this will help you...$"

FortreeCity_House4_EventScript_Drummer_Text_0:
	.string "Believe it or not, I'm actually a drummer\n"
	.string "in a band.\p"
	.string "I'm also a pretty good POKéMON trainer.$"

FortreeCity_House4_EventScript_Drummer_Text_1:
	.string "Believe it or not, I'm actually a drummer\n"
	.string "in a band.\p"
	.string "I'm also a pretty good POKéMON trainer.\p"
	.string "What? You don't believe me?\p"
	.string "I'll show you!$"

FortreeCity_House4_EventScript_Drummer_Text_2:
	.string "...\p"
	.string "What's that?\p"
	.string "The Thunderbolts? Yeah, that's my band!\p"
	.string "You say CHARLIE is looking for me?\p"
	.string "Why didn't you say that earlier!?$"

FortreeCity_House4_Text_DefeatedRandall::
	.string "Hey, you're a pretty good POKéMON\n"
	.string "trainer too!$"
