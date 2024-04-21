Route110_TrickHouseEnd_MapScripts::
	.byte 0


Route110_TrickHouseEnd_EventScript_Lee::
	lock
	faceplayer
	goto_if_set FLAG_DEFEATED_FORTREE_GYM, Route110_TrickHouseEnd_EventScript_Lee_1
	goto_if_set FLAG_DEFEATED_CIANWOOD_GYM_TRAINERS, Route110_TrickHouseEnd_EventScript_Lee_2
	msgbox Route110_TrickHouseEnd_EventScript_Lee_Text_5
	waitmessage
	closemessage
	specialvar VAR_RESULT, GetPlayerFacingDirection
	switch VAR_RESULT
	case DIR_EAST, Route110_TrickHouseEnd_EventScript_Lee_8
	case DIR_NORTH, Route110_TrickHouseEnd_EventScript_Lee_9
	case DIR_WEST, Route110_TrickHouseEnd_EventScript_Lee_10
	case DIR_SOUTH, Route110_TrickHouseEnd_EventScript_Lee_11
Route110_TrickHouseEnd_EventScript_Lee_6:
	applymovement 1, Route110_TrickHouseEnd_Movement_StepDown
	waitmovement 0
	msgbox Route110_TrickHouseEnd_EventScript_Lee_Text_6
	waitmessage
	closemessage
	applymovement 2, Route110_TrickHouseEnd_Movement_StepUp
	applymovement 3, Route110_TrickHouseEnd_Movement_StepUp
	applymovement 4, Route110_TrickHouseEnd_Movement_StepUp
	applymovement 5, Route110_TrickHouseEnd_Movement_StepUp
	applymovement 6, Route110_TrickHouseEnd_Movement_StepUp
	applymovement 7, Route110_TrickHouseEnd_Movement_StepUp
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Route110_TrickHouseEnd_Movement_StepUp
	waitmovement 0
	msgbox Route110_TrickHouseEnd_EventScript_Lee_Text_7
	waitmessage
	closemessage
	applymovement 1, Route110_TrickHouseEnd_Movement_StepDown
	waitmovement 0
	msgbox Route110_TrickHouseEnd_EventScript_Lee_Text_8
	waitmessage
	closemessage
	applymovement 2, Route110_TrickHouseEnd_Movement_StepLeft
	applymovement 3, Route110_TrickHouseEnd_Movement_StepLeft
	applymovement 4, Route110_TrickHouseEnd_Movement_StepLeft
	applymovement 5, Route110_TrickHouseEnd_Movement_StepLeft
	applymovement 6, Route110_TrickHouseEnd_Movement_StepLeft
	applymovement 7, Route110_TrickHouseEnd_Movement_StepLeft
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Route110_TrickHouseEnd_Movement_StepLeft
	waitmovement 0
	msgbox Route110_TrickHouseEnd_EventScript_Lee_Text_9
	waitmessage
	closemessage
	applymovement 1, Route110_TrickHouseEnd_Movement_StepDown
	waitmovement 0
	msgbox Route110_TrickHouseEnd_EventScript_Lee_Text_10
	waitmessage
	closemessage
	applymovement 2, Route110_TrickHouseEnd_Movement_StepRight
	applymovement 3, Route110_TrickHouseEnd_Movement_StepRight
	applymovement 4, Route110_TrickHouseEnd_Movement_StepRight
	applymovement 5, Route110_TrickHouseEnd_Movement_StepRight
	applymovement 6, Route110_TrickHouseEnd_Movement_StepRight
	applymovement 7, Route110_TrickHouseEnd_Movement_StepRight
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Route110_TrickHouseEnd_Movement_StepRight
	waitmovement 0
	msgbox Route110_TrickHouseEnd_EventScript_Lee_Text_9
	waitmessage
	closemessage
	applymovement 1, Route110_TrickHouseEnd_Movement_StepDown
	waitmovement 0
	msgbox Route110_TrickHouseEnd_EventScript_Lee_Text_11
	waitmessage
	closemessage
	applymovement 2, Route110_TrickHouseEnd_Movement_StepUp
	applymovement 3, Route110_TrickHouseEnd_Movement_StepUp
	applymovement 4, Route110_TrickHouseEnd_Movement_StepUp
	applymovement 5, Route110_TrickHouseEnd_Movement_StepUp
	applymovement 6, Route110_TrickHouseEnd_Movement_StepUp
	applymovement 7, Route110_TrickHouseEnd_Movement_StepUp
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Route110_TrickHouseEnd_Movement_StepUp
	waitmovement 0
	msgbox Route110_TrickHouseEnd_EventScript_Lee_Text_9
	waitmessage
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, Route110_TrickHouseEnd_Movement_LookAround
	waitmovement 0
	msgbox Route110_TrickHouseEnd_EventScript_Lee_Text_12
	waitmessage
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, Route110_TrickHouseEnd_Movement_WalkToLee
	waitmovement 0
	applymovement 1, Route110_TrickHouseEnd_Movement_FaceLeft
	waitmovement 0
	msgbox Route110_TrickHouseEnd_EventScript_Lee_Text_13
	waitmessage
	closemessage
	applymovement 1, Route110_TrickHouseEnd_Movement_LeeWalkBack
	waitmovement 0
	msgbox Route110_TrickHouseEnd_EventScript_Lee_Text_14
	waitmessage
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, Route110_TrickHouseEnd_Movement_PlayerToMiddle
	waitmovement 0
	delay 30
	applymovement 3, Route110_TrickHouseEnd_Movement_FirstToPlayer
	waitmovement 0
	msgbox Route110_TrickHouseEnd_EventScript_Lee_Text_15
	waitmessage
	closemessage
	trainerbattle_no_intro TRAINER_JARED, Route110_TrickHouseEnd_Text_JaredDefeat
	applymovement 3, Route110_TrickHouseEnd_Movement_FirstToStance
	waitmovement 0
	applymovement 6, Route110_TrickHouseEnd_Movement_FirstToStance
	waitmovement 0
	msgbox Route110_TrickHouseEnd_EventScript_Lee_Text_16
	waitmessage
	closemessage
	trainerbattle_no_intro TRAINER_EDWARDO, Route110_TrickHouseEnd_Text_EdwardoDefeat
	applymovement 6, Route110_TrickHouseEnd_Movement_FirstToPlayer
	waitmovement 0
	applymovement 4, Route110_TrickHouseEnd_Movement_ThirdToPlayer
	waitmovement 0
	msgbox Route110_TrickHouseEnd_EventScript_Lee_Text_17
	waitmessage
	closemessage
	trainerbattle_no_intro TRAINER_FLINT, Route110_TrickHouseEnd_Text_FlintDefeat
	applymovement 4, Route110_TrickHouseEnd_Movement_ThirdToStance
	waitmovement 0
	applymovement 5, Route110_TrickHouseEnd_Movement_FourthToPlayer
	waitmovement 0
	msgbox Route110_TrickHouseEnd_EventScript_Lee_Text_18
	waitmessage
	closemessage
	trainerbattle_no_intro TRAINER_ASHLEY, Route110_TrickHouseEnd_Text_AshleyDefeat
	applymovement 5, Route110_TrickHouseEnd_Movement_FourthToStance
	waitmovement 0
	applymovement 2, Route110_TrickHouseEnd_Movement_FifthToPlayer
	waitmovement 0
	msgbox Route110_TrickHouseEnd_EventScript_Lee_Text_19
	waitmessage
	closemessage
	trainerbattle_no_intro TRAINER_HUMBERTO, Route110_TrickHouseEnd_Text_HumbertoDefeat
	applymovement 2, Route110_TrickHouseEnd_Movement_FifthToStance
	waitmovement 0
	applymovement 7, Route110_TrickHouseEnd_Movement_SixthToPlayer
	waitmovement 0
	msgbox Route110_TrickHouseEnd_EventScript_Lee_Text_20
	waitmessage
	closemessage
	trainerbattle_no_intro TRAINER_DARIUS, Route110_TrickHouseEnd_Text_DariusDefeat
	applymovement 7, Route110_TrickHouseEnd_Movement_SixthToStance
	waitmovement 0
	applymovement 1, Route110_TrickHouseEnd_Movement_LeeBacktoOriginal
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Route110_TrickHouseEnd_Movement_FaceUp
	waitmovement 0
	msgbox Route110_TrickHouseEnd_EventScript_Lee_Text_21
	setflag FLAG_DEFEATED_CIANWOOD_GYM_TRAINERS
	release
	end

