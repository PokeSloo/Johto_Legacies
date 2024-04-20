EverGrandeCity_SidneysRoom_MapScripts::
	map_script MAP_SCRIPT_ON_LOAD, EverGrandeCity_SidneysRoom_OnLoad
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, EverGrandeCity_SidneysRoom_OnWarp
	map_script MAP_SCRIPT_ON_FRAME_TABLE, EverGrandeCity_SidneysRoom_OnFrame
	.byte 0

EverGrandeCity_SidneysRoom_OnLoad:
	call_if_set FLAG_DEFEATED_ELITE_4_SIDNEY, EverGrandeCity_SidneysRoom_EventScript_ResetAdvanceToNextRoom
	call_if_eq VAR_ELITE_4_STATE, 1, EverGrandeCity_SidneysRoom_EventScript_CloseDoor
	end

EverGrandeCity_SidneysRoom_EventScript_ResetAdvanceToNextRoom::
	call PokemonLeague_EliteFour_EventScript_ResetAdvanceToNextRoom
	return

EverGrandeCity_SidneysRoom_EventScript_CloseDoor::
	call PokemonLeague_EliteFour_EventScript_CloseDoor
	return

EverGrandeCity_SidneysRoom_OnWarp:
	map_script_2 VAR_TEMP_1, 0, EverGrandeCity_SidneysRoom_EventScript_PlayerTurnNorth
	.2byte 0

EverGrandeCity_SidneysRoom_EventScript_PlayerTurnNorth::
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
	end

EverGrandeCity_SidneysRoom_OnFrame:
	map_script_2 VAR_ELITE_4_STATE, 0, EverGrandeCity_SidneysRoom_EventScript_WalkInCloseDoor
	.2byte 0

EverGrandeCity_SidneysRoom_EventScript_WalkInCloseDoor::
	lockall
	call PokemonLeague_EliteFour_EventScript_WalkInCloseDoor
	setvar VAR_ELITE_4_STATE, 1
	releaseall
	end

EverGrandeCity_SidneysRoom_EventScript_Sidney::
	lock
	faceplayer
	goto_if_set FLAG_DEFEATED_ALL_GYM_LEADERS_2ND_TIME, EverGrandeCity_SidneysRoom_EventScript_SecondJanine
	goto_if_set FLAG_DEFEATED_ELITE_4_SIDNEY, EverGrandeCity_SidneysRoom_EventScript_PostBattleSpeech
	playbgm MUS_HG_ENCOUNTER_KIMONO_GIRL, FALSE
	msgbox EverGrandeCity_SidneysRoom_Text_IntroSpeech, MSGBOX_DEFAULT
	setvar VAR_MUGSHOT_ID, MUGSHOT_SIDNEY
	trainerbattle_no_intro TRAINER_SIDNEY, EverGrandeCity_SidneysRoom_Text_Defeat
	goto EverGrandeCity_SidneysRoom_EventScript_Defeated
	end


EverGrandeCity_SidneysRoom_EventScript_SecondJanine::
	goto_if_set FLAG_DEFEATED_ELITE_4_SIDNEY, EverGrandeCity_SidneysRoom_EventScript_PostBattleSpeech2
	playbgm MUS_HG_ENCOUNTER_KIMONO_GIRL, FALSE
	msgbox EverGrandeCity_SidneysRoom_EventScript_SecondJanine_Text_0
	setvar VAR_MUGSHOT_ID, MUGSHOT_SIDNEY
	trainerbattle_no_intro TRAINER_ROXANNE_3, EverGrandeCity_SidneysRoom_Text_SecondDefeat
	setflag FLAG_DEFEATED_ELITE_4_SIDNEY
	setflag FLAG_HIDE_FERALIGATR_POKEMON_LEAGUE
	setflag FLAG_HIDE_SILVER_POKEMON_LEAGUE
	clearflag FLAG_HIDE_RED_POKEMON_LEAGUE
	call PokemonLeague_EliteFour_SetAdvanceToNextRoomMetatiles
	msgbox EverGrandeCity_SidneysRoom_EventScript_SecondJanine_Text_1
	release
	end


EverGrandeCity_SidneysRoom_EventScript_PostBattleSpeech2::
	msgbox EverGrandeCity_SidneysRoom_EventScript_PostBattleSpeech2_Text_0
	release
	end


EverGrandeCity_SidneysRoom_EventScript_PostBattleSpeech::
	msgbox EverGrandeCity_SidneysRoom_Text_PostBattleSpeech, MSGBOX_DEFAULT
	release
	end


EverGrandeCity_SidneysRoom_EventScript_Defeated::
	setflag FLAG_DEFEATED_ELITE_4_SIDNEY
	call PokemonLeague_EliteFour_SetAdvanceToNextRoomMetatiles
	msgbox EverGrandeCity_SidneysRoom_Text_PostBattleSpeech, MSGBOX_DEFAULT
	release
	end


EverGrandeCity_SidneysRoom_Text_IntroSpeech:
	.string "Welcome to the POKéMON League,\n"
	.string "challenger.\p"
	.string "I am JANINE, the Poisonous Ninja\n"
	.string "Master, and first member of the Elite\l"
	.string "Four!\p"
	.string "POISON-types may seem sneaky and\n"
	.string "underhanded, and that's because they\l"
	.string "are!\p"
	.string "A ninja uses underhanded tactics to\n"
	.string "ensure a quick victory.\p"
	.string "Allow me to demonstrate!$"

EverGrandeCity_SidneysRoom_Text_Defeat:
	.string "I'm impressed that you managed to\n"
	.string "overcome my underhanded tactics.\p"
	.string "You may not make a good ninja, but you\n"
	.string "are certainly an excellent TRAINER!$"

EverGrandeCity_SidneysRoom_Text_PostBattleSpeech:
	.string "Very well, you may advance.\p"
	.string "If you are prepared for another battle,\n"
	.string "then enter the next room.$"

EverGrandeCity_SidneysRoom_EventScript_SecondJanine_Text_0:
	.string "Welcome back to the POKéMON League,\n"
	.string "{PLAYER}.\p"
	.string "You may have overcome my underhanded\n"
	.string "tactics in our last battle, but don't\l"
	.string "expect the same result this time!\p"
	.string "A ninja may retreat, but we never give\n"
	.string "up.\p"
	.string "Allow me to demonstrate!$"

EverGrandeCity_SidneysRoom_EventScript_SecondJanine_Text_1:
	.string "You should know the drill by now.\p"
	.string "Prepare yourself and your POKéMON,\n"
	.string "then enter the next room.$"

EverGrandeCity_SidneysRoom_EventScript_PostBattleSpeech2_Text_0:
	.string "Go on, the rest of the Elite Four await.$"

EverGrandeCity_SidneysRoom_Text_SecondDefeat::
	.string "I see, it seems you have improved your\n"
	.string "own tactics as well.\p"
	.string "Perhaps you would make a good ninja\n"
	.string "afterall.$"
