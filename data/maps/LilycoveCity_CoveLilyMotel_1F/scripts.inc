LilycoveCity_CoveLilyMotel_1F_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, LilycoveCity_CoveLilyMotel_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

LilycoveCity_CoveLilyMotel_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	goto_if_set FLAG_DARKOAL_SURGE_PUZZLE_OPEN, LilycoveCity_CoveLilyMotel_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

LilycoveCity_CoveLilyMotel_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
	setobjectxyperm 1, 3, 2
	end


LilycoveCity_CoveLilyMotel_1F_EventScript_SurgePuzzleMan::
	lock
	faceplayer
	goto_if_set FLAG_DARKOAL_SURGE_PUZZLE_OPEN, LilycoveCity_CoveLilyMotel_1F_EventScript_SurgePuzzleMan_1
	msgbox LilycoveCity_CoveLilyMotel_1F_EventScript_SurgePuzzleMan_Text_2
	waitmessage
	showmoneybox 0, 0
	msgbox LilycoveCity_CoveLilyMotel_1F_EventScript_SurgePuzzleMan_Text_3, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq LilycoveCity_CoveLilyMotel_1F_EventScript_SurgePuzzleMan_7
	checkmoney 25000
	compare VAR_RESULT, NO
	goto_if_eq LilycoveCity_CoveLilyMotel_1F_EventScript_SurgePuzzleMan_10
	removemoney 25000
	updatemoneybox
	playse SE_SHOP
	waitse
	msgbox LilycoveCity_CoveLilyMotel_1F_EventScript_SurgePuzzleMan_Text_6
	waitmessage
	hidemoneybox
	msgbox LilycoveCity_CoveLilyMotel_1F_EventScript_SurgePuzzleMan_Text_7
	waitmessage
	closemessage
	specialvar VAR_RESULT, GetPlayerFacingDirection
	compare VAR_RESULT, DIR_WEST
	goto_if_eq LilycoveCity_CoveLilyMotel_1F_EventScript_SurgePuzzleMan_14
LilycoveCity_CoveLilyMotel_1F_EventScript_SurgePuzzleMan_13:
	applymovement 1, LilycoveCity_CoveLilyMotel_1F_Movement_SurgeMove
	waitmovement 0
	setflag FLAG_DARKOAL_SURGE_PUZZLE_OPEN
	clearflag FLAG_FOUND_FIRST_DARKOAL_PUZZLE_SWITCH
	clearflag FLAG_FOUND_SECOND_DARKOAL_PUZZLE_SWITCH
	release
	end

LilycoveCity_CoveLilyMotel_1F_EventScript_SurgePuzzleMan_1:
	goto_if_set FLAG_FOUND_SECOND_DARKOAL_PUZZLE_SWITCH, LilycoveCity_CoveLilyMotel_1F_EventScript_SurgePuzzleMan_4
	msgbox LilycoveCity_CoveLilyMotel_1F_EventScript_SurgePuzzleMan_Text_1
	release
	end

LilycoveCity_CoveLilyMotel_1F_EventScript_SurgePuzzleMan_4:
	msgbox LilycoveCity_CoveLilyMotel_1F_EventScript_SurgePuzzleMan_Text_0
	release
	end

LilycoveCity_CoveLilyMotel_1F_EventScript_SurgePuzzleMan_7:
	msgbox LilycoveCity_CoveLilyMotel_1F_EventScript_SurgePuzzleMan_Text_4
	hidemoneybox
	release
	end

LilycoveCity_CoveLilyMotel_1F_EventScript_SurgePuzzleMan_10:
	msgbox LilycoveCity_CoveLilyMotel_1F_EventScript_SurgePuzzleMan_Text_5
	hidemoneybox
	release
	end

LilycoveCity_CoveLilyMotel_1F_EventScript_SurgePuzzleMan_14:
	applymovement OBJ_EVENT_ID_PLAYER, LilycoveCity_CoveLilyMotel_1F_Movement_StepDownFaceUp
	waitmovement 0
	goto LilycoveCity_CoveLilyMotel_1F_EventScript_SurgePuzzleMan_13


