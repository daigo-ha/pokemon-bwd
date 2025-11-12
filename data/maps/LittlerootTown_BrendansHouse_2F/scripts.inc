# 1 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 2 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_MapScripts::
# 3 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, LittlerootTown_BrendansHouse_2F_OnTransition
# 4 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, LittlerootTown_BrendansHouse_2F_OnWarp
# 5 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.byte 0
# 6 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 7 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_OnTransition:
# 8 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	call_if_lt VAR_LITTLEROOT_RIVAL_STATE, 2, LittlerootTown_BrendansHouse_2F_EventScript_CheckSetReadyToMeetBrendan
# 9 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	call_if_ge VAR_LITTLEROOT_RIVAL_STATE, 3, LittlerootTown_BrendansHouse_2F_EventScript_CheckShouldUpdateBrendanPos
# 10 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	call_if_eq VAR_LITTLEROOT_INTRO_STATE, 4, PlayersHouse_2F_EventScript_BlockStairsUntilClockIsSet
# 11 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	call SecretBase_EventScript_SetDecorationFlags
# 12 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setvar VAR_SECRET_BASE_INITIALIZED, 0
# 13 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setvar VAR_LITTLEROOT_START, 1
# 14 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	call_if_unset FLAG_STARTER_BAG, MCRoom_EventScript_StarterBag
# 15 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	removeobject LOCALID_BIANCA
# 16 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setflag FLAG_BEGGINING_BIANCA
# 17 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	return
# 18 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 19 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_CheckShouldUpdateBrendanPos::
# 20 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto_if_set FLAG_MET_RIVAL_LILYCOVE, LittlerootTown_BrendansHouse_2F_EventScript_TryUpdateBrendanPos
# 21 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto_if_ge VAR_BIRCH_LAB_STATE, 2, LittlerootTown_BrendansHouse_2F_EventScript_Ret
# 22 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto LittlerootTown_BrendansHouse_2F_EventScript_TryUpdateBrendanPos
# 23 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 24 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_TryUpdateBrendanPos::
# 25 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	checkplayergender
# 26 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, LittlerootTown_BrendansHouse_2F_EventScript_Ret
# 27 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	@ Odd that the MaysHouse equivalent was used below instead
# 28 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto_if_ge VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 2, LittlerootTown_MaysHouse_2F_EventScript_Ret
# 29 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setobjectxyperm LOCALID_RIVALS_HOUSE_2F_RIVAL, 0, 2
# 30 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setobjectmovementtype LOCALID_RIVALS_HOUSE_2F_RIVAL, MOVEMENT_TYPE_FACE_UP
# 31 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	return
# 32 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 33 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_Ret::
# 34 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	return
# 35 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 36 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_CheckSetReadyToMeetBrendan::
# 37 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	checkplayergender
# 38 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, LittlerootTown_BrendansHouse_2F_EventScript_SetReadyToMeetBrendan
# 39 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	return
# 40 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 41 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_SetReadyToMeetBrendan::
# 42 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setvar VAR_LITTLEROOT_RIVAL_STATE, 2
# 43 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	return
# 44 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 45 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_OnWarp:
# 46 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	map_script_2 VAR_SECRET_BASE_INITIALIZED, 0, LittlerootTown_BrendansHouse_2F_EventScript_CheckInitDecor
# 47 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.2byte 0
# 48 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 49 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_CheckInitDecor::
# 50 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	checkplayergender
# 51 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, SecretBase_EventScript_InitDecorations
# 52 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	end
# 53 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 54 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_RivalsPokeBall::
# 55 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	lockall
# 56 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto_if_eq VAR_LITTLEROOT_RIVAL_STATE, 2, LittlerootTown_BrendansHouse_2F_EventScript_MeetBrendan
# 57 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox RivalsHouse_2F_Text_ItsRivalsPokeBall, MSGBOX_DEFAULT
# 58 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	releaseall
# 59 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	end
# 60 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 61 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_MeetBrendan::
# 62 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay 10
# 63 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	addobject LOCALID_RIVALS_HOUSE_2F_RIVAL
# 64 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_2F_RIVAL, LittlerootTown_BrendansHouse_2F_Movement_BrendanEnters
# 65 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 66 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	playse SE_PIN
# 67 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_2F_RIVAL, Common_Movement_ExclamationMark
# 68 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 69 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_2F_RIVAL, Common_Movement_Delay48
# 70 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 71 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay 10
# 72 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
# 73 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, LittlerootTown_BrendansHouse_2F_EventScript_MeetBrendanNorth
# 74 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, LittlerootTown_BrendansHouse_2F_EventScript_MeetBrendanSouth
# 75 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, LittlerootTown_BrendansHouse_2F_EventScript_MeetBrendanWest
# 76 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, LittlerootTown_BrendansHouse_2F_EventScript_MeetBrendanEast
# 77 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setvar VAR_LITTLEROOT_RIVAL_STATE, 3
# 78 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_2F_POKE_BALL
# 79 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_RIVAL_BEDROOM
# 80 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 1
# 81 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	savebgm MUS_DUMMY
# 82 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	fadedefaultbgm
# 83 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	releaseall
# 84 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	end
# 85 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 86 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_MeetBrendanNorth::
# 87 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_2F_RIVAL, LittlerootTown_BrendansHouse_2F_Movement_BrendanApproachPlayerNorth
# 88 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 89 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 90 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 91 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox RivalsHouse_2F_Text_BrendanWhoAreYou, MSGBOX_DEFAULT
# 92 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	closemessage
# 93 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_PLAYER, LittlerootTown_BrendansHouse_2F_Movement_PlayerWatchBrendanNorth
# 94 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_2F_RIVAL, LittlerootTown_BrendansHouse_2F_Movement_BrendanWalkToPCNorth
# 95 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 96 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	return
# 97 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 98 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_MeetBrendanSouth::
# 99 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_2F_RIVAL, LittlerootTown_BrendansHouse_2F_Movement_BrendanApproachPlayerSouth
# 100 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 101 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 102 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 103 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox RivalsHouse_2F_Text_BrendanWhoAreYou, MSGBOX_DEFAULT
# 104 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	closemessage
# 105 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_PLAYER, LittlerootTown_BrendansHouse_2F_Movement_PlayerWatchBrendanSouth
# 106 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_2F_RIVAL, LittlerootTown_BrendansHouse_2F_Movement_BrendanWalkToPCSouth
# 107 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 108 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	return
# 109 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 110 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_MeetBrendanWest::
# 111 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_2F_RIVAL, LittlerootTown_BrendansHouse_2F_Movement_BrendanApproachPlayerWest
# 112 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 113 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 114 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 115 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox RivalsHouse_2F_Text_BrendanWhoAreYou, MSGBOX_DEFAULT
# 116 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	closemessage
# 117 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_PLAYER, LittlerootTown_BrendansHouse_2F_Movement_PlayerWatchBrendanWest
# 118 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_2F_RIVAL, LittlerootTown_BrendansHouse_2F_Movement_BrendanWalkToPCWest
# 119 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 120 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	return
# 121 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 122 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_MeetBrendanEast::
# 123 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_2F_RIVAL, LittlerootTown_BrendansHouse_2F_Movement_BrendanApproachPlayerEast
# 124 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 125 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 126 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 127 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox RivalsHouse_2F_Text_BrendanWhoAreYou, MSGBOX_DEFAULT
# 128 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	closemessage
# 129 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_2F_RIVAL, LittlerootTown_BrendansHouse_2F_Movement_BrendanWalkToPCEast
# 130 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 131 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	return
# 132 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 133 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_Movement_BrendanEnters:
# 134 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_down
# 135 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_down
# 136 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_in_place_faster_left
# 137 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	step_end
# 138 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 139 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_Movement_BrendanApproachPlayerNorth:
# 140 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 141 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 142 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_down
# 143 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_down
# 144 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 145 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	step_end
# 146 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 147 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_Movement_BrendanWalkToPCNorth:
# 148 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_up
# 149 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_up
# 150 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_up
# 151 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 152 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 153 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 154 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 155 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_in_place_faster_up
# 156 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	step_end
# 157 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 158 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_Movement_PlayerWatchBrendanNorth:
# 159 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay_16
# 160 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_in_place_faster_up
# 161 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay_16
# 162 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay_16
# 163 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay_16
# 164 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay_16
# 165 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_in_place_faster_left
# 166 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	step_end
# 167 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 168 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_Movement_BrendanApproachPlayerSouth:
# 169 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 170 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 171 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 172 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	step_end
# 173 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 174 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_Movement_BrendanWalkToPCSouth:
# 175 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_up
# 176 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 177 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 178 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 179 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 180 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_in_place_faster_up
# 181 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	step_end
# 182 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 183 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_Movement_PlayerWatchBrendanSouth:
# 184 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay_16
# 185 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_in_place_faster_up
# 186 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay_16
# 187 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay_16
# 188 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_in_place_faster_left
# 189 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	step_end
# 190 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 191 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_Movement_BrendanApproachPlayerWest:
# 192 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 193 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 194 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_down
# 195 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_in_place_faster_left
# 196 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	step_end
# 197 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 198 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_Movement_BrendanWalkToPCWest:
# 199 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_up
# 200 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_up
# 201 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 202 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 203 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 204 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 205 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 206 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_in_place_faster_up
# 207 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	step_end
# 208 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 209 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_Movement_PlayerWatchBrendanWest:
# 210 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay_8
# 211 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay_16
# 212 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_in_place_faster_up
# 213 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay_16
# 214 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay_16
# 215 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_in_place_faster_left
# 216 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	step_end
# 217 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 218 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_Movement_BrendanApproachPlayerEast:
# 219 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 220 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 221 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 222 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 223 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 224 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_in_place_faster_down
# 225 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	step_end
# 226 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 227 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_Movement_BrendanWalkToPCEast:
# 228 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_up
# 229 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 230 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 231 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_in_place_faster_up
# 232 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	step_end
# 233 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 234 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
@ Unused, the player is already facing this direction so its unneeded
# 235 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_Movement_PlayerWatchBrendanEast:
# 236 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay_16
# 237 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay_16
# 238 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_in_place_faster_left
# 239 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	step_end
# 240 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 241 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_PC::
# 242 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	lockall
# 243 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	checkplayergender
# 244 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, LittlerootTown_BrendansHouse_2F_EventScript_CheckPlayersPC
# 245 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, LittlerootTown_BrendansHouse_2F_EventScript_CheckRivalsPC
# 246 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	end
# 247 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 248 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_CheckPlayersPC::
# 249 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setvar VAR_0x8004, PC_LOCATION_BRENDANS_HOUSE
# 250 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	special DoPCTurnOnEffect
# 251 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	playse SE_PC_ON
# 252 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox gText_PlayerHouseBootPC, MSGBOX_DEFAULT
# 253 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	special BedroomPC
# 254 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitstate
# 255 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	releaseall
# 256 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	end
# 257 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 258 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_TurnOffPlayerPC::
# 259 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setvar VAR_0x8004, PC_LOCATION_BRENDANS_HOUSE
# 260 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	playse SE_PC_OFF
# 261 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	special DoPCTurnOffEffect
# 262 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	releaseall
# 263 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	end
# 264 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 265 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_CheckRivalsPC::
# 266 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox gText_PokemonTrainerSchoolEmail, MSGBOX_DEFAULT
# 267 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	releaseall
# 268 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	end
# 269 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 270 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
PlayersHouse_2F_EventScript_Notebook::
# 271 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox PlayersHouse_2F_Text_Notebook, MSGBOX_SIGN
# 272 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	end
# 273 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 274 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
PlayersHouse_2F_EventScript_GameCube::
# 275 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox PlayersHouse_2F_Text_ItsAGameCube, MSGBOX_SIGN
# 276 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	end
# 277 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 278 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
PlayersHouse_2F_Text_ClockIsStopped:
# 279 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "The clock is stopped…\p"
# 280 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Better set it and start it!$"
# 281 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 282 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
PlayersHouse_2F_Text_HowDoYouLikeYourRoom:
# 283 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "MOM: {PLAYER}, how do you like your\n"
# 284 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "new room?\p"
# 285 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Good! Everything's put away neatly!\p"
# 286 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "They finished moving everything in\n"
# 287 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "downstairs, too.\p"
# 288 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "POKéMON movers are so convenient!\p"
# 289 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Oh, you should make sure that\n"
# 290 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "everything's all there on your desk.$"
# 291 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 292 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
PlayersHouse_2F_Text_Notebook:
# 293 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "{PLAYER} flipped open the notebook.\p"
# 294 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "ADVENTURE RULE NO. 1\n"
# 295 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Open the MENU with START.\p"
# 296 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "ADVENTURE RULE NO. 2\n"
# 297 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Record your progress with SAVE.\p"
# 298 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "The remaining pages are blank…$"
# 299 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 300 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
Common_Text_LookCloserAtMap:
# 301 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "{PLAYER} took a closer look at the\n"
# 302 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "HOENN region map.$"
# 303 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 304 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
PlayersHouse_2F_Text_ItsAGameCube:
# 305 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "It's a Nintendo GameCube.\p"
# 306 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "A Game Boy Advance is connected to\n"
# 307 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "serve as the Controller.$"

