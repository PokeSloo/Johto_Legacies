MtPyre_6F_MapScripts::
	map_script MAP_SCRIPT_ON_LOAD, MtPyre_6F_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

MtPyre_6F_MapScripts_MAP_SCRIPT_ON_LOAD:
	goto_if_set FLAG_RUINS_ROOM_OPEN, MtPyre_6F_MapScripts_MAP_SCRIPT_ON_LOAD_2
	end

MtPyre_6F_MapScripts_MAP_SCRIPT_ON_LOAD_2:
	setmetatile 8, 9, 0x262, FALSE
	setmetatile 9, 9, 0x262, FALSE
	setmetatile 10, 9, 0x262, FALSE
	setmetatile 12, 9, 0x262, FALSE
	setmetatile 9, 10, 0x262, FALSE
	setmetatile 11, 10, 0x262, FALSE
	setmetatile 7, 9, 0x261, FALSE
	setmetatile 11, 9, 0x261, FALSE
	setmetatile 13, 9, 0x261, FALSE
	setmetatile 6, 10, 0x261, FALSE
	setmetatile 8, 10, 0x261, FALSE
	setmetatile 10, 10, 0x261, FALSE
	setmetatile 12, 10, 0x261, FALSE
	setmetatile 14, 10, 0x261, FALSE
	setmetatile 10, 11, 0x261, FALSE
	return


MtPyre_6F_EventScript_Oliver::
	lock
	faceplayer
	msgbox MtPyre_6F_EventScript_Oliver_Text_0
	waitmessage
	closemessage
	playfanfare MUS_OBTAIN_ITEM
	msgbox MtPyre_6F_EventScript_Oliver_Text_1
	waitfanfare
	removeitem ITEM_OAKS_PARCEL
	msgbox MtPyre_6F_EventScript_Oliver_Text_2
	waitmessage
	closemessage
	giveitem ITEM_HM01_CUT
	msgbox MtPyre_6F_EventScript_Oliver_Text_3
	waitmessage
	closemessage
	playse SE_PIN
	applymovement 4, MtPyre_6F_Exclamation
	waitmovement 0
	msgbox MtPyre_6F_EventScript_Oliver_Text_4
	waitmessage
	closemessage
	fadeoutbgm 1
	playse SE_M_ROCK_THROW
	setvar VAR_0x8004, 1
	setvar VAR_0x8005, 1
	setvar VAR_0x8006, 12
	setvar VAR_0x8007, 5
	special ShakeCamera
	waitstate
	setmetatile 8, 9, 0x261, FALSE
	setmetatile 9, 9, 0x261, FALSE
	setmetatile 10, 9, 0x261, FALSE
	setmetatile 12, 9, 0x261, FALSE
	setmetatile 9, 10, 0x261, FALSE
	setmetatile 11, 10, 0x261, FALSE
	setmetatile 7, 9, 0x261, FALSE
	setmetatile 11, 9, 0x261, FALSE
	setmetatile 13, 9, 0x261, FALSE
	setmetatile 6, 10, 0x261, FALSE
	setmetatile 8, 10, 0x261, FALSE
	setmetatile 10, 10, 0x261, FALSE
	setmetatile 12, 10, 0x261, FALSE
	setmetatile 14, 10, 0x261, FALSE
	setmetatile 10, 11, 0x261, FALSE
	special DrawWholeMapView
	playse SE_PIN
	applymovement 4, MtPyre_6F_Exclamation
	applymovement OBJ_EVENT_ID_PLAYER, MtPyre_6F_Exclamation
	waitmovement 0
	delay 30
	setmetatile 9, 9, 0x262, FALSE
	special DrawWholeMapView
	delay 10
	removeobject 4
	playse SE_FALL
	waitse
	applymovement OBJ_EVENT_ID_PLAYER, MtPyre_6F_LookDown
	waitmovement 0
	delay 30
	setmetatile 8, 9, 0x262, FALSE
	setmetatile 10, 9, 0x262, FALSE
	setmetatile 12, 9, 0x262, FALSE
	setmetatile 9, 10, 0x262, FALSE
	setmetatile 11, 10, 0x262, FALSE
	special DrawWholeMapView
	setflag FLAG_OLIVER_CATACOMBS_RESEARCH
	setflag FLAG_RUINS_ROOM_OPEN
	fadeinbgm 4
	warphole MAP_MT_PYRE_5F
	release
	end


MtPyre_6F_Exclamation:
	emote_exclamation_mark
	step_end

MtPyre_6F_LookDown:
	face_down
	step_end

