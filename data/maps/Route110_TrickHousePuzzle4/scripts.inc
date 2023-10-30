Route110_TrickHousePuzzle4_MapScripts::
	.byte 0

Route110_TrickHousePuzzle4_EventScript_Cora::
	trainerbattle_single TRAINER_CORA, Route110_TrickHousePuzzle4_Text_CoraIntro, Route110_TrickHousePuzzle4_Text_CoraDefeat
	msgbox Route110_TrickHousePuzzle4_Text_CoraPostBattle, MSGBOX_AUTOCLOSE
	end

Route110_TrickHousePuzzle4_EventScript_Yuji::
	trainerbattle_single TRAINER_YUJI, Route110_TrickHousePuzzle4_Text_YujiIntro, Route110_TrickHousePuzzle4_Text_YujiDefeat
	msgbox Route110_TrickHousePuzzle4_Text_YujiPostBattle, MSGBOX_AUTOCLOSE
	end

Route110_TrickHousePuzzle4_EventScript_Paula::
	trainerbattle_single TRAINER_PAULA, Route110_TrickHousePuzzle4_Text_PaulaIntro, Route110_TrickHousePuzzle4_Text_PaulaDefeat
	msgbox Route110_TrickHousePuzzle4_Text_PaulaPostBattle, MSGBOX_AUTOCLOSE
	end

Route110_TrickHousePuzzle4_Text_WroteSecretCodeLockOpened:
	.string "{PLAYER} wrote down the secret code\n"
	.string "on the door.\p"
	.string "“TRICK MASTER is cool.”\n"
	.string "… … … … … … … …\p"
	.string "The lock clicked open!$"

Route110_TrickHousePuzzle4_Text_CoraIntro:
	.string "What are all of these shipping\n"
	.string "containers for?\p"
	.string "As if I would tell you!$"

Route110_TrickHousePuzzle4_Text_CoraDefeat:
	.string "Eep! Too strong...$"

Route110_TrickHousePuzzle4_Text_CoraPostBattle:
	.string "You may have won, but I'm still not\n"
	.string "telling you anything.$"

Route110_TrickHousePuzzle4_Text_YujiIntro:
	.string "Hey, you're not wearing a GRUNT\n"
	.string "uniform...\p"
	.string "You must be an intruder!$"

Route110_TrickHousePuzzle4_Text_YujiDefeat:
	.string "The ADMINS aren't going to be happy\n"
	.string "about this...$"

Route110_TrickHousePuzzle4_Text_YujiPostBattle:
	.string "I'm sure DAMON will stop you at least.$"

Route110_TrickHousePuzzle4_Text_PaulaIntro:
	.string "Naughty children like you deserve to be\n"
	.string "punished!$"

Route110_TrickHousePuzzle4_Text_PaulaDefeat:
	.string "Aaak!$"

Route110_TrickHousePuzzle4_Text_PaulaPostBattle:
	.string "Crap, now I'll be punished for letting\n"
	.string "you through.$"

