Route104_PrettyPetalFlowerShop_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route104_PrettyPetalFlowerShop_OnTransition
	.byte 0

Route104_PrettyPetalFlowerShop_OnTransition:
	setflag FLAG_LANDMARK_FLOWER_SHOP
	end

Route104_PrettyPetalFlowerShop_EventScript_RandomBerryGirl::
	lock
	faceplayer
	dotimebasedevents
	goto_if_set FLAG_DAILY_FLOWER_SHOP_RECEIVED_BERRY, Route104_PrettyPetalFlowerShop_EventScript_AlreadyReceivedBerry
	msgbox Route104_PrettyPetalFlowerShop_Text_ImGrowingFlowers, MSGBOX_DEFAULT
	random 8
	addvar VAR_RESULT, FIRST_BERRY_INDEX
	giveitem VAR_RESULT
	goto_if_eq VAR_RESULT, 0, Common_EventScript_ShowBagIsFull
	setflag FLAG_DAILY_FLOWER_SHOP_RECEIVED_BERRY
	msgbox Route104_PrettyPetalFlowerShop_Text_MachineMixesBerries, MSGBOX_DEFAULT
	release
	end

Route104_PrettyPetalFlowerShop_EventScript_AlreadyReceivedBerry::
	msgbox Route104_PrettyPetalFlowerShop_Text_MachineMixesBerries, MSGBOX_DEFAULT
	release
	end

Route104_PrettyPetalFlowerShop_EventScript_ShopOwner::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	pokemart Route104_PrettyPetalFlowerShop_Pokemart_Plants
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end


	.align 2
Route104_PrettyPetalFlowerShop_Pokemart_Plants:
	.2byte ITEM_RED_NECTAR
	.2byte ITEM_PINK_NECTAR
	.2byte ITEM_PURPLE_NECTAR
	.2byte ITEM_YELLOW_NECTAR
	.2byte ITEM_WHITE_HERB
	.2byte ITEM_MENTAL_HERB
	.2byte ITEM_POWER_HERB
	.2byte ITEM_BIG_ROOT
	.2byte ITEM_NONE

Route104_PrettyPetalFlowerShop_EventScript_WailmerPailGirl::
	lock
	faceplayer
	goto_if_unset FLAG_RECEIVED_WAILMER_PAIL, Route104_PrettyPetalFlowerShop_EventScript_GiveWailmerPail
	msgbox Route104_PrettyPetalFlowerShop_EventScript_WailmerPailGirl_Text_0
	release
	end


Route104_PrettyPetalFlowerShop_EventScript_GiveWailmerPail::
	msgbox Route104_PrettyPetalFlowerShop_EventScript_GiveWailmerPail_Text_0
	giveitem ITEM_WAILMER_PAIL
	msgbox Route104_PrettyPetalFlowerShop_EventScript_GiveWailmerPail_Text_1
	setflag FLAG_RECEIVED_WAILMER_PAIL
	release
	end


Route104_PrettyPetalFlowerShop_EventScript_WailmerPailGirl_Text_0:
	.string "Have you cleared that weird tree from\n"
	.string "Route 36 yet?\p"
	.string "I don't know why they seem to be so\n"
	.string "fascinated with that route in\l"
	.string "particular.$"

Route104_PrettyPetalFlowerShop_EventScript_GiveWailmerPail_Text_0:
	.string "Every few years a strange tree will\n"
	.string "appear on Route 36.\p"
	.string "I don't know why they are so drawn to\n"
	.string "that route in particular, but it gets\l"
	.string "annoying.\p"
	.string "Here, you should take this.$"

Route104_PrettyPetalFlowerShop_EventScript_GiveWailmerPail_Text_1:
	.string "Use that Wailmer Pail to sprinkle some\n"
	.string "water on the weird tree, they seem to\l"
	.string "hate that.\p"
	.string "Fair warning, it might decide to attack\n"
	.string "you instead of running away.\p"
	.string "You look like a capable TRAINER though,\n"
	.string "so you shouldn't have an issue.\p"
	.string "By the way, you can also use that\n"
	.string "Wailmer Pail to water berries planted in\l"
	.string "soil.\p"
	.string "That will help them grow even faster.$"
