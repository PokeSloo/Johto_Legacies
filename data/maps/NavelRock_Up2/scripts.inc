NavelRock_Up2_MapScripts::
	.byte 0


NavelRock_Up2_EventScript_Guard::
	lock
	msgbox NavelRock_Up2_EventScript_Guard_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq NavelRock_Up2_EventScript_Guard_2
	msgbox NavelRock_Up2_EventScript_Guard_Text_2
	release
	end

NavelRock_Up2_EventScript_Guard_2:
	msgbox NavelRock_Up2_EventScript_Guard_Text_1
	release
	end


NavelRock_Up2_EventScript_Guard_Text_0:
	.string "Care to listen to my story, traveler?$"

NavelRock_Up2_EventScript_Guard_Text_1:
	.string "Oh...\p"
	.string "Oh, I'm sorry...\p"
	.string "I don't actually have a story, most\n"
	.string "people just say no.\p"
	.string "I just act like I have an interesting\n"
	.string "story to tell travelers so they think I\l"
	.string "am more interesting.\p"
	.string "The truth is I am stuck behind this\n"
	.string "counter 24/7, I don't even get to sleep\l"
	.string "anymore.\p"
	.string "I should have listened to my parents\n"
	.string "advice and become a POKéMON\l"
	.string "PROFESSOR, but no, studying is for\l"
	.string "nerds.\p"
	.string "...\p"
	.string "Thanks, I needed a good vent.$"

NavelRock_Up2_EventScript_Guard_Text_2:
	.string "You don't know what you're missing out\n"
	.string "on, it's a fantastic story!$"
