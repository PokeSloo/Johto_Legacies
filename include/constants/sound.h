#ifndef GUARD_CONSTANTS_SOUND_H
#define GUARD_CONSTANTS_SOUND_H

#define FANFARE_LEVEL_UP                 0
#define FANFARE_HEAL                     1
#define FANFARE_OBTAIN_BADGE             2
#define FANFARE_OBTAIN_ITEM              3
#define FANFARE_EVOLVED                  4
#define FANFARE_OBTAIN_TMHM              5
#define FANFARE_EVOLUTION_INTRO          6
#define FANFARE_MOVE_DELETED             7
#define FANFARE_OBTAIN_BERRY             8
#define FANFARE_AWAKEN_LEGEND            9
#define FANFARE_SLOTS_JACKPOT            10
#define FANFARE_SLOTS_WIN                11
#define FANFARE_TOO_BAD                  12
#define FANFARE_RG_JIGGLYPUFF            13
#define FANFARE_RG_DEX_RATING            14
#define FANFARE_RG_OBTAIN_KEY_ITEM       15
#define FANFARE_RG_CAUGHT_INTRO          16
#define FANFARE_RG_PHOTO                 17
#define FANFARE_RG_POKE_FLUTE            18
#define FANFARE_OBTAIN_B_POINTS          19
#define FANFARE_REGISTER_MATCH_CALL      20
#define FANFARE_OBTAIN_SYMBOL            21
#define FANFARE_HG_OBTAIN_KEY_ITEM       22
#define FANFARE_HG_LEVEL_UP              23
#define FANFARE_HG_HEAL                  24
#define FANFARE_HG_DEX_RATING_1          25
#define FANFARE_HG_DEX_RATING_2          26
#define FANFARE_HG_DEX_RATING_3          27
#define FANFARE_HG_DEX_RATING_4          28
#define FANFARE_HG_DEX_RATING_5          29
#define FANFARE_HG_DEX_RATING_6          30
#define FANFARE_HG_RECEIVE_EGG           31
#define FANFARE_HG_OBTAIN_ITEM           32
#define FANFARE_HG_EVOLVED               33
#define FANFARE_HG_OBTAIN_BADGE          34
#define FANFARE_HG_OBTAIN_TMHM           35
#define FANFARE_HG_VOLTORB_FLIP_1        36
#define FANFARE_HG_VOLTORB_FLIP_2        37
#define FANFARE_HG_ACCESSORY             38
#define FANFARE_HG_REGISTER_POKEGEAR     39
#define FANFARE_HG_OBTAIN_BERRY          40
#define FANFARE_HG_RECEIVE_POKEMON       41
#define FANFARE_HG_MOVE_DELETED          42
#define FANFARE_HG_THIRD_PLACE           43
#define FANFARE_HG_SECOND_PLACE          44
#define FANFARE_HG_FIRST_PLACE           45
#define FANFARE_HG_POKEATHLON_NEW        46
#define FANFARE_HG_WINNING_POKEATHLON    47
#define FANFARE_HG_OBTAIN_B_POINTS       48
#define FANFARE_HG_OBTAIN_ARCADE_POINTS  49
#define FANFARE_HG_OBTAIN_CASTLE_POINTS  50
#define FANFARE_HG_CLEAR_MINIGAME        51
#define FANFARE_HG_PARTNER               52

#define CRY_MODE_NORMAL        0 // Default
#define CRY_MODE_DOUBLES       1 // Shortened cry for double battles
#define CRY_MODE_ENCOUNTER     2 // Used when starting a static encounter, or when a Pokémon is "aggressive"
#define CRY_MODE_HIGH_PITCH    3 // Highest pitch mode, used exclusively by the move Howl
#define CRY_MODE_ECHO_START    4 // For 1st half of cry used by the move Hyper Voice. Played in reverse
#define CRY_MODE_FAINT         5 // Used when a Pokémon faints
#define CRY_MODE_ECHO_END      6 // For 2nd half of cry used by the move Hyper Voice
#define CRY_MODE_ROAR_1        7 // For 1st cry used by the move Roar
#define CRY_MODE_ROAR_2        8 // For 2nd cry used by the move Roar
#define CRY_MODE_GROWL_1       9 // For 1st cry used by the move Growl. Played in reverse
#define CRY_MODE_GROWL_2      10 // For 2nd cry used by the move Growl
#define CRY_MODE_WEAK         11 // Used when a Pokémon is unhealthy
#define CRY_MODE_WEAK_DOUBLES 12 // Equivalent to CRY_MODE_DOUBLES for CRY_MODE_WEAK

// Given to SoundTask_PlayDoubleCry to determine which cry mode to use. Values are arbitrary
#define DOUBLE_CRY_ROAR  2
#define DOUBLE_CRY_GROWL 255

#define CRY_PRIORITY_NORMAL 10
#define CRY_PRIORITY_AMBIENT 1

// Cry volume was changed from 125 in R/S to 120 for FRLG/Em, but was (accidentally?) not updated outside of sound.c
#define CRY_VOLUME    120
#define CRY_VOLUME_RS 125

#endif // GUARD_CONSTANTS_SOUND_H