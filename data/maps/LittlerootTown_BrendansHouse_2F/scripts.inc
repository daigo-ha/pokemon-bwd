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
	call_if_unset FLAG_STARTER_BAG, MCRoom_EventScript_StarterBag
# 14 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	removeobject LOCALID_MC2F_BIANCA
# 15 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setflag FLAG_MC2F_BIANCA
# 16 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	return
# 17 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 18 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_CheckShouldUpdateBrendanPos::
# 19 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto_if_set FLAG_MET_RIVAL_LILYCOVE, LittlerootTown_BrendansHouse_2F_EventScript_TryUpdateBrendanPos
# 20 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto_if_ge VAR_BIRCH_LAB_STATE, 2, LittlerootTown_BrendansHouse_2F_EventScript_Ret
# 21 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto LittlerootTown_BrendansHouse_2F_EventScript_TryUpdateBrendanPos
# 22 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 23 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_TryUpdateBrendanPos::
# 24 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	checkplayergender
# 25 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, LittlerootTown_BrendansHouse_2F_EventScript_Ret
# 26 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	@ Odd that the MaysHouse equivalent was used below instead
# 27 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto_if_ge VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 2, LittlerootTown_MaysHouse_2F_EventScript_Ret
# 28 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setobjectxyperm LOCALID_RIVALS_HOUSE_2F_RIVAL, 0, 2
# 29 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setobjectmovementtype LOCALID_RIVALS_HOUSE_2F_RIVAL, MOVEMENT_TYPE_FACE_UP
# 30 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	return
# 31 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 32 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_Ret::
# 33 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	return
# 34 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 35 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_CheckSetReadyToMeetBrendan::
# 36 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	checkplayergender
# 37 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, LittlerootTown_BrendansHouse_2F_EventScript_SetReadyToMeetBrendan
# 38 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	return
# 39 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 40 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_SetReadyToMeetBrendan::
# 41 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setvar VAR_LITTLEROOT_RIVAL_STATE, 2
# 42 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	return
# 43 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 44 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_OnWarp:
# 45 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	map_script_2 VAR_SECRET_BASE_INITIALIZED, 0, LittlerootTown_BrendansHouse_2F_EventScript_CheckInitDecor
# 46 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.2byte 0
# 47 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 48 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_CheckInitDecor::
# 49 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	checkplayergender
# 50 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, SecretBase_EventScript_InitDecorations
# 51 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	end
# 52 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 53 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_RivalsPokeBall::
# 54 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	lockall
# 55 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto_if_eq VAR_LITTLEROOT_RIVAL_STATE, 2, LittlerootTown_BrendansHouse_2F_EventScript_MeetBrendan
# 56 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox RivalsHouse_2F_Text_ItsRivalsPokeBall, MSGBOX_DEFAULT
# 57 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	releaseall
# 58 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	end
# 59 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 60 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_MeetBrendan::
# 61 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay 10
# 62 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	addobject LOCALID_RIVALS_HOUSE_2F_RIVAL
# 63 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_2F_RIVAL, LittlerootTown_BrendansHouse_2F_Movement_BrendanEnters
# 64 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 65 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	playse SE_PIN
# 66 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_2F_RIVAL, Common_Movement_ExclamationMark
# 67 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 68 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_2F_RIVAL, Common_Movement_Delay48
# 69 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 70 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay 10
# 71 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
# 72 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, LittlerootTown_BrendansHouse_2F_EventScript_MeetBrendanNorth
# 73 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, LittlerootTown_BrendansHouse_2F_EventScript_MeetBrendanSouth
# 74 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, LittlerootTown_BrendansHouse_2F_EventScript_MeetBrendanWest
# 75 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, LittlerootTown_BrendansHouse_2F_EventScript_MeetBrendanEast
# 76 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setvar VAR_LITTLEROOT_RIVAL_STATE, 3
# 77 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_2F_POKE_BALL
# 78 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_RIVAL_BEDROOM
# 79 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 1
# 80 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	savebgm MUS_DUMMY
# 81 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	fadedefaultbgm
# 82 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	releaseall
# 83 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	end
# 84 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 85 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_MeetBrendanNorth::
# 86 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_2F_RIVAL, LittlerootTown_BrendansHouse_2F_Movement_BrendanApproachPlayerNorth
# 87 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 88 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 89 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 90 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox RivalsHouse_2F_Text_BrendanWhoAreYou, MSGBOX_DEFAULT
# 91 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	closemessage
# 92 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_PLAYER, LittlerootTown_BrendansHouse_2F_Movement_PlayerWatchBrendanNorth
# 93 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_2F_RIVAL, LittlerootTown_BrendansHouse_2F_Movement_BrendanWalkToPCNorth
# 94 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 95 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	return
# 96 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 97 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_MeetBrendanSouth::
# 98 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_2F_RIVAL, LittlerootTown_BrendansHouse_2F_Movement_BrendanApproachPlayerSouth
# 99 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 100 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 101 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 102 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox RivalsHouse_2F_Text_BrendanWhoAreYou, MSGBOX_DEFAULT
# 103 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	closemessage
# 104 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_PLAYER, LittlerootTown_BrendansHouse_2F_Movement_PlayerWatchBrendanSouth
# 105 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_2F_RIVAL, LittlerootTown_BrendansHouse_2F_Movement_BrendanWalkToPCSouth
# 106 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 107 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	return
# 108 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 109 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_MeetBrendanWest::
# 110 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_2F_RIVAL, LittlerootTown_BrendansHouse_2F_Movement_BrendanApproachPlayerWest
# 111 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 112 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 113 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 114 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox RivalsHouse_2F_Text_BrendanWhoAreYou, MSGBOX_DEFAULT
# 115 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	closemessage
# 116 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_PLAYER, LittlerootTown_BrendansHouse_2F_Movement_PlayerWatchBrendanWest
# 117 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_2F_RIVAL, LittlerootTown_BrendansHouse_2F_Movement_BrendanWalkToPCWest
# 118 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 119 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	return
# 120 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 121 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_MeetBrendanEast::
# 122 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_2F_RIVAL, LittlerootTown_BrendansHouse_2F_Movement_BrendanApproachPlayerEast
# 123 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 124 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 125 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 126 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox RivalsHouse_2F_Text_BrendanWhoAreYou, MSGBOX_DEFAULT
# 127 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	closemessage
# 128 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_2F_RIVAL, LittlerootTown_BrendansHouse_2F_Movement_BrendanWalkToPCEast
# 129 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 130 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	return
# 131 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 132 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_Movement_BrendanEnters:
# 133 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_down
# 134 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_down
# 135 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_in_place_faster_left
# 136 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	step_end
# 137 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 138 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_Movement_BrendanApproachPlayerNorth:
# 139 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 140 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 141 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_down
# 142 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_down
# 143 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 144 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	step_end
# 145 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 146 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_Movement_BrendanWalkToPCNorth:
# 147 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_up
# 148 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_up
# 149 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_up
# 150 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 151 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 152 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 153 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 154 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_in_place_faster_up
# 155 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	step_end
# 156 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 157 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_Movement_PlayerWatchBrendanNorth:
# 158 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay_16
# 159 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_in_place_faster_up
# 160 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay_16
# 161 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay_16
# 162 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay_16
# 163 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay_16
# 164 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_in_place_faster_left
# 165 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	step_end
# 166 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 167 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_Movement_BrendanApproachPlayerSouth:
# 168 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 169 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 170 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 171 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	step_end
# 172 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 173 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_Movement_BrendanWalkToPCSouth:
# 174 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_up
# 175 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 176 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 177 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 178 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 179 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_in_place_faster_up
# 180 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	step_end
# 181 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 182 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_Movement_PlayerWatchBrendanSouth:
# 183 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay_16
# 184 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_in_place_faster_up
# 185 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay_16
# 186 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay_16
# 187 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_in_place_faster_left
# 188 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	step_end
# 189 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 190 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_Movement_BrendanApproachPlayerWest:
# 191 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 192 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 193 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_down
# 194 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_in_place_faster_left
# 195 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	step_end
# 196 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 197 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_Movement_BrendanWalkToPCWest:
# 198 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_up
# 199 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_up
# 200 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 201 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 202 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 203 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 204 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 205 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_in_place_faster_up
# 206 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	step_end
# 207 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 208 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_Movement_PlayerWatchBrendanWest:
# 209 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay_8
# 210 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay_16
# 211 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_in_place_faster_up
# 212 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay_16
# 213 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay_16
# 214 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_in_place_faster_left
# 215 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	step_end
# 216 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 217 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_Movement_BrendanApproachPlayerEast:
# 218 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 219 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 220 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 221 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 222 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 223 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_in_place_faster_down
# 224 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	step_end
# 225 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 226 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_Movement_BrendanWalkToPCEast:
# 227 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_up
# 228 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 229 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 230 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_in_place_faster_up
# 231 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	step_end
# 232 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 233 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
@ Unused, the player is already facing this direction so its unneeded
# 234 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_Movement_PlayerWatchBrendanEast:
# 235 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay_16
# 236 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay_16
# 237 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_in_place_faster_left
# 238 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	step_end
# 239 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 240 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_PC::
# 241 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	lockall
# 242 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	checkplayergender
# 243 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, LittlerootTown_BrendansHouse_2F_EventScript_CheckPlayersPC
# 244 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, LittlerootTown_BrendansHouse_2F_EventScript_CheckRivalsPC
# 245 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	end
# 246 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 247 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_CheckPlayersPC::
# 248 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setvar VAR_0x8004, PC_LOCATION_BRENDANS_HOUSE
# 249 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	special DoPCTurnOnEffect
# 250 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	playse SE_PC_ON
# 251 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox gText_PlayerHouseBootPC, MSGBOX_DEFAULT
# 252 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	special BedroomPC
# 253 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitstate
# 254 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	releaseall
# 255 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	end
# 256 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 257 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_TurnOffPlayerPC::
# 258 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setvar VAR_0x8004, PC_LOCATION_BRENDANS_HOUSE
# 259 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	playse SE_PC_OFF
# 260 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	special DoPCTurnOffEffect
# 261 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	releaseall
# 262 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	end
# 263 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 264 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_CheckRivalsPC::
# 265 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox gText_PokemonTrainerSchoolEmail, MSGBOX_DEFAULT
# 266 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	releaseall
# 267 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	end
# 268 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 269 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
PlayersHouse_2F_EventScript_Notebook::
# 270 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox PlayersHouse_2F_Text_Notebook, MSGBOX_SIGN
# 271 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	end
# 272 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 273 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
PlayersHouse_2F_EventScript_GameCube::
# 274 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox PlayersHouse_2F_Text_ItsAGameCube, MSGBOX_SIGN
# 275 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	end
# 276 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 277 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
PlayersHouse_2F_Text_ClockIsStopped:
# 278 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "The clock is stopped…\p"
# 279 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Better set it and start it!$"
# 280 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 281 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
PlayersHouse_2F_Text_HowDoYouLikeYourRoom:
# 282 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "MOM: {PLAYER}, how do you like your\n"
# 283 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "new room?\p"
# 284 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Good! Everything's put away neatly!\p"
# 285 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "They finished moving everything in\n"
# 286 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "downstairs, too.\p"
# 287 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "POKéMON movers are so convenient!\p"
# 288 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Oh, you should make sure that\n"
# 289 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "everything's all there on your desk.$"
# 290 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 291 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
PlayersHouse_2F_Text_Notebook:
# 292 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "{PLAYER} flipped open the notebook.\p"
# 293 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "ADVENTURE RULE NO. 1\n"
# 294 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Open the MENU with START.\p"
# 295 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "ADVENTURE RULE NO. 2\n"
# 296 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Record your progress with SAVE.\p"
# 297 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "The remaining pages are blank…$"
# 298 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 299 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
Common_Text_LookCloserAtMap:
# 300 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "{PLAYER} took a closer look at the\n"
# 301 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "HOENN region map.$"
# 302 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 303 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
PlayersHouse_2F_Text_ItsAGameCube:
# 304 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "It's a Nintendo GameCube.\p"
# 305 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "A Game Boy Advance is connected to\n"
# 306 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "serve as the Controller.$"

