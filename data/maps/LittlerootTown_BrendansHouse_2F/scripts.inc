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
# 337 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setvar VAR_LITTLEROOT_START, 3
# 338 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	call MCRoom_EventScript_BattleBianca
# 339 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
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
# 344 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 345 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay 20
# 346 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	fadescreen FADE_FROM_BLACK
	return


MCRoom_EventScript_Snivy::
# 352 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	showmonpic SPECIES_SNIVY, 10, 3
# 353 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox MCRoom_EventScript_Snivy_Text_0, MSGBOX_YESNO
# 354 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq MCRoom_EventScript_Snivy_2
# 379 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	hidemonpic
# 380 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox MCRoom_EventScript_Snivy_Text_3
MCRoom_EventScript_Snivy_1:
# 382 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmessage
	return

MCRoom_EventScript_Snivy_2:
# 355 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	givemon SPECIES_SNIVY, 5, ITEM_ORAN_BERRY
# 356 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq MCRoom_EventScript_Snivy_5
# 365 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq MCRoom_EventScript_Snivy_6
# 374 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	hidemonpic
# 375 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox MCRoom_EventScript_Snivy_Text_2
	goto MCRoom_EventScript_Snivy_1

MCRoom_EventScript_Snivy_5:
# 357 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 358 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox MCRoom_EventScript_Snivy_Text_1
# 359 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	removeobject 0
# 360 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setflag FLAG_STARTER_SNIVY
# 361 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 362 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setvar VAR_STARTER_MON, 0
# 363 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	call NicknamePartyMon
	goto MCRoom_EventScript_Snivy_1

MCRoom_EventScript_Snivy_6:
# 366 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 367 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox MCRoom_EventScript_Snivy_Text_1
# 368 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	removeobject 0
# 369 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setflag FLAG_STARTER_SNIVY
# 370 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 371 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	call NicknameBoxMon
	goto MCRoom_EventScript_Snivy_1


MCRoom_EventScript_Tepig::
# 388 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	showmonpic SPECIES_TEPIG, 10, 3
# 389 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox MCRoom_EventScript_Snivy_Text_0, MSGBOX_YESNO
# 390 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq MCRoom_EventScript_Tepig_2
# 415 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	hidemonpic
# 416 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox MCRoom_EventScript_Snivy_Text_3
MCRoom_EventScript_Tepig_1:
# 418 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmessage
	return

MCRoom_EventScript_Tepig_2:
# 391 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	givemon SPECIES_TEPIG, 5, ITEM_ORAN_BERRY
# 392 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq MCRoom_EventScript_Tepig_5
# 401 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq MCRoom_EventScript_Tepig_6
# 410 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	hidemonpic
# 411 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox MCRoom_EventScript_Snivy_Text_2
	goto MCRoom_EventScript_Tepig_1

MCRoom_EventScript_Tepig_5:
# 393 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 394 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox MCRoom_EventScript_Tepig_Text_0
# 395 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	removeobject 1
# 396 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setflag FLAG_STARTER_TEPIG
# 397 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 398 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setvar VAR_STARTER_MON, 1
# 399 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	call NicknamePartyMon
	goto MCRoom_EventScript_Tepig_1

MCRoom_EventScript_Tepig_6:
# 402 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 403 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox MCRoom_EventScript_Tepig_Text_0
# 404 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	removeobject 1
# 405 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setflag FLAG_STARTER_TEPIG
# 406 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 407 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	call NicknameBoxMon
	goto MCRoom_EventScript_Tepig_1


MCRoom_EventScript_Oshawott::
# 424 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	showmonpic SPECIES_OSHAWOTT, 10, 3
# 425 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox MCRoom_EventScript_Snivy_Text_0, MSGBOX_YESNO
# 426 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq MCRoom_EventScript_Oshawott_2
# 451 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	hidemonpic
# 452 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox MCRoom_EventScript_Snivy_Text_3
MCRoom_EventScript_Oshawott_1:
# 454 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmessage
	return

MCRoom_EventScript_Oshawott_2:
# 427 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	givemon SPECIES_OSHAWOTT, 5, ITEM_ORAN_BERRY
# 428 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq MCRoom_EventScript_Oshawott_5
# 437 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq MCRoom_EventScript_Oshawott_6
# 446 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	hidemonpic
# 447 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox MCRoom_EventScript_Snivy_Text_2
	goto MCRoom_EventScript_Oshawott_1

