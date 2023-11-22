Route113_MapScripts::
	.byte 0

Route113_EventScript_Gentleman::
	msgbox Route113_Text_AshCanBeFashionedIntoGlass, MSGBOX_NPC
	end

Route113_EventScript_NinjaBoy::
	msgbox Route113_Text_FunWalkingThroughAsh, MSGBOX_NPC
	end

Route113_EventScript_RouteSign111::
	msgbox Route113_Text_RouteSign111, MSGBOX_SIGN
	end

Route113_EventScript_RouteSignFallarbor::
	msgbox Route113_Text_RouteSignFallarbor, MSGBOX_SIGN
	end

Route113_EventScript_GlassWorkshopSign::
	msgbox Route113_Text_GlassWorkshopSign, MSGBOX_SIGN
	end

Route113_EventScript_Dillon::
	trainerbattle_single TRAINER_DILLON, Route113_Text_DillonIntro, Route113_Text_DillonDefeat
	msgbox Route113_Text_DillonPostBattle, MSGBOX_AUTOCLOSE
	end

Route113_EventScript_Madeline::
	trainerbattle_single TRAINER_MADELINE_1, Route113_Text_MadelineIntro, Route113_Text_MadelineDefeat, Route113_EventScript_RegisterMadeline
	specialvar VAR_RESULT, ShouldTryRematchBattle
	goto_if_eq VAR_RESULT, TRUE, Route113_EventScript_RematchMadeline
	msgbox Route113_Text_MadelinePostBattle, MSGBOX_DEFAULT
	release
	end

Route113_EventScript_RegisterMadeline::
	special PlayerFaceTrainerAfterBattle
	waitmovement 0
	msgbox Route113_Text_MadelineRegister, MSGBOX_DEFAULT
	register_matchcall TRAINER_MADELINE_1
	release
	end

Route113_EventScript_RematchMadeline::
	trainerbattle_rematch TRAINER_MADELINE_1, Route113_Text_MadelineRematchIntro, Route113_Text_MadelineRematchDefeat
	msgbox Route113_Text_MadelinePostRematch, MSGBOX_AUTOCLOSE
	end

Route113_EventScript_Lao::
	trainerbattle_single TRAINER_LAO_1, Route113_Text_LaoIntro, Route113_Text_LaoDefeat, Route113_EventScript_RegisterLao
	specialvar VAR_RESULT, ShouldTryRematchBattle
	goto_if_eq VAR_RESULT, TRUE, Route113_EventScript_RematchLao
	msgbox Route113_Text_LaoPostBattle, MSGBOX_DEFAULT
	release
	end

Route113_EventScript_RegisterLao::
	special PlayerFaceTrainerAfterBattle
	waitmovement 0
	msgbox Route113_Text_LaoRegister, MSGBOX_DEFAULT
	register_matchcall TRAINER_LAO_1
	release
	end

Route113_EventScript_RematchLao::
	trainerbattle_rematch TRAINER_LAO_1, Route113_Text_LaoRematchIntro, Route113_Text_LaoRematchDefeat
	msgbox Route113_Text_LaoPostRematch, MSGBOX_AUTOCLOSE
	end

Route113_EventScript_Lung::
	trainerbattle_single TRAINER_LUNG, Route113_Text_LungIntro, Route113_Text_LungDefeat
	msgbox Route113_Text_LungPostBattle, MSGBOX_AUTOCLOSE
	end

Route113_EventScript_Tori::
	trainerbattle_double TRAINER_TORI_AND_TIA, Route113_Text_ToriIntro, Route113_Text_ToriDefeat, Route113_Text_ToriNotEnoughMons
	msgbox Route113_Text_ToriPostBattle, MSGBOX_AUTOCLOSE
	end

Route113_EventScript_Tia::
	trainerbattle_double TRAINER_TORI_AND_TIA, Route113_Text_TiaIntro, Route113_Text_TiaDefeat, Route113_Text_TiaNotEnoughMons
	msgbox Route113_Text_TiaPostBattle, MSGBOX_AUTOCLOSE
	end

Route113_EventScript_Coby::
	trainerbattle_single TRAINER_COBY, Route113_Text_CobyIntro, Route113_Text_CobyDefeat
	msgbox Route113_Text_CobyPostBattle, MSGBOX_AUTOCLOSE
	end

Route113_Text_AshCanBeFashionedIntoGlass:
	.string "It's pretty cold out here,\n"
	.string "unfortunately the water hasn't all\l"
	.string "frozen yet.\p"
	.string "You'll need a POKéMON with Surf to reach\n"
	.string "Mahogany Town.$"

Route113_Text_FunWalkingThroughAsh:
	.string "If you get too cold out here, you can\n"
	.string "step into Mt. Mortar.\p"
	.string "It's actually still pretty warm in there.$"

Route113_Text_RouteSign111:
	.string "ROUTE 42\n"
	.string "{RIGHT_ARROW} East to MAHOGANY TOWN$"

Route113_Text_RouteSignFallarbor:
	.string "ROUTE 42\n"
	.string "{LEFT_ARROW} West to ECRUTEAK CITY$"

Route113_Text_GlassWorkshopSign:
	.string "MT. MORTAR\n"
	.string "Waterfall Cave Inside$"

