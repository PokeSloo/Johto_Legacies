MossdeepCity_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, MossdeepCity_OnTransition
	.byte 0

MossdeepCity_OnTransition:
	setflag FLAG_VISITED_MOSSDEEP_CITY
	end

MossdeepCity_EventScript_PokefanF::
	msgbox MossdeepCity_Text_SpaceCenterReceivedLetter, MSGBOX_NPC
	end

MossdeepCity_EventScript_Sailor::
	lock
	faceplayer
	goto_if_set FLAG_DEFEATED_THORNE_ROUJEM, MossdeepCity_EventScript_SailorMagmaGone
	msgbox MossdeepCity_Text_MossdeepTargetedByMagma, MSGBOX_DEFAULT
	release
	end

MossdeepCity_EventScript_SailorMagmaGone::
	msgbox MossdeepCity_Text_FeelReliefOnLand, MSGBOX_DEFAULT
	release
	end

MossdeepCity_EventScript_NinjaBoy::
	msgbox MossdeepCity_Text_WailmerWatching, MSGBOX_NPC
	end

MossdeepCity_EventScript_ExpertM::
	msgbox MossdeepCity_Text_LifeNeedsSeaToLive, MSGBOX_NPC
	end

MossdeepCity_EventScript_Girl::
	msgbox MossdeepCity_Text_NiceIfWorldCoveredByFlowers, MSGBOX_NPC
	end

MossdeepCity_EventScript_Woman::
	msgbox MossdeepCity_Text_SpecialSpaceCenterRock, MSGBOX_NPC
	end

MossdeepCity_EventScript_GymSign::
	msgbox MossdeepCity_Text_GymSign, MSGBOX_SIGN
	end

MossdeepCity_EventScript_CitySign::
	msgbox MossdeepCity_Text_CitySign, MSGBOX_SIGN
	end

MossdeepCity_EventScript_SpaceCenterSign::
	msgbox MossdeepCity_Text_SpaceCenterSign, MSGBOX_SIGN
	end

MossdeepCity_EventScript_Man::
	msgbox MossdeepCity_Text_SurfExhilarating, MSGBOX_NPC
	end

MossdeepCity_EventScript_KingsRockBoy::
	msgbox MossdeepCity_Text_WantKingsRockStevenGaveMe, MSGBOX_NPC
	end

MossdeepCity_EventScript_BlackBelt::
	msgbox MossdeepCity_Text_SootopolisNewGymLeader, MSGBOX_NPC
	end

MossdeepCity_Text_WantKingsRockStevenGaveMe:
	.string "You're from Johto?\p"
	.string "What's that like?\p"
	.string "...\p"
	.string "...\p"
	.string "Huh, that sounds like fun.\p"
	.string "I should really get out and explore more\n"
	.string "often.$"

MossdeepCity_Text_WailmerWatching:
	.string "I really wanted to go to the festival in\n"
	.string "Lazulan City, but my parents won't let\l"
	.string "me.\p"
	.string "This is so unfair!$"

MossdeepCity_Text_SpaceCenterReceivedLetter:
	.string "They've been really overprotective of\n"
	.string "the shipyard lately.\p"
	.string "I wonder what changed.$"

MossdeepCity_Text_MossdeepTargetedByMagma:
	.string "I just can't stand working for these\n"
	.string "new managers.\p"
	.string "There are so many hooded weirdos\n"
	.string "coming and going, and nobody will tell us\l"
	.string "workers what's going on.$"

MossdeepCity_Text_FeelReliefOnLand:
	.string "Hey, you got rid of those jerks!\p"
	.string "Who knew the new managers were part of\n"
	.string "some weird gang.$"

MossdeepCity_Text_NiceIfWorldCoveredByFlowers:
	.string "Ah, to gaze upon the sparkling sea.\p"
	.string "It's like a medicine for the soul,\n"
	.string "wouldn't you agree?$"

MossdeepCity_Text_LifeNeedsSeaToLive:
	.string "This used to be a great place to work,\n"
	.string "that is, until the new management\l"
	.string "showed up.$"

MossdeepCity_Text_SurfExhilarating:
	.string "Ugh...\p"
	.string "This job was easier when we didn't have\n"
	.string "so many shipping containers coming\l"
	.string "through.\p"
	.string "The higher ups won't even tell me what's\n"
	.string "in them.$"

