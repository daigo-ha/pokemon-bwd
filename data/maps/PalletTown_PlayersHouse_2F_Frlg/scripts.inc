PalletTown_PlayersHouse_2F_Frlg_MapScripts::
# 2 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, PalletTown_PlayersHouse_2F_OnTransition
# 3 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, PalletTown_PlayersHouse_2F_OnWarp
# 4 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, PalletTown_PlayersHouse_2F_Frlg_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

PalletTown_PlayersHouse_2F_Frlg_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 5 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	map_script_2 VAR_LITTLEROOT_START, 1, MCRoom_EventScript_Beggining
	.2byte 0


PalletTown_PlayersHouse_2F_OnTransition::
# 10 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	compare VAR_MAP_SCENE_PALLET_TOWN_PLAYERS_HOUSE_2F, 0
	goto_if_eq PalletTown_PlayersHouse_2F_OnTransition_2
PalletTown_PlayersHouse_2F_OnTransition_1:
# 13 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	goto_if_unset FLAG_SYS_POKEMON_GET, PalletTown_PlayersHouse_2F_OnTransition_5
PalletTown_PlayersHouse_2F_OnTransition_4:
# 16 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	goto_if_unset FLAG_STARTER_BAG, PalletTown_PlayersHouse_2F_OnTransition_8
PalletTown_PlayersHouse_2F_OnTransition_7:
# 19 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	removeobject LOCALID_MC2F_BIANCA
# 20 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	setflag FLAG_MC2F_BIANCA
	return

PalletTown_PlayersHouse_2F_OnTransition_2:
# 11 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	call PalletTown_PlayersHouse_2F_EventScript_SetRespawn
	goto PalletTown_PlayersHouse_2F_OnTransition_1

PalletTown_PlayersHouse_2F_OnTransition_5:
# 14 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	setvar VAR_LITTLEROOT_START, 1
	goto PalletTown_PlayersHouse_2F_OnTransition_4

PalletTown_PlayersHouse_2F_OnTransition_8:
# 17 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	call MCRoom_EventScript_StarterBag
	goto PalletTown_PlayersHouse_2F_OnTransition_7


PalletTown_PlayersHouse_2F_EventScript_SetRespawn::
# 23 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	setrespawn HEAL_LOCATION_PALLET_TOWN
	return


PalletTown_PlayersHouse_2F_OnWarp::
# 26 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	compare VAR_MAP_SCENE_PALLET_TOWN_PLAYERS_HOUSE_2F, 0
	goto_if_eq PalletTown_PlayersHouse_2F_OnWarp_1
	return

PalletTown_PlayersHouse_2F_OnWarp_1:
# 27 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	call PalletTown_PlayersHouse_2F_FirstWarpIn
	return


PalletTown_PlayersHouse_2F_FirstWarpIn::
# 31 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_PLAYERS_HOUSE_2F, 1
	return


PalletTown_PlayersHouse_2F_EventScript_NES::
# 33 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	msgbox PalletTown_PlayersHouse_2F_EventScript_NES_Text_0, MSGBOX_SIGN
	return


PalletTown_PlayersHouse_2F_EventScript_Sign::
# 35 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	msgbox PalletTown_PlayersHouse_2F_EventScript_Sign_Text_0, MSGBOX_SIGN
	return


MCRoom_EventScript_Starter::
MCRoom_EventScript_Starter_2:
# 39 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	goto_if_unset FLAG_SYS_POKEMON_GET, MCRoom_EventScript_Starter_3
# 63 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	closemessage
# 67 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	setvar VAR_LITTLEROOT_START, 3
# 68 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	call MCRoom_EventScript_BattleBianca
# 69 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	releaseall
	end

MCRoom_EventScript_Starter_3:
# 40 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	lockall
# 41 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	msgbox MCRoom_EventScript_Starter_Text_0
# 42 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	message MCRoom_EventScript_Starter_Text_1
# 43 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	waitmessage
# 44 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	multichoice 20, 5, MULTI_STARTER_CHOICE, 0
# 45 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	closemessage
# 46 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq MCRoom_EventScript_Starter_5
# 50 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq MCRoom_EventScript_Starter_6
# 54 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq MCRoom_EventScript_Starter_7
# 59 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	msgbox MCRoom_EventScript_Starter_Text_2
# 60 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	waitmessage
	goto MCRoom_EventScript_Starter_2

MCRoom_EventScript_Starter_5:
# 47 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	call StarterFade
# 48 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	call MCRoom_EventScript_Snivy
	goto MCRoom_EventScript_Starter_2

MCRoom_EventScript_Starter_6:
# 51 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	call StarterFade
# 52 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	call MCRoom_EventScript_Tepig
	goto MCRoom_EventScript_Starter_2

MCRoom_EventScript_Starter_7:
# 55 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	call StarterFade
# 56 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	call MCRoom_EventScript_Oshawott
	goto MCRoom_EventScript_Starter_2


StarterFade::
# 74 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	fadescreen FADE_TO_BLACK
# 75 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	delay 20
# 76 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	fadescreen FADE_FROM_BLACK
	return


