MirageTower_4F_MapScripts::
	map_script MAP_SCRIPT_ON_LOAD, MirageTower_4F_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

MirageTower_4F_MapScripts_MAP_SCRIPT_ON_LOAD:
	call_if_set FLAG_PB_CELLDOOR_1_OPEN, MirageTower_4F_Tiles_Door_1
	call_if_set FLAG_PB_CELLDOOR_2_OPEN, MirageTower_4F_Tiles_Door_2
	call_if_set FLAG_PB_CELLDOOR_3_OPEN, MirageTower_4F_Tiles_Door_3
	end


MirageTower_4F_Tiles_Door_1::
	setmetatile 1, 7, 0x341, FALSE
	setmetatile 1, 6, 0x357, FALSE
	setmetatile 1, 5, 0x34F, FALSE
	setmetatile 0, 6, 0x356, TRUE
	setmetatile 0, 5, 0x34E, FALSE
	return


MirageTower_4F_Tiles_Door_2::
	setmetatile 5, 7, 0x341, FALSE
	setmetatile 5, 6, 0x357, FALSE
	setmetatile 5, 5, 0x34F, FALSE
	setmetatile 4, 6, 0x356, TRUE
	setmetatile 4, 5, 0x34E, FALSE
	return


MirageTower_4F_Tiles_Door_3::
	setmetatile 9, 7, 0x341, FALSE
	setmetatile 9, 6, 0x357, FALSE
	setmetatile 9, 5, 0x34F, FALSE
	setmetatile 8, 6, 0x356, TRUE
	setmetatile 8, 5, 0x34E, FALSE
	return


MirageTower_4F_EventScript_Key::
	finditem ITEM_BASEMENT_KEY
	end


MirageTower_4F_EventScript_Door3::
	lock
	goto_if_set FLAG_PB_CELLDOOR_3_OPEN, MirageTower_4F_EventScript_Door3_1
	checkitem ITEM_BASEMENT_KEY
	compare VAR_RESULT, TRUE
	goto_if_eq MirageTower_4F_EventScript_Door3_4
	goto_if_set FLAG_HIDE_PHOENIX_CELL_GUARD, MirageTower_4F_EventScript_Door3_5
	goto_if_set FLAG_HIDE_SHANE_PHOENIX_CELL, MirageTower_4F_EventScript_Door3_6
	playse SE_PIN
	applymovement 2, MirageTower_4F_Movement_ExclamationLeft
	waitmovement 0
	msgbox MirageTower_4F_EventScript_Door3_Text_7
	waitmessage
	closemessage
	delay 60
	playse SE_WARP_OUT
	addobject 4
	addobject 5
	addobject 6
	applymovement 3, MirageTower_4F_Movement_StepDown
	waitmovement 0
	delay 20
	applymovement 4, MirageTower_4F_Movement_DamonDown
	applymovement 5, MirageTower_4F_Movement_Grunt1Down
	applymovement 6, MirageTower_4F_Movement_Grunt2Down
	waitmovement 0
	applymovement 2, MirageTower_4F_Movement_StepDown
	waitmovement 0
	delay 20
	msgbox MirageTower_4F_EventScript_Door3_Text_8
	waitmessage
	closemessage
	applymovement 4, MirageTower_4F_Movement_StepUp
	waitmovement 0
	msgbox MirageTower_4F_EventScript_Door3_Text_9
	waitmessage
	closemessage
	applymovement 3, MirageTower_4F_Movement_StepDown
	waitmovement 0
	msgbox MirageTower_4F_EventScript_Door3_Text_10
	waitmessage
	closemessage
	applymovement 4, MirageTower_4F_Movement_DamonToShaneCell
	waitmovement 0
	msgbox MirageTower_4F_EventScript_Door3_Text_11
	waitmessage
	closemessage
	applymovement 3, MirageTower_4F_Movement_StepDown
	waitmovement 0
	msgbox MirageTower_4F_EventScript_Door3_Text_12
	waitmessage
	closemessage
	applymovement 4, MirageTower_4F_Movement_StepRight
	waitmovement 0
	msgbox MirageTower_4F_EventScript_Door3_Text_13
	waitmessage
	closemessage
	applymovement 4, MirageTower_4F_Movement_WalkDownStepUp
	waitmovement 0
	msgbox MirageTower_4F_EventScript_Door3_Text_14
	waitmessage
	closemessage
	applymovement 5, MirageTower_4F_Movement_Grunt1ToShaneCell
	applymovement 6, MirageTower_4F_Movement_Grunt2ToShaneCell
	waitmovement 0
	delay 30
	playse SE_DOOR
	setmetatile 5, 7, 0x341, FALSE
	setmetatile 5, 6, 0x357, FALSE
	setmetatile 5, 5, 0x34F, FALSE
	setmetatile 4, 6, 0x356, TRUE
	setmetatile 4, 5, 0x34E, FALSE
	special DrawWholeMapView
	setflag FLAG_PB_CELLDOOR_2_OPEN
	delay 30
	applymovement 5, MirageTower_4F_Movement_Grunt1intoCell
	applymovement 6, MirageTower_4F_Movement_Grunt2intoCell
	waitmovement 0
	msgbox MirageTower_4F_EventScript_Door3_Text_15
	waitmessage
	closemessage
	applymovement 6, MirageTower_4F_Movement_Grunt2Exit
	applymovement 3, MirageTower_4F_Movement_ShaneExit
	applymovement 5, MirageTower_4F_Movement_Grunt1Exit
	waitmovement 0
	playse SE_WARP_IN
	removeobject 3
	removeobject 5
	removeobject 6
	setflag FLAG_HIDE_SHANE_PHOENIX_CELL
	clearflag FLAG_HIDE_CHALLENGE_SPECTATOR_LINE
	setflag FLAG_HIDE_GOLDENROD_GYM_RIGHT_GUARD
	applymovement 4, MirageTower_4F_Movement_WalkLookAtPlayer
	waitmovement 0
	playse SE_WARP_IN
	waitse
	removeobject 4
	release
	end

