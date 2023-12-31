MagmaHideout_4F_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, MagmaHideout_4F_MapScripts_MAP_SCRIPT_ON_TRANSITION
	map_script MAP_SCRIPT_ON_LOAD, MagmaHideout_4F_MapScripts_MAP_SCRIPT_ON_LOAD
	map_script MAP_SCRIPT_ON_FRAME_TABLE, MagmaHideout_4F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, MagmaHideout_4F_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
	.byte 0

MagmaHideout_4F_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	call_if_eq VAR_ECRUTEAK_STATE, 7, MagmaHideout_4F_EventScript_SetUpAfterPallet
	call_if_eq VAR_ECRUTEAK_STATE, 8, MagmaHideout_4F_EventScript_SetUpAfterEcruteak
	end

MagmaHideout_4F_MapScripts_MAP_SCRIPT_ON_LOAD:
	goto_if_set FLAG_CELEBI_TANK_BROKEN, MagmaHideout_4F_MapScripts_MAP_SCRIPT_ON_LOAD_1
	return

MagmaHideout_4F_MapScripts_MAP_SCRIPT_ON_LOAD_1:
	setmetatile 8, 5, 0x230, TRUE
	setmetatile 9, 5, 0x231, TRUE
	setmetatile 10, 5, 0x232, TRUE
	setmetatile 8, 4, 0x228, TRUE
	setmetatile 9, 4, 0x229, TRUE
	setmetatile 10, 4, 0x22A, TRUE
	setmetatile 8, 3, 0x220, TRUE
	setmetatile 9, 3, 0x221, TRUE
	setmetatile 10, 3, 0x222, TRUE
	end

MagmaHideout_4F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
	map_script_2 VAR_ECRUTEAK_STATE, 7, MagmaHideout_4F_EventScript_OnFrameAfterPallet
	map_script_2 VAR_ECRUTEAK_STATE, 8, MagmaHideout_4F_EventScript_OnFrameAfterEcruteak
	.2byte 0

MagmaHideout_4F_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
	map_script_2 VAR_ECRUTEAK_STATE, 7, MagmaHideout_4F_EventScript_OnWarp
	map_script_2 VAR_ECRUTEAK_STATE, 8, MagmaHideout_4F_EventScript_OnWarp
	.2byte 0


MagmaHideout_4F_EventScript_SetUpAfterPallet::
	setobjectxyperm 1, 8, 8
	setobjectmovementtype 1, MOVEMENT_TYPE_FACE_UP
	setobjectmovementtype 6, MOVEMENT_TYPE_FACE_DOWN
	setobjectmovementtype 5, MOVEMENT_TYPE_FACE_DOWN
	setobjectmovementtype 10, MOVEMENT_TYPE_FACE_DOWN
	return


MagmaHideout_4F_EventScript_SetUpAfterEcruteak::
	setobjectxyperm 1, 7, 9
	setobjectxyperm 5, 7, 6
	setobjectxyperm 11, 9, 8
	setobjectxyperm 12, 8, 8
	setobjectmovementtype 1, MOVEMENT_TYPE_FACE_UP
	setobjectmovementtype 6, MOVEMENT_TYPE_FACE_DOWN
	setobjectmovementtype 5, MOVEMENT_TYPE_FACE_DOWN
	setobjectmovementtype 10, MOVEMENT_TYPE_FACE_DOWN
	setobjectmovementtype 9, MOVEMENT_TYPE_FACE_DOWN
	setobjectmovementtype 11, MOVEMENT_TYPE_FACE_UP
	setobjectmovementtype 12, MOVEMENT_TYPE_FACE_UP
	return


MagmaHideout_4F_EventScript_OnWarp::
	applymovement OBJ_EVENT_ID_PLAYER, MagmaHideout_4F_Movement_FaceUp
	end


