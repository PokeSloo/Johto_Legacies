Route114_LanettesHouse_MapScripts::
	map_script MAP_SCRIPT_ON_LOAD, Route114_LanettesHouse_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

Route114_LanettesHouse_MapScripts_MAP_SCRIPT_ON_LOAD:
	goto_if_set FLAG_RAGE_RESORT_LADDER_OPEN, Route114_LanettesHouse_MapScripts_MAP_SCRIPT_ON_LOAD_2
	end

Route114_LanettesHouse_MapScripts_MAP_SCRIPT_ON_LOAD_2:
	setmetatile 1, 7, 0x342, FALSE
	return


Route114_LanettesHouse_EventScript_Shane::
	msgbox Route114_LanettesHouse_EventScript_Shane_Text_0, MSGBOX_NPC
	end


Route114_LanettesHouse_EventScript_Poster::
	lock
	goto_if_set FLAG_RAGE_RESORT_LADDER_OPEN, Route114_LanettesHouse_EventScript_Poster_1
	goto_if_set FLAG_SAW_RESORT_GRUNT, Route114_LanettesHouse_EventScript_Poster_2
	release
	end

Route114_LanettesHouse_EventScript_Poster_1:
	release
	end

Route114_LanettesHouse_EventScript_Poster_2:
	msgbox Route114_LanettesHouse_EventScript_Poster_Text_0
	waitmessage
	closemessage
	playse SE_SWITCH
	setmetatile 1, 7, 0x342, FALSE
	special DrawWholeMapView
	waitse
	delay 20
	playse SE_PIN
	applymovement 1, Route114_LanettesHouse_Movement_Exclamation
	waitmovement 0
	waitse
	delay 30
	applymovement OBJ_EVENT_ID_PLAYER, Route114_LanettesHouse_Movement_StepDown
	waitmovement 0
	msgbox Route114_LanettesHouse_EventScript_Poster_Text_1
	waitmessage
	closemessage
	applymovement 1, Route114_LanettesHouse_Movement_ShanetoHole
	waitmovement 0
	playse SE_EXIT
	removeobject 1
	waitse
	setflag FLAG_HIDE_SHANE_RESORT_HOUSE
	setflag FLAG_RAGE_RESORT_LADDER_OPEN
	release
	end


Route114_LanettesHouse_Movement_Exclamation:
	emote_exclamation_mark
	face_down
	step_end

Route114_LanettesHouse_Movement_StepDown:
	walk_down
	step_end

Route114_LanettesHouse_Movement_ShanetoHole:
	walk_left
	walk_left
	walk_down
	walk_down
	walk_down
	step_end

Route114_LanettesHouse_EventScript_Shane_Text_0:
	.string "You must have been seeing things, there\n"
	.string "isn't a single soul in here...$"

Route114_LanettesHouse_EventScript_Poster_Text_0:
	.string "Hey!\p"
	.string "A switch behind the poster!?\n"
	.string "Let's push it!$"

Route114_LanettesHouse_EventScript_Poster_Text_1:
	.string "SHANE: Look!\p"
	.string "A hole just opened up in the floor!\p"
	.string "I bet if we follow that, we'll find where\n"
	.string "all of these jerks are hiding!$"
