BattleFrontier_BattleDomeCorridor_MapScripts::
	.byte 0


BattleFrontier_BattleDomeCorridor_EventScript_Guard::
	lock
	faceplayer
	specialvar VAR_RESULT, GetPlayerFacingDirection
	compare VAR_RESULT, DIR_WEST
	goto_if_eq BattleFrontier_BattleDomeCorridor_EventScript_Guard_1
	msgbox BattleFrontier_BattleDomeCorridor_EventScript_Guard_Text_1
	release
	end

BattleFrontier_BattleDomeCorridor_EventScript_Guard_1:
	goto_if_set FLAG_HIDE_SHANE_TV_STATION, BattleFrontier_BattleDomeCorridor_EventScript_Guard_4
	goto BattleFrontier_BattleDomeCorridor_EventScript_MainShow
	end

BattleFrontier_BattleDomeCorridor_EventScript_Guard_4:
	msgbox BattleFrontier_BattleDomeCorridor_EventScript_Guard_Text_0
	waitmessage
	closemessage
	applymovement 14, BattleFrontier_BattleDomeCorridor_Movement_Guardup
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, BattleFrontier_BattleDomeLobby_Movement_PlayerleftTwo
	waitmovement 0
	applymovement 14, BattleFrontier_BattleDomeCorridor_Movement_Guarddown
	waitmovement 0
	release
	end


BattleFrontier_BattleDomeCorridor_EventScript_MainShow::
	msgbox BattleFrontier_BattleDomeCorridor_EventScript_Guard_Text_0
	waitmessage
	closemessage
	applymovement 14, BattleFrontier_BattleDomeCorridor_Movement_Guardup
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, BattleFrontier_BattleDomeLobby_Movement_PlayerleftTwo
	waitmovement 0
	applymovement 14, BattleFrontier_BattleDomeCorridor_Movement_Guarddown
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, BattleFrontier_BattleDomeLobby_Movement_PlayerFindSeat
	waitmovement 0
	delay 30
	checkplayergender
	compare VAR_RESULT, MALE
	goto_if_eq BattleFrontier_BattleDomeCorridor_EventScript_MainShow_2
	compare VAR_RESULT, FEMALE
	goto_if_eq BattleFrontier_BattleDomeCorridor_EventScript_MainShow_3
