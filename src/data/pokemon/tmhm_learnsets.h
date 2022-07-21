// #define TMHM_LEARNSET(moves) {(u32)(moves), ((u64)(moves) >> 32)}
// #define TMHM(tmhm) ((u64)1 << (ITEM_##tmhm - ITEM_TM01_FOCUS_PUNCH))

// This table determines which TMs and HMs a species is capable of learning.
// Each entry is a 64-bit bit array spread across two 32-bit values, with
// each bit corresponding to a TM or HM.

#define TMHM(tmhm)          ((u8) ((ITEM_##tmhm) - ITEM_TM01))
#define TMHM_LEARNSET_END   0xFF

static const u8 sNoneTMHMLearnset[] =
{
    TMHM_LEARNSET_END
};

static const u8 sBulbasaurTMHMLearnset[] =
{
	TMHM(TM06_TOXIC),
	TMHM(TM09_BULLET_SEED),
	TMHM_LEARNSET_END,
};

static const u8 sIvysaurTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sVenusaurTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sCharmanderTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sCharmeleonTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sCharizardTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sSquirtleTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sWartortleTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sBlastoiseTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sCaterpieTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sMetapodTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sButterfreeTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sWeedleTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sKakunaTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sBeedrillTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sPidgeyTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sPidgeottoTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sPidgeotTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sRattataTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sRaticateTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sSpearowTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sFearowTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sEkansTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sArbokTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sPikachuTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sRaichuTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sSandshrewTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sSandslashTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sNidoranFTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sNidorinaTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sNidoqueenTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sNidoranMTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sNidorinoTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sNidokingTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sClefairyTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sClefableTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sVulpixTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sNinetalesTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sJigglypuffTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sWigglytuffTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sZubatTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sGolbatTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sOddishTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sGloomTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sVileplumeTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sParasTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sParasectTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sVenonatTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sVenomothTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sDiglettTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sDugtrioTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sMeowthTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sPersianTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sPsyduckTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sGolduckTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sMankeyTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sPrimeapeTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sGrowlitheTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sArcanineTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sPoliwagTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sPoliwhirlTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sPoliwrathTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sAbraTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sKadabraTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sAlakazamTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sMachopTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sMachokeTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sMachampTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sBellsproutTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sWeepinbellTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sVictreebelTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sTentacoolTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sTentacruelTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sGeodudeTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sGravelerTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sGolemTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sPonytaTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sRapidashTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sSlowpokeTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sSlowbroTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sMagnemiteTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sMagnetonTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sFarfetchdTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sDoduoTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sDodrioTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sSeelTMHMLearnset[] =
{
	TMHM(HM03_SURF),
    TMHM_LEARNSET_END,
};

static const u8 sDewgongTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sGrimerTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sMukTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sShellderTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sCloysterTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sGastlyTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sHaunterTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sGengarTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sOnixTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sDrowzeeTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sHypnoTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sKrabbyTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sKinglerTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sVoltorbTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sElectrodeTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sExeggcuteTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sExeggutorTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sCuboneTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sMarowakTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sHitmonleeTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sHitmonchanTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sLickitungTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sKoffingTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sWeezingTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sRhyhornTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sRhydonTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sChanseyTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sTangelaTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sKangaskhanTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sHorseaTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sSeadraTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sGoldeenTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sSeakingTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sStaryuTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sStarmieTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sMrmimeTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sScytherTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sJynxTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sElectabuzzTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sMagmarTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sPinsirTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sTaurosTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sMagikarpTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sGyaradosTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sLaprasTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sDittoTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sEeveeTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sVaporeonTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sJolteonTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sFlareonTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sPorygonTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sOmanyteTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sOmastarTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sKabutoTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sKabutopsTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sAerodactylTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sSnorlaxTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sArticunoTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sZapdosTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sMoltresTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sDratiniTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sDragonairTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sDragoniteTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sMewtwoTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sMewTMHMLearnset[] =
{
	TMHM(TM01_FOCUS_PUNCH),
    TMHM_LEARNSET_END,
};

static const u8 sChikoritaTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sBayleefTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sMeganiumTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sCyndaquilTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sQuilavaTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sTyphlosionTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sTotodileTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sCroconawTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sFeraligatrTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sSentretTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sFurretTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sHoothootTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sNoctowlTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sLedybaTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sLedianTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sSpinarakTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sAriadosTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sCrobatTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sChinchouTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sLanturnTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sPichuTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sCleffaTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sIgglybuffTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sTogepiTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sTogeticTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sNatuTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sXatuTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sMareepTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sFlaaffyTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sAmpharosTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sBellossomTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sMarillTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sAzumarillTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sSudowoodoTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sPolitoedTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sHoppipTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sSkiploomTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sJumpluffTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sAipomTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sSunkernTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sSunfloraTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sYanmaTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sWooperTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sQuagsireTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sEspeonTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sUmbreonTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sMurkrowTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sSlowkingTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sMisdreavusTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sUnownTMHMLearnset[] =
{
    TMHM(TM10_HIDDEN_POWER),
    TMHM_LEARNSET_END,
};

static const u8 sWobbuffetTMHMLearnset[] =
{
    TMHM(TM20_SAFEGUARD),
    TMHM_LEARNSET_END,
};

