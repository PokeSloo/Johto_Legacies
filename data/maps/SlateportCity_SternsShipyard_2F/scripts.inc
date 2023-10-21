SlateportCity_SternsShipyard_2F_MapScripts::
	map_script MAP_SCRIPT_ON_RESUME, SlateportCity_SternsShipyard_2F_MapScripts_MAP_SCRIPT_ON_RESUME
	map_script MAP_SCRIPT_ON_FRAME_TABLE, SlateportCity_SternsShipyard_2F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, SlateportCity_SternsShipyard_2F_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
	.byte 0

SlateportCity_SternsShipyard_2F_MapScripts_MAP_SCRIPT_ON_RESUME:
	call_if_eq VAR_THE_CHALLENGE_EVENTS, 0, SlateportCity_SternsShipyard_2F_On_Warp
	end

SlateportCity_SternsShipyard_2F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
	map_script_2 VAR_THE_CHALLENGE_EVENTS, 0, SlateportCity_SternsShipyard_2F_On_Frame
	.2byte 0

SlateportCity_SternsShipyard_2F_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
	map_script_2 VAR_THE_CHALLENGE_EVENTS, 0, SlateportCity_SternsShipyard_2F_On_Warp
	.2byte 0


SlateportCity_SternsShipyard_2F_On_Frame::
	lock
	applymovement OBJ_EVENT_ID_PLAYER, SlateportCity_SternsShipyard_2F_Movement_PlayerEnter
	waitmovement 0
	delay 30
	applymovement 10, SlateportCity_SternsShipyard_2F_Movement_TealaBlockDoor
	waitmovement 0
	delay 30
	msgbox SlateportCity_SternsShipyard_2F_On_Frame_Text_0
	waitmessage
	closemessage
	playse SE_M_ENCORE2
	applymovement OBJ_EVENT_ID_PLAYER, SlateportCity_SternsShipyard_2F_Movement_PlayerToStage
	waitmovement 0
	waitse
	delay 30
	clearflag FLAG_HIDE_CHALLENGE_TRAINERS
	applymovement 12, SlateportCity_SternsShipyard_2F_Movement_StepDown
	waitmovement 0
	msgbox SlateportCity_SternsShipyard_2F_On_Frame_Text_1
	call SlateportCity_SternsShipyard_2F_EventScript_Question_1
	applymovement 12, SlateportCity_SternsShipyard_2F_Movement_StepDown
	waitmovement 0
	msgbox SlateportCity_SternsShipyard_2F_On_Frame_Text_2
	call SlateportCity_SternsShipyard_2F_EventScript_Question_2
	applymovement 12, SlateportCity_SternsShipyard_2F_Movement_StepDown
	waitmovement 0
	msgbox SlateportCity_SternsShipyard_2F_On_Frame_Text_3
	call SlateportCity_SternsShipyard_2F_EventScript_Question_3
	applymovement 12, SlateportCity_SternsShipyard_2F_Movement_StepDown
	waitmovement 0
	msgbox SlateportCity_SternsShipyard_2F_On_Frame_Text_4
	call SlateportCity_SternsShipyard_2F_EventScript_Question_4
	applymovement 12, SlateportCity_SternsShipyard_2F_Movement_StepDown
	waitmovement 0
	msgbox SlateportCity_SternsShipyard_2F_On_Frame_Text_5, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq SlateportCity_SternsShipyard_2F_On_Frame_2
	msgbox SlateportCity_SternsShipyard_2F_On_Frame_Text_6
	waitmessage
SlateportCity_SternsShipyard_2F_On_Frame_1:
	call SlateportCity_SternsShipyard_2F_EventScript_Question_5
	applymovement 12, SlateportCity_SternsShipyard_2F_Movement_StepDown
	waitmovement 0
	msgbox SlateportCity_SternsShipyard_2F_On_Frame_Text_7
	waitmessage
	addvar VAR_THE_CHALLENGE_EVENTS, 1
	goto_if_unset FLAG_ANSWERED_CHALLENGE_QUESTION_WRONG, SlateportCity_SternsShipyard_2F_On_Frame_6
	goto SlateportCity_SternsShipyard_2F_EventScript_PlayerExitToWhitney
SlateportCity_SternsShipyard_2F_On_Frame_5:
	release
	end

SlateportCity_SternsShipyard_2F_On_Frame_2:
	msgbox SlateportCity_SternsShipyard_2F_On_Frame_Text_6
	waitmessage
	goto SlateportCity_SternsShipyard_2F_On_Frame_1

SlateportCity_SternsShipyard_2F_On_Frame_6:
	goto SlateportCity_SternsShipyard_2F_EventScript_BonusRound
	goto SlateportCity_SternsShipyard_2F_On_Frame_5


SlateportCity_SternsShipyard_2F_Movement_PlayerEnter:
	walk_up
	step_end

SlateportCity_SternsShipyard_2F_Movement_TealaBlockDoor:
	walk_right
	face_up
	step_end

SlateportCity_SternsShipyard_2F_Movement_PlayerToStage:
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_right
	walk_up
	step_end

SlateportCity_SternsShipyard_2F_Movement_StepDown:
	walk_in_place_down
	step_end

SlateportCity_SternsShipyard_2F_Movement_StepLeft:
	walk_in_place_left
	step_end

SlateportCity_SternsShipyard_2F_EventScript_Question_1::
	random 2
	switch VAR_RESULT
	case 0, SlateportCity_SternsShipyard_2F_EventScript_Question_1_3
	case 1, SlateportCity_SternsShipyard_2F_EventScript_Question_1_4
SlateportCity_SternsShipyard_2F_EventScript_Question_1_1:
	return

SlateportCity_SternsShipyard_2F_EventScript_Question_1_3:
	call SlateportCity_SternsShipyard_2F_EventScript_Question_1_True
	goto SlateportCity_SternsShipyard_2F_EventScript_Question_1_1

SlateportCity_SternsShipyard_2F_EventScript_Question_1_4:
	call SlateportCity_SternsShipyard_2F_EventScript_Question_1_False
	goto SlateportCity_SternsShipyard_2F_EventScript_Question_1_1


SlateportCity_SternsShipyard_2F_EventScript_Question_1_True::
	msgbox SlateportCity_SternsShipyard_2F_EventScript_Question_1_True_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq SlateportCity_SternsShipyard_2F_EventScript_Question_1_True_1
	waitse
	playse SE_FAILURE
	waitse
	msgbox SlateportCity_SternsShipyard_2F_EventScript_Question_1_True_Text_1
	waitmessage
	closemessage
	setflag FLAG_ANSWERED_CHALLENGE_QUESTION_WRONG
	addobject 11
	applymovement 11, SlateportCity_SternsShipyard_2F_Movement_TrainerToPlayer
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, SlateportCity_SternsShipyard_2F_Movement_FaceLeft
	waitmovement 0
	msgbox SlateportCity_SternsShipyard_2F_Text_TrainerIntro
	trainerbattle_no_intro TRAINER_KIRK, SlateportCity_SternsShipyard_2F_Text_KirkDefeat
	msgbox SlateportCity_SternsShipyard_2F_Text_Winner_Is
	waitmessage
	closemessage
	applymovement 11, SlateportCity_SternsShipyard_2F_Movement_TrainerLeave
	waitmovement 0
	removeobject 11
	applymovement OBJ_EVENT_ID_PLAYER, SlateportCity_SternsShipyard_2F_Movement_StepUp
	waitmovement 0
	return

