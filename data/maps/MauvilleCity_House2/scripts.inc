MauvilleCity_House2_MapScripts::
	.byte 0


MauvilleCity_House2_EventScript_MoveRelearner::
	lock
	faceplayer
	msgbox MauvilleCity_House2_Text_ImTheMoveTutor, MSGBOX_DEFAULT
	showmoneybox 0, 0
	msgbox MauvilleCity_House2_Text_ThatsAHeartScaleWantMeToTeachMove, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq MauvilleCity_House2_EventScript_MoveRelearner_2
MauvilleCity_House2_EventScript_MoveRelearner_1:
	checkmoney 3000
	compare VAR_RESULT, NO
	goto_if_eq MauvilleCity_House2_EventScript_MoveRelearner_5
	goto MauvilleCity_House2_EventScript_ChooseMon
	end

MauvilleCity_House2_EventScript_MoveRelearner_2:
	goto MauvilleCity_House2_EventScript_ComeBackWithHeartScale
	goto MauvilleCity_House2_EventScript_MoveRelearner_1

MauvilleCity_House2_EventScript_MoveRelearner_5:
	msgbox MauvilleCity_House2_EventScript_MoveRelearner_Text_0
	waitmessage
	hidemoneybox
	release
	end


MauvilleCity_House2_EventScript_ChooseMon::
	msgbox MauvilleCity_House2_Text_TutorWhichMon, MSGBOX_DEFAULT
	special ChooseMonForMoveRelearner
	waitstate
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, MauvilleCity_House2_EventScript_ComeBackWithHeartScale
	special IsSelectedMonEgg
	goto_if_eq VAR_RESULT, TRUE, MauvilleCity_House2_EventScript_CantTeachEgg
	goto_if_eq VAR_0x8005, 0, MauvilleCity_House2_EventScript_NoMoveToTeachMon
	goto MauvilleCity_House2_EventScript_ChooseMove
	end


MauvilleCity_House2_EventScript_ChooseMove::
	msgbox MauvilleCity_House2_Text_TeachWhichMove, MSGBOX_DEFAULT
	special TeachMoveRelearnerMove
	waitstate
	showmoneybox 0, 0
	goto_if_eq VAR_0x8004, 0, MauvilleCity_House2_EventScript_ChooseMon
	removemoney 3000
	updatemoneybox
	playse SE_SHOP
	waitse
	msgbox MauvilleCity_House2_EventScript_ChooseMove_Text_0
	waitmessage
	goto MauvilleCity_House2_EventScript_ComeBackWithHeartScale
	end


MauvilleCity_House2_EventScript_NoMoveToTeachMon::
	msgbox MauvilleCity_House2_Text_DontHaveMoveToTeachPokemon, MSGBOX_DEFAULT
	goto MauvilleCity_House2_EventScript_ChooseMon
	end


MauvilleCity_House2_EventScript_CantTeachEgg::
	msgbox MauvilleCity_House2_Text_CantTeachEgg, MSGBOX_DEFAULT
	goto MauvilleCity_House2_EventScript_ChooseMon
	end


MauvilleCity_House2_EventScript_ComeBackWithHeartScale::
	hidemoneybox
	msgbox MauvilleCity_House2_Text_ComeBackWithHeartScale, MSGBOX_DEFAULT
	release
	end


MauvilleCity_House2_EventScript_MoveRelearner_Text_0:
	.string "I'm sorry, but it doesn't look like you\n"
	.string "have enough money.\p"
	.string "Please come back when you have at\n"
	.string "least ¥3,000.$"

MauvilleCity_House2_EventScript_ChooseMove_Text_0:
	.string "Wonderful!$"

MauvilleCity_House2_Text_ImTheMoveTutor::
	.string "Hey, I'm the MOVE RELEARNER.\p"
	.string "I can teach any POKéMON a move that\n"
	.string "they have forgotten, also moves they\l"
	.string "may have missed the opportunity to\l"
	.string "learn.$"

MauvilleCity_House2_Text_ThatsAHeartScaleWantMeToTeachMove::
	.string "Of course, I don't work for free.\p"
	.string "How does ¥3,000 sound to teach one of\n"
	.string "your POKéMON a move?$"

MauvilleCity_House2_Text_TutorWhichMon::
	.string "Which POKéMON shall be relearning a\n"
	.string "move?$"

MauvilleCity_House2_Text_TeachWhichMove::
	.string "Which move should I teach?$"

MauvilleCity_House2_Text_DontHaveMoveToTeachPokemon::
	.string "I'm sorry...\p"
	.string "It doesn't appear that I have any move\n"
	.string "I can teach that POKéMON.$"

MauvilleCity_House2_Text_ComeBackWithHeartScale::
	.string "Well then, you know where to find me.$"

MauvilleCity_House2_Text_CantTeachEgg::
	.string "Hmm... I'm afraid I can't teach any moves\n"
	.string "to an egg.$"