MCRoom_EventScript_Oshawott_5:
# 429 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 430 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox MCRoom_EventScript_Oshawott_Text_0
# 431 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	removeobject 2
# 432 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setflag FLAG_STARTER_OSHAWOTT
# 433 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 434 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setvar VAR_STARTER_MON, 2
# 435 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	call NicknamePartyMon
	goto MCRoom_EventScript_Oshawott_1

MCRoom_EventScript_Oshawott_6:
# 438 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 439 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox MCRoom_EventScript_Oshawott_Text_0
# 440 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	removeobject 2
# 441 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setflag FLAG_STARTER_OSHAWOTT
# 442 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 443 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	call NicknameBoxMon
	goto MCRoom_EventScript_Oshawott_1


NicknamePartyMon::
# 460 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox NicknamePartyMon_Text_0, MSGBOX_YESNO
# 461 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitbuttonpress
# 462 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	hidemonpic
# 463 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknamePartyMon_1
	return

NicknamePartyMon_1:
# 464 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 465 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	return


NicknameBoxMon::
# 471 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox NicknamePartyMon_Text_0, MSGBOX_YESNO
# 472 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitbuttonpress
# 473 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	hidemonpic
# 474 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknameBoxMon_2
NicknameBoxMon_1:
# 477 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	call Common_EventScript_TransferredToPC
	return

NicknameBoxMon_2:
# 475 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
	goto NicknameBoxMon_1


MCRoom_EventScript_StarterBag::
# 481 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto_if_unset FLAG_STARTER_SNIVY, MCRoom_EventScript_StarterBag_3
MCRoom_EventScript_StarterBag_2:
# 486 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setflag FLAG_STARTER_BAG
	return

MCRoom_EventScript_StarterBag_1:
# 482 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setvar VAR_LITTLEROOT_START, 1
# 483 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	clearflag FLAG_STARTER_BAG
	return

MCRoom_EventScript_StarterBag_3:
# 481 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto_if_unset FLAG_STARTER_TEPIG, MCRoom_EventScript_StarterBag_5
	goto MCRoom_EventScript_StarterBag_2

MCRoom_EventScript_StarterBag_5:
# 481 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
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
	applymovement LOCALID_MC2F_CHEREN, MCRoom_EventScript_Beggining_Movement_1
# 511 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox MCRoom_EventScript_Beggining_Text_0
# 512 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmessage
# 513 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_MC2F_CHEREN, MCRoom_EventScript_Beggining_Movement_2
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
	clearflag FLAG_MC2F_BIANCA
# 521 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	showobjectat LOCALID_MC2F_BIANCA, MAP_LITTLEROOT_TOWN_BRENDANS_HOUSE_2F
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
	applymovement LOCALID_MC2F_BIANCA, MCRoom_EventScript_Beggining_Movement_0
# 529 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 530 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MCRoom_EventScript_Beggining_Movement_4
# 531 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_MC2F_CHEREN, MCRoom_EventScript_Beggining_Movement_4
# 532 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 533 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox MCRoom_EventScript_Beggining_Text_3
# 534 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmessage
# 535 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_MC2F_CHEREN, MCRoom_EventScript_Beggining_Movement_5
# 536 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 537 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox MCRoom_EventScript_Beggining_Text_4
# 539 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmessage
# 540 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, MCRoom_EventScript_Beggining_Movement_6
# 541 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_MC2F_BIANCA, MCRoom_EventScript_Beggining_Movement_7
# 542 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 543 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_MC2F_CHEREN, MCRoom_EventScript_Beggining_Movement_1
# 544 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 545 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox MCRoom_EventScript_Beggining_Text_5
# 546 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmessage
# 547 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_MC2F_BIANCA, MCRoom_EventScript_Beggining_Movement_8
# 548 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 549 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MCRoom_EventScript_Beggining_Movement_1
# 550 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 551 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox MCRoom_EventScript_Beggining_Text_6
# 552 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox MCRoom_EventScript_Beggining_Text_7
# 553 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmessage
# 554 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_MC2F_CHEREN, MCRoom_EventScript_Beggining_Movement_9
# 555 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 556 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MCRoom_EventScript_Beggining_Movement_2
# 557 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_MC2F_BIANCA, MCRoom_EventScript_Beggining_Movement_2
# 558 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 559 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox MCRoom_EventScript_Beggining_Text_8
# 561 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmessage
# 563 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	special RemoveCameraObject
# 564 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setvar VAR_LITTLEROOT_START, 2
# 565 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	releaseall
	return

