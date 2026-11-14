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
	compare VAR_LITTLEROOT_START, 4
	goto_if_eq MCRoom_EventScript_Starter_6
# 70 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	setvar VAR_LITTLEROOT_START, 3
# 71 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	call MCRoom_EventScript_BattleBianca
# 72 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	releaseall
MCRoom_EventScript_Starter_5:
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
	goto_if_eq MCRoom_EventScript_Starter_9
# 50 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq MCRoom_EventScript_Starter_10
# 54 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq MCRoom_EventScript_Starter_11
# 59 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	msgbox MCRoom_EventScript_Starter_Text_2
# 60 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	waitmessage
	goto MCRoom_EventScript_Starter_2

MCRoom_EventScript_Starter_6:
# 68 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	releaseall
	goto MCRoom_EventScript_Starter_5

MCRoom_EventScript_Starter_9:
# 47 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	call StarterFade
# 48 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	call MCRoom_EventScript_Snivy
	goto MCRoom_EventScript_Starter_2

MCRoom_EventScript_Starter_10:
# 51 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	call StarterFade
# 52 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	call MCRoom_EventScript_Tepig
	goto MCRoom_EventScript_Starter_2

MCRoom_EventScript_Starter_11:
# 55 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	call StarterFade
# 56 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	call MCRoom_EventScript_Oshawott
	goto MCRoom_EventScript_Starter_2


StarterFade::
# 78 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	fadescreen FADE_TO_BLACK
# 79 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	delay 20
# 80 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	fadescreen FADE_FROM_BLACK
	return


MCRoom_EventScript_Snivy::
# 86 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	showmonpic SPECIES_SNIVY, 10, 3
# 87 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	msgbox MCRoom_EventScript_Snivy_Text_0, MSGBOX_YESNO
# 88 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq MCRoom_EventScript_Snivy_2
# 113 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	hidemonpic
# 114 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	msgbox MCRoom_EventScript_Snivy_Text_3
MCRoom_EventScript_Snivy_1:
# 116 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	waitmessage
	return

MCRoom_EventScript_Snivy_2:
# 89 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	givemon SPECIES_SNIVY, 5, ITEM_ORAN_BERRY
# 90 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq MCRoom_EventScript_Snivy_5
# 99 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq MCRoom_EventScript_Snivy_6
# 108 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	hidemonpic
# 109 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	msgbox MCRoom_EventScript_Snivy_Text_2
	goto MCRoom_EventScript_Snivy_1

MCRoom_EventScript_Snivy_5:
# 91 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 92 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	msgbox MCRoom_EventScript_Snivy_Text_1
# 93 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	removeobject 0
# 94 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	setflag FLAG_STARTER_SNIVY
# 95 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 96 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	setvar VAR_STARTER_MON_FRLG, 0
# 97 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	call NicknamePartyMon
	goto MCRoom_EventScript_Snivy_1

MCRoom_EventScript_Snivy_6:
# 100 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 101 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	msgbox MCRoom_EventScript_Snivy_Text_1
# 102 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	removeobject 0
# 103 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	setflag FLAG_STARTER_SNIVY
# 104 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 105 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	call NicknameBoxMon
	goto MCRoom_EventScript_Snivy_1


MCRoom_EventScript_Tepig::
# 122 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	showmonpic SPECIES_TEPIG, 10, 3
# 123 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	msgbox MCRoom_EventScript_Snivy_Text_0, MSGBOX_YESNO
# 124 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq MCRoom_EventScript_Tepig_2
# 149 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	hidemonpic
# 150 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	msgbox MCRoom_EventScript_Snivy_Text_3
MCRoom_EventScript_Tepig_1:
# 152 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	waitmessage
	return

MCRoom_EventScript_Tepig_2:
# 125 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	givemon SPECIES_TEPIG, 5, ITEM_ORAN_BERRY
# 126 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq MCRoom_EventScript_Tepig_5
# 135 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq MCRoom_EventScript_Tepig_6
# 144 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	hidemonpic
# 145 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	msgbox MCRoom_EventScript_Snivy_Text_2
	goto MCRoom_EventScript_Tepig_1

MCRoom_EventScript_Tepig_5:
# 127 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 128 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	msgbox MCRoom_EventScript_Tepig_Text_0
# 129 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	removeobject 1
# 130 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	setflag FLAG_STARTER_TEPIG
# 131 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 132 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	setvar VAR_STARTER_MON_FRLG, 1
# 133 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	call NicknamePartyMon
	goto MCRoom_EventScript_Tepig_1

