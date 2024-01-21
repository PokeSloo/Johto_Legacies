CaveOfOrigin_1F_MapScripts::
	.byte 0


CaveOfOrigin_1F_EventScript_DenSign::
	msgbox CaveOfOrigin_1F_EventScript_DenSign_Text_0, MSGBOX_SIGN
	end


CaveOfOrigin_1F_EventScript_Expert::
	lock
	faceplayer
	checkplayergender
	compare VAR_RESULT, MALE
	goto_if_eq CaveOfOrigin_1F_EventScript_Expert_2
	compare VAR_RESULT, FEMALE
	goto_if_eq CaveOfOrigin_1F_EventScript_Expert_3
CaveOfOrigin_1F_EventScript_Expert_1:
	msgbox CaveOfOrigin_1F_EventScript_Expert_Text_0
	waitmessage
	closemessage
	release
	end

CaveOfOrigin_1F_EventScript_Expert_2:
	call CaveOfOrigin_1F_EventScript_MalePlayer
	goto CaveOfOrigin_1F_EventScript_Expert_1

CaveOfOrigin_1F_EventScript_Expert_3:
	call CaveOfOrigin_1F_EventScript_FemalePlayer
	goto CaveOfOrigin_1F_EventScript_Expert_1


CaveOfOrigin_1F_EventScript_MalePlayer::
	msgbox CaveOfOrigin_1F_EventScript_MalePlayer_Text_0
	waitmessage
	return


CaveOfOrigin_1F_EventScript_FemalePlayer::
	msgbox CaveOfOrigin_1F_EventScript_FemalePlayer_Text_0
	waitmessage
	return


CaveOfOrigin_1F_EventScript_ItemDragonFang::
	finditem ITEM_DRAGON_FANG
	end


CaveOfOrigin_1F_EventScript_ItemDragonScale::
	finditem ITEM_DRAGON_SCALE
	end


CaveOfOrigin_1F_EventScript_DenSign_Text_0:
	.string "DRAGON SHRINE\p"
	.string "A shrine revering the Dragon POKéMON\n"
	.string "that live in DRAGON'S DEN.$"

CaveOfOrigin_1F_EventScript_Expert_Text_0:
	.string "We have been very grateful for your\n"
	.string "father's...\p"
	.string "Ehrm...\p"
	.string "Generous contributions.$"

CaveOfOrigin_1F_EventScript_MalePlayer_Text_0:
	.string "Hmm... You must be SILVER'S son.$"

CaveOfOrigin_1F_EventScript_FemalePlayer_Text_0:
	.string "Hmm... You must be SILVER'S daughter.$"
