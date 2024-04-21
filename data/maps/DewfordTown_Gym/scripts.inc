DewfordTown_Gym_MapScripts::
	.byte 0


DewfordTown_Gym_EventScript_Alicia::
	lock
	faceplayer
	goto_if_set FLAG_DEFEATED_DEWFORD_GYM, DewfordTown_Gym_EventScript_Alicia_1
	goto_if_set FLAG_FOUND_ALICIA, DewfordTown_Gym_EventScript_Alicia_2
	msgbox DewfordTown_Gym_EventScript_Alicia_Text_5
	waitmessage
	closemessage
	fadescreen FADE_TO_BLACK
	random 4
	switch VAR_RESULT
	case 0, DewfordTown_Gym_EventScript_Alicia_8
	case 1, DewfordTown_Gym_EventScript_Alicia_9
	case 2, DewfordTown_Gym_EventScript_Alicia_10
	case 3, DewfordTown_Gym_EventScript_Alicia_11
DewfordTown_Gym_EventScript_Alicia_6:
	removeobject 1
	setflag FLAG_HIDE_AND_SEEK_ACTIVE
	fadescreen FADE_FROM_BLACK
	release
	end

DewfordTown_Gym_EventScript_Alicia_1:
	msgbox DewfordTown_Gym_EventScript_Alicia_Text_0
	release
	end

DewfordTown_Gym_EventScript_Alicia_2:
	msgbox DewfordTown_Gym_EventScript_Alicia_Text_1
	trainerbattle_no_intro TRAINER_BRAWLY_1, DewfordTown_Gym_Text_AliciaDefeat
	msgbox DewfordTown_Gym_EventScript_Alicia_Text_2
	waitmessage
	call Common_EventScript_PlayGymBadgeFanfare
	setflag FLAG_DEFEATED_DEWFORD_GYM
	setflag FLAG_BADGE02_GET
	msgbox DewfordTown_Gym_EventScript_Alicia_Text_3
	giveitem ITEM_TM43
	msgbox DewfordTown_Gym_EventScript_Alicia_Text_4
	release
	end

DewfordTown_Gym_EventScript_Alicia_8:
	setflag FLAG_ALICIA_TOP_ARMOR
	goto DewfordTown_Gym_EventScript_Alicia_6

DewfordTown_Gym_EventScript_Alicia_9:
	setflag FLAG_ALICIA_BOTTOM_ARMOR
	goto DewfordTown_Gym_EventScript_Alicia_6

DewfordTown_Gym_EventScript_Alicia_10:
	setflag FLAG_ALICIA_PIANO
	goto DewfordTown_Gym_EventScript_Alicia_6

DewfordTown_Gym_EventScript_Alicia_11:
	setflag FLAG_ALICIA_TABLE
	goto DewfordTown_Gym_EventScript_Alicia_6


DewfordTown_Gym_EventScript_AliciaTopArmor::
	lock
	goto_if_set FLAG_FOUND_ALICIA, DewfordTown_Gym_EventScript_AliciaTopArmor_1
	goto_if_set FLAG_HIDE_AND_SEEK_ACTIVE, DewfordTown_Gym_EventScript_AliciaTopArmor_2
	release
	end

DewfordTown_Gym_EventScript_AliciaTopArmor_1:
	release
	end

DewfordTown_Gym_EventScript_AliciaTopArmor_2:
	goto_if_set FLAG_ALICIA_TOP_ARMOR, DewfordTown_Gym_EventScript_AliciaTopArmor_6
	release
	end

