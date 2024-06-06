Route110_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route110_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Route110_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
	map_script_2 VAR_ECRUTEAK_STATE, 5, Route110_OnFrame
	.2byte 0


Route110_OnFrame::
	lock
	addobject 26
	applymovement OBJ_EVENT_ID_PLAYER, Route110_Movement_PlayerToShane
	waitmovement 0
	delay 30
	applymovement 26, Route110_Movement_ShaneLookAround
	waitmovement 0
	msgbox Route110_OnFrame_Text_0
	waitmessage
	closemessage
	applymovement 26, Route110_Movement_ShaneLeaveToResort
	waitmovement 0
	removeobject 26
	setflag FLAG_HIDE_SHANE_RESORT_GATE
	setflag FLAG_HIDE_SHANE_RESORT_HOUSE
	addvar VAR_ECRUTEAK_STATE, 1
	release
	end


Route110_Movement_PlayerToShane:
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

Route110_Movement_ShaneLookAround:
	walk_in_place_right
	delay_16
	delay_16
	walk_in_place_left
	delay_16
	delay_16
	face_down
	step_end

Route110_Movement_ShaneLeaveToResort:
	walk_up
	walk_up
	walk_right
	walk_right
	walk_up
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_up
	walk_up
	step_end

Route110_EventScript_FoodTourist::
	lock
	faceplayer
	checkplayergender
	compare VAR_RESULT, MALE
	goto_if_eq Route110_EventScript_FoodTourist_2
	compare VAR_RESULT, FEMALE
	goto_if_eq Route110_EventScript_FoodTourist_3
Route110_EventScript_FoodTourist_1:
	msgbox Route110_EventScript_FoodTourist_Text_0
	release
	end

Route110_EventScript_FoodTourist_2:
	call Route110_EventScript_MalePlayer
	goto Route110_EventScript_FoodTourist_1

Route110_EventScript_FoodTourist_3:
	call Route110_EventScript_FemalePlayer
	goto Route110_EventScript_FoodTourist_1


Route110_EventScript_MalePlayer::
	msgbox Route110_EventScript_MalePlayer_Text_0
	return


Route110_EventScript_FemalePlayer::
	msgbox Route110_EventScript_FemalePlayer_Text_0
	return


Route110_EventScript_FoodBeauty::
	msgbox Route110_EventScript_FoodBeauty_Text_0, MSGBOX_NPC
	end


Route110_EventScript_Whitney::
	lock
	faceplayer
	goto_if_set FLAG_SAW_RESORT_GRUNT, Route110_EventScript_Whitney_1
	msgbox Route110_EventScript_Whitney_Text_0
	waitmessage
	closemessage
	delay 30
	addobject 28
	applymovement 28, Route110_Movement_GrunttoHouse
	waitmovement 0
	playse SE_PIN
	applymovement OBJ_EVENT_ID_PLAYER, Route110_Movement_ExclamationLeft
	waitmovement 0
	waitse
	applymovement 28, Route110_Movement_GruntLookAround
	waitmovement 0
	delay 20
	opendoor 78, 27
	waitdooranim
	applymovement 28, Route110_Movement_StepinHouse
	waitmovement 0
	removeobject 28
	closedoor 78, 27
	waitdooranim
	applymovement OBJ_EVENT_ID_PLAYER, Route110_Movement_PlayertoShane
	waitmovement 0
	playse SE_PIN
	applymovement 27, Route110_Movement_QuestionFaceUp
	waitmovement 0
	waitse
	msgbox Route110_EventScript_Whitney_Text_1
	waitmessage
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, Route110_Movement_StepLeft
	applymovement 27, Route110_Movement_StepLeft
	waitmovement 0
	msgbox Route110_EventScript_Whitney_Text_2
	waitmessage
	applymovement OBJ_EVENT_ID_PLAYER, Route110_Movement_FaceDown
	applymovement 27, Route110_Movement_FaceUp
	waitmovement 0
	msgbox Route110_EventScript_Whitney_Text_3
	waitmessage
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, Route110_Movement_PlayerToHouse
	applymovement 27, Route110_Movement_ShaneToHouse
	waitmovement 0
	opendoor 78, 27
	waitdooranim
	applymovement 27, Route110_Movement_StepinHouse
	waitmovement 0
	removeobject 27
	closedoor 78, 27
	waitdooranim
	clearflag FLAG_HIDE_SHANE_RESORT_HOUSE
	setflag FLAG_SAW_RESORT_GRUNT
	pokenavcall Route110_EventScript_Whitney_Text_4
	waitmessage
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, Route110_Movement_StepinHouse
	waitmovement 0
	warpdoor MAP_ROUTE114_LANETTES_HOUSE, 0
	waitstate
	release
	end

