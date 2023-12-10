MossdeepCity_Gym_MapScripts::
	.byte 0


MossdeepCity_Gym_EventScript_Winter::
	trainerbattle_single TRAINER_TATE_AND_LIZA_1, MossdeepCity_Gym_Text_WinterIntro, MossdeepCity_Gym_Text_WinterDefeat, MossdeepCity_Gym_EventScript_WinterDefeated, NO_MUSIC
	msgbox MossdeepCity_Gym_EventScript_Winter_Text_0
	release
	end


MossdeepCity_Gym_EventScript_WinterDefeated::
	msgbox MossdeepCity_Gym_EventScript_WinterDefeated_Text_0
	waitmessage
	call Common_EventScript_PlayGymBadgeFanfare
	msgbox MossdeepCity_Gym_EventScript_WinterDefeated_Text_1
	setflag FLAG_DEFEATED_MOSSDEEP_GYM
	setflag FLAG_BADGE07_GET
	clearflag FLAG_HIDE_SHANE_ROUTE_43
	setvar VAR_0x8008, 7
	call Common_EventScript_SetGymTrainers
	giveitem ITEM_TM13
	msgbox MossdeepCity_Gym_EventScript_WinterDefeated_Text_2
	giveitem ITEM_LIFT_KEY
	msgbox MossdeepCity_Gym_EventScript_WinterDefeated_Text_3
	release
	end


MossdeepCity_Gym_EventScript_Preston::
	trainerbattle_single TRAINER_PRESTON, MossdeepCity_Gym_Text_PrestonIntro, MossdeepCity_Gym_Text_PrestonDefeat
	msgbox MossdeepCity_Gym_Text_PrestonPostBattle, MSGBOX_AUTOCLOSE
	end

MossdeepCity_Gym_EventScript_Virgil::
	trainerbattle_single TRAINER_VIRGIL, MossdeepCity_Gym_Text_VirgilIntro, MossdeepCity_Gym_Text_VirgilDefeat
	msgbox MossdeepCity_Gym_Text_VirgilPostBattle, MSGBOX_AUTOCLOSE
	end

MossdeepCity_Gym_EventScript_Blake::
	trainerbattle_single TRAINER_BLAKE, MossdeepCity_Gym_Text_BlakeIntro, MossdeepCity_Gym_Text_BlakeDefeat
	msgbox MossdeepCity_Gym_Text_BlakePostBattle, MSGBOX_AUTOCLOSE
	end

MossdeepCity_Gym_EventScript_Hannah::
	trainerbattle_single TRAINER_HANNAH, MossdeepCity_Gym_Text_HannahIntro, MossdeepCity_Gym_Text_HannahDefeat
	msgbox MossdeepCity_Gym_Text_HannahPostBattle, MSGBOX_AUTOCLOSE
	end

MossdeepCity_Gym_EventScript_Samantha::
	trainerbattle_single TRAINER_SAMANTHA, MossdeepCity_Gym_Text_SamanthaIntro, MossdeepCity_Gym_Text_SamanthaDefeat
	msgbox MossdeepCity_Gym_Text_SamanthaPostBattle, MSGBOX_AUTOCLOSE
	end

MossdeepCity_Gym_EventScript_Maura::
	trainerbattle_single TRAINER_MAURA, MossdeepCity_Gym_Text_MauraIntro, MossdeepCity_Gym_Text_MauraDefeat
	msgbox MossdeepCity_Gym_Text_MauraPostBattle, MSGBOX_AUTOCLOSE
	end

MossdeepCity_Gym_EventScript_Sylvia::
	trainerbattle_single TRAINER_SYLVIA, MossdeepCity_Gym_Text_SylviaIntro, MossdeepCity_Gym_Text_SylviaDefeat
	msgbox MossdeepCity_Gym_Text_SylviaPostBattle, MSGBOX_AUTOCLOSE
	end

MossdeepCity_Gym_EventScript_Nate::
	trainerbattle_single TRAINER_NATE, MossdeepCity_Gym_Text_NateIntro, MossdeepCity_Gym_Text_NateDefeat
	msgbox MossdeepCity_Gym_Text_NatePostBattle, MSGBOX_AUTOCLOSE
	end

