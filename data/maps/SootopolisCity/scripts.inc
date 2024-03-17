SootopolisCity_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, SootopolisCity_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

SootopolisCity_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	setflag FLAG_VISITED_SOOTOPOLIS_CITY
	call_if_eq VAR_LAZULAN_STATE, 1, SootopolisCity_EventScript_SetUpAfterMegaStone
	end


SootopolisCity_EventScript_SetUpAfterMegaStone::
	setobjectxyperm 15, 25, 33
	setobjectxyperm 12, 28, 32
	setobjectmovementtype 12, MOVEMENT_TYPE_FACE_UP
	return


SootopolisCity_EventScript_TriggerLeft::
	lock
	applymovement OBJ_EVENT_ID_PLAYER, SootopolisCity_Movement_PlayerToEdgeLeft
	waitmovement 0
	goto SootopolisCity_EventScript_GoldSilverMain
	return


SootopolisCity_EventScript_TriggerRight::
	lock
	applymovement OBJ_EVENT_ID_PLAYER, SootopolisCity_Movement_PlayerToEdgeRight
	waitmovement 0
	goto SootopolisCity_EventScript_GoldSilverMain
	return


SootopolisCity_Movement_PlayerToEdgeLeft:
	walk_up
	walk_up
	walk_left
	walk_left
	step_end

SootopolisCity_Movement_PlayerToEdgeRight:
	walk_up
	walk_up
	walk_left
	walk_left
	walk_left
	step_end

SootopolisCity_EventScript_GoldSilverMain::
	applymovement 12, SootopolisCity_Movement_StepRight
	applymovement 13, SootopolisCity_Movement_StepRight
	waitmovement 0
	msgbox SootopolisCity_EventScript_GoldSilverMain_Text_0
	waitmessage
	closemessage
	applymovement 12, SootopolisCity_Movement_SilverUpFaceDown
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, SootopolisCity_Movement_PlayerToAction
	waitmovement 0
	applymovement 13, SootopolisCity_Movement_StepUp
	waitmovement 0
	msgbox SootopolisCity_EventScript_GoldSilverMain_Text_1
	waitmessage
	applymovement 12, SootopolisCity_Movement_StepLeft
	applymovement OBJ_EVENT_ID_PLAYER, SootopolisCity_Movement_StepLeft
	applymovement 13, SootopolisCity_Movement_StepLeft
	waitmovement 0
	msgbox SootopolisCity_EventScript_GoldSilverMain_Text_2
	waitmessage
	applymovement 11, SootopolisCity_Movement_StepRight
	waitmovement 0
	msgbox SootopolisCity_EventScript_GoldSilverMain_Text_3
	waitmessage
	applymovement 11, SootopolisCity_Movement_StepRight
	waitmovement 0
	msgbox SootopolisCity_EventScript_GoldSilverMain_Text_4
	waitmessage
	applymovement 11, SootopolisCity_Movement_StepRight
	waitmovement 0
	msgbox SootopolisCity_EventScript_GoldSilverMain_Text_5
	waitmessage
	applymovement 13, SootopolisCity_Movement_StepLeft
	waitmovement 0
	msgbox SootopolisCity_EventScript_GoldSilverMain_Text_6
	waitmessage
	applymovement 11, SootopolisCity_Movement_StepRight
	waitmovement 0
	msgbox SootopolisCity_EventScript_GoldSilverMain_Text_7
	waitmessage
	applymovement 12, SootopolisCity_Movement_StepDown
	waitmovement 0
	msgbox SootopolisCity_EventScript_GoldSilverMain_Text_8
	waitmessage
	applymovement 12, SootopolisCity_Movement_StepLeft
	applymovement 11, SootopolisCity_Movement_StepRight
	waitmovement 0
	msgbox SootopolisCity_EventScript_GoldSilverMain_Text_9
	waitmessage
	closemessage
	applymovement 11, SootopolisCity_Movement_WalkUpOne
	waitmovement 0
	applymovement 11, SootopolisCity_Movement_WalkUpOne
	applymovement 14, SootopolisCity_Movement_TyFollowGold
	waitmovement 0
	opendoor 45, 27
	waitdooranim
	applymovement 11, SootopolisCity_Movement_WalkUpOneInvis
	applymovement 14, SootopolisCity_Movement_UpTwoInvis
	waitmovement 0
	closedoor 45, 27
	waitdooranim
	removeobject 11
	removeobject 14
	applymovement OBJ_EVENT_ID_PLAYER, SootopolisCity_Movement_StepDown
	applymovement 13, SootopolisCity_Movement_StepUp
	waitmovement 0
	msgbox SootopolisCity_EventScript_GoldSilverMain_Text_10
	waitmessage
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, SootopolisCity_Movement_StepLeft
	applymovement 13, SootopolisCity_Movement_ShaneToDoor
	waitmovement 0
	opendoor 45, 27
	waitdooranim
	applymovement 13, SootopolisCity_Movement_WalkUpOneInvis
	waitmovement 0
	closedoor 45, 27
	waitdooranim
	removeobject 13
	setflag FLAG_HIDE_SHANE_INITIAL_LAZULAN
	applymovement OBJ_EVENT_ID_PLAYER, SootopolisCity_Movement_StepUp
	applymovement 12, SootopolisCity_Movement_StepDown
	waitmovement 0
	msgbox SootopolisCity_EventScript_GoldSilverMain_Text_11
	waitmessage
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, SootopolisCity_Movement_PlayerToDoor
	waitmovement 0
	warpdoor MAP_SOOTOPOLIS_CITY_MYSTERY_EVENTS_HOUSE_1F, 0
	waitstate
	release
	end


