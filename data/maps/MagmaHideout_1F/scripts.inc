MagmaHideout_1F_MapScripts::
	.byte 0

MagmaHideout_1F_EventScript_Grunt1::
	trainerbattle_single TRAINER_GRUNT_MAGMA_HIDEOUT_1, MagmaHideout_1F_Text_Grunt1Intro, MagmaHideout_1F_Text_Grunt1Defeat
	msgbox MagmaHideout_1F_Text_Grunt1PostBattle, MSGBOX_AUTOCLOSE
	end

MagmaHideout_1F_EventScript_Grunt2::
	trainerbattle_single TRAINER_GRUNT_MAGMA_HIDEOUT_2, MagmaHideout_1F_Text_Grunt2Intro, MagmaHideout_1F_Text_Grunt2Defeat
	msgbox MagmaHideout_1F_Text_Grunt2PostBattle, MSGBOX_AUTOCLOSE
	end

MagmaHideout_1F_Text_Grunt1Intro:
	.string "You're too late now kid, you can't stop\n"
	.string "our return to greatness!$"

MagmaHideout_1F_Text_Grunt1Defeat:
	.string "Doesn't matter, you'll never make it to\n"
	.string "the boss in time...$"

MagmaHideout_1F_Text_Grunt1PostBattle:
	.string "Good luck finding your way through this\n"
	.string "cave, hehe.$"

MagmaHideout_1F_Text_Grunt2Intro:
	.string "What, you again!?$"

MagmaHideout_1F_Text_Grunt2Defeat:
	.string "Arrgh!\n"
	.string "Got me again!$"

MagmaHideout_1F_Text_Grunt2PostBattle:
	.string "How did you even find this place?\p"
	.string "We just moved in ourselves.$"

MagmaHideout_1F_EventScript_Trigger_1::
	lock
	goto_if_set FLAG_HIDE_SHANE_HIDEOUT_1F, MagmaHideout_1F_EventScript_Trigger_1_2
	applymovement OBJ_EVENT_ID_PLAYER, MagmaHideout_1F_Movement_ToShane1
	waitmovement 0
	goto MagmaHideout_1F_EventScript_Main
	end

MagmaHideout_1F_EventScript_Trigger_1_2:
	release
	end


MagmaHideout_1F_EventScript_Trigger_2::
	lock
	goto_if_set FLAG_HIDE_SHANE_HIDEOUT_1F, MagmaHideout_1F_EventScript_Trigger_2_2
	applymovement OBJ_EVENT_ID_PLAYER, MagmaHideout_1F_Movement_ToShane2
	waitmovement 0
	goto MagmaHideout_1F_EventScript_Main
	end

MagmaHideout_1F_EventScript_Trigger_2_2:
	release
	end


MagmaHideout_1F_EventScript_Main::
	applymovement 7, MagmaHideout_1F_Movement_FaceUp
	waitmovement 0
	msgbox MagmaHideout_1F_EventScript_Main_Text_0
	waitmessage
	closemessage
	applymovement 7, MagmaHideout_1F_Movement_ShaneExit
	waitmovement 0
	removeobject 7
	setflag FLAG_HIDE_SHANE_HIDEOUT_1F
	release
	end


MagmaHideout_1F_Movement_ToShane1:
	walk_right
	walk_right
	face_down
	step_end

MagmaHideout_1F_Movement_ToShane2:
	walk_right
	walk_down
	step_end

MagmaHideout_1F_Movement_FaceUp:
	walk_in_place_up
	step_end

MagmaHideout_1F_Movement_ShaneExit:
	walk_down
	walk_fast_down
	walk_fast_down
	walk_fast_right
	walk_fast_right
	walk_fast_down
	walk_fast_down
	step_end

MagmaHideout_1F_EventScript_Main_Text_0:
	.string "SHANE: It's just some cave, I was\n"
	.string "expecting some kind of facility.\p"
	.string "Well, as long as those jerks are in here,\n"
	.string "I don't care.\p"
	.string "I'll take them down!\p"
	.string "...\p"
	.string "Say, let's make this a little more\n"
	.string "interesting...\p"
	.string "We'll see who can get through this cave\n"
	.string "first.\p"
	.string "Winner gets the first crack at their\n"
	.string "boss!\p"
	.string "Ok, go!$"
