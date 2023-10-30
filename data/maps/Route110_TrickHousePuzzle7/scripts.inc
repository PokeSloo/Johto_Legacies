Route110_TrickHousePuzzle7_MapScripts::
	map_script MAP_SCRIPT_ON_LOAD, Route110_TrickHousePuzzle7_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

Route110_TrickHousePuzzle7_MapScripts_MAP_SCRIPT_ON_LOAD:
	goto_if_set FLAG_PHOENIX_DOOR_OPEN, Route110_TrickHousePuzzle7_MapScripts_MAP_SCRIPT_ON_LOAD_2
	end

Route110_TrickHousePuzzle7_MapScripts_MAP_SCRIPT_ON_LOAD_2:
	setmetatile 6, 1, 0x2CB, TRUE
	setmetatile 7, 1, 0x2CC, FALSE
	setmetatile 8, 1, 0x2CD, TRUE
	setmetatile 6, 0, 0x2C3, TRUE
	setmetatile 7, 0, 0x2C4, TRUE
	setmetatile 8, 0, 0x2C5, TRUE
	return


Route110_TrickHousePuzzle7_EventScript_KeyPad::
	lock
	goto_if_set FLAG_PHOENIX_DOOR_OPEN, Route110_TrickHousePuzzle7_EventScript_KeyPad_1
	goto_if_set FLAG_GOT_ECRUTEAK_PHOENIX_PASSWORD, Route110_TrickHousePuzzle7_EventScript_KeyPad_2
	msgbox Route110_TrickHousePuzzle7_EventScript_KeyPad_Text_0
	release
	end

Route110_TrickHousePuzzle7_EventScript_KeyPad_1:
	msgbox Route110_TrickHousePuzzle7_EventScript_KeyPad_Text_0
	release
	end

Route110_TrickHousePuzzle7_EventScript_KeyPad_2:
	msgbox Route110_TrickHousePuzzle7_EventScript_KeyPad_Text_1
	waitmessage
	closemessage
	playse SE_SWITCH
	setmetatile 6, 1, 0x2CB, TRUE
	setmetatile 7, 1, 0x2CC, FALSE
	setmetatile 8, 1, 0x2CD, TRUE
	setmetatile 6, 0, 0x2C3, TRUE
	setmetatile 7, 0, 0x2C4, TRUE
	setmetatile 8, 0, 0x2C5, TRUE
	special DrawWholeMapView
	waitse
	setflag FLAG_PHOENIX_DOOR_OPEN
	release
	end


Route110_TrickHousePuzzle7_EventScript_Joshua::
	trainerbattle_single TRAINER_JOSHUA, Route110_TrickHousePuzzle7_Text_JoshuaIntro, Route110_TrickHousePuzzle7_Text_JoshuaDefeat
	msgbox Route110_TrickHousePuzzle7_Text_JoshuaPostBattle, MSGBOX_AUTOCLOSE
	end

Route110_TrickHousePuzzle7_EventScript_Patricia::
	trainerbattle_single TRAINER_PATRICIA, Route110_TrickHousePuzzle7_Text_PatriciaIntro, Route110_TrickHousePuzzle7_Text_PatriciaDefeat
	msgbox Route110_TrickHousePuzzle7_Text_PatriciaPostBattle, MSGBOX_AUTOCLOSE
	end

Route110_TrickHousePuzzle7_EventScript_Alexis::
	trainerbattle_single TRAINER_ALEXIS, Route110_TrickHousePuzzle7_Text_AlexisIntro, Route110_TrickHousePuzzle7_Text_AlexisDefeat
	msgbox Route110_TrickHousePuzzle7_Text_AlexisPostBattle, MSGBOX_AUTOCLOSE
	end

Route110_TrickHousePuzzle7_EventScript_Mariela::
	trainerbattle_single TRAINER_MARIELA, Route110_TrickHousePuzzle7_Text_MarielaIntro, Route110_TrickHousePuzzle7_Text_MarielaDefeat
	msgbox Route110_TrickHousePuzzle7_Text_MarielaPostBattle, MSGBOX_AUTOCLOSE
	end

