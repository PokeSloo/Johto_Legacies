.set LOCALID_DAYCARE_MAN, 3

Route117_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route117_OnTransition
	.byte 0

Route117_OnTransition:
	call Route117_EventScript_TryMoveDayCareMan
	end

Route117_EventScript_TryMoveDayCareMan::
	goto_if_unset FLAG_PENDING_DAYCARE_EGG, Route117_EventScript_StopMoveDayCareMan
	setobjectxyperm LOCALID_DAYCARE_MAN, 15, 21
Route117_EventScript_StopMoveDayCareMan::
	return

Route117_EventScript_Woman::
	msgbox Route117_Text_ArentTheseFlowersPretty, MSGBOX_NPC
	end

Route117_EventScript_LittleBoy::
	msgbox Route117_Text_AirIsTastyHere, MSGBOX_NPC
	end

Route117_EventScript_Girl::
	msgbox Route117_Text_DayCarePokemonHadNewMove, MSGBOX_NPC
	end

Route117_EventScript_RouteSignVerdanturf::
	msgbox Route117_Text_RouteSignVerdanturf, MSGBOX_SIGN
	end

Route117_EventScript_RouteSignMauville::
	msgbox Route117_Text_RouteSignMauville, MSGBOX_SIGN
	end

Route117_EventScript_DayCareSign::
	msgbox Route117_Text_DayCareSign, MSGBOX_SIGN
	end

Route117_EventScript_Isaac::
	trainerbattle_single TRAINER_ISAAC_1, Route117_Text_IsaacIntro, Route117_Text_IsaacDefeat, Route117_EventScript_RegisterIsaac
	specialvar VAR_RESULT, ShouldTryRematchBattle
	goto_if_eq VAR_RESULT, TRUE, Route117_EventScript_RematchIsaac
	msgbox Route117_Text_IsaacPostBattle, MSGBOX_DEFAULT
	release
	end

Route117_EventScript_RegisterIsaac::
	special PlayerFaceTrainerAfterBattle
	waitmovement 0
	msgbox Route117_Text_IsaacRegister, MSGBOX_DEFAULT
	register_matchcall TRAINER_ISAAC_1
	release
	end

Route117_EventScript_RematchIsaac::
	trainerbattle_rematch TRAINER_ISAAC_1, Route117_Text_IsaacRematchIntro, Route117_Text_IsaacRematchDefeat
	msgbox Route117_Text_IsaacPostRematch, MSGBOX_AUTOCLOSE
	end

Route117_EventScript_Lydia::
	trainerbattle_single TRAINER_LYDIA_1, Route117_Text_LydiaIntro, Route117_Text_LydiaDefeat, Route117_EventScript_RegisterLydia
	specialvar VAR_RESULT, ShouldTryRematchBattle
	goto_if_eq VAR_RESULT, TRUE, Route117_EventScript_RematchLydia
	msgbox Route117_Text_LydiaPostBattle, MSGBOX_DEFAULT
	release
	end

Route117_EventScript_RegisterLydia::
	special PlayerFaceTrainerAfterBattle
	waitmovement 0
	msgbox Route117_Text_LydiaRegister, MSGBOX_DEFAULT
	register_matchcall TRAINER_LYDIA_1
	release
	end

Route117_EventScript_RematchLydia::
	trainerbattle_rematch TRAINER_LYDIA_1, Route117_Text_LydiaRematchIntro, Route117_Text_LydiaRematchDefeat
	msgbox Route117_Text_LydiaPostRematch, MSGBOX_AUTOCLOSE
	end

Route117_EventScript_Dylan::
	trainerbattle_single TRAINER_DYLAN_1, Route117_Text_DylanIntro, Route117_Text_DylanDefeat, Route117_EventScript_RegisterDylan
	specialvar VAR_RESULT, ShouldTryRematchBattle
	goto_if_eq VAR_RESULT, TRUE, Route117_EventScript_RematchDylan
	msgbox Route117_Text_DylanPostBattle, MSGBOX_DEFAULT
	release
	end

Route117_EventScript_RegisterDylan::
	special PlayerFaceTrainerAfterBattle
	waitmovement 0
	msgbox Route117_Text_DylanRegister, MSGBOX_DEFAULT
	register_matchcall TRAINER_DYLAN_1
	release
	end

Route117_EventScript_RematchDylan::
	trainerbattle_rematch TRAINER_DYLAN_1, Route117_Text_DylanRematchIntro, Route117_Text_DylanRematchDefeat
	msgbox Route117_Text_DylanPostRematch, MSGBOX_AUTOCLOSE
	end

