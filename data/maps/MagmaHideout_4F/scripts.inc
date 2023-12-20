MagmaHideout_4F_MapScripts::
	.byte 0

MagmaHideout_4F_EventScript_Grunt11::
	trainerbattle_single TRAINER_GRUNT_MAGMA_HIDEOUT_11, MagmaHideout_4F_Text_Grunt11Intro, MagmaHideout_4F_Text_Grunt11Defeat
	msgbox MagmaHideout_4F_Text_Grunt11PostBattle, MSGBOX_AUTOCLOSE
	end

MagmaHideout_4F_EventScript_Grunt12::
	trainerbattle_single TRAINER_GRUNT_MAGMA_HIDEOUT_12, MagmaHideout_4F_Text_Grunt12Intro, MagmaHideout_4F_Text_Grunt12Defeat
	msgbox MagmaHideout_4F_Text_Grunt12PostBattle, MSGBOX_AUTOCLOSE
	end

MagmaHideout_4F_EventScript_Grunt13::
	trainerbattle_single TRAINER_GRUNT_MAGMA_HIDEOUT_13, MagmaHideout_4F_Text_Grunt13Intro, MagmaHideout_4F_Text_Grunt13Defeat
	msgbox MagmaHideout_4F_Text_Grunt13PostBattle, MSGBOX_AUTOCLOSE
	end

MagmaHideout_4F_EventScript_Tabitha::
	trainerbattle_single TRAINER_TABITHA_MAGMA_HIDEOUT, MagmaHideout_4F_Text_TabithaIntro, MagmaHideout_4F_Text_TabithaDefeat
	msgbox MagmaHideout_4F_Text_TabithaPostBattle, MSGBOX_AUTOCLOSE
	end

MagmaHideout_4F_Text_Grunt11Intro:
	.string "Just turn back now kid, none of this\n"
	.string "concerns you!$"

MagmaHideout_4F_Text_Grunt11Defeat:
	.string "You were just too much for me to handle.$"

MagmaHideout_4F_Text_Grunt11PostBattle:
	.string "What is so wrong about wanting\n"
	.string "unlimited power and money?$"

MagmaHideout_4F_Text_Grunt12Intro:
	.string "Muahaha, very soon Team Phoenix will\n"
	.string "become the most powerful organization\l"
	.string "in the world!$"

MagmaHideout_4F_Text_Grunt12Defeat:
	.string "Stop trying to ruin our plans!$"

MagmaHideout_4F_Text_Grunt12PostBattle:
	.string "I'm sorry boss, I couldn't hold off the\n"
	.string "intruder very long.$"

MagmaHideout_4F_Text_Grunt13Intro:
	.string "I will stop you no matter what!\p"
	.string "For Team Phoenix!$"

MagmaHideout_4F_Text_Grunt13Defeat:
	.string "I have failed...$"

MagmaHideout_4F_Text_Grunt13PostBattle:
	.string "You're dead wrong if you think this is\n"
	.string "the end of Team Phoenix!$"

MagmaHideout_4F_Text_TabithaIntro:
	.string "Hehehe!\n"
	.string "You made it this far, so I'll tell you!\p"
	.string "That's right!\n"
	.string "Up ahead, GROUDON is sleeping!\p"
	.string "MAXIE went to GROUDON just seconds\n"
	.string "ago!\p"
	.string "It's going to awaken real soon!\n"
	.string "Hehe! Hehehe!$"

MagmaHideout_4F_Text_TabithaDefeat:
	.string "Taken down again…\n"
	.string "Hehe…$"

MagmaHideout_4F_Text_TabithaPostBattle:
	.string "…And while you wasted time with me,\n"
	.string "MAXIE should have awakened GROUDON…$"

