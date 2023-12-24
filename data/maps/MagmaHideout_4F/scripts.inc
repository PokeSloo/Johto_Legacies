MagmaHideout_4F_MapScripts::
	.byte 0


MagmaHideout_4F_EventScript_MainTrigger::
	lock
	applymovement OBJ_EVENT_ID_PLAYER, MagmaHideout_4F_Movement_PlayerToAriana
	waitmovement 0
	playse SE_PIN
	applymovement 5, MagmaHideout_4F_Movement_DamonExclamationDown
	applymovement 10, MagmaHideout_4F_Movement_DamonExclamationDown
	applymovement 9, MagmaHideout_4F_Movement_DamonExclamationDown
	waitmovement 0
	waitse
	delay 30
	applymovement 5, MagmaHideout_4F_Movement_StepRight
	waitmovement 0
	msgbox MagmaHideout_4F_EventScript_MainTrigger_Text_0
	waitmessage
	applymovement 5, MagmaHideout_4F_Movement_FaceDown
	applymovement 6, MagmaHideout_4F_Movement_FaceDown
	waitmovement 0
	msgbox MagmaHideout_4F_EventScript_MainTrigger_Text_1
	waitmessage
	closemessage
	playse SE_PIN
	applymovement OBJ_EVENT_ID_PLAYER, MagmaHideout_4F_Movement_DamonExclamationDown
	waitmovement 0
	waitse
	delay 30
	addobject 1
	applymovement 1, MagmaHideout_4F_Movement_ShaneEnter
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, MagmaHideout_4F_Movement_FaceLeft
	waitmovement 0
	msgbox MagmaHideout_4F_EventScript_MainTrigger_Text_2
	waitmessage
	closemessage
	applymovement 1, MagmaHideout_4F_Movement_FaceUp
	applymovement OBJ_EVENT_ID_PLAYER, MagmaHideout_4F_Movement_FaceUp
	waitmovement 0
	delay 30
	msgbox MagmaHideout_4F_EventScript_MainTrigger_Text_3
	waitmessage
	applymovement 6, MagmaHideout_4F_Movement_StepRight
	waitmovement 0
	msgbox MagmaHideout_4F_EventScript_MainTrigger_Text_4
	waitmessage
	applymovement 6, MagmaHideout_4F_Movement_StepDown
	waitmovement 0
	msgbox MagmaHideout_4F_EventScript_MainTrigger_Text_5
	waitmessage
	applymovement 6, MagmaHideout_4F_Movement_StepDown
	waitmovement 0
	msgbox MagmaHideout_4F_EventScript_MainTrigger_Text_6
	waitmessage
	applymovement 6, MagmaHideout_4F_Movement_StepUp
	waitmovement 0
	msgbox MagmaHideout_4F_EventScript_MainTrigger_Text_7
	waitmessage
	applymovement 1, MagmaHideout_4F_Movement_StepUp
	waitmovement 0
	msgbox MagmaHideout_4F_EventScript_MainTrigger_Text_8
	waitmessage
	applymovement 6, MagmaHideout_4F_Movement_StepDown
	waitmovement 0
	msgbox MagmaHideout_4F_EventScript_MainTrigger_Text_9
	waitmessage
	playse SE_PIN
	applymovement 6, MagmaHideout_4F_Movement_Exclamation
	waitmovement 0
	waitse
	delay 30
	msgbox MagmaHideout_4F_EventScript_MainTrigger_Text_10
	waitmessage
	applymovement 6, MagmaHideout_4F_Movement_StepDown
	waitmovement 0
	msgbox MagmaHideout_4F_EventScript_MainTrigger_Text_11
	waitmessage
	applymovement 6, MagmaHideout_4F_Movement_StepRight
	waitmovement 0
	msgbox MagmaHideout_4F_EventScript_MainTrigger_Text_12
	waitmessage
	applymovement 9, MagmaHideout_4F_Movement_StepUp
	waitmovement 0
	msgbox MagmaHideout_4F_EventScript_MainTrigger_Text_13
	waitmessage
	closemessage
	fadeoutbgm 1
	playse SE_PC_ON
	waitse
	delay 30
	playse SE_SELECT
	waitse
	playse SE_SELECT
	waitse
	playse SE_PC_LOGIN
	waitse
	delay 30
	fadescreenspeed FADE_TO_WHITE, 8
	playbgm MUS_RAYQUAZA_APPEARS, FALSE
	setwarp MAP_AQUA_HIDEOUT_UNUSED_RUBY_MAP1, 5, 8
	special TimeTravelBackClock
	waitstate
	fadedefaultbgm
	release
	end