Route117_EventScript_Maria::
	trainerbattle_single TRAINER_MARIA_1, Route117_Text_MariaIntro, Route117_Text_MariaDefeat, Route117_EventScript_RegisterMaria
	specialvar VAR_RESULT, ShouldTryRematchBattle
	goto_if_eq VAR_RESULT, TRUE, Route117_EventScript_RematchMaria
	msgbox Route117_Text_MariaPostBattle, MSGBOX_DEFAULT
	release
	end

Route117_EventScript_RegisterMaria::
	special PlayerFaceTrainerAfterBattle
	waitmovement 0
	msgbox Route117_Text_MariaRegister, MSGBOX_DEFAULT
	register_matchcall TRAINER_MARIA_1
	release
	end

Route117_EventScript_RematchMaria::
	trainerbattle_rematch TRAINER_MARIA_1, Route117_Text_MariaRematchIntro, Route117_Text_MariaRematchDefeat
	msgbox Route117_Text_MariaPostRematch, MSGBOX_AUTOCLOSE
	end

Route117_EventScript_Derek::
	trainerbattle_single TRAINER_DEREK, Route117_Text_DerekIntro, Route117_Text_DerekDefeat
	msgbox Route117_Text_DerekPostBattle, MSGBOX_AUTOCLOSE
	end

Route117_EventScript_Anna::
	trainerbattle_double TRAINER_ANNA_AND_MEG_1, Route117_Text_AnnaIntro, Route117_Text_AnnaDefeat, Route117_Text_AnnaNotEnoughMons, Route117_EventScript_RegisterAnna
	specialvar VAR_RESULT, ShouldTryRematchBattle
	goto_if_eq VAR_RESULT, TRUE, Route117_EventScript_RematchAnna
	msgbox Route117_Text_AnnaPostBattle, MSGBOX_DEFAULT
	release
	end

Route117_EventScript_RegisterAnna::
	msgbox Route117_Text_AnnaAndMegRegister, MSGBOX_DEFAULT
	register_matchcall TRAINER_ANNA_AND_MEG_1
	release
	end

Route117_EventScript_RematchAnna::
	trainerbattle_rematch_double TRAINER_ANNA_AND_MEG_1, Route117_Text_AnnaRematchIntro, Route117_Text_AnnaRematchDefeat, Route117_Text_AnnaRematchNotEnoughMons
	msgbox Route117_Text_AnnaPostRematch, MSGBOX_AUTOCLOSE
	end

Route117_EventScript_Meg::
	trainerbattle_double TRAINER_ANNA_AND_MEG_1, Route117_Text_MegIntro, Route117_Text_MegDefeat, Route117_Text_MegNotEnoughMons, Route117_EventScript_RegisterMeg
	specialvar VAR_RESULT, ShouldTryRematchBattle
	goto_if_eq VAR_RESULT, TRUE, Route117_EventScript_RematchMeg
	msgbox Route117_Text_MegPostBattle, MSGBOX_DEFAULT
	release
	end

Route117_EventScript_RegisterMeg::
	msgbox Route117_Text_AnnaAndMegRegister, MSGBOX_DEFAULT
	register_matchcall TRAINER_ANNA_AND_MEG_1
	release
	end

Route117_EventScript_RematchMeg::
	trainerbattle_rematch_double TRAINER_ANNA_AND_MEG_1, Route117_Text_MegRematchIntro, Route117_Text_MegRematchDefeat, Route117_Text_MegRematchNotEnoughMons
	msgbox Route117_Text_MegPostRematch, MSGBOX_AUTOCLOSE
	end

Route117_EventScript_Melina::
	trainerbattle_single TRAINER_MELINA, Route117_Text_MelinaIntro, Route117_Text_MelinaDefeat
	msgbox Route117_Text_MelinaPostBattle, MSGBOX_AUTOCLOSE
	end

Route117_EventScript_Brandi::
	trainerbattle_single TRAINER_BRANDI, Route117_Text_BrandiIntro, Route117_Text_BrandiDefeat
	msgbox Route117_Text_BrandiPostBattle, MSGBOX_AUTOCLOSE
	end

Route117_EventScript_Aisha::
	trainerbattle_single TRAINER_AISHA, Route117_Text_AishaIntro, Route117_Text_AishaDefeat
	msgbox Route117_Text_AishaPostBattle, MSGBOX_AUTOCLOSE
	end

