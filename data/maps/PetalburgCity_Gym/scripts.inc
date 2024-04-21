PetalburgCity_Gym_MapScripts::
	.byte 0


PetalburgCity_Gym_EventScript_Guide::
	lock
	faceplayer
	goto_if_set FLAG_DEFEATED_PETALBURG_GYM, PetalburgCity_Gym_EventScript_GymGuidePostVictory
	msgbox PetalburgCity_Gym_Text_GymGuideAdvice, MSGBOX_DEFAULT
	release
	end


PetalburgCity_Gym_EventScript_GymGuidePostVictory::
	msgbox PetalburgCity_Gym_Text_GymGuidePostVictory, MSGBOX_DEFAULT
	release
	end


PetalburgCity_Gym_EventScript_GymStatue::
	lockall
	goto_if_set FLAG_BADGE05_GET, PetalburgCity_Gym_EventScript_GymStatueCertified
	msgbox PetalburgCity_Gym_Text_GymStatue, MSGBOX_DEFAULT
	releaseall
	end


PetalburgCity_Gym_EventScript_Beauty::
	lock
	faceplayer
	goto_if_set FLAG_BADGE05_GET, PetalburgCity_Gym_EventScript_Beauty_1
	msgbox PetalburgCity_Gym_EventScript_Beauty_Text_1
	release
	end

PetalburgCity_Gym_EventScript_Beauty_1:
	msgbox PetalburgCity_Gym_EventScript_Beauty_Text_0
	release
	end


PetalburgCity_Gym_EventScript_Drummer::
	lock
	faceplayer
	goto_if_set FLAG_BADGE05_GET, PetalburgCity_Gym_EventScript_Drummer_1
	msgbox PetalburgCity_Gym_EventScript_Drummer_Text_1
	release
	end

PetalburgCity_Gym_EventScript_Drummer_1:
	msgbox PetalburgCity_Gym_EventScript_Drummer_Text_0
	release
	end


PetalburgCity_Gym_EventScript_Guitarist::
	lock
	faceplayer
	goto_if_set FLAG_BADGE05_GET, PetalburgCity_Gym_EventScript_Guitarist_1
	msgbox PetalburgCity_Gym_EventScript_Guitarist_Text_1
	release
	end

PetalburgCity_Gym_EventScript_Guitarist_1:
	msgbox PetalburgCity_Gym_EventScript_Guitarist_Text_0
	release
	end


PetalburgCity_Gym_EventScript_CharlieRound2::
	trainerbattle_double TRAINER_NORMAN_2, PetalburgCity_Gym_Text_CharlieRematchIntro, PetalburgCity_Gym_Text_CharlieRematchDefeat, PetalburgCity_Gym_Text_CharlieRematchNotEnoughMons, PetalburgCity_Gym_EventScript_CharlieRematchDefeated, NO_MUSIC
	msgbox PetalburgCity_Gym_EventScript_CharlieRound2_Text_0
	compare VAR_GYM_LEADERS_ROUND2_COUNT, 8
	goto_if_eq PetalburgCity_Gym_EventScript_CharlieRound2_1
	release
	end

PetalburgCity_Gym_EventScript_CharlieRound2_1:
	msgbox PetalburgCity_Gym_EventScript_CharlieRound2_Text_1
	release
	end


PetalburgCity_Gym_EventScript_CharlieRematchDefeated::
	msgbox PetalburgCity_Gym_EventScript_CharlieRematchDefeated_Text_0
	addvar VAR_GYM_LEADERS_ROUND2_COUNT, 1
	compare VAR_GYM_LEADERS_ROUND2_COUNT, 8
	goto_if_eq PetalburgCity_Gym_EventScript_CharlieRematchDefeated_1
	release
	end

PetalburgCity_Gym_EventScript_CharlieRematchDefeated_1:
	msgbox PetalburgCity_Gym_EventScript_CharlieRematchDefeated_Text_1
	setflag FLAG_DEFEATED_ALL_GYM_LEADERS_2ND_TIME
	release
	end