MCRoom_EventScript_Tepig_6:
# 136 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 137 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	msgbox MCRoom_EventScript_Tepig_Text_0
# 138 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	removeobject 1
# 139 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	setflag FLAG_STARTER_TEPIG
# 140 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 141 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	call NicknameBoxMon
	goto MCRoom_EventScript_Tepig_1


MCRoom_EventScript_Oshawott::
# 158 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	showmonpic SPECIES_OSHAWOTT, 10, 3
# 159 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	msgbox MCRoom_EventScript_Snivy_Text_0, MSGBOX_YESNO
# 160 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq MCRoom_EventScript_Oshawott_2
# 185 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	hidemonpic
# 186 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	msgbox MCRoom_EventScript_Snivy_Text_3
MCRoom_EventScript_Oshawott_1:
# 188 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	waitmessage
	return

MCRoom_EventScript_Oshawott_2:
# 161 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	givemon SPECIES_OSHAWOTT, 5, ITEM_ORAN_BERRY
# 162 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq MCRoom_EventScript_Oshawott_5
# 171 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq MCRoom_EventScript_Oshawott_6
# 180 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	hidemonpic
# 181 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	msgbox MCRoom_EventScript_Snivy_Text_2
	goto MCRoom_EventScript_Oshawott_1

MCRoom_EventScript_Oshawott_5:
# 163 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 164 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	msgbox MCRoom_EventScript_Oshawott_Text_0
# 165 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	removeobject 2
# 166 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	setflag FLAG_STARTER_OSHAWOTT
# 167 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 168 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	setvar VAR_STARTER_MON_FRLG, 2
# 169 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	call NicknamePartyMon
	goto MCRoom_EventScript_Oshawott_1

MCRoom_EventScript_Oshawott_6:
# 172 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 173 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	msgbox MCRoom_EventScript_Oshawott_Text_0
# 174 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	removeobject 2
# 175 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	setflag FLAG_STARTER_OSHAWOTT
# 176 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 177 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	call NicknameBoxMon
	goto MCRoom_EventScript_Oshawott_1


NicknamePartyMon::
# 194 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	msgbox NicknamePartyMon_Text_0, MSGBOX_YESNO
# 195 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	hidemonpic
# 196 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknamePartyMon_1
	return

NicknamePartyMon_1:
# 197 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 198 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	return


NicknameBoxMon::
# 204 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	msgbox NicknamePartyMon_Text_0, MSGBOX_YESNO
# 205 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	waitbuttonpress
# 206 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	hidemonpic
# 207 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknameBoxMon_2
NicknameBoxMon_1:
# 210 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	call Common_EventScript_TransferredToPC
	return

NicknameBoxMon_2:
# 208 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
	goto NicknameBoxMon_1


MCRoom_EventScript_StarterBag::
# 214 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	goto_if_unset FLAG_STARTER_SNIVY, MCRoom_EventScript_StarterBag_3
MCRoom_EventScript_StarterBag_2:
# 219 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	setflag FLAG_STARTER_BAG
	return

MCRoom_EventScript_StarterBag_1:
# 215 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	setvar VAR_LITTLEROOT_START, 1
# 216 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	clearflag FLAG_STARTER_BAG
	return

MCRoom_EventScript_StarterBag_3:
# 214 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	goto_if_unset FLAG_STARTER_TEPIG, MCRoom_EventScript_StarterBag_5
	goto MCRoom_EventScript_StarterBag_2

MCRoom_EventScript_StarterBag_5:
# 214 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	goto_if_unset FLAG_STARTER_OSHAWOTT, MCRoom_EventScript_StarterBag_1
	goto MCRoom_EventScript_StarterBag_2


MCRoom_EventScript_DoNotLeaveBeggining::
# 224 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	lockall
# 225 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	msgbox MCRoom_EventScript_DoNotLeaveBeggining_Text_0
# 226 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MCRoom_EventScript_DoNotLeaveBeggining_Movement_0
# 227 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	waitmovement 0
# 228 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	releaseall
	return


