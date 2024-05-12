
#include "global.h"
#include "contest.h"

#define CONTEST_OPPONENT_JIMMY 0
#define CONTEST_OPPONENT_EDITH 1
#define CONTEST_OPPONENT_EVAN 2
#define CONTEST_OPPONENT_KELSEY 3
#define CONTEST_OPPONENT_MADISON 4
#define CONTEST_OPPONENT_RAYMOND 5
#define CONTEST_OPPONENT_GRANT 6
#define CONTEST_OPPONENT_PAIGE 7
#define CONTEST_OPPONENT_ALEC 8
#define CONTEST_OPPONENT_SYDNEY 9
#define CONTEST_OPPONENT_MORRIS 10
#define CONTEST_OPPONENT_MARIAH 11
#define CONTEST_OPPONENT_RUSSELL 12
#define CONTEST_OPPONENT_MELANIE 13
#define CONTEST_OPPONENT_CHANCE 14
#define CONTEST_OPPONENT_AGATHA 15
#define CONTEST_OPPONENT_BEAU 16
#define CONTEST_OPPONENT_KAY 17
#define CONTEST_OPPONENT_CALE 18
#define CONTEST_OPPONENT_CAITLIN 19
#define CONTEST_OPPONENT_COLBY 20
#define CONTEST_OPPONENT_KYLIE 21
#define CONTEST_OPPONENT_LIAM 22
#define CONTEST_OPPONENT_MILO 23
#define CONTEST_OPPONENT_KARINA 24
#define CONTEST_OPPONENT_BOBBY 25
#define CONTEST_OPPONENT_CLAIRE 26
#define CONTEST_OPPONENT_WILLIE 27
#define CONTEST_OPPONENT_CASSIDY 28
#define CONTEST_OPPONENT_MORGAN 29
#define CONTEST_OPPONENT_SUMMER 30
#define CONTEST_OPPONENT_MILES 31
#define CONTEST_OPPONENT_AUDREY 32
#define CONTEST_OPPONENT_AVERY 33
#define CONTEST_OPPONENT_ARIANA 34
#define CONTEST_OPPONENT_ASHTON 35
#define CONTEST_OPPONENT_SANDRA 36
#define CONTEST_OPPONENT_CARSON 37
#define CONTEST_OPPONENT_KATRINA 38
#define CONTEST_OPPONENT_LUKE 39
#define CONTEST_OPPONENT_RAUL 40
#define CONTEST_OPPONENT_JADA 41
#define CONTEST_OPPONENT_ZEEK 42
#define CONTEST_OPPONENT_DIEGO 43
#define CONTEST_OPPONENT_ALIYAH 44
#define CONTEST_OPPONENT_NATALIA 45
#define CONTEST_OPPONENT_DEVIN 46
#define CONTEST_OPPONENT_TYLOR 47
#define CONTEST_OPPONENT_RONNIE 48
#define CONTEST_OPPONENT_CLAUDIA 49
#define CONTEST_OPPONENT_ELIAS 50
#define CONTEST_OPPONENT_JADE 51
#define CONTEST_OPPONENT_FRANCIS 52
#define CONTEST_OPPONENT_ALISHA 53
#define CONTEST_OPPONENT_SAUL 54
#define CONTEST_OPPONENT_FELICIA 55
#define CONTEST_OPPONENT_EMILIO 56
#define CONTEST_OPPONENT_KARLA 57
#define CONTEST_OPPONENT_DARRYL 58
#define CONTEST_OPPONENT_SELENA 59
#define CONTEST_OPPONENT_NOEL 60
#define CONTEST_OPPONENT_LACEY 61
#define CONTEST_OPPONENT_CORBIN 62
#define CONTEST_OPPONENT_GRACIE 63
#define CONTEST_OPPONENT_COLTIN 64
#define CONTEST_OPPONENT_ELLIE 65
#define CONTEST_OPPONENT_MARCUS 66
#define CONTEST_OPPONENT_KIARA 67
#define CONTEST_OPPONENT_BRYCE 68
#define CONTEST_OPPONENT_JAMIE 69
#define CONTEST_OPPONENT_JORGE 70
#define CONTEST_OPPONENT_DEVON 71
#define CONTEST_OPPONENT_JUSTINA 72
#define CONTEST_OPPONENT_RALPH 73
#define CONTEST_OPPONENT_ROSA 74
#define CONTEST_OPPONENT_KEATON 75
#define CONTEST_OPPONENT_MAYRA 76
#define CONTEST_OPPONENT_LAMAR 77
#define CONTEST_OPPONENT_AUBREY 78
#define CONTEST_OPPONENT_NIGEL 79
#define CONTEST_OPPONENT_CAMILLE 80
#define CONTEST_OPPONENT_DEON 81
#define CONTEST_OPPONENT_JANELLE 82
#define CONTEST_OPPONENT_HEATH 83
#define CONTEST_OPPONENT_SASHA 84
#define CONTEST_OPPONENT_FRANKIE 85
#define CONTEST_OPPONENT_HELEN 86
#define CONTEST_OPPONENT_CAMILE 87
#define CONTEST_OPPONENT_MARTIN 88
#define CONTEST_OPPONENT_SERGIO 89
#define CONTEST_OPPONENT_KAILEY 90
#define CONTEST_OPPONENT_PERLA 91
#define CONTEST_OPPONENT_CLARA 92
#define CONTEST_OPPONENT_JAKOB 93
#define CONTEST_OPPONENT_TREY 94
#define CONTEST_OPPONENT_LANE 95

// All contest opponents have a common set of AI flags (which contains all of the actually
// useful AI scripts, as well as some dummys) and a random combination of 2-3 dummy flags.
// Seems that like the battle AI they had more plans for this than what ended up in the final game
#define CONTEST_AI_SET_1  (CONTEST_AI_COMMON | CONTEST_AI_DUMMY_20 | CONTEST_AI_DUMMY_21)
#define CONTEST_AI_SET_2  (CONTEST_AI_COMMON | CONTEST_AI_DUMMY_19 | CONTEST_AI_DUMMY_25)
#define CONTEST_AI_SET_3  (CONTEST_AI_COMMON | CONTEST_AI_DUMMY_18 | CONTEST_AI_DUMMY_23)
#define CONTEST_AI_SET_4  (CONTEST_AI_COMMON | CONTEST_AI_DUMMY_17 | CONTEST_AI_DUMMY_23)
#define CONTEST_AI_SET_5  (CONTEST_AI_COMMON | CONTEST_AI_DUMMY_16 | CONTEST_AI_DUMMY_25)
#define CONTEST_AI_SET_6  (CONTEST_AI_COMMON | CONTEST_AI_DUMMY_15 | CONTEST_AI_DUMMY_22)
#define CONTEST_AI_SET_7  (CONTEST_AI_COMMON | CONTEST_AI_DUMMY_14 | CONTEST_AI_DUMMY_23)
#define CONTEST_AI_SET_8  (CONTEST_AI_COMMON | CONTEST_AI_DUMMY_13 | CONTEST_AI_DUMMY_21)
#define CONTEST_AI_SET_9  (CONTEST_AI_COMMON | CONTEST_AI_DUMMY_12 | CONTEST_AI_DUMMY_24)
#define CONTEST_AI_SET_A  (CONTEST_AI_COMMON | CONTEST_AI_DUMMY_11 | CONTEST_AI_DUMMY_25)
#define CONTEST_AI_SET_B  (CONTEST_AI_COMMON | CONTEST_AI_DUMMY_10 | CONTEST_AI_DUMMY_21)
#define CONTEST_AI_SET_C  (CONTEST_AI_COMMON | CONTEST_AI_DUMMY_9  | CONTEST_AI_DUMMY_21)
#define CONTEST_AI_SET_D  (CONTEST_AI_COMMON | CONTEST_AI_DUMMY_8  | CONTEST_AI_DUMMY_22 | CONTEST_AI_DUMMY_25)
#define CONTEST_AI_SET_E  (CONTEST_AI_COMMON | CONTEST_AI_DUMMY_7  | CONTEST_AI_DUMMY_24)
#define CONTEST_AI_SET_F  (CONTEST_AI_COMMON | CONTEST_AI_DUMMY_6  | CONTEST_AI_DUMMY_25)
#define CONTEST_AI_SET_10 (CONTEST_AI_COMMON | CONTEST_AI_DUMMY_20 | CONTEST_AI_DUMMY_23)
#define CONTEST_AI_SET_11 (CONTEST_AI_COMMON | CONTEST_AI_DUMMY_18 | CONTEST_AI_DUMMY_25)
#define CONTEST_AI_SET_12 (CONTEST_AI_COMMON | CONTEST_AI_DUMMY_17 | CONTEST_AI_DUMMY_25)
#define CONTEST_AI_SET_13 (CONTEST_AI_COMMON | CONTEST_AI_DUMMY_16 | CONTEST_AI_DUMMY_22)
#define CONTEST_AI_SET_14 (CONTEST_AI_COMMON | CONTEST_AI_DUMMY_15 | CONTEST_AI_DUMMY_21)
#define CONTEST_AI_SET_15 (CONTEST_AI_COMMON | CONTEST_AI_DUMMY_14 | CONTEST_AI_DUMMY_22)
#define CONTEST_AI_SET_16 (CONTEST_AI_COMMON | CONTEST_AI_DUMMY_13 | CONTEST_AI_DUMMY_25)
#define CONTEST_AI_SET_17 (CONTEST_AI_COMMON | CONTEST_AI_DUMMY_12 | CONTEST_AI_DUMMY_23 | CONTEST_AI_DUMMY_25)
#define CONTEST_AI_SET_18 (CONTEST_AI_COMMON | CONTEST_AI_DUMMY_10 | CONTEST_AI_DUMMY_25)
#define CONTEST_AI_SET_19 (CONTEST_AI_COMMON | CONTEST_AI_DUMMY_9  | CONTEST_AI_DUMMY_25)
#define CONTEST_AI_SET_1A (CONTEST_AI_COMMON | CONTEST_AI_DUMMY_8  | CONTEST_AI_DUMMY_25)
#define CONTEST_AI_SET_1B (CONTEST_AI_COMMON | CONTEST_AI_DUMMY_7  | CONTEST_AI_DUMMY_21)
#define CONTEST_AI_SET_1C (CONTEST_AI_COMMON | CONTEST_AI_DUMMY_6  | CONTEST_AI_DUMMY_21)
#define CONTEST_AI_SET_1D (CONTEST_AI_COMMON | CONTEST_AI_DUMMY_20 | CONTEST_AI_DUMMY_25)
#define CONTEST_AI_SET_1E (CONTEST_AI_COMMON | CONTEST_AI_DUMMY_15 | CONTEST_AI_DUMMY_25)
#define CONTEST_AI_SET_1F (CONTEST_AI_COMMON | CONTEST_AI_DUMMY_14 | CONTEST_AI_DUMMY_25)
#define CONTEST_AI_SET_20 (CONTEST_AI_COMMON | CONTEST_AI_DUMMY_12 | CONTEST_AI_DUMMY_25)
#define CONTEST_AI_SET_21 (CONTEST_AI_COMMON | CONTEST_AI_DUMMY_7  | CONTEST_AI_DUMMY_25)

const struct ContestWinner gDefaultContestWinners[] =
{
    [CONTEST_WINNER_HALL_1 - 1] = {
        .personality = 0,
        .trainerId = 0xFFFF,
        .species = SPECIES_ELECTRIKE,
        .contestCategory = CONTEST_CATEGORY_CUTE,
        .monName = _("ELECTER"),
        .trainerName = _("EZRA"),
        .contestRank = CONTEST_RANK_NORMAL
    },
    [CONTEST_WINNER_HALL_2 - 1] = {
        .personality = 0,
        .trainerId = 0xFFFF,
        .species = SPECIES_TROPIUS,
        .contestCategory = CONTEST_CATEGORY_COOL,
        .monName = _("TROPO"),
        .trainerName = _("ALLAN"),
        .contestRank = CONTEST_RANK_HYPER
    },
    [CONTEST_WINNER_HALL_3 - 1] = {
        .personality = 0,
        .trainerId = 0xFFFF,
        .species = SPECIES_XATU,
        .contestCategory = CONTEST_CATEGORY_BEAUTY,
        .monName = _("TUXA"),
        .trainerName = _("JULIET"),
        .contestRank = CONTEST_RANK_NORMAL
    },
    [CONTEST_WINNER_HALL_4 - 1] = {
        .personality = 0,
        .trainerId = 0xFFFF,
        .species = SPECIES_PLUSLE,
        .contestCategory = CONTEST_CATEGORY_TOUGH,
        .monName = _("PULSE"),
        .trainerName = _("BAILY"),
        .contestRank = CONTEST_RANK_MASTER
    },
    [CONTEST_WINNER_HALL_5 - 1] = {
        .personality = 0,
        .trainerId = 0xFFFF,
        .species = SPECIES_SHUPPET,
        .contestCategory = CONTEST_CATEGORY_SMART,
        .monName = _("SHUPUP"),
        .trainerName = _("MELANY"),
        .contestRank = CONTEST_RANK_SUPER
    },
    [CONTEST_WINNER_HALL_6 - 1] = {
        .personality = 0,
        .trainerId = 0xFFFF,
        .species = SPECIES_ZANGOOSE,
        .contestCategory = CONTEST_CATEGORY_COOL,
        .monName = _("GOOZAN"),
        .trainerName = _("HANA"),
        .contestRank = CONTEST_RANK_HYPER
    },
    [CONTEST_WINNER_HALL_UNUSED_1 - 1] = {
        .personality = 0,
        .trainerId = 0xFFFF,
        .species = SPECIES_LOUDRED,
        .contestCategory = CONTEST_CATEGORY_BEAUTY,
        .monName = _("LOUDED"),
        .trainerName = _("BRYANT"),
        .contestRank = CONTEST_RANK_HYPER
    },
    [CONTEST_WINNER_HALL_UNUSED_2 - 1] = {
        .personality = 0,
        .trainerId = 0xFFFF,
        .species = SPECIES_DELCATTY,
        .contestCategory = CONTEST_CATEGORY_CUTE,
        .monName = _("KITSY"),
        .trainerName = _("OMAR"),
        .contestRank = CONTEST_RANK_MASTER
    }
};