BattleFrontier_BattleDomeCorridor_EventScript_MainShow_1:
	applymovement OBJ_EVENT_ID_PLAYER, BattleFrontier_BattleDomeLobby_Movement_CameraPanUp
	waitmovement 0
	delay 30
	applymovement 3, BattleFrontier_BattleDomeCorridor_Movement_WalkInPlaceDown
	waitmovement 0
	msgbox BattleFrontier_BattleDomeCorridor_EventScript_MainShow_Text_0
	waitmessage
	applymovement 3, BattleFrontier_BattleDomeCorridor_Movement_WalkInPlaceDown
	waitmovement 0
	msgbox BattleFrontier_BattleDomeCorridor_EventScript_MainShow_Text_1
	waitmessage
	applymovement 3, BattleFrontier_BattleDomeCorridor_Movement_WalkInPlaceLeft
	waitmovement 0
	msgbox BattleFrontier_BattleDomeCorridor_EventScript_MainShow_Text_2
	waitmessage
	closemessage
	playse SE_APPLAUSE
	applymovement 2, BattleFrontier_BattleDomeCorridor_Movement_WhitneySpin
	waitmovement 0
	playse SE_LEDGE
	applymovement 2, BattleFrontier_BattleDomeCorridor_Movement_WhitneyJumpSpin
	waitmovement 0
	msgbox BattleFrontier_BattleDomeCorridor_EventScript_MainShow_Text_3
	waitmessage
	closemessage
	playse SE_M_ENCORE2
	applymovement 1, BattleFrontier_BattleDomeCorridor_Movement_KatashiStepOut
	waitmovement 0
	msgbox BattleFrontier_BattleDomeCorridor_EventScript_MainShow_Text_4
	waitmessage
	applymovement 2, BattleFrontier_BattleDomeCorridor_Movement_WalkInPlaceDown
	waitmovement 0
	msgbox BattleFrontier_BattleDomeCorridor_EventScript_MainShow_Text_5
	waitmessage
	applymovement 3, BattleFrontier_BattleDomeCorridor_Movement_WalkInPlaceLeft
	waitmovement 0
	msgbox BattleFrontier_BattleDomeCorridor_EventScript_MainShow_Text_6
	waitmessage
	applymovement 2, BattleFrontier_BattleDomeCorridor_Movement_WalkInPlaceRight
	waitmovement 0
	msgbox BattleFrontier_BattleDomeCorridor_EventScript_MainShow_Text_7
	waitmessage
	applymovement 3, BattleFrontier_BattleDomeCorridor_Movement_WalkInPlaceLeft
	waitmovement 0
	msgbox BattleFrontier_BattleDomeCorridor_EventScript_MainShow_Text_8
	waitmessage
	applymovement 1, BattleFrontier_BattleDomeCorridor_Movement_WalkInPlaceRight
	waitmovement 0
	msgbox BattleFrontier_BattleDomeCorridor_EventScript_MainShow_Text_9
	waitmessage
	applymovement 2, BattleFrontier_BattleDomeCorridor_Movement_WalkInPlaceDown
	waitmovement 0
	msgbox BattleFrontier_BattleDomeCorridor_EventScript_MainShow_Text_10
	waitmessage
	closemessage
	playse SE_PIN
	applymovement 3, BattleFrontier_BattleDomeCorridor_Movement_Exclamation
	applymovement 4, BattleFrontier_BattleDomeCorridor_Movement_Heart
	waitmovement 0
	delay 60
	msgbox BattleFrontier_BattleDomeCorridor_EventScript_MainShow_Text_11
	waitmessage
	applymovement 2, BattleFrontier_BattleDomeCorridor_Movement_WalkInPlaceRight
	waitmovement 0
	msgbox BattleFrontier_BattleDomeCorridor_EventScript_MainShow_Text_12
	waitmessage
	applymovement 2, BattleFrontier_BattleDomeCorridor_Movement_WalkInPlaceDown
	waitmovement 0
	msgbox BattleFrontier_BattleDomeCorridor_EventScript_MainShow_Text_13
	waitmessage
	applymovement 1, BattleFrontier_BattleDomeCorridor_Movement_WalkInPlaceRight
	waitmovement 0
	msgbox BattleFrontier_BattleDomeCorridor_EventScript_MainShow_Text_14
	waitmessage
	closemessage
	applymovement 1, BattleFrontier_BattleDomeCorridor_Movement_FaceDown
	waitmovement 0
	delay 30
	msgbox BattleFrontier_BattleDomeCorridor_EventScript_MainShow_Text_15
	waitmessage
	applymovement 1, BattleFrontier_BattleDomeCorridor_Movement_WalkInPlaceRight
	waitmovement 0
	msgbox BattleFrontier_BattleDomeCorridor_EventScript_MainShow_Text_16
	waitmessage
	applymovement 3, BattleFrontier_BattleDomeCorridor_Movement_WalkInPlaceLeft
	waitmovement 0
	msgbox BattleFrontier_BattleDomeCorridor_EventScript_MainShow_Text_17
	waitmessage
	applymovement 3, BattleFrontier_BattleDomeCorridor_Movement_WalkInPlaceDown
	waitmovement 0
	msgbox BattleFrontier_BattleDomeCorridor_EventScript_MainShow_Text_18
	waitmessage
	closemessage
	applymovement 2, BattleFrontier_BattleDomeCorridor_Movement_WhitneyToCenter
	applymovement 1, BattleFrontier_BattleDomeCorridor_Movement_KatashiToCenter
	applymovement 3, BattleFrontier_BattleDomeCorridor_Movement_DaveToCenter
	waitmovement 0
	delay 60
	applymovement 1, BattleFrontier_BattleDomeCorridor_Movement_FaceLeft
	waitmovement 0
	delay 60
	applymovement 1, BattleFrontier_BattleDomeCorridor_Movement_FaceUp
	waitmovement 0
	delay 60
	applymovement 3, BattleFrontier_BattleDomeCorridor_Movement_DaveExit
	applymovement 2, BattleFrontier_BattleDomeCorridor_Movement_WhitneyExit
	applymovement OBJ_EVENT_ID_PLAYER, BattleFrontier_BattleDomeLobby_Movement_CameraPanDown
	applymovement 1, BattleFrontier_BattleDomeCorridor_Movement_KatashiExit
	waitmovement 0
	removeobject 2
	removeobject 1
	setflag FLAG_HIDE_WHITNEY_TV_STATION
	setflag FLAG_HIDE_KATASHI_TV_STATION
	checkplayergender
	compare VAR_RESULT, MALE
	goto_if_eq BattleFrontier_BattleDomeCorridor_EventScript_MainShow_7
	compare VAR_RESULT, FEMALE
	goto_if_eq BattleFrontier_BattleDomeCorridor_EventScript_MainShow_8
