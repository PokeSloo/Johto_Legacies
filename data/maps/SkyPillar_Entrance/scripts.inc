SkyPillar_Entrance_MapScripts::
	.byte 0


SkyPillar_Entrance_EventScript_Trigger::
	lock
	applymovement 1, SkyPillar_Entrance_Movement_SageLeft
	waitmovement 0
	msgbox SkyPillar_Entrance_EventScript_Trigger_Text_0
	waitmessage
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, Route106_PlayerStepDown
	waitmovement 0
	applymovement 1, SkyPillar_Entrance_Movement_SageDown
	waitmovement 0
	release
	end


SkyPillar_Entrance_Movement_SageLeft:
	walk_in_place_left
	step_end

SkyPillar_Entrance_Movement_SageDown:
	walk_in_place_down
	step_end

Route106_PlayerStepDown:
	walk_down
	step_end

SkyPillar_Entrance_EventScript_BlockSage::
	msgbox SkyPillar_Entrance_EventScript_Trigger_Text_0, MSGBOX_NPC
	end


SkyPillar_Entrance_EventScript_WanderingSage::
	msgbox SkyPillar_Entrance_EventScript_WanderingSage_Text_0, MSGBOX_NPC
	end


SkyPillar_Entrance_EventScript_Trigger_Text_0:
	.string "I'm sorry, but the Bell Tower is off\n"
	.string "limits to the unworthy.$"

SkyPillar_Entrance_EventScript_WanderingSage_Text_0:
	.string "This path leads to the Bell Tower, it's a\n"
	.string "sacred tower that the legendary\l"
	.string "POKéMON Ho-oh watches over.$"
