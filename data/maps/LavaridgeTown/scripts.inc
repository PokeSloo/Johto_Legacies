LavaridgeTown_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, LavaridgeTown_MapScripts_MAP_SCRIPT_ON_TRANSITION
	map_script MAP_SCRIPT_ON_FRAME_TABLE, LavaridgeTown_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

LavaridgeTown_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	setflag FLAG_VISITED_LAVARIDGE_TOWN
	setflag FLAG_HIDE_SHANE_CIANWOOD
	end

LavaridgeTown_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
	map_script_2 VAR_ECRUTEAK_STATE, 3, LavaridgeTown_EventScript_Oliver_OnFrame
	.2byte 0


LavaridgeTown_EventScript_Oliver_OnFrame::
	lock
	clearflag FLAG_GENERAL_HIDE
	addobject 14
	applymovement 14, LavaridgeTown_Movement_OliverApproach
	waitmovement 0
	msgbox LavaridgeTown_EventScript_Oliver_OnFrame_Text_0
	waitmessage
	closemessage
	applymovement 14, LavaridgeTown_Movement_OliverLeave
	waitmovement 0
	removeobject 14
	setflag FLAG_GENERAL_HIDE
	clearflag FLAG_HIDE_OLIVER_KIZU
	addvar VAR_ECRUTEAK_STATE, 1
	release
	end


LavaridgeTown_Movement_OliverApproach:
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_up
	step_end

LavaridgeTown_Movement_OliverLeave:
	walk_right
	walk_right
	walk_right
	walk_down
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	step_end

LavaridgeTown_EventScript_ShaneTrigger::
	lock
	goto_if_set FLAG_DEFEATED_SHANE_CIANWOOD, LavaridgeTown_EventScript_ShaneTrigger_2
	opendoor 10, 39
	waitdooranim
	clearflag FLAG_HIDE_SHANE_CIANWOOD
	addobject 13
	playbgm MUS_HG_ENCOUNTER_RIVAL, FALSE
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_PlayerFaceUp
	waitmovement 0
	delay 30
	applymovement 13, PetalburgCity_ShaneWalkOutOfGym
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_PlayerBackUp
	waitmovement 0
	closedoor 10, 39
	waitdooranim
	msgbox LavaridgeTown_EventScript_ShaneTrigger_Text_0
	waitmessage
	closemessage
	trainerbattle_no_intro TRAINER_MAY_ROUTE_110_MUDKIP, LavaridgeTown_Text_ShaneDefeated
	msgbox LavaridgeTown_EventScript_ShaneTrigger_Text_1
	waitmessage
	closemessage
	fadedefaultbgm
	applymovement OBJ_EVENT_ID_PLAYER, LavaridgeTown_Movement_PlayerFaceRight
	applymovement 13, LavaridgeTown_Movement_ShaneExit
	waitmovement 0
	removeobject 13
	setflag FLAG_HIDE_SHANE_CIANWOOD
	setflag FLAG_DEFEATED_SHANE_CIANWOOD
	release
	end

LavaridgeTown_EventScript_ShaneTrigger_2:
	release
	end


LavaridgeTown_Movement_PlayerFaceRight:
	delay_16
	delay_16
	face_right
	step_end

LavaridgeTown_Movement_ShaneExit:
	walk_right
	walk_right
	walk_down
	walk_right
	walk_right
	walk_right
	walk_up
	walk_right
	walk_right
	walk_right
	step_end

LavaridgeTown_EventScript_ExpertM::
	msgbox LavaridgeTown_Text_HotSpringsNeverRunDry, MSGBOX_NPC
	end

LavaridgeTown_EventScript_OldMan::
	msgbox LavaridgeTown_Text_PokemonNippedBackside, MSGBOX_NPC
	end

LavaridgeTown_EventScript_Twin::
	msgbox LavaridgeTown_Text_BatheInHotSpringsEveryDay, MSGBOX_NPC
	end

LavaridgeTown_EventScript_ExpertF::
	msgbox LavaridgeTown_Text_OhYouLikeHotSprings, MSGBOX_NPC
	end

LavaridgeTown_EventScript_EggWoman::
	msgbox LavaridgeTown_Text_EverySoOftenEggFoundAtDayCare, MSGBOX_NPC
	end

LavaridgeTown_EventScript_Oliver::
	msgbox LavaridgeTown_Text_OliverWhirl, MSGBOX_NPC
	end

LavaridgeTown_EventScript_TownSign::
	msgbox LavaridgeTown_Text_TownSign, MSGBOX_SIGN
	end