MossdeepCity_Gym_EventScript_Macey::
	trainerbattle_single TRAINER_MACEY, MossdeepCity_Gym_Text_MaceyIntro, MossdeepCity_Gym_Text_MaceyDefeat
	msgbox MossdeepCity_Gym_Text_MaceyPostBattle, MSGBOX_AUTOCLOSE
	end

MossdeepCity_Gym_EventScript_Clifford::
	trainerbattle_single TRAINER_CLIFFORD, MossdeepCity_Gym_Text_CliffordIntro, MossdeepCity_Gym_Text_CliffordDefeat
	msgbox MossdeepCity_Gym_Text_CliffordPostBattle, MSGBOX_AUTOCLOSE
	end

MossdeepCity_Gym_EventScript_Nicholas::
	trainerbattle_single TRAINER_NICHOLAS, MossdeepCity_Gym_Text_NicholasIntro, MossdeepCity_Gym_Text_NicholasDefeat
	msgbox MossdeepCity_Gym_Text_NicholasPostBattle, MSGBOX_AUTOCLOSE
	end

MossdeepCity_Gym_EventScript_Kathleen::
	trainerbattle_single TRAINER_KATHLEEN, MossdeepCity_Gym_Text_KathleenIntro, MossdeepCity_Gym_Text_KathleenDefeat
	msgbox MossdeepCity_Gym_Text_KathleenPostBattle, MSGBOX_AUTOCLOSE
	end

MossdeepCity_Gym_EventScript_GymGuide::
	lock
	faceplayer
	goto_if_set FLAG_DEFEATED_MOSSDEEP_GYM, MossdeepCity_Gym_EventScript_GymGuidePostVictory
	msgbox MossdeepCity_Gym_Text_GymGuideAdvice, MSGBOX_DEFAULT
	release
	end

MossdeepCity_Gym_EventScript_GymGuidePostVictory::
	msgbox MossdeepCity_Gym_Text_GymGuidePostVictory, MSGBOX_DEFAULT
	release
	end

MossdeepCity_Gym_EventScript_RightGymStatue::
	lockall
	goto_if_set FLAG_BADGE07_GET, MossdeepCity_Gym_EventScript_GymStatueCertified
	goto MossdeepCity_Gym_EventScript_GymStatue
	end

MossdeepCity_Gym_EventScript_GymStatueCertified::
	msgbox MossdeepCity_Gym_Text_GymStatueCertified, MSGBOX_DEFAULT
	releaseall
	end

MossdeepCity_Gym_EventScript_GymStatue::
	msgbox MossdeepCity_Gym_Text_GymStatue, MSGBOX_DEFAULT
	releaseall
	end

MossdeepCity_Gym_EventScript_SnowmanDown::
	lockall
	playse SE_MUD_BALL
	applymovement VAR_LAST_TALKED, MossdeepCity_Gym_Movement_SnowmanDown
	waitmovement 0
	removeobject VAR_LAST_TALKED
	releaseall
	end

MossdeepCity_Gym_Movement_SnowmanDown:
	face_up
	delay_8
	face_left
	delay_16
	step_end

MossdeepCity_Gym_EventScript_SnowmanFrozen::
	lockall
	msgbox MossdeepCity_Gym_Text_SnowmanFrozen, MSGBOX_DEFAULT
	releaseall
	end

MossdeepCity_Gym_Text_SnowmanFrozen:
	.string "This snowman is frozen solid.$"

MossdeepCity_Gym_Text_GymGuideAdvice:
	.string "Yo, how's it going, CHAMPION-bound\n"
	.string "{PLAYER}?\p"
	.string "The gym leader here is WINTER.\p"
	.string "She may seem nice, but once she's in\n"
	.string "battle, she becomes an ice cold queen\l"
	.string "who shows no mercy!\p"
	.string "You should try using a FIRE-type\n"
	.string "POKéMON or a FIGHTING-type POKéMON.\p"
	.string "That's what I would recommend anyway.\p"
	.string "Well, why are you still standing here?\p"
	.string "Go for it!$"