MCRoom_EventScript_Beggining::
# 232 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	lockall
# 234 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	applymovement LOCALID_MC2F_CHEREN, MCRoom_EventScript_Beggining_Movement_0
# 235 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	waitmovement 0
# 236 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	applymovement LOCALID_MC2F_CHEREN, MCRoom_EventScript_Beggining_Movement_1
# 237 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	msgbox MCRoom_EventScript_Beggining_Text_0
# 238 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	waitmessage
# 239 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	applymovement LOCALID_MC2F_CHEREN, MCRoom_EventScript_Beggining_Movement_2
# 240 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	waitmovement 0
# 241 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	msgbox MCRoom_EventScript_Beggining_Text_1
# 242 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	msgbox MCRoom_EventScript_Beggining_Text_2
# 243 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	waitmessage
# 244 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	closemessage
# 245 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	delay 90
# 246 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	clearflag FLAG_MC2F_BIANCA
# 247 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	showobjectat LOCALID_MC2F_BIANCA, MAP_LITTLEROOT_TOWN_BRENDANS_HOUSE_2F
# 248 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	special SpawnCameraObject
# 249 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, MCRoom_EventScript_Beggining_Movement_3
# 250 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	waitmovement 0
# 251 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	opendoor 8, 1
# 252 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	waitdooranim
# 253 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	delay 60
# 254 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	applymovement LOCALID_MC2F_BIANCA, MCRoom_EventScript_DoNotLeaveBeggining_Movement_0
# 255 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	waitmovement 0
# 256 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MCRoom_EventScript_Beggining_Movement_4
# 257 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	applymovement LOCALID_MC2F_CHEREN, MCRoom_EventScript_Beggining_Movement_4
# 258 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	waitmovement 0
# 259 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	msgbox MCRoom_EventScript_Beggining_Text_3
# 260 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	waitmessage
# 261 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	closemessage
# 262 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	applymovement LOCALID_MC2F_CHEREN, MCRoom_EventScript_Beggining_Movement_5
# 263 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	waitmovement 0
# 264 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	msgbox MCRoom_EventScript_Beggining_Text_4
# 266 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	waitmessage
# 267 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	closemessage
# 268 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, MCRoom_EventScript_Beggining_Movement_6
# 269 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	applymovement LOCALID_MC2F_BIANCA, MCRoom_EventScript_Beggining_Movement_7
# 270 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	waitmovement 0
# 271 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	applymovement LOCALID_MC2F_CHEREN, MCRoom_EventScript_Beggining_Movement_1
# 272 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	waitmovement 0
# 273 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	msgbox MCRoom_EventScript_Beggining_Text_5
# 274 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	waitmessage
# 275 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	closemessage
# 276 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	applymovement LOCALID_MC2F_BIANCA, MCRoom_EventScript_Beggining_Movement_8
# 277 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	waitmovement 0
# 278 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MCRoom_EventScript_Beggining_Movement_1
# 279 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	waitmovement 0
# 280 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	msgbox MCRoom_EventScript_Beggining_Text_6
# 281 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	waitmessage
# 282 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	closemessage
# 283 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	msgbox MCRoom_EventScript_Beggining_Text_7
# 284 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	waitmessage
# 285 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	closemessage
# 286 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	applymovement LOCALID_MC2F_CHEREN, MCRoom_EventScript_Beggining_Movement_9
# 287 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	waitmovement 0
# 288 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MCRoom_EventScript_Beggining_Movement_2
# 289 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	applymovement LOCALID_MC2F_BIANCA, MCRoom_EventScript_Beggining_Movement_2
# 290 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	waitmovement 0
# 291 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	msgbox MCRoom_EventScript_Beggining_Text_8
# 293 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	waitmessage
# 295 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	special RemoveCameraObject
# 296 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	setvar VAR_LITTLEROOT_START, 2
# 297 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	setflag FLAG_SYS_B_DASH
# 298 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	releaseall
	return


# 301 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
Movement_MCStart1:
# 302 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	walk_left
# 302 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	walk_left
# 303 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	walk_down
# 303 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	walk_down
	step_end

MCRoom_EventScript_ChooseNow::
# 307 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	lockall
# 308 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	msgbox MCRoom_EventScript_ChooseNow_Text_0
# 309 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MCRoom_EventScript_Beggining_Movement_0
# 310 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	waitmovement 0
# 311 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	releaseall
	return


MCRoom_EventScript_BattleBianca::
# 315 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	lockall
# 317 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	applymovement LOCALID_MC2F_BIANCA, MCRoom_EventScript_BattleBianca_Movement_0
# 318 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	waitmovement 0
# 319 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	msgbox MCRoom_EventScript_BattleBianca_Text_0
# 320 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	closemessage
# 321 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	applymovement LOCALID_MC2F_CHEREN, MCRoom_EventScript_BattleBianca_Movement_1
# 322 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	waitmovement 0
# 323 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	compare VAR_STARTER_MON_FRLG, 0
	goto_if_eq MCRoom_EventScript_BattleBianca_2
# 327 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	compare VAR_STARTER_MON_FRLG, 1
	goto_if_eq MCRoom_EventScript_BattleBianca_3
# 331 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	compare VAR_STARTER_MON_FRLG, 2
	goto_if_eq MCRoom_EventScript_BattleBianca_4