MirageTower_4F_EventScript_Door3_1:
	msgbox MirageTower_4F_EventScript_Door3_Text_0
	release
	end

MirageTower_4F_EventScript_Door3_4:
	msgbox MirageTower_4F_EventScript_Door3_Text_1
	waitmessage
	closemessage
	delay 30
	playse SE_DOOR
	setmetatile 9, 7, 0x341, FALSE
	setmetatile 9, 6, 0x357, FALSE
	setmetatile 9, 5, 0x34F, FALSE
	setmetatile 8, 6, 0x356, TRUE
	setmetatile 8, 5, 0x34E, FALSE
	special DrawWholeMapView
	setflag FLAG_PB_CELLDOOR_3_OPEN
	release
	end

MirageTower_4F_EventScript_Door3_5:
	msgbox MirageTower_4F_EventScript_Door3_Text_2
	release
	end

MirageTower_4F_EventScript_Door3_6:
	goto_if_set FLAG_TALKED_TO_PHOENIX_CELL_GUARD, MirageTower_4F_EventScript_Door3_11
	applymovement 2, MirageTower_4F_Movement_StepLeft
	waitmovement 0
	msgbox MirageTower_4F_EventScript_Door3_Text_5
	waitmessage
	applymovement 2, MirageTower_4F_Movement_StepDown
	waitmovement 0
	msgbox MirageTower_4F_EventScript_Door3_Text_6
	waitmessage
	closemessage
	setflag FLAG_TALKED_TO_PHOENIX_CELL_GUARD
	release
	end

MirageTower_4F_EventScript_Door3_11:
	applymovement 2, MirageTower_4F_Movement_StepLeft
	waitmovement 0
	msgbox MirageTower_4F_EventScript_Door3_Text_3, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq MirageTower_4F_EventScript_Door3_14
	closemessage
	removeitem ITEM_GOLD_TEETH
	addobject 7
	delay 30
	playse SE_PIN
	applymovement 2, MirageTower_4F_Movement_Exclamation
	waitmovement 0
	delay 30
	removeobject 7
	delay 60
	applymovement 2, MirageTower_4F_Movement_StepUp
	waitmovement 0
	delay 30
	applymovement 2, MirageTower_4F_Movement_StepRight
	waitmovement 0
	delay 30
	applymovement 2, MirageTower_4F_Movement_StepUp
	waitmovement 0
	delay 30
	msgbox MirageTower_4F_EventScript_Door3_Text_4
	waitmessage
	closemessage
	delay 30
	addobject 1
	clearflag FLAG_HIDE_CELL_KEY
	delay 30
	applymovement 2, MirageTower_4F_Movement_GuardLeave
	waitmovement 0
	removeobject 2
	playse SE_WARP_IN
	waitse
	setflag FLAG_HIDE_PHOENIX_CELL_GUARD
	release
	end

MirageTower_4F_EventScript_Door3_14:
	applymovement 2, MirageTower_4F_Movement_StepDown
	waitmovement 0
	release
	end


MirageTower_4F_Movement_ExclamationLeft:
	emote_exclamation_mark
	delay_16
	delay_16
	delay_16
	delay_16
	walk_in_place_left
	delay_16
	delay_16
	delay_16
	delay_16
	walk_in_place_right
	step_end

MirageTower_4F_Movement_DamonDown:
	walk_down
	walk_down
	walk_down
	walk_left
	walk_down
	walk_down
	walk_left
	walk_left
	walk_left
	walk_in_place_up
	step_end