MagmaHideout_4F_EventScript_OnFrameAfterPallet::
	lock
	delay 30
	msgbox MagmaHideout_4F_EventScript_OnFrameAfterPallet_Text_0
	waitmessage
	applymovement 1, MagmaHideout_4F_Movement_StepUp
	waitmovement 0
	msgbox MagmaHideout_4F_EventScript_OnFrameAfterPallet_Text_1
	waitmessage
	closemessage
	delay 30
	playse SE_M_EXPLOSION
	setvar VAR_0x8004, 1
	setvar VAR_0x8005, 1
	setvar VAR_0x8006, 12
	setvar VAR_0x8007, 5
	special ShakeCamera
	waitstate
	waitse
	playse SE_PIN
	applymovement 5, MagmaHideout_4F_Movement_DamonExclamationDown
	applymovement 10, MagmaHideout_4F_Movement_DamonExclamationDown
	applymovement 9, MagmaHideout_4F_Movement_DamonExclamationDown
	applymovement 6, MagmaHideout_4F_Movement_DamonExclamationDown
	applymovement 1, MagmaHideout_4F_Movement_DamonExclamationDown
	applymovement OBJ_EVENT_ID_PLAYER, MagmaHideout_4F_Movement_DamonExclamationDown
	waitmovement 0
	waitse
	delay 30
	applymovement 11, MagmaHideout_4F_Movement_PlayerToAriana
	applymovement 12, MagmaHideout_4F_Movement_PlayerToAriana
	waitmovement 0
	msgbox MagmaHideout_4F_EventScript_OnFrameAfterPallet_Text_2
	waitmessage
	closemessage
	special SpawnCameraObject
	applymovement 1, MagmaHideout_4F_Movement_ShaneOutOfWay
	applymovement OBJ_EVENT_ID_PLAYER, MagmaHideout_4F_Movement_PlayerOutOfWay
	waitmovement 0
	special RemoveCameraObject
	applymovement 11, MagmaHideout_4F_Movement_SilverToAriana
	applymovement 12, MagmaHideout_4F_Movement_FeraligatrToAriana
	waitmovement 0
	applymovement 1, MagmaHideout_4F_Movement_FaceUp
	applymovement OBJ_EVENT_ID_PLAYER, MagmaHideout_4F_Movement_FaceUp
	waitmovement 0
	msgbox MagmaHideout_4F_EventScript_OnFrameAfterPallet_Text_3
	waitmessage
	playse SE_PIN
	applymovement 1, MagmaHideout_4F_Movement_Question
	applymovement OBJ_EVENT_ID_PLAYER, MagmaHideout_4F_Movement_Question
	waitmovement 0
	waitse
	delay 30
	msgbox MagmaHideout_4F_EventScript_OnFrameAfterPallet_Text_4
	waitmessage
	applymovement 11, MagmaHideout_4F_Movement_StepUp
	waitmovement 0
	msgbox MagmaHideout_4F_EventScript_OnFrameAfterPallet_Text_5
	waitmessage
	applymovement 6, MagmaHideout_4F_Movement_StepDown
	waitmovement 0
	fadeoutbgm 1
	msgbox MagmaHideout_4F_EventScript_OnFrameAfterPallet_Text_6
	waitmessage
	applymovement 6, MagmaHideout_4F_Movement_StepRight
	waitmovement 0
	msgbox MagmaHideout_4F_EventScript_OnFrameAfterPallet_Text_7
	waitmessage
	applymovement 11, MagmaHideout_4F_Movement_StepUp
	waitmovement 0
	msgbox MagmaHideout_4F_EventScript_OnFrameAfterPallet_Text_8
	waitmessage
	closemessage
	applymovement 12, MagmaHideout_4F_Movement_FeraligatrToFront
	waitmovement 0
	waitse
	playmoncry SPECIES_FERALIGATR, CRY_MODE_NORMAL
	waitmoncry
	applymovement 5, MagmaHideout_4F_Movement_DamonAway
	applymovement 6, MagmaHideout_4F_Movement_ArianaAway
	waitmovement 0
	playse SE_M_MEGA_KICK
	applymovement 12, MagmaHideout_4F_Movement_FeraligatrRunForward
	waitmovement 0
	waitse
	playse SE_EFFECTIVE
	applymovement 12, MagmaHideout_4F_Movement_FeraligatrJumpBack
	waitmovement 0
	waitse
	delay 30
	playse SE_ICE_CRACK
	setmetatile 9, 4, 0x258, TRUE
	setmetatile 9, 3, 0x250, TRUE
	special DrawWholeMapView
	waitse
	delay 30
	playse SE_ICE_CRACK
	setmetatile 8, 5, 0x259, TRUE
	setmetatile 9, 5, 0x25A, TRUE
	setmetatile 10, 5, 0x25B, TRUE
	setmetatile 8, 4, 0x251, TRUE
	setmetatile 9, 4, 0x252, TRUE
	setmetatile 10, 4, 0x253, TRUE
	setmetatile 8, 3, 0x249, TRUE
	setmetatile 9, 3, 0x24A, TRUE
	setmetatile 10, 3, 0x24B, TRUE
	special DrawWholeMapView
	waitse
	delay 30
	addobject 7
	playse SE_ICE_BREAK
	setmetatile 8, 5, 0x230, TRUE
	setmetatile 9, 5, 0x231, TRUE
	setmetatile 10, 5, 0x232, TRUE
	setmetatile 8, 4, 0x228, TRUE
	setmetatile 9, 4, 0x229, TRUE
	setmetatile 10, 4, 0x22A, TRUE
	setmetatile 8, 3, 0x220, TRUE
	setmetatile 9, 3, 0x221, TRUE
	setmetatile 10, 3, 0x222, TRUE
	special DrawWholeMapView
	waitse
	delay 60
	setflag FLAG_CELEBI_TANK_BROKEN
	applymovement 7, MagmaHideout_4F_Movement_CelebiDownSlow
	waitmovement 0
	waitse
	playmoncry SPECIES_CELEBI, CRY_MODE_NORMAL
	waitmoncry
	playse SE_LEDGE
	applymovement 7, MagmaHideout_4F_Movement_CelebiJump
	waitmovement 0
	playse SE_LEDGE
	applymovement 7, MagmaHideout_4F_Movement_CelebiJump
	waitmovement 0
	delay 30
	applymovement 7, PetalburgWoods_Movement_CelebiExit
	waitmovement 0
	removeobject 7
	applymovement 12, MagmaHideout_4F_Movement_FeraligatrBackToSilver
	waitmovement 0
	msgbox MagmaHideout_4F_EventScript_OnFrameAfterPallet_Text_9
	waitmessage
	closemessage
	applymovement 6, MagmaHideout_4F_Movement_ArianaBackToCenter
	waitmovement 0
	msgbox MagmaHideout_4F_EventScript_OnFrameAfterPallet_Text_10
	waitmessage
	applymovement 11, MagmaHideout_4F_Movement_StepUp
	waitmovement 0
	msgbox MagmaHideout_4F_EventScript_OnFrameAfterPallet_Text_11
	waitmessage
	applymovement 6, MagmaHideout_4F_Movement_StepDown
	waitmovement 0
	msgbox MagmaHideout_4F_EventScript_OnFrameAfterPallet_Text_12
	waitmessage
	applymovement 6, MagmaHideout_4F_Movement_StepDown
	waitmovement 0
	msgbox MagmaHideout_4F_EventScript_OnFrameAfterPallet_Text_13
	waitmessage
	playbgm MUS_RG_ROCKET_HIDEOUT, TRUE
	applymovement 6, MagmaHideout_4F_Movement_StepRight
	waitmovement 0
	msgbox MagmaHideout_4F_EventScript_OnFrameAfterPallet_Text_14
	waitmessage
	applymovement 9, MagmaHideout_4F_Movement_StepUp
	waitmovement 0
	msgbox MagmaHideout_4F_EventScript_OnFrameAfterPallet_Text_15
	waitmessage
	closemessage
	playse SE_PIN
	applymovement 11, MagmaHideout_4F_Movement_Exclamation
	waitmovement 0
	waitse
	delay 30
	playse SE_PC_ON
	waitse
	delay 30
	playse SE_SELECT
	waitse
	playse SE_SELECT
	waitse
	playse SE_PC_LOGIN
	waitse
	delay 30
	setflag FLAG_HIDE_SILVER_ECRUTEAK
	warpsilent MAP_BATTLE_FRONTIER_RANKING_HALL, 8, 13
	waitstate
	release
	end


