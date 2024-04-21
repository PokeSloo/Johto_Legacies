MtPyre_Summit_MapScripts::
	map_script MAP_SCRIPT_ON_LOAD, MtPyre_Summit_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

MtPyre_Summit_MapScripts_MAP_SCRIPT_ON_LOAD:
	goto_if_set FLAG_RAIKOU_BRAILLE_DOOR_OPEN, MtPyre_Summit_MapScripts_MAP_SCRIPT_ON_LOAD_2
MtPyre_Summit_MapScripts_MAP_SCRIPT_ON_LOAD_1:
	goto_if_set FLAG_ENTEI_BRAILLE_DOOR_OPEN, MtPyre_Summit_MapScripts_MAP_SCRIPT_ON_LOAD_5
MtPyre_Summit_MapScripts_MAP_SCRIPT_ON_LOAD_4:
	goto_if_set FLAG_SUICUNE_BRAILLE_DOOR_OPEN, MtPyre_Summit_MapScripts_MAP_SCRIPT_ON_LOAD_8
MtPyre_Summit_MapScripts_MAP_SCRIPT_ON_LOAD_7:
	end

MtPyre_Summit_MapScripts_MAP_SCRIPT_ON_LOAD_2:
	setmetatile 7, 43, 0x263, TRUE
	setmetatile 8, 43, 0x263, TRUE
	setmetatile 7, 44, 0x280, FALSE
	setmetatile 8, 44, 0x280, FALSE
	goto MtPyre_Summit_MapScripts_MAP_SCRIPT_ON_LOAD_1

MtPyre_Summit_MapScripts_MAP_SCRIPT_ON_LOAD_5:
	setmetatile 7, 30, 0x263, TRUE
	setmetatile 8, 30, 0x263, TRUE
	setmetatile 7, 31, 0x280, FALSE
	setmetatile 8, 31, 0x280, FALSE
	goto MtPyre_Summit_MapScripts_MAP_SCRIPT_ON_LOAD_4

MtPyre_Summit_MapScripts_MAP_SCRIPT_ON_LOAD_8:
	setmetatile 7, 17, 0x263, TRUE
	setmetatile 8, 17, 0x263, TRUE
	setmetatile 7, 18, 0x280, FALSE
	setmetatile 8, 18, 0x280, FALSE
	goto MtPyre_Summit_MapScripts_MAP_SCRIPT_ON_LOAD_7


MtPyre_Summit_EventScript_RaikouBraille::
	lock
	goto_if_set FLAG_RAIKOU_BRAILLE_DOOR_OPEN, MtPyre_Summit_EventScript_RaikouBraille_1
	braillemsgbox MtPyre_Summit_Text_RaikouBraille
	waitmessage
	closemessage
	specialvar VAR_RESULT, ScriptGetLeadMonSpecies
	compare VAR_RESULT, SPECIES_RAIKOU
	goto_if_eq MtPyre_Summit_EventScript_RaikouBraille_4
	release
	end

MtPyre_Summit_EventScript_RaikouBraille_1:
	braillemsgbox MtPyre_Summit_Text_RaikouBraille
	release
	end

MtPyre_Summit_EventScript_RaikouBraille_4:
	fadeoutbgm 1
	playse SE_M_ROCK_THROW
	setvar VAR_0x8004, 1
	setvar VAR_0x8005, 1
	setvar VAR_0x8006, 12
	setvar VAR_0x8007, 5
	special ShakeCamera
	waitstate
	setmetatile 7, 43, 0x263, TRUE
	setmetatile 8, 43, 0x263, TRUE
	setmetatile 7, 44, 0x280, FALSE
	setmetatile 8, 44, 0x280, FALSE
	special DrawWholeMapView
	fadeinbgm 1
	setflag FLAG_RAIKOU_BRAILLE_DOOR_OPEN
	release
	end


MtPyre_Summit_EventScript_EnteiBraille::
	lock
	goto_if_set FLAG_ENTEI_BRAILLE_DOOR_OPEN, MtPyre_Summit_EventScript_EnteiBraille_1
	braillemsgbox MtPyre_Summit_Text_EnteiBraille
	waitmessage
	closemessage
	specialvar VAR_RESULT, ScriptGetLeadMonSpecies
	compare VAR_RESULT, SPECIES_ENTEI
	goto_if_eq MtPyre_Summit_EventScript_EnteiBraille_4
	release
	end

MtPyre_Summit_EventScript_EnteiBraille_1:
	braillemsgbox MtPyre_Summit_Text_EnteiBraille
	release
	end

MtPyre_Summit_EventScript_EnteiBraille_4:
	fadeoutbgm 1
	playse SE_M_ROCK_THROW
	setvar VAR_0x8004, 1
	setvar VAR_0x8005, 1
	setvar VAR_0x8006, 12
	setvar VAR_0x8007, 5
	special ShakeCamera
	waitstate
	setmetatile 7, 30, 0x263, TRUE
	setmetatile 8, 30, 0x263, TRUE
	setmetatile 7, 31, 0x280, FALSE
	setmetatile 8, 31, 0x280, FALSE
	special DrawWholeMapView
	fadeinbgm 1
	setflag FLAG_ENTEI_BRAILLE_DOOR_OPEN
	release
	end


MtPyre_Summit_EventScript_SuicuneBraille::
	lock
	goto_if_set FLAG_SUICUNE_BRAILLE_DOOR_OPEN, MtPyre_Summit_EventScript_SuicuneBraille_1
	braillemsgbox MtPyre_Summit_Text_SuicuneBraille
	waitmessage
	closemessage
	specialvar VAR_RESULT, ScriptGetLeadMonSpecies
	compare VAR_RESULT, SPECIES_SUICUNE
	goto_if_eq MtPyre_Summit_EventScript_SuicuneBraille_4
	release
	end