Route110_TrickHouseEnd_EventScript_Lee_1:
	msgbox Route110_TrickHouseEnd_EventScript_Lee_Text_0
	release
	end

Route110_TrickHouseEnd_EventScript_Lee_2:
	msgbox Route110_TrickHouseEnd_EventScript_Lee_Text_1
	trainerbattle_no_intro TRAINER_WINONA_1, Route110_TrickHouseEnd_Text_LeeDefeat
	message Route110_TrickHouseEnd_EventScript_Lee_Text_2
	waitmessage
	call Common_EventScript_PlayGymBadgeFanfare
	msgbox Route110_TrickHouseEnd_EventScript_Lee_Text_3
	setflag FLAG_DEFEATED_FORTREE_GYM
	setflag FLAG_BADGE06_GET
	addvar VAR_ECRUTEAK_STATE, 1
	giveitem ITEM_TM31
	msgbox Route110_TrickHouseEnd_EventScript_Lee_Text_4
	release
	end

Route110_TrickHouseEnd_EventScript_Lee_8:
	call Route110_TrickHouseEnd_EventScript_FacingEast
	goto Route110_TrickHouseEnd_EventScript_Lee_6

Route110_TrickHouseEnd_EventScript_Lee_9:
	call Route110_TrickHouseEnd_EventScript_FacingNorth
	goto Route110_TrickHouseEnd_EventScript_Lee_6