MCRoom_EventScript_Beggining_2:
# 502 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MCRoom_EventScript_DoNotLeaveBeggining_Movement_0
	goto MCRoom_EventScript_Beggining_1


# 568 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
Movement_MCStart1:
# 569 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 569 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 570 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_down
# 570 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_down
	step_end

MCRoom_EventScript_ChooseNow::
# 574 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	lockall
# 575 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox MCRoom_EventScript_ChooseNow_Text_0
# 576 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MCRoom_EventScript_Beggining_Movement_0
# 577 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 578 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	releaseall
	return


MCRoom_EventScript_BattleBianca::
# 582 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	lockall
# 584 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_MC2F_BIANCA, MCRoom_EventScript_BattleBianca_Movement_0
# 585 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 586 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox MCRoom_EventScript_BattleBianca_Text_0
# 587 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_MC2F_CHEREN, MCRoom_EventScript_BattleBianca_Movement_1
# 588 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 589 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	compare VAR_STARTER_MON, 0
	goto_if_eq MCRoom_EventScript_BattleBianca_2
# 593 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	compare VAR_STARTER_MON, 1
	goto_if_eq MCRoom_EventScript_BattleBianca_3
# 597 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	compare VAR_STARTER_MON, 2
	goto_if_eq MCRoom_EventScript_BattleBianca_4
MCRoom_EventScript_BattleBianca_1:
# 601 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmessage
# 602 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 603 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	removeobject 15
# 604 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_MC2F_CHEREN, MCRoom_EventScript_BattleBianca_Movement_2
# 605 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MCRoom_EventScript_BattleBianca_Movement_3
# 606 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_MC2F_BIANCA, MCRoom_EventScript_BattleBianca_Movement_4
# 607 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 608 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 609 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox MCRoom_EventScript_BattleBianca_Text_4
# 610 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox MCRoom_EventScript_BattleBianca_Text_5
# 613 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmessage
# 614 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_MC2F_BIANCA, Common_Movement_Delay48
# 615 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 617 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	switch VAR_STARTER_MON
# 618 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	case 0, MCRoom_EventScript_BattleBianca_10
# 620 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	case 1, MCRoom_EventScript_BattleBianca_11
# 622 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	case 2, MCRoom_EventScript_BattleBianca_12
MCRoom_EventScript_BattleBianca_8:
# 625 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	releaseall
	end

MCRoom_EventScript_BattleBianca_2:
# 590 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox MCRoom_EventScript_BattleBianca_Text_1
	goto MCRoom_EventScript_BattleBianca_1

MCRoom_EventScript_BattleBianca_3:
# 594 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox MCRoom_EventScript_BattleBianca_Text_2
	goto MCRoom_EventScript_BattleBianca_1

MCRoom_EventScript_BattleBianca_4:
# 598 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox MCRoom_EventScript_BattleBianca_Text_3
	goto MCRoom_EventScript_BattleBianca_1

MCRoom_EventScript_BattleBianca_10:
# 619 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	call MCRoom_EventScript_StartBiancaBattleSnivy
	goto MCRoom_EventScript_BattleBianca_8

MCRoom_EventScript_BattleBianca_11:
# 621 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	call MCRoom_EventScript_StartBiancaBattleTepig
	goto MCRoom_EventScript_BattleBianca_8

MCRoom_EventScript_BattleBianca_12:
# 623 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	call MCRoom_EventScript_StartBiancaBattleOshawott
	goto MCRoom_EventScript_BattleBianca_8


