AbandonedShip_Corridors_1F_MapScripts::
	map_script MAP_SCRIPT_ON_LOAD, AbandonedShip_Corridors_1F_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

AbandonedShip_Corridors_1F_MapScripts_MAP_SCRIPT_ON_LOAD:
	goto_if_set FLAG_ROUJEM_PHOENIX_STAIRCASE, AbandonedShip_Corridors_1F_MapScripts_MAP_SCRIPT_ON_LOAD_2
	end

AbandonedShip_Corridors_1F_MapScripts_MAP_SCRIPT_ON_LOAD_2:
	setmetatile 16, 5, 0x32D, FALSE
	setmetatile 17, 5, 0x32E, TRUE
	return


AbandonedShip_Corridors_1F_EventScript_Silver::
	msgbox AbandonedShip_Corridors_1F_EventScript_Silver_Text_0, MSGBOX_NPC
	end


AbandonedShip_Corridors_1F_EventScript_Feraligatr::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_FERALIGATR, CRY_MODE_NORMAL
	applymovement 2, AbandonedShip_Corridors_1F_Movement_Question
	msgbox AbandonedShip_Corridors_1F_EventScript_Feraligatr_Text_0
	waitmovement 0
	waitmoncry
	release
	end


AbandonedShip_Corridors_1F_Movement_Question:
	emote_question_mark
	step_end

AbandonedShip_Corridors_1F_EventScript_Computer::
	lock
	goto_if_set FLAG_ROUJEM_PHOENIX_STAIRCASE, AbandonedShip_Corridors_1F_EventScript_Computer_1
	msgbox AbandonedShip_Corridors_1F_EventScript_Computer_Text_1
	waitmessage
	closemessage
	playse SE_SWITCH
	setmetatile 16, 5, 0x32D, FALSE
	setmetatile 17, 5, 0x32E, TRUE
	special DrawWholeMapView
	waitse
	delay 30
	playse SE_PIN
	applymovement 1, AbandonedShip_Corridors_1F_Movement_ExclamationRight
	applymovement 2, AbandonedShip_Corridors_1F_Movement_ExclamationRight
	applymovement OBJ_EVENT_ID_PLAYER, AbandonedShip_Corridors_1F_Movement_ExclamationDown
	waitmovement 0
	waitse
	delay 30
	applymovement 1, AbandonedShip_Corridors_1F_Movement_SilverToCorner
	applymovement 2, AbandonedShip_Corridors_1F_Movement_GatrToCorner
	waitmovement 0
	delay 30
	applymovement 1, SootopolisCity_Movement_StepUp
	waitmovement 0
	msgbox AbandonedShip_Corridors_1F_EventScript_Computer_Text_2
	waitmessage
	closemessage
	applymovement 1, AbandonedShip_Corridors_1F_Movement_SilverToStairs
	applymovement 2, AbandonedShip_Corridors_1F_Movement_GatrToStairs
	waitmovement 0
	playse SE_EXIT
	waitse
	removeobject 1
	removeobject 2
	setflag FLAG_ROUJEM_PHOENIX_STAIRCASE
	release
	end

AbandonedShip_Corridors_1F_EventScript_Computer_1:
	msgbox AbandonedShip_Corridors_1F_EventScript_Computer_Text_0
	release
	end


AbandonedShip_Corridors_1F_Movement_ExclamationRight:
	emote_exclamation_mark
	face_right
	step_end

AbandonedShip_Corridors_1F_Movement_ExclamationDown:
	emote_exclamation_mark
	face_down
	step_end

AbandonedShip_Corridors_1F_Movement_SilverToCorner:
	walk_right
	walk_up
	walk_up
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_in_place_down
	step_end

AbandonedShip_Corridors_1F_Movement_GatrToCorner:
	walk_right
	walk_right
	walk_up
	walk_up
	walk_right
	walk_right
	walk_right
	walk_right
	step_end

AbandonedShip_Corridors_1F_Movement_SilverToStairs:
	walk_down
	walk_right
	set_invisible
	step_end

AbandonedShip_Corridors_1F_Movement_GatrToStairs:
	walk_right
	walk_down
	walk_right
	set_invisible
	step_end

AbandonedShip_Corridors_1F_EventScript_Silver_Text_0:
	.string "DAD: Now where did that grunt go?\p"
	.string "There must be more to this room than\n"
	.string "meets the eye...\p"
	.string "A secret switch, perhaps?$"

AbandonedShip_Corridors_1F_EventScript_Feraligatr_Text_0:
	.string "FERALIGATR: Grrhh?$"

AbandonedShip_Corridors_1F_EventScript_Computer_Text_0:
	.string "The secret switch has already been\n"
	.string "pressed.$"

AbandonedShip_Corridors_1F_EventScript_Computer_Text_1:
	.string "Hey!\p"
	.string "There's a secret switch inside this\n"
	.string "trash can!\p"
	.string "{PLAYER} pressed the secret switch.$"

AbandonedShip_Corridors_1F_EventScript_Computer_Text_2:
	.string "DAD: Good work, {PLAYER}!\p"
	.string "This staircase must lead down to their\n"
	.string "base.\p"
	.string "Let's check it out!$"
