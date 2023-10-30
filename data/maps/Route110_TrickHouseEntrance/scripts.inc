Route110_TrickHouseEntrance_MapScripts::
	map_script MAP_SCRIPT_ON_LOAD, Route110_TrickHouseEntrance_MapScripts_MAP_SCRIPT_ON_LOAD
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route110_TrickHouseEntrance_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Route110_TrickHouseEntrance_MapScripts_MAP_SCRIPT_ON_LOAD:
	goto_if_set FLAG_HIDE_SHADY_KIMONO_GUY, Route110_TrickHouseEntrance_MapScripts_MAP_SCRIPT_ON_LOAD_2
	end

Route110_TrickHouseEntrance_MapScripts_MAP_SCRIPT_ON_LOAD_2:
	setmetatile 15, 12, 0x2AE, FALSE
	setmetatile 16, 12, 0x2AF, TRUE
	return

Route110_TrickHouseEntrance_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
	map_script_2 VAR_ECRUTEAK_STATE, 1, Route110_TrickHouseEntrance_OnFrame
	.2byte 0


Route110_TrickHouseEntrance_OnFrame::
	lock
	playse SE_PIN
	applymovement 7, Route110_TrickHouseEntrance_ExclamationLookRight
	waitmovement 0
	waitse
	delay 30
	applymovement 7, Route110_TrickHouseEntrance_KimonoToPlayer
	waitmovement 0
	msgbox Route110_TrickHouseEntrance_OnFrame_Text_0
	waitmessage
	giveitem ITEM_HM04_STRENGTH
	msgbox Route110_TrickHouseEntrance_OnFrame_Text_1
	waitmessage
	closemessage
	applymovement 7, Route110_TrickHouseEntrance_KimonoExit
	waitmovement 0
	removeobject 7
	setflag FLAG_RECEIVED_STRENGTH
	setflag FLAG_HIDE_STRENGTH_KIMONO
	addvar VAR_ECRUTEAK_STATE, 1
	release
	end


Route110_TrickHouseEntrance_ExclamationLookRight:
	emote_exclamation_mark
	walk_in_place_right
	step_end

Route110_TrickHouseEntrance_KimonoToPlayer:
	walk_right
	walk_right
	walk_right
	step_end

Route110_TrickHouseEntrance_KimonoExit:
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

Route110_TrickHouseEntrance_EventScript_ShadyGuy::
	lock
	faceplayer
	msgbox Route110_TrickHouseEntrance_EventScript_ShadyGuy_Text_0
	waitmessage
	applymovement 1, Route110_TrickHouseEntrance_StepUp
	waitmovement 0
	release
	end


Route110_TrickHouseEntrance_StepUp:
	walk_in_place_up
	step_end

Route110_TrickHouseEntrance_EventScript_BonsaiSwitch::
	lock
	goto_if_set FLAG_HIDE_SHADY_KIMONO_GUY, Route110_TrickHouseEntrance_EventScript_BonsaiSwitch_1
	msgbox Route110_TrickHouseEntrance_EventScript_BonsaiSwitch_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq Route110_TrickHouseEntrance_EventScript_BonsaiSwitch_4
	closemessage
	playse SE_SWITCH
	setmetatile 15, 12, 0x2AE, FALSE
	setmetatile 16, 12, 0x2AF, TRUE
	special DrawWholeMapView
	waitse
	delay 30
	playse SE_PIN
	applymovement 1, Route110_TrickHouseEntrance_ExclamationRight
	waitmovement 0
	waitse
	applymovement OBJ_EVENT_ID_PLAYER, Route110_TrickHouseEntrance__Movement_FaceLeft
	waitmovement 0
	msgbox Route110_TrickHouseEntrance_EventScript_BonsaiSwitch_Text_1
	trainerbattle_no_intro TRAINER_BRENDAN_ROUTE_103_MUDKIP, Route110_TrickHouseEntrance_Text_GruntDefeat
	applymovement 1, Route110_TrickHouseEntrance_BackUp
	waitmovement 0
	msgbox Route110_TrickHouseEntrance_EventScript_BonsaiSwitch_Text_2
	waitmessage
	closemessage
	applymovement 1, Route110_TrickHouseEntrance_Movement_ShadyExit
	waitmovement 0
	playse SE_EXIT
	removeobject 1
	setflag FLAG_HIDE_SHADY_KIMONO_GUY
	waitse
	release
	end

Route110_TrickHouseEntrance_EventScript_BonsaiSwitch_1:
	release
	end

Route110_TrickHouseEntrance_EventScript_BonsaiSwitch_4:
	release
	end


Route110_TrickHouseEntrance_ExclamationRight:
	emote_exclamation_mark
	walk_in_place_right
	delay_16
	delay_16
	delay_16
	delay_16
	walk_right
	walk_right
	walk_down
	walk_down
	walk_right
	walk_right
	walk_right
	step_end

Route110_TrickHouseEntrance__Movement_FaceLeft:
	face_left
	step_end

Route110_TrickHouseEntrance_BackUp:
	lock_facing_direction
	walk_slow_left
	unlock_facing_direction
	face_right
	step_end

Route110_TrickHouseEntrance_Movement_ShadyExit:
	walk_up
	walk_right
	walk_right
	walk_right
	step_end

Route110_TrickHouseEntrance_OnFrame_Text_0:
	.string "You really did it!\p"
	.string "You drove those thugs away!\p"
	.string "Words can't express how grateful we are\n"
	.string "to you.\p"
	.string "Here, please take this gift, it's the\n"
	.string "least I can do to thank you!$"

Route110_TrickHouseEntrance_OnFrame_Text_1:
	.string "That HM contains the move Strength,\n"
	.string "teach it to a POKéMON and they will be\l"
	.string "able to move boulders.\p"
	.string "Of course, you will need the Ecruteak\n"
	.string "City gym badge to use it.\p"
	.string "By the way, if you want to challenge us\n"
	.string "girls, we will give you a special gift for\l"
	.string "defeating us.\p"
	.string "Again, thank you for everything!$"

Route110_TrickHouseEntrance_EventScript_ShadyGuy_Text_0:
	.string "Hrm... A kid?\p"
	.string "You can watch the girls, but no talking!$"

Route110_TrickHouseEntrance_EventScript_BonsaiSwitch_Text_0:
	.string "There's a secret switch beneath this\n"
	.string "bonsai tree.\p"
	.string "Press it?$"

Route110_TrickHouseEntrance_EventScript_BonsaiSwitch_Text_1:
	.string "Hey! What do you think you're doing!?\p"
	.string "Alright, I'm going to have to force you\n"
	.string "to leave!$"

Route110_TrickHouseEntrance_EventScript_BonsaiSwitch_Text_2:
	.string "You're a lot tougher than you look.\p"
	.string "I'd better warn the others...$"

Route110_TrickHouseEntrance_Text_GruntDefeat::
	.string "Crap, you must be that kid that escaped\n"
	.string "from Goldenrod...$"
