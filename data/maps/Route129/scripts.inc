Route129_MapScripts::
	.byte 0

Route129_EventScript_Chase::
	trainerbattle_single TRAINER_CHASE, Route129_Text_ChaseIntro, Route129_Text_ChaseDefeat
	msgbox Route129_Text_ChasePostBattle, MSGBOX_AUTOCLOSE
	end

Route129_EventScript_Allison::
	trainerbattle_single TRAINER_ALLISON, Route129_Text_AllisonIntro, Route129_Text_AllisonDefeat
	msgbox Route129_Text_AllisonPostBattle, MSGBOX_AUTOCLOSE
	end

Route129_EventScript_Reed::
	trainerbattle_single TRAINER_REED, Route129_Text_ReedIntro, Route129_Text_ReedDefeat
	msgbox Route129_Text_ReedPostBattle, MSGBOX_AUTOCLOSE
	end

Route129_EventScript_Tisha::
	trainerbattle_single TRAINER_TISHA, Route129_Text_TishaIntro, Route129_Text_TishaDefeat
	msgbox Route129_Text_TishaPostBattle, MSGBOX_AUTOCLOSE
	end

Route129_EventScript_Clarence::
	trainerbattle_single TRAINER_CLARENCE, Route129_Text_ClarenceIntro, Route129_Text_ClarenceDefeat
	msgbox Route129_Text_ClarencePostBattle, MSGBOX_AUTOCLOSE
	end

Route129_EventScript_Sign::
	msgbox Route129_EventScript_Sign_Text_0, MSGBOX_SIGN
	end


Route129_EventScript_ItemMaxRevive::
	finditem ITEM_MAX_REVIVE
	end


Route129_EventScript_Shane::
	lock
	msgbox Route129_EventScript_Shane_Text_0
	waitmessage
	playse SE_PIN
	applymovement 6, Route129_Movement_Exclamation
	waitmovement 0
	waitse
	delay 60
	faceplayer
	msgbox Route129_EventScript_Shane_Text_1
	waitmessage
	checkitem ITEM_LIFT_KEY
	compare VAR_RESULT, TRUE
	goto_if_eq Route129_EventScript_Shane_1
	msgbox Route129_EventScript_Shane_Text_3
	waitmessage
	closemessage
	applymovement 6, Route129_Movement_FaceUp
	waitmovement 0
	release
	end

Route129_EventScript_Shane_1:
	playse SE_PIN
	applymovement 6, Route129_Movement_Exclamation
	waitmovement 0
	waitse
	delay 60
	msgbox Route129_EventScript_Shane_Text_2
	waitmessage
	closemessage
	applymovement 6, Route129_Movement_ShaneEnterGate
	waitmovement 0
	playse SE_DOOR
	removeobject 6
	waitse
	setflag FLAG_HIDE_SHANE_ROUTE_43
	delay 30
	specialvar VAR_RESULT, GetPlayerFacingDirection
	switch VAR_RESULT
	case DIR_EAST, Route129_EventScript_Shane_6
	case DIR_NORTH, Route129_EventScript_Shane_7
	case DIR_WEST, Route129_EventScript_Shane_8
Route129_EventScript_Shane_4:
	addvar VAR_ECRUTEAK_STATE, 1
	warpdoor MAP_NAVEL_ROCK_DOWN11, 0
	waitstate
	release
	end

Route129_EventScript_Shane_6:
	call Route129_EventScript_FacingEast
	goto Route129_EventScript_Shane_4

Route129_EventScript_Shane_7:
	call Route129_EventScript_FacingNorth
	goto Route129_EventScript_Shane_4

Route129_EventScript_Shane_8:
	call Route129_EventScript_FacingWest
	goto Route129_EventScript_Shane_4


Route129_EventScript_FacingEast::
	applymovement OBJ_EVENT_ID_PLAYER, Route129_Movement_EnterFromLeft
	waitmovement 0
	return


Route129_EventScript_FacingNorth::
	applymovement OBJ_EVENT_ID_PLAYER, Route129_Movement_EnterFromBottom
	waitmovement 0
	return


Route129_EventScript_FacingWest::
	applymovement OBJ_EVENT_ID_PLAYER, Route129_Movement_EnterFromRight
	waitmovement 0
	return


Route129_Movement_Exclamation:
	emote_exclamation_mark
	step_end

Route129_Movement_FaceUp:
	face_up
	step_end

Route129_Movement_ShaneEnterGate:
	walk_up
	step_end

Route129_Movement_EnterFromLeft:
	walk_right
	walk_up
	step_end

Route129_Movement_EnterFromBottom:
	walk_up
	walk_up
	step_end

Route129_Movement_EnterFromRight:
	walk_left
	walk_up
	step_end

Route129_EventScript_Sign_Text_0:
	.string "ROUTE 43\n"
	.string "{UP_ARROW} North to RAGE RESORT$"

Route129_EventScript_Shane_Text_0:
	.string "SHANE: Man, I can't believe these jerks\n"
	.string "won't let me through...$"

Route129_EventScript_Shane_Text_1:
	.string "Hey!\p"
	.string "Don't sneak up on me like that!\p"
	.string "I wasn't expecting to see you here,\n"
	.string "nerd.\p"
	.string "Look, I've got bigger issues than\n"
	.string "dealing with you right now.\p"
	.string "I saw that Team Chicken jerk, DAMON,\n"
	.string "and followed him here.\p"
	.string "He went through this gatehouse, but\n"
	.string "the guards won't let me through\l"
	.string "without some kind of Resort Pass.$"

Route129_EventScript_Shane_Text_2:
	.string "What?\p"
	.string "How did a twerp like you get a Resort\n"
	.string "Pass?\p"
	.string "Well, nevermind that...\p"
	.string "...\p"
	.string "You say it lets you and one guest into\n"
	.string "the Rage Resort?\p"
	.string "That works out perfectly then!\p"
	.string "Come on, I'm going to make these Team\n"
	.string "Chicken losers regret ever messing\l"
	.string "with me!$"

Route129_EventScript_Shane_Text_3:
	.string "Hmm... Maybe I can find another way in...$"
