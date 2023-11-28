Route110_TrickHouseEntrance_MapScripts::
	map_script MAP_SCRIPT_ON_LOAD, Route110_TrickHouseEntrance_MapScripts_MAP_SCRIPT_ON_LOAD
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route110_TrickHouseEntrance_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Route110_TrickHouseEntrance_MapScripts_MAP_SCRIPT_ON_LOAD:
	goto_if_set FLAG_HIDE_SHADY_KIMONO_GUY, Route110_TrickHouseEntrance_MapScripts_MAP_SCRIPT_ON_LOAD_2
	end

Route110_TrickHouseEntrance_MapScripts_MAP_SCRIPT_ON_LOAD_2:
	setmetatile 15, 12, 0x2AE, FALSE
	setmetatile 16, 12, 0x2AF, TRUE
	return

Route110_TrickHouseEntrance_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
	map_script_2 VAR_ECRUTEAK_STATE, 1, Route110_TrickHouseEntrance_OnFrame
	.2byte 0


Route110_TrickHouseEntrance_OnFrame::
	lock
	playse SE_PIN
	applymovement 7, Route110_TrickHouseEntrance_ExclamationLookRight
	waitmovement 0
	waitse
	delay 30
	applymovement 7, Route110_TrickHouseEntrance_KimonoToPlayer
	waitmovement 0
	msgbox Route110_TrickHouseEntrance_OnFrame_Text_0
	waitmessage
	giveitem ITEM_HM04_STRENGTH
	msgbox Route110_TrickHouseEntrance_OnFrame_Text_1
	waitmessage
	closemessage
	applymovement 7, Route110_TrickHouseEntrance_KimonoExit
	waitmovement 0
	removeobject 7
	setflag FLAG_RECEIVED_STRENGTH
	setflag FLAG_HIDE_STRENGTH_KIMONO
	addvar VAR_ECRUTEAK_STATE, 1
	release
	end


Route110_TrickHouseEntrance_ExclamationLookRight:
	emote_exclamation_mark
	walk_in_place_right
	step_end

Route110_TrickHouseEntrance_KimonoToPlayer:
	walk_right
	walk_right
	walk_right
	step_end

Route110_TrickHouseEntrance_KimonoExit:
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

Route110_TrickHouseEntrance_EventScript_ShadyGuy::
	lock
	faceplayer
	msgbox Route110_TrickHouseEntrance_EventScript_ShadyGuy_Text_0
	waitmessage
	applymovement 1, Route110_TrickHouseEntrance_StepUp
	waitmovement 0
	release
	end


Route110_TrickHouseEntrance_StepUp:
	walk_in_place_up
	step_end

Route110_TrickHouseEntrance_EventScript_BonsaiSwitch::
	lock
	goto_if_set FLAG_HIDE_SHADY_KIMONO_GUY, Route110_TrickHouseEntrance_EventScript_BonsaiSwitch_1
	msgbox Route110_TrickHouseEntrance_EventScript_BonsaiSwitch_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq Route110_TrickHouseEntrance_EventScript_BonsaiSwitch_4
	closemessage
	playse SE_SWITCH
	setmetatile 15, 12, 0x2AE, FALSE
	setmetatile 16, 12, 0x2AF, TRUE
	special DrawWholeMapView
	waitse
	delay 30
	playse SE_PIN
	applymovement 1, Route110_TrickHouseEntrance_ExclamationRight
	waitmovement 0
	waitse
	applymovement OBJ_EVENT_ID_PLAYER, Route110_TrickHouseEntrance__Movement_FaceLeft
	waitmovement 0
	msgbox Route110_TrickHouseEntrance_EventScript_BonsaiSwitch_Text_1
	trainerbattle_no_intro TRAINER_BRENDAN_ROUTE_103_MUDKIP, Route110_TrickHouseEntrance_Text_GruntDefeat
	applymovement 1, Route110_TrickHouseEntrance_BackUp
	waitmovement 0
	msgbox Route110_TrickHouseEntrance_EventScript_BonsaiSwitch_Text_2
	waitmessage
	closemessage
	applymovement 1, Route110_TrickHouseEntrance_Movement_ShadyExit
	waitmovement 0
	playse SE_EXIT
	removeobject 1
	setflag FLAG_HIDE_SHADY_KIMONO_GUY
	waitse
	release
	end