MossdeepCity_Gym_Text_GymGuidePostVictory:
	.string "Wow, you're astounding!\n"
	.string "You're one great TRAINER!$"

MossdeepCity_Gym_Text_PrestonIntro:
	.string "Hey! Someone to battle!\p"
	.string "I was getting bored of waiting!$"

MossdeepCity_Gym_Text_PrestonDefeat:
	.string "I'm ok with losing, just as long as\n"
	.string "something happens.$"

MossdeepCity_Gym_Text_PrestonPostBattle:
	.string "I was getting so bored of waiting for\n"
	.string "TRAINERS that I started counting\l"
	.string "snowflakes.$"

MossdeepCity_Gym_Text_VirgilIntro:
	.string "Are you getting tired of stumbling\n"
	.string "through our frosty maze yet?$"

MossdeepCity_Gym_Text_VirgilDefeat:
	.string "Oh, you're no fun!$"

MossdeepCity_Gym_Text_VirgilPostBattle:
	.string "It's ok, I forget which snowmen are\n"
	.string "frozen too.$"

MossdeepCity_Gym_Text_BlakeIntro:
	.string "I've forseen your future, it ends with a\n"
	.string "frozen defeat!$"

MossdeepCity_Gym_Text_BlakeDefeat:
	.string "This wasn't what I saw in my vision...$"

MossdeepCity_Gym_Text_BlakePostBattle:
	.string "I think the vision I saw was just a\n"
	.string "hallucination from being in this cold\l"
	.string "gym for too long...$"

MossdeepCity_Gym_Text_HannahIntro:
	.string "Is this right way?\p"
	.string "I'm not telling!$"

MossdeepCity_Gym_Text_HannahDefeat:
	.string "You took it too personally!$"

MossdeepCity_Gym_Text_HannahPostBattle:
	.string "Mmm, I'm still not telling you which way\n"
	.string "to go.$"

MossdeepCity_Gym_Text_SamanthaIntro:
	.string "Don't try to sneak past me!$"

MossdeepCity_Gym_Text_SamanthaDefeat:
	.string "Maybe I should have snuck away from\n"
	.string "you instead.$"

MossdeepCity_Gym_Text_SamanthaPostBattle:
	.string "It's a little tight in this gym, isn't it?$"

MossdeepCity_Gym_Text_MauraIntro:
	.string "You dressed well for this cold gym!$"

MossdeepCity_Gym_Text_MauraDefeat:
	.string "I should have worn more layers...$"

MossdeepCity_Gym_Text_MauraPostBattle:
	.string "I wore my skis because of the snow, but\n"
	.string "there isn't enough room in here to ski\l"
	.string "around.$"

MossdeepCity_Gym_Text_SylviaIntro:
	.string "So, you have chosen the left path!$"

MossdeepCity_Gym_Text_SylviaDefeat:
	.string "I'm just no match for you, it seems.$"

MossdeepCity_Gym_Text_SylviaPostBattle:
	.string "The left path is not the right path, but\n"
	.string "is the right path the right path?$"

MossdeepCity_Gym_Text_NateIntro:
	.string "Here's a riddle for you.\p"
	.string "When are you getting colder and warmer\n"
	.string "at the same time?$"

MossdeepCity_Gym_Text_NateDefeat:
	.string "Very well, I will tell you the answer.$"

MossdeepCity_Gym_Text_NatePostBattle:
	.string "You're getting colder and warmer right\n"
	.string "now!\p"
	.string "The longer you're in this gym, the colder\n"
	.string "you get, but you're also right next to\l"
	.string "our gym leader!$"

MossdeepCity_Gym_Text_KathleenIntro:
	.string "If you think that going straight to the\n"
	.string "right makes you right, then you are\l"
	.string "wrong!$"

MossdeepCity_Gym_Text_KathleenDefeat:
	.string "Oh, but I was wrong!$"

MossdeepCity_Gym_Text_KathleenPostBattle:
	.string "I'll give you a hint:\p"
	.string "Going straight left is also wrong!$"

MossdeepCity_Gym_Text_CliffordIntro:
	.string "A gentleman should offer up his coat,\n"
	.string "but I'm freezing in here!$"

