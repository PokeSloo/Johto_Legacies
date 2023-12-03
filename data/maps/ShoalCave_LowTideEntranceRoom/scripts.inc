ShoalCave_LowTideEntranceRoom_MapScripts::
	.byte 0


ShoalCave_LowTideEntranceRoom_EventScript_OldMan::
	msgbox ShoalCave_LowTideEntranceRoom_EventScript_OldMan_Text_0, MSGBOX_NPC
	end


ShoalCave_LowTideEntranceRoom_EventScript_ItemShellBell::
	finditem ITEM_SHELL_BELL
	end


ShoalCave_LowTideEntranceRoom_EventScript_OldMan_Text_0:
	.string "I dropped my Shell Bell, but the path is\n"
	.string "too icy for me to go get it.\p"
	.string "What a bother.$"
