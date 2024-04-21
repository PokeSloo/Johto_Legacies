RustboroCity_PokemonSchool_MapScripts::
	.byte 0

RustboroCity_PokemonSchool_EventScript_Blackboard::
	lockall
	msgbox RustboroCity_PokemonSchool_Text_BlackboardListsStatusChanges, MSGBOX_DEFAULT
	goto RustboroCity_PokemonSchool_EventScript_ChooseBlackboardTopic
	end

RustboroCity_PokemonSchool_EventScript_ChooseBlackboardTopic::
	message RustboroCity_PokemonSchool_Text_ReadWhichTopic
	waitmessage
	multichoicegrid 8, 1, MULTI_STATUS_INFO, 3, FALSE
	switch VAR_RESULT
	case 0, RustboroCity_PokemonSchool_EventScript_Poison
	case 1, RustboroCity_PokemonSchool_EventScript_Paralysis
	case 2, RustboroCity_PokemonSchool_EventScript_Sleep
	case 3, RustboroCity_PokemonSchool_EventScript_Burn
	case 4, RustboroCity_PokemonSchool_EventScript_Freeze
	case 5, RustboroCity_PokemonSchool_EventScript_ExitTopicSelect
	case MULTI_B_PRESSED, RustboroCity_PokemonSchool_EventScript_ExitTopicSelect
	end

RustboroCity_PokemonSchool_EventScript_Poison::
	msgbox RustboroCity_PokemonSchool_Text_ExplainPoison, MSGBOX_DEFAULT
	goto RustboroCity_PokemonSchool_EventScript_ChooseBlackboardTopic
	end

RustboroCity_PokemonSchool_EventScript_Paralysis::
	msgbox RustboroCity_PokemonSchool_Text_ExplainParalysis, MSGBOX_DEFAULT
	goto RustboroCity_PokemonSchool_EventScript_ChooseBlackboardTopic
	end

RustboroCity_PokemonSchool_EventScript_Sleep::
	msgbox RustboroCity_PokemonSchool_Text_ExplainSleep, MSGBOX_DEFAULT
	goto RustboroCity_PokemonSchool_EventScript_ChooseBlackboardTopic
	end

RustboroCity_PokemonSchool_EventScript_Burn::
	msgbox RustboroCity_PokemonSchool_Text_ExplainBurn, MSGBOX_DEFAULT
	goto RustboroCity_PokemonSchool_EventScript_ChooseBlackboardTopic
	end

RustboroCity_PokemonSchool_EventScript_Freeze::
	msgbox RustboroCity_PokemonSchool_Text_ExplainFreeze, MSGBOX_DEFAULT
	goto RustboroCity_PokemonSchool_EventScript_ChooseBlackboardTopic
	end

RustboroCity_PokemonSchool_EventScript_ExitTopicSelect::
	releaseall
	end

RustboroCity_PokemonSchool_EventScript_GameboyKid1::
	msgbox RustboroCity_PokemonSchool_Text_TradingRightNow, MSGBOX_NPC
	end

RustboroCity_PokemonSchool_EventScript_GameboyKid2::
	msgbox RustboroCity_PokemonSchool_Text_AlwaysWantedSeedot, MSGBOX_NPC
	end

RustboroCity_PokemonSchool_EventScript_RichBoy::
	msgbox RustboroCity_PokemonSchool_Text_PokemontCantUseManMadeItems, MSGBOX_NPC
	end

RustboroCity_PokemonSchool_EventScript_Lass::
	msgbox RustboroCity_PokemonSchool_Text_ConfusedPokemonAttacksItself, MSGBOX_NPC
	end

RustboroCity_PokemonSchool_EventScript_SchoolKidM::
	msgbox RustboroCity_PokemonSchool_Text_PokemonHealItselfWithBerry, MSGBOX_NPC
	end

RustboroCity_PokemonSchool_EventScript_StudentNotebook::
	msgbox RustboroCity_PokemonSchool_Text_StudentsNotes, MSGBOX_SIGN
	end

RustboroCity_PokemonSchool_Text_BlackboardListsStatusChanges:
	.string "The blackboard lists status changes\n"
	.string "that may affect POKéMON in battle.$"

RustboroCity_PokemonSchool_Text_ReadWhichTopic:
	.string "Which topic do you want to read?$"

RustboroCity_PokemonSchool_Text_ExplainPoison:
	.string "If a POKéMON is poisoned, it will\n"
	.string "steadily lose HP.\p"
	.string "The effects of poison remain after\n"
	.string "a battle.\p"
	.string "A poisoned POKéMON's HP will drop\n"
	.string "while it is traveling.\p"
	.string "Heal a poisoning using an ANTIDOTE.$"

RustboroCity_PokemonSchool_Text_ExplainParalysis:
	.string "If a POKéMON becomes paralyzed,\n"
	.string "its SPEED drops.\p"
	.string "It may also not be able to move while\n"
	.string "it is in battle.\p"
	.string "Paralysis remains after battle.\n"
	.string "Cure it using a PARLYZ HEAL.$"

RustboroCity_PokemonSchool_Text_ExplainSleep:
	.string "If a POKéMON falls asleep, it will be\n"
	.string "unable to attack.\p"
	.string "A POKéMON may wake up on its own,\n"
	.string "but if a battle ends while it is\l"
	.string "sleeping, it will stay asleep.\p"
	.string "Wake it up using an AWAKENING.$"

RustboroCity_PokemonSchool_Text_ExplainBurn:
	.string "A burn reduces ATTACK power, and it\n"
	.string "steadily reduces the victim's HP.\p"
	.string "A burn lingers after battle.\n"
	.string "Cure a burn using a BURN HEAL.$"

