MossdeepCity_StevensHouse_MapScripts::
	.byte 0


MossdeepCity_StevensHouse_EventScript_Man::
	msgbox MossdeepCity_StevensHouse_EventScript_Man_Text_0, MSGBOX_NPC
	end


MossdeepCity_StevensHouse_EventScript_Meteorite::
	lock
	msgbox MossdeepCity_StevensHouse_EventScript_Meteorite_Text_0
	waitmessage
	specialvar VAR_RESULT, ScriptGetLeadMonSpecies
	compare VAR_RESULT, SPECIES_DEOXYS
	goto_if_eq MossdeepCity_StevensHouse_EventScript_Meteorite_1
	compare VAR_RESULT, SPECIES_DEOXYS_ATTACK
	goto_if_eq MossdeepCity_StevensHouse_EventScript_Meteorite_2
	compare VAR_RESULT, SPECIES_DEOXYS_DEFENSE
	goto_if_eq MossdeepCity_StevensHouse_EventScript_Meteorite_3
	compare VAR_RESULT, SPECIES_DEOXYS_SPEED
	goto_if_eq MossdeepCity_StevensHouse_EventScript_Meteorite_4
	release
	end

MossdeepCity_StevensHouse_EventScript_Meteorite_1:
	goto MossdeepCity_StevensHouse_EventScript_HasDeoxys
	return

MossdeepCity_StevensHouse_EventScript_Meteorite_2:
	goto MossdeepCity_StevensHouse_EventScript_HasDeoxys
	return

MossdeepCity_StevensHouse_EventScript_Meteorite_3:
	goto MossdeepCity_StevensHouse_EventScript_HasDeoxys
	return

MossdeepCity_StevensHouse_EventScript_Meteorite_4:
	goto MossdeepCity_StevensHouse_EventScript_HasDeoxys
	return


MossdeepCity_StevensHouse_EventScript_HasDeoxys::
	special BufferLeadMonNickname
	playse SE_PIN
	applymovement OBJ_EVENT_ID_PLAYER, MossdeepCity_StevensHouse_Exclamation
	waitmovement 0
	waitse
	delay 30
	msgbox MossdeepCity_StevensHouse_EventScript_HasDeoxys_Text_0
	waitmessage
	goto MossdeepCity_StevensHouse_EventScript_DeoxysMultichoice
	return


MossdeepCity_StevensHouse_Exclamation:
	emote_exclamation_mark
	step_end

MossdeepCity_StevensHouse_EventScript_DeoxysMultichoice::
    special GetDeoxysState
    message MossdeepCity_StevensHouse_Text_ChooseForm
	waitmessage
	multichoice 16, 0, MULTI_DEOXYS_FORM, FALSE
	switch VAR_RESULT
	case 0, MossdeepCity_StevensHouse_EventScript_NormalForm
	case 1, MossdeepCity_StevensHouse_EventScript_AttackForm
    case 2, MossdeepCity_StevensHouse_EventScript_DefenseForm
    case 3, MossdeepCity_StevensHouse_EventScript_SpeedForm
    case 4, MossdeepCity_StevensHouse_EventScript_Cancel
	case MULTI_B_PRESSED, MossdeepCity_StevensHouse_EventScript_Cancel
	end

MossdeepCity_StevensHouse_EventScript_NormalForm::
	setvar VAR_0x8005, SPECIES_DEOXYS
	goto MossdeepCity_StevensHouse_EventScript_TryFormChange
	return


MossdeepCity_StevensHouse_EventScript_AttackForm::
	setvar VAR_0x8005, SPECIES_DEOXYS_ATTACK
	goto MossdeepCity_StevensHouse_EventScript_TryFormChange
	return


MossdeepCity_StevensHouse_EventScript_DefenseForm::
	setvar VAR_0x8005, SPECIES_DEOXYS_DEFENSE
	goto MossdeepCity_StevensHouse_EventScript_TryFormChange
	return


MossdeepCity_StevensHouse_EventScript_SpeedForm::
	setvar VAR_0x8005, SPECIES_DEOXYS_SPEED
	goto MossdeepCity_StevensHouse_EventScript_TryFormChange
	return


MossdeepCity_StevensHouse_EventScript_TryFormChange::
	compare VAR_0x8005, VAR_0x8007
	goto_if_eq MossdeepCity_StevensHouse_EventScript_AlreadyThatForm
	special ChangeDeoxysForm
	playfanfare MUS_LEVEL_UP
	msgbox MossdeepCity_StevensHouse_EventScript_TryFormChange_Text_0
	waitfanfare
	release
	end


MossdeepCity_StevensHouse_EventScript_AlreadyThatForm::
	msgbox MossdeepCity_StevensHouse_EventScript_AlreadyThatForm_Text_0
	release
	end


MossdeepCity_StevensHouse_EventScript_Cancel::
	msgbox MossdeepCity_StevensHouse_EventScript_Cancel_Text_0
	release
	end


MossdeepCity_StevensHouse_EventScript_Man_Text_0:
	.string "Meteorites aren't just fancy rocks.\p"
	.string "They are gifts from outer space, some\n"
	.string "have even been proven to affect\l"
	.string "certain POKéMON in various ways.$"

MossdeepCity_StevensHouse_EventScript_Meteorite_Text_0:
	.string "It's a meteorite.$"

MossdeepCity_StevensHouse_EventScript_HasDeoxys_Text_0:
	.string "{STR_VAR_1} is reacting to the\n"
	.string "meteorite...\p"
	.string "It would like to change forms.$"

MossdeepCity_StevensHouse_EventScript_TryFormChange_Text_0:
	.string "{STR_VAR_1} has changed forms!$"

MossdeepCity_StevensHouse_EventScript_AlreadyThatForm_Text_0:
	.string "{STR_VAR_1} is already in that form.$"

MossdeepCity_StevensHouse_EventScript_Cancel_Text_0:
	.string "{STR_VAR_1} did not change forms.$"

MossdeepCity_StevensHouse_Text_ChooseForm::
	.string "Which form should {STR_VAR_1}\n"
	.string "change to?$"