MCRoom_EventScript_BattleCheren::
# 629 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	lockall
# 630 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox MCRoom_EventScript_BattleCheren_Text_0
# 631 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmessage
# 632 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox MCRoom_EventScript_BattleCheren_Text_1
# 633 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox MCRoom_EventScript_BattleCheren_Text_2
# 634 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmessage
# 635 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_MC2F_BIANCA, MCRoom_EventScript_BattleCheren_Movement_0
# 636 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 637 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay 60
# 638 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_MC2F_BIANCA, MCRoom_EventScript_Beggining_Movement_4
# 639 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 640 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay 60
# 641 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_MC2F_BIANCA, MCRoom_EventScript_Beggining_Movement_2
# 642 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 643 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay 60
# 644 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox MCRoom_EventScript_BattleCheren_Text_3
# 645 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_MC2F_BIANCA, MCRoom_EventScript_Beggining_Movement_1
# 646 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 647 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox MCRoom_EventScript_BattleCheren_Text_4
# 649 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmessage
# 650 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_MC2F_CHEREN, MCRoom_EventScript_BattleCheren_Movement_1
# 651 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 652 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox MCRoom_EventScript_BattleCheren_Text_5
# 654 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	playfanfare MUS_HEAL
# 655 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitfanfare
# 656 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_MC2F_CHEREN, MCRoom_EventScript_Beggining_Movement_1
# 657 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 658 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox MCRoom_EventScript_BattleCheren_Text_6
# 660 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	playfanfare MUS_HEAL
# 661 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitfanfare
# 662 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	special HealPlayerParty
# 664 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_MC2F_BIANCA, Common_Movement_ExclamationMark
# 665 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 666 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_MC2F_BIANCA, MCRoom_EventScript_BattleCheren_Movement_2
# 667 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 668 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MCRoom_EventScript_Beggining_Movement_4
# 669 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_MC2F_CHEREN, MCRoom_EventScript_Beggining_Movement_4
# 670 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 671 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox MCRoom_EventScript_BattleCheren_Text_7
# 673 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox MCRoom_EventScript_BattleCheren_Text_8
# 675 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmessage
# 676 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_MC2F_CHEREN, MCRoom_EventScript_BattleCheren_Movement_3
# 677 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 678 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MCRoom_EventScript_BattleCheren_Movement_0
# 679 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 680 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox MCRoom_EventScript_BattleCheren_Text_9
# 681 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmessage
# 682 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_MC2F_CHEREN, Common_Movement_Delay48
# 683 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 685 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	switch VAR_STARTER_MON
# 686 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	case 0, MCRoom_EventScript_BattleCheren_3
# 687 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	case 1, MCRoom_EventScript_BattleCheren_4
# 688 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	case 2, MCRoom_EventScript_BattleCheren_5
MCRoom_EventScript_BattleCheren_1:
# 690 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	releaseall
	end

MCRoom_EventScript_BattleCheren_3:
# 686 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	call MCRoom_EventScript_StartCherenBattleSnivy
	goto MCRoom_EventScript_BattleCheren_1

MCRoom_EventScript_BattleCheren_4:
# 687 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	call MCRoom_EventScript_StartCherenBattleTepig
	goto MCRoom_EventScript_BattleCheren_1

MCRoom_EventScript_BattleCheren_5:
# 688 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	call MCRoom_EventScript_StartCherenBattleOshawott
	goto MCRoom_EventScript_BattleCheren_1


MCRoom_EventScript_PostBattles::
# 694 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	lockall
# 695 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox MCRoom_EventScript_PostBattles_Text_0
# 697 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmessage
# 698 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_MC2F_CHEREN, MCRoom_EventScript_PostBattles_Movement_0
# 699 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox MCRoom_EventScript_PostBattles_Text_1
# 700 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmessage
# 701 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	removeobject LOCALID_MC2F_CHEREN
# 702 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_MC2F_BIANCA, MCRoom_EventScript_PostBattles_Movement_1
# 703 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 704 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	removeobject LOCALID_MC2F_BIANCA
# 706 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setflag FLAG_MC2F_BIANCA
# 707 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setflag FLAG_MC2F_CHEREN
# 708 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	releaseall
	end


MCRoom_EventScript_StartBiancaBattleSnivy::
# 713 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_ROUTE_103_TREECKO, MCRoom_Text_BiancaDefeated
# 714 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	call MCRoom_EventScript_BattleCheren
	end


MCRoom_EventScript_StartBiancaBattleTepig::
# 718 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_ROUTE_103_TORCHIC, MCRoom_Text_BiancaDefeated
# 719 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	call MCRoom_EventScript_BattleCheren
	end


MCRoom_EventScript_StartBiancaBattleOshawott::
# 723 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_ROUTE_103_MUDKIP, MCRoom_Text_BiancaDefeated
# 724 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	call MCRoom_EventScript_BattleCheren
	end


MCRoom_EventScript_StartCherenBattleSnivy::
# 733 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_ROUTE_103_TREECKO, MCRoom_Text_CherenDefeated
# 734 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	call MCRoom_EventScript_PostBattles
	end