MCRoom_EventScript_Starter::
MCRoom_EventScript_Starter_2:
# 311 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto_if_unset FLAG_STARTER_SNIVY, MCRoom_EventScript_Starter_4
MCRoom_EventScript_Starter_1:
# 338 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setvar VAR_LITTLEROOT_START, 3
# 339 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	call MCRoom_EventScript_BattleBianca
# 340 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	releaseall
	end

MCRoom_EventScript_Starter_3:
# 312 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	lockall
# 313 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox MCRoom_EventScript_Starter_Text_0
# 314 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	message MCRoom_EventScript_Starter_Text_1
# 315 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmessage
# 316 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	multichoice 20, 5, MULTI_STARTER_CHOICE, 0
# 317 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	closemessage
# 318 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq MCRoom_EventScript_Starter_9
# 322 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq MCRoom_EventScript_Starter_10
# 326 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq MCRoom_EventScript_Starter_11
# 331 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox MCRoom_EventScript_Starter_Text_2
# 332 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmessage
	goto MCRoom_EventScript_Starter_2

MCRoom_EventScript_Starter_4:
# 311 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto_if_unset FLAG_STARTER_TEPIG, MCRoom_EventScript_Starter_6
	goto MCRoom_EventScript_Starter_1

MCRoom_EventScript_Starter_6:
# 311 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto_if_unset FLAG_STARTER_OSHAWOTT, MCRoom_EventScript_Starter_3
	goto MCRoom_EventScript_Starter_1