MCRoom_EventScript_Snivy::
# 82 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	showmonpic SPECIES_SNIVY, 10, 3
# 83 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	msgbox MCRoom_EventScript_Snivy_Text_0, MSGBOX_YESNO
# 84 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq MCRoom_EventScript_Snivy_2
# 109 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	hidemonpic
# 110 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	msgbox MCRoom_EventScript_Snivy_Text_3
MCRoom_EventScript_Snivy_1:
# 112 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	waitmessage
	return

MCRoom_EventScript_Snivy_2:
# 85 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	givemon SPECIES_SNIVY, 5, ITEM_ORAN_BERRY
# 86 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq MCRoom_EventScript_Snivy_5
# 95 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq MCRoom_EventScript_Snivy_6
# 104 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	hidemonpic
# 105 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	msgbox MCRoom_EventScript_Snivy_Text_2
	goto MCRoom_EventScript_Snivy_1

MCRoom_EventScript_Snivy_5:
# 87 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 88 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	msgbox MCRoom_EventScript_Snivy_Text_1
# 89 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	removeobject 0
# 90 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	setflag FLAG_STARTER_SNIVY
# 91 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 92 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	setvar VAR_STARTER_MON_FRLG, 0
# 93 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	call NicknamePartyMon
	goto MCRoom_EventScript_Snivy_1

MCRoom_EventScript_Snivy_6:
# 96 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 97 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	msgbox MCRoom_EventScript_Snivy_Text_1
# 98 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	removeobject 0
# 99 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	setflag FLAG_STARTER_SNIVY
# 100 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 101 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	call NicknameBoxMon
	goto MCRoom_EventScript_Snivy_1


MCRoom_EventScript_Tepig::
# 118 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	showmonpic SPECIES_TEPIG, 10, 3
# 119 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	msgbox MCRoom_EventScript_Snivy_Text_0, MSGBOX_YESNO
# 120 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq MCRoom_EventScript_Tepig_2
# 145 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	hidemonpic
# 146 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	msgbox MCRoom_EventScript_Snivy_Text_3
MCRoom_EventScript_Tepig_1:
# 148 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	waitmessage
	return

MCRoom_EventScript_Tepig_2:
# 121 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	givemon SPECIES_TEPIG, 5, ITEM_ORAN_BERRY
# 122 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq MCRoom_EventScript_Tepig_5
# 131 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq MCRoom_EventScript_Tepig_6
# 140 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	hidemonpic
# 141 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	msgbox MCRoom_EventScript_Snivy_Text_2
	goto MCRoom_EventScript_Tepig_1

MCRoom_EventScript_Tepig_5:
# 123 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 124 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	msgbox MCRoom_EventScript_Tepig_Text_0
# 125 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	removeobject 1
# 126 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	setflag FLAG_STARTER_TEPIG
# 127 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 128 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	setvar VAR_STARTER_MON_FRLG, 1
# 129 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	call NicknamePartyMon
	goto MCRoom_EventScript_Tepig_1

MCRoom_EventScript_Tepig_6:
# 132 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 133 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	msgbox MCRoom_EventScript_Tepig_Text_0
# 134 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	removeobject 1
# 135 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	setflag FLAG_STARTER_TEPIG
# 136 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 137 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	call NicknameBoxMon
	goto MCRoom_EventScript_Tepig_1


MCRoom_EventScript_Oshawott::
# 154 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	showmonpic SPECIES_OSHAWOTT, 10, 3
# 155 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	msgbox MCRoom_EventScript_Snivy_Text_0, MSGBOX_YESNO
# 156 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq MCRoom_EventScript_Oshawott_2
# 181 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	hidemonpic
# 182 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	msgbox MCRoom_EventScript_Snivy_Text_3
MCRoom_EventScript_Oshawott_1:
# 184 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	waitmessage
	return

MCRoom_EventScript_Oshawott_2:
# 157 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	givemon SPECIES_OSHAWOTT, 5, ITEM_ORAN_BERRY
# 158 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq MCRoom_EventScript_Oshawott_5
# 167 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq MCRoom_EventScript_Oshawott_6
# 176 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	hidemonpic
# 177 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	msgbox MCRoom_EventScript_Snivy_Text_2
	goto MCRoom_EventScript_Oshawott_1

MCRoom_EventScript_Oshawott_5:
# 159 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 160 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	msgbox MCRoom_EventScript_Oshawott_Text_0
# 161 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	removeobject 2
# 162 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	setflag FLAG_STARTER_OSHAWOTT
# 163 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 164 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	setvar VAR_STARTER_MON_FRLG, 2
# 165 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	call NicknamePartyMon
	goto MCRoom_EventScript_Oshawott_1

MCRoom_EventScript_Oshawott_6:
# 168 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 169 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	msgbox MCRoom_EventScript_Oshawott_Text_0
# 170 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	removeobject 2
# 171 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	setflag FLAG_STARTER_OSHAWOTT
# 172 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 173 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	call NicknameBoxMon
	goto MCRoom_EventScript_Oshawott_1


NicknamePartyMon::
# 190 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	msgbox NicknamePartyMon_Text_0, MSGBOX_YESNO
# 191 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	hidemonpic
# 192 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknamePartyMon_1
	return

