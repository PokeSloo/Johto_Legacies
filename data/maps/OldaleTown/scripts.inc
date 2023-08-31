OldaleTown_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, OldaleTown_MapScripts_MAP_SCRIPT_ON_TRANSITION
	map_script MAP_SCRIPT_ON_FRAME_TABLE, OldaleTown_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

OldaleTown_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	setflag FLAG_VISITED_OLDALE_TOWN
	end

OldaleTown_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
	map_script_2 VAR_CHERRYGROVE_STATE, 1, OldaleTown_OnFrame
	.2byte 0


OldaleTown_OnFrame::
	lock
	playse SE_PIN
	applymovement 4, OldaleTown_ShaneApostraphe
	waitmovement 0
	delay 10
	msgbox OldaleTown_OnFrame_Text_0
	waitmessage
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, OldaleTown_PlayerStepToShane
	waitmovement 0
	msgbox OldaleTown_OnFrame_Text_1
	waitmessage
	closemessage
	applymovement 4, OldaleTown_ShaneWalktoNerd
	applymovement OBJ_EVENT_ID_PLAYER, OldaleTown_PlayerWalktoNerd
	waitmovement 0
	msgbox OldaleTown_OnFrame_Text_2
	waitmessage
	closemessage
	applymovement 4, OldaleTown_ShaneWalktoGrass
	applymovement OBJ_EVENT_ID_PLAYER, OldaleTown_PlayerWalktoGrass
	waitmovement 0
	msgbox OldaleTown_OnFrame_Text_3
	waitmessage
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, OldaleTown_PlayerWalkDownOne
	waitmovement 0
	applymovement 4, OldaleTown_ShaneWalktoLedge, MAP_OLDALE_TOWN
	applymovement OBJ_EVENT_ID_PLAYER, OldaleTown_PlayerWalktoLedge
	waitmovement 0
	delay 20
	msgbox OldaleTown_OnFrame_Text_4
	waitmessage
	applymovement 4, OldaleTown_ShaneFacePlayer, MAP_OLDALE_TOWN
	applymovement OBJ_EVENT_ID_PLAYER, OldaleTown_PlayerFaceShane
	waitmovement 0
	msgbox OldaleTown_OnFrame_Text_5
	waitmessage
	closemessage
	applymovement 4, OldaleTown_ShaneFaceDown, MAP_OLDALE_TOWN
	waitmovement 0
	delay 30
	applymovement 4, OldaleTown_ShaneJumpLedge, MAP_OLDALE_TOWN
	playse SE_LEDGE
	applymovement OBJ_EVENT_ID_PLAYER, OldaleTown_ShaneFaceDown
	waitmovement 0
	delay 30
	msgbox OldaleTown_OnFrame_Text_6
	waitmessage
	closemessage
	applymovement 4, OldaleTown_ShaneWalkOffscreen, MAP_OLDALE_TOWN
	applymovement OBJ_EVENT_ID_PLAYER, OldaleTown_PlayerPrepareJumpLedge
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, OldaleTown_PlayerJumpLedge
	playse SE_LEDGE
	waitmovement 0
	msgbox OldaleTown_OnFrame_Text_7
	waitmessage
	closemessage
	applymovement 4, OldaleTown_ShaneToTree, MAP_OLDALE_TOWN
	applymovement OBJ_EVENT_ID_PLAYER, OldaleTown_PlayerToTree
	waitmovement 0
	msgbox OldaleTown_OnFrame_Text_8
	waitmessage
	closemessage
	applymovement 4, OldaleTown_ShaneWalkAroundTrees, MAP_OLDALE_TOWN
	applymovement OBJ_EVENT_ID_PLAYER, OldaleTown_PlayerWalkAroundTrees
	waitmovement 0
	msgbox OldaleTown_OnFrame_Text_9
	waitmessage
	closemessage
	applymovement 4, OldaleTown_ShaneWalkToSign, MAP_OLDALE_TOWN
	applymovement OBJ_EVENT_ID_PLAYER, OldaleTown_PlayerWalkToSign
	waitmovement 0
	applymovement 4, OldaleTown_ShaneJumpRight, MAP_OLDALE_TOWN
	applymovement OBJ_EVENT_ID_PLAYER, OldaleTown_PlayerJumpRight
	playse SE_LEDGE
	playse SE_LEDGE
	waitmovement 0
	msgbox OldaleTown_OnFrame_Text_10
	waitmessage
	closemessage
	applymovement 4, OldaleTown_ShaneWalkToLab, MAP_OLDALE_TOWN
	applymovement OBJ_EVENT_ID_PLAYER, OldaleTown_PlayerWalkToLab
	waitmovement 0
	delay 20
	applymovement 4, OldaleTown_ShaneFacePlayer, MAP_OLDALE_TOWN
	applymovement OBJ_EVENT_ID_PLAYER, OldaleTown_PlayerFaceShane
	waitmovement 0
	msgbox OldaleTown_OnFrame_Text_11
	waitmessage
	closemessage
	applymovement 4, OldaleTown_ShaneLeaves, MAP_OLDALE_TOWN
	applymovement OBJ_EVENT_ID_PLAYER, OldaleTown_PlayerWatchesShane
	waitmovement 0
	removeobject 4, MAP_OLDALE_TOWN
	applymovement OBJ_EVENT_ID_PLAYER, OldaleTown_BothFaceUp
	waitmovement 0
	setflag FLAG_HIDE_SHANE_CHERRYGROVE_ESCORT
	addvar VAR_CHERRYGROVE_STATE, 1
	release
	end