SlateportCity_SternsShipyard_2F_EventScript_Question_1_True_1:
	waitse
	playse SE_SUCCESS
	waitse
	msgbox SlateportCity_SternsShipyard_2F_Text_Correct_Answer
	return


SlateportCity_SternsShipyard_2F_EventScript_Question_1_False::
	msgbox SlateportCity_SternsShipyard_2F_EventScript_Question_1_False_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq SlateportCity_SternsShipyard_2F_EventScript_Question_1_False_1
	waitse
	playse SE_FAILURE
	waitse
	msgbox SlateportCity_SternsShipyard_2F_EventScript_Question_1_False_Text_1
	waitmessage
	closemessage
	setflag FLAG_ANSWERED_CHALLENGE_QUESTION_WRONG
	addobject 11
	applymovement 11, SlateportCity_SternsShipyard_2F_Movement_TrainerToPlayer
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, SlateportCity_SternsShipyard_2F_Movement_FaceLeft
	waitmovement 0
	msgbox SlateportCity_SternsShipyard_2F_Text_TrainerIntro
	trainerbattle_no_intro TRAINER_KIRK, SlateportCity_SternsShipyard_2F_Text_KirkDefeat
	msgbox SlateportCity_SternsShipyard_2F_Text_Winner_Is
	waitmessage
	closemessage
	applymovement 11, SlateportCity_SternsShipyard_2F_Movement_TrainerLeave
	waitmovement 0
	removeobject 11
	applymovement OBJ_EVENT_ID_PLAYER, SlateportCity_SternsShipyard_2F_Movement_StepUp
	waitmovement 0
	return

SlateportCity_SternsShipyard_2F_EventScript_Question_1_False_1:
	waitse
	playse SE_SUCCESS
	waitse
	msgbox SlateportCity_SternsShipyard_2F_Text_Correct_Answer
	return


SlateportCity_SternsShipyard_2F_EventScript_Question_2::
	random 2
	switch VAR_RESULT
	case 0, SlateportCity_SternsShipyard_2F_EventScript_Question_2_3
	case 1, SlateportCity_SternsShipyard_2F_EventScript_Question_2_4
SlateportCity_SternsShipyard_2F_EventScript_Question_2_1:
	return

SlateportCity_SternsShipyard_2F_EventScript_Question_2_3:
	call SlateportCity_SternsShipyard_2F_EventScript_Question_2_True
	goto SlateportCity_SternsShipyard_2F_EventScript_Question_2_1

SlateportCity_SternsShipyard_2F_EventScript_Question_2_4:
	call SlateportCity_SternsShipyard_2F_EventScript_Question_2_False
	goto SlateportCity_SternsShipyard_2F_EventScript_Question_2_1


SlateportCity_SternsShipyard_2F_EventScript_Question_2_True::
	msgbox SlateportCity_SternsShipyard_2F_EventScript_Question_2_True_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq SlateportCity_SternsShipyard_2F_EventScript_Question_2_True_1
	waitse
	playse SE_FAILURE
	waitse
	msgbox SlateportCity_SternsShipyard_2F_EventScript_Question_2_True_Text_1
	waitmessage
	closemessage
	setflag FLAG_ANSWERED_CHALLENGE_QUESTION_WRONG
	addobject 7
	applymovement 7, SlateportCity_SternsShipyard_2F_Movement_TrainerToPlayer
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, SlateportCity_SternsShipyard_2F_Movement_FaceLeft
	waitmovement 0
	msgbox SlateportCity_SternsShipyard_2F_Text_TrainerIntro
	trainerbattle_no_intro TRAINER_SHAWN, SlateportCity_SternsShipyard_2F_Text_KirkDefeat
	msgbox SlateportCity_SternsShipyard_2F_Text_Winner_Is
	waitmessage
	closemessage
	applymovement 7, SlateportCity_SternsShipyard_2F_Movement_TrainerLeave
	waitmovement 0
	removeobject 7
	applymovement OBJ_EVENT_ID_PLAYER, SlateportCity_SternsShipyard_2F_Movement_StepUp
	waitmovement 0
	return

SlateportCity_SternsShipyard_2F_EventScript_Question_2_True_1:
	waitse
	playse SE_SUCCESS
	waitse
	msgbox SlateportCity_SternsShipyard_2F_Text_Correct_Answer
	return


SlateportCity_SternsShipyard_2F_EventScript_Question_2_False::
	msgbox SlateportCity_SternsShipyard_2F_EventScript_Question_2_False_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq SlateportCity_SternsShipyard_2F_EventScript_Question_2_False_1
	waitse
	playse SE_FAILURE
	waitse
	msgbox SlateportCity_SternsShipyard_2F_EventScript_Question_2_False_Text_1
	waitmessage
	closemessage
	setflag FLAG_ANSWERED_CHALLENGE_QUESTION_WRONG
	addobject 7
	applymovement 7, SlateportCity_SternsShipyard_2F_Movement_TrainerToPlayer
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, SlateportCity_SternsShipyard_2F_Movement_FaceLeft
	waitmovement 0
	msgbox SlateportCity_SternsShipyard_2F_Text_TrainerIntro
	trainerbattle_no_intro TRAINER_SHAWN, SlateportCity_SternsShipyard_2F_Text_KirkDefeat
	msgbox SlateportCity_SternsShipyard_2F_Text_Winner_Is
	waitmessage
	closemessage
	applymovement 7, SlateportCity_SternsShipyard_2F_Movement_TrainerLeave
	waitmovement 0
	removeobject 7
	applymovement OBJ_EVENT_ID_PLAYER, SlateportCity_SternsShipyard_2F_Movement_StepUp
	waitmovement 0
	return

SlateportCity_SternsShipyard_2F_EventScript_Question_2_False_1:
	waitse
	playse SE_SUCCESS
	waitse
	msgbox SlateportCity_SternsShipyard_2F_Text_Correct_Answer
	return


SlateportCity_SternsShipyard_2F_EventScript_Question_3::
	random 2
	switch VAR_RESULT
	case 0, SlateportCity_SternsShipyard_2F_EventScript_Question_3_3
	case 1, SlateportCity_SternsShipyard_2F_EventScript_Question_3_4
SlateportCity_SternsShipyard_2F_EventScript_Question_3_1:
	return

SlateportCity_SternsShipyard_2F_EventScript_Question_3_3:
	call SlateportCity_SternsShipyard_2F_EventScript_Question_3_True
	goto SlateportCity_SternsShipyard_2F_EventScript_Question_3_1

SlateportCity_SternsShipyard_2F_EventScript_Question_3_4:
	call SlateportCity_SternsShipyard_2F_EventScript_Question_3_False
	goto SlateportCity_SternsShipyard_2F_EventScript_Question_3_1


SlateportCity_SternsShipyard_2F_EventScript_Question_3_True::
	msgbox SlateportCity_SternsShipyard_2F_EventScript_Question_3_True_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq SlateportCity_SternsShipyard_2F_EventScript_Question_3_True_1
	waitse
	playse SE_FAILURE
	waitse
	msgbox SlateportCity_SternsShipyard_2F_EventScript_Question_3_True_Text_1
	waitmessage
	closemessage
	setflag FLAG_ANSWERED_CHALLENGE_QUESTION_WRONG
	addobject 1
	applymovement 1, SlateportCity_SternsShipyard_2F_Movement_TrainerToPlayer
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, SlateportCity_SternsShipyard_2F_Movement_FaceLeft
	waitmovement 0
	msgbox SlateportCity_SternsShipyard_2F_Text_TrainerIntro
	trainerbattle_no_intro TRAINER_BEN, SlateportCity_SternsShipyard_2F_Text_KirkDefeat
	msgbox SlateportCity_SternsShipyard_2F_Text_Winner_Is
	waitmessage
	closemessage
	applymovement 1, SlateportCity_SternsShipyard_2F_Movement_TrainerLeave
	waitmovement 0
	removeobject 1
	applymovement OBJ_EVENT_ID_PLAYER, SlateportCity_SternsShipyard_2F_Movement_StepUp
	waitmovement 0
	return

