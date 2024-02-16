.set LOCALID_KYOGRE, 1

MarineCave_End_MapScripts::
	.byte 0

MarineCave_End_EventScript_Kyogre::
	lockall
	goto_if_set FLAG_DEFEATED_KYOGRE, TerraCave_End_EventScript_End
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
	waitmovement 0
	applymovement LOCALID_KYOGRE, MarineCave_End_Movement_KyogreApproach
	waitmovement 0
	waitse
	playmoncry SPECIES_KYOGRE, CRY_MODE_ENCOUNTER
	delay 40
	waitmoncry
	setvar VAR_LAST_TALKED, LOCALID_KYOGRE
	setwildbattle SPECIES_KYOGRE, 70
	special BattleSetup_StartLegendaryBattle
	waitstate
	specialvar VAR_RESULT, GetBattleOutcome
	goto_if_eq VAR_RESULT, B_OUTCOME_WON, MarineCave_End_EventScript_DefeatedKyogre
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, MarineCave_End_EventScript_RanFromKyogre
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, MarineCave_End_EventScript_RanFromKyogre
	removeobject 1
	setflag FLAG_HIDE_MARINE_CAVE_KYOGRE
	setflag FLAG_DEFEATED_KYOGRE
	clearflag FLAG_KYOGRE_RAINY_WEATHER
	releaseall
	end

MarineCave_End_EventScript_DefeatedKyogre::
	removeobject 1
	setflag FLAG_HIDE_MARINE_CAVE_KYOGRE
	setflag FLAG_DEFEATED_KYOGRE
	clearflag FLAG_KYOGRE_RAINY_WEATHER
	releaseall
	end

MarineCave_End_EventScript_RanFromKyogre::
	fadescreen FADE_TO_BLACK
	removeobject 1
	setflag FLAG_HIDE_MARINE_CAVE_KYOGRE
	setflag FLAG_DEFEATED_KYOGRE
	clearflag FLAG_KYOGRE_RAINY_WEATHER
	fadescreen FADE_FROM_BLACK
	msgbox TerraCave_End_Text_GroundonRan, MSGBOX_DEFAULT
	releaseall
	end

MarineCave_End_Movement_KyogreApproach:
	init_affine_anim
	walk_down_start_affine
	delay_16
	delay_16
	walk_down_affine
	delay_16
	delay_16
	walk_down_affine
	step_end

