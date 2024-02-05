.set LOCALID_NURSE, 1
.set LOCALID_GUARD_1, 3
.set LOCALID_GUARD_2, 4

EverGrandeCity_PokemonLeague_1F_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, EverGrandeCity_PokemonLeague_1F_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0

EverGrandeCity_PokemonLeague_1F_OnTransition:
	setrespawn HEAL_LOCATION_EVER_GRANDE_CITY_POKEMON_LEAGUE
	setflag FLAG_LANDMARK_POKEMON_LEAGUE
	goto_if_set FLAG_DEFEATED_ALL_GYM_LEADERS_2ND_TIME, EverGrandeCity_PokemonLeague_1F_EventScript_DontBlock
	goto_if_set FLAG_IS_CHAMPION, EverGrandeCity_PokemonLeague_1F_EventScript_GuardsBlockDoor
	goto_if_unset FLAG_ENTERED_ELITE_FOUR, EverGrandeCity_PokemonLeague_1F_EventScript_GuardsBlockDoor
	end

EverGrandeCity_PokemonLeague_1F_EventScript_DontBlock::
	end

EverGrandeCity_PokemonLeague_1F_EventScript_GuardsBlockDoor::
	setobjectxyperm LOCALID_GUARD_1, 9, 2
	setobjectxyperm LOCALID_GUARD_2, 10, 2
	end

EverGrandeCity_PokemonLeague_1F_EventScript_Nurse::
	setvar VAR_0x800B, LOCALID_NURSE
	call Common_EventScript_PkmnCenterNurse
	waitmessage
	waitbuttonpress
	release
	end

EverGrandeCity_PokemonLeague_1F_EventScript_Clerk::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	pokemart EverGrandeCity_PokemonLeague_1F_Pokemart
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

	.align 2
EverGrandeCity_PokemonLeague_1F_Pokemart:
	.2byte ITEM_ULTRA_BALL
	.2byte ITEM_HYPER_POTION
	.2byte ITEM_MAX_POTION
	.2byte ITEM_FULL_RESTORE
	.2byte ITEM_FULL_HEAL
	.2byte ITEM_REVIVE
	.2byte ITEM_MAX_REPEL
	.2byte ITEM_NONE
	release
	end

@ The door guards only check for FLAG_BADGE06_GET because Winonas badge is the only one that can be skipped
@ Its assumed the player has the remaining badges
EverGrandeCity_PokemonLeague_1F_EventScript_DoorGuard::
	lockall
	goto_if_set FLAG_DEFEATED_ALL_GYM_LEADERS_2ND_TIME, EverGrandeCity_PokemonLeague_1F_EventScript_GoForth
	goto_if_set FLAG_IS_CHAMPION, EverGrandeCity_PokemonLeague_1F_EventScript_NeedNewChamp
	goto_if_set FLAG_ENTERED_ELITE_FOUR, EverGrandeCity_PokemonLeague_1F_EventScript_GoForth
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
	call_if_ge VAR_TEMP_0, 11, EverGrandeCity_PokemonLeague_1F_EventScript_PlayerMoveToFrontFromRight
	call_if_le VAR_TEMP_0, 8, EverGrandeCity_PokemonLeague_1F_EventScript_PlayerMoveToFrontFromLeft
	msgbox EverGrandeCity_PokemonLeague_1F_Text_MustHaveAllGymBadges, MSGBOX_DEFAULT
	waitmessage
	closemessage
	applymovement LOCALID_GUARD_1, EverGrandeCity_PokemonLeague_1F_Movement_LeftGuardOutOfWay
	applymovement LOCALID_GUARD_2, EverGrandeCity_PokemonLeague_1F_Movement_RightGuardOutOfWay
	waitmovement 0
	copyobjectxytoperm LOCALID_GUARD_1
	copyobjectxytoperm LOCALID_GUARD_2
	setflag FLAG_ENTERED_ELITE_FOUR
	releaseall
	end

EverGrandeCity_PokemonLeague_1F_EventScript_PlayerMoveToFrontFromRight::
	applymovement OBJ_EVENT_ID_PLAYER, EverGrandeCity_PokemonLeague_1F_Movement_MoveToFrontFromRight
	waitmovement 0
	return

EverGrandeCity_PokemonLeague_1F_EventScript_PlayerMoveToFrontFromLeft::
	applymovement OBJ_EVENT_ID_PLAYER, EverGrandeCity_PokemonLeague_1F_Movement_MoveToFrontFromLeft
	waitmovement 0
	return