NicknamePartyMon_1:
# 193 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 194 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	return


NicknameBoxMon::
# 200 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	msgbox NicknamePartyMon_Text_0, MSGBOX_YESNO
# 201 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	waitbuttonpress
# 202 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	hidemonpic
# 203 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknameBoxMon_2
NicknameBoxMon_1:
# 206 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	call Common_EventScript_TransferredToPC
	return

NicknameBoxMon_2:
# 204 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
	goto NicknameBoxMon_1


MCRoom_EventScript_StarterBag::
# 210 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	goto_if_unset FLAG_STARTER_SNIVY, MCRoom_EventScript_StarterBag_3
MCRoom_EventScript_StarterBag_2:
# 215 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	setflag FLAG_STARTER_BAG
	return

MCRoom_EventScript_StarterBag_1:
# 211 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	setvar VAR_LITTLEROOT_START, 1
# 212 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	clearflag FLAG_STARTER_BAG
	return

MCRoom_EventScript_StarterBag_3:
# 210 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	goto_if_unset FLAG_STARTER_TEPIG, MCRoom_EventScript_StarterBag_5
	goto MCRoom_EventScript_StarterBag_2

MCRoom_EventScript_StarterBag_5:
# 210 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	goto_if_unset FLAG_STARTER_OSHAWOTT, MCRoom_EventScript_StarterBag_1
	goto MCRoom_EventScript_StarterBag_2


MCRoom_EventScript_DoNotLeaveBeggining::
# 220 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	lockall
# 221 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	msgbox MCRoom_EventScript_DoNotLeaveBeggining_Text_0
# 222 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MCRoom_EventScript_DoNotLeaveBeggining_Movement_0
# 223 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	waitmovement 0
# 224 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	releaseall
	return


MCRoom_EventScript_Beggining::
# 228 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	lockall
# 230 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	applymovement LOCALID_MC2F_CHEREN, MCRoom_EventScript_Beggining_Movement_0
# 231 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	waitmovement 0
# 232 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	applymovement LOCALID_MC2F_CHEREN, MCRoom_EventScript_Beggining_Movement_1
# 233 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	msgbox MCRoom_EventScript_Beggining_Text_0
# 234 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	waitmessage
# 235 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	applymovement LOCALID_MC2F_CHEREN, MCRoom_EventScript_Beggining_Movement_2
# 236 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	waitmovement 0
# 237 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	msgbox MCRoom_EventScript_Beggining_Text_1
# 238 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	msgbox MCRoom_EventScript_Beggining_Text_2
# 239 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	waitmessage
# 240 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	closemessage
# 241 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	delay 90
# 242 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	clearflag FLAG_MC2F_BIANCA
# 243 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	showobjectat LOCALID_MC2F_BIANCA, MAP_LITTLEROOT_TOWN_BRENDANS_HOUSE_2F
# 244 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	special SpawnCameraObject
# 245 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, MCRoom_EventScript_Beggining_Movement_3
# 246 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	waitmovement 0
# 247 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	opendoor 8, 1
# 248 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	waitdooranim
# 249 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	delay 60
# 250 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	applymovement LOCALID_MC2F_BIANCA, MCRoom_EventScript_DoNotLeaveBeggining_Movement_0
# 251 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	waitmovement 0
# 252 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MCRoom_EventScript_Beggining_Movement_4
# 253 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	applymovement LOCALID_MC2F_CHEREN, MCRoom_EventScript_Beggining_Movement_4
# 254 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	waitmovement 0
# 255 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	msgbox MCRoom_EventScript_Beggining_Text_3
# 256 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	waitmessage
# 257 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	closemessage
# 258 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	applymovement LOCALID_MC2F_CHEREN, MCRoom_EventScript_Beggining_Movement_5
# 259 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	waitmovement 0
# 260 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	msgbox MCRoom_EventScript_Beggining_Text_4
# 262 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	waitmessage
# 263 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	closemessage
# 264 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, MCRoom_EventScript_Beggining_Movement_6
# 265 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	applymovement LOCALID_MC2F_BIANCA, MCRoom_EventScript_Beggining_Movement_7
# 266 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	waitmovement 0
# 267 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	applymovement LOCALID_MC2F_CHEREN, MCRoom_EventScript_Beggining_Movement_1
# 268 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	waitmovement 0
# 269 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	msgbox MCRoom_EventScript_Beggining_Text_5
# 270 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	waitmessage
# 271 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	closemessage
# 272 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	applymovement LOCALID_MC2F_BIANCA, MCRoom_EventScript_Beggining_Movement_8
# 273 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	waitmovement 0
# 274 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MCRoom_EventScript_Beggining_Movement_1
# 275 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	waitmovement 0
# 276 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	msgbox MCRoom_EventScript_Beggining_Text_6
# 277 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	waitmessage
# 278 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	closemessage
# 279 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	msgbox MCRoom_EventScript_Beggining_Text_7
# 280 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	waitmessage
# 281 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	closemessage
# 282 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	applymovement LOCALID_MC2F_CHEREN, MCRoom_EventScript_Beggining_Movement_9
# 283 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	waitmovement 0
# 284 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MCRoom_EventScript_Beggining_Movement_2
# 285 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	applymovement LOCALID_MC2F_BIANCA, MCRoom_EventScript_Beggining_Movement_2
# 286 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	waitmovement 0
# 287 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	msgbox MCRoom_EventScript_Beggining_Text_8
# 289 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	waitmessage
# 291 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	special RemoveCameraObject
# 292 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	setvar VAR_LITTLEROOT_START, 2
# 293 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	setflag FLAG_SYS_B_DASH
# 294 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	releaseall
	return


