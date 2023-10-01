DesertRuins_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, DesertRuins_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

DesertRuins_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
	map_script_2 VAR_CHERRYGROVE_STATE, 9, DesertRuins_On_Frame
	.2byte 0


DesertRuins_On_Frame::
	lock
	clearflag FLAG_HIDE_PAST_SILVER
	applymovement OBJ_EVENT_ID_PLAYER, DesertRuins_Movement_WalktoKurts
	waitmovement 0
	fadeoutbgm 1
	playse SE_PIN
	applymovement OBJ_EVENT_ID_PLAYER, DesertRuins_Movement_WalktoGold
	waitmovement 0
	playse SE_SLIDING_DOOR
	applymovement 5, DesertRuins_Movement_WalktoPlayer
	waitmovement 0
	playse SE_WALL_HIT
	delay 60
	msgbox DesertRuins_On_Frame_Text_0
	trainerbattle_no_intro TRAINER_BRENDAN_ROUTE_110_MUDKIP, DesertRuins_Text_GoldDefeat
	msgbox DesertRuins_On_Frame_Text_0
	waitmessage
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, DesertRuins_Movement_WatchGoldLeave
	applymovement 5, DesertRuins_Movement_GoldLeave
	waitmovement 0
	delay 60
	setflag FLAG_ILEX_BLOCKING_GRUNT
	setflag FLAG_HIDE_PAST_SILVER
	clearflag FLAG_ILEX_BATTLE_GRUNT
	addvar VAR_CHERRYGROVE_STATE, 1
	addobject 6
	playse SE_LEDGE
	applymovement 6, DesertRuins_Movement_CelebiJumpRight
	waitmovement 0
	delay 30
	playmoncry SPECIES_CELEBI, CRY_MODE_NORMAL
	waitmoncry
	delay 30
	fadescreen FADE_TO_WHITE
	removeobject 6
	playbgm MUS_RAYQUAZA_APPEARS, FALSE
	special TimeTravelForwardClock
	waitstate
	fadedefaultbgm
	release
	end


DesertRuins_Movement_WalktoKurts:
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	delay_16
	delay_16
	walk_in_place_left
	delay_16
	delay_16
	walk_in_place_down
	delay_16
	delay_16
	walk_up
	walk_up
	walk_up
	delay_16
	delay_16
	step_end

DesertRuins_Movement_WalktoGold:
	emote_question_mark
	delay_16
	delay_16
	delay_16
	delay_16
	walk_in_place_left
	delay_16
	walk_in_place_right
	delay_16
	player_run_down
	player_run_down
	player_run_down
	player_run_right
	player_run_right
	player_run_right
	player_run_right
	face_right
	step_end

DesertRuins_Movement_WalktoPlayer:
	walk_down
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	step_end

DesertRuins_Movement_WatchGoldLeave:
	delay_16
	face_down
	delay_16
	delay_16
	face_left
	step_end

DesertRuins_Movement_GoldLeave:
	walk_down
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	step_end

DesertRuins_Movement_CelebiJumpRight:
	jump_in_place_right
	step_end

DesertRuins_On_Frame_Text_0:
	.string "...$"

DesertRuins_Text_GoldDefeat::
	.string "...!$"
