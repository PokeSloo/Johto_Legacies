LilycoveCity_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, LilycoveCity_OnTransition
	.byte 0

LilycoveCity_OnTransition:
	setflag FLAG_VISITED_LILYCOVE_CITY
	end

LilycoveCity_EventScript_BerryGentleman::
	lock
	faceplayer
	dotimebasedevents
	goto_if_set FLAG_DAILY_LILYCOVE_RECEIVED_BERRY, LilycoveCity_EventScript_ReceivedBerry
	msgbox LilycoveCity_Text_BerrySuitsYou, MSGBOX_DEFAULT
	random 10
	addvar VAR_RESULT, FIRST_BERRY_INDEX
	giveitem VAR_RESULT
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
	setflag FLAG_DAILY_LILYCOVE_RECEIVED_BERRY
	msgbox LilycoveCity_Text_BecauseYoureTrainer, MSGBOX_DEFAULT
	release
	end

LilycoveCity_EventScript_ReceivedBerry::
	msgbox LilycoveCity_Text_PokeblocksSuitPokemon, MSGBOX_DEFAULT
	release
	end

LilycoveCity_EventScript_Girl::
	msgbox LilycoveCity_Text_GoingToMoveDeleterForHMs, MSGBOX_NPC
	end

LilycoveCity_EventScript_RichBoy::
	msgbox LilycoveCity_Text_ImFromKanto, MSGBOX_NPC
	end

LilycoveCity_EventScript_Woman2::
	msgbox LilycoveCity_Text_MissingPokemonCameBack, MSGBOX_NPC
	end

LilycoveCity_EventScript_Man2::
	msgbox LilycoveCity_Text_ImArtDealer, MSGBOX_NPC
	end

LilycoveCity_EventScript_ExpertM1::
	msgbox LilycoveCity_Text_SeaRemainsForeverYoung, MSGBOX_SIGN
	end

LilycoveCity_EventScript_ExpertF::
	msgbox LilycoveCity_Text_SixtyYearsAgoHusbandProposed, MSGBOX_SIGN
	end

LilycoveCity_EventScript_ExpertM2::
	msgbox LilycoveCity_Text_TeamAquaLotGoneForGood, MSGBOX_DEFAULT
	release
	end

LilycoveCity_EventScript_Sailor1::
	msgbox LilycoveCity_Text_HeardTowerCalledSkyPillar, MSGBOX_NPC
	end

LilycoveCity_EventScript_Man1::
	msgbox LilycoveCity_Text_JustArrivedAndSawRarePokemon, MSGBOX_NPC
	end

LilycoveCity_EventScript_Woman1::
	msgbox LilycoveCity_Text_HoneymoonVowToSeeRarePokemon, MSGBOX_NPC
	end

LilycoveCity_EventScript_CitySign::
	msgbox LilycoveCity_Text_CitySign, MSGBOX_SIGN
	end

LilycoveCity_EventScript_ContestHallSign::
	msgbox LilycoveCity_Text_ContestHallSign, MSGBOX_SIGN
	end

LilycoveCity_EventScript_MotelSign::
	msgbox LilycoveCity_Text_MotelSign, MSGBOX_SIGN
	end

LilycoveCity_EventScript_TrainerFanClubSign::
	msgbox LilycoveCity_Text_TrainerFanClubSign, MSGBOX_SIGN
	end

LilycoveCity_Text_GoingToMoveDeleterForHMs:
	.string "The old karate master is a good\n"
	.string "teacher, but he's so picky about who he\l"
	.string "will train.\p"
	.string "I'm not even worthy of learning his most\n"
	.string "secret techniques.$"

LilycoveCity_Text_ImFromKanto:
	.string "Have you been to the Darkoal Game\n"
	.string "House yet?\p"
	.string "I tried the puzzle they have\n"
	.string "downstairs, but it's too much for me to\l"
	.string "figure out.$"

LilycoveCity_Text_MissingPokemonCameBack:
	.string "They say it never stops storming up on\n"
	.string "Mt. Tempest.\p"
	.string "I can believe that, it's been raining as\n"
	.string "long as I've lived here at least.$"

LilycoveCity_Text_ImArtDealer:
	.string "I saw some weird hooded people going up\n"
	.string "to Mt. Tempest.\p"
	.string "I wonder what they're doing up there.$"

LilycoveCity_Text_SeaRemainsForeverYoung:
	.string "The sound of rain can be very peaceful,\n"
	.string "although it's not as peaceful when\l"
	.string "you're out in it.$"

LilycoveCity_Text_SixtyYearsAgoHusbandProposed:
	.string "All of this rain has really wrinkled up\n"
	.string "my skin!\p"
	.string "What?\p"
	.string "You think I'm naturally wrinkly!?\p"
	.string "How rude!$"

LilycoveCity_Text_TeamAquaLotGoneForGood:
	.string "My wife hasn't felt well enough to leave\n"
	.string "the house in years.\p"
	.string "I wish there was something I could do\n"
	.string "for her.$"

LilycoveCity_Text_CitySign:
	.string "DARKOAL CITY\p"
	.string "“The stormy mountainside village.”$"

LilycoveCity_Text_ContestHallSign:
	.string "MT. TEMPEST$"

LilycoveCity_Text_MotelSign:
	.string "DARKOAL GAME HOUSE$"

LilycoveCity_Text_TrainerFanClubSign:
	.string "KARATE MASTER'S DOJO$"

LilycoveCity_Text_HeardTowerCalledSkyPillar:
	.string "So much water around, but not enough to\n"
	.string "sail on, such a shame.$"

LilycoveCity_Text_JustArrivedAndSawRarePokemon:
	.string "I like the dark, damp, spooky look of\n"
	.string "this town.\p"
	.string "It reminds me of home, ufufufu!$"

LilycoveCity_Text_HoneymoonVowToSeeRarePokemon:
	.string "If I had Rain Dish like Ludicolo, I could\n"
	.string "soak up all of this rain.\p"
	.string "I'm sure that would feel great!$"

