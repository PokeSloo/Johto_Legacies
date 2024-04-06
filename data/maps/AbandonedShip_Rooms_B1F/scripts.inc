AbandonedShip_Rooms_B1F_MapScripts::
	.byte 0


AbandonedShip_Rooms_B1F_EventScript_Sailor::
	lock
	faceplayer
	goto_if_set FLAG_GOT_ROUJEM_PHOENIX_PASSWORD, AbandonedShip_Rooms_B1F_EventScript_Sailor_1
	msgbox AbandonedShip_Rooms_B1F_EventScript_Sailor_Text_1
	waitmessage
	playfanfare MUS_OBTAIN_ITEM
	msgbox AbandonedShip_Rooms_B1F_EventScript_Sailor_Text_2
	waitmessage
	waitfanfare
	msgbox AbandonedShip_Rooms_B1F_EventScript_Sailor_Text_3
	waitmessage
	closemessage
	applymovement 1, SootopolisCity_Movement_StepLeft
	waitmovement 0
	setflag FLAG_GOT_ROUJEM_PHOENIX_PASSWORD
	release
	end

AbandonedShip_Rooms_B1F_EventScript_Sailor_1:
	msgbox AbandonedShip_Rooms_B1F_EventScript_Sailor_Text_0
	release
	end


AbandonedShip_Rooms_B1F_EventScript_Sailor_Text_0:
	.string "You have to stop this evil group, for\n"
	.string "the POKéMON's sake.$"

AbandonedShip_Rooms_B1F_EventScript_Sailor_Text_1:
	.string "You know, I really hate what the new\n"
	.string "management has done with this\l"
	.string "shipyard.\p"
	.string "I feel bad for all of these POKéMON\n"
	.string "that they're forcing us to smuggle.\p"
	.string "...\p"
	.string "What's that?\p"
	.string "You're here to stop them?\p"
	.string "In that case, you'll need a passcode to\n"
	.string "get into the basement.\p"
	.string "Here, it's 571943.$"

AbandonedShip_Rooms_B1F_EventScript_Sailor_Text_2:
	.string "{PLAYER} got the passcode!$"

AbandonedShip_Rooms_B1F_EventScript_Sailor_Text_3:
	.string "You have to stop them, for the\n"
	.string "POKéMON's sake.$"
