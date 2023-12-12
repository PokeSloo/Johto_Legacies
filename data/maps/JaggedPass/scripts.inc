JaggedPass_MapScripts::
	.byte 0

JaggedPass_EventScript_Eric::
	trainerbattle_single TRAINER_ERIC, JaggedPass_Text_EricIntro, JaggedPass_Text_EricDefeat
	msgbox JaggedPass_Text_EricPostBattle, MSGBOX_AUTOCLOSE
	end

JaggedPass_EventScript_Diana::
	trainerbattle_single TRAINER_DIANA_1, JaggedPass_Text_DianaIntro, JaggedPass_Text_DianaDefeat, JaggedPass_EventScript_RegisterDiana
	specialvar VAR_RESULT, ShouldTryRematchBattle
	goto_if_eq VAR_RESULT, TRUE, JaggedPass_EventScript_DianaRematch
	msgbox JaggedPass_Text_DianaPostBattle, MSGBOX_DEFAULT
	release
	end

JaggedPass_EventScript_RegisterDiana::
	special PlayerFaceTrainerAfterBattle
	msgbox JaggedPass_Text_DianaRegister, MSGBOX_DEFAULT
	register_matchcall TRAINER_DIANA_1
	release
	end

JaggedPass_EventScript_DianaRematch::
	trainerbattle_rematch TRAINER_DIANA_1, JaggedPass_Text_DianaRematchIntro, JaggedPass_Text_DianaRematchDefeat
	msgbox JaggedPass_Text_DianaPostRematch, MSGBOX_AUTOCLOSE
	end

JaggedPass_EventScript_Ethan::
	trainerbattle_single TRAINER_ETHAN_1, JaggedPass_Text_EthanIntro, JaggedPass_Text_EthanDefeat, JaggedPass_EventScript_RegisterEthan
	specialvar VAR_RESULT, ShouldTryRematchBattle
	goto_if_eq VAR_RESULT, TRUE, JaggedPass_EventScript_EthanRematch
	msgbox JaggedPass_Text_EthanPostBattle, MSGBOX_DEFAULT
	release
	end

JaggedPass_EventScript_RegisterEthan::
	special PlayerFaceTrainerAfterBattle
	msgbox JaggedPass_Text_EthanRegister, MSGBOX_DEFAULT
	register_matchcall TRAINER_ETHAN_1
	release
	end

JaggedPass_EventScript_EthanRematch::
	trainerbattle_rematch TRAINER_ETHAN_1, JaggedPass_Text_EthanRematchIntro, JaggedPass_Text_EthanRematchDefeat
	msgbox JaggedPass_Text_EthanPostRematch, MSGBOX_AUTOCLOSE
	end

JaggedPass_EventScript_Julio::
	trainerbattle_single TRAINER_JULIO, JaggedPass_Text_JulioIntro, JaggedPass_Text_JulioDefeat
	msgbox JaggedPass_Text_JulioPostBattle, MSGBOX_AUTOCLOSE
	end

JaggedPass_EventScript_Autumn::
	trainerbattle_single TRAINER_AUTUMN, JaggedPass_Text_AutumnIntro, JaggedPass_Text_AutumnDefeat
	msgbox JaggedPass_Text_AutumnPostBattle, MSGBOX_AUTOCLOSE
	end

JaggedPass_Text_EricIntro:
	.string "Yodelayheehoo!$"

JaggedPass_Text_EricDefeat:
	.string "Lost the battle and my voice...$"

JaggedPass_Text_EricPostBattle:
	.string "This cold mountain air is the best\n"
	.string "environment for yodeling.\p"
	.string "It really carries your voice.$"

JaggedPass_Text_DianaIntro:
	.string "I came here for a picnic, but my food is\n"
	.string "frozen solid.$"

JaggedPass_Text_DianaDefeat:
	.string "Why did I even bother coming up here?$"

JaggedPass_Text_DianaPostBattle:
	.string "I thought this would be a romantic spot\n"
	.string "to bring my boyfriend sometime, but\l"
	.string "this bitter cold is just too much!$"

JaggedPass_Text_DianaRegister:
	.string "Hey, I wasn't done complaining.\p"
	.string "Here, I'll just call you later to\n"
	.string "complain...$"

JaggedPass_Text_DianaRematchIntro:
	.string "I was waiting for my food to thaw out,\n"
	.string "but it's still frozen.$"

JaggedPass_Text_DianaRematchDefeat:
	.string "Why do I stay on this ridiculous\n"
	.string "mountain...$"

JaggedPass_Text_DianaPostRematch:
	.string "I thought this would be a romantic spot\n"
	.string "to bring my boyfriend sometime, but\l"
	.string "this bitter cold is just too much!$"

JaggedPass_Text_EthanIntro:
	.string "You saw that item down there too, didn't\n"
	.string "you?$"

JaggedPass_Text_EthanDefeat:
	.string "I should have grabbed it sooner instead\n"
	.string "of just standing here.$"

JaggedPass_Text_EthanPostBattle:
	.string "You know what, camping in the cold is my\n"
	.string "favorite.\p"
	.string "Especially when I have a nice campfire\n"
	.string "burning.$"

JaggedPass_Text_EthanRegister:
	.string "Alright, you can have it.\p"
	.string "...\p"
	.string "You can also have this...$"

JaggedPass_Text_EthanRematchIntro:
	.string "Are you here on a camping trip as well?$"

JaggedPass_Text_EthanRematchDefeat:
	.string "A snowboarder threw snow on my\n"
	.string "campfire as they went by, and now this?$"

JaggedPass_Text_EthanPostRematch:
	.string "You know what, camping in the cold is my\n"
	.string "favorite.\p"
	.string "Especially when I have a nice campfire\n"
	.string "burning.$"

JaggedPass_Text_JulioIntro:
	.string "It's too crowded to snowboard up here!$"

JaggedPass_Text_JulioDefeat:
	.string "Fine, you win!$"

JaggedPass_Text_JulioPostBattle:
	.string "This slope was opened up just for\n"
	.string "snowboarding and skiing, but random\l"
	.string "people keep climbing up here.$"

JaggedPass_Text_AutumnIntro:
	.string "Left, or right?\p"
	.string "I'm still not sure which path is the\n"
	.string "best.$"

JaggedPass_Text_AutumnDefeat:
	.string "Hmm…\n"
	.string "What went wrong?$"

JaggedPass_Text_AutumnPostBattle:
	.string "I think I'll just keep skiing down the\n"
	.string "mountain until I find the best path.$"