static const u8 sGirafarigTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sPinecoTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sForretressTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sDunsparceTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sGligarTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sSteelixTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sSnubbullTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sGranbullTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sQwilfishTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sScizorTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sShuckleTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sHeracrossTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sSneaselTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sTeddiursaTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sUrsaringTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sSlugmaTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sMagcargoTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sSwinubTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sPiloswineTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sCorsolaTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sRemoraidTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sOctilleryTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sDelibirdTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sMantineTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sSkarmoryTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sHoundourTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sHoundoomTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sKingdraTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sPhanpyTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sDonphanTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sPorygon2TMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sStantlerTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sSmeargleTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sTyrogueTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sHitmontopTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sSmoochumTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sElekidTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sMagbyTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sMiltankTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sBlisseyTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sRaikouTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sEnteiTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sSuicuneTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sLarvitarTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sPupitarTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sTyranitarTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sLugiaTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sHoOhTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sCelebiTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sTreeckoTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sGrovyleTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sSceptileTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sTorchicTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sCombuskenTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sBlazikenTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sMudkipTMHMLearnset[] =
{
	TMHM(HM03_SURF),
    TMHM_LEARNSET_END,
};

static const u8 sMarshtompTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sSwampertTMHMLearnset[] =
{
    TMHM(TM05_ROAR),
    TMHM_LEARNSET_END,
};

static const u8 sPoochyenaTMHMLearnset[] =
{
    TMHM(TM05_ROAR),
    TMHM_LEARNSET_END,
};

static const u8 sMightyenaTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sZigzagoonTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sLinooneTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sWurmpleTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sSilcoonTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sBeautiflyTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sCascoonTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sDustoxTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sLotadTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sLombreTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sLudicoloTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sSeedotTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sNuzleafTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sShiftryTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sTaillowTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sSwellowTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sWingullTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sPelipperTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sRaltsTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sKirliaTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sGardevoirTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sSurskitTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sMasquerainTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sShroomishTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sBreloomTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sSlakothTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sVigorothTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sSlakingTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sNincadaTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sNinjaskTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sShedinjaTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sWhismurTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sLoudredTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sExploudTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sMakuhitaTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sHariyamaTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sAzurillTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sNosepassTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sSkittyTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sDelcattyTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sSableyeTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sMawileTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sAronTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sLaironTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sAggronTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sMedititeTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sMedichamTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sElectrikeTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sManectricTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sPlusleTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sMinunTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sVolbeatTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sIllumiseTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sRoseliaTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sGulpinTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sSwalotTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sCarvanhaTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sSharpedoTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sWailmerTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sWailordTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sNumelTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sCameruptTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sTorkoalTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sSpoinkTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sGrumpigTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sSpindaTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sTrapinchTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sVibravaTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sFlygonTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sCacneaTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sCacturneTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sSwabluTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sAltariaTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sZangooseTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sSeviperTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sLunatoneTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sSolrockTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sBarboachTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sWhiscashTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sCorphishTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sCrawdauntTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sBaltoyTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sClaydolTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sLileepTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sCradilyTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sAnorithTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sArmaldoTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sFeebasTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sMiloticTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sCastformTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sKecleonTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sShuppetTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sBanetteTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sDuskullTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sDusclopsTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sTropiusTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sChimechoTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sAbsolTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sWynautTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sSnoruntTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sGlalieTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sSphealTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sSealeoTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sWalreinTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sClamperlTMHMLearnset[] =
{ 
    TMHM_LEARNSET_END,
};

static const u8 sHuntailTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sGorebyssTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sRelicanthTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sLuvdiscTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sBagonTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sShelgonTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sSalamenceTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sBeldumTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sMetangTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sMetagrossTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sRegirockTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sRegiceTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sRegisteelTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sLatiasTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sLatiosTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sKyogreTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sGroudonTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sRayquazaTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sJirachiTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sDeoxysTMHMLearnset[] =
{
    TMHM_LEARNSET_END,
};

static const u8 sDubsnakeTMHMLearnset[] = 
{
	TMHM_LEARNSET_END,
};

static const u8 sHydroilTMHMLearnset[] = 
{
	TMHM_LEARNSET_END,
};

static const u8 sWycernTMHMLearnset[] = 
{
	TMHM_LEARNSET_END,
};

static const u8 sBitteragonTMHMLearnset[] = 
{
	TMHM_LEARNSET_END,
};

static const u8 sCactumbraTMHMLearnset[] = 
{
	TMHM_LEARNSET_END,
};

static const u8 sObsicargoTMHMLearnset[] = 
{
	TMHM_LEARNSET_END,
};

static const u8 sNorwhaleTMHMLearnset[] = 
{
	TMHM_LEARNSET_END,
};

