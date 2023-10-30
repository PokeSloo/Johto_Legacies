Route110_TrickHousePuzzle1_MapScripts::
	.byte 0

Route110_TrickHousePuzzle1_EventScript_Sally::
	trainerbattle_single TRAINER_SALLY, Route110_TrickHousePuzzle1_Text_SallyIntro, Route110_TrickHousePuzzle1_Text_SallyDefeat
	msgbox Route110_TrickHousePuzzle1_Text_SallyPostBattle, MSGBOX_AUTOCLOSE
	end

Route110_TrickHousePuzzle1_EventScript_Eddie::
	trainerbattle_single TRAINER_EDDIE, Route110_TrickHousePuzzle1_Text_EddieIntro, Route110_TrickHousePuzzle1_Text_EddieDefeat
	msgbox Route110_TrickHousePuzzle1_Text_EddiePostBattle, MSGBOX_AUTOCLOSE
	end

Route110_TrickHousePuzzle1_EventScript_Robin::
	trainerbattle_single TRAINER_ROBIN, Route110_TrickHousePuzzle1_Text_RobinIntro, Route110_TrickHousePuzzle1_Text_RobinDefeat
	msgbox Route110_TrickHousePuzzle1_Text_RobinPostBattle, MSGBOX_AUTOCLOSE
	end

Route110_TrickHousePuzzle1_Text_WroteSecretCodeLockOpened::
	.string "{PLAYER} wrote down the secret code\n"
	.string "on the door.\p"
	.string "“TRICK MASTER is fabulous.”\n"
	.string "… … … … … … … …\p"
	.string "The lock clicked open!$"

Route110_TrickHousePuzzle1_Text_SallyIntro:
	.string "Who let a kid in here?$"

Route110_TrickHousePuzzle1_Text_SallyDefeat:
	.string "What? Just who are you?$"

Route110_TrickHousePuzzle1_Text_SallyPostBattle:
	.string "You found the secret switch under the\n"
	.string "bonsai tree?\p"
	.string "Just what was that idiot upstairs\n"
	.string "doing?$"

Route110_TrickHousePuzzle1_Text_EddieIntro:
	.string "Intruder!$"

Route110_TrickHousePuzzle1_Text_EddieDefeat:
	.string "A strong intruder, it seems...$"

Route110_TrickHousePuzzle1_Text_EddiePostBattle:
	.string "No, please, come in\p"
	.string "Make yourself at home.\p"
	.string "Stupid brat.$"

Route110_TrickHousePuzzle1_Text_RobinIntro:
	.string "Whoa there, are you lost kid?\p"
	.string "I'm taking you back upstairs!$"

Route110_TrickHousePuzzle1_Text_RobinDefeat:
	.string "Uhm... Please go back upstairs?$"

Route110_TrickHousePuzzle1_Text_RobinPostBattle:
	.string "Don't you go through those warp pads!$"

Route110_TrickHousePuzzle1_EventScript_Scientist::
	lock
	faceplayer
	goto_if_set FLAG_GOT_ECRUTEAK_PHOENIX_PASSWORD, Route110_TrickHousePuzzle1_EventScript_Scientist_1
	msgbox Route110_TrickHousePuzzle1_EventScript_Scientist_Text_1
	waitmessage
	playfanfare MUS_OBTAIN_ITEM
	msgbox Route110_TrickHousePuzzle1_EventScript_Scientist_Text_2
	waitmessage
	waitfanfare
	msgbox Route110_TrickHousePuzzle1_EventScript_Scientist_Text_0
	waitmessage
	setflag FLAG_GOT_ECRUTEAK_PHOENIX_PASSWORD
	release
	end

Route110_TrickHousePuzzle1_EventScript_Scientist_1:
	msgbox Route110_TrickHousePuzzle1_EventScript_Scientist_Text_0
	release
	end


Route110_TrickHousePuzzle1_EventScript_Scientist_Text_0:
	.string "Please, you must shut this place down.$"

Route110_TrickHousePuzzle1_EventScript_Scientist_Text_1:
	.string "Who are you?\p"
	.string "...\p"
	.string "Oh, you're trying to shut this operation\n"
	.string "down?\p"
	.string "Look, I was actually a good scientist\n"
	.string "before I was forced to work here.\p"
	.string "They said they'll come after my family\n"
	.string "if I don't do what they say.\p"
	.string "You'll need a passcode to get into the\n"
	.string "lower levels.\p"
	.string "Here, it's 428752.$"

Route110_TrickHousePuzzle1_EventScript_Scientist_Text_2:
	.string "{PLAYER} got the passcode!$"