MagmaHideout_4F_EventScript_OnFrameAfterEcruteak::
	lock
	delay 30
	msgbox MagmaHideout_4F_EventScript_OnFrameAfterEcruteak_Text_0
	waitmessage
	applymovement 11, MagmaHideout_4F_Movement_StepUp
	waitmovement 0
	msgbox MagmaHideout_4F_EventScript_OnFrameAfterEcruteak_Text_1
	waitmessage
	closemessage
	addobject 13
	addobject 14
	applymovement 13, MagmaHideout_4F_Movement_PlayerToAriana
	applymovement 14, MagmaHideout_4F_Movement_PlayerToAriana
	waitmovement 0
	applymovement 11, MagmaHideout_4F_Movement_StepDown
	applymovement 12, MagmaHideout_4F_Movement_StepDown
	applymovement 1, MagmaHideout_4F_Movement_FaceRight
	applymovement OBJ_EVENT_ID_PLAYER, MagmaHideout_4F_Movement_FaceLeft
	waitmovement 0
	msgbox MagmaHideout_4F_EventScript_OnFrameAfterEcruteak_Text_2
	waitmessage
	closemessage
	applymovement 12, MagmaHideout_4F_Movement_StepRight
	applymovement 11, MagmaHideout_4F_Movement_SilverOutOfWay
	waitmovement 0
	delay 30
	applymovement 13, MagmaHideout_4F_Movement_Cop1ToAriana
	applymovement 14, MagmaHideout_4F_Movement_Cop2ToAriana
	waitmovement 0
	applymovement 6, MagmaHideout_4F_Movement_StepDown
	waitmovement 0
	msgbox MagmaHideout_4F_EventScript_OnFrameAfterEcruteak_Text_3
	waitmessage
	applymovement 11, MagmaHideout_4F_Movement_StepUp
	waitmovement 0
	msgbox MagmaHideout_4F_EventScript_OnFrameAfterEcruteak_Text_4
	waitmessage
	closemessage
	applymovement 6, MagmaHideout_4F_Movement_ArianaExit
	applymovement 5, MagmaHideout_4F_Movement_DamonExit
	applymovement 10, MagmaHideout_4F_Movement_Scientist1Exit
	applymovement 9, MagmaHideout_4F_Movement_Scientist2Exit
	waitmovement 0
	applymovement 13, MagmaHideout_4F_Movement_Cop1Exit
	applymovement 14, MagmaHideout_4F_Movement_Cop2Exit
	waitmovement 0
	removeobject 6
	removeobject 5
	removeobject 10
	removeobject 9
	removeobject 13
	removeobject 14
	applymovement 11, MagmaHideout_4F_Movement_SilverBackToCenter
	waitmovement 0
	applymovement 12, MagmaHideout_4F_Movement_StepDown
	applymovement 1, MagmaHideout_4F_Movement_ShaneToCenter
	applymovement OBJ_EVENT_ID_PLAYER, MagmaHideout_4F_Movement_PlayerToCenter
	waitmovement 0
	msgbox MagmaHideout_4F_EventScript_OnFrameAfterEcruteak_Text_5
	waitmessage
	applymovement 1, MagmaHideout_4F_Movement_ShaneStepAway
	waitmovement 0
	delay 20
	applymovement OBJ_EVENT_ID_PLAYER, MagmaHideout_4F_Movement_StepDown
	waitmovement 0
	msgbox MagmaHideout_4F_EventScript_OnFrameAfterEcruteak_Text_6
	waitmessage
	applymovement 11, MagmaHideout_4F_Movement_StepDown
	waitmovement 0
	msgbox MagmaHideout_4F_EventScript_OnFrameAfterEcruteak_Text_7
	waitmessage
	closemessage
	applymovement 1, MagmaHideout_4F_Movement_ShaneExit
	waitmovement 0
	removeobject 1
	applymovement OBJ_EVENT_ID_PLAYER, MagmaHideout_4F_Movement_StepUp
	waitmovement 0
	msgbox MagmaHideout_4F_EventScript_OnFrameAfterEcruteak_Text_8
	waitmessage
	applymovement 11, MagmaHideout_4F_Movement_StepDown
	waitmovement 0
	msgbox MagmaHideout_4F_EventScript_OnFrameAfterEcruteak_Text_9
	waitmessage
	giveitem ITEM_HM08_DIVE
	msgbox MagmaHideout_4F_EventScript_OnFrameAfterEcruteak_Text_10
	waitmessage
	closemessage
	applymovement 12, MagmaHideout_4F_Movement_FeraligatrExit
	applymovement 11, MagmaHideout_4F_Movement_SilverExit
	waitmovement 0
	removeobject 11
	removeobject 12
	setflag FLAG_HIDE_SILVER_RAGE_HIDEOUT
	setflag FLAG_HIDE_MAGMA_HIDEOUT_GRUNTS
	clearflag FLAG_HIDE_SILVER_ECRUTEAK
	addvar VAR_ECRUTEAK_STATE, 1
	release
	end