Route110_TrickHouseEnd_EventScript_Lee_10:
	call Route110_TrickHouseEnd_EventScript_FacingWest
	goto Route110_TrickHouseEnd_EventScript_Lee_6

Route110_TrickHouseEnd_EventScript_Lee_11:
	call Route110_TrickHouseEnd_EventScript_FacingSouth
	goto Route110_TrickHouseEnd_EventScript_Lee_6


Route110_TrickHouseEnd_EventScript_FacingEast::
	applymovement OBJ_EVENT_ID_PLAYER, Route110_TrickHouseEnd_Movement_LineUpFromLeft
	waitmovement 0
	return


Route110_TrickHouseEnd_EventScript_FacingNorth::
	applymovement OBJ_EVENT_ID_PLAYER, Route110_TrickHouseEnd_Movement_LineUpFromBottom
	waitmovement 0
	return


Route110_TrickHouseEnd_EventScript_FacingWest::
	applymovement OBJ_EVENT_ID_PLAYER, Route110_TrickHouseEnd_Movement_LineUpFromRight
	waitmovement 0
	return


Route110_TrickHouseEnd_EventScript_FacingSouth::
	applymovement OBJ_EVENT_ID_PLAYER, Route110_TrickHouseEnd_Movement_LineUpFromTop
	waitmovement 0
	return


Route110_TrickHouseEnd_Movement_StepUp:
	walk_in_place_up
	step_end

Route110_TrickHouseEnd_Movement_StepDown:
	walk_in_place_down
	step_end

Route110_TrickHouseEnd_Movement_StepLeft:
	walk_in_place_left
	step_end

Route110_TrickHouseEnd_Movement_StepRight:
	walk_in_place_right
	step_end