OldaleTown_ShaneApostraphe:
	face_left
	emote_exclamation_mark
	step_end

OldaleTown_PlayerStepToShane:
	walk_right
	walk_right
	walk_right
	step_end

OldaleTown_ShaneWalktoNerd:
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	face_down
	step_end

OldaleTown_PlayerWalktoNerd:
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	delay_16
	face_down
	step_end

OldaleTown_ShaneWalktoGrass:
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_up
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_down
	walk_down
	walk_right
	walk_down
	step_end

OldaleTown_PlayerWalktoGrass:
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_up
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_down
	walk_down
	walk_right
	face_down
	delay_16
	walk_left
	face_down
	step_end

OldaleTown_ShaneWalktoLedge:
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_down
	walk_down
	walk_down
	walk_right
	face_down
	step_end

OldaleTown_PlayerWalkDownOne:
	walk_down
	step_end

OldaleTown_PlayerWalktoLedge:
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_down
	walk_down
	walk_down
	step_end

OldaleTown_ShaneFacePlayer:
	face_left
	step_end

OldaleTown_PlayerFaceShane:
	face_right
	step_end

OldaleTown_ShaneFaceDown:
	face_down
	step_end

OldaleTown_ShaneJumpLedge:
	jump_2_down
	delay_16
	walk_in_place_up
	step_end

OldaleTown_ShaneWalkOffscreen:
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	face_left
	step_end

OldaleTown_PlayerPrepareJumpLedge:
	delay_16
	delay_16
	walk_in_place_fast_right
	delay_16
	walk_in_place_fast_down
	delay_16
	walk_in_place_fast_right
	delay_8
	walk_in_place_fast_down
	delay_8
	walk_in_place_fast_down
	walk_in_place_fast_down
	walk_in_place_fast_down
	step_end

OldaleTown_PlayerJumpLedge:
	jump_2_down
	player_run_right
	player_run_right
	player_run_right
	player_run_right
	walk_right
	walk_right
	step_end

OldaleTown_ShaneToTree:
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	face_up
	step_end

OldaleTown_PlayerToTree:
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	delay_16
	face_up
	step_end

OldaleTown_BothFaceUp:
	face_up
	step_end

OldaleTown_ShaneWalkAroundTrees:
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_up
	walk_up
	walk_right
	walk_right
	walk_right
	walk_right
	walk_up
	walk_up
	walk_up
	walk_up
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	delay_16
	face_left
	step_end

OldaleTown_PlayerWalkAroundTrees:
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_up
	walk_up
	walk_right
	walk_right
	walk_right
	walk_right
	walk_up
	walk_up
	walk_up
	walk_up
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	step_end

OldaleTown_ShaneWalkToSign:
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_right
	step_end

OldaleTown_ShaneJumpRight:
	jump_2_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_right
	walk_right
	walk_up
	walk_up
	face_down
	step_end

OldaleTown_PlayerWalkToSign:
	walk_fast_right
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	face_right
	step_end

OldaleTown_PlayerJumpRight:
	delay_8
	walk_fast_right
	jump_2_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_right
	walk_right
	walk_up
	step_end

OldaleTown_ShaneWalkToLab:
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_up
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_up
	step_end

OldaleTown_PlayerWalkToLab:
	walk_up
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_up
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_up
	step_end

OldaleTown_ShaneLeaves:
	walk_down
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	step_end

OldaleTown_PlayerWatchesShane:
	delay_16
	face_down
	delay_16
	delay_16
	delay_16
	face_left
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	step_end

OldaleTown_EventScript_TownSign::
	msgbox OldaleTown_Text_TownSign, MSGBOX_SIGN
	end

OldaleTown_EventScript_Girl::
	msgbox OldaleTown_Text_SavingMyProgress, MSGBOX_NPC
	end

