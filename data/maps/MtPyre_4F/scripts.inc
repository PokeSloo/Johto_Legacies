MtPyre_4F_MapScripts::
	.byte 0

@ Seems like the scripts for the 4F and 5F were swapped

MtPyre_4F_EventScript_Tasha::
	trainerbattle_single TRAINER_TASHA, MtPyre_4F_Text_TashaIntro, MtPyre_4F_Text_TashaDefeat
	msgbox MtPyre_4F_Text_TashaPostBattle, MSGBOX_AUTOCLOSE
	end

MtPyre_4F_Text_TashaIntro:
	.string "Go back from whence you came!$"

MtPyre_4F_Text_TashaDefeat:
	.string "I'm sorry, I thought you were a spirit…$"

MtPyre_4F_Text_TashaPostBattle:
	.string "Children shouldn't play around in these\n"
	.string "sacred ruins.$"