Route110_TrickHouseEnd_Movement_LineUpFromLeft:
	walk_down
	walk_right
	walk_down
	face_up
	step_end

Route110_TrickHouseEnd_Movement_LineUpFromBottom:
	walk_down
	face_up
	step_end

Route110_TrickHouseEnd_Movement_LineUpFromRight:
	walk_down
	walk_left
	walk_down
	face_up
	step_end

Route110_TrickHouseEnd_Movement_LineUpFromTop:
	walk_left
	walk_down
	walk_down
	walk_right
	walk_down
	face_up
	step_end

Route110_TrickHouseEnd_Movement_LookAround:
	walk_in_place_left
	delay_16
	delay_16
	walk_in_place_right
	delay_16
	delay_16
	walk_in_place_up
	step_end

Route110_TrickHouseEnd_Movement_WalkToLee:
	walk_up
	walk_left
	walk_up
	face_right
	step_end

Route110_TrickHouseEnd_Movement_FaceLeft:
	face_left
	step_end

Route110_TrickHouseEnd_Movement_FaceUp:
	face_up
	step_end

Route110_TrickHouseEnd_Movement_LeeWalkBack:
	walk_right
	walk_right
	face_left
	step_end

Route110_TrickHouseEnd_Movement_PlayerToMiddle:
	walk_right
	walk_down
	step_end

Route110_TrickHouseEnd_Movement_FirstToPlayer:
	walk_right
	walk_right
	walk_in_place_up
	step_end

Route110_TrickHouseEnd_Movement_FirstToStance:
	walk_left
	walk_left
	walk_in_place_up
	step_end

Route110_TrickHouseEnd_Movement_ThirdToPlayer:
	walk_right
	walk_up
	step_end

Route110_TrickHouseEnd_Movement_ThirdToStance:
	walk_down
	walk_left
	walk_in_place_up
	step_end

Route110_TrickHouseEnd_Movement_FourthToPlayer:
	walk_left
	walk_up
	step_end

Route110_TrickHouseEnd_Movement_FourthToStance:
	walk_down
	walk_right
	walk_in_place_up
	step_end

Route110_TrickHouseEnd_Movement_FifthToPlayer:
	walk_down
	walk_right
	walk_right
	walk_right
	walk_up
	walk_up
	step_end

Route110_TrickHouseEnd_Movement_FifthToStance:
	walk_down
	walk_down
	walk_left
	walk_left
	walk_left
	walk_up
	step_end

Route110_TrickHouseEnd_Movement_SixthToPlayer:
	walk_down
	walk_left
	walk_left
	walk_left
	walk_up
	walk_up
	step_end

Route110_TrickHouseEnd_Movement_SixthToStance:
	walk_down
	walk_down
	walk_right
	walk_right
	walk_right
	walk_up
	step_end

Route110_TrickHouseEnd_Movement_LeeBacktoOriginal:
	walk_left
	walk_left
	walk_in_place_down
	step_end

Route110_TrickHouseEnd_EventScript_GymGuide::
	lock
	faceplayer
	goto_if_set FLAG_DEFEATED_FORTREE_GYM, Route110_TrickHouseEnd_EventScript_GymGuide_1
	msgbox Route110_TrickHouseEnd_EventScript_GymGuide_Text_1
	release
	end

Route110_TrickHouseEnd_EventScript_GymGuide_1:
	msgbox Route110_TrickHouseEnd_EventScript_GymGuide_Text_0
	release
	end


Route110_TrickHouseEnd_EventScript_GymStatue::
	lockall
	goto_if_set FLAG_DEFEATED_FORTREE_GYM, Route110_TrickHouseEnd_EventScript_GymStatue_1
	msgbox Route110_TrickHouseEnd_EventScript_GymStatue_Text_1
	releaseall
	end

Route110_TrickHouseEnd_EventScript_GymStatue_1:
	msgbox Route110_TrickHouseEnd_EventScript_GymStatue_Text_0
	releaseall
	end


