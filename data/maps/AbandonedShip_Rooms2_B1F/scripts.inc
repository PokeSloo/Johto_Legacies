AbandonedShip_Rooms2_B1F_MapScripts::
	.byte 0


AbandonedShip_Rooms2_B1F_EventScript_Feraligatr::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_FERALIGATR, CRY_MODE_NORMAL
	applymovement 3, AbandonedShip_Rooms2_B1F_Movement_Exclamation
	msgbox AbandonedShip_Rooms2_B1F_EventScript_Feraligatr_Text_0
	waitmovement 0
	waitmoncry
	release
	end


AbandonedShip_Rooms2_B1F_Movement_Exclamation:
	emote_exclamation_mark
	step_end

AbandonedShip_Rooms2_B1F_EventScript_Silver::
	lock
	faceplayer
	msgbox AbandonedShip_Rooms2_B1F_EventScript_Silver_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq AbandonedShip_Rooms2_B1F_EventScript_Silver_1
	msgbox AbandonedShip_Rooms2_B1F_EventScript_Silver_Text_2
	waitmessage
	closemessage
	applymovement 2, AbandonedShip_Rooms2_B1F_Movement_SilverToAction
	applymovement 3, AbandonedShip_Rooms2_B1F_Movement_FeraligatrToAction
	specialvar VAR_RESULT, GetPlayerFacingDirection
	compare VAR_RESULT, DIR_WEST
	goto_if_eq AbandonedShip_Rooms2_B1F_EventScript_Silver_5
	applymovement OBJ_EVENT_ID_PLAYER, AbandonedShip_Rooms2_B1F_Movement_PlayerToActionDown
AbandonedShip_Rooms2_B1F_EventScript_Silver_4:
	waitmovement 0
	msgbox AbandonedShip_Rooms2_B1F_EventScript_Silver_Text_3
	waitmessage
	applymovement 2, SootopolisCity_Movement_StepUp
	waitmovement 0
	msgbox AbandonedShip_Rooms2_B1F_EventScript_Silver_Text_4
	waitmessage
	checkplayergender
	compare VAR_RESULT, MALE
	goto_if_eq AbandonedShip_Rooms2_B1F_EventScript_Silver_9
	compare VAR_RESULT, FEMALE
	goto_if_eq AbandonedShip_Rooms2_B1F_EventScript_Silver_10
AbandonedShip_Rooms2_B1F_EventScript_Silver_8:
	applymovement 1, SootopolisCity_Movement_StepDown
	waitmovement 0
	msgbox AbandonedShip_Rooms2_B1F_EventScript_Silver_Text_5
	waitmessage
	applymovement 2, SootopolisCity_Movement_StepUp
	waitmovement 0
	msgbox AbandonedShip_Rooms2_B1F_EventScript_Silver_Text_6
	waitmessage
	applymovement 1, SootopolisCity_Movement_StepDown
	waitmovement 0
	msgbox AbandonedShip_Rooms2_B1F_EventScript_Silver_Text_7
	waitmessage
	applymovement 2, SootopolisCity_Movement_StepRight
	applymovement OBJ_EVENT_ID_PLAYER, SootopolisCity_Movement_StepLeft
	waitmovement 0
	goto AbandonedShip_Rooms2_B1F_EventScript_BattlePrompt
	return

AbandonedShip_Rooms2_B1F_EventScript_Silver_1:
	msgbox AbandonedShip_Rooms2_B1F_EventScript_Silver_Text_1
	release
	end

AbandonedShip_Rooms2_B1F_EventScript_Silver_5:
	applymovement OBJ_EVENT_ID_PLAYER, AbandonedShip_Rooms2_B1F_Movement_PlayerToActionLeft
	goto AbandonedShip_Rooms2_B1F_EventScript_Silver_4

AbandonedShip_Rooms2_B1F_EventScript_Silver_9:
	call AbandonedShip_Rooms2_B1F_EventScript_MalePlayerDad
	goto AbandonedShip_Rooms2_B1F_EventScript_Silver_8

AbandonedShip_Rooms2_B1F_EventScript_Silver_10:
	call AbandonedShip_Rooms2_B1F_EventScript_FemalePlayerDad
	goto AbandonedShip_Rooms2_B1F_EventScript_Silver_8


AbandonedShip_Rooms2_B1F_EventScript_MalePlayerDad::
	msgbox AbandonedShip_Rooms2_B1F_EventScript_MalePlayerDad_Text_0
	return


AbandonedShip_Rooms2_B1F_EventScript_FemalePlayerDad::
	msgbox AbandonedShip_Rooms2_B1F_EventScript_FemalePlayerDad_Text_0
	return


