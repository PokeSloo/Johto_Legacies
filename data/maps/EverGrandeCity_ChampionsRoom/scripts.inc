EverGrandeCity_ChampionsRoom_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, EverGrandeCity_ChampionsRoom_OnTransition
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, EverGrandeCity_ChampionsRoom_OnWarp
	map_script MAP_SCRIPT_ON_FRAME_TABLE, EverGrandeCity_ChampionsRoom_OnFrame
	.byte 0

EverGrandeCity_ChampionsRoom_OnTransition:
	call Common_EventScript_SetupRivalGfxId
	end

EverGrandeCity_ChampionsRoom_OnWarp:
	map_script_2 VAR_TEMP_1, 0, EverGrandeCity_ChampionsRoom_EventScript_PlayerTurnNorth
	.2byte 0

EverGrandeCity_ChampionsRoom_EventScript_PlayerTurnNorth::
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
	end

EverGrandeCity_ChampionsRoom_OnFrame:
	map_script_2 VAR_TEMP_1, 0, EverGrandeCity_ChampionsRoom_EventScript_EnterRoom
	.2byte 0

EverGrandeCity_ChampionsRoom_EventScript_EnterRoom::
	lockall
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp4
	waitmovement 0
	delay 40
	applymovement OBJ_EVENT_ID_PLAYER, EverGrandeCity_ChampionsRoom_Movement_PlayerApproachWallace
	waitmovement 0
	setvar VAR_TEMP_1, 1
	goto EverGrandeCity_ChampionsRoom_EventScript_Wallace
	releaseall
	end

EverGrandeCity_ChampionsRoom_Movement_PlayerApproachWallace:
	walk_up
	walk_up
	step_end

EverGrandeCity_ChampionsRoom_EventScript_Wallace::
	goto_if_set FLAG_DEFEATED_ALL_GYM_LEADERS_2ND_TIME, EverGrandeCity_ChampionsRoom_EventScript_Red
	msgbox EverGrandeCity_ChampionsRoom_EventScript_Wallace_Text_0
	waitmessage
	playbgm MUS_ENCOUNTER_CHAMPION, FALSE
	msgbox EverGrandeCity_ChampionsRoom_EventScript_Wallace_Text_1
	setvar VAR_MUGSHOT_ID, MUGSHOT_CHAMPION
	trainerbattle_no_intro TRAINER_WALLACE, EverGrandeCity_ChampionsRoom_Text_Defeat
	goto EverGrandeCity_ChampionsRoom_EventScript_Defeated
	end


EverGrandeCity_ChampionsRoom_EventScript_Red::
	applymovement 3, EverGrandeCity_ChampionsRoom_Movement_StepDown
	waitmovement 0
	msgbox EverGrandeCity_ChampionsRoom_EventScript_Red_Text_0
	setvar VAR_MUGSHOT_ID, MUGSHOT_RED
	trainerbattle_no_intro TRAINER_BRAWLY_4, EverGrandeCity_ChampionsRoom_Text_RedDefeat
	playse SE_DOOR
	setmetatile 6, 1, METATILE_EliteFour_OpenDoorChampion_Frame, FALSE
	setmetatile 6, 2, METATILE_EliteFour_OpenDoorChampion_Opening, FALSE
	special DrawWholeMapView
	delay 30
	msgbox EverGrandeCity_ChampionsRoom_EventScript_Red_Text_0
	waitmessage
	closemessage
	setflag FLAG_DEFEATED_RED
	setflag FLAG_HIDE_SHANE_LAZULAN_POST_THORNE
	setvar VAR_GYM_LEADERS_ROUND2_COUNT, 10
	applymovement 3, EverGrandeCity_ChampionsRoom_Movement_WallaceExit
	applymovement OBJ_EVENT_ID_PLAYER, EverGrandeCity_ChampionsRoom_Movement_PlayerExit
	waitmovement 0
	clearflag FLAG_HIDE_SILVER_IN_HOUSE
	warp MAP_EVER_GRANDE_CITY_HALL_OF_FAME, 7, 16
	waitstate
	releaseall
	end


