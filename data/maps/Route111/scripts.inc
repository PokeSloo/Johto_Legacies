Route111_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route111_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

Route111_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	setflag FLAG_HIDE_SHANE_MT_TEMPEST
	end


Route111_EventScript_PhoenixTrigger::
	lock
	goto_if_set FLAG_DEFEATED_PHOENIX_MT_TEMPEST, Route111_EventScript_PhoenixTrigger_1
	delay 30
	waitse
	playse SE_BALL_THROW
	waitse
	playse SE_BALL_TRADE
	waitse
	addobject 31
	removeobject 3
	setflag FLAG_HIDE_JIRACHI
	delay 20
	playse SE_BALL_BOUNCE_1
	waitse
	playse SE_BALL_BOUNCE_2
	waitse
	playse SE_BALL_BOUNCE_3
	waitse
	delay 30
	playse SE_CLICK
	waitse
	delay 30
	removeobject 31
	playbgm MUS_RG_ROCKET_HIDEOUT, TRUE
	delay 30
	applymovement 2, Route111_Movement_StepDown
	waitmovement 0
	applymovement 1, Route111_Movement_StepDown
	applymovement 29, Route111_Movement_StepDown
	waitmovement 0
	msgbox Route111_EventScript_PhoenixTrigger_Text_0
	waitmessage
	applymovement 2, Route111_Movement_StepDown
	waitmovement 0
	checkplayergender
	compare VAR_RESULT, MALE
	goto_if_eq Route111_EventScript_PhoenixTrigger_5
	compare VAR_RESULT, FEMALE
	goto_if_eq Route111_EventScript_PhoenixTrigger_6
Route111_EventScript_PhoenixTrigger_4:
	applymovement 1, Route111_Movement_StepDown
	applymovement 29, Route111_Movement_StepDown
	waitmovement 0
	msgbox Route111_EventScript_PhoenixTrigger_Text_1
	waitmessage
	applymovement 2, Route111_Movement_StepDown
	waitmovement 0
	msgbox Route111_EventScript_PhoenixTrigger_Text_2
	waitmessage
	closemessage
	setfieldeffectargument 0, 2
	dofieldeffect FLDEFF_NPCFLY_OUT
	delay 15
	removeobject 2
	waitfieldeffect FLDEFF_NPCFLY_OUT
	setflag FLAG_HIDE_THORNE_MT_TEMPEST
	delay 30
	applymovement 1, Route111_Movement_StepDown
	waitmovement 0
	msgbox Route111_EventScript_PhoenixTrigger_Text_3
	waitmessage
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, Route111_Movement_StepDown
	waitmovement 0
	clearflag FLAG_HIDE_SHANE_MT_TEMPEST
	addobject 30
	applymovement 30, Route111_Movement_ShaneToPlayer
	waitmovement 0
	msgbox Route111_EventScript_PhoenixTrigger_Text_4
	waitmessage
	goto Route111_EventScript_BattlePrompt
	return

Route111_EventScript_PhoenixTrigger_1:
	release
	end

Route111_EventScript_PhoenixTrigger_5:
	call Route111_EventScript_MalePlayer
	goto Route111_EventScript_PhoenixTrigger_4

Route111_EventScript_PhoenixTrigger_6:
	call Route111_EventScript_FemalePlayer
	goto Route111_EventScript_PhoenixTrigger_4


Route111_EventScript_MalePlayer::
	msgbox Route111_EventScript_MalePlayer_Text_0
	return


Route111_EventScript_FemalePlayer::
	msgbox Route111_EventScript_FemalePlayer_Text_0
	return


Route111_EventScript_BattlePrompt::
	msgbox Route111_EventScript_BattlePrompt_Text_0
	waitmessage
	closemessage
	goto Route111_EventScript_ChooseParty
	return


Route111_EventScript_ChooseParty::
	special SavePlayerParty
	fadescreen FADE_TO_BLACK
	special ChooseHalfPartyForBattle
	waitstate
	goto_if_ne VAR_RESULT, 0, Route111_EventScript_DoBattle
	special LoadPlayerParty
	goto Route111_EventScript_BattlePrompt
	return