PetalburgCity_Gym_EventScript_Charlie::
	lock
	faceplayer
	goto_if_set FLAG_BADGE05_GET, PetalburgCity_Gym_EventScript_Charlie_1
	goto_if_set FLAG_HIDE_DRUMMER_SWEET_SHOP, PetalburgCity_Gym_EventScript_Charlie_7
PetalburgCity_Gym_EventScript_Charlie_5:
	goto_if_set FLAG_TALKED_TO_CHARLIE, PetalburgCity_Gym_EventScript_Charlie_3
	msgbox PetalburgCity_Gym_EventScript_Charlie_Text_4
	setflag FLAG_TALKED_TO_CHARLIE
	release
	end

PetalburgCity_Gym_EventScript_Charlie_1:
	msgbox PetalburgCity_Gym_EventScript_Charlie_Text_0
	release
	end

PetalburgCity_Gym_EventScript_Charlie_2:
	msgbox PetalburgCity_Gym_EventScript_Charlie_Text_1
	trainerbattle_no_intro TRAINER_NORMAN_1, PetalburgCity_Gym_Text_CharlieDefeat
	message PetalburgCity_Gym_Text_ReceivedBoltBadge
	waitmessage
	call Common_EventScript_PlayGymBadgeFanfare
	msgbox PetalburgCity_Gym_Text_ExplainBoltBadgeTakeThis, MSGBOX_DEFAULT
	setflag FLAG_DEFEATED_PETALBURG_GYM
	setflag FLAG_BADGE05_GET
	giveitem ITEM_TM24
	msgbox PetalburgCity_Gym_EventScript_Charlie_Text_2
	waitmessage
	closemessage
	goto PetalburgCity_Gym_EventScript_ConcertSetup
	end

PetalburgCity_Gym_EventScript_Charlie_3:
	msgbox PetalburgCity_Gym_EventScript_Charlie_Text_3
	release
	end

PetalburgCity_Gym_EventScript_Charlie_6:
	goto_if_set FLAG_HIDE_GUITARIST_LIGHTHOUSE, PetalburgCity_Gym_EventScript_Charlie_2
	goto PetalburgCity_Gym_EventScript_Charlie_5

PetalburgCity_Gym_EventScript_Charlie_7:
	goto_if_set FLAG_HIDE_BEAUTY_MART, PetalburgCity_Gym_EventScript_Charlie_6
	goto PetalburgCity_Gym_EventScript_Charlie_5


PetalburgCity_Gym_EventScript_ConcertSetup::
	fadescreenspeed FADE_TO_BLACK, 14
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Gym_Movement_Invisible
	waitmovement 0
	specialvar VAR_RESULT, GetPlayerFacingDirection
	switch VAR_RESULT
	case DIR_EAST, PetalburgCity_Gym_EventScript_ConcertSetup_3
	case DIR_NORTH, PetalburgCity_Gym_EventScript_ConcertSetup_4
	case DIR_WEST, PetalburgCity_Gym_EventScript_ConcertSetup_5
	case DIR_SOUTH, PetalburgCity_Gym_EventScript_ConcertSetup_6
PetalburgCity_Gym_EventScript_ConcertSetup_1:
	clearflag FLAG_GENERAL_HIDE
	addobject 7
	applymovement 2, PetalburgCity_Gym_Movement_FaceDown
	applymovement 3, PetalburgCity_Gym_Movement_FaceDown
	applymovement 4, PetalburgCity_Gym_Movement_FaceDown
	waitmovement 0
	checkplayergender
	compare VAR_RESULT, MALE
	goto_if_eq PetalburgCity_Gym_EventScript_ConcertSetup_8
	compare VAR_RESULT, FEMALE
	goto_if_eq PetalburgCity_Gym_EventScript_ConcertSetup_9
