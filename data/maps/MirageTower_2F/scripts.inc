MirageTower_2F_MapScripts::
	.byte 0


MirageTower_2F_EventScript_Grunt_3::
	trainerbattle_single TRAINER_KENT, Route119_Text_KentIntro, Route119_Text_KentDefeat
	msgbox Route119_Text_KentPostBattle, MSGBOX_AUTOCLOSE
	end


MirageTower_2F_EventScript_Grunt_4::
	trainerbattle_single TRAINER_GREG, Route119_Text_GregIntro, Route119_Text_GregDefeat
	msgbox Route119_Text_GregPostBattle, MSGBOX_AUTOCLOSE
	end


MirageTower_3F_EventScript_ThiefBall::
	finditem ITEM_TM46_THIEF
	end


MirageTower_3F_EventScript_Potion::
	finditem ITEM_SUPER_POTION
	end


MirageTower_3F_EventScript_UltraBall::
	finditem ITEM_ULTRA_BALL
	end