MCRoom_EventScript_Starter::
MCRoom_EventScript_Starter_2:
# 310 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto_if_unset FLAG_STARTER_SNIVY, MCRoom_EventScript_Starter_4
MCRoom_EventScript_Starter_1:
# 334 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	closemessage
# 338 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setvar VAR_LITTLEROOT_START, 3
# 339 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	call MCRoom_EventScript_BattleBianca
# 340 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	releaseall
	end

MCRoom_EventScript_Starter_3:
# 311 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	lockall
# 312 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox MCRoom_EventScript_Starter_Text_0
# 313 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	message MCRoom_EventScript_Starter_Text_1
# 314 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmessage
# 315 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	multichoice 20, 5, MULTI_STARTER_CHOICE, 0
# 316 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	closemessage
# 317 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq MCRoom_EventScript_Starter_9
# 321 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq MCRoom_EventScript_Starter_10
# 325 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq MCRoom_EventScript_Starter_11
# 330 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox MCRoom_EventScript_Starter_Text_2
# 331 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmessage
	goto MCRoom_EventScript_Starter_2

MCRoom_EventScript_Starter_4:
# 310 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto_if_unset FLAG_STARTER_TEPIG, MCRoom_EventScript_Starter_6
	goto MCRoom_EventScript_Starter_1

