MtPyre_3F_MapScripts::
	.byte 0

MtPyre_3F_EventScript_William::
	trainerbattle_single TRAINER_WILLIAM, MtPyre_3F_Text_WilliamIntro, MtPyre_3F_Text_WilliamDefeat
	msgbox MtPyre_3F_Text_WilliamPostBattle, MSGBOX_AUTOCLOSE
	end

MtPyre_3F_EventScript_Kayla::
	trainerbattle_single TRAINER_KAYLA, MtPyre_3F_Text_KaylaIntro, MtPyre_3F_Text_KaylaDefeat
	msgbox MtPyre_3F_Text_KaylaPostBattle, MSGBOX_AUTOCLOSE
	end

MtPyre_3F_EventScript_Gabrielle::
	trainerbattle_single TRAINER_GABRIELLE_1, MtPyre_3F_Text_GabrielleIntro, MtPyre_3F_Text_GabrielleDefeat, MtPyre_3F_EventScript_RegisterGabrielle
	specialvar VAR_RESULT, ShouldTryRematchBattle
	goto_if_eq VAR_RESULT, TRUE, MtPyre_3F_EventScript_RematchGabrielle
	msgbox MtPyre_3F_Text_GabriellePostBattle, MSGBOX_DEFAULT
	release
	end

MtPyre_3F_EventScript_RegisterGabrielle::
	special PlayerFaceTrainerAfterBattle
	waitmovement 0
	msgbox MtPyre_3F_Text_GabrielleRegister, MSGBOX_DEFAULT
	register_matchcall TRAINER_GABRIELLE_1
	release
	end

MtPyre_3F_EventScript_RematchGabrielle::
	trainerbattle_rematch TRAINER_GABRIELLE_1, MtPyre_3F_Text_GabrielleRematchIntro, MtPyre_3F_Text_GabrielleRematchDefeat
	msgbox MtPyre_3F_Text_GabriellePostRematch, MSGBOX_AUTOCLOSE
	end

MtPyre_3F_Text_WilliamIntro:
	.string "Where's the bathroom in this place?\p"
	.string "I can't seem to find any tour guides\n"
	.string "either.$"

MtPyre_3F_Text_WilliamDefeat:
	.string "At least I don't need a bathroom\n"
	.string "anymore.$"

MtPyre_3F_Text_WilliamPostBattle:
	.string "You haven't seen people dressed up as\n"
	.string "sages around here have you?$"

MtPyre_3F_Text_KaylaIntro:
	.string "Ahahahaha!\p"
	.string "This is no place for children, least\n"
	.string "of all you!$"

MtPyre_3F_Text_KaylaDefeat:
	.string "I lost that cleanly…$"

MtPyre_3F_Text_KaylaPostBattle:
	.string "This means my training is still not\n"
	.string "enough…$"

MtPyre_3F_Text_GabrielleIntro:
	.string "Why have you come here?$"

MtPyre_3F_Text_GabrielleDefeat:
	.string "That was amazing!\n"
	.string "You're a very special TRAINER.$"

MtPyre_3F_Text_GabriellePostBattle:
	.string "POKéMON no longer of this world.\n"
	.string "POKéMON that are with you now.\p"
	.string "And the POKéMON that you will meet\n"
	.string "in the future…\p"
	.string "They are all to be equally cherished.\n"
	.string "Please remember that.$"

MtPyre_3F_Text_GabrielleRegister:
	.string "I would like to see your POKéMON\n"
	.string "when they grow up some more…\p"
	.string "Please, I need to see your POKéNAV.$"

MtPyre_3F_Text_GabrielleRematchIntro:
	.string "Oh, it's you…\p"
	.string "Have you come to show me your grown\n"
	.string "POKéMON?$"

MtPyre_3F_Text_GabrielleRematchDefeat:
	.string "How amazing!\n"
	.string "You are a special person.$"

MtPyre_3F_Text_GabriellePostRematch:
	.string "POKéMON no longer of this world.\n"
	.string "POKéMON that are with you now.\p"
	.string "And the POKéMON that you will meet\n"
	.string "in the future…\p"
	.string "They are all to be equally cherished.\n"
	.string "I see that you've remembered that.$"

