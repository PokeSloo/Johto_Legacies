Route122_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route122_MapScripts_MAP_SCRIPT_ON_TRANSITION
	map_script MAP_SCRIPT_ON_LOAD, Route122_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

Route122_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	setflag FLAG_HIDE_KIZU_PHOENIX
	end

Route122_MapScripts_MAP_SCRIPT_ON_LOAD:
	goto_if_set FLAG_BADGE06_GET, Route122_MapScripts_MAP_SCRIPT_ON_LOAD_2
	end

Route122_MapScripts_MAP_SCRIPT_ON_LOAD_2:
	setmetatile 10, 8, 0x350, TRUE
	setmetatile 11, 8, 0x351, TRUE
	setmetatile 12, 8, 0x352, TRUE
	setmetatile 10, 7, 0x348, TRUE
	setmetatile 11, 7, 0x349, TRUE
	setmetatile 12, 7, 0x34A, TRUE
	setmetatile 10, 6, 0x340, TRUE
	setmetatile 11, 6, 0x341, TRUE
	setmetatile 12, 6, 0x342, TRUE
	setmetatile 10, 5, 0x338, TRUE
	setmetatile 11, 5, 0x339, TRUE
	setmetatile 12, 5, 0x33A, TRUE
	return


Route122_EventScript_Oliver::
	msgbox Route122_EventScript_Oliver_Text_0, MSGBOX_NPC
	end


Route122_EventScript_ItemTM34::
	finditem ITEM_TM34
	end


Route122_EventScript_Shrine::
	lock
	goto_if_set FLAG_CAUGHT_CELEBI, Route122_EventScript_Shrine_1
	goto_if_set FLAG_HIDE_MAGMA_HIDEOUT_GRUNTS, Route122_EventScript_Shrine_2
	goto_if_set FLAG_DEFEATED_DAMON_KIZU, Route122_EventScript_Shrine_3
	goto_if_set FLAG_BADGE06_GET, Route122_EventScript_Shrine_4
	release
	end

Route122_EventScript_Shrine_1:
	release
	end

Route122_EventScript_Shrine_2:
	fadeoutbgm 1
	addobject 1
	applymovement 1, PetalburgWoods_Movement_CelebiAppears
	waitmovement 0
	playse SE_PIN
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgWoods_Movement_Question
	waitmovement 0
	delay 60
	waitse
	playmoncry SPECIES_CELEBI, CRY_MODE_NORMAL
	waitmoncry
	applymovement 1, PetalburgWoods_Movement_CelebiGoRight
	waitmovement 0
	playse SE_PIN
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgWoods_Movement_ExclamationRight
	waitmovement 0
	delay 120
	setobjectxy 1, 11, 15
	applymovement 1, PetalburgWoods_Movement_CelebiUp
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgWoods_Movement_FaceDown
	waitmovement 0
	waitse
	playmoncry SPECIES_CELEBI, CRY_MODE_NORMAL
	waitmoncry
	applymovement 1, PetalburgWoods_Movement_CelebiToBattlePlayer
	waitmovement 0
	setwildbattle SPECIES_CELEBI, 45
	dowildbattle
	removeobject 1
	setflag FLAG_CAUGHT_CELEBI
	release
	end

Route122_EventScript_Shrine_3:
	release
	end

