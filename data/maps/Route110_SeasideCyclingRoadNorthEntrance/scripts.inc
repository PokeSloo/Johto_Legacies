Route110_SeasideCyclingRoadNorthEntrance_MapScripts::
	.byte 0

Route110_SeasideCyclingRoadNorthEntrance_EventScript_MoveDeleter::
	lockall
	faceplayer
	msgbox Route110_SeasideCyclingRoadNorthEntrance_Text_ICanMakeMonForgetMove, MSGBOX_YESNO
	switch VAR_RESULT
	case YES, Route110_SeasideCyclingRoadNorthEntrance_EventScript_ChooseMonAndMoveToForget
	case NO, Route110_SeasideCyclingRoadNorthEntrance_EventScript_ComeAgain
	releaseall
	end

Route110_SeasideCyclingRoadNorthEntrance_EventScript_ChooseMonAndMoveToForget::
	msgbox Route110_SeasideCyclingRoadNorthEntrance_Text_WhichMonShouldForget, MSGBOX_DEFAULT
	special ChoosePartyMon
	waitstate
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, Route110_SeasideCyclingRoadNorthEntrance_EventScript_ComeAgain
	special IsSelectedMonEgg
	goto_if_eq VAR_RESULT, TRUE, Route110_SeasideCyclingRoadNorthEntrance_EventScript_EggCantForgetMoves
	special GetNumMovesSelectedMonHas
	goto_if_eq VAR_RESULT, 1, Route110_SeasideCyclingRoadNorthEntrance_EventScript_MonOnlyKnowsOneMove
	msgbox Route110_SeasideCyclingRoadNorthEntrance_Text_WhichMoveShouldBeForgotten, MSGBOX_DEFAULT
	fadescreen FADE_TO_BLACK
	special MoveDeleterChooseMoveToForget
	fadescreen FADE_FROM_BLACK
	goto_if_eq VAR_0x8005, MAX_MON_MOVES, Route110_SeasideCyclingRoadNorthEntrance_EventScript_ChooseMonAndMoveToForget
	special BufferMoveDeleterNicknameAndMove
	msgbox Route110_SeasideCyclingRoadNorthEntrance_Text_MonsMoveShouldBeForgotten, MSGBOX_YESNO
	switch VAR_RESULT
	case YES, Route110_SeasideCyclingRoadNorthEntrance_EventScript_TryForgetMove
	case NO, Route110_SeasideCyclingRoadNorthEntrance_EventScript_ComeAgain
	releaseall
	end

Route110_SeasideCyclingRoadNorthEntrance_EventScript_TryForgetMove::
	special MoveDeleterForgetMove
	playfanfare MUS_MOVE_DELETED
	waitfanfare
	msgbox Route110_SeasideCyclingRoadNorthEntrance_Text_MonHasForgottenMove, MSGBOX_DEFAULT
	releaseall
	end

Route110_SeasideCyclingRoadNorthEntrance_EventScript_MonOnlyKnowsOneMove::
	special BufferMoveDeleterNicknameAndMove
	msgbox Route110_SeasideCyclingRoadNorthEntrance_Text_MonOnlyKnowsOneMove, MSGBOX_DEFAULT
	releaseall
	end

Route110_SeasideCyclingRoadNorthEntrance_EventScript_EggCantForgetMoves::
	msgbox Route110_SeasideCyclingRoadNorthEntrance_Text_EggCantForgetMoves, MSGBOX_DEFAULT
	releaseall
	end

Route110_SeasideCyclingRoadNorthEntrance_EventScript_ComeAgain::
	msgbox Route110_SeasideCyclingRoadNorthEntrance_Text_ComeAgain, MSGBOX_DEFAULT
	releaseall
	end

Route110_SeasideCyclingRoadNorthEntrance_Text_ICanMakeMonForgetMove:
	.string "Who are you?\p"
	.string "Wait... Who am I?\p"
	.string "...\p"
	.string "Oh, that's right, I'm the Move Deleter!\p"
	.string "I can make POKéMON forget their moves.\n"
	.string "Would you like me to do that?$"

Route110_SeasideCyclingRoadNorthEntrance_Text_WhichMonShouldForget:
	.string "Which POKéMON should forget a move?$"

Route110_SeasideCyclingRoadNorthEntrance_Text_WhichMoveShouldBeForgotten:
	.string "And which move should be forgotten?$"

Route110_SeasideCyclingRoadNorthEntrance_Text_MonOnlyKnowsOneMove:
	.string "{STR_VAR_1} knows only one move\n"
	.string "so it can't be forgotten…$"

Route110_SeasideCyclingRoadNorthEntrance_Text_MonsMoveShouldBeForgotten:
	.string "Hm! {STR_VAR_1}'s {STR_VAR_2}?\n"
	.string "That move should be forgotten?$"

Route110_SeasideCyclingRoadNorthEntrance_Text_MonHasForgottenMove:
	.string "Hey, it actually worked!\p"
	.string "{STR_VAR_1} has forgotten\n"
	.string "{STR_VAR_2} completely.$"

Route110_SeasideCyclingRoadNorthEntrance_Text_ComeAgain:
	.string "Come again if you have any POKéMON\n"
	.string "whose moves need forgotten...\p"
	.string "...\p"
	.string "Who are you again?$"

Route110_SeasideCyclingRoadNorthEntrance_Text_EggCantForgetMoves:
	.string "What?\n"
	.string "No EGG should know any moves.$"

