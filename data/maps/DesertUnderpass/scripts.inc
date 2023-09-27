DesertUnderpass_MapScripts::
	.byte 0


DesertUnderpass_EventScript_Trigger::
	lock
	goto_if_set FLAG_HIDE_PAST_SILVER, DesertUnderpass_EventScript_Trigger_2
	applymovement OBJ_EVENT_ID_PLAYER, DesertUnderpass_Movement_PlayerWalkOver
	waitmovement 0
	playbgm MUS_HG_ENCOUNTER_RIVAL, FALSE
	applymovement 1, DesertUnderpass_Movement_SilverToPlayer
	waitmovement 0
	playse SE_WALL_HIT
	applymovement 1, DesertUnderpass_Movement_SilverBounceBack
	waitmovement 0
	delay 30
	playse SE_PIN
	applymovement 1, DesertUnderpass_Movement_SilverExclamation
	waitmovement 0
	delay 60
	applymovement 1, DesertUnderpass_Movement_SilverUpTwo
	waitmovement 0
	msgbox DesertUnderpass_EventScript_Trigger_Text_0
	waitmessage
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, DesertUnderpass_Movement_PlayerReadyToJump
	applymovement 1, DesertUnderpass_Movement_SilverReadyToPush
	waitmovement 0
	playse SE_LEDGE
	applymovement 1, DesertUnderpass_Movement_SilverHitPlayer
	applymovement OBJ_EVENT_ID_PLAYER, DesertUnderpass_Movement_PlayerJumpRight
	waitmovement 0
	msgbox DesertUnderpass_EventScript_Trigger_Text_1
	waitmessage
	closemessage
	fadedefaultbgm
	applymovement 1, DesertUnderpass_Movement_SilverExit
	waitmovement 0
	removeobject 1
	setflag FLAG_HIDE_PAST_SILVER
	release
	end

DesertUnderpass_EventScript_Trigger_2:
	release
	end


DesertUnderpass_Movement_PlayerWalkOver:
	walk_right
	walk_right
	walk_right
	walk_right
	walk_down
	step_end

DesertUnderpass_Movement_SilverToPlayer:
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_up
	walk_fast_up
	step_end

DesertUnderpass_Movement_SilverBounceBack:
	lock_facing_direction
	jump_2_down
	unlock_facing_direction
	step_end

DesertUnderpass_Movement_SilverExclamation:
	emote_exclamation_mark
	step_end

DesertUnderpass_Movement_SilverUpTwo:
	walk_fast_up
	walk_fast_up
	step_end

DesertUnderpass_Movement_PlayerReadyToJump:
	walk_up
	walk_right
	step_end

DesertUnderpass_Movement_SilverReadyToPush:
	walk_up
	walk_up
	face_right
	step_end

DesertUnderpass_Movement_SilverHitPlayer:
	walk_in_place_fast_right
	step_end

DesertUnderpass_Movement_PlayerJumpRight:
	jump_2_right
	delay_16
	delay_16
	face_left
	step_end

DesertUnderpass_Movement_SilverExit:
	walk_left
	walk_left
	walk_left
	walk_left
	walk_up
	walk_left
	walk_left
	step_end

DesertUnderpass_EventScript_Trigger_Text_0:
	.string "???: Get out of my way!$"

DesertUnderpass_EventScript_Trigger_Text_1:
	.string "???: Weakling...$"