DewfordTown_Gym_EventScript_AliciaTopArmor_6:
	playse SE_PIN
	applymovement OBJ_EVENT_ID_PLAYER, DewfordTown_Gym_PlayerBackUp
	waitmovement 0
	addobject 13
	playse SE_LEDGE
	applymovement 13, DewfordTown_Gym_Movement_JumpOut
	waitmovement 0
	msgbox DewfordTown_Gym_EventScript_AliciaTopArmor_Text_0
	waitmessage
	closemessage
	fadescreen FADE_TO_BLACK
	removeobject 13
	setflag FLAG_FOUND_ALICIA
	clearflag FLAG_HIDE_AND_SEEK_ACTIVE
	addobject 1
	setflag FLAG_HIDE_AZALEA_GYM_TRAINER_1
	setflag FLAG_HIDE_AZALEA_GYM_TRAINER_2
	setflag FLAG_HIDE_AZALEA_GYM_TRAINER_3
	setflag FLAG_HIDE_AZALEA_GYM_TRAINER_4
	setflag FLAG_HIDE_AZALEA_GYM_TRAINER_5
	setflag FLAG_HIDE_AZALEA_GYM_TRAINER_6
	removeobject 2
	removeobject 3
	removeobject 4
	removeobject 6
	removeobject 7
	removeobject 8
	fadescreen FADE_FROM_BLACK
	release
	end


DewfordTown_Gym_EventScript_AliciaBottomArmor::
	lock
	goto_if_set FLAG_FOUND_ALICIA, DewfordTown_Gym_EventScript_AliciaBottomArmor_1
	goto_if_set FLAG_HIDE_AND_SEEK_ACTIVE, DewfordTown_Gym_EventScript_AliciaBottomArmor_2
	release
	end

DewfordTown_Gym_EventScript_AliciaBottomArmor_1:
	release
	end

DewfordTown_Gym_EventScript_AliciaBottomArmor_2:
	goto_if_set FLAG_ALICIA_BOTTOM_ARMOR, DewfordTown_Gym_EventScript_AliciaBottomArmor_6
	release
	end

DewfordTown_Gym_EventScript_AliciaBottomArmor_6:
	playse SE_PIN
	applymovement OBJ_EVENT_ID_PLAYER, DewfordTown_Gym_PlayerBackUp
	waitmovement 0
	addobject 11
	playse SE_LEDGE
	applymovement 11, DewfordTown_Gym_Movement_JumpOut
	waitmovement 0
	msgbox DewfordTown_Gym_EventScript_AliciaTopArmor_Text_0
	waitmessage
	closemessage
	fadescreen FADE_TO_BLACK
	removeobject 11
	setflag FLAG_FOUND_ALICIA
	clearflag FLAG_HIDE_AND_SEEK_ACTIVE
	addobject 1
	setflag FLAG_HIDE_AZALEA_GYM_TRAINER_1
	setflag FLAG_HIDE_AZALEA_GYM_TRAINER_2
	setflag FLAG_HIDE_AZALEA_GYM_TRAINER_3
	setflag FLAG_HIDE_AZALEA_GYM_TRAINER_4
	setflag FLAG_HIDE_AZALEA_GYM_TRAINER_5
	setflag FLAG_HIDE_AZALEA_GYM_TRAINER_6
	removeobject 2
	removeobject 3
	removeobject 4
	removeobject 6
	removeobject 7
	removeobject 8
	fadescreen FADE_FROM_BLACK
	release
	end


DewfordTown_Gym_EventScript_AliciaPiano::
	lock
	goto_if_set FLAG_FOUND_ALICIA, DewfordTown_Gym_EventScript_AliciaPiano_1
	goto_if_set FLAG_HIDE_AND_SEEK_ACTIVE, DewfordTown_Gym_EventScript_AliciaPiano_2
	release
	end

DewfordTown_Gym_EventScript_AliciaPiano_1:
	release
	end

DewfordTown_Gym_EventScript_AliciaPiano_2:
	goto_if_set FLAG_ALICIA_PIANO, DewfordTown_Gym_EventScript_AliciaPiano_6
	release
	end