LilycoveCity_CoveLilyMotel_1F_Movement_StepDownFaceUp:
	walk_down
	walk_left
	walk_in_place_up
	step_end

LilycoveCity_CoveLilyMotel_1F_Movement_SurgeMove:
	walk_right
	walk_in_place_down
	step_end

LilycoveCity_CoveLilyMotel_1F_EventScript_LeftRightGirl::
	lock
	faceplayer
	msgbox LilycoveCity_CoveLilyMotel_1F_EventScript_LeftRightGirl_Text_0
	waitmessage
	showmoneybox 0, 0
	msgbox LilycoveCity_CoveLilyMotel_1F_EventScript_LeftRightGirl_Text_1, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq LilycoveCity_CoveLilyMotel_1F_EventScript_LeftRightGirl_1
	checkmoney 1000
	compare VAR_RESULT, NO
	goto_if_eq LilycoveCity_CoveLilyMotel_1F_EventScript_LeftRightGirl_4
	removemoney 1000
	updatemoneybox
	playse SE_SHOP
	waitse
	msgbox LilycoveCity_CoveLilyMotel_1F_EventScript_LeftRightGirl_Text_4
	goto LilycoveCity_CoveLilyMotel_1F_EventScript_GuessHand
	end

LilycoveCity_CoveLilyMotel_1F_EventScript_LeftRightGirl_1:
	msgbox LilycoveCity_CoveLilyMotel_1F_EventScript_LeftRightGirl_Text_2
	hidemoneybox
	release
	end

LilycoveCity_CoveLilyMotel_1F_EventScript_LeftRightGirl_4:
	msgbox LilycoveCity_CoveLilyMotel_1F_EventScript_LeftRightGirl_Text_3
	hidemoneybox
	release
	end


LilycoveCity_CoveLilyMotel_1F_EventScript_GuessHand::
message LilycoveCity_CoveLilyMotel_1F_Text_LeftRight
	waitmessage
	multichoice 16, 0, MULTI_RIGHTLEFT, TRUE
	switch VAR_RESULT
	case 0, LilycoveCity_CoveLilyMotel_1F_EventScript_GuessRight
	case 1, LilycoveCity_CoveLilyMotel_1F_EventScript_GuessLeft
	end

LilycoveCity_CoveLilyMotel_1F_EventScript_GuessRight::
	msgbox LilycoveCity_CoveLilyMotel_1F_EventScript_GuessRight_Text_0
	waitmessage
	random 2
	switch VAR_RESULT
	case 0, LilycoveCity_CoveLilyMotel_1F_EventScript_GuessRight_3
	case 1, LilycoveCity_CoveLilyMotel_1F_EventScript_GuessRight_4
LilycoveCity_CoveLilyMotel_1F_EventScript_GuessRight_1:
	end

LilycoveCity_CoveLilyMotel_1F_EventScript_GuessRight_3:
	goto LilycoveCity_CoveLilyMotel_1F_EventScript_GuessCorrectHand
	goto LilycoveCity_CoveLilyMotel_1F_EventScript_GuessRight_1

LilycoveCity_CoveLilyMotel_1F_EventScript_GuessRight_4:
	goto LilycoveCity_CoveLilyMotel_1F_EventScript_GuessWrongHand
	goto LilycoveCity_CoveLilyMotel_1F_EventScript_GuessRight_1


LilycoveCity_CoveLilyMotel_1F_EventScript_GuessLeft::
	msgbox LilycoveCity_CoveLilyMotel_1F_EventScript_GuessLeft_Text_0
	waitmessage
	random 2
	switch VAR_RESULT
	case 0, LilycoveCity_CoveLilyMotel_1F_EventScript_GuessLeft_3
	case 1, LilycoveCity_CoveLilyMotel_1F_EventScript_GuessLeft_4
LilycoveCity_CoveLilyMotel_1F_EventScript_GuessLeft_1:
	end