MCRoom_EventScript_Starter_6:
# 310 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto_if_unset FLAG_STARTER_OSHAWOTT, MCRoom_EventScript_Starter_3
	goto MCRoom_EventScript_Starter_1

MCRoom_EventScript_Starter_9:
# 318 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	call StarterFade
# 319 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	call MCRoom_EventScript_Snivy
	goto MCRoom_EventScript_Starter_2

MCRoom_EventScript_Starter_10:
# 322 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	call StarterFade
# 323 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	call MCRoom_EventScript_Tepig
	goto MCRoom_EventScript_Starter_2

MCRoom_EventScript_Starter_11:
# 326 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	call StarterFade
# 327 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
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
# 487 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setflag FLAG_STARTER_BAG
	return

MCRoom_EventScript_StarterBag_1:
# 483 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setvar VAR_LITTLEROOT_START, 1
# 484 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
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
# 492 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	lockall
# 493 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox MCRoom_EventScript_DoNotLeaveBeggining_Text_0
# 494 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MCRoom_EventScript_DoNotLeaveBeggining_Movement_0
# 495 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 496 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	releaseall
	return


MCRoom_EventScript_Beggining::
# 500 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	lockall
# 501 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 502 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	compare VAR_TEMP_0, 7
	goto_if_eq MCRoom_EventScript_Beggining_2
