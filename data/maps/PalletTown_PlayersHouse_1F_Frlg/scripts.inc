# 1 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"

# 2 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
@ Displays special text if interacted with from side or back (which are normally inaccessible)
# 3 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
PalletTown_PlayersHouse_1F_EventScript_TV::
# 4 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	lockall
# 5 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	goto_if_eq VAR_FACING, DIR_NORTH, PalletTown_PlayersHouse_1F_EventScript_TVScreen
# 6 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	msgbox PalletTown_PlayersHouse_1F_Text_OopsWrongSide
# 7 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	releaseall
# 8 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	end
# 9 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"

# 10 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
PalletTown_PlayersHouse_1F_EventScript_TVScreen::
# 11 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	checkplayergender
# 12 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	call_if_eq VAR_RESULT, MALE, PalletTown_PlayersHouse_1F_EventScript_TVScreenMale
# 13 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, PalletTown_PlayersHouse_1F_EventScript_TVScreenFemale
# 14 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	releaseall
# 15 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	end
# 16 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"

# 17 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
PalletTown_PlayersHouse_1F_EventScript_TVScreenMale::
# 18 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	msgbox PalletTown_PlayersHouse_1F_Text_MovieOnTVFourBoysOnRailroad
# 19 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	return
# 20 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"

# 21 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
PalletTown_PlayersHouse_1F_EventScript_TVScreenFemale::
# 22 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	msgbox PalletTown_PlayersHouse_1F_Text_MovieOnTVGirlOnBrickRoad
# 23 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	return
# 24 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"

# 25 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
PalletTown_PlayersHouse_1F_Text_MovieOnTVFourBoysOnRailroad::
# 26 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	.string "There's a movie on TV.\n"
# 27 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	.string "Four boys are walking on railroad\l"
# 28 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	.string "tracks.\p"
# 29 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	.string "…I better go, too.$"
# 30 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"

# 31 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
PalletTown_PlayersHouse_1F_Text_MovieOnTVGirlOnBrickRoad::
# 32 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	.string "There's a movie on TV.\n"
# 33 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	.string "A girl with her hair in pigtails is\l"
# 34 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	.string "walking up a brick road.\p"
# 35 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	.string "…I better go, too.$"
# 36 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"

# 37 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
PalletTown_PlayersHouse_1F_Text_OopsWrongSide::
# 38 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	.string "Oops, wrong side…$"

PalletTown_PlayersHouse_1F_Frlg_MapScripts::
# 41 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, PalletTown_PlayersHouse_1F_Frlg_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

PalletTown_PlayersHouse_1F_Frlg_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 42 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	map_script_2 VAR_LITTLEROOT_START, 4, MC1F_EventScript_MomApologize
	.2byte 0


PalletTown_PlayersHouse_1F_EventScript_Mom::
# 47 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	lockall
# 48 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	faceplayer
# 49 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	releaseall
	end


MC1F_EventScript_MomApologize::
# 54 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	lockall
# 55 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	special SpawnCameraObject
# 56 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, MC1F_EventScript_MomApologize_Movement_0
# 57 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	waitmovement 0
# 58 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	msgbox MC1F_EventScript_MomApologize_Text_0
# 59 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	applymovement LOCALID_MC1F_BIANCA, MC1F_EventScript_MomApologize_Movement_1
# 60 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	waitmovement 0
# 61 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	msgbox MC1F_EventScript_MomApologize_Text_1
# 62 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	applymovement LOCALID_MC1F_CHEREN, MC1F_EventScript_MomApologize_Movement_2
# 63 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	waitmovement 0
# 64 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	msgbox MC1F_EventScript_MomApologize_Text_2
# 65 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	applymovement LOCALID_MC1F_BIANCA, Common_Movement_ExclamationMark
# 66 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	waitmovement 0
# 67 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	delay 30
# 68 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	applymovement LOCALID_MC1F_BIANCA, MC1F_EventScript_MomApologize_Movement_3
# 69 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	waitmovement 0
# 70 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	msgbox MC1F_EventScript_MomApologize_Text_3
# 71 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	applymovement LOCALID_MC1F_BIANCA, MC1F_EventScript_MomApologize_Movement_4
# 72 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	waitmovement 0
# 73 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	msgbox MC1F_EventScript_MomApologize_Text_4
# 74 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	closemessage
# 75 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	applymovement LOCALID_MC1F_CHEREN, MC1F_EventScript_MomApologize_Movement_5
# 76 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	waitmovement 0
# 77 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	applymovement LOCALID_MC1F_CHEREN, MC1F_EventScript_MomApologize_Movement_6
# 78 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	applymovement LOCALID_MC1F_BIANCA, MC1F_EventScript_MomApologize_Movement_7
# 79 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	waitmovement 0
# 80 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	removeobject LOCALID_MC1F_CHEREN
# 81 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	removeobject LOCALID_MC1F_BIANCA
# 82 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	setflag FLAG_MC1F_CHEREN
# 83 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	setflag FLAG_MC1F_BIANCA
# 85 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, MC1F_EventScript_MomApologize_Movement_8
# 86 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	waitmovement 0
# 87 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	delay 30
# 88 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	applymovement LOCALID_PLAYERS_HOUSE_1F_MOM, MC1F_EventScript_MomApologize_Movement_9
# 89 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	waitmovement 0
# 90 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	delay 30
# 91 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	msgbox MC1F_EventScript_MomApologize_Text_5
# 92 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	applymovement LOCALID_PLAYERS_HOUSE_1F_MOM, MC1F_EventScript_MomApologize_Movement_10
# 93 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	waitmovement 0
# 94 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	msgbox MC1F_EventScript_MomApologize_Text_6
# 95 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	applymovement LOCALID_PLAYERS_HOUSE_1F_MOM, MC1F_EventScript_MomApologize_Movement_11
# 96 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	waitmovement 0
# 97 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	msgbox MC1F_EventScript_MomApologize_Text_7
# 98 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	closemessage
# 99 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	fadescreen FADE_TO_BLACK
# 100 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	playfanfare MUS_HEAL
# 101 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	waitfanfare
# 102 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	special HealPlayerParty
# 103 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 104 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	msgbox MC1F_EventScript_MomApologize_Text_8
# 105 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	closemessage
# 106 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	playfanfare MUS_RG_OBTAIN_KEY_ITEM
# 107 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	waitfanfare
# 108 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	msgbox MC1F_EventScript_MomApologize_Text_9
# 110 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	special RemoveCameraObject
# 111 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	setvar VAR_LITTLEROOT_START, 5
# 112 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	releaseall
	return