SlateportCity_SternsShipyard_2F_EventScript_Question_3_True_1:
	waitse
	playse SE_SUCCESS
	waitse
	msgbox SlateportCity_SternsShipyard_2F_Text_Correct_Answer
	return


SlateportCity_SternsShipyard_2F_EventScript_Question_3_False::
	msgbox SlateportCity_SternsShipyard_2F_EventScript_Question_3_False_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq SlateportCity_SternsShipyard_2F_EventScript_Question_3_False_1
	waitse
	playse SE_FAILURE
	waitse
	msgbox SlateportCity_SternsShipyard_2F_EventScript_Question_3_False_Text_1
	waitmessage
	closemessage
	setflag FLAG_ANSWERED_CHALLENGE_QUESTION_WRONG
	addobject 1
	applymovement 1, SlateportCity_SternsShipyard_2F_Movement_TrainerToPlayer
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, SlateportCity_SternsShipyard_2F_Movement_FaceLeft
	waitmovement 0
	msgbox SlateportCity_SternsShipyard_2F_Text_TrainerIntro
	trainerbattle_no_intro TRAINER_BEN, SlateportCity_SternsShipyard_2F_Text_KirkDefeat
	msgbox SlateportCity_SternsShipyard_2F_Text_Winner_Is
	waitmessage
	closemessage
	applymovement 1, SlateportCity_SternsShipyard_2F_Movement_TrainerLeave
	waitmovement 0
	removeobject 1
	applymovement OBJ_EVENT_ID_PLAYER, SlateportCity_SternsShipyard_2F_Movement_StepUp
	waitmovement 0
	return

SlateportCity_SternsShipyard_2F_EventScript_Question_3_False_1:
	waitse
	playse SE_SUCCESS
	waitse
	msgbox SlateportCity_SternsShipyard_2F_Text_Correct_Answer
	return


SlateportCity_SternsShipyard_2F_EventScript_Question_4::
	random 2
	switch VAR_RESULT
	case 0, SlateportCity_SternsShipyard_2F_EventScript_Question_4_3
	case 1, SlateportCity_SternsShipyard_2F_EventScript_Question_4_4
SlateportCity_SternsShipyard_2F_EventScript_Question_4_1:
	return

SlateportCity_SternsShipyard_2F_EventScript_Question_4_3:
	call SlateportCity_SternsShipyard_2F_EventScript_Question_4_True
	goto SlateportCity_SternsShipyard_2F_EventScript_Question_4_1

SlateportCity_SternsShipyard_2F_EventScript_Question_4_4:
	call SlateportCity_SternsShipyard_2F_EventScript_Question_4_False
	goto SlateportCity_SternsShipyard_2F_EventScript_Question_4_1


SlateportCity_SternsShipyard_2F_EventScript_Question_4_True::
	msgbox SlateportCity_SternsShipyard_2F_EventScript_Question_4_True_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq SlateportCity_SternsShipyard_2F_EventScript_Question_4_True_1
	waitse
	playse SE_FAILURE
	waitse
	msgbox SlateportCity_SternsShipyard_2F_EventScript_Question_4_True_Text_1
	waitmessage
	closemessage
	setflag FLAG_ANSWERED_CHALLENGE_QUESTION_WRONG
	addobject 2
	applymovement 2, SlateportCity_SternsShipyard_2F_Movement_TrainerToPlayer
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, SlateportCity_SternsShipyard_2F_Movement_FaceLeft
	waitmovement 0
	msgbox SlateportCity_SternsShipyard_2F_Text_TrainerIntro
	trainerbattle_no_intro TRAINER_VIVIAN, SlateportCity_SternsShipyard_2F_Text_KirkDefeat
	msgbox SlateportCity_SternsShipyard_2F_Text_Winner_Is
	waitmessage
	closemessage
	applymovement 2, SlateportCity_SternsShipyard_2F_Movement_TrainerLeave
	waitmovement 0
	removeobject 2
	applymovement OBJ_EVENT_ID_PLAYER, SlateportCity_SternsShipyard_2F_Movement_StepUp
	waitmovement 0
	return

SlateportCity_SternsShipyard_2F_EventScript_Question_4_True_1:
	waitse
	playse SE_SUCCESS
	waitse
	msgbox SlateportCity_SternsShipyard_2F_Text_Correct_Answer
	return


SlateportCity_SternsShipyard_2F_EventScript_Question_4_False::
	msgbox SlateportCity_SternsShipyard_2F_EventScript_Question_4_False_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq SlateportCity_SternsShipyard_2F_EventScript_Question_4_False_1
	waitse
	playse SE_FAILURE
	waitse
	msgbox SlateportCity_SternsShipyard_2F_EventScript_Question_4_False_Text_1
	waitmessage
	closemessage
	setflag FLAG_ANSWERED_CHALLENGE_QUESTION_WRONG
	addobject 2
	applymovement 2, SlateportCity_SternsShipyard_2F_Movement_TrainerToPlayer
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, SlateportCity_SternsShipyard_2F_Movement_FaceLeft
	waitmovement 0
	msgbox SlateportCity_SternsShipyard_2F_Text_TrainerIntro
	trainerbattle_no_intro TRAINER_VIVIAN, SlateportCity_SternsShipyard_2F_Text_KirkDefeat
	msgbox SlateportCity_SternsShipyard_2F_Text_Winner_Is
	waitmessage
	closemessage
	applymovement 2, SlateportCity_SternsShipyard_2F_Movement_TrainerLeave
	waitmovement 0
	removeobject 2
	applymovement OBJ_EVENT_ID_PLAYER, SlateportCity_SternsShipyard_2F_Movement_StepUp
	waitmovement 0
	return

SlateportCity_SternsShipyard_2F_EventScript_Question_4_False_1:
	waitse
	playse SE_SUCCESS
	waitse
	msgbox SlateportCity_SternsShipyard_2F_Text_Correct_Answer
	return


SlateportCity_SternsShipyard_2F_EventScript_Question_5::
	random 2
	switch VAR_RESULT
	case 0, SlateportCity_SternsShipyard_2F_EventScript_Question_5_3
	case 1, SlateportCity_SternsShipyard_2F_EventScript_Question_5_4
SlateportCity_SternsShipyard_2F_EventScript_Question_5_1:
	return

SlateportCity_SternsShipyard_2F_EventScript_Question_5_3:
	call SlateportCity_SternsShipyard_2F_EventScript_Question_5_True
	goto SlateportCity_SternsShipyard_2F_EventScript_Question_5_1

SlateportCity_SternsShipyard_2F_EventScript_Question_5_4:
	call SlateportCity_SternsShipyard_2F_EventScript_Question_5_False
	goto SlateportCity_SternsShipyard_2F_EventScript_Question_5_1


