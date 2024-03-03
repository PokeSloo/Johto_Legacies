SootopolisCity_Mart_MapScripts::
	.byte 0

SootopolisCity_Mart_EventScript_Clerk::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	pokemart FallarborTown_Mart_Pokemart
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

	.align 2
SootopolisCity_Mart_Pokemart:
	.2byte ITEM_ULTRA_BALL
	.2byte ITEM_HYPER_POTION
	.2byte ITEM_MAX_POTION
	.2byte ITEM_FULL_HEAL
	.2byte ITEM_REVIVE
	.2byte ITEM_MAX_REPEL
	.2byte ITEM_X_ATTACK
	.2byte ITEM_X_DEFENSE
	.2byte ITEM_SHADOW_MAIL
	.2byte ITEM_NONE
	release
	end

SootopolisCity_Mart_EventScript_FatMan::
	msgbox SootopolisCity_Mart_Text_PPUpIsGreat, MSGBOX_NPC
	end

SootopolisCity_Mart_EventScript_Gentleman::
	msgbox SootopolisCity_Mart_Text_FullRestoreItemOfDreams, MSGBOX_NPC
	end

SootopolisCity_Mart_Text_PPUpIsGreat:
	.string "Oh, you've met GOLD?\p"
	.string "I think he's a pretty humble guy,\n"
	.string "considering all of his achievements!$"

SootopolisCity_Mart_Text_FullRestoreItemOfDreams:
	.string "Mega Stones, eh?\p"
	.string "Yeah, you can get them from people all\n"
	.string "over the Golden Islands.\p"
	.string "Not for free though, I'm sure.$"