const u8 *const gTMHMLearnsets[] =
{
    [SPECIES_NONE] = sNoneTMHMLearnset,
    [SPECIES_BULBASAUR] = sBulbasaurTMHMLearnset,
    [SPECIES_IVYSAUR] = sIvysaurTMHMLearnset,
    [SPECIES_VENUSAUR] = sVenusaurTMHMLearnset,
    [SPECIES_CHARMANDER] = sCharmanderTMHMLearnset,
    [SPECIES_CHARMELEON] = sCharmeleonTMHMLearnset,
    [SPECIES_CHARIZARD] = sCharizardTMHMLearnset,
    [SPECIES_SQUIRTLE] = sSquirtleTMHMLearnset,
    [SPECIES_WARTORTLE] = sWartortleTMHMLearnset,
    [SPECIES_BLASTOISE] = sBlastoiseTMHMLearnset,
    [SPECIES_CATERPIE] = sCaterpieTMHMLearnset,
    [SPECIES_METAPOD] = sMetapodTMHMLearnset,
    [SPECIES_BUTTERFREE] = sButterfreeTMHMLearnset,
    [SPECIES_WEEDLE] = sWeedleTMHMLearnset,
    [SPECIES_KAKUNA] = sKakunaTMHMLearnset,
    [SPECIES_BEEDRILL] = sBeedrillTMHMLearnset,
    [SPECIES_PIDGEY] = sPidgeyTMHMLearnset,
    [SPECIES_PIDGEOTTO] = sPidgeottoTMHMLearnset,
    [SPECIES_PIDGEOT] = sPidgeotTMHMLearnset,
    [SPECIES_RATTATA] = sRattataTMHMLearnset,
    [SPECIES_RATICATE] = sRaticateTMHMLearnset,
    [SPECIES_SPEAROW] = sSpearowTMHMLearnset,
    [SPECIES_FEAROW] = sFearowTMHMLearnset,
    [SPECIES_EKANS] = sEkansTMHMLearnset,
    [SPECIES_ARBOK] = sArbokTMHMLearnset,
    [SPECIES_PIKACHU] = sPikachuTMHMLearnset,
    [SPECIES_RAICHU] = sRaichuTMHMLearnset,
    [SPECIES_SANDSHREW] = sSandshrewTMHMLearnset,
    [SPECIES_SANDSLASH] = sSandslashTMHMLearnset,
    [SPECIES_NIDORAN_F] = sNidoranFTMHMLearnset,
    [SPECIES_NIDORINA] = sNidorinaTMHMLearnset,
    [SPECIES_NIDOQUEEN] = sNidoqueenTMHMLearnset,
    [SPECIES_NIDORAN_M] = sNidoranMTMHMLearnset,
    [SPECIES_NIDORINO] = sNidorinoTMHMLearnset,
    [SPECIES_NIDOKING] = sNidokingTMHMLearnset,
    [SPECIES_CLEFAIRY] = sClefairyTMHMLearnset,
    [SPECIES_CLEFABLE] = sClefableTMHMLearnset,
    [SPECIES_VULPIX] = sVulpixTMHMLearnset,
    [SPECIES_NINETALES] = sNinetalesTMHMLearnset,
    [SPECIES_JIGGLYPUFF] = sJigglypuffTMHMLearnset,
    [SPECIES_WIGGLYTUFF] = sWigglytuffTMHMLearnset,
    [SPECIES_ZUBAT] = sZubatTMHMLearnset,
    [SPECIES_GOLBAT] = sGolbatTMHMLearnset,
    [SPECIES_ODDISH] = sOddishTMHMLearnset,
    [SPECIES_GLOOM] = sGloomTMHMLearnset,
    [SPECIES_VILEPLUME] = sVileplumeTMHMLearnset,
    [SPECIES_PARAS] = sParasTMHMLearnset,
    [SPECIES_PARASECT] = sParasectTMHMLearnset,
    [SPECIES_VENONAT] = sVenonatTMHMLearnset,
    [SPECIES_VENOMOTH] = sVenomothTMHMLearnset,
    [SPECIES_DIGLETT] = sDiglettTMHMLearnset,
    [SPECIES_DUGTRIO] = sDugtrioTMHMLearnset,
    [SPECIES_MEOWTH] = sMeowthTMHMLearnset,
    [SPECIES_PERSIAN] = sPersianTMHMLearnset,
    [SPECIES_PSYDUCK] = sPsyduckTMHMLearnset,
    [SPECIES_GOLDUCK] = sGolduckTMHMLearnset,
    [SPECIES_MANKEY] = sMankeyTMHMLearnset,
    [SPECIES_PRIMEAPE] = sPrimeapeTMHMLearnset,
    [SPECIES_GROWLITHE] = sGrowlitheTMHMLearnset,
    [SPECIES_ARCANINE] = sArcanineTMHMLearnset,
    [SPECIES_POLIWAG] = sPoliwagTMHMLearnset,
    [SPECIES_POLIWHIRL] = sPoliwhirlTMHMLearnset,
    [SPECIES_POLIWRATH] = sPoliwrathTMHMLearnset,
    [SPECIES_ABRA] = sAbraTMHMLearnset,
    [SPECIES_KADABRA] = sKadabraTMHMLearnset,
    [SPECIES_ALAKAZAM] = sAlakazamTMHMLearnset,
    [SPECIES_MACHOP] = sMachopTMHMLearnset,
    [SPECIES_MACHOKE] = sMachokeTMHMLearnset,
    [SPECIES_MACHAMP] = sMachampTMHMLearnset,
    [SPECIES_BELLSPROUT] = sBellsproutTMHMLearnset,
    [SPECIES_WEEPINBELL] = sWeepinbellTMHMLearnset,
    [SPECIES_VICTREEBEL] = sVictreebelTMHMLearnset,
    [SPECIES_TENTACOOL] = sTentacoolTMHMLearnset,
    [SPECIES_TENTACRUEL] = sTentacruelTMHMLearnset,
    [SPECIES_GEODUDE] = sGeodudeTMHMLearnset,
    [SPECIES_GRAVELER] = sGravelerTMHMLearnset,
    [SPECIES_GOLEM] = sGolemTMHMLearnset,
    [SPECIES_PONYTA] = sPonytaTMHMLearnset,
    [SPECIES_RAPIDASH] = sRapidashTMHMLearnset,
    [SPECIES_SLOWPOKE] = sSlowpokeTMHMLearnset,
    [SPECIES_SLOWBRO] = sSlowbroTMHMLearnset,
    [SPECIES_MAGNEMITE] = sMagnemiteTMHMLearnset,
    [SPECIES_MAGNETON] = sMagnetonTMHMLearnset,
    [SPECIES_FARFETCHD] = sFarfetchdTMHMLearnset,
    [SPECIES_DODUO] = sDoduoTMHMLearnset,
    [SPECIES_DODRIO] = sDodrioTMHMLearnset,
    [SPECIES_SEEL] = sSeelTMHMLearnset,
    [SPECIES_DEWGONG] = sDewgongTMHMLearnset,
    [SPECIES_GRIMER] = sGrimerTMHMLearnset,
    [SPECIES_MUK] = sMukTMHMLearnset,
    [SPECIES_SHELLDER] = sShellderTMHMLearnset,
    [SPECIES_CLOYSTER] = sCloysterTMHMLearnset,
    [SPECIES_GASTLY] = sGastlyTMHMLearnset,
    [SPECIES_HAUNTER] = sHaunterTMHMLearnset,
    [SPECIES_GENGAR] = sGengarTMHMLearnset,
    [SPECIES_ONIX] = sOnixTMHMLearnset,
    [SPECIES_DROWZEE] = sDrowzeeTMHMLearnset,
    [SPECIES_HYPNO] = sHypnoTMHMLearnset,
    [SPECIES_KRABBY] = sKrabbyTMHMLearnset,
    [SPECIES_KINGLER] = sKinglerTMHMLearnset,
    [SPECIES_VOLTORB] = sVoltorbTMHMLearnset,
    [SPECIES_ELECTRODE] = sElectrodeTMHMLearnset,
    [SPECIES_EXEGGCUTE] = sExeggcuteTMHMLearnset,
    [SPECIES_EXEGGUTOR] = sExeggutorTMHMLearnset,
    [SPECIES_CUBONE] = sCuboneTMHMLearnset,
    [SPECIES_MAROWAK] = sMarowakTMHMLearnset,
    [SPECIES_HITMONLEE] = sHitmonleeTMHMLearnset,
    [SPECIES_HITMONCHAN] = sHitmonchanTMHMLearnset,
    [SPECIES_LICKITUNG] = sLickitungTMHMLearnset,
    [SPECIES_KOFFING] = sKoffingTMHMLearnset,
    [SPECIES_WEEZING] = sWeezingTMHMLearnset,
    [SPECIES_RHYHORN] = sRhyhornTMHMLearnset,
    [SPECIES_RHYDON] = sRhydonTMHMLearnset,
    [SPECIES_CHANSEY] = sChanseyTMHMLearnset,
    [SPECIES_TANGELA] = sTangelaTMHMLearnset,
    [SPECIES_KANGASKHAN] = sKangaskhanTMHMLearnset,
    [SPECIES_HORSEA] = sHorseaTMHMLearnset,
    [SPECIES_SEADRA] = sSeadraTMHMLearnset,
    [SPECIES_GOLDEEN] = sGoldeenTMHMLearnset,
    [SPECIES_SEAKING] = sSeakingTMHMLearnset,
    [SPECIES_STARYU] = sStaryuTMHMLearnset,
    [SPECIES_STARMIE] = sStarmieTMHMLearnset,
    [SPECIES_MR_MIME] = sMrmimeTMHMLearnset,
    [SPECIES_SCYTHER] = sScytherTMHMLearnset,
    [SPECIES_JYNX] = sJynxTMHMLearnset,
    [SPECIES_ELECTABUZZ] = sElectabuzzTMHMLearnset,
    [SPECIES_MAGMAR] = sMagmarTMHMLearnset,
    [SPECIES_PINSIR] = sPinsirTMHMLearnset,
    [SPECIES_TAUROS] = sTaurosTMHMLearnset,
    [SPECIES_MAGIKARP] = sMagikarpTMHMLearnset,
    [SPECIES_GYARADOS] = sGyaradosTMHMLearnset,
    [SPECIES_LAPRAS] = sLaprasTMHMLearnset,
    [SPECIES_DITTO] = sDittoTMHMLearnset,
    [SPECIES_EEVEE] = sEeveeTMHMLearnset,
    [SPECIES_VAPOREON] = sVaporeonTMHMLearnset,
    [SPECIES_JOLTEON] = sJolteonTMHMLearnset,
    [SPECIES_FLAREON] = sFlareonTMHMLearnset,
    [SPECIES_PORYGON] = sPorygonTMHMLearnset,
    [SPECIES_OMANYTE] = sOmanyteTMHMLearnset,
    [SPECIES_OMASTAR] = sOmastarTMHMLearnset,
    [SPECIES_KABUTO] = sKabutoTMHMLearnset,
    [SPECIES_KABUTOPS] = sKabutopsTMHMLearnset,
    [SPECIES_AERODACTYL] = sAerodactylTMHMLearnset,
    [SPECIES_SNORLAX] = sSnorlaxTMHMLearnset,
    [SPECIES_ARTICUNO] = sArticunoTMHMLearnset,
    [SPECIES_ZAPDOS] = sZapdosTMHMLearnset,
    [SPECIES_MOLTRES] = sMoltresTMHMLearnset,
    [SPECIES_DRATINI] = sDratiniTMHMLearnset,
    [SPECIES_DRAGONAIR] = sDragonairTMHMLearnset,
    [SPECIES_DRAGONITE] = sDragoniteTMHMLearnset,
    [SPECIES_MEWTWO] = sMewtwoTMHMLearnset,
    [SPECIES_MEW] = sMewTMHMLearnset,
    [SPECIES_CHIKORITA] = sChikoritaTMHMLearnset,
    [SPECIES_BAYLEEF] = sBayleefTMHMLearnset,
    [SPECIES_MEGANIUM] = sMeganiumTMHMLearnset,
    [SPECIES_CYNDAQUIL] = sCyndaquilTMHMLearnset,
    [SPECIES_QUILAVA] = sQuilavaTMHMLearnset,
    [SPECIES_TYPHLOSION] = sTyphlosionTMHMLearnset,
    [SPECIES_TOTODILE] = sTotodileTMHMLearnset,
    [SPECIES_CROCONAW] = sCroconawTMHMLearnset,
    [SPECIES_FERALIGATR] = sFeraligatrTMHMLearnset,
    [SPECIES_SENTRET] = sSentretTMHMLearnset,
    [SPECIES_FURRET] = sFurretTMHMLearnset,
    [SPECIES_HOOTHOOT] = sHoothootTMHMLearnset,
    [SPECIES_NOCTOWL] = sNoctowlTMHMLearnset,
    [SPECIES_LEDYBA] = sLedybaTMHMLearnset,
    [SPECIES_LEDIAN] = sLedianTMHMLearnset,
    [SPECIES_SPINARAK] = sSpinarakTMHMLearnset,
    [SPECIES_ARIADOS] = sAriadosTMHMLearnset,
    [SPECIES_CROBAT] = sCrobatTMHMLearnset,
    [SPECIES_CHINCHOU] = sChinchouTMHMLearnset,
    [SPECIES_LANTURN] = sLanturnTMHMLearnset,
    [SPECIES_PICHU] = sPichuTMHMLearnset,
    [SPECIES_CLEFFA] = sCleffaTMHMLearnset,
    [SPECIES_IGGLYBUFF] = sIgglybuffTMHMLearnset,
    [SPECIES_TOGEPI] = sTogepiTMHMLearnset,
    [SPECIES_TOGETIC] = sTogeticTMHMLearnset,
    [SPECIES_NATU] = sNatuTMHMLearnset,
    [SPECIES_XATU] = sXatuTMHMLearnset,
    [SPECIES_MAREEP] = sMareepTMHMLearnset,
    [SPECIES_FLAAFFY] = sFlaaffyTMHMLearnset,
    [SPECIES_AMPHAROS] = sAmpharosTMHMLearnset,
    [SPECIES_BELLOSSOM] = sBellossomTMHMLearnset,
    [SPECIES_MARILL] = sMarillTMHMLearnset,
    [SPECIES_AZUMARILL] = sAzumarillTMHMLearnset,
    [SPECIES_SUDOWOODO] = sSudowoodoTMHMLearnset,
    [SPECIES_POLITOED] = sPolitoedTMHMLearnset,
    [SPECIES_HOPPIP] = sHoppipTMHMLearnset,
    [SPECIES_SKIPLOOM] = sSkiploomTMHMLearnset,
    [SPECIES_JUMPLUFF] = sJumpluffTMHMLearnset,
    [SPECIES_AIPOM] = sAipomTMHMLearnset,
    [SPECIES_SUNKERN] = sSunkernTMHMLearnset,
    [SPECIES_SUNFLORA] = sSunfloraTMHMLearnset,
    [SPECIES_YANMA] = sYanmaTMHMLearnset,
    [SPECIES_WOOPER] = sWooperTMHMLearnset,
    [SPECIES_QUAGSIRE] = sQuagsireTMHMLearnset,
    [SPECIES_ESPEON] = sEspeonTMHMLearnset,
    [SPECIES_UMBREON] = sUmbreonTMHMLearnset,
    [SPECIES_MURKROW] = sMurkrowTMHMLearnset,
    [SPECIES_SLOWKING] = sSlowkingTMHMLearnset,
    [SPECIES_MISDREAVUS] = sMisdreavusTMHMLearnset,
    [SPECIES_UNOWN] = sUnownTMHMLearnset,
    [SPECIES_WOBBUFFET] = sWobbuffetTMHMLearnset,
    [SPECIES_GIRAFARIG] = sGirafarigTMHMLearnset,
    [SPECIES_PINECO] = sPinecoTMHMLearnset,
    [SPECIES_FORRETRESS] = sForretressTMHMLearnset,
    [SPECIES_DUNSPARCE] = sDunsparceTMHMLearnset,
    [SPECIES_GLIGAR] = sGligarTMHMLearnset,
    [SPECIES_STEELIX] = sSteelixTMHMLearnset,
    [SPECIES_SNUBBULL] = sSnubbullTMHMLearnset,
    [SPECIES_GRANBULL] = sGranbullTMHMLearnset,
    [SPECIES_QWILFISH] = sQwilfishTMHMLearnset,
    [SPECIES_SCIZOR] = sScizorTMHMLearnset,
    [SPECIES_SHUCKLE] = sShuckleTMHMLearnset,
    [SPECIES_HERACROSS] = sHeracrossTMHMLearnset,
    [SPECIES_SNEASEL] = sSneaselTMHMLearnset,
    [SPECIES_TEDDIURSA] = sTeddiursaTMHMLearnset,
    [SPECIES_URSARING] = sUrsaringTMHMLearnset,
    [SPECIES_SLUGMA] = sSlugmaTMHMLearnset,
    [SPECIES_MAGCARGO] = sMagcargoTMHMLearnset,
    [SPECIES_SWINUB] = sSwinubTMHMLearnset,
    [SPECIES_PILOSWINE] = sPiloswineTMHMLearnset,
    [SPECIES_CORSOLA] = sCorsolaTMHMLearnset,
    [SPECIES_REMORAID] = sRemoraidTMHMLearnset,
    [SPECIES_OCTILLERY] = sOctilleryTMHMLearnset,
    [SPECIES_DELIBIRD] = sDelibirdTMHMLearnset,
    [SPECIES_MANTINE] = sMantineTMHMLearnset,
    [SPECIES_SKARMORY] = sSkarmoryTMHMLearnset,
    [SPECIES_HOUNDOUR] = sHoundourTMHMLearnset,
    [SPECIES_HOUNDOOM] = sHoundoomTMHMLearnset,
    [SPECIES_KINGDRA] = sKingdraTMHMLearnset,
    [SPECIES_PHANPY] = sPhanpyTMHMLearnset,
    [SPECIES_DONPHAN] = sDonphanTMHMLearnset,
    [SPECIES_PORYGON2] = sPorygon2TMHMLearnset,
    [SPECIES_STANTLER] = sStantlerTMHMLearnset,
    [SPECIES_SMEARGLE] = sSmeargleTMHMLearnset,
    [SPECIES_TYROGUE] = sTyrogueTMHMLearnset,
    [SPECIES_HITMONTOP] = sHitmontopTMHMLearnset,
    [SPECIES_SMOOCHUM] = sSmoochumTMHMLearnset,
    [SPECIES_ELEKID] = sElekidTMHMLearnset,
    [SPECIES_MAGBY] = sMagbyTMHMLearnset,
    [SPECIES_MILTANK] = sMiltankTMHMLearnset,
    [SPECIES_BLISSEY] = sBlisseyTMHMLearnset,
    [SPECIES_RAIKOU] = sRaikouTMHMLearnset,
    [SPECIES_ENTEI] = sEnteiTMHMLearnset,
    [SPECIES_SUICUNE] = sSuicuneTMHMLearnset,
    [SPECIES_LARVITAR] = sLarvitarTMHMLearnset,
    [SPECIES_PUPITAR] = sPupitarTMHMLearnset,
    [SPECIES_TYRANITAR] = sTyranitarTMHMLearnset,
    [SPECIES_LUGIA] = sLugiaTMHMLearnset,
    [SPECIES_HO_OH] = sHoOhTMHMLearnset,
    [SPECIES_CELEBI] = sCelebiTMHMLearnset,
    [SPECIES_OLD_UNOWN_B] = sNoneTMHMLearnset,
    [SPECIES_OLD_UNOWN_C] = sNoneTMHMLearnset,
    [SPECIES_OLD_UNOWN_D] = sNoneTMHMLearnset,
    [SPECIES_OLD_UNOWN_E] = sNoneTMHMLearnset,
    [SPECIES_OLD_UNOWN_F] = sNoneTMHMLearnset,
    [SPECIES_OLD_UNOWN_G] = sNoneTMHMLearnset,
    [SPECIES_OLD_UNOWN_H] = sNoneTMHMLearnset,
    [SPECIES_OLD_UNOWN_I] = sNoneTMHMLearnset,
    [SPECIES_OLD_UNOWN_J] = sNoneTMHMLearnset,
    [SPECIES_OLD_UNOWN_K] = sNoneTMHMLearnset,
    [SPECIES_OLD_UNOWN_L] = sNoneTMHMLearnset,
    [SPECIES_OLD_UNOWN_M] = sNoneTMHMLearnset,
    [SPECIES_OLD_UNOWN_N] = sNoneTMHMLearnset,
    [SPECIES_OLD_UNOWN_O] = sNoneTMHMLearnset,
    [SPECIES_OLD_UNOWN_P] = sNoneTMHMLearnset,
    [SPECIES_OLD_UNOWN_Q] = sNoneTMHMLearnset,
    [SPECIES_OLD_UNOWN_R] = sNoneTMHMLearnset,
    [SPECIES_OLD_UNOWN_S] = sNoneTMHMLearnset,
    [SPECIES_OLD_UNOWN_T] = sNoneTMHMLearnset,
    [SPECIES_OLD_UNOWN_U] = sNoneTMHMLearnset,
    [SPECIES_OLD_UNOWN_V] = sNoneTMHMLearnset,
    [SPECIES_OLD_UNOWN_W] = sNoneTMHMLearnset,
    [SPECIES_OLD_UNOWN_X] = sNoneTMHMLearnset,
    [SPECIES_OLD_UNOWN_Y] = sNoneTMHMLearnset,
    [SPECIES_OLD_UNOWN_Z] = sNoneTMHMLearnset,
    [SPECIES_TREECKO] = sTreeckoTMHMLearnset,
    [SPECIES_GROVYLE] = sGrovyleTMHMLearnset,
    [SPECIES_SCEPTILE] = sSceptileTMHMLearnset,
    [SPECIES_TORCHIC] = sTorchicTMHMLearnset,
    [SPECIES_COMBUSKEN] = sCombuskenTMHMLearnset,
    [SPECIES_BLAZIKEN] = sBlazikenTMHMLearnset,
    [SPECIES_MUDKIP] = sMudkipTMHMLearnset,
    [SPECIES_MARSHTOMP] = sMarshtompTMHMLearnset,
    [SPECIES_SWAMPERT] = sSwampertTMHMLearnset,
    [SPECIES_POOCHYENA] = sPoochyenaTMHMLearnset,
    [SPECIES_MIGHTYENA] = sMightyenaTMHMLearnset,
    [SPECIES_ZIGZAGOON] = sZigzagoonTMHMLearnset,
    [SPECIES_LINOONE] = sLinooneTMHMLearnset,
    [SPECIES_WURMPLE] = sWurmpleTMHMLearnset,
    [SPECIES_SILCOON] = sSilcoonTMHMLearnset,
    [SPECIES_BEAUTIFLY] = sBeautiflyTMHMLearnset,
    [SPECIES_CASCOON] = sCascoonTMHMLearnset,
    [SPECIES_DUSTOX] = sDustoxTMHMLearnset,
    [SPECIES_LOTAD] = sLotadTMHMLearnset,
    [SPECIES_LOMBRE] = sLombreTMHMLearnset,
    [SPECIES_LUDICOLO] = sLudicoloTMHMLearnset,
    [SPECIES_SEEDOT] = sSeedotTMHMLearnset,
    [SPECIES_NUZLEAF] = sNuzleafTMHMLearnset,
    [SPECIES_SHIFTRY] = sShiftryTMHMLearnset,
    [SPECIES_NINCADA] = sNincadaTMHMLearnset,
    [SPECIES_NINJASK] = sNinjaskTMHMLearnset,
    [SPECIES_SHEDINJA] = sShedinjaTMHMLearnset,
    [SPECIES_TAILLOW] = sTaillowTMHMLearnset,
    [SPECIES_SWELLOW] = sSwellowTMHMLearnset,
    [SPECIES_SHROOMISH] = sShroomishTMHMLearnset,
    [SPECIES_BRELOOM] = sBreloomTMHMLearnset,
    [SPECIES_SPINDA] = sSpindaTMHMLearnset,
    [SPECIES_WINGULL] = sWingullTMHMLearnset,
    [SPECIES_PELIPPER] = sPelipperTMHMLearnset,
    [SPECIES_SURSKIT] = sSurskitTMHMLearnset,
    [SPECIES_MASQUERAIN] = sMasquerainTMHMLearnset,
    [SPECIES_WAILMER] = sWailmerTMHMLearnset,
    [SPECIES_WAILORD] = sWailordTMHMLearnset,
    [SPECIES_SKITTY] = sSkittyTMHMLearnset,
    [SPECIES_DELCATTY] = sDelcattyTMHMLearnset,
    [SPECIES_KECLEON] = sKecleonTMHMLearnset,
    [SPECIES_BALTOY] = sBaltoyTMHMLearnset,
    [SPECIES_CLAYDOL] = sClaydolTMHMLearnset,
    [SPECIES_NOSEPASS] = sNosepassTMHMLearnset,
    [SPECIES_TORKOAL] = sTorkoalTMHMLearnset,
    [SPECIES_SABLEYE] = sSableyeTMHMLearnset,
    [SPECIES_BARBOACH] = sBarboachTMHMLearnset,
    [SPECIES_WHISCASH] = sWhiscashTMHMLearnset,
    [SPECIES_LUVDISC] = sLuvdiscTMHMLearnset,
    [SPECIES_CORPHISH] = sCorphishTMHMLearnset,
    [SPECIES_CRAWDAUNT] = sCrawdauntTMHMLearnset,
    [SPECIES_FEEBAS] = sFeebasTMHMLearnset,
    [SPECIES_MILOTIC] = sMiloticTMHMLearnset,
    [SPECIES_CARVANHA] = sCarvanhaTMHMLearnset,
    [SPECIES_SHARPEDO] = sSharpedoTMHMLearnset,
    [SPECIES_TRAPINCH] = sTrapinchTMHMLearnset,
    [SPECIES_VIBRAVA] = sVibravaTMHMLearnset,
    [SPECIES_FLYGON] = sFlygonTMHMLearnset,
    [SPECIES_MAKUHITA] = sMakuhitaTMHMLearnset,
    [SPECIES_HARIYAMA] = sHariyamaTMHMLearnset,
    [SPECIES_ELECTRIKE] = sElectrikeTMHMLearnset,
    [SPECIES_MANECTRIC] = sManectricTMHMLearnset,
    [SPECIES_NUMEL] = sNumelTMHMLearnset,
    [SPECIES_CAMERUPT] = sCameruptTMHMLearnset,
    [SPECIES_SPHEAL] = sSphealTMHMLearnset,
    [SPECIES_SEALEO] = sSealeoTMHMLearnset,
    [SPECIES_WALREIN] = sWalreinTMHMLearnset,
    [SPECIES_CACNEA] = sCacneaTMHMLearnset,
    [SPECIES_CACTURNE] = sCacturneTMHMLearnset,
    [SPECIES_SNORUNT] = sSnoruntTMHMLearnset,
    [SPECIES_GLALIE] = sGlalieTMHMLearnset,
    [SPECIES_LUNATONE] = sLunatoneTMHMLearnset,
    [SPECIES_SOLROCK] = sSolrockTMHMLearnset,
    [SPECIES_AZURILL] = sAzurillTMHMLearnset,
    [SPECIES_SPOINK] = sSpoinkTMHMLearnset,
    [SPECIES_GRUMPIG] = sGrumpigTMHMLearnset,
    [SPECIES_PLUSLE] = sPlusleTMHMLearnset,
    [SPECIES_MINUN] = sMinunTMHMLearnset,
    [SPECIES_MAWILE] = sMawileTMHMLearnset,
    [SPECIES_MEDITITE] = sMedititeTMHMLearnset,
    [SPECIES_MEDICHAM] = sMedichamTMHMLearnset,
    [SPECIES_SWABLU] = sSwabluTMHMLearnset,
    [SPECIES_ALTARIA] = sAltariaTMHMLearnset,
    [SPECIES_WYNAUT] = sWynautTMHMLearnset,
    [SPECIES_DUSKULL] = sDuskullTMHMLearnset,
    [SPECIES_DUSCLOPS] = sDusclopsTMHMLearnset,
    [SPECIES_ROSELIA] = sRoseliaTMHMLearnset,
    [SPECIES_SLAKOTH] = sSlakothTMHMLearnset,
    [SPECIES_VIGOROTH] = sVigorothTMHMLearnset,
    [SPECIES_SLAKING] = sSlakingTMHMLearnset,
    [SPECIES_GULPIN] = sGulpinTMHMLearnset,
    [SPECIES_SWALOT] = sSwalotTMHMLearnset,
    [SPECIES_TROPIUS] = sTropiusTMHMLearnset,
    [SPECIES_WHISMUR] = sWhismurTMHMLearnset,
    [SPECIES_LOUDRED] = sLoudredTMHMLearnset,
    [SPECIES_EXPLOUD] = sExploudTMHMLearnset,
    [SPECIES_CLAMPERL] = sClamperlTMHMLearnset,
    [SPECIES_HUNTAIL] = sHuntailTMHMLearnset,
    [SPECIES_GOREBYSS] = sGorebyssTMHMLearnset,
    [SPECIES_ABSOL] = sAbsolTMHMLearnset,
    [SPECIES_SHUPPET] = sShuppetTMHMLearnset,
    [SPECIES_BANETTE] = sBanetteTMHMLearnset,
    [SPECIES_SEVIPER] = sSeviperTMHMLearnset,
    [SPECIES_ZANGOOSE] = sZangooseTMHMLearnset,
    [SPECIES_RELICANTH] = sRelicanthTMHMLearnset,
    [SPECIES_ARON] = sAronTMHMLearnset,
    [SPECIES_LAIRON] = sLaironTMHMLearnset,
    [SPECIES_AGGRON] = sAggronTMHMLearnset,
    [SPECIES_CASTFORM] = sCastformTMHMLearnset,
    [SPECIES_VOLBEAT] = sVolbeatTMHMLearnset,
    [SPECIES_ILLUMISE] = sIllumiseTMHMLearnset,
    [SPECIES_LILEEP] = sLileepTMHMLearnset,
    [SPECIES_CRADILY] = sCradilyTMHMLearnset,
    [SPECIES_ANORITH] = sAnorithTMHMLearnset,
    [SPECIES_ARMALDO] = sArmaldoTMHMLearnset,
    [SPECIES_RALTS] = sRaltsTMHMLearnset,
    [SPECIES_KIRLIA] = sKirliaTMHMLearnset,
    [SPECIES_GARDEVOIR] = sGardevoirTMHMLearnset,
    [SPECIES_BAGON] = sBagonTMHMLearnset,
    [SPECIES_SHELGON] = sShelgonTMHMLearnset,
    [SPECIES_SALAMENCE] = sSalamenceTMHMLearnset,
    [SPECIES_BELDUM] = sBeldumTMHMLearnset,
    [SPECIES_METANG] = sMetangTMHMLearnset,
    [SPECIES_METAGROSS] = sMetagrossTMHMLearnset,
    [SPECIES_REGIROCK] = sRegirockTMHMLearnset,
    [SPECIES_REGICE] = sRegiceTMHMLearnset,
    [SPECIES_REGISTEEL] = sRegisteelTMHMLearnset,
    [SPECIES_KYOGRE] = sKyogreTMHMLearnset,
    [SPECIES_GROUDON] = sGroudonTMHMLearnset,
    [SPECIES_RAYQUAZA] = sRayquazaTMHMLearnset,
    [SPECIES_LATIAS] = sLatiasTMHMLearnset,
    [SPECIES_LATIOS] = sLatiosTMHMLearnset,
    [SPECIES_JIRACHI] = sJirachiTMHMLearnset,
    [SPECIES_DEOXYS] = sDeoxysTMHMLearnset,
    [SPECIES_CHIMECHO] = sChimechoTMHMLearnset,
	[SPECIES_DUBSNAKE] = sDubsnakeTMHMLearnset,
	[SPECIES_HYDROIL] = sHydroilTMHMLearnset,
	[SPECIES_WYCERN] = sWycernTMHMLearnset,
	[SPECIES_BITTERAGON] = sBitteragonTMHMLearnset,
	[SPECIES_CACTUMBRA] = sCactumbraTMHMLearnset,
	[SPECIES_OBSICARGO] = sObsicargoTMHMLearnset,
	[SPECIES_NORWHALE] = sNorwhaleTMHMLearnset
};