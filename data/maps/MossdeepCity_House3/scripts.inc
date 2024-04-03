MossdeepCity_House3_MapScripts::
	.byte 0


MossdeepCity_House3_EventScript_CrazyGirl::
	lock
	faceplayer
	goto_if_set FLAG_TOLD_ROUJEM_CRAZY_GIRL_HOENN, MossdeepCity_House3_EventScript_CrazyGirl_1
	goto_if_set FLAG_RECEIVED_STEELIXITE, MossdeepCity_House3_EventScript_CrazyGirl_2
	goto_if_set FLAG_TOOK_ROUJEM_CRAZY_GIRL_OFFER, MossdeepCity_House3_EventScript_CrazyGirl_3
	msgbox MossdeepCity_House3_EventScript_CrazyGirl_Text_3, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq MossdeepCity_House3_EventScript_CrazyGirl_8
	msgbox MossdeepCity_House3_EventScript_CrazyGirl_Text_5
	setflag FLAG_TOOK_ROUJEM_CRAZY_GIRL_OFFER
	release
	end

MossdeepCity_House3_EventScript_CrazyGirl_1:
	msgbox MossdeepCity_House3_EventScript_CrazyGirl_Text_0
	release
	end

MossdeepCity_House3_EventScript_CrazyGirl_2:
	msgbox MossdeepCity_House3_EventScript_CrazyGirl_Text_1
	giveitem ITEM_GENGARITE
	setflag FLAG_TOLD_ROUJEM_CRAZY_GIRL_HOENN
	release
	end

MossdeepCity_House3_EventScript_CrazyGirl_3:
	msgbox MossdeepCity_House3_EventScript_CrazyGirl_Text_2
	release
	end

MossdeepCity_House3_EventScript_CrazyGirl_8:
	msgbox MossdeepCity_House3_EventScript_CrazyGirl_Text_4
	release
	end


MossdeepCity_House3_EventScript_CrazyGirl_Text_0:
	.string "The Hoenn region...\p"
	.string "That's a good place for us to start our\n"
	.string "family...$"

MossdeepCity_House3_EventScript_CrazyGirl_Text_1:
	.string "Have you figured out what's going on\n"
	.string "with my boyfriend?\p"
	.string "...\p"
	.string "Oh, I see.\p"
	.string "So he moved to the Hoenn region...\p"
	.string "He'll have to move farther away than\n"
	.string "that to get rid of me!\p"
	.string "Oops, I mean, thanks for the help.\p"
	.string "You can have this.$"

MossdeepCity_House3_EventScript_CrazyGirl_Text_2:
	.string "Have you figured out what's going on\n"
	.string "with my boyfriend?\p"
	.string "...\p"
	.string "You haven't found him yet?\p"
	.string "He should be in the house in the middle\n"
	.string "of Olivine City.$"

MossdeepCity_House3_EventScript_CrazyGirl_Text_3:
	.string "Hey, I have an issue you might be able\n"
	.string "to help with.\p"
	.string "I have a long distance boyfriend in\n"
	.string "Johto who isn't answering my calls.\p"
	.string "Do you think you can help me figure out\n"
	.string "what's going on?\p"
	.string "I'll make it worth your while.$"

MossdeepCity_House3_EventScript_CrazyGirl_Text_4:
	.string "Aww, really?\p"
	.string "I'm just worried about him...$"

MossdeepCity_House3_EventScript_CrazyGirl_Text_5:
	.string "Really? Great!\p"
	.string "He lives in the house in the middle of\n"
	.string "Olivine City.\p"
	.string "Thanks a lot for the help!$"
