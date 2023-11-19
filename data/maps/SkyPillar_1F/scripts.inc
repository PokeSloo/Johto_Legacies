SkyPillar_1F_MapScripts::
	.byte 0


SkyPillar_1F_EventScript_Child::
	msgbox SkyPillar_1F_EventScript_Child_Text_0, MSGBOX_NPC
	end


SkyPillar_1F_EventScript_Tourist::
	msgbox SkyPillar_1F_EventScript_Tourist_Text_0, MSGBOX_NPC
	end


SkyPillar_1F_EventScript_Boy::
	msgbox SkyPillar_1F_EventScript_Boy_Text_0, MSGBOX_NPC
	end


SkyPillar_1F_EventScript_Triathlete::
	msgbox SkyPillar_1F_EventScript_Triathlete_Text_0, MSGBOX_NPC
	end


SkyPillar_1F_EventScript_Guitarist::
	lock
	faceplayer
	goto_if_unset FLAG_TALKED_TO_CHARLIE, SkyPillar_1F_EventScript_Guitarist_1
	msgbox SkyPillar_1F_EventScript_Guitarist_Text_1
	trainerbattle_no_intro TRAINER_GEORGE, SkyPillar_1F_Text_DefeatedGeorge
	msgbox SkyPillar_1F_EventScript_Guitarist_Text_2
	waitmessage
	closemessage
	fadescreen FADE_TO_BLACK
	removeobject 4
	clearflag FLAG_HIDE_OLIVINE_GYM_TRAINER_3
	setflag FLAG_HIDE_GUITARIST_LIGHTHOUSE
	fadescreen FADE_FROM_BLACK
	release
	end

SkyPillar_1F_EventScript_Guitarist_1:
	msgbox SkyPillar_1F_EventScript_Guitarist_Text_0
	release
	end


SkyPillar_1F_EventScript_Child_Text_0:
	.string "Lighthouses are so fun!\p"
	.string "You can see really far from the top!$"

SkyPillar_1F_EventScript_Tourist_Text_0:
	.string "I can tell this guy is a local, but he\n"
	.string "won't give me a tour of the lighthouse.\p"
	.string "It's really the least he can do to thank\n"
	.string "me, since I'm here spending my money in\l"
	.string "his town.$"

SkyPillar_1F_EventScript_Boy_Text_0:
	.string "Ugh, this man won't leave me alone.\p"
	.string "I'm just trying to enjoy my lunch in\n"
	.string "peace.$"

SkyPillar_1F_EventScript_Triathlete_Text_0:
	.string "Running up and down stairs can be a\n"
	.string "pretty intense workout, it's one of my\l"
	.string "favorite training methods.$"

SkyPillar_1F_EventScript_Guitarist_Text_0:
	.string "I came here to relax before our concert\n"
	.string "tomorrow, but it's way too crowded in\l"
	.string "here.$"

SkyPillar_1F_EventScript_Guitarist_Text_1:
	.string "I came here to relax before our concert\n"
	.string "tomorrow, but all the people in here are\l"
	.string "just amping me up!$"

SkyPillar_1F_EventScript_Guitarist_Text_2:
	.string "Believe it or not, battling calms my\n"
	.string "nerves.\p"
	.string "...\p"
	.string "What's that? CHARLIE told you to look\n"
	.string "for me?\p"
	.string "The concert is tonight!?\p"
	.string "Crap, I could have sworn it was\n"
	.string "tomorrow!\p"
	.string "I'd better get there now!$"

SkyPillar_1F_Text_DefeatedGeorge::
	.string "Alright, that battle cooled me off a bit.$"
