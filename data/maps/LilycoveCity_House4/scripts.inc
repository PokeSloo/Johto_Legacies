LilycoveCity_House4_MapScripts::
	.byte 0


LilycoveCity_House4_EventScript_MegaWoman::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_MEWTWONITE, LilycoveCity_House4_EventScript_MegaWoman_1
	goto_if_set FLAG_RECEIVED_METAGROSSITE, LilycoveCity_House4_EventScript_MegaWoman_2
	goto_if_set FLAG_RECEIVED_LOPUNNITE, LilycoveCity_House4_EventScript_MegaWoman_3
	goto_if_set FLAG_RECEIVED_ALTARIANITE, LilycoveCity_House4_EventScript_MegaWoman_4
	goto_if_set FLAG_RECEIVED_BEEDRILLITE, LilycoveCity_House4_EventScript_MegaWoman_5
	msgbox LilycoveCity_House4_EventScript_MegaWoman_Text_20
	special ChoosePartyMon
	waitstate
	copyvar VAR_RESULT, VAR_0x8004
	compare VAR_RESULT, PARTY_NOTHING_CHOSEN
	goto_if_eq LilycoveCity_House4_EventScript_MegaWoman_24
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
	compare VAR_RESULT, SPECIES_BEEDRILL
	goto_if_ne LilycoveCity_House4_EventScript_MegaWoman_39
	msgbox LilycoveCity_House4_EventScript_MegaWoman_Text_23
	giveitem ITEM_BEEDRILLITE
	setflag FLAG_RECEIVED_BEEDRILLITE
	msgbox LilycoveCity_House4_EventScript_MegaWoman_Text_11
	release
	end

LilycoveCity_House4_EventScript_MegaWoman_1:
	msgbox LilycoveCity_House4_EventScript_MegaWoman_Text_0
	release
	end

LilycoveCity_House4_EventScript_MegaWoman_2:
	msgbox LilycoveCity_House4_EventScript_MegaWoman_Text_1
	special ChoosePartyMon
	waitstate
	copyvar VAR_RESULT, VAR_0x8004
	compare VAR_RESULT, PARTY_NOTHING_CHOSEN
	goto_if_eq LilycoveCity_House4_EventScript_MegaWoman_12
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
	compare VAR_RESULT, SPECIES_MEWTWO
	goto_if_ne LilycoveCity_House4_EventScript_MegaWoman_27
	msgbox LilycoveCity_House4_EventScript_MegaWoman_Text_4
	giveitem ITEM_MEWTWONITE_X
	msgbox LilycoveCity_House4_EventScript_MegaWoman_Text_5
	giveitem ITEM_MEWTWONITE_Y
	setflag FLAG_RECEIVED_MEWTWONITE
	msgbox LilycoveCity_House4_EventScript_MegaWoman_Text_6
	release
	end

LilycoveCity_House4_EventScript_MegaWoman_3:
	msgbox LilycoveCity_House4_EventScript_MegaWoman_Text_7
	special ChoosePartyMon
	waitstate
	copyvar VAR_RESULT, VAR_0x8004
	compare VAR_RESULT, PARTY_NOTHING_CHOSEN
	goto_if_eq LilycoveCity_House4_EventScript_MegaWoman_15
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
	compare VAR_RESULT, SPECIES_METAGROSS
	goto_if_ne LilycoveCity_House4_EventScript_MegaWoman_30
	msgbox LilycoveCity_House4_EventScript_MegaWoman_Text_10
	giveitem ITEM_METAGROSSITE
	setflag FLAG_RECEIVED_METAGROSSITE
	msgbox LilycoveCity_House4_EventScript_MegaWoman_Text_11
	release
	end

LilycoveCity_House4_EventScript_MegaWoman_4:
	msgbox LilycoveCity_House4_EventScript_MegaWoman_Text_12
	special ChoosePartyMon
	waitstate
	copyvar VAR_RESULT, VAR_0x8004
	compare VAR_RESULT, PARTY_NOTHING_CHOSEN
	goto_if_eq LilycoveCity_House4_EventScript_MegaWoman_18
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
	compare VAR_RESULT, SPECIES_LOPUNNY
	goto_if_ne LilycoveCity_House4_EventScript_MegaWoman_33
	msgbox LilycoveCity_House4_EventScript_MegaWoman_Text_15
	giveitem ITEM_LOPUNNITE
	setflag FLAG_RECEIVED_LOPUNNITE
	msgbox LilycoveCity_House4_EventScript_MegaWoman_Text_11
	release
	end