AbandonedShip_Rooms2_B1F_EventScript_BattlePrompt::
	msgbox AbandonedShip_Rooms2_B1F_EventScript_BattlePrompt_Text_0
	waitmessage
	closemessage
	goto AbandonedShip_Rooms2_B1F_EventScript_ChooseParty
	return


AbandonedShip_Rooms2_B1F_EventScript_ChooseParty::
	special SavePlayerParty
	fadescreen FADE_TO_BLACK
	special ChooseHalfPartyForBattle
	waitstate
	goto_if_ne VAR_RESULT, 0, AbandonedShip_Rooms2_B1F_EventScript_DoBattle
	special LoadPlayerParty
	goto AbandonedShip_Rooms2_B1F_EventScript_BattlePrompt
	return


AbandonedShip_Rooms2_B1F_EventScript_DoBattle::
	applymovement 2, SootopolisCity_Movement_StepUp
	applymovement OBJ_EVENT_ID_PLAYER, SootopolisCity_Movement_StepUp
	waitmovement 0
	multi_2_vs_1 TRAINER_MAY_LILYCOVE_MUDKIP, AbandonedShip_Rooms2_B1F_EventScript_Text_ThorneDefeat, TRAINER_MAY_LILYCOVE_TREECKO, TRAINER_BACK_PIC_STEVEN
	specialvar VAR_RESULT, GetBattleOutcome
	compare VAR_RESULT, B_OUTCOME_LOST
	goto_if_eq AbandonedShip_Rooms2_B1F_EventScript_PlayerLostTheFight
	delay 30
	msgbox AbandonedShip_Rooms2_B1F_EventScript_DoBattle_Text_0
	waitmessage
	addobject 5
	delay 30
	playse SE_PIN
	applymovement 1, AbandonedShip_Rooms2_B1F_Movement_StepLeftQuestion
	waitmovement 0
	waitse
	msgbox AbandonedShip_Rooms2_B1F_EventScript_DoBattle_Text_1
	waitmessage
	closemessage
	fadeoutbgm 1
	playse SE_BALL
	waitse
	delay 20
	playse SE_BALL
	waitse
	delay 20
	playse SE_BALL_OPEN
	removeobject 5
	addobject 4
	waitse
	delay 30
	applymovement 4, AbandonedShip_Rooms2_B1F_Movement_JirachiDown1
	waitmovement 0
	applymovement 1, SootopolisCity_Movement_StepDown
	waitmovement 0
	waitse
	playmoncry SPECIES_JIRACHI, CRY_MODE_NORMAL
	waitmoncry
	playbgm MUS_HG_GTS, TRUE
	applymovement 4, AbandonedShip_Rooms2_B1F_Movement_JirachiLeft
	waitmovement 0
	playse SE_LEDGE
	applymovement 4, AbandonedShip_Rooms2_B1F_Movement_JirachiJumpDown
	waitmovement 0
	waitse
	applymovement 2, SootopolisCity_Movement_StepDown
	applymovement 3, SootopolisCity_Movement_StepDown
	applymovement OBJ_EVENT_ID_PLAYER, SootopolisCity_Movement_StepDown
	waitmovement 0
	playse SE_LEDGE
	applymovement 4, AbandonedShip_Rooms2_B1F_Movement_JirachiJumpRight
	waitmovement 0
	waitse
	playse SE_LEDGE
	applymovement 4, AbandonedShip_Rooms2_B1F_Movement_JirachiJumpRight
	waitmovement 0
	waitse
	applymovement 4, AbandonedShip_Rooms2_B1F_Movement_JirachiUp1
	waitmovement 0
	applymovement 2, SootopolisCity_Movement_StepRight
	applymovement 3, SootopolisCity_Movement_StepRight
	applymovement OBJ_EVENT_ID_PLAYER, SootopolisCity_Movement_StepRight
	waitmovement 0
	delay 30
	waitse
	playmoncry SPECIES_JIRACHI, CRY_MODE_NORMAL
	applymovement 4, LittlerootTown_BrendansHouse_1F_Heart
	waitmovement 0
	waitmoncry
	delay 30
	applymovement 2, SootopolisCity_Movement_StepUp
	applymovement 3, SootopolisCity_Movement_StepUp
	applymovement OBJ_EVENT_ID_PLAYER, SootopolisCity_Movement_StepUp
	applymovement 4, AbandonedShip_Rooms2_B1F_Movement_JirachiExit
	waitmovement 0
	removeobject 4
	fadedefaultbgm
	applymovement 2, SootopolisCity_Movement_StepUp
	waitmovement 0
	msgbox AbandonedShip_Rooms2_B1F_EventScript_DoBattle_Text_2
	waitmessage
	applymovement 1, SootopolisCity_Movement_StepDown
	waitmovement 0
	msgbox AbandonedShip_Rooms2_B1F_EventScript_DoBattle_Text_3
	waitmessage
	applymovement 2, SootopolisCity_Movement_StepUp
	waitmovement 0
	msgbox AbandonedShip_Rooms2_B1F_EventScript_DoBattle_Text_4
	waitmessage
	closemessage
	applymovement 2, AbandonedShip_Rooms2_B1F_Movement_WalkUp1
	waitmovement 0
	applymovement 3, AbandonedShip_Rooms2_B1F_Movement_WalkUp1
	waitmovement 0
	delay 30
	applymovement 2, AbandonedShip_Rooms2_B1F_Movement_WalkRight1
	applymovement 1, AbandonedShip_Rooms2_B1F_Movement_WalkDown1
	applymovement 3, SootopolisCity_Movement_StepRight
	waitmovement 0
	delay 30
	applymovement 2, SootopolisCity_Movement_StepDown
	waitmovement 0
	msgbox AbandonedShip_Rooms2_B1F_EventScript_DoBattle_Text_5
	waitmessage
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, SootopolisCity_Movement_StepRight
	applymovement 2, AbandonedShip_Rooms2_B1F_Movement_SilverExit
	applymovement 1, AbandonedShip_Rooms2_B1F_Movement_ThorneExit
	applymovement 3, AbandonedShip_Rooms2_B1F_Movement_GatrExit
	waitmovement 0
	playse SE_EXIT
	waitse
	removeobject 2
	removeobject 1
	removeobject 3
	clearflag FLAG_HIDE_SOOTOPOLIS_CITY_RESIDENTS
	clearflag FLAG_HIDE_JIRACHI
	setflag FLAG_DEFEATED_THORNE_ROUJEM
	addvar VAR_LAZULAN_STATE, 1
	release
	end


