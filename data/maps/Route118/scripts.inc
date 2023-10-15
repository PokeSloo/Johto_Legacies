Route118_MapScripts::
	.byte 0


Route118_EventScript_CalmMindFisherman::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_TM_04, Route118_EventScript_CalmMindFisherman_1
	msgbox Route118_EventScript_CalmMindFisherman_Text_1
	giveitem ITEM_TM04_CALM_MIND
	msgbox Route118_EventScript_CalmMindFisherman_Text_2
	setflag FLAG_RECEIVED_TM_04
	release
	end

Route118_EventScript_CalmMindFisherman_1:
	msgbox Route118_EventScript_CalmMindFisherman_Text_0
	release
	end


Route118_EventScript_Girl::
	msgbox Route118_Text_CanCrossRiversWithSurf, MSGBOX_NPC
	end

Route118_EventScript_RouteSignMauville::
	msgbox Route118_Text_RouteSignMauville, MSGBOX_SIGN
	end

Route118_EventScript_RouteSign119::
	msgbox Route118_Text_RouteSign119, MSGBOX_SIGN
	end

Route118_EventScript_Rose::
	trainerbattle_single TRAINER_ROSE_1, Route118_Text_RoseIntro, Route118_Text_RoseDefeat, Route118_EventScript_RegisterRose
	specialvar VAR_RESULT, ShouldTryRematchBattle
	goto_if_eq VAR_RESULT, TRUE, Route118_EventScript_RematchRose
	msgbox Route118_Text_RosePostBattle, MSGBOX_DEFAULT
	release
	end

Route118_EventScript_RegisterRose::
	special PlayerFaceTrainerAfterBattle
	waitmovement 0
	msgbox Route118_Text_RoseRegister, MSGBOX_DEFAULT
	register_matchcall TRAINER_ROSE_1
	release
	end

Route118_EventScript_RematchRose::
	trainerbattle_rematch TRAINER_ROSE_1, Route118_Text_RoseRematchIntro, Route118_Text_RoseRematchDefeat
	msgbox Route118_Text_RosePostRematch, MSGBOX_AUTOCLOSE
	end

Route118_EventScript_Barny::
	trainerbattle_single TRAINER_BARNY, Route118_Text_BarnyIntro, Route118_Text_BarnyDefeat
	msgbox Route118_Text_BarnyPostBattle, MSGBOX_AUTOCLOSE
	end

Route118_EventScript_Wade::
	trainerbattle_single TRAINER_WADE, Route118_Text_WadeIntro, Route118_Text_WadeDefeat
	msgbox Route118_Text_WadePostBattle, MSGBOX_AUTOCLOSE
	end

Route118_EventScript_Dalton::
	trainerbattle_single TRAINER_DALTON_1, Route118_Text_DaltonIntro, Route118_Text_DaltonDefeat, Route118_EventScript_RegisterDalton
	specialvar VAR_RESULT, ShouldTryRematchBattle
	goto_if_eq VAR_RESULT, TRUE, Route118_EventScript_RematchDalton
	msgbox Route118_Text_DaltonPostBattle, MSGBOX_DEFAULT
	release
	end

Route118_EventScript_RegisterDalton::
	special PlayerFaceTrainerAfterBattle
	waitmovement 0
	msgbox Route118_Text_DaltonRegister, MSGBOX_DEFAULT
	register_matchcall TRAINER_DALTON_1
	release
	end

Route118_EventScript_RematchDalton::
	trainerbattle_rematch TRAINER_DALTON_1, Route118_Text_DaltonRematchIntro, Route118_Text_DaltonRematchDefeat
	msgbox Route118_Text_DaltonPostRematch, MSGBOX_AUTOCLOSE
	end

Route118_EventScript_Perry::
	trainerbattle_single TRAINER_PERRY, Route118_Text_PerryIntro, Route118_Text_PerryDefeat
	msgbox Route118_Text_PerryPostBattle, MSGBOX_AUTOCLOSE
	end

Route118_EventScript_Chester::
	trainerbattle_single TRAINER_CHESTER, Route118_Text_ChesterIntro, Route118_Text_ChesterDefeat
	msgbox Route118_Text_ChesterPostBattle, MSGBOX_AUTOCLOSE
	end

Route118_EventScript_Deandre::
	trainerbattle_single TRAINER_DEANDRE, Route118_Text_DeandreIntro, Route118_Text_DeandreDefeat
	msgbox Route118_Text_DeandrePostBattle, MSGBOX_AUTOCLOSE
	end

Route118_Text_CanCrossRiversWithSurf:
	.string "It's nice to leave the city from time to\n"
	.string "time, and breathe some fresh air.\p"
	.string "Have you been to the National Park yet?\p"
	.string "It's just up ahead.$"

Route118_Text_RouteSignMauville:
	.string "ROUTE 35\n"
	.string "{DOWN_ARROW} South to GOLDENROD CITY$"

Route118_Text_RouteSign119:
	.string "ROUTE 35\n"
	.string "{UP_ARROW} North to the NATIONAL PARK$"

Route118_EventScript_CalmMindFisherman_Text_0:
	.string "If you can keep a calm mind, you'll be\n"
	.string "quicker to react to any situation.$"

Route118_EventScript_CalmMindFisherman_Text_1:
	.string "The biggest fish are cautious, and will\n"
	.string "scare easy.\p"
	.string "A good fisherman always keeps a calm\n"
	.string "mind...$"

Route118_EventScript_CalmMindFisherman_Text_2:
	.string "That TM may not help your fishing, but\n"
	.string "it should come in handy enough.$"