LilycoveCity_House4_EventScript_MegaWoman_5:
	msgbox LilycoveCity_House4_EventScript_MegaWoman_Text_16
	special ChoosePartyMon
	waitstate
	copyvar VAR_RESULT, VAR_0x8004
	compare VAR_RESULT, PARTY_NOTHING_CHOSEN
	goto_if_eq LilycoveCity_House4_EventScript_MegaWoman_21
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
	compare VAR_RESULT, SPECIES_ALTARIA
	goto_if_ne LilycoveCity_House4_EventScript_MegaWoman_36
	msgbox LilycoveCity_House4_EventScript_MegaWoman_Text_19
	giveitem ITEM_ALTARIANITE
	setflag FLAG_RECEIVED_ALTARIANITE
	msgbox LilycoveCity_House4_EventScript_MegaWoman_Text_11
	release
	end

LilycoveCity_House4_EventScript_MegaWoman_12:
	msgbox LilycoveCity_House4_EventScript_MegaWoman_Text_2
	release
	end

LilycoveCity_House4_EventScript_MegaWoman_15:
	msgbox LilycoveCity_House4_EventScript_MegaWoman_Text_8
	release
	end

LilycoveCity_House4_EventScript_MegaWoman_18:
	msgbox LilycoveCity_House4_EventScript_MegaWoman_Text_13
	release
	end

LilycoveCity_House4_EventScript_MegaWoman_21:
	msgbox LilycoveCity_House4_EventScript_MegaWoman_Text_17
	release
	end

LilycoveCity_House4_EventScript_MegaWoman_24:
	msgbox LilycoveCity_House4_EventScript_MegaWoman_Text_21
	release
	end

LilycoveCity_House4_EventScript_MegaWoman_27:
	msgbox LilycoveCity_House4_EventScript_MegaWoman_Text_3
	release
	end

LilycoveCity_House4_EventScript_MegaWoman_30:
	msgbox LilycoveCity_House4_EventScript_MegaWoman_Text_9
	release
	end

LilycoveCity_House4_EventScript_MegaWoman_33:
	msgbox LilycoveCity_House4_EventScript_MegaWoman_Text_14
	release
	end

LilycoveCity_House4_EventScript_MegaWoman_36:
	msgbox LilycoveCity_House4_EventScript_MegaWoman_Text_18
	release
	end

LilycoveCity_House4_EventScript_MegaWoman_39:
	msgbox LilycoveCity_House4_EventScript_MegaWoman_Text_22
	release
	end


LilycoveCity_House4_EventScript_Man::
	msgbox LilycoveCity_House4_EventScript_Man_Text_0, MSGBOX_NPC
	end


LilycoveCity_House4_EventScript_MegaWoman_Text_0:
	.string "You really do have a large collection of\n"
	.string "POKéMON.\p"
	.string "At such a young age too!$"

LilycoveCity_House4_EventScript_MegaWoman_Text_1:
	.string "I'm so grateful for you child!\p"
	.string "You've really helped jog my memory.\p"
	.string "Now, there's one POKéMON that I've\n"
	.string "never seen before, but I've always\l"
	.string "wanted to see.\p"
	.string "Please, could you show me a Mewtwo?\p"
	.string "I'll make it worth your while.$"

LilycoveCity_House4_EventScript_MegaWoman_Text_2:
	.string "Oh, so you don't have a Mewtwo?$"

LilycoveCity_House4_EventScript_MegaWoman_Text_3:
	.string "Hmm...\p"
	.string "I've never seen a Mewtwo before, but I\n"
	.string "know for sure that isn't one.$"

