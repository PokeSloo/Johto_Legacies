GraniteCave_B2F_MapScripts::
	.byte 0

GraniteCave_B2F_EventScript_Dawson::
	trainerbattle_single TRAINER_DAWSON, Route116_Text_DawsonIntro, Route116_Text_DawsonDefeat
	msgbox Route116_Text_DawsonPostBattle, MSGBOX_AUTOCLOSE
	end

GraniteCave_B2F_EventScript_Devan::
	trainerbattle_single TRAINER_DEVAN, Route116_Text_DevanIntro, Route116_Text_DevanDefeat
	msgbox Route116_Text_DevanPostBattle, MSGBOX_AUTOCLOSE
	end

GraniteCave_B2F_EventScript_Johnson::
	trainerbattle_single TRAINER_JOHNSON, Route116_Text_JohnsonIntro, Route116_Text_JohnsonDefeat
	msgbox Route116_Text_JohnsonPostBattle, MSGBOX_AUTOCLOSE
	end

GraniteCave_B2F_EventScript_Lapras::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_LAPRAS, CRY_MODE_NORMAL
	msgbox GraniteCave_B2F_EventScript_Lapras_Text_0
	waitmessage
	waitmoncry
	setwildbattle SPECIES_LAPRAS, 35
	dowildbattle
	specialvar VAR_RESULT, GetBattleOutcome
	goto_if_eq VAR_RESULT, B_OUTCOME_WON, GraniteCave_B2F_EventScript_DefeatedLapras
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, GraniteCave_B2F_EventScript_DefeatedLapras
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, GraniteCave_B2F_EventScript_DefeatedLapras
	removeobject 10
	setflag FLAG_HIDE_UNION_CAVE_LAPRAS
	release
	end


GraniteCave_B2F_EventScript_DefeatedLapras::
	removeobject 10
	setflag FLAG_HIDE_UNION_CAVE_LAPRAS
	release
	end


GraniteCave_B2F_EventScript_ItemTMRest::
	finditem ITEM_TM44
	end


GraniteCave_B2F_EventScript_Lapras_Text_0:
	.string "Lapraaah!$"
