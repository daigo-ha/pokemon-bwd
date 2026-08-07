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
	setvar VAR_LITTLEROOT_START, 1
# 14 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	goto_if_unset FLAG_STARTER_BAG, PalletTown_PlayersHouse_2F_OnTransition_5
PalletTown_PlayersHouse_2F_OnTransition_4:
# 17 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	removeobject LOCALID_MC2F_BIANCA
# 18 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	setflag FLAG_MC2F_BIANCA
	return

PalletTown_PlayersHouse_2F_OnTransition_2:
# 11 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	call PalletTown_PlayersHouse_2F_EventScript_SetRespawn
	goto PalletTown_PlayersHouse_2F_OnTransition_1

PalletTown_PlayersHouse_2F_OnTransition_5:
# 15 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	call MCRoom_EventScript_StarterBag
	goto PalletTown_PlayersHouse_2F_OnTransition_4


PalletTown_PlayersHouse_2F_EventScript_SetRespawn::
# 21 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	setrespawn HEAL_LOCATION_PALLET_TOWN
	return


PalletTown_PlayersHouse_2F_OnWarp::
# 24 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	compare VAR_MAP_SCENE_PALLET_TOWN_PLAYERS_HOUSE_2F, 0
	goto_if_eq PalletTown_PlayersHouse_2F_OnWarp_1
	return

PalletTown_PlayersHouse_2F_OnWarp_1:
# 25 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	call PalletTown_PlayersHouse_2F_FirstWarpIn
	return


PalletTown_PlayersHouse_2F_FirstWarpIn::
# 29 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_PLAYERS_HOUSE_2F, 1
	return


PalletTown_PlayersHouse_2F_EventScript_NES::
# 31 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	msgbox PalletTown_PlayersHouse_2F_EventScript_NES_Text_0, MSGBOX_SIGN
	return


PalletTown_PlayersHouse_2F_EventScript_Sign::
# 33 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	msgbox PalletTown_PlayersHouse_2F_EventScript_Sign_Text_0, MSGBOX_SIGN
	return


MCRoom_EventScript_Starter::
MCRoom_EventScript_Starter_2:
# 37 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	goto_if_unset FLAG_STARTER_SNIVY, MCRoom_EventScript_Starter_4
MCRoom_EventScript_Starter_1:
# 61 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	closemessage
# 65 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	setvar VAR_LITTLEROOT_START, 3
# 66 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	call MCRoom_EventScript_BattleBianca
# 67 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	releaseall
	end

MCRoom_EventScript_Starter_3:
# 38 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	lockall
# 39 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	msgbox MCRoom_EventScript_Starter_Text_0
# 40 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	message MCRoom_EventScript_Starter_Text_1
# 41 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	waitmessage
# 42 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	multichoice 20, 5, MULTI_STARTER_CHOICE, 0
# 43 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	closemessage
# 44 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq MCRoom_EventScript_Starter_9
# 48 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq MCRoom_EventScript_Starter_10
# 52 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq MCRoom_EventScript_Starter_11
# 57 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	msgbox MCRoom_EventScript_Starter_Text_2
# 58 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	waitmessage
	goto MCRoom_EventScript_Starter_2

MCRoom_EventScript_Starter_4:
# 37 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	goto_if_unset FLAG_STARTER_TEPIG, MCRoom_EventScript_Starter_6
	goto MCRoom_EventScript_Starter_1

MCRoom_EventScript_Starter_6:
# 37 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	goto_if_unset FLAG_STARTER_OSHAWOTT, MCRoom_EventScript_Starter_3
	goto MCRoom_EventScript_Starter_1

MCRoom_EventScript_Starter_9:
# 45 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	call StarterFade
# 46 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	call MCRoom_EventScript_Snivy
	goto MCRoom_EventScript_Starter_2

MCRoom_EventScript_Starter_10:
# 49 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	call StarterFade
# 50 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	call MCRoom_EventScript_Tepig
	goto MCRoom_EventScript_Starter_2

MCRoom_EventScript_Starter_11:
# 53 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	call StarterFade
# 54 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	call MCRoom_EventScript_Oshawott
	goto MCRoom_EventScript_Starter_2


StarterFade::
# 72 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	fadescreen FADE_TO_BLACK
# 73 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	delay 20
# 74 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	fadescreen FADE_FROM_BLACK
	return


MCRoom_EventScript_Snivy::
# 80 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	showmonpic SPECIES_SNIVY, 10, 3
# 81 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	msgbox MCRoom_EventScript_Snivy_Text_0, MSGBOX_YESNO
# 82 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq MCRoom_EventScript_Snivy_2
# 107 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	hidemonpic
# 108 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	msgbox MCRoom_EventScript_Snivy_Text_3
MCRoom_EventScript_Snivy_1:
# 110 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	waitmessage
	return

