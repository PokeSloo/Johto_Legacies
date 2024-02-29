SootopolisCity_MysteryEventsHouse_B1F_MapScripts::
	.byte 0


SootopolisCity_MysteryEventsHouse_B1F_EventScript_Shane::
	lock
	faceplayer
	msgbox SootopolisCity_MysteryEventsHouse_B1F_EventScript_Shane_Text_0
	trainerbattle_no_intro TRAINER_MAY_ROUTE_119_TREECKO, SootopolisCity_MysteryEventsHouse_B1F_Text_ShaneDefeat
	msgbox SootopolisCity_MysteryEventsHouse_B1F_EventScript_Shane_Text_1
	waitmessage
	closemessage
	specialvar VAR_RESULT, GetPlayerFacingDirection
	compare VAR_RESULT, DIR_SOUTH
	goto_if_eq SootopolisCity_MysteryEventsHouse_B1F_EventScript_Shane_2
	applymovement 1, SootopolisCity_MysteryEventsHouse_B1F_Movement_ExitStraight
	waitmovement 0
SootopolisCity_MysteryEventsHouse_B1F_EventScript_Shane_1:
	opendoor 6, 2
	waitdooranim
	applymovement 1, SootopolisCity_Movement_WalkUpOneInvis
	waitmovement 0
	closedoor 6, 2
	waitdooranim
	removeobject 1
	setflag FLAG_HIDE_SHANE_MEGA_LAB_BASEMENT
	release
	end

SootopolisCity_MysteryEventsHouse_B1F_EventScript_Shane_2:
	applymovement 1, SootopolisCity_MysteryEventsHouse_B1F_Movement_ExitAround
	waitmovement 0
	goto SootopolisCity_MysteryEventsHouse_B1F_EventScript_Shane_1


SootopolisCity_MysteryEventsHouse_B1F_Movement_ExitAround:
	walk_right
	walk_up
	walk_up
	walk_left
	walk_up
	step_end

SootopolisCity_MysteryEventsHouse_B1F_Movement_ExitStraight:
	walk_up
	walk_up
	walk_up
	step_end

SootopolisCity_MysteryEventsHouse_B1F_EventScript_Shane_Text_0:
	.string "So, you showed up?\p"
	.string "I knew there was no way you'd wimp out,\n"
	.string "I bet you're just as excited as I am to\l"
	.string "test out these Mega Stones!\p"
	.string "Well, don't keep me waiting.\p"
	.string "Let's go!$"

SootopolisCity_MysteryEventsHouse_B1F_EventScript_Shane_Text_1:
	.string "No matter what I do, you always seem to\n"
	.string "be one step ahead of me.\p"
	.string "That's fine though.\p"
	.string "If it weren't for you, I wouldn't have\n"
	.string "pushed myself nearly as hard as I have.\p"
	.string "Hell, I probably would only have two gym\n"
	.string "badges still.\p"
	.string "One day, I swear I'll surpass you.\p"
	.string "Just watch me!$"

SootopolisCity_MysteryEventsHouse_B1F_Text_ShaneDefeat::
	.string "So, that's how it is...$"
