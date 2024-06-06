ShoalCave_LowTideEntranceRoom_MapScripts::
	.byte 0


ShoalCave_LowTideEntranceRoom_EventScript_OldMan::
	msgbox ShoalCave_LowTideEntranceRoom_EventScript_OldMan_Text_0, MSGBOX_NPC
	end


ShoalCave_LowTideEntranceRoom_EventScript_ItemShellBell::
	finditem ITEM_SHELL_BELL
	end


ShoalCave_LowTideEntranceRoom_EventScript_Edward::
	trainerbattle_single TRAINER_EDWARD, Route110_Text_EdwardIntro, Route110_Text_EdwardDefeated
	msgbox Route110_Text_EdwardPostBattle, MSGBOX_AUTOCLOSE
	end

ShoalCave_LowTideEntranceRoom_EventScript_Jaclyn::
	trainerbattle_single TRAINER_JACLYN, Route110_Text_JaclynIntro, Route110_Text_JaclynDefeated
	msgbox Route110_Text_JaclynPostBattle, MSGBOX_AUTOCLOSE
	end

ShoalCave_LowTideEntranceRoom_EventScript_Jacob::
	trainerbattle_single TRAINER_JACOB, Route110_Text_JacobIntro, Route110_Text_JacobDefeated
	msgbox Route110_Text_JacobPostBattle, MSGBOX_AUTOCLOSE
	end

ShoalCave_LowTideEntranceRoom_EventScript_Isabel::
	trainerbattle_single TRAINER_ISABEL_1, Route110_Text_IsabelIntro, Route110_Text_IsabelDefeated, ShoalCave_LowTideEntranceRoom_EventScript_IsabelRegisterMatchCallAfterBattle
	specialvar VAR_RESULT, ShouldTryRematchBattle
	goto_if_eq VAR_RESULT, TRUE, ShoalCave_LowTideEntranceRoom_EventScript_IsabelRematch
	msgbox Route110_Text_IsabelPostBattle, MSGBOX_DEFAULT
	release
	end

ShoalCave_LowTideEntranceRoom_EventScript_IsabelRegisterMatchCallAfterBattle::
	special PlayerFaceTrainerAfterBattle
	waitmovement 0
	msgbox Route110_Text_IsabelRegister, MSGBOX_DEFAULT
	register_matchcall TRAINER_ISABEL_1
	release
	end

ShoalCave_LowTideEntranceRoom_EventScript_IsabelRematch::
	trainerbattle_rematch TRAINER_ISABEL_1, Route110_Text_IsabelRematchIntro, Route110_Text_IsabelRematchDefeated
	msgbox Route110_Text_IsabelRematchPostBattle, MSGBOX_AUTOCLOSE
	end

ShoalCave_LowTideEntranceRoom_EventScript_Alyssa::
	trainerbattle_single TRAINER_ALYSSA, Route110_Text_AlyssaIntro, Route110_Text_AlyssaDefeated
	msgbox Route110_Text_AlyssaPostBattle, MSGBOX_AUTOCLOSE
	end

ShoalCave_LowTideEntranceRoom_EventScript_OldMan_Text_0:
	.string "I dropped my Shell Bell, but the path is\n"
	.string "too icy for me to go get it.\p"
	.string "What a bother.$"