DewfordTown_Gym_EventScript_AliciaPiano_6:
	playse SE_PIN
	applymovement OBJ_EVENT_ID_PLAYER, DewfordTown_Gym_PlayerBackUp
	waitmovement 0
	addobject 12
	playse SE_LEDGE
	applymovement 12, DewfordTown_Gym_Movement_JumpOut
	waitmovement 0
	msgbox DewfordTown_Gym_EventScript_AliciaTopArmor_Text_0
	waitmessage
	closemessage
	fadescreen FADE_TO_BLACK
	removeobject 12
	setflag FLAG_FOUND_ALICIA
	clearflag FLAG_HIDE_AND_SEEK_ACTIVE
	addobject 1
	setflag FLAG_HIDE_AZALEA_GYM_TRAINER_1
	setflag FLAG_HIDE_AZALEA_GYM_TRAINER_2
	setflag FLAG_HIDE_AZALEA_GYM_TRAINER_3
	setflag FLAG_HIDE_AZALEA_GYM_TRAINER_4
	setflag FLAG_HIDE_AZALEA_GYM_TRAINER_5
	setflag FLAG_HIDE_AZALEA_GYM_TRAINER_6
	removeobject 2
	removeobject 3
	removeobject 4
	removeobject 6
	removeobject 7
	removeobject 8
	fadescreen FADE_FROM_BLACK
	release
	end


DewfordTown_Gym_EventScript_AliciaTable::
	lock
	goto_if_set FLAG_FOUND_ALICIA, DewfordTown_Gym_EventScript_AliciaTable_1
	goto_if_set FLAG_HIDE_AND_SEEK_ACTIVE, DewfordTown_Gym_EventScript_AliciaTable_2
	release
	end

DewfordTown_Gym_EventScript_AliciaTable_1:
	release
	end

DewfordTown_Gym_EventScript_AliciaTable_2:
	goto_if_set FLAG_ALICIA_TABLE, DewfordTown_Gym_EventScript_AliciaTable_6
	release
	end

DewfordTown_Gym_EventScript_AliciaTable_6:
	playse SE_PIN
	applymovement OBJ_EVENT_ID_PLAYER, DewfordTown_Gym_PlayerBackUp
	waitmovement 0
	addobject 10
	playse SE_LEDGE
	applymovement 10, DewfordTown_Gym_Movement_JumpOut
	waitmovement 0
	msgbox DewfordTown_Gym_EventScript_AliciaTopArmor_Text_0
	waitmessage
	closemessage
	fadescreen FADE_TO_BLACK
	removeobject 10
	setflag FLAG_FOUND_ALICIA
	clearflag FLAG_HIDE_AND_SEEK_ACTIVE
	addobject 1
	setflag FLAG_HIDE_AZALEA_GYM_TRAINER_1
	setflag FLAG_HIDE_AZALEA_GYM_TRAINER_2
	setflag FLAG_HIDE_AZALEA_GYM_TRAINER_3
	setflag FLAG_HIDE_AZALEA_GYM_TRAINER_4
	setflag FLAG_HIDE_AZALEA_GYM_TRAINER_5
	setflag FLAG_HIDE_AZALEA_GYM_TRAINER_6
	removeobject 2
	removeobject 3
	removeobject 4
	removeobject 6
	removeobject 7
	removeobject 8
	fadescreen FADE_FROM_BLACK
	release
	end


DewfordTown_Gym_PlayerBackUp:
	emote_exclamation_mark
	delay_16
	delay_16
	delay_16
	delay_16
	lock_facing_direction
	walk_down
	unlock_facing_direction
	face_up
	step_end

DewfordTown_Gym_Movement_JumpOut:
	jump_in_place_down
	step_end

DewfordTown_Gym_EventScript_Trainer_1_Hiding::
	lock
	goto_if_set FLAG_FOUND_ALICIA, DewfordTown_Gym_EventScript_Trainer_1_Hiding_1
	goto_if_set FLAG_HIDE_AND_SEEK_ACTIVE, DewfordTown_Gym_EventScript_Trainer_1_Hiding_2
	release
	end

DewfordTown_Gym_EventScript_Trainer_1_Hiding_1:
	release
	end

