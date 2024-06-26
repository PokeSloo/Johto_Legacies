SootopolisCity_Gym_1F_MapScripts::
	.byte 0

SootopolisCity_Gym_1F_EventScript_Juan::
	trainerbattle_single TRAINER_JUAN_1, SootopolisCity_Gym_1F_Text_JuanIntro, SootopolisCity_Gym_1F_Text_JuanDefeat, SootopolisCity_Gym_1F_EventScript_JuanDefeated, NO_MUSIC
	goto_if_unset FLAG_RECEIVED_TM02, SootopolisCity_Gym_1F_EventScript_GiveWaterPulse2
	msgbox SootopolisCity_Gym_1F_Text_JuanPostBattle, MSGBOX_DEFAULT
	release
	end

SootopolisCity_Gym_1F_EventScript_JuanDefeated::
	message SootopolisCity_Gym_1F_Text_ReceivedRainBadge
	waitmessage
	call Common_EventScript_PlayGymBadgeFanfare
	msgbox SootopolisCity_Gym_1F_Text_ExplainRainBadgeTakeThis, MSGBOX_DEFAULT
	setflag FLAG_DEFEATED_SOOTOPOLIS_GYM
	setflag FLAG_BADGE08_GET
	setvar VAR_0x8008, 8
	call Common_EventScript_SetGymTrainers
	call SootopolisCity_Gym_1F_EventScript_GiveWaterPulse
	closemessage
	release
	end

SootopolisCity_Gym_1F_EventScript_GiveWaterPulse::
	giveitem ITEM_TM02
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_BagIsFull
	msgbox SootopolisCity_Gym_1F_Text_ExplainWaterPulse, MSGBOX_DEFAULT
	setflag FLAG_RECEIVED_TM02
	return

SootopolisCity_Gym_1F_EventScript_GiveWaterPulse2::
	giveitem ITEM_TM02
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
	msgbox SootopolisCity_Gym_1F_Text_ExplainWaterPulse, MSGBOX_DEFAULT
	setflag FLAG_RECEIVED_TM02
	release
	end

SootopolisCity_Gym_1F_EventScript_GymGuide::
	lock
	faceplayer
	goto_if_set FLAG_DEFEATED_SOOTOPOLIS_GYM, SootopolisCity_Gym_1F_EventScript_GymGuidePostVictory
	msgbox SootopolisCity_Gym_1F_Text_GymGuideAdvice, MSGBOX_DEFAULT
	release
	end

SootopolisCity_Gym_1F_EventScript_GymGuidePostVictory::
	msgbox SootopolisCity_Gym_1F_Text_GymGuidePostVictory, MSGBOX_DEFAULT
	release
	end

SootopolisCity_Gym_1F_EventScript_LeftGymStatue::
	lockall
	goto_if_set FLAG_BADGE08_GET, SootopolisCity_Gym_1F_EventScript_GymStatueCertified
	goto SootopolisCity_Gym_1F_EventScript_GymStatue
	end

SootopolisCity_Gym_1F_EventScript_RightGymStatue::
	lockall
	goto_if_set FLAG_BADGE08_GET, SootopolisCity_Gym_1F_EventScript_GymStatueCertified
	goto SootopolisCity_Gym_1F_EventScript_GymStatue
	end

SootopolisCity_Gym_1F_EventScript_GymStatueCertified::
	msgbox SootopolisCity_Gym_1F_Text_GymStatueCertified, MSGBOX_DEFAULT
	releaseall
	end

SootopolisCity_Gym_1F_EventScript_GymStatue::
	msgbox SootopolisCity_Gym_1F_Text_GymStatue, MSGBOX_DEFAULT
	releaseall
	end

SootopolisCity_Gym_1F_Text_GymGuideAdvice:
	.string "Yo! How's it going, CHAMPION-\n"
	.string "bound {PLAYER}?\p"
	.string "This is it! The final gym in Johto!\p"
	.string "The gym leader here, CLAIR, is a master\n"
	.string "of DRAGON-type POKéMON.\p"
	.string "I was going to give you some advice, but\n"
	.string "after watching you stomp all of the\l"
	.string "other gym leaders, I don't think you'll\l"
	.string "need any!\p"
	.string "Well then, go for it!$"