MCRoom_EventScript_BattleBianca_1:
# 335 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	waitmessage
# 336 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	closemessage
# 337 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	fadescreen FADE_TO_BLACK
# 338 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	removeobject 15
# 339 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	applymovement LOCALID_MC2F_CHEREN, MCRoom_EventScript_BattleBianca_Movement_2
# 340 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MCRoom_EventScript_BattleBianca_Movement_3
# 341 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	applymovement LOCALID_MC2F_BIANCA, MCRoom_EventScript_BattleBianca_Movement_4
# 342 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	waitmovement 0
# 343 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 344 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	msgbox MCRoom_EventScript_BattleBianca_Text_4
# 345 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	waitmessage
# 346 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	closemessage
# 347 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	msgbox MCRoom_EventScript_BattleBianca_Text_5
# 350 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	waitmessage
# 351 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	closemessage
# 352 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	applymovement LOCALID_MC2F_BIANCA, Common_Movement_Delay48
# 353 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	waitmovement 0
# 355 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	switch VAR_STARTER_MON_FRLG
# 356 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	case 0, MCRoom_EventScript_BattleBianca_10
# 358 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	case 1, MCRoom_EventScript_BattleBianca_11
# 360 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	case 2, MCRoom_EventScript_BattleBianca_12
MCRoom_EventScript_BattleBianca_8:
# 363 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	removeobject 3
# 364 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	releaseall
	end

MCRoom_EventScript_BattleBianca_2:
# 324 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	msgbox MCRoom_EventScript_BattleBianca_Text_1
	goto MCRoom_EventScript_BattleBianca_1

MCRoom_EventScript_BattleBianca_3:
# 328 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	msgbox MCRoom_EventScript_BattleBianca_Text_2
	goto MCRoom_EventScript_BattleBianca_1

MCRoom_EventScript_BattleBianca_4:
# 332 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	msgbox MCRoom_EventScript_BattleBianca_Text_3
	goto MCRoom_EventScript_BattleBianca_1

MCRoom_EventScript_BattleBianca_10:
# 357 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	call MCRoom_EventScript_StartBiancaBattleSnivy
	goto MCRoom_EventScript_BattleBianca_8

MCRoom_EventScript_BattleBianca_11:
# 359 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	call MCRoom_EventScript_StartBiancaBattleTepig
	goto MCRoom_EventScript_BattleBianca_8

MCRoom_EventScript_BattleBianca_12:
# 361 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	call MCRoom_EventScript_StartBiancaBattleOshawott
	goto MCRoom_EventScript_BattleBianca_8


