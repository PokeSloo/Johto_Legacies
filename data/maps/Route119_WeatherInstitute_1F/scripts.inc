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
