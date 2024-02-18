SootopolisCity_LotadAndSeedotHouse_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, SootopolisCity_LotadAndSeedotHouse_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

SootopolisCity_LotadAndSeedotHouse_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
	map_script_2 VAR_TEMP_1, 0, SootopolisCity_LotadAndSeedotHouse_EventScript_OnFrame
	.2byte 0


SootopolisCity_LotadAndSeedotHouse_EventScript_OnFrame::
	lock
	playse SE_PIN
	applymovement 1, SootopolisCity_LotadAndSeedotHouse_Movement_StepDown
	waitmovement 0
	waitse
	delay 30
	msgbox SootopolisCity_LotadAndSeedotHouse_EventScript_OnFrame_Text_0
	waitmessage
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, SootopolisCity_LotadAndSeedotHouse_Movement_PlayerStepIn
	waitmovement 0
	msgbox SootopolisCity_LotadAndSeedotHouse_EventScript_OnFrame_Text_1
	waitmessage
	playse SE_PIN
	applymovement 1, SootopolisCity_LotadAndSeedotHouse_Movement_Exclamation
	waitmovement 0
	waitse
	delay 60
	msgbox SootopolisCity_LotadAndSeedotHouse_EventScript_OnFrame_Text_2
	waitmessage
	applymovement 1, SootopolisCity_LotadAndSeedotHouse_Movement_StepRight
	waitmovement 0
	msgbox SootopolisCity_LotadAndSeedotHouse_EventScript_OnFrame_Text_3
	waitmessage
	goto_if_set FLAG_GOT_OAK_POKEMON, SootopolisCity_LotadAndSeedotHouse_EventScript_OnFrame_1
	msgbox SootopolisCity_LotadAndSeedotHouse_EventScript_OnFrame_Text_5
	setvar VAR_TEMP_1, 1
	release
	end

SootopolisCity_LotadAndSeedotHouse_EventScript_OnFrame_1:
	msgbox SootopolisCity_LotadAndSeedotHouse_EventScript_OnFrame_Text_4
	setvar VAR_TEMP_1, 1
	release
	end


SootopolisCity_LotadAndSeedotHouse_Movement_Exclamation:
	emote_exclamation_mark
	face_down
	step_end

SootopolisCity_LotadAndSeedotHouse_Movement_PlayerStepIn:
	walk_up
	walk_up
	step_end

SootopolisCity_LotadAndSeedotHouse_Movement_StepRight:
	walk_in_place_right
	step_end

SootopolisCity_LotadAndSeedotHouse_EventScript_Oak::
	msgbox SootopolisCity_LotadAndSeedotHouse_EventScript_Oak_Text_0, MSGBOX_NPC
	end


SootopolisCity_LotadAndSeedotHouse_EventScript_BulbasaurBall::
	lock
	showmonpic SPECIES_BULBASAUR, 10, 3
	applymovement 1, SootopolisCity_LotadAndSeedotHouse_Movement_StepRight
	waitmovement 0
	msgbox SootopolisCity_LotadAndSeedotHouse_EventScript_BulbasaurBall_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq SootopolisCity_LotadAndSeedotHouse_EventScript_BulbasaurBall_1
	hidemonpic
	setvar VAR_TEMP_1, SPECIES_BULBASAUR
	givemon SPECIES_BULBASAUR, 5
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PARTY, SootopolisCity_LotadAndSeedotHouse_EventScript_ReceiveBulbasaurParty
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PC, SootopolisCity_LotadAndSeedotHouse_EventScript_ReceiveBulbasaurPC
	goto Common_EventScript_NoMoreRoomForPokemon
	end

SootopolisCity_LotadAndSeedotHouse_EventScript_BulbasaurBall_1:
	hidemonpic
	msgbox SootopolisCity_LotadAndSeedotHouse_EventScript_BulbasaurBall_Text_1
	release
	end


SootopolisCity_LotadAndSeedotHouse_EventScript_ReceiveBulbasaurParty::
	call SootopolisCity_LotadAndSeedotHouse_EventScript_ReceivedBulbasaurFanfare
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, SootopolisCity_LotadAndSeedotHouse_EventScript_AfterChosen
	call Common_EventScript_GetGiftMonPartySlot
	call Common_EventScript_NameReceivedPartyMon
	goto SootopolisCity_LotadAndSeedotHouse_EventScript_AfterChosen
	end