MCRoom_EventScript_StartCherenBattleTepig::
# 738 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_ROUTE_103_TORCHIC, MCRoom_Text_CherenDefeated
# 739 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	call MCRoom_EventScript_PostBattles
	end


MCRoom_EventScript_StartCherenBattleOshawott::
# 743 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_ROUTE_103_MUDKIP, MCRoom_Text_CherenDefeated
# 744 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
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

# 554 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
MCRoom_EventScript_Beggining_Movement_9:
# 554 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_down
# 554 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 554 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	face_down
	step_end

# 584 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
MCRoom_EventScript_BattleBianca_Movement_0:
# 584 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_down
# 584 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	face_right
	step_end

# 587 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
MCRoom_EventScript_BattleBianca_Movement_1:
# 587 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_down
# 587 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	face_left
	step_end

# 604 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
MCRoom_EventScript_BattleBianca_Movement_2:
# 604 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_fast_up
# 604 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_fast_up
# 604 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_fast_up
# 604 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_fast_up
# 604 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	face_down
	step_end

# 605 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
MCRoom_EventScript_BattleBianca_Movement_3:
# 605 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_fast_up
# 605 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_fast_up
# 605 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	face_right
	step_end

# 606 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
MCRoom_EventScript_BattleBianca_Movement_4:
# 606 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_fast_right
# 606 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_fast_right
# 606 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_fast_right
# 606 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_fast_up
# 606 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_fast_up
# 606 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	face_left
	step_end

# 635 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
MCRoom_EventScript_BattleCheren_Movement_0:
# 635 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	face_right
	step_end

# 650 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
MCRoom_EventScript_BattleCheren_Movement_1:
# 650 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_down
# 650 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_down
# 650 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	face_right
	step_end

# 666 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
MCRoom_EventScript_BattleCheren_Movement_2:
# 666 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_up
# 666 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_up
# 666 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 666 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	face_down
	step_end

# 676 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
MCRoom_EventScript_BattleCheren_Movement_3:
# 676 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_right
# 676 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	face_left
	step_end

# 698 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
MCRoom_EventScript_PostBattles_Movement_0:
# 698 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_right
# 698 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_right
# 698 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_up
# 698 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_up
# 698 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_up
	step_end

# 702 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
MCRoom_EventScript_PostBattles_Movement_1:
# 702 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_right
# 702 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_right
# 702 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_right
# 702 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
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
# 353 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Are you sure?$"

MCRoom_EventScript_Snivy_Text_1:
# 358 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Received Snivy$"

MCRoom_EventScript_Snivy_Text_2:
# 375 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "You have no more room for this Pokemon.$"

MCRoom_EventScript_Snivy_Text_3:
# 380 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "You did not choose the Pokemon$"

MCRoom_EventScript_Tepig_Text_0:
# 394 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Received Tepig$"

MCRoom_EventScript_Oshawott_Text_0:
# 430 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Received Oshawott$"

NicknamePartyMon_Text_0:
# 460 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Do you want to give it a nickname?$"

MCRoom_EventScript_DoNotLeaveBeggining_Text_0:
# 492 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Cheren: Come here {PLAYER}!$"

MCRoom_EventScript_Beggining_Text_0:
# 511 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Cheren: {PLAYER}!\pI heard from Professor Juniper.\nWe can have a Pokémon?$"

MCRoom_EventScript_Beggining_Text_1:
# 515 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "...\n...$"

MCRoom_EventScript_Beggining_Text_2:
# 516 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Cheren: What's keeping Bianca?$"

MCRoom_EventScript_Beggining_Text_3:
# 533 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Bianca: Am I a little late again?\nSo-oooo-orry!$"

MCRoom_EventScript_Beggining_Text_4:
# 537 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Cheren: Bianca...\lI've known for ten years that you\nhave no sense of time, but...seriously...\pToday's  the day we can get a\nPokémon from Professor Juniper!$"

MCRoom_EventScript_Beggining_Text_5:
# 545 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Bianca: I know. Sorry, {PLAYER}.\nSorry, Cheren.$"

MCRoom_EventScript_Beggining_Text_6:
# 551 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Bianca: So, where are the Pokémon?\pThey were delivered to {PLAYER}'s\nhouse, so {PLAYER} gets first pick.$"

