#define LEVEL_UP_MOVE(lvl, moveLearned) {.move = moveLearned, .level = lvl}
#define LEVEL_UP_END {.move = LEVEL_UP_MOVE_END, .level = 0}

static const struct LevelUpMove sDubsnakeLevelUpLearnset[] = {
	LEVEL_UP_MOVE( 1, MOVE_ICE_SHARD),
	LEVEL_UP_MOVE( 1, MOVE_SMOG),
	LEVEL_UP_MOVE( 6, MOVE_WRAP),
	LEVEL_UP_MOVE(11, MOVE_ACID),
	LEVEL_UP_MOVE(11, MOVE_POWDER_SNOW),
	LEVEL_UP_MOVE(16, MOVE_BITE),
	LEVEL_UP_MOVE(22, MOVE_ICY_WIND),
	LEVEL_UP_MOVE(22, MOVE_SLUDGE),
	LEVEL_UP_MOVE(28, MOVE_SLAM),
	LEVEL_UP_MOVE(33, MOVE_TOXIC),
	LEVEL_UP_MOVE(33, MOVE_HAIL),
	LEVEL_UP_MOVE(37, MOVE_EMBER),
	LEVEL_UP_MOVE(44, MOVE_SHEER_COLD),
	LEVEL_UP_MOVE(44, MOVE_GUNK_SHOT),
	LEVEL_UP_END
};

static const struct LevelUpMove sHydroilLevelUpLearnset[] = {
	LEVEL_UP_MOVE( 0, MOVE_BOIL_OVER),
	LEVEL_UP_MOVE( 1, MOVE_FIRE_SPIN),
	LEVEL_UP_MOVE( 1, MOVE_WHIRLPOOL),
	LEVEL_UP_MOVE( 6, MOVE_DRAGON_RAGE),
	LEVEL_UP_MOVE(11, MOVE_FLAME_WHEEL),
	LEVEL_UP_MOVE(11, MOVE_WATER_PULSE),
	LEVEL_UP_MOVE(18, MOVE_MORNING_SUN),
	LEVEL_UP_MOVE(22, MOVE_WILL_O_WISP),
	LEVEL_UP_MOVE(22, MOVE_WATER_SPORT),
	LEVEL_UP_MOVE(27, MOVE_ROAR),
	LEVEL_UP_MOVE(33, MOVE_LAVA_PLUME),
	LEVEL_UP_MOVE(33, MOVE_AQUA_TAIL),
	LEVEL_UP_MOVE(37, MOVE_DRAGON_PULSE),
	LEVEL_UP_MOVE(44, MOVE_SUNNY_DAY),
	LEVEL_UP_MOVE(44, MOVE_RAIN_DANCE),
	LEVEL_UP_MOVE(50, MOVE_OUTRAGE),
	LEVEL_UP_MOVE(55, MOVE_ERUPTION),
	LEVEL_UP_MOVE(55, MOVE_WATER_SPOUT),
	LEVEL_UP_END
};

static const struct LevelUpMove sWycernLevelUpLearnset[] = {
	LEVEL_UP_MOVE( 1, MOVE_QUICK_ATTACK),
	LEVEL_UP_MOVE( 1, MOVE_LEER),
	LEVEL_UP_MOVE( 7, MOVE_EMBER),
	LEVEL_UP_MOVE(11, MOVE_ICICLE_SPEAR),
	LEVEL_UP_MOVE(17, MOVE_MIST),
	LEVEL_UP_MOVE(21, MOVE_HEADBUTT),
	LEVEL_UP_MOVE(27, MOVE_TWISTER),
	LEVEL_UP_MOVE(31, MOVE_AIR_CUTTER),
	LEVEL_UP_MOVE(37, MOVE_HYPER_VOICE),
	LEVEL_UP_MOVE(41, MOVE_OUTRAGE),
	LEVEL_UP_MOVE(48, MOVE_FIRE_BLAST),
	LEVEL_UP_END
};

