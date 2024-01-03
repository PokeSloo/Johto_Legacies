PetalburgWoods_MapScripts::
	.byte 0


PetalburgWoods_EventScript_Lyle::
	trainerbattle_single TRAINER_GRUNT_PETALBURG_WOODS, PetalburgWoods_Text_GoBugPokemonTeam, PetalburgWoods_Text_ICouldntWin, PetalburgWoods_EventScript_Grunt_Post
	msgbox PetalburgWoods_Text_ImOutOfPokeBalls, MSGBOX_AUTOCLOSE
	end


PetalburgWoods_EventScript_Grunt_Post::
	msgbox PetalburgWoods_EventScript_Grunt_Post_Text_0
	waitmessage
	closemessage
	applymovement 8, PetalburgWoods_Movement_GruntLeave
	waitmovement 0
	removeobject 8
	setflag FLAG_ILEX_BATTLE_GRUNT
	release
	end


PetalburgWoods_Movement_GruntLeave:
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

PetalburgWoods_EventScript_Grunt::
	lock
	msgbox PetalburgWoods_EventScript_Grunt_Text_0
	waitmessage
	closemessage
	playse SE_PIN
	applymovement 3, PetalburgWoods_Movement_GruntExclamation
	delay 60
	msgbox PetalburgWoods_EventScript_Grunt_Text_1
	waitmessage
	closemessage
	setobjectmovementtype 3, MOVEMENT_TYPE_FACE_UP_LEFT_AND_RIGHT
	release
	end


PetalburgWoods_Movement_GruntExclamation:
	emote_exclamation_mark
	walk_in_place_down
	step_end

PetalburgWoods_EventScript_Shrine::
	lock
	goto_if_set FLAG_CAUGHT_CELEBI, PetalburgWoods_EventScript_Shrine_1
	goto_if_set FLAG_HIDE_MAGMA_HIDEOUT_GRUNTS, PetalburgWoods_EventScript_Shrine_2
	goto_if_set FLAG_ILEX_BLOCKING_GRUNT, PetalburgWoods_EventScript_Shrine_3
	goto_if_set FLAG_DEFEATED_DEWFORD_GYM, PetalburgWoods_EventScript_Shrine_4
	release
	end

PetalburgWoods_EventScript_Shrine_1:
	release
	end

PetalburgWoods_EventScript_Shrine_2:
	fadeoutbgm 1
	addobject 4
	applymovement 4, PetalburgWoods_Movement_CelebiAppears
	waitmovement 0
	playse SE_PIN
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgWoods_Movement_Question
	waitmovement 0
	delay 60
	waitse
	playmoncry SPECIES_CELEBI, CRY_MODE_NORMAL
	waitmoncry
	applymovement 4, PetalburgWoods_Movement_CelebiGoRight
	waitmovement 0
	playse SE_PIN
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgWoods_Movement_ExclamationRight
	waitmovement 0
	delay 120
	setobjectxy 4, 17, 52
	applymovement 4, PetalburgWoods_Movement_CelebiUp
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgWoods_Movement_FaceDown
	waitmovement 0
	waitse
	playmoncry SPECIES_CELEBI, CRY_MODE_NORMAL
	waitmoncry
	applymovement 4, PetalburgWoods_Movement_CelebiToBattlePlayer
	waitmovement 0
	setwildbattle SPECIES_CELEBI, 45
	dowildbattle
	removeobject 4
	setflag FLAG_CAUGHT_CELEBI
	release
	end

PetalburgWoods_EventScript_Shrine_3:
	release
	end

PetalburgWoods_EventScript_Shrine_4:
	fadeoutbgm 1
	addobject 4
	applymovement 4, PetalburgWoods_Movement_CelebiAppears
	waitmovement 0
	playse SE_PIN
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgWoods_Movement_Question
	waitmovement 0
	delay 60
	waitse
	playmoncry SPECIES_CELEBI, CRY_MODE_NORMAL
	waitmoncry
	applymovement 4, PetalburgWoods_Movement_CelebiGoRight
	waitmovement 0
	playse SE_PIN
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgWoods_Movement_ExclamationRight
	waitmovement 0
	delay 120
	setobjectxy 4, 17, 52
	applymovement 4, PetalburgWoods_Movement_CelebiUp
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgWoods_Movement_FaceDown
	waitmovement 0
	waitse
	playmoncry SPECIES_CELEBI, CRY_MODE_NORMAL
	waitmoncry
	playse SE_LEDGE
	applymovement 4, PetalburgWoods_Movement_CelebiJump
	waitmovement 0
	playse SE_LEDGE
	applymovement 4, PetalburgWoods_Movement_CelebiJump
	waitmovement 0
	fadescreen FADE_TO_WHITE
	removeobject 4
	playbgm MUS_RAYQUAZA_APPEARS, FALSE
	setwarp MAP_DESERT_UNDERPASS, 17, 46
	special TimeTravelBackClock
	waitstate
	fadedefaultbgm
	release
	end


PetalburgWoods_Movement_CelebiAppears:
	walk_down
	walk_down
	walk_down
	step_end

PetalburgWoods_Movement_Question:
	emote_question_mark
	step_end

PetalburgWoods_Movement_CelebiGoRight:
	walk_right
	walk_fast_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	step_end