DewfordTown_Gym_EventScript_Trainer_1_Hiding_2:
	goto_if_defeated TRAINER_BRENDEN, DewfordTown_Gym_EventScript_Trainer_Defeated
	playse SE_PIN
	applymovement OBJ_EVENT_ID_PLAYER, DewfordTown_Gym_PlayerBackUp
	waitmovement 0
	clearflag FLAG_HIDE_AZALEA_GYM_TRAINER_1
	addobject 8
	playse SE_LEDGE
	applymovement 8, DewfordTown_Gym_Movement_JumpOut
	waitmovement 0
	msgbox DewfordTown_Gym_EventScript_Trainer_1_Hiding_Text_0
	trainerbattle_no_intro TRAINER_BRENDEN, DewfordTown_Gym_Text_BrendenDefeat
	release
	end


DewfordTown_Gym_EventScript_Trainer_2_Hiding::
	lock
	goto_if_set FLAG_FOUND_ALICIA, DewfordTown_Gym_EventScript_Trainer_2_Hiding_1
	goto_if_set FLAG_HIDE_AND_SEEK_ACTIVE, DewfordTown_Gym_EventScript_Trainer_2_Hiding_2
	release
	end

DewfordTown_Gym_EventScript_Trainer_2_Hiding_1:
	release
	end

DewfordTown_Gym_EventScript_Trainer_2_Hiding_2:
	goto_if_defeated TRAINER_LILITH, DewfordTown_Gym_EventScript_Trainer_Defeated
	playse SE_PIN
	applymovement OBJ_EVENT_ID_PLAYER, DewfordTown_Gym_PlayerBackUp
	waitmovement 0
	clearflag FLAG_HIDE_AZALEA_GYM_TRAINER_2
	addobject 7
	playse SE_LEDGE
	applymovement 7, DewfordTown_Gym_Movement_JumpOut
	waitmovement 0
	msgbox DewfordTown_Gym_EventScript_Trainer_1_Hiding_Text_0
	trainerbattle_no_intro TRAINER_LILITH, DewfordTown_Gym_Text_LilithDefeat
	release
	end


DewfordTown_Gym_EventScript_Trainer_3_Hiding::
	lock
	goto_if_set FLAG_FOUND_ALICIA, DewfordTown_Gym_EventScript_Trainer_3_Hiding_1
	goto_if_set FLAG_HIDE_AND_SEEK_ACTIVE, DewfordTown_Gym_EventScript_Trainer_3_Hiding_2
	release
	end

DewfordTown_Gym_EventScript_Trainer_3_Hiding_1:
	release
	end

DewfordTown_Gym_EventScript_Trainer_3_Hiding_2:
	goto_if_defeated TRAINER_CRISTIAN, DewfordTown_Gym_EventScript_Trainer_Defeated
	playse SE_PIN
	applymovement OBJ_EVENT_ID_PLAYER, DewfordTown_Gym_PlayerBackUp
	waitmovement 0
	clearflag FLAG_HIDE_AZALEA_GYM_TRAINER_3
	addobject 6
	playse SE_LEDGE
	applymovement 6, DewfordTown_Gym_Movement_JumpOut
	waitmovement 0
	msgbox DewfordTown_Gym_EventScript_Trainer_1_Hiding_Text_0
	trainerbattle_no_intro TRAINER_CRISTIAN, DewfordTown_Gym_Text_CristianDefeat
	release
	end


DewfordTown_Gym_EventScript_Trainer_4_Hiding::
	lock
	goto_if_set FLAG_FOUND_ALICIA, DewfordTown_Gym_EventScript_Trainer_4_Hiding_1
	goto_if_set FLAG_HIDE_AND_SEEK_ACTIVE, DewfordTown_Gym_EventScript_Trainer_4_Hiding_2
	release
	end

DewfordTown_Gym_EventScript_Trainer_4_Hiding_1:
	release
	end