MCRoom_EventScript_Beggining_Text_7:
# 552 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Cheren: Naturally.$"

MCRoom_EventScript_Beggining_Text_8:
# 559 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "The Pokémon are waiting for us\ninside that bag.\pOK, {PLAYER}, you go first and take\na peek at the bag.\p I want to meet the Pokémon right now!$"

MCRoom_EventScript_ChooseNow_Text_0:
# 575 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Hey, don't leave.\nWe're waiting.$"

MCRoom_EventScript_BattleBianca_Text_0:
# 586 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Bianca: OK, I'll take this Pokémon!\nCheren, that one's yours!$"

MCRoom_EventScript_BattleBianca_Text_1:
# 590 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Cheren: Hey, how come you get to pick\nout my Pokémon?\pOh, never mind. I wanted Tepig\nfrom the start,  anyway.$"

MCRoom_EventScript_BattleBianca_Text_2:
# 594 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Cheren: Hey, how come you get to pick\nout my Pokémon?\pOh, never mind. I wanted Oshawott\nfrom the start,  anyway.$"

MCRoom_EventScript_BattleBianca_Text_3:
# 598 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Cheren: Hey, how come you get to pick\nout my Pokémon?\pOh, never mind. I wanted Snivy\nfrom the start,  anyway.$"

MCRoom_EventScript_BattleBianca_Text_4:
# 609 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Bianca: Everyone has chosen a Pokémon!\n...So that's that!\pHey, I know!\nLet's have a Pokémon battle!$"

MCRoom_EventScript_BattleBianca_Text_5:
# 610 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Cheren: Honestly, Bianca...\pEven though they're still weak Pokémon,\nyou shouldn't have Pokémon battles\l inside a house.\pDon't be a worrywart!\nThese little ones are weak, like you said.\pWe have to let them  battle so they'll get\nstronger. It's settled, {PLAYER}!\lGet ready for a Pokémon Battle!$"

MCRoom_EventScript_BattleCheren_Text_0:
# 630 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Bianca: Wow...\p{PLAYER}, you're gonna be\nan awesome Trainer someday, I can tell!\pNo doubt!$"

MCRoom_EventScript_BattleCheren_Text_1:
# 632 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Cheren: Uh...\n...$"

MCRoom_EventScript_BattleCheren_Text_2:
# 633 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Bianca: Would you take a look around?$"

MCRoom_EventScript_BattleCheren_Text_3:
# 644 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Bianca: Wh-whoa!\nWhat happened?!$"

MCRoom_EventScript_BattleCheren_Text_4:
# 647 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Wow! Pokémon are amaaaaazing!!\nSo little, but so strong!\pI'm so glad that I get to have a Pokémon!\p ...Oh.\nUm, sorry about your room, {PLAYER}.$"

MCRoom_EventScript_BattleCheren_Text_5:
# 652 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Cheren: You...are completely hopeless.\pHere!\nI'll restore your Pokémon for you.$"

MCRoom_EventScript_BattleCheren_Text_6:
# 658 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "{PLAYER}'s Pokémon needs\nto be fixed up, too.$"

MCRoom_EventScript_BattleCheren_Text_7:
# 671 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Bianca: Hey, Cheren!\nHow about you battle, too?\pWith all you know, I'm sure you can\nbattle without  turning the room into\la disaster area like I did!$"

MCRoom_EventScript_BattleCheren_Text_8:
# 673 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Cheren: I believe you're right!\pIt'll be no problem for me to keep\nthe room from getting any mesier.\p Besides, it's not fair if you two are the\nonly ones who get to have fun battling!$"

MCRoom_EventScript_BattleCheren_Text_9:
# 680 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "It's decided. You'll be my opponent...\nin our first Pokémon battle!\pLet's see what you can do, ...!$"

MCRoom_EventScript_PostBattles_Text_0:
# 695 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Cheren: I made a strange blunder\nin my first battle, but\lthis feeling I have...\l...I'm finally a Trainer .\pBut first, we'd better go apologize to\nyour mother about this messed-up room.$"

MCRoom_EventScript_PostBattles_Text_1:
# 699 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Bianca: Oh!\nI'd better come, too!$"

MCRoom_Text_BiancaDefeated::
# 728 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "The Pokémon on both sides did their best!$"

MCRoom_Text_CherenDefeated::
# 748 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Ah! So that's a Pokémon battle!$"
