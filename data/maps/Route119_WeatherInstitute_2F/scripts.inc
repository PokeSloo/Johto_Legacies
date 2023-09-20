Route119_WeatherInstitute_2F_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route119_WeatherInstitute_2F_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

Route119_WeatherInstitute_2F_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	compare VAR_WEATHER_INSTITUTE_STATE, 1
	goto_if_eq Route119_WeatherInstitute_2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

Route119_WeatherInstitute_2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
	setobjectxyperm 7, 2, 6
	setobjectmovementtype 7, MOVEMENT_TYPE_FACE_UP
	setobjectxyperm 4, 12, 13
	setobjectmovementtype 4, MOVEMENT_TYPE_WANDER_RIGHT_AND_LEFT
	setobjectxyperm 6, 14, 9
	setobjectmovementtype 6, MOVEMENT_TYPE_FACE_UP
	setobjectxyperm 5, 7, 7
	setobjectmovementtype 5, MOVEMENT_TYPE_FACE_DOWN
	return


Route119_WeatherInstitute_2F_EventScript_FinalGrunt::
	lock
	applymovement OBJ_EVENT_ID_PLAYER, Route119_WeatherInstitute_2F_PlayerToAction
	waitmovement 0
	delay 30
	applymovement 3, Route119_WeatherInstitute_2F_StepInPlaceLeft
	waitmovement 0
	msgbox Route119_WeatherInstitute_2F_EventScript_FinalGrunt_Text_0
	closemessage
	applymovement 3, Route119_WeatherInstitute_2F_StepInPlaceLeft
	waitmovement 0
	msgbox Route119_WeatherInstitute_2F_EventScript_FinalGrunt_Text_1
	closemessage
	playse SE_PIN
	applymovement 3, Route119_WeatherInstitute_2F_TurnExclamation
	waitmovement 0
	delay 60
	msgbox Route119_WeatherInstitute_2F_EventScript_FinalGrunt_Text_2
	closemessage
	applymovement 3, Route119_WeatherInstitute_2F_StepInPlaceRight
	waitmovement 0
	msgbox Route119_WeatherInstitute_2F_EventScript_FinalGrunt_Text_3
	applymovement 3, Route119_WeatherInstitute_2F_StepOneRight
	waitmovement 0
	trainerbattle_no_intro TRAINER_SHELLY_WEATHER_INSTITUTE, Route119_WeatherInstitute_2F_Text_ShellyDefeat
	applymovement 3, Route119_WeatherInstitute_2F_SlowlyBackUp
	waitmovement 0
	msgbox Route119_WeatherInstitute_2F_EventScript_FinalGrunt_Text_4
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, Route119_WeatherInstitute_2F_PlayerWatchLeave
	applymovement 3, Route119_WeatherInstitute_2F_GruntAroundPlayer
	waitmovement 0
	applymovement 3, Route119_WeatherInstitute_2F_StepInPlaceLeft
	waitmovement 0
	msgbox Route119_WeatherInstitute_2F_EventScript_FinalGrunt_Text_5
	closemessage
	applymovement 2, Route119_WeatherInstitute_2F_GruntLeave
	applymovement 3, Route119_WeatherInstitute_2F_FinalGruntLeave
	waitmovement 0
	setvar VAR_WEATHER_INSTITUTE_STATE, 1
	clearflag FLAG_HIDE_WEATHER_INSTITUTE_1F_WORKERS
	fadedefaultbgm
	setflag FLAG_HIDE_ROUTE_119_TEAM_AQUA
	removeobject 1
	removeobject 8
	removeobject 2
	removeobject 3
	applymovement OBJ_EVENT_ID_PLAYER, Route119_WeatherInstitute_2F_StepInPlaceLeft
	waitmovement 0
	delay 30
	applymovement 5, Route119_WeatherInstitute_2F_CarmenToPlayer
	waitmovement 0
	msgbox Route119_WeatherInstitute_2F_EventScript_FinalGrunt_Text_6
	closemessage
	applymovement 5, Route119_WeatherInstitute_2F_StepInPlaceRight
	waitmovement 0
	msgbox Route119_WeatherInstitute_2F_EventScript_FinalGrunt_Text_7
	waitmessage
	giveitem ITEM_QUICK_BALL, 5
	msgbox Route119_WeatherInstitute_2F_EventScript_FinalGrunt_Text_8
	waitmessage
	closemessage
	fadescreen FADE_TO_BLACK
	setobjectxy 7, 2, 6
	setobjectxyperm 7, 2, 6
	setobjectmovementtype 7, MOVEMENT_TYPE_FACE_UP
	setobjectxy 4, 12, 13
	setobjectxyperm 4, 12, 13
	setobjectmovementtype 4, MOVEMENT_TYPE_WANDER_RIGHT_AND_LEFT
	setobjectxy 6, 14, 9
	setobjectxyperm 6, 14, 9
	setobjectmovementtype 6, MOVEMENT_TYPE_FACE_UP
	setobjectxy 5, 7, 7
	setobjectxyperm 5, 7, 7
	setobjectmovementtype 5, MOVEMENT_TYPE_FACE_DOWN
	fadescreen FADE_FROM_BLACK
	release
	end