BattleFrontier_BattleDomeCorridor_EventScript_MainShow_6:
	delay 30
	applymovement 4, BattleFrontier_BattleDomeCorridor_Movement_ShaneGetUp
	waitmovement 0
	delay 30
	applymovement OBJ_EVENT_ID_PLAYER, BattleFrontier_BattleDomeLobby_Movement_PlayerWatchShane
	applymovement 4, BattleFrontier_BattleDomeCorridor_Movement_ShaneExit
	waitmovement 0
	removeobject 4
	setflag FLAG_HIDE_SHANE_TV_STATION
	release
	end

BattleFrontier_BattleDomeCorridor_EventScript_MainShow_2:
	call BattleFrontier_BattleDomeCorridor_EventScript_MalePlayer
	goto BattleFrontier_BattleDomeCorridor_EventScript_MainShow_1

BattleFrontier_BattleDomeCorridor_EventScript_MainShow_3:
	call BattleFrontier_BattleDomeCorridor_EventScript_FemalePlayer
	goto BattleFrontier_BattleDomeCorridor_EventScript_MainShow_1

BattleFrontier_BattleDomeCorridor_EventScript_MainShow_7:
	call BattleFrontier_BattleDomeCorridor_EventScript_ShowMalePlayer
	goto BattleFrontier_BattleDomeCorridor_EventScript_MainShow_6

BattleFrontier_BattleDomeCorridor_EventScript_MainShow_8:
	call BattleFrontier_BattleDomeCorridor_EventScript_ShowFemalePlayer
	goto BattleFrontier_BattleDomeCorridor_EventScript_MainShow_6


BattleFrontier_BattleDomeCorridor_EventScript_MalePlayer::
	hideobjectat OBJ_EVENT_ID_PLAYER, MAP_BATTLE_FRONTIER_BATTLE_DOME_CORRIDOR
	addobject 15
	return


BattleFrontier_BattleDomeCorridor_EventScript_FemalePlayer::
	hideobjectat OBJ_EVENT_ID_PLAYER, MAP_BATTLE_FRONTIER_BATTLE_DOME_CORRIDOR
	addobject 16
	return


BattleFrontier_BattleDomeCorridor_EventScript_ShowMalePlayer::
	removeobject 15
	showobjectat OBJ_EVENT_ID_PLAYER, MAP_BATTLE_FRONTIER_BATTLE_DOME_CORRIDOR
	return