MCRoom_EventScript_BattleCheren::
# 368 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	lockall
# 369 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	msgbox MCRoom_EventScript_BattleCheren_Text_0
# 370 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	waitmessage
# 371 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	closemessage
# 372 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	msgbox MCRoom_EventScript_BattleCheren_Text_1
# 373 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	waitmessage
# 374 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	closemessage
# 375 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	applymovement LOCALID_MC2F_BIANCA, MCRoom_EventScript_BattleCheren_Movement_0
# 376 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	waitmovement 0
# 377 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	delay 60
# 378 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	applymovement LOCALID_MC2F_BIANCA, MCRoom_EventScript_Beggining_Movement_4
# 379 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	waitmovement 0
# 380 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	delay 60
# 381 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	applymovement LOCALID_MC2F_BIANCA, MCRoom_EventScript_Beggining_Movement_2
# 382 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	waitmovement 0
# 383 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	delay 60
# 384 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	msgbox MCRoom_EventScript_BattleCheren_Text_2
# 385 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	applymovement LOCALID_MC2F_BIANCA, MCRoom_EventScript_Beggining_Movement_1
# 386 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	waitmovement 0
# 387 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	msgbox MCRoom_EventScript_BattleCheren_Text_3
# 389 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	waitmessage
# 390 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	closemessage
# 391 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	applymovement LOCALID_MC2F_CHEREN, MCRoom_EventScript_BattleCheren_Movement_1
# 392 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	waitmovement 0
# 393 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	msgbox MCRoom_EventScript_BattleCheren_Text_4
# 394 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	closemessage
# 396 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	playfanfare MUS_HEAL
# 397 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	waitfanfare
# 398 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	applymovement LOCALID_MC2F_CHEREN, MCRoom_EventScript_Beggining_Movement_1
# 399 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	waitmovement 0
# 401 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	msgbox MCRoom_EventScript_BattleCheren_Text_5
# 402 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	closemessage
# 404 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	playfanfare MUS_HEAL
# 405 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	waitfanfare
# 406 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	special HealPlayerParty
# 408 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	applymovement LOCALID_MC2F_BIANCA, Common_Movement_ExclamationMark
# 409 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	waitmovement 0
# 410 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	delay 60
# 411 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	applymovement LOCALID_MC2F_BIANCA, MCRoom_EventScript_BattleCheren_Movement_2
# 412 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	waitmovement 0
# 413 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MCRoom_EventScript_Beggining_Movement_4
# 414 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	applymovement LOCALID_MC2F_CHEREN, MCRoom_EventScript_Beggining_Movement_4
# 415 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	waitmovement 0
# 416 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	msgbox MCRoom_EventScript_BattleCheren_Text_6
# 418 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	waitmessage
# 419 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	closemessage
# 420 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	msgbox MCRoom_EventScript_BattleCheren_Text_7
# 422 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	waitmessage
# 423 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	closemessage
# 424 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	applymovement LOCALID_MC2F_CHEREN, MCRoom_EventScript_BattleCheren_Movement_3
# 425 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	waitmovement 0
# 426 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MCRoom_EventScript_BattleCheren_Movement_0
# 427 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	waitmovement 0
# 428 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	switch VAR_STARTER_MON_FRLG
# 429 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	case 0, MCRoom_EventScript_BattleCheren_3
# 431 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	case 1, MCRoom_EventScript_BattleCheren_4
# 433 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	case 2, MCRoom_EventScript_BattleCheren_5
MCRoom_EventScript_BattleCheren_1:
# 436 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	waitmessage
# 437 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	closemessage
# 438 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	applymovement LOCALID_MC2F_CHEREN, Common_Movement_Delay48
# 439 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	waitmovement 0
# 441 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	switch VAR_STARTER_MON_FRLG
# 442 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	case 0, MCRoom_EventScript_BattleCheren_8
# 443 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	case 1, MCRoom_EventScript_BattleCheren_9
# 444 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	case 2, MCRoom_EventScript_BattleCheren_10
MCRoom_EventScript_BattleCheren_6:
# 446 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	removeobject 3
# 447 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	releaseall
	end

MCRoom_EventScript_BattleCheren_3:
# 430 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	msgbox MCRoom_EventScript_BattleCheren_Text_8
	goto MCRoom_EventScript_BattleCheren_1

MCRoom_EventScript_BattleCheren_4:
# 432 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	msgbox MCRoom_EventScript_BattleCheren_Text_9
	goto MCRoom_EventScript_BattleCheren_1

MCRoom_EventScript_BattleCheren_5:
# 434 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	msgbox MCRoom_EventScript_BattleCheren_Text_10
	goto MCRoom_EventScript_BattleCheren_1

MCRoom_EventScript_BattleCheren_8:
# 442 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	call MCRoom_EventScript_StartCherenBattleSnivy
	goto MCRoom_EventScript_BattleCheren_6

MCRoom_EventScript_BattleCheren_9:
# 443 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	call MCRoom_EventScript_StartCherenBattleTepig
	goto MCRoom_EventScript_BattleCheren_6

MCRoom_EventScript_BattleCheren_10:
# 444 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	call MCRoom_EventScript_StartCherenBattleOshawott
	goto MCRoom_EventScript_BattleCheren_6


MCRoom_EventScript_PostBattles::
# 451 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	lockall
# 452 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	msgbox MCRoom_EventScript_PostBattles_Text_0
# 454 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	waitmessage
# 455 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	closemessage
# 456 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	applymovement LOCALID_MC2F_CHEREN, MCRoom_EventScript_PostBattles_Movement_0
# 457 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	msgbox MCRoom_EventScript_PostBattles_Text_1
# 458 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	waitmessage
# 459 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	closemessage
# 460 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	removeobject LOCALID_MC2F_CHEREN
# 461 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	applymovement LOCALID_MC2F_BIANCA, MCRoom_EventScript_PostBattles_Movement_1
# 462 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	waitmovement 0
# 463 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	removeobject LOCALID_MC2F_BIANCA
# 465 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	setflag FLAG_MC2F_BIANCA
# 466 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	setflag FLAG_MC2F_CHEREN
# 467 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	setvar VAR_LITTLEROOT_START, 4
# 468 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	releaseall
	end


MCRoom_EventScript_StartBiancaBattleSnivy::
# 473 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	trainerbattle_no_intro TRAINER_BIANCA_PLAYER_2F_SNIVY, MCRoom_Text_BiancaDefeated
# 474 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	call MCRoom_EventScript_BattleCheren
	end