MCRoom_EventScript_Snivy_2:
# 83 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	givemon SPECIES_SNIVY, 5, ITEM_ORAN_BERRY
# 84 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq MCRoom_EventScript_Snivy_5
# 93 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq MCRoom_EventScript_Snivy_6
# 102 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	hidemonpic
# 103 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	msgbox MCRoom_EventScript_Snivy_Text_2
	goto MCRoom_EventScript_Snivy_1

MCRoom_EventScript_Snivy_5:
# 85 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 86 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	msgbox MCRoom_EventScript_Snivy_Text_1
# 87 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	removeobject 0
# 88 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	setflag FLAG_STARTER_SNIVY
# 89 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 90 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	setvar VAR_STARTER_MON_FRLG, 0
# 91 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	call NicknamePartyMon
	goto MCRoom_EventScript_Snivy_1

MCRoom_EventScript_Snivy_6:
# 94 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 95 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	msgbox MCRoom_EventScript_Snivy_Text_1
# 96 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	removeobject 0
# 97 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	setflag FLAG_STARTER_SNIVY
# 98 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 99 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	call NicknameBoxMon
	goto MCRoom_EventScript_Snivy_1


MCRoom_EventScript_Tepig::
# 116 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	showmonpic SPECIES_TEPIG, 10, 3
# 117 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	msgbox MCRoom_EventScript_Snivy_Text_0, MSGBOX_YESNO
# 118 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq MCRoom_EventScript_Tepig_2
# 143 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	hidemonpic
# 144 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	msgbox MCRoom_EventScript_Snivy_Text_3
MCRoom_EventScript_Tepig_1:
# 146 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	waitmessage
	return

MCRoom_EventScript_Tepig_2:
# 119 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	givemon SPECIES_TEPIG, 5, ITEM_ORAN_BERRY
# 120 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq MCRoom_EventScript_Tepig_5
# 129 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq MCRoom_EventScript_Tepig_6
# 138 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	hidemonpic
# 139 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	msgbox MCRoom_EventScript_Snivy_Text_2
	goto MCRoom_EventScript_Tepig_1

MCRoom_EventScript_Tepig_5:
# 121 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 122 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	msgbox MCRoom_EventScript_Tepig_Text_0
# 123 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	removeobject 1
# 124 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	setflag FLAG_STARTER_TEPIG
# 125 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 126 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	setvar VAR_STARTER_MON_FRLG, 1
# 127 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	call NicknamePartyMon
	goto MCRoom_EventScript_Tepig_1

MCRoom_EventScript_Tepig_6:
# 130 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 131 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	msgbox MCRoom_EventScript_Tepig_Text_0
# 132 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	removeobject 1
# 133 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	setflag FLAG_STARTER_TEPIG
# 134 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 135 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	call NicknameBoxMon
	goto MCRoom_EventScript_Tepig_1


MCRoom_EventScript_Oshawott::
# 152 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	showmonpic SPECIES_OSHAWOTT, 10, 3
# 153 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	msgbox MCRoom_EventScript_Snivy_Text_0, MSGBOX_YESNO
# 154 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq MCRoom_EventScript_Oshawott_2
# 179 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	hidemonpic
# 180 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	msgbox MCRoom_EventScript_Snivy_Text_3
MCRoom_EventScript_Oshawott_1:
# 182 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	waitmessage
	return

MCRoom_EventScript_Oshawott_2:
# 155 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	givemon SPECIES_OSHAWOTT, 5, ITEM_ORAN_BERRY
# 156 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq MCRoom_EventScript_Oshawott_5
# 165 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq MCRoom_EventScript_Oshawott_6
# 174 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	hidemonpic
# 175 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	msgbox MCRoom_EventScript_Snivy_Text_2
	goto MCRoom_EventScript_Oshawott_1

MCRoom_EventScript_Oshawott_5:
# 157 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 158 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	msgbox MCRoom_EventScript_Oshawott_Text_0
# 159 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	removeobject 2
# 160 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	setflag FLAG_STARTER_OSHAWOTT
# 161 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 162 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	setvar VAR_STARTER_MON_FRLG, 2
# 163 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	call NicknamePartyMon
	goto MCRoom_EventScript_Oshawott_1

MCRoom_EventScript_Oshawott_6:
# 166 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 167 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	msgbox MCRoom_EventScript_Oshawott_Text_0
# 168 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	removeobject 2
# 169 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	setflag FLAG_STARTER_OSHAWOTT
# 170 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 171 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	call NicknameBoxMon
	goto MCRoom_EventScript_Oshawott_1


NicknamePartyMon::
# 188 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	msgbox NicknamePartyMon_Text_0, MSGBOX_YESNO
# 189 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	waitbuttonpress
# 190 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	hidemonpic
# 191 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknamePartyMon_1
	return

NicknamePartyMon_1:
# 192 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 193 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	return


NicknameBoxMon::
# 199 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	msgbox NicknamePartyMon_Text_0, MSGBOX_YESNO
# 200 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	waitbuttonpress
# 201 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	hidemonpic
# 202 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknameBoxMon_2
NicknameBoxMon_1:
# 205 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	call Common_EventScript_TransferredToPC
	return