# 506 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MCRoom_EventScript_Beggining_Movement_0
MCRoom_EventScript_Beggining_1:
# 508 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 509 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Movement_MCStart1
# 510 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 511 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_MC2F_CHEREN, MCRoom_EventScript_Beggining_Movement_1
# 512 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox MCRoom_EventScript_Beggining_Text_0
# 513 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmessage
# 514 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_MC2F_CHEREN, MCRoom_EventScript_Beggining_Movement_2
# 515 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 516 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox MCRoom_EventScript_Beggining_Text_1
# 517 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox MCRoom_EventScript_Beggining_Text_2
# 518 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmessage
# 519 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	closemessage
# 520 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay 90
# 521 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	clearflag FLAG_MC2F_BIANCA
# 522 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	showobjectat LOCALID_MC2F_BIANCA, MAP_LITTLEROOT_TOWN_BRENDANS_HOUSE_2F
# 523 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	special SpawnCameraObject
# 524 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, MCRoom_EventScript_Beggining_Movement_3
# 525 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 526 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	opendoor 8, 1
# 527 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitdooranim
# 528 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay 60
# 529 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_MC2F_BIANCA, MCRoom_EventScript_Beggining_Movement_0
# 530 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 531 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MCRoom_EventScript_Beggining_Movement_4
# 532 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_MC2F_CHEREN, MCRoom_EventScript_Beggining_Movement_4
# 533 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 534 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox MCRoom_EventScript_Beggining_Text_3
# 535 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmessage
# 536 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_MC2F_CHEREN, MCRoom_EventScript_Beggining_Movement_5
# 537 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 538 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox MCRoom_EventScript_Beggining_Text_4
# 540 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmessage
# 541 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, MCRoom_EventScript_Beggining_Movement_6
# 542 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_MC2F_BIANCA, MCRoom_EventScript_Beggining_Movement_7
# 543 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 544 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_MC2F_CHEREN, MCRoom_EventScript_Beggining_Movement_1
# 545 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 546 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox MCRoom_EventScript_Beggining_Text_5
# 547 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmessage
# 548 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_MC2F_BIANCA, MCRoom_EventScript_Beggining_Movement_8
# 549 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 550 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MCRoom_EventScript_Beggining_Movement_1
# 551 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 552 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox MCRoom_EventScript_Beggining_Text_6
# 553 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox MCRoom_EventScript_Beggining_Text_7
# 554 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmessage
# 555 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_MC2F_CHEREN, MCRoom_EventScript_Beggining_Movement_9
# 556 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 557 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MCRoom_EventScript_Beggining_Movement_2
# 558 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_MC2F_BIANCA, MCRoom_EventScript_Beggining_Movement_2
# 559 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 560 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox MCRoom_EventScript_Beggining_Text_8
# 562 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmessage
# 564 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	special RemoveCameraObject
# 565 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setvar VAR_LITTLEROOT_START, 2
# 566 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setflag FLAG_SYS_B_DASH
# 567 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	releaseall
	return

MCRoom_EventScript_Beggining_2:
# 503 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
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
	applymovement OBJ_EVENT_ID_PLAYER, MCRoom_EventScript_Beggining_Movement_0
# 579 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 580 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	releaseall
	return


MCRoom_EventScript_BattleBianca::
# 584 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	lockall
# 586 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_MC2F_BIANCA, MCRoom_EventScript_BattleBianca_Movement_0
# 587 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 588 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox MCRoom_EventScript_BattleBianca_Text_0
# 589 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_MC2F_CHEREN, MCRoom_EventScript_BattleBianca_Movement_1
# 590 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 591 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	compare VAR_STARTER_MON, 0
	goto_if_eq MCRoom_EventScript_BattleBianca_2
# 595 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	compare VAR_STARTER_MON, 1
	goto_if_eq MCRoom_EventScript_BattleBianca_3
# 599 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	compare VAR_STARTER_MON, 2
	goto_if_eq MCRoom_EventScript_BattleBianca_4