static const struct LevelUpMove sBitteragonLevelUpLearnset[] = {
	LEVEL_UP_MOVE( 0, MOVE_BLIZZARD),
	LEVEL_UP_MOVE( 1, MOVE_RAGE),
	LEVEL_UP_MOVE( 1, MOVE_LEER),
	LEVEL_UP_MOVE( 7, MOVE_EMBER),
	LEVEL_UP_MOVE(11, MOVE_ICICLE_SPEAR),
	LEVEL_UP_MOVE(17, MOVE_MIST),
	LEVEL_UP_MOVE(21, MOVE_HEADBUTT),
	LEVEL_UP_MOVE(27, MOVE_TWISTER),
	LEVEL_UP_MOVE(31, MOVE_AIR_CUTTER),
	LEVEL_UP_MOVE(37, MOVE_HYPER_VOICE),
	LEVEL_UP_MOVE(42, MOVE_DOUBLE_EDGE),
	LEVEL_UP_MOVE(48, MOVE_DRAGON_RUSH),
	LEVEL_UP_MOVE(54, MOVE_ICICLE_CRASH),
	LEVEL_UP_MOVE(60, MOVE_OUTRAGE),
	LEVEL_UP_END
};

static const struct LevelUpMove sCactumbraLevelUpLearnset[] = {
	LEVEL_UP_END
};

static const struct LevelUpMove sObsicargoLevelUpLearnset[] = {
	LEVEL_UP_END
};

static const struct LevelUpMove sNorwhaleLevelUpLearnset[] = {
	LEVEL_UP_END
};

static const struct LevelUpMove sSpookumLevelUpLearnset[] = {
	LEVEL_UP_MOVE( 1, MOVE_ASTONISH),
	LEVEL_UP_MOVE( 1, MOVE_UPROAR),
	LEVEL_UP_END
};

static const struct LevelUpMove sGlasmaLevelUpLearnset[] = {
	LEVEL_UP_MOVE( 1, MOVE_SCRATCH),
	LEVEL_UP_MOVE( 1, MOVE_LEER),
	LEVEL_UP_MOVE( 6, MOVE_THUNDER_SHOCK),
	LEVEL_UP_MOVE( 9, MOVE_HEADBUTT),
	LEVEL_UP_MOVE(14, MOVE_THUNDER_WAVE),
	LEVEL_UP_MOVE(17, MOVE_SPARK),
	LEVEL_UP_MOVE(22, MOVE_LIGHT_SCREEN),
	LEVEL_UP_MOVE(25, MOVE_DAZZLING_GLEAM),
	LEVEL_UP_MOVE(30, MOVE_DISCHARGE),
	LEVEL_UP_MOVE(33, MOVE_THUNDER),
	LEVEL_UP_END
};

static const struct LevelUpMove sPlasmolyteLevelUpLearnset[] = {
	LEVEL_UP_MOVE( 1, MOVE_SCRATCH),
	LEVEL_UP_MOVE( 1, MOVE_LEER),
	LEVEL_UP_MOVE( 7, MOVE_THUNDER_SHOCK),
	LEVEL_UP_MOVE(10, MOVE_HEADBUTT),
	LEVEL_UP_MOVE(15, MOVE_THUNDER_WAVE),
	LEVEL_UP_MOVE(16, MOVE_AIR_CUTTER),
	LEVEL_UP_MOVE(21, MOVE_SPARK),
	LEVEL_UP_MOVE(24, MOVE_RAIN_DANCE),
	LEVEL_UP_MOVE(29, MOVE_LIGHT_SCREEN),
	LEVEL_UP_MOVE(32, MOVE_DAZZLING_GLEAM),
	LEVEL_UP_MOVE(37, MOVE_DISCHARGE),
	LEVEL_UP_MOVE(40, MOVE_AIR_SLASH),
	LEVEL_UP_MOVE(45, MOVE_THUNDER),
	LEVEL_UP_MOVE(48, MOVE_HURRICANE),
	LEVEL_UP_END
};