Route110_TrickHouseEnd_EventScript_BlackBelt1::
	lock
	faceplayer
	goto_if_set FLAG_DEFEATED_CIANWOOD_GYM_TRAINERS, Route110_TrickHouseEnd_EventScript_BlackBelt1_1
	msgbox Route110_TrickHouseEnd_Text_BlackBelts
	waitmessage
	closemessage
	applymovement 2, Route110_TrickHouseEnd_Movement_StepUp
	waitmovement 0
	release
	end

Route110_TrickHouseEnd_EventScript_BlackBelt1_1:
	msgbox Route110_TrickHouseEnd_EventScript_BlackBelt1_Text_0
	release
	end


Route110_TrickHouseEnd_EventScript_BlackBelt2::
	lock
	faceplayer
	goto_if_set FLAG_DEFEATED_CIANWOOD_GYM_TRAINERS, Route110_TrickHouseEnd_EventScript_BlackBelt2_1
	msgbox Route110_TrickHouseEnd_Text_BlackBelts
	waitmessage
	closemessage
	applymovement 3, Route110_TrickHouseEnd_Movement_StepUp
	waitmovement 0
	release
	end

Route110_TrickHouseEnd_EventScript_BlackBelt2_1:
	msgbox Route110_TrickHouseEnd_EventScript_BlackBelt2_Text_0
	release
	end


Route110_TrickHouseEnd_EventScript_BlackBelt3::
	lock
	faceplayer
	goto_if_set FLAG_DEFEATED_CIANWOOD_GYM_TRAINERS, Route110_TrickHouseEnd_EventScript_BlackBelt3_1
	msgbox Route110_TrickHouseEnd_Text_BlackBelts
	waitmessage
	closemessage
	applymovement 4, Route110_TrickHouseEnd_Movement_StepUp
	waitmovement 0
	release
	end

Route110_TrickHouseEnd_EventScript_BlackBelt3_1:
	msgbox Route110_TrickHouseEnd_EventScript_BlackBelt3_Text_0
	release
	end


Route110_TrickHouseEnd_EventScript_BlackBelt4::
	lock
	faceplayer
	goto_if_set FLAG_DEFEATED_CIANWOOD_GYM_TRAINERS, Route110_TrickHouseEnd_EventScript_BlackBelt4_1
	msgbox Route110_TrickHouseEnd_Text_BlackBelts
	waitmessage
	closemessage
	applymovement 5, Route110_TrickHouseEnd_Movement_StepUp
	waitmovement 0
	release
	end

Route110_TrickHouseEnd_EventScript_BlackBelt4_1:
	msgbox Route110_TrickHouseEnd_EventScript_BlackBelt4_Text_0
	release
	end


Route110_TrickHouseEnd_EventScript_BlackBelt5::
	lock
	faceplayer
	goto_if_set FLAG_DEFEATED_CIANWOOD_GYM_TRAINERS, Route110_TrickHouseEnd_EventScript_BlackBelt5_1
	msgbox Route110_TrickHouseEnd_Text_BlackBelts
	waitmessage
	closemessage
	applymovement 6, Route110_TrickHouseEnd_Movement_StepUp
	waitmovement 0
	release
	end

Route110_TrickHouseEnd_EventScript_BlackBelt5_1:
	msgbox Route110_TrickHouseEnd_EventScript_BlackBelt5_Text_0
	release
	end


Route110_TrickHouseEnd_EventScript_BlackBelt6::
	lock
	faceplayer
	goto_if_set FLAG_DEFEATED_CIANWOOD_GYM_TRAINERS, Route110_TrickHouseEnd_EventScript_BlackBelt6_1
	msgbox Route110_TrickHouseEnd_Text_BlackBelts
	waitmessage
	closemessage
	applymovement 7, Route110_TrickHouseEnd_Movement_StepUp
	waitmovement 0
	release
	end