MagmaHideout_4F_Movement_FeraligatrExit:
	walk_right
	walk_right
	walk_down
	walk_down
	walk_down
	walk_left
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	step_end

MagmaHideout_4F_Movement_SilverExit:
	walk_right
	walk_down
	walk_down
	walk_down
	walk_left
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	step_end

MagmaHideout_4F_Movement_ShaneExit:
	walk_down
	walk_right
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	step_end

MagmaHideout_4F_Movement_ShaneStepAway:
	face_up
	lock_facing_direction
	walk_down
	unlock_facing_direction
	step_end

MagmaHideout_4F_Movement_ArianaExit:
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	step_end

MagmaHideout_4F_Movement_ShaneToCenter:
	walk_right
	walk_in_place_up
	step_end

MagmaHideout_4F_Movement_PlayerToCenter:
	walk_left
	walk_in_place_up
	step_end

MagmaHideout_4F_Movement_DamonExit:
	walk_right
	walk_right
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	step_end

MagmaHideout_4F_Movement_Scientist1Exit:
	walk_right
	walk_right
	walk_right
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	step_end

MagmaHideout_4F_Movement_Scientist2Exit:
	walk_left
	walk_left
	delay_16
	walk_left
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	step_end

MagmaHideout_4F_Movement_Cop1Exit:
	walk_right
	walk_right
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	step_end

MagmaHideout_4F_Movement_Cop2Exit:
	walk_left
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	step_end

MagmaHideout_4F_Movement_FaceRight:
	face_right
	step_end

MagmaHideout_4F_Movement_SilverOutOfWay:
	walk_right
	walk_in_place_left
	step_end

MagmaHideout_4F_Movement_Cop1ToAriana:
	walk_up
	walk_up
	walk_left
	walk_left
	walk_in_place_right
	step_end

MagmaHideout_4F_Movement_Cop2ToAriana:
	walk_up
	walk_up
	walk_up
	walk_right
	walk_in_place_left
	step_end

MagmaHideout_4F_Movement_SilverBackToCenter:
	walk_left
	walk_in_place_down
	step_end

MagmaHideout_4F_Movement_ShaneOutOfWay:
	walk_left
	walk_down
	face_right
	step_end

MagmaHideout_4F_Movement_PlayerOutOfWay:
	walk_right
	walk_down
	face_left
	step_end

MagmaHideout_4F_Movement_CameraToPlayer:
	walk_faster_right
	walk_faster_down
	step_end

MagmaHideout_4F_Movement_SilverToAriana:
	walk_up
	step_end

MagmaHideout_4F_Movement_FeraligatrToAriana:
	walk_up
	walk_left
	walk_up
	step_end

MagmaHideout_4F_Movement_Question:
	emote_question_mark
	step_end

MagmaHideout_4F_Movement_FeraligatrToFront:
	walk_fast_up
	walk_fast_right
	walk_in_place_up
	step_end

MagmaHideout_4F_Movement_DamonAway:
	walk_fast_left
	walk_in_place_right
	step_end

MagmaHideout_4F_Movement_ArianaAway:
	walk_fast_right
	walk_fast_right
	walk_in_place_left
	step_end

MagmaHideout_4F_Movement_FeraligatrRunForward:
	walk_in_place_fast_up
	walk_in_place_fast_up
	walk_in_place_fast_up
	walk_in_place_fast_up
	walk_in_place_fast_up
	walk_in_place_fast_up
	walk_in_place_fast_up
	walk_in_place_fast_up
	walk_fast_up
	walk_fast_up
	step_end

