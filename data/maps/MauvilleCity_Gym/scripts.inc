MauvilleCity_Gym_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, MauvilleCity_Gym_MapScripts_MAP_SCRIPT_ON_TRANSITION
	map_script MAP_SCRIPT_ON_RESUME, MauvilleCity_Gym_MapScripts_MAP_SCRIPT_ON_RESUME
	map_script MAP_SCRIPT_ON_FRAME_TABLE, MauvilleCity_Gym_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, MauvilleCity_Gym_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
	.byte 0

MauvilleCity_Gym_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	call BattleFrontier_BattleDomeBattleRoom_EventScript_SetPlayerGfx
	return

MauvilleCity_Gym_MapScripts_MAP_SCRIPT_ON_RESUME:
	call_if_eq VAR_THE_CHALLENGE_EVENTS, 1, MauvilleCity_Gym_Add_Audience
	end

MauvilleCity_Gym_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
	map_script_2 VAR_THE_CHALLENGE_EVENTS, 1, MauvilleCity_Gym_On_Frame
	.2byte 0

MauvilleCity_Gym_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
	map_script_2 VAR_THE_CHALLENGE_EVENTS, 1, MauvilleCity_Gym_OnWarp
	.2byte 0


MauvilleCity_Gym_On_Frame::
	lock
	msgbox MauvilleCity_Gym_On_Frame_Text_0
	waitmessage
	closemessage
	waitse
	playse SE_M_ENCORE2
	applymovement 3, MauvilleCity_Gym_Movement_PlayerEnter
	call MauvilleCity_Gym_Audince_Look_Around
	waitmovement 0
	waitse
	applymovement 2, SlateportCity_SternsShipyard_2F_Movement_StepDown
	waitmovement 0
	goto_if_unset FLAG_ANSWERED_CHALLENGE_QUESTION_WRONG, MauvilleCity_Gym_On_Frame_2
	msgbox MauvilleCity_Gym_On_Frame_Text_3
	waitmessage
MauvilleCity_Gym_On_Frame_1:
	applymovement 2, SlateportCity_SternsShipyard_2F_Movement_StepDown
	waitmovement 0
	msgbox MauvilleCity_Gym_On_Frame_Text_4
	waitmessage
	closemessage
	clearflag FLAG_HIDE_WHITNEY_CHALLENGE_BATTLE
	addobject 1
	applymovement 1, SlateportCity_SternsShipyard_2F_Movement_WhitneyEnter
	playse SE_M_ENCORE2
	call MauvilleCity_Gym_Audince_Look_Around
	waitse
	playse SE_M_ENCORE2
	call MauvilleCity_Gym_Audince_Look_Around
	waitse
	playse SE_M_ENCORE2
	call MauvilleCity_Gym_Audince_Look_Around
	waitse
	waitmovement 0
	msgbox MauvilleCity_Gym_On_Frame_Text_5
	applymovement 1, MauvilleCity_Gym_Movement_StepLeft1
	applymovement 3, MauvilleCity_Gym_Movement_StepRight1
	waitmovement 0
	trainerbattle_no_intro TRAINER_WATTSON_1, BattleFrontier_BattleDomePreBattleRoom_Text_WhitneyDefeat
	msgbox MauvilleCity_Gym_On_Frame_Text_6
	waitmessage
	applymovement 1, SlateportCity_SternsShipyard_2F_Movement_StepDown
	waitmovement 0
	msgbox MauvilleCity_Gym_On_Frame_Text_7
	waitmessage
	applymovement 1, SlateportCity_SternsShipyard_2F_Movement_StepLeft
	waitmovement 0
	msgbox MauvilleCity_Gym_On_Frame_Text_8
	waitmessage
	call Common_EventScript_PlayGymBadgeFanfare
	waitse
	playse SE_M_ENCORE2
	call MauvilleCity_Gym_Audince_Look_Around
	waitse
	msgbox MauvilleCity_Gym_On_Frame_Text_9
	waitmessage
	giveitem ITEM_TM45_ATTRACT
	msgbox MauvilleCity_Gym_On_Frame_Text_10
	waitmessage
	closemessage
	applymovement 1, MauvilleCity_Gym_Movement_RightToCenter
	applymovement 3, MauvilleCity_Gym_Movement_LeftToCenter
	waitmovement 0
	special DoDomeConfetti
	playse SE_M_ENCORE2
	call MauvilleCity_Gym_Audince_Look_Around
	waitse
	playse SE_M_ENCORE2
	call MauvilleCity_Gym_Audince_Look_Around
	waitse
	delay 30
	setflag FLAG_DEFEATED_MAUVILLE_GYM
	setflag FLAG_BADGE03_GET
	addvar VAR_THE_CHALLENGE_EVENTS, 1
	setflag FLAG_HIDE_WHITNEY_CHALLENGE_BATTLE
	setflag FLAG_HIDE_CHALLENGE_SPECTATOR_LINE
	setflag FLAG_HIDE_STRENGTH_KIMONO
	clearflag FLAG_HIDE_GOLDENROD_GYM_RIGHT_GUARD
	warp MAP_SLATEPORT_CITY_STERNS_SHIPYARD_1F, 9, 7
	waitstate
	release
	end