NicknameBoxMon_2:
# 203 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
	goto NicknameBoxMon_1


MCRoom_EventScript_StarterBag::
# 209 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	goto_if_unset FLAG_STARTER_SNIVY, MCRoom_EventScript_StarterBag_3
MCRoom_EventScript_StarterBag_2:
# 214 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	setflag FLAG_STARTER_BAG
	return

MCRoom_EventScript_StarterBag_1:
# 210 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	setvar VAR_LITTLEROOT_START, 1
# 211 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	clearflag FLAG_STARTER_BAG
	return

MCRoom_EventScript_StarterBag_3:
# 209 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	goto_if_unset FLAG_STARTER_TEPIG, MCRoom_EventScript_StarterBag_5
	goto MCRoom_EventScript_StarterBag_2

MCRoom_EventScript_StarterBag_5:
# 209 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	goto_if_unset FLAG_STARTER_OSHAWOTT, MCRoom_EventScript_StarterBag_1
	goto MCRoom_EventScript_StarterBag_2


MCRoom_EventScript_DoNotLeaveBeggining::
# 219 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	lockall
# 220 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	msgbox MCRoom_EventScript_DoNotLeaveBeggining_Text_0
# 221 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MCRoom_EventScript_DoNotLeaveBeggining_Movement_0
# 222 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	waitmovement 0
# 223 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	releaseall
	return


MCRoom_EventScript_Beggining::
# 227 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	lockall
# 229 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	applymovement LOCALID_MC2F_CHEREN, MCRoom_EventScript_Beggining_Movement_0
# 230 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	waitmovement 0
# 231 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	applymovement LOCALID_MC2F_CHEREN, MCRoom_EventScript_Beggining_Movement_1
# 232 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	msgbox MCRoom_EventScript_Beggining_Text_0
# 233 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	waitmessage
# 234 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	applymovement LOCALID_MC2F_CHEREN, MCRoom_EventScript_Beggining_Movement_2
# 235 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	waitmovement 0
# 236 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	msgbox MCRoom_EventScript_Beggining_Text_1
# 237 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	msgbox MCRoom_EventScript_Beggining_Text_2
# 238 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	waitmessage
# 239 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	closemessage
# 240 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	delay 90
# 241 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	clearflag FLAG_MC2F_BIANCA
# 242 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	showobjectat LOCALID_MC2F_BIANCA, MAP_LITTLEROOT_TOWN_BRENDANS_HOUSE_2F
# 243 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	special SpawnCameraObject
# 244 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, MCRoom_EventScript_Beggining_Movement_3
# 245 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	waitmovement 0
# 246 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	opendoor 8, 1
# 247 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	waitdooranim
# 248 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	delay 60
# 249 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	applymovement LOCALID_MC2F_BIANCA, MCRoom_EventScript_DoNotLeaveBeggining_Movement_0
# 250 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	waitmovement 0
# 251 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MCRoom_EventScript_Beggining_Movement_4
# 252 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	applymovement LOCALID_MC2F_CHEREN, MCRoom_EventScript_Beggining_Movement_4
# 253 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	waitmovement 0
# 254 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	msgbox MCRoom_EventScript_Beggining_Text_3
# 255 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	waitmessage
# 256 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	applymovement LOCALID_MC2F_CHEREN, MCRoom_EventScript_Beggining_Movement_5
# 257 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	waitmovement 0
# 258 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	msgbox MCRoom_EventScript_Beggining_Text_4
# 260 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	waitmessage
# 261 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, MCRoom_EventScript_Beggining_Movement_6
# 262 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	applymovement LOCALID_MC2F_BIANCA, MCRoom_EventScript_Beggining_Movement_7
# 263 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	waitmovement 0
# 264 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	applymovement LOCALID_MC2F_CHEREN, MCRoom_EventScript_Beggining_Movement_1
# 265 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	waitmovement 0
# 266 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	msgbox MCRoom_EventScript_Beggining_Text_5
# 267 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	waitmessage
# 268 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	applymovement LOCALID_MC2F_BIANCA, MCRoom_EventScript_Beggining_Movement_8
# 269 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	waitmovement 0
# 270 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MCRoom_EventScript_Beggining_Movement_1
# 271 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	waitmovement 0
# 272 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	msgbox MCRoom_EventScript_Beggining_Text_6
# 273 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	msgbox MCRoom_EventScript_Beggining_Text_7
# 274 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	waitmessage
# 275 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	applymovement LOCALID_MC2F_CHEREN, MCRoom_EventScript_Beggining_Movement_9
# 276 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	waitmovement 0
# 277 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MCRoom_EventScript_Beggining_Movement_2
# 278 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	applymovement LOCALID_MC2F_BIANCA, MCRoom_EventScript_Beggining_Movement_2
# 279 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	waitmovement 0
# 280 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	msgbox MCRoom_EventScript_Beggining_Text_8
# 282 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	waitmessage
# 284 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	special RemoveCameraObject
# 285 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	setvar VAR_LITTLEROOT_START, 2
# 286 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	setflag FLAG_SYS_B_DASH
# 287 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	releaseall
	return


