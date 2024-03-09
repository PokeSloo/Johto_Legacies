Route131_MapScripts::
	.byte 0

Route131_EventScript_Richard::
	trainerbattle_single TRAINER_RICHARD, Route131_Text_RichardIntro, Route131_Text_RichardDefeat
	msgbox Route131_Text_RichardPostBattle, MSGBOX_AUTOCLOSE
	end

Route131_EventScript_Herman::
	trainerbattle_single TRAINER_HERMAN, Route131_Text_HermanIntro, Route131_Text_HermanDefeat
	msgbox Route131_Text_HermanPostBattle, MSGBOX_AUTOCLOSE
	end

Route131_EventScript_Susie::
	trainerbattle_single TRAINER_SUSIE, Route131_Text_SusieIntro, Route131_Text_SusieDefeat
	msgbox Route131_Text_SusiePostBattle, MSGBOX_AUTOCLOSE
	end

Route131_EventScript_Kara::
	trainerbattle_single TRAINER_KARA, Route131_Text_KaraIntro, Route131_Text_KaraDefeat
	msgbox Route131_Text_KaraPostBattle, MSGBOX_AUTOCLOSE
	end

Route131_EventScript_Reli::
	trainerbattle_double TRAINER_RELI_AND_IAN, Route131_Text_ReliIntro, Route131_Text_ReliDefeat, Route131_Text_ReliNotEnoughMons
	msgbox Route131_Text_ReliPostBattle, MSGBOX_AUTOCLOSE
	end

Route131_EventScript_Ian::
	trainerbattle_double TRAINER_RELI_AND_IAN, Route131_Text_IanIntro, Route131_Text_IanDefeat, Route131_Text_IanNotEnoughMons
	msgbox Route131_Text_IanPostBattle, MSGBOX_AUTOCLOSE
	end

Route131_EventScript_Talia::
	trainerbattle_single TRAINER_TALIA, Route131_Text_TaliaIntro, Route131_Text_TaliaDefeat
	msgbox Route131_Text_TaliaPostBattle, MSGBOX_AUTOCLOSE
	end

Route131_EventScript_Kevin::
	trainerbattle_single TRAINER_KEVIN, Route131_Text_KevinIntro, Route131_Text_KevinDefeat
	msgbox Route131_Text_KevinPostBattle, MSGBOX_AUTOCLOSE
	end

Route131_EventScript_DateGuy::
	lock
	faceplayer
	msgbox Route131_EventScript_DateGuy_Text_0
	waitmessage
	closemessage
	applymovement 9, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end


Route131_EventScript_Trigger::
	lock
	goto_if_set FLAG_HIDE_SHANE_MEGA_LAB_BASEMENT, Route131_EventScript_Trigger_1
	msgbox Route131_EventScript_Trigger_Text_0
	waitmessage
	applymovement OBJ_EVENT_ID_PLAYER, SootopolisCity_Movement_StepUp
	waitmovement 0
	msgbox Route131_EventScript_Trigger_Text_1
	waitmessage
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, Route131_Movement_WalkRight
	waitmovement 0
	release
	end

Route131_EventScript_Trigger_1:
	release
	end


Route131_Movement_WalkRight:
	walk_right
	step_end

Route131_EventScript_DateGuy_Text_0:
	.string "I've heard this is a really popular date\n"
	.string "spot, I hope she's enjoying it.$"

Route131_EventScript_Trigger_Text_0:
	.string "Hey!$"

Route131_EventScript_Trigger_Text_1:
	.string "I'm trying to show my girl a good time,\n"
	.string "and you're blocking our view!\p"
	.string "Get out of here, kid!$"