MirageTower_4F_Movement_Grunt1Down:
	delay_16
	walk_down
	walk_down
	walk_down
	walk_left
	walk_down
	walk_down
	walk_left
	walk_left
	walk_down
	walk_left
	walk_left
	walk_up
	step_end

MirageTower_4F_Movement_Grunt2Down:
	delay_16
	delay_16
	walk_down
	walk_down
	walk_down
	walk_left
	walk_down
	walk_down
	walk_left
	walk_left
	walk_in_place_up
	step_end

MirageTower_4F_Movement_StepDown:
	walk_in_place_down
	step_end

MirageTower_4F_Movement_StepUp:
	walk_in_place_up
	step_end

MirageTower_4F_Movement_StepRight:
	walk_in_place_right
	step_end

MirageTower_4F_Movement_StepLeft:
	walk_in_place_left
	step_end

MirageTower_4F_Movement_DamonToShaneCell:
	walk_up
	walk_left
	walk_left
	walk_left
	walk_left
	walk_in_place_up
	step_end

MirageTower_4F_Movement_WalkDownStepUp:
	walk_down
	walk_down
	walk_in_place_up
	step_end

MirageTower_4F_Movement_Grunt1ToShaneCell:
	walk_left
	walk_left
	walk_left
	walk_up
	step_end

MirageTower_4F_Movement_Grunt2ToShaneCell:
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_in_place_up
	step_end

MirageTower_4F_Movement_Grunt1intoCell:
	walk_up
	walk_up
	walk_left
	walk_up
	walk_up
	walk_right
	walk_in_place_down
	step_end

MirageTower_4F_Movement_Grunt2intoCell:
	walk_up
	walk_up
	walk_up
	step_end

MirageTower_4F_Movement_Grunt2Exit:
	walk_down
	walk_down
	walk_down
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_up
	walk_up
	walk_right
	walk_up
	walk_up
	walk_up
	set_invisible
	step_end

MirageTower_4F_Movement_ShaneExit:
	walk_down
	walk_down
	walk_down
	walk_down
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_up
	walk_up
	walk_right
	walk_up
	walk_up
	walk_up
	set_invisible
	step_end

MirageTower_4F_Movement_Grunt1Exit:
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_up
	walk_up
	walk_right
	walk_up
	walk_up
	walk_up
	set_invisible
	step_end

MirageTower_4F_Movement_WalkLookAtPlayer:
	walk_up
	walk_right
	walk_right
	walk_right
	walk_right
	walk_in_place_up
	delay_16
	delay_16
	delay_16
	delay_16
	walk_right
	walk_right
	walk_right
	walk_up
	walk_up
	walk_right
	walk_up
	walk_up
	walk_up
	set_invisible
	step_end

MirageTower_4F_Movement_Exclamation:
	emote_exclamation_mark
	delay_16
	delay_16
	delay_16
	delay_16
	walk_slow_left
	step_end

MirageTower_4F_Movement_GuardLeave:
	walk_right
	walk_right
	walk_up
	walk_right
	walk_up
	walk_up
	walk_up
	set_invisible
	step_end

MirageTower_4F_EventScript_Door2::
	lock
	goto_if_set FLAG_PB_CELLDOOR_2_OPEN, MirageTower_4F_EventScript_Door2_1
	checkitem ITEM_BASEMENT_KEY
	compare VAR_RESULT, TRUE
	goto_if_eq MirageTower_4F_EventScript_Door2_4
	msgbox MirageTower_4F_EventScript_Door3_Text_2
	release
	end

MirageTower_4F_EventScript_Door2_1:
	msgbox MirageTower_4F_EventScript_Door3_Text_0
	release
	end

MirageTower_4F_EventScript_Door2_4:
	msgbox MirageTower_4F_EventScript_Door3_Text_1
	waitmessage
	closemessage
	delay 30
	playse SE_DOOR
	setmetatile 5, 7, 0x341, FALSE
	setmetatile 5, 6, 0x357, FALSE
	setmetatile 5, 5, 0x34F, FALSE
	setmetatile 4, 6, 0x356, TRUE
	setmetatile 4, 5, 0x34E, FALSE
	special DrawWholeMapView
	setflag FLAG_PB_CELLDOOR_2_OPEN
	release
	end


MirageTower_4F_EventScript_Door1::
	lock
	goto_if_set FLAG_PB_CELLDOOR_1_OPEN, MirageTower_4F_EventScript_Door1_1
	checkitem ITEM_BASEMENT_KEY
	compare VAR_RESULT, TRUE
	goto_if_eq MirageTower_4F_EventScript_Door1_4
	msgbox MirageTower_4F_EventScript_Door3_Text_2
	release
	end

