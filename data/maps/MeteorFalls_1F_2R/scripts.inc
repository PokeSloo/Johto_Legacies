MeteorFalls_1F_2R_MapScripts::
	.byte 0

MeteorFalls_1F_2R_EventScript_Nicolas::
	trainerbattle_single TRAINER_NICOLAS_1, MeteorFalls_1F_2R_Text_NicolasIntro, MeteorFalls_1F_2R_Text_NicolasDefeat, MeteorFalls_1F_2R_EventScript_RegisterNicolas
	specialvar VAR_RESULT, ShouldTryRematchBattle
	goto_if_eq VAR_RESULT, TRUE, MeteorFalls_1F_2R_EventScript_RematchNicolas
	msgbox MeteorFalls_1F_2R_Text_NicolasPostBattle, MSGBOX_DEFAULT
	release
	end

MeteorFalls_1F_2R_EventScript_RegisterNicolas::
	special PlayerFaceTrainerAfterBattle
	waitmovement 0
	msgbox MeteorFalls_1F_2R_Text_NicolasRegister, MSGBOX_DEFAULT
	register_matchcall TRAINER_NICOLAS_1
	release
	end

MeteorFalls_1F_2R_EventScript_RematchNicolas::
	trainerbattle_rematch TRAINER_NICOLAS_1, MeteorFalls_1F_2R_Text_NicolasRematchIntro, MeteorFalls_1F_2R_Text_NicolasRematchDefeat
	msgbox MeteorFalls_1F_2R_Text_NicolasPostRematch, MSGBOX_AUTOCLOSE
	end

MeteorFalls_1F_2R_EventScript_John::
	trainerbattle_double TRAINER_JOHN_AND_JAY_1, MeteorFalls_1F_2R_Text_JohnIntro, MeteorFalls_1F_2R_Text_JohnDefeat, MeteorFalls_1F_2R_Text_JohnNotEnoughMons, MeteorFalls_1F_2R_EventScript_RegisterJohn
	specialvar VAR_RESULT, ShouldTryRematchBattle
	goto_if_eq VAR_RESULT, TRUE, MeteorFalls_1F_2R_EventScript_RematchJohn
	msgbox MeteorFalls_1F_2R_Text_JohnPostBattle, MSGBOX_DEFAULT
	release
	end

MeteorFalls_1F_2R_EventScript_RegisterJohn::
	msgbox MeteorFalls_1F_2R_Text_JohnRegister, MSGBOX_DEFAULT
	register_matchcall TRAINER_JOHN_AND_JAY_1
	release
	end

MeteorFalls_1F_2R_EventScript_RematchJohn::
	trainerbattle_rematch_double TRAINER_JOHN_AND_JAY_1, MeteorFalls_1F_2R_Text_JohnRematchIntro, MeteorFalls_1F_2R_Text_JohnRematchDefeat, MeteorFalls_1F_2R_Text_JohnRematchNotEnoughMons
	msgbox MeteorFalls_1F_2R_Text_JohnPostRematch, MSGBOX_AUTOCLOSE
	end

MeteorFalls_1F_2R_EventScript_Jay::
	trainerbattle_double TRAINER_JOHN_AND_JAY_1, MeteorFalls_1F_2R_Text_JayIntro, MeteorFalls_1F_2R_Text_JayDefeat, MeteorFalls_1F_2R_Text_JayNotEnoughMons, MeteorFalls_1F_2R_EventScript_RegisterJay
	specialvar VAR_RESULT, ShouldTryRematchBattle
	goto_if_eq VAR_RESULT, TRUE, MeteorFalls_1F_2R_EventScript_RematchJay
	msgbox MeteorFalls_1F_2R_Text_JayPostBattle, MSGBOX_DEFAULT
	release
	end

MeteorFalls_1F_2R_EventScript_RegisterJay::
	msgbox MeteorFalls_1F_2R_Text_JohnRegister, MSGBOX_DEFAULT  @ John speaks for both during register
	register_matchcall TRAINER_JOHN_AND_JAY_1
	release
	end

MeteorFalls_1F_2R_EventScript_RematchJay::
	trainerbattle_rematch_double TRAINER_JOHN_AND_JAY_1, MeteorFalls_1F_2R_Text_JayRematchIntro, MeteorFalls_1F_2R_Text_JayRematchDefeat, MeteorFalls_1F_2R_Text_JayRematchNotEnoughMons
	msgbox MeteorFalls_1F_2R_Text_JayPostRematch, MSGBOX_AUTOCLOSE
	end

MeteorFalls_1F_2R_EventScript_Item_ChoiceBand::
	finditem ITEM_CHOICE_BAND
	end

MeteorFalls_1F_2R_EventScript_Item_ChoiceSpecs::
	finditem ITEM_CHOICE_SPECS
	end

MeteorFalls_1F_2R_EventScript_Item_MaxRevive::
	finditem ITEM_MAX_REVIVE
	end