DewfordTown_Gym_EventScript_Trainer_4_Hiding_2:
	goto_if_defeated TRAINER_LAURA, DewfordTown_Gym_EventScript_Trainer_Defeated
	playse SE_PIN
	applymovement OBJ_EVENT_ID_PLAYER, DewfordTown_Gym_PlayerBackUp
	waitmovement 0
	clearflag FLAG_HIDE_AZALEA_GYM_TRAINER_4
	addobject 4
	playse SE_LEDGE
	applymovement 4, DewfordTown_Gym_Movement_JumpOut
	waitmovement 0
	msgbox DewfordTown_Gym_EventScript_Trainer_1_Hiding_Text_0
	trainerbattle_no_intro TRAINER_LAURA, DewfordTown_Gym_Text_LauraDefeat
	release
	end


DewfordTown_Gym_EventScript_Trainer_5_Hiding::
	lock
	goto_if_set FLAG_FOUND_ALICIA, DewfordTown_Gym_EventScript_Trainer_5_Hiding_1
	goto_if_set FLAG_HIDE_AND_SEEK_ACTIVE, DewfordTown_Gym_EventScript_Trainer_5_Hiding_2
	release
	end

DewfordTown_Gym_EventScript_Trainer_5_Hiding_1:
	release
	end

DewfordTown_Gym_EventScript_Trainer_5_Hiding_2:
	goto_if_defeated TRAINER_TAKAO, DewfordTown_Gym_EventScript_Trainer_Defeated
	playse SE_PIN
	applymovement OBJ_EVENT_ID_PLAYER, DewfordTown_Gym_PlayerBackUp
	waitmovement 0
	clearflag FLAG_HIDE_AZALEA_GYM_TRAINER_5
	addobject 2
	playse SE_LEDGE
	applymovement 2, DewfordTown_Gym_Movement_JumpOut
	waitmovement 0
	msgbox DewfordTown_Gym_EventScript_Trainer_1_Hiding_Text_0
	trainerbattle_no_intro TRAINER_TAKAO, DewfordTown_Gym_Text_TakaoDefeat
	release
	end


DewfordTown_Gym_EventScript_Trainer_6_Hiding::
	lock
	goto_if_set FLAG_FOUND_ALICIA, DewfordTown_Gym_EventScript_Trainer_6_Hiding_1
	goto_if_set FLAG_HIDE_AND_SEEK_ACTIVE, DewfordTown_Gym_EventScript_Trainer_6_Hiding_2
	release
	end

DewfordTown_Gym_EventScript_Trainer_6_Hiding_1:
	release
	end

DewfordTown_Gym_EventScript_Trainer_6_Hiding_2:
	goto_if_defeated TRAINER_JOCELYN, DewfordTown_Gym_EventScript_Trainer_Defeated
	playse SE_PIN
	applymovement OBJ_EVENT_ID_PLAYER, DewfordTown_Gym_PlayerBackUp
	waitmovement 0
	clearflag FLAG_HIDE_AZALEA_GYM_TRAINER_6
	addobject 3
	playse SE_LEDGE
	applymovement 3, DewfordTown_Gym_Movement_JumpOut
	waitmovement 0
	msgbox DewfordTown_Gym_EventScript_Trainer_1_Hiding_Text_0
	trainerbattle_no_intro TRAINER_JOCELYN, DewfordTown_Gym_Text_JocelynDefeat
	release
	end


DewfordTown_Gym_EventScript_Trainer_Defeated::
	release
	end


DewfordTown_Gym_EventScript_Maid::
	msgbox DewfordTown_Gym_EventScript_Maid_Text_0, MSGBOX_NPC
	end


DewfordTown_Gym_EventScript_AliciaRound2::
	trainerbattle_double TRAINER_BRAWLY_2, DewfordTown_Gym_Text_AliciaRematchIntro, DewfordTown_Gym_Text_AliciaRematchDefeat, DewfordTown_Gym_Text_AliciaRematchNotEnoughMons, DewfordTown_Gym_EventScript_AliciaRematchDefeated, NO_MUSIC
	msgbox DewfordTown_Gym_EventScript_AliciaRound2_Text_0
	compare VAR_GYM_LEADERS_ROUND2_COUNT, 8
	goto_if_eq DewfordTown_Gym_EventScript_AliciaRound2_1
	release
	end

