VictoryRoad_B1F_MapScripts::
	.byte 0

VictoryRoad_B1F_EventScript_Samuel::
	trainerbattle_single TRAINER_SAMUEL, VictoryRoad_B1F_Text_SamuelIntro, VictoryRoad_B1F_Text_SamuelDefeat
	msgbox VictoryRoad_B1F_Text_SamuelPostBattle, MSGBOX_AUTOCLOSE
	end

VictoryRoad_B1F_EventScript_Shannon::
	trainerbattle_single TRAINER_SHANNON, VictoryRoad_B1F_Text_ShannonIntro, VictoryRoad_B1F_Text_ShannonDefeat
	msgbox VictoryRoad_B1F_Text_ShannonPostBattle, MSGBOX_AUTOCLOSE
	end

VictoryRoad_B1F_EventScript_Michelle::
	trainerbattle_single TRAINER_MICHELLE, VictoryRoad_B1F_Text_MichelleIntro, VictoryRoad_B1F_Text_MichelleDefeat
	msgbox VictoryRoad_B1F_Text_MichellePostBattle, MSGBOX_AUTOCLOSE
	end

VictoryRoad_B1F_EventScript_Mitchell::
	trainerbattle_single TRAINER_MITCHELL, VictoryRoad_B1F_Text_MitchellIntro, VictoryRoad_B1F_Text_MitchellDefeat
	msgbox VictoryRoad_B1F_Text_MitchellPostBattle, MSGBOX_AUTOCLOSE
	end

VictoryRoad_B1F_EventScript_Halle::
	trainerbattle_single TRAINER_HALLE, VictoryRoad_B1F_Text_HalleIntro, VictoryRoad_B1F_Text_HalleDefeat
	msgbox VictoryRoad_B1F_Text_HallePostBattle, MSGBOX_AUTOCLOSE
	end

VictoryRoad_B1F_Text_SamuelIntro:
	.string "My POKéMON are just itching for a\n"
	.string "battle!$"

VictoryRoad_B1F_Text_SamuelDefeat:
	.string "I don't think my POKéMON were itching\n"
	.string "to lose...$"

VictoryRoad_B1F_Text_SamuelPostBattle:
	.string "Maybe my POKéMON just aren't ready for\n"
	.string "the POKéMON League yet...$"

VictoryRoad_B1F_Text_ShannonIntro:
	.string "And just where do you think you're\n"
	.string "going?$"

VictoryRoad_B1F_Text_ShannonDefeat:
	.string "Fine then, be on your way.$"

VictoryRoad_B1F_Text_ShannonPostBattle:
	.string "I thought I could wait here to ambush\n"
	.string "weaker TRAINERS walking by, but you\l"
	.string "were too strong for me.$"

VictoryRoad_B1F_Text_MichelleIntro:
	.string "That determined look in your eyes...\p"
	.string "Let's battle!$"

VictoryRoad_B1F_Text_MichelleDefeat:
	.string "That's the way!$"

VictoryRoad_B1F_Text_MichellePostBattle:
	.string "I like to train by battling the other\n"
	.string "TRAINERS here in Victory Road.\p"
	.string "We help each other get stronger.$"

VictoryRoad_B1F_Text_MitchellIntro:
	.string "I fell through the floor, and now I'm\n"
	.string "lost!$"

VictoryRoad_B1F_Text_MitchellDefeat:
	.string "Lost and defeated...$"

VictoryRoad_B1F_Text_MitchellPostBattle:
	.string "Maybe I should just go home...\p"
	.string "I need to catch up on the latest\n"
	.string "episodes of The Challenge anyway.$"

VictoryRoad_B1F_Text_HalleIntro:
	.string "Are you lost, kid?\p"
	.string "This is Victory Road!$"

VictoryRoad_B1F_Text_HalleDefeat:
	.string "Fine, fine, I guess you're strong enough\n"
	.string "to be here.$"

VictoryRoad_B1F_Text_HallePostBattle:
	.string "I came here from Kanto, but I'm kind of\n"
	.string "stuck now.\p"
	.string "The path back to Kanto seems to be\n"
	.string "blocked off.$"

