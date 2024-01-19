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
	.string "Welcome, TRAINER, allow me to introduce\n"
	.string "myself.\p"
	.string "I am the Blackthorn City Gym Leader,\n"
	.string "CLAIR...\p"
	.string "...\p"
	.string "That red hair and calm demeanor...\p"
	.string "You must be {PLAYER}.\p"
	.string "I used to train your father, and we still\n"
	.string "keep in touch.\p"
	.string "He told me all about your recent\n"
	.string "exploits with Team Phoenix.\p"
	.string "Believe it or not, your father was a lot\n"
	.string "like your brother, SHANE, when he was\l"
	.string "younger.\p"
	.string "Always rude, and getting into trouble.\p"
	.string "But enough about the past.\p"
	.string "You're here for a battle, and I\n"
	.string "shouldn't keep you waiting!\p"
	.string "Now, I will show you what it means to be\n"
	.string "the world's best Dragon Master!$"

SootopolisCity_Gym_1F_Text_JuanDefeat:
	.string "Wonderful! Your technique and skill are\n"
	.string "in a class of their own!\p"
	.string "Not surprising from one of SILVER'S\n"
	.string "children.\p"
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
	.string "Consider it a gift.$"

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
	.string "But since I trained you father, I feel\n"
	.string "as though some of my skills have\l"
	.string "somehow passed down to you through\l"
	.string "him.\p"
	.string "It's a silly thought, I know.$"

SootopolisCity_Gym_1F_Text_GymStatue:
	.string "BLACKTHORN CITY POKéMON GYM\p"
	.string "CLAIR'S CERTIFIED TRAINERS:\n"
	.string "SHANE$"

SootopolisCity_Gym_1F_Text_GymStatueCertified:
	.string "BLACKTHORN CITY POKéMON GYM\p"
	.string "CLAIR'S CERTIFIED TRAINERS:\n"
	.string "SHANE, {PLAYER}$"

