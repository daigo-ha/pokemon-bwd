# 1 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"

# 2 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
PalletTown_PlayersHouse_1F_Frlg_MapScripts::
# 3 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	.byte 0
# 4 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"

# 5 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
PalletTown_PlayersHouse_1F_EventScript_Mom::
# 6 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	lock
# 7 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	faceplayer
# 8 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	goto_if_set FLAG_BEAT_RIVAL_IN_OAKS_LAB, PalletTown_PlayersHouse_1F_EventScript_MomHeal
# 9 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	checkplayergender
# 10 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	call_if_eq VAR_RESULT, MALE, PalletTown_PlayersHouse_1F_EventScript_MomOakLookingForYouMale
# 11 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, PalletTown_PlayersHouse_1F_EventScript_MomOakLookingForYouFemale
# 12 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	closemessage
# 13 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	applymovement LOCALID_PLAYERS_HOUSE_1F_MOM, Common_Movement_FaceOriginalDirection
# 14 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	waitmovement 0
# 15 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	release
# 16 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	end
# 17 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"

# 18 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
PalletTown_PlayersHouse_1F_EventScript_MomOakLookingForYouMale::
# 19 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	msgbox PalletTown_PlayersHouse_1F_Text_AllBoysLeaveOakLookingForYou
# 20 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	return
# 21 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"

# 22 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
PalletTown_PlayersHouse_1F_EventScript_MomOakLookingForYouFemale::
# 23 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	msgbox PalletTown_PlayersHouse_1F_Text_AllGirlsLeaveOakLookingForYou
# 24 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	return
# 25 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"

# 26 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
PalletTown_PlayersHouse_1F_EventScript_MomHeal::
# 27 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	msgbox PalletTown_PlayersHouse_1F_Text_YouShouldTakeQuickRest
# 28 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	closemessage
# 29 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 30 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	msgbox PalletTown_PlayersHouse_1F_Text_LookingGreatTakeCare
# 31 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	release
# 32 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	end
# 33 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"

# 34 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
@ Displays special text if interacted with from side or back (which are normally inaccessible)
# 35 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
PalletTown_PlayersHouse_1F_EventScript_TV::
# 36 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	lockall
# 37 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	goto_if_eq VAR_FACING, DIR_NORTH, PalletTown_PlayersHouse_1F_EventScript_TVScreen
# 38 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	msgbox PalletTown_PlayersHouse_1F_Text_OopsWrongSide
# 39 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	releaseall
# 40 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	end
# 41 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"

# 42 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
PalletTown_PlayersHouse_1F_EventScript_TVScreen::
# 43 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	checkplayergender
# 44 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	call_if_eq VAR_RESULT, MALE, PalletTown_PlayersHouse_1F_EventScript_TVScreenMale
# 45 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, PalletTown_PlayersHouse_1F_EventScript_TVScreenFemale
# 46 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	releaseall
# 47 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	end
# 48 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"

# 49 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
PalletTown_PlayersHouse_1F_EventScript_TVScreenMale::
# 50 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	msgbox PalletTown_PlayersHouse_1F_Text_MovieOnTVFourBoysOnRailroad
# 51 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	return
# 52 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"

# 53 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
PalletTown_PlayersHouse_1F_EventScript_TVScreenFemale::
# 54 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	msgbox PalletTown_PlayersHouse_1F_Text_MovieOnTVGirlOnBrickRoad
# 55 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	return
# 56 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"

# 57 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
PalletTown_PlayersHouse_1F_Text_AllBoysLeaveOakLookingForYou::
# 58 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	.string "MOM: …Right.\n"
# 59 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	.string "All boys leave home someday.\l"
# 60 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	.string "It said so on TV.\p"
# 61 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	.string "Oh, yes. PROF. OAK, next door, was\n"
# 62 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	.string "looking for you.$"
# 63 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"

# 64 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
PalletTown_PlayersHouse_1F_Text_AllGirlsLeaveOakLookingForYou::
# 65 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	.string "MOM: …Right.\n"
# 66 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	.string "All girls dream of traveling.\l"
# 67 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	.string "It said so on TV.\p"
# 68 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	.string "Oh, yes. PROF. OAK, next door, was\n"
# 69 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	.string "looking for you.$"
# 70 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"

# 71 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
PalletTown_PlayersHouse_1F_Text_YouShouldTakeQuickRest::
# 72 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	.string "MOM: {PLAYER}!\n"
# 73 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	.string "You should take a quick rest.$"
# 74 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"

# 75 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
PalletTown_PlayersHouse_1F_Text_LookingGreatTakeCare::
# 76 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	.string "MOM: Oh, good! You and your\n"
# 77 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	.string "POKéMON are looking great.\l"
# 78 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	.string "Take care now!$"
# 79 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"

