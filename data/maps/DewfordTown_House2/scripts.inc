DewfordTown_House2_MapScripts::
	.byte 0


DewfordTown_House2_EventScript_Man::
	msgbox DewfordTown_House2_EventScript_Man_Text_0, MSGBOX_NPC
	end


DewfordTown_House2_EventScript_Tutor::
	lock
	faceplayer
	showmoneybox 0, 0
	msgbox DewfordTown_House2_EventScript_Tutor_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq DewfordTown_House2_EventScript_Tutor_1
	checkmoney 5000
	compare VAR_RESULT, NO
	goto_if_eq DewfordTown_House2_EventScript_Tutor_4
	goto DewfordTown_House2_EventScript_ChooseMove
	end

DewfordTown_House2_EventScript_Tutor_1:
	msgbox Route119_House_Text_Decline
	hidemoneybox
	release
	end

DewfordTown_House2_EventScript_Tutor_4:
	msgbox DewfordTown_House2_EventScript_Tutor_Text_1
	waitmessage
	hidemoneybox
	release
	end


DewfordTown_House2_EventScript_ChooseMove::
	message Route119_House_EventScript_ChooseMove_Text_0
	waitmessage
	scrollingmultichoice 2, 17, 2, 5, TRUE
	switch VAR_RESULT
	case 0, DewfordTown_House2_EventScript_ChooseDefenseCurl
	case 1, DewfordTown_House2_EventScript_ChooseSnore
	case 2, DewfordTown_House2_EventScript_ChooseMudSlap
	case 3, DewfordTown_House2_EventScript_ChooseSwift
	case 4, DewfordTown_House2_EventScript_ChooseIcyWind
	case 5, DewfordTown_House2_EventScript_ChooseEndure
	case 6, DewfordTown_House2_EventScript_ChoosePsychUp
	case 7, DewfordTown_House2_EventScript_ChooseIcePunch
	case 8, DewfordTown_House2_EventScript_ChooseThunderPunch
	case 9, DewfordTown_House2_EventScript_ChooseFirePunch
	case 10, DewfordTown_House2_EventScript_ChooseFocusPunch
	case 11, DewfordTown_House2_EventScript_ChooseIronTail
	case 12, DewfordTown_House2_EventScript_ChooseSnatch
	case MULTI_B_PRESSED, Route119_House_EventScript_MoveDeclined
	end

DewfordTown_House2_EventScript_ChooseDefenseCurl::
	buffermovename STR_VAR_1, MOVE_DEFENSE_CURL
	msgbox DewfordTown_House2_Text_WhichMon
	waitmessage
	setvar VAR_0x8005, MOVE_DEFENSE_CURL
	call MoveTutor_EventScript_OpenPartyMenu
	goto_if_eq VAR_RESULT, 0, Route119_House_EventScript_MoveDeclined
	goto DewfordTown_House2_EventScript_MoveTaught
	end


DewfordTown_House2_EventScript_ChooseSnore::
	buffermovename STR_VAR_1, MOVE_SNORE
	msgbox DewfordTown_House2_Text_WhichMon
	waitmessage
	setvar VAR_0x8005, MOVE_SNORE
	call MoveTutor_EventScript_OpenPartyMenu
	goto_if_eq VAR_RESULT, 0, Route119_House_EventScript_MoveDeclined
	goto DewfordTown_House2_EventScript_MoveTaught
	end


DewfordTown_House2_EventScript_ChooseMudSlap::
	buffermovename STR_VAR_1, MOVE_MUD_SLAP
	msgbox DewfordTown_House2_Text_WhichMon
	waitmessage
	setvar VAR_0x8005, MOVE_MUD_SLAP
	call MoveTutor_EventScript_OpenPartyMenu
	goto_if_eq VAR_RESULT, 0, Route119_House_EventScript_MoveDeclined
	goto DewfordTown_House2_EventScript_MoveTaught
	end


DewfordTown_House2_EventScript_ChooseSwift::
	buffermovename STR_VAR_1, MOVE_SWIFT
	msgbox DewfordTown_House2_Text_WhichMon
	waitmessage
	setvar VAR_0x8005, MOVE_SWIFT
	call MoveTutor_EventScript_OpenPartyMenu
	goto_if_eq VAR_RESULT, 0, Route119_House_EventScript_MoveDeclined
	goto DewfordTown_House2_EventScript_MoveTaught
	end


DewfordTown_House2_EventScript_ChooseIcyWind::
	buffermovename STR_VAR_1, MOVE_ICY_WIND
	msgbox DewfordTown_House2_Text_WhichMon
	waitmessage
	setvar VAR_0x8005, MOVE_ICY_WIND
	call MoveTutor_EventScript_OpenPartyMenu
	goto_if_eq VAR_RESULT, 0, Route119_House_EventScript_MoveDeclined
	goto DewfordTown_House2_EventScript_MoveTaught
	end


DewfordTown_House2_EventScript_ChooseEndure::
	buffermovename STR_VAR_1, MOVE_ENDURE
	msgbox DewfordTown_House2_Text_WhichMon
	waitmessage
	setvar VAR_0x8005, MOVE_ENDURE
	call MoveTutor_EventScript_OpenPartyMenu
	goto_if_eq VAR_RESULT, 0, Route119_House_EventScript_MoveDeclined
	goto DewfordTown_House2_EventScript_MoveTaught
	end