static const struct LevelUpMove sStormageLevelUpLearnset[] = {
	LEVEL_UP_MOVE( 0, MOVE_LIGHTNING),
	LEVEL_UP_MOVE( 1, MOVE_MIRROR_COAT),
	LEVEL_UP_MOVE( 1, MOVE_LEER),
	LEVEL_UP_MOVE( 7, MOVE_THUNDER_SHOCK),
	LEVEL_UP_MOVE(10, MOVE_HEADBUTT),
	LEVEL_UP_MOVE(15, MOVE_THUNDER_WAVE),
	LEVEL_UP_MOVE(16, MOVE_AIR_CUTTER),
	LEVEL_UP_MOVE(21, MOVE_SPARK),
	LEVEL_UP_MOVE(24, MOVE_RAIN_DANCE),
	LEVEL_UP_MOVE(29, MOVE_LIGHT_SCREEN),
	LEVEL_UP_MOVE(32, MOVE_DAZZLING_GLEAM),
	LEVEL_UP_MOVE(38, MOVE_WATER_PULSE),
	LEVEL_UP_MOVE(42, MOVE_AIR_SLASH),
	LEVEL_UP_MOVE(47, MOVE_THUNDER),
	LEVEL_UP_MOVE(51, MOVE_BARRIER),
	LEVEL_UP_MOVE(56, MOVE_HURRICANE),
	LEVEL_UP_MOVE(60, MOVE_HYPER_BEAM),
	LEVEL_UP_END
};

static const struct LevelUpMove sSandudeLevelUpLearnset[] = {
	LEVEL_UP_MOVE( 1, MOVE_TACKLE),
	LEVEL_UP_MOVE( 1, MOVE_HARDEN),
	LEVEL_UP_MOVE( 6, MOVE_MUD_SLAP),
	LEVEL_UP_MOVE( 8, MOVE_SAND_TOMB),
	LEVEL_UP_MOVE(13, MOVE_MUD_SHOT),
	LEVEL_UP_MOVE(15, MOVE_HEADBUTT),
	LEVEL_UP_MOVE(20, MOVE_SANDSTORM),
	LEVEL_UP_MOVE(22, MOVE_DOUBLE_EDGE),
	LEVEL_UP_MOVE(27, MOVE_EARTHQUAKE),
	LEVEL_UP_MOVE(29, MOVE_DESTINY_BOND),
	LEVEL_UP_END
};

static const struct LevelUpMove sSandrossLevelUpLearnset[] = {
	LEVEL_UP_MOVE( 0, MOVE_ROCK_THROW),
	LEVEL_UP_MOVE( 1, MOVE_TACKLE),
	LEVEL_UP_MOVE( 1, MOVE_HARDEN),
	LEVEL_UP_MOVE( 6, MOVE_MUD_SLAP),
	LEVEL_UP_MOVE( 8, MOVE_SAND_TOMB),
	LEVEL_UP_MOVE(13, MOVE_MUD_SHOT),
	LEVEL_UP_MOVE(15, MOVE_HEADBUTT),
	LEVEL_UP_MOVE(20, MOVE_SANDSTORM),
	LEVEL_UP_MOVE(22, MOVE_DOUBLE_EDGE),
	LEVEL_UP_MOVE(27, MOVE_EARTHQUAKE),
	LEVEL_UP_MOVE(29, MOVE_DESTINY_BOND),
	LEVEL_UP_END
};

static const struct LevelUpMove sSanduelLevelUpLearnset[] = {
	LEVEL_UP_END
};

static const struct LevelUpMove sEladriftLevelUpLearnset[] = {
	LEVEL_UP_MOVE( 1, MOVE_TACKLE),
	LEVEL_UP_MOVE( 1, MOVE_GROWL),
	LEVEL_UP_MOVE( 6, MOVE_WATER_GUN),
	LEVEL_UP_MOVE(10, MOVE_MEDITATE),
	LEVEL_UP_MOVE(13, MOVE_BITE),
	LEVEL_UP_MOVE(17, MOVE_WATER_PULSE),
	LEVEL_UP_MOVE(20, MOVE_REST),
	LEVEL_UP_MOVE(24, MOVE_AQUA_TAIL),
	LEVEL_UP_MOVE(27, MOVE_COIL),
	LEVEL_UP_MOVE(30, MOVE_AGILITY),
	LEVEL_UP_END
};

