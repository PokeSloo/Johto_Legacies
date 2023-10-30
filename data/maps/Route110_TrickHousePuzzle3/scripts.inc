Route110_TrickHousePuzzle3_MapScripts::
	.byte 0

Route110_TrickHousePuzzle3_EventScript_Justin::
	trainerbattle_single TRAINER_JUSTIN, Route110_TrickHousePuzzle3_Text_JustinIntro, Route110_TrickHousePuzzle3_Text_JustinDefeat
	msgbox Route110_TrickHousePuzzle3_Text_JustinPostBattle, MSGBOX_AUTOCLOSE
	end

Route110_TrickHousePuzzle3_EventScript_Martha::
	trainerbattle_single TRAINER_MARTHA, Route110_TrickHousePuzzle3_Text_MarthaIntro, Route110_TrickHousePuzzle3_Text_MarthaDefeat
	msgbox Route110_TrickHousePuzzle3_Text_MarthaPostBattle, MSGBOX_AUTOCLOSE
	end

Route110_TrickHousePuzzle3_EventScript_Alan::
	trainerbattle_single TRAINER_ALAN, Route110_TrickHousePuzzle3_Text_AlanIntro, Route110_TrickHousePuzzle3_Text_AlanDefeat
	msgbox Route110_TrickHousePuzzle3_Text_AlanPostBattle, MSGBOX_AUTOCLOSE
	end

Route110_TrickHousePuzzle3_Text_WroteSecretCodeLockOpened:
	.string "{PLAYER} wrote down the secret code\n"
	.string "on the door.\p"
	.string "“TRICK MASTER is coveted.”\n"
	.string "… … … … … … … …\p"
	.string "The lock clicked open!$"

Route110_TrickHousePuzzle3_Text_JustinIntro:
	.string "You've seen too much, we're not letting\n"
	.string "you leave now!$"

Route110_TrickHousePuzzle3_Text_JustinDefeat:
	.string "I've done all I can.$"

Route110_TrickHousePuzzle3_Text_JustinPostBattle:
	.string "You might as well leave then, you need a\n"
	.string "passcode to get into the lower level.$"

Route110_TrickHousePuzzle3_Text_MarthaIntro:
	.string "Don't give us any trouble kid!$"

Route110_TrickHousePuzzle3_Text_MarthaDefeat:
	.string "You… You're awful!$"

Route110_TrickHousePuzzle3_Text_MarthaPostBattle:
	.string "I know I'm weak!\n"
	.string "And, I have no sense of direction!\p"
	.string "That's why I joined this group...$"

Route110_TrickHousePuzzle3_Text_AlanIntro:
	.string "Really? Nobody else can stop you?\p"
	.string "I guess it's up to me!$"

Route110_TrickHousePuzzle3_Text_AlanDefeat:
	.string "I don't get it.\n"
	.string "How did I lose?$"

Route110_TrickHousePuzzle3_Text_AlanPostBattle:
	.string "I thought I was the main character\n"
	.string "here.$"