MagmaHideout_4F_Movement_FeraligatrJumpBack:
	lock_facing_direction
	jump_2_down
	unlock_facing_direction
	face_up
	step_end

MagmaHideout_4F_Movement_CelebiDownSlow:
	walk_slow_down
	step_end

MagmaHideout_4F_Movement_CelebiJump:
	jump_in_place_down
	step_end

PetalburgWoods_Movement_CelebiExit:
	lock_facing_direction
	walk_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	unlock_facing_direction
	step_end

MagmaHideout_4F_Movement_FeraligatrBackToSilver:
	walk_left
	walk_down
	walk_in_place_up
	step_end

MagmaHideout_4F_Movement_ArianaBackToCenter:
	walk_left
	walk_left
	walk_in_place_up
	step_end

MagmaHideout_4F_EventScript_MainTrigger::
	lock
	applymovement OBJ_EVENT_ID_PLAYER, MagmaHideout_4F_Movement_PlayerToAriana
	waitmovement 0
	playse SE_PIN
	applymovement 5, MagmaHideout_4F_Movement_DamonExclamationDown
	applymovement 10, MagmaHideout_4F_Movement_DamonExclamationDown
	applymovement 9, MagmaHideout_4F_Movement_DamonExclamationDown
	waitmovement 0
	waitse
	delay 30
	applymovement 5, MagmaHideout_4F_Movement_StepRight
	waitmovement 0
	msgbox MagmaHideout_4F_EventScript_MainTrigger_Text_0
	waitmessage
	applymovement 5, MagmaHideout_4F_Movement_FaceDown
	applymovement 6, MagmaHideout_4F_Movement_FaceDown
	waitmovement 0
	msgbox MagmaHideout_4F_EventScript_MainTrigger_Text_1
	waitmessage
	closemessage
	playse SE_PIN
	applymovement OBJ_EVENT_ID_PLAYER, MagmaHideout_4F_Movement_DamonExclamationDown
	waitmovement 0
	waitse
	delay 30
	addobject 1
	applymovement 1, MagmaHideout_4F_Movement_ShaneEnter
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, MagmaHideout_4F_Movement_FaceLeft
	waitmovement 0
	msgbox MagmaHideout_4F_EventScript_MainTrigger_Text_2
	waitmessage
	closemessage
	applymovement 1, MagmaHideout_4F_Movement_FaceUp
	applymovement OBJ_EVENT_ID_PLAYER, MagmaHideout_4F_Movement_FaceUp
	waitmovement 0
	delay 30
	msgbox MagmaHideout_4F_EventScript_MainTrigger_Text_3
	waitmessage
	applymovement 6, MagmaHideout_4F_Movement_StepRight
	waitmovement 0
	msgbox MagmaHideout_4F_EventScript_MainTrigger_Text_4
	waitmessage
	applymovement 6, MagmaHideout_4F_Movement_StepDown
	waitmovement 0
	msgbox MagmaHideout_4F_EventScript_MainTrigger_Text_5
	waitmessage
	applymovement 6, MagmaHideout_4F_Movement_StepDown
	waitmovement 0
	msgbox MagmaHideout_4F_EventScript_MainTrigger_Text_6
	waitmessage
	applymovement 6, MagmaHideout_4F_Movement_StepUp
	waitmovement 0
	msgbox MagmaHideout_4F_EventScript_MainTrigger_Text_7
	waitmessage
	applymovement 1, MagmaHideout_4F_Movement_StepUp
	waitmovement 0
	msgbox MagmaHideout_4F_EventScript_MainTrigger_Text_8
	waitmessage
	applymovement 6, MagmaHideout_4F_Movement_StepDown
	waitmovement 0
	msgbox MagmaHideout_4F_EventScript_MainTrigger_Text_9
	waitmessage
	playse SE_PIN
	applymovement 6, MagmaHideout_4F_Movement_Exclamation
	waitmovement 0
	waitse
	delay 30
	msgbox MagmaHideout_4F_EventScript_MainTrigger_Text_10
	waitmessage
	applymovement 6, MagmaHideout_4F_Movement_StepDown
	waitmovement 0
	msgbox MagmaHideout_4F_EventScript_MainTrigger_Text_11
	waitmessage
	applymovement 6, MagmaHideout_4F_Movement_StepRight
	waitmovement 0
	msgbox MagmaHideout_4F_EventScript_MainTrigger_Text_12
	waitmessage
	applymovement 9, MagmaHideout_4F_Movement_StepUp
	waitmovement 0
	msgbox MagmaHideout_4F_EventScript_OnFrameAfterPallet_Text_15
	waitmessage
	closemessage
	fadeoutbgm 1
	playse SE_PC_ON
	waitse
	delay 30
	playse SE_SELECT
	waitse
	playse SE_SELECT
	waitse
	playse SE_PC_LOGIN
	waitse
	delay 30
	fadescreenspeed FADE_TO_WHITE, 8
	playbgm MUS_RAYQUAZA_APPEARS, FALSE
	setwarp MAP_AQUA_HIDEOUT_UNUSED_RUBY_MAP1, 5, 8
	special TimeTravelBackClock
	waitstate
	fadedefaultbgm
	release
	end