MCRoom_EventScript_Starter_9:
# 319 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	call StarterFade
# 320 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	call MCRoom_EventScript_Snivy
	goto MCRoom_EventScript_Starter_2

MCRoom_EventScript_Starter_10:
# 323 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	call StarterFade
# 324 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	call MCRoom_EventScript_Tepig
	goto MCRoom_EventScript_Starter_2

MCRoom_EventScript_Starter_11:
# 327 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	call StarterFade
# 328 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	call MCRoom_EventScript_Oshawott
	goto MCRoom_EventScript_Starter_2


StarterFade::
# 345 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 346 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay 20
# 347 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	fadescreen FADE_FROM_BLACK
	return


MCRoom_EventScript_Snivy::
# 353 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	showmonpic SPECIES_SNIVY, 10, 3
# 354 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox MCRoom_EventScript_Snivy_Text_0, MSGBOX_YESNO
# 355 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq MCRoom_EventScript_Snivy_2
# 380 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	hidemonpic
# 381 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox MCRoom_EventScript_Snivy_Text_3
MCRoom_EventScript_Snivy_1:
# 383 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmessage
	return

MCRoom_EventScript_Snivy_2:
# 356 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	givemon SPECIES_SNIVY, 5, ITEM_ORAN_BERRY
# 357 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq MCRoom_EventScript_Snivy_5
# 366 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq MCRoom_EventScript_Snivy_6
# 375 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	hidemonpic
# 376 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox MCRoom_EventScript_Snivy_Text_2
	goto MCRoom_EventScript_Snivy_1

MCRoom_EventScript_Snivy_5:
# 358 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 359 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox MCRoom_EventScript_Snivy_Text_1
# 360 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	removeobject 0
# 361 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setflag FLAG_STARTER_SNIVY
# 362 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 363 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setvar VAR_STARTER_MON, 0
# 364 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	call NicknamePartyMon
	goto MCRoom_EventScript_Snivy_1

MCRoom_EventScript_Snivy_6:
# 367 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 368 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox MCRoom_EventScript_Snivy_Text_1
# 369 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	removeobject 0
# 370 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setflag FLAG_STARTER_SNIVY
# 371 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 372 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	call NicknameBoxMon
	goto MCRoom_EventScript_Snivy_1


MCRoom_EventScript_Tepig::
# 389 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	showmonpic SPECIES_TEPIG, 10, 3
# 390 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox MCRoom_EventScript_Snivy_Text_0, MSGBOX_YESNO
# 391 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq MCRoom_EventScript_Tepig_2
# 416 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	hidemonpic
# 417 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox MCRoom_EventScript_Snivy_Text_3
MCRoom_EventScript_Tepig_1:
# 419 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmessage
	return

