SlateportCity_SternsShipyard_1F_MapScripts::
	.byte 0


SlateportCity_SternsShipyard_1F_EventScript_GymGuide::
	lock
	faceplayer
	goto_if_set FLAG_BADGE03_GET, SlateportCity_SternsShipyard_1F_EventScript_GymGuide_1
	msgbox SlateportCity_SternsShipyard_1F_EventScript_GymGuide_Text_1
	release
	end

SlateportCity_SternsShipyard_1F_EventScript_GymGuide_1:
	msgbox SlateportCity_SternsShipyard_1F_EventScript_GymGuide_Text_0
	release
	end


SlateportCity_SternsShipyard_1F_EventScript_Lass::
	lock
	faceplayer
	goto_if_set FLAG_BADGE03_GET, SlateportCity_SternsShipyard_1F_EventScript_Lass_1
	msgbox SlateportCity_SternsShipyard_1F_EventScript_Lass_Text_1
	release
	end

SlateportCity_SternsShipyard_1F_EventScript_Lass_1:
	msgbox SlateportCity_SternsShipyard_1F_EventScript_Lass_Text_0
	release
	end


SlateportCity_SternsShipyard_1F_EventScript_Boy::
	msgbox SlateportCity_SternsShipyard_1F_EventScript_Boy_Text_0, MSGBOX_NPC
	end


SlateportCity_SternsShipyard_1F_EventScript_Right_Guard::
	msgbox SlateportCity_SternsShipyard_1F_EventScript_Right_Guard_Text_0, MSGBOX_NPC
	end


SlateportCity_SternsShipyard_1F_EventScript_Desk_Woman::
	lock
	faceplayer
	goto_if_set FLAG_BADGE03_GET, SlateportCity_SternsShipyard_1F_EventScript_Desk_Woman_1
	goto_if_set FLAG_REGISTERED_GOLDENROD_CHALLENGE, SlateportCity_SternsShipyard_1F_EventScript_Desk_Woman_2
	goto_if_set FLAG_HIDE_SHANE_PHOENIX_CELL, SlateportCity_SternsShipyard_1F_EventScript_Desk_Woman_3
	msgbox SlateportCity_SternsShipyard_1F_EventScript_Desk_Woman_Text_9
	release
	end

SlateportCity_SternsShipyard_1F_EventScript_Desk_Woman_1:
	msgbox SlateportCity_SternsShipyard_1F_EventScript_Desk_Woman_Text_0
	release
	end

SlateportCity_SternsShipyard_1F_EventScript_Desk_Woman_2:
	msgbox SlateportCity_SternsShipyard_1F_EventScript_Desk_Woman_Text_1, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq SlateportCity_SternsShipyard_1F_EventScript_Desk_Woman_8
	msgbox SlateportCity_SternsShipyard_1F_EventScript_Desk_Woman_Text_3
	release
	end

SlateportCity_SternsShipyard_1F_EventScript_Desk_Woman_3:
	msgbox SlateportCity_SternsShipyard_1F_EventScript_Desk_Woman_Text_4, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq SlateportCity_SternsShipyard_1F_EventScript_Desk_Woman_11
	msgbox SlateportCity_SternsShipyard_1F_EventScript_Desk_Woman_Text_6, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq SlateportCity_SternsShipyard_1F_EventScript_Desk_Woman_14
	msgbox SlateportCity_SternsShipyard_1F_EventScript_Desk_Woman_Text_8
	setflag FLAG_REGISTERED_GOLDENROD_CHALLENGE
	release
	end

SlateportCity_SternsShipyard_1F_EventScript_Desk_Woman_8:
	msgbox SlateportCity_SternsShipyard_1F_EventScript_Desk_Woman_Text_2
	release
	end

SlateportCity_SternsShipyard_1F_EventScript_Desk_Woman_11:
	msgbox SlateportCity_SternsShipyard_1F_EventScript_Desk_Woman_Text_5
	release
	end

SlateportCity_SternsShipyard_1F_EventScript_Desk_Woman_14:
	msgbox SlateportCity_SternsShipyard_1F_EventScript_Desk_Woman_Text_7
	setflag FLAG_REGISTERED_GOLDENROD_CHALLENGE
	release
	end


SlateportCity_SternsShipyard_1F_EventScript_Left_Guard::
	lock
	faceplayer
	goto_if_set FLAG_BADGE03_GET, SlateportCity_SternsShipyard_1F_EventScript_Left_Guard_1
	goto_if_set FLAG_REGISTERED_GOLDENROD_CHALLENGE, SlateportCity_SternsShipyard_1F_EventScript_Left_Guard_2
	msgbox SlateportCity_SternsShipyard_1F_EventScript_Left_Guard_Text_4
	release
	end

