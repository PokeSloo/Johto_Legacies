NavelRock_Top_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, NavelRock_Top_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

NavelRock_Top_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	goto_if_set FLAG_DEFEATED_RAYQUAZA, NavelRock_Top_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
NavelRock_Top_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
	end

NavelRock_Top_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
	setweather WEATHER_SNOW
	goto NavelRock_Top_MapScripts_MAP_SCRIPT_ON_TRANSITION_1


NavelRock_Top_EventScript_Rayquaza::
	lock
	waitse
	playmoncry SPECIES_RAYQUAZA, CRY_MODE_NORMAL
	setvar VAR_0x8004, 1
	setvar VAR_0x8005, 1
	setvar VAR_0x8006, 8
	setvar VAR_0x8007, 5
	special ShakeCamera
	waitstate
	waitmoncry
	setwildbattle SPECIES_RAYQUAZA, 70
	special BattleSetup_StartLegendaryBattle
	waitstate
	specialvar VAR_RESULT, GetBattleOutcome
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, NavelRock_Top_EventScript_RanRayquaza
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, NavelRock_Top_EventScript_RanRayquaza
	removeobject 1
	setweather WEATHER_SNOW
	doweather
	delay 30
	msgbox NavelRock_Top_EventScript_Rayquaza_Text_0
	waitmessage
	closemessage
	setflag FLAG_DEFEATED_RAYQUAZA
	setflag FLAG_TERRA_CAVE_OPEN
	setflag FLAG_KYOGRE_RAINY_WEATHER
	setflag FLAG_GROUDON_DROUGHT_WEATHER
	release
	end


NavelRock_Top_EventScript_RanRayquaza::
	removeobject 1
	setweather WEATHER_SNOW
	doweather
	delay 30
	msgbox NavelRock_Top_EventScript_RanRayquaza_Text_0
	waitmessage
	closemessage
	setflag FLAG_DEFEATED_RAYQUAZA
	release
	end


NavelRock_Top_EventScript_Rayquaza_Text_0:
	.string "A distant rumbling could be heard\n"
	.string "across Johto.$"

NavelRock_Top_EventScript_RanRayquaza_Text_0:
	.string "The POKéMON flew away.$"
