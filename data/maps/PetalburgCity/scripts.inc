PetalburgCity_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, PetalburgCity_OnTransition
	.byte 0

PetalburgCity_OnTransition:
	setflag FLAG_VISITED_PETALBURG_CITY
	end

PetalburgCity_EventScript_WallysMom::
	msgbox PetalburgCity_Text_WhereIsWally, MSGBOX_NPC
	end

PetalburgCity_EventScript_GymSign::
	msgbox PetalburgCity_Text_GymSign, MSGBOX_SIGN
	end

PetalburgCity_EventScript_CitySign::
	msgbox PetalburgCity_Text_CitySign, MSGBOX_SIGN
	end

PetalburgCity_EventScript_Gentleman::
	msgbox PetalburgCity_Text_FullPartyExplanation, MSGBOX_NPC
	end

PetalburgCity_EventScript_WallyHouseSign::
	msgbox PetalburgCity_Text_WallyHouseSign, MSGBOX_SIGN
	end

PetalburgCity_EventScript_GymBoy::
	msgbox PetalburgCity_Text_AreYouRookieTrainer, MSGBOX_NPC
	end

PetalburgCity_Text_WhereIsWally:
	.string "Have you visited the POKéBALL FACTORY\n"
	.string "in town?\p"
	.string "They sell a unique assortment of\n"
	.string "POKéBALLs that you can't buy anywhere\l"
	.string "else.$"

PetalburgCity_Text_AreYouRookieTrainer:
	.string "My friends and I like to go mushroom\n"
	.string "hunting in Ilex Forest.\p"
	.string "There's a guy in town who collects them,\n"
	.string "you know.$"

PetalburgCity_Text_FullPartyExplanation:
	.string "You know, when I was younger, a shady\n"
	.string "group of characters came to our town\l"
	.string "and tried to cut off the tails of our\l"
	.string "Slowpoke to sell.\p"
	.string "A brave young lad about your age came\n"
	.string "out of nowhere and defeated them all\l"
	.string "without saying a single word.\p"
	.string "It was remarkable.$"

PetalburgCity_Text_GymSign:
	.string "AZALEA TOWN POKéMON GYM\n"
	.string "LEADER: ALICIA\l"
	.string "“Royalty with a knack for battling.”$"

PetalburgCity_Text_CitySign:
	.string "AZALEA TOWN\n"
	.string "“Living Happily with POKéMON.”$"

PetalburgCity_Text_WallyHouseSign:
	.string "POKéBALL FACTORY$"

PetalburgCity_GymTrigger::
	lock
	goto_if_set FLAG_MET_SHANE_AZALEA, PetalburgCity_GymTrigger_2
	opendoor 22, 33
	waitdooranim
	addobject 14
	playbgm MUS_HG_ENCOUNTER_RIVAL, FALSE
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_PlayerFaceUp
	waitmovement 0
	delay 30
	applymovement 14, PetalburgCity_ShaneWalkOutOfGym
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_PlayerBackUp
	waitmovement 0
	closedoor 22, 33
	waitdooranim
	msgbox PetalburgCity_GymTrigger_Text_0
	waitmessage
	closemessage
	fadedefaultbgm
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_PlayerFaceLeft
	applymovement 14, PetalburgCity_ShaneLeave
	waitmovement 0
	removeobject 14
	setflag FLAG_HIDE_AZALEA_GYM_TRAINER_1
	setflag FLAG_HIDE_AZALEA_GYM_TRAINER_2
	setflag FLAG_HIDE_AZALEA_GYM_TRAINER_3
	setflag FLAG_HIDE_AZALEA_GYM_TRAINER_4
	setflag FLAG_HIDE_AZALEA_GYM_TRAINER_5
	setflag FLAG_HIDE_AZALEA_GYM_TRAINER_6
	setflag FLAG_HIDE_CHALLENGE_SPECTATOR_LINE
	setflag FLAG_MET_SHANE_AZALEA
	release
	end

PetalburgCity_GymTrigger_2:
	release
	end


PetalburgCity_PlayerFaceUp:
	face_up
	step_end

PetalburgCity_ShaneWalkOutOfGym:
	delay_16
	walk_down
	step_end

PetalburgCity_PlayerBackUp:
	lock_facing_direction
	walk_down
	unlock_facing_direction
	step_end

PetalburgCity_PlayerFaceLeft:
	delay_16
	face_left
	step_end

PetalburgCity_ShaneLeave:
	walk_left
	walk_down
	walk_left
	walk_left
	walk_left
	walk_left
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

