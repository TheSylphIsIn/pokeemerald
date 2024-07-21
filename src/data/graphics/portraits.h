#define INCLUDE_PORTRAIT(label)	{.pic = sPortraitPic_##label, .palette = sPortraitPal_##label}

const u32 sPortraitPic_KinglerNeutral[] = INCBIN_U32("graphics/portraits/kingler_neutral.4bpp.lz");
const u32 sPortraitPal_KinglerNeutral[] = INCBIN_U32("graphics/portraits/kingler_neutral.gbapal.lz");

const u32 sPortraitPic_FlygonNeutral[] = INCBIN_U32("graphics/portraits/flygon_neutral.4bpp.lz");
const u32 sPortraitPal_FlygonNeutral[] = INCBIN_U32("graphics/portraits/flygon_neutral.gbapal.lz");

const u32 sPortraitPic_NidokingNeutral[] = INCBIN_U32("graphics/portraits/nidoking_neutral.4bpp.lz");
const u32 sPortraitPal_NidokingNeutral[] = INCBIN_U32("graphics/portraits/nidoking_neutral.gbapal.lz");

const u32 sPortraitPic_NidokingNervous[] = INCBIN_U32("graphics/portraits/nidoking_nervous.4bpp.lz");
const u32 sPortraitPal_NidokingNervous[] = INCBIN_U32("graphics/portraits/nidoking_nervous.gbapal.lz");

const u32 sPortraitPic_ZoroarkNeutral[] = INCBIN_U32("graphics/portraits/zoroark_neutral.4bpp.lz");
const u32 sPortraitPal_ZoroarkNeutral[] = INCBIN_U32("graphics/portraits/zoroark_neutral.gbapal.lz");

const u32 sPortraitPic_AmeliaNeutral[] = INCBIN_U32("graphics/portraits/amelia_neutral.4bpp.lz");
const u32 sPortraitPal_AmeliaNeutral[] = INCBIN_U32("graphics/portraits/amelia_neutral.gbapal.lz");

const u32 sPortraitPic_AmeliaShock[] = INCBIN_U32("graphics/portraits/amelia_shock.4bpp.lz");
const u32 sPortraitPal_AmeliaShock[] = INCBIN_U32("graphics/portraits/amelia_shock.gbapal.lz");

const u32 sPortraitPic_AmeliaAsleep[] = INCBIN_U32("graphics/portraits/amelia_asleep.4bpp.lz");
const u32 sPortraitPal_AmeliaAsleep[] = INCBIN_U32("graphics/portraits/amelia_asleep.gbapal.lz");

const u32 sPortraitPic_AmeliaStrained[] = INCBIN_U32("graphics/portraits/amelia_strained.4bpp.lz");
const u32 sPortraitPal_AmeliaStrained[] = INCBIN_U32("graphics/portraits/amelia_strained.gbapal.lz");

const u32 sPortraitPic_AmeliaSmug[] = INCBIN_U32("graphics/portraits/amelia_smug.4bpp.lz");
const u32 sPortraitPal_AmeliaSmug[] = INCBIN_U32("graphics/portraits/amelia_smug.gbapal.lz");

const u32 sPortraitPic_AmeliaSeriously[] = INCBIN_U32("graphics/portraits/amelia_seriously.4bpp.lz");
const u32 sPortraitPal_AmeliaSeriously[] = INCBIN_U32("graphics/portraits/amelia_seriously.gbapal.lz");

const u32 sPortraitPic_AmeliaWink[] = INCBIN_U32("graphics/portraits/amelia_wink.4bpp.lz");
const u32 sPortraitPal_AmeliaWink[] = INCBIN_U32("graphics/portraits/amelia_wink.gbapal.lz");

const u32 sPortraitPic_AmeliaMunch[] = INCBIN_U32("graphics/portraits/amelia_munch.4bpp.lz");
const u32 sPortraitPal_AmeliaMunch[] = INCBIN_U32("graphics/portraits/amelia_munch.gbapal.lz");

const u32 sPortraitPic_DemiveeNeutral[] = INCBIN_U32("graphics/portraits/demivee_neutral.4bpp.lz");
const u32 sPortraitPal_DemiveeNeutral[] = INCBIN_U32("graphics/portraits/demivee_neutral.gbapal.lz");

const u32 sPortraitPic_DemiveeAnnoyed[] = INCBIN_U32("graphics/portraits/demivee_annoyed.4bpp.lz");
const u32 sPortraitPal_DemiveeAnnoyed[] = INCBIN_U32("graphics/portraits/demivee_annoyed.gbapal.lz");

const struct PortraitData gPortraits[PORTRAITS_COUNT] = 
{
	[PORTRAIT_KINGLER_NEUTRAL] = {.pic = sPortraitPic_KinglerNeutral, .palette = sPortraitPal_KinglerNeutral},
	[PORTRAIT_FLYGON_NEUTRAL] = {.pic = sPortraitPic_FlygonNeutral, .palette = sPortraitPal_FlygonNeutral},
	[PORTRAIT_NIDOKING_NEUTRAL] = {.pic = sPortraitPic_NidokingNeutral, .palette = sPortraitPal_NidokingNeutral},
	[PORTRAIT_ZOROARK_NEUTRAL] = {.pic = sPortraitPic_ZoroarkNeutral, .palette = sPortraitPal_ZoroarkNeutral},
	[PORTRAIT_AMELIA_NEUTRAL] = INCLUDE_PORTRAIT(AmeliaNeutral),	
	[PORTRAIT_AMELIA_SHOCK] = INCLUDE_PORTRAIT(AmeliaShock),
	[PORTRAIT_AMELIA_ASLEEP] = INCLUDE_PORTRAIT(AmeliaAsleep),
	[PORTRAIT_NIDOKING_NERVOUS] = INCLUDE_PORTRAIT(NidokingNervous),
	[PORTRAIT_DEMIVEE_NEUTRAL] = INCLUDE_PORTRAIT(DemiveeNeutral),
	[PORTRAIT_DEMIVEE_ANNOYED] = INCLUDE_PORTRAIT(DemiveeAnnoyed),
	[PORTRAIT_AMELIA_STRAINED] = INCLUDE_PORTRAIT(AmeliaStrained),
	[PORTRAIT_AMELIA_SMUG]		= INCLUDE_PORTRAIT(AmeliaSmug),
	[PORTRAIT_AMELIA_SERIOUSLY]		= INCLUDE_PORTRAIT(AmeliaSeriously),
	[PORTRAIT_AMELIA_WINK]			= INCLUDE_PORTRAIT(AmeliaWink),
	[PORTRAIT_AMELIA_MUNCH]			= INCLUDE_PORTRAIT(AmeliaMunch),
};
