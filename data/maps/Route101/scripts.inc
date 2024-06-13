Route101_MapScripts::
	.byte 0


Route101_EventScript_Boy1::
	msgbox Route101_EventScript_Boy1_Text_0, MSGBOX_NPC
	end


Route101_EventScript_Boy2::
	msgbox Route101_EventScript_Boy2_Text_0, MSGBOX_NPC
	end


Route101_EventScript_SignLeft::
	msgbox Route101_EventScript_SignLeft_Text_0, MSGBOX_SIGN
	end


Route101_EventScript_SignRight::
	msgbox Route101_EventScript_SignRight_Text_0, MSGBOX_SIGN
	end


Route101_EventScript_Boy1_Text_0:
	.string "Oh, hey {PLAYER}!\p"
	.string "I see you finally received your first\n"
	.string "POKéMON too.\p"
	.string "Going out, and catching even more\n"
	.string "POKéMON is super fun!\p"
	.string "I wonder how many there are.$"

Route101_EventScript_Boy2_Text_0:
	.string "Every route has one or two super rare\n"
	.string "POKéMON, you'll be lucky if you see one\l"
	.string "though.$"

Route101_EventScript_SignLeft_Text_0:
	.string "ROUTE 29\n"
	.string "{LEFT_ARROW} CHERRYGROVE CITY$"

Route101_EventScript_SignRight_Text_0:
	.string "ROUTE 29\n"
	.string "{RIGHT_ARROW} NEW BARK TOWN$"