MeteorFalls_1F_2R_Text_NicolasIntro:
	.string "Mt. Mortar has long been used as\n"
	.string "training grounds for the best karate\l"
	.string "masters.\p"
	.string "Allow me to evaluate your skill level!$"

MeteorFalls_1F_2R_Text_NicolasDefeat:
	.string "Superb skills!\n"
	.string "You are truly a master in your own\l"
	.string "right!$"

MeteorFalls_1F_2R_Text_NicolasPostBattle:
	.string "My training is going well.\p"
	.string "One day I will return to the dojo in\n"
	.string "Cianwood.$"

MeteorFalls_1F_2R_Text_NicolasRegister:
	.string "Though not exactly karate, your\n"
	.string "battling skills are impeccable.\p"
	.string "I wish to battle you again sometime.\p"
	.string "Perhaps I can learn from your methods...$"

MeteorFalls_1F_2R_Text_NicolasRematchIntro:
	.string "I've worked tirelessly since our last\n"
	.string "meeting.\p"
	.string "Allow me to show you the fruits of my\n"
	.string "training!$"

MeteorFalls_1F_2R_Text_NicolasRematchDefeat:
	.string "Hmm...\n"
	.string "Still no match for you, it seems.$"

MeteorFalls_1F_2R_Text_NicolasPostRematch:
	.string "My training is going well.\p"
	.string "One day I will return to the dojo in\n"
	.string "Cianwood.$"

MeteorFalls_1F_2R_Text_JohnIntro:
	.string "SHIN: Don't underestimate us just\n"
	.string "because we're elderly.\p"
	.string "YUI and I will teach you some respect!$"

MeteorFalls_1F_2R_Text_JohnDefeat:
	.string "SHIN: It would seem I was the one who\n"
	.string "underestimated you, young one.$"

MeteorFalls_1F_2R_Text_JohnPostBattle:
	.string "SHIN: My wife and I have traveled\n"
	.string "across the world, but we still discover\l"
	.string "something new every day.$"

MeteorFalls_1F_2R_Text_JohnNotEnoughMons:
	.string "SHIN: Don't underestimate us just\n"
	.string "because we're elderly.\p"
	.string "YUI and I will teach you some respect!\p"
	.string "...\p"
	.string "When you return with more POKéMON, that\n"
	.string "is.$"

MeteorFalls_1F_2R_Text_JohnRegister:
	.string "SHIN: You've brought some excitement\n"
	.string "to this old couple.\p"
	.string "Please don't hesitate to stop by again\n"
	.string "sometime...$"

MeteorFalls_1F_2R_Text_JayIntro:
	.string "YUI: My husband and I haven't lost a\n"
	.string "battle in 30 years!\p"
	.string "Do you think you can compete with us?$"

MeteorFalls_1F_2R_Text_JayDefeat:
	.string "YUI: Oh, dear.\n"
	.string "I forgot what losing feels like.$"

MeteorFalls_1F_2R_Text_JayPostBattle:
	.string "YUI: Mt. Mortar is harsh, but when I'm\n"
	.string "with SHIN, I feel like nothing in this\l"
	.string "world can stop us.$"

MeteorFalls_1F_2R_Text_JayNotEnoughMons:
	.string "YUI: Please return when you have more\n"
	.string "POKéMON with you.\p"
	.string "My husband and I will be waiting right\n"
	.string "here.$"

MeteorFalls_1F_2R_Text_JohnRematchIntro:
	.string "SHIN: So, you've returned.\p"
	.string "Let's see if you have improved any!$"

MeteorFalls_1F_2R_Text_JohnRematchDefeat:
	.string "SHIN: Yes, I would say you have\n"
	.string "improved quite a bit!$"

MeteorFalls_1F_2R_Text_JohnPostRematch:
	.string "SHIN: My wife and I have traveled\n"
	.string "across the world, but we still discover\l"
	.string "something new every day.$"

MeteorFalls_1F_2R_Text_JohnRematchNotEnoughMons:
	.string "SHIN: So, you've returned.\p"
	.string "Let's see if you have improved any!\p"
	.string "...\p"
	.string "When you return with more POKéMON, that\n"
	.string "is.$"

MeteorFalls_1F_2R_Text_JayRematchIntro:
	.string "YUI: Come on, SHIN, let's show this\n"
	.string "young TRAINER how much stronger we\l"
	.string "have become!$"

MeteorFalls_1F_2R_Text_JayRematchDefeat:
	.string "YUI: Oh, dear.\n"
	.string "It seems we're still not on your level.$"

MeteorFalls_1F_2R_Text_JayPostRematch:
	.string "YUI: Mt. Mortar is harsh, but when I'm\n"
	.string "with SHIN, I feel like nothing in this\l"
	.string "world can stop us.$"

MeteorFalls_1F_2R_Text_JayRematchNotEnoughMons:
	.string "YUI: Please return when you have more\n"
	.string "POKéMON with you.\p"
	.string "My husband and I will be waiting right\n"
	.string "here.$"