MauvilleCity_Gym_On_Frame_2:
	msgbox MauvilleCity_Gym_On_Frame_Text_1
	waitmessage
	closemessage
	playse SE_M_ENCORE2
	call MauvilleCity_Gym_Audince_Look_Around
	waitse
	msgbox MauvilleCity_Gym_On_Frame_Text_2
	waitmessage
	goto MauvilleCity_Gym_On_Frame_1


MauvilleCity_Gym_Movement_PlayerEnter:
	walk_up
	walk_up
	walk_up
	walk_right
	walk_right
	step_end

SlateportCity_SternsShipyard_2F_Movement_WhitneyEnter:
	set_visible
	walk_up
	walk_up
	walk_up
	delay_16
	face_left
	delay_8
	face_down
	delay_8
	face_right
	delay_8
	face_up
	delay_8
	face_left
	delay_16
	disable_jump_landing_ground_effect
	jump_2_left
	face_right
	lock_facing_direction
	jump_2_left
	unlock_facing_direction
	delay_8
	face_down
	delay_8
	face_left
	delay_8
	face_up
	delay_16
	walk_slow_up
	delay_16
	face_left
	lock_facing_direction
	walk_slow_right
	walk_slow_right
	unlock_facing_direction
	delay_16
	jump_in_place_up
	delay_16
	delay_16
	delay_16
	delay_16
	walk_down
	walk_in_place_left
	enable_jump_landing_ground_effect
	step_end

MauvilleCity_Gym_Movement_StepLeft1:
	walk_left
	step_end

MauvilleCity_Gym_Movement_StepRight1:
	walk_right
	step_end

MauvilleCity_Gym_Movement_RightToCenter:
	walk_left
	walk_up
	step_end

MauvilleCity_Gym_Movement_LeftToCenter:
	walk_right
	walk_up
	step_end

MauvilleCity_Gym_OnWarp::
	call BattleFrontier_BattleDomeBattleRoom_EventScript_SetPlayerGfx
	applymovement OBJ_EVENT_ID_PLAYER, BattleFrontier_BattleDomeBattleRoom_Movement_SetInvisible
	applymovement 1, BattleFrontier_BattleDomeBattleRoom_Movement_SetInvisibleFacingUp
	goto MauvilleCity_Gym_Add_Audience
	end


MauvilleCity_Gym_Add_Audience::
	createvobject OBJ_EVENT_GFX_MANIAC, 0, 2, 2
	createvobject OBJ_EVENT_GFX_PICNICKER, 1, 3, 2
	createvobject OBJ_EVENT_GFX_CAMPER, 2, 4, 2
	createvobject OBJ_EVENT_GFX_WOMAN_1, 3, 7, 2
	createvobject OBJ_EVENT_GFX_LITTLE_BOY_3, 4, 9, 2
	createvobject OBJ_EVENT_GFX_NURSE, 5, 11, 2
	createvobject OBJ_EVENT_GFX_OLD_WOMAN, 6, 14, 2
	createvobject OBJ_EVENT_GFX_OLD_MAN, 7, 15, 2
	createvobject OBJ_EVENT_GFX_RUNNING_TRIATHLETE_F, 8, 2, 1
	createvobject OBJ_EVENT_GFX_EXPERT_M, 9, 4, 1
	createvobject OBJ_EVENT_GFX_EXPERT_F, 10, 5, 1
	createvobject OBJ_EVENT_GFX_LASS, 11, 8, 1
	createvobject OBJ_EVENT_GFX_GENTLEMAN, 12, 10, 1
	createvobject OBJ_EVENT_GFX_NINJA_BOY, 13, 12, 1
	createvobject OBJ_EVENT_GFX_COOK, 14, 15, 1
	createvobject OBJ_EVENT_GFX_GIRL_2, 15, 16, 1
	end