MCRoom_EventScript_StartBiancaBattleTepig::
# 478 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	trainerbattle_no_intro TRAINER_BIANCA_PLAYER_2F_TEPIG, MCRoom_Text_BiancaDefeated
# 479 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	call MCRoom_EventScript_BattleCheren
	end


MCRoom_EventScript_StartBiancaBattleOshawott::
# 483 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	trainerbattle_no_intro TRAINER_BIANCA_PLAYER_2F_OSHAWOTT, MCRoom_Text_BiancaDefeated
# 484 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	call MCRoom_EventScript_BattleCheren
	end


MCRoom_EventScript_StartCherenBattleSnivy::
# 493 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	trainerbattle_no_intro TRAINER_CHEREN_PLAYER_2F_SNIVY, MCRoom_Text_CherenDefeated
# 494 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	call MCRoom_EventScript_PostBattles
	end


MCRoom_EventScript_StartCherenBattleTepig::
# 498 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	trainerbattle_no_intro TRAINER_CHEREN_PLAYER_2F_TEPIG, MCRoom_Text_CherenDefeated
# 499 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	call MCRoom_EventScript_PostBattles
	end


MCRoom_EventScript_StartCherenBattleOshawott::
# 503 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	trainerbattle_no_intro TRAINER_CHEREN_PLAYER_2F_OSHAWOTT, MCRoom_Text_CherenDefeated
# 504 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	call MCRoom_EventScript_PostBattles
	end


MCRoom_EventScript_Cheren::
# 521 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	lock
# 522 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	faceplayer
# 523 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	compare VAR_LITTLEROOT_START, 2
	goto_if_eq MCRoom_EventScript_Cheren_2
# 527 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	msgbox MCRoom_EventScript_Cheren_Text_0
MCRoom_EventScript_Cheren_1:
# 529 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	release
	return

MCRoom_EventScript_Cheren_2:
# 524 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	msgbox MCRoom_Text_CherenWaitingForStarterChoice
	goto MCRoom_EventScript_Cheren_1


MCRoom_EventScript_Bianca::
# 533 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	lock
# 534 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	faceplayer
# 535 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	compare VAR_LITTLEROOT_START, 2
	goto_if_eq MCRoom_EventScript_Bianca_2
# 539 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	msgbox MCRoom_EventScript_Bianca_Text_0
MCRoom_EventScript_Bianca_1:
# 541 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	release
	return

MCRoom_EventScript_Bianca_2:
# 536 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	msgbox MCRoom_Text_BiancaWaitingForStarterChoice
	goto MCRoom_EventScript_Bianca_1


# 226 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
MCRoom_EventScript_DoNotLeaveBeggining_Movement_0:
# 226 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	walk_left
	step_end

# 234 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
MCRoom_EventScript_Beggining_Movement_0:
# 234 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	walk_down
	step_end

# 236 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
MCRoom_EventScript_Beggining_Movement_1:
# 236 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	face_left
	step_end

# 239 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
MCRoom_EventScript_Beggining_Movement_2:
# 239 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	face_down
	step_end

# 249 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
MCRoom_EventScript_Beggining_Movement_3:
# 249 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	walk_diag_northeast
# 249 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	walk_diag_northeast
# 249 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	walk_right
	step_end

# 256 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
MCRoom_EventScript_Beggining_Movement_4:
# 256 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	face_up
	step_end

# 262 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
MCRoom_EventScript_Beggining_Movement_5:
# 262 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	walk_right
# 262 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	walk_up
	step_end

# 268 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
MCRoom_EventScript_Beggining_Movement_6:
# 268 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	walk_diag_southwest
# 268 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	walk_diag_southwest
# 268 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	walk_left
	step_end

# 269 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
MCRoom_EventScript_Beggining_Movement_7:
# 269 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	walk_down
# 269 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	walk_left
# 269 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	walk_left
# 269 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	walk_left
# 269 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	walk_left
# 269 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	face_down
	step_end

# 276 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
MCRoom_EventScript_Beggining_Movement_8:
# 276 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	walk_left
# 276 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	walk_down
# 276 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	walk_down
# 276 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	face_right
	step_end

# 286 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
MCRoom_EventScript_Beggining_Movement_9:
# 286 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	walk_down
# 286 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	walk_left
# 286 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	face_down
	step_end

# 317 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
MCRoom_EventScript_BattleBianca_Movement_0:
# 317 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	walk_down
# 317 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	face_right
	step_end

# 321 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
MCRoom_EventScript_BattleBianca_Movement_1:
# 321 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	walk_down
# 321 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	face_left
	step_end