MCRoom_EventScript_Tepig_2:
# 392 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	givemon SPECIES_TEPIG, 5, ITEM_ORAN_BERRY
# 393 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq MCRoom_EventScript_Tepig_5
# 402 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq MCRoom_EventScript_Tepig_6
# 411 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	hidemonpic
# 412 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox MCRoom_EventScript_Snivy_Text_2
	goto MCRoom_EventScript_Tepig_1

MCRoom_EventScript_Tepig_5:
# 394 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 395 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox MCRoom_EventScript_Tepig_Text_0
# 396 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	removeobject 1
# 397 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setflag FLAG_STARTER_TEPIG
# 398 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 399 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setvar VAR_STARTER_MON, 1
# 400 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	call NicknamePartyMon
	goto MCRoom_EventScript_Tepig_1

MCRoom_EventScript_Tepig_6:
# 403 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 404 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox MCRoom_EventScript_Tepig_Text_0
# 405 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	removeobject 1
# 406 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setflag FLAG_STARTER_TEPIG
# 407 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 408 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	call NicknameBoxMon
	goto MCRoom_EventScript_Tepig_1


MCRoom_EventScript_Oshawott::
# 425 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	showmonpic SPECIES_OSHAWOTT, 10, 3
# 426 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox MCRoom_EventScript_Snivy_Text_0, MSGBOX_YESNO
# 427 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq MCRoom_EventScript_Oshawott_2
# 452 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	hidemonpic
# 453 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox MCRoom_EventScript_Snivy_Text_3
MCRoom_EventScript_Oshawott_1:
# 455 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmessage
	return

MCRoom_EventScript_Oshawott_2:
# 428 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	givemon SPECIES_OSHAWOTT, 5, ITEM_ORAN_BERRY
# 429 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq MCRoom_EventScript_Oshawott_5
# 438 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq MCRoom_EventScript_Oshawott_6
# 447 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	hidemonpic
# 448 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox MCRoom_EventScript_Snivy_Text_2
	goto MCRoom_EventScript_Oshawott_1

MCRoom_EventScript_Oshawott_5:
# 430 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 431 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox MCRoom_EventScript_Oshawott_Text_0
# 432 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	removeobject 2
# 433 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setflag FLAG_STARTER_OSHAWOTT
# 434 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 435 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setvar VAR_STARTER_MON, 2
# 436 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	call NicknamePartyMon
	goto MCRoom_EventScript_Oshawott_1

MCRoom_EventScript_Oshawott_6:
# 439 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 440 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox MCRoom_EventScript_Oshawott_Text_0
# 441 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	removeobject 2
# 442 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setflag FLAG_STARTER_OSHAWOTT
# 443 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 444 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	call NicknameBoxMon
	goto MCRoom_EventScript_Oshawott_1


NicknamePartyMon::
# 461 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox NicknamePartyMon_Text_0, MSGBOX_YESNO
# 462 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitbuttonpress
# 463 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	hidemonpic
# 464 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknamePartyMon_1
	return

NicknamePartyMon_1:
# 465 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 466 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	return


NicknameBoxMon::
# 472 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox NicknamePartyMon_Text_0, MSGBOX_YESNO
# 473 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitbuttonpress
# 474 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	hidemonpic
# 475 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknameBoxMon_2
NicknameBoxMon_1:
# 478 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	call Common_EventScript_TransferredToPC
	return

NicknameBoxMon_2:
# 476 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
	goto NicknameBoxMon_1


MCRoom_EventScript_StarterBag::
# 482 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto_if_unset FLAG_STARTER_SNIVY, MCRoom_EventScript_StarterBag_3
MCRoom_EventScript_StarterBag_2:
# 486 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setflag FLAG_STARTER_BAG
	return

MCRoom_EventScript_StarterBag_1:
# 483 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	clearflag FLAG_STARTER_BAG
	return

MCRoom_EventScript_StarterBag_3:
# 482 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto_if_unset FLAG_STARTER_TEPIG, MCRoom_EventScript_StarterBag_5
	goto MCRoom_EventScript_StarterBag_2

MCRoom_EventScript_StarterBag_5:
# 482 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto_if_unset FLAG_STARTER_OSHAWOTT, MCRoom_EventScript_StarterBag_1
	goto MCRoom_EventScript_StarterBag_2


MCRoom_EventScript_DoNotLeaveBeggining::
# 491 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	lockall
# 492 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox MCRoom_EventScript_DoNotLeaveBeggining_Text_0
# 493 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MCRoom_EventScript_DoNotLeaveBeggining_Movement_0
# 494 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 495 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	releaseall
	return


MCRoom_EventScript_Beggining::
# 499 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	lockall
# 500 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 501 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	compare VAR_TEMP_0, 7
	goto_if_eq MCRoom_EventScript_Beggining_2