SlateportCity_SternsShipyard_2F_EventScript_Question_5_True::
	msgbox SlateportCity_SternsShipyard_2F_EventScript_Question_5_True_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq SlateportCity_SternsShipyard_2F_EventScript_Question_5_True_1
	waitse
	playse SE_FAILURE
	waitse
	msgbox SlateportCity_SternsShipyard_2F_EventScript_Question_5_True_Text_1
	waitmessage
	closemessage
	setflag FLAG_ANSWERED_CHALLENGE_QUESTION_WRONG
	addobject 3
	applymovement 3, SlateportCity_SternsShipyard_2F_Movement_TrainerToPlayer
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, SlateportCity_SternsShipyard_2F_Movement_FaceLeft
	waitmovement 0
	msgbox SlateportCity_SternsShipyard_2F_Text_TrainerIntro
	trainerbattle_no_intro TRAINER_ANGELO, SlateportCity_SternsShipyard_2F_Text_KirkDefeat
	msgbox SlateportCity_SternsShipyard_2F_Text_Winner_Is
	waitmessage
	closemessage
	applymovement 3, SlateportCity_SternsShipyard_2F_Movement_TrainerLeave
	waitmovement 0
	removeobject 3
	applymovement OBJ_EVENT_ID_PLAYER, SlateportCity_SternsShipyard_2F_Movement_StepUp
	waitmovement 0
	return

SlateportCity_SternsShipyard_2F_EventScript_Question_5_True_1:
	waitse
	playse SE_SUCCESS
	waitse
	msgbox SlateportCity_SternsShipyard_2F_Text_Correct_Answer
	return


SlateportCity_SternsShipyard_2F_EventScript_Question_5_False::
	msgbox SlateportCity_SternsShipyard_2F_EventScript_Question_5_False_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq SlateportCity_SternsShipyard_2F_EventScript_Question_5_False_1
	waitse
	playse SE_FAILURE
	waitse
	msgbox SlateportCity_SternsShipyard_2F_EventScript_Question_5_False_Text_1
	waitmessage
	closemessage
	setflag FLAG_ANSWERED_CHALLENGE_QUESTION_WRONG
	addobject 3
	applymovement 3, SlateportCity_SternsShipyard_2F_Movement_TrainerToPlayer
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, SlateportCity_SternsShipyard_2F_Movement_FaceLeft
	waitmovement 0
	msgbox SlateportCity_SternsShipyard_2F_Text_TrainerIntro
	trainerbattle_no_intro TRAINER_ANGELO, SlateportCity_SternsShipyard_2F_Text_KirkDefeat
	msgbox SlateportCity_SternsShipyard_2F_Text_Winner_Is
	waitmessage
	closemessage
	applymovement 3, SlateportCity_SternsShipyard_2F_Movement_TrainerLeave
	waitmovement 0
	removeobject 3
	applymovement OBJ_EVENT_ID_PLAYER, SlateportCity_SternsShipyard_2F_Movement_StepUp
	waitmovement 0
	return

SlateportCity_SternsShipyard_2F_EventScript_Question_5_False_1:
	waitse
	playse SE_SUCCESS
	waitse
	msgbox SlateportCity_SternsShipyard_2F_Text_Correct_Answer
	return


SlateportCity_SternsShipyard_2F_Movement_TrainerToPlayer:
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	face_right
	step_end

SlateportCity_SternsShipyard_2F_Movement_TrainerLeave:
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	step_end

SlateportCity_SternsShipyard_2F_Movement_FaceLeft:
	face_left
	step_end

SlateportCity_SternsShipyard_2F_Movement_StepUp:
	walk_in_place_up
	step_end

SlateportCity_SternsShipyard_2F_On_Warp::
	createvobject OBJ_EVENT_GFX_EXPERT_M, 15, 6, 6, 3, DIR_SOUTH
	createvobject OBJ_EVENT_GFX_EXPERT_F, 16, 7, 6, 3, DIR_SOUTH
	createvobject OBJ_EVENT_GFX_SCIENTIST_1, 17, 13, 6, 3, DIR_SOUTH
	createvobject OBJ_EVENT_GFX_GIRL_3, 18, 4, 7, 3, DIR_EAST
	createvobject OBJ_EVENT_GFX_BEAUTY, 19, 14, 8, 3, DIR_WEST
	createvobject OBJ_EVENT_GFX_MAN_5, 20, 14, 9, 3, DIR_WEST
	createvobject OBJ_EVENT_GFX_MAN_1, 21, 4, 10, 3, DIR_EAST
	createvobject OBJ_EVENT_GFX_WOMAN_5, 22, 4, 11, 3, DIR_EAST
	createvobject OBJ_EVENT_GFX_LITTLE_BOY, 23, 14, 12, 3, DIR_WEST
	createvobject OBJ_EVENT_GFX_YOUNGSTER, 24, 5, 13, 3, DIR_NORTH
	createvobject OBJ_EVENT_GFX_ANABEL, 25, 6, 13, 3, DIR_NORTH
	createvobject OBJ_EVENT_GFX_SCHOOL_KID_M, 26, 12, 13, 3, DIR_NORTH
	createvobject OBJ_EVENT_GFX_POKEFAN_F, 27, 14, 11, 3, DIR_WEST
	end


SlateportCity_SternsShipyard_2F_EventScript_BonusRound::
	msgbox SlateportCity_SternsShipyard_2F_EventScript_BonusRound_Text_0
	waitmessage
	closemessage
	playse SE_M_ENCORE2
	waitse
	applymovement 12, SlateportCity_SternsShipyard_2F_Movement_StepLeft
	waitmovement 0
	msgbox SlateportCity_SternsShipyard_2F_EventScript_BonusRound_Text_1
	waitmessage
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, SlateportCity_SternsShipyard_2F_Movement_StepLeft
	waitmovement 0
	applymovement 4, SlateportCity_SternsShipyard_2F_Movement_AssistantPlaceBall1Start
	waitmovement 0
	delay 30
	clearflag FLAG_BONUS_ROUND_ITEM_1
	addobject 8
	delay 30
	applymovement 4, SlateportCity_SternsShipyard_2F_Movement_AssistantPlaceBall23
	waitmovement 0
	delay 30
	clearflag FLAG_BONUS_ROUND_ITEM_2
	addobject 13
	delay 30
	applymovement 4, SlateportCity_SternsShipyard_2F_Movement_AssistantPlaceBall23
	waitmovement 0
	delay 30
	clearflag FLAG_BONUS_ROUND_ITEM_3
	addobject 14
	delay 30
	applymovement 4, SlateportCity_SternsShipyard_2F_Movement_AssistantBackDown
	waitmovement 0
	msgbox SlateportCity_SternsShipyard_2F_EventScript_BonusRound_Text_2
	release
	end


SlateportCity_SternsShipyard_2F_EventScript_Bonus_Ball_1::
	lock
	random 3
	switch VAR_RESULT
	case 0, SlateportCity_SternsShipyard_2F_EventScript_Bonus_Ball_1_3
	case 1, SlateportCity_SternsShipyard_2F_EventScript_Bonus_Ball_1_4
	case 2, SlateportCity_SternsShipyard_2F_EventScript_Bonus_Ball_1_5
SlateportCity_SternsShipyard_2F_EventScript_Bonus_Ball_1_1:
	end

SlateportCity_SternsShipyard_2F_EventScript_Bonus_Ball_1_3:
	goto SlateportCity_SternsShipyard_2F_EventScript_CorrectItem1
	goto SlateportCity_SternsShipyard_2F_EventScript_Bonus_Ball_1_1

SlateportCity_SternsShipyard_2F_EventScript_Bonus_Ball_1_4:
	goto SlateportCity_SternsShipyard_2F_EventScript_CorrectItem1
	goto SlateportCity_SternsShipyard_2F_EventScript_Bonus_Ball_1_1

SlateportCity_SternsShipyard_2F_EventScript_Bonus_Ball_1_5:
	goto SlateportCity_SternsShipyard_2F_EventScript_BadEgg1
	goto SlateportCity_SternsShipyard_2F_EventScript_Bonus_Ball_1_1


