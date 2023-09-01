OldaleTown_House1_MapScripts::
	.byte 0


@ NPC that rates pokemon based on their IVs
OldaleTown_House1_EventScript_Breeder::
	lock
	faceplayer
	call_if_unset FLAG_MET_BATTLE_FRONTIER_BREEDER, OldaleTown_House1_EventScript_BreederIntro
	call_if_set FLAG_MET_BATTLE_FRONTIER_BREEDER, OldaleTown_House1_EventScript_AlreadyMetBreeder
	setflag FLAG_MET_BATTLE_FRONTIER_BREEDER
	goto OldaleTown_House1_EventScript_ChooseMonToShowBreeder
	end

OldaleTown_House1_EventScript_ChooseMonToShowBreeder::
	special ChoosePartyMon
	waitstate
	goto_if_ne VAR_0x8004, PARTY_NOTHING_CHOSEN, OldaleTown_House1_EventScript_ShowMonToBreeder
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, OldaleTown_House1_EventScript_CancelMonSelect
	end

OldaleTown_House1_EventScript_BreederIntro::
	msgbox OldaleTown_House1_Text_PokemonBreederIntro, MSGBOX_DEFAULT
	return

OldaleTown_House1_EventScript_AlreadyMetBreeder::
	msgbox OldaleTown_House1_Text_LetsLookAtYourPokemon, MSGBOX_DEFAULT
	return

@ BufferVarsForIVRater buffers the following values
@ VAR_0x8005: Sum of the mons IVs
@ VAR_0x8006: Stat id of highest IV stat
@ VAR_0x8007: IV of the highest IV stat
OldaleTown_House1_EventScript_ShowMonToBreeder::
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
	goto_if_eq VAR_RESULT, SPECIES_EGG, OldaleTown_House1_EventScript_ShowEggToBreeder
	special BufferVarsForIVRater
	goto_if_le VAR_0x8005, 90, OldaleTown_House1_EventScript_AverageTotalIVs       @ Average of 15
	goto_if_le VAR_0x8005, 120, OldaleTown_House1_EventScript_AboveAverageTotalIVs @ Average of 20
	goto_if_le VAR_0x8005, 150, OldaleTown_House1_EventScript_HighTotalIVs         @ Average of 25
	goto_if_ge VAR_0x8005, 151, OldaleTown_House1_EventScript_VeryHighTotalIVs     @ Average of > 25
	end

OldaleTown_House1_EventScript_ShowEggToBreeder::
	msgbox OldaleTown_House1_Text_EvenICantTell, MSGBOX_DEFAULT
	goto OldaleTown_House1_EventScript_ChooseMonToShowBreeder
	end

@ Comment on the highest IV stat
OldaleTown_House1_EventScript_HighestIVStat::
	goto_if_eq VAR_0x8006, STAT_HP, OldaleTown_House1_EventScript_HighestIVHP
	goto_if_eq VAR_0x8006, STAT_ATK, OldaleTown_House1_EventScript_HighestIVAtk
	goto_if_eq VAR_0x8006, STAT_DEF, OldaleTown_House1_EventScript_HighestIVDef
	goto_if_eq VAR_0x8006, STAT_SPEED, OldaleTown_House1_EventScript_HighestIVSpeed
	goto_if_eq VAR_0x8006, STAT_SPATK, OldaleTown_House1_EventScript_HighestIVSpAtk
	goto_if_eq VAR_0x8006, STAT_SPDEF, OldaleTown_House1_EventScript_HighestIVSpDef
	end

@ Comment on the highest IV value
OldaleTown_House1_EventScript_HighestIVValue::
	goto_if_le VAR_0x8007, 15, OldaleTown_House1_EventScript_HighestIVLow
	goto_if_le VAR_0x8007, 25, OldaleTown_House1_EventScript_HighestIVMid
	goto_if_le VAR_0x8007, 30, OldaleTown_House1_EventScript_HighestIVHigh
	goto_if_ge VAR_0x8007, 31, OldaleTown_House1_EventScript_HighestIVMax
	end

OldaleTown_House1_EventScript_EndBreederComments::
	release
	end

OldaleTown_House1_EventScript_AverageTotalIVs::
	msgbox OldaleTown_House1_Text_AverageAbility, MSGBOX_DEFAULT
	goto OldaleTown_House1_EventScript_HighestIVStat
	end

OldaleTown_House1_EventScript_AboveAverageTotalIVs::
	msgbox OldaleTown_House1_Text_BetterThanAverageAbility, MSGBOX_DEFAULT
	goto OldaleTown_House1_EventScript_HighestIVStat
	end

OldaleTown_House1_EventScript_HighTotalIVs::
	msgbox OldaleTown_House1_Text_ImpressiveAbility, MSGBOX_DEFAULT
	goto OldaleTown_House1_EventScript_HighestIVStat
	end

OldaleTown_House1_EventScript_VeryHighTotalIVs::
	msgbox OldaleTown_House1_Text_OutstandingAbility, MSGBOX_DEFAULT
	goto OldaleTown_House1_EventScript_HighestIVStat
	end

OldaleTown_House1_EventScript_HighestIVHP::
	msgbox OldaleTown_House1_Text_BestAspectHP, MSGBOX_DEFAULT
	goto OldaleTown_House1_EventScript_HighestIVValue
	end

OldaleTown_House1_EventScript_HighestIVAtk::
	msgbox OldaleTown_House1_Text_BestAspectAtk, MSGBOX_DEFAULT
	goto OldaleTown_House1_EventScript_HighestIVValue
	end