AbandonedShip_Rooms2_B1F_EventScript_PlayerLostTheFight::
	fadescreen FADE_TO_BLACK
	special SetCB2WhiteOut
	waitstate
	release
	end


AbandonedShip_Rooms2_B1F_Movement_SilverToAction:
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_up
	walk_up
	step_end

AbandonedShip_Rooms2_B1F_Movement_FeraligatrToAction:
	walk_up
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_up
	walk_left
	walk_up
	step_end

AbandonedShip_Rooms2_B1F_Movement_PlayerToActionLeft:
	delay_16
	delay_16
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_up
	walk_right
	walk_up
	step_end

AbandonedShip_Rooms2_B1F_Movement_PlayerToActionDown:
	delay_16
	delay_16
	walk_down
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_up
	walk_right
	walk_up
	step_end

AbandonedShip_Rooms2_B1F_Movement_StepLeftQuestion:
	emote_question_mark
	walk_in_place_left
	step_end

AbandonedShip_Rooms2_B1F_Movement_JirachiDown1:
	walk_slow_down
	step_end

AbandonedShip_Rooms2_B1F_Movement_JirachiLeft:
	walk_left
	step_end

AbandonedShip_Rooms2_B1F_Movement_JirachiJumpDown:
	jump_2_down
	step_end

AbandonedShip_Rooms2_B1F_Movement_JirachiJumpRight:
	jump_2_right
	step_end

AbandonedShip_Rooms2_B1F_Movement_JirachiUp1:
	walk_up
	face_left
	step_end

AbandonedShip_Rooms2_B1F_Movement_JirachiExit:
	walk_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	step_end

AbandonedShip_Rooms2_B1F_Movement_WalkUp1:
	walk_up
	step_end

AbandonedShip_Rooms2_B1F_Movement_WalkRight1:
	walk_right
	step_end

AbandonedShip_Rooms2_B1F_Movement_WalkDown1:
	walk_down
	step_end

AbandonedShip_Rooms2_B1F_Movement_SilverExit:
	walk_right
	walk_down
	walk_down
	walk_down
	walk_right
	walk_right
	walk_right
	walk_up
	walk_up
	walk_up
	walk_right
	walk_right
	walk_right
	walk_up
	walk_up
	set_invisible
	step_end

AbandonedShip_Rooms2_B1F_Movement_ThorneExit:
	walk_right
	walk_right
	walk_down
	walk_down
	walk_down
	walk_right
	walk_right
	walk_right
	walk_up
	walk_up
	walk_up
	walk_right
	walk_right
	walk_right
	walk_up
	walk_up
	set_invisible
	step_end

