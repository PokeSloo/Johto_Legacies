AbandonedShip_Rooms_1F_MapScripts::
	map_script MAP_SCRIPT_ON_LOAD, AbandonedShip_Rooms_1F_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

AbandonedShip_Rooms_1F_MapScripts_MAP_SCRIPT_ON_LOAD:
	goto_if_set FLAG_ROUJEM_PHOENIX_DOOR_OPEN, AbandonedShip_Rooms_1F_MapScripts_MAP_SCRIPT_ON_LOAD_2
	end

AbandonedShip_Rooms_1F_MapScripts_MAP_SCRIPT_ON_LOAD_2:
	setmetatile 15, 1, 0x2CB, TRUE
	setmetatile 16, 1, 0x2CC, FALSE
	setmetatile 17, 1, 0x2CD, TRUE
	setmetatile 15, 0, 0x2C3, TRUE
	setmetatile 16, 0, 0x2C4, TRUE
	setmetatile 17, 0, 0x2C5, TRUE
	return


AbandonedShip_Rooms_1F_EventScript_Trigger::
	lock
	goto_if_set FLAG_HIDE_SILVER_ROUJEM_SECOND_FLOOR, AbandonedShip_Rooms_1F_EventScript_Trigger_1
	applymovement 5, SootopolisCity_Movement_StepLeft
	applymovement 6, SootopolisCity_Movement_StepLeft
	waitmovement 0
	msgbox AbandonedShip_Rooms_1F_EventScript_Trigger_Text_0
	waitmessage
	closemessage
	applymovement 5, AbandonedShip_Rooms_1F_Movement_WalkDown
	applymovement 6, AbandonedShip_Rooms_1F_Movement_WalkDown
	waitmovement 0
	removeobject 5
	removeobject 6
	setflag FLAG_HIDE_SILVER_ROUJEM_SECOND_FLOOR
	release
	end

AbandonedShip_Rooms_1F_EventScript_Trigger_1:
	release
	end


AbandonedShip_Rooms_1F_Movement_WalkDown:
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	step_end

AbandonedShip_Rooms_1F_EventScript_KeyPad::
	msgbox AbandonedShip_Rooms_1F_EventScript_KeyPad_Text_0, MSGBOX_SIGN
	end


AbandonedShip_Rooms_1F_EventScript_Feraligatr::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_FERALIGATR, CRY_MODE_NORMAL
	applymovement 8, AbandonedShip_Corridors_1F_Movement_Question
	msgbox AbandonedShip_Rooms_1F_EventScript_Feraligatr_Text_0
	waitmovement 0
	waitmoncry
	release
	end


AbandonedShip_Rooms_1F_EventScript_Silver::
	lock
	faceplayer
	applymovement 8, SootopolisCity_Movement_StepRight
	waitmovement 0
	goto_if_set FLAG_GOT_ROUJEM_PHOENIX_PASSWORD, AbandonedShip_Rooms_1F_EventScript_Silver_1
	msgbox AbandonedShip_Rooms_1F_EventScript_Silver_Text_2
	release
	end

AbandonedShip_Rooms_1F_EventScript_Silver_1:
	msgbox AbandonedShip_Rooms_1F_EventScript_Silver_Text_0
	waitmessage
	closemessage
	applymovement 7, SootopolisCity_Movement_StepUp
	waitmovement 0
	delay 60
	playse SE_SWITCH
	setmetatile 15, 1, 0x2CB, TRUE
	setmetatile 16, 1, 0x2CC, FALSE
	setmetatile 17, 1, 0x2CD, TRUE
	setmetatile 15, 0, 0x2C3, TRUE
	setmetatile 16, 0, 0x2C4, TRUE
	setmetatile 17, 0, 0x2C5, TRUE
	special DrawWholeMapView
	waitse
	playse SE_PIN
	applymovement 8, AbandonedShip_Rooms_1F_Movement_ExclamationUp
	waitmovement 0
	waitse
	delay 30
	applymovement 8, SootopolisCity_Movement_StepRight
	waitmovement 0
	faceplayer
	msgbox AbandonedShip_Rooms_1F_EventScript_Silver_Text_1
	waitmessage
	closemessage
	specialvar VAR_RESULT, GetPlayerFacingDirection
	compare VAR_RESULT, DIR_EAST
	goto_if_eq AbandonedShip_Rooms_1F_EventScript_Silver_4
	applymovement 7, AbandonedShip_Rooms_1F_Movement_SilverLeft1
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, SootopolisCity_Movement_StepLeft
	applymovement 8, AbandonedShip_Rooms_1F_Movement_GatrOutOfWay
	waitmovement 0
	applymovement 7, AbandonedShip_Rooms_1F_Movement_SilverExitFromRight
	waitmovement 0
	playse SE_EXIT
	waitse
	applymovement 8, AbandonedShip_Rooms_1F_Movement_GatrExit
	waitmovement 0
	playse SE_EXIT
	waitse
	removeobject 7
	removeobject 8
	setflag FLAG_ROUJEM_PHOENIX_DOOR_OPEN
	release
	end