# 297 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
Movement_MCStart1:
# 298 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	walk_left
# 298 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	walk_left
# 299 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	walk_down
# 299 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	walk_down
	step_end

MCRoom_EventScript_ChooseNow::
# 303 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	lockall
# 304 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	msgbox MCRoom_EventScript_ChooseNow_Text_0
# 305 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MCRoom_EventScript_Beggining_Movement_0
# 306 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	waitmovement 0
# 307 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	releaseall
	return


MCRoom_EventScript_BattleBianca::
# 311 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	lockall
# 313 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	applymovement LOCALID_MC2F_BIANCA, MCRoom_EventScript_BattleBianca_Movement_0
# 314 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	waitmovement 0
# 315 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	msgbox MCRoom_EventScript_BattleBianca_Text_0
# 316 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	closemessage
# 317 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	applymovement LOCALID_MC2F_CHEREN, MCRoom_EventScript_BattleBianca_Movement_1
# 318 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	waitmovement 0
# 319 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	compare VAR_STARTER_MON_FRLG, 0
	goto_if_eq MCRoom_EventScript_BattleBianca_2
# 323 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	compare VAR_STARTER_MON_FRLG, 1
	goto_if_eq MCRoom_EventScript_BattleBianca_3
# 327 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	compare VAR_STARTER_MON_FRLG, 2
	goto_if_eq MCRoom_EventScript_BattleBianca_4
MCRoom_EventScript_BattleBianca_1:
# 331 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	waitmessage
# 332 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	closemessage
# 333 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	fadescreen FADE_TO_BLACK
# 334 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	removeobject 15
# 335 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	applymovement LOCALID_MC2F_CHEREN, MCRoom_EventScript_BattleBianca_Movement_2
# 336 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MCRoom_EventScript_BattleBianca_Movement_3
# 337 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	applymovement LOCALID_MC2F_BIANCA, MCRoom_EventScript_BattleBianca_Movement_4
# 338 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	waitmovement 0
# 339 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 340 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	msgbox MCRoom_EventScript_BattleBianca_Text_4
# 341 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	waitmessage
# 342 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	closemessage
# 343 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	msgbox MCRoom_EventScript_BattleBianca_Text_5
# 346 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	waitmessage
# 347 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	closemessage
# 348 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	applymovement LOCALID_MC2F_BIANCA, Common_Movement_Delay48
# 349 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	waitmovement 0
# 351 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	switch VAR_STARTER_MON_FRLG
# 352 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	case 0, MCRoom_EventScript_BattleBianca_10
# 354 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	case 1, MCRoom_EventScript_BattleBianca_11
# 356 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	case 2, MCRoom_EventScript_BattleBianca_12
MCRoom_EventScript_BattleBianca_8:
# 359 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	removeobject 3
# 360 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	releaseall
	end

MCRoom_EventScript_BattleBianca_2:
# 320 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	msgbox MCRoom_EventScript_BattleBianca_Text_1
	goto MCRoom_EventScript_BattleBianca_1

MCRoom_EventScript_BattleBianca_3:
# 324 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	msgbox MCRoom_EventScript_BattleBianca_Text_2
	goto MCRoom_EventScript_BattleBianca_1

MCRoom_EventScript_BattleBianca_4:
# 328 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	msgbox MCRoom_EventScript_BattleBianca_Text_3
	goto MCRoom_EventScript_BattleBianca_1

MCRoom_EventScript_BattleBianca_10:
# 353 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	call MCRoom_EventScript_StartBiancaBattleSnivy
	goto MCRoom_EventScript_BattleBianca_8

MCRoom_EventScript_BattleBianca_11:
# 355 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	call MCRoom_EventScript_StartBiancaBattleTepig
	goto MCRoom_EventScript_BattleBianca_8

MCRoom_EventScript_BattleBianca_12:
# 357 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	call MCRoom_EventScript_StartBiancaBattleOshawott
	goto MCRoom_EventScript_BattleBianca_8


