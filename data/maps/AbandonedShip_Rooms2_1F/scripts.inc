AbandonedShip_Rooms2_1F_MapScripts::
	.byte 0

AbandonedShip_Rooms2_1F_EventScript_Dan::
	trainerbattle_single TRAINER_KIRA_AND_DAN_1, AbandonedShip_Rooms2_1F_Text_DanIntro, AbandonedShip_Rooms2_1F_Text_DanDefeat
	msgbox AbandonedShip_Rooms2_1F_Text_DanPostBattle, MSGBOX_AUTOCLOSE
	end

AbandonedShip_Rooms2_1F_EventScript_Jani::
	trainerbattle_single TRAINER_JANI, AbandonedShip_Rooms2_1F_Text_JaniIntro, AbandonedShip_Rooms2_1F_Text_JaniDefeat
	msgbox AbandonedShip_Rooms2_1F_Text_JaniPostBattle, MSGBOX_AUTOCLOSE
	end

AbandonedShip_Rooms2_1F_EventScript_Garrison::
	trainerbattle_single TRAINER_GARRISON, AbandonedShip_Rooms2_1F_Text_GarrisonIntro, AbandonedShip_Rooms2_1F_Text_GarrisonDefeat
	msgbox AbandonedShip_Rooms2_1F_Text_GarrisonPostBattle, MSGBOX_AUTOCLOSE
	end

AbandonedShip_Rooms2_1F_Text_DanIntro:
	.string "Hey, I remember you!$"

AbandonedShip_Rooms2_1F_Text_DanDefeat:
	.string "Yep, just like last time...$"

AbandonedShip_Rooms2_1F_Text_DanPostBattle:
	.string "They transferred me here from the\n"
	.string "Goldenrod base after it got shut down.\p"
	.string "I didn't think I'd have to see you again.$"

AbandonedShip_Rooms2_1F_Text_JaniIntro:
	.string "Excuse me?\p"
	.string "Who gave you permission to use our warp\n"
	.string "pads!?$"

AbandonedShip_Rooms2_1F_Text_JaniDefeat:
	.string "Oh, you're actually pretty strong!$"

AbandonedShip_Rooms2_1F_Text_JaniPostBattle:
	.string "You think you don't need permission to\n"
	.string "run around our base just because you're\l"
	.string "strong?$"

AbandonedShip_Rooms2_1F_Text_GarrisonIntro:
	.string "Come on kid, we're trying to run a\n"
	.string "business here!$"

AbandonedShip_Rooms2_1F_Text_GarrisonDefeat:
	.string "You just can't help but get in our way,\n"
	.string "can you?$"

AbandonedShip_Rooms2_1F_Text_GarrisonPostBattle:
	.string "Look, I know POKéMON smuggling isn't\n"
	.string "the most ethical business, but hey, at\l"
	.string "least there are a lot more cool POKéMON\l"
	.string "across Johto, right?$"