BattleFrontier_BattleDomeCorridor_EventScript_ShowFemalePlayer::
	removeobject 16
	showobjectat OBJ_EVENT_ID_PLAYER, MAP_BATTLE_FRONTIER_BATTLE_DOME_CORRIDOR
	return


BattleFrontier_BattleDomeCorridor_Movement_Guardup:
	walk_up
	walk_in_place_down
	step_end

BattleFrontier_BattleDomeLobby_Movement_PlayerleftTwo:
	walk_left
	walk_left
	step_end

BattleFrontier_BattleDomeCorridor_Movement_Guarddown:
	walk_down
	walk_in_place_up
	step_end

BattleFrontier_BattleDomeLobby_Movement_PlayerFindSeat:
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_up
	walk_up
	walk_up
	delay_16
	walk_in_place_right
	delay_16
	walk_in_place_left
	delay_16
	walk_left
	face_up
	step_end

BattleFrontier_BattleDomeLobby_Movement_CameraPanUp:
	walk_right
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	step_end

BattleFrontier_BattleDomeLobby_Movement_CameraPanDown:
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_left
	face_up
	step_end

BattleFrontier_BattleDomeCorridor_Movement_WalkInPlaceDown:
	walk_in_place_down
	step_end

BattleFrontier_BattleDomeCorridor_Movement_WalkInPlaceLeft:
	walk_in_place_left
	step_end

BattleFrontier_BattleDomeCorridor_Movement_WalkInPlaceRight:
	walk_in_place_right
	step_end

BattleFrontier_BattleDomeCorridor_Movement_FaceDown:
	face_down
	step_end

BattleFrontier_BattleDomeCorridor_Movement_FaceLeft:
	face_left
	step_end

BattleFrontier_BattleDomeCorridor_Movement_FaceUp:
	face_up
	step_end

BattleFrontier_BattleDomeCorridor_Movement_WhitneySpin:
	walk_down
	walk_down
	delay_16
	face_right
	delay_8
	face_up
	delay_8
	face_left
	delay_8
	face_down
	step_end

BattleFrontier_BattleDomeCorridor_Movement_WhitneyJumpSpin:
	disable_jump_landing_ground_effect
	jump_2_right
	enable_jump_landing_ground_effect
	delay_16
	face_up
	delay_8
	face_left
	delay_8
	face_down
	delay_16
	delay_16
	walk_left
	walk_left
	walk_up
	walk_up
	face_down
	step_end

BattleFrontier_BattleDomeCorridor_Movement_KatashiStepOut:
	walk_right
	walk_right
	walk_down
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	walk_up
	walk_left
	walk_left
	face_right
	step_end

BattleFrontier_BattleDomeCorridor_Movement_Exclamation:
	emote_exclamation_mark
	step_end

BattleFrontier_BattleDomeCorridor_Movement_Heart:
	emote_heart
	step_end

BattleFrontier_BattleDomeCorridor_Movement_WhitneyToCenter:
	walk_down
	walk_right
	step_end

BattleFrontier_BattleDomeCorridor_Movement_KatashiToCenter:
	walk_right
	walk_down
	walk_right
	walk_right
	walk_right
	face_up
	step_end

BattleFrontier_BattleDomeCorridor_Movement_DaveToCenter:
	walk_left
	walk_left
	walk_down
	walk_left
	step_end

BattleFrontier_BattleDomeCorridor_Movement_KatashiExit:
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_up
	walk_up
	step_end

BattleFrontier_BattleDomeCorridor_Movement_DaveExit:
	walk_right
	walk_up
	walk_right
	walk_right
	face_down
	step_end

BattleFrontier_BattleDomeCorridor_Movement_WhitneyExit:
	walk_right
	walk_right
	walk_up
	walk_up
	walk_up
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	step_end

BattleFrontier_BattleDomeCorridor_Movement_ShaneGetUp:
	walk_right
	walk_right
	walk_in_place_up
	step_end