MC1F_EventScript_Mom::
# 116 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	lockall
# 117 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	faceplayer
# 118 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	compare VAR_LITTLEROOT_START, 5
	goto_if_eq MC1F_EventScript_Mom_2
# 121 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	msgbox MC1F_EventScript_Mom_Text_0
MC1F_EventScript_Mom_1:
# 123 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	closemessage
# 124 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	releaseall
	return

MC1F_EventScript_Mom_2:
# 119 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	msgbox MC1F_Text_GoThankProfJuniper
	goto MC1F_EventScript_Mom_1


# 56 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
MC1F_EventScript_MomApologize_Movement_0:
# 56 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	walk_slow_diag_southeast
# 56 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	walk_slow_diag_southeast
	step_end

# 59 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
MC1F_EventScript_MomApologize_Movement_1:
# 59 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	walk_slow_right
	step_end

# 62 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
MC1F_EventScript_MomApologize_Movement_2:
# 62 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	walk_left
# 62 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	face_up
	step_end

# 68 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
MC1F_EventScript_MomApologize_Movement_3:
# 68 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	face_up
	step_end

# 71 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
MC1F_EventScript_MomApologize_Movement_4:
# 71 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	face_right
	step_end

# 75 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
MC1F_EventScript_MomApologize_Movement_5:
# 75 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	walk_right
	step_end

# 77 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
MC1F_EventScript_MomApologize_Movement_6:
# 77 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	walk_down
# 77 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	walk_down
# 77 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	walk_right
# 77 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	walk_right
# 77 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	walk_down
# 77 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	walk_down
	step_end

# 78 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
MC1F_EventScript_MomApologize_Movement_7:
# 78 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	walk_down
# 78 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	walk_down
# 78 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	walk_down
# 78 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	walk_right
# 78 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	walk_right
# 78 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	walk_down
# 78 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	walk_down
	step_end

# 85 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
MC1F_EventScript_MomApologize_Movement_8:
# 85 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	walk_slow_diag_northwest
# 85 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	walk_slow_diag_northwest
	step_end

# 88 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
MC1F_EventScript_MomApologize_Movement_9:
# 88 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	walk_left
# 88 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	walk_left
# 88 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	walk_up
# 88 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	walk_up
# 88 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	face_left
	step_end

# 92 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
MC1F_EventScript_MomApologize_Movement_10:
# 92 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	face_down
	step_end

# 95 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
MC1F_EventScript_MomApologize_Movement_11:
# 95 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	face_left
	step_end

MC1F_EventScript_MomApologize_Text_0:
# 58 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	.string "Cheren: I'm very sorry about all the\ntrouble, ma'am.$"

MC1F_EventScript_MomApologize_Text_1:
# 61 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	.string "Bianca: Well, um...\nWe can clean up...\pMom: Cleaning up?\nNo worries. I'll take care of it later.\pShouldn't you be on your way to\nmeet Professor Juniper?\pCheren: Yes, thank you!\nPlease excuse us.\pCome on.\nLet's go thank Professor Juniper.$"

MC1F_EventScript_MomApologize_Text_2:
# 64 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	.string "Cheren: I'll be waiting in front of\nthe Pokémon Research Lab.$"

MC1F_EventScript_MomApologize_Text_3:
# 70 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	.string "Bianca: Oh! Wait!\nI've gotta go home first.$"

MC1F_EventScript_MomApologize_Text_4:
# 73 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	.string "Thanks for having us over!$"

MC1F_EventScript_MomApologize_Text_5:
# 91 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	.string "Mom: My, My, {PLAYER}.\pPokémon battles are so lively,\naren't they?\pI could hear the Pokémon's\ncries clear down here!$"

MC1F_EventScript_MomApologize_Text_6:
# 94 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	.string "Hm. That sure reminded me of\nmy first Pokémon battle!$"

MC1F_EventScript_MomApologize_Text_7:
# 97 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	.string "Oh, and you know? After a battle,\nyou need to rest your Pokémon!$"

MC1F_EventScript_MomApologize_Text_8:
# 104 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	.string "Your Pokémon is looking great!\pNow, if you're going out,\ndon't forget your 'cross-transceiver'!$"

MC1F_EventScript_MomApologize_Text_9:
# 108 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	.string "You're going to thank the\nprofessor too, right?\lBetter get going, honey!$"

MC1F_EventScript_Mom_Text_0:
# 121 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	.string "Mom: Hi, {PLAYER}!$"

MC1F_Text_GoThankProfJuniper::
# 127 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	.string "You're going to thank the\nprofessor too, right?\lBetter get going, honey!$"