Route117_Text_DayCarePokemonHadNewMove:
	.string "One day I hope to compete on WHITNEY's\n"
	.string "gameshow, THE CHALLENGE.\p"
	.string "I'll have to keep training for now.$"

Route117_Text_ArentTheseFlowersPretty:
	.string "There are wild Ditto on this route.\p"
	.string "They are great for breeding with other\n"
	.string "POKéMON in the daycare.$"

Route117_Text_AirIsTastyHere:
	.string "Are you headed to Goldenrod City?\p"
	.string "That's where I was born!\p"
	.string "I love it there.$"

Route117_Text_RouteSignVerdanturf:
	.string "ROUTE 34\n"
	.string "{UP_ARROW} North to GOLDENROD CITY$"

Route117_Text_RouteSignMauville:
	.string "ROUTE 34\n"
	.string "{DOWN_ARROW} South to AZALEA TOWN$"

Route117_Text_DayCareSign:
	.string "POKéMON DAY CARE\n"
	.string "“Let us raise your POKéMON.”$"

Route117_EventScript_Trigger::
	lock
	goto_if_set FLAG_OLIVER_CALL_RT_34, Route117_EventScript_Trigger_1
	pokenavcall Route117_EventScript_Trigger_Text_0
	waitmessage
	setflag FLAG_OLIVER_CALL_RT_34
	setflag FLAG_HIDE_SILVER_ECRUTEAK
	release
	end

Route117_EventScript_Trigger_1:
	release
	end


Route117_EventScript_Azumarill::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_AZUMARILL, CRY_MODE_NORMAL
	msgbox Route117_EventScript_Azumarill_Text_0
	waitmoncry
	release
	end


Route117_EventScript_Hypno::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_HYPNO, CRY_MODE_NORMAL
	msgbox Route117_EventScript_Hypno_Text_0
	waitmoncry
	release
	end


Route117_EventScript_Miltank::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_MILTANK, CRY_MODE_NORMAL
	msgbox Route117_EventScript_Miltank_Text_0
	waitmoncry
	release
	end


Route117_EventScript_Lapras::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_LAPRAS, CRY_MODE_NORMAL
	msgbox Route117_EventScript_Lapras_Text_0
	waitmoncry
	release
	end


Route117_EventScript_Trigger_Text_0:
	.string "Hello? {PLAYER}?\p"
	.string "This is OLIVER. I'm calling to let you\n"
	.string "know about my recent findings in the\l"
	.string "Ruins of Alph.\p"
	.string "I've discovered that the human\n"
	.string "remains we found in the catacombs\l"
	.string "date back to the same time period\l"
	.string "that scientists believe is when\l"
	.string "Ho-oh resurrected the three\l"
	.string "legendary beasts.\p"
	.string "This is even more confirmation that\n"
	.string "the Unown were an ancient group of\l"
	.string "people that were resurrected by\l"
	.string "Ho-oh!\p"
	.string "Oh, I also discovered ancient\n"
	.string "writing along the back wall of the\l"
	.string "catacomb chamber we fell into,\l"
	.string "although I am still deciphering it.\p"
	.string "...\p"
	.string "What's that you say?\p"
	.string "A strange POKéMON in Ilex Forest?\p"
	.string "It took you to a sort of alternate\n"
	.string "Ilex and Azalea town?\p"
	.string "Hmm...\p"
	.string "It's possible you encountered the\n"
	.string "legendary POKéMON, Celebi.\p"
	.string "Celebi is known as the protector of\n"
	.string "Ilex Forest, and according to rumor,\l"
	.string "has the ability to travel through\l"
	.string "time!\p"
	.string "I believe that is what you\n"
	.string "experienced!\p"
	.string "This is an incredible occurrence,\n"
	.string "and quite frankly, I must say I'm a\l"
	.string "bit jealous of your ability to\l"
	.string "seemingly attract legendary POKéMON.\p"
	.string "Well, keep me posted if anything\n"
	.string "else interesting happens.\p"
	.string "Until next time, {PLAYER}.$"

Route117_EventScript_Azumarill_Text_0:
	.string "AZUMARILL: Azu azu!$"

Route117_EventScript_Hypno_Text_0:
	.string "HYPNO: No noo!$"

Route117_EventScript_Miltank_Text_0:
	.string "MILTANK: Moo moo!$"

Route117_EventScript_Lapras_Text_0:
	.string "LAPRAS: Lapra!$"