# 290 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
Movement_MCStart1:
# 291 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	walk_left
# 291 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	walk_left
# 292 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	walk_down
# 292 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	walk_down
	step_end

MCRoom_EventScript_ChooseNow::
# 296 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	lockall
# 297 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	msgbox MCRoom_EventScript_ChooseNow_Text_0
# 298 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MCRoom_EventScript_Beggining_Movement_0
# 299 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	waitmovement 0
# 300 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	releaseall
	return


MCRoom_EventScript_BattleBianca::
# 304 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	lockall
# 306 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	applymovement LOCALID_MC2F_BIANCA, MCRoom_EventScript_BattleBianca_Movement_0
# 307 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	waitmovement 0
# 308 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	msgbox MCRoom_EventScript_BattleBianca_Text_0
# 309 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	applymovement LOCALID_MC2F_CHEREN, MCRoom_EventScript_BattleBianca_Movement_1
# 310 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	waitmovement 0
# 311 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	compare VAR_STARTER_MON_FRLG, 0
	goto_if_eq MCRoom_EventScript_BattleBianca_2
# 315 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	compare VAR_STARTER_MON_FRLG, 1
	goto_if_eq MCRoom_EventScript_BattleBianca_3
# 319 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	compare VAR_STARTER_MON_FRLG, 2
	goto_if_eq MCRoom_EventScript_BattleBianca_4
MCRoom_EventScript_BattleBianca_1:
# 323 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	waitmessage
# 324 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	fadescreen FADE_TO_BLACK
# 325 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	removeobject 15
# 326 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	applymovement LOCALID_MC2F_CHEREN, MCRoom_EventScript_BattleBianca_Movement_2
# 327 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MCRoom_EventScript_BattleBianca_Movement_3
# 328 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	applymovement LOCALID_MC2F_BIANCA, MCRoom_EventScript_BattleBianca_Movement_4
# 329 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	waitmovement 0
# 330 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 331 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	msgbox MCRoom_EventScript_BattleBianca_Text_4
# 332 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	msgbox MCRoom_EventScript_BattleBianca_Text_5
# 335 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	waitmessage
# 336 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	applymovement LOCALID_MC2F_BIANCA, Common_Movement_Delay48
# 337 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	waitmovement 0
# 339 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	switch VAR_STARTER_MON_FRLG
# 340 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	case 0, MCRoom_EventScript_BattleBianca_10
# 342 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	case 1, MCRoom_EventScript_BattleBianca_11
# 344 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	case 2, MCRoom_EventScript_BattleBianca_12
MCRoom_EventScript_BattleBianca_8:
# 347 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	releaseall
	end

MCRoom_EventScript_BattleBianca_2:
# 312 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	msgbox MCRoom_EventScript_BattleBianca_Text_1
	goto MCRoom_EventScript_BattleBianca_1

MCRoom_EventScript_BattleBianca_3:
# 316 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	msgbox MCRoom_EventScript_BattleBianca_Text_2
	goto MCRoom_EventScript_BattleBianca_1

MCRoom_EventScript_BattleBianca_4:
# 320 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	msgbox MCRoom_EventScript_BattleBianca_Text_3
	goto MCRoom_EventScript_BattleBianca_1

MCRoom_EventScript_BattleBianca_10:
# 341 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	call MCRoom_EventScript_StartBiancaBattleSnivy
	goto MCRoom_EventScript_BattleBianca_8

MCRoom_EventScript_BattleBianca_11:
# 343 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	call MCRoom_EventScript_StartBiancaBattleTepig
	goto MCRoom_EventScript_BattleBianca_8

MCRoom_EventScript_BattleBianca_12:
# 345 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	call MCRoom_EventScript_StartBiancaBattleOshawott
	goto MCRoom_EventScript_BattleBianca_8


