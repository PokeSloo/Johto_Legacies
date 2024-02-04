VictoryRoad_B2F_MapScripts::
	.byte 0

VictoryRoad_B2F_EventScript_Vito::
	trainerbattle_single TRAINER_VITO, VictoryRoad_B2F_Text_VitoIntro, VictoryRoad_B2F_Text_VitoDefeat
	msgbox VictoryRoad_B2F_Text_VitoPostBattle, MSGBOX_AUTOCLOSE
	end

VictoryRoad_B2F_EventScript_Owen::
	trainerbattle_single TRAINER_OWEN, VictoryRoad_B2F_Text_OwenIntro, VictoryRoad_B2F_Text_OwenDefeat
	msgbox VictoryRoad_B2F_Text_OwenPostBattle, MSGBOX_AUTOCLOSE
	end

VictoryRoad_B2F_EventScript_Caroline::
	trainerbattle_single TRAINER_CAROLINE, VictoryRoad_B2F_Text_CarolineIntro, VictoryRoad_B2F_Text_CarolineDefeat
	msgbox VictoryRoad_B2F_Text_CarolinePostBattle, MSGBOX_AUTOCLOSE
	end

VictoryRoad_B2F_EventScript_Julie::
	trainerbattle_single TRAINER_JULIE, VictoryRoad_B2F_Text_JulieIntro, VictoryRoad_B2F_Text_JulieDefeat
	msgbox VictoryRoad_B2F_Text_JuliePostBattle, MSGBOX_AUTOCLOSE
	end

VictoryRoad_B2F_EventScript_Felix::
	trainerbattle_single TRAINER_FELIX, VictoryRoad_B2F_Text_FelixIntro, VictoryRoad_B2F_Text_FelixDefeat
	msgbox VictoryRoad_B2F_Text_FelixPostBattle, MSGBOX_AUTOCLOSE
	end

VictoryRoad_B2F_EventScript_Dianne::
	trainerbattle_single TRAINER_DIANNE, VictoryRoad_B2F_Text_DianneIntro, VictoryRoad_B2F_Text_DianneDefeat
	msgbox VictoryRoad_B2F_Text_DiannePostBattle, MSGBOX_AUTOCLOSE
	end

VictoryRoad_B2F_Text_VitoIntro:
	.string "Now that I'm this close to the POKéMON\n"
	.string "League, I'm feeling nervous.\p"
	.string "Maybe beating you will raise my\n"
	.string "confidence!$"

VictoryRoad_B2F_Text_VitoDefeat:
	.string "Wait... Now I feel even worse!$"

VictoryRoad_B2F_Text_VitoPostBattle:
	.string "I heard the POKéMON League is really\n"
	.string "tough to beat.\p"
	.string "Aren't you even a little bit nervous?$"

VictoryRoad_B2F_Text_OwenIntro:
	.string "You think you're ready to take on the\n"
	.string "POKéMON League?\p"
	.string "Don't make me laugh!$"

VictoryRoad_B2F_Text_OwenDefeat:
	.string "I'm not laughing now...$"

VictoryRoad_B2F_Text_OwenPostBattle:
	.string "You're a lot stronger than you look, kid.\p"
	.string "I'll admit, you'll probably do better\n"
	.string "against the POKéMON League than I\l"
	.string "would.$"

VictoryRoad_B2F_Text_CarolineIntro:
	.string "Hey, I finally found an easy opponent!$"

VictoryRoad_B2F_Text_CarolineDefeat:
	.string "That wasn't easy at all!$"

VictoryRoad_B2F_Text_CarolinePostBattle:
	.string "I thought I could get an easy win from\n"
	.string "you, but you're much tougher than you\l"
	.string "look.$"

VictoryRoad_B2F_Text_JulieIntro:
	.string "Hey!\p"
	.string "We're getting close to the exit!$"

VictoryRoad_B2F_Text_JulieDefeat:
	.string "You're not half bad, kid!$"

VictoryRoad_B2F_Text_JuliePostBattle:
	.string "I thought I could pick off worn out\n"
	.string "TRAINERS at the end of Victory Road,\l"
	.string "but my strategy hasn't worked very well\l"
	.string "yet.$"

VictoryRoad_B2F_Text_FelixIntro:
	.string "Do you prefer single battles, or double?$"

VictoryRoad_B2F_Text_FelixDefeat:
	.string "Oh! I see now!$"

VictoryRoad_B2F_Text_FelixPostBattle:
	.string "I like double battles alongside other\n"
	.string "TRAINERS.\p"
	.string "It's nice to work as a team.$"

VictoryRoad_B2F_Text_DianneIntro:
	.string "So, you will take us on?\p"
	.string "How brave of you!$"

VictoryRoad_B2F_Text_DianneDefeat:
	.string "So that's why you were so confident...$"

VictoryRoad_B2F_Text_DiannePostBattle:
	.string "You're a wonderfully powerful TRAINER.\p"
	.string "I'm sure you will accomplish anything\n"
	.string "you set your mind to.$"

