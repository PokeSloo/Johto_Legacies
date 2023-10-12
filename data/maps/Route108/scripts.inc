Route108_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route108_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Route108_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
	map_script_2 VAR_CHERRYGROVE_STATE, 8, Route108_On_Frame
	.2byte 0


Route108_On_Frame::
	lock
	playse SE_PIN
	applymovement 8, Route108_Movement_Exclamation
	waitmovement 0
	delay 60
	applymovement 8, Route108_Movement_UpToPlayer
	waitmovement 0
	checkplayergender
	compare VAR_RESULT, MALE
	goto_if_eq Route108_On_Frame_2
	compare VAR_RESULT, FEMALE
	goto_if_eq Route108_On_Frame_3
Route108_On_Frame_1:
	showmoneybox 0, 0
	msgbox Route108_On_Frame_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq Route108_On_Frame_7
Route108_On_Frame_11:
	msgbox Route108_On_Frame_Text_1, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq Route108_On_Frame_11
Route108_On_Frame_6:
	goto Route108_TryToBuy
	end

Route108_On_Frame_2:
	call Route108_MalePlayer
	goto Route108_On_Frame_1

Route108_On_Frame_3:
	call Route108_FemalePlayer
	goto Route108_On_Frame_1

Route108_On_Frame_7:
	goto Route108_TryToBuy
	goto Route108_On_Frame_6


Route108_TryToBuy::
	checkmoney 1000
	compare VAR_RESULT, NO
	goto_if_eq Route108_TryToBuy_1
	removemoney 1000
	updatemoneybox
	playse SE_SHOP
	waitse
	goto Route108_ConmanLeaves
	end

Route108_TryToBuy_1:
	msgbox Route108_TryToBuy_Text_0
	waitmessage
	goto Route108_ConmanLeaves
	end


Route108_ConmanLeaves::
	giveitem ITEM_GOLD_TEETH
	hidemoneybox
	msgbox Route108_ConmanLeaves_Text_0
	waitmessage
	closemessage
	applymovement 8, Route108_Movement_RunAway
	waitmovement 0
	removeobject 8
	setflag FLAG_HIDE_FAKE_NUGGET_GUY
	addvar VAR_CHERRYGROVE_STATE, 1
	release
	end


Route108_MalePlayer::
	msgbox Route108_MalePlayer_Text_0
	waitmessage
	return


Route108_FemalePlayer::
	msgbox Route108_FemalePlayer_Text_0
	waitmessage
	return


Route108_Movement_Exclamation:
	emote_exclamation_mark
	step_end

Route108_Movement_UpToPlayer:
	walk_fast_up
	walk_fast_up
	step_end

Route108_Movement_RunAway:
	lock_facing_direction
	walk_slow_down
	unlock_facing_direction
	walk_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	step_end

Route108_EventScript_SignPost::
	msgbox Route108_EventScript_SignPost_Text_0, MSGBOX_SIGN
	end


Route108_EventScript_Jerome::
	trainerbattle_single TRAINER_JEROME, Route108_Text_JeromeIntro, Route108_Text_JeromeDefeated
	msgbox Route108_Text_JeromePostBattle, MSGBOX_AUTOCLOSE
	end

Route108_EventScript_Matthew::
	trainerbattle_single TRAINER_MATTHEW, Route108_Text_MatthewIntro, Route108_Text_MatthewDefeated
	msgbox Route108_Text_MatthewPostBattle, MSGBOX_AUTOCLOSE
	end

Route108_EventScript_Tara::
	trainerbattle_single TRAINER_TARA, Route108_Text_TaraIntro, Route108_Text_TaraDefeated
	msgbox Route108_Text_TaraPostBattle, MSGBOX_AUTOCLOSE
	end

Route108_EventScript_Missy::
	trainerbattle_single TRAINER_MISSY, Route108_Text_MissyIntro, Route108_Text_MissyDefeated
	msgbox Route108_Text_MissyPostBattle, MSGBOX_AUTOCLOSE
	end

Route108_EventScript_Carolina::
	trainerbattle_single TRAINER_CAROLINA, Route108_Text_CarolinaIntro, Route108_Text_CarolinaDefeated
	msgbox Route108_Text_CarolinaPostBattle, MSGBOX_AUTOCLOSE
	end

Route108_EventScript_Cory::
	trainerbattle_single TRAINER_CORY_1, Route108_Text_CoryIntro, Route108_Text_CoryDefeated, Route108_EventScript_CoryRegisterMatchCallAfterBattle
	specialvar VAR_RESULT, ShouldTryRematchBattle
	goto_if_eq VAR_RESULT, TRUE, Route108_EventScript_CoryRematch
	msgbox Route108_Text_CoryPostBattle, MSGBOX_DEFAULT
	release
	end

Route108_EventScript_CoryRegisterMatchCallAfterBattle::
	special PlayerFaceTrainerAfterBattle
	waitmovement 0
	msgbox Route108_Text_CoryRegister, MSGBOX_DEFAULT
	register_matchcall TRAINER_CORY_1
	release
	end

Route108_EventScript_CoryRematch::
	trainerbattle_rematch TRAINER_CORY_1, Route108_Text_CoryRematchIntro, Route108_Text_CoryRematchDefeated
	msgbox Route108_Text_CoryRematchPostBattle, MSGBOX_AUTOCLOSE
	end

Route108_On_Frame_Text_0:
	.string "Say, would you be interested in buying\n"
	.string "this genuine Gold Nugget for the\l"
	.string "enticingly low price of just ¥1,000?$"

Route108_On_Frame_Text_1:
	.string "You know, it's really a steal at this\n"
	.string "price.\p"
	.string "Won't you buy it for just ¥1,000?$"

Route108_TryToBuy_Text_0:
	.string "Hmm... It doesn't look like you have\n"
	.string "¥1000.\p"
	.string "I tell you what, I'm a nice guy, so I'll\n"
	.string "help you out.\p"
	.string "You can have this for free!$"

Route108_ConmanLeaves_Text_0:
	.string "Pleasure doing business with you!\p"
	.string "Hehe...$"

Route108_MalePlayer_Text_0:
	.string "You there!\p"
	.string "You look like a man of fine taste!$"

Route108_FemalePlayer_Text_0:
	.string "You there!\p"
	.string "You look like a woman of fine taste!$"

Route108_EventScript_SignPost_Text_0:
	.string "ROUTE 33\n"
	.string "{LEFT_ARROW} West to AZALEA TOWN$"