Route119_WeatherInstitute_2F_PlayerToAction:
	walk_left
	walk_down
	walk_left
	step_end

Route119_WeatherInstitute_2F_StepInPlaceLeft:
	walk_in_place_left
	step_end

Route119_WeatherInstitute_2F_TurnExclamation:
	emote_exclamation_mark
	walk_in_place_right
	step_end

Route119_WeatherInstitute_2F_StepInPlaceRight:
	walk_in_place_right
	step_end

Route119_WeatherInstitute_2F_StepOneRight:
	walk_fast_right
	step_end

Route119_WeatherInstitute_2F_SlowlyBackUp:
	lock_facing_direction
	walk_slow_left
	unlock_facing_direction
	step_end

Route119_WeatherInstitute_2F_GruntAroundPlayer:
	walk_down
	walk_right
	walk_right
	walk_right
	walk_up
	walk_up
	walk_right
	walk_right
	step_end

Route119_WeatherInstitute_2F_PlayerWatchLeave:
	delay_16
	delay_16
	face_down
	delay_16
	delay_16
	face_right
	step_end

Route119_WeatherInstitute_2F_GruntLeave:
	walk_down
	walk_down
	walk_right
	walk_right
	walk_right
	walk_right
	step_end

Route119_WeatherInstitute_2F_FinalGruntLeave:
	walk_right
	walk_right
	walk_down
	walk_down
	walk_right
	walk_right
	walk_right
	walk_right
	step_end

Route119_WeatherInstitute_2F_CarmenToPlayer:
	walk_right
	walk_right
	step_end

Route119_WeatherInstitute_2F_EventScript_Carmen::
	msgbox Route119_WeatherInstitute_2F_EventScript_Carmen_Text_0, MSGBOX_NPC
	end


Route119_WeatherInstitute_2F_EventScript_Scientist1::
	msgbox Route119_WeatherInstitute_2F_EventScript_Scientist1_Text_0, MSGBOX_NPC
	end


Route119_WeatherInstitute_2F_EventScript_Scientist2::
	msgbox Route119_WeatherInstitute_2F_EventScript_Scientist2_Text_0, MSGBOX_NPC
	end


Route119_WeatherInstitute_2F_EventScript_Scientist3::
	msgbox Route119_WeatherInstitute_2F_EventScript_Scientist3_Text_0, MSGBOX_NPC
	end


Route119_WeatherInstitute_2F_EventScript_Grunt5::
	trainerbattle_single TRAINER_GRUNT_WEATHER_INST_5, Route119_WeatherInstitute_2F_Text_Grunt5Intro, Route119_WeatherInstitute_2F_Text_Grunt5Defeat
	msgbox Route119_WeatherInstitute_2F_Text_Grunt5PostBattle, MSGBOX_AUTOCLOSE
	end

Route119_WeatherInstitute_2F_EventScript_Grunt2::
	trainerbattle_single TRAINER_GRUNT_WEATHER_INST_2, Route119_WeatherInstitute_2F_Text_Grunt2Intro, Route119_WeatherInstitute_2F_Text_Grunt2Defeat
	msgbox Route119_WeatherInstitute_2F_Text_Grunt2PostBattle, MSGBOX_AUTOCLOSE
	end

Route119_WeatherInstitute_2F_EventScript_Grunt3::
	trainerbattle_single TRAINER_GRUNT_WEATHER_INST_3, Route119_WeatherInstitute_2F_Text_Grunt3Intro, Route119_WeatherInstitute_2F_Text_Grunt3Defeat
	msgbox Route119_WeatherInstitute_2F_Text_Grunt3PostBattle, MSGBOX_AUTOCLOSE
	end

Route119_WeatherInstitute_2F_Text_ShellyDefeat:
	.string "Oh, come on!\n"
	.string "How could this day get any worse?$"

Route119_WeatherInstitute_2F_Text_Grunt2Intro:
	.string "Who let you up here!?\p"
	.string "This is no place for kids to play!$"

Route119_WeatherInstitute_2F_Text_Grunt2Defeat:
	.string "Our plan's being spoiled by a kid?$"

Route119_WeatherInstitute_2F_Text_Grunt2PostBattle:
	.string "You're pretty strong, you would make it\n"
	.string "pretty far in our team.$"

Route119_WeatherInstitute_2F_Text_Grunt3Intro:
	.string "Stop right there!\p"
	.string "I can't let you go any farther.$"

Route119_WeatherInstitute_2F_Text_Grunt3Defeat:
	.string "You got me!$"

Route119_WeatherInstitute_2F_Text_Grunt3PostBattle:
	.string "Fine then!\n"
	.string "Have it your way!\p"
	.string "Why did I even sign up for this job...$"

Route119_WeatherInstitute_2F_Text_Grunt5Intro:
	.string "We heard they sell Master Balls here,\n"
	.string "but the workers aren't giving them up!$"

