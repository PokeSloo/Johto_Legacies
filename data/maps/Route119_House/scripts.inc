Route119_House_MapScripts::
	.byte 0


Route119_House_EventScript_Woman::
	msgbox Route119_House_EventScript_Woman_Text_0, MSGBOX_NPC
	end


Route119_House_EventScript_Tutor::
	lock
	faceplayer
	showmoneybox 0, 0
	msgbox Route119_House_EventScript_Tutor_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq Route119_House_EventScript_Tutor_1
	checkmoney 5000
	compare VAR_RESULT, NO
	goto_if_eq Route119_House_EventScript_Tutor_4
	goto Route119_House_EventScript_ChooseMove
	end

Route119_House_EventScript_Tutor_1:
	msgbox Route119_House_Text_Decline
	hidemoneybox
	release
	end

Route119_House_EventScript_Tutor_4:
	msgbox Route119_House_EventScript_Tutor_Text_1
	waitmessage
	hidemoneybox
	release
	end


Route119_House_EventScript_ChooseMove::
	message Route119_House_EventScript_ChooseMove_Text_0
	waitmessage
	scrollingmultichoice 1, 17, 2, 5, TRUE
	switch VAR_RESULT
	case 0, Route119_House_EventScript_ChooseSoftboiled
	case 1, Route119_House_EventScript_ChooseSeismicToss
	case 2, Route119_House_EventScript_ChooseDreamEater
	case 3, Route119_House_EventScript_ChooseMegaPunch
	case 4, Route119_House_EventScript_ChooseMegaKick
	case 5, Route119_House_EventScript_ChooseBodySlam
	case 6, Route119_House_EventScript_ChooseRockSlide
	case 7, Route119_House_EventScript_ChooseCounter
	case 8, Route119_House_EventScript_ChooseThunderwave
	case 9, Route119_House_EventScript_ChooseSwordsDance
	case 10, Route119_House_EventScript_ChooseWaterPulse
	case 11, Route119_House_EventScript_ChooseBulletSeed
	case 12, Route119_House_EventScript_ChooseShockWave
	case MULTI_B_PRESSED, Route119_House_EventScript_MoveDeclined
	end

Route119_House_EventScript_ChooseMove_Text_0:
	.string "Excellent!\p"
	.string "Which move would you like me to teach?$"

Route119_House_EventScript_ChooseSoftboiled::
	buffermovename STR_VAR_1, MOVE_SOFT_BOILED
	msgbox Route119_House_Text_WhichMon
	waitmessage
	setvar VAR_0x8005, MOVE_SOFT_BOILED
	call MoveTutor_EventScript_OpenPartyMenu
	goto_if_eq VAR_RESULT, 0, Route119_House_EventScript_MoveDeclined
	goto Route119_House_EventScript_MoveTaught
	end


Route119_House_EventScript_ChooseSeismicToss::
	buffermovename STR_VAR_1, MOVE_SEISMIC_TOSS
	msgbox Route119_House_Text_WhichMon
	waitmessage
	setvar VAR_0x8005, MOVE_SEISMIC_TOSS
	call MoveTutor_EventScript_OpenPartyMenu
	goto_if_eq VAR_RESULT, 0, Route119_House_EventScript_MoveDeclined
	goto Route119_House_EventScript_MoveTaught
	end


Route119_House_EventScript_ChooseDreamEater::
	buffermovename STR_VAR_1, MOVE_DREAM_EATER
	msgbox Route119_House_Text_WhichMon
	waitmessage
	setvar VAR_0x8005, MOVE_DREAM_EATER
	call MoveTutor_EventScript_OpenPartyMenu
	goto_if_eq VAR_RESULT, 0, Route119_House_EventScript_MoveDeclined
	goto Route119_House_EventScript_MoveTaught
	end


Route119_House_EventScript_ChooseMegaPunch::
	buffermovename STR_VAR_1, MOVE_MEGA_PUNCH
	msgbox Route119_House_Text_WhichMon
	waitmessage
	setvar VAR_0x8005, MOVE_MEGA_PUNCH
	call MoveTutor_EventScript_OpenPartyMenu
	goto_if_eq VAR_RESULT, 0, Route119_House_EventScript_MoveDeclined
	goto Route119_House_EventScript_MoveTaught
	end


Route119_House_EventScript_ChooseMegaKick::
	buffermovename STR_VAR_1, MOVE_MEGA_KICK
	msgbox Route119_House_Text_WhichMon
	waitmessage
	setvar VAR_0x8005, MOVE_MEGA_KICK
	call MoveTutor_EventScript_OpenPartyMenu
	goto_if_eq VAR_RESULT, 0, Route119_House_EventScript_MoveDeclined
	goto Route119_House_EventScript_MoveTaught
	end


Route119_House_EventScript_ChooseBodySlam::
	buffermovename STR_VAR_1, MOVE_BODY_SLAM
	msgbox Route119_House_Text_WhichMon
	waitmessage
	setvar VAR_0x8005, MOVE_BODY_SLAM
	call MoveTutor_EventScript_OpenPartyMenu
	goto_if_eq VAR_RESULT, 0, Route119_House_EventScript_MoveDeclined
	goto Route119_House_EventScript_MoveTaught
	end