Route111_EventScript_DoBattle::
	applymovement 30, Route111_Movement_ShaneStepUp
	applymovement OBJ_EVENT_ID_PLAYER, Route111_Movement_PlayerStepLeft
	waitmovement 0
	applymovement 29, Route111_Movement_StepDown
	waitmovement 0
	msgbox Route111_EventScript_DoBattle_Text_0
	waitmessage
	closemessage
	applymovement 1, Route111_Movement_Grunt1toPlayer
	applymovement 29, Route111_Movement_Grunt2toShane
	waitmovement 0
	multi_2_vs_2 TRAINER_BRENDAN_LILYCOVE_MUDKIP, Route111_EventScript_Text_Grunt1Defeat, TRAINER_BRENDAN_LILYCOVE_TREECKO, Route111_EventScript_Text_Grunt2Defeat, TRAINER_BRENDAN_LILYCOVE_TORCHIC, TRAINER_BACK_PIC_WALLY
	specialvar VAR_RESULT, GetBattleOutcome
	compare VAR_RESULT, B_OUTCOME_LOST
	goto_if_eq Route111_EventScript_PlayerLostTheFight
	delay 30
	applymovement 1, Route111_Movement_StepDown
	waitmovement 0
	msgbox Route111_EventScript_DoBattle_Text_1
	waitmessage
	applymovement 30, Route111_Movement_StepUp
	waitmovement 0
	msgbox Route111_EventScript_DoBattle_Text_2
	waitmessage
	closemessage
	setfieldeffectargument 0, 1
	dofieldeffect FLDEFF_NPCFLY_OUT
	delay 15
	removeobject 1
	removeobject 29
	waitfieldeffect FLDEFF_NPCFLY_OUT
	setflag FLAG_DEFEATED_PHOENIX_MT_TEMPEST
	delay 30
	fadedefaultbgm
	applymovement 30, Route111_Movement_StepLeft
	applymovement OBJ_EVENT_ID_PLAYER, Route111_Movement_StepRight
	waitmovement 0
	msgbox Route111_EventScript_DoBattle_Text_3
	waitmessage
	closemessage
	applymovement 30, Route111_Movement_ShaneExit
	waitmovement 0
	removeobject 30
	removeobject 22
	setflag FLAG_HIDE_SHANE_MT_TEMPEST
	clearflag FLAG_HIDE_SILVER_OUTSIDE_ROUJEM
	addvar VAR_LAZULAN_STATE, 1
	release
	end


Route111_EventScript_PlayerLostTheFight::
	fadescreen FADE_TO_BLACK
	clearflag FLAG_HIDE_JIRACHI
	clearflag FLAG_HIDE_THORNE_MT_TEMPEST
	special SetCB2WhiteOut
	waitstate
	release
	end


Route111_Movement_StepDown:
	walk_in_place_down
	step_end

Route111_Movement_StepUp:
	walk_in_place_up
	step_end

Route111_Movement_StepLeft:
	walk_in_place_left
	step_end

Route111_Movement_StepRight:
	walk_in_place_right
	step_end

Route111_Movement_ShaneToPlayer:
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

Route111_Movement_PlayerStepLeft:
	walk_left
	walk_in_place_up
	step_end

Route111_Movement_ShaneStepUp:
	walk_up
	step_end

Route111_Movement_Grunt1toPlayer:
	walk_right
	walk_down
	step_end

Route111_Movement_Grunt2toShane:
	walk_left
	walk_left
	walk_down
	step_end

Route111_Movement_ShaneExit:
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	step_end

Route111_EventScript_Jirachi::
	lock
	waitse
	playmoncry SPECIES_JIRACHI, CRY_MODE_NORMAL
	msgbox Route111_EventScript_Jirachi_Text_0
	waitmessage
	waitmoncry
	setwildbattle SPECIES_JIRACHI, 45
	dowildbattle
	removeobject 3
	setflag FLAG_HIDE_JIRACHI
	release
	end


Route111_EventScript_Man2::
	msgbox Route111_Text_WinstrateFamilyDestroyedMe, MSGBOX_NPC
	end

Route111_EventScript_Drew::
	trainerbattle_single TRAINER_DREW, Route111_Text_DrewIntro, Route111_Text_DrewDefeat
	msgbox Route111_Text_DrewPostBattle, MSGBOX_AUTOCLOSE
	end

