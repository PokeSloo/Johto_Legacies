SootopolisCity_MysteryEventsHouse_1F_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, SootopolisCity_MysteryEventsHouse_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

SootopolisCity_MysteryEventsHouse_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
	map_script_2 VAR_LAZULAN_STATE, 0, SootopolisCity_MysteryEventsHouse_1F_OnFrame
	.2byte 0


SootopolisCity_MysteryEventsHouse_1F_OnFrame::
	lock
	applymovement OBJ_EVENT_ID_PLAYER, SootopolisCity_MysteryEventsHouse_1F_Movement_PlayerToAction
	waitmovement 0
	applymovement 4, SootopolisCity_Movement_StepDown
	waitmovement 0
	msgbox SootopolisCity_MysteryEventsHouse_1F_OnFrame_Text_0
	waitmessage
	applymovement 6, SootopolisCity_Movement_StepUp
	waitmovement 0
	msgbox SootopolisCity_MysteryEventsHouse_1F_OnFrame_Text_1
	waitmessage
	applymovement 4, SootopolisCity_Movement_StepDown
	waitmovement 0
	msgbox SootopolisCity_MysteryEventsHouse_1F_OnFrame_Text_2
	waitmessage
	applymovement 4, SootopolisCity_Movement_StepRight
	waitmovement 0
	msgbox SootopolisCity_MysteryEventsHouse_1F_OnFrame_Text_3
	waitmessage
	applymovement 4, SootopolisCity_Movement_StepDown
	waitmovement 0
	msgbox SootopolisCity_MysteryEventsHouse_1F_OnFrame_Text_4
	waitmessage
	applymovement 4, SootopolisCity_Movement_StepLeft
	waitmovement 0
	msgbox SootopolisCity_MysteryEventsHouse_1F_OnFrame_Text_5
	waitmessage
	applymovement 4, SootopolisCity_Movement_StepUp
	waitmovement 0
	msgbox SootopolisCity_MysteryEventsHouse_1F_OnFrame_Text_6
	waitmessage
	applymovement 4, SootopolisCity_Movement_StepDown
	waitmovement 0
	msgbox SootopolisCity_MysteryEventsHouse_1F_OnFrame_Text_7
	waitmessage
	applymovement 6, SootopolisCity_Movement_StepUp
	waitmovement 0
	msgbox SootopolisCity_MysteryEventsHouse_1F_OnFrame_Text_8
	waitmessage
	applymovement 4, SootopolisCity_Movement_StepDown
	waitmovement 0
	msgbox SootopolisCity_MysteryEventsHouse_1F_OnFrame_Text_9
	waitmessage
	closemessage
	applymovement 4, SootopolisCity_MysteryEventsHouse_1F_Movement_WalkDownOne
	waitmovement 0
	delay 60
	applymovement 4, SootopolisCity_MysteryEventsHouse_1F_Movement_WalkLeftDown
	waitmovement 0
	msgbox SootopolisCity_MysteryEventsHouse_1F_OnFrame_Text_10
	waitmessage
	goto_if_set FLAG_CHOSE_OAK_BULBASAUR, SootopolisCity_MysteryEventsHouse_1F_OnFrame_2
	goto_if_set FLAG_CHOSE_OAK_SQUIRTLE, SootopolisCity_MysteryEventsHouse_1F_OnFrame_3
	call SootopolisCity_MysteryEventsHouse_1F_EventScript_Charmander
SootopolisCity_MysteryEventsHouse_1F_OnFrame_1:
	msgbox SootopolisCity_MysteryEventsHouse_1F_OnFrame_Text_11
	waitmessage
	closemessage
	giveitem ITEM_MEGA_RING
	waitbuttonpress
	closemessage
	applymovement 4, SootopolisCity_MysteryEventsHouse_1F_Movement_WalkRightDown
	waitmovement 0
	delay 60
	applymovement 4, SootopolisCity_MysteryEventsHouse_1F_Movement_WalkUpDown
	waitmovement 0
	msgbox SootopolisCity_MysteryEventsHouse_1F_OnFrame_Text_12
	waitmessage
	applymovement 6, SootopolisCity_Movement_StepUp
	waitmovement 0
	msgbox SootopolisCity_MysteryEventsHouse_1F_OnFrame_Text_13
	waitmessage
	applymovement 6, SootopolisCity_Movement_StepLeft
	applymovement OBJ_EVENT_ID_PLAYER, SootopolisCity_Movement_StepRight
	waitmovement 0
	msgbox SootopolisCity_MysteryEventsHouse_1F_OnFrame_Text_14
	waitmessage
	closemessage
	applymovement 6, SootopolisCity_MysteryEventsHouse_1F_Movement_ShaneToBasement
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, SootopolisCity_Movement_StepUp
	waitmovement 0
	opendoor 12, 1
	waitdooranim
	applymovement 6, SootopolisCity_Movement_WalkUpOneInvis
	waitmovement 0
	closedoor 12, 1
	waitdooranim
	removeobject 6
	applymovement 4, SootopolisCity_Movement_StepDown
	waitmovement 0
	msgbox SootopolisCity_MysteryEventsHouse_1F_OnFrame_Text_15
	waitmessage
	closemessage
	applymovement 4, SootopolisCity_MysteryEventsHouse_1F_Movement_GoldStartLeaving
	waitmovement 0
	applymovement 4, SootopolisCity_MysteryEventsHouse_1F_Movement_GoldExit
	applymovement 5, SootopolisCity_MysteryEventsHouse_1F_Movement_TyphlosionExit
	waitmovement 0
	playse SE_EXIT
	removeobject 4
	removeobject 5
	waitse
	setflag FLAG_RECEIVED_MEGA_STONE_LAZULAN
	addvar VAR_LAZULAN_STATE, 1
	release
	end