PetalburgCity_Gym_EventScript_ConcertSetup_7:
	call PetalburgCity_Gym_EventScript_Add_Audience
	setmetatile 5, 7, 0x22A, TRUE
	setmetatile 6, 7, 0x22B, TRUE
	setmetatile 5, 6, 0x222, TRUE
	setmetatile 6, 6, 0x223, TRUE
	setmetatile 12, 7, 0x22A, TRUE
	setmetatile 13, 7, 0x22B, TRUE
	setmetatile 12, 6, 0x222, TRUE
	setmetatile 13, 6, 0x223, TRUE
	special DrawWholeMapView
	fadenewbgm MUS_HG_NEW_GAME
	fadescreenspeed FADE_FROM_BLACK, 14
	goto PetalburgCity_Gym_EventScript_Concert
	end

PetalburgCity_Gym_EventScript_ConcertSetup_3:
	call PetalburgCity_Gym_EventScript_FacingEast
	goto PetalburgCity_Gym_EventScript_ConcertSetup_1

PetalburgCity_Gym_EventScript_ConcertSetup_4:
	call PetalburgCity_Gym_EventScript_FacingNorth
	goto PetalburgCity_Gym_EventScript_ConcertSetup_1

PetalburgCity_Gym_EventScript_ConcertSetup_5:
	call PetalburgCity_Gym_EventScript_FacingWest
	goto PetalburgCity_Gym_EventScript_ConcertSetup_1

PetalburgCity_Gym_EventScript_ConcertSetup_6:
	call PetalburgCity_Gym_EventScript_FacingSouth
	goto PetalburgCity_Gym_EventScript_ConcertSetup_1

PetalburgCity_Gym_EventScript_ConcertSetup_8:
	call PetalburgCity_Gym_EventScript_MalePlayer
	goto PetalburgCity_Gym_EventScript_ConcertSetup_7

PetalburgCity_Gym_EventScript_ConcertSetup_9:
	call PetalburgCity_Gym_EventScript_FemalePlayer
	goto PetalburgCity_Gym_EventScript_ConcertSetup_7


PetalburgCity_Gym_EventScript_MalePlayer::
	addobject 6
	return


PetalburgCity_Gym_EventScript_FemalePlayer::
	addobject 8
	return


PetalburgCity_Gym_EventScript_FacingEast::
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Gym_Movement_ToStageFromLeft
	waitmovement 0
	return


PetalburgCity_Gym_EventScript_FacingNorth::
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Gym_Movement_ToStageFromBottom
	waitmovement 0
	return


PetalburgCity_Gym_EventScript_FacingWest::
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Gym_Movement_ToStageFromRight
	waitmovement 0
	return


PetalburgCity_Gym_EventScript_FacingSouth::
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Gym_Movement_ToStageFromTop
	waitmovement 0
	return


PetalburgCity_Gym_Movement_Invisible:
	set_invisible
	step_end

PetalburgCity_Gym_Movement_ToStageFromLeft:
	walk_faster_right
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	step_end

PetalburgCity_Gym_Movement_ToStageFromBottom:
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	step_end

PetalburgCity_Gym_Movement_ToStageFromRight:
	walk_faster_left
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	step_end

PetalburgCity_Gym_Movement_ToStageFromTop:
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	step_end

PetalburgCity_Gym_Movement_FaceDown:
	face_down
	step_end