SootopolisCity_LotadAndSeedotHouse_EventScript_ReceiveBulbasaurPC::
	call SootopolisCity_LotadAndSeedotHouse_EventScript_ReceivedBulbasaurFanfare
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, SootopolisCity_LotadAndSeedotHouse_EventScript_SendBulbasaurToPC
	call Common_EventScript_NameReceivedBoxMon
	goto SootopolisCity_LotadAndSeedotHouse_EventScript_SendBulbasaurToPC
	end


SootopolisCity_LotadAndSeedotHouse_EventScript_SendBulbasaurToPC::
	call Common_EventScript_TransferredToPC
	goto SootopolisCity_LotadAndSeedotHouse_EventScript_AfterChosen
	end


SootopolisCity_LotadAndSeedotHouse_EventScript_ReceivedBulbasaurFanfare::
	removeobject 3
	setflag FLAG_CHOSE_OAK_BULBASAUR
	bufferspeciesname STR_VAR_2, SPECIES_BULBASAUR
	playfanfare MUS_OBTAIN_ITEM
	msgbox SootopolisCity_LotadAndSeedotHouse_EventScript_ReceivedBulbasaurFanfare_Text_0
	waitmessage
	waitfanfare
	bufferspeciesname STR_VAR_1, SPECIES_BULBASAUR
	return


SootopolisCity_LotadAndSeedotHouse_EventScript_SquirtleBall::
	lock
	showmonpic SPECIES_SQUIRTLE, 10, 3
	applymovement 1, SootopolisCity_LotadAndSeedotHouse_Movement_StepRight
	waitmovement 0
	msgbox SootopolisCity_LotadAndSeedotHouse_EventScript_SquirtleBall_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq SootopolisCity_LotadAndSeedotHouse_EventScript_SquirtleBall_1
	hidemonpic
	setvar VAR_TEMP_1, SPECIES_SQUIRTLE
	givemon SPECIES_SQUIRTLE, 5
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PARTY, SootopolisCity_LotadAndSeedotHouse_EventScript_ReceiveSquirtleParty
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PC, SootopolisCity_LotadAndSeedotHouse_EventScript_ReceiveSquirtlePC
	goto Common_EventScript_NoMoreRoomForPokemon
	end

SootopolisCity_LotadAndSeedotHouse_EventScript_SquirtleBall_1:
	hidemonpic
	msgbox SootopolisCity_LotadAndSeedotHouse_EventScript_SquirtleBall_Text_1
	release
	end


SootopolisCity_LotadAndSeedotHouse_EventScript_ReceiveSquirtleParty::
	call SootopolisCity_LotadAndSeedotHouse_EventScript_ReceivedSquirtleFanfare
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, SootopolisCity_LotadAndSeedotHouse_EventScript_AfterChosen
	call Common_EventScript_GetGiftMonPartySlot
	call Common_EventScript_NameReceivedPartyMon
	goto SootopolisCity_LotadAndSeedotHouse_EventScript_AfterChosen
	end


SootopolisCity_LotadAndSeedotHouse_EventScript_ReceiveSquirtlePC::
	call SootopolisCity_LotadAndSeedotHouse_EventScript_ReceivedSquirtleFanfare
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, SootopolisCity_LotadAndSeedotHouse_EventScript_SendSquirtleToPC
	call Common_EventScript_NameReceivedBoxMon
	goto SootopolisCity_LotadAndSeedotHouse_EventScript_SendSquirtleToPC
	end


SootopolisCity_LotadAndSeedotHouse_EventScript_SendSquirtleToPC::
	call Common_EventScript_TransferredToPC
	goto SootopolisCity_LotadAndSeedotHouse_EventScript_AfterChosen
	end


SootopolisCity_LotadAndSeedotHouse_EventScript_ReceivedSquirtleFanfare::
	removeobject 5
	setflag FLAG_CHOSE_OAK_SQUIRTLE
	bufferspeciesname STR_VAR_2, SPECIES_SQUIRTLE
	playfanfare MUS_OBTAIN_ITEM
	msgbox SootopolisCity_LotadAndSeedotHouse_EventScript_ReceivedSquirtleFanfare_Text_0
	waitmessage
	waitfanfare
	bufferspeciesname STR_VAR_1, SPECIES_SQUIRTLE
	return


