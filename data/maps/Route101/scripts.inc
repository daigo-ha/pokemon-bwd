Route101_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route101_OnTransition
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route101_OnFrame
	.byte 0

Route101_OnTransition:
	end

Route101_OnFrame:
	map_script_2 VAR_ROUTE101_STATE, 0, Route101_EventScript_HideMapNamePopup
	.2byte 0

Route101_EventScript_HideMapNamePopup::
	setflag FLAG_HIDE_MAP_NAME_POPUP
	setvar VAR_ROUTE101_STATE, 1
	end

@ Leftover data? This command is unused.
	step_end

@ Leftover data? This command is unused.
	step_end

Route101_Movement_Unused1:
	walk_up
	walk_up
	step_end

Route101_Movement_Unused2:
	walk_up
	walk_left
	walk_up
	step_end

Route101_EventScript_Youngster::
	msgbox Route101_Text_TakeTiredPokemonToPokeCenter, MSGBOX_NPC
	end

Route101_EventScript_Boy::
	msgbox Route101_Text_WildPokemonInTallGrass, MSGBOX_NPC
	end

Route101_EventScript_RouteSign::
	msgbox Route101_Text_RouteSign, MSGBOX_SIGN
	end

// Route101_EventScript_BirchsBag::
// 	lock
// 	faceplayer
// 	setflag FLAG_SYS_POKEMON_GET
// 	setflag FLAG_RESCUED_BIRCH
// 	fadescreen FADE_TO_BLACK
// 	removeobject LOCALID_ROUTE101_ZIGZAGOON
// 	setobjectxy LOCALID_PLAYER, 6, 13
// 	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
// 	waitmovement 0
// 	special ChooseStarter
// 	waitstate
// 	applymovement LOCALID_ROUTE101_BIRCH, Route101_Movement_BirchApproachPlayer
// 	waitmovement 0
// 	msgbox Route101_Text_YouSavedMe, MSGBOX_DEFAULT
// 	special HealPlayerParty
// 	setflag FLAG_HIDE_ROUTE_101_BIRCH_ZIGZAGOON_BATTLE
// 	clearflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCHS_LAB_BIRCH
// 	setflag FLAG_HIDE_ROUTE_101_BIRCH_STARTERS_BAG
// 	setvar VAR_BIRCH_LAB_STATE, 2
// 	setvar VAR_ROUTE101_STATE, 3
// 	clearflag FLAG_HIDE_MAP_NAME_POPUP
// 	checkplayergender
// 	call_if_eq VAR_RESULT, MALE, Route101_EventScript_HideMayInBedroom
// 	call_if_eq VAR_RESULT, FEMALE, Route101_EventScript_HideBrendanInBedroom
// 	warp MAP_LITTLEROOT_TOWN_PROFESSOR_BIRCHS_LAB, 6, 5
// 	waitstate
// 	release
// 	end

Route101_EventScript_HideMayInBedroom::
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_RIVAL_BEDROOM
	return

Route101_EventScript_HideBrendanInBedroom::
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_RIVAL_BEDROOM
	return

Route101_Text_TakeTiredPokemonToPokeCenter:
	.string "If POKéMON get tired, take them to\n"
	.string "a POKéMON CENTER.\p"
	.string "There's a POKéMON CENTER in OLDALE\n"
	.string "TOWN right close by.$"

Route101_Text_WildPokemonInTallGrass:
	.string "Wild POKéMON will jump out at you in\n"
	.string "tall grass.\p"
	.string "If you want to catch POKéMON, you have\n"
	.string "to go into the tall grass and search.$"

Route101_Text_RouteSign:
	.string "ROUTE 101\n"
	.string "{UP_ARROW} OLDALE TOWN$"

