MagmaHideout_2F_1R_MapScripts::
	.byte 0

MagmaHideout_2F_1R_EventScript_Grunt14::
	trainerbattle_single TRAINER_GRUNT_MAGMA_HIDEOUT_14, MagmaHideout_2F_1R_Text_Grunt14Intro, MagmaHideout_2F_1R_Text_Grunt14Defeat
	msgbox MagmaHideout_2F_1R_Text_Grunt14PostBattle, MSGBOX_AUTOCLOSE
	end

MagmaHideout_2F_1R_EventScript_Grunt3::
	trainerbattle_single TRAINER_GRUNT_MAGMA_HIDEOUT_3, MagmaHideout_2F_1R_Text_Grunt3Intro, MagmaHideout_2F_1R_Text_Grunt3Defeat
	msgbox MagmaHideout_2F_1R_Text_Grunt3PostBattle, MSGBOX_AUTOCLOSE
	end

MagmaHideout_2F_1R_EventScript_Grunt4::
	trainerbattle_single TRAINER_GRUNT_MAGMA_HIDEOUT_4, MagmaHideout_2F_1R_Text_Grunt4Intro, MagmaHideout_2F_1R_Text_Grunt4Defeat
	msgbox MagmaHideout_2F_1R_Text_Grunt4PostBattle, MSGBOX_AUTOCLOSE
	end

MagmaHideout_2F_1R_EventScript_Grunt5::
	trainerbattle_single TRAINER_GRUNT_MAGMA_HIDEOUT_5, MagmaHideout_2F_1R_Text_Grunt5Intro, MagmaHideout_2F_1R_Text_Grunt5Defeat
	msgbox MagmaHideout_2F_1R_Text_Grunt5PostBattle, MSGBOX_AUTOCLOSE
	end

MagmaHideout_2F_1R_Text_Grunt14Intro:
	.string "Red hair, and a winter coat...\p"
	.string "You're not THAT kid, are you?$"

MagmaHideout_2F_1R_Text_Grunt14Defeat:
	.string "You really are THAT kid!$"

MagmaHideout_2F_1R_Text_Grunt14PostBattle:
	.string "I thought you were just a myth the\n"
	.string "seniors made up to scare us newbies...$"

MagmaHideout_2F_1R_Text_Grunt3Intro:
	.string "You think you can just go wherever you\n"
	.string "want in our new hideout?$"

MagmaHideout_2F_1R_Text_Grunt3Defeat:
	.string "Seriously?\p"
	.string "We haven't even had time to put up the\n"
	.string "walls and floor yet...$"

MagmaHideout_2F_1R_Text_Grunt3PostBattle:
	.string "How did you even find this hideout so\n"
	.string "fast?$"

MagmaHideout_2F_1R_Text_Grunt4Intro:
	.string "Did you fall down the wrong hole?\p"
	.string "I'm not telling!$"

MagmaHideout_2F_1R_Text_Grunt4Defeat:
	.string "I'm still not telling you which way to\n"
	.string "go...$"

MagmaHideout_2F_1R_Text_Grunt4PostBattle:
	.string "Seriously, why would I help you run amok\n"
	.string "in our hideout?$"

MagmaHideout_2F_1R_Text_Grunt5Intro:
	.string "Really?\p"
	.string "I told Bob to not let anyone see him\n"
	.string "enter the hideout!$"

MagmaHideout_2F_1R_Text_Grunt5Defeat:
	.string "This is all Bob's fault...$"

MagmaHideout_2F_1R_Text_Grunt5PostBattle:
	.string "Maybe we should have made the hideout\n"
	.string "entrance a little more hidden...$"