BattleFrontier_BattleDomeCorridor_Movement_ShaneExit:
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	delay_16
	delay_16
	walk_in_place_right
	delay_16
	delay_16
	walk_left
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

BattleFrontier_BattleDomeLobby_Movement_PlayerWatchShane:
	delay_16
	face_right
	delay_16
	delay_16
	face_down
	delay_16
	delay_16
	walk_right
	walk_in_place_down
	step_end

BattleFrontier_BattleDomeCorridor_EventScript_Man::
	msgbox BattleFrontier_BattleDomeCorridor_EventScript_Man_Text_0, MSGBOX_NPC
	end


BattleFrontier_BattleDomeCorridor_EventScript_Beauty::
	msgbox BattleFrontier_BattleDomeCorridor_EventScript_Beauty_Text_0, MSGBOX_NPC
	end


BattleFrontier_BattleDomeCorridor_EventScript_Guard_Text_0:
	.string "Hold up, let me see your ticket.\p"
	.string "...\p"
	.string "...\p"
	.string "Ok, please find your seat.$"

BattleFrontier_BattleDomeCorridor_EventScript_Guard_Text_1:
	.string "Please find your seat.$"

BattleFrontier_BattleDomeCorridor_EventScript_MainShow_Text_0:
	.string "DAVE: Welcome, ladies and gentlemen to\n"
	.string "the Night and Dave Show!\p"
	.string "It's the show where we bring in two\n"
	.string "guests with polar opposite\l"
	.string "personalities, and try to find some\l"
	.string "common ground.\p"
	.string "I'm your host, DAVE!$"

BattleFrontier_BattleDomeCorridor_EventScript_MainShow_Text_1:
	.string "DAVE: Joining me tonight are two very\n"
	.string "special guests...$"

BattleFrontier_BattleDomeCorridor_EventScript_MainShow_Text_2:
	.string "DAVE: Our first guest is Goldenrod\n"
	.string "City's very own Gym Leader, the lovely\l"
	.string "and talented WHITNEY!$"

BattleFrontier_BattleDomeCorridor_EventScript_MainShow_Text_3:
	.string "WHITNEY: Happy to be here, DAVE!\p"
	.string "It's always nice to get out and try\n"
	.string "something new.\p"
	.string "DAVE: Indeed!\p"
	.string "I know you've been busy running your\n"
	.string "own show lately, but more on that\l"
	.string "later...\p"
	.string "Our second guest is a Black Belt from\n"
	.string "Cianwood City, the tough and manly\l"
	.string "KATASHI!$"

BattleFrontier_BattleDomeCorridor_EventScript_MainShow_Text_4:
	.string "KATASHI: I am also grateful for your\n"
	.string "invitation, DAVE.\p"
	.string "You honor me and my dojo.\p"
	.string "DAVE: KATASHI, I understand you train\n"
	.string "under the Cianwood City Gym Leader,\l"
	.string "LEE.\p"
	.string "He's not too tough on you, is he? I've\n"
	.string "heard he can be rather intense.\p"
	.string "KATASHI: Master LEE is only as tough as\n"
	.string "he needs to be to help us excel.\p"
	.string "I wouldn't have it any other way.$"

BattleFrontier_BattleDomeCorridor_EventScript_MainShow_Text_5:
	.string "WHITNEY: As an accomplished Gym Leader\n"
	.string "myself, I can respect that.\p"
	.string "Overcoming obstacles helps people grow\n"
	.string "as individuals.\p"
	.string "You may want to give up and cry when\n"
	.string "faced with a tough challenge, but if\l"
	.string "you face it head on, you will\l"
	.string "undoubtedly grow more confident.$"

BattleFrontier_BattleDomeCorridor_EventScript_MainShow_Text_6:
	.string "DAVE: You would know a lot about that,\n"
	.string "WHITNEY.\p"
	.string "As I recall, you used to cry every time\n"
	.string "you lost a battle!\p"
	.string "Those TRAINERS weren't too tough on\n"
	.string "you, were they?$"

