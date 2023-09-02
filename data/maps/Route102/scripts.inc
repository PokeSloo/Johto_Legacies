Route102_MapScripts::
	.byte 0


Route102_EventScript_LittleBoy::
	msgbox Route102_EventScript_LittleBoy_Text_0, MSGBOX_NPC
	end


Route102_EventScript_Boy::
	msgbox Route102_EventScript_Boy_Text_0, MSGBOX_NPC
	end


Route102_EventScript_SigntoCherrygrove::
	msgbox Route102_EventScript_SigntoCherrygrove_Text_0, MSGBOX_SIGN
	end


Route102_EventScript_SignBerryMaster::
	msgbox Route102_EventScript_SignBerryMaster_Text_0, MSGBOX_SIGN
	end


Route102_EventScript_SignMrPokemon::
	msgbox Route102_EventScript_SignMrPokemon_Text_0, MSGBOX_SIGN
	end


Route102_EventScript_SignTips::
	msgbox Route102_EventScript_SignTips_Text_0, MSGBOX_SIGN
	end


Route102_EventScript_Calvin::
	trainerbattle_single TRAINER_CALVIN_1, Route102_Text_CalvinIntro, Route102_Text_CalvinDefeated, Route102_EventScript_CalvinRegisterMatchCallAfterBattle
	specialvar VAR_RESULT, ShouldTryRematchBattle
	goto_if_eq VAR_RESULT, TRUE, Route102_EventScript_CalvinRematch
	setvar VAR_0x8004, TRAINER_CALVIN_1
	specialvar VAR_RESULT, IsTrainerRegistered
	goto_if_eq VAR_RESULT, FALSE, Route102_EventScript_CalvinTryRegister
	msgbox Route102_Text_CalvinPostBattle, MSGBOX_DEFAULT
	release
	end

Route102_EventScript_CalvinRegisterMatchCallAfterBattle::
	special PlayerFaceTrainerAfterBattle
	waitmovement 0
	goto_if_set FLAG_HAS_MATCH_CALL, Route102_EventScript_CalvinRegisterMatchCall
	release
	end

Route102_EventScript_CalvinRegisterMatchCall::
	msgbox Route102_Text_CalvinRegisterShort, MSGBOX_DEFAULT
	register_matchcall TRAINER_CALVIN_1
	release
	end

Route102_EventScript_CalvinTryRegister::
	goto_if_set FLAG_HAS_MATCH_CALL, Route102_EventScript_CalvinRegister
	msgbox Route102_Text_CalvinPostBattle, MSGBOX_DEFAULT
	release
	end

Route102_EventScript_CalvinRegister::
	msgbox Route102_Text_CalvinRegister, MSGBOX_DEFAULT
	register_matchcall TRAINER_CALVIN_1
	release
	end

Route102_EventScript_CalvinRematch::
	trainerbattle_rematch TRAINER_CALVIN_1, Route102_Text_CalvinRematchIntro, Route102_Text_CalvinRematchDefeated
	msgbox Route102_Text_CalvinRematchPostBattle, MSGBOX_AUTOCLOSE
	end

Route102_EventScript_Rick::
	trainerbattle_single TRAINER_RICK, Route102_Text_RickIntro, Route102_Text_RickDefeated
	msgbox Route102_Text_RickPostBattle, MSGBOX_AUTOCLOSE
	end

Route102_EventScript_Tiana::
	trainerbattle_single TRAINER_TIANA, Route102_Text_TianaIntro, Route102_Text_TianaDefeated
	msgbox Route102_Text_TianaPostBattle, MSGBOX_AUTOCLOSE
	end

Route102_EventScript_Allen::
	trainerbattle_single TRAINER_ALLEN, Route102_Text_AllenIntro, Route102_Text_AllenDefeated
	msgbox Route102_Text_AllenPostBattle, MSGBOX_AUTOCLOSE
	end

Route102_Text_WatchMeCatchPokemon:
	.string "WALLY: {PLAYER}…\n"
	.string "POKéMON hide in tall grass like this,\l"
	.string "don't they?\p"
	.string "Please watch me and see if I can\n"
	.string "catch one properly.\p"
	.string "…Whoa!$"

Route102_Text_WallyIDidIt:
	.string "WALLY: I did it… It's my…\n"
	.string "My POKéMON!$"

Route102_Text_LetsGoBack:
	.string "{PLAYER}, thank you!\n"
	.string "Let's go back to the GYM!$"

Route102_EventScript_LittleBoy_Text_0:
	.string "I live here with my dad, he's a world\n"
	.string "famous POKéMON breeder.$"

Route102_EventScript_Boy_Text_0:
	.string "The berry master that lives here is a\n"
	.string "good guy, he gives me free berries\l"
	.string "every day!$"

Route102_EventScript_SigntoCherrygrove_Text_0:
	.string "ROUTE 30\n"
	.string "{DOWN_ARROW} CHERRYGROVE CITY$"

Route102_EventScript_SignBerryMaster_Text_0:
	.string "BERRY MASTER'S HOUSE$"

Route102_EventScript_SignMrPokemon_Text_0:
	.string "MR. POKéMON'S HOUSE$"

Route102_EventScript_SignTips_Text_0:
	.string "Trainer tips:\n"
	.string "Use an ANTIDOTE to heal your POKéMON if\l"
	.string "it gets poisoned.$"
