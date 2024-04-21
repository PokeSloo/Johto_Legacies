ArtisanCave_B1F_MapScripts::
	.byte 0

ArtisanCave_B1F_EventScript_ItemOddKeystone::
	finditem ITEM_ODD_KEYSTONE
	end

ArtisanCave_B1F_EventScript_ItemTM28::
	finditem ITEM_TM28
	end

MtChimney_EventScript_Sawyer::
	trainerbattle_single TRAINER_SAWYER_1, MtChimney_Text_SawyerIntro, MtChimney_Text_SawyerDefeat, MtChimney_EventScript_SawyerDefeated
	specialvar VAR_RESULT, ShouldTryRematchBattle
	goto_if_eq VAR_RESULT, TRUE, MtChimney_EventScript_SawyerRematch
	msgbox MtChimney_Text_SawyerPostBattle, MSGBOX_DEFAULT
	release
	end

MtChimney_EventScript_SawyerDefeated::
	special PlayerFaceTrainerAfterBattle
	waitmovement 0
	msgbox MtChimney_Text_SawyerRegister, MSGBOX_DEFAULT
	register_matchcall TRAINER_SAWYER_1
	release
	end

MtChimney_EventScript_SawyerRematch::
	trainerbattle_rematch TRAINER_SAWYER_1, MtChimney_Text_SawyerRematchIntro, MtChimney_Text_SawyerRematchDefeat
	msgbox MtChimney_Text_SawyerPostRematch, MSGBOX_AUTOCLOSE
	end

MtChimney_Text_SawyerIntro:
	.string "It's so dark in here, are you lost?$"

MtChimney_Text_SawyerDefeat:
	.string "No, you seem to know what you're doing\n"
	.string "here...$"

MtChimney_Text_SawyerPostBattle:
	.string "We can't be lost in this cave if we've\n"
	.string "found each other, right?$"

MtChimney_Text_SawyerRegister:
	.string "Say, we should meet in the darkness\n"
	.string "again sometime...$"

MtChimney_Text_SawyerRematchIntro:
	.string "So, we meet again...$"

MtChimney_Text_SawyerRematchDefeat:
	.string "You shine too brightly!\n"
	.string "It's blinding.$"

MtChimney_Text_SawyerPostRematch:
	.string "We can't be lost in this cave if we've\n"
	.string "found each other, right?$"