OldaleTown_House1_EventScript_HighestIVDef::
	msgbox OldaleTown_House1_Text_BestAspectDef, MSGBOX_DEFAULT
	goto OldaleTown_House1_EventScript_HighestIVValue
	end

OldaleTown_House1_EventScript_HighestIVSpeed::
	msgbox OldaleTown_House1_Text_BestAspectSpeed, MSGBOX_DEFAULT
	goto OldaleTown_House1_EventScript_HighestIVValue
	end

OldaleTown_House1_EventScript_HighestIVSpAtk::
	msgbox OldaleTown_House1_Text_BestAspectSpAtk, MSGBOX_DEFAULT
	goto OldaleTown_House1_EventScript_HighestIVValue
	end

OldaleTown_House1_EventScript_HighestIVSpDef::
	msgbox OldaleTown_House1_Text_BestAspectSpDef, MSGBOX_DEFAULT
	goto OldaleTown_House1_EventScript_HighestIVValue
	end

OldaleTown_House1_EventScript_HighestIVLow::
	msgbox OldaleTown_House1_Text_StatRelativelyGood, MSGBOX_DEFAULT
	goto OldaleTown_House1_EventScript_EndBreederComments
	end

OldaleTown_House1_EventScript_HighestIVMid::
	msgbox OldaleTown_House1_Text_StatImpressive, MSGBOX_DEFAULT
	goto OldaleTown_House1_EventScript_EndBreederComments
	end

OldaleTown_House1_EventScript_HighestIVHigh::
	msgbox OldaleTown_House1_Text_StatOutstanding, MSGBOX_DEFAULT
	goto OldaleTown_House1_EventScript_EndBreederComments
	end

OldaleTown_House1_EventScript_HighestIVMax::
	msgbox OldaleTown_House1_Text_StatFlawless, MSGBOX_DEFAULT
	goto OldaleTown_House1_EventScript_EndBreederComments
	end

OldaleTown_House1_EventScript_CancelMonSelect::
	msgbox OldaleTown_House1_Text_NoTimeForMyAdvice, MSGBOX_DEFAULT
	release
	end

OldaleTown_House1_Text_PokemonBreederIntro:
	.string "Hello {PLAYER}, I see you've been\n"
	.string "given a POKéMON from PROF. ELM.\p"
	.string "You know, I have a sort of sixth sense\n"
	.string "which allows me to determine the\l"
	.string "natural talent of POKéMON.\p"
	.string "So then, would you like to know about\n"
	.string "your POKéMON's hidden potential?\p"
	.string "Let's have a look!$"

OldaleTown_House1_Text_AverageAbility:
	.string "…Hmm…\p"
	.string "This one, overall, I would describe\n"
	.string "as being of average ability.$"

OldaleTown_House1_Text_BetterThanAverageAbility:
	.string "…Hmm…\p"
	.string "This one, overall, I would describe as\n"
	.string "having better-than-average ability.$"

OldaleTown_House1_Text_ImpressiveAbility:
	.string "…Hmm…\p"
	.string "This one, overall, I would say is\n"
	.string "quite impressive in ability!$"

OldaleTown_House1_Text_OutstandingAbility:
	.string "…Hmm…\p"
	.string "This one, overall, I would say is\n"
	.string "wonderfully outstanding in ability!$"

OldaleTown_House1_Text_BestAspectHP:
	.string "Although, the best aspect of it,\n"
	.string "I would say, is its HP…$"

OldaleTown_House1_Text_BestAspectAtk:
	.string "Although, the best aspect of it,\n"
	.string "I would say, is its ATTACK…$"

OldaleTown_House1_Text_BestAspectDef:
	.string "Although, the best aspect of it,\n"
	.string "I would say, is its DEFENSE…$"

OldaleTown_House1_Text_BestAspectSpAtk:
	.string "Although, the best aspect of it,\n"
	.string "I would say, is its SPECIAL ATTACK…$"

OldaleTown_House1_Text_BestAspectSpDef:
	.string "Although, the best aspect of it,\n"
	.string "I would say, is its SPECIAL DEFENSE…$"

OldaleTown_House1_Text_BestAspectSpeed:
	.string "Although, the best aspect of it,\n"
	.string "I would say, is its SPEED…$"

OldaleTown_House1_Text_StatRelativelyGood:
	.string "That stat is relatively good.\n"
	.string "That's how I would describe it, anyway.$"

OldaleTown_House1_Text_StatImpressive:
	.string "That stat is quite impressive.\n"
	.string "That's how I would describe it, anyway.$"

OldaleTown_House1_Text_StatOutstanding:
	.string "That stat is outstanding!\n"
	.string "That's how I would describe it, anyway.$"

OldaleTown_House1_Text_StatFlawless:
	.string "It's flawless! A thing of perfection!\n"
	.string "That's how I would describe it, anyway.$"

OldaleTown_House1_Text_NoTimeForMyAdvice:
	.string "Well, don't hesitate to come back and\n"
	.string "visit when you are curious.$"

OldaleTown_House1_Text_LetsLookAtYourPokemon:
	.string "{PLAYER}, would you like to know about\n"
	.string "your POKéMON's hidden potential?\p"
	.string "Let's have a look!$"

OldaleTown_House1_Text_EvenICantTell:
	.string "I'm sorry, but even with my sixth sense,\n"
	.string "I can't determine much from an egg.\p"
	.string "Please, show me a hatched POKéMON.$"