Route110_TrickHouseEnd_EventScript_BlackBelt6_1:
	msgbox Route110_TrickHouseEnd_EventScript_BlackBelt6_Text_0
	release
	end


Route110_TrickHouseEnd_EventScript_LeeRound2::
	trainerbattle_double TRAINER_WINONA_2, Route110_TrickHouseEnd_Text_LeeRematchIntro, Route110_TrickHouseEnd_Text_LeeRematchDefeat, Route110_TrickHouseEnd_Text_LeeRematchNotEnoughMons, Route110_TrickHouseEnd_EventScript_LeeRematchDefeated, NO_MUSIC
	msgbox Route110_TrickHouseEnd_EventScript_LeeRound2_Text_0
	compare VAR_GYM_LEADERS_ROUND2_COUNT, 8
	goto_if_eq Route110_TrickHouseEnd_EventScript_LeeRound2_1
	release
	end

Route110_TrickHouseEnd_EventScript_LeeRound2_1:
	msgbox Route110_TrickHouseEnd_EventScript_LeeRound2_Text_1
	release
	end


Route110_TrickHouseEnd_EventScript_LeeRematchDefeated::
	msgbox Route110_TrickHouseEnd_EventScript_LeeRematchDefeated_Text_0
	addvar VAR_GYM_LEADERS_ROUND2_COUNT, 1
	compare VAR_GYM_LEADERS_ROUND2_COUNT, 8
	goto_if_eq Route110_TrickHouseEnd_EventScript_LeeRematchDefeated_1
	release
	end

Route110_TrickHouseEnd_EventScript_LeeRematchDefeated_1:
	msgbox Route110_TrickHouseEnd_EventScript_LeeRematchDefeated_Text_1
	setflag FLAG_DEFEATED_ALL_GYM_LEADERS_2ND_TIME
	release
	end


Route110_TrickHouseEnd_EventScript_Lee_Text_0:
	.string "I must say, that battle with you has\n"
	.string "inspired me to reach new heights!\p"
	.string "I will continue to train myself, and I\n"
	.string "look forward to battling with you again\l"
	.string "sometime.$"

Route110_TrickHouseEnd_EventScript_Lee_Text_1:
	.string "Oh, you're ready for a battle now?\p"
	.string "Watching you battle my students really\n"
	.string "pumped me up!\p"
	.string "Let's waste no more time!$"

Route110_TrickHouseEnd_EventScript_Lee_Text_2:
	.string "{PLAYER} received the STORM BADGE\n"
	.string "from LEE.$"

Route110_TrickHouseEnd_EventScript_Lee_Text_3:
	.string "With that badge, all POKéMON up to level\n"
	.string "75 will obey your command without\l"
	.string "question!\p"
	.string "Even POKéMON you've received through\n"
	.string "trades.\p"
	.string "It will also allow you to use the HM move\n"
	.string "Fly outside of battle.\p"
	.string "...\p"
	.string "You should also take this.$"

Route110_TrickHouseEnd_EventScript_Lee_Text_4:
	.string "That TM contains the move Brick Break!\p"
	.string "While not the strongest FIGHTING-type\n"
	.string "move, it will blast through barriers like\l"
	.string "Light Screen and Reflect.\p"
	.string "Put it to good use.$"

Route110_TrickHouseEnd_EventScript_Lee_Text_5:
	.string "LEE: Who are you? A new student?\p"
	.string "Perfect timing, we were just getting\n"
	.string "warmed up.\p"
	.string "Now line up!$"

Route110_TrickHouseEnd_EventScript_Lee_Text_6:
	.string "LEE: Attention!$"

Route110_TrickHouseEnd_EventScript_Lee_Text_7:
	.string "ALL: Yes, sensei!\p"
	.string "LEE: Let's get back to our striking\n"
	.string "drills!$"

Route110_TrickHouseEnd_EventScript_Lee_Text_8:
	.string "LEE: Now, strike left!$"