MirageTower_4F_EventScript_Door1_1:
	msgbox MirageTower_4F_EventScript_Door3_Text_0
	release
	end

MirageTower_4F_EventScript_Door1_4:
	msgbox MirageTower_4F_EventScript_Door3_Text_1
	waitmessage
	closemessage
	delay 30
	playse SE_DOOR
	setmetatile 1, 7, 0x341, FALSE
	setmetatile 1, 6, 0x357, FALSE
	setmetatile 1, 5, 0x34F, FALSE
	setmetatile 0, 6, 0x356, TRUE
	setmetatile 0, 5, 0x34E, FALSE
	special DrawWholeMapView
	setflag FLAG_PB_CELLDOOR_1_OPEN
	release
	end


MirageTower_4F_EventScript_Bed::
	lock
	msgbox MirageTower_4F_EventScript_Bed_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq MirageTower_4F_EventScript_Bed_1
	closemessage
	fadescreen FADE_TO_BLACK
	special HealPlayerParty
	playfanfare MUS_HEAL
	waitfanfare
	fadescreen FADE_FROM_BLACK
	delay 20
	msgbox MirageTower_4F_EventScript_Bed_Text_1
	release
	end

MirageTower_4F_EventScript_Bed_1:
	release
	end


MirageTower_4F_EventScript_Door3_Text_0:
	.string "The cell door is open.$"

MirageTower_4F_EventScript_Door3_Text_1:
	.string "{PLAYER} inserted the Cell Key into\n"
	.string "the door.$"

MirageTower_4F_EventScript_Door3_Text_2:
	.string "The cell door is locked.$"

MirageTower_4F_EventScript_Door3_Text_3:
	.string "What do you want now?\p"
	.string "They don't pay me nearly enough for\n"
	.string "this.\p"
	.string "You know, I shouldn't even be talking to\n"
	.string "you.\p"
	.string "...\p"
	.string "Although, that gold nugget you have\n"
	.string "looks awfully expensive.\p"
	.string "If you were to accidentally drop it, I\n"
	.string "might accidentally drop my key...\p"
	.string "Drop the Fake Nugget?$"

MirageTower_4F_EventScript_Door3_Text_4:
	.string "This never happened...$"

MirageTower_4F_EventScript_Door3_Text_5:
	.string "No no. I'm not supposed to let you out,\n"
	.string "no matter what.$"

MirageTower_4F_EventScript_Door3_Text_6:
	.string "Man, how did I get stuck with guard duty\n"
	.string "today?$"

MirageTower_4F_EventScript_Door3_Text_7:
	.string "Uh, hey, boss!\p"
	.string "The other one's awake now!$"

MirageTower_4F_EventScript_Door3_Text_8:
	.string "???: Well well, my Hypno really did a\n"
	.string "number on this brat.$"

MirageTower_4F_EventScript_Door3_Text_9:
	.string "Now that you've both awoken from your\n"
	.string "little naps, I need you to be good\l"
	.string "little kiddos and answer a few\l"
	.string "questions for me.\p"
	.string "One of our grunts said he saw a\n"
	.string "red-headed brat disappear and\l"
	.string "reappear with the Legendary POKéMON,\l"
	.string "Celebi.\p"
	.string "Now, are either one of you the same brat\n"
	.string "from Ilex Forest?\p"
	.string "{PLAYER}: ...$"

MirageTower_4F_EventScript_Door3_Text_10:
	.string "SHANE: It was me, asshole!$"

MirageTower_4F_EventScript_Door3_Text_11:
	.string "???: Aren't you a spunky one.\p"
	.string "And how do we know you're not just\n"
	.string "trying to protect your friend?$"

MirageTower_4F_EventScript_Door3_Text_12:
	.string "SHANE: Ha! Don't make me laugh!\p"
	.string "Do you really think a wimpy little kid\n"
	.string "like that could summon a Legendary\l"
	.string "POKéMON?\p"
	.string "You've got to be out of your minds!$"

MirageTower_4F_EventScript_Door3_Text_13:
	.string "???: Hmm...\p"
	.string "Alright.$"

MirageTower_4F_EventScript_Door3_Text_14:
	.string "???: Grunts, take this one to the\n"
	.string "Ecruteak Base.\p"
	.string "Leave the other kid here, just in case...\p"
	.string "GRUNT: Yes sir, ADMIN DAMON!$"

MirageTower_4F_EventScript_Door3_Text_15:
	.string "GRUNT: Now, don't give us any trouble.$"

MirageTower_4F_EventScript_Bed_Text_0:
	.string "Would you like to take a quick nap?$"

MirageTower_4F_EventScript_Bed_Text_1:
	.string "Your POKéMON have been fully restored.$"
