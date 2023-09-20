Route119_WeatherInstitute_1F_MapScripts::
	.byte 0

Route119_WeatherInstitute_1F_EventScript_Grunt1::
	trainerbattle_single TRAINER_GRUNT_WEATHER_INST_1, Route119_WeatherInstitute_1F_Text_Grunt1Intro, Route119_WeatherInstitute_1F_Text_Grunt1Defeat
	msgbox Route119_WeatherInstitute_1F_Text_Grunt1PostBattle, MSGBOX_AUTOCLOSE
	end

Route119_WeatherInstitute_1F_EventScript_Grunt4::
	trainerbattle_single TRAINER_GRUNT_WEATHER_INST_4, Route119_WeatherInstitute_1F_Text_Grunt4Intro, Route119_WeatherInstitute_1F_Text_Grunt4Defeat
	msgbox Route119_WeatherInstitute_1F_Text_Grunt4PostBattle, MSGBOX_AUTOCLOSE
	end

Route119_WeatherInstitute_1F_Text_Grunt1Intro:
	.string "Whoa there!\p"
	.string "Where do you think you're going?\p"
	.string "I was told to not let anyone upstairs.\p"
	.string "...\p"
	.string "Fine, maybe this will convince you!$"

Route119_WeatherInstitute_1F_Text_Grunt1Defeat:
	.string "I underestimated you because you're\n"
	.string "just a kid.$"

Route119_WeatherInstitute_1F_Text_Grunt1PostBattle:
	.string "Crap, if only I could stop you from\n"
	.string "going upstairs.\p"
	.string "I can't think of any way to hold you\n"
	.string "here other than defeating you in a\l"
	.string "POKéMON battle...$"

Route119_WeatherInstitute_1F_Text_Grunt4Intro:
	.string "Scram kid, the factory is closed right\n"
	.string "now.\p"
	.string "You're not a very good listener are you?\p"
	.string "Maybe you'll understand this!$"

Route119_WeatherInstitute_1F_Text_Grunt4Defeat:
	.string "Huh?\n"
	.string "I lost?!$"

Route119_WeatherInstitute_1F_Text_Grunt4PostBattle:
	.string "I can't believe I lost to some little kid\n"
	.string "on my first mission, maybe I should\l"
	.string "re-think this whole grunt thing.$"

Route119_WeatherInstitute_1F_EventScript_BallSalesman::
	lock
	goto_if_unset FLAG_HIDE_ROUTE_119_TEAM_AQUA, Route119_WeatherInstitute_1F_EventScript_BallSalesman_1
	msgbox Route119_WeatherInstitute_1F_EventScript_BallSalesman_Text_1
	waitmessage
	pokemart Route119_WeatherInstitute_1F_MartItems
	msgbox Route119_WeatherInstitute_1F_EventScript_BallSalesman_Text_2
	release
	end

Route119_WeatherInstitute_1F_EventScript_BallSalesman_1:
	msgbox Route119_WeatherInstitute_1F_EventScript_BallSalesman_Text_0
	release
	end


	.align 2
Route119_WeatherInstitute_1F_MartItems:
	.2byte ITEM_LEVEL_BALL
	.2byte ITEM_LURE_BALL
	.2byte ITEM_MOON_BALL
	.2byte ITEM_FRIEND_BALL
	.2byte ITEM_LOVE_BALL
	.2byte ITEM_FAST_BALL
	.2byte ITEM_HEAVY_BALL
	.2byte ITEM_DUSK_BALL
	.2byte ITEM_TIMER_BALL
	.2byte ITEM_QUICK_BALL
	.2byte ITEM_REPEAT_BALL
	.2byte ITEM_LUXURY_BALL
	.2byte ITEM_MASTER_BALL
	.2byte ITEM_NONE

Route119_WeatherInstitute_1F_EventScript_Boy::
	msgbox Route119_WeatherInstitute_1F_EventScript_Boy_Text_0, MSGBOX_NPC
	end


Route119_WeatherInstitute_1F_EventScript_Camper::
	msgbox Route119_WeatherInstitute_1F_EventScript_Camper_Text_0, MSGBOX_NPC
	end


Route119_WeatherInstitute_1F_EventScript_Cowgirl::
	msgbox Route119_WeatherInstitute_1F_EventScript_Cowgirl_Text_0, MSGBOX_NPC
	end


Route119_WeatherInstitute_1F_EventScript_BallSalesman_Text_0:
	.string "I'm sorry, but the shop is closed at the\n"
	.string "moment...\p"
	.string "Please help us!$"

Route119_WeatherInstitute_1F_EventScript_BallSalesman_Text_1:
	.string "Welcome!\p"
	.string "How may I serve you?$"

Route119_WeatherInstitute_1F_EventScript_BallSalesman_Text_2:
	.string "Please come again.$"

Route119_WeatherInstitute_1F_EventScript_Boy_Text_0:
	.string "Those Master Balls sure are expensive,\n"
	.string "I don't think I'll ever be able to\l"
	.string "afford one.$"

Route119_WeatherInstitute_1F_EventScript_Camper_Text_0:
	.string "Most of these are just for display, the\n"
	.string "real working Poké Balls are kept behind\l"
	.string "the counter and upstairs.$"

Route119_WeatherInstitute_1F_EventScript_Cowgirl_Text_0:
	.string "I was sent here to pick up some Poké\n"
	.string "Balls for the farm, but there are so\l"
	.string "many different kinds to choose from, I\l"
	.string "can't make up my mind!$"