SootopolisCity_Movement_StepRight:
	walk_in_place_right
	step_end

SootopolisCity_Movement_StepLeft:
	walk_in_place_left
	step_end

SootopolisCity_Movement_StepUp:
	walk_in_place_up
	step_end

SootopolisCity_Movement_StepDown:
	walk_in_place_down
	step_end

SootopolisCity_Movement_SilverUpFaceDown:
	walk_up
	walk_in_place_down
	step_end

SootopolisCity_Movement_PlayerToAction:
	walk_left
	walk_left
	walk_left
	walk_in_place_down
	step_end

SootopolisCity_Movement_WalkUpOne:
	walk_up
	step_end

SootopolisCity_Movement_TyFollowGold:
	walk_right
	walk_in_place_up
	step_end

SootopolisCity_Movement_WalkUpOneInvis:
	walk_up
	set_invisible
	step_end

SootopolisCity_Movement_UpTwoInvis:
	walk_up
	walk_up
	set_invisible
	step_end

SootopolisCity_Movement_ShaneToDoor:
	walk_left
	walk_left
	walk_up
	walk_up
	walk_up
	step_end

SootopolisCity_Movement_PlayerToDoor:
	walk_left
	walk_left
	walk_up
	walk_up
	step_end

SootopolisCity_EventScript_Kiri::
	lock
	faceplayer
	dotimebasedevents
	special GetPlayerBigGuyGirlString
	goto_if_set FLAG_DAILY_SOOTOPOLIS_RECEIVED_BERRY, SootopolisCity_EventScript_KiriReceivedBerry
	msgbox SootopolisCity_Text_NameIsKiriHaveOneOfThese, MSGBOX_DEFAULT
	random NUM_KIRI_BERRIES
	addvar VAR_RESULT, NUM_KIRI_BERRIES_SKIPPED
	addvar VAR_RESULT, FIRST_BERRY_INDEX
	giveitem VAR_RESULT
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
	setflag FLAG_DAILY_SOOTOPOLIS_RECEIVED_BERRY
	msgbox SootopolisCity_Text_GiveYouThisBerryToo, MSGBOX_DEFAULT
	random 2
	goto_if_eq VAR_RESULT, 0, SootopolisCity_EventScript_GiveFigyBerry
	goto_if_eq VAR_RESULT, 1, SootopolisCity_EventScript_GiveIapapaBerry
	end


SootopolisCity_EventScript_GiveFigyBerry::
	giveitem ITEM_FIGY_BERRY
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
	msgbox SootopolisCity_Text_WhatKindOfWishInYourName, MSGBOX_DEFAULT
	release
	end


SootopolisCity_EventScript_GiveIapapaBerry::
	giveitem ITEM_IAPAPA_BERRY
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
	msgbox SootopolisCity_Text_WhatKindOfWishInYourName, MSGBOX_DEFAULT
	release
	end


