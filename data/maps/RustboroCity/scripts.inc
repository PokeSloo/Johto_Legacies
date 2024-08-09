RustboroCity_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, RustboroCity_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

RustboroCity_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	setflag FLAG_VISITED_RUSTBORO_CITY
	return


RustboroCity_Text_CitySign::
	msgbox RustboroCity_Text_CitySign_Text_0, MSGBOX_SIGN
	end


RustboroCity_Text_VioletUniversity::
	msgbox RustboroCity_Text_VioletUniversity_Text_0, MSGBOX_SIGN
	end


RustboroCity_Text_HerbalMedicineShop::
	msgbox RustboroCity_Text_HerbalMedicineShop_Text_0, MSGBOX_SIGN
	end


RustboroCity_Text_SproutTower::
	msgbox RustboroCity_Text_SproutTower_Text_0, MSGBOX_SIGN
	end


RustboroCity_EventScript_BridgeMan::
	msgbox RustboroCity_EventScript_BridgeMan_Text_0, MSGBOX_NPC
	end


RustboroCity_EventScript_NinjaBoy::
	msgbox RustboroCity_EventScript_NinjaBoy_Text_0, MSGBOX_NPC
	end


RustboroCity_EventScript_Rt36Guy::
	msgbox RustboroCity_EventScript_Rt36Guy_Text_0, MSGBOX_NPC
	end


RustboroCity_EventScript_HerbShopSage::
	msgbox RustboroCity_EventScript_HerbShopSage_Text_0, MSGBOX_NPC
	end


RustboroCity_EventScript_BlondeMan::
	msgbox RustboroCity_EventScript_BlondeMan_Text_0, MSGBOX_NPC
	end


RustboroCity_EventScript_GymGuy::
	msgbox RustboroCity_EventScript_GymGuy_Text_0, MSGBOX_NPC
	end


RustboroCity_EventScript_UniversityGuy::
	msgbox RustboroCity_EventScript_UniversityGuy_Text_0, MSGBOX_NPC
	end


RustboroCity_EventScript_PCgirl::
	msgbox RustboroCity_EventScript_PCgirl_Text_0, MSGBOX_NPC
	end


RustboroCity_EventScript_Twin::
	msgbox RustboroCity_EventScript_Twin_Text_0, MSGBOX_NPC
	end


RustboroCity_EventScript_BenchBoy::
	msgbox RustboroCity_EventScript_BenchBoy_Text_0, MSGBOX_NPC
	end


RustboroCity_EventScript_BenchGirl::
	lock
	faceplayer
	goto_if_set FLAG_SPOKE_TO_NATURE_NPC, RustboroCity_EventScript_BenchGirl_1
	msgbox RustboroCity_EventScript_BenchGirl_Text_3
	waitmessage
	setflag FLAG_SPOKE_TO_NATURE_NPC
	showmoneybox 0, 0
	msgbox RustboroCity_EventScript_BenchGirl_Text_4, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq RustboroCity_EventScript_BenchGirl_8
RustboroCity_EventScript_BenchGirl_7:
	checkmoney 3000
	compare VAR_RESULT, NO
	goto_if_eq RustboroCity_EventScript_BenchGirl_13
	goto RustboroCity_EventScript_BenchGirl_SelectMon
	return

RustboroCity_EventScript_BenchGirl_1:
	msgbox RustboroCity_EventScript_BenchGirl_Text_0
	waitmessage
	showmoneybox 0, 0
	msgbox RustboroCity_EventScript_BenchGirl_Text_1, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq RustboroCity_EventScript_BenchGirl_5
RustboroCity_EventScript_BenchGirl_4:
	checkmoney 3000
	compare VAR_RESULT, NO
	goto_if_eq RustboroCity_EventScript_BenchGirl_10
	goto RustboroCity_EventScript_BenchGirl_SelectMon
	return

RustboroCity_EventScript_BenchGirl_5:
	goto RustboroCity_EventScript_CancelMonSelect
	goto RustboroCity_EventScript_BenchGirl_4

