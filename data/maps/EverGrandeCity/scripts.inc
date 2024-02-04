EverGrandeCity_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, EverGrandeCity_OnTransition
	.byte 0

EverGrandeCity_OnTransition:
	setflag FLAG_VISITED_EVER_GRANDE_CITY
	end

EverGrandeCity_EventScript_ShaneTrigger::
	lock
	goto_if_set FLAG_SHANE_EXITED_POKEMON_LEAGUE, EverGrandeCity_EventScript_ShaneTrigger_2
	opendoor 18, 5
	waitdooranim
	addobject 1
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_PlayerFaceUp
	waitmovement 0
	delay 30
	applymovement 1, PetalburgCity_ShaneWalkOutOfGym
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_PlayerBackUp
	waitmovement 0
	closedoor 18, 5
	waitdooranim
	msgbox EverGrandeCity_EventScript_ShaneTrigger_Text_0
	waitmessage
	applymovement 1, EverGrandeCity_ShaneStepDown
	waitmovement 0
	msgbox EverGrandeCity_EventScript_ShaneTrigger_Text_1
	waitmessage
	closemessage
	applymovement 1, EverGrandeCity_ShaneLeave
	waitmovement 0
	removeobject 1
	setflag FLAG_SHANE_EXITED_POKEMON_LEAGUE
	release
	end

EverGrandeCity_EventScript_ShaneTrigger_2:
	release
	end


EverGrandeCity_ShaneStepDown:
	walk_in_place_left
	step_end

EverGrandeCity_ShaneLeave:
	walk_left
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	step_end

EverGrandeCity_EventScript_ShaneTrigger_Text_0:
	.string "SHANE: ...\p"
	.string "I couldn't beat him...\p"
	.string "DAD's power is just too overwhelming...\p"
	.string "I hate to admit it, but you might have a\n"
	.string "better chance of beating him than I\l"
	.string "do...\p"
	.string "Tell anyone I said that, and I'll kill\n"
	.string "you.\p"
	.string "...$"

EverGrandeCity_EventScript_ShaneTrigger_Text_1:
	.string "Just... Don't lose.\p"
	.string "Got it?$"