SootopolisCity_EventScript_KiriReceivedBerry::
	msgbox SootopolisCity_Text_LikeSeasonBornIn, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, SootopolisCity_EventScript_KiriLikeSeasonBornIn
	msgbox SootopolisCity_Text_OhDoesntMatter, MSGBOX_DEFAULT
	release
	end


SootopolisCity_EventScript_KiriLikeSeasonBornIn::
	msgbox SootopolisCity_Text_ThenILoveAutumn, MSGBOX_DEFAULT
	release
	end


SootopolisCity_EventScript_Woman2::
	lock
	faceplayer
	goto_if_set FLAG_HIDE_SOOTOPOLIS_CITY_RESIDENTS, SootopolisCity_EventScript_Woman2_1
	msgbox SootopolisCity_EventScript_Woman2_Text_1
	release
	end

SootopolisCity_EventScript_Woman2_1:
	msgbox SootopolisCity_EventScript_Woman2_Text_0
	release
	end


SootopolisCity_EventScript_Man::
	lock
	faceplayer
	goto_if_set FLAG_HIDE_SOOTOPOLIS_CITY_RESIDENTS, SootopolisCity_EventScript_Man_1
	message gText_HowMayIServeYou
	waitmessage
	pokemart SootopolisCity_Mart_Salesman2
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

SootopolisCity_EventScript_Man_1:
	msgbox SootopolisCity_EventScript_Man_Text_0
	release
	end


	.align 2
SootopolisCity_Mart_Salesman2:
	.2byte ITEM_TM26_EARTHQUAKE
	.2byte ITEM_TM27_RETURN
	.2byte ITEM_NONE

SootopolisCity_EventScript_Woman1::
	msgbox SootopolisCity_EventScript_Woman1_Text_0, MSGBOX_NPC
	end


SootopolisCity_EventScript_NinjaBoy::
	msgbox SootopolisCity_EventScript_NinjaBoy_Text_0, MSGBOX_NPC
	end


SootopolisCity_EventScript_Boy1::
	msgbox SootopolisCity_EventScript_Boy1_Text_0, MSGBOX_NPC
	end


SootopolisCity_EventScript_GymSign::
	msgbox SootopolisCity_Text_GymSign, MSGBOX_SIGN
	end


SootopolisCity_EventScript_CitySign::
	msgbox SootopolisCity_Text_CitySign, MSGBOX_SIGN
	end


SootopolisCity_EventScript_Boy2::
	lock
	faceplayer
	goto_if_set FLAG_HIDE_SOOTOPOLIS_CITY_RESIDENTS, SootopolisCity_EventScript_Boy2_1
	msgbox SootopolisCity_EventScript_Boy2_Text_1
	release
	end

SootopolisCity_EventScript_Boy2_1:
	msgbox SootopolisCity_EventScript_Boy2_Text_0
	release
	end


SootopolisCity_EventScript_BlackBelt::
	msgbox SootopolisCity_EventScript_BlackBelt_Text_0, MSGBOX_NPC
	end


SootopolisCity_EventScript_Girl::
	msgbox SootopolisCity_EventScript_Girl_Text_0, MSGBOX_NPC
	end


SootopolisCity_EventScript_Maniac::
	lock
	faceplayer
	goto_if_set FLAG_HIDE_SOOTOPOLIS_CITY_RESIDENTS, SootopolisCity_EventScript_Maniac_1
	message gText_HowMayIServeYou
	waitmessage
	pokemart SootopolisCity_Mart_Salesman5
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

SootopolisCity_EventScript_Maniac_1:
	msgbox SootopolisCity_EventScript_Maniac_Text_0
	release
	end


	.align 2
SootopolisCity_Mart_Salesman5:
	.2byte ITEM_HP_UP
	.2byte ITEM_PROTEIN
	.2byte ITEM_IRON
	.2byte ITEM_CALCIUM
	.2byte ITEM_ZINC
	.2byte ITEM_CARBOS
	.2byte ITEM_PP_UP
	.2byte ITEM_RARE_CANDY
	.2byte ITEM_NONE

SootopolisCity_EventScript_Typhlosion::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_TYPHLOSION, CRY_MODE_NORMAL
	applymovement 14, LittlerootTown_BrendansHouse_1F_Heart
	msgbox SootopolisCity_EventScript_Typhlosion_Text_0
	waitmovement 0
	waitmoncry
	release
	end


