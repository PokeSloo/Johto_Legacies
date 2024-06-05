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

OldaleTown_EventScript_Girl::
	msgbox OldaleTown_EventScript_Girl_Text_0, MSGBOX_NPC
	end


OldaleTown_EventScript_Mailbox::
	msgbox OldaleTown_EventScript_Mailbox_Text_0, MSGBOX_SIGN
	end


OldaleTown_EventScript_Trigger1::
	lock
	playse SE_PIN
	applymovement 5, OldaleTown_ShaneApostraphePlain
	waitmovement 0
	delay 30
	playbgm MUS_HG_ENCOUNTER_RIVAL, FALSE
	applymovement 5, OldaleTown_ShaneWalktoPlayer1
	waitmovement 0
	goto OldaleTown_EventScript_ShaneBattle
	return


OldaleTown_EventScript_Trigger2::
	lock
	playse SE_PIN
	applymovement 5, OldaleTown_ShaneApostraphePlain
	waitmovement 0
	delay 30
	playbgm MUS_HG_ENCOUNTER_RIVAL, FALSE
	applymovement 5, OldaleTown_ShaneWalktoPlayer2
	waitmovement 0
	goto OldaleTown_EventScript_ShaneBattle
	return


OldaleTown_EventScript_Trigger3::
	lock
	playse SE_PIN
	applymovement 5, OldaleTown_ShaneApostraphePlain
	waitmovement 0
	delay 30
	playbgm MUS_HG_ENCOUNTER_RIVAL, FALSE
	applymovement 5, OldaleTown_ShaneWalktoPlayer3
	waitmovement 0
	goto OldaleTown_EventScript_ShaneBattle
	return


OldaleTown_EventScript_Trigger4::
	lock
	playse SE_PIN
	applymovement 5, OldaleTown_ShaneApostraphePlain
	waitmovement 0
	delay 30
	playbgm MUS_HG_ENCOUNTER_RIVAL, FALSE
	applymovement 5, OldaleTown_ShaneWalktoPlayer4
	waitmovement 0
	goto OldaleTown_EventScript_ShaneBattle
	return


OldaleTown_EventScript_ShaneBattle::
	setrespawn HEAL_LOCATION_LITTLEROOT_TOWN_BRENDANS_HOUSE_2F
	addvar VAR_CHERRYGROVE_STATE, 1
	msgbox OldaleTown_EventScript_ShaneBattle_Text_0
	trainerbattle_no_intro TRAINER_BRENDAN_ROUTE_103_TREECKO, OldaleTown_Text_ShaneDefeat
	msgbox OldaleTown_EventScript_ShaneBattle_Text_1
	waitmessage
	closemessage
	applymovement 5, OldaleTown_ShaneHitPlayer
	waitmovement 0
	playse SE_WALL_HIT
	applymovement OBJ_EVENT_ID_PLAYER, OldaleTown_PlayerKnockBack
	waitmovement 0
	special HealPlayerParty
	fadescreenspeed FADE_TO_BLACK, 4
	delay 30
	warpsilent MAP_LITTLEROOT_TOWN_BRENDANS_HOUSE_2F, 1, 4
	waitstate
	release
	end


OldaleTown_ShaneApostraphePlain:
	emote_exclamation_mark
	step_end

OldaleTown_ShaneWalktoPlayer1:
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	step_end

OldaleTown_ShaneWalktoPlayer2:
	walk_down
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	step_end

OldaleTown_ShaneWalktoPlayer3:
	walk_down
	walk_down
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	step_end

OldaleTown_ShaneWalktoPlayer4:
	walk_down
	walk_down
	walk_down
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	step_end

OldaleTown_ShaneHitPlayer:
	lock_facing_direction
	walk_slow_left
	delay_16
	walk_faster_right
	step_end

OldaleTown_PlayerKnockBack:
	lock_facing_direction
	jump_2_right
	step_end

OldaleTown_EventScript_ItemTM27::
	finditem ITEM_TM27
	end


OldaleTown_EventScript_ItemMysticWater::
	finditem ITEM_MYSTIC_WATER
	end


OldaleTown_EventScript_ItemPrismScale::
	finditem ITEM_PRISM_SCALE
	end