SlateportCity_SternsShipyard_1F_EventScript_Left_Guard_1:
	msgbox SlateportCity_SternsShipyard_1F_EventScript_Left_Guard_Text_0
	release
	end

SlateportCity_SternsShipyard_1F_EventScript_Left_Guard_2:
	msgbox SlateportCity_SternsShipyard_1F_EventScript_Left_Guard_Text_1, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq SlateportCity_SternsShipyard_1F_EventScript_Left_Guard_6
	msgbox SlateportCity_SternsShipyard_1F_EventScript_Left_Guard_Text_3
	waitmessage
	closemessage
	setflag FLAG_HIDE_CHALLENGE_TRAINERS
	setflag FLAG_BONUS_ROUND_ITEM_1
	setflag FLAG_BONUS_ROUND_ITEM_2
	setflag FLAG_BONUS_ROUND_ITEM_3
	clearflag FLAG_ANSWERED_CHALLENGE_QUESTION_WRONG
	setvar VAR_THE_CHALLENGE_EVENTS, 0
	applymovement 6, SlateportCity_SternsShipyard_1F_Movement_GuardStepAway
	waitmovement 0
	delay 30
	applymovement OBJ_EVENT_ID_PLAYER, SlateportCity_SternsShipyard_1F_Movement_PlayerToDoor
	waitmovement 0
	warpdoor MAP_SLATEPORT_CITY_STERNS_SHIPYARD_2F, 0
	waitstate
	release
	end

SlateportCity_SternsShipyard_1F_EventScript_Left_Guard_6:
	msgbox SlateportCity_SternsShipyard_1F_EventScript_Left_Guard_Text_2
	waitmessage
	closemessage
	applymovement 6, SlateportCity_SternsShipyard_1F_Movement_GuardFaceDown
	waitmovement 0
	release
	end


SlateportCity_SternsShipyard_1F_Movement_GuardFaceDown:
	face_down
	step_end

SlateportCity_SternsShipyard_1F_Movement_GuardStepAway:
	walk_left
	walk_in_place_right
	step_end

SlateportCity_SternsShipyard_1F_Movement_PlayerToDoor:
	walk_left
	face_up
	step_end

SlateportCity_SternsShipyard_1F_EventScript_GymGuide_Text_0:
	.string "You were great!\p"
	.string "I watched everything on TV. You're\n"
	.string "really starting to make a name for\l"
	.string "yourself!$"

SlateportCity_SternsShipyard_1F_EventScript_GymGuide_Text_1:
	.string "Yo! How's it going, CHAMPION in the\n"
	.string "making?\p"
	.string "This gym is actually the set for a\n"
	.string "gameshow called The Challenge.\p"
	.string "At the end of The Challenge, you will\n"
	.string "face off against the Goldenrod City\l"
	.string "Gym Leader, WHITNEY.\p"
	.string "She uses NORMAL-types, so you should\n"
	.string "bring a FIGHTING-type POKéMON.\p"
	.string "A GHOST-type would help too.\p"
	.string "Well, what are you waiting for?$"

SlateportCity_SternsShipyard_1F_EventScript_Lass_Text_0:
	.string "You actually did it!\p"
	.string "I was beginning to think WHITNEY was\n"
	.string "unbeatable!$"

SlateportCity_SternsShipyard_1F_EventScript_Lass_Text_1:
	.string "Are you planning to compete on the\n"
	.string "show?\p"
	.string "Good luck, WHITNEY hasn't lost in years!$"

SlateportCity_SternsShipyard_1F_EventScript_Boy_Text_0:
	.string "Man, this line isn't moving at all!\p"
	.string "I'm going to miss the whole show at this\n"
	.string "rate!$"

SlateportCity_SternsShipyard_1F_EventScript_Right_Guard_Text_0:
	.string "I'm sorry but this area is off limits\n"
	.string "right now.$"

SlateportCity_SternsShipyard_1F_EventScript_Desk_Woman_Text_0:
	.string "Welcome back, {PLAYER}, and congrats\n"
	.string "on your win!\p"
	.string "WHITNEY is taking a break from the show\n"
	.string "right now, but I'm sure we will be\l"
	.string "filming another episode soon!$"

SlateportCity_SternsShipyard_1F_EventScript_Desk_Woman_Text_1:
	.string "{PLAYER}, welcome back.\p"
	.string "Would you like me to explain the rules\n"
	.string "for The Challenge?$"

SlateportCity_SternsShipyard_1F_EventScript_Desk_Woman_Text_2:
	.string "Very well then. Please talk to the guard\n"
	.string "at the left entrance to begin, and best\l"
	.string "of luck to you {PLAYER}!$"

