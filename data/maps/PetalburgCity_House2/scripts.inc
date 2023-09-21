PetalburgCity_House2_MapScripts::
	.byte 0

PetalburgCity_House2_EventScript_NameRater::
	lock
	faceplayer
	msgbox PetalburgCity_House2_Text_PleasedToRateMonNickname, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, PetalburgCity_House2_EventScript_ChooseMonToRate
	goto_if_eq VAR_RESULT, NO, PetalburgCity_House2_EventScript_DeclineNameRate
	end

PetalburgCity_House2_EventScript_ChooseMonToRate::
	msgbox PetalburgCity_House2_Text_CritiqueWhichMonNickname, MSGBOX_DEFAULT
	special ChoosePartyMon
	waitstate
	goto_if_ne VAR_0x8004, PARTY_NOTHING_CHOSEN, PetalburgCity_House2_EventScript_RateMonNickname
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, PetalburgCity_House2_EventScript_DeclineNameRate
	end

PetalburgCity_House2_EventScript_DeclineNameRate::
	msgbox PetalburgCity_House2_Text_DoVisitAgain, MSGBOX_DEFAULT
	release
	end

PetalburgCity_House2_EventScript_RateMonNickname::
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
	goto_if_eq VAR_RESULT, SPECIES_EGG, PetalburgCity_House2_EventScript_CantRateEgg
	special BufferMonNickname
	special IsMonOTIDNotPlayers
	goto_if_eq VAR_RESULT, TRUE, PetalburgCity_House2_EventScript_PlayerNotMonsOT
	specialvar VAR_RESULT, MonOTNameNotPlayer
	special BufferMonNickname
	goto_if_eq VAR_RESULT, TRUE, PetalburgCity_House2_EventScript_PlayerNotMonsOT
	msgbox PetalburgCity_House2_Text_FineNameSuggestBetterOne, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, PetalburgCity_House2_EventScript_ChangeNickname
	goto_if_eq VAR_RESULT, NO, PetalburgCity_House2_EventScript_DeclineNameRate
	end

PetalburgCity_House2_EventScript_CantRateEgg::
	msgbox PetalburgCity_House2_Text_ThatIsMerelyAnEgg, MSGBOX_DEFAULT
	release
	end

PetalburgCity_House2_EventScript_PlayerNotMonsOT::
	msgbox PetalburgCity_House2_Text_MagnificentName, MSGBOX_DEFAULT
	release
	end

PetalburgCity_House2_EventScript_ChangeNickname::
	msgbox PetalburgCity_House2_Text_WhatShallNewNameBe, MSGBOX_DEFAULT
	call Common_EventScript_NameReceivedPartyMon
	specialvar VAR_RESULT, TryPutNameRaterShowOnTheAir
	special BufferMonNickname
	goto_if_eq VAR_RESULT, TRUE, PetalburgCity_House2_EventScript_NewNameDifferent
	msgbox PetalburgCity_House2_Text_NameNoDifferentYetSuperior, MSGBOX_DEFAULT
	release
	end

PetalburgCity_House2_EventScript_NewNameDifferent::
	msgbox PetalburgCity_House2_Text_MonShallBeKnownAsName, MSGBOX_DEFAULT
	release
	end

PetalburgCity_House2_Text_PleasedToRateMonNickname:
	.string "Welcome TRAINER! I am the NAME RATER.\p"
	.string "I am a highly qualified Onomatologist,\n"
	.string "that is, one who studies names.\p"
	.string "My ratings are 100 percent accurate,\n"
	.string "and trusted by other Onomatologists!\p"
	.string "So then, would you like me to rate the\n"
	.string "nickname of one of your POKéMON?$"

PetalburgCity_House2_Text_CritiqueWhichMonNickname:
	.string "Which POKéMON's nickname shall\n"
	.string "I rate?$"

PetalburgCity_House2_Text_FineNameSuggestBetterOne:
	.string "{STR_VAR_1}, is it?\p"
	.string "Hmm...\p"
	.string "I would rate that nickname a 2 out of\n"
	.string "10, and that's being generous!\p"
	.string "Say, why don't you ditch that terrible\n"
	.string "nickname for a better one?$"

PetalburgCity_House2_Text_WhatShallNewNameBe:
	.string "Excellent! Then what shall\n"
	.string "{STR_VAR_1}'s new nickname be?$"

PetalburgCity_House2_Text_MonShallBeKnownAsName:
	.string "All finished!\p"
	.string "This POKéMON shall now be known as\n"
	.string "{STR_VAR_1}!\p"
	.string "I would rate the new nickname at least\n"
	.string "a 6 out of 10, that's a considerable\l"
	.string "improvement.$"

PetalburgCity_House2_Text_DoVisitAgain:
	.string "Very well then...\p"
	.string "If you're fine with your POKéMON having\n"
	.string "bad nicknames, then there's nothing I\l"
	.string "can do to help.$"

PetalburgCity_House2_Text_NameNoDifferentYetSuperior:
	.string "Hmm...\p"
	.string "So no change?\p"
	.string "I suppose what matters most is that\n"
	.string "you're happy with your POKéMON's\l"
	.string "nickname, even if it is only a 2 out of\l"
	.string "10...$"

PetalburgCity_House2_Text_MagnificentName:
	.string "...!\p"
	.string "Oh my!\p"
	.string "That nickname...\p"
	.string "{STR_VAR_1}...\p"
	.string "I get shivers just saying it.\p"
	.string "There's no doubt about it! This\n"
	.string "nickname is absolutely a 10 out of 10!\p"
	.string "It is truly magnificent!$"

PetalburgCity_House2_Text_ThatIsMerelyAnEgg:
	.string "Really? An egg?\p"
	.string "I can't rate something that doesn't\n"
	.string "have a nickname yet.$"

PetalburgCity_House2_EventScript_Woman::
	msgbox PetalburgCity_House2_Text_NormanBecameGymLeader, MSGBOX_NPC
	end

PetalburgCity_House2_Text_NormanBecameGymLeader:
	.string "Grandpa really thinks highly of himself.\n"
	.string "He says he's an Onomatologist, but I\l"
	.string "think he just made that word up!$"