LilycoveCity_House4_EventScript_MegaWoman_Text_4:
	.string "Incredible!\p"
	.string "So that's a Mewtwo!?\p"
	.string "You've really helped expand my POKéMON\n"
	.string "knowledge.\p"
	.string "Please, take this!$"

LilycoveCity_House4_EventScript_MegaWoman_Text_5:
	.string "Oh, you can also have this!$"

LilycoveCity_House4_EventScript_MegaWoman_Text_6:
	.string "Thanks for all of your hard work!\p"
	.string "I don't know what I would have done\n"
	.string "without you.$"

LilycoveCity_House4_EventScript_MegaWoman_Text_7:
	.string "I haven't left my house in so long, that\n"
	.string "I've forgotten what some species of\l"
	.string "POKéMON look like.\p"
	.string "Please, could you show me a Metagross?\p"
	.string "I'll make it worth your while.$"

LilycoveCity_House4_EventScript_MegaWoman_Text_8:
	.string "Oh, so you don't have a Metagross?$"

LilycoveCity_House4_EventScript_MegaWoman_Text_9:
	.string "My memory might be going, but I know for\n"
	.string "sure that is not a Metagross.$"

LilycoveCity_House4_EventScript_MegaWoman_Text_10:
	.string "Oh yes! That is indeed a Metagross!\p"
	.string "It's all so clear to me now.\p"
	.string "Please, take this.$"

LilycoveCity_House4_EventScript_MegaWoman_Text_11:
	.string "I'll let you know if there are any other\n"
	.string "POKéMON I want to see.$"

LilycoveCity_House4_EventScript_MegaWoman_Text_12:
	.string "I haven't left my house in so long, that\n"
	.string "I've forgotten what some species of\l"
	.string "POKéMON look like.\p"
	.string "Please, could you show me a Lopunny?\p"
	.string "I'll make it worth your while.$"

LilycoveCity_House4_EventScript_MegaWoman_Text_13:
	.string "Oh, so you don't have a Lopunny?$"

LilycoveCity_House4_EventScript_MegaWoman_Text_14:
	.string "My memory might be going, but I know for\n"
	.string "sure that is not a Lopunny.$"

LilycoveCity_House4_EventScript_MegaWoman_Text_15:
	.string "Oh yes! That is indeed a Lopunny!\p"
	.string "It's all so clear to me now.\p"
	.string "Please, take this.$"

LilycoveCity_House4_EventScript_MegaWoman_Text_16:
	.string "I haven't left my house in so long, that\n"
	.string "I've forgotten what some species of\l"
	.string "POKéMON look like.\p"
	.string "Please, could you show me an Altaria?\p"
	.string "I'll make it worth your while.$"

LilycoveCity_House4_EventScript_MegaWoman_Text_17:
	.string "Oh, so you don't have an Altaria?$"

LilycoveCity_House4_EventScript_MegaWoman_Text_18:
	.string "My memory might be going, but I know for\n"
	.string "sure that is not an Altaria.$"

LilycoveCity_House4_EventScript_MegaWoman_Text_19:
	.string "Oh yes! That is indeed an Altaria!\p"
	.string "It's all so clear to me now.\p"
	.string "Please, take this.$"

LilycoveCity_House4_EventScript_MegaWoman_Text_20:
	.string "I haven't left my house in so long, that\n"
	.string "I've forgotten what some species of\l"
	.string "POKéMON look like.\p"
	.string "Please, could you show me a Beedrill?\p"
	.string "I'll make it worth your while.$"

LilycoveCity_House4_EventScript_MegaWoman_Text_21:
	.string "Oh, so you don't have a Beedrill?$"

LilycoveCity_House4_EventScript_MegaWoman_Text_22:
	.string "My memory might be going, but I know for\n"
	.string "sure that is not a Beedrill.$"

LilycoveCity_House4_EventScript_MegaWoman_Text_23:
	.string "Oh yes! That is indeed a Beedrill!\p"
	.string "It's all so clear to me now.\p"
	.string "Please, take this.$"

LilycoveCity_House4_EventScript_Man_Text_0:
	.string "My grandma loves seeing different\n"
	.string "species of POKéMON, but she hasn't\l"
	.string "been well enough to leave the house in\l"
	.string "years.$"
