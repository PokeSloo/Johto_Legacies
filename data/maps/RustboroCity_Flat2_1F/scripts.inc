RustboroCity_Flat2_1F_MapScripts::
	.byte 0

RustboroCity_Flat2_1F_EventScript_Skitty::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_AZURILL, CRY_MODE_NORMAL
	msgbox RustboroCity_Flat2_1F_Text_Skitty, MSGBOX_DEFAULT
	waitmoncry
	release
	end

RustboroCity_Flat2_1F_Text_Skitty:
	.string "AZURILL: Azuu!$"

RustboroCity_Flat2_1F_EventScript_FriendshipRater::
	lock
	faceplayer
	bufferleadmonspeciesname STR_VAR_1
	msgbox RustboroCity_Flat2_1F_Text_SeeHowMuchPokemonLikesYou, MSGBOX_DEFAULT
	specialvar VAR_RESULT, GetLeadMonFriendshipScore
	switch VAR_RESULT
	case FRIENDSHIP_NONE, RustboroCity_Flat2_1F_EventScript_DetestsYou
	case FRIENDSHIP_1_TO_49, RustboroCity_Flat2_1F_EventScript_VeryWary
	case FRIENDSHIP_50_TO_99, RustboroCity_Flat2_1F_EventScript_NotUsedToYou
	case FRIENDSHIP_100_TO_149, RustboroCity_Flat2_1F_EventScript_GettingUsedToYou
	case FRIENDSHIP_150_TO_199, RustboroCity_Flat2_1F_EventScript_LikesYouQuiteALot
	case FRIENDSHIP_200_TO_254, RustboroCity_Flat2_1F_EventScript_VeryHappy
	case FRIENDSHIP_MAX, RustboroCity_Flat2_1F_EventScript_AdoresYou
	release
	end

RustboroCity_Flat2_1F_EventScript_DetestsYou::
	msgbox RustboroCity_Flat2_1F_Text_DetestsYou, MSGBOX_DEFAULT
	release
	end

RustboroCity_Flat2_1F_EventScript_NotUsedToYou::
	msgbox RustboroCity_Flat2_1F_Text_NotUsedToYou, MSGBOX_DEFAULT
	release
	end

RustboroCity_Flat2_1F_EventScript_GettingUsedToYou::
	msgbox RustboroCity_Flat2_1F_Text_GettingUsedToYou, MSGBOX_DEFAULT
	release
	end

RustboroCity_Flat2_1F_EventScript_LikesYouQuiteALot::
	msgbox RustboroCity_Flat2_1F_Text_LikesYouQuiteALot, MSGBOX_DEFAULT
	release
	end

RustboroCity_Flat2_1F_EventScript_VeryHappy::
	msgbox RustboroCity_Flat2_1F_Text_VeryHappy, MSGBOX_DEFAULT
	release
	end

RustboroCity_Flat2_1F_EventScript_AdoresYou::
	msgbox RustboroCity_Flat2_1F_Text_AdoresYou, MSGBOX_DEFAULT
	release
	end

RustboroCity_Flat2_1F_Text_SeeHowMuchPokemonLikesYou:
	.string "My, what an adorable {STR_VAR_1}\n"
	.string "you have there!\p"
	.string "...$"

RustboroCity_Flat2_1F_Text_AdoresYou:
	.string "I can tell it aboslutely adores you!\n"
	.string "It can't possibly love you any more.\l"
	.string "I'm a bit jealous, to be honest.$"

RustboroCity_Flat2_1F_Text_VeryHappy:
	.string "I can tell it likes you a whole lot!\p"
	.string "You must really treat it with love and\n"
	.string "care.\p"
	.string "By the way, you should visit my sister\n"
	.string "on the other side of Goldenrod.\p"
	.string "She offers a POKéMON grooming service\n"
	.string "that generally leaves POKéMON feeling\l"
	.string "even happier!$"

RustboroCity_Flat2_1F_Text_LikesYouQuiteALot:
	.string "I can tell it likes you quite a bit!\p"
	.string "I'm sure it spends a lot of quality time\n"
	.string "with you.\p"
	.string "By the way, you should visit my sister\n"
	.string "on the other side of Goldenrod.\p"
	.string "She offers a POKéMON grooming service\n"
	.string "that generally leaves POKéMON feeling\l"
	.string "happier!$"

RustboroCity_Flat2_1F_Text_GettingUsedToYou:
	.string "I can tell it's still getting used to you,\n"
	.string "but it does seem somewhat fond of you.\p"
	.string "You should visit my sister on the other\n"
	.string "side of Goldenrod, she offers a\l"
	.string "POKéMON grooming service that\l"
	.string "generally leaves POKéMON feeling\l"
	.string "happier!$"

RustboroCity_Flat2_1F_Text_NotUsedToYou:
	.string "Although, it doesn't seem to be very\n"
	.string "used to you yet.\p"
	.string "You should spend more time with it.$"

RustboroCity_Flat2_1F_Text_VeryWary:
	.string "Hmm... I'm sorry to say it, but this\n"
	.string "POKéMON really doesn't like you very\l"
	.string "much.\p"
	.string "Have you tried NOT letting it faint in\n"
	.string "battle?$"

RustboroCity_Flat2_1F_Text_DetestsYou:
	.string "But I'm sorry to say, it seems to\n"
	.string "aboslutely hate you with all of its\l"
	.string "being!\p"
	.string "I don't know what you've done to make it\n"
	.string "detest you so much, but I feel like I\l"
	.string "should call POKéMON Services and have\l"
	.string "it taken away from you!$"

RustboroCity_Flat2_1F_EventScript_VeryWary::
	goto_if_set FLAG_RECEIVED_SOOTHE_BELL, RustboroCity_Flat2_1F_EventScript_VeryWary_1
	msgbox RustboroCity_Flat2_1F_EventScript_VeryWary_Text_0
	waitmessage
	giveitem ITEM_SOOTHE_BELL
	setflag FLAG_RECEIVED_SOOTHE_BELL
	msgbox RustboroCity_Flat2_1F_EventScript_VeryWary_Text_1
	release
	end

RustboroCity_Flat2_1F_EventScript_VeryWary_1:
	msgbox RustboroCity_Flat2_1F_Text_VeryWary, MSGBOX_DEFAULT
	release
	end


RustboroCity_Flat2_1F_EventScript_VeryWary_Text_0:
	.string "Hmm... I'm sorry to say it, but this\n"
	.string "POKéMON really doesn't like you very\l"
	.string "much.\p"
	.string "Here, maybe this will help.$"

RustboroCity_Flat2_1F_EventScript_VeryWary_Text_1:
	.string "Let one of your POKéMON hold that\n"
	.string "Soothe Bell, and it will help make it\l"
	.string "more friendly towards you!$"