static const struct LevelUpMove sSlithurentLevelUpLearnset[] = {
	LEVEL_UP_END
};

static const struct LevelUpMove sPrescyllonLevelUpLearnset[] = {
	LEVEL_UP_END
};

static const struct LevelUpMove sSloshmoshLevelUpLearnset[] = {
	LEVEL_UP_MOVE( 1, MOVE_TACKLE),
	LEVEL_UP_MOVE( 3, MOVE_LEER),
	LEVEL_UP_MOVE( 6, MOVE_BABY_DOLL_EYES),
	LEVEL_UP_MOVE( 9, MOVE_SLUDGE),
	LEVEL_UP_MOVE(13, MOVE_HARDEN),
	LEVEL_UP_MOVE(17, MOVE_TAKE_DOWN),
	LEVEL_UP_MOVE(21, MOVE_WATER_PULSE),
	LEVEL_UP_MOVE(25, MOVE_RECOVER),
	LEVEL_UP_MOVE(30, MOVE_SLUDGE_BOMB),
	LEVEL_UP_MOVE(35, MOVE_TOXIC),
	LEVEL_UP_END

};

static const struct LevelUpMove sSlurpinskiLevelUpLearnset[] = {
	LEVEL_UP_END
};

static const struct LevelUpMove sKeeshLevelUpLearnset[] = {
	LEVEL_UP_MOVE( 1, MOVE_SCRATCH),
	LEVEL_UP_MOVE( 4, MOVE_DEFENSE_CURL),
	LEVEL_UP_MOVE( 7, MOVE_PECK),
	LEVEL_UP_MOVE(10, MOVE_HEADBUTT),
	LEVEL_UP_END
};

static const struct LevelUpMove sHatchblingLevelUpLearnset[] = {
	LEVEL_UP_END
};

static const struct LevelUpMove sHummblingLevelUpLearnset[] = {
	LEVEL_UP_END
};

static const struct LevelUpMove sKeesightLevelUpLearnset[] = {
	LEVEL_UP_MOVE( 1, MOVE_SCRATCH),
	LEVEL_UP_MOVE( 4, MOVE_DEFENSE_CURL),
	LEVEL_UP_MOVE( 7, MOVE_CONFUSION),
	LEVEL_UP_END
};

static const struct LevelUpMove sKeespellLevelUpLearnset[] = {
	LEVEL_UP_END
};

static const struct LevelUpMove sLarvoolLevelUpLearnset[] = {
	LEVEL_UP_MOVE( 1, MOVE_STRING_SHOT),
	LEVEL_UP_MOVE( 3, MOVE_TACKLE),
	LEVEL_UP_MOVE( 7, MOVE_FOCUS_ENERGY),
	LEVEL_UP_MOVE( 9, MOVE_SPIDER_WEB),
	LEVEL_UP_MOVE(13, MOVE_BUG_BITE),
	LEVEL_UP_MOVE(15, MOVE_HARDEN),
	LEVEL_UP_MOVE(21, MOVE_FURY_CUTTER),
	LEVEL_UP_MOVE(31, MOVE_TAKE_DOWN),
	LEVEL_UP_MOVE(41, MOVE_LASER_FOCUS),
	LEVEL_UP_MOVE(51, MOVE_FELL_STINGER),
	LEVEL_UP_END
};

static const struct LevelUpMove sSpoolerLevelUpLearnset[] = {
	LEVEL_UP_END
};

static const struct LevelUpMove sBilliarachLevelUpLearnset[] = {
	LEVEL_UP_END
};

