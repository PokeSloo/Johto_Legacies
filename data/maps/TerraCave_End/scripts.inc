.set LOCALID_GROUDON, 1

TerraCave_End_MapScripts::
	.byte 0

TerraCave_End_EventScript_Groudon::
	lockall
	goto_if_set FLAG_DEFEATED_GROUDON, TerraCave_End_EventScript_End
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
	waitmovement 0
	applymovement LOCALID_GROUDON, TerraCave_End_Movement_GroudonApproach
	waitmovement 0
	waitse
	playmoncry SPECIES_GROUDON, CRY_MODE_ENCOUNTER
	delay 40
	waitmoncry
	setvar VAR_LAST_TALKED, LOCALID_GROUDON
	setwildbattle SPECIES_GROUDON, 70
	special BattleSetup_StartLegendaryBattle
	waitstate
	specialvar VAR_RESULT, GetBattleOutcome
	goto_if_eq VAR_RESULT, B_OUTCOME_WON, TerraCave_End_EventScript_DefeatedGroudon
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, TerraCave_End_EventScript_RanFromGroudon
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, TerraCave_End_EventScript_RanFromGroudon
	removeobject 1
	setflag FLAG_HIDE_TERRA_CAVE_GROUDON
	setflag FLAG_DEFEATED_GROUDON
	clearflag FLAG_GROUDON_DROUGHT_WEATHER
	releaseall
	end

TerraCave_End_EventScript_End::
	releaseall
	end

TerraCave_End_EventScript_DefeatedGroudon::
	removeobject 1
	setflag FLAG_HIDE_TERRA_CAVE_GROUDON
	setflag FLAG_DEFEATED_GROUDON
	clearflag FLAG_GROUDON_DROUGHT_WEATHER
	releaseall
	end

TerraCave_End_EventScript_RanFromGroudon::
	fadescreen FADE_TO_BLACK
	removeobject 1
	setflag FLAG_HIDE_TERRA_CAVE_GROUDON
	setflag FLAG_DEFEATED_GROUDON
	clearflag FLAG_GROUDON_DROUGHT_WEATHER
	fadescreen FADE_FROM_BLACK
	msgbox TerraCave_End_Text_GroundonRan, MSGBOX_DEFAULT
	releaseall
	end

TerraCave_End_Text_GroundonRan:
	.string "The POKéMON ran away.$"

TerraCave_End_Movement_GroudonApproach:
	init_affine_anim
	walk_down_start_affine
	delay_16
	delay_16
	walk_down_affine
	delay_16
	delay_16
	walk_down_affine
	step_end

