Route109_MapScripts::
	.byte 0


Route109_EventScript_FarmSign::
	msgbox Route109_EventScript_FarmSign_Text_0, MSGBOX_SIGN
	end


Route109_EventScript_Trigger::
	lock
	goto_if_set FLAG_HIDE_RT39_BOULDERS, Route109_EventScript_Trigger_2
	applymovement 23, Route109_Movement_BlackBelt_Approach
	applymovement 24, Route109_Movement_BlackBelt_Approach
	applymovement 25, Route109_Movement_BlackBelt_ApproachAround
	waitmovement 0
	msgbox Route109_EventScript_Trigger_Text_0
	waitmessage
	closemessage
	fadescreen FADE_TO_BLACK
	removeobject 23
	removeobject 24
	removeobject 25
	removeobject 19
	removeobject 20
	removeobject 21
	removeobject 22
	setflag FLAG_HIDE_RT39_BOULDERS
	delay 30
	waitse
	playse SE_M_STRENGTH
	waitse
	playse SE_M_STRENGTH
	waitse
	playse SE_M_STRENGTH
	waitse
	playse SE_M_STRENGTH
	waitse
	playse SE_M_STRENGTH
	waitse
	delay 30
	fadescreen FADE_FROM_BLACK
	release
	end

Route109_EventScript_Trigger_2:
	release
	end


Route109_EventScript_RaikouTrigger1::
	lock
	goto_if_set FLAG_HIDE_RAIKOU_RT39, Route109_EventScript_RaikouTrigger1_1
	applymovement OBJ_EVENT_ID_PLAYER, Route109_Movement_PlayerDown1
	waitmovement 0
	goto Route109_EventScript_RaikouMain
	end

Route109_EventScript_RaikouTrigger1_1:
	release
	end


Route109_EventScript_RaikouTrigger2::
	lock
	goto_if_set FLAG_HIDE_RAIKOU_RT39, Route109_EventScript_RaikouTrigger2_1
	applymovement OBJ_EVENT_ID_PLAYER, Route109_Movement_PlayerDown2
	waitmovement 0
	goto Route109_EventScript_RaikouMain
	end

Route109_EventScript_RaikouTrigger2_1:
	release
	end


Route109_EventScript_RaikouTrigger3::
	lock
	goto_if_set FLAG_HIDE_RAIKOU_RT39, Route109_EventScript_RaikouTrigger3_1
	applymovement OBJ_EVENT_ID_PLAYER, Route109_Movement_PlayerDown3
	waitmovement 0
	goto Route109_EventScript_RaikouMain
	end

Route109_EventScript_RaikouTrigger3_1:
	release
	end


Route109_EventScript_RaikouTrigger4::
	lock
	goto_if_set FLAG_HIDE_RAIKOU_RT39, Route109_EventScript_RaikouTrigger4_1
	applymovement OBJ_EVENT_ID_PLAYER, Route109_Movement_PlayerDown4
	waitmovement 0
	goto Route109_EventScript_RaikouMain
	end

Route109_EventScript_RaikouTrigger4_1:
	release
	end


Route109_EventScript_RaikouMain::
	fadeoutbgm 1
	playse SE_PIN
	applymovement 26, Route109_LookUpExclamation
	waitmovement 0
	waitse
	delay 60
	playmoncry SPECIES_RAIKOU, CRY_MODE_NORMAL
	setvar VAR_0x8004, 1
	setvar VAR_0x8005, 1
	setvar VAR_0x8006, 8
	setvar VAR_0x8007, 5
	special ShakeCamera
	waitstate
	delay 60
	playse SE_LEDGE
	applymovement 26, Route109_JumpUp
	waitmovement 0
	waitse
	playse SE_LEDGE
	applymovement 26, Route109_JumpLeft
	waitmovement 0
	waitse
	playse SE_LEDGE
	applymovement 26, Route109_JumpUp
	waitmovement 0
	waitse
	applymovement OBJ_EVENT_ID_PLAYER, Route109_Movement_PlayerFaceLeft
	waitmovement 0
	playse SE_LEDGE
	applymovement 26, Route109_JumpUp
	waitmovement 0
	waitse
	applymovement OBJ_EVENT_ID_PLAYER, Route109_Movement_PlayerFaceUp
	waitmovement 0
	playse SE_FLEE
	applymovement 26, Route109_RaikouFlee
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Route109_Movement_PlayerFaceRight
	waitmovement 0
	playse SE_LEDGE
	applymovement 26, Route109_JumpRight
	waitmovement 0
	waitse
	playse SE_LEDGE
	applymovement 26, Route109_JumpRight
	waitmovement 0
	waitse
	applymovement 26, Route109_RaikouExit
	waitmovement 0
	removeobject 26
	setflag FLAG_HIDE_RAIKOU_RT39
	setflag FLAG_LATIOS_OR_LATIAS_ROAMING
	setvar VAR_0x8004, 0
	special InitRoamer
	copyvar VAR_ROAMER_POKEMON, VAR_RESULT
	fadeinbgm 1
	release
	end