Route110_TrickHouseEntrance_EventScript_BonsaiSwitch_1:
	release
	end

Route110_TrickHouseEntrance_EventScript_BonsaiSwitch_4:
	release
	end


Route110_TrickHouseEntrance_ExclamationRight:
	emote_exclamation_mark
	walk_in_place_right
	delay_16
	delay_16
	delay_16
	delay_16
	walk_fast_right
	walk_fast_right
	walk_fast_down
	walk_fast_down
	walk_fast_right
	walk_fast_right
	walk_right
	step_end

Route110_TrickHouseEntrance__Movement_FaceLeft:
	face_left
	step_end

Route110_TrickHouseEntrance_BackUp:
	lock_facing_direction
	walk_slow_left
	unlock_facing_direction
	face_right
	step_end

Route110_TrickHouseEntrance_Movement_ShadyExit:
	walk_up
	walk_right
	walk_right
	walk_right
	step_end

Route110_TrickHouseEntrance_EventScript_KimonoGirl_1::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_EEVEE, Route110_TrickHouseEntrance_EventScript_KimonoGirl_1_2
	goto_if_defeated TRAINER_BRENDAN_ROUTE_119_TREECKO, Route110_TrickHouseEntrance_EventScript_TalkToMiddle
	goto_if_set FLAG_RECEIVED_STRENGTH, Route110_TrickHouseEntrance_EventScript_KimonoGirl_1_4
	goto_if_set FLAG_HIDE_SHADY_KIMONO_GUY, Route110_TrickHouseEntrance_EventScript_KimonoGirl_1_5
	msgbox Route110_TrickHouseEntrance_EventScript_KimonoGirl_1_Text_7
	release
	end

Route110_TrickHouseEntrance_EventScript_KimonoGirl_1_2:
	msgbox Route110_TrickHouseEntrance_EventScript_KimonoGirl_1_Text_0
	release
	end

Route110_TrickHouseEntrance_EventScript_KimonoGirl_1_4:
	msgbox Route110_TrickHouseEntrance_EventScript_KimonoGirl_1_Text_1, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq Route110_TrickHouseEntrance_EventScript_KimonoGirl_1_9
	msgbox Route110_TrickHouseEntrance_EventScript_KimonoGirl_1_Text_3
	trainerbattle_no_intro TRAINER_BRENDAN_ROUTE_119_TREECKO, Route110_TrickHouseEntrance_Text_Girl1Defeated
	msgbox Route110_TrickHouseEntrance_EventScript_KimonoGirl_1_Text_4
	addvar VAR_KIMONO_GIRL_COUNT, 1
	compare VAR_KIMONO_GIRL_COUNT, 5
	goto_if_eq Route110_TrickHouseEntrance_EventScript_KimonoGirl_1_12
	release
	end

Route110_TrickHouseEntrance_EventScript_KimonoGirl_1_5:
	msgbox Route110_TrickHouseEntrance_EventScript_KimonoGirl_1_Text_6
	release
	end

Route110_TrickHouseEntrance_EventScript_KimonoGirl_1_9:
	msgbox Route110_TrickHouseEntrance_EventScript_KimonoGirl_1_Text_2
	release
	end

Route110_TrickHouseEntrance_EventScript_KimonoGirl_1_12:
	msgbox Route110_TrickHouseEntrance_EventScript_KimonoGirl_1_Text_5
	release
	end


Route110_TrickHouseEntrance_EventScript_KimonoGirl_2::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_EEVEE, Route110_TrickHouseEntrance_EventScript_KimonoGirl_2_2
	goto_if_defeated TRAINER_BRENDAN_ROUTE_103_TORCHIC, Route110_TrickHouseEntrance_EventScript_TalkToMiddle
	goto_if_set FLAG_RECEIVED_STRENGTH, Route110_TrickHouseEntrance_EventScript_KimonoGirl_2_4
	goto_if_set FLAG_HIDE_SHADY_KIMONO_GUY, Route110_TrickHouseEntrance_EventScript_KimonoGirl_2_5
	msgbox Route110_TrickHouseEntrance_EventScript_KimonoGirl_1_Text_7
	release
	end

