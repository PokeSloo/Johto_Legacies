MagmaHideout_3F_2R_MapScripts::
	.byte 0

MagmaHideout_3F_2R_EventScript_Grunt10::
	trainerbattle_single TRAINER_GRUNT_MAGMA_HIDEOUT_10, MagmaHideout_3F_2R_Text_Grunt10Intro, MagmaHideout_3F_2R_Text_Grunt10Defeat
	msgbox MagmaHideout_3F_2R_Text_Grunt10PostBattle, MSGBOX_AUTOCLOSE
	end

MagmaHideout_3F_2R_Text_Grunt10Intro:
	.string "This room is a little bit of a maze, don't\n"
	.string "you think?$"

MagmaHideout_3F_2R_Text_Grunt10Defeat:
	.string "Fine then, you may pass.$"

MagmaHideout_3F_2R_Text_Grunt10PostBattle:
	.string "I said I'm letting you walk on by.\p"
	.string "Not like I can do much to stop you\n"
	.string "anyway...$"