Route119_House_EventScript_ChooseRockSlide::
	buffermovename STR_VAR_1, MOVE_ROCK_SLIDE
	msgbox Route119_House_Text_WhichMon
	waitmessage
	setvar VAR_0x8005, MOVE_ROCK_SLIDE
	call MoveTutor_EventScript_OpenPartyMenu
	goto_if_eq VAR_RESULT, 0, Route119_House_EventScript_MoveDeclined
	goto Route119_House_EventScript_MoveTaught
	end


Route119_House_EventScript_ChooseCounter::
	buffermovename STR_VAR_1, MOVE_COUNTER
	msgbox Route119_House_Text_WhichMon
	waitmessage
	setvar VAR_0x8005, MOVE_COUNTER
	call MoveTutor_EventScript_OpenPartyMenu
	goto_if_eq VAR_RESULT, 0, Route119_House_EventScript_MoveDeclined
	goto Route119_House_EventScript_MoveTaught
	end


Route119_House_EventScript_ChooseThunderwave::
	buffermovename STR_VAR_1, MOVE_THUNDER_WAVE
	msgbox Route119_House_Text_WhichMon
	waitmessage
	setvar VAR_0x8005, MOVE_THUNDER_WAVE
	call MoveTutor_EventScript_OpenPartyMenu
	goto_if_eq VAR_RESULT, 0, Route119_House_EventScript_MoveDeclined
	goto Route119_House_EventScript_MoveTaught
	end


Route119_House_EventScript_ChooseSwordsDance::
	buffermovename STR_VAR_1, MOVE_SWORDS_DANCE
	msgbox Route119_House_Text_WhichMon
	waitmessage
	setvar VAR_0x8005, MOVE_SWORDS_DANCE
	call MoveTutor_EventScript_OpenPartyMenu
	goto_if_eq VAR_RESULT, 0, Route119_House_EventScript_MoveDeclined
	goto Route119_House_EventScript_MoveTaught
	end


Route119_House_EventScript_ChooseWaterPulse::
	buffermovename STR_VAR_1, MOVE_WATER_PULSE
	msgbox Route119_House_Text_WhichMon
	waitmessage
	setvar VAR_0x8005, MOVE_WATER_PULSE
	call MoveTutor_EventScript_OpenPartyMenu
	goto_if_eq VAR_RESULT, 0, Route119_House_EventScript_MoveDeclined
	goto Route119_House_EventScript_MoveTaught
	end


Route119_House_EventScript_ChooseBulletSeed::
	buffermovename STR_VAR_1, MOVE_BULLET_SEED
	msgbox Route119_House_Text_WhichMon
	waitmessage
	setvar VAR_0x8005, MOVE_BULLET_SEED
	call MoveTutor_EventScript_OpenPartyMenu
	goto_if_eq VAR_RESULT, 0, Route119_House_EventScript_MoveDeclined
	goto Route119_House_EventScript_MoveTaught
	end


Route119_House_EventScript_ChooseShockWave::
	buffermovename STR_VAR_1, MOVE_SHOCK_WAVE
	msgbox Route119_House_Text_WhichMon
	waitmessage
	setvar VAR_0x8005, MOVE_SHOCK_WAVE
	call MoveTutor_EventScript_OpenPartyMenu
	goto_if_eq VAR_RESULT, 0, Route119_House_EventScript_MoveDeclined
	goto Route119_House_EventScript_MoveTaught
	end


Route119_House_EventScript_MoveTaught::
	showmoneybox 0, 0
	msgbox Route119_House_EventScript_MoveTaught_Text_0
	waitmessage
	removemoney 5000
	updatemoneybox
	playse SE_SHOP
	waitse
	msgbox Route119_House_EventScript_MoveTaught_Text_1
	hidemoneybox
	release
	end


Route119_House_EventScript_MoveDeclined::
	msgbox Route119_House_Text_Decline
	hidemoneybox
	release
	end


Route119_House_EventScript_Woman_Text_0:
	.string "My grandpa has always had a brutal\n"
	.string "rivalry with his sister for as long as I\l"
	.string "can remember.\p"
	.string "They won't even stay in the same cabin.$"

Route119_House_EventScript_Tutor_Text_0:
	.string "You there!\p"
	.string "How would you like to learn a move from\n"
	.string "the best tutor in Johto?\p"
	.string "For just ¥5,000, I can teach your\n"
	.string "POKéMON a new move.\p"
	.string "Do you accept?$"

Route119_House_EventScript_Tutor_Text_1:
	.string "I'm sorry, but it doesn't look like you\n"
	.string "have enough money.\p"
	.string "Please come back when you have at\n"
	.string "least ¥5,000$"

Route119_House_EventScript_MoveTaught_Text_0:
	.string "Great!\p"
	.string "Your POKéMON seems to be a quick\n"
	.string "learner!$"

Route119_House_EventScript_MoveTaught_Text_1:
	.string "Please don't hesitate to visit again!$"

Route119_House_Text_Decline::
	.string "Fine then.\p"
	.string "Come back if you change your mind.$"

Route119_House_Text_WhichMon::
	.string "The move {STR_VAR_1}?\p"
	.string "Good choice.\p"
	.string "And which POKéMON is {STR_VAR_1}\n"
	.string "being taught to?$"