Route122_EventScript_Shrine_4:
	fadeoutbgm 1
	applymovement 2, Route122_Movement_OliverMoveIn
	waitmovement 0
	addobject 1
	applymovement 1, PetalburgWoods_Movement_CelebiAppears
	waitmovement 0
	playse SE_PIN
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgWoods_Movement_Question
	applymovement 2, PetalburgWoods_Movement_Question
	waitmovement 0
	delay 60
	waitse
	playmoncry SPECIES_CELEBI, CRY_MODE_NORMAL
	waitmoncry
	applymovement 1, PetalburgWoods_Movement_CelebiGoRight
	waitmovement 0
	playse SE_PIN
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgWoods_Movement_ExclamationRight
	applymovement 2, PetalburgWoods_Movement_ExclamationRight
	waitmovement 0
	delay 120
	setobjectxy 1, 11, 15
	applymovement 1, PetalburgWoods_Movement_CelebiUp
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgWoods_Movement_FaceDown
	applymovement 2, PetalburgWoods_Movement_FaceDown
	waitmovement 0
	waitse
	playmoncry SPECIES_CELEBI, CRY_MODE_NORMAL
	waitmoncry
	playse SE_LEDGE
	applymovement 1, PetalburgWoods_Movement_CelebiJump
	waitmovement 0
	playse SE_LEDGE
	applymovement 1, PetalburgWoods_Movement_CelebiJump
	waitmovement 0
	delay 30
	waitse
	playse SE_BALL_THROW
	waitse
	playse SE_BALL_TRADE
	waitse
	addobject 5
	removeobject 1
	delay 20
	playse SE_BALL_BOUNCE_1
	waitse
	playse SE_BALL_BOUNCE_2
	waitse
	playse SE_BALL_BOUNCE_3
	waitse
	delay 30
	playse SE_CLICK
	waitse
	delay 30
	playbgm MUS_RG_ROCKET_HIDEOUT, FALSE
	addobject 4
	addobject 6
	addobject 7
	applymovement 4, Route122_Movement_ApproachBall
	applymovement 6, Route122_Movement_ApproachBall
	applymovement 7, Route122_Movement_ApproachBall
	waitmovement 0
	delay 20
	removeobject 5
	delay 20
	applymovement 4, Route122_Movement_ApproachCloser
	applymovement 6, Route122_Movement_ApproachCloser
	applymovement 7, Route122_Movement_ApproachCloser
	waitmovement 0
	msgbox Route122_EventScript_Shrine_Text_0
	waitmessage
	applymovement 2, Route122_Movement_StepDown
	waitmovement 0
	msgbox Route122_EventScript_Shrine_Text_1
	waitmessage
	applymovement 2, Route122_Movement_StepDown
	waitmovement 0
	msgbox Route122_EventScript_Shrine_Text_2
	waitmessage
	applymovement 2, Route122_Movement_StepDown
	waitmovement 0
	msgbox Route122_EventScript_Shrine_Text_3
	waitmessage
	closemessage
	applymovement 4, Route122_Movement_StepDown
	waitmovement 0
	delay 20
	msgbox Route122_EventScript_Shrine_Text_4
	waitmessage
	closemessage
	clearflag FLAG_HIDE_KIZU_PHOENIX
	addobject 3
	applymovement 3, Route122_Movement_DamonApproach
	waitmovement 0
	msgbox Route122_EventScript_Shrine_Text_5
	waitmessage
	closemessage
	applymovement 4, Route122_Movement_ThorneExit
	applymovement 6, Route122_Movement_GruntExit
	applymovement 7, Route122_Movement_GruntExit
	waitmovement 0
	msgbox Route122_EventScript_Shrine_Text_6
	waitmessage
	closemessage
	applymovement 4, Route122_Movement_GruntExit
	waitmovement 0
	removeobject 4
	removeobject 6
	removeobject 7
	setflag FLAG_GENERAL_HIDE
	applymovement 3, Route122_Movement_DamonCloser
	waitmovement 0
	msgbox Route122_EventScript_Shrine_Text_7
	trainerbattle_no_intro TRAINER_MAY_ROUTE_119_MUDKIP, Route122_Text_DamonDefeated
	msgbox Route122_EventScript_Shrine_Text_8
	waitmessage
	closemessage
	applymovement 3, Route122_Movement_DamonExit
	waitmovement 0
	removeobject 3
	setflag FLAG_HIDE_KIZU_PHOENIX
	fadedefaultbgm
	applymovement OBJ_EVENT_ID_PLAYER, Route122_Movement_FaceRight
	applymovement 2, Route122_Movement_FaceLeft
	waitmovement 0
	msgbox Route122_EventScript_Shrine_Text_9
	waitmessage
	applymovement 2, Route122_Movement_StepLeft
	waitmovement 0
	msgbox Route122_EventScript_Shrine_Text_10
	waitmessage
	closemessage
	applymovement 2, Route122_Movement_DamonExit
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgWoods_Movement_FaceDown
	waitmovement 0
	removeobject 2
	setflag FLAG_HIDE_OLIVER_KIZU
	setflag FLAG_DEFEATED_DAMON_KIZU
	release
	end


Route122_Movement_OliverMoveIn:
	face_left
	emote_question_mark
	delay_16
	delay_16
	delay_16
	delay_16
	walk_left
	walk_in_place_up
	step_end

Route122_Movement_ApproachBall:
	walk_up
	walk_up
	walk_up
	step_end

Route122_Movement_DamonApproach:
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