SootopolisCity_EventScript_Feraligatr::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_FERALIGATR, CRY_MODE_NORMAL
	applymovement 15, LittlerootTown_BrendansHouse_1F_Heart
	msgbox SootopolisCity_EventScript_Feraligatr_Text_0
	waitmovement 0
	waitmoncry
	release
	end


SootopolisCity_EventScript_Silver::
	msgbox SootopolisCity_EventScript_Silver_Text_0, MSGBOX_NPC
	end


SootopolisCity_EventScript_Gold::
	lock
	faceplayer
	goto_if_set FLAG_HIDE_SOOTOPOLIS_CITY_RESIDENTS, SootopolisCity_EventScript_Gold_1
	msgbox SootopolisCity_EventScript_Gold_Text_1
	waitmessage
	closemessage
	removeobject 23
	removeobject 24
	setflag FLAG_HIDE_GOLD_LAZULAN
	clearflag FLAG_HIDE_GOLD_ROUTE_G
	release
	end

SootopolisCity_EventScript_Gold_1:
	msgbox SootopolisCity_EventScript_Gold_Text_0
	release
	end


SootopolisCity_Text_GymSign:
	.string "MEGA EVOLUTION RESEARCH LAB$"

SootopolisCity_Text_CitySign:
	.string "LAZULAN CITY\n"
	.string "“The festive island retreat.”$"

SootopolisCity_EventScript_GoldSilverMain_Text_0:
	.string "DAD: {PLAYER}! Welcome to Lazulan\n"
	.string "City!\p"
	.string "Come over here, there's someone I would\n"
	.string "like you to meet.$"

SootopolisCity_EventScript_GoldSilverMain_Text_1:
	.string "SHANE: Took you long enough to get\n"
	.string "here.$"

SootopolisCity_EventScript_GoldSilverMain_Text_2:
	.string "DAD: This is my old friend, GOLD.\p"
	.string "He and I have a long history together.\p"
	.string "We've had our differences in the past,\n"
	.string "but that was long ago, and I wouldn't\l"
	.string "be the person I am today if not for him.$"

SootopolisCity_EventScript_GoldSilverMain_Text_3:
	.string "GOLD: Come on, SILVER, you give me too\n"
	.string "much credit.\p"
	.string "Glad to meet you, {PLAYER}.\p"
	.string "Your father's told me a lot about you\n"
	.string "two.\p"
	.string "So, are you enjoying the Golden Islands\n"
	.string "so far?\p"
	.string "{PLAYER}: ...\p"
	.string "...$"

SootopolisCity_EventScript_GoldSilverMain_Text_4:
	.string "GOLD: Not as talkative as your brother,\n"
	.string "huh?\p"
	.string "That's ok, I get it.\p"
	.string "I was exactly the same when I was your\n"
	.string "age.\p"
	.string "I was so shy, I could barely speak to\n"
	.string "anyone.\p"
	.string "Well, no need to rush it, I'm sure you'll\n"
	.string "come out of your shell in time.$"

SootopolisCity_EventScript_GoldSilverMain_Text_5:
	.string "Now, about why you're all here.\p"
	.string "Are you familiar with the Millennium\n"
	.string "Comet?\p"
	.string "Once every thousand years, the\n"
	.string "Millennium Comet can be seen in the sky\l"
	.string "for seven nights.\p"
	.string "They're holding a festival here to\n"
	.string "celebrate!\p"
	.string "Although, the festival won't start for\n"
	.string "another few days.$"

SootopolisCity_EventScript_GoldSilverMain_Text_6:
	.string "SHANE: Is it true that the comet has\n"
	.string "some kind of connection to the\l"
	.string "Legendary POKéMON, Jirachi?$"

SootopolisCity_EventScript_GoldSilverMain_Text_7:
	.string "GOLD: Well, that is the rumor.\p"
	.string "Although, no one has seen Jirachi for\n"
	.string "centuries, so we can't say for sure.$"

SootopolisCity_EventScript_GoldSilverMain_Text_8:
	.string "DAD: If you two are lucky, maybe you'll\n"
	.string "encounter Jirachi while we're here.$"

