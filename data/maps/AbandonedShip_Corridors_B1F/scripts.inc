AbandonedShip_Corridors_B1F_MapScripts::
	.byte 0

AbandonedShip_Corridors_B1F_EventScript_Duncan::
	trainerbattle_single TRAINER_DUNCAN, AbandonedShip_Corridors_B1F_Text_DuncanIntro, AbandonedShip_Corridors_B1F_Text_DuncanDefeat
	msgbox AbandonedShip_Corridors_B1F_Text_DuncanPostBattle, MSGBOX_AUTOCLOSE
	end

AbandonedShip_Corridors_1F_EventScript_Charlie::
	trainerbattle_single TRAINER_CHARLIE, AbandonedShip_Corridors_1F_Text_CharlieIntro, AbandonedShip_Corridors_1F_Text_CharlieDefeat
	msgbox AbandonedShip_Corridors_1F_Text_CharliePostBattle, MSGBOX_AUTOCLOSE
	end

AbandonedShip_Corridors_B1F_Text_DuncanIntro:
	.string "We got word about some intruders in the\n"
	.string "hideout!$"

AbandonedShip_Corridors_B1F_Text_DuncanDefeat:
	.string "Oh, you got me!$"

AbandonedShip_Corridors_B1F_Text_DuncanPostBattle:
	.string "Fine then, feel free to walk around our\n"
	.string "hideout!\p"
	.string "Heh, it won't do you any good anyway.\p"
	.string "You don't have the passcode to get\n"
	.string "downstairs.$"

AbandonedShip_Corridors_1F_Text_CharlieIntro:
	.string "Oh great, this kid again...$"

AbandonedShip_Corridors_1F_Text_CharlieDefeat:
	.string "Yeah, that's what I figured...$"

AbandonedShip_Corridors_1F_Text_CharliePostBattle:
	.string "Are you just following us around,\n"
	.string "ruining all of our plans, or what?$"