PetalburgCity_Gym_EventScript_Add_Audience::
	createvobject OBJ_EVENT_GFX_BEAUTY, 0, 4, 9
	createvobject OBJ_EVENT_GFX_BRANDON, 1, 5, 9
	createvobject OBJ_EVENT_GFX_BEAUTY, 2, 6, 9
	createvobject OBJ_EVENT_GFX_HIKER, 3, 7, 9
	createvobject OBJ_EVENT_GFX_HEX_MANIAC, 4, 8, 9
	createvobject OBJ_EVENT_GFX_WALLACE, 5, 9, 9
	createvobject OBJ_EVENT_GFX_MAN_3, 6, 10, 9
	createvobject OBJ_EVENT_GFX_LASS, 7, 11, 9
	createvobject OBJ_EVENT_GFX_MAN_4, 8, 13, 9
	createvobject OBJ_EVENT_GFX_ANABEL, 9, 14, 9
	createvobject OBJ_EVENT_GFX_BLACK_BELT, 10, 4, 10
	createvobject OBJ_EVENT_GFX_RUNNING_TRIATHLETE_F, 11, 5, 10
	createvobject OBJ_EVENT_GFX_NURSE, 12, 6, 10
	createvobject OBJ_EVENT_GFX_MART_EMPLOYEE, 13, 7, 10
	createvobject OBJ_EVENT_GFX_CAMPER, 14, 8, 10
	createvobject OBJ_EVENT_GFX_PICNICKER, 15, 9, 10
	createvobject OBJ_EVENT_GFX_PSYCHIC_M, 16, 10, 10
	createvobject OBJ_EVENT_GFX_WOMAN_1, 17, 11, 10
	createvobject OBJ_EVENT_GFX_BUG_CATCHER, 18, 12, 10
	createvobject OBJ_EVENT_GFX_FISHERMAN, 19, 13, 10
	createvobject OBJ_EVENT_GFX_WOMAN_2, 20, 14, 10
	turnvobject 0, DIR_NORTH
	turnvobject 1, DIR_NORTH
	turnvobject 2, DIR_NORTH
	turnvobject 3, DIR_NORTH
	turnvobject 4, DIR_NORTH
	turnvobject 5, DIR_NORTH
	turnvobject 6, DIR_NORTH
	turnvobject 7, DIR_NORTH
	turnvobject 8, DIR_NORTH
	turnvobject 9, DIR_NORTH
	turnvobject 10, DIR_NORTH
	turnvobject 11, DIR_NORTH
	turnvobject 12, DIR_NORTH
	turnvobject 13, DIR_NORTH
	turnvobject 14, DIR_NORTH
	turnvobject 15, DIR_NORTH
	turnvobject 16, DIR_NORTH
	turnvobject 17, DIR_NORTH
	turnvobject 18, DIR_NORTH
	turnvobject 19, DIR_NORTH
	turnvobject 20, DIR_NORTH
	return


PetalburgCity_Gym_EventScript_Concert::
	delay 60
	msgbox PetalburgCity_Gym_EventScript_Concert_Text_0
	waitmessage
	closemessage
	playse SE_M_ENCORE2
	call PetalburgCity_Gym_EventScript_Look_Around
	waitse
	msgbox PetalburgCity_Gym_EventScript_Concert_Text_1
	waitmessage
	closemessage
	delay 30
	playbgm MUS_RG_VS_GYM_LEADER, FALSE
	applymovement 7, PetalburgCity_Gym_Movement_CharlieStart
	waitmovement 0
	playse SE_M_ENCORE2
	call PetalburgCity_Gym_EventScript_Look_Around
	waitse
	applymovement 7, PetalburgCity_Gym_Movement_CharlieContinue
	waitmovement 0
	playse SE_M_ENCORE2
	call PetalburgCity_Gym_EventScript_Look_Around
	waitse
	applymovement 7, PetalburgCity_Gym_Movement_CharlieThird
	waitmovement 0
	playse SE_M_ENCORE2
	call PetalburgCity_Gym_EventScript_Look_Around
	waitse
	applymovement 7, PetalburgCity_Gym_Movement_CharlieFinal
	waitmovement 0
	playse SE_M_ENCORE2
	call PetalburgCity_Gym_EventScript_Look_Around
	waitse
	goto PetalburgCity_Gym_EventScript_ConcertEnd
	end


