AquaHideout_B1F_MapScripts::
	.byte 0


AquaHideout_B1F_EventScript_Grunt2::
	trainerbattle_single TRAINER_GRUNT_AQUA_HIDEOUT_2, AquaHideout_B1F_Text_Grunt2Intro, AquaHideout_B1F_Text_Grunt2Defeat, AquaHideout_B1F_EventScript_Grunt2Defeated
	msgbox AquaHideout_B1F_Text_Grunt2PostBattle, MSGBOX_AUTOCLOSE
	end

AquaHideout_B1F_EventScript_Grunt2Defeated::
	special PlayerFaceTrainerAfterBattle
	waitmovement 0
	msgbox AquaHideout_B1F_Text_Grunt2PostBattle, MSGBOX_DEFAULT
	release
	end

AquaHideout_B1F_EventScript_Grunt3::
	trainerbattle_single TRAINER_GRUNT_AQUA_HIDEOUT_3, AquaHideout_B1F_Text_Grunt3Intro, AquaHideout_B1F_Text_Grunt3Defeat, AquaHideout_B1F_EventScript_Grunt3Defeated
	msgbox AquaHideout_B1F_Text_Grunt3PostBattle, MSGBOX_AUTOCLOSE
	end

AquaHideout_B1F_EventScript_Grunt3Defeated::
	msgbox AquaHideout_B1F_Text_Grunt3PostBattle, MSGBOX_DEFAULT
	release
	end

AquaHideout_B1F_EventScript_Grunt5::
	trainerbattle_single TRAINER_GRUNT_AQUA_HIDEOUT_5, AquaHideout_B1F_Text_Grunt5Intro, AquaHideout_B1F_Text_Grunt5Defeat
	msgbox AquaHideout_B1F_Text_Grunt5PostBattle, MSGBOX_AUTOCLOSE
	end

AquaHideout_B1F_EventScript_Grunt7::
	trainerbattle_single TRAINER_GRUNT_AQUA_HIDEOUT_7, AquaHideout_B1F_Text_Grunt7Intro, AquaHideout_B1F_Text_Grunt7Defeat
	msgbox AquaHideout_B1F_Text_Grunt7PostBattle, MSGBOX_AUTOCLOSE
	end

AquaHideout_B1F_Text_Grunt2Intro:
	.string "I will show you what a true bond\n"
	.string "between person and POKéMON can\l"
	.string "accomplish.$"

AquaHideout_B1F_Text_Grunt2Defeat:
	.string "My bond…$"

AquaHideout_B1F_Text_Grunt2PostBattle:
	.string "Perhaps your bond is stronger than\n"
	.string "mine.$"

AquaHideout_B1F_Text_Grunt3Intro:
	.string "Headed to the upper floor are you?$"

AquaHideout_B1F_Text_Grunt3Defeat:
	.string "Outstanding.$"

AquaHideout_B1F_Text_Grunt3PostBattle:
	.string "Go on, you are ready for the upper\n"
	.string "floor.$"

AquaHideout_B1F_Text_Grunt5Intro:
	.string "Are you a fan of the almighty\n"
	.string "Bellsprout as well?$"

AquaHideout_B1F_Text_Grunt5Defeat:
	.string "Superb…$"

AquaHideout_B1F_Text_Grunt5PostBattle:
	.string "The almighty Bellsprout smiles upon\n"
	.string "you.$"

AquaHideout_B1F_Text_Grunt7Intro:
	.string "Are you not here to praise the Sprout!?$"

AquaHideout_B1F_Text_Grunt7Defeat:
	.string "One can truly praise the Sprout after\n"
	.string "experiencing great loss.$"

AquaHideout_B1F_Text_Grunt7PostBattle:
	.string "I live only to serve the Sprout.$"
