MagmaHideout_2F_2R_MapScripts::
	.byte 0

MagmaHideout_2F_2R_EventScript_Grunt15::
	trainerbattle_single TRAINER_GRUNT_MAGMA_HIDEOUT_15, MagmaHideout_2F_2R_Text_Grunt15Intro, MagmaHideout_2F_2R_Text_Grunt15Defeat
	msgbox MagmaHideout_2F_2R_Text_Grunt15PostBattle, MSGBOX_AUTOCLOSE
	end

MagmaHideout_2F_2R_EventScript_Grunt6::
	trainerbattle_single TRAINER_GRUNT_MAGMA_HIDEOUT_6, MagmaHideout_2F_2R_Text_Grunt6Intro, MagmaHideout_2F_2R_Text_Grunt6Defeat
	msgbox MagmaHideout_2F_2R_Text_Grunt6PostBattle, MSGBOX_AUTOCLOSE
	end

MagmaHideout_2F_2R_EventScript_Grunt7::
	trainerbattle_single TRAINER_GRUNT_MAGMA_HIDEOUT_7, MagmaHideout_2F_2R_Text_Grunt7Intro, MagmaHideout_2F_2R_Text_Grunt7Defeat
	msgbox MagmaHideout_2F_2R_Text_Grunt7PostBattle, MSGBOX_AUTOCLOSE
	end

MagmaHideout_2F_2R_EventScript_Grunt8::
	trainerbattle_single TRAINER_GRUNT_MAGMA_HIDEOUT_8, MagmaHideout_2F_2R_Text_Grunt8Intro, MagmaHideout_2F_2R_Text_Grunt8Defeat
	msgbox MagmaHideout_2F_2R_Text_Grunt8PostBattle, MSGBOX_AUTOCLOSE
	end

MagmaHideout_2F_2R_Text_Grunt15Intro:
	.string "I'll stall you for as long as I can!$"

MagmaHideout_2F_2R_Text_Grunt15Defeat:
	.string "Sorry Boss, I held off the intruder as\n"
	.string "long as I could...$"

MagmaHideout_2F_2R_Text_Grunt15PostBattle:
	.string "Do you really have to keep meddling with\n"
	.string "us?$"

MagmaHideout_2F_2R_Text_Grunt6Intro:
	.string "You can try, but you will never stop us\n"
	.string "for good!$"

MagmaHideout_2F_2R_Text_Grunt6Defeat:
	.string "We will never give up on our goals...$"

MagmaHideout_2F_2R_Text_Grunt6PostBattle:
	.string "Very soon, Team Phoenix will be\n"
	.string "unstoppable!$"

MagmaHideout_2F_2R_Text_Grunt7Intro:
	.string "You really think you can defeat us all!?$"

MagmaHideout_2F_2R_Text_Grunt7Defeat:
	.string "Ok, maybe you can defeat us all...$"

MagmaHideout_2F_2R_Text_Grunt7PostBattle:
	.string "I've heard you're good, but I didn't\n"
	.string "know you would be this good.$"

MagmaHideout_2F_2R_Text_Grunt8Intro:
	.string "I'll teach you to take us grunts\n"
	.string "seriously!$"

MagmaHideout_2F_2R_Text_Grunt8Defeat:
	.string "Seriously...?$"

MagmaHideout_2F_2R_Text_Grunt8PostBattle:
	.string "It doesn't matter, you'll never stop our\n"
	.string "boss...$"

MagmaHideout_2F_2R_EventScript_Thorne::
	lock
	faceplayer
	msgbox MagmaHideout_2F_2R_EventScript_Thorne_Text_0
	trainerbattle_no_intro TRAINER_MAY_ROUTE_103_TREECKO, MagmaHideout_2F_2R_Text_ThorneDefeated
	msgbox MagmaHideout_2F_2R_EventScript_Thorne_Text_1
	waitmessage
	closemessage
	specialvar VAR_RESULT, GetPlayerFacingDirection
	compare VAR_RESULT, DIR_NORTH
	goto_if_eq MagmaHideout_2F_2R_EventScript_Thorne_2
	applymovement 7, MagmaHideout_2F_2R_Movement_ThorneExitDown
	waitmovement 0
MagmaHideout_2F_2R_EventScript_Thorne_1:
	removeobject 7
	setflag FLAG_HIDE_THORNE_RAGE_HIDEOUT
	setflag FLAG_HIDE_SILVER_RAGE_HIDEOUT
	release
	end

MagmaHideout_2F_2R_EventScript_Thorne_2:
	applymovement 7, MagmaHideout_2F_2R_Movement_ThorneExitAround
	waitmovement 0
	goto MagmaHideout_2F_2R_EventScript_Thorne_1


MagmaHideout_2F_2R_Movement_ThorneExitAround:
	walk_left
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	step_end

MagmaHideout_2F_2R_Movement_ThorneExitDown:
	walk_down
	walk_left
	walk_down
	walk_down
	walk_down
	walk_down
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	step_end

MagmaHideout_2F_2R_EventScript_Test::
	lock
	faceplayer
	msgbox MagmaHideout_2F_2R_EventScript_Test_Text_0
	waitmessage
	closemessage
	fadescreen FADE_TO_WHITE
	playbgm MUS_RAYQUAZA_APPEARS, FALSE
	setwarp MAP_MAGMA_HIDEOUT_1F, 15, 3
	special TimeTravelBackClock
	waitstate
	fadedefaultbgm
	release
	end


MagmaHideout_2F_2R_EventScript_Thorne_Text_0:
	.string "THORNE: {PLAYER}.\p"
	.string "I would say it's a pleasant surprise,\n"
	.string "but truth be told, I was hoping DAMON\l"
	.string "would have held you off a bit longer.\p"
	.string "Fortunately, our preparations with\n"
	.string "Celebi are nearly complete, and our\l"
	.string "boss's goal is nearly at hand.\p"
	.string "Now, I will do my part to hold you back!$"

MagmaHideout_2F_2R_EventScript_Thorne_Text_1:
	.string "I may have lost the battle, but Team\n"
	.string "Phoenix will surely win this war.\p"
	.string "I've done my part by delaying you.\p"
	.string "Now, I'll take my leave.$"

MagmaHideout_2F_2R_EventScript_Test_Text_0:
	.string "Time travel test$"

MagmaHideout_2F_2R_Text_ThorneDefeated::
	.string "THORNE: I've seen you battle enough to\n"
	.string "know this outcome was inevitable.\p"
	.string "Still, I do hate losing to children.$"