MCRoom_EventScript_BattleBianca_1:
# 603 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmessage
# 604 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 605 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	removeobject 15
# 606 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_MC2F_CHEREN, MCRoom_EventScript_BattleBianca_Movement_2
# 607 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MCRoom_EventScript_BattleBianca_Movement_3
# 608 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_MC2F_BIANCA, MCRoom_EventScript_BattleBianca_Movement_4
# 609 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 610 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 611 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox MCRoom_EventScript_BattleBianca_Text_4
# 612 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox MCRoom_EventScript_BattleBianca_Text_5
# 615 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmessage
# 616 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_MC2F_BIANCA, Common_Movement_Delay48
# 617 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 619 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	switch VAR_STARTER_MON
# 620 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	case 0, MCRoom_EventScript_BattleBianca_10
# 622 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	case 1, MCRoom_EventScript_BattleBianca_11
# 624 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	case 2, MCRoom_EventScript_BattleBianca_12
MCRoom_EventScript_BattleBianca_8:
# 627 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	releaseall
	end

MCRoom_EventScript_BattleBianca_2:
# 592 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox MCRoom_EventScript_BattleBianca_Text_1
	goto MCRoom_EventScript_BattleBianca_1

MCRoom_EventScript_BattleBianca_3:
# 596 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox MCRoom_EventScript_BattleBianca_Text_2
	goto MCRoom_EventScript_BattleBianca_1

MCRoom_EventScript_BattleBianca_4:
# 600 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox MCRoom_EventScript_BattleBianca_Text_3
	goto MCRoom_EventScript_BattleBianca_1

MCRoom_EventScript_BattleBianca_10:
# 621 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	call MCRoom_EventScript_StartBiancaBattleSnivy
	goto MCRoom_EventScript_BattleBianca_8

MCRoom_EventScript_BattleBianca_11:
# 623 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	call MCRoom_EventScript_StartBiancaBattleTepig
	goto MCRoom_EventScript_BattleBianca_8

MCRoom_EventScript_BattleBianca_12:
# 625 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	call MCRoom_EventScript_StartBiancaBattleOshawott
	goto MCRoom_EventScript_BattleBianca_8


MCRoom_EventScript_BattleCheren::
# 631 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	lockall
# 632 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox MCRoom_EventScript_BattleCheren_Text_0
# 633 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmessage
# 634 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox MCRoom_EventScript_BattleCheren_Text_1
# 635 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmessage
# 636 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_MC2F_BIANCA, MCRoom_EventScript_BattleCheren_Movement_0
# 637 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 638 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay 60
# 639 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_MC2F_BIANCA, MCRoom_EventScript_Beggining_Movement_4
# 640 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 641 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay 60
# 642 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_MC2F_BIANCA, MCRoom_EventScript_Beggining_Movement_2
# 643 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 644 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay 60
# 645 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox MCRoom_EventScript_BattleCheren_Text_2
# 646 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_MC2F_BIANCA, MCRoom_EventScript_Beggining_Movement_1
# 647 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 648 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox MCRoom_EventScript_BattleCheren_Text_3
# 650 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmessage
# 651 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_MC2F_CHEREN, MCRoom_EventScript_BattleCheren_Movement_1
# 652 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 653 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox MCRoom_EventScript_BattleCheren_Text_4
# 655 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	playfanfare MUS_HEAL
# 656 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitfanfare
# 657 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_MC2F_CHEREN, MCRoom_EventScript_Beggining_Movement_1
# 658 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 660 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox MCRoom_EventScript_BattleCheren_Text_5
# 662 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	playfanfare MUS_HEAL
# 663 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitfanfare
# 664 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	special HealPlayerParty
# 666 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_MC2F_BIANCA, Common_Movement_ExclamationMark
# 667 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 668 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay 60
# 669 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_MC2F_BIANCA, MCRoom_EventScript_BattleCheren_Movement_2
# 670 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 671 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MCRoom_EventScript_Beggining_Movement_4
# 672 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_MC2F_CHEREN, MCRoom_EventScript_Beggining_Movement_4
# 673 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 674 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox MCRoom_EventScript_BattleCheren_Text_6
# 676 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox MCRoom_EventScript_BattleCheren_Text_7
# 678 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmessage
# 679 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	closemessage
# 680 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_MC2F_CHEREN, MCRoom_EventScript_BattleCheren_Movement_3
# 681 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 682 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MCRoom_EventScript_BattleCheren_Movement_0
# 683 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 684 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	switch VAR_STARTER_MON
# 685 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	case 0, MCRoom_EventScript_BattleCheren_3
# 687 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	case 1, MCRoom_EventScript_BattleCheren_4
# 689 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	case 2, MCRoom_EventScript_BattleCheren_5
MCRoom_EventScript_BattleCheren_1:
# 692 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmessage
# 693 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	closemessage
# 694 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_MC2F_CHEREN, Common_Movement_Delay48
# 695 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 697 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	switch VAR_STARTER_MON
# 698 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	case 0, MCRoom_EventScript_BattleCheren_8
# 699 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	case 1, MCRoom_EventScript_BattleCheren_9
# 700 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	case 2, MCRoom_EventScript_BattleCheren_10
MCRoom_EventScript_BattleCheren_6:
# 702 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	releaseall
	end