SootopolisCity_LotadAndSeedotHouse_EventScript_CharmanderBall::
	lock
	showmonpic SPECIES_CHARMANDER, 10, 3
	applymovement 1, SootopolisCity_LotadAndSeedotHouse_Movement_StepRight
	waitmovement 0
	msgbox SootopolisCity_LotadAndSeedotHouse_EventScript_CharmanderBall_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq SootopolisCity_LotadAndSeedotHouse_EventScript_CharmanderBall_1
	hidemonpic
	setvar VAR_TEMP_1, SPECIES_CHARMANDER
	givemon SPECIES_CHARMANDER, 5
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PARTY, SootopolisCity_LotadAndSeedotHouse_EventScript_ReceiveCharmanderParty
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PC, SootopolisCity_LotadAndSeedotHouse_EventScript_ReceiveCharmanderPC
	goto Common_EventScript_NoMoreRoomForPokemon
	end

SootopolisCity_LotadAndSeedotHouse_EventScript_CharmanderBall_1:
	hidemonpic
	msgbox SootopolisCity_LotadAndSeedotHouse_EventScript_CharmanderBall_Text_1
	release
	end


SootopolisCity_LotadAndSeedotHouse_EventScript_ReceiveCharmanderParty::
	call SootopolisCity_LotadAndSeedotHouse_EventScript_ReceivedCharmanderFanfare
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, SootopolisCity_LotadAndSeedotHouse_EventScript_AfterChosen
	call Common_EventScript_GetGiftMonPartySlot
	call Common_EventScript_NameReceivedPartyMon
	goto SootopolisCity_LotadAndSeedotHouse_EventScript_AfterChosen
	end


SootopolisCity_LotadAndSeedotHouse_EventScript_ReceiveCharmanderPC::
	call SootopolisCity_LotadAndSeedotHouse_EventScript_ReceivedCharmanderFanfare
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, SootopolisCity_LotadAndSeedotHouse_EventScript_SendCharmanderToPC
	call Common_EventScript_NameReceivedBoxMon
	goto SootopolisCity_LotadAndSeedotHouse_EventScript_SendCharmanderToPC
	end


SootopolisCity_LotadAndSeedotHouse_EventScript_SendCharmanderToPC::
	call Common_EventScript_TransferredToPC
	goto SootopolisCity_LotadAndSeedotHouse_EventScript_AfterChosen
	end


SootopolisCity_LotadAndSeedotHouse_EventScript_ReceivedCharmanderFanfare::
	removeobject 4
	setflag FLAG_CHOSE_OAK_CHARMANDER
	bufferspeciesname STR_VAR_2, SPECIES_CHARMANDER
	playfanfare MUS_OBTAIN_ITEM
	msgbox SootopolisCity_LotadAndSeedotHouse_EventScript_ReceivedCharmanderFanfare_Text_0
	waitmessage
	waitfanfare
	bufferspeciesname STR_VAR_1, SPECIES_CHARMANDER
	return


SootopolisCity_LotadAndSeedotHouse_EventScript_AfterChosen::
	msgbox SootopolisCity_LotadAndSeedotHouse_EventScript_AfterChosen_Text_0
	waitmessage
	closemessage
	playse SE_DOOR
	addobject 2
	waitse
	applymovement 1, SootopolisCity_LotadAndSeedotHouse_Movement_StepDown
	applymovement OBJ_EVENT_ID_PLAYER, SootopolisCity_LotadAndSeedotHouse_Movement_StepDown
	waitmovement 0
	delay 30
	msgbox SootopolisCity_LotadAndSeedotHouse_EventScript_AfterChosen_Text_1
	waitmessage
	closemessage
	goto_if_set FLAG_CHOSE_OAK_BULBASAUR, SootopolisCity_LotadAndSeedotHouse_EventScript_AfterChosen_2
	goto_if_set FLAG_CHOSE_OAK_SQUIRTLE, SootopolisCity_LotadAndSeedotHouse_EventScript_AfterChosen_3
	goto SootopolisCity_LotadAndSeedotHouse_EventScript_RemoveBulbaSquirt
SootopolisCity_LotadAndSeedotHouse_EventScript_AfterChosen_1:
	end

SootopolisCity_LotadAndSeedotHouse_EventScript_AfterChosen_2:
	goto SootopolisCity_LotadAndSeedotHouse_EventScript_RemoveSquirtChar
	goto SootopolisCity_LotadAndSeedotHouse_EventScript_AfterChosen_1