# 505 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MCRoom_EventScript_Beggining_Movement_0
MCRoom_EventScript_Beggining_1:
# 507 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 508 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Movement_MCStart1
# 509 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 510 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_CHEREN, MCRoom_EventScript_Beggining_Movement_1
# 511 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox MCRoom_EventScript_Beggining_Text_0
# 512 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmessage
# 513 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_CHEREN, MCRoom_EventScript_Beggining_Movement_2
# 514 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 515 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox MCRoom_EventScript_Beggining_Text_1
# 516 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox MCRoom_EventScript_Beggining_Text_2
# 517 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmessage
# 518 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	closemessage
# 519 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay 90
# 520 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	clearflag FLAG_BEGGINING_BIANCA
# 521 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	showobjectat LOCALID_BIANCA, MAP_LITTLEROOT_TOWN_BRENDANS_HOUSE_2F
# 522 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	special SpawnCameraObject
# 523 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, MCRoom_EventScript_Beggining_Movement_3
# 524 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 525 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	opendoor 8, 1
# 526 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitdooranim
# 527 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay 60
# 528 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_BIANCA, MCRoom_EventScript_Beggining_Movement_0
# 529 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 530 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MCRoom_EventScript_Beggining_Movement_4
# 531 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_CHEREN, MCRoom_EventScript_Beggining_Movement_4
# 532 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 533 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox MCRoom_EventScript_Beggining_Text_3
# 534 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmessage
# 535 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_CHEREN, MCRoom_EventScript_Beggining_Movement_5
# 536 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 537 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox MCRoom_EventScript_Beggining_Text_4
# 538 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox MCRoom_EventScript_Beggining_Text_5
# 539 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmessage
# 540 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, MCRoom_EventScript_Beggining_Movement_6
# 541 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_BIANCA, MCRoom_EventScript_Beggining_Movement_7
# 542 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 543 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_CHEREN, MCRoom_EventScript_Beggining_Movement_1
# 544 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 545 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox MCRoom_EventScript_Beggining_Text_6
# 546 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmessage
# 547 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_BIANCA, MCRoom_EventScript_Beggining_Movement_8
# 548 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 549 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MCRoom_EventScript_Beggining_Movement_1
# 550 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 551 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox MCRoom_EventScript_Beggining_Text_7
# 552 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox MCRoom_EventScript_Beggining_Text_8
# 553 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox MCRoom_EventScript_Beggining_Text_9
# 554 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmessage
# 555 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_CHEREN, MCRoom_EventScript_Beggining_Movement_9
# 556 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 557 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MCRoom_EventScript_Beggining_Movement_2
# 558 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_BIANCA, MCRoom_EventScript_Beggining_Movement_2
# 559 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 560 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox MCRoom_EventScript_Beggining_Text_10
# 561 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox MCRoom_EventScript_Beggining_Text_11
# 562 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox MCRoom_EventScript_Beggining_Text_12
# 563 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmessage
# 565 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	special RemoveCameraObject
# 566 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setvar VAR_LITTLEROOT_START, 2
# 567 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	releaseall
	return

MCRoom_EventScript_Beggining_2:
# 502 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MCRoom_EventScript_DoNotLeaveBeggining_Movement_0
	goto MCRoom_EventScript_Beggining_1


# 570 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
Movement_MCStart1:
# 571 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 571 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 572 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_down
# 572 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_down
	step_end

MCRoom_EventScript_ChooseNow::
# 576 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	lockall
# 577 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox MCRoom_EventScript_ChooseNow_Text_0
# 578 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 579 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	compare VAR_TEMP_0, 4
	goto_if_eq MCRoom_EventScript_ChooseNow_2
# 582 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	compare VAR_TEMP_0, 3
	goto_if_eq MCRoom_EventScript_ChooseNow_3
# 585 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	compare VAR_TEMP_0, 5
	goto_if_eq MCRoom_EventScript_ChooseNow_4
MCRoom_EventScript_ChooseNow_1:
# 588 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 589 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	releaseall
	return

MCRoom_EventScript_ChooseNow_2:
# 580 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MCRoom_EventScript_Beggining_Movement_0
	goto MCRoom_EventScript_ChooseNow_1

MCRoom_EventScript_ChooseNow_3:
# 583 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MCRoom_EventScript_ChooseNow_Movement_0
	goto MCRoom_EventScript_ChooseNow_1

MCRoom_EventScript_ChooseNow_4:
# 586 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MCRoom_EventScript_DoNotLeaveBeggining_Movement_0
	goto MCRoom_EventScript_ChooseNow_1


MCRoom_EventScript_BattleBianca::
# 593 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	lockall
# 595 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_BIANCA, MCRoom_EventScript_BattleBianca_Movement_0
# 596 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 597 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox MCRoom_EventScript_BattleBianca_Text_0
# 598 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_CHEREN, MCRoom_EventScript_BattleBianca_Movement_1
# 599 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 600 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox MCRoom_EventScript_BattleBianca_Text_1
# 601 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox MCRoom_EventScript_BattleBianca_Text_2
# 602 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmessage
# 603 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 604 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	removeobject 15
# 605 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_CHEREN, MCRoom_EventScript_BattleBianca_Movement_2
# 606 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MCRoom_EventScript_BattleBianca_Movement_3
# 607 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_BIANCA, MCRoom_EventScript_BattleBianca_Movement_4
# 608 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 609 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 610 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox MCRoom_EventScript_BattleBianca_Text_3
# 611 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox MCRoom_EventScript_BattleBianca_Text_4
# 612 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox MCRoom_EventScript_BattleBianca_Text_5
# 613 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox MCRoom_EventScript_BattleBianca_Text_6
# 614 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox MCRoom_EventScript_BattleBianca_Text_7
# 615 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox MCRoom_EventScript_BattleBianca_Text_8
# 616 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmessage
# 617 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_BIANCA, Common_Movement_Delay48
# 618 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 620 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	switch VAR_STARTER_MON
# 621 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	case 0, MCRoom_EventScript_BattleBianca_3
# 623 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	case 1, MCRoom_EventScript_BattleBianca_4
# 625 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	case 2, MCRoom_EventScript_BattleBianca_5
MCRoom_EventScript_BattleBianca_1:
# 628 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	releaseall
	end

MCRoom_EventScript_BattleBianca_3:
# 622 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	call MCRoom_EventScript_StartBiancaBattleSnivy
	goto MCRoom_EventScript_BattleBianca_1

MCRoom_EventScript_BattleBianca_4:
# 624 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	call MCRoom_EventScript_StartBiancaBattleTepig
	goto MCRoom_EventScript_BattleBianca_1