Route110_TrickHouseEntrance_EventScript_KimonoGirl_2_2:
	msgbox Route110_TrickHouseEntrance_EventScript_KimonoGirl_1_Text_0
	release
	end

Route110_TrickHouseEntrance_EventScript_KimonoGirl_2_4:
	msgbox Route110_TrickHouseEntrance_EventScript_KimonoGirl_2_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq Route110_TrickHouseEntrance_EventScript_KimonoGirl_2_9
	msgbox Route110_TrickHouseEntrance_EventScript_KimonoGirl_2_Text_2
	trainerbattle_no_intro TRAINER_BRENDAN_ROUTE_103_TORCHIC, Route110_TrickHouseEntrance_Text_Girl2Defeated
	msgbox Route110_TrickHouseEntrance_EventScript_KimonoGirl_1_Text_4
	addvar VAR_KIMONO_GIRL_COUNT, 1
	compare VAR_KIMONO_GIRL_COUNT, 5
	goto_if_eq Route110_TrickHouseEntrance_EventScript_KimonoGirl_2_12
	release
	end

Route110_TrickHouseEntrance_EventScript_KimonoGirl_2_5:
	msgbox Route110_TrickHouseEntrance_EventScript_KimonoGirl_2_Text_3
	release
	end

Route110_TrickHouseEntrance_EventScript_KimonoGirl_2_9:
	msgbox Route110_TrickHouseEntrance_EventScript_KimonoGirl_2_Text_1
	release
	end

Route110_TrickHouseEntrance_EventScript_KimonoGirl_2_12:
	msgbox Route110_TrickHouseEntrance_EventScript_KimonoGirl_1_Text_5
	release
	end


Route110_TrickHouseEntrance_EventScript_KimonoGirl_3::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_EEVEE, Route110_TrickHouseEntrance_EventScript_KimonoGirl_3_2
	goto_if_defeated TRAINER_BRENDAN_ROUTE_110_TORCHIC, Route110_TrickHouseEntrance_EventScript_TalkToMiddle
	goto_if_set FLAG_RECEIVED_STRENGTH, Route110_TrickHouseEntrance_EventScript_KimonoGirl_3_4
	goto_if_set FLAG_HIDE_SHADY_KIMONO_GUY, Route110_TrickHouseEntrance_EventScript_KimonoGirl_3_5
	msgbox Route110_TrickHouseEntrance_EventScript_KimonoGirl_1_Text_7
	release
	end

Route110_TrickHouseEntrance_EventScript_KimonoGirl_3_2:
	msgbox Route110_TrickHouseEntrance_EventScript_KimonoGirl_1_Text_0
	release
	end

Route110_TrickHouseEntrance_EventScript_KimonoGirl_3_4:
	msgbox Route110_TrickHouseEntrance_EventScript_KimonoGirl_3_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq Route110_TrickHouseEntrance_EventScript_KimonoGirl_3_9
	msgbox Route110_TrickHouseEntrance_EventScript_KimonoGirl_3_Text_2
	trainerbattle_no_intro TRAINER_BRENDAN_ROUTE_110_TORCHIC, Route110_TrickHouseEntrance_Text_Girl3Defeated
	msgbox Route110_TrickHouseEntrance_EventScript_KimonoGirl_1_Text_4
	addvar VAR_KIMONO_GIRL_COUNT, 1
	compare VAR_KIMONO_GIRL_COUNT, 5
	goto_if_eq Route110_TrickHouseEntrance_EventScript_KimonoGirl_3_12
	release
	end

Route110_TrickHouseEntrance_EventScript_KimonoGirl_3_5:
	msgbox Route110_TrickHouseEntrance_EventScript_KimonoGirl_3_Text_3
	release
	end

Route110_TrickHouseEntrance_EventScript_KimonoGirl_3_9:
	msgbox Route110_TrickHouseEntrance_EventScript_KimonoGirl_3_Text_1
	release
	end

Route110_TrickHouseEntrance_EventScript_KimonoGirl_3_12:
	msgbox Route110_TrickHouseEntrance_EventScript_KimonoGirl_1_Text_5
	release
	end