PetalburgWoods_Movement_ExclamationRight:
	emote_exclamation_mark
	walk_in_place_fast_right
	step_end

PetalburgWoods_Movement_CelebiUp:
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

PetalburgWoods_Movement_FaceDown:
	walk_in_place_down
	step_end

PetalburgWoods_Movement_CelebiJump:
	jump_in_place_up
	step_end

PetalburgWoods_EventScript_Sign2::
	msgbox PetalburgWoods_Text_TrainerTipsPP, MSGBOX_SIGN
	end

PetalburgWoods_EventScript_James::
	trainerbattle_single TRAINER_JAMES_1, PetalburgWoods_Text_InstantlyPopularWithBugPokemon, PetalburgWoods_Text_CantBePopularIfILose, PetalburgWoods_EventScript_TryRegisterJames
	specialvar VAR_RESULT, ShouldTryRematchBattle
	goto_if_eq VAR_RESULT, TRUE, PetalburgWoods_EventScript_JamesRematch
	setvar VAR_0x8004, TRAINER_JAMES_1
	specialvar VAR_RESULT, IsTrainerRegistered
	goto_if_eq VAR_RESULT, FALSE, PetalburgWoods_EventScript_TryRegisterJames2
	msgbox PetalburgWoods_Text_PeopleRespectYou, MSGBOX_DEFAULT
	release
	end

PetalburgWoods_EventScript_TryRegisterJames::
	special PlayerFaceTrainerAfterBattle
	waitmovement 0
	goto_if_set FLAG_HAS_MATCH_CALL, PetalburgWoods_EventScript_RegisterJames
	release
	end

PetalburgWoods_EventScript_RegisterJames::
	msgbox PetalburgWoods_Text_IWantRematch1, MSGBOX_DEFAULT
	register_matchcall TRAINER_JAMES_1
	release
	end

PetalburgWoods_EventScript_TryRegisterJames2::
	goto_if_set FLAG_HAS_MATCH_CALL, PetalburgWoods_EventScript_RegisterJames2
	msgbox PetalburgWoods_Text_PeopleRespectYou, MSGBOX_DEFAULT
	release
	end

PetalburgWoods_EventScript_RegisterJames2::
	msgbox PetalburgWoods_Text_IWantRematch2, MSGBOX_DEFAULT
	register_matchcall TRAINER_JAMES_1
	release
	end

PetalburgWoods_EventScript_JamesRematch::
	trainerbattle_rematch TRAINER_JAMES_1, PetalburgWoods_Text_MyPokemonHaveGrown, PetalburgWoods_Text_CantBePopularIfLose
	msgbox PetalburgWoods_Text_IveBeenTrainingHard, MSGBOX_AUTOCLOSE
	end

PetalburgWoods_Text_GoBugPokemonTeam:
	.string "Hey! You there!\p"
	.string "What was that green onion looking\n"
	.string "POKéMON!?\p"
	.string "...\p"
	.string "I'm going to need you to come with me!$"

PetalburgWoods_Text_ICouldntWin:
	.string "Crap, this isn't good!$"

PetalburgWoods_Text_ImOutOfPokeBalls:
	.string "I caught a bunch of POKéMON.\n"
	.string "Now I'm out of POKé BALLS.$"

PetalburgWoods_Text_InstantlyPopularWithBugPokemon:
	.string "I saw some red-hooded weirdo walk by,\n"
	.string "he looked like he was bugging out!$"

PetalburgWoods_Text_CantBePopularIfILose:
	.string "Now you've got me bugging out!$"

PetalburgWoods_Text_PeopleRespectYou:
	.string "If you have a big BUG POKéMON,\n"
	.string "people respect you for it.$"

PetalburgWoods_Text_IWantRematch1:
	.string "Say, you're not too bad.\p"
	.string "Register me in your POKéNAV, so my bugs\n"
	.string "and I can have a rematch sometime!$"

PetalburgWoods_Text_IWantRematch2:
	.string "Say, you're not too bad.\p"
	.string "Register me in your POKéNAV, so my bugs\n"
	.string "and I can have a rematch sometime!$"

PetalburgWoods_Text_MyPokemonHaveGrown:
	.string "My BUG POKéMON have grown.\n"
	.string "Let me show you!$"

PetalburgWoods_Text_CantBePopularIfLose:
	.string "You've always got me bugging out.$"

PetalburgWoods_Text_IveBeenTrainingHard:
	.string "I guess my BUG POKéMON haven't grown\n"
	.string "enough...$"

PetalburgWoods_Text_TrainerTipsPP:
	.string "TRAINER TIPS\p"
	.string "ILEX FOREST is so overgrown with trees\n"
	.string "that you can't see the sky.\p"
	.string "Please watch out for items that may\n"
	.string "have been dropped.$"

PetalburgWoods_EventScript_Grunt_Post_Text_0:
	.string "I can't believe I lost to some\n"
	.string "red-headed shrimp like you...\p"
	.string "My boss will be hearing about this...$"

PetalburgWoods_EventScript_Grunt_Text_0:
	.string "Now, where is that Shrine...?\p"
	.string "And where did all the other grunts go?\p"
	.string "I can't find anything in this stupid\n"
	.string "forest!$"

PetalburgWoods_EventScript_Grunt_Text_1:
	.string "Hey!\p"
	.string "Mind your own business, punk!$"