PetalburgCity_Gym_Movement_CharlieStart:
	face_right
	delay_8
	face_up
	delay_8
	face_left
	delay_16
	jump_2_left
	delay_16
	face_left
	lock_facing_direction
	walk_right
	walk_right
	walk_right
	walk_right
	unlock_facing_direction
	jump_in_place_down
	step_end

PetalburgCity_Gym_Movement_CharlieContinue:
	face_left
	delay_8
	face_up
	delay_8
	face_right
	delay_16
	lock_facing_direction
	walk_slow_left
	walk_slow_left
	unlock_facing_direction
	jump_in_place_down
	step_end

PetalburgCity_Gym_Movement_CharlieThird:
	jump_2_down
	jump_in_place_left_right
	walk_slow_right
	face_right
	lock_facing_direction
	walk_slow_left
	walk_slow_left
	unlock_facing_direction
	jump_in_place_down
	step_end

PetalburgCity_Gym_Movement_CharlieFinal:
	face_left
	delay_8
	face_up
	delay_8
	face_right
	delay_16
	jump_2_right
	face_right
	lock_facing_direction
	walk_slow_left
	unlock_facing_direction
	jump_2_up
	face_left
	delay_8
	face_down
	delay_8
	face_right
	delay_8
	face_up
	delay_8
	face_left
	delay_8
	face_down
	step_end

PetalburgCity_Gym_EventScript_Look_Around::
	turnvobject 0, DIR_EAST
	turnvobject 2, DIR_WEST
	turnvobject 4, DIR_EAST
	turnvobject 6, DIR_WEST
	turnvobject 8, DIR_EAST
	turnvobject 10, DIR_WEST
	turnvobject 12, DIR_EAST
	turnvobject 14, DIR_WEST
	turnvobject 16, DIR_EAST
	turnvobject 18, DIR_WEST
	turnvobject 20, DIR_EAST
	delay 20
	turnvobject 0, DIR_NORTH
	turnvobject 2, DIR_NORTH
	turnvobject 4, DIR_NORTH
	turnvobject 6, DIR_NORTH
	turnvobject 8, DIR_NORTH
	turnvobject 10, DIR_NORTH
	turnvobject 12, DIR_NORTH
	turnvobject 14, DIR_NORTH
	turnvobject 16, DIR_NORTH
	turnvobject 18, DIR_NORTH
	turnvobject 20, DIR_NORTH
	delay 20
	turnvobject 1, DIR_EAST
	turnvobject 3, DIR_WEST
	turnvobject 5, DIR_EAST
	turnvobject 7, DIR_WEST
	turnvobject 9, DIR_EAST
	turnvobject 11, DIR_WEST
	turnvobject 13, DIR_EAST
	turnvobject 15, DIR_WEST
	turnvobject 17, DIR_EAST
	turnvobject 19, DIR_WEST
	delay 20
	turnvobject 1, DIR_NORTH
	turnvobject 3, DIR_NORTH
	turnvobject 5, DIR_NORTH
	turnvobject 7, DIR_NORTH
	turnvobject 9, DIR_NORTH
	turnvobject 11, DIR_NORTH
	turnvobject 13, DIR_NORTH
	turnvobject 15, DIR_NORTH
	turnvobject 17, DIR_NORTH
	turnvobject 19, DIR_NORTH
	return


PetalburgCity_Gym_EventScript_ConcertEnd::
	fadescreenspeed FADE_TO_BLACK, 14
	delay 30
	removeobject 7
	removeobject 6
	removeobject 8
	setflag FLAG_GENERAL_HIDE
	special DestroyVirtualObjects
	setmetatile 5, 7, 0x20A, FALSE
	setmetatile 6, 7, 0x20A, FALSE
	setmetatile 5, 6, 0x20A, FALSE
	setmetatile 6, 6, 0x20A, FALSE
	setmetatile 12, 7, 0x20A, FALSE
	setmetatile 13, 7, 0x20A, FALSE
	setmetatile 12, 6, 0x20A, FALSE
	setmetatile 13, 6, 0x20A, FALSE
	special DrawWholeMapView
	fadedefaultbgm
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Gym_Movement_VisibleDown
	waitmovement 0
	fadescreen FADE_FROM_BLACK
	release
	end