Route110_TrickHouseEnd_EventScript_Lee_Text_9:
	.string "ALL: Osu!$"

Route110_TrickHouseEnd_EventScript_Lee_Text_10:
	.string "LEE: Strike right!$"

Route110_TrickHouseEnd_EventScript_Lee_Text_11:
	.string "LEE: Strike forward!$"

Route110_TrickHouseEnd_EventScript_Lee_Text_12:
	.string "LEE: You in the middle!\p"
	.string "What's your malfunction?$"

Route110_TrickHouseEnd_EventScript_Lee_Text_13:
	.string "...\p"
	.string "...\p"
	.string "LEE: What's that?\p"
	.string "You're just here to battle me?\p"
	.string "Haha! I must say I'm not very impressed\n"
	.string "with what I've seen from you so far.\p"
	.string "...\p"
	.string "I tell you what...$"

Route110_TrickHouseEnd_EventScript_Lee_Text_14:
	.string "LEE: Battle all of my students\n"
	.string "consecutively!\p"
	.string "If you win, I may grant you a battle.$"

Route110_TrickHouseEnd_EventScript_Lee_Text_15:
	.string "I'm not holding back on you just\n"
	.string "because you're a kid!$"

Route110_TrickHouseEnd_EventScript_Lee_Text_16:
	.string "That last guy was the weakest one of\n"
	.string "us, I'll show you how it's done!$"

Route110_TrickHouseEnd_EventScript_Lee_Text_17:
	.string "That was just beginners luck!\p"
	.string "There's no way you're beating all of us!$"

Route110_TrickHouseEnd_EventScript_Lee_Text_18:
	.string "Alright kid, this is where things get\n"
	.string "serious!$"

Route110_TrickHouseEnd_EventScript_Lee_Text_19:
	.string "You're no joke kid, this is getting\n"
	.string "interesting!$"

Route110_TrickHouseEnd_EventScript_Lee_Text_20:
	.string "I'm the last one, let's see if you can\n"
	.string "keep it up!$"

Route110_TrickHouseEnd_EventScript_Lee_Text_21:
	.string "LEE: Wow, I was wrong about you!\p"
	.string "You completely blew away my\n"
	.string "expectations!\p"
	.string "You have certainly earned a battle!\p"
	.string "Go heal if you need to, I'll be ready\n"
	.string "when you are...$"

Route110_TrickHouseEnd_EventScript_GymGuide_Text_0:
	.string "You did it!\p"
	.string "I knew you would show him who's boss!$"

Route110_TrickHouseEnd_EventScript_GymGuide_Text_1:
	.string "Yo! How's it going, CHAMP in the making,\n"
	.string "{PLAYER}?\p"
	.string "The head of this dojo, and Cianwood\n"
	.string "City's gym leader is LEE.\p"
	.string "Don't let the goofy haircut fool you,\n"
	.string "he's a master of FIGHTING-type\l"
	.string "POKéMON!\p"
	.string "You have some options to try against\n"
	.string "him: PSYCHIC-type, FLYING-type, or\l"
	.string "FAIRY-type.\p"
	.string "Well, good luck! Go for it!$"

Route110_TrickHouseEnd_EventScript_GymStatue_Text_0:
	.string "CIANWOOD CITY POKéMON GYM\p"
	.string "LEE'S CERTIFIED TRAINERS:\n"
	.string "{PLAYER}$"

Route110_TrickHouseEnd_EventScript_GymStatue_Text_1:
	.string "CIANWOOD CITY POKéMON GYM$"

Route110_TrickHouseEnd_EventScript_BlackBelt1_Text_0:
	.string "That battle was great!\p"
	.string "You sure surprised me, kid!$"

Route110_TrickHouseEnd_EventScript_BlackBelt2_Text_0:
	.string "I really underestimated you!\p"
	.string "I guess looks really can be deceiving.$"

