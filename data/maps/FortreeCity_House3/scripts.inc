FortreeCity_House3_MapScripts::
	.byte 0

FortreeCity_House3_EventScript_SchoolKidM::
	msgbox FortreeCity_House3_Text_OhYouHavePokedex, MSGBOX_NPC
	end

FortreeCity_House3_Text_OhYouHavePokedex:
	.string "The Olivine Gym Leader, CHARLIE, is also\n"
	.string "the lead singer for The Thunderbolts!\p"
	.string "I heard he appeared out of nowhere\n"
	.string "seven years ago.\p"
	.string "He says he's from the Lunoh region, but\n"
	.string "I've never heard of it.$"

FortreeCity_House3_EventScript_DowsingMan::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_DOWSING_ROD, FortreeCity_House3_EventScript_DowsingMan_1
	msgbox FortreeCity_House3_EventScript_DowsingMan_Text_1
	giveitem ITEM_DOWSING_MACHINE
	msgbox FortreeCity_House3_EventScript_DowsingMan_Text_2
	setflag FLAG_RECEIVED_DOWSING_ROD
	release
	end

FortreeCity_House3_EventScript_DowsingMan_1:
	msgbox FortreeCity_House3_EventScript_DowsingMan_Text_0
	release
	end


FortreeCity_House3_EventScript_DowsingMan_Text_0:
	.string "You know, there's a man in Ecruteak who\n"
	.string "collects Bottle Caps.\p"
	.string "You should pay him a visit if you find\n"
	.string "any with that Dowsing Machine.$"

FortreeCity_House3_EventScript_DowsingMan_Text_1:
	.string "Oh man, I'm getting too old to travel\n"
	.string "around searching for hidden treasures.\p"
	.string "You look like a spry young TRAINER.\p"
	.string "Here, you can have this.$"

FortreeCity_House3_EventScript_DowsingMan_Text_2:
	.string "That Dowsing Machine will point you\n"
	.string "toward hidden items.\p"
	.string "I'm sure you'll make better use of it\n"
	.string "than me.$"