SlateportCity_SternsShipyard_2F_EventScript_CorrectItem1::
	waitse
	playse SE_SUCCESS
	waitse
	call SlateportCity_SternsShipyard_2F_EventScript_GetItem
	addvar VAR_GOLDENROD_GYM_BONUS_COUNT, 1
	setflag FLAG_BONUS_ROUND_ITEM_1
	removeobject 8
	msgbox SlateportCity_SternsShipyard_2F_EventScript_CorrectItem1_Text_0
	waitmessage
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, SlateportCity_SternsShipyard_2F_Movement_DownFaceUp
	waitmovement 0
	delay 30
	applymovement 4, SlateportCity_SternsShipyard_2F_Movement_AssistantPlaceBall1
	waitmovement 0
	delay 30
	clearflag FLAG_BONUS_ROUND_ITEM_1
	addobject 8
	delay 30
	applymovement 4, SlateportCity_SternsShipyard_2F_Movement_AssistantPlaceBall23
	waitmovement 0
	delay 30
	setflag FLAG_BONUS_ROUND_ITEM_2
	removeobject 13
	delay 30
	clearflag FLAG_BONUS_ROUND_ITEM_2
	addobject 13
	delay 30
	applymovement 4, SlateportCity_SternsShipyard_2F_Movement_AssistantPlaceBall23
	waitmovement 0
	delay 30
	setflag FLAG_BONUS_ROUND_ITEM_3
	removeobject 14
	delay 30
	clearflag FLAG_BONUS_ROUND_ITEM_3
	addobject 14
	delay 30
	applymovement 4, SlateportCity_SternsShipyard_2F_Movement_AssistantBackDown
	waitmovement 0
	release
	end


SlateportCity_SternsShipyard_2F_EventScript_BadEgg1::
	waitse
	playse SE_FAILURE
	waitse
	msgbox SlateportCity_SternsShipyard_2F_EventScript_BadEgg1_Text_0
	waitmessage
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, SlateportCity_SternsShipyard_2F_Movement_PlayerCenterFrom1
	waitmovement 0
	goto SlateportCity_SternsShipyard_2F_EventScript_AfterBadEgg
	end


SlateportCity_SternsShipyard_2F_EventScript_Bonus_Ball_2::
	lock
	random 3
	switch VAR_RESULT
	case 0, SlateportCity_SternsShipyard_2F_EventScript_Bonus_Ball_2_3
	case 1, SlateportCity_SternsShipyard_2F_EventScript_Bonus_Ball_2_4
	case 2, SlateportCity_SternsShipyard_2F_EventScript_Bonus_Ball_2_5
SlateportCity_SternsShipyard_2F_EventScript_Bonus_Ball_2_1:
	end

SlateportCity_SternsShipyard_2F_EventScript_Bonus_Ball_2_3:
	goto SlateportCity_SternsShipyard_2F_EventScript_CorrectItem2
	goto SlateportCity_SternsShipyard_2F_EventScript_Bonus_Ball_2_1

SlateportCity_SternsShipyard_2F_EventScript_Bonus_Ball_2_4:
	goto SlateportCity_SternsShipyard_2F_EventScript_CorrectItem2
	goto SlateportCity_SternsShipyard_2F_EventScript_Bonus_Ball_2_1

SlateportCity_SternsShipyard_2F_EventScript_Bonus_Ball_2_5:
	goto SlateportCity_SternsShipyard_2F_EventScript_BadEgg2
	goto SlateportCity_SternsShipyard_2F_EventScript_Bonus_Ball_2_1


SlateportCity_SternsShipyard_2F_EventScript_CorrectItem2::
	waitse
	playse SE_SUCCESS
	waitse
	call SlateportCity_SternsShipyard_2F_EventScript_GetItem
	addvar VAR_GOLDENROD_GYM_BONUS_COUNT, 1
	setflag FLAG_BONUS_ROUND_ITEM_2
	removeobject 13
	msgbox SlateportCity_SternsShipyard_2F_EventScript_CorrectItem1_Text_0
	waitmessage
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, SlateportCity_SternsShipyard_2F_Movement_DownAround
	waitmovement 0
	delay 30
	applymovement 4, SlateportCity_SternsShipyard_2F_Movement_AssistantPlaceBall1
	waitmovement 0
	delay 30
	setflag FLAG_BONUS_ROUND_ITEM_1
	removeobject 8
	delay 30
	clearflag FLAG_BONUS_ROUND_ITEM_1
	addobject 8
	delay 30
	applymovement 4, SlateportCity_SternsShipyard_2F_Movement_AssistantPlaceBall23
	waitmovement 0
	delay 30
	clearflag FLAG_BONUS_ROUND_ITEM_2
	addobject 13
	delay 30
	applymovement 4, SlateportCity_SternsShipyard_2F_Movement_AssistantPlaceBall23
	waitmovement 0
	delay 30
	setflag FLAG_BONUS_ROUND_ITEM_3
	removeobject 14
	delay 30
	clearflag FLAG_BONUS_ROUND_ITEM_3
	addobject 14
	delay 30
	applymovement 4, SlateportCity_SternsShipyard_2F_Movement_AssistantBackDown
	waitmovement 0
	release
	end


SlateportCity_SternsShipyard_2F_EventScript_BadEgg2::
	waitse
	playse SE_FAILURE
	waitse
	msgbox SlateportCity_SternsShipyard_2F_EventScript_BadEgg1_Text_0
	waitmessage
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, SlateportCity_SternsShipyard_2F_Movement_PlayerCenterFrom2
	waitmovement 0
	goto SlateportCity_SternsShipyard_2F_EventScript_AfterBadEgg
	end


SlateportCity_SternsShipyard_2F_EventScript_Bonus_Ball_3::
	lock
	random 3
	switch VAR_RESULT
	case 0, SlateportCity_SternsShipyard_2F_EventScript_Bonus_Ball_3_3
	case 1, SlateportCity_SternsShipyard_2F_EventScript_Bonus_Ball_3_4
	case 2, SlateportCity_SternsShipyard_2F_EventScript_Bonus_Ball_3_5
SlateportCity_SternsShipyard_2F_EventScript_Bonus_Ball_3_1:
	end

SlateportCity_SternsShipyard_2F_EventScript_Bonus_Ball_3_3:
	goto SlateportCity_SternsShipyard_2F_EventScript_CorrectItem3
	goto SlateportCity_SternsShipyard_2F_EventScript_Bonus_Ball_3_1

SlateportCity_SternsShipyard_2F_EventScript_Bonus_Ball_3_4:
	goto SlateportCity_SternsShipyard_2F_EventScript_CorrectItem3
	goto SlateportCity_SternsShipyard_2F_EventScript_Bonus_Ball_3_1

SlateportCity_SternsShipyard_2F_EventScript_Bonus_Ball_3_5:
	goto SlateportCity_SternsShipyard_2F_EventScript_BadEgg3
	goto SlateportCity_SternsShipyard_2F_EventScript_Bonus_Ball_3_1


