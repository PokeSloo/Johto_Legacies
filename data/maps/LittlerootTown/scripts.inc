LittlerootTown_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, LittlerootTown_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

LittlerootTown_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	setflag FLAG_VISITED_LITTLEROOT_TOWN
	end


LittlerootTown_Trigger::
	lock
	msgbox LittlerootTown_Trigger_Text_0
	waitmessage
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_PlayerWalkRight
	waitmovement 0
	release
	end


LittlerootTown_PlayerWalkRight:
	walk_right
	step_end

LittlerootTown_EventScript_NewFatMan::
	msgbox LittlerootTown_EventScript_NewFatMan_Text_0, MSGBOX_NPC
	end


LittlerootTown_EventScript_Boy::
	msgbox LittlerootTown_EventScript_Boy_Text_0, MSGBOX_NPC
	end


LittlerootTown_EventScript_Girl::
	msgbox LittlerootTown_EventScript_Girl_Text_0, MSGBOX_NPC
	end


LittlerootTown_EventScript_TownSign::
	msgbox LittlerootTown_Text_TownSign, MSGBOX_SIGN
	end

LittlerootTown_EventScript_BirchsLabSign::
	msgbox LittlerootTown_Text_ProfBirchsLab, MSGBOX_SIGN
	end

LittlerootTown_EventScript_BrendansHouseSign::
	msgbox LittlerootTown_Text_ProfBirchsHouse, MSGBOX_SIGN
	return

LittlerootTown_Text_TownSign:
	.string "NEW BARK TOWN\n"
	.string "“Winds of a New Beginning.”$"

LittlerootTown_Text_ProfBirchsLab:
	.string "PROF. ELM'S POKéMON LAB$"

LittlerootTown_Text_ProfBirchsHouse:
	.string "GOLD'S HOUSE$"

LittlerootTown_Trigger_Text_0:
	.string "SHANE's words echoed in {PLAYER}'s\n"
	.string "ears:\p"
	.string "A scrawny kid like you would get ripped\n"
	.string "to shreds if you stepped one foot in\l"
	.string "there without a POKéMON of your own.$"

LittlerootTown_EventScript_NewFatMan_Text_0:
	.string "...\p"
	.string "You're a pretty quiet one aren't you?\p"
	.string "I almost didn't even wake up from my\n"
	.string "nap.\p"
	.string "You remind me of someone else who used\n"
	.string "to live here.$"

LittlerootTown_EventScript_Boy_Text_0:
	.string "Have you been to Goldenrod City?\p"
	.string "It's such a big city, that I feel like I'm\n"
	.string "going to get lost every time I go there.$"

LittlerootTown_EventScript_Girl_Text_0:
	.string "Did you come to New Bark Town to see\n"
	.string "PROF. ELM?\p"
	.string "He's very generous when it comes to\n"
	.string "handing out POKéMON, he must have a\l"
	.string "surplus.$"