RustboroCity_EventScript_BenchGirl_8:
	goto RustboroCity_EventScript_CancelMonSelect
	goto RustboroCity_EventScript_BenchGirl_7

RustboroCity_EventScript_BenchGirl_10:
	msgbox RustboroCity_EventScript_BenchGirl_Text_2
	waitmessage
	hidemoneybox
	release
	end

RustboroCity_EventScript_BenchGirl_13:
	msgbox RustboroCity_EventScript_BenchGirl_Text_2
	waitmessage
	hidemoneybox
	release
	end


RustboroCity_EventScript_BenchGirl_SelectMon::
	msgbox RustboroCity_EventScript_BenchGirl_SelectMon_Text_0
	waitmessage
	special ChoosePartyMon
	waitstate
	copyvar VAR_0x8009, VAR_0x8004
	showmoneybox 0, 0
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, RustboroCity_EventScript_CancelMonSelect
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
	goto_if_eq VAR_RESULT, SPECIES_EGG, RustboroCity_EventScript_ShowEgg
	goto RustboroCity_EventScript_BenchGirl_Multichoice
	end


RustboroCity_EventScript_CancelMonSelect::
	msgbox RustboroCity_EventScript_CancelMonSelect_Text_0
	hidemoneybox
	release
	end


RustboroCity_EventScript_ShowEgg::
	msgbox RustboroCity_EventScript_ShowEgg_Text_0
	hidemoneybox
	release
	end


RustboroCity_EventScript_BenchGirl_Multichoice::
	message RustboroCity_Text_WhichNature
	waitmessage
	scrollingmultichoice 3, 20, 2, 5, TRUE
	switch VAR_RESULT
	case 0, RustboroCity_EventScript_ChooseLonely
	case 1, RustboroCity_EventScript_ChooseBrave
	case 2, RustboroCity_EventScript_ChooseAdamant
	case 3, RustboroCity_EventScript_ChooseNaughty
	case 4, RustboroCity_EventScript_ChooseBold
	case 5, RustboroCity_EventScript_ChooseRelaxed
	case 6, RustboroCity_EventScript_ChooseImpish
	case 7, RustboroCity_EventScript_ChooseLax
	case 8, RustboroCity_EventScript_ChooseTimid
	case 9, RustboroCity_EventScript_ChooseHasty
	case 10, RustboroCity_EventScript_ChooseJolly
	case 11, RustboroCity_EventScript_ChooseNaive
	case 12, RustboroCity_EventScript_ChooseModest
	case 13, RustboroCity_EventScript_ChooseMild
	case 14, RustboroCity_EventScript_ChooseQuiet
	case 15, RustboroCity_EventScript_ChooseRash
	case 16, RustboroCity_EventScript_ChooseCalm
	case 17, RustboroCity_EventScript_ChooseGentle
	case 18, RustboroCity_EventScript_ChooseSassy
	case 19, RustboroCity_EventScript_ChooseCareful
	case MULTI_B_PRESSED, RustboroCity_EventScript_CancelMonSelect
	end

RustboroCity_EventScript_ChooseLonely::
	setvar VAR_0x8005, 1
	special ChangeMonNature
	compare VAR_RESULT, FALSE
	goto_if_eq RustboroCity_EventScript_ChooseLonely_1
	goto RustboroCity_EventScript_NatureChanged
	return

RustboroCity_EventScript_ChooseLonely_1:
	msgbox RustboroCity_EventScript_ChooseLonely_Text_0
	hidemoneybox
	release
	end


RustboroCity_EventScript_ChooseBrave::
	setvar VAR_0x8005, 2
	special ChangeMonNature
	compare VAR_RESULT, FALSE
	goto_if_eq RustboroCity_EventScript_ChooseBrave_1
	goto RustboroCity_EventScript_NatureChanged
	return

RustboroCity_EventScript_ChooseBrave_1:
	msgbox RustboroCity_EventScript_ChooseBrave_Text_0
	hidemoneybox
	release
	end