Route110_TrickHouseEnd_EventScript_BlackBelt3_Text_0:
	.string "You're good kid, no joke!$"

Route110_TrickHouseEnd_EventScript_BlackBelt4_Text_0:
	.string "You really mopped the floor with us!\p"
	.string "I bet you'll go far, kid!$"

Route110_TrickHouseEnd_EventScript_BlackBelt5_Text_0:
	.string "Your strength reminds me of the\n"
	.string "POKéMON League Champion!\p"
	.string "Your hair color too...$"

Route110_TrickHouseEnd_EventScript_BlackBelt6_Text_0:
	.string "Sorry we were so tough on you kid, I had\n"
	.string "no idea you were so strong.$"

Route110_TrickHouseEnd_EventScript_LeeRound2_Text_0:
	.string "You've defeated me twice now.\p"
	.string "Perhaps you should be the master of\n"
	.string "this dojo instead, haha!$"

Route110_TrickHouseEnd_EventScript_LeeRound2_Text_1:
	.string "Oh, and the POKéMON League is rumored\n"
	.string "to have a new Champion now.\p"
	.string "Go show them what true fighting spirit\n"
	.string "is capable of!$"

Route110_TrickHouseEnd_EventScript_LeeRematchDefeated_Text_0:
	.string "Thank you for showing me that I am still\n"
	.string "just a student myself.\p"
	.string "You've reignited the fire burning in my\n"
	.string "heart yet again, and I will continue to\l"
	.string "push myself to become the best I can\l"
	.string "possibly be!$"

Route110_TrickHouseEnd_EventScript_LeeRematchDefeated_Text_1:
	.string "One more thing, the POKéMON League is\n"
	.string "rumored to have a new Champion now.\p"
	.string "Go show them what true fighting spirit\n"
	.string "is capable of!$"

Route110_TrickHouseEnd_Text_LeeDefeat::
	.string "From the moment you walked into my gym,\n"
	.string "I thought you were just some wimpy\l"
	.string "little kid, but how wrong was I!\p"
	.string "Stand tall! You have earned my respect,\n"
	.string "and then some.\p"
	.string "Take this badge, and wear it proudly!$"

Route110_TrickHouseEnd_Text_JaredDefeat::
	.string "Wait... it's over already?$"

Route110_TrickHouseEnd_Text_EdwardoDefeat::
	.string "Whoa, I must be off my game today...$"

Route110_TrickHouseEnd_Text_FlintDefeat::
	.string "There's no way!\n"
	.string "You're not just some beginner are you?$"

Route110_TrickHouseEnd_Text_AshleyDefeat::
	.string "Hey, you're actually not half bad!$"

Route110_TrickHouseEnd_Text_HumbertoDefeat::
	.string "You're no ordinary kid, I can tell!$"

Route110_TrickHouseEnd_Text_DariusDefeat::
	.string "That was great! I haven't had a battle\n"
	.string "like that in years!$"

Route110_TrickHouseEnd_Text_BlackBelts::
	.string "Not now kid, we're busy.$"

Route110_TrickHouseEnd_Text_LeeRematchIntro::
	.string "I've been waiting for the day you\n"
	.string "return to my dojo, and that look in your\l"
	.string "eyes...\p"
	.string "It's the look of unwavering\n"
	.string "determination!\p"
	.string "But don't get too ahead of yourself.\p"
	.string "I won't roll over as easily this time,\n"
	.string "I've been honing my own skills as well!\p"
	.string "Let me show you what a true master is\n"
	.string "capable of!$"

Route110_TrickHouseEnd_Text_LeeRematchDefeat::
	.string "Haha! I don't know how it's possible, but\n"
	.string "you've reached heights that even I\l"
	.string "thought were unattainable!$"

Route110_TrickHouseEnd_Text_LeeRematchNotEnoughMons::
	.string "...\p"
	.string "On second thought, go get more POKéMON\n"
	.string "for this battle.\p"
	.string "True warriors fight as a team.$"
