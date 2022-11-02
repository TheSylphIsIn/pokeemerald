NewMap1_MapScripts::
	.byte 0
	

ActivateSurf::
	setflag FLAG_BADGE01_GET
	setflag FLAG_BADGE02_GET
	setflag FLAG_BADGE03_GET
	setflag FLAG_BADGE04_GET
	setflag FLAG_BADGE05_GET
	setflag FLAG_BADGE06_GET
	setflag FLAG_BADGE07_GET
	setflag FLAG_BADGE08_GET
	giveitem ITEM_HM01
	giveitem ITEM_HM02
	finditem ITEM_HM03
	giveitem ITEM_HM04
	giveitem ITEM_HM05
	giveitem ITEM_HM06
	giveitem ITEM_HM07
	giveitem ITEM_HM08
	end

SurfDashing::
	setflag FLAG_SYS_B_DASH_WATER
	msgbox CanSurf, MSGBOX_NPC
	end
	
CanSurf:
	.string "Press B to dash.$"
	