MCRoom_EventScript_BattleCheren_3:
# 686 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox MCRoom_EventScript_BattleCheren_Text_8
	goto MCRoom_EventScript_BattleCheren_1

MCRoom_EventScript_BattleCheren_4:
# 688 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox MCRoom_EventScript_BattleCheren_Text_9
	goto MCRoom_EventScript_BattleCheren_1

MCRoom_EventScript_BattleCheren_5:
# 690 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox MCRoom_EventScript_BattleCheren_Text_10
	goto MCRoom_EventScript_BattleCheren_1

MCRoom_EventScript_BattleCheren_8:
# 698 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	call MCRoom_EventScript_StartCherenBattleSnivy
	goto MCRoom_EventScript_BattleCheren_6

MCRoom_EventScript_BattleCheren_9:
# 699 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	call MCRoom_EventScript_StartCherenBattleTepig
	goto MCRoom_EventScript_BattleCheren_6

MCRoom_EventScript_BattleCheren_10:
# 700 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	call MCRoom_EventScript_StartCherenBattleOshawott
	goto MCRoom_EventScript_BattleCheren_6


MCRoom_EventScript_PostBattles::
# 706 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	lockall
# 707 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox MCRoom_EventScript_PostBattles_Text_0
# 709 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmessage
# 710 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_MC2F_CHEREN, MCRoom_EventScript_PostBattles_Movement_0
# 711 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox MCRoom_EventScript_PostBattles_Text_1
# 712 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmessage
# 713 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	removeobject LOCALID_MC2F_CHEREN
# 714 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_MC2F_BIANCA, MCRoom_EventScript_PostBattles_Movement_1
# 715 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 716 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	removeobject LOCALID_MC2F_BIANCA
# 718 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setflag FLAG_MC2F_BIANCA
# 719 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setflag FLAG_MC2F_CHEREN
# 720 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	releaseall
	end


MCRoom_EventScript_StartBiancaBattleSnivy::
# 725 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_ROUTE_103_TREECKO, MCRoom_Text_BiancaDefeated
# 726 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	call MCRoom_EventScript_BattleCheren
	end


MCRoom_EventScript_StartBiancaBattleTepig::
# 730 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_ROUTE_103_TORCHIC, MCRoom_Text_BiancaDefeated
# 731 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	call MCRoom_EventScript_BattleCheren
	end


MCRoom_EventScript_StartBiancaBattleOshawott::
# 735 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_ROUTE_103_MUDKIP, MCRoom_Text_BiancaDefeated
# 736 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	call MCRoom_EventScript_BattleCheren
	end


MCRoom_EventScript_StartCherenBattleSnivy::
# 745 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_ROUTE_103_TREECKO, MCRoom_Text_CherenDefeated
# 746 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	call MCRoom_EventScript_PostBattles
	end


MCRoom_EventScript_StartCherenBattleTepig::
# 750 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_ROUTE_103_TORCHIC, MCRoom_Text_CherenDefeated
# 751 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	call MCRoom_EventScript_PostBattles
	end


MCRoom_EventScript_StartCherenBattleOshawott::
# 755 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_ROUTE_103_MUDKIP, MCRoom_Text_CherenDefeated
# 756 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	call MCRoom_EventScript_PostBattles
	end


MCRoom_EventScript_Cheren::
# 773 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	lock
# 774 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	faceplayer
# 775 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	compare VAR_LITTLEROOT_START, 2
	goto_if_eq MCRoom_EventScript_Cheren_2
# 779 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox MCRoom_EventScript_Cheren_Text_0
MCRoom_EventScript_Cheren_1:
# 781 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	release
	return

MCRoom_EventScript_Cheren_2:
# 776 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox MCRoom_Text_CherenWaitingForStarterChoice
	goto MCRoom_EventScript_Cheren_1


MCRoom_EventScript_Bianca::
# 785 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	lock
# 786 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	faceplayer
# 787 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	compare VAR_LITTLEROOT_START, 2
	goto_if_eq MCRoom_EventScript_Bianca_2
# 791 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox MCRoom_EventScript_Bianca_Text_0
MCRoom_EventScript_Bianca_1:
# 793 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	release
	return

MCRoom_EventScript_Bianca_2:
# 788 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox MCRoom_Text_BiancaWaitingForStarterChoice
	goto MCRoom_EventScript_Bianca_1


# 494 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
MCRoom_EventScript_DoNotLeaveBeggining_Movement_0:
# 494 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
	step_end

# 506 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
MCRoom_EventScript_Beggining_Movement_0:
# 506 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_down
	step_end