SootopolisCity_Gym_1F_Text_GymGuidePostVictory:
	.string "Well done, {PLAYER}!\p"
	.string "I didn't doubt you for a second!\p"
	.string "You truly have what it takes to become\n"
	.string "a champion!\p"
	.string "Speaking of champion, you look like\n"
	.string "you're ready to challenge the POKéMON\l"
	.string "League!$"

SootopolisCity_Gym_1F_Text_JuanIntro:
	.string "You've done well to make it this far,\n"
	.string "young TRAINER, but I'm afraid your luck\l"
	.string "has just run out!\p"
	.string "I am the Blackthorn City Gym Leader,\n"
	.string "and master of DRAGON-type POKéMON,\l"
	.string "CLAIR...\p"
	.string "...\p"
	.string "That red hair and calm demeanor...\p"
	.string "You must be {PLAYER}.\p"
	.string "Your father told me about your recent\n"
	.string "exploits with Team Phoenix.\p"
	.string "I trained your father years ago.\n"
	.string "Believe it or not, his personality was\l"
	.string "more akin to your brother, SHANE, in\l"
	.string "those days.\p"
	.string "Always rude, and getting into trouble.\p"
	.string "But enough about the past.\p"
	.string "You're here for a battle, and I\n"
	.string "shouldn't keep you waiting!\p"
	.string "And don't expect me to go easy on you\n"
	.string "just because you're SILVER'S kid.\p"
	.string "I will show you why I'm known as the\n"
	.string "world's best Dragon Master!$"

SootopolisCity_Gym_1F_Text_JuanDefeat:
	.string "...\p"
	.string "Not surprising from one of SILVER'S\n"
	.string "children, it seems the skills I taught\l"
	.string "him have passed down to you.\p"
	.string "You'll definitely give your father a run\n"
	.string "for his money in the POKéMON League.\p"
	.string "Please, take this badge as a symbol of\n"
	.string "your victory here today!$"

SootopolisCity_Gym_1F_Text_ReceivedRainBadge:
	.string "{PLAYER} received the RISING BADGE\n"
	.string "from CLAIR.$"

SootopolisCity_Gym_1F_Text_ExplainRainBadgeTakeThis:
	.string "With that badge, all POKéMON will obey\n"
	.string "you without question.\p"
	.string "It will also allow you to use the HM move\n"
	.string "Waterfall outside of battle.\p"
	.string "And please, take this as well.\p"
	.string "Consider it a gift from a family friend.$"

SootopolisCity_Gym_1F_Text_ExplainWaterPulse:
	.string "That TM contains the move Dragon Claw.\p"
	.string "It's a powerful slashing DRAGON-type\n"
	.string "move.\p"
	.string "May it serve you well.\p"
	.string "...\p"
	.string "By the way, I highly recommend you take\n"
	.string "the Dragon Master Challenge in the\l"
	.string "Dragon's Den behind the gym.\p"
	.string "I'll tell them to grant you access.\p"
	.string "I'm curious of how you will fare...$"

SootopolisCity_Gym_1F_Text_JuanPostBattle:
	.string "You know, I don't normally give badges\n"
	.string "to just anyone that beats me.\p"
	.string "I've been known to be picky when it\n"
	.string "comes to handing out badges.\p"
	.string "But you're different somehow.\p"
	.string "Although we've never met, I feel as\n"
	.string "though the skills I taught your father\l"
	.string "have been passed down to you.\p"
	.string "It's a silly thought, I know.$"

SootopolisCity_Gym_1F_Text_GymStatue:
	.string "BLACKTHORN CITY POKéMON GYM\p"
	.string "CLAIR'S CERTIFIED TRAINERS:\n"
	.string "SHANE$"

SootopolisCity_Gym_1F_Text_GymStatueCertified:
	.string "BLACKTHORN CITY POKéMON GYM\p"
	.string "CLAIR'S CERTIFIED TRAINERS:\n"
	.string "SHANE, {PLAYER}$"

