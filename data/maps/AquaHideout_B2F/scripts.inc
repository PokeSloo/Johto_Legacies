AquaHideout_B2F_MapScripts::
	.byte 0

AquaHideout_B2F_EventScript_Matt::
	trainerbattle_single TRAINER_MATT, AquaHideout_B2F_Text_MattIntro, AquaHideout_B2F_Text_MattDefeat, AquaHideout_B2F_EventScript_SubmarineEscape, NO_MUSIC
	msgbox AquaHideout_B2F_Text_MattPostBattle, MSGBOX_DEFAULT
	release
	end

AquaHideout_B2F_EventScript_SubmarineEscape::
	msgbox AquaHideout_B2F_Text_OurBossGotThroughHisPreparations, MSGBOX_DEFAULT
	giveitem ITEM_EXP_SHARE
	msgbox AquaHideout_B2F_Text_MattPostBattle, MSGBOX_DEFAULT
	release
	end

AquaHideout_B2F_EventScript_Grunt4::
	trainerbattle_single TRAINER_GRUNT_AQUA_HIDEOUT_4, AquaHideout_B2F_Text_Grunt4Intro, AquaHideout_B2F_Text_Grunt4Defeat, AquaHideout_B2F_EventScript_Grunt4Defeated
	msgbox AquaHideout_B2F_Text_Grunt4PostBattle, MSGBOX_AUTOCLOSE
	end

AquaHideout_B2F_EventScript_Grunt4Defeated::
	msgbox AquaHideout_B2F_Text_Grunt4PostBattle, MSGBOX_DEFAULT
	release
	end

AquaHideout_B2F_EventScript_Grunt6::
	trainerbattle_single TRAINER_GRUNT_AQUA_HIDEOUT_6, AquaHideout_B2F_Text_Grunt6Intro, AquaHideout_B2F_Text_Grunt6Defeat
	msgbox AquaHideout_B2F_Text_Grunt6PostBattle, MSGBOX_AUTOCLOSE
	end

AquaHideout_B2F_EventScript_Grunt8::
	trainerbattle_single TRAINER_GRUNT_AQUA_HIDEOUT_8, AquaHideout_B2F_Text_Grunt8Intro, AquaHideout_B2F_Text_Grunt8Defeat
	msgbox AquaHideout_B2F_Text_Grunt8PostBattle, MSGBOX_AUTOCLOSE
	end

AquaHideout_B2F_Text_MattIntro:
	.string "Welcome, young TRAINER.\p"
	.string "I am the Elder Sage of Sprout Tower.\p"
	.string "I have devoted my life to POKéMON, and\n"
	.string "strengthening my bond with them.\p"
	.string "People, POKéMON, all life must coexist\n"
	.string "on this planet.\p"
	.string "The best way to coexist is through a\n"
	.string "partnership.\p"
	.string "POKéMON are not just tools to be\n"
	.string "abused.\p"
	.string "Only TRAINERS who have developed a\n"
	.string "powerful bond with their POKéMON can\l"
	.string "attain true strength.\p"
	.string "Now then, allow me to assess the bond\n"
	.string "you share with your POKéMON!$"

AquaHideout_B2F_Text_MattDefeat:
	.string "Very good...\p"
	.string "You have undoubtedly proven the bond\n"
	.string "you share with your POKéMON.$"

AquaHideout_B2F_Text_OurBossGotThroughHisPreparations:
	.string "In recognition of the bond you share\n"
	.string "with your POKéMON, I would like to\l"
	.string "present you with this gift.$"

AquaHideout_B2F_Text_MattPostBattle:
	.string "That Exp. Share will certainly help\n"
	.string "strengthen the bond you have with\l"
	.string "your POKéMON.\p"
	.string "When activated, all of your POKéMON will\n"
	.string "earn at least half the Exp. Points, even\l"
	.string "without joining the battle.$"

AquaHideout_B2F_Text_Grunt4Intro:
	.string "I hope you've trained more than just\n"
	.string "one POKéMON.$"

AquaHideout_B2F_Text_Grunt4Defeat:
	.string "You share a strong connection with\n"
	.string "your POKéMON.$"

AquaHideout_B2F_Text_Grunt4PostBattle:
	.string "Go on, the Elder Sage is waiting.$"

AquaHideout_B2F_Text_Grunt6Intro:
	.string "You think you're ready to face the\n"
	.string "Elder Sage?\p"
	.string "Don't make me laugh!$"

AquaHideout_B2F_Text_Grunt6Defeat:
	.string "Well, I'm not laughing now...$"

AquaHideout_B2F_Text_Grunt6PostBattle:
	.string "Perhaps you are ready for the Elder\n"
	.string "Sage.$"

AquaHideout_B2F_Text_Grunt8Intro:
	.string "Have you come prepared for a double\n"
	.string "battle?$"

AquaHideout_B2F_Text_Grunt8Defeat:
	.string "I was the unprepared one, it seems.$"

AquaHideout_B2F_Text_Grunt8PostBattle:
	.string "Don't underestimate the Elder Sage, he\n"
	.string "is stronger than the rest of us.$"