Route111_EventScript_Heidi::
	trainerbattle_single TRAINER_HEIDI, Route111_Text_HeidiIntro, Route111_Text_HeidiDefeat
	msgbox Route111_Text_HeidiPostBattle, MSGBOX_AUTOCLOSE
	end

Route111_EventScript_Beau::
	trainerbattle_single TRAINER_BEAU, Route111_Text_BeauIntro, Route111_Text_BeauDefeat
	msgbox Route111_Text_BeauPostBattle, MSGBOX_AUTOCLOSE
	end

Route111_EventScript_Becky::
	trainerbattle_single TRAINER_BECKY, Route111_Text_BeckyIntro, Route111_Text_BeckyDefeat
	msgbox Route111_Text_BeckyPostBattle, MSGBOX_AUTOCLOSE
	end

Route111_EventScript_Dusty::
	trainerbattle_single TRAINER_DUSTY_1, Route111_Text_DustyIntro, Route111_Text_DustyDefeat, Route111_EventScript_RegisterDusty
	specialvar VAR_RESULT, ShouldTryRematchBattle
	goto_if_eq VAR_RESULT, TRUE, Route111_EventScript_RematchDusty
	msgbox Route111_Text_DustyPostBattle, MSGBOX_DEFAULT
	release
	end

Route111_EventScript_RegisterDusty::
	special PlayerFaceTrainerAfterBattle
	waitmovement 0
	msgbox Route111_Text_DustyRegister, MSGBOX_DEFAULT
	register_matchcall TRAINER_DUSTY_1
	release
	end

Route111_EventScript_RematchDusty::
	trainerbattle_rematch TRAINER_DUSTY_1, Route111_Text_DustyRematchIntro, Route111_Text_DustyRematchDefeat
	msgbox Route111_Text_DustyPostRematch, MSGBOX_AUTOCLOSE
	end

Route111_EventScript_Travis::
	trainerbattle_single TRAINER_TRAVIS, Route111_Text_TravisIntro, Route111_Text_TravisDefeat
	msgbox Route111_Text_TravisPostBattle, MSGBOX_AUTOCLOSE
	end

Route111_EventScript_Irene::
	trainerbattle_single TRAINER_IRENE, Route111_Text_IreneIntro, Route111_Text_IreneDefeat
	msgbox Route111_Text_IrenePostBattle, MSGBOX_AUTOCLOSE
	end

Route111_EventScript_Daisuke::
	trainerbattle_single TRAINER_DAISUKE, Route111_Text_DaisukeIntro, Route111_Text_DaisukeDefeat
	msgbox Route111_Text_DaisukePostBattle, MSGBOX_AUTOCLOSE
	end

Route111_EventScript_Wilton::
	trainerbattle_single TRAINER_GRUNT_MT_CHIMNEY_1, Route111_Text_WiltonIntro, Route111_Text_WiltonDefeat
	msgbox Route111_Text_WiltonPostBattle, MSGBOX_AUTOCLOSE
	end

Route111_EventScript_Brooke::
	trainerbattle_single TRAINER_GRUNT_MT_CHIMNEY_2, Route111_Text_BrookeIntro, Route111_Text_BrookeDefeat
	msgbox Route111_Text_BrookePostBattle, MSGBOX_AUTOCLOSE
	end

Route111_EventScript_Hayden::
	trainerbattle_single TRAINER_HAYDEN, Route111_Text_HaydenIntro, Route111_Text_HaydenDefeat
	msgbox Route111_Text_HaydenPostBattle, MSGBOX_AUTOCLOSE
	end

Route111_EventScript_Bianca::
	trainerbattle_single TRAINER_BIANCA, Route111_Text_BiancaIntro, Route111_Text_BiancaDefeat
	msgbox Route111_Text_BiancaPostBattle, MSGBOX_AUTOCLOSE
	end

Route111_EventScript_Tyron::
	trainerbattle_single TRAINER_TYRON, Route111_Text_TyronIntro, Route111_Text_TyronDefeat
	msgbox Route111_Text_TyronPostBattle, MSGBOX_AUTOCLOSE
	end