MagmaHideout_4F_Movement_PlayerToAriana:
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

MagmaHideout_4F_Movement_DamonExclamationDown:
	emote_exclamation_mark
	walk_in_place_down
	step_end

MagmaHideout_4F_Movement_Exclamation:
	emote_exclamation_mark
	step_end

MagmaHideout_4F_Movement_StepRight:
	walk_in_place_right
	step_end

MagmaHideout_4F_Movement_FaceDown:
	face_down
	step_end

MagmaHideout_4F_Movement_ShaneEnter:
	walk_up
	walk_up
	walk_up
	walk_up
	walk_left
	walk_up
	walk_up
	face_right
	step_end

MagmaHideout_4F_Movement_FaceLeft:
	face_left
	step_end

MagmaHideout_4F_Movement_FaceUp:
	face_up
	step_end

MagmaHideout_4F_Movement_StepDown:
	walk_in_place_down
	step_end

MagmaHideout_4F_Movement_StepUp:
	walk_in_place_up
	step_end

MagmaHideout_4F_EventScript_Grunt11::
	trainerbattle_single TRAINER_GRUNT_MAGMA_HIDEOUT_11, MagmaHideout_4F_Text_Grunt11Intro, MagmaHideout_4F_Text_Grunt11Defeat
	msgbox MagmaHideout_4F_Text_Grunt11PostBattle, MSGBOX_AUTOCLOSE
	end

MagmaHideout_4F_EventScript_Grunt12::
	trainerbattle_single TRAINER_GRUNT_MAGMA_HIDEOUT_12, MagmaHideout_4F_Text_Grunt12Intro, MagmaHideout_4F_Text_Grunt12Defeat
	msgbox MagmaHideout_4F_Text_Grunt12PostBattle, MSGBOX_AUTOCLOSE
	end

MagmaHideout_4F_EventScript_Grunt13::
	trainerbattle_single TRAINER_GRUNT_MAGMA_HIDEOUT_13, MagmaHideout_4F_Text_Grunt13Intro, MagmaHideout_4F_Text_Grunt13Defeat
	msgbox MagmaHideout_4F_Text_Grunt13PostBattle, MSGBOX_AUTOCLOSE
	end

MagmaHideout_4F_EventScript_Tabitha::
	trainerbattle_single TRAINER_TABITHA_MAGMA_HIDEOUT, MagmaHideout_4F_Text_TabithaIntro, MagmaHideout_4F_Text_TabithaDefeat
	msgbox MagmaHideout_4F_Text_TabithaPostBattle, MSGBOX_AUTOCLOSE
	end

MagmaHideout_4F_Text_Grunt11Intro:
	.string "Just turn back now kid, none of this\n"
	.string "concerns you!$"

MagmaHideout_4F_Text_Grunt11Defeat:
	.string "You were just too much for me to handle.$"

MagmaHideout_4F_Text_Grunt11PostBattle:
	.string "What is so wrong about wanting\n"
	.string "unlimited power and money?$"

MagmaHideout_4F_Text_Grunt12Intro:
	.string "Muahaha, very soon Team Phoenix will\n"
	.string "become the most powerful organization\l"
	.string "in the world!$"

MagmaHideout_4F_Text_Grunt12Defeat:
	.string "Stop trying to ruin our plans!$"

MagmaHideout_4F_Text_Grunt12PostBattle:
	.string "I'm sorry boss, I couldn't hold off the\n"
	.string "intruder very long.$"

MagmaHideout_4F_Text_Grunt13Intro:
	.string "I will stop you no matter what!\p"
	.string "For Team Phoenix!$"

MagmaHideout_4F_Text_Grunt13Defeat:
	.string "I have failed...$"

MagmaHideout_4F_Text_Grunt13PostBattle:
	.string "You're dead wrong if you think this is\n"
	.string "the end of Team Phoenix!$"

MagmaHideout_4F_Text_TabithaIntro:
	.string "Hehehe!\n"
	.string "You made it this far, so I'll tell you!\p"
	.string "That's right!\n"
	.string "Up ahead, GROUDON is sleeping!\p"
	.string "MAXIE went to GROUDON just seconds\n"
	.string "ago!\p"
	.string "It's going to awaken real soon!\n"
	.string "Hehe! Hehehe!$"

MagmaHideout_4F_Text_TabithaDefeat:
	.string "Taken down again…\n"
	.string "Hehe…$"

MagmaHideout_4F_Text_TabithaPostBattle:
	.string "…And while you wasted time with me,\n"
	.string "MAXIE should have awakened GROUDON…$"

MagmaHideout_4F_EventScript_OnFrameAfterPallet_Text_0:
	.string "ARIANA: ...\p"
	.string "Years of research and careful\n"
	.string "planning...\p"
	.string "All for what?\p"
	.string "To be ruined by a couple of children...?$"

MagmaHideout_4F_EventScript_OnFrameAfterPallet_Text_1:
	.string "SHANE: That's right, you old hag!\p"
	.string "Just give it up already!$"

