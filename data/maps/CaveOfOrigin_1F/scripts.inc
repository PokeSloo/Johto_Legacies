CaveOfOrigin_1F_MapScripts::
	.byte 0

CaveOfOrigin_1F_OnTransition:
	call_if_set FLAG_UNUSED_RS_LEGENDARY_BATTLE_DONE, CaveOfOrigin_EventScript_DisableTriggers
	end
