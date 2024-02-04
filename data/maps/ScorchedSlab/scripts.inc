ScorchedSlab_MapScripts::
	.byte 0


ScorchedSlab_EventScript_EntranceGuard::
	msgbox ScorchedSlab_EventScript_EntranceGuard_Text_0, MSGBOX_NPC
	end


ScorchedSlab_EventScript_LeftGuard::
	msgbox ScorchedSlab_EventScript_LeftGuard_Text_0, MSGBOX_NPC
	end


ScorchedSlab_EventScript_RightGuard::
	msgbox ScorchedSlab_EventScript_RightGuard_Text_0, MSGBOX_NPC
	end


ScorchedSlab_EventScript_Left_Trigger::
	lock
	playse SE_PIN
	applymovement 2, ScorchedSlab_Movement_GuardExclamationLeft
	waitmovement 0
	waitse
	delay 30
	msgbox ScorchedSlab_EventScript_Left_Trigger_Text_0
	waitmessage
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, ScorchedSlab_Movement_WalkRight
	waitmovement 0
	applymovement 2, ScorchedSlab_Movement_FaceRight
	waitmovement 0
	release
	end


ScorchedSlab_EventScript_Right_Trigger::
	lock
	playse SE_PIN
	applymovement 3, ScorchedSlab_Movement_GuardExclamationRight
	waitmovement 0
	waitse
	delay 30
	msgbox ScorchedSlab_EventScript_Right_Trigger_Text_0
	waitmessage
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, ScorchedSlab_Movement_WalkLeft
	waitmovement 0
	applymovement 3, ScorchedSlab_Movement_FaceLeft
	waitmovement 0
	release
	end


ScorchedSlab_Movement_GuardExclamationLeft:
	emote_exclamation_mark
	walk_in_place_left
	step_end

ScorchedSlab_Movement_FaceRight:
	face_right
	step_end

ScorchedSlab_Movement_WalkRight:
	walk_right
	walk_right
	step_end

ScorchedSlab_Movement_GuardExclamationRight:
	emote_exclamation_mark
	walk_in_place_right
	step_end

ScorchedSlab_Movement_FaceLeft:
	face_left
	step_end

ScorchedSlab_Movement_WalkLeft:
	walk_left
	walk_left
	step_end

ScorchedSlab_EventScript_EntranceGuard_Text_0:
	.string "Only TRAINERS who have proven\n"
	.string "themselves may pass through this\l"
	.string "station.\p"
	.string "Oh, I see you have the eight badges of\n"
	.string "Johto.\p"
	.string "Well then, go right on through.$"

ScorchedSlab_EventScript_LeftGuard_Text_0:
	.string "This way leads to Mt. Silver.\p"
	.string "Only TRAINERS who have overcome the\n"
	.string "POKéMON League may enter this area.$"

ScorchedSlab_EventScript_RightGuard_Text_0:
	.string "This way leads to the Kanto region.\p"
	.string "I'm sorry, but I can't allow you to pass.$"

ScorchedSlab_EventScript_Left_Trigger_Text_0:
	.string "I'm sorry, but I can't let you go that\n"
	.string "way.\p"
	.string "Mt. Silver is only open to TRAINERS who\n"
	.string "have overcome the POKéMON League.$"

ScorchedSlab_EventScript_Right_Trigger_Text_0:
	.string "I'm sorry, but I can't let you go that\n"
	.string "way.\p"
	.string "The road to Kanto is blocked off for\n"
	.string "the time being.$"