# 511 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
MCRoom_EventScript_Beggining_Movement_1:
# 511 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	face_left
	step_end

# 514 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
MCRoom_EventScript_Beggining_Movement_2:
# 514 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	face_down
	step_end

# 524 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
MCRoom_EventScript_Beggining_Movement_3:
# 524 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_diag_northeast
# 524 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_diag_northeast
# 524 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_right
	step_end

# 531 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
MCRoom_EventScript_Beggining_Movement_4:
# 531 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	face_up
	step_end

# 536 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
MCRoom_EventScript_Beggining_Movement_5:
# 536 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_right
# 536 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_up
	step_end

# 541 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
MCRoom_EventScript_Beggining_Movement_6:
# 541 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_diag_southwest
# 541 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_diag_southwest
# 541 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
	step_end

# 542 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
MCRoom_EventScript_Beggining_Movement_7:
# 542 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_down
# 542 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 542 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 542 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 542 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 542 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	face_down
	step_end

# 548 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
MCRoom_EventScript_Beggining_Movement_8:
# 548 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 548 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_down
# 548 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_down
# 548 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
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

# 586 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
MCRoom_EventScript_BattleBianca_Movement_0:
# 586 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_down
# 586 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	face_right
	step_end

# 589 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
MCRoom_EventScript_BattleBianca_Movement_1:
# 589 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_down
# 589 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	face_left
	step_end

# 606 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
MCRoom_EventScript_BattleBianca_Movement_2:
# 606 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_fast_up
# 606 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_fast_up
# 606 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_fast_up
# 606 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_fast_up
# 606 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	face_down
	step_end

# 607 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
MCRoom_EventScript_BattleBianca_Movement_3:
# 607 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_fast_up
# 607 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_fast_up
# 607 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	face_right
	step_end

# 608 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
MCRoom_EventScript_BattleBianca_Movement_4:
# 608 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_fast_right
# 608 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_fast_right
# 608 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_fast_right
# 608 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_fast_up
# 608 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_fast_up
# 608 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	face_left
	step_end

# 636 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
MCRoom_EventScript_BattleCheren_Movement_0:
# 636 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	face_right
	step_end

# 651 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
MCRoom_EventScript_BattleCheren_Movement_1:
# 651 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_down
# 651 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_down
# 651 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	face_right
	step_end

# 669 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
MCRoom_EventScript_BattleCheren_Movement_2:
# 669 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_up
# 669 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_up
# 669 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 669 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	face_down
	step_end

# 680 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
MCRoom_EventScript_BattleCheren_Movement_3:
# 680 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_right
# 680 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	face_left
	step_end

# 710 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
MCRoom_EventScript_PostBattles_Movement_0:
# 710 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_right
# 710 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_right
# 710 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_up
# 710 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_up
# 710 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_up
	step_end

# 714 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
MCRoom_EventScript_PostBattles_Movement_1:
# 714 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_right
# 714 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_right
# 714 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_right
# 714 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_up
	step_end

MCRoom_EventScript_Starter_Text_0:
# 312 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "{PLAYER} opened the bag!$"

MCRoom_EventScript_Starter_Text_1:
# 313 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Which starter are you choosing?$"

MCRoom_EventScript_Starter_Text_2:
# 330 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
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
# 493 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Cheren: Come here {PLAYER}!$"

MCRoom_EventScript_Beggining_Text_0:
# 512 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Cheren: {PLAYER}!\pI heard from Professor Juniper.\nWe can have a Pokémon?$"

MCRoom_EventScript_Beggining_Text_1:
# 516 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "...\n...$"

MCRoom_EventScript_Beggining_Text_2:
# 517 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Cheren: What's keeping Bianca?$"

MCRoom_EventScript_Beggining_Text_3:
# 534 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Bianca: Am I a little late again?\nSo-oooo-orry!$"

MCRoom_EventScript_Beggining_Text_4:
# 538 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Cheren: Bianca...\lI've known for ten years that you\nhave no sense of time, but...seriously...\pToday's  the day we can get a\nPokémon from Professor Juniper!$"

MCRoom_EventScript_Beggining_Text_5:
# 546 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Bianca: I know. Sorry, {PLAYER}.\nSorry, Cheren.$"

MCRoom_EventScript_Beggining_Text_6:
# 552 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Bianca: So, where are the Pokémon?\pThey were delivered to {PLAYER}'s\nhouse, so {PLAYER} gets first pick.$"

MCRoom_EventScript_Beggining_Text_7:
# 553 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Cheren: Naturally.$"

MCRoom_EventScript_Beggining_Text_8:
# 560 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "The Pokémon are waiting for us\ninside that bag.\pOK, {PLAYER}, you go first and take\na peek at the bag.\p I want to meet the Pokémon right now!$"

MCRoom_EventScript_ChooseNow_Text_0:
# 577 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Hey, don't leave.\nWe're waiting.$"