MCRoom_EventScript_BattleCheren::
# 351 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	lockall
# 352 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	msgbox MCRoom_EventScript_BattleCheren_Text_0
# 353 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	waitmessage
# 354 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	msgbox MCRoom_EventScript_BattleCheren_Text_1
# 355 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	waitmessage
# 356 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	applymovement LOCALID_MC2F_BIANCA, MCRoom_EventScript_BattleCheren_Movement_0
# 357 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	waitmovement 0
# 358 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	delay 60
# 359 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	applymovement LOCALID_MC2F_BIANCA, MCRoom_EventScript_Beggining_Movement_4
# 360 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	waitmovement 0
# 361 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	delay 60
# 362 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	applymovement LOCALID_MC2F_BIANCA, MCRoom_EventScript_Beggining_Movement_2
# 363 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	waitmovement 0
# 364 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	delay 60
# 365 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	msgbox MCRoom_EventScript_BattleCheren_Text_2
# 366 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	applymovement LOCALID_MC2F_BIANCA, MCRoom_EventScript_Beggining_Movement_1
# 367 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	waitmovement 0
# 368 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	msgbox MCRoom_EventScript_BattleCheren_Text_3
# 370 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	waitmessage
# 371 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	applymovement LOCALID_MC2F_CHEREN, MCRoom_EventScript_BattleCheren_Movement_1
# 372 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	waitmovement 0
# 373 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	msgbox MCRoom_EventScript_BattleCheren_Text_4
# 375 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	playfanfare MUS_HEAL
# 376 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	waitfanfare
# 377 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	applymovement LOCALID_MC2F_CHEREN, MCRoom_EventScript_Beggining_Movement_1
# 378 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	waitmovement 0
# 380 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	msgbox MCRoom_EventScript_BattleCheren_Text_5
# 382 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	playfanfare MUS_HEAL
# 383 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	waitfanfare
# 384 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	special HealPlayerParty
# 386 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	applymovement LOCALID_MC2F_BIANCA, Common_Movement_ExclamationMark
# 387 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	waitmovement 0
# 388 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	delay 60
# 389 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	applymovement LOCALID_MC2F_BIANCA, MCRoom_EventScript_BattleCheren_Movement_2
# 390 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	waitmovement 0
# 391 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MCRoom_EventScript_Beggining_Movement_4
# 392 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	applymovement LOCALID_MC2F_CHEREN, MCRoom_EventScript_Beggining_Movement_4
# 393 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	waitmovement 0
# 394 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	msgbox MCRoom_EventScript_BattleCheren_Text_6
# 396 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	msgbox MCRoom_EventScript_BattleCheren_Text_7
# 398 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	waitmessage
# 399 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	closemessage
# 400 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	applymovement LOCALID_MC2F_CHEREN, MCRoom_EventScript_BattleCheren_Movement_3
# 401 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	waitmovement 0
# 402 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MCRoom_EventScript_BattleCheren_Movement_0
# 403 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	waitmovement 0
# 404 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	switch VAR_STARTER_MON_FRLG
# 405 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	case 0, MCRoom_EventScript_BattleCheren_3
# 407 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	case 1, MCRoom_EventScript_BattleCheren_4
# 409 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	case 2, MCRoom_EventScript_BattleCheren_5
MCRoom_EventScript_BattleCheren_1:
# 412 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	waitmessage
# 413 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	closemessage
# 414 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	applymovement LOCALID_MC2F_CHEREN, Common_Movement_Delay48
# 415 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	waitmovement 0
# 417 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	switch VAR_STARTER_MON_FRLG
# 418 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	case 0, MCRoom_EventScript_BattleCheren_8
# 419 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	case 1, MCRoom_EventScript_BattleCheren_9
# 420 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	case 2, MCRoom_EventScript_BattleCheren_10
MCRoom_EventScript_BattleCheren_6:
# 422 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	releaseall
	end

MCRoom_EventScript_BattleCheren_3:
# 406 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	msgbox MCRoom_EventScript_BattleCheren_Text_8
	goto MCRoom_EventScript_BattleCheren_1

MCRoom_EventScript_BattleCheren_4:
# 408 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	msgbox MCRoom_EventScript_BattleCheren_Text_9
	goto MCRoom_EventScript_BattleCheren_1

MCRoom_EventScript_BattleCheren_5:
# 410 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	msgbox MCRoom_EventScript_BattleCheren_Text_10
	goto MCRoom_EventScript_BattleCheren_1

MCRoom_EventScript_BattleCheren_8:
# 418 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	call MCRoom_EventScript_StartCherenBattleSnivy
	goto MCRoom_EventScript_BattleCheren_6

MCRoom_EventScript_BattleCheren_9:
# 419 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	call MCRoom_EventScript_StartCherenBattleTepig
	goto MCRoom_EventScript_BattleCheren_6

MCRoom_EventScript_BattleCheren_10:
# 420 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	call MCRoom_EventScript_StartCherenBattleOshawott
	goto MCRoom_EventScript_BattleCheren_6


MCRoom_EventScript_PostBattles::
# 426 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	lockall
# 427 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	msgbox MCRoom_EventScript_PostBattles_Text_0
# 429 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	waitmessage
# 430 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	applymovement LOCALID_MC2F_CHEREN, MCRoom_EventScript_PostBattles_Movement_0
# 431 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	msgbox MCRoom_EventScript_PostBattles_Text_1
# 432 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	waitmessage
# 433 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	removeobject LOCALID_MC2F_CHEREN
# 434 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	applymovement LOCALID_MC2F_BIANCA, MCRoom_EventScript_PostBattles_Movement_1
# 435 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	waitmovement 0
# 436 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	removeobject LOCALID_MC2F_BIANCA
# 438 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	setflag FLAG_MC2F_BIANCA
# 439 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	setflag FLAG_MC2F_CHEREN
# 440 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	releaseall
	end


