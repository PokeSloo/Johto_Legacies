FortreeCity_House2_MapScripts::
	.byte 0


FortreeCity_House2_EventScript_Clerk::
	lock
	msgbox FortreeCity_House2_EventScript_Clerk_Text_0
	waitmessage
	pokemartdecoration2 FortreeCity_House2_MartDolls
	msgbox FortreeCity_House2_EventScript_Clerk_Text_1
	release
	end


	.align 2
FortreeCity_House2_MartDolls:
	.2byte DECOR_TOGEPI_DOLL
	.2byte DECOR_CYNDAQUIL_DOLL
	.2byte DECOR_CHIKORITA_DOLL
	.2byte DECOR_TOTODILE_DOLL
	.2byte DECOR_MEOWTH_DOLL
	.2byte DECOR_CLEFAIRY_DOLL
	.2byte DECOR_DITTO_DOLL
	.2byte DECOR_SMOOCHUM_DOLL
	.2byte DECOR_TREECKO_DOLL
	.2byte DECOR_TORCHIC_DOLL
	.2byte DECOR_MUDKIP_DOLL
	.2byte DECOR_LOTAD_DOLL
	.2byte DECOR_SEEDOT_DOLL
	.2byte DECOR_WAILMER_DOLL
	.2byte DECOR_RHYDON_DOLL
	.2byte ITEM_NONE

FortreeCity_House2_EventScript_Lass::
	msgbox FortreeCity_House2_EventScript_Lass_Text_0, MSGBOX_NPC
	end


FortreeCity_House2_EventScript_OldWoman::
	msgbox FortreeCity_House2_EventScript_OldWoman_Text_0, MSGBOX_NPC
	end


FortreeCity_House2_EventScript_Clerk_Text_0:
	.string "Welcome!\p"
	.string "How may I serve you?$"

FortreeCity_House2_EventScript_Clerk_Text_1:
	.string "Please come again.$"

FortreeCity_House2_EventScript_Lass_Text_0:
	.string "I don't know why, but the Ditto Doll is\n"
	.string "my favorite!\p"
	.string "It's just so soft and squishy!$"

FortreeCity_House2_EventScript_OldWoman_Text_0:
	.string "My husband and I probably spend half\n"
	.string "the day napping, I'm sure you will too\l"
	.string "when you're our age.$"