OldaleTown_EventScript_FootprintsMan::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_STEELIXITE, OldaleTown_EventScript_FootprintsMan_1
	goto_if_set FLAG_FIND_OUT_GUY_IN_CHERRYGROVE, OldaleTown_EventScript_FootprintsMan_2
	msgbox OldaleTown_EventScript_FootprintsMan_Text_2
	release
	end

OldaleTown_EventScript_FootprintsMan_1:
	msgbox OldaleTown_EventScript_FootprintsMan_Text_0
	release
	end

OldaleTown_EventScript_FootprintsMan_2:
	msgbox OldaleTown_EventScript_FootprintsMan_Text_1
	giveitem ITEM_STEELIXITE
	setflag FLAG_RECEIVED_STEELIXITE
	release
	end


OldaleTown_EventScript_TownSign::
	msgbox OldaleTown_Text_TownSign, MSGBOX_SIGN
	end

OldaleTown_EventScript_MartEmployee::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_POTION_OLDALE, OldaleTown_EventScript_ExplainPotion
	msgbox OldaleTown_Text_IWorkAtPokemonMart, MSGBOX_DEFAULT
	giveitem ITEM_POTION
	goto_if_eq VAR_RESULT, FALSE, OldaleTown_EventScript_BagIsFull
	msgbox OldaleTown_Text_PotionExplanation, MSGBOX_DEFAULT
	setflag FLAG_RECEIVED_POTION_OLDALE
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

OldaleTown_Text_IWorkAtPokemonMart:
	.string "Hi!\n"
	.string "I work at this POKéMON MART.\p"
	.string "We sell a variety of goods including\n"
	.string "POKé BALLS for catching POKéMON, as\l"
	.string "well as POTIONs for healing POKéMON.\p"
	.string "Here, I'd like you to have this as\n"
	.string "a free sample.$"

OldaleTown_Text_PotionExplanation:
	.string "A POTION can be used anytime, so it's\n"
	.string "even more useful than a POKéMON CENTER\l"
	.string "in certain situations.$"

OldaleTown_Text_TownSign:
	.string "CHERRYGROVE CITY\n"
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

OldaleTown_EventScript_Girl_Text_0:
	.string "If you have a POKéMON that knows the\n"
	.string "move Surf, and the Olivine City gym\l"
	.string "badge, then it can ferry you across the\l"
	.string "water.\p"
	.string "It's amazing how much more that opens\n"
	.string "up the world.$"

OldaleTown_EventScript_Mailbox_Text_0:
	.string "{PLAYER}'s HOUSE$"

OldaleTown_EventScript_ShaneBattle_Text_0:
	.string "SHANE: Wow! You actually made it back\n"
	.string "on your own.\p"
	.string "I see you got a POKéMON from PROF. ELM.\n"
	.string "You know, I got one from him too, but it\l"
	.string "was too weak. I got rid of that thing.\p"
	.string "Hey, let's test our your new POKéMON!\n"
	.string "I'll see if it's a weakling!$"

OldaleTown_EventScript_ShaneBattle_Text_1:
	.string "You'll pay for cheating!$"

OldaleTown_EventScript_FootprintsMan_Text_0:
	.string "Man, it gets exhausting having so many\n"
	.string "girls chasing after me.$"

OldaleTown_EventScript_FootprintsMan_Text_1:
	.string "Man, lately my girlfriend can't seem to\n"
	.string "keep her hands off of me.\p"
	.string "I had to get out of the house for some\n"
	.string "fresh air.\p"
	.string "...\p"
	.string "What's that?\p"
	.string "...\p"
	.string "A long distance girlfriend?\p"
	.string "Oh god, not this crazy stalker chick\n"
	.string "again...\p"
	.string "Look, just tell her I moved to the Hoenn\n"
	.string "region or something.\p"
	.string "You can have this for keeping my real\n"
	.string "location a secret from her.$"

OldaleTown_EventScript_FootprintsMan_Text_2:
	.string "Man, lately my girlfriend can't seem to\n"
	.string "keep her hands off of me.\p"
	.string "I had to get out of the house for some\n"
	.string "fresh air.$"

OldaleTown_Text_ShaneDefeat::
	.string "You cheated!$"
