Route124_MapScripts::
	.byte 0

Route124_EventScript_Spencer::
	trainerbattle_single TRAINER_SPENCER, Route124_Text_SpencerIntro, Route124_Text_SpencerDefeat
	msgbox Route124_Text_SpencerPostBattle, MSGBOX_AUTOCLOSE
	end

Route124_EventScript_Roland::
	trainerbattle_single TRAINER_ROLAND, Route124_Text_RolandIntro, Route124_Text_RolandDefeat
	msgbox Route124_Text_RolandPostBattle, MSGBOX_AUTOCLOSE
	end

Route124_EventScript_Jenny::
	trainerbattle_single TRAINER_JENNY_1, Route124_Text_JennyIntro, Route124_Text_JennyDefeat, Route124_EventScript_RegisterJenny
	specialvar VAR_RESULT, ShouldTryRematchBattle
	goto_if_eq VAR_RESULT, TRUE, Route124_EventScript_RematchJenny
	msgbox Route124_Text_JennyPostBattle, MSGBOX_DEFAULT
	release
	end

Route124_EventScript_RegisterJenny::
	special PlayerFaceTrainerAfterBattle
	waitmovement 0
	msgbox Route124_Text_JennyRegister, MSGBOX_DEFAULT
	register_matchcall TRAINER_JENNY_1
	release
	end

Route124_EventScript_RematchJenny::
	trainerbattle_rematch TRAINER_JENNY_1, Route124_Text_JennyRematchIntro, Route124_Text_JennyRematchDefeat
	msgbox Route124_Text_JennyPostRematch, MSGBOX_AUTOCLOSE
	end

Route124_EventScript_Grace::
	trainerbattle_single TRAINER_GRACE, Route124_Text_GraceIntro, Route124_Text_GraceDefeat
	msgbox Route124_Text_GracePostBattle, MSGBOX_AUTOCLOSE
	end

Route124_EventScript_Chad::
	trainerbattle_single TRAINER_CHAD, Route124_Text_ChadIntro, Route124_Text_ChadDefeat
	msgbox Route124_Text_ChadPostBattle, MSGBOX_AUTOCLOSE
	end

Route124_EventScript_Lila::
	trainerbattle_double TRAINER_LILA_AND_ROY_1, Route124_Text_LilaIntro, Route124_Text_LilaDefeat, Route124_Text_LilaNotEnoughMons, Route124_EventScript_RegisterLila
	specialvar VAR_RESULT, ShouldTryRematchBattle
	goto_if_eq VAR_RESULT, TRUE, Route124_EventScript_RematchLila
	msgbox Route124_Text_LilaPostBattle, MSGBOX_DEFAULT
	release
	end

Route124_EventScript_RegisterLila::
	msgbox Route124_Text_LilaRoyRegister, MSGBOX_DEFAULT
	register_matchcall TRAINER_LILA_AND_ROY_1
	release
	end

Route124_EventScript_RematchLila::
	trainerbattle_rematch_double TRAINER_LILA_AND_ROY_1, Route124_Text_LilaRematchIntro, Route124_Text_LilaRematchDefeat, Route124_Text_LilaRematchNotEnoughMons
	msgbox Route124_Text_LilaPostRematch, MSGBOX_AUTOCLOSE
	end

Route124_EventScript_Roy::
	trainerbattle_double TRAINER_LILA_AND_ROY_1, Route124_Text_RoyIntro, Route124_Text_RoyDefeat, Route124_Text_RoyNotEnoughMons, Route124_EventScript_RegisterRoy
	specialvar VAR_RESULT, ShouldTryRematchBattle
	goto_if_eq VAR_RESULT, TRUE, Route124_EventScript_RematchRoy
	msgbox Route124_Text_RoyPostBattle, MSGBOX_DEFAULT
	release
	end

Route124_EventScript_RegisterRoy::
	msgbox Route124_Text_LilaRoyRegister, MSGBOX_DEFAULT
	register_matchcall TRAINER_LILA_AND_ROY_1
	release
	end

Route124_EventScript_RematchRoy::
	trainerbattle_rematch_double TRAINER_LILA_AND_ROY_1, Route124_Text_RoyRematchIntro, Route124_Text_RoyRematchDefeat, Route124_Text_RoyRematchNotEnoughMons
	msgbox Route124_Text_RoyPostRematch, MSGBOX_AUTOCLOSE
	end

Route124_EventScript_Declan::
	trainerbattle_single TRAINER_DECLAN, Route124_Text_DeclanIntro, Route124_Text_DeclanDefeat
	msgbox Route124_Text_DeclanPostBattle, MSGBOX_AUTOCLOSE
	end

Route124_EventScript_Isabella::
	trainerbattle_single TRAINER_ISABELLA, Route124_Text_IsabellaIntro, Route124_Text_IsabellaDefeat
	msgbox Route124_Text_IsabellaPostBattle, MSGBOX_AUTOCLOSE
	end

Route124_EventScript_Whirlpool::
	lock
	waitse
	playse SE_M_WHIRLPOOL
	specialvar VAR_RESULT, GetPlayerFacingDirection
	switch VAR_RESULT
	case DIR_EAST, Route124_EventScript_Whirlpool_3
	case DIR_NORTH, Route124_EventScript_Whirlpool_4
	case DIR_WEST, Route124_EventScript_Whirlpool_5
	case DIR_SOUTH, Route124_EventScript_Whirlpool_6
Route124_EventScript_Whirlpool_1:
	waitse
	release
	end

Route124_EventScript_Whirlpool_3:
	call Route124_EventScript_FacingEast
	goto Route124_EventScript_Whirlpool_1

Route124_EventScript_Whirlpool_4:
	call Route124_EventScript_FacingNorth
	goto Route124_EventScript_Whirlpool_1

Route124_EventScript_Whirlpool_5:
	call Route124_EventScript_FacingWest
	goto Route124_EventScript_Whirlpool_1

Route124_EventScript_Whirlpool_6:
	call Route124_EventScript_FacingSouth
	goto Route124_EventScript_Whirlpool_1


Route124_EventScript_FacingEast::
	applymovement OBJ_EVENT_ID_PLAYER, Route124_Movement_SpinToLeft
	waitmovement 0
	return


Route124_EventScript_FacingNorth::
	applymovement OBJ_EVENT_ID_PLAYER, Route124_Movement_SpinToDown
	waitmovement 0
	return


Route124_EventScript_FacingWest::
	applymovement OBJ_EVENT_ID_PLAYER, Route124_Movement_SpinToRight
	waitmovement 0
	return


Route124_EventScript_FacingSouth::
	applymovement OBJ_EVENT_ID_PLAYER, Route124_Movement_SpinToUp
	waitmovement 0
	return


Route124_Movement_SpinToLeft:
	face_up
	delay_16
	face_left
	delay_16
	face_down
	delay_16
	face_right
	delay_16
	face_up
	walk_left
	step_end

Route124_Movement_SpinToDown:
	face_left
	delay_16
	face_down
	delay_16
	face_right
	delay_16
	face_up
	face_left
	delay_16
	walk_down
	step_end

Route124_Movement_SpinToRight:
	face_down
	delay_16
	face_right
	delay_16
	face_up
	face_left
	delay_16
	face_down
	delay_16
	walk_right
	step_end

Route124_Movement_SpinToUp:
	face_right
	delay_16
	face_up
	face_left
	delay_16
	face_down
	delay_16
	face_right
	delay_16
	walk_up
	step_end
