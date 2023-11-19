Route116_MapScripts::
	.byte 0


Route116_EventScript_Nerd::
	msgbox Route116_EventScript_Nerd_Text_0, MSGBOX_NPC
	end


Route116_EventScript_KarateGuy::
	msgbox Route116_EventScript_KarateGuy_Text_0, MSGBOX_NPC
	end


Route116_EventScript_Camper::
	msgbox Route116_EventScript_Camper_Text_0, MSGBOX_NPC
	end


Route116_EventScript_SafariSign::
	msgbox Route116_EventScript_SafariSign_Text_0, MSGBOX_SIGN
	end


Route116_EventScript_Nerd_Text_0:
	.string "Some sections of the Safari Zone are\n"
	.string "only accessible if you have the HM\l"
	.string "move, Surf.$"

Route116_EventScript_KarateGuy_Text_0:
	.string "The Safari Zone actually has a\n"
	.string "sandstorm section which has all sorts\l"
	.string "of desert dwelling POKéMON.\p"
	.string "That's where I found my Scraggy!$"

Route116_EventScript_Camper_Text_0:
	.string "The Safari Zone has a ton of POKéMON\n"
	.string "that can't be found anywhere else in\l"
	.string "Johto, I'm really glad they moved it so\l"
	.string "close to Olivine.$"

Route116_EventScript_SafariSign_Text_0:
	.string "SAFARI ZONE$"