EverGrandeCity_ChampionsRoom_EventScript_Defeated::
	playse SE_DOOR
	setmetatile 6, 1, METATILE_EliteFour_OpenDoorChampion_Frame, FALSE
	setmetatile 6, 2, METATILE_EliteFour_OpenDoorChampion_Opening, FALSE
	special DrawWholeMapView
	delay 30
	applymovement 1, EverGrandeCity_ChampionsRoom_Movement_StepRight
	applymovement 2, EverGrandeCity_ChampionsRoom_Movement_StepLeft
	waitmovement 0
	msgbox EverGrandeCity_ChampionsRoom_EventScript_Defeated_Text_0
	waitmessage
	closemessage
	waitse
	playmoncry SPECIES_FERALIGATR, CRY_MODE_NORMAL
	waitmoncry
	playse SE_BALL_TRADE
	removeobject 2
	addobject 4
	waitse
	setflag FLAG_HIDE_FERALIGATR_POKEMON_LEAGUE
	delay 60
	removeobject 4
	delay 60
	applymovement 1, EverGrandeCity_ChampionsRoom_Movement_StepDown
	waitmovement 0
	msgbox EverGrandeCity_ChampionsRoom_EventScript_Defeated_Text_1
	waitmessage
	checkplayergender
	call_if_eq VAR_RESULT, MALE, EverGrandeCity_ChampionsRoom_EventScript_FutureMale
	call_if_eq VAR_RESULT, FEMALE, EverGrandeCity_ChampionsRoom_EventScript_FutureFemale
	applymovement 1, EverGrandeCity_ChampionsRoom_Movement_StepDown
	waitmovement 0
	msgbox EverGrandeCity_ChampionsRoom_EventScript_Defeated_Text_2
	waitmessage
	closemessage
	applymovement 1, EverGrandeCity_ChampionsRoom_Movement_WallaceExit
	applymovement OBJ_EVENT_ID_PLAYER, EverGrandeCity_ChampionsRoom_Movement_PlayerExit
	waitmovement 0
	clearflag FLAG_HIDE_SILVER_IN_HOUSE
	addvar VAR_CHERRYGROVE_STATE, 1
	warp MAP_EVER_GRANDE_CITY_HALL_OF_FAME, 7, 16
	waitstate
	releaseall
	end


EverGrandeCity_ChampionsRoom_EventScript_FutureMale::
	msgbox EverGrandeCity_ChampionsRoom_EventScript_FutureMale_Text_0
	return


EverGrandeCity_ChampionsRoom_EventScript_FutureFemale::
	msgbox EverGrandeCity_ChampionsRoom_EventScript_FutureFemale_Text_0
	return


EverGrandeCity_ChampionsRoom_Movement_StepRight:
	walk_in_place_right
	step_end

EverGrandeCity_ChampionsRoom_Movement_StepLeft:
	walk_in_place_left
	step_end

EverGrandeCity_ChampionsRoom_Movement_StepDown:
	walk_in_place_down
	step_end

EverGrandeCity_ChampionsRoom_Movement_PlayerExit:
	walk_up
	walk_up
	walk_up
	delay_16
	walk_up
	delay_8
	set_invisible
	step_end

EverGrandeCity_ChampionsRoom_Movement_WallaceExit:
	walk_up
	walk_up
	walk_up
	delay_8
	set_invisible
	step_end

EverGrandeCity_ChampionsRoom_EventScript_Wallace_Text_0:
	.string "DAD: I was wondering when you would\n"
	.string "show up, {PLAYER}.\p"
	.string "After SHANE challenged me, I figured\n"
	.string "you would be right behind him.\p"
	.string "...\p"
	.string "You know, I felt a great sense of pride\n"
	.string "when I arrived at the Rage Resort, and\l"
	.string "found that you and SHANE defeated\l"
	.string "Team Phoenix by working together.\p"
	.string "I know he can be difficult, but I\n"
	.string "believe he just needs someone to show\l"
	.string "him a better path forward, just as\l"
	.string "someone once did for me.$"

EverGrandeCity_ChampionsRoom_EventScript_Wallace_Text_1:
	.string "Now {PLAYER}, I do not intend to go\n"
	.string "easy on you.\p"
	.string "As the POKéMON League Champion, I must\n"
	.string "give it my all, and as your father, I\l"
	.string "hope you do the same.\p"
	.string "Prepare yourself!$"

EverGrandeCity_ChampionsRoom_EventScript_Red_Text_0:
	.string "...\n"
	.string "...$"

EverGrandeCity_ChampionsRoom_EventScript_Defeated_Text_0:
	.string "DAD: Thanks old friend, you fought well.$"

EverGrandeCity_ChampionsRoom_EventScript_Defeated_Text_1:
	.string "DAD: {PLAYER}, the people and\n"
	.string "POKéMON you've met along your journey\l"
	.string "have shaped you into the person you\l"
	.string "are today, but your journey is still far\l"
	.string "from over.\p"
	.string "You're still young, you have the rest of\n"
	.string "your life ahead of you.$"

EverGrandeCity_ChampionsRoom_EventScript_Defeated_Text_2:
	.string "Now then, please come with me.$"

EverGrandeCity_ChampionsRoom_EventScript_FutureMale_Text_0:
	.string "There's no telling what the future\n"
	.string "holds, and I can't wait to see the man\l"
	.string "you become.$"

EverGrandeCity_ChampionsRoom_EventScript_FutureFemale_Text_0:
	.string "There's no telling what the future\n"
	.string "holds, and I can't wait to see the\l"
	.string "woman you become.$"

EverGrandeCity_ChampionsRoom_Text_Defeat::
	.string "DAD: Well done, {PLAYER}.\p"
	.string "I gave that battle everything I had,\n"
	.string "and you still beat me.\p"
	.string "The deep bond you share with your\n"
	.string "POKéMON has pushed you to incredible\l"
	.string "heights.\p"
	.string "You are truly worthy of the title\n"
	.string "“Champion”.$"

EverGrandeCity_ChampionsRoom_Text_RedDefeat::
	.string "...!$"