Route109_Movement_PlayerDown1:
	walk_down
	walk_right
	walk_right
	walk_down
	walk_down
	step_end

Route109_Movement_PlayerDown2:
	walk_down
	walk_right
	walk_down
	walk_down
	step_end

Route109_Movement_PlayerDown3:
	walk_down
	walk_down
	walk_down
	step_end

Route109_Movement_PlayerDown4:
	walk_down
	walk_left
	walk_down
	walk_down
	step_end

Route109_Movement_BlackBelt_Approach:
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_in_place_right
	step_end

Route109_Movement_BlackBelt_ApproachAround:
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_right
	walk_right
	step_end

Route109_LookUpExclamation:
	emote_exclamation_mark
	walk_in_place_up
	step_end

Route109_JumpUp:
	jump_2_up
	step_end

Route109_JumpLeft:
	jump_2_left
	step_end

Route109_Movement_PlayerFaceLeft:
	face_left
	step_end

Route109_Movement_PlayerFaceUp:
	face_up
	step_end

Route109_Movement_PlayerFaceRight:
	face_right
	step_end

Route109_RaikouFlee:
	walk_fast_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	step_end

Route109_JumpRight:
	jump_2_right
	step_end

Route109_RaikouExit:
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	step_end

Route109_EventScript_Woman::
	msgbox Route109_Text_LittleKidsDartAround, MSGBOX_NPC
	end

Route109_EventScript_Zigzagoon::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_MILTANK, CRY_MODE_NORMAL
	msgbox Route109_Text_ZigzagoonCry, MSGBOX_DEFAULT
	waitmoncry
	release
	end

Route109_EventScript_SeashoreHouseSign::
	msgbox Route109_Text_SeashoreHouseSign, MSGBOX_SIGN
	end

Route109_EventScript_TrainerTipsSign::
	msgbox Route109_Text_TrainerTipsSign, MSGBOX_SIGN
	end

Route109_EventScript_Ricky::
	trainerbattle_single TRAINER_RICKY_1, Route109_Text_RickyIntro, Route109_Text_RickyDefeated, Route109_EventScript_RickyRegisterMatchCallAfterBattle
	specialvar VAR_RESULT, ShouldTryRematchBattle
	goto_if_eq VAR_RESULT, TRUE, Route109_EventScript_RickyRematch
	msgbox Route109_Text_RickyPostBattle, MSGBOX_DEFAULT
	release
	end

Route109_EventScript_RickyRegisterMatchCallAfterBattle::
	special PlayerFaceTrainerAfterBattle
	waitmovement 0
	msgbox Route109_Text_RickyRegister, MSGBOX_DEFAULT
	register_matchcall TRAINER_RICKY_1
	release
	end

Route109_EventScript_RickyRematch::
	trainerbattle_rematch TRAINER_RICKY_1, Route109_Text_RickyRematchIntro, Route109_Text_RickyRematchDefeated
	msgbox Route109_Text_RickyRematchPostBattle, MSGBOX_AUTOCLOSE
	end

Route109_EventScript_Alice::
	trainerbattle_single TRAINER_ALICE, Route109_Text_AliceIntro, Route109_Text_AliceDefeated
	msgbox Route109_Text_AlicePostBattle, MSGBOX_AUTOCLOSE
	end