SootopolisCity_EventScript_GoldSilverMain_Text_9:
	.string "GOLD: Hah! From what you've told me,\n"
	.string "these two might actually be that\l"
	.string "lucky!\p"
	.string "...\p"
	.string "Now, SHANE and {PLAYER}, there's\n"
	.string "something I would like to show you.\p"
	.string "Please, come with me.$"

SootopolisCity_EventScript_GoldSilverMain_Text_10:
	.string "SHANE: If anyone's going to catch\n"
	.string "Jirachi, it's going to be me!$"

SootopolisCity_EventScript_GoldSilverMain_Text_11:
	.string "DAD: Go on, {PLAYER}.\p"
	.string "I'm going to explore the town some more.$"

SootopolisCity_EventScript_Woman2_Text_0:
	.string "I can't wait for the upcoming festival!\p"
	.string "It looks like they're setting up a\n"
	.string "market in the middle of town.\p"
	.string "I bet they'll sell all kinds of rare\n"
	.string "items!$"

SootopolisCity_EventScript_Woman2_Text_1:
	.string "Have you stopped by the market in the\n"
	.string "middle of town yet?\p"
	.string "They're selling all kinds of rare items\n"
	.string "you can't buy anywhere else!$"

SootopolisCity_EventScript_Man_Text_0:
	.string "Hey there! Are you looking forward to\n"
	.string "the festival?\p"
	.string "I'm still getting set up here, but I'll\n"
	.string "have some good TM's for sale later!$"

SootopolisCity_EventScript_Woman1_Text_0:
	.string "I heard a rumor that the Legendary\n"
	.string "POKéMON, Jirachi, can be seen high up in\l"
	.string "the mountains.\p"
	.string "Hmm... We do have Mt. Tempest nearby!$"

SootopolisCity_EventScript_NinjaBoy_Text_0:
	.string "Oh! You have a Mega Stone!?\p"
	.string "That's so cool!\p"
	.string "I wish my parents would buy me one!$"

SootopolisCity_EventScript_Boy1_Text_0:
	.string "There's a guy in town who is crazy about\n"
	.string "Heart Scales.\p"
	.string "I don't really get it, but at least he'll\n"
	.string "trade Exp. Candy for them!$"

SootopolisCity_EventScript_Boy2_Text_0:
	.string "Man, there's already starting to be\n"
	.string "tourists around town.\p"
	.string "Why does my hometown have to host this\n"
	.string "festival?$"

SootopolisCity_EventScript_Boy2_Text_1:
	.string "Whoa, did you see the Kimono Girls\n"
	.string "dancing around town?\p"
	.string "I can't believe how pretty they are!$"

SootopolisCity_EventScript_BlackBelt_Text_0:
	.string "Now this is the kind of town I just love!\p"
	.string "You'll get no complaints from this man!$"

SootopolisCity_EventScript_Girl_Text_0:
	.string "Somebody needs to sweep all of this\n"
	.string "sand up, it keeps getting in my sandals,\l"
	.string "and I hate it!$"

SootopolisCity_EventScript_Maniac_Text_0:
	.string "Sorry, you'll have to come back later.\p"
	.string "I'm still setting up shop.$"

SootopolisCity_EventScript_Typhlosion_Text_0:
	.string "TYPHLOSION: Wrrahh!$"

SootopolisCity_EventScript_Feraligatr_Text_0:
	.string "FERALIGATR: Grrahh!$"

SootopolisCity_EventScript_Silver_Text_0:
	.string "DAD: I see you're wearing a Mega Ring\n"
	.string "now, that's great!\p"
	.string "Have you had a chance to use it yet?\p"
	.string "I really feel like the connection I\n"
	.string "share with my POKéMON is stronger when\l"
	.string "I Mega Evolve them.$"

SootopolisCity_EventScript_Gold_Text_0:
	.string "GOLD: Yo, {PLAYER}!\p"
	.string "Your father just told me about how you\n"
	.string "and SHANE defeated Team Phoenix, and\l"
	.string "how they were actually formed from the\l"
	.string "remnants of Team Rocket.\p"
	.string "You know, I battled them many years ago\n"
	.string "myself.\p"
	.string "They forced all of the MAGIKARP in the\n"
	.string "Lake of Rage to evolve for whatever\l"
	.string "reason.\p"
	.string "Ah, I won't bore you with stories of the\n"
	.string "past though.$"

SootopolisCity_EventScript_Gold_Text_1:
	.string "meet at my house$"