Route111_EventScript_Celina::
	trainerbattle_single TRAINER_CELINA, Route111_Text_CelinaIntro, Route111_Text_CelinaDefeat
	msgbox Route111_Text_CelinaPostBattle, MSGBOX_AUTOCLOSE
	end

Route111_EventScript_Celia::
	trainerbattle_single TRAINER_CELIA, Route111_Text_CeliaIntro, Route111_Text_CeliaDefeat
	msgbox Route111_Text_CeliaPostBattle, MSGBOX_AUTOCLOSE
	end

Route111_EventScript_Bryan::
	trainerbattle_single TRAINER_BRYAN, Route111_Text_BryanIntro, Route111_Text_BryanDefeat
	msgbox Route111_Text_BryanPostBattle, MSGBOX_AUTOCLOSE
	end

Route111_EventScript_Branden::
	trainerbattle_single TRAINER_BRANDEN, Route111_Text_BrandenIntro, Route111_Text_BrandenDefeat
	msgbox Route111_Text_BrandenPostBattle, MSGBOX_AUTOCLOSE
	end

Route111_Text_WinstrateFamilyDestroyedMe:
	.string "I don't know why I wanted to check out\n"
	.string "this mountain.\p"
	.string "It's way too rainy, and there are\n"
	.string "TRAINERS everywhere!$"

Route111_EventScript_PhoenixTrigger_Text_0:
	.string "THORNE: {PLAYER}, why am I not\n"
	.string "surprised to see you here.\p"
	.string "Fortunately for me, your arrival was\n"
	.string "just a moment too late.\p"
	.string "But I won't waste any time chatting\n"
	.string "with you now.$"

Route111_EventScript_PhoenixTrigger_Text_1:
	.string "GRUNTS: Sir!$"

Route111_EventScript_PhoenixTrigger_Text_2:
	.string "THORNE: {PLAYER}, I hope this will be\n"
	.string "our last meeting.$"

Route111_EventScript_PhoenixTrigger_Text_3:
	.string "GRUNT: I've heard you're tough, but\n"
	.string "don't take us GRUNTS too lightly!\p"
	.string "We've been training as well!\p"
	.string "SHANE: {PLAYER}!$"

Route111_EventScript_PhoenixTrigger_Text_4:
	.string "SHANE: I came to this mountain looking\n"
	.string "for Jirachi, but just found a bunch of\l"
	.string "Team Chicken jerks!\p"
	.string "...\p"
	.string "...\p"
	.string "You say that THORNE guy was here too?\n"
	.string "And he took Jirachi?\p"
	.string "Well why are you just standing around\n"
	.string "here? Let's go after him!\p"
	.string "But first...$"

Route111_EventScript_MalePlayer_Text_0:
	.string "You two, delay him for me!$"

Route111_EventScript_FemalePlayer_Text_0:
	.string "You two, delay her for me!$"

Route111_EventScript_BattlePrompt_Text_0:
	.string "SHANE: Let's destroy these two nerds!\p"
	.string "Pick your party members.$"

Route111_EventScript_DoBattle_Text_0:
	.string "GRUNT: You two sure talk a lot!\p"
	.string "We'll show you just how cheap all your\n"
	.string "talk is!$"

Route111_EventScript_DoBattle_Text_1:
	.string "GRUNT: That's fine, our job was just to\n"
	.string "delay you.\p"
	.string "By now, there's nothing you can do to\n"
	.string "stop THORNE and his plans!$"

Route111_EventScript_DoBattle_Text_2:
	.string "SHANE: We stopped you jerks before,\n"
	.string "and we'll stop you again!$"

Route111_EventScript_DoBattle_Text_3:
	.string "SHANE: Man, these jerks are worse than\n"
	.string "cockroaches!\p"
	.string "Alright, you try and find out where they\n"
	.string "went, I'm going to tell DAD what\l"
	.string "happened.$"

Route111_EventScript_Jirachi_Text_0:
	.string "Jiraaah!$"

Route111_EventScript_Text_Grunt1Defeat::
	.string "So, the rumors are true!$"

Route111_EventScript_Text_Grunt2Defeat::
	.string "How did you two kids get to be so\n"
	.string "strong?$"