MossdeepCity_Text_SpecialSpaceCenterRock:
	.string "Have you heard of a TRAINER named RED?\p"
	.string "Nobody really knows anything about him\n"
	.string "except that he is exceptionally\l"
	.string "powerful.\p"
	.string "He must spend all of his time training.$"

MossdeepCity_Text_GymSign:
	.string "ROUJEM SHIPYARD$"

MossdeepCity_Text_CitySign:
	.string "ROUJEM CITY\n"
	.string "“Shipping hub linking Johto to the world.”$"

MossdeepCity_Text_SpaceCenterSign:
	.string "NO TRESPASSING!$"

MossdeepCity_Text_SootopolisNewGymLeader:
	.string "My boyfriend likes to collect\n"
	.string "meteorites.\p"
	.string "I don't know what they're good for\n"
	.string "though, they just look like normal rocks\l"
	.string "to me.$"

MossdeepCity_EventScript_PhoenixGrunt::
	lock
	msgbox MossdeepCity_EventScript_PhoenixGrunt_Text_0
	waitmessage
	closemessage
	playse SE_PIN
	applymovement 10, MossdeepCity_Movement_ExclamationRight
	waitmovement 0
	waitse
	delay 30
	msgbox MossdeepCity_EventScript_PhoenixGrunt_Text_1
	waitmessage
	closemessage
	applymovement 10, SootopolisCity_Movement_StepDown
	waitmovement 0
	release
	end


MossdeepCity_Movement_ExclamationRight:
	emote_exclamation_mark
	walk_in_place_right
	step_end

MossdeepCity_EventScript_Silver::
	lock
	faceplayer
	msgbox MossdeepCity_EventScript_Silver_Text_0
	waitmessage
	applymovement 13, SootopolisCity_Movement_StepLeft
	applymovement 14, SootopolisCity_Movement_StepUp
	waitmovement 0
	msgbox MossdeepCity_EventScript_Silver_Text_1
	waitmessage
	applymovement 15, SootopolisCity_Movement_StepRight
	waitmovement 0
	msgbox MossdeepCity_EventScript_Silver_Text_2
	waitmessage
	closemessage
	applymovement 15, SootopolisCity_Movement_WalkUpOneInvis
	waitmovement 0
	playse SE_EXIT
	waitse
	removeobject 15
	faceplayer
	msgbox MossdeepCity_EventScript_Silver_Text_3
	waitmessage
	closemessage
	applymovement 13, MossdeepCity_Movement_WalkLeft
	waitmovement 0
	applymovement 13, SootopolisCity_Movement_WalkUpOneInvis
	applymovement 14, SootopolisCity_Movement_UpTwoInvis
	waitmovement 0
	playse SE_EXIT
	waitse
	removeobject 13
	removeobject 14
	setflag FLAG_HIDE_SILVER_OUTSIDE_ROUJEM
	release
	end


MossdeepCity_Movement_WalkLeft:
	walk_left
	step_end

MossdeepCity_EventScript_PhoenixGrunt_Text_0:
	.string "Man, what's taking them so long?\p"
	.string "Mt. Tempest isn't that far away...$"

MossdeepCity_EventScript_PhoenixGrunt_Text_1:
	.string "Hey!\p"
	.string "Hasn't anyone ever told you it's rude to\n"
	.string "eavesdrop?\p"
	.string "Get lost, kid!$"

MossdeepCity_EventScript_Silver_Text_0:
	.string "DAD: {PLAYER}, good timing.\p"
	.string "SHANE told me you two battled some\n"
	.string "Team Phoenix grunts up on Mt. Tempest,\l"
	.string "so I did some exploring, and found this\l"
	.string "shady fellow.$"

MossdeepCity_EventScript_Silver_Text_1:
	.string "Now, where were we?\p"
	.string "That's right, you were going to tell me\n"
	.string "why you're hanging around this\l"
	.string "shipping port.$"

MossdeepCity_EventScript_Silver_Text_2:
	.string "GRUNT: I'm not telling you two anything,\n"
	.string "now get lost!$"

MossdeepCity_EventScript_Silver_Text_3:
	.string "DAD: Come on, {PLAYER}, this has to be\n"
	.string "one of their bases.\p"
	.string "Let's check it out.$"