OldaleTown_EventScript_MartEmployee::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_POTION_OLDALE, OldaleTown_EventScript_ExplainPotion
	goto_if_set FLAG_TEMP_1, OldaleTown_EventScript_ExplainPotion
	setflag FLAG_TEMP_1
	playbgm MUS_FOLLOW_ME, FALSE
	msgbox OldaleTown_Text_IWorkAtPokemonMart, MSGBOX_DEFAULT
	closemessage
	msgbox OldaleTown_Text_ThisIsAPokemonMart, MSGBOX_DEFAULT
	giveitem ITEM_POTION
	goto_if_eq VAR_RESULT, FALSE, OldaleTown_EventScript_BagIsFull
	msgbox OldaleTown_Text_PotionExplanation, MSGBOX_DEFAULT
	setflag FLAG_RECEIVED_POTION_OLDALE
	fadedefaultbgm
	release
	end

OldaleTown_EventScript_ExplainPotion::
	msgbox OldaleTown_Text_PotionExplanation, MSGBOX_DEFAULT
	release
	end

OldaleTown_EventScript_BagIsFull::
	msgbox gText_TooBadBagIsFull, MSGBOX_DEFAULT
	fadedefaultbgm
	release
	end

OldaleTown_EventScript_FootprintsMan::
	msgbox OldaleTown_Text_FinishedSketchingFootprints, MSGBOX_NPC
	end

OldaleTown_Text_SavingMyProgress:
	.string "I want to take a rest, so I'm saving my\n"
	.string "progress.$"

OldaleTown_Text_IWorkAtPokemonMart:
	.string "Hi!\n"
	.string "I work at a POKéMON MART.\p"
	.string "Can I get you to come with me?$"

OldaleTown_Text_ThisIsAPokemonMart:
	.string "This is a POKéMON MART.\n"
	.string "Just look for our blue roof.\p"
	.string "We sell a variety of goods including\n"
	.string "POKé BALLS for catching POKéMON.\p"
	.string "Here, I'd like you to have this as\n"
	.string "a promotional item.$"

OldaleTown_Text_PotionExplanation:
	.string "A POTION can be used anytime, so it's\n"
	.string "even more useful than a POKéMON CENTER\l"
	.string "in certain situations.$"

OldaleTown_Text_FinishedSketchingFootprints:
	.string "I finished sketching the footprints of\n"
	.string "a rare POKéMON.\p"
	.string "But it turns out they were only my\n"
	.string "own footprints…$"

OldaleTown_Text_TownSign:
	.string "Cherrygrove City\n"
	.string "“The City of Fragrant Flowers.”$"

OldaleTown_OnFrame_Text_0:
	.string "SHANE: What took you so long?$"

OldaleTown_OnFrame_Text_1:
	.string "Any longer, and I was going to leave you\n"
	.string "behind.\p"
	.string "Come on, let's get this over with.$"

OldaleTown_OnFrame_Text_2:
	.string "Pfft, get a load of this nerd. Not a\n"
	.string "single girl would go for a guy like that.\p"
	.string "Trust me.$"

OldaleTown_OnFrame_Text_3:
	.string "This is a patch of tall grass. A scrawny\n"
	.string "kid like you would get ripped to shreds\l"
	.string "if you stepped one foot in there\l"
	.string "without a POKéMON of your own.$"

OldaleTown_OnFrame_Text_4:
	.string "I jump down from small ledges like this\n"
	.string "all the time.$"

OldaleTown_OnFrame_Text_5:
	.string "I bet even a wimp like you could jump it.$"

OldaleTown_OnFrame_Text_6:
	.string "You'd better hurry up, or I'll leave you\n"
	.string "behind.$"

OldaleTown_OnFrame_Text_7:
	.string "Didn't break your ankles, did you? Ha!$"

OldaleTown_OnFrame_Text_8:
	.string "These small trees are super annoying.\n"
	.string "If you have HM01 and the Violet City\l"
	.string "gym badge, you can cut them down.$"

OldaleTown_OnFrame_Text_9:
	.string "This part is a little tricky, just try\n"
	.string "and keep up.$"

OldaleTown_OnFrame_Text_10:
	.string "Wow, I'm surprised you didn't get left in\n"
	.string "my dust, haha!$"

OldaleTown_OnFrame_Text_11:
	.string "This is PROF. ELM's lab. He's also a huge\n"
	.string "nerd, so you two should get along.\p"
	.string "Welp, Mom just said to bring you here,\n"
	.string "she didn't say anything about bringing\l"
	.string "you back.\p"
	.string "You're on your own now, later loser.$"