RustboroCity_EventScript_ChooseAdamant::
	setvar VAR_0x8005, 3
	special ChangeMonNature
	compare VAR_RESULT, FALSE
	goto_if_eq RustboroCity_EventScript_ChooseAdamant_1
	goto RustboroCity_EventScript_NatureChanged
	return

RustboroCity_EventScript_ChooseAdamant_1:
	msgbox RustboroCity_EventScript_ChooseAdamant_Text_0
	hidemoneybox
	release
	end


RustboroCity_EventScript_ChooseNaughty::
	setvar VAR_0x8005, 4
	special ChangeMonNature
	compare VAR_RESULT, FALSE
	goto_if_eq RustboroCity_EventScript_ChooseNaughty_1
	goto RustboroCity_EventScript_NatureChanged
	return

RustboroCity_EventScript_ChooseNaughty_1:
	msgbox RustboroCity_EventScript_ChooseNaughty_Text_0
	hidemoneybox
	release
	end


RustboroCity_EventScript_ChooseBold::
	setvar VAR_0x8005, 5
	special ChangeMonNature
	compare VAR_RESULT, FALSE
	goto_if_eq RustboroCity_EventScript_ChooseBold_1
	goto RustboroCity_EventScript_NatureChanged
	return

RustboroCity_EventScript_ChooseBold_1:
	msgbox RustboroCity_EventScript_ChooseBold_Text_0
	hidemoneybox
	release
	end


RustboroCity_EventScript_ChooseRelaxed::
	setvar VAR_0x8005, 7
	special ChangeMonNature
	compare VAR_RESULT, FALSE
	goto_if_eq RustboroCity_EventScript_ChooseRelaxed_1
	goto RustboroCity_EventScript_NatureChanged
	return

RustboroCity_EventScript_ChooseRelaxed_1:
	msgbox RustboroCity_EventScript_ChooseRelaxed_Text_0
	hidemoneybox
	release
	end


RustboroCity_EventScript_ChooseImpish::
	setvar VAR_0x8005, 8
	special ChangeMonNature
	compare VAR_RESULT, FALSE
	goto_if_eq RustboroCity_EventScript_ChooseImpish_1
	goto RustboroCity_EventScript_NatureChanged
	return

RustboroCity_EventScript_ChooseImpish_1:
	msgbox RustboroCity_EventScript_ChooseImpish_Text_0
	hidemoneybox
	release
	end


RustboroCity_EventScript_ChooseLax::
	setvar VAR_0x8005, 9
	special ChangeMonNature
	compare VAR_RESULT, FALSE
	goto_if_eq RustboroCity_EventScript_ChooseLax_1
	goto RustboroCity_EventScript_NatureChanged
	return

RustboroCity_EventScript_ChooseLax_1:
	msgbox RustboroCity_EventScript_ChooseLax_Text_0
	hidemoneybox
	release
	end


RustboroCity_EventScript_ChooseTimid::
	setvar VAR_0x8005, 10
	special ChangeMonNature
	compare VAR_RESULT, FALSE
	goto_if_eq RustboroCity_EventScript_ChooseTimid_1
	goto RustboroCity_EventScript_NatureChanged
	return

RustboroCity_EventScript_ChooseTimid_1:
	msgbox RustboroCity_EventScript_ChooseTimid_Text_0
	hidemoneybox
	release
	end


RustboroCity_EventScript_ChooseHasty::
	setvar VAR_0x8005, 11
	special ChangeMonNature
	compare VAR_RESULT, FALSE
	goto_if_eq RustboroCity_EventScript_ChooseHasty_1
	goto RustboroCity_EventScript_NatureChanged
	return

RustboroCity_EventScript_ChooseHasty_1:
	msgbox RustboroCity_EventScript_ChooseHasty_Text_0
	hidemoneybox
	release
	end


RustboroCity_EventScript_ChooseJolly::
	setvar VAR_0x8005, 13
	special ChangeMonNature
	compare VAR_RESULT, FALSE
	goto_if_eq RustboroCity_EventScript_ChooseJolly_1
	goto RustboroCity_EventScript_NatureChanged
	return

