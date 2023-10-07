RustboroCity_Flat2_2F_MapScripts::
	.byte 0


RustboroCity_Flat2_2F_EventScript_ToxicBeauty::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_TOXIC_TM, RustboroCity_Flat2_2F_EventScript_ToxicBeauty_1
	msgbox RustboroCity_Flat2_2F_EventScript_ToxicBeauty_Text_1
	giveitem ITEM_TM06_TOXIC
	setflag FLAG_RECEIVED_TOXIC_TM
	msgbox RustboroCity_Flat2_2F_EventScript_ToxicBeauty_Text_2
	release
	end

RustboroCity_Flat2_2F_EventScript_ToxicBeauty_1:
	msgbox RustboroCity_Flat2_2F_EventScript_ToxicBeauty_Text_0
	release
	end


RustboroCity_Flat2_2F_EventScript_Man::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_TOXIC_TM, RustboroCity_Flat2_2F_EventScript_Man_1
	msgbox RustboroCity_Flat2_2F_EventScript_Man_Text_1
	release
	end

RustboroCity_Flat2_2F_EventScript_Man_1:
	msgbox RustboroCity_Flat2_2F_EventScript_Man_Text_0
	release
	end


RustboroCity_Flat2_2F_EventScript_ToxicBeauty_Text_0:
	.string "My boyfriend was mad that I spent all\n"
	.string "of his money at the Game Corner, but it\l"
	.string "wouldn't be a problem if he just made\l"
	.string "more money!\p"
	.string "He's so useless!$"

RustboroCity_Flat2_2F_EventScript_ToxicBeauty_Text_1:
	.string "My boyfriend can't do anything right!\p"
	.string "I told him to go out and buy me\n"
	.string "something good, but all he came back\l"
	.string "with was a TM that's as useless as he\l"
	.string "is!\p"
	.string "Worst gift ever!\p"
	.string "Here, you take it.$"

RustboroCity_Flat2_2F_EventScript_ToxicBeauty_Text_2:
	.string "He's lucky I don't leave him for someone\n"
	.string "else, I bet the old man next door has\l"
	.string "some money at least.$"

RustboroCity_Flat2_2F_EventScript_Man_Text_0:
	.string "I gave my girlfriend the TM for Toxic\n"
	.string "hoping she could take a hint.\p"
	.string "I really don't know what else to do, she\n"
	.string "threatens me if I even think about\l"
	.string "breaking up with her.$"

RustboroCity_Flat2_2F_EventScript_Man_Text_1:
	.string "I thought it would be cool to date a\n"
	.string "beauty, but she's the worst!\p"
	.string "I really don't know what to do, she\n"
	.string "threatens me if I even think about\l"
	.string "breaking up with her.$"
