RustboroCity_House2_MapScripts::
	.byte 0


RustboroCity_House2_EventScript_PokefanF::
	msgbox RustboroCity_House2_EventScript_PokefanF_Text_0, MSGBOX_NPC
	end


RustboroCity_House2_EventScript_Fisherman::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_OLD_ROD, RustboroCity_House2_EventScript_Fisherman_1
	msgbox RustboroCity_House2_EventScript_Fisherman_Text_1, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_ne RustboroCity_House2_EventScript_Fisherman_4
	msgbox RustboroCity_House2_EventScript_Fisherman_Text_3
	release
	end

RustboroCity_House2_EventScript_Fisherman_1:
	msgbox RustboroCity_House2_EventScript_Fisherman_Text_0
	release
	end

RustboroCity_House2_EventScript_Fisherman_4:
	giveitem ITEM_OLD_ROD
	setflag FLAG_RECEIVED_OLD_ROD
	msgbox RustboroCity_House2_EventScript_Fisherman_Text_2
	release
	end


RustboroCity_House2_EventScript_PokefanF_Text_0:
	.string "My husband is a great fisherman, I just\n"
	.string "wish he would stop buying so many rods.$"

RustboroCity_House2_EventScript_Fisherman_Text_0:
	.string "That OLD ROD hasn't broken yet, has it?\n"
	.string "Haha!\p"
	.string "Don't worry, you can find more than just\n"
	.string "Magikarp with it.$"

RustboroCity_House2_EventScript_Fisherman_Text_1:
	.string "Hmm, you have the aura of a master\n"
	.string "fisherman.\p"
	.string "It's your calm demeanor.\p"
	.string "If the fish detect hostility on your\n"
	.string "end of the line, they won't bite.\p"
	.string "Say, I have an Old Rod that I haven't\n"
	.string "used for years.\p"
	.string "I'll let you have it to get you started.\p"
	.string "What do you say, will you take it?$"

RustboroCity_House2_EventScript_Fisherman_Text_2:
	.string "That's the spirit!\p"
	.string "A master fisherman in the making!\p"
	.string "You should try fishing in Violet City\n"
	.string "while you're here.$"

RustboroCity_House2_EventScript_Fisherman_Text_3:
	.string "Hmm, maybe I was wrong about you.$"
