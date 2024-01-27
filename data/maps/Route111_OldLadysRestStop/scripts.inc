Route111_OldLadysRestStop_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route111_OldLadysRestStop_OnTransition
	.byte 0

Route111_OldLadysRestStop_OnTransition:
	setflag FLAG_LANDMARK_OLD_LADY_REST_SHOP
	end

Route111_OldLadysRestStop_EventScript_OldLady::
	lock
	faceplayer
	msgbox Route111_OldLadysRestStop_Text_RestUpHere, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, Route111_OldLadysRestStop_EventScript_Rest
	goto_if_eq VAR_RESULT, NO, Route111_OldLadysRestStop_EventScript_DeclineRest
	end

Route111_OldLadysRestStop_EventScript_Rest::
	msgbox Route111_OldLadysRestStop_Text_TakeYourTimeRestUp, MSGBOX_DEFAULT
	closemessage
	call Common_EventScript_OutOfCenterPartyHeal
	msgbox Route111_OldLadysRestStop_Text_StillTiredTakeAnotherRest, MSGBOX_DEFAULT
	release
	end

Route111_OldLadysRestStop_EventScript_DeclineRest::
	msgbox Route111_OldLadysRestStop_Text_DontNeedToBeShy, MSGBOX_DEFAULT
	release
	end

Route111_OldLadysRestStop_Text_RestUpHere:
	.string "My my, your POKéMON look like they could\n"
	.string "use a rest.\p"
	.string "Would you like to take a quick relaxing\n"
	.string "nap?$"

Route111_OldLadysRestStop_Text_TakeYourTimeRestUp:
	.string "Rest as much as you would like, I don't\n"
	.string "mind. I just love helping people out.$"

Route111_OldLadysRestStop_Text_StillTiredTakeAnotherRest:
	.string "There now, your POKéMON look like\n"
	.string "they're ready to take on the world!\p"
	.string "Please, don't hesitate to visit again.$"

Route111_OldLadysRestStop_Text_DontNeedToBeShy:
	.string "Very well, I'll be right here if you ever\n"
	.string "change your mind.$"