RustboroCity_EventScript_ChooseJolly_1:
	msgbox RustboroCity_EventScript_ChooseJolly_Text_0
	hidemoneybox
	release
	end


RustboroCity_EventScript_ChooseNaive::
	setvar VAR_0x8005, 14
	special ChangeMonNature
	compare VAR_RESULT, FALSE
	goto_if_eq RustboroCity_EventScript_ChooseNaive_1
	goto RustboroCity_EventScript_NatureChanged
	return

RustboroCity_EventScript_ChooseNaive_1:
	msgbox RustboroCity_EventScript_ChooseNaive_Text_0
	hidemoneybox
	release
	end


RustboroCity_EventScript_ChooseModest::
	setvar VAR_0x8005, 15
	special ChangeMonNature
	compare VAR_RESULT, FALSE
	goto_if_eq RustboroCity_EventScript_ChooseModest_1
	goto RustboroCity_EventScript_NatureChanged
	return

RustboroCity_EventScript_ChooseModest_1:
	msgbox RustboroCity_EventScript_ChooseModest_Text_0
	hidemoneybox
	release
	end


RustboroCity_EventScript_ChooseMild::
	setvar VAR_0x8005, 16
	special ChangeMonNature
	compare VAR_RESULT, FALSE
	goto_if_eq RustboroCity_EventScript_ChooseMild_1
	goto RustboroCity_EventScript_NatureChanged
	return

RustboroCity_EventScript_ChooseMild_1:
	msgbox RustboroCity_EventScript_ChooseMild_Text_0
	hidemoneybox
	release
	end


RustboroCity_EventScript_ChooseQuiet::
	setvar VAR_0x8005, 17
	special ChangeMonNature
	compare VAR_RESULT, FALSE
	goto_if_eq RustboroCity_EventScript_ChooseQuiet_1
	goto RustboroCity_EventScript_NatureChanged
	return

RustboroCity_EventScript_ChooseQuiet_1:
	msgbox RustboroCity_EventScript_ChooseQuiet_Text_0
	hidemoneybox
	release
	end


RustboroCity_EventScript_ChooseRash::
	setvar VAR_0x8005, 19
	special ChangeMonNature
	compare VAR_RESULT, FALSE
	goto_if_eq RustboroCity_EventScript_ChooseRash_1
	goto RustboroCity_EventScript_NatureChanged
	return

RustboroCity_EventScript_ChooseRash_1:
	msgbox RustboroCity_EventScript_ChooseRash_Text_0
	hidemoneybox
	release
	end


RustboroCity_EventScript_ChooseCalm::
	setvar VAR_0x8005, 20
	special ChangeMonNature
	compare VAR_RESULT, FALSE
	goto_if_eq RustboroCity_EventScript_ChooseCalm_1
	goto RustboroCity_EventScript_NatureChanged
	return

RustboroCity_EventScript_ChooseCalm_1:
	msgbox RustboroCity_EventScript_ChooseCalm_Text_0
	hidemoneybox
	release
	end


RustboroCity_EventScript_ChooseGentle::
	setvar VAR_0x8005, 21
	special ChangeMonNature
	compare VAR_RESULT, FALSE
	goto_if_eq RustboroCity_EventScript_ChooseGentle_1
	goto RustboroCity_EventScript_NatureChanged
	return

RustboroCity_EventScript_ChooseGentle_1:
	msgbox RustboroCity_EventScript_ChooseGentle_Text_0
	hidemoneybox
	release
	end


RustboroCity_EventScript_ChooseSassy::
	setvar VAR_0x8005, 22
	special ChangeMonNature
	compare VAR_RESULT, FALSE
	goto_if_eq RustboroCity_EventScript_ChooseSassy_1
	goto RustboroCity_EventScript_NatureChanged
	return

RustboroCity_EventScript_ChooseSassy_1:
	msgbox RustboroCity_EventScript_ChooseSassy_Text_0
	hidemoneybox
	release
	end


