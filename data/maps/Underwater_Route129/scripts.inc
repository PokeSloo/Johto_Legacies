Underwater_Route129_MapScripts::
	map_script MAP_SCRIPT_ON_RESUME, Underwater_Route129_OnResume
	.byte 0

Underwater_Route129_OnResume:
	call AbnormalWeather_Underwater_SetupEscapeWarp
	end

Underwater_Route129_EventScript_ItemDomeFossil::
	finditem ITEM_DOME_FOSSIL
	end

Underwater_Route129_EventScript_ItemClawFossil::
	finditem ITEM_CLAW_FOSSIL
	end

Underwater_Route129_EventScript_ItemArmorFossil::
	finditem ITEM_ARMOR_FOSSIL
	end