SlateportCity_SternsShipyard_1F_EventScript_Desk_Woman_Text_3:
	.string "The rules are simple, through the door\n"
	.string "on the left is our preliminary area.\p"
	.string "You will be asked a series of five yes or\n"
	.string "no questions, and for each wrong\l"
	.string "answer you give, you will have to face a\l"
	.string "TRAINER.\p"
	.string "After all five questions have been\n"
	.string "answered, you will go on to face\l"
	.string "WHITNEY in the next room!\p"
	.string "You will have no breaks or chances to\n"
	.string "heal your party between TRAINER\l"
	.string "battles, or before WHITNEY.\p"
	.string "When you are ready, please talk to the\n"
	.string "guard at the left entrance to begin\l"
	.string "The Challenge, and best of luck to you\l"
	.string "{PLAYER}!$"

SlateportCity_SternsShipyard_1F_EventScript_Desk_Woman_Text_4:
	.string "Welcome to The Challenge registration\n"
	.string "desk!\p"
	.string "All competitors must sign in here\n"
	.string "before going on the show.\p"
	.string "Would you like to register?$"

SlateportCity_SternsShipyard_1F_EventScript_Desk_Woman_Text_5:
	.string "I understand, being in the spotlight\n"
	.string "certainly isn't for everyone.$"

SlateportCity_SternsShipyard_1F_EventScript_Desk_Woman_Text_6:
	.string "Wonderful!\p"
	.string "Just fill out this form here, and I'll get\n"
	.string "you signed up!\p"
	.string "...\p"
	.string "...\p"
	.string "Let's see...\p"
	.string "You're name is {PLAYER}, and you're\n"
	.string "from Cherrygrove City.\p"
	.string "Thanks, this is all I need. Now, do you\n"
	.string "need me to explain the rules?$"

SlateportCity_SternsShipyard_1F_EventScript_Desk_Woman_Text_7:
	.string "You must be a fan of the show!\p"
	.string "Very well, please talk to the guard at\n"
	.string "the left entrance to begin The\l"
	.string "Challenge, and best of luck to you\l"
	.string "{PLAYER}!$"

SlateportCity_SternsShipyard_1F_EventScript_Desk_Woman_Text_8:
	.string "Of course. The rules are simple, through\n"
	.string "the door on the left is our preliminary\l"
	.string "area.\p"
	.string "You will be asked a series of five yes or\n"
	.string "no questions, and for each wrong\l"
	.string "answer you give, you will have to face a\l"
	.string "TRAINER.\p"
	.string "After all five questions have been\n"
	.string "answered, you will go on to face\l"
	.string "WHITNEY in the next room!\p"
	.string "You will have no breaks or chances to\n"
	.string "heal your party between TRAINER\l"
	.string "battles, or before WHITNEY.\p"
	.string "When you are ready, please talk to the\n"
	.string "guard at the left entrance to begin\l"
	.string "The Challenge, and best of luck to you\l"
	.string "{PLAYER}!$"

SlateportCity_SternsShipyard_1F_EventScript_Desk_Woman_Text_9:
	.string "Welcome to The Challenge registration\n"
	.string "desk!\p"
	.string "I'm sorry, but WHITNEY isn't here right\n"
	.string "now.\p"
	.string "She is currently appearing as a guest\n"
	.string "on the Night and Dave Show at the TV\l"
	.string "Station.\p"
	.string "You should be able to catch the show if\n"
	.string "you go there now.$"

SlateportCity_SternsShipyard_1F_EventScript_Left_Guard_Text_0:
	.string "I'm sorry but this area is off limits\n"
	.string "right now.\p"
	.string "If you want to compete, then come back\n"
	.string "later.$"

SlateportCity_SternsShipyard_1F_EventScript_Left_Guard_Text_1:
	.string "This entrance is for The Challenge\n"
	.string "competitors only.\p"
	.string "Oh! I see you are registered.\p"
	.string "Alright, once you step through this\n"
	.string "door you won't have another chance to\l"
	.string "heal your POKéMON.\p"
	.string "Are all of your preparations complete?$"

SlateportCity_SternsShipyard_1F_EventScript_Left_Guard_Text_2:
	.string "Come back and see me once your\n"
	.string "preparations are complete.$"

SlateportCity_SternsShipyard_1F_EventScript_Left_Guard_Text_3:
	.string "Great!\p"
	.string "Please step right this way, and good\n"
	.string "luck!$"

SlateportCity_SternsShipyard_1F_EventScript_Left_Guard_Text_4:
	.string "This entrance is for The Challenge\n"
	.string "competitors only.$"