MCRoom_EventScript_BattleBianca_5:
# 626 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	call MCRoom_EventScript_StartBiancaBattleOshawott
	goto MCRoom_EventScript_BattleBianca_1


MCRoom_EventScript_BattleCheren::
# 632 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	lockall
# 633 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox MCRoom_EventScript_BattleCheren_Text_0
# 634 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox MCRoom_EventScript_BattleCheren_Text_1
# 635 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox MCRoom_EventScript_BattleCheren_Text_2
# 636 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmessage
# 637 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox MCRoom_EventScript_BattleCheren_Text_3
# 638 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox MCRoom_EventScript_BattleCheren_Text_4
# 639 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmessage
# 640 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_BIANCA, MCRoom_EventScript_BattleCheren_Movement_0
# 641 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 642 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay 60
# 643 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_BIANCA, MCRoom_EventScript_Beggining_Movement_4
# 644 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 645 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay 60
# 646 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_BIANCA, MCRoom_EventScript_Beggining_Movement_2
# 647 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 648 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay 60
# 649 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox MCRoom_EventScript_BattleCheren_Text_5
# 650 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_BIANCA, MCRoom_EventScript_Beggining_Movement_1
# 651 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 652 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox MCRoom_EventScript_BattleCheren_Text_6
# 653 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox MCRoom_EventScript_BattleCheren_Text_7
# 654 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox MCRoom_EventScript_BattleCheren_Text_8
# 655 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmessage
# 656 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_CHEREN, MCRoom_EventScript_BattleCheren_Movement_1
# 657 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 658 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox MCRoom_EventScript_BattleCheren_Text_9
# 659 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox MCRoom_EventScript_BattleCheren_Text_10
# 661 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	playfanfare MUS_HEAL
# 662 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitfanfare
# 663 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_CHEREN, MCRoom_EventScript_Beggining_Movement_1
# 664 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 665 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox MCRoom_EventScript_BattleCheren_Text_11
# 667 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	playfanfare MUS_HEAL
# 668 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitfanfare
# 669 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	special HealPlayerParty
# 671 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_BIANCA, Common_Movement_ExclamationMark
# 672 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 673 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_BIANCA, MCRoom_EventScript_BattleCheren_Movement_2
# 674 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 675 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MCRoom_EventScript_Beggining_Movement_4
# 676 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_CHEREN, MCRoom_EventScript_Beggining_Movement_4
# 677 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 678 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox MCRoom_EventScript_BattleCheren_Text_12
# 679 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox MCRoom_EventScript_BattleCheren_Text_13
# 680 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox MCRoom_EventScript_BattleCheren_Text_14
# 681 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox MCRoom_EventScript_BattleCheren_Text_15
# 682 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox MCRoom_EventScript_BattleCheren_Text_16
# 683 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmessage
# 684 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_CHEREN, MCRoom_EventScript_BattleCheren_Movement_3
# 685 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 686 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MCRoom_EventScript_BattleCheren_Movement_0
# 687 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 688 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox MCRoom_EventScript_BattleCheren_Text_17
# 689 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox MCRoom_EventScript_BattleCheren_Text_18
# 690 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmessage
# 691 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_CHEREN, Common_Movement_Delay48
# 692 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 694 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	switch VAR_STARTER_MON
# 695 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	case 0, MCRoom_EventScript_BattleCheren_3
# 696 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	case 1, MCRoom_EventScript_BattleCheren_4
# 697 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	case 2, MCRoom_EventScript_BattleCheren_5
MCRoom_EventScript_BattleCheren_1:
# 699 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	releaseall
	end

MCRoom_EventScript_BattleCheren_3:
# 695 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	call MCRoom_EventScript_StartCherenBattleSnivy
	goto MCRoom_EventScript_BattleCheren_1

MCRoom_EventScript_BattleCheren_4:
# 696 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	call MCRoom_EventScript_StartCherenBattleTepig
	goto MCRoom_EventScript_BattleCheren_1

MCRoom_EventScript_BattleCheren_5:
# 697 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	call MCRoom_EventScript_StartCherenBattleOshawott
	goto MCRoom_EventScript_BattleCheren_1


MCRoom_EventScript_PostBattles::
# 703 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	lockall
# 704 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox MCRoom_EventScript_PostBattles_Text_0
# 705 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox MCRoom_EventScript_PostBattles_Text_1
# 706 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmessage
# 707 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_CHEREN, MCRoom_EventScript_PostBattles_Movement_0
# 708 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox MCRoom_EventScript_PostBattles_Text_2
# 709 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmessage
# 710 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	removeobject LOCALID_CHEREN
# 711 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_BIANCA, MCRoom_EventScript_PostBattles_Movement_1
# 712 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 713 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	removeobject LOCALID_BIANCA
# 715 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setflag FLAG_BEGGINING_BIANCA
# 716 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setflag FLAG_BEGGINING_CHEREN
# 717 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	releaseall
	end


MCRoom_EventScript_StartBiancaBattleSnivy::
# 722 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_ROUTE_103_TREECKO, MCRoom_Text_BiancaDefeated
# 723 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	call MCRoom_EventScript_BattleCheren
	end


MCRoom_EventScript_StartBiancaBattleTepig::
# 727 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_ROUTE_103_TORCHIC, MCRoom_Text_BiancaDefeated
# 728 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	call MCRoom_EventScript_BattleCheren
	end


MCRoom_EventScript_StartBiancaBattleOshawott::
# 732 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_ROUTE_103_MUDKIP, MCRoom_Text_BiancaDefeated
# 733 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	call MCRoom_EventScript_BattleCheren
	end


MCRoom_EventScript_StartCherenBattleSnivy::
# 742 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_ROUTE_103_TREECKO, MCRoom_Text_CherenDefeated
# 743 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	call MCRoom_EventScript_PostBattles
	end