PetalburgCity_Gym_Movement_VisibleDown:
	walk_faster_down
	walk_faster_down
	walk_faster_down
	walk_faster_down
	walk_faster_down
	walk_faster_down
	walk_faster_down
	walk_faster_down
	set_visible
	step_end

PetalburgCity_Gym_EventScript_Beauty_Text_0:
	.string "Whew, now that it's all over my nerves\n"
	.string "are back to normal, but I'm exhausted!$"

PetalburgCity_Gym_EventScript_Beauty_Text_1:
	.string "Deep breaths ALEXIA, you've played this\n"
	.string "show hundreds of times before...$"

PetalburgCity_Gym_EventScript_Drummer_Text_0:
	.string "How was my playing?\p"
	.string "My head was spinning from the sugar\n"
	.string "rush, but I'm definitely crashing now...$"

PetalburgCity_Gym_EventScript_Drummer_Text_1:
	.string "Ugh, man, I think I ate too many\n"
	.string "sweets...\p"
	.string "This show is going to be rough.$"

PetalburgCity_Gym_EventScript_Guitarist_Text_0:
	.string "Another great concert, if I do say so\n"
	.string "myself.\p"
	.string "Now then, time to kick back and try to\n"
	.string "relax.$"

PetalburgCity_Gym_EventScript_Guitarist_Text_1:
	.string "I'm all apmed back up again, and ready\n"
	.string "to start this show!$"

PetalburgCity_Gym_EventScript_CharlieRound2_Text_0:
	.string "Yo kid! That last battle really amped me\n"
	.string "up!\p"
	.string "I'll play a song just for you in our next\n"
	.string "concert.$"

PetalburgCity_Gym_EventScript_CharlieRound2_Text_1:
	.string "Oh yeah, and I heard the POKéMON\n"
	.string "League found a new Champion.\p"
	.string "You should go rock their world!$"

PetalburgCity_Gym_EventScript_CharlieRematchDefeated_Text_0:
	.string "Battles like that really amp me up!\p"
	.string "I feel like I could put on the best show\n"
	.string "of my life right now!\p"
	.string "Too bad we aren't playing today...$"

PetalburgCity_Gym_EventScript_CharlieRematchDefeated_Text_1:
	.string "Oh yeah, I heard the POKéMON League\n"
	.string "found a new Champion.\p"
	.string "You should go rock their world too!$"

PetalburgCity_Gym_EventScript_Charlie_Text_0:
	.string "Yo kid! We should battle again sometime.\p"
	.string "You have a ton of potential!$"

PetalburgCity_Gym_EventScript_Charlie_Text_1:
	.string "Hey! You found all three of my\n"
	.string "bandmates!\p"
	.string "That was faster than I expected.\p"
	.string "We should definitely have time for a\n"
	.string "battle before the show!\p"
	.string "Well then, bring it on!$"

PetalburgCity_Gym_EventScript_Charlie_Text_2:
	.string "That TM contains the move Thunderbolt!\n"
	.string "A very powerful ELECTRIC move that\l"
	.string "has a chance to paralyze your\l"
	.string "opponent.\p"
	.string "It's also the inspiration behind my\n"
	.string "band's name, obviously.\p"
	.string "Say, you should stick around for the\n"
	.string "show.\p"
	.string "I'll save you a spot in the front row!\p"
	.string "Well, I'd better get to it...$"

PetalburgCity_Gym_EventScript_Charlie_Text_3:
	.string "Not all of my bandmates are here yet,\n"
	.string "there should be three of them total.\p"
	.string "I imagine they're somewhere in Olivine.$"

