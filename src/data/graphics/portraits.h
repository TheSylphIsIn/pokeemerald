const u32 sPortraitPic_KinglerNeutral[] = INCBIN_U32("graphics/portraits/kingler_neutral.4bpp.lz");
const u32 sPortraitPal_KinglerNeutral[] = INCBIN_U32("graphics/portraits/kingler_neutral.gbapal.lz");

const u32 sPortraitPic_FlygonNeutral[] = INCBIN_U32("graphics/portraits/flygon_neutral.4bpp.lz");
const u32 sPortraitPal_FlygonNeutral[] = INCBIN_U32("graphics/portraits/flygon_neutral.gbapal.lz");

const u32 sPortraitPic_NidokingNeutral[] = INCBIN_U32("graphics/portraits/nidoking_neutral.4bpp.lz");
const u32 sPortraitPal_NidokingNeutral[] = INCBIN_U32("graphics/portraits/nidoking_neutral.gbapal.lz");

const u32 sPortraitPic_ZoroarkNeutral[] = INCBIN_U32("graphics/portraits/zoroark_neutral.4bpp.lz");
const u32 sPortraitPal_ZoroarkNeutral[] = INCBIN_U32("graphics/portraits/zoroark_neutral.gbapal.lz");

const u32 sPortraitPic_AmeliaNeutral[] = INCBIN_U32("graphics/portraits/amelia_neutral.4bpp.lz");
const u32 sPortraitPal_AmeliaNeutral[] = INCBIN_U32("graphics/portraits/amelia_neutral.gbapal.lz");

const struct PortraitData gPortraits[PORTRAITS_COUNT] = 
{
	[PORTRAIT_KINGLER_NEUTRAL] = {.pic = sPortraitPic_KinglerNeutral, .palette = sPortraitPal_KinglerNeutral},
	[PORTRAIT_FLYGON_NEUTRAL] = {.pic = sPortraitPic_FlygonNeutral, .palette = sPortraitPal_FlygonNeutral},
	[PORTRAIT_NIDOKING_NEUTRAL] = {.pic = sPortraitPic_NidokingNeutral, .palette = sPortraitPal_NidokingNeutral},
	[PORTRAIT_ZOROARK_NEUTRAL] = {.pic = sPortraitPic_ZoroarkNeutral, .palette = sPortraitPal_ZoroarkNeutral},
	[PORTRAIT_AMELIA_NEUTRAL] = {.pic = sPortraitPic_AmeliaNeutral, .palette = sPortraitPal_AmeliaNeutral},	
};