# 339 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
MCRoom_EventScript_BattleBianca_Movement_2:
# 339 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	walk_fast_up
# 339 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	walk_fast_up
# 339 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	walk_fast_up
# 339 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	walk_fast_up
# 339 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	face_down
	step_end

# 340 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
MCRoom_EventScript_BattleBianca_Movement_3:
# 340 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	walk_fast_up
# 340 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	walk_fast_up
# 340 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	face_right
	step_end

# 341 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
MCRoom_EventScript_BattleBianca_Movement_4:
# 341 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	walk_fast_right
# 341 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	walk_fast_right
# 341 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	walk_fast_right
# 341 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	walk_fast_up
# 341 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	walk_fast_up
# 341 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	face_left
	step_end

# 375 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
MCRoom_EventScript_BattleCheren_Movement_0:
# 375 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	face_right
	step_end

# 391 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
MCRoom_EventScript_BattleCheren_Movement_1:
# 391 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	walk_down
# 391 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	walk_down
# 391 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	face_right
	step_end

# 411 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
MCRoom_EventScript_BattleCheren_Movement_2:
# 411 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	walk_up
# 411 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	walk_up
# 411 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	walk_left
# 411 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	face_down
	step_end

# 424 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
MCRoom_EventScript_BattleCheren_Movement_3:
# 424 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	walk_right
# 424 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	face_left
	step_end

# 456 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
MCRoom_EventScript_PostBattles_Movement_0:
# 456 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	walk_right
# 456 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	walk_right
# 456 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	walk_up
# 456 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	walk_up
# 456 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	walk_right
	step_end

# 461 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
MCRoom_EventScript_PostBattles_Movement_1:
# 461 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	walk_right
# 461 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	walk_right
# 461 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	walk_right
# 461 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
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
# 87 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	.string "Are you sure?$"

MCRoom_EventScript_Snivy_Text_1:
# 92 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	.string "Received Snivy$"

MCRoom_EventScript_Snivy_Text_2:
# 109 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	.string "You have no more room for this Pokemon.$"

MCRoom_EventScript_Snivy_Text_3:
# 114 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	.string "You did not choose the Pokemon$"

MCRoom_EventScript_Tepig_Text_0:
# 128 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	.string "Received Tepig$"

MCRoom_EventScript_Oshawott_Text_0:
# 164 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	.string "Received Oshawott$"

NicknamePartyMon_Text_0:
# 194 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	.string "Do you want to give it a nickname?$"

MCRoom_EventScript_DoNotLeaveBeggining_Text_0:
# 225 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	.string "Cheren: Come here {PLAYER}!$"

MCRoom_EventScript_Beggining_Text_0:
# 237 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	.string "Cheren: {PLAYER}!\pI heard from Professor Juniper.\nWe can have a Pokémon?$"

MCRoom_EventScript_Beggining_Text_1:
# 241 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	.string "...\n...$"

MCRoom_EventScript_Beggining_Text_2:
# 242 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	.string "Cheren: What's keeping Bianca?$"

MCRoom_EventScript_Beggining_Text_3:
# 259 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	.string "Bianca: Am I a little late again?\nSo-oooo-orry!$"

MCRoom_EventScript_Beggining_Text_4:
# 264 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	.string "Cheren: Bianca...\lI've known for ten years that you\nhave no sense of time, but...seriously...\pToday's  the day we can get a\nPokémon from Professor Juniper!$"

MCRoom_EventScript_Beggining_Text_5:
# 273 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	.string "Bianca: I know. Sorry, {PLAYER}.\nSorry, Cheren.$"

MCRoom_EventScript_Beggining_Text_6:
# 280 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	.string "Bianca: So, where are the Pokémon?\pThey were delivered to {PLAYER}'s\nhouse, so {PLAYER} gets first pick.$"

MCRoom_EventScript_Beggining_Text_7:
# 283 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	.string "Cheren: Naturally.$"

MCRoom_EventScript_Beggining_Text_8:
# 291 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	.string "The Pokémon are waiting for us\ninside that bag.\pOK, {PLAYER}, you go first and take\na peek at the bag.\p I want to meet the Pokémon right now!$"

MCRoom_EventScript_ChooseNow_Text_0:
# 308 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	.string "Hey, don't leave.\nWe're waiting.$"

MCRoom_EventScript_BattleBianca_Text_0:
# 319 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	.string "Bianca: OK, I'll take this Pokémon!\nCheren, that one's yours!$"

MCRoom_EventScript_BattleBianca_Text_1:
# 324 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	.string "Cheren: Hey, how come you get to pick\nout my Pokémon?\pOh, never mind. I wanted Tepig\nfrom the start,  anyway.$"