Route110_TrickHouseEntrance_EventScript_KimonoGirl_4::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_EEVEE, Route110_TrickHouseEntrance_EventScript_KimonoGirl_4_2
	goto_if_defeated TRAINER_BRENDAN_ROUTE_119_TORCHIC, Route110_TrickHouseEntrance_EventScript_TalkToMiddle
	goto_if_set FLAG_RECEIVED_STRENGTH, Route110_TrickHouseEntrance_EventScript_KimonoGirl_4_4
	goto_if_set FLAG_HIDE_SHADY_KIMONO_GUY, Route110_TrickHouseEntrance_EventScript_KimonoGirl_4_5
	msgbox Route110_TrickHouseEntrance_EventScript_KimonoGirl_1_Text_7
	release
	end

Route110_TrickHouseEntrance_EventScript_KimonoGirl_4_2:
	msgbox Route110_TrickHouseEntrance_EventScript_KimonoGirl_1_Text_0
	release
	end

Route110_TrickHouseEntrance_EventScript_KimonoGirl_4_4:
	msgbox Route110_TrickHouseEntrance_EventScript_KimonoGirl_4_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq Route110_TrickHouseEntrance_EventScript_KimonoGirl_4_9
	msgbox Route110_TrickHouseEntrance_EventScript_KimonoGirl_4_Text_2
	trainerbattle_no_intro TRAINER_BRENDAN_ROUTE_119_TORCHIC, Route110_TrickHouseEntrance_Text_Girl4Defeated
	msgbox Route110_TrickHouseEntrance_EventScript_KimonoGirl_1_Text_4
	addvar VAR_KIMONO_GIRL_COUNT, 1
	compare VAR_KIMONO_GIRL_COUNT, 5
	goto_if_eq Route110_TrickHouseEntrance_EventScript_KimonoGirl_4_12
	release
	end

Route110_TrickHouseEntrance_EventScript_KimonoGirl_4_5:
	msgbox Route110_TrickHouseEntrance_EventScript_KimonoGirl_4_Text_3
	release
	end

Route110_TrickHouseEntrance_EventScript_KimonoGirl_4_9:
	msgbox Route110_TrickHouseEntrance_EventScript_KimonoGirl_4_Text_1
	release
	end

Route110_TrickHouseEntrance_EventScript_KimonoGirl_4_12:
	msgbox Route110_TrickHouseEntrance_EventScript_KimonoGirl_1_Text_5
	release
	end


Route110_TrickHouseEntrance_EventScript_TalkToMiddle::
	compare VAR_KIMONO_GIRL_COUNT, 5
	goto_if_eq Route110_TrickHouseEntrance_EventScript_TalkToMiddle_1
	msgbox Route110_TrickHouseEntrance_EventScript_TalkToMiddle_Text_1
	release
	end

Route110_TrickHouseEntrance_EventScript_TalkToMiddle_1:
	msgbox Route110_TrickHouseEntrance_EventScript_TalkToMiddle_Text_0
	release
	end


Route110_TrickHouseEntrance_EventScript_KimonoGirl_Middle::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_EEVEE, Route110_TrickHouseEntrance_EventScript_KimonoGirl_Middle_2
	goto_if_defeated TRAINER_MAY_ROUTE_103_MUDKIP, Route110_TrickHouseEntrance_EventScript_MiddleLater
	goto_if_set FLAG_RECEIVED_STRENGTH, Route110_TrickHouseEntrance_EventScript_KimonoGirl_Middle_4
	goto_if_set FLAG_HIDE_SHADY_KIMONO_GUY, Route110_TrickHouseEntrance_EventScript_KimonoGirl_Middle_5
	msgbox Route110_TrickHouseEntrance_EventScript_KimonoGirl_1_Text_7
	release
	end

Route110_TrickHouseEntrance_EventScript_KimonoGirl_Middle_2:
	msgbox Route110_TrickHouseEntrance_EventScript_KimonoGirl_1_Text_0
	release
	end

