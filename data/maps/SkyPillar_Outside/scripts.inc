SkyPillar_Outside_MapScripts::
	.byte 0


SkyPillar_Outside_EventScript_Fisherman::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_GOOD_ROD, SkyPillar_Outside_EventScript_Fisherman_1
	msgbox SkyPillar_Outside_EventScript_Fisherman_Text_1, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq SkyPillar_Outside_EventScript_Fisherman_4
	msgbox SkyPillar_Outside_EventScript_Fisherman_Text_3
	waitmessage
	giveitem ITEM_GOOD_ROD
	msgbox SkyPillar_Outside_EventScript_Fisherman_Text_4
	setflag FLAG_RECEIVED_GOOD_ROD
	release
	end

SkyPillar_Outside_EventScript_Fisherman_1:
	msgbox SkyPillar_Outside_EventScript_Fisherman_Text_0
	release
	end

SkyPillar_Outside_EventScript_Fisherman_4:
	msgbox SkyPillar_Outside_EventScript_Fisherman_Text_2
	release
	end


SkyPillar_Outside_EventScript_Fisherman_Text_0:
	.string "How has that Good Rod been treating\n"
	.string "you?\p"
	.string "Have you tried fishing in the little\n"
	.string "pond in town?$"

SkyPillar_Outside_EventScript_Fisherman_Text_1:
	.string "Hmm, that fishing rod you have...\p"
	.string "Is that just a stick with some string\n"
	.string "tied to it?\p"
	.string "Say, how would you like a real fishing\n"
	.string "rod?$"

SkyPillar_Outside_EventScript_Fisherman_Text_2:
	.string "That's fine, but you won't be able to\n"
	.string "catch much with that Old Rod.$"

SkyPillar_Outside_EventScript_Fisherman_Text_3:
	.string "That's what I like to hear!\p"
	.string "A true fisherman in the making!$"

SkyPillar_Outside_EventScript_Fisherman_Text_4:
	.string "With a better rod, you'll be able to find\n"
	.string "better POKéMON.\p"
	.string "And don't worry, I have plenty of rods\n"
	.string "to spare.$"