SlateportCity_SternsShipyard_2F_EventScript_CorrectItem3::
	waitse
	playse SE_SUCCESS
	waitse
	call SlateportCity_SternsShipyard_2F_EventScript_GetItem
	addvar VAR_GOLDENROD_GYM_BONUS_COUNT, 1
	setflag FLAG_BONUS_ROUND_ITEM_3
	removeobject 14
	msgbox SlateportCity_SternsShipyard_2F_EventScript_CorrectItem1_Text_0
	waitmessage
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, SlateportCity_SternsShipyard_2F_Movement_DownFaceUp
	waitmovement 0
	delay 30
	applymovement 4, SlateportCity_SternsShipyard_2F_Movement_AssistantPlaceBall1
	waitmovement 0
	delay 30
	setflag FLAG_BONUS_ROUND_ITEM_1
	removeobject 8
	delay 30
	clearflag FLAG_BONUS_ROUND_ITEM_1
	addobject 8
	delay 30
	applymovement 4, SlateportCity_SternsShipyard_2F_Movement_AssistantPlaceBall23
	waitmovement 0
	delay 30
	setflag FLAG_BONUS_ROUND_ITEM_2
	removeobject 13
	delay 30
	clearflag FLAG_BONUS_ROUND_ITEM_2
	addobject 13
	delay 30
	applymovement 4, SlateportCity_SternsShipyard_2F_Movement_AssistantPlaceBall23
	waitmovement 0
	delay 30
	clearflag FLAG_BONUS_ROUND_ITEM_3
	addobject 14
	delay 30
	applymovement 4, SlateportCity_SternsShipyard_2F_Movement_AssistantBackDown
	waitmovement 0
	release
	end


SlateportCity_SternsShipyard_2F_EventScript_BadEgg3::
	waitse
	playse SE_FAILURE
	waitse
	msgbox SlateportCity_SternsShipyard_2F_EventScript_BadEgg1_Text_0
	waitmessage
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, SlateportCity_SternsShipyard_2F_Movement_PlayerCenterFrom3
	waitmovement 0
	goto SlateportCity_SternsShipyard_2F_EventScript_AfterBadEgg
	end


SlateportCity_SternsShipyard_2F_EventScript_GetItem::
	random 10
	switch VAR_RESULT
	case 0, SlateportCity_SternsShipyard_2F_EventScript_GetItem_3
	case 1, SlateportCity_SternsShipyard_2F_EventScript_GetItem_4
	case 2, SlateportCity_SternsShipyard_2F_EventScript_GetItem_5
	case 3, SlateportCity_SternsShipyard_2F_EventScript_GetItem_6
	case 4, SlateportCity_SternsShipyard_2F_EventScript_GetItem_7
	case 5, SlateportCity_SternsShipyard_2F_EventScript_GetItem_8
	case 6, SlateportCity_SternsShipyard_2F_EventScript_GetItem_9
	case 7, SlateportCity_SternsShipyard_2F_EventScript_GetItem_10
	case 8, SlateportCity_SternsShipyard_2F_EventScript_GetItem_11
	case 9, SlateportCity_SternsShipyard_2F_EventScript_GetItem_12
SlateportCity_SternsShipyard_2F_EventScript_GetItem_1:
	return

SlateportCity_SternsShipyard_2F_EventScript_GetItem_3:
	giveitem ITEM_SUPER_POTION
	goto SlateportCity_SternsShipyard_2F_EventScript_GetItem_1

SlateportCity_SternsShipyard_2F_EventScript_GetItem_4:
	giveitem ITEM_POKE_BALL
	goto SlateportCity_SternsShipyard_2F_EventScript_GetItem_1

SlateportCity_SternsShipyard_2F_EventScript_GetItem_5:
	giveitem ITEM_ANTIDOTE
	goto SlateportCity_SternsShipyard_2F_EventScript_GetItem_1

SlateportCity_SternsShipyard_2F_EventScript_GetItem_6:
	giveitem ITEM_PARALYZE_HEAL
	goto SlateportCity_SternsShipyard_2F_EventScript_GetItem_1

SlateportCity_SternsShipyard_2F_EventScript_GetItem_7:
	giveitem ITEM_BURN_HEAL
	goto SlateportCity_SternsShipyard_2F_EventScript_GetItem_1

SlateportCity_SternsShipyard_2F_EventScript_GetItem_8:
	giveitem ITEM_ICE_HEAL
	goto SlateportCity_SternsShipyard_2F_EventScript_GetItem_1

SlateportCity_SternsShipyard_2F_EventScript_GetItem_9:
	giveitem ITEM_AWAKENING
	goto SlateportCity_SternsShipyard_2F_EventScript_GetItem_1

SlateportCity_SternsShipyard_2F_EventScript_GetItem_10:
	giveitem ITEM_POKE_BALL
	goto SlateportCity_SternsShipyard_2F_EventScript_GetItem_1

SlateportCity_SternsShipyard_2F_EventScript_GetItem_11:
	giveitem ITEM_POKE_BALL
	goto SlateportCity_SternsShipyard_2F_EventScript_GetItem_1

SlateportCity_SternsShipyard_2F_EventScript_GetItem_12:
	giveitem ITEM_POKE_BALL
	goto SlateportCity_SternsShipyard_2F_EventScript_GetItem_1


SlateportCity_SternsShipyard_2F_EventScript_AfterBadEgg::
	applymovement 12, SlateportCity_SternsShipyard_2F_Movement_StepDown
	waitmovement 0
	buffernumberstring STR_VAR_1, VAR_GOLDENROD_GYM_BONUS_COUNT
	msgbox SlateportCity_SternsShipyard_2F_EventScript_AfterBadEgg_Text_0
	waitmessage
	compare VAR_GOLDENROD_GYM_BONUS_COUNT, 0
	goto_if_eq SlateportCity_SternsShipyard_2F_EventScript_AfterBadEgg_2
	compare VAR_GOLDENROD_GYM_BONUS_COUNT, 2
	goto_if_le SlateportCity_SternsShipyard_2F_EventScript_AfterBadEgg_3
	compare VAR_GOLDENROD_GYM_BONUS_COUNT, 5
	goto_if_le SlateportCity_SternsShipyard_2F_EventScript_AfterBadEgg_4
	compare VAR_GOLDENROD_GYM_BONUS_COUNT, 10
	goto_if_le SlateportCity_SternsShipyard_2F_EventScript_AfterBadEgg_5
	msgbox SlateportCity_SternsShipyard_2F_EventScript_AfterBadEgg_Text_5
	waitmessage
SlateportCity_SternsShipyard_2F_EventScript_AfterBadEgg_1:
	msgbox SlateportCity_SternsShipyard_2F_EventScript_AfterBadEgg_Text_6
	waitmessage
	goto SlateportCity_SternsShipyard_2F_EventScript_PlayerExitToWhitney
	end

SlateportCity_SternsShipyard_2F_EventScript_AfterBadEgg_2:
	msgbox SlateportCity_SternsShipyard_2F_EventScript_AfterBadEgg_Text_1
	waitmessage
	goto SlateportCity_SternsShipyard_2F_EventScript_AfterBadEgg_1

SlateportCity_SternsShipyard_2F_EventScript_AfterBadEgg_3:
	msgbox SlateportCity_SternsShipyard_2F_EventScript_AfterBadEgg_Text_2
	waitmessage
	goto SlateportCity_SternsShipyard_2F_EventScript_AfterBadEgg_1

SlateportCity_SternsShipyard_2F_EventScript_AfterBadEgg_4:
	msgbox SlateportCity_SternsShipyard_2F_EventScript_AfterBadEgg_Text_3
	waitmessage
	goto SlateportCity_SternsShipyard_2F_EventScript_AfterBadEgg_1

SlateportCity_SternsShipyard_2F_EventScript_AfterBadEgg_5:
	msgbox SlateportCity_SternsShipyard_2F_EventScript_AfterBadEgg_Text_4
	waitmessage
	goto SlateportCity_SternsShipyard_2F_EventScript_AfterBadEgg_1