EverGrandeCity_PokemonLeague_1F_EventScript_GoForth::
	applymovement VAR_LAST_TALKED, Common_Movement_FacePlayer
	waitmovement 0
	msgbox EverGrandeCity_PokemonLeague_1F_Text_GoForth, MSGBOX_DEFAULT
	closemessage
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
	waitmovement 0
	releaseall
	end

EverGrandeCity_PokemonLeague_1F_EventScript_NeedNewChamp::
	applymovement VAR_LAST_TALKED, Common_Movement_FacePlayer
	waitmovement 0
	msgbox EverGrandeCity_PokemonLeague_1F_Text_NeedNewChamp, MSGBOX_DEFAULT
	closemessage
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
	waitmovement 0
	releaseall
	end

EverGrandeCity_PokemonLeague_1F_Movement_MoveToFrontFromRight:
	walk_down
	walk_left
	walk_in_place_faster_up
	step_end

EverGrandeCity_PokemonLeague_1F_Movement_MoveToFrontFromLeft:
	walk_down
	walk_right
	walk_in_place_faster_up
	step_end

EverGrandeCity_PokemonLeague_1F_Movement_LeftGuardOutOfWay:
	walk_left
	walk_in_place_faster_down
	step_end

EverGrandeCity_PokemonLeague_1F_Movement_RightGuardOutOfWay:
	walk_right
	walk_in_place_faster_down
	step_end

EverGrandeCity_PokemonLeague_1F_Text_MustHaveAllGymBadges:
	.string "Through this doorway await the Elite\n"
	.string "Four, and POKéMON League Champion.\p"
	.string "Once you enter, there is no turning\n"
	.string "back.\p"
	.string "If you are fully prepared, then go forth\n"
	.string "and claim victory!$"

EverGrandeCity_PokemonLeague_1F_Text_GoForth:
	.string "If you are fully prepared to face the\n"
	.string "POKéMON League, then go forth and claim\l"
	.string "victory!$"

EverGrandeCity_PokemonLeague_1F_Text_NeedNewChamp:
	.string "I'm sorry, but we are currently\n"
	.string "searching for a new POKéMON League\l"
	.string "Champion.\p"
	.string "Please come back later.$"

EverGrandeCity_PokemonLeague_1F_EventScript_Clerk2::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	pokemart EverGrandeCity_PokemonLeague_1F_Pokemart2
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end


	.align 2
EverGrandeCity_PokemonLeague_1F_Pokemart2:
	.2byte ITEM_WHITE_HERB
	.2byte ITEM_POWER_HERB
	.2byte ITEM_MENTAL_HERB
	.2byte ITEM_WEAKNESS_POLICY
	.2byte ITEM_BLUNDER_POLICY
	.2byte ITEM_ROOM_SERVICE
	.2byte ITEM_THROAT_SPRAY
	.2byte ITEM_RED_CARD
	.2byte ITEM_EJECT_BUTTON
	.2byte ITEM_AIR_BALLOON
	.2byte ITEM_FOCUS_SASH
	.2byte ITEM_NONE

EverGrandeCity_PokemonLeague_1F_EventScript_Beauty::
	msgbox EverGrandeCity_PokemonLeague_1F_EventScript_Beauty_Text_0, MSGBOX_NPC
	end


EverGrandeCity_PokemonLeague_1F_EventScript_Blackbelt::
	msgbox EverGrandeCity_PokemonLeague_1F_EventScript_Blackbelt_Text_0, MSGBOX_NPC
	end


EverGrandeCity_PokemonLeague_1F_EventScript_Cowgirl::
	msgbox EverGrandeCity_PokemonLeague_1F_EventScript_Cowgirl_Text_0, MSGBOX_NPC
	end


EverGrandeCity_PokemonLeague_1F_EventScript_Beauty_Text_0:
	.string "Let's see, all of my POKéMON are healed\n"
	.string "up, and I'm stocked up on Full Restores.\p"
	.string "If only I had a decent battle\n"
	.string "strategy...$"

EverGrandeCity_PokemonLeague_1F_EventScript_Blackbelt_Text_0:
	.string "The shop here sells some pretty useful\n"
	.string "items.\p"
	.string "Hopefully the Focus Sash I just bought\n"
	.string "will help me get through the POKéMON\l"
	.string "League.$"

EverGrandeCity_PokemonLeague_1F_EventScript_Cowgirl_Text_0:
	.string "I reckon this must be the furthest\n"
	.string "away from the farm that I've ever been\l"
	.string "before.$"