Route110_EventScript_Whitney_1:
	msgbox Route110_EventScript_Whitney_Text_0
	release
	end


Route110_Movement_GrunttoHouse:
	walk_up
	walk_up
	walk_left
	walk_left
	walk_up
	step_end

Route110_Movement_ExclamationLeft:
	emote_exclamation_mark
	walk_in_place_left
	step_end

Route110_Movement_GruntLookAround:
	walk_in_place_left
	delay_16
	delay_16
	walk_in_place_right
	delay_16
	delay_16
	face_up
	step_end

Route110_Movement_StepinHouse:
	walk_up
	step_end

Route110_Movement_PlayertoShane:
	walk_fast_down
	walk_fast_down
	step_end

Route110_Movement_QuestionFaceUp:
	emote_question_mark
	face_up
	step_end

Route110_Movement_StepLeft:
	walk_in_place_left
	step_end

Route110_Movement_FaceDown:
	face_down
	step_end

Route110_Movement_FaceUp:
	face_up
	step_end

Route110_Movement_ShaneToHouse:
	walk_right
	walk_right
	walk_right
	walk_down
	walk_down
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_up
	walk_left
	walk_left
	walk_up
	step_end

Route110_Movement_PlayerToHouse:
	walk_down
	walk_right
	walk_right
	walk_right
	walk_down
	walk_down
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_up
	walk_left
	walk_left
	face_up
	step_end

Route110_EventScript_FoodShane::
	msgbox Route110_EventScript_FoodShane_Text_0, MSGBOX_NPC
	end


Route110_EventScript_FoodBlonde::
	msgbox Route110_EventScript_FoodBlonde_Text_0, MSGBOX_NPC
	end


Route110_EventScript_FoodHex::
	msgbox Route110_EventScript_FoodHex_Text_0, MSGBOX_NPC
	end


Route110_EventScript_Boy1::
	msgbox Route110_Text_RideBikeAtFullSpeed, MSGBOX_NPC
	end

Route110_EventScript_CyclingGirl1::
	msgbox Route110_Text_HairStreamsBehindMe, MSGBOX_NPC
	end

Route110_EventScript_CyclingGuy1::
	msgbox Route110_Text_YouGotBikeFromRydel, MSGBOX_NPC
	end

Route110_EventScript_OldMan::
	msgbox Route110_Text_TwoRoads, MSGBOX_NPC
	end

Route110_EventScript_OldWoman::
	msgbox Route110_Text_WalkOnTheLowRoad, MSGBOX_NPC
	end

Route110_EventScript_CyclingGuy2::
	msgbox Route110_Text_BikeTechniques, MSGBOX_NPC
	end

Route110_EventScript_Boy2::
	msgbox Route110_Text_WhichShouldIChoose, MSGBOX_NPC
	end

Route110_EventScript_SlateportCitySign::
	msgbox Route110_Text_SlateportCitySign, MSGBOX_SIGN
	end

Route110_EventScript_Route103Sign::
	msgbox Route110_Text_Route103Sign, MSGBOX_SIGN
	end

Route110_EventScript_SeasideParkingSign::
	msgbox Route110_Text_SeasideParkingSign, MSGBOX_SIGN
	end

Route110_EventScript_TrickHouseSign::
	msgbox Route110_Text_TrickHouseSign, MSGBOX_SIGN
	end

Route110_EventScript_ChallengeGuy::
	msgbox Route110_Text_AlwaysAimHigher, MSGBOX_NPC
	end

Route110_EventScript_Edwin::
	trainerbattle_single TRAINER_EDWIN_1, Route110_Text_EdwinIntro, Route110_Text_EdwinDefeated, Route110_EventScript_EdwinRegisterMatchCallAfterBattle
	specialvar VAR_RESULT, ShouldTryRematchBattle
	goto_if_eq VAR_RESULT, TRUE, Route110_EventScript_EdwinRematch
	msgbox Route110_Text_EdwinPostBattle, MSGBOX_DEFAULT
	release
	end

Route110_EventScript_EdwinRegisterMatchCallAfterBattle::
	special PlayerFaceTrainerAfterBattle
	waitmovement 0
	msgbox Route110_Text_EdwinRegister, MSGBOX_DEFAULT
	register_matchcall TRAINER_EDWIN_1
	release
	end

Route110_EventScript_EdwinRematch::
	trainerbattle_rematch TRAINER_EDWIN_1, Route110_Text_EdwinRematchIntro, Route110_Text_EdwinRematchDefeated
	msgbox Route110_Text_EdwinRematchPostBattle, MSGBOX_AUTOCLOSE
	end

