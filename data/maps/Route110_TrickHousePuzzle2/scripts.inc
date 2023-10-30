Route110_TrickHousePuzzle2_MapScripts::
	.byte 0

Route110_TrickHousePuzzle2_EventScript_Ted::
	trainerbattle_single TRAINER_TED, Route110_TrickHousePuzzle2_Text_TedIntro, Route110_TrickHousePuzzle2_Text_TedDefeat
	msgbox Route110_TrickHousePuzzle2_Text_TedPostBattle, MSGBOX_AUTOCLOSE
	end

Route110_TrickHousePuzzle2_EventScript_Paul::
	trainerbattle_single TRAINER_PAUL, Route110_TrickHousePuzzle2_Text_PaulIntro, Route110_TrickHousePuzzle2_Text_PaulDefeat
	msgbox Route110_TrickHousePuzzle2_Text_PaulPostBattle, MSGBOX_AUTOCLOSE
	end

Route110_TrickHousePuzzle2_EventScript_Georgia::
	trainerbattle_single TRAINER_GEORGIA, Route110_TrickHousePuzzle2_Text_GeorgiaIntro, Route110_TrickHousePuzzle2_Text_GeorgiaDefeat
	msgbox Route110_TrickHousePuzzle2_Text_GeorgiaPostBattle, MSGBOX_AUTOCLOSE
	end

Route110_TrickHousePuzzle2_Text_WroteSecretCodeLockOpened:
	.string "{PLAYER} wrote down the secret code\n"
	.string "on the door.\p"
	.string "“TRICK MASTER is smart.”\n"
	.string "… … … … … … … …\p"
	.string "The lock clicked open!$"

Route110_TrickHousePuzzle2_Text_TedIntro:
	.string "You walked straight into our trap!$"

Route110_TrickHousePuzzle2_Text_TedDefeat:
	.string "The element of surprise is no match for\n"
	.string "raw power.$"

Route110_TrickHousePuzzle2_Text_TedPostBattle:
	.string "Just go back now kid, this is way bigger\n"
	.string "than you.$"

Route110_TrickHousePuzzle2_Text_PaulIntro:
	.string "We've prepared for you!$"

Route110_TrickHousePuzzle2_Text_PaulDefeat:
	.string "Not prepared enough...$"

Route110_TrickHousePuzzle2_Text_PaulPostBattle:
	.string "Forget what you've seen here, and we'll\n"
	.string "let you leave.$"

Route110_TrickHousePuzzle2_Text_GeorgiaIntro:
	.string "Stay out of our business, kid!$"

Route110_TrickHousePuzzle2_Text_GeorgiaDefeat:
	.string "Oof, what's with this kid?$"

Route110_TrickHousePuzzle2_Text_GeorgiaPostBattle:
	.string "Our operation is too complex for a kid\n"
	.string "like you to understand.$"