MCRoom_EventScript_StartBiancaBattleSnivy::
# 445 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_ROUTE_103_TREECKO, MCRoom_Text_BiancaDefeated
# 446 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	call MCRoom_EventScript_BattleCheren
	end


MCRoom_EventScript_StartBiancaBattleTepig::
# 450 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_ROUTE_103_TORCHIC, MCRoom_Text_BiancaDefeated
# 451 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	call MCRoom_EventScript_BattleCheren
	end


MCRoom_EventScript_StartBiancaBattleOshawott::
# 455 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_ROUTE_103_MUDKIP, MCRoom_Text_BiancaDefeated
# 456 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	call MCRoom_EventScript_BattleCheren
	end


MCRoom_EventScript_StartCherenBattleSnivy::
# 465 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_ROUTE_103_TREECKO, MCRoom_Text_CherenDefeated
# 466 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	call MCRoom_EventScript_PostBattles
	end


MCRoom_EventScript_StartCherenBattleTepig::
# 470 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_ROUTE_103_TORCHIC, MCRoom_Text_CherenDefeated
# 471 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	call MCRoom_EventScript_PostBattles
	end


MCRoom_EventScript_StartCherenBattleOshawott::
# 475 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_ROUTE_103_MUDKIP, MCRoom_Text_CherenDefeated
# 476 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	call MCRoom_EventScript_PostBattles
	end


MCRoom_EventScript_Cheren::
# 493 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	lock
# 494 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	faceplayer
# 495 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	compare VAR_LITTLEROOT_START, 2
	goto_if_eq MCRoom_EventScript_Cheren_2
# 499 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	msgbox MCRoom_EventScript_Cheren_Text_0
MCRoom_EventScript_Cheren_1:
# 501 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	release
	return

MCRoom_EventScript_Cheren_2:
# 496 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	msgbox MCRoom_Text_CherenWaitingForStarterChoice
	goto MCRoom_EventScript_Cheren_1


MCRoom_EventScript_Bianca::
# 505 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	lock
# 506 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	faceplayer
# 507 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	compare VAR_LITTLEROOT_START, 2
	goto_if_eq MCRoom_EventScript_Bianca_2
# 511 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	msgbox MCRoom_EventScript_Bianca_Text_0
MCRoom_EventScript_Bianca_1:
# 513 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	release
	return

MCRoom_EventScript_Bianca_2:
# 508 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	msgbox MCRoom_Text_BiancaWaitingForStarterChoice
	goto MCRoom_EventScript_Bianca_1


# 221 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
MCRoom_EventScript_DoNotLeaveBeggining_Movement_0:
# 221 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	walk_left
	step_end

# 229 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
MCRoom_EventScript_Beggining_Movement_0:
# 229 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	walk_down
	step_end

# 231 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
MCRoom_EventScript_Beggining_Movement_1:
# 231 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	face_left
	step_end

# 234 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
MCRoom_EventScript_Beggining_Movement_2:
# 234 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	face_down
	step_end

# 244 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
MCRoom_EventScript_Beggining_Movement_3:
# 244 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	walk_diag_northeast
# 244 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	walk_diag_northeast
# 244 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	walk_right
	step_end

# 251 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
MCRoom_EventScript_Beggining_Movement_4:
# 251 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	face_up
	step_end

# 256 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
MCRoom_EventScript_Beggining_Movement_5:
# 256 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	walk_right
# 256 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	walk_up
	step_end

# 261 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
MCRoom_EventScript_Beggining_Movement_6:
# 261 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	walk_diag_southwest
# 261 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	walk_diag_southwest
# 261 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	walk_left
	step_end

# 262 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
MCRoom_EventScript_Beggining_Movement_7:
# 262 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	walk_down
# 262 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	walk_left
# 262 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	walk_left
# 262 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	walk_left
# 262 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	walk_left
# 262 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	face_down
	step_end

# 268 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
MCRoom_EventScript_Beggining_Movement_8:
# 268 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	walk_left
# 268 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	walk_down
# 268 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	walk_down
# 268 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	face_right
	step_end

# 275 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
MCRoom_EventScript_Beggining_Movement_9:
# 275 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	walk_down
# 275 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	walk_left
# 275 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	face_down
	step_end

# 306 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
MCRoom_EventScript_BattleBianca_Movement_0:
# 306 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	walk_down
# 306 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	face_right
	step_end

# 309 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
MCRoom_EventScript_BattleBianca_Movement_1:
# 309 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	walk_down
# 309 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	face_left
	step_end

# 326 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
MCRoom_EventScript_BattleBianca_Movement_2:
# 326 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	walk_fast_up
# 326 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	walk_fast_up
# 326 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	walk_fast_up
# 326 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	walk_fast_up
# 326 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	face_down
	step_end