# 80 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
PalletTown_PlayersHouse_1F_Text_MovieOnTVFourBoysOnRailroad::
# 81 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	.string "There's a movie on TV.\n"
# 82 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	.string "Four boys are walking on railroad\l"
# 83 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	.string "tracks.\p"
# 84 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	.string "…I better go, too.$"
# 85 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"

# 86 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
PalletTown_PlayersHouse_1F_Text_MovieOnTVGirlOnBrickRoad::
# 87 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	.string "There's a movie on TV.\n"
# 88 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	.string "A girl with her hair in pigtails is\l"
# 89 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	.string "walking up a brick road.\p"
# 90 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	.string "…I better go, too.$"
# 91 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"

# 92 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
PalletTown_PlayersHouse_1F_Text_OopsWrongSide::
# 93 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	.string "Oops, wrong side…$"

MC1F_EventScript_MomApologize::
# 97 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	lockall
# 98 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	special SpawnCameraObject
# 99 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, MC1F_EventScript_MomApologize_Movement_0
# 100 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	waitmovement 0
# 101 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	msgbox MC1F_EventScript_MomApologize_Text_0
# 102 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	applymovement LOCALID_MC1F_BIANCA, MC1F_EventScript_MomApologize_Movement_1
# 103 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	waitmovement 0
# 104 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	msgbox MC1F_EventScript_MomApologize_Text_1
# 105 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	applymovement LOCALID_MC1F_CHEREN, MC1F_EventScript_MomApologize_Movement_2
# 106 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	waitmovement 0
# 107 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	msgbox MC1F_EventScript_MomApologize_Text_2
# 108 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	applymovement LOCALID_MC1F_BIANCA, Common_Movement_ExclamationMark
# 109 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	waitmovement 0
# 110 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	delay 30
# 111 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	applymovement LOCALID_MC1F_BIANCA, MC1F_EventScript_MomApologize_Movement_3
# 112 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	waitmovement 0
# 113 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	msgbox MC1F_EventScript_MomApologize_Text_3
# 114 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	applymovement LOCALID_MC1F_BIANCA, MC1F_EventScript_MomApologize_Movement_4
# 115 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	waitmovement 0
# 116 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	msgbox MC1F_EventScript_MomApologize_Text_4
# 117 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	closemessage
# 118 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	applymovement LOCALID_MC1F_CHEREN, MC1F_EventScript_MomApologize_Movement_5
# 119 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	waitmovement 0
# 120 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	applymovement LOCALID_MC1F_CHEREN, MC1F_EventScript_MomApologize_Movement_6
# 121 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	applymovement LOCALID_MC1F_BIANCA, MC1F_EventScript_MomApologize_Movement_7
# 122 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	waitmovement 0
# 123 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	removeobject LOCALID_MC1F_CHEREN
# 124 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	removeobject LOCALID_MC1F_BIANCA
# 125 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	setflag FLAG_MC1F_CHEREN
# 126 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	setflag FLAG_MC1F_BIANCA
# 128 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, MC1F_EventScript_MomApologize_Movement_8
# 129 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	waitmovement 0
# 130 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	delay 30
# 131 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	applymovement LOCALID_PLAYERS_HOUSE_1F_MOM, MC1F_EventScript_MomApologize_Movement_9
# 132 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	waitmovement 0
# 133 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	delay 30
# 134 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MC1F_EventScript_MomApologize_Movement_4
# 135 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	waitmovement 0
# 136 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	delay 30
# 137 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	msgbox MC1F_EventScript_MomApologize_Text_5
# 138 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	applymovement LOCALID_PLAYERS_HOUSE_1F_MOM, MC1F_EventScript_MomApologize_Movement_10
# 139 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	waitmovement 0
# 140 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	msgbox MC1F_EventScript_MomApologize_Text_6
# 141 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	applymovement LOCALID_PLAYERS_HOUSE_1F_MOM, MC1F_EventScript_MomApologize_Movement_11
# 142 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	waitmovement 0
# 143 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	msgbox MC1F_EventScript_MomApologize_Text_7
# 144 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	closemessage
# 145 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	fadescreen FADE_TO_BLACK
# 146 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	playfanfare MUS_HEAL
# 147 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	waitfanfare
# 148 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	special HealPlayerParty
# 149 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 150 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	msgbox MC1F_EventScript_MomApologize_Text_8
# 151 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	closemessage
# 152 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	playfanfare MUS_RG_OBTAIN_KEY_ITEM
# 153 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	waitfanfare
# 154 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	msgbox MC1F_EventScript_MomApologize_Text_9
# 156 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	special RemoveCameraObject
# 157 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	setvar VAR_LITTLEROOT_START, 4
# 158 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	releaseall
	return


