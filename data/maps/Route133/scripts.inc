Route133_MapScripts::
	.byte 0

Route133_EventScript_Franklin::
	trainerbattle_single TRAINER_FRANKLIN, Route133_Text_FranklinIntro, Route133_Text_FranklinDefeat
	msgbox Route133_Text_FranklinPostBattle, MSGBOX_AUTOCLOSE
	end

Route133_EventScript_Debra::
	trainerbattle_single TRAINER_DEBRA, Route133_Text_DebraIntro, Route133_Text_DebraDefeat
	msgbox Route133_Text_DebraPostBattle, MSGBOX_AUTOCLOSE
	end

Route133_EventScript_Linda::
	trainerbattle_single TRAINER_LINDA, Route133_Text_LindaIntro, Route133_Text_LindaDefeat
	msgbox Route133_Text_LindaPostBattle, MSGBOX_AUTOCLOSE
	end

Route133_EventScript_Warren::
	trainerbattle_single TRAINER_WARREN, Route133_Text_WarrenIntro, Route133_Text_WarrenDefeat
	msgbox Route133_Text_WarrenPostBattle, MSGBOX_AUTOCLOSE
	end

Route133_EventScript_Beck::
	trainerbattle_single TRAINER_BECK, Route133_Text_BeckIntro, Route133_Text_BeckDefeat
	msgbox Route133_Text_BeckPostBattle, MSGBOX_AUTOCLOSE
	end

Route133_EventScript_Mollie::
	trainerbattle_single TRAINER_MOLLIE, Route133_Text_MollieIntro, Route133_Text_MollieDefeat
	msgbox Route133_Text_MolliePostBattle, MSGBOX_AUTOCLOSE
	end

Route133_EventScript_Conor::
	trainerbattle_single TRAINER_CONOR, Route133_Text_ConorIntro, Route133_Text_ConorDefeat
	msgbox Route133_Text_ConorPostBattle, MSGBOX_AUTOCLOSE
	end

Route133_EventScript_Gold::
	trainerbattle_single TRAINER_STEVEN, Route133_Text_GoldIntro, Route133_Text_GoldDefeat, Route133_EventScript_GoldDefeated, NO_MUSIC
	goto_if_set FLAG_RECEIVED_SUICUNE_EGG, Route133_EventScript_Gold_2
	msgbox Route133_EventScript_Gold_Text_1
	getpartysize
	compare VAR_RESULT, PARTY_SIZE
	goto_if_eq Route133_EventScript_Gold_4
	setflag FLAG_RECEIVED_SUICUNE_EGG
	playfanfare MUS_OBTAIN_ITEM
	msgbox Route133_EventScript_Gold_Text_3
	waitfanfare
	giveegg SPECIES_SUICUNE
	msgbox Route133_EventScript_Gold_Text_4
	release
	end

Route133_EventScript_Gold_2:
	msgbox Route133_EventScript_Gold_Text_0
	release
	end

Route133_EventScript_Gold_4:
	msgbox Route133_EventScript_Gold_Text_2
	release
	end


Route133_EventScript_GoldDefeated::
	msgbox Route133_EventScript_GoldDefeated_Text_0
	getpartysize
	compare VAR_RESULT, PARTY_SIZE
	goto_if_eq Route133_EventScript_GoldDefeated_1
	setflag FLAG_RECEIVED_SUICUNE_EGG
	playfanfare MUS_OBTAIN_ITEM
	msgbox Route133_EventScript_Gold_Text_3
	waitfanfare
	giveegg SPECIES_SUICUNE
	msgbox Route133_EventScript_Gold_Text_4
	waitmessage
	closemessage
	goto Route133_EventScript_FalknerCall
	return

Route133_EventScript_GoldDefeated_1:
	msgbox Route133_EventScript_GoldDefeated_Text_1
	waitmessage
	closemessage
	goto Route133_EventScript_FalknerCall
	return


Route133_EventScript_FalknerCall::
	delay 60
	pokenavcall Route133_EventScript_FalknerCall_Text_0
	waitmessage
	clearflag FLAG_HIDE_THIN_FALKNER
	release
	end


Route133_EventScript_Gold_Text_0:
	.string "GOLD: Don't tell your father, but I\n"
	.string "believe you've actually surpassed him\l"
	.string "in battling skill.$"

Route133_EventScript_Gold_Text_1:
	.string "GOLD: Welcome back, {PLAYER}.\p"
	.string "Please, take this.$"

Route133_EventScript_Gold_Text_2:
	.string "Unfortunately, it looks like your party\n"
	.string "is still full.\p"
	.string "Please come back when you've made some\n"
	.string "room.$"

Route133_EventScript_Gold_Text_3:
	.string "{PLAYER} received a POKéMON egg!$"

Route133_EventScript_Gold_Text_4:
	.string "I'll keep the POKéMON in that egg a\n"
	.string "surprise.\p"
	.string "It's more fun that way.$"

Route133_EventScript_GoldDefeated_Text_0:
	.string "There's no doubt in my mind now, you are\n"
	.string "the very same TRAINER I lost to those\l"
	.string "many years ago.\p"
	.string "Although...\p"
	.string "I don't see how it's possible...\p"
	.string "...\p"
	.string "...\p"
	.string "Time travel, you say?\p"
	.string "You really are something else,\n"
	.string "{PLAYER}.\p"
	.string "You know, there's something I would like\n"
	.string "you to have...$"

Route133_EventScript_GoldDefeated_Text_1:
	.string "Unfortunately, it looks like your party\n"
	.string "is full.\p"
	.string "Please come back when you've made some\n"
	.string "room.$"

Route133_EventScript_FalknerCall_Text_0:
	.string "Hello, {PLAYER}?\pThis is FALKNER, I got your number\nfrom PROF. ELM.\pI'm calling to let you know that I've\ncompleted my training.\pIt's been a grueling process, but my\nPOKéMON and I feel like we could take\lon the world now!\pIf you're up for a rematch, then meet\nme in my gym in Violet City.\pI'll be waiting for you.$"

Route133_Text_GoldIntro::
	.string "GOLD: Welcome to my private island,\n"
	.string "{PLAYER}.\p"
	.string "I assume you came prepared for a tough\n"
	.string "battle.\p"
	.string "I might be your dad's friend, but please,\n"
	.string "don't hold back on me.\p"
	.string "I know you don't like speaking, so let's\n"
	.string "let our POKéMON do the speaking for us!\p"
	.string "Give me everything you've got!$"

Route133_Text_GoldDefeat::
	.string "GOLD: ...\p"
	.string "Well, I can't say that I'm happy with a\n"
	.string "loss, but still, I feel content somehow.$"