SootopolisCity_MysteryEventsHouse_1F_OnFrame_2:
	call SootopolisCity_MysteryEventsHouse_1F_EventScript_Bulbasaur
	goto SootopolisCity_MysteryEventsHouse_1F_OnFrame_1

SootopolisCity_MysteryEventsHouse_1F_OnFrame_3:
	call SootopolisCity_MysteryEventsHouse_1F_EventScript_Squirtle
	goto SootopolisCity_MysteryEventsHouse_1F_OnFrame_1


SootopolisCity_MysteryEventsHouse_1F_EventScript_Bulbasaur::
	giveitem ITEM_VENUSAURITE
	return


SootopolisCity_MysteryEventsHouse_1F_EventScript_Squirtle::
	giveitem ITEM_BLASTOISINITE
	return


SootopolisCity_MysteryEventsHouse_1F_EventScript_Charmander::
	giveitem ITEM_CHARIZARDITE_X
	return


SootopolisCity_MysteryEventsHouse_1F_Movement_PlayerToAction:
	walk_up
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_up
	walk_right
	walk_right
	walk_in_place_up
	step_end

SootopolisCity_MysteryEventsHouse_1F_Movement_WalkDownOne:
	walk_down
	step_end

SootopolisCity_MysteryEventsHouse_1F_Movement_WalkLeftDown:
	walk_left
	walk_in_place_down
	step_end

SootopolisCity_MysteryEventsHouse_1F_Movement_WalkRightDown:
	walk_right
	walk_in_place_down
	step_end

SootopolisCity_MysteryEventsHouse_1F_Movement_WalkUpDown:
	walk_up
	walk_in_place_down
	step_end

SootopolisCity_MysteryEventsHouse_1F_Movement_ShaneToBasement:
	walk_right
	walk_up
	walk_up
	walk_up
	walk_left
	walk_up
	step_end

SootopolisCity_MysteryEventsHouse_1F_Movement_GoldStartLeaving:
	walk_down
	walk_left
	step_end

SootopolisCity_MysteryEventsHouse_1F_Movement_GoldExit:
	walk_left
	walk_left
	walk_down
	walk_left
	walk_left
	walk_left
	walk_left
	walk_down
	walk_down
	set_invisible
	step_end

SootopolisCity_MysteryEventsHouse_1F_Movement_TyphlosionExit:
	walk_down
	walk_left
	walk_left
	walk_down
	walk_left
	walk_left
	walk_left
	walk_left
	walk_down
	walk_down
	set_invisible
	step_end

SootopolisCity_MysteryEventsHouse_1F_Scientist1::
	msgbox SootopolisCity_MysteryEventsHouse_1F_Scientist1_Text_0, MSGBOX_NPC
	end


SootopolisCity_MysteryEventsHouse_1F_Scientist2::
	msgbox SootopolisCity_MysteryEventsHouse_1F_Scientist2_Text_0, MSGBOX_NPC
	end


SootopolisCity_MysteryEventsHouse_1F_Scientist3::
	msgbox SootopolisCity_MysteryEventsHouse_1F_Scientist3_Text_0, MSGBOX_NPC
	end


SootopolisCity_MysteryEventsHouse_1F_EventScript_Clerk::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	pokemart SootopolisCity_MysteryEventsHouse_1F_Mart
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end


	.align 2
SootopolisCity_MysteryEventsHouse_1F_Mart:
	.2byte ITEM_VENUSAURITE
	.2byte ITEM_BLASTOISINITE
	.2byte ITEM_CHARIZARDITE_X
	.2byte ITEM_CHARIZARDITE_Y
	.2byte ITEM_SCEPTILITE
	.2byte ITEM_SWAMPERTITE
	.2byte ITEM_BLAZIKENITE
	.2byte ITEM_NONE