MCRoom_EventScript_BattleCheren::
# 364 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	lockall
# 365 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	msgbox MCRoom_EventScript_BattleCheren_Text_0
# 366 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	waitmessage
# 367 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	closemessage
# 368 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	msgbox MCRoom_EventScript_BattleCheren_Text_1
# 369 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	waitmessage
# 370 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	closemessage
# 371 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	applymovement LOCALID_MC2F_BIANCA, MCRoom_EventScript_BattleCheren_Movement_0
# 372 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	waitmovement 0
# 373 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	delay 60
# 374 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	applymovement LOCALID_MC2F_BIANCA, MCRoom_EventScript_Beggining_Movement_4
# 375 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	waitmovement 0
# 376 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	delay 60
# 377 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	applymovement LOCALID_MC2F_BIANCA, MCRoom_EventScript_Beggining_Movement_2
# 378 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	waitmovement 0
# 379 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	delay 60
# 380 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	msgbox MCRoom_EventScript_BattleCheren_Text_2
# 381 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	applymovement LOCALID_MC2F_BIANCA, MCRoom_EventScript_Beggining_Movement_1
# 382 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	waitmovement 0
# 383 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	msgbox MCRoom_EventScript_BattleCheren_Text_3
# 385 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	waitmessage
# 386 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	closemessage
# 387 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	applymovement LOCALID_MC2F_CHEREN, MCRoom_EventScript_BattleCheren_Movement_1
# 388 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	waitmovement 0
# 389 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	msgbox MCRoom_EventScript_BattleCheren_Text_4
# 390 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	closemessage
# 392 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	playfanfare MUS_HEAL
# 393 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	waitfanfare
# 394 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	applymovement LOCALID_MC2F_CHEREN, MCRoom_EventScript_Beggining_Movement_1
# 395 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	waitmovement 0
# 397 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	msgbox MCRoom_EventScript_BattleCheren_Text_5
# 398 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	closemessage
# 400 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	playfanfare MUS_HEAL
# 401 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	waitfanfare
# 402 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	special HealPlayerParty
# 404 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	applymovement LOCALID_MC2F_BIANCA, Common_Movement_ExclamationMark
# 405 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	waitmovement 0
# 406 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	delay 60
# 407 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	applymovement LOCALID_MC2F_BIANCA, MCRoom_EventScript_BattleCheren_Movement_2
# 408 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	waitmovement 0
# 409 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MCRoom_EventScript_Beggining_Movement_4
# 410 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	applymovement LOCALID_MC2F_CHEREN, MCRoom_EventScript_Beggining_Movement_4
# 411 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	waitmovement 0
# 412 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	msgbox MCRoom_EventScript_BattleCheren_Text_6
# 414 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	waitmessage
# 415 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	closemessage
# 416 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	msgbox MCRoom_EventScript_BattleCheren_Text_7
# 418 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	waitmessage
# 419 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	closemessage
# 420 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	applymovement LOCALID_MC2F_CHEREN, MCRoom_EventScript_BattleCheren_Movement_3
# 421 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	waitmovement 0
# 422 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MCRoom_EventScript_BattleCheren_Movement_0
# 423 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	waitmovement 0
# 424 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	switch VAR_STARTER_MON_FRLG
# 425 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	case 0, MCRoom_EventScript_BattleCheren_3
# 427 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	case 1, MCRoom_EventScript_BattleCheren_4
# 429 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	case 2, MCRoom_EventScript_BattleCheren_5
MCRoom_EventScript_BattleCheren_1:
# 432 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	waitmessage
# 433 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	closemessage
# 434 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	applymovement LOCALID_MC2F_CHEREN, Common_Movement_Delay48
# 435 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	waitmovement 0
# 437 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	switch VAR_STARTER_MON_FRLG
# 438 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	case 0, MCRoom_EventScript_BattleCheren_8
# 439 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	case 1, MCRoom_EventScript_BattleCheren_9
# 440 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	case 2, MCRoom_EventScript_BattleCheren_10
MCRoom_EventScript_BattleCheren_6:
# 442 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	removeobject 3
# 443 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	releaseall
	end

MCRoom_EventScript_BattleCheren_3:
# 426 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	msgbox MCRoom_EventScript_BattleCheren_Text_8
	goto MCRoom_EventScript_BattleCheren_1

MCRoom_EventScript_BattleCheren_4:
# 428 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	msgbox MCRoom_EventScript_BattleCheren_Text_9
	goto MCRoom_EventScript_BattleCheren_1

MCRoom_EventScript_BattleCheren_5:
# 430 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	msgbox MCRoom_EventScript_BattleCheren_Text_10
	goto MCRoom_EventScript_BattleCheren_1

MCRoom_EventScript_BattleCheren_8:
# 438 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	call MCRoom_EventScript_StartCherenBattleSnivy
	goto MCRoom_EventScript_BattleCheren_6

MCRoom_EventScript_BattleCheren_9:
# 439 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	call MCRoom_EventScript_StartCherenBattleTepig
	goto MCRoom_EventScript_BattleCheren_6

MCRoom_EventScript_BattleCheren_10:
# 440 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	call MCRoom_EventScript_StartCherenBattleOshawott
	goto MCRoom_EventScript_BattleCheren_6


MCRoom_EventScript_PostBattles::
# 447 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	lockall
# 448 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	msgbox MCRoom_EventScript_PostBattles_Text_0
# 450 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	waitmessage
# 451 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	closemessage
# 452 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	applymovement LOCALID_MC2F_CHEREN, MCRoom_EventScript_PostBattles_Movement_0
# 453 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	msgbox MCRoom_EventScript_PostBattles_Text_1
# 454 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	waitmessage
# 455 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	closemessage
# 456 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	removeobject LOCALID_MC2F_CHEREN
# 457 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	applymovement LOCALID_MC2F_BIANCA, MCRoom_EventScript_PostBattles_Movement_1
# 458 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	waitmovement 0
# 459 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	removeobject LOCALID_MC2F_BIANCA
# 461 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	setflag FLAG_MC2F_BIANCA
# 462 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	setflag FLAG_MC2F_CHEREN
# 463 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	releaseall
	end


