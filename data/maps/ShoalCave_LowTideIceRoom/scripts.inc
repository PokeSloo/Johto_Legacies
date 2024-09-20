ShoalCave_LowTideIceRoom_MapScripts::
	.byte 0


ShoalCave_LowTideIceRoom_EventScript_Winter::
	lock
	faceplayer
	msgbox ShoalCave_LowTideIceRoom_EventScript_Winter_Text_0
	waitmessage
	applymovement 4, ShoalCave_LowTideIceRoom_Movement_WinterLookRight
	waitmovement 0
	msgbox ShoalCave_LowTideIceRoom_EventScript_Winter_Text_1
	waitmessage
	faceplayer
	msgbox ShoalCave_LowTideIceRoom_EventScript_Winter_Text_2
	waitmessage
	closemessage
	specialvar VAR_RESULT, GetPlayerFacingDirection
	switch VAR_RESULT
	case DIR_EAST, ShoalCave_LowTideIceRoom_EventScript_Winter_3
	case DIR_NORTH, ShoalCave_LowTideIceRoom_EventScript_Winter_4
	case DIR_SOUTH, ShoalCave_LowTideIceRoom_EventScript_Winter_5
ShoalCave_LowTideIceRoom_EventScript_Winter_1:
	removeobject 4
	setflag FLAG_TALKED_TO_WINTER_ICE_PATH
	release
	end

ShoalCave_LowTideIceRoom_EventScript_Winter_3:
	call ShoalCave_LowTideIceRoom_EventScript_FacingEast
	goto ShoalCave_LowTideIceRoom_EventScript_Winter_1

ShoalCave_LowTideIceRoom_EventScript_Winter_4:
	call ShoalCave_LowTideIceRoom_EventScript_FacingNorthorSouth
	goto ShoalCave_LowTideIceRoom_EventScript_Winter_1

ShoalCave_LowTideIceRoom_EventScript_Winter_5:
	call ShoalCave_LowTideIceRoom_EventScript_FacingNorthorSouth
	goto ShoalCave_LowTideIceRoom_EventScript_Winter_1


ShoalCave_LowTideIceRoom_EventScript_FacingEast::
	applymovement 4, ShoalCave_LowTideIceRoom_Movement_WinterLeaveAround
	waitmovement 0
	return


ShoalCave_LowTideIceRoom_EventScript_FacingNorthorSouth::
	applymovement 4, ShoalCave_LowTideIceRoom_Movement_WinterLeaveMiddle
	waitmovement 0
	return


ShoalCave_LowTideIceRoom_Movement_WinterLookRight:
	face_right
	step_end

ShoalCave_LowTideIceRoom_Movement_WinterLeaveAround:
	walk_down
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_down
	walk_down
	walk_down
	walk_left
	walk_down
	walk_down
	step_end

ShoalCave_LowTideIceRoom_Movement_WinterLeaveMiddle:
	walk_left
	walk_left
	walk_down
	walk_left
	walk_left
	walk_left
	walk_left
	walk_down
	walk_down
	walk_down
	walk_left
	walk_down
	walk_down
	walk_left
	walk_left
	step_end

ShoalCave_LowTideIceRoom_EventScript_Winter_Text_0:
	.string "???: Oh, I didn't expect to see anyone\n"
	.string "else down here.\p"
	.string "My name is WINTER, I'm the Mahogany\n"
	.string "Town gym leader.\p"
	.string "Do you know what I was looking at?$"

ShoalCave_LowTideIceRoom_EventScript_Winter_Text_1:
	.string "This isn't just any icy rock, it is THE\n"
	.string "Ice Rock.$"

ShoalCave_LowTideIceRoom_EventScript_Winter_Text_2:
	.string "You can evolve certain POKéMON species\n"
	.string "if you level them up next to this rock.\p"
	.string "There's also a similar rock in Ilex\n"
	.string "Forest.\p"
	.string "Oh, but I'm getting carried away.\p"
	.string "What, may I ask, brought you here?\p"
	.string "...\p"
	.string "Oh! I see.\p"
	.string "You're a TRAINER, and your name is\n"
	.string "{PLAYER}.\p"
	.string "I should have known.\p"
	.string "Worry not, I will get back to my gym\n"
	.string "right away!\p"
	.string "I look forward to our next meeting,\n"
	.string "{PLAYER}.$"
