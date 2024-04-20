EverGrandeCity_DrakesRoom_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, EverGrandeCity_DrakesRoom_OnFrame
	map_script MAP_SCRIPT_ON_LOAD, EverGrandeCity_DrakesRoom_OnLoad
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, EverGrandeCity_SidneysRoom_OnWarp
	.byte 0

@ Unused, Drake uses Sidneys identical OnWarp for some reason
EverGrandeCity_DrakesRoom_OnWarp:
	map_script_2 VAR_TEMP_1, 0, EverGrandeCity_DrakesRoom_EventScript_PlayerTurnNorth
	.2byte 0

EverGrandeCity_DrakesRoom_EventScript_PlayerTurnNorth::
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
	end

EverGrandeCity_DrakesRoom_OnFrame:
	map_script_2 VAR_ELITE_4_STATE, 3, EverGrandeCity_DrakesRoom_EventScript_WalkInCloseDoor
	.2byte 0

EverGrandeCity_DrakesRoom_EventScript_WalkInCloseDoor::
	lockall
	call PokemonLeague_EliteFour_EventScript_WalkInCloseDoor
	setvar VAR_ELITE_4_STATE, 4
	releaseall
	end

EverGrandeCity_DrakesRoom_OnLoad:
	call_if_set FLAG_DEFEATED_ELITE_4_DRAKE, EverGrandeCity_DrakesRoom_EventScript_ResetAdvanceToNextRoom
	call_if_eq VAR_ELITE_4_STATE, 4, EverGrandeCity_DrakesRoom_EventScript_CloseDoor
	end

EverGrandeCity_DrakesRoom_EventScript_ResetAdvanceToNextRoom::
	call PokemonLeague_EliteFour_EventScript_ResetAdvanceToNextRoom
	return

EverGrandeCity_DrakesRoom_EventScript_CloseDoor::
	call PokemonLeague_EliteFour_EventScript_CloseDoor
	return

EverGrandeCity_DrakesRoom_EventScript_Drake::
	lock
	faceplayer
    goto_if_set FLAG_DEFEATED_ALL_GYM_LEADERS_2ND_TIME, EverGrandeCity_DrakesRoom_EventScript_SecondJasmine
	goto_if_set FLAG_DEFEATED_ELITE_4_DRAKE, EverGrandeCity_DrakesRoom_EventScript_PostBattleSpeech
	playbgm MUS_ENCOUNTER_ELITE_FOUR, FALSE
	msgbox EverGrandeCity_DrakesRoom_Text_IntroSpeech, MSGBOX_DEFAULT
	setvar VAR_MUGSHOT_ID, MUGSHOT_DRAKE
	trainerbattle_no_intro TRAINER_DRAKE, EverGrandeCity_DrakesRoom_Text_Defeat
	goto EverGrandeCity_DrakesRoom_EventScript_Defeated
	end

EverGrandeCity_DrakesRoom_EventScript_SecondJasmine::
	goto_if_set FLAG_DEFEATED_ELITE_4_DRAKE, EverGrandeCity_DrakesRoom_EventScript_PostBattleSpeech2
	playbgm MUS_ENCOUNTER_ELITE_FOUR, FALSE
	msgbox EverGrandeCity_DrakesRoom_EventScript_SecondJasmine_Text_0
	setvar VAR_MUGSHOT_ID, MUGSHOT_DRAKE
	trainerbattle_no_intro TRAINER_BRAWLY_3, EverGrandeCity_DrakesRoom_Text_SecondDefeat
	setflag FLAG_DEFEATED_ELITE_4_DRAKE
	call PokemonLeague_EliteFour_SetAdvanceToNextRoomMetatiles
	msgbox EverGrandeCity_DrakesRoom_Text_SecondJasminePost
	release
	end


EverGrandeCity_DrakesRoom_EventScript_PostBattleSpeech2::
	msgbox EverGrandeCity_DrakesRoom_Text_SecondJasminePost
	release
	end


EverGrandeCity_DrakesRoom_EventScript_PostBattleSpeech::
	msgbox EverGrandeCity_DrakesRoom_Text_PostBattleSpeech, MSGBOX_DEFAULT
	release
	end

EverGrandeCity_DrakesRoom_EventScript_Defeated::
	setflag FLAG_DEFEATED_ELITE_4_DRAKE
	call PokemonLeague_EliteFour_SetAdvanceToNextRoomMetatiles
	msgbox EverGrandeCity_DrakesRoom_Text_PostBattleSpeech, MSGBOX_DEFAULT
	release
	end

EverGrandeCity_DrakesRoom_Text_IntroSpeech:
	.string "You've done well to make it this far,\n"
	.string "TRAINER.\p"
	.string "Please, allow me to introduce myself.\p"
	.string "I am the final member of the Elite Four,\n"
	.string "and master of STEEL-type POKéMON,\l"
	.string "JASMINE!\p"
	.string "I'm sure you've been through a lot on\n"
	.string "your journey here, but unfortunately\l"
	.string "for you, your run ends now!$"

EverGrandeCity_DrakesRoom_Text_Defeat:
	.string "That was a wonderful battle!\p"
	.string "The iron-clad bond you share with your\n"
	.string "POKéMON has undoubtedly led to your\l"
	.string "success here today.$"

EverGrandeCity_DrakesRoom_Text_PostBattleSpeech:
	.string "May that same bond carry you forward\n"
	.string "to even greater heights!\p"
	.string "...\p"
	.string "You know, your calm confidence reminds\n"
	.string "me of another TRAINER I met years ago.\p"
	.string "If there's one thing I've learned after\n"
	.string "years of battling, it's that you should\l"
	.string "always believe in yourself without\l"
	.string "becoming too overconfident.\p"
	.string "Go on now, the Champion is waiting.$"

EverGrandeCity_DrakesRoom_EventScript_SecondJasmine_Text_0:
	.string "You've done well to make it this far,\n"
	.string "{PLAYER}.\p"
	.string "Our previous encounter has pushed us\n"
	.string "Elite Four members to surpass our own\l"
	.string "limits, and become an iron-clad wall for\l"
	.string "the POKéMON League!\p"
	.string "Now, you will learn that this wall will\n"
	.string "never break down!$"

EverGrandeCity_DrakesRoom_Text_SecondJasminePost::
	.string "The bond you share with your POKéMON is\n"
	.string "commendable.\p"
	.string "It's clear that bond will never be\n"
	.string "broken.\p"
	.string "Go now, the Champion is waiting.$"

EverGrandeCity_DrakesRoom_Text_SecondDefeat::
	.string "You continue to exceed my\n"
	.string "expectations, {PLAYER}.\p"
	.string "I thought we were impenetrable, but you\n"
	.string "continue to break through our\l"
	.string "defenses with ease.$"
