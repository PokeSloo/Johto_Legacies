BattleFrontier_BattleDomePreBattleRoom_MapScripts::
	.byte 0


BattleFrontier_BattleDomePreBattleRoom_EventScript_Shane::
	lock
	faceplayer
	playbgm MUS_HG_ENCOUNTER_RIVAL, FALSE
	msgbox BattleFrontier_BattleDomePreBattleRoom_EventScript_Shane_Text_0
	trainerbattle_no_intro TRAINER_BRENDAN_ROUTE_110_TREECKO, BattleFrontier_BattleDomePreBattleRoom_Text_ShaneDefeat
	msgbox BattleFrontier_BattleDomePreBattleRoom_EventScript_Shane_Text_1
	waitmessage
	closemessage
	setflag FLAG_GOLDENROD_SEWER_OPEN
	setflag FLAG_HIDE_CELL_KEY
	setrespawn HEAL_LOCATION_MIRAGE_TOWER_4F
	fadeoutbgm 1
	playse SE_PIN
	applymovement 1, BattleFrontier_BattleDomePreBattleRoom_ExclamationRight
	applymovement OBJ_EVENT_ID_PLAYER, BattleFrontier_BattleDomePreBattleRoom_ExclamationRight
	waitmovement 0
	delay 60
	waitse
	addobject 2
	applymovement 2, BattleFrontier_BattleDomePreBattleRoom_HypnoApproach
	waitmovement 0
	delay 30
	playmoncry SPECIES_HYPNO, CRY_MODE_NORMAL
	waitmoncry
	special DoOrbEffect
	delay 120
	fadescreenspeed FADE_TO_BLACK, 14
	delay 30
	fadeinbgm 10
	warpsilent MAP_MIRAGE_TOWER_4F, 9, 3
	waitstate
	release
	end


BattleFrontier_BattleDomePreBattleRoom_HypnoApproach:
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	step_end

BattleFrontier_BattleDomePreBattleRoom_ExclamationRight:
	emote_question_mark
	walk_in_place_fast_right
	step_end

BattleFrontier_BattleDomePreBattleRoom_EventScript_Shane_Text_0:
	.string "SHANE: Well well, I'm surprised to see\n"
	.string "you here.\p"
	.string "WHITNEY must have gone back to her\n"
	.string "dressing room.\p"
	.string "This is my chance to finally meet her in\n"
	.string "person!\p"
	.string "I know, I'll impress her with how\n"
	.string "talented I am at battling, but first,\l"
	.string "I'll use you as a warm-up!$"

BattleFrontier_BattleDomePreBattleRoom_EventScript_Shane_Text_1:
	.string "This can't be right...\p"
	.string "You must have cheated somehow...\p"
	.string "There's no way you could get that\n"
	.string "strong in so little time...$"

BattleFrontier_BattleDomePreBattleRoom_Text_ShaneDefeat::
	.string "What? No way!\n"
	.string "How could I lose to a wimp like you?$"