MCRoom_EventScript_BattleBianca_Text_0:
# 588 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Bianca: OK, I'll take this Pokémon!\nCheren, that one's yours!$"

MCRoom_EventScript_BattleBianca_Text_1:
# 592 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Cheren: Hey, how come you get to pick\nout my Pokémon?\pOh, never mind. I wanted Tepig\nfrom the start,  anyway.$"

MCRoom_EventScript_BattleBianca_Text_2:
# 596 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Cheren: Hey, how come you get to pick\nout my Pokémon?\pOh, never mind. I wanted Oshawott\nfrom the start,  anyway.$"

MCRoom_EventScript_BattleBianca_Text_3:
# 600 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Cheren: Hey, how come you get to pick\nout my Pokémon?\pOh, never mind. I wanted Snivy\nfrom the start,  anyway.$"

MCRoom_EventScript_BattleBianca_Text_4:
# 611 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Bianca: Everyone has chosen a Pokémon!\n...So that's that!\pHey, I know!\nLet's have a Pokémon battle!$"

MCRoom_EventScript_BattleBianca_Text_5:
# 612 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Cheren: Honestly, Bianca...\pEven though they're still weak Pokémon,\nyou shouldn't have Pokémon battles\l inside a house.\pDon't be a worrywart!\nThese little ones are weak, like you said.\pWe have to let them  battle so they'll get\nstronger. It's settled, {PLAYER}!\lGet ready for a Pokémon Battle!$"

MCRoom_EventScript_BattleCheren_Text_0:
# 632 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Bianca: Wow...\p{PLAYER}, you're gonna be\nan awesome Trainer someday, I can tell!\pNo doubt!$"

MCRoom_EventScript_BattleCheren_Text_1:
# 634 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Cheren: Uh...\n...\pBianca, Would you take a look around?$"

MCRoom_EventScript_BattleCheren_Text_2:
# 645 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Bianca: Wh-whoa!\nWhat happened?!$"

MCRoom_EventScript_BattleCheren_Text_3:
# 648 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Wow! Pokémon are amaaaaazing!!\nSo little, but so strong!\pI'm so glad that I get to have a\nPokémon!\p ...Oh.\nUm, sorry about your room, {PLAYER}.$"

MCRoom_EventScript_BattleCheren_Text_4:
# 653 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Cheren: You...are completely hopeless.\pHere!\nI'll restore your Pokémon for you.$"

MCRoom_EventScript_BattleCheren_Text_5:
# 660 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "{PLAYER}'s Pokémon needs\nto be fixed up, too.$"

MCRoom_EventScript_BattleCheren_Text_6:
# 674 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Bianca: Hey, Cheren!\nHow about you battle, too?\pWith all you know, I'm sure you can\nbattle without  turning the room into\la disaster area like I did!$"

MCRoom_EventScript_BattleCheren_Text_7:
# 676 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Cheren: I believe you're right!\pIt'll be no problem for me to keep\nthe room from getting any mesier.\p Besides, it's not fair if you two are the\nonly ones who get to have fun battling!$"

MCRoom_EventScript_BattleCheren_Text_8:
# 686 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "It's decided. You'll be my opponent...\nin our first Pokémon battle!\pLet's see what you can do, Tepig!$"

MCRoom_EventScript_BattleCheren_Text_9:
# 688 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "It's decided. You'll be my opponent...\nin our first Pokémon battle!\pLet's see what you can do, Oshawott!$"

MCRoom_EventScript_BattleCheren_Text_10:
# 690 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "It's decided. You'll be my opponent...\nin our first Pokémon battle!\pLet's see what you can do, Snivy!$"

MCRoom_EventScript_PostBattles_Text_0:
# 707 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Cheren: I made a strange blunder\nin my first battle, but\lthis feeling I have...\l...I'm finally a Trainer .\pBut first, we'd better go apologize to\nyour mother about this messed-up room.$"

MCRoom_EventScript_PostBattles_Text_1:
# 711 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Bianca: Oh!\nI'd better come, too!$"

MCRoom_EventScript_Cheren_Text_0:
# 779 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Cheren: Hi {PLAYER}!$"

MCRoom_EventScript_Bianca_Text_0:
# 791 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Bianca: Hi {PLAYER}!$"

MCRoom_Text_BiancaDefeated::
# 740 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "The Pokémon on both sides did their\nbest!$"

MCRoom_Text_CherenDefeated::
# 760 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Ah! So that's a Pokémon battle!$"

MCRoom_Text_CherenWaitingForStarterChoice::
# 764 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Cheren: Would you get a move on\nand open the bag already?\pI'm sure the Pokémon are just as\nexcited to meet us!$"

MCRoom_Text_BiancaWaitingForStarterChoice::
# 768 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Bianca: Ooh!\nWhat kind of Pokémon could they be?$"
