Underwater_Route127_MapScripts::
	map_script MAP_SCRIPT_ON_LOAD, Underwater_Route127_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

Underwater_Route127_MapScripts_MAP_SCRIPT_ON_LOAD:
	goto_if_set FLAG_MARINE_CAVE_OPEN, Underwater_Route127_MapScripts_MAP_SCRIPT_ON_LOAD_2
	end

Underwater_Route127_MapScripts_MAP_SCRIPT_ON_LOAD_2:
	setmetatile 58, 6, 0x22E, FALSE
	setmetatile 58, 5, 0x226, TRUE
	return

