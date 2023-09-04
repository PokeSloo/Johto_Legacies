RustboroCity_House3_MapScripts::
	.byte 0

RustboroCity_House3_EventScript_OldMan::
	msgbox RustboroCity_House3_Text_IGivePerfectlySuitedNicknames, MSGBOX_NPC
	end

RustboroCity_House3_EventScript_OldWoman::
	msgbox RustboroCity_House3_Text_NamingPikachuPekachu, MSGBOX_NPC
	end

@ Misspelling on purpose, see nickname
RustboroCity_House3_EventScript_Pekachu::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_HYPNO, CRY_MODE_NORMAL
	msgbox RustboroCity_House3_Text_Pekachu, MSGBOX_DEFAULT
	waitmoncry
	release
	end

RustboroCity_House3_Text_IGivePerfectlySuitedNicknames:
	.string "Hrmm, I'm always so tired.\p"
	.string "I don't know what it is, but I feel like I\n"
	.string "can never get enough sleep.$"

RustboroCity_House3_Text_NamingPikachuPekachu:
	.string "My husband's eyesight isn't very good\n"
	.string "these days, he thinks his Hypno is just\l"
	.string "a tall Pikachu.$"

RustboroCity_House3_Text_Pekachu:
	.string "HYPNO: Hypnoo!$"