RustboroCity_EventScript_ChooseCareful::
	setvar VAR_0x8005, 23
	special ChangeMonNature
	compare VAR_RESULT, FALSE
	goto_if_eq RustboroCity_EventScript_ChooseCareful_1
	goto RustboroCity_EventScript_NatureChanged
	return

RustboroCity_EventScript_ChooseCareful_1:
	msgbox RustboroCity_EventScript_ChooseCareful_Text_0
	hidemoneybox
	release
	end


RustboroCity_EventScript_NatureChanged::
	msgbox RustboroCity_EventScript_NatureChanged_Text_0
	removemoney 3000
	updatemoneybox
	playse SE_SHOP
	waitse
	msgbox RustboroCity_EventScript_NatureChanged_Text_1
	hidemoneybox
	release
	end


RustboroCity_EventScript_ItemQuickClaw::
	finditem ITEM_QUICK_CLAW
	end


RustboroCity_EventScript_ItemRareCandy::
	finditem ITEM_RARE_CANDY
	end


RustboroCity_Text_CitySign_Text_0:
	.string "VIOLET CITY\n"
	.string "“The City of Nostalgic Scents.”$"

RustboroCity_Text_VioletUniversity_Text_0:
	.string "VIOLET UNIVERSITY$"

RustboroCity_Text_HerbalMedicineShop_Text_0:
	.string "VIOLET SUPPLEMENT SHOP$"

RustboroCity_Text_SproutTower_Text_0:
	.string "SPROUT TOWER$"

RustboroCity_EventScript_BridgeMan_Text_0:
	.string "Have you been to Sprout Tower yet?\p"
	.string "You may receive a gift from the Elder\n"
	.string "Sage if he deems you worthy of it.$"

RustboroCity_EventScript_NinjaBoy_Text_0:
	.string "FLYING-type POKéMON really are the\n"
	.string "best, don't you agree?$"

RustboroCity_EventScript_Rt36Guy_Text_0:
	.string "Weird trees keep popping up on Route\n"
	.string "36, they make it difficult to get to\l"
	.string "Goldenrod City.$"

RustboroCity_EventScript_HerbShopSage_Text_0:
	.string "This shop sells “medicines” that can\n"
	.string "alter a POKéMON's ability.\p"
	.string "Such blasphemy!\p"
	.string "POKéMON are sacred beings that deserve\n"
	.string "the utmost respect!$"

RustboroCity_EventScript_BlondeMan_Text_0:
	.string "I think our gym leader, FALKNER, has\n"
	.string "really lost his edge over the years.\p"
	.string "Maybe it's time for Violet City to find a\n"
	.string "new gym leader.$"

RustboroCity_EventScript_GymGuy_Text_0:
	.string "The gym leader here is a pushover.\p"
	.string "He uses FLYING-type POKéMON, but\n"
	.string "ROCK-type POKéMON and ELECTRIC-type\l"
	.string "POKéMON are so easy to find around\l"
	.string "here.$"

RustboroCity_EventScript_UniversityGuy_Text_0:
	.string "Oh, man, I just don't know what to do.\p"
	.string "I'm failing all of my classes, and don't\n"
	.string "know how to tell my parents they've\l"
	.string "spent so much money for my education,\l"
	.string "but it's all going to waste.\p"
	.string "I guess I can always become a check\n"
	.string "station guard.$"

RustboroCity_EventScript_PCgirl_Text_0:
	.string "I just love the rustic feel of Violet\n"
	.string "City, I could stay here forever.$"

RustboroCity_EventScript_Twin_Text_0:
	.string "Have you been to the Ruins of Alph?\p"
	.string "My friends and I like to play there, but\n"
	.string "the sages always run us off.$"

RustboroCity_EventScript_BenchBoy_Text_0:
	.string "Where are we?\p"
	.string "Is it time for my nap?$"

RustboroCity_EventScript_BenchGirl_Text_0:
	.string "Welcome back, child...$"

RustboroCity_EventScript_BenchGirl_Text_1:
	.string "Would you like me to change the nature\n"
	.string "of one of your POKéMON for ¥3,000?$"