Route110_EventScript_Dale::
	trainerbattle_single TRAINER_DALE, Route110_Text_DaleIntro, Route110_Text_DaleDefeated
	msgbox Route110_Text_DalePostBattle, MSGBOX_AUTOCLOSE
	end

Route110_EventScript_Anthony::
	trainerbattle_single TRAINER_ANTHONY, Route110_Text_AnthonyIntro, Route110_Text_AnthonyDefeated
	msgbox Route110_Text_AnthonyPostBattle, MSGBOX_AUTOCLOSE
	end

Route110_EventScript_Benjamin::
	trainerbattle_single TRAINER_BENJAMIN_1, Route110_Text_BenjaminIntro, Route110_Text_BenjaminDefeated, Route110_EventScript_BenjaminRegisterMatchCallAfterBattle
	specialvar VAR_RESULT, ShouldTryRematchBattle
	goto_if_eq VAR_RESULT, TRUE, Route110_EventScript_BenjaminRematch
	msgbox Route110_Text_BenjaminPostBattle, MSGBOX_DEFAULT
	release
	end

Route110_EventScript_BenjaminRegisterMatchCallAfterBattle::
	special PlayerFaceTrainerAfterBattle
	waitmovement 0
	msgbox Route110_Text_BenjaminRegister, MSGBOX_DEFAULT
	register_matchcall TRAINER_BENJAMIN_1
	release
	end

Route110_EventScript_BenjaminRematch::
	trainerbattle_rematch TRAINER_BENJAMIN_1, Route110_Text_BenjaminRematchIntro, Route110_Text_BenjaminRematchDefeated
	msgbox Route110_Text_BenjaminRematchPostBattle, MSGBOX_AUTOCLOSE
	end

Route110_EventScript_Jasmine::
	trainerbattle_single TRAINER_JASMINE, Route110_Text_JasmineIntro, Route110_Text_JasmineDefeated
	msgbox Route110_Text_JasminePostBattle, MSGBOX_AUTOCLOSE
	end

Route110_EventScript_Abigail::
	trainerbattle_single TRAINER_ABIGAIL_1, Route110_Text_AbigailIntro, Route110_Text_AbigailDefeated, Route110_EventScript_AbigailRegisterMatchCallAfterBattle
	specialvar VAR_RESULT, ShouldTryRematchBattle
	goto_if_eq VAR_RESULT, TRUE, Route110_EventScript_AbigailRematch
	msgbox Route110_Text_AbigailPostBattle, MSGBOX_DEFAULT
	release
	end

Route110_EventScript_AbigailRegisterMatchCallAfterBattle::
	special PlayerFaceTrainerAfterBattle
	waitmovement 0
	msgbox Route110_Text_AbigailRegister, MSGBOX_DEFAULT
	register_matchcall TRAINER_ABIGAIL_1
	release
	end

Route110_EventScript_AbigailRematch::
	trainerbattle_rematch TRAINER_ABIGAIL_1, Route110_Text_AbigailRematchIntro, Route110_Text_AbigailRematchDefeated
	msgbox Route110_Text_AbigailRematchPostBattle, MSGBOX_AUTOCLOSE
	end

Route110_EventScript_Timmy::
	trainerbattle_single TRAINER_TIMMY, Route110_Text_TimmyIntro, Route110_Text_TimmyDefeated
	msgbox Route110_Text_TimmyPostBattle, MSGBOX_AUTOCLOSE
	end

Route110_EventScript_Unused::
	end

Route110_EventScript_Kaleb::
	trainerbattle_single TRAINER_KALEB, Route110_Text_KalebIntro, Route110_Text_KalebDefeated
	msgbox Route110_Text_KalebPostBattle, MSGBOX_AUTOCLOSE
	end

Route110_EventScript_Joseph::
	trainerbattle_single TRAINER_JOSEPH, Route110_Text_JosephIntro, Route110_Text_JosephDefeated
	msgbox Route110_Text_JosephPostBattle, MSGBOX_AUTOCLOSE
	end

Route110_Text_RideBikeAtFullSpeed:
	.string "I thought it would be nice to bring my\n"
	.string "girlfriend to the resort, but it's too\l"
	.string "cold this time of year.\p"
	.string "The least they could do is have heated\n"
	.string "seats and tables.$"

Route110_Text_HairStreamsBehindMe:
	.string "The resort is a great place to bring\n"
	.string "your family for vacation.\p"
	.string "My son especially loves it this time of\n"
	.string "year.$"

Route110_Text_YouGotBikeFromRydel:
	.string "This place sucks!\p"
	.string "How will I go kayaking when the lake is\n"
	.string "frozen over?$"

Route110_Text_TwoRoads:
	.string "Ugh, it's too cold here.\p"
	.string "Can't they do something to turn the\n"
	.string "heat up?\p"
	.string "They won't be getting a good review\n"
	.string "from me if it stays like this!$"

