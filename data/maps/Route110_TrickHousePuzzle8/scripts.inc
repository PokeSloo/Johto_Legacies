Route110_TrickHousePuzzle8_MapScripts::
	.byte 0


Route110_TrickHousePuzzle8_EventScript_Damon::
	lock
	faceplayer
	msgbox Route110_TrickHousePuzzle8_EventScript_Damon_Text_0
	waitmessage
	trainerbattle_no_intro TRAINER_VINCENT, Route110_TrickHousePuzzle8_Text_VincentDefeat
	msgbox Route110_TrickHousePuzzle8_EventScript_Damon_Text_1
	waitmessage
	closemessage
	fadescreen FADE_TO_BLACK
	removeobject 5
	setflag FLAG_HIDE_DAMON_ECRUTEAK
	fadescreen FADE_FROM_BLACK
	release
	end


Route110_TrickHousePuzzle8_EventScript_Scientist_1::
	msgbox Route110_TrickHousePuzzle8_EventScript_Scientist_1_Text_0, MSGBOX_NPC
	end


Route110_TrickHousePuzzle8_EventScript_Scientist_2::
	msgbox Route110_TrickHousePuzzle8_EventScript_Scientist_2_Text_0, MSGBOX_NPC
	end


Route110_TrickHousePuzzle8_EventScript_Scientist_3::
	msgbox Route110_TrickHousePuzzle8_EventScript_Scientist_3_Text_0, MSGBOX_NPC
	end


Route110_TrickHousePuzzle8_EventScript_Scientist_4::
	msgbox Route110_TrickHousePuzzle8_EventScript_Scientist_4_Text_0, MSGBOX_NPC
	end


Route110_TrickHousePuzzle8_EventScript_Keira::
	trainerbattle_single TRAINER_KEIRA, Route110_TrickHousePuzzle8_Text_KeiraIntro, Route110_TrickHousePuzzle8_Text_KeiraDefeat
	msgbox Route110_TrickHousePuzzle8_Text_KeiraPostBattle, MSGBOX_AUTOCLOSE
	end

Route110_TrickHousePuzzle8_EventScript_Leroy::
	trainerbattle_single TRAINER_LEROY, Route110_TrickHousePuzzle8_Text_LeroyIntro, Route110_TrickHousePuzzle8_Text_LeroyDefeat
	msgbox Route110_TrickHousePuzzle8_Text_LeroyPostBattle, MSGBOX_AUTOCLOSE
	end

Route110_TrickHousePuzzle8_EventScript_WroteSecretCodeLockOpened::
	.string "{PLAYER} wrote down the secret code\n"
	.string "on the door.\p"
	.string "“TRICK MASTER I love.”\n"
	.string "… … … … … … … …\p"
	.string "The lock clicked open!$"

Route110_TrickHousePuzzle8_Text_VincentDefeat:
	.string "Impossible...\p"
	.string "How could you have grown so strong in\n"
	.string "such little time?$"

Route110_TrickHousePuzzle8_Text_KeiraIntro:
	.string "There's no way you're getting past us!$"

Route110_TrickHousePuzzle8_Text_KeiraDefeat:
	.string "This isn't right!\n"
	.string "I can't lose!$"

Route110_TrickHousePuzzle8_Text_KeiraPostBattle:
	.string "It's a miracle that you beat me.\n"
	.string "You can brag about it.$"

Route110_TrickHousePuzzle8_Text_LeroyIntro:
	.string "That's far enough kid!\p"
	.string "We're taking you down now.$"

Route110_TrickHousePuzzle8_Text_LeroyDefeat:
	.string "Pfft, you're still no match for DAMON.$"

Route110_TrickHousePuzzle8_Text_LeroyPostBattle:
	.string "Why are you even down here?$"

Route110_TrickHousePuzzle8_EventScript_Damon_Text_0:
	.string "DAMON: Well well well, I knew there was\n"
	.string "something special about you.\p"
	.string "My gut feelings are never wrong.\p"
	.string "I take it you were actually the one who\n"
	.string "summoned Celebi, the other brat has no\l"
	.string "talent!\p"
	.string "Sorry kid, but you won't be saving your\n"
	.string "friend today!$"

Route110_TrickHousePuzzle8_EventScript_Damon_Text_1:
	.string "There's definitely more to you than\n"
	.string "meets the eye.\p"
	.string "I'll admit you are strong for a\n"
	.string "snot-nosed brat, but don't get cocky.\p"
	.string "Next time I will send you running home\n"
	.string "crying...$"

Route110_TrickHousePuzzle8_EventScript_Scientist_1_Text_0:
	.string "W-what? Who are you?\p"
	.string "How did you get in here?$"

Route110_TrickHousePuzzle8_EventScript_Scientist_2_Text_0:
	.string "Do you have any idea how many years it\n"
	.string "took for us to build up this\l"
	.string "organization?$"

Route110_TrickHousePuzzle8_EventScript_Scientist_3_Text_0:
	.string "Please, just leave.\p"
	.string "There's nothing you can do to stop\n"
	.string "them.$"

Route110_TrickHousePuzzle8_EventScript_Scientist_4_Text_0:
	.string "What's a kid doing down here?\p"
	.string "Are you the bosses kid?$"