const struct ContestPokemon gContestOpponents[] =
{
    [CONTEST_OPPONENT_JIMMY] = {
        .species = SPECIES_SHINX,
        .nickname = _("SPHINX"),
        .trainerName = _("TIMMY"),
        .trainerGfxId = OBJ_EVENT_GFX_LITTLE_BOY,
        .aiFlags = CONTEST_AI_SET_1,
        .whichRank = CONTEST_RANK_NORMAL,
        .aiPool_Cool = TRUE,
        .aiPool_Beauty = FALSE,
        .aiPool_Cute = FALSE,
        .aiPool_Smart = FALSE,
        .aiPool_Tough = TRUE,
        .moves =
        {
            MOVE_ROAR,
            MOVE_BITE,
            MOVE_SPARK,
            MOVE_TACKLE
        },
        .cool = 10,
        .beauty = 4,
        .cute = 10,
        .smart = 3,
        .tough = 4,
        .sheen = 50,
        .personality = 0,
        .otId = 0xFFFF
    },
    [CONTEST_OPPONENT_EDITH] = {
        .species = SPECIES_MINCCINO,
        .nickname = _("MINNIE"),
        .trainerName = _("CINDY"),
        .trainerGfxId = OBJ_EVENT_GFX_BEAUTY,
        .aiFlags = CONTEST_AI_SET_2,
        .whichRank = CONTEST_RANK_NORMAL,
        .aiPool_Cool = FALSE,
        .aiPool_Beauty = FALSE,
        .aiPool_Cute = TRUE,
        .aiPool_Smart = FALSE,
        .aiPool_Tough = FALSE,
        .moves =
        {
            MOVE_BABY_DOLL_EYES,
            MOVE_ENCORE,
            MOVE_POUND,
            MOVE_DOUBLE_SLAP
        },
        .cool = 10,
        .beauty = 10,
        .cute = 6,
        .smart = 1,
        .tough = 2,
        .sheen = 60,
        .personality = 0,
        .otId = 0xFFFF
    },
    [CONTEST_OPPONENT_EVAN] = {
        .species = SPECIES_VIVILLON,
        .nickname = _("VIVI"),
        .trainerName = _("EVAN"),
        .trainerGfxId = OBJ_EVENT_GFX_BUG_CATCHER,
        .aiFlags = CONTEST_AI_SET_3,
        .whichRank = CONTEST_RANK_NORMAL,
        .aiPool_Cool = FALSE,
        .aiPool_Beauty = TRUE,
        .aiPool_Cute = FALSE,
        .aiPool_Smart = FALSE,
        .aiPool_Tough = FALSE,
        .moves =
        {
            MOVE_PSYBEAM,
            MOVE_SAFEGUARD,
            MOVE_LIGHT_SCREEN,
            MOVE_GUST
        },
        .cool = 2,
        .beauty = 10,
        .cute = 10,
        .smart = 12,
        .tough = 4,
        .sheen = 70,
        .personality = 0,
        .otId = 0xFFFF
    },
    [CONTEST_OPPONENT_KELSEY] = {
        .species = SPECIES_PETILIL,
        .nickname = _("ONION"),
        .trainerName = _("LILY"),
        .trainerGfxId = OBJ_EVENT_GFX_WOMAN_2,
        .aiFlags = CONTEST_AI_SET_4,
        .whichRank = CONTEST_RANK_NORMAL,
        .aiPool_Cool = FALSE,
        .aiPool_Beauty = FALSE,
        .aiPool_Cute = FALSE,
        .aiPool_Smart = TRUE,
        .aiPool_Tough = TRUE,
        .moves =
        {
            MOVE_SLEEP_POWDER,
            MOVE_ABSORB,
            MOVE_BIDE,
            MOVE_GROWTH
        },
        .cool = 3,
        .beauty = 3,
        .cute = 5,
        .smart = 8,
        .tough = 7,
        .sheen = 80,
        .personality = 0,
        .otId = 0xFFFF
    },
    [CONTEST_OPPONENT_MADISON] = {
        .species = SPECIES_STARLY,
        .nickname = _("STARRO"),
        .trainerName = _("MADISON"),
        .trainerGfxId = OBJ_EVENT_GFX_POKEFAN_F,
        .aiFlags = CONTEST_AI_SET_5,
        .whichRank = CONTEST_RANK_NORMAL,
        .aiPool_Cool = TRUE,
        .aiPool_Beauty = FALSE,
        .aiPool_Cute = FALSE,
        .aiPool_Smart = FALSE,
        .aiPool_Tough = FALSE,
        .moves =
        {
            MOVE_WING_ATTACK,
            MOVE_AGILITY,
            MOVE_AERIAL_ACE,
            MOVE_GROWL
        },
        .cool = 1,
        .beauty = 3,
        .cute = 3,
        .smart = 5,
        .tough = 4,
        .sheen = 90,
        .personality = 0,
        .otId = 0xFFFF
    },
    [CONTEST_OPPONENT_RAYMOND] = {
        .species = SPECIES_GASTLY,
        .nickname = _("GASSY"),
        .trainerName = _("KAYLA"),
        .trainerGfxId = OBJ_EVENT_GFX_HEX_MANIAC,
        .aiFlags = CONTEST_AI_SET_6,
        .whichRank = CONTEST_RANK_NORMAL,
        .aiPool_Cool = FALSE,
        .aiPool_Beauty = FALSE,
        .aiPool_Cute = FALSE,
        .aiPool_Smart = TRUE,
        .aiPool_Tough = FALSE,
        .moves =
        {
            MOVE_HYPNOSIS,
            MOVE_NIGHT_SHADE,
            MOVE_CURSE,
            MOVE_CONFUSE_RAY
        },
        .cool = 5,
        .beauty = 2,
        .cute = 10,
        .smart = 7,
        .tough = 8,
        .sheen = 100,
        .personality = 0,
        .otId = 0xFFFF
    },
    [CONTEST_OPPONENT_GRANT] = {
        .species = SPECIES_SHROOMISH,
        .nickname = _("SHROOM"),
        .trainerName = _("GRANT"),
        .trainerGfxId = OBJ_EVENT_GFX_YOUNGSTER,
        .aiFlags = CONTEST_AI_SET_7,
        .whichRank = CONTEST_RANK_NORMAL,
        .aiPool_Cool = FALSE,
        .aiPool_Beauty = FALSE,
        .aiPool_Cute = FALSE,
        .aiPool_Smart = TRUE,
        .aiPool_Tough = FALSE,
        .moves =
        {
            MOVE_STUN_SPORE,
            MOVE_LEECH_SEED,
            MOVE_MEGA_DRAIN,
            MOVE_ATTRACT
        },
        .cool = 3,
        .beauty = 3,
        .cute = 10,
        .smart = 2,
        .tough = 2,
        .sheen = 50,
        .personality = 0,
        .otId = 0xFFFF
    },
    [CONTEST_OPPONENT_PAIGE] = {
        .species = SPECIES_MARILL,
        .nickname = _("PIKABLUE"),
        .trainerName = _("PAIGE"),
        .trainerGfxId = OBJ_EVENT_GFX_WOMAN_4,
        .aiFlags = CONTEST_AI_SET_8,
        .whichRank = CONTEST_RANK_NORMAL,
        .aiPool_Cool = FALSE,
        .aiPool_Beauty = TRUE,
        .aiPool_Cute = TRUE,
        .aiPool_Smart = FALSE,
        .aiPool_Tough = FALSE,
        .moves =
        {
            MOVE_BUBBLE_BEAM,
            MOVE_WATER_GUN,
            MOVE_TAIL_WHIP,
            MOVE_RAIN_DANCE
        },
        .cool = 3,
        .beauty = 5,
        .cute = 1,
        .smart = 10,
        .tough = 10,
        .sheen = 60,
        .personality = 0,
        .otId = 0xFFFF
    },
    [CONTEST_OPPONENT_ALEC] = {
        .species = SPECIES_BUNNELBY,
        .nickname = _("BUGS"),
        .trainerName = _("TIANA"),
        .trainerGfxId = OBJ_EVENT_GFX_LASS,
        .aiFlags = CONTEST_AI_SET_9,
        .whichRank = CONTEST_RANK_NORMAL,
        .aiPool_Cool = FALSE,
        .aiPool_Beauty = TRUE,
        .aiPool_Cute = TRUE,
        .aiPool_Smart = FALSE,
        .aiPool_Tough = TRUE,
        .moves =
        {
            MOVE_MUD_SLAP,
            MOVE_TAKE_DOWN,
            MOVE_LEER,
            MOVE_QUICK_ATTACK
        },
        .cool = 10,
        .beauty = 4,
        .cute = 4,
        .smart = 5,
        .tough = 18,
        .sheen = 70,
        .personality = 0,
        .otId = 0xFFFF
    },
    [CONTEST_OPPONENT_SYDNEY] = {
        .species = SPECIES_LILLIPUP,
        .nickname = _("SCRUFFY"),
        .trainerName = _("SIDNEY"),
        .trainerGfxId = OBJ_EVENT_GFX_YOUNGSTER,
        .aiFlags = CONTEST_AI_SET_A,
        .whichRank = CONTEST_RANK_NORMAL,
        .aiPool_Cool = TRUE,
        .aiPool_Beauty = FALSE,
        .aiPool_Cute = FALSE,
        .aiPool_Smart = TRUE,
        .aiPool_Tough = FALSE,
        .moves =
        {
            MOVE_ODOR_SLEUTH,
            MOVE_HELPING_HAND,
            MOVE_BITE,
            MOVE_BABY_DOLL_EYES
        },
        .cool = 2,
        .beauty = 2,
        .cute = 7,
        .smart = 2,
        .tough = 7,
        .sheen = 80,
        .personality = 0,
        .otId = 0xFFFF
    },
    [CONTEST_OPPONENT_MORRIS] = {
        .species = SPECIES_STUFFUL,
        .nickname = _("TEDDY"),
        .trainerName = _("MORRIS"),
        .trainerGfxId = OBJ_EVENT_GFX_SCHOOL_KID_M,
        .aiFlags = CONTEST_AI_SET_B,
        .whichRank = CONTEST_RANK_NORMAL,
        .aiPool_Cool = TRUE,
        .aiPool_Beauty = FALSE,
        .aiPool_Cute = FALSE,
        .aiPool_Smart = FALSE,
        .aiPool_Tough = TRUE,
        .moves =
        {
            MOVE_BRUTAL_SWING,
            MOVE_BIDE,
            MOVE_PAYBACK,
            MOVE_FLAIL
        },
        .cool = 9,
        .beauty = 1,
        .cute = 1,
        .smart = 8,
        .tough = 1,
        .sheen = 90,
        .personality = 0,
        .otId = 0xFFFF
    },
    [CONTEST_OPPONENT_MARIAH] = {
        .species = SPECIES_DRILBUR,
        .nickname = _("MOROCCO"),
        .trainerName = _("JOSE"),
        .trainerGfxId = OBJ_EVENT_GFX_HIKER,
        .aiFlags = CONTEST_AI_SET_C,
        .whichRank = CONTEST_RANK_NORMAL,
        .aiPool_Cool = TRUE,
        .aiPool_Beauty = FALSE,
        .aiPool_Cute = FALSE,
        .aiPool_Smart = FALSE,
        .aiPool_Tough = TRUE,
        .moves =
        {
            MOVE_METAL_CLAW,
            MOVE_HONE_CLAWS,
            MOVE_SLASH,
            MOVE_ROCK_SLIDE
        },
        .cool = 5,
        .beauty = 10,
        .cute = 2,
        .smart = 10,
        .tough = 2,
        .sheen = 100,
        .personality = 0,
        .otId = 0xFFFF
    },
    [CONTEST_OPPONENT_RUSSELL] = {
        .species = SPECIES_GOLBAT,
        .nickname = _("BATMAN"),
        .trainerName = _("RUSSELL"),
        .trainerGfxId = OBJ_EVENT_GFX_MAN_3,
        .aiFlags = CONTEST_AI_SET_D,
        .whichRank = CONTEST_RANK_NORMAL,
        .aiPool_Cool = FALSE,
        .aiPool_Beauty = TRUE,
        .aiPool_Cute = TRUE,
        .aiPool_Smart = TRUE,
        .aiPool_Tough = FALSE,
        .moves =
        {
            MOVE_HAZE,
            MOVE_MEAN_LOOK,
            MOVE_CONFUSE_RAY,
            MOVE_LEECH_LIFE
        },
        .cool = 4,
        .beauty = 2,
        .cute = 2,
        .smart = 2,
        .tough = 10,
        .sheen = 50,
        .personality = 0,
        .otId = 0xFFFF
    },
    [CONTEST_OPPONENT_MELANIE] = {
        .species = SPECIES_GRIMER_ALOLAN,
        .nickname = _("GRIMEY"),
        .trainerName = _("MELANIE"),
        .trainerGfxId = OBJ_EVENT_GFX_TWIN,
        .aiFlags = CONTEST_AI_SET_E,
        .whichRank = CONTEST_RANK_NORMAL,
        .aiPool_Cool = FALSE,
        .aiPool_Beauty = FALSE,
        .aiPool_Cute = TRUE,
        .aiPool_Smart = FALSE,
        .aiPool_Tough = FALSE,
        .moves =
        {
            MOVE_SLUDGE,
            MOVE_MINIMIZE,
            MOVE_TOXIC,
            MOVE_FACADE
        },
        .cool = 1,
        .beauty = 10,
        .cute = 1,
        .smart = 10,
        .tough = 5,
        .sheen = 60,
        .personality = 0,
        .otId = 0xFFFF
    },
    [CONTEST_OPPONENT_CHANCE] = {
        .species = SPECIES_YAMPER,
        .nickname = _("YAM"),
        .trainerName = _("CHANCE"),
        .trainerGfxId = OBJ_EVENT_GFX_RICH_BOY,
        .aiFlags = CONTEST_AI_SET_F,
        .whichRank = CONTEST_RANK_NORMAL,
        .aiPool_Cool = TRUE,
        .aiPool_Beauty = TRUE,
        .aiPool_Cute = FALSE,
        .aiPool_Smart = FALSE,
        .aiPool_Tough = FALSE,
        .moves =
        {
            MOVE_SPARK,
            MOVE_BITE,
            MOVE_THUNDER,
            MOVE_ROAR
        },
        .cool = 20,
        .beauty = 10,
        .cute = 1,
        .smart = 1,
        .tough = 1,
        .sheen = 70,
        .personality = 0,
        .otId = 0xFFFF
    },
    [CONTEST_OPPONENT_AGATHA] = {
        .species = SPECIES_BULBASAUR,
        .nickname = _("BULB"),
        .trainerName = _("ATHENA"),
        .trainerGfxId = OBJ_EVENT_GFX_WOMAN_2,
        .aiFlags = CONTEST_AI_SET_1,
        .whichRank = CONTEST_RANK_NORMAL,
        .aiPool_Cool = FALSE,
        .aiPool_Beauty = FALSE,
        .aiPool_Cute = TRUE,
        .aiPool_Smart = TRUE,
        .aiPool_Tough = FALSE,
        .moves =
        {
            MOVE_GROWL,
            MOVE_LEECH_SEED,
            MOVE_TACKLE,
            MOVE_SWEET_SCENT
        },
        .cool = 5,
        .beauty = 3,
        .cute = 10,
        .smart = 10,
        .tough = 4,
        .sheen = 50,
        .personality = 0,
        .otId = 0xFFFF
    },
    [CONTEST_OPPONENT_BEAU] = {
        .species = SPECIES_FROSMOTH,
        .nickname = _("NOFIREPLZ"),
        .trainerName = _("NIKKI"),
        .trainerGfxId = OBJ_EVENT_GFX_BEAUTY,
        .aiFlags = CONTEST_AI_SET_2,
        .whichRank = CONTEST_RANK_NORMAL,
        .aiPool_Cool = FALSE,
        .aiPool_Beauty = TRUE,
        .aiPool_Cute = FALSE,
        .aiPool_Smart = TRUE,
        .aiPool_Tough = FALSE,
        .moves =
        {
            MOVE_INFESTATION,
            MOVE_ICY_WIND,
            MOVE_MIST,
            MOVE_STUN_SPORE
        },
        .cool = 3,
        .beauty = 10,
        .cute = 2,
        .smart = 10,
        .tough = 4,
        .sheen = 60,
        .personality = 0,
        .otId = 0xFFFF
    },
    [CONTEST_OPPONENT_KAY] = {
        .species = SPECIES_CHINCHOU,
        .nickname = _("CHOUDER"),
        .trainerName = _("WILSON"),
        .trainerGfxId = OBJ_EVENT_GFX_FISHERMAN,
        .aiFlags = CONTEST_AI_SET_3,
        .whichRank = CONTEST_RANK_NORMAL,
        .aiPool_Cool = TRUE,
        .aiPool_Beauty = TRUE,
        .aiPool_Cute = FALSE,
        .aiPool_Smart = FALSE,
        .aiPool_Tough = FALSE,
        .moves =
        {
            MOVE_DISCHARGE,
            MOVE_THUNDER_WAVE,
            MOVE_BUBBLE_BEAM,
            MOVE_CONFUSE_RAY
        },
        .cool = 10,
        .beauty = 8,
        .cute = 4,
        .smart = 2,
        .tough = 3,
        .sheen = 70,
        .personality = 0,
        .otId = 0xFFFF
    },
    [CONTEST_OPPONENT_CALE] = {
        .species = SPECIES_DIGLETT_ALOLAN,
        .nickname = _("HOTDOG"),
        .trainerName = _("DALE"),
        .trainerGfxId = OBJ_EVENT_GFX_HIKER,
        .aiFlags = CONTEST_AI_SET_4,
        .whichRank = CONTEST_RANK_NORMAL,
        .aiPool_Cool = FALSE,
        .aiPool_Beauty = FALSE,
        .aiPool_Cute = FALSE,
        .aiPool_Smart = TRUE,
        .aiPool_Tough = TRUE,
        .moves =
        {
            MOVE_DIG,
            MOVE_EARTHQUAKE,
            MOVE_ASTONISH,
            MOVE_BULLDOZE
        },
        .cool = 4,
        .beauty = 2,
        .cute = 3,
        .smart = 5,
        .tough = 10,
        .sheen = 80,
        .personality = 0,
        .otId = 0xFFFF
    },
    [CONTEST_OPPONENT_CAITLIN] = {
        .species = SPECIES_LUMINEON,
        .nickname = _("LUMINUS"),
        .trainerName = _("CAITLIN"),
        .trainerGfxId = OBJ_EVENT_GFX_TUBER_F,
        .aiFlags = CONTEST_AI_SET_5,
        .whichRank = CONTEST_RANK_NORMAL,
        .aiPool_Cool = FALSE,
        .aiPool_Beauty = TRUE,
        .aiPool_Cute = FALSE,
        .aiPool_Smart = FALSE,
        .aiPool_Tough = TRUE,
        .moves =
        {
            MOVE_WATER_PULSE,
            MOVE_RAIN_DANCE,
            MOVE_POUND,
            MOVE_ICE_BEAM
        },
        .cool = 2,
        .beauty = 10,
        .cute = 5,
        .smart = 3,
        .tough = 10,
        .sheen = 90,
        .personality = 0,
        .otId = 0xFFFF
    },
    [CONTEST_OPPONENT_COLBY] = {
        .species = SPECIES_MONFERNO,
        .nickname = _("MONKE"),
        .trainerName = _("COLBY"),
        .trainerGfxId = OBJ_EVENT_GFX_NINJA_BOY,
        .aiFlags = CONTEST_AI_SET_6,
        .whichRank = CONTEST_RANK_NORMAL,
        .aiPool_Cool = TRUE,
        .aiPool_Beauty = TRUE,
        .aiPool_Cute = FALSE,
        .aiPool_Smart = FALSE,
        .aiPool_Tough = FALSE,
        .moves =
        {
            MOVE_MACH_PUNCH,
            MOVE_FLAME_WHEEL,
            MOVE_ACROBATICS,
            MOVE_FIRE_SPIN
        },
        .cool = 6,
        .beauty = 10,
        .cute = 2,
        .smart = 1,
        .tough = 5,
        .sheen = 100,
        .personality = 0,
        .otId = 0xFFFF
    },
    [CONTEST_OPPONENT_KYLIE] = {
        .species = SPECIES_DEDENNE,
        .nickname = _("DEEDEE"),
        .trainerName = _("JOCELYN"),
        .trainerGfxId = OBJ_EVENT_GFX_LITTLE_GIRL,
        .aiFlags = CONTEST_AI_SET_7,
        .whichRank = CONTEST_RANK_NORMAL,
        .aiPool_Cool = TRUE,
        .aiPool_Beauty = FALSE,
        .aiPool_Cute = TRUE,
        .aiPool_Smart = FALSE,
        .aiPool_Tough = FALSE,
        .moves =
        {
            MOVE_TICKLE,
            MOVE_NUZZLE,
            MOVE_THUNDER_SHOCK,
            MOVE_VOLT_SWITCH
        },
        .cool = 8,
        .beauty = 6,
        .cute = 8,
        .smart = 6,
        .tough = 2,
        .sheen = 90,
        .personality = 0,
        .otId = 0xFFFF
    },
    [CONTEST_OPPONENT_LIAM] = {
        .species = SPECIES_DELIBIRD,
        .nickname = _("SANTA"),
        .trainerName = _("LIAM"),
        .trainerGfxId = OBJ_EVENT_GFX_MAN_5,
        .aiFlags = CONTEST_AI_SET_8,
        .whichRank = CONTEST_RANK_NORMAL,
        .aiPool_Cool = FALSE,
        .aiPool_Beauty = FALSE,
        .aiPool_Cute = TRUE,
        .aiPool_Smart = TRUE,
        .aiPool_Tough = TRUE,
        .moves =
        {
            MOVE_PRESENT,
            MOVE_FACADE,
            MOVE_FOCUS_PUNCH,
            MOVE_PROTECT
        },
        .cool = 4,
        .beauty = 3,
        .cute = 10,
        .smart = 5,
        .tough = 3,
        .sheen = 80,
        .personality = 0,
        .otId = 0xFFFF
    },
    [CONTEST_OPPONENT_MILO] = {
        .species = SPECIES_BOLDORE,
        .nickname = _("CRAB"),
        .trainerName = _("MILO"),
        .trainerGfxId = OBJ_EVENT_GFX_MANIAC,
        .aiFlags = CONTEST_AI_SET_9,
        .whichRank = CONTEST_RANK_NORMAL,
        .aiPool_Cool = FALSE,
        .aiPool_Beauty = FALSE,
        .aiPool_Cute = FALSE,
        .aiPool_Smart = FALSE,
        .aiPool_Tough = TRUE,
        .moves =
        {
            MOVE_ROCK_BLAST,
            MOVE_HEADBUTT,
            MOVE_IRON_DEFENSE,
            MOVE_POWER_GEM
        },
        .cool = 8,
        .beauty = 5,
        .cute = 5,
        .smart = 8,
        .tough = 10,
        .sheen = 70,
        .personality = 0,
        .otId = 0xFFFF
    },
    [CONTEST_OPPONENT_KARINA] = {
        .species = SPECIES_MARACTUS,
        .nickname = _("CACTUS"),
        .trainerName = _("KARINA"),
        .trainerGfxId = OBJ_EVENT_GFX_PICNICKER,
        .aiFlags = CONTEST_AI_SET_10,
        .whichRank = CONTEST_RANK_SUPER,
        .aiPool_Cool = FALSE,
        .aiPool_Beauty = TRUE,
        .aiPool_Cute = FALSE,
        .aiPool_Smart = TRUE,
        .aiPool_Tough = FALSE,
        .moves =
        {
            MOVE_PETAL_DANCE,
            MOVE_COTTON_SPORE,
            MOVE_MEGA_DRAIN,
            MOVE_INGRAIN
        },
        .cool = 50,
        .beauty = 15,
        .cute = 75,
        .smart = 10,
        .tough = 20,
        .sheen = 100,
        .personality = 0,
        .otId = 0xFFFF
    },
    [CONTEST_OPPONENT_BOBBY] = {
        .species = SPECIES_STUNFISK,
        .nickname = _("DERPFISH"),
        .trainerName = _("EVA"),
        .trainerGfxId = OBJ_EVENT_GFX_LASS,
        .aiFlags = CONTEST_AI_SET_2,
        .whichRank = CONTEST_RANK_SUPER,
        .aiPool_Cool = TRUE,
        .aiPool_Beauty = TRUE,
        .aiPool_Cute = TRUE,
        .aiPool_Smart = TRUE,
        .aiPool_Tough = TRUE,
        .moves =
        {
            MOVE_THUNDER_SHOCK,
            MOVE_BIDE,
            MOVE_CAMOUFLAGE,
            MOVE_MUD_BOMB
        },
        .cool = 15,
        .beauty = 21,
        .cute = 15,
        .smart = 85,
        .tough = 35,
        .sheen = 110,
        .personality = 0,
        .otId = 0xFFFF
    },
    [CONTEST_OPPONENT_CLAIRE] = {
        .species = SPECIES_KROKOROK,
        .nickname = _("KROIKEY"),
        .trainerName = _("RIPLEY"),
        .trainerGfxId = OBJ_EVENT_GFX_GIRL_1,
        .aiFlags = CONTEST_AI_SET_11,
        .whichRank = CONTEST_RANK_SUPER,
        .aiPool_Cool = FALSE,
        .aiPool_Beauty = FALSE,
        .aiPool_Cute = TRUE,
        .aiPool_Smart = TRUE,
        .aiPool_Tough = TRUE,
        .moves =
        {
            MOVE_BITE,
            MOVE_SAND_ATTACK,
            MOVE_DIG,
            MOVE_SAND_TOMB
        },
        .cool = 75,
        .beauty = 25,
        .cute = 25,
        .smart = 10,
        .tough = 25,
        .sheen = 120,
        .personality = 0,
        .otId = 0xFFFF
    },
    [CONTEST_OPPONENT_WILLIE] = {
        .species = SPECIES_ORANGURU,
        .nickname = _("GOOROO"),
        .trainerName = _("BRIAN"),
        .trainerGfxId = OBJ_EVENT_GFX_FAT_MAN,
        .aiFlags = CONTEST_AI_SET_12,
        .whichRank = CONTEST_RANK_SUPER,
        .aiPool_Cool = TRUE,
        .aiPool_Beauty = FALSE,
        .aiPool_Cute = FALSE,
        .aiPool_Smart = TRUE,
        .aiPool_Tough = FALSE,
        .moves =
        {
            MOVE_FEINT_ATTACK,
            MOVE_PSYCHIC,
            MOVE_STORED_POWER,
            MOVE_FOUL_PLAY
        },
        .cool = 10,
        .beauty = 30,
        .cute = 25,
        .smart = 65,
        .tough = 25,
        .sheen = 130,
        .personality = 0,
        .otId = 0xFFFF
    },
    [CONTEST_OPPONENT_CASSIDY] = {
        .species = SPECIES_SAWK,
        .nickname = _("SOCK"),
        .trainerName = _("FLINT"),
        .trainerGfxId = OBJ_EVENT_GFX_BLACK_BELT,
        .aiFlags = CONTEST_AI_SET_13,
        .whichRank = CONTEST_RANK_SUPER,
        .aiPool_Cool = TRUE,
        .aiPool_Beauty = FALSE,
        .aiPool_Cute = FALSE,
        .aiPool_Smart = FALSE,
        .aiPool_Tough = TRUE,
        .moves =
        {
            MOVE_BRICK_BREAK,
            MOVE_LOW_SWEEP,
            MOVE_COUNTER,
            MOVE_DOUBLE_KICK
        },
        .cool = 30,
        .beauty = 90,
        .cute = 30,
        .smart = 10,
        .tough = 100,
        .sheen = 140,
        .personality = 0,
        .otId = 0xFFFF
    },
    [CONTEST_OPPONENT_MORGAN] = {
        .species = SPECIES_SALAZZLE,
        .nickname = _("DAZZLE"),
        .trainerName = _("MORGAN"),
        .trainerGfxId = OBJ_EVENT_GFX_WOMAN_3,
        .aiFlags = CONTEST_AI_SET_14,
        .whichRank = CONTEST_RANK_SUPER,
        .aiPool_Cool = FALSE,
        .aiPool_Beauty = TRUE,
        .aiPool_Cute = FALSE,
        .aiPool_Smart = TRUE,
        .aiPool_Tough = FALSE,
        .moves =
        {
            MOVE_FLAME_BURST,
            MOVE_FLAMETHROWER,
            MOVE_TOXIC,
            MOVE_VENOM_DRENCH
        },
        .cool = 50,
        .beauty = 40,
        .cute = 10,
        .smart = 35,
        .tough = 35,
        .sheen = 150,
        .personality = 0,
        .otId = 0xFFFF
    },
    [CONTEST_OPPONENT_SUMMER] = {
        .species = SPECIES_HITMONCHAN,
        .nickname = _("GROOT"),
        .trainerName = _("YUI"),
        .trainerGfxId = OBJ_EVENT_GFX_EXPERT_F,
        .aiFlags = CONTEST_AI_SET_15,
        .whichRank = CONTEST_RANK_SUPER,
        .aiPool_Cool = TRUE,
        .aiPool_Beauty = TRUE,
        .aiPool_Cute = FALSE,
        .aiPool_Smart = FALSE,
        .aiPool_Tough = TRUE,
        .moves =
        {
            MOVE_MACH_PUNCH,
            MOVE_THUNDER_PUNCH,
            MOVE_FIRE_PUNCH,
            MOVE_ICE_PUNCH
        },
        .cool = 40,
        .beauty = 20,
        .cute = 40,
        .smart = 40,
        .tough = 40,
        .sheen = 100,
        .personality = 0,
        .otId = 0xFFFF
    },
    [CONTEST_OPPONENT_MILES] = {
        .species = SPECIES_RIBOMBEE,
        .nickname = _("BARRY"),
        .trainerName = _("MILES"),
        .trainerGfxId = OBJ_EVENT_GFX_BUG_CATCHER,
        .aiFlags = CONTEST_AI_SET_16,
        .whichRank = CONTEST_RANK_SUPER,
        .aiPool_Cool = FALSE,
        .aiPool_Beauty = FALSE,
        .aiPool_Cute = TRUE,
        .aiPool_Smart = TRUE,
        .aiPool_Tough = FALSE,
        .moves =
        {
            MOVE_STUN_SPORE,
            MOVE_DRAINING_KISS,
            MOVE_FAIRY_WIND,
            MOVE_SWEET_SCENT
        },
        .cool = 25,
        .beauty = 75,
        .cute = 25,
        .smart = 10,
        .tough = 25,
        .sheen = 110,
        .personality = 0,
        .otId = 0xFFFF
    },
    [CONTEST_OPPONENT_AUDREY] = {
        .species = SPECIES_MAREANIE,
        .nickname = _("MEANIE"),
        .trainerName = _("AUDREY"),
        .trainerGfxId = OBJ_EVENT_GFX_TUBER_F,
        .aiFlags = CONTEST_AI_SET_17,
        .whichRank = CONTEST_RANK_SUPER,
        .aiPool_Cool = FALSE,
        .aiPool_Beauty = TRUE,
        .aiPool_Cute = FALSE,
        .aiPool_Smart = TRUE,
        .aiPool_Tough = FALSE,
        .moves =
        {
            MOVE_RECOVER,
            MOVE_TOXIC_SPIKES,
            MOVE_SURF,
            MOVE_RAIN_DANCE
        },
        .cool = 30,
        .beauty = 30,
        .cute = 40,
        .smart = 30,
        .tough = 25,
        .sheen = 120,
        .personality = 0,
        .otId = 0xFFFF
    },
    [CONTEST_OPPONENT_AVERY] = {
        .species = SPECIES_MIMIKYU,
        .nickname = _("PIKACHU"),
        .trainerName = _("AVERY"),
        .trainerGfxId = OBJ_EVENT_GFX_SCHOOL_KID_M,
        .aiFlags = CONTEST_AI_SET_A,
        .whichRank = CONTEST_RANK_SUPER,
        .aiPool_Cool = FALSE,
        .aiPool_Beauty = FALSE,
        .aiPool_Cute = TRUE,
        .aiPool_Smart = TRUE,
        .aiPool_Tough = FALSE,
        .moves =
        {
            MOVE_SHADOW_CLAW,
            MOVE_FEINT_ATTACK,
            MOVE_PAIN_SPLIT,
            MOVE_MIMIC
        },
        .cool = 40,
        .beauty = 10,
        .cute = 30,
        .smart = 40,
        .tough = 30,
        .sheen = 130,
        .personality = 0,
        .otId = 0xFFFF
    },
    [CONTEST_OPPONENT_ARIANA] = {
        .species = SPECIES_ROCKRUFF,
        .nickname = _("ROCKY"),
        .trainerName = _("ISAAC"),
        .trainerGfxId = OBJ_EVENT_GFX_MAN_4,
        .aiFlags = CONTEST_AI_SET_18,
        .whichRank = CONTEST_RANK_SUPER,
        .aiPool_Cool = FALSE,
        .aiPool_Beauty = FALSE,
        .aiPool_Cute = FALSE,
        .aiPool_Smart = TRUE,
        .aiPool_Tough = TRUE,
        .moves =
        {
            MOVE_ODOR_SLEUTH,
            MOVE_ROCK_TOMB,
            MOVE_ROCK_THROW,
            MOVE_BITE
        },
        .cool = 10,
        .beauty = 10,
        .cute = 40,
        .smart = 75,
        .tough = 35,
        .sheen = 140,
        .personality = 0,
        .otId = 0xFFFF
    },
    [CONTEST_OPPONENT_ASHTON] = {
        .species = SPECIES_SEAKING,
        .nickname = _("KING"),
        .trainerName = _("ASHTON"),
        .trainerGfxId = OBJ_EVENT_GFX_FISHERMAN,
        .aiFlags = CONTEST_AI_SET_19,
        .whichRank = CONTEST_RANK_SUPER,
        .aiPool_Cool = TRUE,
        .aiPool_Beauty = TRUE,
        .aiPool_Cute = FALSE,
        .aiPool_Smart = FALSE,
        .aiPool_Tough = FALSE,
        .moves =
        {
            MOVE_HORN_ATTACK,
            MOVE_AQUA_RING,
            MOVE_HORN_DRILL,
            MOVE_WATER_PULSE
        },
        .cool = 70,
        .beauty = 30,
        .cute = 5,
        .smart = 30,
        .tough = 25,
        .sheen = 150,
        .personality = 0,
        .otId = 0xFFFF
    },
    [CONTEST_OPPONENT_SANDRA] = {
        .species = SPECIES_QUAGSIRE,
        .nickname = _("QUAGMIRE"),
        .trainerName = _("SANDRA"),
        .trainerGfxId = OBJ_EVENT_GFX_TWIN,
        .aiFlags = CONTEST_AI_SET_1A,
        .whichRank = CONTEST_RANK_SUPER,
        .aiPool_Cool = FALSE,
        .aiPool_Beauty = FALSE,
        .aiPool_Cute = TRUE,
        .aiPool_Smart = TRUE,
        .aiPool_Tough = TRUE,
        .moves =
        {
            MOVE_YAWN,
            MOVE_TOXIC,
            MOVE_EARTHQUAKE,
            MOVE_PROTECT
        },
        .cool = 45,
        .beauty = 45,
        .cute = 60,
        .smart = 25,
        .tough = 15,
        .sheen = 100,
        .personality = 0,
        .otId = 0xFFFF
    },
    [CONTEST_OPPONENT_CARSON] = {
        .species = SPECIES_CORVIKNIGHT,
        .nickname = _("NEVERMORE"),
        .trainerName = _("CARSON"),
        .trainerGfxId = OBJ_EVENT_GFX_MAN_5,
        .aiFlags = CONTEST_AI_SET_1B,
        .whichRank = CONTEST_RANK_SUPER,
        .aiPool_Cool = TRUE,
        .aiPool_Beauty = TRUE,
        .aiPool_Cute = FALSE,
        .aiPool_Smart = FALSE,
        .aiPool_Tough = TRUE,
        .moves =
        {
            MOVE_HONE_CLAWS,
            MOVE_IRON_DEFENSE,
            MOVE_DRILL_PECK,
            MOVE_STEEL_WING
        },
        .cool = 40,
        .beauty = 30,
        .cute = 25,
        .smart = 60,
        .tough = 20,
        .sheen = 110,
        .personality = 0,
        .otId = 0xFFFF
    },
    [CONTEST_OPPONENT_KATRINA] = {
        .species = SPECIES_HATTREM,
        .nickname = _("FEDORA"),
        .trainerName = _("DAVID"),
        .trainerGfxId = OBJ_EVENT_GFX_GENTLEMAN,
        .aiFlags = CONTEST_AI_SET_1C,
        .whichRank = CONTEST_RANK_SUPER,
        .aiPool_Cool = FALSE,
        .aiPool_Beauty = TRUE,
        .aiPool_Cute = TRUE,
        .aiPool_Smart = TRUE,
        .aiPool_Tough = FALSE,
        .moves =
        {
            MOVE_LIFE_DEW,
            MOVE_PSYBEAM,
            MOVE_MAGICAL_LEAF,
            MOVE_DISARMING_VOICE
        },
        .cool = 15,
        .beauty = 15,
        .cute = 30,
        .smart = 15,
        .tough = 75,
        .sheen = 120,
        .personality = 0,
        .otId = 0xFFFF
    },
    [CONTEST_OPPONENT_LUKE] = {
        .species = SPECIES_MUNNA,
        .nickname = _("MEWN"),
        .trainerName = _("BLAKE"),
        .trainerGfxId = OBJ_EVENT_GFX_PSYCHIC_M,
        .aiFlags = CONTEST_AI_SET_1,
        .whichRank = CONTEST_RANK_SUPER,
        .aiPool_Cool = FALSE,
        .aiPool_Beauty = FALSE,
        .aiPool_Cute = TRUE,
        .aiPool_Smart = TRUE,
        .aiPool_Tough = FALSE,
        .moves =
        {
            MOVE_YAWN,
            MOVE_SYNCHRONOISE,
            MOVE_LUCKY_CHANT,
            MOVE_PSYWAVE
        },
        .cool = 20,
        .beauty = 40,
        .cute = 40,
        .smart = 30,
        .tough = 20,
        .sheen = 100,
        .personality = 0,
        .otId = 0xFFFF
    },
    [CONTEST_OPPONENT_RAUL] = {
        .species = SPECIES_FARFETCHD_GALARIAN,
        .nickname = _("FETCHIN"),
        .trainerName = _("RAUL"),
        .trainerGfxId = OBJ_EVENT_GFX_MAN_5,
        .aiFlags = CONTEST_AI_SET_2,
        .whichRank = CONTEST_RANK_SUPER,
        .aiPool_Cool = TRUE,
        .aiPool_Beauty = FALSE,
        .aiPool_Cute = TRUE,
        .aiPool_Smart = FALSE,
        .aiPool_Tough = FALSE,
        .moves =
        {
            MOVE_LEAF_BLADE,
            MOVE_FURY_CUTTER,
            MOVE_SAND_ATTACK,
            MOVE_RETURN
        },
        .cool = 40,
        .beauty = 10,
        .cute = 40,
        .smart = 20,
        .tough = 20,
        .sheen = 110,
        .personality = 0,
        .otId = 0xFFFF
    },
    [CONTEST_OPPONENT_JADA] = {
        .species = SPECIES_AMAURA,
        .nickname = _("LITTLEFOOT"),
        .trainerName = _("JADA"),
        .trainerGfxId = OBJ_EVENT_GFX_WOMAN_2,
        .aiFlags = CONTEST_AI_SET_3,
        .whichRank = CONTEST_RANK_SUPER,
        .aiPool_Cool = FALSE,
        .aiPool_Beauty = TRUE,
        .aiPool_Cute = TRUE,
        .aiPool_Smart = FALSE,
        .aiPool_Tough = FALSE,
        .moves =
        {
            MOVE_MIST,
            MOVE_AURORA_BEAM,
            MOVE_ROUND,
            MOVE_ENCORE
        },
        .cool = 10,
        .beauty = 30,
        .cute = 40,
        .smart = 20,
        .tough = 20,
        .sheen = 120,
        .personality = 0,
        .otId = 0xFFFF
    },
    [CONTEST_OPPONENT_ZEEK] = {
        .species = SPECIES_SLIGGOO,
        .nickname = _("GOOEY"),
        .trainerName = _("ZEEK"),
        .trainerGfxId = OBJ_EVENT_GFX_RUNNING_TRIATHLETE_M,
        .aiFlags = CONTEST_AI_SET_4,
        .whichRank = CONTEST_RANK_SUPER,
        .aiPool_Cool = FALSE,
        .aiPool_Beauty = TRUE,
        .aiPool_Cute = TRUE,
        .aiPool_Smart = TRUE,
        .aiPool_Tough = TRUE,
        .moves =
        {
            MOVE_ABSORB,
            MOVE_MUDDY_WATER,
            MOVE_DRAGON_PULSE,
            MOVE_FLAIL
        },
        .cool = 10,
        .beauty = 40,
        .cute = 50,
        .smart = 30,
        .tough = 45,
        .sheen = 130,
        .personality = 0,
        .otId = 0xFFFF
    },
    [CONTEST_OPPONENT_DIEGO] = {
        .species = SPECIES_PANCHAM,
        .nickname = _("PANPAN"),
        .trainerName = _("DIEGO"),
        .trainerGfxId = OBJ_EVENT_GFX_EXPERT_M,
        .aiFlags = CONTEST_AI_SET_5,
        .whichRank = CONTEST_RANK_SUPER,
        .aiPool_Cool = TRUE,
        .aiPool_Beauty = FALSE,
        .aiPool_Cute = FALSE,
        .aiPool_Smart = FALSE,
        .aiPool_Tough = TRUE,
        .moves =
        {
            MOVE_ARM_THRUST,
            MOVE_SLASH,
            MOVE_COMET_PUNCH,
            MOVE_VITAL_THROW
        },
        .cool = 45,
        .beauty = 20,
        .cute = 10,
        .smart = 20,
        .tough = 45,
        .sheen = 140,
        .personality = 0,
        .otId = 0xFFFF
    },
    [CONTEST_OPPONENT_ALIYAH] = {
        .species = SPECIES_BLISSEY,
        .nickname = _("BLISS"),
        .trainerName = _("ALIYAH"),
        .trainerGfxId = OBJ_EVENT_GFX_TEALA,
        .aiFlags = CONTEST_AI_SET_6,
        .whichRank = CONTEST_RANK_SUPER,
        .aiPool_Cool = FALSE,
        .aiPool_Beauty = TRUE,
        .aiPool_Cute = TRUE,
        .aiPool_Smart = FALSE,
        .aiPool_Tough = TRUE,
        .moves =
        {
            MOVE_SING,
            MOVE_SOFT_BOILED,
            MOVE_EGG_BOMB,
            MOVE_DOUBLE_EDGE
        },
        .cool = 20,
        .beauty = 35,
        .cute = 40,
        .smart = 20,
        .tough = 20,
        .sheen = 150,
        .personality = 0,
        .otId = 0xFFFF
    },
    [CONTEST_OPPONENT_NATALIA] = {
        .species = SPECIES_FLOETTE,
        .nickname = _("AUNTFLO"),
        .trainerName = _("NATALIA"),
        .trainerGfxId = OBJ_EVENT_GFX_POKEFAN_F,
        .aiFlags = CONTEST_AI_SET_7,
        .whichRank = CONTEST_RANK_SUPER,
        .aiPool_Cool = TRUE,
        .aiPool_Beauty = FALSE,
        .aiPool_Cute = TRUE,
        .aiPool_Smart = FALSE,
        .aiPool_Tough = FALSE,
        .moves =
        {
            MOVE_RAZOR_LEAF,
            MOVE_WISH,
            MOVE_FAIRY_WIND,
            MOVE_VINE_WHIP
        },
        .cool = 40,
        .beauty = 10,
        .cute = 40,
        .smart = 25,
        .tough = 25,
        .sheen = 140,
        .personality = 0,
        .otId = 0xFFFF
    },
    [CONTEST_OPPONENT_DEVIN] = {
        .species = SPECIES_FURRET,
        .nickname = _("SWIFFER"),
        .trainerName = _("EDNA"),
        .trainerGfxId = OBJ_EVENT_GFX_LINK_RECEPTIONIST,
        .aiFlags = CONTEST_AI_SET_8,
        .whichRank = CONTEST_RANK_SUPER,
        .aiPool_Cool = FALSE,
        .aiPool_Beauty = FALSE,
        .aiPool_Cute = TRUE,
        .aiPool_Smart = FALSE,
        .aiPool_Tough = TRUE,
        .moves =
        {
            MOVE_SLAM,
            MOVE_FURY_SWIPES,
            MOVE_DEFENSE_CURL,
            MOVE_FOLLOW_ME
        },
        .cool = 20,
        .beauty = 20,
        .cute = 20,
        .smart = 20,
        .tough = 20,
        .sheen = 130,
        .personality = 0,
        .otId = 0xFFFF
    },
    [CONTEST_OPPONENT_TYLOR] = {
        .species = SPECIES_ORICORIO_PAU,
        .nickname = _("RICA"),
        .trainerName = _("TAYLOR"),
        .trainerGfxId = OBJ_EVENT_GFX_POKEFAN_M,
        .aiFlags = CONTEST_AI_SET_9,
        .whichRank = CONTEST_RANK_SUPER,
        .aiPool_Cool = FALSE,
        .aiPool_Beauty = TRUE,
        .aiPool_Cute = FALSE,
        .aiPool_Smart = TRUE,
        .aiPool_Tough = FALSE,
        .moves =
        {
            MOVE_REVELATION_DANCE,
            MOVE_MIRROR_MOVE,
            MOVE_CAPTIVATE,
            MOVE_CALM_MIND
        },
        .cool = 10,
        .beauty = 35,
        .cute = 10,
        .smart = 45,
        .tough = 20,
        .sheen = 120,
        .personality = 0,
        .otId = 0xFFFF
    },
    [CONTEST_OPPONENT_RONNIE] = {
        .species = SPECIES_GOGOAT,
        .nickname = _("BILLY"),
        .trainerName = _("RONNIE"),
        .trainerGfxId = OBJ_EVENT_GFX_HIKER,
        .aiFlags = CONTEST_AI_SET_1D,
        .whichRank = CONTEST_RANK_HYPER,
        .aiPool_Cool = FALSE,
        .aiPool_Beauty = FALSE,
        .aiPool_Cute = FALSE,
        .aiPool_Smart = TRUE,
        .aiPool_Tough = TRUE,
        .moves =
        {
            MOVE_HORN_LEECH,
            MOVE_BULLDOZE,
            MOVE_TAKE_DOWN,
            MOVE_LEECH_SEED
        },
        .cool = 30,
        .beauty = 50,
        .cute = 35,
        .smart = 100,
        .tough = 90,
        .sheen = 200,
        .personality = 0,
        .otId = 0xFFFF
    },
    [CONTEST_OPPONENT_CLAUDIA] = {
        .species = SPECIES_TURTONATOR,
        .nickname = _("RAPHAEL"),
        .trainerName = _("CLAUDIA"),
        .trainerGfxId = OBJ_EVENT_GFX_GIRL_1,
        .aiFlags = CONTEST_AI_SET_2,
        .whichRank = CONTEST_RANK_HYPER,
        .aiPool_Cool = TRUE,
        .aiPool_Beauty = TRUE,
        .aiPool_Cute = FALSE,
        .aiPool_Smart = FALSE,
        .aiPool_Tough = FALSE,
        .moves =
        {
            MOVE_FLAMETHROWER,
            MOVE_SUNNY_DAY,
            MOVE_DRAGON_CLAW,
            MOVE_DRAGON_TAIL
        },
        .cool = 75,
        .beauty = 75,
        .cute = 65,
        .smart = 35,
        .tough = 70,
        .sheen = 210,
        .personality = 0,
        .otId = 0xFFFF
    },
    [CONTEST_OPPONENT_ELIAS] = {
        .species = SPECIES_ACCELGOR,
        .nickname = _("NEENJA"),
        .trainerName = _("MURPHY"),
        .trainerGfxId = OBJ_EVENT_GFX_WOMAN_4,
        .aiFlags = CONTEST_AI_SET_11,
        .whichRank = CONTEST_RANK_HYPER,
        .aiPool_Cool = FALSE,
        .aiPool_Beauty = FALSE,
        .aiPool_Cute = TRUE,
        .aiPool_Smart = TRUE,
        .aiPool_Tough = TRUE,
        .moves =
        {
            MOVE_ACID_SPRAY,
            MOVE_BUG_BUZZ,
            MOVE_STRUGGLE_BUG,
            MOVE_ME_FIRST
        },
        .cool = 30,
        .beauty = 50,
        .cute = 95,
        .smart = 70,
        .tough = 70,
        .sheen = 220,
        .personality = 0,
        .otId = 0xFFFF
    },
    [CONTEST_OPPONENT_JADE] = {
        .species = SPECIES_STARAPTOR,
        .nickname = _("FROSTEDTIP"),
        .trainerName = _("JADE"),
        .trainerGfxId = OBJ_EVENT_GFX_POKEFAN_F,
        .aiFlags = CONTEST_AI_SET_12,
        .whichRank = CONTEST_RANK_HYPER,
        .aiPool_Cool = TRUE,
        .aiPool_Beauty = TRUE,
        .aiPool_Cute = FALSE,
        .aiPool_Smart = FALSE,
        .aiPool_Tough = FALSE,
        .moves =
        {
            MOVE_AGILITY,
            MOVE_AERIAL_ACE,
            MOVE_WING_ATTACK,
            MOVE_FLY
        },
        .cool = 65,
        .beauty = 85,
        .cute = 35,
        .smart = 75,
        .tough = 40,
        .sheen = 230,
        .personality = 0,
        .otId = 0xFFFF
    },
    [CONTEST_OPPONENT_FRANCIS] = {
        .species = SPECIES_DONPHAN,
        .nickname = _("DUMBO"),
        .trainerName = _("JULIE"),
        .trainerGfxId = OBJ_EVENT_GFX_WOMAN_5,
        .aiFlags = CONTEST_AI_SET_5,
        .whichRank = CONTEST_RANK_HYPER,
        .aiPool_Cool = FALSE,
        .aiPool_Beauty = FALSE,
        .aiPool_Cute = FALSE,
        .aiPool_Smart = TRUE,
        .aiPool_Tough = TRUE,
        .moves =
        {
            MOVE_KNOCK_OFF,
            MOVE_EARTHQUAKE,
            MOVE_SCARY_FACE,
            MOVE_DIG
        },
        .cool = 40,
        .beauty = 80,
        .cute = 35,
        .smart = 70,
        .tough = 70,
        .sheen = 240,
        .personality = 0,
        .otId = 0xFFFF
    },
    [CONTEST_OPPONENT_ALISHA] = {
        .species = SPECIES_FROSLASS,
        .nickname = _("LASSIE"),
        .trainerName = _("WINTER"),
        .trainerGfxId = OBJ_EVENT_GFX_LIZA,
        .aiFlags = CONTEST_AI_SET_1E,
        .whichRank = CONTEST_RANK_HYPER,
        .aiPool_Cool = FALSE,
        .aiPool_Beauty = TRUE,
        .aiPool_Cute = FALSE,
        .aiPool_Smart = TRUE,
        .aiPool_Tough = FALSE,
        .moves =
        {
            MOVE_OMINOUS_WIND,
            MOVE_CONFUSE_RAY,
            MOVE_BLIZZARD,
            MOVE_HAIL
        },
        .cool = 10,
        .beauty = 150,
        .cute = 10,
        .smart = 150,
        .tough = 10,
        .sheen = 250,
        .personality = 0,
        .otId = 0xFFFF
    },
    [CONTEST_OPPONENT_SAUL] = {
        .species = SPECIES_LICKILICKY,
        .nickname = _("BUU"),
        .trainerName = _("SAUL"),
        .trainerGfxId = OBJ_EVENT_GFX_CAMPER,
        .aiFlags = CONTEST_AI_SET_1F,
        .whichRank = CONTEST_RANK_HYPER,
        .aiPool_Cool = TRUE,
        .aiPool_Beauty = FALSE,
        .aiPool_Cute = TRUE,
        .aiPool_Smart = TRUE,
        .aiPool_Tough = TRUE,
        .moves =
        {
            MOVE_CHIP_AWAY,
            MOVE_DISABLE,
            MOVE_DEFENSE_CURL,
            MOVE_ROLLOUT
        },
        .cool = 80,
        .beauty = 60,
        .cute = 30,
        .smart = 70,
        .tough = 90,
        .sheen = 200,
        .personality = 0,
        .otId = 0xFFFF
    },
    [CONTEST_OPPONENT_FELICIA] = {
        .species = SPECIES_CASTFORM,
        .nickname = _("CLOUDBOOBS"),
        .trainerName = _("FELICIA"),
        .trainerGfxId = OBJ_EVENT_GFX_LASS,
        .aiFlags = CONTEST_AI_SET_16,
        .whichRank = CONTEST_RANK_HYPER,
        .aiPool_Cool = TRUE,
        .aiPool_Beauty = TRUE,
        .aiPool_Cute = TRUE,
        .aiPool_Smart = TRUE,
        .aiPool_Tough = TRUE,
        .moves =
        {
            MOVE_SUNNY_DAY,
            MOVE_WEATHER_BALL,
            MOVE_SANDSTORM,
            MOVE_RETURN
        },
        .cool = 70,
        .beauty = 80,
        .cute = 80,
        .smart = 50,
        .tough = 65,
        .sheen = 210,
        .personality = 0,
        .otId = 0xFFFF
    },
    [CONTEST_OPPONENT_EMILIO] = {
        .species = SPECIES_DRAPION,
        .nickname = _("DRAPES"),
        .trainerName = _("EMILIO"),
        .trainerGfxId = OBJ_EVENT_GFX_MANIAC,
        .aiFlags = CONTEST_AI_SET_20,
        .whichRank = CONTEST_RANK_HYPER,
        .aiPool_Cool = TRUE,
        .aiPool_Beauty = FALSE,
        .aiPool_Cute = FALSE,
        .aiPool_Smart = FALSE,
        .aiPool_Tough = TRUE,
        .moves =
        {
            MOVE_CROSS_POISON,
            MOVE_CRUNCH,
            MOVE_VENOSHOCK,
            MOVE_HONE_CLAWS
        },
        .cool = 70,
        .beauty = 85,
        .cute = 25,
        .smart = 60,
        .tough = 50,
        .sheen = 220,
        .personality = 0,
        .otId = 0xFFFF
    },
    [CONTEST_OPPONENT_KARLA] = {
        .species = SPECIES_CLOYSTER,
        .nickname = _("COOCHIE"),
        .trainerName = _("KARLA"),
        .trainerGfxId = OBJ_EVENT_GFX_GIRL_2,
        .aiFlags = CONTEST_AI_SET_A,
        .whichRank = CONTEST_RANK_HYPER,
        .aiPool_Cool = FALSE,
        .aiPool_Beauty = TRUE,
        .aiPool_Cute = TRUE,
        .aiPool_Smart = TRUE,
        .aiPool_Tough = FALSE,
        .moves =
        {
            MOVE_WITHDRAW,
            MOVE_SPIKES,
            MOVE_HYDRO_PUMP,
            MOVE_PROTECT
        },
        .cool = 40,
        .beauty = 60,
        .cute = 90,
        .smart = 45,
        .tough = 70,
        .sheen = 230,
        .personality = 0,
        .otId = 0xFFFF
    },
    [CONTEST_OPPONENT_DARRYL] = {
        .species = SPECIES_RUNERIGUS,
        .nickname = _("GUS"),
        .trainerName = _("DARRYL"),
        .trainerGfxId = OBJ_EVENT_GFX_MAN_3,
        .aiFlags = CONTEST_AI_SET_18,
        .whichRank = CONTEST_RANK_HYPER,
        .aiPool_Cool = FALSE,
        .aiPool_Beauty = FALSE,
        .aiPool_Cute = FALSE,
        .aiPool_Smart = TRUE,
        .aiPool_Tough = TRUE,
        .moves =
        {
            MOVE_POWER_SPLIT,
            MOVE_HEX,
            MOVE_EARTHQUAKE,
            MOVE_SLAM
        },
        .cool = 35,
        .beauty = 50,
        .cute = 90,
        .smart = 40,
        .tough = 100,
        .sheen = 240,
        .personality = 0,
        .otId = 0xFFFF
    },
    [CONTEST_OPPONENT_SELENA] = {
        .species = SPECIES_VOLCARONA,
        .nickname = _("MOTHRA"),
        .trainerName = _("SELENA"),
        .trainerGfxId = OBJ_EVENT_GFX_EXPERT_F,
        .aiFlags = CONTEST_AI_SET_19,
        .whichRank = CONTEST_RANK_HYPER,
        .aiPool_Cool = FALSE,
        .aiPool_Beauty = TRUE,
        .aiPool_Cute = TRUE,
        .aiPool_Smart = FALSE,
        .aiPool_Tough = FALSE,
        .moves =
        {
            MOVE_U_TURN,
            MOVE_BUG_BUZZ,
            MOVE_FIERY_DANCE,
            MOVE_HEAT_WAVE
        },
        .cool = 30,
        .beauty = 100,
        .cute = 100,
        .smart = 50,
        .tough = 30,
        .sheen = 250,
        .personality = 0,
        .otId = 0xFFFF
    },
    [CONTEST_OPPONENT_NOEL] = {
        .species = SPECIES_MAGIKARP,
        .nickname = _("MAGICRAP"),
        .trainerName = _("NOAH"),
        .trainerGfxId = OBJ_EVENT_GFX_YOUNGSTER,
        .aiFlags = CONTEST_AI_SET_1A,
        .whichRank = CONTEST_RANK_HYPER,
        .aiPool_Cool = FALSE,
        .aiPool_Beauty = FALSE,
        .aiPool_Cute = TRUE,
        .aiPool_Smart = FALSE,
        .aiPool_Tough = TRUE,
        .moves =
        {
            MOVE_TACKLE,
            MOVE_SPLASH,
            MOVE_FLAIL,
            MOVE_TACKLE
        },
        .cool = 30,
        .beauty = 30,
        .cute = 160,
        .smart = 50,
        .tough = 160,
        .sheen = 255,
        .personality = 0,
        .otId = 0xFFFF
    },
    [CONTEST_OPPONENT_LACEY] = {
        .species = SPECIES_BRAIXEN,
        .nickname = _("FURSONA"),
        .trainerName = _("JACE"),
        .trainerGfxId = OBJ_EVENT_GFX_FAT_MAN,
        .aiFlags = CONTEST_AI_SET_21,
        .whichRank = CONTEST_RANK_HYPER,
        .aiPool_Cool = FALSE,
        .aiPool_Beauty = TRUE,
        .aiPool_Cute = FALSE,
        .aiPool_Smart = TRUE,
        .aiPool_Tough = FALSE,
        .moves =
        {
            MOVE_FLAMETHROWER,
            MOVE_MAGIC_ROOM,
            MOVE_PSYCHIC,
            MOVE_SUNNY_DAY
        },
        .cool = 50,
        .beauty = 70,
        .cute = 60,
        .smart = 70,
        .tough = 50,
        .sheen = 210,
        .personality = 0,
        .otId = 0xFFFF
    },
    [CONTEST_OPPONENT_CORBIN] = {
        .species = SPECIES_FLOATZEL,
        .nickname = _("FLOATIE"),
        .trainerName = _("CARRIE"),
        .trainerGfxId = OBJ_EVENT_GFX_TUBER_F,
        .aiFlags = CONTEST_AI_SET_F,
        .whichRank = CONTEST_RANK_HYPER,
        .aiPool_Cool = TRUE,
        .aiPool_Beauty = TRUE,
        .aiPool_Cute = FALSE,
        .aiPool_Smart = FALSE,
        .aiPool_Tough = FALSE,
        .moves =
        {
            MOVE_AQUA_JET,
            MOVE_HYDRO_PUMP,
            MOVE_RAZOR_WIND,
            MOVE_AGILITY
        },
        .cool = 95,
        .beauty = 80,
        .cute = 85,
        .smart = 35,
        .tough = 35,
        .sheen = 220,
        .personality = 0,
        .otId = 0xFFFF
    },
    [CONTEST_OPPONENT_GRACIE] = {
        .species = SPECIES_EXEGGUTOR_ALOLAN,
        .nickname = _("PALM"),
        .trainerName = _("JOSEPH"),
        .trainerGfxId = OBJ_EVENT_GFX_SCOTT,
        .aiFlags = CONTEST_AI_SET_1,
        .whichRank = CONTEST_RANK_HYPER,
        .aiPool_Cool = FALSE,
        .aiPool_Beauty = FALSE,
        .aiPool_Cute = FALSE,
        .aiPool_Smart = TRUE,
        .aiPool_Tough = TRUE,
        .moves =
        {
            MOVE_WOOD_HAMMER,
            MOVE_HYPNOSIS,
            MOVE_EGG_BOMB,
            MOVE_PSYSHOCK
        },
        .cool = 40,
        .beauty = 50,
        .cute = 60,
        .smart = 100,
        .tough = 80,
        .sheen = 200,
        .personality = 0,
        .otId = 0xFFFF
    },
    [CONTEST_OPPONENT_COLTIN] = {
        .species = SPECIES_MAWILE,
        .nickname = _("TEEF"),
        .trainerName = _("COLTIN"),
        .trainerGfxId = OBJ_EVENT_GFX_MAN_4,
        .aiFlags = CONTEST_AI_SET_2,
        .whichRank = CONTEST_RANK_HYPER,
        .aiPool_Cool = FALSE,
        .aiPool_Beauty = FALSE,
        .aiPool_Cute = TRUE,
        .aiPool_Smart = FALSE,
        .aiPool_Tough = TRUE,
        .moves =
        {
            MOVE_CRUNCH,
            MOVE_PLAY_ROUGH,
            MOVE_BATON_PASS,
            MOVE_GROWL
        },
        .cool = 40,
        .beauty = 35,
        .cute = 85,
        .smart = 35,
        .tough = 100,
        .sheen = 210,
        .personality = 0,
        .otId = 0xFFFF
    },
    [CONTEST_OPPONENT_ELLIE] = {
        .species = SPECIES_HERACROSS,
        .nickname = _("HERABOSS"),
        .trainerName = _("JEREMY"),
        .trainerGfxId = OBJ_EVENT_GFX_EXPERT_M,
        .aiFlags = CONTEST_AI_SET_3,
        .whichRank = CONTEST_RANK_HYPER,
        .aiPool_Cool = TRUE,
        .aiPool_Beauty = FALSE,
        .aiPool_Cute = FALSE,
        .aiPool_Smart = FALSE,
        .aiPool_Tough = TRUE,
        .moves =
        {
            MOVE_MEGAHORN,
            MOVE_REVERSAL,
            MOVE_ENDURE,
            MOVE_CHIP_AWAY
        },
        .cool = 85,
        .beauty = 30,
        .cute = 25,
        .smart = 50,
        .tough = 100,
        .sheen = 220,
        .personality = 0,
        .otId = 0xFFFF
    },
    [CONTEST_OPPONENT_MARCUS] = {
        .species = SPECIES_WOOPER,
        .nickname = _("POOPER"),
        .trainerName = _("MARCUS"),
        .trainerGfxId = OBJ_EVENT_GFX_SAILOR,
        .aiFlags = CONTEST_AI_SET_4,
        .whichRank = CONTEST_RANK_HYPER,
        .aiPool_Cool = FALSE,
        .aiPool_Beauty = FALSE,
        .aiPool_Cute = TRUE,
        .aiPool_Smart = FALSE,
        .aiPool_Tough = TRUE,
        .moves =
        {
            MOVE_YAWN,
            MOVE_AMNESIA,
            MOVE_RAIN_DANCE,
            MOVE_MUDDY_WATER
        },
        .cool = 30,
        .beauty = 35,
        .cute = 100,
        .smart = 40,
        .tough = 95,
        .sheen = 230,
        .personality = 0,
        .otId = 0xFFFF
    },
    [CONTEST_OPPONENT_KIARA] = {
        .species = SPECIES_TEDDIURSA,
        .nickname = _("TEDDY"),
        .trainerName = _("KIARA"),
        .trainerGfxId = OBJ_EVENT_GFX_TWIN,
        .aiFlags = CONTEST_AI_SET_5,
        .whichRank = CONTEST_RANK_HYPER,
        .aiPool_Cool = TRUE,
        .aiPool_Beauty = FALSE,
        .aiPool_Cute = FALSE,
        .aiPool_Smart = FALSE,
        .aiPool_Tough = TRUE,
        .moves =
        {
            MOVE_SLASH,
            MOVE_FURY_SWIPES,
            MOVE_THRASH,
            MOVE_BRICK_BREAK
        },
        .cool = 100,
        .beauty = 50,
        .cute = 30,
        .smart = 50,
        .tough = 100,
        .sheen = 240,
        .personality = 0,
        .otId = 0xFFFF
    },
    [CONTEST_OPPONENT_BRYCE] = {
        .species = SPECIES_PINECO,
        .nickname = _("CONEHEAD"),
        .trainerName = _("BRYCE"),
        .trainerGfxId = OBJ_EVENT_GFX_BUG_CATCHER,
        .aiFlags = CONTEST_AI_SET_6,
        .whichRank = CONTEST_RANK_HYPER,
        .aiPool_Cool = FALSE,
        .aiPool_Beauty = TRUE,
        .aiPool_Cute = FALSE,
        .aiPool_Smart = TRUE,
        .aiPool_Tough = FALSE,
        .moves =
        {
            MOVE_EXPLOSION,
            MOVE_SPIKES,
            MOVE_LIGHT_SCREEN,
            MOVE_GIGA_DRAIN
        },
        .cool = 80,
        .beauty = 80,
        .cute = 80,
        .smart = 80,
        .tough = 80,
        .sheen = 250,
        .personality = 0,
        .otId = 0xFFFF
    },
    [CONTEST_OPPONENT_JAMIE] = {
        .species = SPECIES_MUNCHLAX,
        .nickname = _("MUNCHIES"),
        .trainerName = _("JAMIE"),
        .trainerGfxId = OBJ_EVENT_GFX_WOMAN_5,
        .aiFlags = CONTEST_AI_SET_7,
        .whichRank = CONTEST_RANK_HYPER,
        .aiPool_Cool = FALSE,
        .aiPool_Beauty = FALSE,
        .aiPool_Cute = TRUE,
        .aiPool_Smart = FALSE,
        .aiPool_Tough = TRUE,
        .moves =
        {
            MOVE_REST,
            MOVE_SNORE,
            MOVE_BODY_SLAM,
            MOVE_EARTHQUAKE
        },
        .cool = 40,
        .beauty = 35,
        .cute = 100,
        .smart = 40,
        .tough = 110,
        .sheen = 240,
        .personality = 0,
        .otId = 0xFFFF
    },
    [CONTEST_OPPONENT_JORGE] = {
        .species = SPECIES_ROTOM_HEAT,
        .nickname = _("EASYBAKE"),
        .trainerName = _("GEORGIA"),
        .trainerGfxId = OBJ_EVENT_GFX_LITTLE_GIRL,
        .aiFlags = CONTEST_AI_SET_8,
        .whichRank = CONTEST_RANK_HYPER,
        .aiPool_Cool = TRUE,
        .aiPool_Beauty = TRUE,
        .aiPool_Cute = FALSE,
        .aiPool_Smart = FALSE,
        .aiPool_Tough = FALSE,
        .moves =
        {
            MOVE_OVERHEAT,
            MOVE_LIGHT_SCREEN,
            MOVE_THUNDER_WAVE,
            MOVE_THUNDER
        },
        .cool = 100,
        .beauty = 100,
        .cute = 30,
        .smart = 25,
        .tough = 80,
        .sheen = 230,
        .personality = 0,
        .otId = 0xFFFF
    },
    [CONTEST_OPPONENT_DEVON] = {
        .species = SPECIES_MILTANK,
        .nickname = _("MILKERS"),
        .trainerName = _("BAILEY"),
        .trainerGfxId = OBJ_EVENT_GFX_ANABEL,
        .aiFlags = CONTEST_AI_SET_9,
        .whichRank = CONTEST_RANK_HYPER,
        .aiPool_Cool = FALSE,
        .aiPool_Beauty = TRUE,
        .aiPool_Cute = TRUE,
        .aiPool_Smart = FALSE,
        .aiPool_Tough = FALSE,
        .moves =
        {
            MOVE_MILK_DRINK,
            MOVE_HEAL_BELL,
            MOVE_DEFENSE_CURL,
            MOVE_BLIZZARD
        },
        .cool = 50,
        .beauty = 110,
        .cute = 100,
        .smart = 35,
        .tough = 40,
        .sheen = 220,
        .personality = 0,
        .otId = 0xFFFF
    },
    [CONTEST_OPPONENT_JUSTINA] = {
        .species = SPECIES_GYARADOS,
        .nickname = _("MADLAD"),
        .trainerName = _("BRAXTON"),
        .trainerGfxId = OBJ_EVENT_GFX_FISHERMAN,
        .aiFlags = CONTEST_AI_SET_1D,
        .whichRank = CONTEST_RANK_MASTER,
        .aiPool_Cool = TRUE,
        .aiPool_Beauty = TRUE,
        .aiPool_Cute = FALSE,
        .aiPool_Smart = FALSE,
        .aiPool_Tough = TRUE,
        .moves =
        {
            MOVE_HYPER_BEAM,
            MOVE_SURF,
            MOVE_RAIN_DANCE,
            MOVE_CRUNCH
        },
        .cool = 160,
        .beauty = 200,
        .cute = 20,
        .smart = 40,
        .tough = 160,
        .sheen = 255,
        .personality = 0,
        .otId = 0xFFFF
    },
    [CONTEST_OPPONENT_RALPH] = {
        .species = SPECIES_EEVEE,
        .nickname = _("STEEVEE"),
        .trainerName = _("RALPH"),
        .trainerGfxId = OBJ_EVENT_GFX_GENTLEMAN,
        .aiFlags = CONTEST_AI_SET_2,
        .whichRank = CONTEST_RANK_MASTER,
        .aiPool_Cool = TRUE,
        .aiPool_Beauty = FALSE,
        .aiPool_Cute = FALSE,
        .aiPool_Smart = FALSE,
        .aiPool_Tough = TRUE,
        .moves =
        {
            MOVE_DOUBLE_TEAM,
            MOVE_QUICK_ATTACK,
            MOVE_BITE,
            MOVE_TAKE_DOWN
        },
        .cool = 170,
        .beauty = 50,
        .cute = 55,
        .smart = 150,
        .tough = 160,
        .sheen = 255,
        .personality = 0,
        .otId = 0xFFFF
    },
    [CONTEST_OPPONENT_ROSA] = {
        .species = SPECIES_GLAMEOW,
        .nickname = _("CAT"),
        .trainerName = _("ROSA"),
        .trainerGfxId = OBJ_EVENT_GFX_GIRL_1,
        .aiFlags = CONTEST_AI_SET_11,
        .whichRank = CONTEST_RANK_MASTER,
        .aiPool_Cool = FALSE,
        .aiPool_Beauty = TRUE,
        .aiPool_Cute = TRUE,
        .aiPool_Smart = TRUE,
        .aiPool_Tough = FALSE,
        .moves =
        {
            MOVE_ATTRACT,
            MOVE_ASSIST,
            MOVE_FEINT_ATTACK,
            MOVE_GROWL
        },
        .cool = 40,
        .beauty = 200,
        .cute = 150,
        .smart = 185,
        .tough = 60,
        .sheen = 255,
        .personality = 0,
        .otId = 0xFFFF
    },
    [CONTEST_OPPONENT_KEATON] = {
        .species = SPECIES_LILLIGANT_HISUIAN,
        .nickname = _("GRASSLASS"),
        .trainerName = _("KEATON"),
        .trainerGfxId = OBJ_EVENT_GFX_LITTLE_BOY,
        .aiFlags = CONTEST_AI_SET_12,
        .whichRank = CONTEST_RANK_MASTER,
        .aiPool_Cool = FALSE,
        .aiPool_Beauty = FALSE,
        .aiPool_Cute = TRUE,
        .aiPool_Smart = TRUE,
        .aiPool_Tough = TRUE,
        .moves =
        {
            MOVE_CLOSE_COMBAT,
            MOVE_TEETER_DANCE,
            MOVE_SOLAR_BLADE,
            MOVE_SYNTHESIS
        },
        .cool = 85,
        .beauty = 85,
        .cute = 170,
        .smart = 110,
        .tough = 150,
        .sheen = 255,
        .personality = 0,
        .otId = 0xFFFF
    },
    [CONTEST_OPPONENT_MAYRA] = {
        .species = SPECIES_ARCANINE,
        .nickname = _("DOGE"),
        .trainerName = _("MARIA"),
        .trainerGfxId = OBJ_EVENT_GFX_POKEFAN_F,
        .aiFlags = CONTEST_AI_SET_5,
        .whichRank = CONTEST_RANK_MASTER,
        .aiPool_Cool = TRUE,
        .aiPool_Beauty = TRUE,
        .aiPool_Cute = FALSE,
        .aiPool_Smart = FALSE,
        .aiPool_Tough = FALSE,
        .moves =
        {
            MOVE_SUNNY_DAY,
            MOVE_FIRE_BLAST,
            MOVE_EXTREME_SPEED,
            MOVE_ROAR
        },
        .cool = 170,
        .beauty = 150,
        .cute = 30,
        .smart = 30,
        .tough = 90,
        .sheen = 255,
        .personality = 0,
        .otId = 0xFFFF
    },
    [CONTEST_OPPONENT_LAMAR] = {
        .species = SPECIES_TOXTRICITY_LOW_KEY,
        .nickname = _("SHOCKER"),
        .trainerName = _("MARCOS"),
        .trainerGfxId = OBJ_EVENT_GFX_MAN_5,
        .aiFlags = CONTEST_AI_SET_1E,
        .whichRank = CONTEST_RANK_MASTER,
        .aiPool_Cool = TRUE,
        .aiPool_Beauty = FALSE,
        .aiPool_Cute = FALSE,
        .aiPool_Smart = TRUE,
        .aiPool_Tough = FALSE,
        .moves =
        {
            MOVE_BOOMBURST,
            MOVE_OVERDRIVE,
            MOVE_TOXIC,
            MOVE_VENOM_DRENCH
        },
        .cool = 210,
        .beauty = 60,
        .cute = 60,
        .smart = 200,
        .tough = 80,
        .sheen = 255,
        .personality = 0,
        .otId = 0xFFFF
    },
    [CONTEST_OPPONENT_AUBREY] = {
        .species = SPECIES_BELLOSSOM,
        .nickname = _("BLOSSOM"),
        .trainerName = _("AUBREY"),
        .trainerGfxId = OBJ_EVENT_GFX_WOMAN_4,
        .aiFlags = CONTEST_AI_SET_1F,
        .whichRank = CONTEST_RANK_MASTER,
        .aiPool_Cool = FALSE,
        .aiPool_Beauty = TRUE,
        .aiPool_Cute = TRUE,
        .aiPool_Smart = TRUE,
        .aiPool_Tough = FALSE,
        .moves =
        {
            MOVE_PETAL_DANCE,
            MOVE_SWEET_SCENT,
            MOVE_STUN_SPORE,
            MOVE_FLASH
        },
        .cool = 35,
        .beauty = 200,
        .cute = 150,
        .smart = 130,
        .tough = 40,
        .sheen = 255,
        .personality = 0,
        .otId = 0xFFFF
    },
    [CONTEST_OPPONENT_NIGEL] = {
        .species = SPECIES_OMASTAR,
        .nickname = _("DAVY"),
        .trainerName = _("NIGEL"),
        .trainerGfxId = OBJ_EVENT_GFX_MAN_1,
        .aiFlags = CONTEST_AI_SET_16,
        .whichRank = CONTEST_RANK_MASTER,
        .aiPool_Cool = FALSE,
        .aiPool_Beauty = FALSE,
        .aiPool_Cute = TRUE,
        .aiPool_Smart = TRUE,
        .aiPool_Tough = TRUE,
        .moves =
        {
            MOVE_WITHDRAW,
            MOVE_ROCK_BLAST,
            MOVE_SPIKES,
            MOVE_TICKLE
        },
        .cool = 25,
        .beauty = 35,
        .cute = 230,
        .smart = 150,
        .tough = 160,
        .sheen = 255,
        .personality = 0,
        .otId = 0xFFFF
    },
    [CONTEST_OPPONENT_CAMILLE] = {
        .species = SPECIES_XATU,
        .nickname = _("BIRB"),
        .trainerName = _("CAMILLE"),
        .trainerGfxId = OBJ_EVENT_GFX_LASS,
        .aiFlags = CONTEST_AI_SET_20,
        .whichRank = CONTEST_RANK_MASTER,
        .aiPool_Cool = FALSE,
        .aiPool_Beauty = FALSE,
        .aiPool_Cute = TRUE,
        .aiPool_Smart = TRUE,
        .aiPool_Tough = TRUE,
        .moves =
        {
            MOVE_NIGHT_SHADE,
            MOVE_FUTURE_SIGHT,
            MOVE_CONFUSE_RAY,
            MOVE_PSYCHIC
        },
        .cool = 35,
        .beauty = 35,
        .cute = 150,
        .smart = 130,
        .tough = 170,
        .sheen = 255,
        .personality = 0,
        .otId = 0xFFFF
    },
    [CONTEST_OPPONENT_DEON] = {
        .species = SPECIES_CLOBBOPUS,
        .nickname = _("NANNERPUSS"),
        .trainerName = _("DENNY"),
        .trainerGfxId = OBJ_EVENT_GFX_SCHOOL_KID_M,
        .aiFlags = CONTEST_AI_SET_A,
        .whichRank = CONTEST_RANK_MASTER,
        .aiPool_Cool = TRUE,
        .aiPool_Beauty = FALSE,
        .aiPool_Cute = TRUE,
        .aiPool_Smart = FALSE,
        .aiPool_Tough = TRUE,
        .moves =
        {
            MOVE_SUBMISSION,
            MOVE_REVERSAL,
            MOVE_BIND,
            MOVE_RETURN
        },
        .cool = 140,
        .beauty = 70,
        .cute = 140,
        .smart = 75,
        .tough = 100,
        .sheen = 255,
        .personality = 0,
        .otId = 0xFFFF
    },
    [CONTEST_OPPONENT_JANELLE] = {
        .species = SPECIES_MUDKIP,
        .nickname = _("SKIP"),
        .trainerName = _("JANELLE"),
        .trainerGfxId = OBJ_EVENT_GFX_GIRL_2,
        .aiFlags = CONTEST_AI_SET_18,
        .whichRank = CONTEST_RANK_MASTER,
        .aiPool_Cool = FALSE,
        .aiPool_Beauty = FALSE,
        .aiPool_Cute = TRUE,
        .aiPool_Smart = FALSE,
        .aiPool_Tough = TRUE,
        .moves =
        {
            MOVE_MUD_SLAP,
            MOVE_MUD_SPORT,
            MOVE_ENDURE,
            MOVE_ENDEAVOR
        },
        .cool = 50,
        .beauty = 100,
        .cute = 220,
        .smart = 40,
        .tough = 190,
        .sheen = 255,
        .personality = 0,
        .otId = 0xFFFF
    },
    [CONTEST_OPPONENT_HEATH] = {
        .species = SPECIES_GOLEM_ALOLAN,
        .nickname = _("GROUCHO"),
        .trainerName = _("HEATH"),
        .trainerGfxId = OBJ_EVENT_GFX_HIKER,
        .aiFlags = CONTEST_AI_SET_19,
        .whichRank = CONTEST_RANK_MASTER,
        .aiPool_Cool = TRUE,
        .aiPool_Beauty = FALSE,
        .aiPool_Cute = FALSE,
        .aiPool_Smart = FALSE,
        .aiPool_Tough = TRUE,
        .moves =
        {
            MOVE_ROCK_SLIDE,
            MOVE_ROCK_THROW,
            MOVE_CHARGE,
            MOVE_DISCHARGE
        },
        .cool = 170,
        .beauty = 70,
        .cute = 110,
        .smart = 240,
        .tough = 140,
        .sheen = 255,
        .personality = 0,
        .otId = 0xFFFF
    },
    [CONTEST_OPPONENT_SASHA] = {
        .species = SPECIES_BELLSPROUT,
        .nickname = _("LIPS"),
        .trainerName = _("HAYATE"),
        .trainerGfxId = OBJ_EVENT_GFX_NOLAND,
        .aiFlags = CONTEST_AI_SET_1A,
        .whichRank = CONTEST_RANK_MASTER,
        .aiPool_Cool = TRUE,
        .aiPool_Beauty = TRUE,
        .aiPool_Cute = FALSE,
        .aiPool_Smart = FALSE,
        .aiPool_Tough = FALSE,
        .moves =
        {
            MOVE_GROWTH,
            MOVE_RAZOR_LEAF,
            MOVE_MAGICAL_LEAF,
            MOVE_VINE_WHIP
        },
        .cool = 200,
        .beauty = 200,
        .cute = 30,
        .smart = 35,
        .tough = 50,
        .sheen = 255,
        .personality = 0,
        .otId = 0xFFFF
    },
    [CONTEST_OPPONENT_FRANKIE] = {
        .species = SPECIES_GUMSHOOS,
        .nickname = _("TRUMP"),
        .trainerName = _("FRANKIE"),
        .trainerGfxId = OBJ_EVENT_GFX_YOUNGSTER,
        .aiFlags = CONTEST_AI_SET_21,
        .whichRank = CONTEST_RANK_MASTER,
        .aiPool_Cool = FALSE,
        .aiPool_Beauty = TRUE,
        .aiPool_Cute = TRUE,
        .aiPool_Smart = TRUE,
        .aiPool_Tough = FALSE,
        .moves =
        {
            MOVE_ODOR_SLEUTH,
            MOVE_TOXIC,
            MOVE_REST,
            MOVE_YAWN
        },
        .cool = 25,
        .beauty = 150,
        .cute = 180,
        .smart = 115,
        .tough = 120,
        .sheen = 255,
        .personality = 0,
        .otId = 0xFFFF
    },
    [CONTEST_OPPONENT_HELEN] = {
        .species = SPECIES_WOBBUFFET,
        .nickname = _("BUFFET"),
        .trainerName = _("HELEN"),
        .trainerGfxId = OBJ_EVENT_GFX_WOMAN_1,
        .aiFlags = CONTEST_AI_SET_F,
        .whichRank = CONTEST_RANK_MASTER,
        .aiPool_Cool = TRUE,
        .aiPool_Beauty = TRUE,
        .aiPool_Cute = FALSE,
        .aiPool_Smart = TRUE,
        .aiPool_Tough = TRUE,
        .moves =
        {
            MOVE_COUNTER,
            MOVE_MIRROR_COAT,
            MOVE_SAFEGUARD,
            MOVE_DESTINY_BOND
        },
        .cool = 60,
        .beauty = 230,
        .cute = 50,
        .smart = 220,
        .tough = 210,
        .sheen = 255,
        .personality = 0,
        .otId = 0xFFFF
    },
    [CONTEST_OPPONENT_CAMILE] = {
        .species = SPECIES_STEELIX,
        .nickname = _("JAW"),
        .trainerName = _("CAMERON"),
        .trainerGfxId = OBJ_EVENT_GFX_RUNNING_TRIATHLETE_M,
        .aiFlags = CONTEST_AI_SET_1,
        .whichRank = CONTEST_RANK_MASTER,
        .aiPool_Cool = TRUE,
        .aiPool_Beauty = FALSE,
        .aiPool_Cute = FALSE,
        .aiPool_Smart = FALSE,
        .aiPool_Tough = TRUE,
        .moves =
        {
            MOVE_RAGE,
            MOVE_DRAGON_BREATH,
            MOVE_HARDEN,
            MOVE_DOUBLE_EDGE
        },
        .cool = 200,
        .beauty = 100,
        .cute = 50,
        .smart = 80,
        .tough = 180,
        .sheen = 255,
        .personality = 0,
        .otId = 0xFFFF
    },
    [CONTEST_OPPONENT_MARTIN] = {
        .species = SPECIES_PORYGON_Z,
        .nickname = _("SEIZURE"),
        .trainerName = _("MARTIN"),
        .trainerGfxId = OBJ_EVENT_GFX_SCIENTIST_1,
        .aiFlags = CONTEST_AI_SET_2,
        .whichRank = CONTEST_RANK_MASTER,
        .aiPool_Cool = TRUE,
        .aiPool_Beauty = TRUE,
        .aiPool_Cute = TRUE,
        .aiPool_Smart = TRUE,
        .aiPool_Tough = TRUE,
        .moves =
        {
            MOVE_CONVERSION_2,
            MOVE_CONVERSION,
            MOVE_RETURN,
            MOVE_RECYCLE
        },
        .cool = 130,
        .beauty = 130,
        .cute = 130,
        .smart = 130,
        .tough = 130,
        .sheen = 255,
        .personality = 0,
        .otId = 0xFFFF
    },
    [CONTEST_OPPONENT_SERGIO] = {
        .species = SPECIES_MAMOSWINE,
        .nickname = _("MANNY"),
        .trainerName = _("WINTER"),
        .trainerGfxId = OBJ_EVENT_GFX_LIZA,
        .aiFlags = CONTEST_AI_SET_3,
        .whichRank = CONTEST_RANK_MASTER,
        .aiPool_Cool = FALSE,
        .aiPool_Beauty = TRUE,
        .aiPool_Cute = FALSE,
        .aiPool_Smart = FALSE,
        .aiPool_Tough = TRUE,
        .moves =
        {
            MOVE_POWDER_SNOW,
            MOVE_BLIZZARD,
            MOVE_EARTHQUAKE,
            MOVE_FISSURE
        },
        .cool = 20,
        .beauty = 240,
        .cute = 20,
        .smart = 20,
        .tough = 240,
        .sheen = 255,
        .personality = 0,
        .otId = 0xFFFF
    },
    [CONTEST_OPPONENT_KAILEY] = {
        .species = SPECIES_SYLVEON,
        .nickname = _("SYLVIA"),
        .trainerName = _("ALICIA"),
        .trainerGfxId = OBJ_EVENT_GFX_BRAWLY,
        .aiFlags = CONTEST_AI_SET_4,
        .whichRank = CONTEST_RANK_MASTER,
        .aiPool_Cool = FALSE,
        .aiPool_Beauty = FALSE,
        .aiPool_Cute = TRUE,
        .aiPool_Smart = TRUE,
        .aiPool_Tough = FALSE,
        .moves =
        {
            MOVE_PSYCHIC,
            MOVE_CALM_MIND,
            MOVE_DISARMING_VOICE,
            MOVE_MOONBLAST
        },
        .cool = 25,
        .beauty = 20,
        .cute = 240,
        .smart = 240,
        .tough = 20,
        .sheen = 255,
        .personality = 0,
        .otId = 0xFFFF
    },
    [CONTEST_OPPONENT_PERLA] = {
        .species = SPECIES_JYNX,
        .nickname = _("BLONDIE"),
        .trainerName = _("MICHAEL"),
        .trainerGfxId = OBJ_EVENT_GFX_POKEFAN_M,
        .aiFlags = CONTEST_AI_SET_5,
        .whichRank = CONTEST_RANK_MASTER,
        .aiPool_Cool = FALSE,
        .aiPool_Beauty = TRUE,
        .aiPool_Cute = FALSE,
        .aiPool_Smart = TRUE,
        .aiPool_Tough = FALSE,
        .moves =
        {
            MOVE_PERISH_SONG,
            MOVE_MEAN_LOOK,
            MOVE_CALM_MIND,
            MOVE_REFLECT
        },
        .cool = 130,
        .beauty = 120,
        .cute = 130,
        .smart = 120,
        .tough = 120,
        .sheen = 255,
        .personality = 0,
        .otId = 0xFFFF
    },
    [CONTEST_OPPONENT_CLARA] = {
        .species = SPECIES_SNOM,
        .nickname = _("NOMNOM"),
        .trainerName = _("CLARA"),
        .trainerGfxId = OBJ_EVENT_GFX_GIRL_3,
        .aiFlags = CONTEST_AI_SET_6,
        .whichRank = CONTEST_RANK_MASTER,
        .aiPool_Cool = FALSE,
        .aiPool_Beauty = FALSE,
        .aiPool_Cute = TRUE,
        .aiPool_Smart = FALSE,
        .aiPool_Tough = FALSE,
        .moves =
        {
            MOVE_REST,
            MOVE_SNORE,
            MOVE_FAIRY_WIND,
            MOVE_ATTRACT
        },
        .cool = 80,
        .beauty = 120,
        .cute = 200,
        .smart = 120,
        .tough = 80,
        .sheen = 255,
        .personality = 0,
        .otId = 0xFFFF
    },
    [CONTEST_OPPONENT_JAKOB] = {
        .species = SPECIES_SCYTHER,
        .nickname = _("EDWARD"),
        .trainerName = _("DAVE"),
        .trainerGfxId = OBJ_EVENT_GFX_BUG_CATCHER,
        .aiFlags = CONTEST_AI_SET_7,
        .whichRank = CONTEST_RANK_MASTER,
        .aiPool_Cool = TRUE,
        .aiPool_Beauty = TRUE,
        .aiPool_Cute = FALSE,
        .aiPool_Smart = FALSE,
        .aiPool_Tough = FALSE,
        .moves =
        {
            MOVE_SWORDS_DANCE,
            MOVE_X_SCISSOR,
            MOVE_DOUBLE_TEAM,
            MOVE_QUICK_ATTACK
        },
        .cool = 180,
        .beauty = 150,
        .cute = 100,
        .smart = 80,
        .tough = 150,
        .sheen = 255,
        .personality = 0,
        .otId = 0xFFFF
    },
    [CONTEST_OPPONENT_TREY] = {
        .species = SPECIES_KOMALA,
        .nickname = _("KOALA"),
        .trainerName = _("PAUL"),
        .trainerGfxId = OBJ_EVENT_GFX_OLD_MAN,
        .aiFlags = CONTEST_AI_SET_8,
        .whichRank = CONTEST_RANK_MASTER,
        .aiPool_Cool = FALSE,
        .aiPool_Beauty = FALSE,
        .aiPool_Cute = TRUE,
        .aiPool_Smart = FALSE,
        .aiPool_Tough = TRUE,
        .moves =
        {
            MOVE_STOCKPILE,
            MOVE_SPIT_UP,
            MOVE_YAWN,
            MOVE_FLAIL
        },
        .cool = 100,
        .beauty = 80,
        .cute = 200,
        .smart = 110,
        .tough = 170,
        .sheen = 255,
        .personality = 0,
        .otId = 0xFFFF
    },
    [CONTEST_OPPONENT_LANE] = {
        .species = SPECIES_RATICATE,
        .nickname = _("SPLINTER"),
        .trainerName = _("JOEY"),
        .trainerGfxId = OBJ_EVENT_GFX_MAN_3,
        .aiFlags = CONTEST_AI_SET_9,
        .whichRank = CONTEST_RANK_MASTER,
        .aiPool_Cool = TRUE,
        .aiPool_Beauty = FALSE,
        .aiPool_Cute = FALSE,
        .aiPool_Smart = FALSE,
        .aiPool_Tough = TRUE,
        .moves =
        {
            MOVE_SCARY_FACE,
            MOVE_SUPER_FANG,
            MOVE_HYPER_FANG,
            MOVE_QUICK_ATTACK
        },
        .cool = 180,
        .beauty = 140,
        .cute = 30,
        .smart = 80,
        .tough = 190,
        .sheen = 255,
        .personality = 0,
        .otId = 0xFFFF
    }
};


