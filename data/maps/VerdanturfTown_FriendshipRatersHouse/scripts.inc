VerdanturfTown_FriendshipRatersHouse_MapScripts::
	.byte 0


VerdanturfTown_FriendshipRatersHouse_EventScript_OldMan::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_POKEFLUTE, VerdanturfTown_FriendshipRatersHouse_EventScript_OldMan_1
	msgbox VerdanturfTown_FriendshipRatersHouse_EventScript_OldMan_Text_1
	giveitem ITEM_POKE_FLUTE
	msgbox VerdanturfTown_FriendshipRatersHouse_EventScript_OldMan_Text_2
	setflag FLAG_RECEIVED_POKEFLUTE
	release
	end

VerdanturfTown_FriendshipRatersHouse_EventScript_OldMan_1:
	msgbox VerdanturfTown_FriendshipRatersHouse_EventScript_OldMan_Text_0
	release
	end


VerdanturfTown_FriendshipRatersHouse_EventScript_Girl::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_TM42, VerdanturfTown_FriendshipRatersHouse_EventScript_Girl_1
	msgbox VerdanturfTown_FriendshipRatersHouse_EventScript_Girl_Text_1
	giveitem ITEM_TM42_FACADE
	msgbox VerdanturfTown_FriendshipRatersHouse_EventScript_Girl_Text_2
	setflag FLAG_RECEIVED_TM42
	release
	end

VerdanturfTown_FriendshipRatersHouse_EventScript_Girl_1:
	msgbox VerdanturfTown_FriendshipRatersHouse_EventScript_Girl_Text_0
	release
	end


VerdanturfTown_FriendshipRatersHouse_EventScript_OldMan_Text_0:
	.string "Don't fret about taking my old Poké\n"
	.string "Flute.\p"
	.string "I don't need it anymore, just the sound\n"
	.string "of my voice will wake up any sleeping\l"
	.string "POKéMON! Haha!$"

VerdanturfTown_FriendshipRatersHouse_EventScript_OldMan_Text_1:
	.string "If you've ever had a POKéMON fall\n"
	.string "asleep during battle, you should know\l"
	.string "just how annoying it can be.\p"
	.string "Well, I have a surefire way to wake them\n"
	.string "up!$"

VerdanturfTown_FriendshipRatersHouse_EventScript_OldMan_Text_2:
	.string "Just the sound of that Poké Flute\n"
	.string "alone will wake up any sleeping\l"
	.string "POKéMON!\p"
	.string "It works every time.$"

VerdanturfTown_FriendshipRatersHouse_EventScript_Girl_Text_0:
	.string "I still haven't told grandpa to be quiet\n"
	.string "when I'm trying to sleep.\p"
	.string "Ugh, someday I'm going to lose it.$"

VerdanturfTown_FriendshipRatersHouse_EventScript_Girl_Text_1:
	.string "I can't get an ounce of sleep around\n"
	.string "here, grandpa is just too loud!\p"
	.string "It really makes me mad, but I just don't\n"
	.string "have the heart to tell him, so I just\l"
	.string "smile and bear with it.\p"
	.string "But enough about me.\p"
	.string "You look like a strong TRAINER, perhaps\n"
	.string "you could make use of this TM.$"

VerdanturfTown_FriendshipRatersHouse_EventScript_Girl_Text_2:
	.string "That TM contains the move Facade, it\n"
	.string "will double in power if your POKéMON has\l"
	.string "a status effect.$"