DewfordTown_Gym_EventScript_AliciaRound2_1:
	msgbox DewfordTown_Gym_EventScript_AliciaRound2_Text_1
	release
	end


DewfordTown_Gym_EventScript_AliciaRematchDefeated::
	msgbox DewfordTown_Gym_EventScript_AliciaRematchDefeated_Text_0
	addvar VAR_GYM_LEADERS_ROUND2_COUNT, 1
	compare VAR_GYM_LEADERS_ROUND2_COUNT, 8
	goto_if_eq DewfordTown_Gym_EventScript_AliciaRematchDefeated_1
	release
	end

DewfordTown_Gym_EventScript_AliciaRematchDefeated_1:
	msgbox DewfordTown_Gym_EventScript_AliciaRound2_Text_1
	setflag FLAG_DEFEATED_ALL_GYM_LEADERS_2ND_TIME
	release
	end


DewfordTown_Gym_EventScript_Takao::
	trainerbattle_single TRAINER_TAKAO, DewfordTown_Gym_Text_TakaoIntro, DewfordTown_Gym_Text_TakaoDefeat
	msgbox DewfordTown_Gym_Text_TakaoPostBattle, MSGBOX_AUTOCLOSE
	end

DewfordTown_Gym_EventScript_Jocelyn::
	trainerbattle_single TRAINER_JOCELYN, DewfordTown_Gym_Text_JocelynIntro, DewfordTown_Gym_Text_JocelynDefeat
	msgbox DewfordTown_Gym_Text_JocelynPostBattle, MSGBOX_AUTOCLOSE
	end

DewfordTown_Gym_EventScript_Laura::
	trainerbattle_single TRAINER_LAURA, DewfordTown_Gym_Text_LauraIntro, DewfordTown_Gym_Text_LauraDefeat
	msgbox DewfordTown_Gym_Text_LauraPostBattle, MSGBOX_AUTOCLOSE
	end

DewfordTown_Gym_EventScript_Brenden::
	trainerbattle_single TRAINER_BRENDEN, DewfordTown_Gym_Text_BrendenIntro, DewfordTown_Gym_Text_BrendenDefeat
	msgbox DewfordTown_Gym_Text_BrendenPostBattle, MSGBOX_AUTOCLOSE
	end

DewfordTown_Gym_EventScript_Cristian::
	trainerbattle_single TRAINER_CRISTIAN, DewfordTown_Gym_Text_CristianIntro, DewfordTown_Gym_Text_CristianDefeat
	msgbox DewfordTown_Gym_Text_CristianPostBattle, MSGBOX_AUTOCLOSE
	end

DewfordTown_Gym_EventScript_Lilith::
	trainerbattle_single TRAINER_LILITH, DewfordTown_Gym_Text_LilithIntro, DewfordTown_Gym_Text_LilithDefeat
	msgbox DewfordTown_Gym_Text_LilithPostBattle, MSGBOX_AUTOCLOSE
	end

DewfordTown_Gym_EventScript_GymGuide::
	lock
	faceplayer
	goto_if_set FLAG_DEFEATED_DEWFORD_GYM, DewfordTown_Gym_EventScript_GymGuidePostVictory
	msgbox DewfordTown_Gym_Text_GymGuideAdvice, MSGBOX_DEFAULT
	release
	end

DewfordTown_Gym_EventScript_GymGuidePostVictory::
	msgbox DewfordTown_Gym_Text_GymGuidePostVictory, MSGBOX_DEFAULT
	release
	end

DewfordTown_Gym_EventScript_LeftGymStatue::
	lockall
	goto_if_set FLAG_BADGE02_GET, DewfordTown_Gym_EventScript_GymStatueCertified
	goto DewfordTown_Gym_EventScript_GymStatue
	end

DewfordTown_Gym_EventScript_RightGymStatue::
	lockall
	goto_if_set FLAG_BADGE02_GET, DewfordTown_Gym_EventScript_GymStatueCertified
	goto DewfordTown_Gym_EventScript_GymStatue
	end

