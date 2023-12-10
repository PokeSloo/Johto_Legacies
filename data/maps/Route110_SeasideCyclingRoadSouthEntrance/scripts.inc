Route110_SeasideCyclingRoadSouthEntrance_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route110_SeasideCyclingRoadSouthEntrance_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

Route110_SeasideCyclingRoadSouthEntrance_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	setrespawn HEAL_LOCATION_ROUTE_110
	end


Route110_SeasideCyclingRoadSouthEntrance_EventScript_Nurse::
	lock
	faceplayer
	goto_if_set FLAG_TALKED_TO_RESORT_NURSE, Route110_SeasideCyclingRoadSouthEntrance_EventScript_Nurse_1
	msgbox Route110_SeasideCyclingRoadSouthEntrance_EventScript_Nurse_Text_2, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq Route110_SeasideCyclingRoadSouthEntrance_EventScript_Nurse_7
	setflag FLAG_TALKED_TO_RESORT_NURSE
	goto Route110_SeasideCyclingRoadSouthEntrance_EventScript_Heal
	return

Route110_SeasideCyclingRoadSouthEntrance_EventScript_Nurse_1:
	msgbox Route110_SeasideCyclingRoadSouthEntrance_EventScript_Nurse_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq Route110_SeasideCyclingRoadSouthEntrance_EventScript_Nurse_4
	goto Route110_SeasideCyclingRoadSouthEntrance_EventScript_Heal
	return

Route110_SeasideCyclingRoadSouthEntrance_EventScript_Nurse_4:
	msgbox Route110_SeasideCyclingRoadSouthEntrance_EventScript_Nurse_Text_1
	release
	end

Route110_SeasideCyclingRoadSouthEntrance_EventScript_Nurse_7:
	msgbox Route110_SeasideCyclingRoadSouthEntrance_EventScript_Nurse_Text_1
	setflag FLAG_TALKED_TO_RESORT_NURSE
	release
	end


Route110_SeasideCyclingRoadSouthEntrance_EventScript_Heal::
	msgbox Route110_SeasideCyclingRoadSouthEntrance_EventScript_Heal_Text_0
	waitmessage
	closemessage
	fadescreen FADE_TO_BLACK
	special HealPlayerParty
	playfanfare MUS_HEAL
	waitfanfare
	fadescreen FADE_FROM_BLACK
	msgbox Route110_SeasideCyclingRoadSouthEntrance_EventScript_Heal_Text_1
	release
	end


Route110_SeasideCyclingRoadSouthEntrance_EventScript_Nurse_Text_0:
	.string "Welcome back, would you like me to heal\n"
	.string "your POKéMON?$"

Route110_SeasideCyclingRoadSouthEntrance_EventScript_Nurse_Text_1:
	.string "I'll be here if you need me.$"

Route110_SeasideCyclingRoadSouthEntrance_EventScript_Nurse_Text_2:
	.string "Hello, and welcome to\n"
	.string "the POKéMON CENTER.\p"
	.string "We restore your...\p"
	.string "Sorry, you can take the nurse away from\n"
	.string "work, but you can't take the work away\l"
	.string "from the nurse.\p"
	.string "I'm actually just here on vacation.\p"
	.string "Although, I can still heal your POKéMON\n"
	.string "if you would like?$"

Route110_SeasideCyclingRoadSouthEntrance_EventScript_Heal_Text_0:
	.string "Okay, I'll take your POKéMON\n"
	.string "for a few seconds.$"

Route110_SeasideCyclingRoadSouthEntrance_EventScript_Heal_Text_1:
	.string "Thank you for waiting.\p"
	.string "I've restored your POKéMON\n"
	.string "to full health.\p"
	.string "I hope to see you again!$"