MCRoom_EventScript_StartCherenBattleTepig::
# 747 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_ROUTE_103_TORCHIC, MCRoom_Text_CherenDefeated
# 748 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	call MCRoom_EventScript_PostBattles
	end


MCRoom_EventScript_StartCherenBattleOshawott::
# 752 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_ROUTE_103_MUDKIP, MCRoom_Text_CherenDefeated
# 753 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	call MCRoom_EventScript_PostBattles
	end


# 493 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
MCRoom_EventScript_DoNotLeaveBeggining_Movement_0:
# 493 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
	step_end

# 505 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
MCRoom_EventScript_Beggining_Movement_0:
# 505 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_down
	step_end

# 510 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
MCRoom_EventScript_Beggining_Movement_1:
# 510 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	face_left
	step_end

# 513 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
MCRoom_EventScript_Beggining_Movement_2:
# 513 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	face_down
	step_end

# 523 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
MCRoom_EventScript_Beggining_Movement_3:
# 523 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_diag_northeast
# 523 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_diag_northeast
# 523 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_right
	step_end

# 530 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
MCRoom_EventScript_Beggining_Movement_4:
# 530 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	face_up
	step_end

# 535 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
MCRoom_EventScript_Beggining_Movement_5:
# 535 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_right
# 535 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_up
	step_end

# 540 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
MCRoom_EventScript_Beggining_Movement_6:
# 540 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_diag_southwest
# 540 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_diag_southwest
# 540 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
	step_end

# 541 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
MCRoom_EventScript_Beggining_Movement_7:
# 541 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_down
# 541 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 541 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 541 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 541 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 541 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	face_down
	step_end

# 547 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
MCRoom_EventScript_Beggining_Movement_8:
# 547 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 547 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_down
# 547 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_down
# 547 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	face_right
	step_end

# 555 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
MCRoom_EventScript_Beggining_Movement_9:
# 555 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_down
# 555 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 555 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	face_down
	step_end

# 583 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
MCRoom_EventScript_ChooseNow_Movement_0:
# 583 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_right
	step_end

# 595 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
MCRoom_EventScript_BattleBianca_Movement_0:
# 595 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_down
# 595 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	face_right
	step_end

# 598 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
MCRoom_EventScript_BattleBianca_Movement_1:
# 598 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_down
# 598 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	face_left
	step_end

# 605 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
MCRoom_EventScript_BattleBianca_Movement_2:
# 605 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_fast_up
# 605 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_fast_up
# 605 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_fast_up
# 605 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_fast_up
# 605 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	face_down
	step_end

# 606 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
MCRoom_EventScript_BattleBianca_Movement_3:
# 606 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_fast_up
# 606 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_fast_up
# 606 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	face_right
	step_end

# 607 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
MCRoom_EventScript_BattleBianca_Movement_4:
# 607 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_fast_right
# 607 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_fast_right
# 607 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_fast_right
# 607 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_fast_up
# 607 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_fast_up
# 607 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	face_left
	step_end

# 640 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
MCRoom_EventScript_BattleCheren_Movement_0:
# 640 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	face_right
	step_end

# 656 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
MCRoom_EventScript_BattleCheren_Movement_1:
# 656 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_down
# 656 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_down
# 656 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	face_right
	step_end

# 673 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
MCRoom_EventScript_BattleCheren_Movement_2:
# 673 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_up
# 673 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_up
# 673 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 673 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	face_down
	step_end

# 684 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
MCRoom_EventScript_BattleCheren_Movement_3:
# 684 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_right
# 684 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	face_left
	step_end

# 707 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
MCRoom_EventScript_PostBattles_Movement_0:
# 707 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_right
# 707 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_right
# 707 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_up
# 707 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_up
# 707 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_up
	step_end

# 711 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
MCRoom_EventScript_PostBattles_Movement_1:
# 711 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_right
# 711 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_right
# 711 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_right
# 711 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_up
	step_end

MCRoom_EventScript_Starter_Text_0:
# 313 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "{PLAYER} opened the bag!$"

MCRoom_EventScript_Starter_Text_1:
# 314 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Which starter are you choosing?$"

MCRoom_EventScript_Starter_Text_2:
# 331 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Cheren: Go on. We are waiting...$"

MCRoom_EventScript_Snivy_Text_0:
# 354 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Are you sure?$"

MCRoom_EventScript_Snivy_Text_1:
# 359 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Received Snivy$"

MCRoom_EventScript_Snivy_Text_2:
# 376 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "You have no more room for this Pokemon.$"

MCRoom_EventScript_Snivy_Text_3:
# 381 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "You did not choose the Pokemon$"

MCRoom_EventScript_Tepig_Text_0:
# 395 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Received Tepig$"

MCRoom_EventScript_Oshawott_Text_0:
# 431 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Received Oshawott$"

NicknamePartyMon_Text_0:
# 461 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Do you want to give it a nickname?$"

MCRoom_EventScript_DoNotLeaveBeggining_Text_0:
# 492 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Cheren: Come here {PLAYER}!\p$"

MCRoom_EventScript_Beggining_Text_0:
# 511 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Cheren: {PLAYER}!\pI heard from Professor Juniper.\nWe can have a Pokémon?\p$"

MCRoom_EventScript_Beggining_Text_1:
# 515 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "...\n...\p$"

MCRoom_EventScript_Beggining_Text_2:
# 516 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Cheren: What's keeping Bianca?\p$"

MCRoom_EventScript_Beggining_Text_3:
# 533 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Bianca: Am I a little late again?\nSo-oooo-orry!\p$"

MCRoom_EventScript_Beggining_Text_4:
# 537 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Cheren: Bianca...\lI've known for ten years that you\nhave no sense of time, but...seriously...\p$"