MtPyre_Summit_EventScript_SuicuneBraille_1:
	braillemsgbox MtPyre_Summit_Text_SuicuneBraille
	release
	end

MtPyre_Summit_EventScript_SuicuneBraille_4:
	fadeoutbgm 1
	playse SE_M_ROCK_THROW
	setvar VAR_0x8004, 1
	setvar VAR_0x8005, 1
	setvar VAR_0x8006, 12
	setvar VAR_0x8007, 5
	special ShakeCamera
	waitstate
	setmetatile 7, 17, 0x263, TRUE
	setmetatile 8, 17, 0x263, TRUE
	setmetatile 7, 18, 0x280, FALSE
	setmetatile 8, 18, 0x280, FALSE
	special DrawWholeMapView
	fadeinbgm 1
	setflag FLAG_SUICUNE_BRAILLE_DOOR_OPEN
	release
	end


MtPyre_Summit_EventScript_DialgaAlter::
	lock
	goto_if_set FLAG_BATTLED_DIALGA, MtPyre_Summit_EventScript_DialgaAlter_1
	braillemsgbox MtPyre_Summit_Text_DialgaBraille
	waitmessage
	closemessage
	delay 30
	waitse
	playmoncry SPECIES_DIALGA, CRY_MODE_NORMAL
	msgbox MtPyre_Summit_EventScript_DialgaAlter_Text_0
	waitmessage
	waitmoncry
	setwildbattle SPECIES_DIALGA, 70
	dowildbattle
	setflag FLAG_BATTLED_DIALGA
	release
	end

MtPyre_Summit_EventScript_DialgaAlter_1:
	braillemsgbox MtPyre_Summit_Text_DialgaBraille
	release
	end


MtPyre_Summit_EventScript_PalkiaAlter::
	lock
	goto_if_set FLAG_BATTLED_PALKIA, MtPyre_Summit_EventScript_PalkiaAlter_1
	braillemsgbox MtPyre_Summit_Text_PalkiaBraille
	waitmessage
	closemessage
	delay 30
	waitse
	playmoncry SPECIES_PALKIA, CRY_MODE_NORMAL
	msgbox MtPyre_Summit_EventScript_PalkiaAlter_Text_0
	waitmessage
	waitmoncry
	setwildbattle SPECIES_PALKIA, 70
	dowildbattle
	setflag FLAG_BATTLED_PALKIA
	release
	end

MtPyre_Summit_EventScript_PalkiaAlter_1:
	braillemsgbox MtPyre_Summit_Text_PalkiaBraille
	release
	end


MtPyre_Summit_EventScript_GiratinaAlter::
	lock
	goto_if_set FLAG_BATTLED_GIRATINA, MtPyre_Summit_EventScript_GiratinaAlter_1
	braillemsgbox MtPyre_Summit_Text_GiratinaBraille
	waitmessage
	closemessage
	delay 30
	waitse
	playmoncry SPECIES_GIRATINA, CRY_MODE_NORMAL
	msgbox MtPyre_Summit_EventScript_GiratinaAlter_Text_0
	waitmessage
	waitmoncry
	setwildbattle SPECIES_GIRATINA, 70
	dowildbattle
	setflag FLAG_BATTLED_GIRATINA
	release
	end

MtPyre_Summit_EventScript_GiratinaAlter_1:
	braillemsgbox MtPyre_Summit_Text_GiratinaBraille
	release
	end


MtPyre_Summit_EventScript_ArceusAlter::
	lock
	goto_if_set FLAG_BATTLED_ARCEUS, MtPyre_Summit_EventScript_ArceusAlter_1
	braillemsgbox MtPyre_Summit_Text_ArceusBraille
	waitmessage
	closemessage
	delay 30
	waitse
	playmoncry SPECIES_ARCEUS, CRY_MODE_NORMAL
	msgbox MtPyre_Summit_EventScript_ArceusAlter_Text_0
	waitmessage
	waitmoncry
	setwildbattle SPECIES_ARCEUS, 80
	dowildbattle
	setflag FLAG_BATTLED_ARCEUS
	release
	end

MtPyre_Summit_EventScript_ArceusAlter_1:
	braillemsgbox MtPyre_Summit_Text_ArceusBraille
	release
	end


MtPyre_Summit_Text_RaikouBraille:
    .braille "RESURRECTED\n"
    .braille "THUNDER\n"
    .braille "SHALL PASS.$"

MtPyre_Summit_Text_EnteiBraille:
    .braille "RESURRECTED\n"
    .braille "FIRE\n"
    .braille "SHALL PASS.$"

MtPyre_Summit_Text_SuicuneBraille:
    .braille "RESURRECTED\n"
    .braille "WATER\n"
    .braille "SHALL PASS.$"

MtPyre_Summit_Text_DialgaBraille:
    .braille "UNAVOIDABLE\n"
    .braille "ENDER.$"

MtPyre_Summit_Text_PalkiaBraille:
    .braille "INDESCRIBABLE\n"
    .braille "VASTNESS.$"

MtPyre_Summit_Text_GiratinaBraille:
    .braille "OTHERWORLDLY\n"
    .braille "CHAOS.$"

MtPyre_Summit_Text_ArceusBraille:
    .braille "ALPHA AND\n"
    .braille "OMEGA.$"

MtPyre_Summit_EventScript_DialgaAlter_Text_0:
	.string "Gugyugubah!$"

MtPyre_Summit_EventScript_PalkiaAlter_Text_0:
	.string "Gagyagyaah!$"

MtPyre_Summit_EventScript_GiratinaAlter_Text_0:
	.string "Bishaan!$"

MtPyre_Summit_EventScript_ArceusAlter_Text_0:
	.string "Dodogyuuun!$"
