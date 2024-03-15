LilycoveCity_PokemonTrainerFanClub_MapScripts::
	.byte 0


LilycoveCity_PokemonTrainerFanClub_EventScript_BlackBelt1::
	msgbox LilycoveCity_PokemonTrainerFanClub_EventScript_BlackBelt1_Text_0, MSGBOX_NPC
	end


LilycoveCity_PokemonTrainerFanClub_EventScript_BlackBelt2::
	msgbox LilycoveCity_PokemonTrainerFanClub_EventScript_BlackBelt2_Text_0, MSGBOX_NPC
	end


LilycoveCity_PokemonTrainerFanClub_EventScript_KarateMaster::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_DARKOAL_SCROLL, LilycoveCity_PokemonTrainerFanClub_EventScript_KarateMaster_1
	bufferleadmonspeciesname STR_VAR_1
	msgbox LilycoveCity_PokemonTrainerFanClub_EventScript_KarateMaster_Text_1
	waitmessage
	specialvar VAR_RESULT, ScriptGetLeadMonSpecies
	compare VAR_RESULT, SPECIES_KUBFU
	goto_if_ne LilycoveCity_PokemonTrainerFanClub_EventScript_KarateMaster_4
	msgbox LilycoveCity_PokemonTrainerFanClub_EventScript_KarateMaster_Text_3
	waitmessage
	specialvar VAR_RESULT, GetLeadMonFriendshipScore
	compare VAR_RESULT, FRIENDSHIP_MAX
	goto_if_ne LilycoveCity_PokemonTrainerFanClub_EventScript_KarateMaster_7
	msgbox LilycoveCity_PokemonTrainerFanClub_EventScript_KarateMaster_Text_5
	waitmessage
	goto LilycoveCity_PokemonTrainerFanClub_EventScript_ScrollChoice
	return

LilycoveCity_PokemonTrainerFanClub_EventScript_KarateMaster_1:
	msgbox LilycoveCity_PokemonTrainerFanClub_EventScript_KarateMaster_Text_0
	release
	end

LilycoveCity_PokemonTrainerFanClub_EventScript_KarateMaster_4:
	msgbox LilycoveCity_PokemonTrainerFanClub_EventScript_KarateMaster_Text_2
	release
	end

LilycoveCity_PokemonTrainerFanClub_EventScript_KarateMaster_7:
	msgbox LilycoveCity_PokemonTrainerFanClub_EventScript_KarateMaster_Text_4
	release
	end


LilycoveCity_PokemonTrainerFanClub_EventScript_ScrollChoice::
message LilycoveCity_PokemonTrainerFanClub_Text_Choose
	waitmessage
	multichoice 16, 0, MULTI_KARATE_SCROLL, FALSE
	switch VAR_RESULT
	case 0, LilycoveCity_PokemonTrainerFanClub_EventScript_DarkScroll
	case 1, LilycoveCity_PokemonTrainerFanClub_EventScript_WaterScroll
	case MULTI_B_PRESSED, LilycoveCity_PokemonTrainerFanClub_EventScript_Cancel
	end

LilycoveCity_PokemonTrainerFanClub_EventScript_DarkScroll::
	msgbox LilycoveCity_PokemonTrainerFanClub_EventScript_DarkScroll_Text_0
	waitmessage
	closemessage
	setflag FLAG_RECEIVED_DARKOAL_SCROLL
	tryspecialevo EVO_DARK_SCROLL, FALSE, FALSE
	release
	end


LilycoveCity_PokemonTrainerFanClub_EventScript_WaterScroll::
	msgbox LilycoveCity_PokemonTrainerFanClub_EventScript_WaterScroll_Text_0
	waitmessage
	closemessage
	setflag FLAG_RECEIVED_DARKOAL_SCROLL
	tryspecialevo EVO_WATER_SCROLL, FALSE, FALSE
	release
	end


LilycoveCity_PokemonTrainerFanClub_EventScript_Cancel::
	msgbox LilycoveCity_PokemonTrainerFanClub_EventScript_Cancel_Text_0
	release
	end


LilycoveCity_PokemonTrainerFanClub_EventScript_BlackBelt1_Text_0:
	.string "The Scroll of Darkness, and the Scroll\n"
	.string "of Waters...\p"
	.string "I wonder if the master will ever let me\n"
	.string "see them...$"

LilycoveCity_PokemonTrainerFanClub_EventScript_BlackBelt2_Text_0:
	.string "Believe it or not, our master trained\n"
	.string "the legendary CHUCK!\p"
	.string "That's ancient history now, though.$"

LilycoveCity_PokemonTrainerFanClub_EventScript_KarateMaster_Text_0:
	.string "Hmm...\p"
	.string "I hope you've been treating my star\n"
	.string "pupil well...$"

LilycoveCity_PokemonTrainerFanClub_EventScript_KarateMaster_Text_1:
	.string "Hmm...\p"
	.string "Your {STR_VAR_1}...$"

LilycoveCity_PokemonTrainerFanClub_EventScript_KarateMaster_Text_2:
	.string "...\p"
	.string "No, I'm sorry, I was mistaken...$"

LilycoveCity_PokemonTrainerFanClub_EventScript_KarateMaster_Text_3:
	.string "...\p"
	.string "I've spent years searching for the\n"
	.string "ultimate disciple to teach my secret\l"
	.string "techniques to, and that Kubfu of\l"
	.string "yours...$"

LilycoveCity_PokemonTrainerFanClub_EventScript_KarateMaster_Text_4:
	.string "Hmm... Actually...\p"
	.string "It seems it isn't quite ready yet...$"

LilycoveCity_PokemonTrainerFanClub_EventScript_KarateMaster_Text_5:
	.string "I can think of no POKéMON I would\n"
	.string "rather teach!\p"
	.string "...\p"
	.string "Now, I have two different scrolls that I\n"
	.string "can teach from, the Scroll of Darkness,\l"
	.string "and the Scroll of Waters.\p"
	.string "I will only show one scroll to your\n"
	.string "Kubfu, so you must make a choice.$"

LilycoveCity_PokemonTrainerFanClub_EventScript_DarkScroll_Text_0:
	.string "A wise decision...\p"
	.string "...\p"
	.string "{PLAYER} showed the Scroll of\n"
	.string "Darkness to {STR_VAR_1}...$"

LilycoveCity_PokemonTrainerFanClub_EventScript_WaterScroll_Text_0:
	.string "A wise decision...\p"
	.string "...\p"
	.string "{PLAYER} showed the Scroll of Waters\n"
	.string "to {STR_VAR_1}...$"

LilycoveCity_PokemonTrainerFanClub_EventScript_Cancel_Text_0:
	.string "Very well then...\p"
	.string "Maybe some other time.$"

LilycoveCity_PokemonTrainerFanClub_Text_Choose::
	.string "Now then, which scroll will you choose?$"