MCRoom_EventScript_StartBiancaBattleSnivy::
# 468 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	trainerbattle_no_intro TRAINER_BIANCA_PLAYER_2F_SNIVY, MCRoom_Text_BiancaDefeated
# 469 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	call MCRoom_EventScript_BattleCheren
	end


MCRoom_EventScript_StartBiancaBattleTepig::
# 473 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	trainerbattle_no_intro TRAINER_BIANCA_PLAYER_2F_TEPIG, MCRoom_Text_BiancaDefeated
# 474 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	call MCRoom_EventScript_BattleCheren
	end


MCRoom_EventScript_StartBiancaBattleOshawott::
# 478 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	trainerbattle_no_intro TRAINER_BIANCA_PLAYER_2F_OSHAWOTT, MCRoom_Text_BiancaDefeated
# 479 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	call MCRoom_EventScript_BattleCheren
	end


MCRoom_EventScript_StartCherenBattleSnivy::
# 488 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	trainerbattle_no_intro TRAINER_CHEREN_PLAYER_2F_SNIVY, MCRoom_Text_CherenDefeated
# 489 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	call MCRoom_EventScript_PostBattles
	end


MCRoom_EventScript_StartCherenBattleTepig::
# 493 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	trainerbattle_no_intro TRAINER_CHEREN_PLAYER_2F_TEPIG, MCRoom_Text_CherenDefeated
# 494 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	call MCRoom_EventScript_PostBattles
	end


MCRoom_EventScript_StartCherenBattleOshawott::
# 498 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	trainerbattle_no_intro TRAINER_CHEREN_PLAYER_2F_OSHAWOTT, MCRoom_Text_CherenDefeated
# 499 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	call MCRoom_EventScript_PostBattles
	end


MCRoom_EventScript_Cheren::
# 516 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	lock
# 517 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	faceplayer
# 518 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	compare VAR_LITTLEROOT_START, 2
	goto_if_eq MCRoom_EventScript_Cheren_2
# 522 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	msgbox MCRoom_EventScript_Cheren_Text_0
MCRoom_EventScript_Cheren_1:
# 524 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	release
	return

MCRoom_EventScript_Cheren_2:
# 519 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	msgbox MCRoom_Text_CherenWaitingForStarterChoice
	goto MCRoom_EventScript_Cheren_1


MCRoom_EventScript_Bianca::
# 528 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	lock
# 529 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	faceplayer
# 530 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	compare VAR_LITTLEROOT_START, 2
	goto_if_eq MCRoom_EventScript_Bianca_2
# 534 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	msgbox MCRoom_EventScript_Bianca_Text_0
MCRoom_EventScript_Bianca_1:
# 536 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	release
	return

MCRoom_EventScript_Bianca_2:
# 531 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	msgbox MCRoom_Text_BiancaWaitingForStarterChoice
	goto MCRoom_EventScript_Bianca_1


# 222 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
MCRoom_EventScript_DoNotLeaveBeggining_Movement_0:
# 222 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	walk_left
	step_end

# 230 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
MCRoom_EventScript_Beggining_Movement_0:
# 230 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	walk_down
	step_end

# 232 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
MCRoom_EventScript_Beggining_Movement_1:
# 232 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	face_left
	step_end

# 235 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
MCRoom_EventScript_Beggining_Movement_2:
# 235 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	face_down
	step_end

# 245 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
MCRoom_EventScript_Beggining_Movement_3:
# 245 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	walk_diag_northeast
# 245 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	walk_diag_northeast
# 245 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	walk_right
	step_end

# 252 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
MCRoom_EventScript_Beggining_Movement_4:
# 252 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	face_up
	step_end

# 258 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
MCRoom_EventScript_Beggining_Movement_5:
# 258 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	walk_right
# 258 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	walk_up
	step_end

# 264 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
MCRoom_EventScript_Beggining_Movement_6:
# 264 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	walk_diag_southwest
# 264 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	walk_diag_southwest
# 264 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	walk_left
	step_end

# 265 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
MCRoom_EventScript_Beggining_Movement_7:
# 265 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	walk_down
# 265 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	walk_left
# 265 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	walk_left
# 265 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	walk_left
# 265 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	walk_left
# 265 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	face_down
	step_end

# 272 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
MCRoom_EventScript_Beggining_Movement_8:
# 272 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	walk_left
# 272 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	walk_down
# 272 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	walk_down
# 272 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	face_right
	step_end

# 282 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
MCRoom_EventScript_Beggining_Movement_9:
# 282 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	walk_down
# 282 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	walk_left
# 282 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	face_down
	step_end

# 313 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
MCRoom_EventScript_BattleBianca_Movement_0:
# 313 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	walk_down
# 313 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	face_right
	step_end

