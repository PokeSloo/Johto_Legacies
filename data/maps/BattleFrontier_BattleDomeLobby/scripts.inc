BattleFrontier_BattleDomeLobby_MapScripts::
	.byte 0


BattleFrontier_BattleDomeLobby_EventScript_Guard::
	lock
	faceplayer
	goto_if_set FLAG_GOLDENROD_SEWER_OPEN, BattleFrontier_BattleDomeLobby_EventScript_Guard_1
	goto_if_set FLAG_BOUGHT_SHOW_TICKET, BattleFrontier_BattleDomeLobby_EventScript_Guard_2
	msgbox BattleFrontier_BattleDomeLobby_EventScript_Guard_Text_4
	release
	end

BattleFrontier_BattleDomeLobby_EventScript_Guard_1:
	msgbox BattleFrontier_BattleDomeLobby_EventScript_Guard_Text_0
	release
	end

BattleFrontier_BattleDomeLobby_EventScript_Guard_2:
	specialvar VAR_RESULT, GetPlayerFacingDirection
	compare VAR_RESULT, DIR_NORTH
	goto_if_eq BattleFrontier_BattleDomeLobby_EventScript_Guard_6
	compare VAR_RESULT, DIR_SOUTH
	goto_if_eq BattleFrontier_BattleDomeLobby_EventScript_Guard_7
	msgbox BattleFrontier_BattleDomeLobby_EventScript_Guard_Text_3
	release
	end

BattleFrontier_BattleDomeLobby_EventScript_Guard_6:
	msgbox BattleFrontier_BattleDomeLobby_EventScript_Guard_Text_1
	waitmessage
	closemessage
	applymovement 7, BattleFrontier_BattleDomeLobby_Movement_GuardWalkUp
	waitmovement 0
	release
	end

BattleFrontier_BattleDomeLobby_EventScript_Guard_7:
	msgbox BattleFrontier_BattleDomeLobby_EventScript_Guard_Text_2
	waitmessage
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, BattleFrontier_BattleDomeLobby_Movement_PlayerBackUp
	waitmovement 0
	applymovement 7, BattleFrontier_BattleDomeLobby_Movement_GuardWalkUp
	waitmovement 0
	release
	end


BattleFrontier_BattleDomeLobby_Movement_GuardWalkUp:
	walk_up
	walk_left
	walk_in_place_right
	step_end

BattleFrontier_BattleDomeLobby_Movement_PlayerBackUp:
	lock_facing_direction
	walk_up
	unlock_facing_direction
	face_down
	step_end

BattleFrontier_BattleDomeLobby_EventScript_DeskWoman::
	lock
	faceplayer
	goto_if_set FLAG_GOLDENROD_SEWER_OPEN, BattleFrontier_BattleDomeLobby_EventScript_DeskWoman_1
	goto_if_set FLAG_BOUGHT_SHOW_TICKET, BattleFrontier_BattleDomeLobby_EventScript_DeskWoman_2
	msgbox BattleFrontier_BattleDomeLobby_EventScript_DeskWoman_Text_2
	waitmessage
	showmoneybox 0, 0
	msgbox BattleFrontier_BattleDomeLobby_EventScript_DeskWoman_Text_3, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq BattleFrontier_BattleDomeLobby_EventScript_DeskWoman_6
	checkmoney 1000
	compare VAR_RESULT, NO
	goto_if_eq BattleFrontier_BattleDomeLobby_EventScript_DeskWoman_9
	removemoney 1000
	updatemoneybox
	playse SE_SHOP
	waitse
	msgbox BattleFrontier_BattleDomeLobby_EventScript_DeskWoman_Text_6
	waitmessage
	closemessage
	hidemoneybox
	playfanfare MUS_OBTAIN_ITEM
	msgbox BattleFrontier_BattleDomeLobby_EventScript_DeskWoman_Text_7
	waitfanfare
	closemessage
	setflag FLAG_BOUGHT_SHOW_TICKET
	msgbox BattleFrontier_BattleDomeLobby_EventScript_DeskWoman_Text_8
	release
	end

BattleFrontier_BattleDomeLobby_EventScript_DeskWoman_1:
	msgbox BattleFrontier_BattleDomeLobby_EventScript_DeskWoman_Text_0
	release
	end

BattleFrontier_BattleDomeLobby_EventScript_DeskWoman_2:
	msgbox BattleFrontier_BattleDomeLobby_EventScript_DeskWoman_Text_1
	release
	end

BattleFrontier_BattleDomeLobby_EventScript_DeskWoman_6:
	msgbox BattleFrontier_BattleDomeLobby_EventScript_DeskWoman_Text_4
	waitmessage
	hidemoneybox
	release
	end

BattleFrontier_BattleDomeLobby_EventScript_DeskWoman_9:
	msgbox BattleFrontier_BattleDomeLobby_EventScript_DeskWoman_Text_5
	waitmessage
	hidemoneybox
	release
	end


BattleFrontier_BattleDomeLobby_EventScript_BlondeGuy::
	msgbox BattleFrontier_BattleDomeLobby_EventScript_BlondeGuy_Text_0, MSGBOX_NPC
	end