static const struct LevelUpMove sSlugmaFoneiLevelUpLearnset[] = {
	LEVEL_UP_MOVE( 1, MOVE_YAWN),
    LEVEL_UP_MOVE( 1, MOVE_TACKLE),
    LEVEL_UP_MOVE( 6, MOVE_ROCK_THROW),
    LEVEL_UP_MOVE(12, MOVE_SAND_ATTACK),
    LEVEL_UP_MOVE(17, MOVE_HARDEN),
	LEVEL_UP_MOVE(23, MOVE_TAKE_DOWN),
	LEVEL_UP_MOVE(25, MOVE_ANCIENT_POWER),
    LEVEL_UP_MOVE(28, MOVE_AMNESIA),
    LEVEL_UP_MOVE(33, MOVE_ROCK_SLIDE),
    LEVEL_UP_MOVE(39, MOVE_BODY_SLAM),
	LEVEL_UP_MOVE(44, MOVE_DOUBLE_EDGE),
    LEVEL_UP_END
};

static const struct LevelUpMove sMagcargoFoneiLevelUpLearnset[] = {
	LEVEL_UP_MOVE( 0, MOVE_SPARK),
	LEVEL_UP_MOVE( 1, MOVE_YAWN),
    LEVEL_UP_MOVE( 1, MOVE_TACKLE),
    LEVEL_UP_MOVE( 6, MOVE_ROCK_THROW),
    LEVEL_UP_MOVE(12, MOVE_SAND_ATTACK),
    LEVEL_UP_MOVE(17, MOVE_HARDEN),
	LEVEL_UP_MOVE(23, MOVE_TAKE_DOWN),
	LEVEL_UP_MOVE(24, MOVE_SPARK),
    LEVEL_UP_MOVE(30, MOVE_AMNESIA),
    LEVEL_UP_MOVE(36, MOVE_ROCK_SLIDE),
    LEVEL_UP_MOVE(41, MOVE_BODY_SLAM),
	LEVEL_UP_MOVE(47, MOVE_DOUBLE_EDGE),
	LEVEL_UP_MOVE(52, MOVE_VOLT_TACKLE),
    LEVEL_UP_END
};

static const struct LevelUpMove sSunforestLevelUpLearnset[] = {
	LEVEL_UP_END
};

static const struct LevelUpMove sHonedgeFoneiLevelUpLearnset[] = {
	LEVEL_UP_END
};

static const struct LevelUpMove sDoubladeFoneiLevelUpLearnset[] = {
	LEVEL_UP_END
};

static const struct LevelUpMove sAegislashFoneiALevelUpLearnset[] = {
	LEVEL_UP_END
};

static const struct LevelUpMove sAegislashFoneiELevelUpLearnset[] = {
	LEVEL_UP_END
};

static const struct LevelUpMove sElemptyLevelUpLearnset[] = {
	LEVEL_UP_END
};

static const struct LevelUpMove sVenearthLevelUpLearnset[] = {
	LEVEL_UP_END
};

static const struct LevelUpMove sMarsizzleLevelUpLearnset[] = {
	LEVEL_UP_END
};

static const struct LevelUpMove sJuplasmaLevelUpLearnset[] = {
	LEVEL_UP_END
};

static const struct LevelUpMove sMerlpoolLevelUpLearnset[] = {
	LEVEL_UP_END
};

static const struct LevelUpMove sOphicalfLevelUpLearnset[] = {
	LEVEL_UP_END
};

static const struct LevelUpMove sSerpentaurLevelUpLearnset[] = {
	LEVEL_UP_END
};

static const struct LevelUpMove sGeodudeFoneiLevelUpLearnset[] = {
	LEVEL_UP_END
};

static const struct LevelUpMove sGravelerFoneiLevelUpLearnset[] = {
	LEVEL_UP_END
};

static const struct LevelUpMove sGolemFoneiLevelUpLearnset[] = {
	LEVEL_UP_END
};

static const struct LevelUpMove sSudowoodoFoneiLevelUpLearnset[] = {
	LEVEL_UP_END
};

static const struct LevelUpMove sGritwyrmLevelUpLearnset[] = {
	LEVEL_UP_END
};

static const struct LevelUpMove sMolduneLevelUpLearnset[] = {
	LEVEL_UP_END
};