MagmaHideout_4F_EventScript_OnFrameAfterPallet_Text_2:
	.string "DAD: I rushed over as soon as I got the\n"
	.string "call, but it looks like the battle is\l"
	.string "already over.\p"
	.string "SHANE, {PLAYER}, you both did well.\p"
	.string "I'll take it from here.$"

MagmaHideout_4F_EventScript_OnFrameAfterPallet_Text_3:
	.string "DAD: It's been a long time, mother...$"

MagmaHideout_4F_EventScript_OnFrameAfterPallet_Text_4:
	.string "ARIANA: So, the Champion himself has\n"
	.string "decided to grace us with his presence!\p"
	.string "SILVER, dear, you should be on my side...\p"
	.string "I'm only trying to bring your father\n"
	.string "back to us.$"

MagmaHideout_4F_EventScript_OnFrameAfterPallet_Text_5:
	.string "DAD: When GIOVANNI left, he told me he\n"
	.string "was going to reform Team Rocket\l"
	.string "himself, and use the full potential of\l"
	.string "his subordinates.\p"
	.string "He would have taken us with him if he\n"
	.string "thought we had any potential.\p"
	.string "Power is the only thing that man ever\n"
	.string "wanted, not a family.\p"
	.string "Just accept it, and move on.$"

MagmaHideout_4F_EventScript_OnFrameAfterPallet_Text_6:
	.string "ARIANA: I refuse...\p"
	.string "I will never give up on GIOVANNI!$"

MagmaHideout_4F_EventScript_OnFrameAfterPallet_Text_7:
	.string "Start the time machine back up!$"

MagmaHideout_4F_EventScript_OnFrameAfterPallet_Text_8:
	.string "DAD: Feraligatr!$"

MagmaHideout_4F_EventScript_OnFrameAfterPallet_Text_9:
	.string "ARIANA: ...$"

MagmaHideout_4F_EventScript_OnFrameAfterPallet_Text_10:
	.string "ARIANA: This can't be...\p"
	.string "...\p"
	.string "Why does fate insist on hindering me at\n"
	.string "every single step...$"

MagmaHideout_4F_EventScript_OnFrameAfterPallet_Text_11:
	.string "DAD: It's over, mother.$"

MagmaHideout_4F_EventScript_OnFrameAfterPallet_Text_12:
	.string "DAD: Leave the past where it belongs,\n"
	.string "and focus on the family standing\l"
	.string "before you.\p"
	.string "GIOVANNI may not come back, but you\n"
	.string "still have a chance to connect with\l"
	.string "your own grandchildren.$"

MagmaHideout_4F_EventScript_OnFrameAfterPallet_Text_13:
	.string "ARIANA: My... grandchildren...\p"
	.string "...\p"
	.string "No...\p"
	.string "It's too late for that now!$"

MagmaHideout_4F_EventScript_OnFrameAfterPallet_Text_14:
	.string "Initiate operation Scorched Earth!$"

MagmaHideout_4F_EventScript_OnFrameAfterPallet_Text_15:
	.string "SCIENTIST: Yes, Ma'am!$"

MagmaHideout_4F_EventScript_OnFrameAfterEcruteak_Text_0:
	.string "ARIANA: Hehehe!\p"
	.string "We rigged the Bell Tower with explosives\n"
	.string "years ago as a little insurance policy.\p"
	.string "Now, Ho-oh will go on a rampage,\n"
	.string "incinerating everything in its path!$"

MagmaHideout_4F_EventScript_OnFrameAfterEcruteak_Text_1:
	.string "DAD: So, your Celebi plan didn't work out\n"
	.string "the way you wanted, and now all of\l"
	.string "Johto must suffer?\p"
	.string "You disappoint me, mother.\p"
	.string "You're just like a child throwing a\n"
	.string "tantrum.$"

MagmaHideout_4F_EventScript_OnFrameAfterEcruteak_Text_2:
	.string "SILVER, sir, thanks for the help.\p"
	.string "We'll be taking them into custody now.\p"
	.string "DAD: You should be thanking my kids,\n"
	.string "they did most of the work.$"

MagmaHideout_4F_EventScript_OnFrameAfterEcruteak_Text_3:
	.string "ARIANA: This isn't the last you'll see of\n"
	.string "Team Phoenix, I guarantee it!$"

MagmaHideout_4F_EventScript_OnFrameAfterEcruteak_Text_4:
	.string "DAD: First we'll take care of this Ho-oh\n"
	.string "mess, and then we'll extinguish any\l"
	.string "flames that are left of your little\l"
	.string "gang.$"

MagmaHideout_4F_EventScript_OnFrameAfterEcruteak_Text_5:
	.string "DAD: Good work handling Team Phoenix,\n"
	.string "it's good to see you two again.\p"
	.string "Unfortunately, we don't have enough\n"
	.string "time to catch up.\p"
	.string "We'll have to take care of this Ho-oh\n"
	.string "situation as soon as possible.$"

MagmaHideout_4F_EventScript_OnFrameAfterEcruteak_Text_6:
	.string "SHANE: You show up late to the action,\n"
	.string "and after so many years of being away\l"
	.string "from home, and then expect us to be\l"
	.string "glad to see you?\p"
	.string "{PLAYER} can help you with this Ho-oh\n"
	.string "crap.\p"
	.string "I was only here for one thing, to take\n"
	.string "down those jerks.\p"
	.string "I'll see you losers later.$"

