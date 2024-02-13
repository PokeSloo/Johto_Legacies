Route113_GlassWorkshop_MapScripts::
	.byte 0


Route113_GlassWorkshop_EventScript_NewMrPoke::
	lock
	faceplayer
	goto_if_set FLAG_GOT_RT30_EGG, Route113_GlassWorkshop_EventScript_NewMrPoke_1
	msgbox Route113_GlassWorkshop_EventScript_NewMrPoke_Text_1, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_ne Route113_GlassWorkshop_EventScript_NewMrPoke_4
	getpartysize
	compare VAR_RESULT, PARTY_SIZE
	goto_if_eq Route113_GlassWorkshop_EventScript_NewMrPoke_7
	setflag FLAG_GOT_RT30_EGG
	playfanfare MUS_OBTAIN_ITEM
	msgbox Route113_GlassWorkshop_EventScript_NewMrPoke_Text_4
	waitfanfare
	giveegg SPECIES_TOGEPI
	msgbox Route113_GlassWorkshop_EventScript_NewMrPoke_Text_5
	release
	end

Route113_GlassWorkshop_EventScript_NewMrPoke_1:
	msgbox Route113_GlassWorkshop_EventScript_NewMrPoke_Text_0
	release
	end

Route113_GlassWorkshop_EventScript_NewMrPoke_4:
	msgbox Route113_GlassWorkshop_EventScript_NewMrPoke_Text_2
	release
	end

Route113_GlassWorkshop_EventScript_NewMrPoke_7:
	msgbox Route113_GlassWorkshop_EventScript_NewMrPoke_Text_3
	release
	end


Route113_GlassWorkshop_EventScript_LittleGirl::
	msgbox Route113_GlassWorkshop_EventScript_LittleGirl_Text_0, MSGBOX_NPC
	end


Route113_GlassWorkshop_EventScript_NewMrPoke_Text_0:
	.string "Did you know some POKéMON can hatch\n"
	.string "knowing moves passed down from their\l"
	.string "parents?$"

Route113_GlassWorkshop_EventScript_NewMrPoke_Text_1:
	.string "Hello there, young trainer.\n"
	.string "You look like someone who might be\l"
	.string "interested in breeding POKéMON.\p"
	.string "You know, when I was your age, my father\n"
	.string "gave me a POKéMON egg. I reluctantly\l"
	.string "carried it around for weeks, but once\l"
	.string "it hatched I was hooked!\p"
	.string "Now, POKéMON eggs are all I can think\n"
	.string "about.\p"
	.string "Oh, who am I you ask?\p"
	.string "You can call me MR. POKéMON.\p"
	.string "My father used to go by the same name.\n"
	.string "I expect my son to take up the name\l"
	.string "when he gets older.\p"
	.string "But you don't look interested in\n"
	.string "hearing about my name.\p"
	.string "Hmm, maybe you'll be interested in this.\p"
	.string "I have so many POKéMON eggs, I don't\n"
	.string "know what to do with them.\p"
	.string "Would you like to have one?$"

Route113_GlassWorkshop_EventScript_NewMrPoke_Text_2:
	.string "Come back if you ever change your mind.$"

Route113_GlassWorkshop_EventScript_NewMrPoke_Text_3:
	.string "I'm sorry, but it doesn't look like you\n"
	.string "have any room in your party.\p"
	.string "Please come back after you've made\n"
	.string "some room.$"

Route113_GlassWorkshop_EventScript_NewMrPoke_Text_4:
	.string "{PLAYER} received the POKéMON egg!$"

Route113_GlassWorkshop_EventScript_NewMrPoke_Text_5:
	.string "Please take good care of it.$"

Route113_GlassWorkshop_EventScript_LittleGirl_Text_0:
	.string "Do you like POKéMON eggs?\n"
	.string "I love POKéMON eggs!$"
