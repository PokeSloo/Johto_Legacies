MeteorFalls_StevensCave_MapScripts::
	.byte 0


MeteorFalls_StevensCave_EventScript_HoOh::
	lock
	waitse
	playmoncry SPECIES_HO_OH, CRY_MODE_NORMAL
	setvar VAR_0x8004, 1
	setvar VAR_0x8005, 1
	setvar VAR_0x8006, 8
	setvar VAR_0x8007, 5
	special ShakeCamera
	waitstate
	waitmoncry
	setwildbattle SPECIES_HO_OH, 70
	dowildbattle
	removeobject 1
	setflag FLAG_CAUGHT_HO_OH
	release
	end