SlateportCity_SternsShipyard_2F_Movement_AssistantPlaceBall1Start:
	walk_left
	face_up
	step_end

SlateportCity_SternsShipyard_2F_Movement_AssistantPlaceBall1:
	walk_up
	walk_left
	face_up
	step_end

SlateportCity_SternsShipyard_2F_Movement_AssistantPlaceBall23:
	walk_right
	face_up
	step_end

SlateportCity_SternsShipyard_2F_Movement_AssistantBackDown:
	walk_left
	walk_down
	walk_in_place_up
	step_end

SlateportCity_SternsShipyard_2F_Movement_DownFaceUp:
	walk_down
	walk_in_place_up
	step_end

SlateportCity_SternsShipyard_2F_Movement_DownAround:
	walk_right
	walk_down
	walk_in_place_up
	step_end

SlateportCity_SternsShipyard_2F_Movement_PlayerCenterFrom1:
	walk_right
	walk_right
	walk_right
	walk_down
	walk_right
	walk_in_place_up
	step_end

SlateportCity_SternsShipyard_2F_Movement_PlayerCenterFrom2:
	walk_right
	walk_right
	walk_down
	walk_right
	walk_in_place_up
	step_end

SlateportCity_SternsShipyard_2F_Movement_PlayerCenterFrom3:
	walk_right
	walk_down
	walk_right
	walk_in_place_up
	step_end

SlateportCity_SternsShipyard_2F_EventScript_TriggerBottom::
	lock
	msgbox SlateportCity_SternsShipyard_2F_EventScript_TriggerBottom_Text_0
	waitmessage
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, SlateportCity_SternsShipyard_2F_Movement_WalkUpOne
	waitmovement 0
	release
	end


SlateportCity_SternsShipyard_2F_Movement_WalkUpOne:
	walk_up
	step_end

SlateportCity_SternsShipyard_2F_EventScript_TriggerTop::
	lock
	msgbox SlateportCity_SternsShipyard_2F_EventScript_TriggerBottom_Text_0
	waitmessage
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, SlateportCity_SternsShipyard_2F_Movement_WalkDownOne
	waitmovement 0
	release
	end


SlateportCity_SternsShipyard_2F_Movement_WalkDownOne:
	walk_down
	step_end

SlateportCity_SternsShipyard_2F_EventScript_Assistant::
	msgbox SlateportCity_SternsShipyard_2F_EventScript_Assistant_Text_0, MSGBOX_NPC
	end


SlateportCity_SternsShipyard_2F_EventScript_Host::
	msgbox SlateportCity_SternsShipyard_2F_EventScript_Host_Text_0, MSGBOX_NPC
	end


SlateportCity_SternsShipyard_2F_EventScript_Mic::
	msgbox SlateportCity_SternsShipyard_2F_EventScript_Mic_Text_0, MSGBOX_NPC
	end


SlateportCity_SternsShipyard_2F_EventScript_PlayerExitToWhitney::
	msgbox SlateportCity_SternsShipyard_2F_EventScript_PlayerExitToWhitney_Text_0
	waitmessage
	closemessage
	playse SE_M_ENCORE2
	waitse
	msgbox SlateportCity_SternsShipyard_2F_EventScript_PlayerExitToWhitney_Text_1
	waitmessage
	closemessage
	warp MAP_MAUVILLE_CITY_GYM, 0
	waitstate
	release
	end


SlateportCity_SternsShipyard_2F_On_Frame_Text_0:
	.string "Our next CHALLENGER comes all the way\n"
	.string "from Cherrygrove City, let's hear it for\l"
	.string "{PLAYER}!$"

SlateportCity_SternsShipyard_2F_On_Frame_Text_1:
	.string "Welcome to The Challenge, {PLAYER}!\p"
	.string "I will be asking you a series of five yes\n"
	.string "or no questions, and for each incorrect\l"
	.string "answer you give, you will face a\l"
	.string "TRAINER!\p"
	.string "If you manage to answer all five\n"
	.string "questions correctly, then you will get\l"
	.string "to play a special bonus round!\p"
	.string "Now then, for your first question...$"

SlateportCity_SternsShipyard_2F_On_Frame_Text_2:
	.string "The first question is always the\n"
	.string "easiest, or so we say.\p"
	.string "It really depends on your specific\n"
	.string "knowledge.\p"
	.string "Perhaps this next question will be the\n"
	.string "easiest for you!\p"
	.string "Now then, onto the second question...$"

SlateportCity_SternsShipyard_2F_On_Frame_Text_3:
	.string "Two down, and three to go!\p"
	.string "You know, they give me a list of\n"
	.string "questions to ask, but that was one I\l"
	.string "snuck in myself.\p"
	.string "I mistakenly called them Prism Berries\n"
	.string "for years before my wife corrected me!\p"
	.string "Now then, onto the third question...$"

SlateportCity_SternsShipyard_2F_On_Frame_Text_4:
	.string "You're going to bankrupt all these\n"
	.string "people in the audience betting against\l"
	.string "you!\p"
	.string "Just kidding! Gambling is illegal!\p"
	.string "(Unless it's at our fine Goldenrod City\n"
	.string "Game Corner).\p"
	.string "Now then, onto the fourth question...$"

SlateportCity_SternsShipyard_2F_On_Frame_Text_5:
	.string "Wow!\p"
	.string "Just look how far you've made it now.\p"
	.string "How are you feeling, {PLAYER}?$"

SlateportCity_SternsShipyard_2F_On_Frame_Text_6:
	.string "Haha!\p"
	.string "Still in the yes or no mindset, I see.\p"
	.string "Well in that case, let's move on to your\n"
	.string "final question...$"

SlateportCity_SternsShipyard_2F_On_Frame_Text_7:
	.string "Congratulations, {PLAYER}!$"

SlateportCity_SternsShipyard_2F_EventScript_Question_1_True_Text_0:
	.string "Is ALICIA the AZALEA TOWN gym leader?$"

SlateportCity_SternsShipyard_2F_EventScript_Question_1_True_Text_1:
	.string "Oh, I'm sorry but that is incorrect.\p"
	.string "ALICIA is in fact the AZALEA TOWN gym\n"
	.string "leader.\p"
	.string "Since you've answered incorrectly, you\n"
	.string "must now face a TRAINER!$"

SlateportCity_SternsShipyard_2F_EventScript_Question_1_False_Text_0:
	.string "Is OLIVIA the AZALEA TOWN gym leader?$"

SlateportCity_SternsShipyard_2F_EventScript_Question_1_False_Text_1:
	.string "Oh, I'm sorry but that is incorrect.\p"
	.string "The AZALEA TOWN gym leader is actually\n"
	.string "ALICIA.\p"
	.string "Since you've answered incorrectly, you\n"
	.string "must now face a TRAINER!$"

SlateportCity_SternsShipyard_2F_EventScript_Question_2_True_Text_0:
	.string "Will a Persim Berry cure a POKéMON's\n"
	.string "confusion?$"

SlateportCity_SternsShipyard_2F_EventScript_Question_2_True_Text_1:
	.string "Oh, I'm sorry but that is incorrect.\p"
	.string "A Persim Berry will in fact cure\n"
	.string "confusion.\p"
	.string "Since you've answered incorrectly, you\n"
	.string "must now face a TRAINER!$"

SlateportCity_SternsShipyard_2F_EventScript_Question_2_False_Text_0:
	.string "Will a Prism Berry cure a POKéMON's\n"
	.string "confusion?$"

