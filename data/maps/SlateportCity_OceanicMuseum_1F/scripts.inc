SlateportCity_OceanicMuseum_1F_MapScripts::
	.byte 0

SlateportCity_OceanicMuseum_1F_EventScript_EntranceAttendant::
	msgbox SlateportCity_OceanicMuseum_1F_Text_PleaseEnjoyYourself, MSGBOX_NPC
	end

SlateportCity_OceanicMuseum_1F_EventScript_OceanSoilDisplay::
	msgbox SlateportCity_OceanicMuseum_1F_Text_OceanSoilDisplay, MSGBOX_SIGN
	end

SlateportCity_OceanicMuseum_1F_EventScript_FossilDisplay::
	msgbox SlateportCity_OceanicMuseum_1F_Text_FossilDisplay, MSGBOX_SIGN
	end

SlateportCity_OceanicMuseum_1F_EventScript_MuseumPatron1::
	msgbox SlateportCity_OceanicMuseum_1F_Text_LearnAboutSeaForBattling, MSGBOX_NPC
	end

SlateportCity_OceanicMuseum_1F_EventScript_MuseumPatron2::
	msgbox SlateportCity_OceanicMuseum_1F_Text_SternIsRoleModel, MSGBOX_NPC
	end

SlateportCity_OceanicMuseum_1F_EventScript_MuseumPatron3::
	msgbox SlateportCity_OceanicMuseum_1F_Text_MustBePokemonWeDontKnow, MSGBOX_NPC
	end

SlateportCity_OceanicMuseum_1F_EventScript_MuseumPatron4::
	msgbox SlateportCity_OceanicMuseum_1F_Text_WantSeaPokemon, MSGBOX_NPC
	end

SlateportCity_OceanicMuseum_1F_EventScript_FamiliarGrunt::
	msgbox SlateportCity_OceanicMuseum_1F_Text_YouHaveToTakeThis, MSGBOX_NPC
	release
	end

SlateportCity_OceanicMuseum_1F_Text_PleaseEnjoyYourself:
	.string "Welcome to the Cianwood Deep Sea Lab.\p"
	.string "Feel free to explore the lab, but don't\n"
	.string "bother the scientists too much.$"

SlateportCity_OceanicMuseum_1F_Text_LearnAboutSeaForBattling:
	.string "Is this really a submarine?\p"
	.string "I haven't seen one in person before.\p"
	.string "How does anyone fit inside this thing?$"

SlateportCity_OceanicMuseum_1F_Text_SternIsRoleModel:
	.string "Have you had any fossils resurrected\n"
	.string "before?\p"
	.string "They really seem to have the process\n"
	.string "worked out well now!$"

SlateportCity_OceanicMuseum_1F_Text_MustBePokemonWeDontKnow:
	.string "Can you believe over 80 percent of the\n"
	.string "oceans remain unexplored!\p"
	.string "That's what drove me to work here, I\n"
	.string "want to be the one to map out the rest\l"
	.string "of our planet.$"

SlateportCity_OceanicMuseum_1F_Text_WantSeaPokemon:
	.string "I've taken many trips down to the\n"
	.string "seafloor, but every single time, I'll\l"
	.string "discover a new fossil, or cave.\p"
	.string "It's a wonderful world down there!$"

SlateportCity_OceanicMuseum_1F_Text_YouHaveToTakeThis:
	.string "The seafloor is a mystical place.\p"
	.string "It's quiet and mysterious, yet there\n"
	.string "are still POKéMON roaming around.$"

SlateportCity_OceanicMuseum_1F_Text_OceanSoilDisplay:
	.string "It's a sample of soil from the ocean\n"
	.string "floor.\p"
	.string "“Over many years, the remains of\n"
	.string "life-forms settle at the bottom of\l"
	.string "the sea, making sedimentary layers.\p"
	.string "“By analyzing these layers, the\n"
	.string "ancient past is revealed.”$"

SlateportCity_OceanicMuseum_1F_Text_FossilDisplay:
	.string "It's a fossil with wavy ridges on it.\p"
	.string "“Soil on the ocean floor gets scoured\n"
	.string "by the tide.\p"
	.string "“The flowing seawater marks the soil\n"
	.string "with small ridges and valleys.\p"
	.string "“If this soil becomes fossilized, it is\n"
	.string "called a ripple mark.”$"