SootopolisCity_MysteryEventsHouse_1F_OnFrame_Text_0:
	.string "GOLD: From what your father told me,\n"
	.string "you two should be familiar with Mega\l"
	.string "Evolution.\p"
	.string "That is, when a fully evolved POKéMON is\n"
	.string "able to temporarily transform into a\l"
	.string "more powerful form.$"

SootopolisCity_MysteryEventsHouse_1F_OnFrame_Text_1:
	.string "SHANE: Yeah! DAD used that against me\n"
	.string "in the POKéMON League.\p"
	.string "I was doing ok until his SALAMENCE Mega\n"
	.string "Evolved!$"

SootopolisCity_MysteryEventsHouse_1F_OnFrame_Text_2:
	.string "GOLD: Yes, Mega Evolution is very\n"
	.string "powerful!$"

SootopolisCity_MysteryEventsHouse_1F_OnFrame_Text_3:
	.string "This lab was created to research and\n"
	.string "understand Mega Stones, and Mega\l"
	.string "Evolution.$"

SootopolisCity_MysteryEventsHouse_1F_OnFrame_Text_4:
	.string "According to our research, special\n"
	.string "meteorites rained down upon the Hoenn\l"
	.string "region thousands of years ago.\p"
	.string "These meteorites release a powerful\n"
	.string "energy which we've learned to harness.\p"
	.string "Through careful craftsmanship, these\n"
	.string "meteorites can be turned into Mega\l"
	.string "Stones, which allow certain species of\l"
	.string "POKéMON to Mega Evolve!$"

SootopolisCity_MysteryEventsHouse_1F_OnFrame_Text_5:
	.string "By the way, some Mega Stones can be\n"
	.string "purchased at the front desk.$"

SootopolisCity_MysteryEventsHouse_1F_OnFrame_Text_6:
	.string "There's also a testing arena in the\n"
	.string "basement.$"

SootopolisCity_MysteryEventsHouse_1F_OnFrame_Text_7:
	.string "So, are you interested yet?$"

SootopolisCity_MysteryEventsHouse_1F_OnFrame_Text_8:
	.string "SHANE: You bet!\p"
	.string "This is just the extra boost I needed.$"

SootopolisCity_MysteryEventsHouse_1F_OnFrame_Text_9:
	.string "GOLD: Great!\p"
	.string "Now then, I would like to give each of\n"
	.string "you a Mega Stone to start you off.$"

SootopolisCity_MysteryEventsHouse_1F_OnFrame_Text_10:
	.string "GOLD: Hmm... Hopefully you'll be able to\n"
	.string "use this one.$"

SootopolisCity_MysteryEventsHouse_1F_OnFrame_Text_11:
	.string "GOLD: Oh, and you'll also need this.$"

SootopolisCity_MysteryEventsHouse_1F_OnFrame_Text_12:
	.string "GOLD: Those Mega Rings were also\n"
	.string "crafted from meteorites, they'll allow\l"
	.string "you to activate Mega Evolution.$"

SootopolisCity_MysteryEventsHouse_1F_OnFrame_Text_13:
	.string "SHANE: This is awesome!\p"
	.string "I can't wait to try it out!$"

SootopolisCity_MysteryEventsHouse_1F_OnFrame_Text_14:
	.string "{PLAYER}, meet me down in the testing\n"
	.string "arena for a battle.\p"
	.string "There's no way I'll lose to you this\n"
	.string "time!$"

SootopolisCity_MysteryEventsHouse_1F_OnFrame_Text_15:
	.string "GOLD: Well, he sure is enthusiastic.\p"
	.string "I'll be in town if you need me, it's been\n"
	.string "a pleasure.$"

SootopolisCity_MysteryEventsHouse_1F_Scientist1_Text_0:
	.string "This lab hasn't been as lucrative as you\n"
	.string "might expect.\p"
	.string "If not for GOLD's funding, we would have\n"
	.string "shut down years ago.\p"
	.string "I wonder how he made all his money.$"

SootopolisCity_MysteryEventsHouse_1F_Scientist2_Text_0:
	.string "Some legends say that Rayquaza was the\n"
	.string "first POKéMON to Mega Evolve.\p"
	.string "I wonder where it is now...$"

SootopolisCity_MysteryEventsHouse_1F_Scientist3_Text_0:
	.string "Hmm... My notes say that to Mega Evolve\n"
	.string "in battle, you must press the start\l"
	.string "button just before selecting an\l"
	.string "attack.\p"
	.string "I'm still not really sure what a start\n"
	.string "button is...$"