Route122_Movement_ApproachCloser:
	walk_up
	step_end

Route122_Movement_StepDown:
	walk_in_place_down
	step_end

Route122_Movement_ThorneExit:
	walk_right
	face_up
	step_end

Route122_Movement_GruntExit:
	walk_down
	walk_down
	walk_down
	walk_down
	step_end

Route122_Movement_DamonCloser:
	walk_up
	walk_up
	step_end

Route122_Movement_DamonExit:
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	step_end

Route122_Movement_FaceRight:
	face_right
	step_end

Route122_Movement_FaceLeft:
	face_left
	step_end

Route122_Movement_StepLeft:
	walk_in_place_left
	step_end

PetalburgWoods_Movement_CelebiToBattlePlayer:
	walk_up
	step_end

Route122_EventScript_Oliver_Text_0:
	.string "OLIVER: Well, {PLAYER}, this must be\n"
	.string "the shrine.\p"
	.string "I wonder if it really has anything to do\n"
	.string "with Celebi.$"

Route122_EventScript_Shrine_Text_0:
	.string "THORNE: Well done, {PLAYER}.\p"
	.string "I must thank you for luring in Celebi\n"
	.string "for us.\p"
	.string "We truly couldn't have done it without\n"
	.string "you.$"

Route122_EventScript_Shrine_Text_1:
	.string "OLIVER: Professor!?\p"
	.string "What are you talking about?\p"
	.string "What's going on?\p"
	.string "THORNE: Oh, OLIVER.\p"
	.string "You're so unimaginably gullible.\n"
	.string "Although, that made you the perfect\l"
	.string "pawn.\p"
	.string "Celebi seems to be drawn to {PLAYER},\n"
	.string "so I had you act as my unknowing\l"
	.string "accomplice and bring {PLAYER} here.\p"
	.string "This shrine didn't just magically\n"
	.string "appear, my grunts built it just a few\l"
	.string "hours ago.$"

Route122_EventScript_Shrine_Text_2:
	.string "OLIVER: I don't believe it...\p"
	.string "All this time, you've been a part of some\n"
	.string "weird gang?\p"
	.string "What about the university, and your\n"
	.string "students?\p"
	.string "THORNE: Working at the university was\n"
	.string "simply a way for me to research\l"
	.string "Legendary POKéMON as much as I could.\p"
	.string "All for the sake of my boss's goal.$"

Route122_EventScript_Shrine_Text_3:
	.string "OLIVER: And who is this boss that uses\n"
	.string "such underhanded and deceitful\l"
	.string "tactics?\p"
	.string "THORNE: Haha, I do not feel obliged to\n"
	.string "answer that.\p"
	.string "Now, if you'll excuse me, I must take my\n"
	.string "leave.$"

Route122_EventScript_Shrine_Text_4:
	.string "THORNE: DAMON, if you would, take care\n"
	.string "of these two.$"

Route122_EventScript_Shrine_Text_5:
	.string "DAMON: It would be my pleasure!$"

Route122_EventScript_Shrine_Text_6:
	.string "THORNE: Until we meet again, {PLAYER}\n"
	.string "and OLIVER.$"

Route122_EventScript_Shrine_Text_7:
	.string "DAMON: I've been looking forward to\n"
	.string "this, brat!\p"
	.string "You'll pay for shutting down our\n"
	.string "Ecruteak base!$"

Route122_EventScript_Shrine_Text_8:
	.string "DAMON: You may have overwhelming\n"
	.string "strength, but it won't do you any good!\p"
	.string "THORNE has already taken Celebi away\n"
	.string "to a hidden base that you will never\l"
	.string "find!\p"
	.string "Good riddance, brat!$"

Route122_EventScript_Shrine_Text_9:
	.string "OLIVER: This is bad, {PLAYER}, really\n"
	.string "bad!\p"
	.string "There's no telling what that evil group\n"
	.string "will do with Celebi's time traveling\l"
	.string "abilities.$"

Route122_EventScript_Shrine_Text_10:
	.string "OLIVER: Gah! I can't believe I trusted\n"
	.string "PROF. THORNE for so many years!\p"
	.string "{PLAYER}, we have to find them at all\n"
	.string "costs!\p"
	.string "Let's go!$"

Route122_Text_DamonDefeated::
	.string "DAMON: How do you keep getting\n"
	.string "stronger, and stronger!?$"