const u8 gPostgameContestOpponentFilter[] =
{
    [CONTEST_OPPONENT_JIMMY] = CONTEST_FILTER_NONE,
    [CONTEST_OPPONENT_EDITH] = CONTEST_FILTER_NONE,
    [CONTEST_OPPONENT_EVAN] = CONTEST_FILTER_NONE,
    [CONTEST_OPPONENT_KELSEY] = CONTEST_FILTER_NONE,
    [CONTEST_OPPONENT_MADISON] = CONTEST_FILTER_NONE,
    [CONTEST_OPPONENT_RAYMOND] = CONTEST_FILTER_NONE,
    [CONTEST_OPPONENT_GRANT] = CONTEST_FILTER_NONE,
    [CONTEST_OPPONENT_PAIGE] = CONTEST_FILTER_NONE,
    [CONTEST_OPPONENT_ALEC] = CONTEST_FILTER_NONE,
    [CONTEST_OPPONENT_SYDNEY] = CONTEST_FILTER_NONE,
    [CONTEST_OPPONENT_MORRIS] = CONTEST_FILTER_NONE,
    [CONTEST_OPPONENT_MARIAH] = CONTEST_FILTER_NONE,
    [CONTEST_OPPONENT_RUSSELL] = CONTEST_FILTER_NONE,
    [CONTEST_OPPONENT_MELANIE] = CONTEST_FILTER_NONE,
    [CONTEST_OPPONENT_CHANCE] = CONTEST_FILTER_NONE,
    [CONTEST_OPPONENT_AGATHA] = CONTEST_FILTER_NONE,
    [CONTEST_OPPONENT_BEAU] = CONTEST_FILTER_NONE,
    [CONTEST_OPPONENT_KAY] = CONTEST_FILTER_NONE,
    [CONTEST_OPPONENT_CALE] = CONTEST_FILTER_NONE,
    [CONTEST_OPPONENT_CAITLIN] = CONTEST_FILTER_NONE,
    [CONTEST_OPPONENT_COLBY] = CONTEST_FILTER_NONE,
    [CONTEST_OPPONENT_KYLIE] = CONTEST_FILTER_NONE,
    [CONTEST_OPPONENT_LIAM] = CONTEST_FILTER_NONE,
    [CONTEST_OPPONENT_MILO] = CONTEST_FILTER_NONE,
    [CONTEST_OPPONENT_KARINA] = CONTEST_FILTER_NONE,
    [CONTEST_OPPONENT_BOBBY] = CONTEST_FILTER_NONE,
    [CONTEST_OPPONENT_CLAIRE] = CONTEST_FILTER_NONE,
    [CONTEST_OPPONENT_WILLIE] = CONTEST_FILTER_NONE,
    [CONTEST_OPPONENT_CASSIDY] = CONTEST_FILTER_NONE,
    [CONTEST_OPPONENT_MORGAN] = CONTEST_FILTER_NONE,
    [CONTEST_OPPONENT_SUMMER] = CONTEST_FILTER_NONE,
    [CONTEST_OPPONENT_MILES] = CONTEST_FILTER_NONE,
    [CONTEST_OPPONENT_AUDREY] = CONTEST_FILTER_NONE,
    [CONTEST_OPPONENT_AVERY] = CONTEST_FILTER_NONE,
    [CONTEST_OPPONENT_ARIANA] = CONTEST_FILTER_NONE,
    [CONTEST_OPPONENT_ASHTON] = CONTEST_FILTER_NONE,
    [CONTEST_OPPONENT_SANDRA] = CONTEST_FILTER_NONE,
    [CONTEST_OPPONENT_CARSON] = CONTEST_FILTER_NONE,
    [CONTEST_OPPONENT_KATRINA] = CONTEST_FILTER_NONE,
    [CONTEST_OPPONENT_LUKE] = CONTEST_FILTER_NONE,
    [CONTEST_OPPONENT_RAUL] = CONTEST_FILTER_NONE,
    [CONTEST_OPPONENT_JADA] = CONTEST_FILTER_NONE,
    [CONTEST_OPPONENT_ZEEK] = CONTEST_FILTER_NONE,
    [CONTEST_OPPONENT_DIEGO] = CONTEST_FILTER_NONE,
    [CONTEST_OPPONENT_ALIYAH] = CONTEST_FILTER_NONE,
    [CONTEST_OPPONENT_NATALIA] = CONTEST_FILTER_NONE,
    [CONTEST_OPPONENT_DEVIN] = CONTEST_FILTER_NONE,
    [CONTEST_OPPONENT_TYLOR] = CONTEST_FILTER_NONE,
    [CONTEST_OPPONENT_RONNIE] = CONTEST_FILTER_NONE,
    [CONTEST_OPPONENT_CLAUDIA] = CONTEST_FILTER_NONE,
    [CONTEST_OPPONENT_ELIAS] = CONTEST_FILTER_NONE,
    [CONTEST_OPPONENT_JADE] = CONTEST_FILTER_NONE,
    [CONTEST_OPPONENT_FRANCIS] = CONTEST_FILTER_NONE,
    [CONTEST_OPPONENT_ALISHA] = CONTEST_FILTER_NONE,
    [CONTEST_OPPONENT_SAUL] = CONTEST_FILTER_NONE,
    [CONTEST_OPPONENT_FELICIA] = CONTEST_FILTER_NONE,
    [CONTEST_OPPONENT_EMILIO] = CONTEST_FILTER_NONE,
    [CONTEST_OPPONENT_KARLA] = CONTEST_FILTER_NONE,
    [CONTEST_OPPONENT_DARRYL] = CONTEST_FILTER_NONE,
    [CONTEST_OPPONENT_SELENA] = CONTEST_FILTER_NONE,
    [CONTEST_OPPONENT_NOEL] = CONTEST_FILTER_NONE,
    [CONTEST_OPPONENT_LACEY] = CONTEST_FILTER_NONE,
    [CONTEST_OPPONENT_CORBIN] = CONTEST_FILTER_NONE,
    [CONTEST_OPPONENT_GRACIE] = CONTEST_FILTER_NONE,
    [CONTEST_OPPONENT_COLTIN] = CONTEST_FILTER_NONE,
    [CONTEST_OPPONENT_ELLIE] = CONTEST_FILTER_NONE,
    [CONTEST_OPPONENT_MARCUS] = CONTEST_FILTER_NONE,
    [CONTEST_OPPONENT_KIARA] = CONTEST_FILTER_NONE,
    [CONTEST_OPPONENT_BRYCE] = CONTEST_FILTER_NONE,
    [CONTEST_OPPONENT_JAMIE] = CONTEST_FILTER_NONE,
    [CONTEST_OPPONENT_JORGE] = CONTEST_FILTER_NONE,
    [CONTEST_OPPONENT_DEVON] = CONTEST_FILTER_NONE,
    [CONTEST_OPPONENT_JUSTINA] = CONTEST_FILTER_NONE,
    [CONTEST_OPPONENT_RALPH] = CONTEST_FILTER_NONE,
    [CONTEST_OPPONENT_ROSA] = CONTEST_FILTER_NONE,
    [CONTEST_OPPONENT_KEATON] = CONTEST_FILTER_NONE,
    [CONTEST_OPPONENT_MAYRA] = CONTEST_FILTER_NONE,
    [CONTEST_OPPONENT_LAMAR] = CONTEST_FILTER_NONE,
    [CONTEST_OPPONENT_AUBREY] = CONTEST_FILTER_NONE,
    [CONTEST_OPPONENT_NIGEL] = CONTEST_FILTER_NONE,
    [CONTEST_OPPONENT_CAMILLE] = CONTEST_FILTER_NONE,
    [CONTEST_OPPONENT_DEON] = CONTEST_FILTER_NONE,
    [CONTEST_OPPONENT_JANELLE] = CONTEST_FILTER_NONE,
    [CONTEST_OPPONENT_HEATH] = CONTEST_FILTER_NONE,
    [CONTEST_OPPONENT_SASHA] = CONTEST_FILTER_NONE,
    [CONTEST_OPPONENT_FRANKIE] = CONTEST_FILTER_NONE,
    [CONTEST_OPPONENT_HELEN] = CONTEST_FILTER_NONE,
    [CONTEST_OPPONENT_CAMILE] = CONTEST_FILTER_NONE,
    [CONTEST_OPPONENT_MARTIN] = CONTEST_FILTER_NONE,
    [CONTEST_OPPONENT_SERGIO] = CONTEST_FILTER_NONE,
    [CONTEST_OPPONENT_KAILEY] = CONTEST_FILTER_NONE,
    [CONTEST_OPPONENT_PERLA] = CONTEST_FILTER_NONE,
    [CONTEST_OPPONENT_CLARA] = CONTEST_FILTER_NONE,
    [CONTEST_OPPONENT_JAKOB] = CONTEST_FILTER_NONE,
    [CONTEST_OPPONENT_TREY] = CONTEST_FILTER_NONE,
    [CONTEST_OPPONENT_LANE] = CONTEST_FILTER_NONE
};