AbandonedShip_Rooms2_B1F_Movement_GatrExit:
	walk_right
	walk_right
	walk_right
	walk_down
	walk_down
	walk_down
	walk_right
	walk_right
	walk_right
	walk_up
	walk_up
	walk_up
	walk_right
	walk_right
	walk_right
	walk_up
	walk_up
	set_invisible
	step_end

AbandonedShip_Rooms2_B1F_EventScript_Feraligatr_Text_0:
	.string "FERALIGATR: Grrah!$"

AbandonedShip_Rooms2_B1F_EventScript_Silver_Text_0:
	.string "DAD: Alright {PLAYER}, are you ready\n"
	.string "for a battle?$"

AbandonedShip_Rooms2_B1F_EventScript_Silver_Text_1:
	.string "Well, hurry up and prepare!$"

AbandonedShip_Rooms2_B1F_EventScript_Silver_Text_2:
	.string "Then let's do this!$"

AbandonedShip_Rooms2_B1F_EventScript_Silver_Text_3:
	.string "THORNE: Well well, you've uncovered yet\n"
	.string "another one of our hideouts.\p"
	.string "I would say I'm surprised, but it's to be\n"
	.string "expected at this point.$"

AbandonedShip_Rooms2_B1F_EventScript_Silver_Text_4:
	.string "DAD: So, we finally meet.\p"
	.string "PROF. THORNE, I presume?$"

AbandonedShip_Rooms2_B1F_EventScript_Silver_Text_5:
	.string "THORNE: You could say that.\p"
	.string "I am also well acquainted with your\n"
	.string "mother.\p"
	.string "In fact, I intend to free her along with\n"
	.string "the other Phoenix members being held\l"
	.string "prisoner.\p"
	.string "Tell me, do you know of Jirachi's ability\n"
	.string "to grant wishes?$"

AbandonedShip_Rooms2_B1F_EventScript_Silver_Text_6:
	.string "DAD: I've only heard rumors.\p"
	.string "It's said that Jirachi is able to grant\n"
	.string "up to three wishes during the week of\l"
	.string "the Millennium Comet.\p"
	.string "So then, you intend to use Jirachi's\n"
	.string "power to free my mother and your other\l"
	.string "Team Phoenix thugs?$"

AbandonedShip_Rooms2_B1F_EventScript_Silver_Text_7:
	.string "THORNE: Precisely!\p"
	.string "This should be a simple task for Jirachi.\p"
	.string "Now, I'll defeat you two and make my\n"
	.string "wish!$"

AbandonedShip_Rooms2_B1F_EventScript_MalePlayerDad_Text_0:
	.string "I hear you're well acquainted with my\n"
	.string "son here.$"

AbandonedShip_Rooms2_B1F_EventScript_FemalePlayerDad_Text_0:
	.string "I hear you're well acquainted with my\n"
	.string "daughter here.$"

AbandonedShip_Rooms2_B1F_EventScript_BattlePrompt_Text_0:
	.string "DAD: Pick your party members, let's end\n"
	.string "this.$"

AbandonedShip_Rooms2_B1F_EventScript_DoBattle_Text_0:
	.string "THORNE: Even after all of my\n"
	.string "preparation, I was still no match for\l"
	.string "you two.$"

AbandonedShip_Rooms2_B1F_EventScript_DoBattle_Text_1:
	.string "What?$"

AbandonedShip_Rooms2_B1F_EventScript_DoBattle_Text_2:
	.string "DAD: Well, THORNE, it looks like you've\n"
	.string "been utterly defeated.\p"
	.string "It's time you give up.$"

AbandonedShip_Rooms2_B1F_EventScript_DoBattle_Text_3:
	.string "THORNE: I might be defeated, but I will\n"
	.string "never give up.\p"
	.string "A phoenix never dies.\p"
	.string "The same goes for Team Phoenix!\p"
	.string "One day, we will return.$"

AbandonedShip_Rooms2_B1F_EventScript_DoBattle_Text_4:
	.string "DAD: You'll have plenty of time to think\n"
	.string "about it with your buddies in prison.\p"
	.string "Come on.$"

AbandonedShip_Rooms2_B1F_EventScript_DoBattle_Text_5:
	.string "DAD: By the way, {PLAYER}, GOLD told\n"
	.string "me he wanted to speak with you.\p"
	.string "He's still in Lazulan City.\p"
	.string "The festival should be getting started\n"
	.string "now, I'll meet you there.$"

AbandonedShip_Rooms2_B1F_EventScript_Text_ThorneDefeat::
	.string "Well, this outcome was unexpected...$"
