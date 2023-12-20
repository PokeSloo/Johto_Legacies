MagmaHideout_3F_1R_MapScripts::
	.byte 0

MagmaHideout_3F_1R_EventScript_Grunt9::
	trainerbattle_single TRAINER_GRUNT_MAGMA_HIDEOUT_9, MagmaHideout_3F_1R_Text_Grunt9Intro, MagmaHideout_3F_1R_Text_Grunt9Defeat
	msgbox MagmaHideout_3F_1R_Text_Grunt9PostBattle, MSGBOX_AUTOCLOSE
	end

MagmaHideout_3F_1R_EventScript_Grunt16::
	trainerbattle_single TRAINER_GRUNT_MAGMA_HIDEOUT_16, MagmaHideout_3F_1R_Text_Grunt16Intro, MagmaHideout_3F_1R_Text_Grunt16Defeat
	msgbox MagmaHideout_3F_1R_Text_Grunt16PostBattle, MSGBOX_AUTOCLOSE
	end

MagmaHideout_3F_1R_Text_Grunt9Intro:
	.string "I wasn't expecting to see you in this\n"
	.string "hideout so soon!$"

MagmaHideout_3F_1R_Text_Grunt9Defeat:
	.string "I wasn't prepared for you...$"

MagmaHideout_3F_1R_Text_Grunt9PostBattle:
	.string "It's too bad, you would have gone really\n"
	.string "far in our group.$"

MagmaHideout_3F_1R_Text_Grunt16Intro:
	.string "How do you keep finding our hideouts!?$"

MagmaHideout_3F_1R_Text_Grunt16Defeat:
	.string "We should be more careful with our\n"
	.string "hideout locations...$"

MagmaHideout_3F_1R_Text_Grunt16PostBattle:
	.string "Who would even think to look for a\n"
	.string "secret switch behind a poster?$"

