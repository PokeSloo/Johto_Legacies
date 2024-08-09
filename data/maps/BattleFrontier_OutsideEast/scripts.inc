BattleFrontier_OutsideEast_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, BattleFrontier_OutsideEast_OnTransition
	.byte 0

BattleFrontier_OutsideEast_OnTransition:
	setvar VAR_BRAVO_TRAINER_BATTLE_TOWER_ON, 0
	setflag FLAG_HIDE_BATTLE_TOWER_REPORTER
	setflag FLAG_LANDMARK_BATTLE_FRONTIER
	end

BattleFrontier_OutsideEast_EventScript_BattleTowerSign::
	msgbox BattleFrontier_OutsideEast_Text_BattleTowerSign, MSGBOX_SIGN
	end

BattleFrontier_OutsideEast_EventScript_Man3::
	msgbox BattleFrontier_OutsideEast_Text_GotWipedOut, MSGBOX_NPC
	end

BattleFrontier_OutsideEast_EventScript_Woman1::
	msgbox BattleFrontier_OutsideEast_Text_ToughTrainerInBattleTower, MSGBOX_NPC
	end

BattleFrontier_OutsideEast_EventScript_BlackBelt2::
	msgbox BattleFrontier_OutsideEast_Text_LikeToHaveNameRecordedHere, MSGBOX_NPC
	end

BattleFrontier_OutsideEast_Text_BattleTowerSign:
	.string "BATTLE TOWER\n"
	.string "Keep the win streak going and become\l"
	.string "the greatest TRAINER!$"

BattleFrontier_OutsideEast_Text_GotWipedOut:
	.string "You really need a strategy before\n"
	.string "entering the Battle Tower.\p"
	.string "You're likely to lose if you go in\n"
	.string "unprepared.$"

BattleFrontier_OutsideEast_Text_ToughTrainerInBattleTower:
	.string "The Battle Tower is pretty tough, but\n"
	.string "at least they have some good prizes.\p"
	.string "I picked up a few extra Master Balls\n"
	.string "myself!$"

BattleFrontier_OutsideEast_Text_LikeToHaveNameRecordedHere:
	.string "As many times as I've tried, I still can't\n"
	.string "manage to get even two wins in a row.\p"
	.string "I'll never be able to face my dojo\n"
	.string "again...$"