MauvilleCity_Gym_Audince_Look_Around::
	turnvobject 0, DIR_EAST
	turnvobject 2, DIR_EAST
	turnvobject 4, DIR_WEST
	turnvobject 6, DIR_WEST
	turnvobject 8, DIR_WEST
	turnvobject 10, DIR_WEST
	turnvobject 12, DIR_EAST
	turnvobject 14, DIR_EAST
	delay 20
	turnvobject 0, DIR_SOUTH
	turnvobject 2, DIR_SOUTH
	turnvobject 4, DIR_SOUTH
	turnvobject 6, DIR_SOUTH
	turnvobject 8, DIR_SOUTH
	turnvobject 10, DIR_SOUTH
	turnvobject 12, DIR_SOUTH
	turnvobject 14, DIR_SOUTH
	delay 20
	turnvobject 1, DIR_EAST
	turnvobject 3, DIR_EAST
	turnvobject 5, DIR_WEST
	turnvobject 7, DIR_WEST
	turnvobject 9, DIR_WEST
	turnvobject 11, DIR_WEST
	turnvobject 13, DIR_EAST
	turnvobject 15, DIR_EAST
	delay 20
	turnvobject 1, DIR_SOUTH
	turnvobject 3, DIR_SOUTH
	turnvobject 5, DIR_SOUTH
	turnvobject 7, DIR_SOUTH
	turnvobject 9, DIR_SOUTH
	turnvobject 11, DIR_SOUTH
	turnvobject 13, DIR_SOUTH
	turnvobject 15, DIR_SOUTH
	delay 20
	return


MauvilleCity_Gym_On_Frame_Text_0:
	.string "Alright everyone, let's welcome our next\n"
	.string "CHALLENGER.\p"
	.string "{PLAYER} from Cherrygrove City!$"

MauvilleCity_Gym_On_Frame_Text_1:
	.string "{PLAYER} managed to answer every\n"
	.string "single question correctly in the\l"
	.string "qualification round!$"

MauvilleCity_Gym_On_Frame_Text_2:
	.string "That's not an easy feat, talk about a\n"
	.string "knowledgeable TRAINER!$"

MauvilleCity_Gym_On_Frame_Text_3:
	.string "{PLAYER} couldn't answer every\n"
	.string "question correctly in the qualifying\l"
	.string "round, but made up for it by defeating\l"
	.string "TRAINERS!$"

MauvilleCity_Gym_On_Frame_Text_4:
	.string "Now...\p"
	.string "The moment you've all been waiting for...\p"
	.string "Everyone's favorite gym leader, the one\n"
	.string "and only WHITNEY!$"

MauvilleCity_Gym_On_Frame_Text_5:
	.string "WHITNEY: Welcome, {PLAYER}!\p"
	.string "I hope you didn't get beat up too badly\n"
	.string "in the qualifying round.\p"
	.string "Not everyone has what it takes to\n"
	.string "qualify, but don't let it go to your\l"
	.string "head.\p"
	.string "The real CHALLENGE begins now!$"

MauvilleCity_Gym_On_Frame_Text_6:
	.string "WHITNEY: Sniffle...\p"
	.string "Hic...$"

MauvilleCity_Gym_On_Frame_Text_7:
	.string "It's ok, WHITNEY, you're a big girl now...\p"
	.string "You're past this...$"

MauvilleCity_Gym_On_Frame_Text_8:
	.string "Ok, I'm good now.\p"
	.string "{PLAYER}, you are truly an incredible\n"
	.string "TRAINER, and the first to defeat me in\l"
	.string "years!\p"
	.string "I will gladly present you with this\n"
	.string "BADGE!\p"
	.string "{PLAYER} received the PLAIN BADGE\n"
	.string "from WHITNEY!$"

MauvilleCity_Gym_On_Frame_Text_9:
	.string "WHITNEY: The PLAIN BADGE will allow\n"
	.string "your POKéMON to use the HM move Rock\l"
	.string "Smash outside of battle.\p"
	.string "You should also take this...$"

MauvilleCity_Gym_On_Frame_Text_10:
	.string "TM45 contains the move Attract!\p"
	.string "It will make your POKéMON irresistible\n"
	.string "to the opposite sex.\p"
	.string "Your opponents will only be able to\n"
	.string "attack 50 percent of the time!\p"
	.string "Now, {PLAYER}, congratulations!\p"
	.string "You have beaten The Challenge!$"

BattleFrontier_BattleDomePreBattleRoom_Text_WhitneyDefeat::
	.string "Ugh...$"