Route119_WeatherInstitute_2F_Text_Grunt5Defeat:
	.string "Wait, what just happened?$"

Route119_WeatherInstitute_2F_Text_Grunt5PostBattle:
	.string "Humph, so what?\n"
	.string "You really think you can stop us?$"

Route119_WeatherInstitute_2F_EventScript_FinalGrunt_Text_0:
	.string "GRUNT: This is your final warning! Tell\n"
	.string "us where you keep the Master Balls, and\l"
	.string "we won't have to hurt you!\p"
	.string "We know they're made in this factory, so\n"
	.string "they must be somewhere in here.\p"
	.string "CARMEN: I'll tell you the same thing I\n"
	.string "told the others; we just sent off our\l"
	.string "last shipment of Master Balls to the\l"
	.string "Celadon Mart in Kanto.\p"
	.string "We won't receive any more shipments of\n"
	.string "raw material needed to produce Master\l"
	.string "Balls for at least another three weeks.$"

Route119_WeatherInstitute_2F_EventScript_FinalGrunt_Text_1:
	.string "GRUNT: Gah!\p"
	.string "Why can't I catch a break!?$"

Route119_WeatherInstitute_2F_EventScript_FinalGrunt_Text_2:
	.string "GRUNT: And who let you in here!?\p"
	.string "Did the other grunts fall asleep on the\n"
	.string "job?\p"
	.string "...\p"
	.string "What do you mean you beat them?\p"
	.string "Why is everyone so useless!?$"

Route119_WeatherInstitute_2F_EventScript_FinalGrunt_Text_3:
	.string "GRUNT: Fine then, I'll show you not to\n"
	.string "mess with TEAM PHOENIX!$"

Route119_WeatherInstitute_2F_EventScript_FinalGrunt_Text_4:
	.string "GRUNT: This wasn't supposed to\n"
	.string "happen...\p"
	.string "I was told this job would be easy…$"

Route119_WeatherInstitute_2F_EventScript_FinalGrunt_Text_5:
	.string "GRUNT: Don't think you've seen the last\n"
	.string "of TEAM PHOENIX!\p"
	.string "We always rise back up!$"

Route119_WeatherInstitute_2F_EventScript_FinalGrunt_Text_6:
	.string "CARMEN: Thank you for saving us from\n"
	.string "those hooded lowlifes!\p"
	.string "My name is CARMEN, by the way. I'm the\n"
	.string "owner and CEO of this factory.\p"
	.string "And your name is?\p"
	.string "...\p"
	.string "{PLAYER}, I'll be sure to remember\n"
	.string "that.\p"
	.string "By the way, we are actually fully\n"
	.string "stocked up on Master Balls, but I\l"
	.string "wasn't about to give in to those jerks'\l"
	.string "demands!$"

Route119_WeatherInstitute_2F_EventScript_FinalGrunt_Text_7:
	.string "CARMEN: My grandfather started this\n"
	.string "business from nothing.\p"
	.string "It meant everything to him, and I\n"
	.string "intend to carry on his legacy.\p"
	.string "...\p"
	.string "Here {PLAYER}, I know it isn't much of\n"
	.string "a reward, but as thanks for stepping in\l"
	.string "and saving us, I would like you to have\l"
	.string "these…$"

Route119_WeatherInstitute_2F_EventScript_FinalGrunt_Text_8:
	.string "CARMEN: Those are Quick Balls. They are\n"
	.string "most effective at the very start of a\l"
	.string "battle, but lose effectiveness after\l"
	.string "the first turn.\p"
	.string "Feel free to buy more from the shop\n"
	.string "downstairs if you run out.\p"
	.string "Now, I must be sure everything in the\n"
	.string "factory is still in working order.\p"
	.string "Until we meet again, {PLAYER}.$"

Route119_WeatherInstitute_2F_EventScript_Carmen_Text_0:
	.string "CARMEN: Thanks again for saving us,\n"
	.string "{PLAYER}.\p"
	.string "Those thieves could have cost us a\n"
	.string "fortune in stolen inventory.$"

Route119_WeatherInstitute_2F_EventScript_Scientist1_Text_0:
	.string "So you're the kid who saved us?\p"
	.string "I've never been in a situation like that\n"
	.string "before, I'm ashamed to say that I just\l"
	.string "froze up when I saw those thieves.$"

Route119_WeatherInstitute_2F_EventScript_Scientist2_Text_0:
	.string "Our Master Balls may seem overpriced,\n"
	.string "but if we sold them for the same price\l"
	.string "as normal Poké Balls, nobody would buy\l"
	.string "anything else.\p"
	.string "We wouldn't be able to keep up with the\n"
	.string "demand.\p"
	.string "Plus, the raw material used to make them\n"
	.string "is very rare.$"

Route119_WeatherInstitute_2F_EventScript_Scientist3_Text_0:
	.string "CARMEN really stepped up after Kurt\n"
	.string "passed.\p"
	.string "I'm lucky to have worked under both\n"
	.string "CARMEN and her grandfather.$"