SootopolisCity_LotadAndSeedotHouse_EventScript_AfterChosen_3:
	goto SootopolisCity_LotadAndSeedotHouse_EventScript_RemoveBulbaChar
	goto SootopolisCity_LotadAndSeedotHouse_EventScript_AfterChosen_1


SootopolisCity_LotadAndSeedotHouse_Movement_StepDown:
	walk_in_place_down
	step_end

SootopolisCity_LotadAndSeedotHouse_EventScript_RemoveSquirtChar::
	applymovement 2, SootopolisCity_LotadAndSeedotHouse_Movement_NurseToSquirtFirst
	waitmovement 0
	delay 20
	removeobject 5
	delay 30
	applymovement 2, SootopolisCity_LotadAndSeedotHouse_Movement_NurseToCharFromSquirt
	waitmovement 0
	delay 20
	removeobject 4
	delay 30
	applymovement 2, SootopolisCity_LotadAndSeedotHouse_Movement_StepLeft
	applymovement OBJ_EVENT_ID_PLAYER, SootopolisCity_LotadAndSeedotHouse_Movement_StepRight
	waitmovement 0
	msgbox SootopolisCity_LotadAndSeedotHouse_EventScript_RemoveSquirtChar_Text_0
	waitmessage
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, SootopolisCity_LotadAndSeedotHouse_Movement_StepDown
	applymovement 2, SootopolisCity_LotadAndSeedotHouse_Movement_NurseExitFromChar
	waitmovement 0
	removeobject 2
	playse SE_EXIT
	waitse
	setflag FLAG_GOT_OAK_POKEMON
	release
	end


SootopolisCity_LotadAndSeedotHouse_EventScript_RemoveBulbaChar::
	applymovement 2, SootopolisCity_LotadAndSeedotHouse_Movement_NurseToBulbaFirst
	waitmovement 0
	delay 20
	removeobject 3
	delay 30
	applymovement 2, SootopolisCity_LotadAndSeedotHouse_Movement_NurseToCharFromBulba
	waitmovement 0
	delay 20
	removeobject 4
	delay 30
	applymovement 2, SootopolisCity_LotadAndSeedotHouse_Movement_StepLeft
	applymovement OBJ_EVENT_ID_PLAYER, SootopolisCity_LotadAndSeedotHouse_Movement_StepRight
	waitmovement 0
	msgbox SootopolisCity_LotadAndSeedotHouse_EventScript_RemoveSquirtChar_Text_0
	waitmessage
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, SootopolisCity_LotadAndSeedotHouse_Movement_StepDown
	applymovement 2, SootopolisCity_LotadAndSeedotHouse_Movement_NurseExitFromChar
	waitmovement 0
	removeobject 2
	playse SE_EXIT
	waitse
	setflag FLAG_GOT_OAK_POKEMON
	release
	end


SootopolisCity_LotadAndSeedotHouse_EventScript_RemoveBulbaSquirt::
	applymovement 2, SootopolisCity_LotadAndSeedotHouse_Movement_NurseToBulbaFirst
	waitmovement 0
	delay 20
	removeobject 3
	delay 30
	applymovement 2, SootopolisCity_LotadAndSeedotHouse_Movement_NurseToCharFromSquirt
	waitmovement 0
	delay 20
	removeobject 5
	delay 30
	applymovement 2, SootopolisCity_LotadAndSeedotHouse_Movement_StepRight
	applymovement OBJ_EVENT_ID_PLAYER, SootopolisCity_LotadAndSeedotHouse_Movement_StepLeft
	waitmovement 0
	msgbox SootopolisCity_LotadAndSeedotHouse_EventScript_RemoveSquirtChar_Text_0
	waitmessage
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, SootopolisCity_LotadAndSeedotHouse_Movement_StepDown
	applymovement 2, SootopolisCity_LotadAndSeedotHouse_Movement_NurseExitFromSquirt
	waitmovement 0
	removeobject 2
	playse SE_EXIT
	waitse
	setflag FLAG_GOT_OAK_POKEMON
	release
	end


SootopolisCity_LotadAndSeedotHouse_Movement_NurseToSquirtFirst:
	walk_up
	walk_right
	walk_up
	walk_up
	step_end

SootopolisCity_LotadAndSeedotHouse_Movement_NurseToCharFromSquirt:
	walk_right
	walk_in_place_up
	step_end

SootopolisCity_LotadAndSeedotHouse_Movement_NurseToBulbaFirst:
	walk_up
	walk_up
	walk_up
	step_end