RustboroCity_EventScript_BenchGirl_Text_2:
	.string "Hmm... It doesn't look like you have\n"
	.string "enough money.\p"
	.string "Please come back when you have at\n"
	.string "least ¥3,000.$"

RustboroCity_EventScript_BenchGirl_Text_3:
	.string "Tell me child, are you familiar with the\n"
	.string "dark arts?\p"
	.string "Don't tell the sages in town, but I am\n"
	.string "able to change the nature of any\l"
	.string "POKéMON.$"

RustboroCity_EventScript_BenchGirl_Text_4:
	.string "I don't work for free, of course.\p"
	.string "How does ¥3,000 sound to change your\n"
	.string "POKéMON's nature?$"

RustboroCity_EventScript_BenchGirl_SelectMon_Text_0:
	.string "Good... good...\p"
	.string "And which POKéMON shall be changed?$"

RustboroCity_EventScript_CancelMonSelect_Text_0:
	.string "Hmm... Maybe some other time, then.$"

RustboroCity_EventScript_ShowEgg_Text_0:
	.string "Hmm... That is an egg.\p"
	.string "Eggs don't have natures yet.$"

RustboroCity_EventScript_ChooseLonely_Text_0:
	.string "Hmm... This POKéMON is already Lonely.$"

RustboroCity_EventScript_ChooseBrave_Text_0:
	.string "Hmm... This POKéMON is already Brave.$"

RustboroCity_EventScript_ChooseAdamant_Text_0:
	.string "Hmm... This POKéMON is already Adamant.$"

RustboroCity_EventScript_ChooseNaughty_Text_0:
	.string "Hmm... This POKéMON is already Naughty.$"

RustboroCity_EventScript_ChooseBold_Text_0:
	.string "Hmm... This POKéMON is already Bold.$"

RustboroCity_EventScript_ChooseRelaxed_Text_0:
	.string "Hmm... This POKéMON is already Relaxed.$"

RustboroCity_EventScript_ChooseImpish_Text_0:
	.string "Hmm... This POKéMON is already Impish.$"

RustboroCity_EventScript_ChooseLax_Text_0:
	.string "Hmm... This POKéMON is already Lax.$"

RustboroCity_EventScript_ChooseTimid_Text_0:
	.string "Hmm... This POKéMON is already Timid.$"

RustboroCity_EventScript_ChooseHasty_Text_0:
	.string "Hmm... This POKéMON is already Hasty.$"

RustboroCity_EventScript_ChooseJolly_Text_0:
	.string "Hmm... This POKéMON is already Jolly.$"

RustboroCity_EventScript_ChooseNaive_Text_0:
	.string "Hmm... This POKéMON is already Naive.$"

RustboroCity_EventScript_ChooseModest_Text_0:
	.string "Hmm... This POKéMON is already Modest.$"

RustboroCity_EventScript_ChooseMild_Text_0:
	.string "Hmm... This POKéMON is already Mild.$"

RustboroCity_EventScript_ChooseQuiet_Text_0:
	.string "Hmm... This POKéMON is already Quiet.$"

RustboroCity_EventScript_ChooseRash_Text_0:
	.string "Hmm... This POKéMON is already Rash.$"

RustboroCity_EventScript_ChooseCalm_Text_0:
	.string "Hmm... This POKéMON is already Calm.$"

RustboroCity_EventScript_ChooseGentle_Text_0:
	.string "Hmm... This POKéMON is already Gentle.$"

RustboroCity_EventScript_ChooseSassy_Text_0:
	.string "Hmm... This POKéMON is already Sassy.$"

RustboroCity_EventScript_ChooseCareful_Text_0:
	.string "Hmm... This POKéMON is already Careful.$"

RustboroCity_EventScript_NatureChanged_Text_0:
	.string "...\p"
	.string "...\p"
	.string "All done!\p"
	.string "Your POKéMON's nature has changed!$"

RustboroCity_EventScript_NatureChanged_Text_1:
	.string "Please, do visit again.$"

RustboroCity_Text_WhichNature::
	.string "And which nature would you like it\n"
	.string "changed to?$"
