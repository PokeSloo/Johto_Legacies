SootopolisCity_House2_MapScripts::
	.byte 0

SootopolisCity_House2_EventScript_ExpertF::
	lock
	faceplayer
	msgbox SootopolisCity_House2_Text_DidYouKnowAboutMtPyreOrbs, MSGBOX_YESNO
	call_if_eq VAR_RESULT, YES, SootopolisCity_House2_EventScript_KnowAboutOrbs
	call_if_eq VAR_RESULT, NO, SootopolisCity_House2_EventScript_DontKnowAboutOrbs
	release
	end

SootopolisCity_House2_EventScript_KnowAboutOrbs::
	msgbox SootopolisCity_House2_Text_YesTwoOrbsSideBySide, MSGBOX_DEFAULT
	return

SootopolisCity_House2_EventScript_DontKnowAboutOrbs::
	msgbox SootopolisCity_House2_Text_OughtToVisitAndSee, MSGBOX_DEFAULT
	return

SootopolisCity_House2_Text_DidYouKnowAboutMtPyreOrbs:
	.string "I was once a pretty good POKéMON\n"
	.string "TRAINER myself, believe it or not.\p"
	.string "At some point, I guess I just lost\n"
	.string "interest.\p"
	.string "Are you still enthusiastic about\n"
	.string "POKéMON?$"

SootopolisCity_House2_Text_YesTwoOrbsSideBySide:
	.string "Wonderful!\p"
	.string "I hope you continue to enjoy training\n"
	.string "POKéMON for many years to come.$"

SootopolisCity_House2_Text_OughtToVisitAndSee:
	.string "Oh, I see.\p"
	.string "Such a shame, you're still so young.$"