MagmaHideout_4F_Movement_PlayerToAriana:
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

MagmaHideout_4F_Movement_DamonExclamationDown:
	emote_exclamation_mark
	walk_in_place_down
	step_end

MagmaHideout_4F_Movement_Exclamation:
	emote_exclamation_mark
	step_end

MagmaHideout_4F_Movement_StepRight:
	walk_in_place_right
	step_end

MagmaHideout_4F_Movement_FaceDown:
	face_down
	step_end

MagmaHideout_4F_Movement_ShaneEnter:
	walk_up
	walk_up
	walk_up
	walk_up
	walk_left
	walk_up
	walk_up
	face_right
	step_end

MagmaHideout_4F_Movement_FaceLeft:
	face_left
	step_end

MagmaHideout_4F_Movement_FaceUp:
	face_up
	step_end

MagmaHideout_4F_Movement_StepDown:
	walk_in_place_down
	step_end

MagmaHideout_4F_Movement_StepUp:
	walk_in_place_up
	step_end

MagmaHideout_4F_EventScript_Grunt11::
	trainerbattle_single TRAINER_GRUNT_MAGMA_HIDEOUT_11, MagmaHideout_4F_Text_Grunt11Intro, MagmaHideout_4F_Text_Grunt11Defeat
	msgbox MagmaHideout_4F_Text_Grunt11PostBattle, MSGBOX_AUTOCLOSE
	end

MagmaHideout_4F_EventScript_Grunt12::
	trainerbattle_single TRAINER_GRUNT_MAGMA_HIDEOUT_12, MagmaHideout_4F_Text_Grunt12Intro, MagmaHideout_4F_Text_Grunt12Defeat
	msgbox MagmaHideout_4F_Text_Grunt12PostBattle, MSGBOX_AUTOCLOSE
	end

MagmaHideout_4F_EventScript_Grunt13::
	trainerbattle_single TRAINER_GRUNT_MAGMA_HIDEOUT_13, MagmaHideout_4F_Text_Grunt13Intro, MagmaHideout_4F_Text_Grunt13Defeat
	msgbox MagmaHideout_4F_Text_Grunt13PostBattle, MSGBOX_AUTOCLOSE
	end

MagmaHideout_4F_EventScript_Tabitha::
	trainerbattle_single TRAINER_TABITHA_MAGMA_HIDEOUT, MagmaHideout_4F_Text_TabithaIntro, MagmaHideout_4F_Text_TabithaDefeat
	msgbox MagmaHideout_4F_Text_TabithaPostBattle, MSGBOX_AUTOCLOSE
	end

MagmaHideout_4F_Text_Grunt11Intro:
	.string "Just turn back now kid, none of this\n"
	.string "concerns you!$"

MagmaHideout_4F_Text_Grunt11Defeat:
	.string "You were just too much for me to handle.$"

MagmaHideout_4F_Text_Grunt11PostBattle:
	.string "What is so wrong about wanting\n"
	.string "unlimited power and money?$"

MagmaHideout_4F_Text_Grunt12Intro:
	.string "Muahaha, very soon Team Phoenix will\n"
	.string "become the most powerful organization\l"
	.string "in the world!$"

MagmaHideout_4F_Text_Grunt12Defeat:
	.string "Stop trying to ruin our plans!$"

MagmaHideout_4F_Text_Grunt12PostBattle:
	.string "I'm sorry boss, I couldn't hold off the\n"
	.string "intruder very long.$"

MagmaHideout_4F_Text_Grunt13Intro:
	.string "I will stop you no matter what!\p"
	.string "For Team Phoenix!$"

MagmaHideout_4F_Text_Grunt13Defeat:
	.string "I have failed...$"

MagmaHideout_4F_Text_Grunt13PostBattle:
	.string "You're dead wrong if you think this is\n"
	.string "the end of Team Phoenix!$"

MagmaHideout_4F_Text_TabithaIntro:
	.string "Hehehe!\n"
	.string "You made it this far, so I'll tell you!\p"
	.string "That's right!\n"
	.string "Up ahead, GROUDON is sleeping!\p"
	.string "MAXIE went to GROUDON just seconds\n"
	.string "ago!\p"
	.string "It's going to awaken real soon!\n"
	.string "Hehe! Hehehe!$"