RustboroCity_PokemonSchool_Text_ExplainFreeze:
	.string "If a POKéMON is frozen, it becomes\n"
	.string "completely helpless.\p"
	.string "It will remain frozen after battle.\n"
	.string "Thaw it out using an ICE HEAL.$"

RustboroCity_PokemonSchool_Text_TradingRightNow:
	.string "This girl is totally into me, one day I'll\n"
	.string "work up enough courage to ask her out.$"

RustboroCity_PokemonSchool_Text_AlwaysWantedSeedot:
	.string "I can't concentrate with this weirdo\n"
	.string "breathing down my neck everyday.\p"
	.string "Ugh, his breath smells like a Grimer!$"

RustboroCity_PokemonSchool_Text_PokemontCantUseManMadeItems:
	.string "Nobody here wants to see a Dunsparce.\p"
	.string "Where's PROF. THORNE when you need him?$"

RustboroCity_PokemonSchool_Text_ConfusedPokemonAttacksItself:
	.string "You know how some POKéMON moves can\n"
	.string "confuse a POKéMON?\p"
	.string "A confused POKéMON will sometimes\n"
	.string "attack itself without meaning to.\p"
	.string "But once it leaves battle, it will\n"
	.string "return to normal.$"

RustboroCity_PokemonSchool_Text_PokemonHealItselfWithBerry:
	.string "Our other Professor, THORNE, is out\n"
	.string "doing field research.\p"
	.string "He's extremely knowledgeable about\n"
	.string "anything POKéMON related.$"

RustboroCity_PokemonSchool_Text_StudentsNotes:
	.string "It's this student's notebook…\p"
	.string "POKéMON are to be caught using\n"
	.string "POKé BALLS.\p"
	.string "Up to six POKéMON can accompany\n"
	.string "a TRAINER.\p"
	.string "A TRAINER is someone who catches\n"
	.string "POKéMON, raises them, and battles\l"
	.string "with them.\p"
	.string "A TRAINER's mission is to defeat\n"
	.string "the strong TRAINERS who await\l"
	.string "challengers in POKéMON GYMS.\p"
    .string "Is this really college level material?$"

RustboroCity_PokemonSchool_EventScript_NewTeacher::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_EXPERT_BELT, RustboroCity_PokemonSchool_EventScript_NewTeacher_1
	msgbox RustboroCity_PokemonSchool_EventScript_NewTeacher_Text_1
	special ChoosePartyMon
	waitstate
	copyvar VAR_RESULT, VAR_0x8004
	compare VAR_RESULT, PARTY_NOTHING_CHOSEN
	goto_if_eq RustboroCity_PokemonSchool_EventScript_NewTeacher_4
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
	compare VAR_RESULT, SPECIES_DUNSPARCE
	goto_if_ne RustboroCity_PokemonSchool_EventScript_NewTeacher_7
	msgbox RustboroCity_PokemonSchool_EventScript_NewTeacher_Text_4
	giveitem ITEM_EXPERT_BELT
	setflag FLAG_RECEIVED_EXPERT_BELT
	msgbox RustboroCity_PokemonSchool_EventScript_NewTeacher_Text_5
	release
	end

RustboroCity_PokemonSchool_EventScript_NewTeacher_1:
	msgbox RustboroCity_PokemonSchool_EventScript_NewTeacher_Text_0
	release
	end

RustboroCity_PokemonSchool_EventScript_NewTeacher_4:
	msgbox RustboroCity_PokemonSchool_EventScript_NewTeacher_Text_2
	release
	end

RustboroCity_PokemonSchool_EventScript_NewTeacher_7:
	msgbox RustboroCity_PokemonSchool_EventScript_NewTeacher_Text_3
	release
	end


RustboroCity_PokemonSchool_EventScript_Oliver::
	msgbox RustboroCity_PokemonSchool_EventScript_Oliver_Text_0, MSGBOX_NPC
	end


RustboroCity_PokemonSchool_EventScript_NewTeacher_Text_0:
	.string "Thanks for the help, I'm sure that\n"
	.string "Dunsparce wasn't easy to find.$"

RustboroCity_PokemonSchool_EventScript_NewTeacher_Text_1:
	.string "The POKéMON Dunsparce are said to live\n"
	.string "in Dark Cave, but they are very rare.\p"
	.string "I would like to show one to my class, but\n"
	.string "alas, I don't have one.\p"
	.string "Do you have a Dunsparce I can show the\n"
	.string "class?$"

RustboroCity_PokemonSchool_EventScript_NewTeacher_Text_2:
	.string "That's fine, come back when you find a\n"
	.string "Dunsparce.$"

RustboroCity_PokemonSchool_EventScript_NewTeacher_Text_3:
	.string "I'm sorry, but that is not a Dunsparce.$"

RustboroCity_PokemonSchool_EventScript_NewTeacher_Text_4:
	.string "Fantastic! That is indeed a Dunsparce!\p"
	.string "Get a good look class!\p"
	.string "I feel I must reward you for your\n"
	.string "efforts. Please, take this.$"

RustboroCity_PokemonSchool_EventScript_NewTeacher_Text_5:
	.string "Thanks for the help, I'm sure that\n"
	.string "Dunsparce wasn't easy to find.\p"
	.string "I'll be sure to come to you if I need to\n"
	.string "find any more rare POKéMON.$"

RustboroCity_PokemonSchool_EventScript_Oliver_Text_0:
	.string "OLIVER: Oh, hey {PLAYER}!\p"
	.string "I'm glad you were able to calm Ho-oh's\n"
	.string "rage.\p"
	.string "There's no telling how much of Johto\n"
	.string "would be destroyed if it wasn't\l"
	.string "stopped.$"