static const struct LevelUpMove sWattitudeLevelUpLearnset[] = {
	LEVEL_UP_MOVE( 1, MOVE_THUNDER_SHOCK),
	LEVEL_UP_MOVE( 1, MOVE_TAUNT),
	LEVEL_UP_END
};

static const struct LevelUpMove sRaltsFoneiLevelUpLearnset[] = {
	LEVEL_UP_END
};

static const struct LevelUpMove sKirliaFoneiLevelUpLearnset[] = {
	LEVEL_UP_END
};

static const struct LevelUpMove sGardevoirFoneiLevelUpLearnset[] = {
	LEVEL_UP_END
};

static const struct LevelUpMove sGalladeFoneiLevelUpLearnset[] = {
	LEVEL_UP_END
};

static const struct LevelUpMove sTruebatLevelUpLearnset[] = {
	LEVEL_UP_END
};

static const struct LevelUpMove sHomboneLevelUpLearnset[] = {
	LEVEL_UP_END
};

static const struct LevelUpMove sHombeastLevelUpLearnset[] = {
	LEVEL_UP_END
};

static const struct LevelUpMove sQwilsharkLevelUpLearnset[] = {
	LEVEL_UP_END
};

static const struct LevelUpMove sKrissyLevelUpLearnset[] = {
	LEVEL_UP_END
};

static const struct LevelUpMove sKrakodemonLevelUpLearnset[] = {
	LEVEL_UP_END
};

static const struct LevelUpMove sWeatherbaneLevelUpLearnset[] = {
	LEVEL_UP_END
};

static const struct LevelUpMove sKetsubanLevelUpLearnset[] = {
	LEVEL_UP_END
};

static const struct LevelUpMove sDisabyLevelUpLearnset[] = {
	LEVEL_UP_MOVE( 1, MOVE_DAZZLING_GLEAM),
	LEVEL_UP_END
};

static const struct LevelUpMove sDisaspriteLevelUpLearnset[] = {
	LEVEL_UP_END
};

static const struct LevelUpMove sDismasterLevelUpLearnset[] = {
	LEVEL_UP_END
};

static const struct LevelUpMove sPuridianLevelUpLearnset[] = {
	LEVEL_UP_END
};

static const struct LevelUpMove sManipuloLevelUpLearnset[] = {
	LEVEL_UP_MOVE( 1, MOVE_HYPNOSIS),
	LEVEL_UP_END
};

static const struct LevelUpMove sCoilspillLevelUpLearnset[] = {
	LEVEL_UP_END
};

static const struct LevelUpMove sBoowhoLevelUpLearnset[] = {
	LEVEL_UP_END
};

static const struct LevelUpMove sBooxerLevelUpLearnset[] = {
	LEVEL_UP_END
};

static const struct LevelUpMove sBoozerkerLevelUpLearnset[] = {
	LEVEL_UP_END
};

static const struct LevelUpMove sDeepdarkLevelUpLearnset[] = {
	LEVEL_UP_END
};

static const struct LevelUpMove sBurmiteLevelUpLearnset[] = {
	LEVEL_UP_END
};

static const struct LevelUpMove sSedimetalLevelUpLearnset[] = {
	LEVEL_UP_END
};

static const struct LevelUpMove sSolosisFoneiLevelUpLearnset[] = {
	LEVEL_UP_END
};

static const struct LevelUpMove sDuosionFoneiLevelUpLearnset[] = {
	LEVEL_UP_END
};

static const struct LevelUpMove sReuniclusFoneiLevelUpLearnset[] = {
	LEVEL_UP_END
};

static const struct LevelUpMove sVinosLevelUpLearnset[] = {
	LEVEL_UP_END
};

static const struct LevelUpMove sVinoceiverLevelUpLearnset[] = {
	LEVEL_UP_END
};

static const struct LevelUpMove sAnnoyidgeLevelUpLearnset[] = {
	LEVEL_UP_END
};

static const struct LevelUpMove sPesquitoLevelUpLearnset[] = {
	LEVEL_UP_END
};