Route110_TrickHouseEntrance_EventScript_KimonoGirl_Middle_4:
	msgbox Route110_TrickHouseEntrance_EventScript_KimonoGirl_Middle_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq Route110_TrickHouseEntrance_EventScript_KimonoGirl_Middle_9
	msgbox Route110_TrickHouseEntrance_EventScript_KimonoGirl_Middle_Text_2
	trainerbattle_no_intro TRAINER_MAY_ROUTE_103_MUDKIP, Route110_TrickHouseEntrance_Text_Girl5Defeated
	msgbox Route110_TrickHouseEntrance_EventScript_KimonoGirl_Middle_Text_3
	addvar VAR_KIMONO_GIRL_COUNT, 1
	compare VAR_KIMONO_GIRL_COUNT, 5
	goto_if_eq Route110_TrickHouseEntrance_EventScript_KimonoGirl_Middle_12
	release
	end

Route110_TrickHouseEntrance_EventScript_KimonoGirl_Middle_5:
	msgbox Route110_TrickHouseEntrance_EventScript_KimonoGirl_Middle_Text_5
	release
	end

Route110_TrickHouseEntrance_EventScript_KimonoGirl_Middle_9:
	msgbox Route110_TrickHouseEntrance_EventScript_KimonoGirl_Middle_Text_1
	release
	end

Route110_TrickHouseEntrance_EventScript_KimonoGirl_Middle_12:
	msgbox Route110_TrickHouseEntrance_EventScript_KimonoGirl_Middle_Text_4
	givemon SPECIES_EEVEE, 15, ITEM_EVERSTONE
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PARTY, Route110_TrickHouseEntrance_EventScript_ReceiveEeveeParty
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PC, Route110_TrickHouseEntrance_EventScript_ReceiveEeveePC
	goto Common_EventScript_NoMoreRoomForPokemon
	end


Route110_TrickHouseEntrance_EventScript_MiddleLater::
	compare VAR_KIMONO_GIRL_COUNT, 5
	goto_if_eq Route110_TrickHouseEntrance_EventScript_MiddleLater_1
	msgbox Route110_TrickHouseEntrance_EventScript_MiddleLater_Text_1
	release
	end

Route110_TrickHouseEntrance_EventScript_MiddleLater_1:
	msgbox Route110_TrickHouseEntrance_EventScript_MiddleLater_Text_0
	setvar VAR_TEMP_1, SPECIES_EEVEE
	givemon SPECIES_EEVEE, 15, ITEM_EVERSTONE
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PARTY, Route110_TrickHouseEntrance_EventScript_ReceiveEeveeParty
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PC, Route110_TrickHouseEntrance_EventScript_ReceiveEeveePC
	goto Common_EventScript_NoMoreRoomForPokemon
	end


Route110_TrickHouseEntrance_EventScript_ReceiveEeveeParty::
	call Route110_TrickHouseEntrance_EventScript_ReceivedEeveeFanfare
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, Route110_TrickHouseEntrance_EventScript_ExplainEevee
	call Common_EventScript_GetGiftMonPartySlot
	call Common_EventScript_NameReceivedPartyMon
	goto Route110_TrickHouseEntrance_EventScript_ExplainEevee
	end


Route110_TrickHouseEntrance_EventScript_ReceiveEeveePC::
	call Route110_TrickHouseEntrance_EventScript_ReceivedEeveeFanfare
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, Route110_TrickHouseEntrance_EventScript_SendEeveeToPC
	call Common_EventScript_NameReceivedBoxMon
	goto Route110_TrickHouseEntrance_EventScript_SendEeveeToPC
	end


Route110_TrickHouseEntrance_EventScript_SendEeveeToPC::
	call Common_EventScript_TransferredToPC
	goto Route110_TrickHouseEntrance_EventScript_ExplainEevee
	end


Route110_TrickHouseEntrance_EventScript_ReceivedEeveeFanfare::
	bufferspeciesname STR_VAR_2, SPECIES_EEVEE
	playfanfare MUS_OBTAIN_ITEM
	msgbox Route110_TrickHouseEntrance_EventScript_ReceivedEeveeFanfare_Text_0
	waitmessage
	waitfanfare
	bufferspeciesname STR_VAR_1, SPECIES_EEVEE
	return