MCRoom_EventScript_Beggining_Text_5:
# 538 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Today's the day we can get a\nPokémon from Professor Juniper!\p$"

MCRoom_EventScript_Beggining_Text_6:
# 545 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Bianca: I know. Sorry, {PLAYER}.\nSorry, Cheren.\p$"

MCRoom_EventScript_Beggining_Text_7:
# 551 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Bianca: So, where are the Pokémon?\p$"

MCRoom_EventScript_Beggining_Text_8:
# 552 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "They were delivered to {PLAYER}'s\nhouse, so {PLAYER} gets first pick.\p$"

MCRoom_EventScript_Beggining_Text_9:
# 553 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Cheren: Naturally.\p$"

MCRoom_EventScript_Beggining_Text_10:
# 560 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "The Pokémon are waiting for us\ninside that bag.\p$"

MCRoom_EventScript_Beggining_Text_11:
# 561 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "OK, {PLAYER}, you go first and take\na peek at the bag.\p$"

MCRoom_EventScript_Beggining_Text_12:
# 562 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "I want to meet the Pokémon right now!\p$"

MCRoom_EventScript_ChooseNow_Text_0:
# 577 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Take a look.\nWe're waiting.\p$"

MCRoom_EventScript_BattleBianca_Text_0:
# 597 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Bianca: OK, I'll take this Pokémon!\nCheren, that one's yours!\p$"

MCRoom_EventScript_BattleBianca_Text_1:
# 600 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Cheren: Hey, how come you get to pick\nout my Pokémon?\p$"

MCRoom_EventScript_BattleBianca_Text_2:
# 601 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Oh, never mind. I wanted ...\nfrom the start, anyway.\p$"

MCRoom_EventScript_BattleBianca_Text_3:
# 610 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Bianca: Everyone has chosen a Pokémon!\n...So that's that!\p$"

MCRoom_EventScript_BattleBianca_Text_4:
# 611 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Hey, I know!\nLet's have a Pokémon battle!\p$"

MCRoom_EventScript_BattleBianca_Text_5:
# 612 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Cheren: Honestly, Bianca...\p$"

MCRoom_EventScript_BattleBianca_Text_6:
# 613 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Even though they're still weak Pokémon,\nyou shouldn't have Pokémon battles\linside a house.\p$"

MCRoom_EventScript_BattleBianca_Text_7:
# 614 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Don't be a worrywart!\nThese little ones are weak, like you said.\p$"

MCRoom_EventScript_BattleBianca_Text_8:
# 615 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "We have to let them battle so they'll get\nstronger. It's settled, {PLAYER}!\lGet ready for a Pokémon Battle!\p$"

MCRoom_EventScript_BattleCheren_Text_0:
# 633 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Bianca: Wow...\p$"

MCRoom_EventScript_BattleCheren_Text_1:
# 634 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "{PLAYER}, you're gonna be\nan awesome Trainer someday, I can tell!\p$"

MCRoom_EventScript_BattleCheren_Text_2:
# 635 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "No doubt!\p$"

MCRoom_EventScript_BattleCheren_Text_3:
# 637 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Cheren: Uh...\n...\p$"

MCRoom_EventScript_BattleCheren_Text_4:
# 638 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Bianca: Would you take a look around?\p$"

MCRoom_EventScript_BattleCheren_Text_5:
# 649 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Bianca: Wh-whoa!\nWhat happened?!\p$"

MCRoom_EventScript_BattleCheren_Text_6:
# 652 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Wow! Pokémon are amaaaaazing!!\nSo little, but so strong!\p$"

MCRoom_EventScript_BattleCheren_Text_7:
# 653 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "I'm so glad that I get to have a Pokémon!\p$"

MCRoom_EventScript_BattleCheren_Text_8:
# 654 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "...Oh.\nUm, sorry about your room, {PLAYER}.\p$"

MCRoom_EventScript_BattleCheren_Text_9:
# 658 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Cheren: You...are completely hopeless.\p$"

MCRoom_EventScript_BattleCheren_Text_10:
# 659 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Here!\nI'll restore your Pokémon for you.\p$"

MCRoom_EventScript_BattleCheren_Text_11:
# 665 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "{PLAYER}'s Pokémon needs\nto be fixed up, too.\p$"

MCRoom_EventScript_BattleCheren_Text_12:
# 678 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Bianca: Hey, Cheren!\nHow about you battle, too?\p$"

MCRoom_EventScript_BattleCheren_Text_13:
# 679 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "With all you know, I'm sure you can\nbattle without turning the room into\la disaster area like I did!\p$"

MCRoom_EventScript_BattleCheren_Text_14:
# 680 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Cheren: I believe you're right!\p$"

MCRoom_EventScript_BattleCheren_Text_15:
# 681 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "It'll be no problem for me to keep\nthe room from getting any mesier.\p$"

MCRoom_EventScript_BattleCheren_Text_16:
# 682 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Besides, it's not fair if you two are the\nonly ones who get to have fun battling!\p$"

MCRoom_EventScript_BattleCheren_Text_17:
# 688 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "It's decided. You'll be my opponent...\nin our first Pokémon battle!\p$"

MCRoom_EventScript_BattleCheren_Text_18:
# 689 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Let's see what you can do, ...!\p$"

MCRoom_EventScript_PostBattles_Text_0:
# 704 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Cheren: I made a strange blunder\nin my first battle, but\lthis feeling I have...\l...I'm finally a Trainer.\p$"

MCRoom_EventScript_PostBattles_Text_1:
# 705 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "But first, we'd better go apologize to\nyour mother about this messed-up room.\p$"

MCRoom_EventScript_PostBattles_Text_2:
# 708 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Bianca: Oh!\nI'd better come, too!\p$"

MCRoom_Text_BiancaDefeated::
# 737 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string ".$"

MCRoom_Text_CherenDefeated::
# 757 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string ".$"