MagmaHideout_4F_Text_TabithaDefeat:
	.string "Taken down again…\n"
	.string "Hehe…$"

MagmaHideout_4F_Text_TabithaPostBattle:
	.string "…And while you wasted time with me,\n"
	.string "MAXIE should have awakened GROUDON…$"

MagmaHideout_4F_EventScript_MainTrigger_Text_0:
	.string "DAMON: Boss...\p"
	.string "...\p"
	.string "???: Your persistence certainly lives\n"
	.string "up to the rumors.$"

MagmaHideout_4F_EventScript_MainTrigger_Text_1:
	.string "Fortunately, we are always one step\n"
	.string "ahead of you...\p"
	.string "SHANE: Hey assholes!$"

MagmaHideout_4F_EventScript_MainTrigger_Text_2:
	.string "SHANE: I don't know how you managed to\n"
	.string "get here before me, {PLAYER}.\p"
	.string "It's going to be really tough to make\n"
	.string "good on my bet with you...$"

MagmaHideout_4F_EventScript_MainTrigger_Text_3:
	.string "???: So, you're both here.\p"
	.string "How wonderful...\p"
	.string "I suppose I should introduce myself.\p"
	.string "My name is ARIANA.\p"
	.string "I formed Team Phoenix after the fall of\n"
	.string "Team Rocket, nearly twenty years ago.$"

MagmaHideout_4F_EventScript_MainTrigger_Text_4:
	.string "Team Rocket was an unstoppable force\n"
	.string "back then.\p"
	.string "Our power and influence felt unlimited.$"

MagmaHideout_4F_EventScript_MainTrigger_Text_5:
	.string "It was all thanks to our leader, the\n"
	.string "great GIOVANNI!\p"
	.string "He had an absolute mastery over\n"
	.string "POKéMON, the likes of which the world\l"
	.string "had never seen.\p"
	.string "I knew everything would be perfect as\n"
	.string "long as I kept by his side...\p"
	.string "...\p"
	.string "But then, that brat from Pallet Town\n"
	.string "appeared...$"

MagmaHideout_4F_EventScript_MainTrigger_Text_6:
	.string "That brat ruined everything!\p"
	.string "He took down Team Rocket overnight, we\n"
	.string "were absolutely humiliated!\p"
	.string "...\p"
	.string "Then... our GIOVANNI left us...\p"
	.string "Consumed by a profound sense of\n"
	.string "uncertainty and doubt, GIOVANNI\l"
	.string "disbanded Team Rocket and vanished\l"
	.string "from the world, and my life...\p"
	.string "At the time, I tried patching the gang\n"
	.string "back together, but that too, ended in\l"
	.string "failure...\p"
	.string "Without GIOVANNI'S guidance, Team\n"
	.string "Rocket was just an empty husk of what\l"
	.string "it once was...$"

MagmaHideout_4F_EventScript_MainTrigger_Text_7:
	.string "That's where Celebi comes in...\p"
	.string "I'm going to use Celebi's time traveling\n"
	.string "abilities to ensure that RED brat never\l"
	.string "gets the chance!$"

MagmaHideout_4F_EventScript_MainTrigger_Text_8:
	.string "SHANE: Blah, blah, blah!$"

MagmaHideout_4F_EventScript_MainTrigger_Text_9:
	.string "Don't you ever shut up, you old hag?$"

MagmaHideout_4F_EventScript_MainTrigger_Text_10:
	.string "SHANE: Nobody cares about your sob\n"
	.string "story.\p"
	.string "It doesn't matter, because we're going\n"
	.string "to take you down right now!$"

MagmaHideout_4F_EventScript_MainTrigger_Text_11:
	.string "ARIANA: Hehe! You sure are lively!\p"
	.string "As much as I would love to teach you\n"
	.string "some manners, you arrived a little too\l"
	.string "late.\p"
	.string "Our time machine is now fully\n"
	.string "operational!$"

MagmaHideout_4F_EventScript_MainTrigger_Text_12:
	.string "Now, it is time!\p"
	.string "Activate the machine!$"

MagmaHideout_4F_EventScript_MainTrigger_Text_13:
	.string "SCIENTIST: Yes, Ma'am!$"