Route109_EventScript_Huey::
	trainerbattle_single TRAINER_HUEY, Route109_Text_HueyIntro, Route109_Text_HueyDefeated
	msgbox Route109_Text_HueyPostBattle, MSGBOX_AUTOCLOSE
	end

Route109_EventScript_Lola::
	trainerbattle_single TRAINER_LOLA_1, Route109_Text_LolaIntro, Route109_Text_LolaDefeated, Route109_EventScript_LolaRegisterMatchCallAfterBattle
	specialvar VAR_RESULT, ShouldTryRematchBattle
	goto_if_eq VAR_RESULT, TRUE, Route109_EventScript_LolaRematch
	msgbox Route109_Text_LolaPostBattle, MSGBOX_DEFAULT
	release
	end

Route109_EventScript_LolaRegisterMatchCallAfterBattle::
	special PlayerFaceTrainerAfterBattle
	waitmovement 0
	msgbox Route109_Text_LolaRegister, MSGBOX_DEFAULT
	register_matchcall TRAINER_LOLA_1
	release
	end

Route109_EventScript_LolaRematch::
	trainerbattle_rematch TRAINER_LOLA_1, Route109_Text_LolaRematchIntro, Route109_Text_LolaRematchDefeated
	msgbox Route109_Text_LolaRematchPostBattle, MSGBOX_AUTOCLOSE
	end

Route109_EventScript_Austina::
	trainerbattle_single TRAINER_AUSTINA, Route109_Text_AustinaIntro, Route109_Text_AustinaDefeated
	msgbox Route109_Text_AustinaPostBattle, MSGBOX_AUTOCLOSE
	end

Route109_EventScript_Carter::
	trainerbattle_single TRAINER_CARTER, Route109_Text_CarterIntro, Route109_Text_CarterDefeated
	msgbox Route109_Text_CarterPostBattle, MSGBOX_AUTOCLOSE
	end

Route109_EventScript_Paul::
	trainerbattle_double TRAINER_MEL_AND_PAUL, Route109_Text_PaulIntro, Route109_Text_PaulDefeated, Route109_Text_PaulNotEnoughPokemon
	msgbox Route109_Text_PaulPostBattle, MSGBOX_AUTOCLOSE
	end

Route109_EventScript_Mel::
	trainerbattle_double TRAINER_MEL_AND_PAUL, Route109_Text_MelIntro, Route109_Text_MelDefeated, Route109_Text_MelNotEnoughPokemon
	msgbox Route109_Text_MelPostBattle, MSGBOX_AUTOCLOSE
	end

Route109_EventScript_Hailey::
	trainerbattle_single TRAINER_HAILEY, Route109_Text_HaileyIntro, Route109_Text_HaileyDefeated
	msgbox Route109_Text_HaileyPostBattle, MSGBOX_AUTOCLOSE
	end

Route109_EventScript_Elijah::
	trainerbattle_single TRAINER_ELIJAH, Route109_Text_ElijahIntro, Route109_Text_ElijahDefeated
	msgbox Route109_Text_ElijahPostBattle, MSGBOX_AUTOCLOSE
	end

Route109_Text_LittleKidsDartAround:
	.string "My my, these girls of mine can sure be\n"
	.string "rowdy!\p"
	.string "Perhaps battling a strong TRAINER will\n"
	.string "tucker them out.$"

Route109_Text_ZigzagoonCry:
	.string "MILTANK: Moo moo?$"

Route109_Text_SeashoreHouseSign:
	.string "ROUTE 39\n"
	.string "{DOWN_ARROW} South to OLIVINE CITY$"

Route109_Text_TrainerTipsSign:
	.string "TRAINER TIPS\p"
	.string "POKéMON at the same level may not\n"
	.string "always have identical stats.\p"
	.string "POKéMON raised by TRAINERS are said\n"
	.string "to grow stronger than wild POKéMON.$"

Route109_EventScript_FarmSign_Text_0:
	.string "Moomoo Farm\n"
	.string "Enjoy Our Fresh and Tasty Milk$"

Route109_EventScript_Trigger_Text_0:
	.string "Hey, nice work pushing those boulders\n"
	.string "kid!\p"
	.string "Don't worry, we'll take it from here.$"