LilycoveCity_CoveLilyMotel_1F_EventScript_GuessLeft_3:
	goto LilycoveCity_CoveLilyMotel_1F_EventScript_GuessCorrectHand
	goto LilycoveCity_CoveLilyMotel_1F_EventScript_GuessLeft_1

LilycoveCity_CoveLilyMotel_1F_EventScript_GuessLeft_4:
	goto LilycoveCity_CoveLilyMotel_1F_EventScript_GuessWrongHand
	goto LilycoveCity_CoveLilyMotel_1F_EventScript_GuessLeft_1


LilycoveCity_CoveLilyMotel_1F_EventScript_GuessCorrectHand::
	waitse
	playse SE_SUCCESS
	waitse
	msgbox LilycoveCity_CoveLilyMotel_1F_EventScript_GuessCorrectHand_Text_0
	waitmessage
	addmoney 1000
	updatemoneybox
	playse SE_SHOP
	waitse
	msgbox LilycoveCity_CoveLilyMotel_1F_EventScript_GuessCorrectHand_Text_1, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq LilycoveCity_CoveLilyMotel_1F_EventScript_GuessCorrectHand_1
	checkmoney 1000
	compare VAR_RESULT, NO
	goto_if_eq LilycoveCity_CoveLilyMotel_1F_EventScript_GuessCorrectHand_4
	removemoney 1000
	updatemoneybox
	playse SE_SHOP
	waitse
	msgbox LilycoveCity_CoveLilyMotel_1F_EventScript_GuessCorrectHand_Text_2
	goto LilycoveCity_CoveLilyMotel_1F_EventScript_GuessHand
	end

LilycoveCity_CoveLilyMotel_1F_EventScript_GuessCorrectHand_1:
	msgbox LilycoveCity_CoveLilyMotel_1F_EventScript_LeftRightGirl_Text_2
	hidemoneybox
	release
	end

LilycoveCity_CoveLilyMotel_1F_EventScript_GuessCorrectHand_4:
	msgbox LilycoveCity_CoveLilyMotel_1F_EventScript_LeftRightGirl_Text_3
	hidemoneybox
	release
	end


LilycoveCity_CoveLilyMotel_1F_EventScript_GuessWrongHand::
	waitse
	playse SE_FAILURE
	waitse
	msgbox LilycoveCity_CoveLilyMotel_1F_EventScript_GuessWrongHand_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq LilycoveCity_CoveLilyMotel_1F_EventScript_GuessWrongHand_1
	checkmoney 1000
	compare VAR_RESULT, NO
	goto_if_eq LilycoveCity_CoveLilyMotel_1F_EventScript_GuessWrongHand_4
	removemoney 1000
	updatemoneybox
	playse SE_SHOP
	waitse
	msgbox LilycoveCity_CoveLilyMotel_1F_EventScript_GuessCorrectHand_Text_2
	goto LilycoveCity_CoveLilyMotel_1F_EventScript_GuessHand
	end

LilycoveCity_CoveLilyMotel_1F_EventScript_GuessWrongHand_1:
	msgbox LilycoveCity_CoveLilyMotel_1F_EventScript_LeftRightGirl_Text_2
	hidemoneybox
	release
	end

LilycoveCity_CoveLilyMotel_1F_EventScript_GuessWrongHand_4:
	msgbox LilycoveCity_CoveLilyMotel_1F_EventScript_LeftRightGirl_Text_3
	hidemoneybox
	release
	end


LilycoveCity_CoveLilyMotel_1F_EventScript_SurgePuzzleMan_Text_0:
	.string "Hey! You found the Master Ball!\p"
	.string "Come back tomorrow, and you can try for\n"
	.string "another one.$"

LilycoveCity_CoveLilyMotel_1F_EventScript_SurgePuzzleMan_Text_1:
	.string "Go on, you have the rest of the day to\n"
	.string "try and solve the puzzle downstairs.$"

