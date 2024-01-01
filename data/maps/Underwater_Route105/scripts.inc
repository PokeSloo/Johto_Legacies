Underwater_Route105_MapScripts::
	map_script MAP_SCRIPT_ON_RESUME, Underwater_Route105_OnResume
	.byte 0

Underwater_Route105_OnResume:
	call AbnormalWeather_Underwater_SetupEscapeWarp
	end

Underwater_Route105_EventScript_ItemHelixFossil::
	finditem ITEM_HELIX_FOSSIL
	end

Underwater_Route105_EventScript_ItemRootFossil::
	finditem ITEM_ROOT_FOSSIL
	end

Underwater_Route105_EventScript_ItemSkullFossil::
	finditem ITEM_SKULL_FOSSIL
	end