Route110_TrickHouseEntrance_EventScript_ExplainEevee::
	msgbox Route110_TrickHouseEntrance_EventScript_ExplainEevee_Text_0
	setflag FLAG_RECEIVED_EEVEE
	release
	end


Route110_TrickHouseEntrance_OnFrame_Text_0:
	.string "You really did it!\p"
	.string "You drove those thugs away!\p"
	.string "Words can't express how grateful we are\n"
	.string "to you.\p"
	.string "Here, please take this gift, it's the\n"
	.string "least I can do to thank you!$"

Route110_TrickHouseEntrance_OnFrame_Text_1:
	.string "That HM contains the move Strength,\n"
	.string "teach it to a POKéMON and they will be\l"
	.string "able to move boulders.\p"
	.string "Of course, you will need the Ecruteak\n"
	.string "City gym badge to use it.\p"
	.string "By the way, if you want to challenge us\n"
	.string "girls, we will give you a special gift for\l"
	.string "defeating us.\p"
	.string "Again, thank you for everything!$"

Route110_TrickHouseEntrance_EventScript_ShadyGuy_Text_0:
	.string "Hrm... A kid?\p"
	.string "You can watch the girls, but no talking!$"

Route110_TrickHouseEntrance_EventScript_BonsaiSwitch_Text_0:
	.string "There's a secret switch beneath this\n"
	.string "bonsai tree.\p"
	.string "Press it?$"

Route110_TrickHouseEntrance_EventScript_BonsaiSwitch_Text_1:
	.string "Hey! What do you think you're doing!?\p"
	.string "Alright, I'm going to have to force you\n"
	.string "to leave!$"

Route110_TrickHouseEntrance_EventScript_BonsaiSwitch_Text_2:
	.string "You're a lot tougher than you look.\p"
	.string "I'd better warn the others...$"

Route110_TrickHouseEntrance_EventScript_KimonoGirl_1_Text_0:
	.string "Welcome, please enjoy your stay...\p"
	.string "Banzai!$"

Route110_TrickHouseEntrance_EventScript_KimonoGirl_1_Text_1:
	.string "Thanks for running off those thugs, I\n"
	.string "never thought we would get rid of them.\p"
	.string "Oh, would you like to have a battle?$"

Route110_TrickHouseEntrance_EventScript_KimonoGirl_1_Text_2:
	.string "Ok, another time then.$"

Route110_TrickHouseEntrance_EventScript_KimonoGirl_1_Text_3:
	.string "Banzai! Let's go!$"

Route110_TrickHouseEntrance_EventScript_KimonoGirl_1_Text_4:
	.string "If you manage to defeat all of us, we\n"
	.string "will give you a special reward...$"

Route110_TrickHouseEntrance_EventScript_KimonoGirl_1_Text_5:
	.string "Oh! So you have!\p"
	.string "In that case, talk to the girl dancing\n"
	.string "at the center.$"

Route110_TrickHouseEntrance_EventScript_KimonoGirl_1_Text_6:
	.string "Please, you have to run off those\n"
	.string "thugs!$"

Route110_TrickHouseEntrance_EventScript_KimonoGirl_1_Text_7:
	.string "Welcome, please enjoy your stay...\p"
	.string "Bonsai!$"

Route110_TrickHouseEntrance_EventScript_KimonoGirl_2_Text_0:
	.string "We're so grateful for running off those\n"
	.string "thugs!\p"
	.string "Oh, would you like to have a battle?$"

Route110_TrickHouseEntrance_EventScript_KimonoGirl_2_Text_1:
	.string "Very well then.$"

Route110_TrickHouseEntrance_EventScript_KimonoGirl_2_Text_2:
	.string "Alright! Let's go!$"

Route110_TrickHouseEntrance_EventScript_KimonoGirl_2_Text_3:
	.string "Thank you for getting rid of that man...\p"
	.string "There are more downstairs...$"

Route110_TrickHouseEntrance_EventScript_KimonoGirl_3_Text_0:
	.string "I wish I were stronger, then I could\n"
	.string "have ran those thugs off myself!\p"
	.string "Oh, would you like to have a battle?$"

Route110_TrickHouseEntrance_EventScript_KimonoGirl_3_Text_1:
	.string "Alright, maybe later.$"