MtPyre_6F_EventScript_Valerie::
	trainerbattle_single TRAINER_VALERIE_1, MtPyre_6F_Text_ValerieIntro, MtPyre_6F_Text_ValerieDefeat, MtPyre_6F_EventScript_RegisterValerie
	specialvar VAR_RESULT, ShouldTryRematchBattle
	goto_if_eq VAR_RESULT, TRUE, MtPyre_6F_EventScript_RematchValerie
	msgbox MtPyre_6F_Text_ValeriePostBattle, MSGBOX_DEFAULT
	release
	end

MtPyre_6F_EventScript_RegisterValerie::
	special PlayerFaceTrainerAfterBattle
	waitmovement 0
	msgbox MtPyre_6F_Text_ValerieRegister, MSGBOX_DEFAULT
	register_matchcall TRAINER_VALERIE_1
	release
	end

MtPyre_6F_EventScript_RematchValerie::
	trainerbattle_rematch TRAINER_VALERIE_1, MtPyre_6F_Text_ValerieRematchIntro, MtPyre_6F_Text_ValerieRematchDefeat
	msgbox MtPyre_6F_Text_ValeriePostRematch, MSGBOX_AUTOCLOSE
	end

MtPyre_6F_EventScript_Cedric::
	trainerbattle_single TRAINER_CEDRIC, MtPyre_6F_Text_CedricIntro, MtPyre_6F_Text_CedricDefeat
	msgbox MtPyre_6F_Text_CedricPostBattle, MSGBOX_AUTOCLOSE
	end

MtPyre_6F_Text_ValerieIntro:
	.string "When I'm here…\n"
	.string "A curious power flows into me…$"

MtPyre_6F_Text_ValerieDefeat:
	.string "The power is ebbing away…$"

MtPyre_6F_Text_ValeriePostBattle:
	.string "Perhaps the power is from the spirits\n"
	.string "of POKéMON in fitful sleep here…$"

MtPyre_6F_Text_ValerieRegister:
	.string "Fufufu… I lost the match, but…\n"
	.string "I have this little ability…\p"
	.string "Without ever laying my hands on\n"
	.string "your POKéNAV… Hiyah!$"

MtPyre_6F_Text_ValerieRematchIntro:
	.string "Behind you…\n"
	.string "What is it…$"

MtPyre_6F_Text_ValerieRematchDefeat:
	.string "Something faded away…$"

MtPyre_6F_Text_ValeriePostRematch:
	.string "The POKéMON at rest here…\n"
	.string "Sometimes, they play…$"

MtPyre_6F_Text_CedricIntro:
	.string "You there, train with me.$"

MtPyre_6F_Text_CedricDefeat:
	.string "Yes, just what I needed.$"

MtPyre_6F_Text_CedricPostBattle:
	.string "The spirits in these ruins shall deepen\n"
	.string "my connection to all POKéMON.$"

MtPyre_6F_EventScript_Oliver_Text_0:
	.string "Oh... excuse me, I didn't notice you\n"
	.string "there.\p"
	.string "My name is OLIVER, and you are?\p"
	.string "Ok, {PLAYER}.\p"
	.string "...\p"
	.string "What's that?\p"
	.string "I left my Notebook back at the lab, and\n"
	.string "my father sent you here to bring it to\l"
	.string "me?\p"
	.string "Thank you so much!$"

MtPyre_6F_EventScript_Oliver_Text_1:
	.string "{PLAYER} handed the Notebook over to\n"
	.string "OLIVER.$"

MtPyre_6F_EventScript_Oliver_Text_2:
	.string "OLIVER: I feel like I should reward you\n"
	.string "for your troubles somehow.\p"
	.string "Hmm… maybe this will do.$"

MtPyre_6F_EventScript_Oliver_Text_3:
	.string "OLIVER: HM01 is the move CUT, you will\n"
	.string "need the Violet City gym badge to use\l"
	.string "it though.\p"
	.string "...\p"
	.string "What's that you say? You saw a strange\n"
	.string "POKéMON on the way here?\p"
	.string "...\p"
	.string "Hmm… a yellow POKéMON with stripes, and\n"
	.string "a purple cloud on its back…$"

MtPyre_6F_EventScript_Oliver_Text_4:
	.string "Oh!\p"
	.string "It must have been Raikou!\p"
	.string "Raikou is one of three legendary\n"
	.string "beasts, the last one still roaming\l"
	.string "around freely in fact!\p"
	.string "Researchers believe that the three\n"
	.string "legendary beasts were once normal\l"
	.string "POKéMON that were resurrected by\l"
	.string "Ho-oh.\p"
	.string "You know, it's my personal theory that\n"
	.string "the Unown were once people that were\l"
	.string "also resurrected by Ho-oh.\p"
	.string "That's why I'm here studying these\n"
	.string "ruins.$"