DewfordTown_House2_EventScript_ChoosePsychUp::
	buffermovename STR_VAR_1, MOVE_PSYCH_UP
	msgbox DewfordTown_House2_Text_WhichMon
	waitmessage
	setvar VAR_0x8005, MOVE_PSYCH_UP
	call MoveTutor_EventScript_OpenPartyMenu
	goto_if_eq VAR_RESULT, 0, Route119_House_EventScript_MoveDeclined
	goto DewfordTown_House2_EventScript_MoveTaught
	end


DewfordTown_House2_EventScript_ChooseIcePunch::
	buffermovename STR_VAR_1, MOVE_ICE_PUNCH
	msgbox DewfordTown_House2_Text_WhichMon
	waitmessage
	setvar VAR_0x8005, MOVE_ICE_PUNCH
	call MoveTutor_EventScript_OpenPartyMenu
	goto_if_eq VAR_RESULT, 0, Route119_House_EventScript_MoveDeclined
	goto DewfordTown_House2_EventScript_MoveTaught
	end


DewfordTown_House2_EventScript_ChooseThunderPunch::
	buffermovename STR_VAR_1, MOVE_THUNDER_PUNCH
	msgbox DewfordTown_House2_Text_WhichMon
	waitmessage
	setvar VAR_0x8005, MOVE_THUNDER_PUNCH
	call MoveTutor_EventScript_OpenPartyMenu
	goto_if_eq VAR_RESULT, 0, Route119_House_EventScript_MoveDeclined
	goto DewfordTown_House2_EventScript_MoveTaught
	end


DewfordTown_House2_EventScript_ChooseFirePunch::
	buffermovename STR_VAR_1, MOVE_FIRE_PUNCH
	msgbox DewfordTown_House2_Text_WhichMon
	waitmessage
	setvar VAR_0x8005, MOVE_FIRE_PUNCH
	call MoveTutor_EventScript_OpenPartyMenu
	goto_if_eq VAR_RESULT, 0, Route119_House_EventScript_MoveDeclined
	goto DewfordTown_House2_EventScript_MoveTaught
	end


DewfordTown_House2_EventScript_ChooseFocusPunch::
	buffermovename STR_VAR_1, MOVE_FOCUS_PUNCH
	msgbox DewfordTown_House2_Text_WhichMon
	waitmessage
	setvar VAR_0x8005, MOVE_FOCUS_PUNCH
	call MoveTutor_EventScript_OpenPartyMenu
	goto_if_eq VAR_RESULT, 0, Route119_House_EventScript_MoveDeclined
	goto DewfordTown_House2_EventScript_MoveTaught
	end


DewfordTown_House2_EventScript_ChooseIronTail::
	buffermovename STR_VAR_1, MOVE_IRON_TAIL
	msgbox DewfordTown_House2_Text_WhichMon
	waitmessage
	setvar VAR_0x8005, MOVE_IRON_TAIL
	call MoveTutor_EventScript_OpenPartyMenu
	goto_if_eq VAR_RESULT, 0, Route119_House_EventScript_MoveDeclined
	goto DewfordTown_House2_EventScript_MoveTaught
	end


DewfordTown_House2_EventScript_ChooseSnatch::
	buffermovename STR_VAR_1, MOVE_SNATCH
	msgbox DewfordTown_House2_Text_WhichMon
	waitmessage
	setvar VAR_0x8005, MOVE_SNATCH
	call MoveTutor_EventScript_OpenPartyMenu
	goto_if_eq VAR_RESULT, 0, Route119_House_EventScript_MoveDeclined
	goto DewfordTown_House2_EventScript_MoveTaught
	end


DewfordTown_House2_EventScript_MoveTaught::
	showmoneybox 0, 0
	msgbox DewfordTown_House2_EventScript_MoveTaught_Text_0
	waitmessage
	removemoney 5000
	updatemoneybox
	playse SE_SHOP
	waitse
	msgbox DewfordTown_House2_EventScript_MoveTaught_Text_1
	hidemoneybox
	release
	end


DewfordTown_House2_EventScript_Man_Text_0:
	.string "My grandma has always had a rivalry with\n"
	.string "her brother.\p"
	.string "They both claim to be the best move\n"
	.string "tutor in Johto.$"

DewfordTown_House2_EventScript_Tutor_Text_0:
	.string "Step closer, child...\p"
	.string "You would like to learn a move from the\n"
	.string "best tutor in Johto, yes?\p"
	.string "For a small fee of ¥5,000, I can teach\n"
	.string "your POKéMON a new move.\p"
	.string "Are you interested?$"

DewfordTown_House2_EventScript_Tutor_Text_1:
	.string "I'm sorry, but I don't work for free.\p"
	.string "Please come back when you have at\n"
	.string "least ¥5,000$"

DewfordTown_House2_EventScript_MoveTaught_Text_0:
	.string "Wonderful!\p"
	.string "Your POKéMON has learned the move\n"
	.string "perfectly!$"

DewfordTown_House2_EventScript_MoveTaught_Text_1:
	.string "Please visit as much as you'd like.\p"
	.string "This old lady could always use more\n"
	.string "money, hehehe.$"

DewfordTown_House2_Text_WhichMon::
	.string "The move {STR_VAR_1}, is it?\p"
	.string "A fine move, if I do say so myself.\p"
	.string "And which POKéMON shall learn\n"
	.string "{STR_VAR_1}?$"