Route110_TrickHouseEntrance_EventScript_KimonoGirl_3_Text_2:
	.string "Yes! Let's go!$"

Route110_TrickHouseEntrance_EventScript_KimonoGirl_3_Text_3:
	.string "You really showed that thug a thing or\n"
	.string "two!\p"
	.string "There are more downstairs, please help\n"
	.string "us!$"

Route110_TrickHouseEntrance_EventScript_KimonoGirl_4_Text_0:
	.string "You must be strong if you managed to\n"
	.string "run those thugs off, they've been\l"
	.string "tormenting us for years!\p"
	.string "Oh, would you like to have a battle?$"

Route110_TrickHouseEntrance_EventScript_KimonoGirl_4_Text_1:
	.string "Please, take as much time as you need\n"
	.string "to prepare.$"

Route110_TrickHouseEntrance_EventScript_KimonoGirl_4_Text_2:
	.string "How wonderful! Let's go!$"

Route110_TrickHouseEntrance_EventScript_KimonoGirl_4_Text_3:
	.string "Please help us, there are a lot more\n"
	.string "thugs downstairs!$"

Route110_TrickHouseEntrance_EventScript_TalkToMiddle_Text_0:
	.string "Please talk to the girl dancing at the\n"
	.string "center to receive a special reward!$"

Route110_TrickHouseEntrance_EventScript_TalkToMiddle_Text_1:
	.string "That was a good battle.\p"
	.string "If you manage to defeat all of us, we\n"
	.string "will give you a special reward...$"

Route110_TrickHouseEntrance_EventScript_KimonoGirl_Middle_Text_0:
	.string "I can't thank you enough for running\n"
	.string "off those thugs.\p"
	.string "Oh, would you like to have a battle?$"

Route110_TrickHouseEntrance_EventScript_KimonoGirl_Middle_Text_1:
	.string "You don't have to if you don't want to.$"

Route110_TrickHouseEntrance_EventScript_KimonoGirl_Middle_Text_2:
	.string "That's the spirit! Let's go!$"

Route110_TrickHouseEntrance_EventScript_KimonoGirl_Middle_Text_3:
	.string "If you manage to defeat all of us, I will\n"
	.string "give you a special reward...$"

Route110_TrickHouseEntrance_EventScript_KimonoGirl_Middle_Text_4:
	.string "Oh! So you have!\p"
	.string "In that case, I would like to present\n"
	.string "you with this special POKéMON.$"

Route110_TrickHouseEntrance_EventScript_KimonoGirl_Middle_Text_5:
	.string "Please, you must help us!\p"
	.string "These thugs have taken over our Dance\n"
	.string "Theater, and won't let us leave!$"

Route110_TrickHouseEntrance_EventScript_MiddleLater_Text_0:
	.string "Since you managed to defeat all of us, I\n"
	.string "would like to present you with a\l"
	.string "special reward!\p"
	.string "Please, take this POKéMON.$"

Route110_TrickHouseEntrance_EventScript_MiddleLater_Text_1:
	.string "That was a good battle.\p"
	.string "If you manage to defeat all of us, I will\n"
	.string "give you a special reward...$"

Route110_TrickHouseEntrance_EventScript_ReceivedEeveeFanfare_Text_0:
	.string "{PLAYER} received the Eevee!$"

Route110_TrickHouseEntrance_EventScript_ExplainEevee_Text_0:
	.string "I wish you the best of luck in all of\n"
	.string "your endeavors!$"

Route110_TrickHouseEntrance_Text_GruntDefeat::
	.string "Crap, you must be that kid that escaped\n"
	.string "from Goldenrod...$"

Route110_TrickHouseEntrance_Text_Girl1Defeated::
	.string "You're a very talented TRAINER.$"

Route110_TrickHouseEntrance_Text_Girl2Defeated::
	.string "I see how you managed to defeat those\n"
	.string "thugs.$"

Route110_TrickHouseEntrance_Text_Girl3Defeated::
	.string "Wow! That's all I can say!$"

Route110_TrickHouseEntrance_Text_Girl4Defeated::
	.string "You really are strong!$"

Route110_TrickHouseEntrance_Text_Girl5Defeated::
	.string "You are a simply marvelous TRAINER!$"