# 317 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
MCRoom_EventScript_BattleBianca_Movement_1:
# 317 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	walk_down
# 317 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	face_left
	step_end

# 335 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
MCRoom_EventScript_BattleBianca_Movement_2:
# 335 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	walk_fast_up
# 335 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	walk_fast_up
# 335 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	walk_fast_up
# 335 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	walk_fast_up
# 335 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	face_down
	step_end

# 336 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
MCRoom_EventScript_BattleBianca_Movement_3:
# 336 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	walk_fast_up
# 336 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	walk_fast_up
# 336 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	face_right
	step_end

# 337 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
MCRoom_EventScript_BattleBianca_Movement_4:
# 337 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	walk_fast_right
# 337 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	walk_fast_right
# 337 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	walk_fast_right
# 337 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	walk_fast_up
# 337 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	walk_fast_up
# 337 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	face_left
	step_end

# 371 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
MCRoom_EventScript_BattleCheren_Movement_0:
# 371 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	face_right
	step_end

# 387 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
MCRoom_EventScript_BattleCheren_Movement_1:
# 387 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	walk_down
# 387 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	walk_down
# 387 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	face_right
	step_end

# 407 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
MCRoom_EventScript_BattleCheren_Movement_2:
# 407 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	walk_up
# 407 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	walk_up
# 407 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	walk_left
# 407 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	face_down
	step_end

# 420 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
MCRoom_EventScript_BattleCheren_Movement_3:
# 420 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	walk_right
# 420 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	face_left
	step_end

# 452 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
MCRoom_EventScript_PostBattles_Movement_0:
# 452 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	walk_right
# 452 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	walk_right
# 452 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	walk_up
# 452 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	walk_up
# 452 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	walk_right
	step_end

# 457 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
MCRoom_EventScript_PostBattles_Movement_1:
# 457 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	walk_right
# 457 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	walk_right
# 457 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	walk_right
# 457 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	walk_right
	step_end

PalletTown_PlayersHouse_2F_EventScript_NES_Text_0:
# 33 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	.string "{PLAYER} played with the NES.\p…Okay!\nIt's time to go!$"

PalletTown_PlayersHouse_2F_EventScript_Sign_Text_0:
# 35 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	.string "It's a posted notice…\pIf you're confused, ask for HELP!\nPress the L or R Button!$"

MCRoom_EventScript_Starter_Text_0:
# 41 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	.string "{PLAYER} opened the bag!$"

MCRoom_EventScript_Starter_Text_1:
# 42 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	.string "Which starter are you choosing?$"

MCRoom_EventScript_Starter_Text_2:
# 59 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	.string "Cheren: Go on. We are waiting...$"

MCRoom_EventScript_Snivy_Text_0:
# 83 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	.string "Are you sure?$"

MCRoom_EventScript_Snivy_Text_1:
# 88 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	.string "Received Snivy$"

MCRoom_EventScript_Snivy_Text_2:
# 105 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	.string "You have no more room for this Pokemon.$"

MCRoom_EventScript_Snivy_Text_3:
# 110 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	.string "You did not choose the Pokemon$"

MCRoom_EventScript_Tepig_Text_0:
# 124 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	.string "Received Tepig$"

MCRoom_EventScript_Oshawott_Text_0:
# 160 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	.string "Received Oshawott$"

NicknamePartyMon_Text_0:
# 190 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	.string "Do you want to give it a nickname?$"

MCRoom_EventScript_DoNotLeaveBeggining_Text_0:
# 221 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	.string "Cheren: Come here {PLAYER}!$"

MCRoom_EventScript_Beggining_Text_0:
# 233 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	.string "Cheren: {PLAYER}!\pI heard from Professor Juniper.\nWe can have a Pokémon?$"

MCRoom_EventScript_Beggining_Text_1:
# 237 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	.string "...\n...$"

MCRoom_EventScript_Beggining_Text_2:
# 238 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	.string "Cheren: What's keeping Bianca?$"

MCRoom_EventScript_Beggining_Text_3:
# 255 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	.string "Bianca: Am I a little late again?\nSo-oooo-orry!$"

MCRoom_EventScript_Beggining_Text_4:
# 260 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	.string "Cheren: Bianca...\lI've known for ten years that you\nhave no sense of time, but...seriously...\pToday's  the day we can get a\nPokémon from Professor Juniper!$"

MCRoom_EventScript_Beggining_Text_5:
# 269 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	.string "Bianca: I know. Sorry, {PLAYER}.\nSorry, Cheren.$"

MCRoom_EventScript_Beggining_Text_6:
# 276 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	.string "Bianca: So, where are the Pokémon?\pThey were delivered to {PLAYER}'s\nhouse, so {PLAYER} gets first pick.$"

MCRoom_EventScript_Beggining_Text_7:
# 279 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	.string "Cheren: Naturally.$"

MCRoom_EventScript_Beggining_Text_8:
# 287 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	.string "The Pokémon are waiting for us\ninside that bag.\pOK, {PLAYER}, you go first and take\na peek at the bag.\p I want to meet the Pokémon right now!$"

