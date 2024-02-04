VictoryRoad_1F_MapScripts::
	.byte 0

VictoryRoad_1F_EventScript_Edgar::
	trainerbattle_single TRAINER_EDGAR, VictoryRoad_1F_Text_EdgarIntro, VictoryRoad_1F_Text_EdgarDefeat
	msgbox VictoryRoad_1F_Text_EdgarPostBattle, MSGBOX_AUTOCLOSE
	end

VictoryRoad_1F_EventScript_Albert::
	trainerbattle_single TRAINER_ALBERT, VictoryRoad_1F_Text_AlbertIntro, VictoryRoad_1F_Text_AlbertDefeat
	msgbox VictoryRoad_1F_Text_AlbertPostBattle, MSGBOX_AUTOCLOSE
	end

VictoryRoad_1F_EventScript_Hope::
	trainerbattle_single TRAINER_HOPE, VictoryRoad_1F_Text_HopeIntro, VictoryRoad_1F_Text_HopeDefeat
	msgbox VictoryRoad_1F_Text_HopePostBattle, MSGBOX_AUTOCLOSE
	end

VictoryRoad_1F_EventScript_Quincy::
	trainerbattle_single TRAINER_QUINCY, VictoryRoad_1F_Text_QuincyIntro, VictoryRoad_1F_Text_QuincyDefeat
	msgbox VictoryRoad_1F_Text_QuincyPostBattle, MSGBOX_AUTOCLOSE
	end

VictoryRoad_1F_EventScript_Katelynn::
	trainerbattle_single TRAINER_KATELYNN, VictoryRoad_1F_Text_KatelynnIntro, VictoryRoad_1F_Text_KatelynnDefeat
	msgbox VictoryRoad_1F_Text_KatelynnPostBattle, MSGBOX_AUTOCLOSE
	end

VictoryRoad_1F_Text_EdgarIntro:
	.string "Thought you could sneak past me, huh?$"

VictoryRoad_1F_Text_EdgarDefeat:
	.string "Maybe I should have tried to sneak past\n"
	.string "you instead.$"

VictoryRoad_1F_Text_EdgarPostBattle:
	.string "Victory Road gets a little more complex\n"
	.string "past this point.\p"
	.string "Good luck, you'll need it.$"

VictoryRoad_1F_Text_AlbertIntro:
	.string "Hey, another red headed TRAINER!\p"
	.string "Let's hope you're not as strong as that\n"
	.string "last guy.$"

VictoryRoad_1F_Text_AlbertDefeat:
	.string "Crap, you might actually be stronger\n"
	.string "than the last guy I battled.$"

VictoryRoad_1F_Text_AlbertPostBattle:
	.string "I guess I shouldn't expect to find too\n"
	.string "many easy TRAINERS around here, this is\l"
	.string "Victory Road, afterall.$"

VictoryRoad_1F_Text_HopeIntro:
	.string "You might think you're cool, but are you\n"
	.string "cool enough to be a COOLTRAINER?$"

VictoryRoad_1F_Text_HopeDefeat:
	.string "Ok, I guess you are pretty cool\n"
	.string "afterall.$"

VictoryRoad_1F_Text_HopePostBattle:
	.string "All of us COOLTRAINERS are actually\n"
	.string "just self-proclaimed, so I guess you\l"
	.string "could be one too if you really wanted.$"

VictoryRoad_1F_Text_QuincyIntro:
	.string "I've been training here for years, but\n"
	.string "still haven't defeated the POKéMON\l"
	.string "League.\p"
	.string "What makes you think you can?$"

VictoryRoad_1F_Text_QuincyDefeat:
	.string "I see now, you're just cut from a\n"
	.string "different cloth.$"

VictoryRoad_1F_Text_QuincyPostBattle:
	.string "Maybe I should be following whatever\n"
	.string "training regimen you're on...$"

VictoryRoad_1F_Text_KatelynnIntro:
	.string "They may call this Victory Road, but it\n"
	.string "will only lead to your defeat!$"

VictoryRoad_1F_Text_KatelynnDefeat:
	.string "I guess your defeat won't come at my\n"
	.string "hand...$"

VictoryRoad_1F_Text_KatelynnPostBattle:
	.string "I tried to talk tough, but you ended up\n"
	.string "being really strong.\p"
	.string "Most kids that come through here just\n"
	.string "give up.$"
