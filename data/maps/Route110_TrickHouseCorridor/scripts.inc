Route110_TrickHouseCorridor_MapScripts::
	map_script MAP_SCRIPT_ON_LOAD, Route110_TrickHouseCorridor_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

Route110_TrickHouseCorridor_MapScripts_MAP_SCRIPT_ON_LOAD:
	call_if_set FLAG_PHQ_CELLDOOR_1_OPEN, Route110_TrickHouseCorridor_Tiles_Door_1
	call_if_set FLAG_PHQ_CELLDOOR_3_OPEN, Route110_TrickHouseCorridor_Tiles_Door_3
	end


Route110_TrickHouseCorridor_Tiles_Door_1::
	setmetatile 7, 7, 0x341, FALSE
	setmetatile 7, 6, 0x357, FALSE
	setmetatile 7, 5, 0x34F, FALSE
	setmetatile 6, 6, 0x356, TRUE
	setmetatile 6, 5, 0x34E, FALSE
	return


Route110_TrickHouseCorridor_Tiles_Door_3::
	setmetatile 15, 7, 0x341, FALSE
	setmetatile 15, 6, 0x357, FALSE
	setmetatile 15, 5, 0x34F, FALSE
	setmetatile 14, 6, 0x356, TRUE
	setmetatile 14, 5, 0x34E, FALSE
	return


Route110_TrickHouseCorridor_EventScript_Trigger1::
	lock
	applymovement OBJ_EVENT_ID_PLAYER, Route110_TrickHouseCorridor_Movement_PtoThorneTop
	waitmovement 0
	goto Route110_TrickHouseCorridor_EventScript_Main
	end


Route110_TrickHouseCorridor_EventScript_Trigger2::
	lock
	applymovement OBJ_EVENT_ID_PLAYER, Route110_TrickHouseCorridor_Movement_PtoThorneMiddle
	waitmovement 0
	goto Route110_TrickHouseCorridor_EventScript_Main
	end


Route110_TrickHouseCorridor_EventScript_Trigger3::
	lock
	applymovement OBJ_EVENT_ID_PLAYER, Route110_TrickHouseCorridor_Movement_PtoThorneBottom
	waitmovement 0
	goto Route110_TrickHouseCorridor_EventScript_Main
	end


Route110_TrickHouseCorridor_Movement_PtoThorneTop:
	walk_down
	walk_right
	step_end

Route110_TrickHouseCorridor_Movement_PtoThorneMiddle:
	walk_right
	step_end

Route110_TrickHouseCorridor_Movement_PtoThorneBottom:
	walk_up
	walk_right
	step_end

Route110_TrickHouseCorridor_EventScript_Main::
	waitse
	playse SE_PIN
	applymovement 2, Route110_TrickHouseCorridor_Movement_QuestionLeft
	waitmovement 0
	waitse
	delay 60
	msgbox Route110_TrickHouseCorridor_EventScript_Main_Text_0
	waitmessage
	closemessage
	applymovement 2, Route110_TrickHouseCorridor_Movement_ThorneDownLeft
	waitmovement 0
	msgbox Route110_TrickHouseCorridor_EventScript_Main_Text_1
	waitmessage
	applymovement 2, Route110_TrickHouseCorridor_Movement_StepInPlaceLeft
	waitmovement 0
	msgbox Route110_TrickHouseCorridor_EventScript_Main_Text_2
	applymovement 2, Route110_TrickHouseCorridor_Movement_ThorneStepLeft
	waitmovement 0
	trainerbattle_no_intro TRAINER_BRENDAN_ROUTE_119_MUDKIP, Route110_TrickHouseCorridor_Text_ThorneDefeat
	msgbox Route110_TrickHouseCorridor_EventScript_Main_Text_3
	waitmessage
	closemessage
	applymovement 2, Route110_TrickHouseCorridor_Movement_ThorneExit
	waitmovement 0
	removeobject 2
	applymovement OBJ_EVENT_ID_PLAYER, Route110_TrickHouseCorridor_Movement_PtoCell
	waitmovement 0
	msgbox Route110_TrickHouseCorridor_EventScript_Main_Text_4
	waitmessage
	closemessage
	delay 30
	playse SE_DOOR
	setmetatile 7, 7, 0x341, FALSE
	setmetatile 7, 6, 0x357, FALSE
	setmetatile 7, 5, 0x34F, FALSE
	setmetatile 6, 6, 0x356, TRUE
	setmetatile 6, 5, 0x34E, FALSE
	special DrawWholeMapView
	setflag FLAG_PHQ_CELLDOOR_1_OPEN
	delay 30
	applymovement 1, Route110_TrickHouseCorridor_Movement_ShaneWalkDown
	waitmovement 0
	applymovement 1, Route110_TrickHouseCorridor_Movement_ShaneWalkDownOne
	applymovement OBJ_EVENT_ID_PLAYER, Route110_TrickHouseCorridor_Movement_PlayerBackUp
	waitmovement 0
	msgbox Route110_TrickHouseCorridor_EventScript_Main_Text_5
	waitmessage
	closemessage
	applymovement 1, Route110_TrickHouseCorridor_Movement_ShaneWalkLeft
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Route110_TrickHouseCorridor_Movement_StepInPlaceLeft
	waitmovement 0
	msgbox Route110_TrickHouseCorridor_EventScript_Main_Text_6
	waitmessage
	closemessage
	applymovement 1, Route110_TrickHouseCorridor_Movement_ShaneExit
	waitmovement 0
	removeobject 1
	setflag FLAG_HIDE_ECRUTEAK_PHOENIX
	clearflag FLAG_HIDE_STRENGTH_KIMONO
	addvar VAR_ECRUTEAK_STATE, 1
	release
	end