DewfordTown_Gym_EventScript_GymStatueCertified::
	msgbox DewfordTown_Gym_Text_GymStatueCertified, MSGBOX_DEFAULT
	releaseall
	end

DewfordTown_Gym_EventScript_GymStatue::
	msgbox DewfordTown_Gym_Text_GymStatue, MSGBOX_DEFAULT
	releaseall
	end

DewfordTown_Gym_Text_GymGuideAdvice:
	.string "AZALEA's Gym Leader ALICIA may just be\n"
	.string "a little girl, but don't underestimate\l"
	.string "her!\p"
	.string "She is a FAIRY-type master!\p"
	.string "You can try bringing a POISON-type or\n"
	.string "STEEL-type POKéMON with you, but this\l"
	.string "will be no easy battle even then.\p"
	.string "Well, if you think you're ready, then go\n"
	.string "for it!$"

DewfordTown_Gym_Text_GymGuidePostVictory:
	.string "I knew you could do it!\p"
	.string "All thanks to following my advice, I'm\n"
	.string "sure.$"

DewfordTown_Gym_Text_TakaoIntro:
	.string "Oh, you want a re-match huh?$"

DewfordTown_Gym_Text_TakaoDefeat:
	.string "You're just too strong!$"

DewfordTown_Gym_Text_TakaoPostBattle:
	.string "You're not very good at hide and seek\n"
	.string "you know!$"

DewfordTown_Gym_Text_JocelynIntro:
	.string "Haven't had enough, have you?$"

DewfordTown_Gym_Text_JocelynDefeat:
	.string "But… How?\n"
	.string "How could I lose so easily?$"

DewfordTown_Gym_Text_JocelynPostBattle:
	.string "You're still no match for ALICIA!$"

DewfordTown_Gym_Text_LauraIntro:
	.string "You don't get tired of losing, do you?$"

DewfordTown_Gym_Text_LauraDefeat:
	.string "Waaaaaaah!\n"
	.string "I lost!$"

DewfordTown_Gym_Text_LauraPostBattle:
	.string "You're just a big meanie!$"

DewfordTown_Gym_Text_LilithIntro:
	.string "Sure, I'll battle with you again!$"

DewfordTown_Gym_Text_LilithDefeat:
	.string "Oh, you…\n"
	.string "I don't want to know you!$"

DewfordTown_Gym_Text_LilithPostBattle:
	.string "ALICIA is the best at hide and seek!$"

DewfordTown_Gym_Text_BrendenIntro:
	.string "Ufufufu, so you want more do you?$"

DewfordTown_Gym_Text_BrendenDefeat:
	.string "How'd this happen?\n"
	.string "It's not like me to lose this way!$"

DewfordTown_Gym_Text_BrendenPostBattle:
	.string "How many of us are hiding in here?\p"
	.string "I'm not telling you!$"

DewfordTown_Gym_Text_CristianIntro:
	.string "What makes you so certain this time will\n"
	.string "be different?$"

DewfordTown_Gym_Text_CristianDefeat:
	.string "Grrrrr!\n"
	.string "Vastly overpowered!$"

DewfordTown_Gym_Text_CristianPostBattle:
	.string "You win!\n"
	.string "Now find ALICIA!$"

DewfordTown_Gym_Text_GymStatue:
	.string "AZALEA TOWN POKéMON GYM\p"
	.string "ALICIA'S CERTIFIED TRAINERS:\n"
	.string "SHANE$"

DewfordTown_Gym_Text_GymStatueCertified:
	.string "AZALEA TOWN POKéMON GYM\p"
	.string "ALICIA'S CERTIFIED TRAINERS:\n"
	.string "SHANE, {PLAYER}$"

DewfordTown_Gym_EventScript_Alicia_Text_0:
	.string "I had a lot of fun playing with you!\p"
	.string "You're pretty good at battling too,\n"
	.string "maybe we can battle again someday.$"