MossdeepCity_Gym_Text_CliffordDefeat:
	.string "I see, your blazing spirit must also\n"
	.string "keep you warm!$"

MossdeepCity_Gym_Text_CliffordPostBattle:
	.string "I could use some of that blazing spirit\n"
	.string "myself.\p"
	.string "It's too cold in here for this old man.$"

MossdeepCity_Gym_Text_MaceyIntro:
	.string "I'm the coolest COOLTRAINER around!$"

MossdeepCity_Gym_Text_MaceyDefeat:
	.string "Coldest, I should say.\p"
	.string "It's freezing in here!$"

MossdeepCity_Gym_Text_MaceyPostBattle:
	.string "It's too cool in here for this\n"
	.string "COOLTRAINER.$"

MossdeepCity_Gym_Text_NicholasIntro:
	.string "How am I not bothered by this cold gym?\p"
	.string "It's because I'm so hot!$"

MossdeepCity_Gym_Text_NicholasDefeat:
	.string "What do you mean I'm not that hot?$"

MossdeepCity_Gym_Text_NicholasPostBattle:
	.string "Ok, I lied.\p"
	.string "I should have brought more layers!\p"
	.string "A skirt this short was definitely the\n"
	.string "wrong choice!$"

MossdeepCity_Gym_Text_GymStatue:
	.string "MAHOGANY TOWN POKéMON GYM$"

MossdeepCity_Gym_Text_GymStatueCertified:
	.string "MAHOGANY TOWN POKéMON GYM\p"
	.string "WINTER'S CERTIFIED TRAINERS:\n"
	.string "{PLAYER}$"

MossdeepCity_Gym_EventScript_Winter_Text_0:
	.string "WINTER: Welcome back, {PLAYER}.\p"
	.string "Have you had a chance to visit the Rage\n"
	.string "Resort?\p"
	.string "I hope you can enjoy a little relaxation\n"
	.string "there.$"

MossdeepCity_Gym_EventScript_WinterDefeated_Text_0:
	.string "{PLAYER} received the GLACIER BADGE\n"
	.string "from WINTER.$"

MossdeepCity_Gym_EventScript_WinterDefeated_Text_1:
	.string "WINTER: That badge will allow you to use\n"
	.string "the HM move, Dive outside of battle.\p"
	.string "The water can be pretty chilly this time\n"
	.string "of year, but I'm sure you'll be fine.\p"
	.string "Oh, and please, take this as well...$"

MossdeepCity_Gym_EventScript_WinterDefeated_Text_2:
	.string "That TM contains the move Ice Beam!\p"
	.string "Although I don't personally use it\n"
	.string "myself, it's a powerful attack that has\l"
	.string "a chance to freeze your opponent.\p"
	.string "I'm sure you will put it to good use.\p"
	.string "By the way, I would also like you to take\n"
	.string "this as a personal gift from myself...$"

MossdeepCity_Gym_EventScript_WinterDefeated_Text_3:
	.string "That pass will allow you and one guest\n"
	.string "to enter the Rage Resort.\p"
	.string "It's an exclusive club that is off limits\n"
	.string "to most of the public.\p"
	.string "I just so happen to have a few extra\n"
	.string "passes!$"

MossdeepCity_Gym_Text_WinterIntro::
	.string "WINTER: Welcome to my gym, {PLAYER}.\p"
	.string "I've been excitedly waiting for your\n"
	.string "arrival.\p"
	.string "Although we only had a brief meeting in\n"
	.string "Ice Path, I could tell you're no\l"
	.string "ordinary TRAINER.\p"
	.string "You have a certain quality that I just\n"
	.string "can't quite put my finger on...\p"
	.string "Sorry, there I go getting carried away\n"
	.string "again!\p"
	.string "You came here for a battle, so that's\n"
	.string "what I'll give you!$"

MossdeepCity_Gym_Text_WinterDefeat::
	.string "Yep, my intuition was right on the\n"
	.string "money!\p"
	.string "You're a fantastic TRAINER, and the\n"
	.string "bond you share with your POKéMON is\l"
	.string "wonderful!\p"
	.string "Please, take this badge as a sign of\n"
	.string "that close bond.$"