AbandonedShip_Rooms_1F_EventScript_Silver_4:
	applymovement 7, AbandonedShip_Rooms_1F_Movement_SilverAround
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, SootopolisCity_Movement_StepLeft
	applymovement 8, AbandonedShip_Rooms_1F_Movement_GatrOutOfWay
	waitmovement 0
	applymovement 7, AbandonedShip_Rooms_1F_Movement_SilverExit
	waitmovement 0
	playse SE_EXIT
	waitse
	applymovement 8, AbandonedShip_Rooms_1F_Movement_GatrExit
	waitmovement 0
	playse SE_EXIT
	waitse
	removeobject 7
	removeobject 8
	setflag FLAG_ROUJEM_PHOENIX_DOOR_OPEN
	release
	end


AbandonedShip_Rooms_1F_Movement_ExclamationUp:
	emote_exclamation_mark
	walk_in_place_up
	step_end

AbandonedShip_Rooms_1F_Movement_SilverAround:
	walk_down
	walk_left
	walk_left
	walk_in_place_up
	step_end

AbandonedShip_Rooms_1F_Movement_GatrOutOfWay:
	walk_left
	walk_in_place_right
	step_end

AbandonedShip_Rooms_1F_Movement_SilverExit:
	walk_up
	walk_up
	set_invisible
	step_end

AbandonedShip_Rooms_1F_Movement_SilverExitFromRight:
	walk_left
	walk_up
	set_invisible
	step_end

AbandonedShip_Rooms_1F_Movement_GatrExit:
	walk_right
	walk_up
	set_invisible
	step_end

AbandonedShip_Rooms_1F_Movement_SilverLeft1:
	walk_left
	step_end

AbandonedShip_Rooms_1F_EventScript_Scientist1::
	msgbox AbandonedShip_Rooms_1F_EventScript_Scientist1_Text_0, MSGBOX_NPC
	end


AbandonedShip_Rooms_1F_EventScript_Scientist2::
	msgbox AbandonedShip_Rooms_1F_EventScript_Scientist2_Text_0, MSGBOX_NPC
	end


AbandonedShip_Rooms_1F_EventScript_Demetrius::
	trainerbattle_single TRAINER_DEMETRIUS, AbandonedShip_Rooms_1F_Text_DemetriusIntro, AbandonedShip_Rooms_1F_Text_DemetriusDefeat
	msgbox AbandonedShip_Rooms_1F_Text_DemetriusPostBattle, MSGBOX_AUTOCLOSE
	end

AbandonedShip_Rooms_1F_EventScript_Thalia::
	trainerbattle_single TRAINER_MELISSA, AbandonedShip_Rooms_1F_Text_ThaliaIntro, AbandonedShip_Rooms_1F_Text_ThaliaDefeat
	msgbox AbandonedShip_Rooms_1F_Text_ThaliaPostBattle, MSGBOX_AUTOCLOSE
	end

AbandonedShip_Rooms_1F_Text_ThaliaIntro:
	.string "You're not the kid they said defeated\n"
	.string "all the grunts on Mt. Tempest, are you?$"

AbandonedShip_Rooms_1F_Text_ThaliaDefeat:
	.string "I would say my hunch was correct.$"

AbandonedShip_Rooms_1F_Text_ThaliaPostBattle:
	.string "Kids these days just don't have any\n"
	.string "manners.\p"
	.string "Could you find a different hideout to\n"
	.string "raid?$"

AbandonedShip_Rooms_1F_Text_DemetriusIntro:
	.string "Yeah, I'm not supposed to let anyone go\n"
	.string "this way.\p"
	.string "I'll use force if I have to!$"

AbandonedShip_Rooms_1F_Text_DemetriusDefeat:
	.string "Man, you're just as strong as the other\n"
	.string "guy!$"

AbandonedShip_Rooms_1F_Text_DemetriusPostBattle:
	.string "Uh, please don't go this way?$"

AbandonedShip_Rooms_1F_EventScript_Trigger_Text_0:
	.string "DAD: This definitely looks like a Team\n"
	.string "Phoenix base.\p"
	.string "They must be holding Jirachi here\n"
	.string "somewhere.\p"
	.string "Let's go.$"

AbandonedShip_Rooms_1F_EventScript_KeyPad_Text_0:
	.string "It's a keypad.$"

AbandonedShip_Rooms_1F_EventScript_Feraligatr_Text_0:
	.string "FERALIGATR: Grrhh?$"

AbandonedShip_Rooms_1F_EventScript_Silver_Text_0:
	.string "DAD: They obviously don't want anyone\n"
	.string "going through this door, so that's\l"
	.string "exactly where we'll go.\p"
	.string "Now, it looks like we just need a\n"
	.string "passcode to open it...\p"
	.string "...\p"
	.string "You figured out the passcode already!?\p"
	.string "You're good! You must have got that\n"
	.string "intelligence from your mother.$"

AbandonedShip_Rooms_1F_EventScript_Silver_Text_1:
	.string "DAD: Great!\p"
	.string "Now, let's go see what they have in\n"
	.string "store for us!$"

AbandonedShip_Rooms_1F_EventScript_Silver_Text_2:
	.string "DAD: They obviously don't want anyone\n"
	.string "going through this door, so that's\l"
	.string "exactly where we'll go.\p"
	.string "Now, it looks like we just need a\n"
	.string "passcode to open it...$"

AbandonedShip_Rooms_1F_EventScript_Scientist1_Text_0:
	.string "Uh, sorry kid, who are you?\p"
	.string "I'm busy working here.$"

AbandonedShip_Rooms_1F_EventScript_Scientist2_Text_0:
	.string "Our profits have really taken a hit\n"
	.string "since our Ecruteak base got shut down.\p"
	.string "I'm still not sure what exactly\n"
	.string "happened there.$"
