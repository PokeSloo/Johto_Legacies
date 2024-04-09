@ Local IDs are the same for both players houses
.set LOCALID_MOM, 1
.set LOCALID_DAD, 5
.set LOCALID_MOM_2F, 14

LittlerootTown_BrendansHouse_2F_EventScript_WallClock::
	lockall
	checkplayergender
	compare VAR_RESULT, MALE
	goto_if_eq LittlerootTown_MaysHouse_2F_EventScript_MalePlayer
	compare VAR_RESULT, FEMALE
	goto_if_eq LittlerootTown_MaysHouse_2F_EventScript_FemalePlayer
	end

LittlerootTown_MaysHouse_2F_EventScript_MalePlayer::
	setvar VAR_0x8004, MALE
	goto PlayersHouse_2F_EventScript_WallClock
	end

LittlerootTown_MaysHouse_2F_EventScript_FemalePlayer::
	setvar VAR_0x8004, FEMALE
	goto PlayersHouse_2F_EventScript_WallClock
	end

PlayersHouse_2F_EventScript_WallClock::
	goto_if_set FLAG_SET_WALL_CLOCK, PlayersHouse_2F_EventScript_CheckWallClock
	msgbox PlayersHouse_2F_Text_ClockIsStopped, MSGBOX_DEFAULT
	call PlayersHouse_2F_EventScript_SetWallClock
	setflag FLAG_SET_WALL_CLOCK
	setflag FLAG_GENERAL_HIDE
	setflag FLAG_HIDE_ENTEI_EGG
	setflag FLAG_HIDE_SILVER_IN_HOUSE
	setflag FLAG_HIDE_SHANE_IN_HOUSE
	setflag FLAG_HIDE_FERALIGATR_IN_HOUSE
	setflag FLAG_HIDE_SHANE_CHERRYGROVE_BATTLE
	setflag FLAG_HIDE_REMATCH_WHITNEY
	releaseall
	end

PlayersHouse_2F_EventScript_CheckWallClock::
	incrementgamestat GAME_STAT_CHECKED_CLOCK
	fadescreen FADE_TO_BLACK
	special Special_ViewWallClock
	waitstate
	releaseall
	end

PlayersHouse_2F_EventScript_SetWallClock::
	fadescreen FADE_TO_BLACK
	special StartWallClock
	waitstate
	return

EventScript_RunningShoesManual::
	end
