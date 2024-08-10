.set LOCALID_NURSE, 1

RustboroCity_PokemonCenter_1F_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, RustboroCity_PokemonCenter_1F_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0

RustboroCity_PokemonCenter_1F_OnTransition:
	setrespawn HEAL_LOCATION_RUSTBORO_CITY
	end

RustboroCity_PokemonCenter_1F_EventScript_Nurse::
	setvar VAR_0x800B, LOCALID_NURSE
	call Common_EventScript_PkmnCenterNurse
	waitmessage
	waitbuttonpress
	release
	end

RustboroCity_PokemonCenter_1F_EventScript_Man::
	msgbox RustboroCity_PokemonCenter_1F_Text_PokemonHavePersonalities, MSGBOX_NPC
	end

RustboroCity_PokemonCenter_1F_EventScript_Boy::
	msgbox RustboroCity_PokemonCenter_1F_Text_MaleAndFemalePokemon, MSGBOX_NPC
	end

RustboroCity_PokemonCenter_1F_EventScript_Girl::
	msgbox RustboroCity_PokemonCenter_1F_Text_HMCutNextDoor, MSGBOX_NPC
	end

RustboroCity_PokemonCenter_1F_Text_PokemonHavePersonalities:
	.string "My POKéMON has a NAIVE nature, and my\n"
	.string "friend's has a JOLLY nature.\p"
	.string "It's fascinating how POKéMON have\n"
	.string "personalities!$"

RustboroCity_PokemonCenter_1F_Text_MaleAndFemalePokemon:
	.string "I changed my POKéMON's ability to\n"
	.string "its hidden ability using an Ability\l"
	.string "Patch.\p"
	.string "The Supplement Shop in town sells them.$"

RustboroCity_PokemonCenter_1F_Text_HMCutNextDoor:
	.string "Have you been to the Ruins of Alph?\p"
	.string "The ruins have always fascinated me\n"
	.string "since I was a little girl.$"

RustboroCity_PokemonCenter_1F_EventScript_LevelNurse::
	lock
	faceplayer
	msgbox RustboroCity_PokemonCenter_1F_EventScript_LevelNurse_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq RustboroCity_PokemonCenter_1F_EventScript_LevelNurse_1
	trainerbattle_no_intro TRAINER_MAY_LILYCOVE_TORCHIC, RustboroCity_PokemonCenter_1F_Text_Defeated
	msgbox RustboroCity_PokemonCenter_1F_EventScript_LevelNurse_Text_2
	special HealPlayerParty
	release
	end

RustboroCity_PokemonCenter_1F_EventScript_LevelNurse_1:
	msgbox RustboroCity_PokemonCenter_1F_EventScript_LevelNurse_Text_1
	release
	end


RustboroCity_PokemonCenter_1F_EventScript_LevelNurse_Text_0:
	.string "Would you like a quick battle to level up\n"
	.string "your POKéMON?$"

RustboroCity_PokemonCenter_1F_EventScript_LevelNurse_Text_1:
	.string "Very well.\p"
	.string "Come see me if you change your mind.$"

RustboroCity_PokemonCenter_1F_EventScript_LevelNurse_Text_2:
	.string "Please come see me if you need more Exp.$"

RustboroCity_PokemonCenter_1F_Text_Defeated::
	.string "I hope that helped!$"