PetalburgCity_Gym_EventScript_Charlie_Text_4:
	.string "Yo! What's up, kid?\p"
	.string "You're a little early for the concert,\n"
	.string "you must be here for a battle!\p"
	.string "Sorry, you do look like a strong\n"
	.string "TRAINER, but our battle will have to\l"
	.string "wait.\p"
	.string "We'll be putting on a concert soon, and\n"
	.string "my three bandmates are missing.\p"
	.string "...\p"
	.string "I tell you what, if you can find my\n"
	.string "bandmates quickly, then I might be able\l"
	.string "to squeeze in a battle before the\l"
	.string "concert!\p"
	.string "They should be somewhere in town.$"

PetalburgCity_Gym_EventScript_Concert_Text_0:
	.string "CHARLIE: Is everybody ready!?$"

PetalburgCity_Gym_EventScript_Concert_Text_1:
	.string "CHARLIE: I'm glad to see so many people\n"
	.string "made it out here tonight!\p"
	.string "We'll be sure to put on a great show for\n"
	.string "you!\p"
	.string "Now, I'm sure everyone will recognize\n"
	.string "this first song, it's a classic!$"

PetalburgCity_Gym_Text_GymGuideAdvice::
	.string "Hey, how's it going, CHAMPION-bound\n"
	.string "{PLAYER}?\p"
	.string "The Gym Leader here, CHARLIE will rock\n"
	.string "you with his music and shock you with\l"
	.string "his battling skills!\p"
	.string "He uses ELECTRIC-type POKéMON, in case\n"
	.string "you didn't get my pun.\p"
	.string "Try using GROUND-type moves to roll\n"
	.string "him!\p"
	.string "Well, go for it!$"

PetalburgCity_Gym_Text_GymGuidePostVictory::
	.string "That rocked my socks off!\p"
	.string "And I'm not just talking about the\n"
	.string "concert.\p"
	.string "That battle was great, I knew you would\n"
	.string "win!$"

PetalburgCity_Gym_Text_GymStatue::
	.string "OLIVINE CITY POKéMON GYM\p"
	.string "CHARLIE'S CERTIFIED TRAINERS:\n"
	.string "SHANE$"

PetalburgCity_Gym_EventScript_GymStatueCertified::
	.string "OLIVINE CITY POKéMON GYM\p"
	.string "CHARLIE'S CERTIFIED TRAINERS:\n"
	.string "SHANE, {PLAYER}$"

PetalburgCity_Gym_Text_CharlieRematchIntro::
	.string "Yo kid! Glad to see you again!\p"
	.string "Sorry, but we aren't putting on a\n"
	.string "concert today, we're just chilling.\p"
	.string "...\p"
	.string "What's that?\p"
	.string "You want a rematch?\p"
	.string "Hell yeah!\p"
	.string "I've been looking forward to facing you\n"
	.string "again.\p"
	.string "Let's get this party started!$"

PetalburgCity_Gym_Text_CharlieRematchDefeat::
	.string "Rock on!\p"
	.string "You keep blowing my expectations away!$"

PetalburgCity_Gym_Text_CharlieRematchNotEnoughMons::
	.string "...\p"
	.string "Oh, bummer, I wanted a double battle.\p"
	.string "Come back when you have more than one\n"
	.string "POKéMON with you.$"

PetalburgCity_Gym_Text_CharlieDefeat::
	.string "Yeah! That was a fantastic battle!\p"
	.string "I feel electrified now! I'm ready to put\n"
	.string "on the best show of my life!\p"
	.string "Here, you've undoubtedly earned this\n"
	.string "badge!$"

PetalburgCity_Gym_Text_ReceivedBoltBadge::
	.string "{PLAYER} received the BOLT BADGE\n"
	.string "from CHARLIE!$"

PetalburgCity_Gym_Text_ExplainBoltBadgeTakeThis::
	.string "That badge will allow your POKéMON to\n"
	.string "use the HM move Surf outside of battle.\p"
	.string "That should open up the world for you\n"
	.string "quite a bit!\p"
	.string "Oh, and you can have this!$"