MagmaHideout_4F_EventScript_OnFrameAfterEcruteak_Text_7:
	.string "DAD: SHANE!$"

MagmaHideout_4F_EventScript_OnFrameAfterEcruteak_Text_8:
	.string "DAD: That boy...\p"
	.string "We'll talk about this later.\p"
	.string "{PLAYER}, I'm going to Ecruteak City\n"
	.string "to hold off Ho-oh for as long as I can.\p"
	.string "I need to you go to the Whirl Islands.\p"
	.string "There, you should find the legendary\n"
	.string "POKéMON, Lugia.\p"
	.string "If there's anything capable of calming\n"
	.string "Ho-oh's rampage, perhaps Lugia can...\p"
	.string "I need you to find Lugia in the Whirl\n"
	.string "Islands and awaken it.$"

MagmaHideout_4F_EventScript_OnFrameAfterEcruteak_Text_9:
	.string "Oh, and you'll need this!$"

MagmaHideout_4F_EventScript_OnFrameAfterEcruteak_Text_10:
	.string "DAD: That HM contains the move Dive.\p"
	.string "The whirlpools around the Whirl Islands\n"
	.string "are impassible, but that HM will allow\l"
	.string "you to dive underneath them.\p"
	.string "Good luck, {PLAYER}, I know you can do\n"
	.string "it.$"

MagmaHideout_4F_EventScript_MainTrigger_Text_0:
	.string "DAMON: Boss...\p"
	.string "...\p"
	.string "???: Your persistence certainly lives\n"
	.string "up to the rumors.$"

MagmaHideout_4F_EventScript_MainTrigger_Text_1:
	.string "Fortunately, we are always one step\n"
	.string "ahead of you...\p"
	.string "SHANE: Hey assholes!$"

MagmaHideout_4F_EventScript_MainTrigger_Text_2:
	.string "SHANE: I don't know how you managed to\n"
	.string "get here before me, {PLAYER}.\p"
	.string "It's going to be really tough to make\n"
	.string "good on my bet with you...$"

MagmaHideout_4F_EventScript_MainTrigger_Text_3:
	.string "???: So, you're both here.\p"
	.string "How wonderful...\p"
	.string "I suppose I should introduce myself.\p"
	.string "My name is ARIANA.\p"
	.string "I formed Team Phoenix after the fall of\n"
	.string "Team Rocket, nearly twenty years ago.$"

MagmaHideout_4F_EventScript_MainTrigger_Text_4:
	.string "Team Rocket was an unstoppable force\n"
	.string "back then.\p"
	.string "Our power and influence felt unlimited.$"

MagmaHideout_4F_EventScript_MainTrigger_Text_5:
	.string "It was all thanks to our leader, the\n"
	.string "great GIOVANNI!\p"
	.string "He had an absolute mastery over\n"
	.string "POKéMON, the likes of which the world\l"
	.string "had never seen.\p"
	.string "I knew everything would be perfect as\n"
	.string "long as I kept by his side...\p"
	.string "...\p"
	.string "But then, that brat from Pallet Town\n"
	.string "appeared...$"

MagmaHideout_4F_EventScript_MainTrigger_Text_6:
	.string "That brat ruined everything!\p"
	.string "He took down Team Rocket overnight, we\n"
	.string "were absolutely humiliated!\p"
	.string "...\p"
	.string "Then... our GIOVANNI left us...\p"
	.string "Consumed by a profound sense of\n"
	.string "uncertainty and doubt, GIOVANNI\l"
	.string "disbanded Team Rocket and vanished\l"
	.string "from the world, and my life...\p"
	.string "At the time, I tried patching the gang\n"
	.string "back together, but that too, ended in\l"
	.string "failure...\p"
	.string "Without GIOVANNI'S guidance, Team\n"
	.string "Rocket was just an empty husk of what\l"
	.string "it once was...$"

MagmaHideout_4F_EventScript_MainTrigger_Text_7:
	.string "That's where Celebi comes in...\p"
	.string "I'm going to use Celebi's time traveling\n"
	.string "abilities to ensure that RED brat never\l"
	.string "gets the chance!$"

MagmaHideout_4F_EventScript_MainTrigger_Text_8:
	.string "SHANE: Blah, blah, blah!$"

MagmaHideout_4F_EventScript_MainTrigger_Text_9:
	.string "Don't you ever shut up, you old hag?$"

MagmaHideout_4F_EventScript_MainTrigger_Text_10:
	.string "SHANE: Nobody cares about your sob\n"
	.string "story.\p"
	.string "It doesn't matter, because we're going\n"
	.string "to take you down right now!$"

MagmaHideout_4F_EventScript_MainTrigger_Text_11:
	.string "ARIANA: Hehe! You sure are lively!\p"
	.string "As much as I would love to teach you\n"
	.string "some manners, you arrived a little too\l"
	.string "late.\p"
	.string "Our time machine is now fully\n"
	.string "operational!$"

MagmaHideout_4F_EventScript_MainTrigger_Text_12:
	.string "Now, it is time!\p"
	.string "Activate the machine!$"
