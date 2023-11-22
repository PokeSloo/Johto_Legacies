MtPyre_4F_MapScripts::
	.byte 0

@ Seems like the scripts for the 4F and 5F were swapped

MtPyre_4F_EventScript_Tasha::
	trainerbattle_single TRAINER_TASHA, MtPyre_4F_Text_TashaIntro, MtPyre_4F_Text_TashaDefeat
	msgbox MtPyre_4F_Text_TashaPostBattle, MSGBOX_AUTOCLOSE
	end

MtPyre_4F_Text_TashaIntro:
	.string "Go back from whence you came!$"

MtPyre_4F_Text_TashaDefeat:
	.string "I'm sorry, I thought you were a spirit…$"

MtPyre_4F_Text_TashaPostBattle:
	.string "Children shouldn't play around in these\n"
	.string "sacred ruins.$"
	
MtPyre_5F_EventScript_Atsushi::
	trainerbattle_single TRAINER_ATSUSHI, MtPyre_5F_Text_AtsushiIntro, MtPyre_5F_Text_AtsushiDefeat
	msgbox MtPyre_5F_Text_AtsushiPostBattle, MSGBOX_AUTOCLOSE
	end

MtPyre_5F_Text_AtsushiIntro:
	.string "These ruins are great!\p"
	.string "Wouldn't you agree?$"

MtPyre_5F_Text_AtsushiDefeat:
	.string "Not a fan of ruins I suppose.$"

MtPyre_5F_Text_AtsushiPostBattle:
	.string "If you ever become interested in ruins,\n"
	.string "us Ruin Maniacs have a club.$"

MtPyre_4F_EventScript_ItemTradeStone::
	finditem ITEM_BIKE_VOUCHER
	end

MtPyre_4F_EventScript_ItemLifeOrb::
	finditem ITEM_LIFE_ORB
	end

MtPyre_4F_EventScript_ItemReaperCloth::
	finditem ITEM_REAPER_CLOTH
	end

MtPyre_4F_EventScript_ItemCharcoal::
	finditem ITEM_CHARCOAL
	end

MtPyre_4F_EventScript_ItemEnergyPowder::
	finditem ITEM_ENERGY_POWDER
	end

MtPyre_4F_EventScript_ItemHealPowder::
	finditem ITEM_HEAL_POWDER
	end