MC1F_EventScript_Mom::
# 162 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	lockall
# 163 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	compare VAR_LITTLEROOT_START, 5
	goto_if_lt MC1F_EventScript_Mom_2
# 166 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	msgbox MC1F_EventScript_Mom_Text_0
MC1F_EventScript_Mom_1:
# 168 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	closemessage
# 169 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	releaseall
	return

MC1F_EventScript_Mom_2:
# 164 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	msgbox MC1F_Text_GoThankProfJuniper
	goto MC1F_EventScript_Mom_1


# 99 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
MC1F_EventScript_MomApologize_Movement_0:
# 99 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	walk_slow_diag_southeast
# 99 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	walk_slow_diag_southeast
	step_end

# 102 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
MC1F_EventScript_MomApologize_Movement_1:
# 102 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	walk_slow_right
	step_end

# 105 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
MC1F_EventScript_MomApologize_Movement_2:
# 105 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	walk_left
# 105 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	face_up
	step_end

# 111 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
MC1F_EventScript_MomApologize_Movement_3:
# 111 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	face_up
	step_end

# 114 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
MC1F_EventScript_MomApologize_Movement_4:
# 114 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	face_right
	step_end

# 118 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
MC1F_EventScript_MomApologize_Movement_5:
# 118 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	walk_right
	step_end

# 120 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
MC1F_EventScript_MomApologize_Movement_6:
# 120 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	walk_down
# 120 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	walk_down
# 120 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	walk_right
# 120 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	walk_right
# 120 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	walk_down
# 120 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	walk_down
	step_end

# 121 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
MC1F_EventScript_MomApologize_Movement_7:
# 121 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	walk_down
# 121 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	walk_down
# 121 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	walk_down
# 121 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	walk_right
# 121 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	walk_right
# 121 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	walk_down
# 121 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	walk_down
	step_end

# 128 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
MC1F_EventScript_MomApologize_Movement_8:
# 128 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	walk_slow_diag_northwest
# 128 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	walk_slow_diag_northwest
	step_end

# 131 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
MC1F_EventScript_MomApologize_Movement_9:
# 131 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	walk_left
# 131 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	walk_left
# 131 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	walk_up
# 131 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	walk_up
# 131 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	walk_up
# 131 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	face_left
	step_end

# 138 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
MC1F_EventScript_MomApologize_Movement_10:
# 138 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	face_down
	step_end

# 141 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
MC1F_EventScript_MomApologize_Movement_11:
# 141 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	face_left
	step_end

MC1F_EventScript_MomApologize_Text_0:
# 101 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	.string "Cheren: I'm very sorry about all the\ntrouble, ma'am.$"

MC1F_EventScript_MomApologize_Text_1:
# 104 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	.string "Bianca: Well, um...\nWe can clean up...\pMom: Cleaning up?\nNo worries. I'll take care of it later.\pShouldn't you be on your way to\nmeet Professor Juniper?\pCheren: Yes, thank you!\nPlease excuse us.\pCome on.\nLet's go thank Professor Juniper.$"

MC1F_EventScript_MomApologize_Text_2:
# 107 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	.string "Cheren: I'll be waiting in front of\nthe Pokémon Research Lab.$"

MC1F_EventScript_MomApologize_Text_3:
# 113 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	.string "Bianca: Oh! Wait!\nI've gotta go home first.$"

MC1F_EventScript_MomApologize_Text_4:
# 116 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	.string "Thanks for having us over!$"

MC1F_EventScript_MomApologize_Text_5:
# 137 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	.string "Mom: My, My, {PLAYER}.\pPokémon battles are so lively,\naren't they?\pI could hear the Pokémon's\ncries clear down here!$"

MC1F_EventScript_MomApologize_Text_6:
# 140 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	.string "Hm. That sure reminded me of\nmy first Pokémon battle!$"

MC1F_EventScript_MomApologize_Text_7:
# 143 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	.string "Oh, and you know? After a battle,\nyou need to rest your Pokémon!$"

MC1F_EventScript_MomApologize_Text_8:
# 150 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	.string "Your Pokémon is looking great!\pNow, if you're going out,\ndon't forget your 'cross-transceiver'!$"

MC1F_EventScript_MomApologize_Text_9:
# 154 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	.string "You're going to thank the\nprofessor too, right?\lBetter get going, honey!$"

MC1F_EventScript_Mom_Text_0:
# 166 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	.string "Mom: Hi, {PLAYER}!$"

MC1F_Text_GoThankProfJuniper::
# 172 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	.string "You're going to thank the\nprofessor too, right?\lBetter get going, honey!$"