BattleFrontier_BattleDomeLobby_EventScript_Lass::
	lock
	faceplayer
	goto_if_set FLAG_GOLDENROD_SEWER_OPEN, BattleFrontier_BattleDomeLobby_EventScript_Lass_1
	msgbox BattleFrontier_BattleDomeLobby_EventScript_Lass_Text_1
	release
	end

BattleFrontier_BattleDomeLobby_EventScript_Lass_1:
	msgbox BattleFrontier_BattleDomeLobby_EventScript_Lass_Text_0
	release
	end


BattleFrontier_BattleDomeLobby_EventScript_Nerd::
	msgbox BattleFrontier_BattleDomeLobby_EventScript_Nerd_Text_0, MSGBOX_NPC
	end


BattleFrontier_BattleDomeLobby_EventScript_FatGuy::
	lock
	faceplayer
	goto_if_set FLAG_GOLDENROD_SEWER_OPEN, BattleFrontier_BattleDomeLobby_EventScript_FatGuy_1
	msgbox BattleFrontier_BattleDomeLobby_EventScript_FatGuy_Text_1
	release
	end

BattleFrontier_BattleDomeLobby_EventScript_FatGuy_1:
	msgbox BattleFrontier_BattleDomeLobby_EventScript_FatGuy_Text_0
	release
	end


BattleFrontier_BattleDomeLobby_EventScript_Guard_Text_0:
	.string "I'm sorry, but there are no shows airing\n"
	.string "right now.$"

BattleFrontier_BattleDomeLobby_EventScript_Guard_Text_1:
	.string "Ah! I see you have a ticket to the Night\n"
	.string "and Dave Show.\p"
	.string "Please, step right this way.$"

BattleFrontier_BattleDomeLobby_EventScript_Guard_Text_2:
	.string "Would you like to leave?\p"
	.string "Don't take too long, your show is about\n"
	.string "to start.$"

BattleFrontier_BattleDomeLobby_EventScript_Guard_Text_3:
	.string "The show is about to start, you'd\n"
	.string "better get in there.$"

BattleFrontier_BattleDomeLobby_EventScript_Guard_Text_4:
	.string "I'm sorry, but nobody is allowed through\n"
	.string "without a Show Ticket.\p"
	.string "Please talk to the woman at the front\n"
	.string "desk.$"

BattleFrontier_BattleDomeLobby_EventScript_DeskWoman_Text_0:
	.string "I'm sorry, but no shows are airing\n"
	.string "currently.\p"
	.string "Please come back later.$"

BattleFrontier_BattleDomeLobby_EventScript_DeskWoman_Text_1:
	.string "Please go on and find your seat, your\n"
	.string "show is about to start.$"

BattleFrontier_BattleDomeLobby_EventScript_DeskWoman_Text_2:
	.string "Welcome to the Goldenrod TV Station.\p"
	.string "We are currently selling tickets to the\n"
	.string "Night and Dave Show.$"

BattleFrontier_BattleDomeLobby_EventScript_DeskWoman_Text_3:
	.string "One children's ticket will be ¥1,000.\n"
	.string "Would you like to purchase a ticket?$"

BattleFrontier_BattleDomeLobby_EventScript_DeskWoman_Text_4:
	.string "We'll be here if you change your mind,\n"
	.string "but you may miss the show if you take\l"
	.string "too long.$"

BattleFrontier_BattleDomeLobby_EventScript_DeskWoman_Text_5:
	.string "I'm sorry, but it doesn't look like you\n"
	.string "have enough money for a ticket.\p"
	.string "Please come back when you have at\n"
	.string "least ¥1,000.$"

BattleFrontier_BattleDomeLobby_EventScript_DeskWoman_Text_6:
	.string "One children's ticket to the Night and\n"
	.string "Dave Show.$"

BattleFrontier_BattleDomeLobby_EventScript_DeskWoman_Text_7:
	.string "{PLAYER} received the Show Ticket!$"

BattleFrontier_BattleDomeLobby_EventScript_DeskWoman_Text_8:
	.string "Enjoy the show!$"

BattleFrontier_BattleDomeLobby_EventScript_BlondeGuy_Text_0:
	.string "You're lucky the children's tickets are\n"
	.string "so cheap.\p"
	.string "You wouldn't believe what they charge\n"
	.string "for adults!$"

BattleFrontier_BattleDomeLobby_EventScript_Lass_Text_0:
	.string "Did you see the Night and Dave Show?\p"
	.string "Whitney is the best!$"

BattleFrontier_BattleDomeLobby_EventScript_Lass_Text_1:
	.string "Whitney, our very own gym leader, is one\n"
	.string "of the guests appearing tonight!\p"
	.string "I wonder who the other guest will be...$"

BattleFrontier_BattleDomeLobby_EventScript_Nerd_Text_0:
	.string "I love the Night and Dave Show, I watch\n"
	.string "it every night at home!$"

BattleFrontier_BattleDomeLobby_EventScript_FatGuy_Text_0:
	.string "I can't believe I missed the Night and\n"
	.string "Dave Show!\p"
	.string "Whitney is my favorite gym leader, and\n"
	.string "I've failed her!$"

BattleFrontier_BattleDomeLobby_EventScript_FatGuy_Text_1:
	.string "Are you going here to see the Night and\n"
	.string "Dave show as well?\p"
	.string "I'm loading up on snacks before going\n"
	.string "in.$"