# 327 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
MCRoom_EventScript_BattleBianca_Movement_3:
# 327 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	walk_fast_up
# 327 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	walk_fast_up
# 327 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	face_right
	step_end

# 328 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
MCRoom_EventScript_BattleBianca_Movement_4:
# 328 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	walk_fast_right
# 328 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	walk_fast_right
# 328 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	walk_fast_right
# 328 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	walk_fast_up
# 328 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	walk_fast_up
# 328 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	face_left
	step_end

# 356 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
MCRoom_EventScript_BattleCheren_Movement_0:
# 356 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	face_right
	step_end

# 371 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
MCRoom_EventScript_BattleCheren_Movement_1:
# 371 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	walk_down
# 371 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	walk_down
# 371 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	face_right
	step_end

# 389 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
MCRoom_EventScript_BattleCheren_Movement_2:
# 389 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	walk_up
# 389 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	walk_up
# 389 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	walk_left
# 389 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	face_down
	step_end

# 400 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
MCRoom_EventScript_BattleCheren_Movement_3:
# 400 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	walk_right
# 400 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	face_left
	step_end

# 430 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
MCRoom_EventScript_PostBattles_Movement_0:
# 430 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	walk_right
# 430 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	walk_right
# 430 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	walk_up
# 430 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	walk_up
# 430 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	walk_right
	step_end

# 434 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
MCRoom_EventScript_PostBattles_Movement_1:
# 434 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	walk_right
# 434 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	walk_right
# 434 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	walk_right
# 434 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	walk_right
	step_end

PalletTown_PlayersHouse_2F_EventScript_NES_Text_0:
# 31 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	.string "{PLAYER} played with the NES.\p…Okay!\nIt's time to go!$"

PalletTown_PlayersHouse_2F_EventScript_Sign_Text_0:
# 33 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	.string "It's a posted notice…\pIf you're confused, ask for HELP!\nPress the L or R Button!$"

MCRoom_EventScript_Starter_Text_0:
# 39 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	.string "{PLAYER} opened the bag!$"

MCRoom_EventScript_Starter_Text_1:
# 40 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	.string "Which starter are you choosing?$"

MCRoom_EventScript_Starter_Text_2:
# 57 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	.string "Cheren: Go on. We are waiting...$"

MCRoom_EventScript_Snivy_Text_0:
# 81 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	.string "Are you sure?$"

MCRoom_EventScript_Snivy_Text_1:
# 86 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	.string "Received Snivy$"

MCRoom_EventScript_Snivy_Text_2:
# 103 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	.string "You have no more room for this Pokemon.$"

MCRoom_EventScript_Snivy_Text_3:
# 108 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	.string "You did not choose the Pokemon$"

MCRoom_EventScript_Tepig_Text_0:
# 122 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	.string "Received Tepig$"

MCRoom_EventScript_Oshawott_Text_0:
# 158 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	.string "Received Oshawott$"

NicknamePartyMon_Text_0:
# 188 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	.string "Do you want to give it a nickname?$"

MCRoom_EventScript_DoNotLeaveBeggining_Text_0:
# 220 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	.string "Cheren: Come here {PLAYER}!$"

MCRoom_EventScript_Beggining_Text_0:
# 232 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	.string "Cheren: {PLAYER}!\pI heard from Professor Juniper.\nWe can have a Pokémon?$"

MCRoom_EventScript_Beggining_Text_1:
# 236 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	.string "...\n...$"

MCRoom_EventScript_Beggining_Text_2:
# 237 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	.string "Cheren: What's keeping Bianca?$"

MCRoom_EventScript_Beggining_Text_3:
# 254 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	.string "Bianca: Am I a little late again?\nSo-oooo-orry!$"

MCRoom_EventScript_Beggining_Text_4:
# 258 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	.string "Cheren: Bianca...\lI've known for ten years that you\nhave no sense of time, but...seriously...\pToday's  the day we can get a\nPokémon from Professor Juniper!$"

MCRoom_EventScript_Beggining_Text_5:
# 266 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	.string "Bianca: I know. Sorry, {PLAYER}.\nSorry, Cheren.$"

MCRoom_EventScript_Beggining_Text_6:
# 272 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	.string "Bianca: So, where are the Pokémon?\pThey were delivered to {PLAYER}'s\nhouse, so {PLAYER} gets first pick.$"

MCRoom_EventScript_Beggining_Text_7:
# 273 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	.string "Cheren: Naturally.$"

MCRoom_EventScript_Beggining_Text_8:
# 280 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	.string "The Pokémon are waiting for us\ninside that bag.\pOK, {PLAYER}, you go first and take\na peek at the bag.\p I want to meet the Pokémon right now!$"

MCRoom_EventScript_ChooseNow_Text_0:
# 297 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	.string "Hey, don't leave.\nWe're waiting.$"

MCRoom_EventScript_BattleBianca_Text_0:
# 308 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	.string "Bianca: OK, I'll take this Pokémon!\nCheren, that one's yours!$"

