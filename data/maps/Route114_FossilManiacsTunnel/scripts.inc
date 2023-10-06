Route114_FossilManiacsTunnel_MapScripts::
	.byte 0


Route114_FossilManiacsTunnel_EventScript_Groomer::
	lock
	faceplayer
	dotimebasedevents
	goto_if_set FLAG_DAILY_GOLDENROD_GROOMER, Route114_FossilManiacsTunnel_EventScript_Groomer_1
	msgbox Route114_FossilManiacsTunnel_EventScript_Groomer_Text_1, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq Route114_FossilManiacsTunnel_EventScript_Groomer_4
	msgbox Route114_FossilManiacsTunnel_EventScript_Groomer_Text_3
	waitmessage
	closemessage
	special ChoosePartyMon
	waitstate
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq Route114_FossilManiacsTunnel_EventScript_Groomer_7
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
	compare VAR_RESULT, SPECIES_EGG
	goto_if_eq Route114_FossilManiacsTunnel_EventScript_Groomer_10
	msgbox Route114_FossilManiacsTunnel_EventScript_Groomer_Text_5
	waitmessage
	closemessage
	special FriendshipBreeder
	playse SE_REPEL
	delay 30
	playse SE_CLICK
	delay 30
	playse SE_CLICK
	delay 30
	playse SE_CLICK
	delay 30
	playse SE_REPEL
	waitse
	delay 30
	msgbox Route114_FossilManiacsTunnel_EventScript_Groomer_Text_6
	setflag FLAG_DAILY_GOLDENROD_GROOMER
	release
	end

Route114_FossilManiacsTunnel_EventScript_Groomer_1:
	msgbox Route114_FossilManiacsTunnel_EventScript_Groomer_Text_0
	release
	end

Route114_FossilManiacsTunnel_EventScript_Groomer_4:
	msgbox Route114_FossilManiacsTunnel_EventScript_Groomer_Text_2
	release
	end

Route114_FossilManiacsTunnel_EventScript_Groomer_7:
	msgbox Route114_FossilManiacsTunnel_EventScript_Groomer_Text_2
	release
	end

Route114_FossilManiacsTunnel_EventScript_Groomer_10:
	msgbox Route114_FossilManiacsTunnel_EventScript_Groomer_Text_4
	release
	end


Route114_FossilManiacsTunnel_EventScript_Ampharos::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_AMPHAROS, CRY_MODE_NORMAL
	applymovement 2, LittlerootTown_BrendansHouse_1F_Heart
	msgbox Route114_FossilManiacsTunnel_EventScript_Ampharos_Text_0
	waitmovement 0
	waitmoncry
	release
	end


Route114_FossilManiacsTunnel_EventScript_Groomer_Text_0:
	.string "Come see me again tomorrow, and I will\n"
	.string "beautify another one of your POKéMON!$"

Route114_FossilManiacsTunnel_EventScript_Groomer_Text_1:
	.string "Hi, I'm the POKéMON groomer!\p"
	.string "I can beautify one of your POKéMON and\n"
	.string "make them a little happier in the\l"
	.string "process.\p"
	.string "Would you like me to groom one of your\n"
	.string "POKéMON?$"

Route114_FossilManiacsTunnel_EventScript_Groomer_Text_2:
	.string "Ok, maybe some other time then.$"

Route114_FossilManiacsTunnel_EventScript_Groomer_Text_3:
	.string "Fantastic! And which POKéMON needs\n"
	.string "grooming?$"

Route114_FossilManiacsTunnel_EventScript_Groomer_Text_4:
	.string "I'm sorry, there's not much I can do for\n"
	.string "an egg...$"

Route114_FossilManiacsTunnel_EventScript_Groomer_Text_5:
	.string "Ok! I will work my magic!$"

Route114_FossilManiacsTunnel_EventScript_Groomer_Text_6:
	.string "All done!\p"
	.string "I think it looks a little happier now!$"

Route114_FossilManiacsTunnel_EventScript_Ampharos_Text_0:
	.string "AMPHAROS: Ampha! Ampha!$"
