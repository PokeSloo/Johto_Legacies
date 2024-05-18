SootopolisCity_House2_MapScripts::
	.byte 0

SootopolisCity_House2_EventScript_EffortRibbonGentleman::
	lock
	faceplayer
	bufferleadmonspeciesname STR_VAR_1
	msgbox SootopolisCity_House2_Text_OhYourPokemon, MSGBOX_DEFAULT
	specialvar VAR_RESULT, LeadMonHasEffortRibbon
	call_if_eq VAR_RESULT, TRUE, SootopolisCity_House2_EventScript_MonHasEffortRibbon
	specialvar VAR_RESULT, Special_AreLeadMonEVsMaxedOut
	call_if_eq VAR_RESULT, FALSE, SootopolisCity_House2_EventScript_MonEVsNotMaxed
	msgbox SootopolisCity_House2_Text_PleaseGiveItThisEffortRibbon, MSGBOX_DEFAULT
	playfanfare MUS_OBTAIN_ITEM
	message SootopolisCity_House2_Text_ReceivedEffortRibbon
	waitfanfare
	msgbox SootopolisCity_House2_Text_PutEffortRibbonOnMon, MSGBOX_DEFAULT
	special GiveLeadMonEffortRibbon
	release
	end

SootopolisCity_House2_EventScript_MonEVsNotMaxed::
	msgbox SootopolisCity_House2_Text_GoForItLittleHarder, MSGBOX_DEFAULT
	release
	end

SootopolisCity_House2_EventScript_MonHasEffortRibbon::
	msgbox SootopolisCity_House2_Text_EffortRibbonLooksGoodOnIt, MSGBOX_DEFAULT
	release
	end

SootopolisCity_House2_Text_OhYourPokemon:
	.string "Oh?\n"
	.string "Your {STR_VAR_1}…$"

SootopolisCity_House2_Text_PleaseGiveItThisEffortRibbon:
	.string "What a fantastic specimen!\p"
	.string "I can tell you trained it well.\p"
	.string "As a reward for its effort, I would like\n"
	.string "to give it this Effort Ribbon.$"

SootopolisCity_House2_Text_ReceivedEffortRibbon:
	.string "{PLAYER} received the Effort Ribbon.$"

SootopolisCity_House2_Text_PutEffortRibbonOnMon:
	.string "{PLAYER} put the Effort Ribbon\n"
	.string "on {STR_VAR_1}.$"

SootopolisCity_House2_Text_GoForItLittleHarder:
	.string "It still has some room to grow.\p"
	.string "Keep up the training.\p"
	.string "If you do, I'll give your POKéMON a\n"
	.string "reward for its effort.$"

SootopolisCity_House2_Text_EffortRibbonLooksGoodOnIt:
	.string "Oh! Your {STR_VAR_1}, that Effort\n"
	.string "Ribbon looks good on it!$"