MCRoom_EventScript_BattleBianca_Text_1:
# 312 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	.string "Cheren: Hey, how come you get to pick\nout my Pokémon?\pOh, never mind. I wanted Tepig\nfrom the start,  anyway.$"

MCRoom_EventScript_BattleBianca_Text_2:
# 316 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	.string "Cheren: Hey, how come you get to pick\nout my Pokémon?\pOh, never mind. I wanted Oshawott\nfrom the start,  anyway.$"

MCRoom_EventScript_BattleBianca_Text_3:
# 320 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	.string "Cheren: Hey, how come you get to pick\nout my Pokémon?\pOh, never mind. I wanted Snivy\nfrom the start,  anyway.$"

MCRoom_EventScript_BattleBianca_Text_4:
# 331 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	.string "Bianca: Everyone has chosen a Pokémon!\n...So that's that!\pHey, I know!\nLet's have a Pokémon battle!$"

MCRoom_EventScript_BattleBianca_Text_5:
# 332 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	.string "Cheren: Honestly, Bianca...\pEven though they're still weak Pokémon,\nyou shouldn't have Pokémon battles\l inside a house.\pDon't be a worrywart!\nThese little ones are weak, like you said.\pWe have to let them  battle so they'll get\nstronger. It's settled, {PLAYER}!\lGet ready for a Pokémon Battle!$"

MCRoom_EventScript_BattleCheren_Text_0:
# 352 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	.string "Bianca: Wow...\p{PLAYER}, you're gonna be\nan awesome Trainer someday, I can tell!\pNo doubt!$"

MCRoom_EventScript_BattleCheren_Text_1:
# 354 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	.string "Cheren: Uh...\n...\pBianca, Would you take a look around?$"

MCRoom_EventScript_BattleCheren_Text_2:
# 365 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	.string "Bianca: Wh-whoa!\nWhat happened?!$"

MCRoom_EventScript_BattleCheren_Text_3:
# 368 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	.string "Wow! Pokémon are amaaaaazing!!\nSo little, but so strong!\pI'm so glad that I get to have a\nPokémon!\p ...Oh.\nUm, sorry about your room, {PLAYER}.$"

MCRoom_EventScript_BattleCheren_Text_4:
# 373 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	.string "Cheren: You...are completely hopeless.\pHere!\nI'll restore your Pokémon for you.$"

MCRoom_EventScript_BattleCheren_Text_5:
# 380 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	.string "{PLAYER}'s Pokémon needs\nto be fixed up, too.$"

MCRoom_EventScript_BattleCheren_Text_6:
# 394 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	.string "Bianca: Hey, Cheren!\nHow about you battle, too?\pWith all you know, I'm sure you can\nbattle without  turning the room into\la disaster area like I did!$"

MCRoom_EventScript_BattleCheren_Text_7:
# 396 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	.string "Cheren: I believe you're right!\pIt'll be no problem for me to keep\nthe room from getting any mesier.\p Besides, it's not fair if you two are the\nonly ones who get to have fun battling!$"

MCRoom_EventScript_BattleCheren_Text_8:
# 406 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	.string "It's decided. You'll be my opponent...\nin our first Pokémon battle!\pLet's see what you can do, Tepig!$"

MCRoom_EventScript_BattleCheren_Text_9:
# 408 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	.string "It's decided. You'll be my opponent...\nin our first Pokémon battle!\pLet's see what you can do, Oshawott!$"

MCRoom_EventScript_BattleCheren_Text_10:
# 410 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	.string "It's decided. You'll be my opponent...\nin our first Pokémon battle!\pLet's see what you can do, Snivy!$"

MCRoom_EventScript_PostBattles_Text_0:
# 427 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	.string "Cheren: I made a strange blunder\nin my first battle, but\lthis feeling I have...\l...I'm finally a Trainer .\pBut first, we'd better go apologize to\nyour mother about this messed-up room.$"

MCRoom_EventScript_PostBattles_Text_1:
# 431 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	.string "Bianca: Oh!\nI'd better come, too!$"

MCRoom_EventScript_Cheren_Text_0:
# 499 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	.string "Cheren: Hi {PLAYER}!$"

MCRoom_EventScript_Bianca_Text_0:
# 511 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	.string "Bianca: Hi {PLAYER}!$"

MCRoom_Text_BiancaDefeated::
# 460 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	.string "The Pokémon on both sides did their\nbest!$"

MCRoom_Text_CherenDefeated::
# 480 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	.string "Ah! So that's a Pokémon battle!$"

MCRoom_Text_CherenWaitingForStarterChoice::
# 484 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	.string "Cheren: Would you get a move on\nand open the bag already?\pI'm sure the Pokémon are just as\nexcited to meet us!$"

MCRoom_Text_BiancaWaitingForStarterChoice::
# 488 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	.string "Bianca: Ooh!\nWhat kind of Pokémon could they be?$"