static const struct LevelUpMove sMankeyFoneiLevelUpLearnset[] = {
	LEVEL_UP_END
};

static const struct LevelUpMove sPrimeapeFoneiLevelUpLearnset[] = {
	LEVEL_UP_END
};

static const struct LevelUpMove sCryogonalFoneiLevelUpLearnset[] = {
	LEVEL_UP_END
};

static const struct LevelUpMove sAmpiboisonLevelUpLearnset[] = {
	LEVEL_UP_END
};

static const struct LevelUpMove sLagnetLevelUpLearnset[] = {
	LEVEL_UP_END
};

static const struct LevelUpMove sLannetLevelUpLearnset[] = {
	LEVEL_UP_END
};

static const struct LevelUpMove sCyburnLevelUpLearnset[] = {
	LEVEL_UP_END
};

static const struct LevelUpMove sSapnoseLevelUpLearnset[] = {
	LEVEL_UP_END
};

static const struct LevelUpMove sBurrootLevelUpLearnset[] = {
	LEVEL_UP_END
};

static const struct LevelUpMove sBurrushLevelUpLearnset[] = {
	LEVEL_UP_END
};

static const struct LevelUpMove sLavLevelUpLearnset[] = {
	LEVEL_UP_END
};

static const struct LevelUpMove sLavalyLevelUpLearnset[] = {
	LEVEL_UP_END
};

static const struct LevelUpMove sLavsamuchLevelUpLearnset[] = {
	LEVEL_UP_END
};

static const struct LevelUpMove sGuppageLevelUpLearnset[] = {
	LEVEL_UP_END
};

static const struct LevelUpMove sSeageLevelUpLearnset[] = {
	LEVEL_UP_END
};

static const struct LevelUpMove sBasstionLevelUpLearnset[] = {
	LEVEL_UP_END
};

static const struct LevelUpMove sPantomLevelUpLearnset[] = {
	LEVEL_UP_END
};

static const struct LevelUpMove sHappaningLevelUpLearnset[] = {
	LEVEL_UP_END
};

static const struct LevelUpMove sPanzergastLevelUpLearnset[] = {
	LEVEL_UP_END
};

static const struct LevelUpMove sScairyLevelUpLearnset[] = {
	LEVEL_UP_END
};

static const struct LevelUpMove sDanklimmerLevelUpLearnset[] = {
	LEVEL_UP_END
};

static const struct LevelUpMove sGolichemLevelUpLearnset[] = {
	LEVEL_UP_END
};

static const struct LevelUpMove sSpindaFoneiLevelUpLearnset[] = {
	LEVEL_UP_END
};

static const struct LevelUpMove sEmunitionLevelUpLearnset[] = {
	LEVEL_UP_END
};

static const struct LevelUpMove sEmortarLevelUpLearnset[] = {
	LEVEL_UP_END
};

static const struct LevelUpMove sOpebbliskLevelUpLearnset[] = {
	LEVEL_UP_END
};

static const struct LevelUpMove sStonumentLevelUpLearnset[] = {
	LEVEL_UP_END
};

static const struct LevelUpMove sMemoirbleLevelUpLearnset[] = {
	LEVEL_UP_END
};

static const struct LevelUpMove sNokommonLevelUpLearnset[] = {
	LEVEL_UP_END
};

static const struct LevelUpMove sTanghoulLevelUpLearnset[] = {
	LEVEL_UP_END
};

static const struct LevelUpMove sQwilyuLevelUpLearnset[] = {
	LEVEL_UP_END
};

static const struct LevelUpMove sCoriliaLevelUpLearnset[] = {
	LEVEL_UP_END
};

static const struct LevelUpMove sNidorookLevelUpLearnset[] = {
	LEVEL_UP_END
};

static const struct LevelUpMove sSkalvengerLevelUpLearnset[] = {
	LEVEL_UP_END
};

static const struct LevelUpMove sSkulkrexLevelUpLearnset[] = {
	LEVEL_UP_END
};

static const struct LevelUpMove sSkeltyrantLevelUpLearnset[] = {
	LEVEL_UP_END
};
