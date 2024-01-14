VerdanturfTown_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, VerdanturfTown_OnTransition
	.byte 0

VerdanturfTown_OnTransition:
	setflag FLAG_VISITED_VERDANTURF_TOWN
	end

VerdanturfTown_EventScript_Twin::
	msgbox VerdanturfTown_Text_ManTryingToDigTunnel, MSGBOX_NPC
	end

VerdanturfTown_EventScript_Man::
	msgbox VerdanturfTown_Text_AirCleanHere, MSGBOX_NPC
	end

VerdanturfTown_EventScript_Camper::
	msgbox VerdanturfTown_Text_MakeBattleTentDebut, MSGBOX_NPC
	end

VerdanturfTown_EventScript_Boy::
	msgbox VerdanturfTown_Text_GuyTryingToBustThroughCave, MSGBOX_NPC
	end

VerdanturfTown_EventScript_DenBlocker::
	msgbox VerdanturfTown_Text_GuyBlockingDen, MSGBOX_NPC
	end

VerdanturfTown_EventScript_TownSign::
	msgbox VerdanturfTown_Text_TownSign, MSGBOX_SIGN
	end

VerdanturfTown_EventScript_BattleTentSign::
	msgbox VerdanturfTown_Text_BattleTentSign, MSGBOX_SIGN
	end

VerdanturfTown_EventScript_RusturfTunnelSign::
	msgbox VerdanturfTown_Text_RusturfTunnelSign, MSGBOX_SIGN
	end

VerdanturfTown_Text_ManTryingToDigTunnel:
	.string "Hey, hey! Are you a TRAINER?\p"
	.string "I'm going to be a great TRAINER like\n"
	.string "CLAIR when I grow up!$"

VerdanturfTown_Text_AirCleanHere:
	.string "You look like a child with great\n"
	.string "potential.\p"
	.string "You should speak with my husband\n"
	.string "inside.\p"
	.string "We love helping out young TRAINERS like\n"
	.string "yourself.$"

VerdanturfTown_Text_MakeBattleTentDebut:
	.string "I've heard the Blackthorn City Gym\n"
	.string "Leader, CLAIR, is good friends with the\l"
	.string "POKéMON League Champion.\p"
	.string "I wonder if that's how they got enough\n"
	.string "money to fix the bridge in the Dragon's\l"
	.string "Den.$"

VerdanturfTown_Text_GuyTryingToBustThroughCave:
	.string "You came through Ice Path?\p"
	.string "It's a bit annoying, but that's the only\n"
	.string "way into the city besides flying.$"

VerdanturfTown_Text_GuyBlockingDen:
	.string "I'm sorry, but only TRAINERS who have\n"
	.string "proven themselves by defeating CLAIR\l"
	.string "may enter the Dragon's Den.$"

VerdanturfTown_Text_TownSign:
	.string "BLACKTHORN CITY\n"
	.string "“A Quiet Mountain Retreat.”$"

VerdanturfTown_Text_BattleTentSign:
	.string "TRAINER TIPS\p"
	.string "Wild POKéMON will appear regularly if\n"
	.string "you don't run, but walk quietly in the\l"
	.string "tall grass.\p"
	.string "If your party POKéMON are tired, it is\n"
	.string "better to avoid running, and go\l"
	.string "straight to a POKéMON Center.$"

VerdanturfTown_Text_RusturfTunnelSign:
	.string "Dragon's Den Ahead$"