SootopolisCity_Gym_1F_EventScript_ClairRound2::
	trainerbattle_double TRAINER_JUAN_2, SootopolisCity_Gym_1F_Text_ClairRematchIntro, SootopolisCity_Gym_1F_Text_ClairRematchDefeat, SootopolisCity_Gym_1F_Text_ClairRematchNotEnoughMons, SootopolisCity_Gym_1F_EventScript_ClairRematchDefeated, NO_MUSIC
	msgbox SootopolisCity_Gym_1F_EventScript_ClairRound2_Text_0
	compare VAR_GYM_LEADERS_ROUND2_COUNT, 8
	goto_if_eq SootopolisCity_Gym_1F_EventScript_ClairRound2_1
	release
	end

SootopolisCity_Gym_1F_EventScript_ClairRound2_1:
	msgbox SootopolisCity_Gym_1F_EventScript_ClairRound2_Text_1
	release
	end


SootopolisCity_Gym_1F_EventScript_ClairRematchDefeated::
	msgbox SootopolisCity_Gym_1F_EventScript_ClairRematchDefeated_Text_0
	addvar VAR_GYM_LEADERS_ROUND2_COUNT, 1
	compare VAR_GYM_LEADERS_ROUND2_COUNT, 8
	goto_if_eq SootopolisCity_Gym_1F_EventScript_ClairRematchDefeated_1
	release
	end

SootopolisCity_Gym_1F_EventScript_ClairRematchDefeated_1:
	msgbox SootopolisCity_Gym_1F_EventScript_ClairRematchDefeated_Text_1
	setflag FLAG_DEFEATED_ALL_GYM_LEADERS_2ND_TIME
	release
	end


SootopolisCity_Gym_1F_EventScript_ClairRound2_Text_0:
	.string "How has your brother, SHANE, been?\p"
	.string "Still a little brat?\p"
	.string "Perhaps I should straighten him out\n"
	.string "like I did for your father.$"

SootopolisCity_Gym_1F_EventScript_ClairRound2_Text_1:
	.string "By the way, I've heard rumors that the\n"
	.string "POKéMON League has found a new\l"
	.string "Champion.\p"
	.string "Go, and show them the might of a true\n"
	.string "POKéMON Master!$"

SootopolisCity_Gym_1F_EventScript_ClairRematchDefeated_Text_0:
	.string "I will never doubt your skill again.\p"
	.string "{PLAYER}, you truly are a POKéMON\n"
	.string "Master!$"

SootopolisCity_Gym_1F_EventScript_ClairRematchDefeated_Text_1:
	.string "By the way, I've heard rumors that the\n"
	.string "POKéMON League has found a new\l"
	.string "Champion.\p"
	.string "Go, and don't hold anything back!$"

SootopolisCity_Gym_1F_Text_ClairRematchIntro::
	.string "Good to see you {PLAYER}.\p"
	.string "Although, I'm ashamed to say that I was\n"
	.string "a little disappointed to hear that you\l"
	.string "bested your father in the POKéMON\l"
	.string "League.\p"
	.string "I know you're his kid, but I feel as\n"
	.string "though I have failed him as a mentor.\p"
	.string "I do know your strength firsthand\n"
	.string "though, so that does lessen the blow.\p"
	.string "But, I would like another battle with\n"
	.string "you to be sure.\p"
	.string "Please, allow me to redeem myself as the\n"
	.string "world's best Dragon Master!$"

SootopolisCity_Gym_1F_Text_ClairRematchDefeat::
	.string "This solidifies the fact that you didn't\n"
	.string "win our first battle just by luck.\p"
	.string "Thank you, {PLAYER}, for accepting\n"
	.string "the selfish request of a stubborn\l"
	.string "woman.$"

SootopolisCity_Gym_1F_Text_ClairRematchNotEnoughMons::
	.string "...\p"
	.string "Unfortunately, I would like this to be a\n"
	.string "double battle.\p"
	.string "Please come back when you have more\n"
	.string "than one POKéMON with you.$"