BattleFrontier_BattleDomeCorridor_EventScript_MainShow_Text_7:
	.string "WHITNEY: Now, DAVE, I know I used to be\n"
	.string "a little crybaby, but I've grown up\l"
	.string "since then.\p"
	.string "I'm not the same little girl that bursts\n"
	.string "into tears after losing a battle.\p"
	.string "Of course, I haven't actually lost a\n"
	.string "battle in years.$"

BattleFrontier_BattleDomeCorridor_EventScript_MainShow_Text_8:
	.string "DAVE: That's right!\p"
	.string "You've become quite the celebrity\n"
	.string "around here.\p"
	.string "Are you still enjoying your own show,\n"
	.string "The Challenge?\p"
	.string "WHITNEY: Of course! I love putting on a\n"
	.string "show while battling with tough\l"
	.string "trainers!\p"
	.string "DAVE: Fantastic!\p"
	.string "Perhaps KATASHI will challenge you on\n"
	.string "The Challenge someday.$"

BattleFrontier_BattleDomeCorridor_EventScript_MainShow_Text_9:
	.string "KATASHI: It would be an honor!$"

BattleFrontier_BattleDomeCorridor_EventScript_MainShow_Text_10:
	.string "KATASHI: I do believe my FIGHTING-type\n"
	.string "POKéMON have good chance of winning.\p"
	.string "We may even make you cry again!\p"
	.string "WHITNEY: Haha, you are welcome to try.\p"
	.string "You know, KATASHI, I've always had a\n"
	.string "thing for tough guys…$"

BattleFrontier_BattleDomeCorridor_EventScript_MainShow_Text_11:
	.string "DAVE: Oh my! This is unexpected!$"

BattleFrontier_BattleDomeCorridor_EventScript_MainShow_Text_12:
	.string "WHITNEY: Oh DAVE, I'm just joking.$"

BattleFrontier_BattleDomeCorridor_EventScript_MainShow_Text_13:
	.string "Although...$"

BattleFrontier_BattleDomeCorridor_EventScript_MainShow_Text_14:
	.string "KATASHI: All jokes aside, I'm a happily\n"
	.string "married man.\p"
	.string "WHITNEY: Is that so?\p"
	.string "Well your wife is one lucky lady!$"

BattleFrontier_BattleDomeCorridor_EventScript_MainShow_Text_15:
	.string "KATASHI: Thank you… WHITNEY…\p"
	.string "...\p"
	.string "DAVE: Are you blushing over there,\n"
	.string "KATASHI?\p"
	.string "Perhaps you aren't as tough as you\n"
	.string "first appeared to be!$"

BattleFrontier_BattleDomeCorridor_EventScript_MainShow_Text_16:
	.string "KATASHI: Think what you will, DAVE.\p"
	.string "A man like myself may not show it, but I\n"
	.string "do have emotions too.$"

BattleFrontier_BattleDomeCorridor_EventScript_MainShow_Text_17:
	.string "DAVE: As you should!\p"
	.string "Now you see, you two aren't that\n"
	.string "different after all.$"

BattleFrontier_BattleDomeCorridor_EventScript_MainShow_Text_18:
	.string "DAVE: That's the reason I created this\n"
	.string "show, to bring people together and look\l"
	.string "past our differences.\p"
	.string "Now, ladies and gentlemen, it's time for\n"
	.string "a short break!\p"
	.string "Here's a quick word from our sponsors…$"

BattleFrontier_BattleDomeCorridor_EventScript_Man_Text_0:
	.string "I wish it were me up there with WHITNEY,\n"
	.string "that karate guy sure is lucky!$"

BattleFrontier_BattleDomeCorridor_EventScript_Beauty_Text_0:
	.string "WHITNEY is dressed as stylish as ever!\p"
	.string "I love her sense of fashion.$"