Route110_TrickHouseCorridor_Movement_QuestionLeft:
	emote_question_mark
	walk_in_place_left
	step_end

Route110_TrickHouseCorridor_Movement_ThorneDownLeft:
	walk_down
	walk_left
	step_end

Route110_TrickHouseCorridor_Movement_StepInPlaceLeft:
	walk_in_place_left
	step_end

Route110_TrickHouseCorridor_Movement_ThorneStepLeft:
	walk_left
	step_end

Route110_TrickHouseCorridor_Movement_ThorneExit:
	walk_down
	walk_left
	walk_left
	walk_left
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

Route110_TrickHouseCorridor_Movement_PtoCell:
	walk_right
	walk_right
	walk_right
	walk_up
	step_end

Route110_TrickHouseCorridor_Movement_ShaneWalkDown:
	walk_down
	walk_down
	step_end

Route110_TrickHouseCorridor_Movement_ShaneWalkDownOne:
	walk_down
	step_end

Route110_TrickHouseCorridor_Movement_PlayerBackUp:
	lock_facing_direction
	walk_down
	unlock_facing_direction
	face_up
	step_end

Route110_TrickHouseCorridor_Movement_ShaneWalkLeft:
	walk_left
	walk_left
	walk_left
	delay_16
	walk_in_place_right
	step_end

Route110_TrickHouseCorridor_Movement_ShaneExit:
	walk_left
	walk_left
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

Route110_TrickHouseCorridor_EventScript_Door3::
	lock
	goto_if_set FLAG_PHQ_CELLDOOR_3_OPEN, Route110_TrickHouseCorridor_EventScript_Door3_1
	checkitem ITEM_BASEMENT_KEY
	compare VAR_RESULT, TRUE
	goto_if_eq Route110_TrickHouseCorridor_EventScript_Door3_4
	msgbox Route110_TrickHouseCorridor_EventScript_Door3_Text_1
	release
	end

Route110_TrickHouseCorridor_EventScript_Door3_1:
	msgbox Route110_TrickHouseCorridor_EventScript_Door3_Text_0
	release
	end

Route110_TrickHouseCorridor_EventScript_Door3_4:
	msgbox Route110_TrickHouseCorridor_EventScript_Main_Text_4
	waitmessage
	closemessage
	delay 30
	playse SE_DOOR
	setmetatile 15, 7, 0x341, FALSE
	setmetatile 15, 6, 0x357, FALSE
	setmetatile 15, 5, 0x34F, FALSE
	setmetatile 14, 6, 0x356, TRUE
	setmetatile 14, 5, 0x34E, FALSE
	special DrawWholeMapView
	setflag FLAG_PHQ_CELLDOOR_3_OPEN
	release
	end


Route110_TrickHouseCorridor_EventScript_Main_Text_0:
	.string "???: Oh? And who might you be?$"

Route110_TrickHouseCorridor_EventScript_Main_Text_1:
	.string "???: You must be the other child I was\n"
	.string "told about, but you're supposed to be\l"
	.string "locked in a cell at our Goldenrod base.\p"
	.string "...\p"
	.string "I see, I'm impressed you found this\n"
	.string "place.\p"
	.string "My name is THORNE, I'm one of the TEAM\n"
	.string "PHOENIX ADMINS. I believe you've\l"
	.string "already met DAMON.\p"
	.string "...\p"
	.string "I won't pretend we are a righteous\n"
	.string "group.$"

Route110_TrickHouseCorridor_EventScript_Main_Text_2:
	.string "Far from it in fact.\p"
	.string "As you may have guessed, we exploit\n"
	.string "POKéMON for our own personal gain.\p"
	.string "You see, TEAM PHOENIX was actually born\n"
	.string "from the ashes of TEAM ROCKET, have\l"
	.string "you heard of them?\p"
	.string "No, I suppose you wouldn't have, they\n"
	.string "were disbanded many years ago.\p"
	.string "At the time, I was one of TEAM ROCKETS\n"
	.string "top scientists, and I am still very\l"
	.string "loyal to thier organization.\p"
	.string "Now, to complete our ultimate goal, you\n"
	.string "need to come with me!$"

Route110_TrickHouseCorridor_EventScript_Main_Text_3:
	.string "You may have won this round, but TEAM\n"
	.string "PHOENIX is far from done.\p"
	.string "Our boss will never relent, and TEAM\n"
	.string "PHOENIX will surely reign supreme one\l"
	.string "day!$"

Route110_TrickHouseCorridor_EventScript_Main_Text_4:
	.string "{PLAYER} inserted the Cell Key into\n"
	.string "the door.$"

Route110_TrickHouseCorridor_EventScript_Main_Text_5:
	.string "SHANE: Lets get this straight, I don't\n"
	.string "need help from the likes of you!\p"
	.string "I was about to bust myself out right\n"
	.string "before you showed up...\p"
	.string "How did you get here anyway...?\p"
	.string "Well, it doesn't matter!$"

Route110_TrickHouseCorridor_EventScript_Main_Text_6:
	.string "SHANE: I don't know why I covered for\n"
	.string "you back in Goldenrod...\p"
	.string "Just shut up about it, alright!$"

Route110_TrickHouseCorridor_EventScript_Door3_Text_0:
	.string "The cell door is open.$"

Route110_TrickHouseCorridor_EventScript_Door3_Text_1:
	.string "The cell door is locked.$"

Route110_TrickHouseCorridor_Text_ThorneDefeat::
	.string "A minor setback...$"
