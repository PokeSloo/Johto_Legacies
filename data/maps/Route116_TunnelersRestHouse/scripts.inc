Route116_TunnelersRestHouse_MapScripts::
	.byte 0


Route116_TunnelersRestHouse_EventScript_Girl::
	lock
	faceplayer
	msgbox Route116_TunnelersRestHouse_EventScript_Girl_Text_0
	waitmessage
	pokemart Route116_TunnelersRestHouse_MartItems
	msgbox Route116_TunnelersRestHouse_EventScript_Girl_Text_1
	release
	end


	.align 2
Route116_TunnelersRestHouse_MartItems:
	.2byte ITEM_MOOMOO_MILK
	.2byte ITEM_NONE

Route116_TunnelersRestHouse_EventScript_Girl_Text_0:
	.string "Howdy! Welcome to Moomoo Farm!\p"
	.string "Would you like to buy some milk?$"

Route116_TunnelersRestHouse_EventScript_Girl_Text_1:
	.string "Don't be shy, we have plenty to sell.$"
