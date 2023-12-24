AquaHideout_UnusedRubyMap1_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, AquaHideout_UnusedRubyMap1_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

AquaHideout_UnusedRubyMap1_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
	map_script_2 VAR_ECRUTEAK_STATE, 6, AquaHideout_UnusedRubyMap1_OnFrame
	.2byte 0


AquaHideout_UnusedRubyMap1_OnFrame::
	lock
	delay 30
	playse SE_PIN
	applymovement 1, MagmaHideout_4F_Movement_Exclamation
	applymovement OBJ_EVENT_ID_PLAYER, MagmaHideout_4F_Movement_Exclamation
	waitmovement 0
	waitse
	delay 30
	applymovement 1, AquaHideout_UnusedRubyMap1_Movement_ShaneLookAround
	applymovement OBJ_EVENT_ID_PLAYER, AquaHideout_UnusedRubyMap1_Movement_PlayerLookAround
	waitmovement 0
	msgbox AquaHideout_UnusedRubyMap1_OnFrame_Text_0
	waitmessage
	applymovement OBJ_EVENT_ID_PLAYER, MagmaHideout_4F_Movement_StepRight
	waitmovement 0
	msgbox AquaHideout_UnusedRubyMap1_OnFrame_Text_1
	waitmessage
	closemessage
	delay 20
	playse SE_PIN
	applymovement 1, MagmaHideout_4F_Movement_DamonExclamationDown
	applymovement OBJ_EVENT_ID_PLAYER, MagmaHideout_4F_Movement_DamonExclamationDown
	waitmovement 0
	waitse
	delay 30
	playbgm MUS_RG_ROCKET_HIDEOUT, TRUE
	applymovement 2, AquaHideout_UnusedRubyMap1_Movement_ArianaApproach
	applymovement 3, AquaHideout_UnusedRubyMap1_Movement_DamonApproach
	waitmovement 0
	msgbox AquaHideout_UnusedRubyMap1_OnFrame_Text_2
	waitmessage
	applymovement 3, AquaHideout_UnusedRubyMap1_Movement_StepLeft
	waitmovement 0
	msgbox AquaHideout_UnusedRubyMap1_OnFrame_Text_3
	applymovement 1, MagmaHideout_4F_Movement_StepDown
	waitmovement 0
	msgbox AquaHideout_UnusedRubyMap1_OnFrame_Text_4
	waitmessage
	applymovement 3, MagmaHideout_4F_Movement_StepUp
	waitmovement 0
	msgbox AquaHideout_UnusedRubyMap1_OnFrame_Text_5
	waitmessage
	applymovement 2, MagmaHideout_4F_Movement_StepUp
	waitmovement 0
	msgbox AquaHideout_UnusedRubyMap1_OnFrame_Text_6
	waitmessage
	goto AquaHideout_UnusedRubyMap1_BattlePrompt
	return


AquaHideout_UnusedRubyMap1_BattlePrompt::
	applymovement 1, AquaHideout_UnusedRubyMap1_Movement_StepLeft
	applymovement OBJ_EVENT_ID_PLAYER, MagmaHideout_4F_Movement_StepRight
	waitmovement 0
	msgbox AquaHideout_UnusedRubyMap1_BattlePrompt_Text_0
	waitmessage
	closemessage
	goto AquaHideout_UnusedRubyMap1_ChooseParty
	return


AquaHideout_UnusedRubyMap1_ChooseParty::
	special SavePlayerParty
	fadescreen FADE_TO_BLACK
	special ChooseHalfPartyForBattle
	waitstate
	goto_if_ne VAR_RESULT, 0, AquaHideout_UnusedRubyMap1_DoBattle
	special LoadPlayerParty
	goto AquaHideout_UnusedRubyMap1_BattlePrompt
	return


