MtPyre_Exterior_MapScripts::
	.byte 0


MtPyre_Exterior_EventScript_GateSign::
	msgbox MtPyre_Exterior_EventScript_GateSign_Text_0, MSGBOX_SIGN
	end


MtPyre_Exterior_EventScript_BuildingSign::
	msgbox MtPyre_Exterior_EventScript_BuildingSign_Text_0, MSGBOX_SIGN
	end


MtPyre_Exterior_EventScript_CaveSign::
	msgbox MtPyre_Exterior_EventScript_CaveSign_Text_0, MSGBOX_SIGN
	end


MtPyre_Exterior_EventScript_RT32Sign::
	msgbox MtPyre_Exterior_EventScript_RT32Sign_Text_0, MSGBOX_SIGN
	end


MtPyre_Exterior_EventScript_GateSign_Text_0:
	.string "RUINS OF ALPH\p"
	.string "Visitors who are interested in\n"
	.string "archaeology are welcome.$"

MtPyre_Exterior_EventScript_BuildingSign_Text_0:
	.string "RUINS RESEARCH CENTER$"

MtPyre_Exterior_EventScript_CaveSign_Text_0:
	.string "This is a mysterious hall.\n"
	.string "Please watch your step.$"

MtPyre_Exterior_EventScript_RT32Sign_Text_0:
	.string "RUINS OF ALPH\n"
	.string "Feel free to explore the ruins and\l"
	.string "become a fossil professor!$"
