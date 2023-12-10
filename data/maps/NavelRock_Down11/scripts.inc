NavelRock_Down11_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, NavelRock_Down11_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

NavelRock_Down11_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
	map_script_2 VAR_ECRUTEAK_STATE, 5, NavelRock_Down11_OnFrame
	.2byte 0


NavelRock_Down11_OnFrame::
	lock
	addobject 3
	applymovement OBJ_EVENT_ID_PLAYER, NavelRock_Down11_Movement_PlayerToShane
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, NavelRock_Down11_Movement_PlayerToGuard
	applymovement 3, NavelRock_Down11_Movement_ShaneToGuard
	waitmovement 0
	applymovement 1, NavelRock_Down11_Movement_FaceRight
	applymovement 2, NavelRock_Down11_Movement_FaceLeft
	waitmovement 0
	msgbox NavelRock_Down11_Text_Guards
	waitmessage
	msgbox NavelRock_Down11_OnFrame_Text_0
	waitmessage
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, NavelRock_Down11_Movement_Exit
	applymovement 3, NavelRock_Down11_Movement_Exit
	waitmovement 0
	removeobject 3
	warpdoor MAP_ROUTE110, 2
	waitstate
	release
	end


NavelRock_Down11_EventScript_TriggerLeft::
	lock
	goto_if_set FLAG_BADGE07_GET, NavelRock_Down11_EventScript_TriggerLeft_1
	applymovement OBJ_EVENT_ID_PLAYER, NavelRock_Down11_Movement_FaceLeft
	applymovement 1, NavelRock_Down11_Movement_FaceRight
	waitmovement 0
	msgbox NavelRock_Down11_Text_Guards
	waitmessage
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, NavelRock_Down11_Movement_DownOne
	waitmovement 0
	release
	end

NavelRock_Down11_EventScript_TriggerLeft_1:
	release
	end


NavelRock_Down11_EventScript_TriggerRight::
	lock
	goto_if_set FLAG_BADGE07_GET, NavelRock_Down11_EventScript_TriggerRight_1
	applymovement OBJ_EVENT_ID_PLAYER, NavelRock_Down11_Movement_FaceRight
	applymovement 2, NavelRock_Down11_Movement_FaceLeft
	waitmovement 0
	msgbox NavelRock_Down11_Text_Guards
	waitmessage
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, NavelRock_Down11_Movement_DownOne
	waitmovement 0
	release
	end

NavelRock_Down11_EventScript_TriggerRight_1:
	release
	end


NavelRock_Down11_Movement_PlayerToShane:
	walk_up
	step_end

NavelRock_Down11_Movement_PlayerToGuard:
	walk_up
	walk_up
	face_left
	step_end

NavelRock_Down11_Movement_ShaneToGuard:
	walk_up
	walk_up
	face_right
	step_end

NavelRock_Down11_Movement_FaceRight:
	face_right
	step_end

NavelRock_Down11_Movement_FaceLeft:
	face_left
	step_end

NavelRock_Down11_Movement_Exit:
	walk_up
	walk_up
	step_end

NavelRock_Down11_Movement_DownOne:
	walk_down
	step_end

NavelRock_Down11_EventScript_Guard::
	lock
	faceplayer
	goto_if_set FLAG_BADGE07_GET, NavelRock_Down11_EventScript_Guard_1
	msgbox NavelRock_Down11_EventScript_Guard_Text_1
	release
	end

NavelRock_Down11_EventScript_Guard_1:
	msgbox NavelRock_Down11_EventScript_Guard_Text_0
	release
	end


NavelRock_Down11_OnFrame_Text_0:
	.string "Oh!\p"
	.string "I see you do have a Resort Pass.\p"
	.string "Well then, enjoy your stay at the Rage\n"
	.string "Resort.$"

NavelRock_Down11_EventScript_Guard_Text_0:
	.string "Please enjoy your stay at the Rage\n"
	.string "Resort.$"

NavelRock_Down11_EventScript_Guard_Text_1:
	.string "I'm sorry, but we can't let anyone\n"
	.string "through here without a Resort Pass.$"

NavelRock_Down11_Text_Guards::
	.string "Hold it!\p"
	.string "We can't let anyone through without a\n"
	.string "Resort Pass.$"