AquaHideout_UnusedRubyMap1_DoBattle::
	applymovement 1, MagmaHideout_4F_Movement_StepDown
	applymovement OBJ_EVENT_ID_PLAYER, MagmaHideout_4F_Movement_StepDown
	waitmovement 0
	applymovement 2, AquaHideout_UnusedRubyMap1_Movement_Up1
	applymovement 3, AquaHideout_UnusedRubyMap1_Movement_Up1
	waitmovement 0
	multi_2_vs_2 TRAINER_MAXIE_MOSSDEEP, AquaHideout_UnusedRubyMap1_Text_ArianaDefeat, TRAINER_TABITHA_MAGMA_HIDEOUT, AquaHideout_UnusedRubyMap1_Text_DamonDefeat, TRAINER_MAY_RUSTBORO_TREECKO, TRAINER_BACK_PIC_WALLY
	specialvar VAR_RESULT, GetBattleOutcome
	compare VAR_RESULT, B_OUTCOME_LOST
	goto_if_eq AquaHideout_UnusedRubyMap1_PlayerLostTheFight
	delay 30
	addvar VAR_ECRUTEAK_STATE, 1
	fadescreenspeed FADE_TO_WHITE, 8
	playbgm MUS_RAYQUAZA_APPEARS, FALSE
	setwarp MAP_MAGMA_HIDEOUT_4F, 9, 8
	special TimeTravelForwardClock
	waitstate
	fadedefaultbgm
	release
	end


AquaHideout_UnusedRubyMap1_PlayerLostTheFight::
	fadescreen FADE_TO_BLACK
	special SetCB2WhiteOut
	waitstate
	release
	end


AquaHideout_UnusedRubyMap1_Movement_ShaneLookAround:
	walk_in_place_right
	delay_16
	delay_16
	walk_in_place_left
	step_end

AquaHideout_UnusedRubyMap1_Movement_PlayerLookAround:
	walk_in_place_left
	delay_16
	delay_16
	walk_in_place_right
	delay_16
	delay_16
	walk_right
	step_end

AquaHideout_UnusedRubyMap1_Movement_ArianaApproach:
	walk_up
	walk_up
	walk_up
	walk_up
	walk_left
	walk_left
	walk_left
	walk_left
	walk_in_place_up
	step_end

AquaHideout_UnusedRubyMap1_Movement_DamonApproach:
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_left
	walk_left
	walk_left
	walk_in_place_up
	step_end

AquaHideout_UnusedRubyMap1_Movement_StepLeft:
	walk_in_place_left
	step_end

AquaHideout_UnusedRubyMap1_Movement_Up1:
	walk_up
	step_end

AquaHideout_UnusedRubyMap1_OnFrame_Text_0:
	.string "SHANE: What the hell just happened?\p"
	.string "How did we get outside, and where are\n"
	.string "we? Some town?$"

AquaHideout_UnusedRubyMap1_OnFrame_Text_1:
	.string "...\p"
	.string "...\p"
	.string "SHANE: You say you've experienced\n"
	.string "something similar before?\p"
	.string "This is all too weird...$"

AquaHideout_UnusedRubyMap1_OnFrame_Text_2:
	.string "ARIANA: Well, this is quite the surprise!\p"
	.string "I wasn't expecting the two of you to\n"
	.string "get drawn into the past with us.\p"
	.string "Celebi's doing, perhaps...?\p"
	.string "No matter, you children need to be\n"
	.string "taught some manners anyway.\p"
	.string "We'll take care of you and then RED!$"

AquaHideout_UnusedRubyMap1_OnFrame_Text_3:
	.string "DAMON: Keep your guard up, Ma'am.\p"
	.string "These brats are tougher than they look.$"

AquaHideout_UnusedRubyMap1_OnFrame_Text_4:
	.string "SHANE: You're damn right, we are!$"

AquaHideout_UnusedRubyMap1_OnFrame_Text_5:
	.string "ARIANA: I don't care how tough they\n"
	.string "are!$"

AquaHideout_UnusedRubyMap1_OnFrame_Text_6:
	.string "I've dreamed of this moment for years,\n"
	.string "and I'll be damned if a couple of\l"
	.string "children stop me this close to my goal!\p"
	.string "Come on, DAMON, let's show them the true\n"
	.string "meaning of fear!$"

AquaHideout_UnusedRubyMap1_BattlePrompt_Text_0:
	.string "SHANE: Pick your party members, let's\n"
	.string "destroy these nerds!$"

AquaHideout_UnusedRubyMap1_Text_ArianaDefeat::
	.string "ARIANA: No... This can't be...\p"
	.string "GIOVANNI...$"

AquaHideout_UnusedRubyMap1_Text_DamonDefeat::
	.string "DAMON: This isn't over yet, you brats\n"
	.string "will pay for this insolence!$"