MCRoom_EventScript_ChooseNow_Text_0:
# 304 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	.string "Hey, don't leave.\nWe're waiting.$"

MCRoom_EventScript_BattleBianca_Text_0:
# 315 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	.string "Bianca: OK, I'll take this Pokémon!\nCheren, that one's yours!$"

MCRoom_EventScript_BattleBianca_Text_1:
# 320 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	.string "Cheren: Hey, how come you get to pick\nout my Pokémon?\pOh, never mind. I wanted Tepig\nfrom the start,  anyway.$"

MCRoom_EventScript_BattleBianca_Text_2:
# 324 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	.string "Cheren: Hey, how come you get to pick\nout my Pokémon?\pOh, never mind. I wanted Oshawott\nfrom the start,  anyway.$"

MCRoom_EventScript_BattleBianca_Text_3:
# 328 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	.string "Cheren: Hey, how come you get to pick\nout my Pokémon?\pOh, never mind. I wanted Snivy\nfrom the start,  anyway.$"

MCRoom_EventScript_BattleBianca_Text_4:
# 340 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	.string "Bianca: Everyone has chosen a Pokémon!\n...So that's that!\pHey, I know!\nLet's have a Pokémon battle!$"

MCRoom_EventScript_BattleBianca_Text_5:
# 343 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	.string "Cheren: Honestly, Bianca...\pEven though they're still weak Pokémon,\nyou shouldn't have Pokémon battles\l inside a house.\pDon't be a worrywart!\nThese little ones are weak, like you said.\pWe have to let them  battle so they'll get\nstronger. It's settled, {PLAYER}!\lGet ready for a Pokémon Battle!$"

MCRoom_EventScript_BattleCheren_Text_0:
# 365 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	.string "Bianca: Wow...\p{PLAYER}, you're gonna be\nan awesome Trainer someday, I can tell!\pNo doubt!$"

MCRoom_EventScript_BattleCheren_Text_1:
# 368 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	.string "Cheren: Uh...\n...\pBianca, Would you take a look around?$"

MCRoom_EventScript_BattleCheren_Text_2:
# 380 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	.string "Bianca: Wh-whoa!\nWhat happened?!$"

MCRoom_EventScript_BattleCheren_Text_3:
# 383 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	.string "Wow! Pokémon are amaaaaazing!!\nSo little, but so strong!\pI'm so glad that I get to have a\nPokémon!\p ...Oh.\nUm, sorry about your room, {PLAYER}.$"

MCRoom_EventScript_BattleCheren_Text_4:
# 389 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	.string "Cheren: You...are completely hopeless.\pHere!\nI'll restore your Pokémon for you.$"

MCRoom_EventScript_BattleCheren_Text_5:
# 397 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	.string "{PLAYER}'s Pokémon needs\nto be fixed up, too.$"

MCRoom_EventScript_BattleCheren_Text_6:
# 412 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	.string "Bianca: Hey, Cheren!\nHow about you battle, too?\pWith all you know, I'm sure you can\nbattle without  turning the room into\la disaster area like I did!$"

MCRoom_EventScript_BattleCheren_Text_7:
# 416 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	.string "Cheren: I believe you're right!\pIt'll be no problem for me to keep\nthe room from getting any mesier.\p Besides, it's not fair if you two are the\nonly ones who get to have fun battling!$"

MCRoom_EventScript_BattleCheren_Text_8:
# 426 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	.string "It's decided. You'll be my opponent...\nin our first Pokémon battle!\pLet's see what you can do, Tepig!$"

MCRoom_EventScript_BattleCheren_Text_9:
# 428 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	.string "It's decided. You'll be my opponent...\nin our first Pokémon battle!\pLet's see what you can do, Oshawott!$"

MCRoom_EventScript_BattleCheren_Text_10:
# 430 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	.string "It's decided. You'll be my opponent...\nin our first Pokémon battle!\pLet's see what you can do, Snivy!$"

MCRoom_EventScript_PostBattles_Text_0:
# 448 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	.string "Cheren: I made a strange blunder\nin my first battle, but\lthis feeling I have...\l...I'm finally a Trainer .\pBut first, we'd better go apologize to\nyour mother about this messed-up room.$"

MCRoom_EventScript_PostBattles_Text_1:
# 453 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	.string "Bianca: Oh!\nI'd better come, too!$"

MCRoom_EventScript_Cheren_Text_0:
# 522 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	.string "Cheren: Hi {PLAYER}!$"

MCRoom_EventScript_Bianca_Text_0:
# 534 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	.string "Bianca: Hi {PLAYER}!$"

MCRoom_Text_BiancaDefeated::
# 483 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	.string "The Pokémon on both sides did their\nbest!$"

MCRoom_Text_CherenDefeated::
# 503 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	.string "Ah! So that's a Pokémon battle!$"

MCRoom_Text_CherenWaitingForStarterChoice::
# 507 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	.string "Cheren: Would you get a move on\nand open the bag already?\pI'm sure the Pokémon are just as\nexcited to meet us!$"

MCRoom_Text_BiancaWaitingForStarterChoice::
# 511 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	.string "Bianca: Ooh!\nWhat kind of Pokémon could they be?$"