MCRoom_EventScript_BattleBianca_Text_2:
# 328 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	.string "Cheren: Hey, how come you get to pick\nout my Pokémon?\pOh, never mind. I wanted Oshawott\nfrom the start,  anyway.$"

MCRoom_EventScript_BattleBianca_Text_3:
# 332 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	.string "Cheren: Hey, how come you get to pick\nout my Pokémon?\pOh, never mind. I wanted Snivy\nfrom the start,  anyway.$"

MCRoom_EventScript_BattleBianca_Text_4:
# 344 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	.string "Bianca: Everyone has chosen a Pokémon!\n...So that's that!\pHey, I know!\nLet's have a Pokémon battle!$"

MCRoom_EventScript_BattleBianca_Text_5:
# 347 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	.string "Cheren: Honestly, Bianca...\pEven though they're still weak Pokémon,\nyou shouldn't have Pokémon battles\l inside a house.\pDon't be a worrywart!\nThese little ones are weak, like you said.\pWe have to let them  battle so they'll get\nstronger. It's settled, {PLAYER}!\lGet ready for a Pokémon Battle!$"

MCRoom_EventScript_BattleCheren_Text_0:
# 369 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	.string "Bianca: Wow...\p{PLAYER}, you're gonna be\nan awesome Trainer someday, I can tell!\pNo doubt!$"

MCRoom_EventScript_BattleCheren_Text_1:
# 372 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	.string "Cheren: Uh...\n...\pBianca, Would you take a look around?$"

MCRoom_EventScript_BattleCheren_Text_2:
# 384 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	.string "Bianca: Wh-whoa!\nWhat happened?!$"

MCRoom_EventScript_BattleCheren_Text_3:
# 387 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	.string "Wow! Pokémon are amaaaaazing!!\nSo little, but so strong!\pI'm so glad that I get to have a\nPokémon!\p ...Oh.\nUm, sorry about your room, {PLAYER}.$"

MCRoom_EventScript_BattleCheren_Text_4:
# 393 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	.string "Cheren: You...are completely hopeless.\pHere!\nI'll restore your Pokémon for you.$"

MCRoom_EventScript_BattleCheren_Text_5:
# 401 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	.string "{PLAYER}'s Pokémon needs\nto be fixed up, too.$"

MCRoom_EventScript_BattleCheren_Text_6:
# 416 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	.string "Bianca: Hey, Cheren!\nHow about you battle, too?\pWith all you know, I'm sure you can\nbattle without  turning the room into\la disaster area like I did!$"

MCRoom_EventScript_BattleCheren_Text_7:
# 420 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	.string "Cheren: I believe you're right!\pIt'll be no problem for me to keep\nthe room from getting any mesier.\p Besides, it's not fair if you two are the\nonly ones who get to have fun battling!$"

MCRoom_EventScript_BattleCheren_Text_8:
# 430 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	.string "It's decided. You'll be my opponent...\nin our first Pokémon battle!\pLet's see what you can do, Tepig!$"

MCRoom_EventScript_BattleCheren_Text_9:
# 432 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	.string "It's decided. You'll be my opponent...\nin our first Pokémon battle!\pLet's see what you can do, Oshawott!$"

MCRoom_EventScript_BattleCheren_Text_10:
# 434 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	.string "It's decided. You'll be my opponent...\nin our first Pokémon battle!\pLet's see what you can do, Snivy!$"

MCRoom_EventScript_PostBattles_Text_0:
# 452 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	.string "Cheren: I made a strange blunder\nin my first battle, but\lthis feeling I have...\l...I'm finally a Trainer .\pBut first, we'd better go apologize to\nyour mother about this messed-up room.$"

MCRoom_EventScript_PostBattles_Text_1:
# 457 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	.string "Bianca: Oh!\nI'd better come, too!$"

MCRoom_EventScript_Cheren_Text_0:
# 527 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	.string "Cheren: Hi {PLAYER}!$"

MCRoom_EventScript_Bianca_Text_0:
# 539 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	.string "Bianca: Hi {PLAYER}!$"

MCRoom_Text_BiancaDefeated::
# 488 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	.string "The Pokémon on both sides did their\nbest!$"

MCRoom_Text_CherenDefeated::
# 508 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	.string "Ah! So that's a Pokémon battle!$"

MCRoom_Text_CherenWaitingForStarterChoice::
# 512 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	.string "Cheren: Would you get a move on\nand open the bag already?\pI'm sure the Pokémon are just as\nexcited to meet us!$"

MCRoom_Text_BiancaWaitingForStarterChoice::
# 516 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	.string "Bianca: Ooh!\nWhat kind of Pokémon could they be?$"
