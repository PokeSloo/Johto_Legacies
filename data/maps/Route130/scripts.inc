Route130_MapScripts::
	.byte 0

Route130_EventScript_Rodney::
	trainerbattle_single TRAINER_RODNEY, Route130_Text_RodneyIntro, Route130_Text_RodneyDefeat
	msgbox Route130_Text_RodneyPostBattle, MSGBOX_AUTOCLOSE
	end

Route130_EventScript_Katie::
	trainerbattle_single TRAINER_KATIE, Route130_Text_KatieIntro, Route130_Text_KatieDefeat
	msgbox Route130_Text_KatiePostBattle, MSGBOX_AUTOCLOSE
	end

Route130_EventScript_Santiago::
	trainerbattle_single TRAINER_SANTIAGO, Route130_Text_SantiagoIntro, Route130_Text_SantiagoDefeat
	msgbox Route130_Text_SantiagoPostBattle, MSGBOX_AUTOCLOSE
	end

Route130_EventScript_ItemTradeStone::
	finditem ITEM_BIKE_VOUCHER
	end

Route130_EventScript_RouteSign::
	msgbox Route130_Text_RouteSign, MSGBOX_SIGN
	end

Route130_Text_RouteSign:
	.string "ROUTE 28\n"
	.string "{LEFT_ARROW} West to MT. SILVER$"