PetalburgCity_EventScript_Slowpoke::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_SLOWPOKE, CRY_MODE_NORMAL
	msgbox PetalburgCity_EventScript_Slowpoke_Text_0
	waitmoncry
	release
	end


PetalburgCity_EventScript_IlexSign::
	msgbox PetalburgCity_EventScript_IlexSign_Text_0, MSGBOX_SIGN
	end


PetalburgCity_EventScript_NameRater::
	msgbox PetalburgCity_EventScript_NameRater_Text_0, MSGBOX_SIGN
	end


PetalburgCity_EventScript_SlowpokeWellSign::
	msgbox PetalburgCity_EventScript_SlowpokeWellSign_Text_0, MSGBOX_SIGN
	end


PetalburgCity_EventScript_GymGrunt::
	msgbox PetalburgCity_EventScript_GymGrunt_Text_0, MSGBOX_NPC
	end


PetalburgCity_EventScript_ForestGrunt::
	msgbox PetalburgCity_EventScript_ForestGrunt_Text_0, MSGBOX_NPC
	end


PetalburgCity_EventScript_ForestLead::
	lock
	msgbox PetalburgCity_EventScript_ForestLead_Text_0
	waitmessage
	faceplayer
	msgbox PetalburgCity_EventScript_ForestLead_Text_1
	waitmessage
	closemessage
	applymovement 12, PetalburgCity_Movement_FaceLeft
	waitmovement 0
	release
	end


PetalburgCity_Movement_FaceLeft:
	face_left
	step_end

PetalburgCity_EventScript_Boy::
	lock
	faceplayer
	goto_if_unset FLAG_HIDE_ROUTE_119_TEAM_AQUA, PetalburgCity_EventScript_Boy_1
	msgbox PetalburgCity_EventScript_Boy_Text_1
	release
	end

PetalburgCity_EventScript_Boy_1:
	msgbox PetalburgCity_EventScript_Boy_Text_0
	release
	end


PetalburgCity_EventScript_BenchGuy::
	msgbox PetalburgCity_EventScript_BenchGuy_Text_0, MSGBOX_NPC
	end


PetalburgCity_GymTrigger_Text_0:
	.string "SHANE: Oh yeah! Another gym badge!\p"
	.string "...\p"
	.string "Oh, it's you.\p"
	.string "You aren't still upset about getting\n"
	.string "beat last time are you?\p"
	.string "I was just trying to toughen up your\n"
	.string "POKéMON.\p"
	.string "Don't worry, I'm in a good mood, so I'll\n"
	.string "let you off the hook for now.\p"
	.string "Later loser.$"

PetalburgCity_EventScript_Slowpoke_Text_0:
	.string "SLOWPOKE: Slooowww?$"

PetalburgCity_EventScript_IlexSign_Text_0:
	.string "ILEX FOREST ahead\n"
	.string "{LEFT_ARROW} Enter through the gate.$"

PetalburgCity_EventScript_NameRater_Text_0:
	.string "NAME RATER'S HOUSE$"

PetalburgCity_EventScript_SlowpokeWellSign_Text_0:
	.string "SLOWPOKE WELL\n"
	.string "Also known as the RAINMAKER WELL.\p"
	.string "Locals believe that a SLOWPOKE's yawn\n"
	.string "summons the rain.\p"
	.string "Records show that a SLOWPOKE's yawn\n"
	.string "ended a drought 400 years ago.$"

PetalburgCity_EventScript_GymGrunt_Text_0:
	.string "Get lost, stupid kid.$"

PetalburgCity_EventScript_ForestGrunt_Text_0:
	.string "Out of the way kid, the grown-ups are\n"
	.string "busy here.$"

PetalburgCity_EventScript_ForestLead_Text_0:
	.string "Listen up you grunts!\p"
	.string "As soon as our teammates return with a\n"
	.string "Master Ball from the POKéBALL FACTORY,\l"
	.string "we will head into the forest in search\l"
	.string "of the shrine…$"

PetalburgCity_EventScript_ForestLead_Text_1:
	.string "Excuse me!\p"
	.string "Don't you know it's impolite to\n"
	.string "eavesdrop, you little brat!?$"

PetalburgCity_EventScript_Boy_Text_0:
	.string "I saw some weird people wearing red\n"
	.string "hoods go into the POKéBALL FACTORY.\p"
	.string "It looked like they were up to no good.$"

PetalburgCity_EventScript_Boy_Text_1:
	.string "I heard you ran off those red hooded\n"
	.string "weirdos, thanks!$"

PetalburgCity_EventScript_BenchGuy_Text_0:
	.string "Yawn...\p"
	.string "This Slowpoke keeps yawning, and it's\n"
	.string "making me sleepy...$"