LavaridgeTown_EventScript_GymSign::
	msgbox LavaridgeTown_Text_GymSign, MSGBOX_SIGN
	end

LavaridgeTown_EventScript_HerbShopSign::
	msgbox LavaridgeTown_Text_HerbShopSign, MSGBOX_SIGN
	end

LavaridgeTown_Text_EverySoOftenEggFoundAtDayCare:
	.string "When I was a little girl, my mother used\n"
	.string "to tell me that bad children would be\l"
	.string "sent to the Whirl Islands as\l"
	.string "punishment.\p"
	.string "Can you belive that!?$"

LavaridgeTown_Text_HotSpringsNeverRunDry:
	.string "You look like you came from far away,\n"
	.string "where is your hometown?\p"
	.string "...\p"
	.string "Cherrygrove, huh?\p"
	.string "Yes, that is quite far from here...\p"
	.string "You know what, you should speak to the\n"
	.string "woman who lives in the lone house north\l"
	.string "of town.\p"
	.string "I'm sure you'll find her helpful.$"

LavaridgeTown_Text_PokemonNippedBackside:
	.string "I've like to help out the Deep Sea Lab\n"
	.string "researchers.\p"
	.string "They often need someone to ferry them\n"
	.string "out to the middle of the sea.\p"
	.string "They also pay me handsomely, which\n"
	.string "helps...$"

LavaridgeTown_Text_OhYouLikeHotSprings:
	.string "You would expect a beach town like\n"
	.string "Cianwood to be peaceful, but with all\l"
	.string "the karate guys training at the gym\l"
	.string "here, things can get pretty wild!$"

LavaridgeTown_Text_BatheInHotSpringsEveryDay:
	.string "Have you ever made a sandcastle?\p"
	.string "I'm going to make one big enough for me\n"
	.string "and my whole family to live inside!$"

LavaridgeTown_Text_OliverWhirl:
    .string "OLIVER: Oh, {PLAYER}, I didn't expect\n"
	.string "to see you here.\p"
	.string "I was planning to explore the Whirl\n"
	.string "Islands, but unfortunately, they don't\l"
	.string "appear to be very accessible.\p"
	.string "My college professor told me about the\n"
	.string "islands, and the Legendary POKéMON\l"
	.string "Lugia, which is rumored to reside deep\l"
	.string "within them.\p"
	.string "By the way, you should check out the\n"
	.string "Deep Sea Lab while you're in town, it's\l"
	.string "very fascinating.$"

LavaridgeTown_Text_TownSign:
	.string "CIANWOOD CITY\p"
	.string "“A Port of Crashing Waves”$"

LavaridgeTown_Text_GymSign:
	.string "CIANWOOD CITY POKéMON GYM\n"
	.string "LEADER: LEE\l"
	.string "“The hard-headed fighting champion.”$"

LavaridgeTown_Text_HerbShopSign:
	.string "CIANWOOD DEEP SEA LAB$"

LavaridgeTown_EventScript_Oliver_OnFrame_Text_0:
	.string "OLIVER: {PLAYER}!\p"
	.string "I just heard something incredible!\p"
	.string "My university professor just told me\n"
	.string "about a shrine that just mysteriously\l"
	.string "appeared in Kizu Forest.\p"
	.string "We should check it out!\p"
	.string "It might be related to the shrine in\n"
	.string "Ilex Forest, and the legendary\l"
	.string "POKéMON, Celebi.\p"
	.string "Let's go, it's just west of Olivine!$"

LavaridgeTown_EventScript_ShaneTrigger_Text_0:
	.string "SHANE: What the hell! I can't believe I\n"
	.string "lost to some generic bowl cut karate\l"
	.string "chump!\p"
	.string "...\p"
	.string "Oh... It's you...\p"
	.string "Hey! I'm sure beating you will cheer me\n"
	.string "up!$"

LavaridgeTown_EventScript_ShaneTrigger_Text_1:
	.string "...\p"
	.string "I think I get it now...\p"
	.string "You're just like dad...\p"
	.string "There's something you both have that I\n"
	.string "can't seem to grasp for myself.\p"
	.string "...\p"
	.string "Fine then, I'll just keep training.\p"
	.string "Soon I'll beat you, and then overthrow\n"
	.string "dad to become the Champion myself!\p"
	.string "Maybe then he'll...\p"
	.string "...\p"
	.string "Forget it, I'm out!$"

LavaridgeTown_Text_ShaneDefeated::
	.string "This can't be happening...$"