SootopolisCity_LotadAndSeedotHouse_Movement_NurseToCharFromBulba:
	walk_down
	walk_right
	walk_right
	walk_up
	step_end

SootopolisCity_LotadAndSeedotHouse_Movement_StepLeft:
	walk_in_place_left
	step_end

SootopolisCity_LotadAndSeedotHouse_Movement_NurseExitFromChar:
	walk_down
	walk_down
	walk_left
	walk_down
	step_end

SootopolisCity_LotadAndSeedotHouse_Movement_NurseExitFromSquirt:
	walk_down
	walk_down
	walk_down
	step_end

SootopolisCity_LotadAndSeedotHouse_EventScript_OnFrame_Text_0:
	.string "Welcome to the world of POKéMON!$"

SootopolisCity_LotadAndSeedotHouse_EventScript_OnFrame_Text_1:
	.string "This world is inhabited far and wide by...\n"
	.string "uh... POKéMON!\p"
	.string "...\p"
	.string "Are you a boy, or are you a girl?$"

SootopolisCity_LotadAndSeedotHouse_EventScript_OnFrame_Text_2:
	.string "Oh! That's right!$"

SootopolisCity_LotadAndSeedotHouse_EventScript_OnFrame_Text_3:
	.string "On this table are three POKéBALLS...$"

SootopolisCity_LotadAndSeedotHouse_EventScript_OnFrame_Text_4:
	.string "Wait...\p"
	.string "Where did they go...?$"

SootopolisCity_LotadAndSeedotHouse_EventScript_OnFrame_Text_5:
	.string "Each one contains a POKéMON!\p"
	.string "You can have one.\p"
	.string "Go on, choose!$"

SootopolisCity_LotadAndSeedotHouse_EventScript_Oak_Text_0:
	.string "Hmm... Are you a boy, or are you a girl?$"

SootopolisCity_LotadAndSeedotHouse_EventScript_BulbasaurBall_Text_0:
	.string "...You want to go with the GRASS\n"
	.string "POKéMON, BULBASAUR?$"

SootopolisCity_LotadAndSeedotHouse_EventScript_BulbasaurBall_Text_1:
	.string "I see, most people don't want\n"
	.string "BULBASAUR...$"

SootopolisCity_LotadAndSeedotHouse_EventScript_ReceivedBulbasaurFanfare_Text_0:
	.string "{PLAYER} received the BULBASAUR!$"

SootopolisCity_LotadAndSeedotHouse_EventScript_SquirtleBall_Text_0:
	.string "...You want to go with the WATER\n"
	.string "POKéMON, SQUIRTLE?$"

SootopolisCity_LotadAndSeedotHouse_EventScript_SquirtleBall_Text_1:
	.string "I see, how disappointing...$"

SootopolisCity_LotadAndSeedotHouse_EventScript_ReceivedSquirtleFanfare_Text_0:
	.string "{PLAYER} received the SQUIRTLE!$"

SootopolisCity_LotadAndSeedotHouse_EventScript_CharmanderBall_Text_0:
	.string "...You want to go with the FIRE POKéMON,\n"
	.string "CHARMANDER?$"

SootopolisCity_LotadAndSeedotHouse_EventScript_CharmanderBall_Text_1:
	.string "Really? I thought everyone wanted\n"
	.string "CHARMANDER...$"

SootopolisCity_LotadAndSeedotHouse_EventScript_ReceivedCharmanderFanfare_Text_0:
	.string "{PLAYER} received the CHARMANDER!$"

SootopolisCity_LotadAndSeedotHouse_EventScript_AfterChosen_Text_0:
	.string "You've made a fine choice!$"

SootopolisCity_LotadAndSeedotHouse_EventScript_AfterChosen_Text_1:
	.string "NURSE: It's time for your medication,\n"
	.string "SAMUEL.\p"
	.string "SAMUEL: Welcome to the world of\n"
	.string "POKéMON!\p"
	.string "NURSE: No, no, it's me, your nurse.\p"
	.string "...\p"
	.string "W-where did you get these POKéMON?\p"
	.string "Your medication can wait.\p"
	.string "We'll have to figure out where you found\n"
	.string "these, and return them to their\l"
	.string "rightful owner.$"

SootopolisCity_LotadAndSeedotHouse_EventScript_RemoveSquirtChar_Text_0:
	.string "I'm sorry about him...$"