DewfordTown_Gym_EventScript_Alicia_Text_1:
	.string "Do you want to play hide and seek\n"
	.string "again?\p"
	.string "...\p"
	.string "Oh, you're here for a battle?\p"
	.string "Why didn't you say so earlier, I love\n"
	.string "POKéMON battles!\p"
	.string "Alright, let's see how strong you are!$"

DewfordTown_Gym_EventScript_Alicia_Text_2:
	.string "{PLAYER} received the SPARKLE BADGE\n"
	.string "from ALICIA!$"

DewfordTown_Gym_EventScript_Alicia_Text_3:
	.string "That SPARKLE BADGE will make all\n"
	.string "POKéMON up to Level 35 listen to you\l"
	.string "without question, even the POKéMON\l"
	.string "you get from trades!\p"
	.string "You will also be able to use the HM move\n"
	.string "FLASH outside of battle.\p"
	.string "Oh yeah, I would also like you to have\n"
	.string "this!$"

DewfordTown_Gym_EventScript_Alicia_Text_4:
	.string "That TM contains Draining Kiss. It may\n"
	.string "sound like an innocent move, but your\l"
	.string "POKéMON will absorb over half the\l"
	.string "damage done to your opponent!$"

DewfordTown_Gym_EventScript_Alicia_Text_5:
	.string "I'm so bored!\p"
	.string "There's nothing fun to do around here.\p"
	.string "You there, play hide and seek with me!\p"
	.string "I'll hide somewhere in the gym, and you\n"
	.string "come find me.\p"
	.string "Ok, no peeking!$"

DewfordTown_Gym_EventScript_AliciaTopArmor_Text_0:
	.string "You found me!\p"
	.string "That was fun, you're pretty good at\n"
	.string "hide and seek!$"

DewfordTown_Gym_EventScript_Trainer_1_Hiding_Text_0:
	.string "You found me!\p"
	.string "Just kidding, I'm not ALICIA!$"

DewfordTown_Gym_EventScript_Maid_Text_0:
	.string "Thank you for playing with ALICIA.\p"
	.string "Keeping up with her can be a real hassle\n"
	.string "sometimes.$"

DewfordTown_Gym_EventScript_AliciaRound2_Text_0:
	.string "Hey!\p"
	.string "How did you get so good at battling?\p"
	.string "You must tell me your secrets!$"

DewfordTown_Gym_EventScript_AliciaRound2_Text_1:
	.string "Oh, by the way, I hear the POKéMON\n"
	.string "League has a new Champion.\p"
	.string "You should totally go challenge them!$"

DewfordTown_Gym_EventScript_AliciaRematchDefeated_Text_0:
	.string "That was even more fun than our first\n"
	.string "battle!\p"
	.string "Hmm... You should consider becoming one\n"
	.string "of my servants.\p"
	.string "Then we could play together all the\n"
	.string "time!$"

DewfordTown_Gym_Text_AliciaDefeat::
	.string "Wow! You're a lot tougher than you look!\p"
	.string "That was the best battle I've had in a\n"
	.string "while. Here, I will gladly present you\l"
	.string "with this gym badge!$"

DewfordTown_Gym_Text_AliciaRematchIntro::
	.string "Oh, hey, I remember you!\p"
	.string "Are you here to play another round of\n"
	.string "hide and seek?\p"
	.string "Hehe, I'm just kidding.\p"
	.string "I bet you're here for another POKéMON\n"
	.string "battle.\p"
	.string "Well, those are really fun too.\p"
	.string "Ok, you're on!$"

DewfordTown_Gym_Text_AliciaRematchDefeat::
	.string "Wow!\p"
	.string "You just keep getting better and\n"
	.string "better!$"

DewfordTown_Gym_Text_AliciaRematchNotEnoughMons::
	.string "...\p"
	.string "Uhm, excuse me, but this will be a double\n"
	.string "battle.\p"
	.string "Please come back when you have more\n"
	.string "than one POKéMON with you.$"