LilycoveCity_CoveLilyMotel_1F_EventScript_SurgePuzzleMan_Text_2:
	.string "Hey there, kid.\p"
	.string "How would you like to win a Master Ball?\p"
	.string "I've set up some pots downstairs to\n"
	.string "recreate Lt. Surge's gym puzzle from\l"
	.string "Kanto.\p"
	.string "If you can pick the second one\n"
	.string "correctly, you will win a Master Ball!$"

LilycoveCity_CoveLilyMotel_1F_EventScript_SurgePuzzleMan_Text_3:
	.string "For just ¥25,000, I'll give you the rest\n"
	.string "of the day to try and solve the puzzle.\p"
	.string "You can play every day, but you'll have\n"
	.string "to pay me again.\p"
	.string "So how about it, do you want to play?$"

LilycoveCity_CoveLilyMotel_1F_EventScript_SurgePuzzleMan_Text_4:
	.string "Oh, that's too bad.\p"
	.string "Come back and see me if you change your\n"
	.string "mind.$"

LilycoveCity_CoveLilyMotel_1F_EventScript_SurgePuzzleMan_Text_5:
	.string "Hey now, you don't have enough money!\p"
	.string "Come back when you have at least\n"
	.string "¥25,000, kid.$"

LilycoveCity_CoveLilyMotel_1F_EventScript_SurgePuzzleMan_Text_6:
	.string "Great!$"

LilycoveCity_CoveLilyMotel_1F_EventScript_SurgePuzzleMan_Text_7:
	.string "Go on down, and good luck!$"

LilycoveCity_CoveLilyMotel_1F_EventScript_LeftRightGirl_Text_0:
	.string "Psychic powers are nice, but so is\n"
	.string "having luck on your side.$"

LilycoveCity_CoveLilyMotel_1F_EventScript_LeftRightGirl_Text_1:
	.string "I'm holding a coin in one of my hands.\p"
	.string "It's ¥1,000 to play, but if you guess\n"
	.string "correctly, I'll give you ¥1,000, and you\l"
	.string "can guess again for free!\p"
	.string "So, how about it?\n"
	.string "Want to play?$"

LilycoveCity_CoveLilyMotel_1F_EventScript_LeftRightGirl_Text_2:
	.string "Not feeling very lucky today, huh?$"

LilycoveCity_CoveLilyMotel_1F_EventScript_LeftRightGirl_Text_3:
	.string "Hmm, it doesn't look like you have\n"
	.string "¥1,000.$"

LilycoveCity_CoveLilyMotel_1F_EventScript_LeftRightGirl_Text_4:
	.string "Wonderful!\p"
	.string "Let's get started.$"

LilycoveCity_CoveLilyMotel_1F_EventScript_GuessRight_Text_0:
	.string "The right hand, you say?\p"
	.string "...$"

LilycoveCity_CoveLilyMotel_1F_EventScript_GuessLeft_Text_0:
	.string "The left hand, you say?\p"
	.string "...$"

LilycoveCity_CoveLilyMotel_1F_EventScript_GuessCorrectHand_Text_0:
	.string "That's correct!\p"
	.string "Hey, maybe you do have psychic powers!$"

LilycoveCity_CoveLilyMotel_1F_EventScript_GuessCorrectHand_Text_1:
	.string "Now then, would you like to play again\n"
	.string "for another ¥1,000?$"

LilycoveCity_CoveLilyMotel_1F_EventScript_GuessCorrectHand_Text_2:
	.string "Wonderful!\p"
	.string "Let's keep going.$"

LilycoveCity_CoveLilyMotel_1F_EventScript_GuessWrongHand_Text_0:
	.string "Oh, I'm sorry.\p"
	.string "It looks like lady luck wasn't on your\n"
	.string "side this time.\p"
	.string "Would you like to try again for another\n"
	.string "¥1,000?$"

LilycoveCity_CoveLilyMotel_1F_Text_LeftRight::
	.string "Now, is the coin in my left or right\n"
	.string "hand?$"