Route110_TrickHousePuzzle7_EventScript_Alvaro::
	trainerbattle_single TRAINER_ALVARO, Route110_TrickHousePuzzle7_Text_AlvaroIntro, Route110_TrickHousePuzzle7_Text_AlvaroDefeat
	msgbox Route110_TrickHousePuzzle7_Text_AlvaroPostBattle, MSGBOX_AUTOCLOSE
	end

Route110_TrickHousePuzzle7_EventScript_Everett::
	trainerbattle_single TRAINER_EVERETT, Route110_TrickHousePuzzle7_Text_EverettIntro, Route110_TrickHousePuzzle7_Text_EverettDefeat
	msgbox Route110_TrickHousePuzzle7_Text_EverettPostBattle, MSGBOX_AUTOCLOSE
	end

Route110_TrickHousePuzzle7_EventScript_WroteSecretCodeLockOpened::
	.string "{PLAYER} wrote down the secret code\n"
	.string "on the door.\p"
	.string "“TRICK MASTER is huggable.”\n"
	.string "… … … … … … … …\p"
	.string "The lock clicked open!$"

Route110_TrickHousePuzzle7_Text_JoshuaIntro:
	.string "Really? I'm on my break now.\p"
	.string "Fine, you asked for it!$"

Route110_TrickHousePuzzle7_Text_JoshuaDefeat:
	.string "They'd better pay me extra for this...$"

Route110_TrickHousePuzzle7_Text_JoshuaPostBattle:
	.string "I was just going to sit here an enjoy my\n"
	.string "coffee, but no!\p"
	.string "You just had to battle me!$"

Route110_TrickHousePuzzle7_Text_PatriciaIntro:
	.string "How did some random kid get into the\n"
	.string "break room?$"

Route110_TrickHousePuzzle7_Text_PatriciaDefeat:
	.string "What's going on?$"

Route110_TrickHousePuzzle7_Text_PatriciaPostBattle:
	.string "It's not like you'll figure out the\n"
	.string "passcode to the lower level.$"

Route110_TrickHousePuzzle7_Text_AlexisIntro:
	.string "This might be the break room, but I'm\n"
	.string "not giving you a break!$"

Route110_TrickHousePuzzle7_Text_AlexisDefeat:
	.string "Fine! Whatever!$"

Route110_TrickHousePuzzle7_Text_AlexisPostBattle:
	.string "We need breaks too, you know.\p"
	.string "This job is a lot of work.$"

Route110_TrickHousePuzzle7_Text_MarielaIntro:
	.string "I heard there's a strong kid defeating\n"
	.string "all the grunts, is it you?$"

Route110_TrickHousePuzzle7_Text_MarielaDefeat:
	.string "You must be that kid!$"

Route110_TrickHousePuzzle7_Text_MarielaPostBattle:
	.string "Humph! I'm not upset!\n"
	.string "Not me!$"

Route110_TrickHousePuzzle7_Text_AlvaroIntro:
	.string "You think you can just barge in here\n"
	.string "and wreak havoc?$"

Route110_TrickHousePuzzle7_Text_AlvaroDefeat:
	.string "Fine then, wreak as much havoc as you\n"
	.string "want...$"

Route110_TrickHousePuzzle7_Text_AlvaroPostBattle:
	.string "I get it, we're usually the ones\n"
	.string "wreaking havoc out in the world.$"

Route110_TrickHousePuzzle7_Text_EverettIntro:
	.string "Uh, could you please just leave?\p"
	.string "No, I didn't think that would work.$"

Route110_TrickHousePuzzle7_Text_EverettDefeat:
	.string "Oh, yes, you are strong.$"

Route110_TrickHousePuzzle7_Text_EverettPostBattle:
	.string "Have you thought about joining TEAM\n"
	.string "PHOENIX?\p"
	.string "We get plenty of benefits.$"

Route110_TrickHousePuzzle7_EventScript_KeyPad_Text_0:
	.string "It's a keypad.$"

Route110_TrickHousePuzzle7_EventScript_KeyPad_Text_1:
	.string "It's a keypad.\p"
	.string "{PLAYER} entered the passcode...$"