Route110_Text_WalkOnTheLowRoad:
	.string "It's so nice of the caretakers to\n"
	.string "shovel paths through the snow.\p"
	.string "I'm too old to trek through deep snow.$"

Route110_Text_BikeTechniques:
	.string "Have you ever built a snowman before?\p"
	.string "They get really heavy and hard to push!$"

Route110_Text_WhichShouldIChoose:
	.string "This is such a lovely resort, but all of\n"
	.string "the tourists have somewhat ruined it\l"
	.string "for me.\p"
	.string "All they do is complain.$"

Route110_Text_AlwaysAimHigher:
	.string "I love building snowmen!\p"
	.string "My sister and I have been building as\n"
	.string "many as we can while on vacation!$"

Route110_Text_SlateportCitySign:
	.string "RAGE RESORT\p"
	.string "{LEFT_ARROW} MT. RAGE SKI LIFT\n"
	.string "{RIGHT_ARROW} CABINS, FOOD COURT$"

Route110_Text_Route103Sign:
	.string "{LEFT_ARROW} MT. RAGE\p"
	.string "Mountain can be icy in the winter,\n"
	.string "please watch your step.$"

Route110_Text_SeasideParkingSign:
	.string "RAGE FOOD COURT$"

Route110_Text_TrickHouseSign:
	.string "MT. RAGE SKI LIFT$"

Route110_OnFrame_Text_0:
	.string "SHANE: Alright, we're in.\p"
	.string "This resort seems pretty big.\p"
	.string "Let's look around for anything\n"
	.string "suspicious, and try not to hold me\l"
	.string "back.$"

Route110_EventScript_FoodTourist_Text_0:
	.string "My gazpacho soup is cold!\p"
	.string "Please take it back, and bring me\n"
	.string "another one!$"

Route110_EventScript_MalePlayer_Text_0:
	.string "Excuse me! Waiter!$"

Route110_EventScript_FemalePlayer_Text_0:
	.string "Excuse me! Waitress!$"

Route110_EventScript_FoodBeauty_Text_0:
	.string "Hey, I recognize you!\p"
	.string "You sure gave WHITNEY a run for her\n"
	.string "money on The Challenge!\p"
	.string "Don't think she'll let that happen\n"
	.string "again, she's been training!$"

Route110_EventScript_Whitney_Text_0:
	.string "WHITNEY: Hmm... You look familiar...\p"
	.string "{PLAYER} wasn't it?\p"
	.string "You know, you were the first person to\n"
	.string "defeat me in years!\p"
	.string "I'm taking a break right now, but I've\n"
	.string "been training non-stop since then.\p"
	.string "I hope to have a rematch with you one\n"
	.string "day.$"

Route110_EventScript_Whitney_Text_1:
	.string "...\p"
	.string "SHANE: What? You saw a grunt?\p"
	.string "Where were they?$"

Route110_EventScript_Whitney_Text_2:
	.string "...\p"
	.string "In that house, huh?$"

Route110_EventScript_Whitney_Text_3:
	.string "Crap, why now of all times?\p"
	.string "WHITNEY is right there!\p"
	.string "...\p"
	.string "Fine, let's check it out.$"

Route110_EventScript_Whitney_Text_4:
	.string "OLIVER: Hello, {PLAYER}, can you\n"
	.string "hear me?\p"
	.string "I'm calling to tell you I just saw\n"
	.string "a Team Phoenix grunt go into the\l"
	.string "Rage Resort!\p"
	.string "Unfortunately, the guards won't let\n"
	.string "me in without a Resort Pass.\p"
	.string "...\p"
	.string "What's that?\p"
	.string "You're there, and you just saw the\n"
	.string "grunt?\p"
	.string "Alright, this is good.\p"
	.string "Just be careful.\p"
	.string "I'll call in some backup. You know,\n"
	.string "I'm not much of a battler myself.\p"
	.string "Ok, good luck!$"

Route110_EventScript_FoodShane_Text_0:
	.string "SHANE: ...\p"
	.string "Look, {PLAYER}... It's actually\n"
	.string "WHITNEY.\p"
	.string "WHITNEY is j-just right over there...\p"
	.string "S-should I go t-talk to her?$"

Route110_EventScript_FoodBlonde_Text_0:
	.string "You would think an exclusive resort like\n"
	.string "this would keep all of the weirdos away,\l"
	.string "but trust me, there are plenty of rich\l"
	.string "weirdos as well!$"

Route110_EventScript_FoodHex_Text_0:
	.string "My boyfriend is too overdramatic, I love\n"
	.string "this nice chilly weather!$"
