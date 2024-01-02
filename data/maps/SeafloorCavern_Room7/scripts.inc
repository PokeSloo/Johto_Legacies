SeafloorCavern_Room7_MapScripts::
	.byte 0


SeafloorCavern_Room7_EventScript_Lugia::
	lock
	waitse
	playmoncry SPECIES_LUGIA, CRY_MODE_NORMAL
	setvar VAR_0x8004, 1
	setvar VAR_0x8005, 1
	setvar VAR_0x8006, 8
	setvar VAR_0x8007, 5
	special ShakeCamera
	waitstate
	waitmoncry
	applymovement 1, SeafloorCavern_Room7_Movement_LugiaFlyAway
	waitmovement 0
	delay 90
	setflag FLAG_HIDE_AWAKENED_LUGIA
	addvar VAR_ECRUTEAK_STATE, 1
	warpsilent MAP_MAUVILLE_CITY, 34, 16
	waitstate
	release
	end


SeafloorCavern_Room7_Movement_LugiaFlyAway:
	lock_facing_direction
	walk_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	unlock_facing_direction
	step_end