SlateportCity_SternsShipyard_2F_EventScript_Question_2_False_Text_1:
	.string "Oh, I'm sorry but that is incorrect.\p"
	.string "It's actually a Persim Berry that cures\n"
	.string "confusion.\p"
	.string "Since you've answered incorrectly, you\n"
	.string "must now face a TRAINER!$"

SlateportCity_SternsShipyard_2F_EventScript_Question_3_True_Text_0:
	.string "Is Cyndaquil's hidden ability Flash\n"
	.string "Fire?$"

SlateportCity_SternsShipyard_2F_EventScript_Question_3_True_Text_1:
	.string "Oh, I'm sorry but that is incorrect.\p"
	.string "Cyndaquil's hidden ability is in fact\n"
	.string "Flash Fire.\p"
	.string "Since you've answered incorrectly, you\n"
	.string "must now face a TRAINER!$"

SlateportCity_SternsShipyard_2F_EventScript_Question_3_False_Text_0:
	.string "Is Cyndaquil's hidden ability Flame\n"
	.string "Body?$"

SlateportCity_SternsShipyard_2F_EventScript_Question_3_False_Text_1:
	.string "Oh, I'm sorry but that is incorrect.\p"
	.string "Cyndaquil's hidden ability is actually\n"
	.string "Flash Fire.\p"
	.string "Since you've answered incorrectly, you\n"
	.string "must now face a TRAINER!$"

SlateportCity_SternsShipyard_2F_EventScript_Question_4_True_Text_0:
	.string "Can Sun Stones be purchased from the\n"
	.string "Goldenrod Department Store?$"

SlateportCity_SternsShipyard_2F_EventScript_Question_4_True_Text_1:
	.string "Oh, I'm sorry but that is incorrect.\p"
	.string "Sun Stones can in fact be purchased\n"
	.string "from the Goldenrod Department Store.\p"
	.string "Since you've answered incorrectly, you\n"
	.string "must now face a TRAINER!$"

SlateportCity_SternsShipyard_2F_EventScript_Question_4_False_Text_0:
	.string "Can Moon Stones be purchased from the\n"
	.string "Goldenrod Department Store?$"

SlateportCity_SternsShipyard_2F_EventScript_Question_4_False_Text_1:
	.string "Oh, I'm sorry but that is incorrect.\p"
	.string "Moon Stones cannot be purchased from\n"
	.string "the Goldenrod Department Store.\p"
	.string "Since you've answered incorrectly, you\n"
	.string "must now face a TRAINER!$"

SlateportCity_SternsShipyard_2F_EventScript_Question_5_True_Text_0:
	.string "Can the POKéMON Dewpider be found on\n"
	.string "Route 33?$"

SlateportCity_SternsShipyard_2F_EventScript_Question_5_True_Text_1:
	.string "Oh, I'm sorry but that is incorrect.\p"
	.string "Dewpider can in fact be found on Route\n"
	.string "33.\p"
	.string "Since you've answered incorrectly, you\n"
	.string "must now face a TRAINER!$"

SlateportCity_SternsShipyard_2F_EventScript_Question_5_False_Text_0:
	.string "Can the POKéMON Dewpider be found on\n"
	.string "Route 32?$"

SlateportCity_SternsShipyard_2F_EventScript_Question_5_False_Text_1:
	.string "Oh, I'm sorry but that is incorrect.\p"
	.string "Wild Dewpider cannot be found on Route\n"
	.string "32.\p"
	.string "Since you've answered incorrectly, you\n"
	.string "must now face a TRAINER!$"

SlateportCity_SternsShipyard_2F_EventScript_BonusRound_Text_0:
	.string "You've answered all five questions\n"
	.string "correctly!\p"
	.string "You know what that means...\p"
	.string "It's time for a bonus round!$"

SlateportCity_SternsShipyard_2F_EventScript_BonusRound_Text_1:
	.string "Now, if you will turn your gaze over to\n"
	.string "my lovely assistant...$"

SlateportCity_SternsShipyard_2F_EventScript_BonusRound_Text_2:
	.string "My assistant just placed down three\n"
	.string "POKéBALLS, one of which contains a Bad\l"
	.string "Egg.\p"
	.string "{PLAYER}, you are to pick one of the\n"
	.string "three!\p"
	.string "You can keep whatever items you may\n"
	.string "select as a prize.\p"
	.string "After you pick a POKéBALL, they will be\n"
	.string "reset and you can choose again.\p"
	.string "You may continue until you pick the Bad\n"
	.string "Egg.\p"
	.string "Now then, make your first choice!$"

SlateportCity_SternsShipyard_2F_EventScript_CorrectItem1_Text_0:
	.string "Good choice! The items will now be\n"
	.string "reset.$"

SlateportCity_SternsShipyard_2F_EventScript_BadEgg1_Text_0:
	.string "Oh, tough luck!\p"
	.string "You picked the Bad Egg!$"

SlateportCity_SternsShipyard_2F_EventScript_AfterBadEgg_Text_0:
	.string "Before picking the Bad Egg, you managed\n"
	.string "to guess correctly a total of\l"
	.string "{STR_VAR_1} time(s)!$"

SlateportCity_SternsShipyard_2F_EventScript_AfterBadEgg_Text_1:
	.string "You're not a very lucky person, are you?$"

SlateportCity_SternsShipyard_2F_EventScript_AfterBadEgg_Text_2:
	.string "Well, at least you won a few items.$"

SlateportCity_SternsShipyard_2F_EventScript_AfterBadEgg_Text_3:
	.string "You have some decent luck, that's\n"
	.string "pretty good.$"

SlateportCity_SternsShipyard_2F_EventScript_AfterBadEgg_Text_4:
	.string "Outstanding luck! You should visit the\n"
	.string "Goldenrod City Game Corner!$"

SlateportCity_SternsShipyard_2F_EventScript_AfterBadEgg_Text_5:
	.string "I can't believe it, that's a new record!$"

SlateportCity_SternsShipyard_2F_EventScript_AfterBadEgg_Text_6:
	.string "Good job, {PLAYER}!$"

SlateportCity_SternsShipyard_2F_EventScript_TriggerBottom_Text_0:
	.string "Don't leave yet, you haven't finished\n"
	.string "the bonus round!$"

SlateportCity_SternsShipyard_2F_EventScript_Assistant_Text_0:
	.string "Go on and select a POKéBALL.$"

SlateportCity_SternsShipyard_2F_EventScript_Host_Text_0:
	.string "You're doing great, kid!\p"
	.string "Go on and pick a POKéBALL.$"

SlateportCity_SternsShipyard_2F_EventScript_Mic_Text_0:
	.string "Don't be too stressed, you look great in\n"
	.string "this lighting!$"

SlateportCity_SternsShipyard_2F_EventScript_PlayerExitToWhitney_Text_0:
	.string "You have qualified to battle WHITNEY!$"

SlateportCity_SternsShipyard_2F_EventScript_PlayerExitToWhitney_Text_1:
	.string "A rare honor, only awarded to the most\n"
	.string "skilled competitors.\p"
	.string "Go on then, the Goldenrod City Gym\n"
	.string "Leader is waiting...$"

SlateportCity_SternsShipyard_2F_Text_KirkDefeat::
	.string "I've lost...\n"
	.string "I'm sorry WHITNEY.$"

SlateportCity_SternsShipyard_2F_Text_Correct_Answer::
	.string "You are abolutely correct!$"

SlateportCity_SternsShipyard_2F_Text_TrainerIntro::
	.string "Let's have a good battle!$"

SlateportCity_SternsShipyard_2F_Text_Winner_Is::
	.string "And the winner is {PLAYER}!$"
