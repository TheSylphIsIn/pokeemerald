#include "global.h"
#include "battle_main.h"
#include "bg.h"
#include "data.h"
#include "decompress.h"
#include "event_data.h"
#include "gpu_regs.h"
#include "graphics.h"
#include "international_string_util.h"
#include "dynamic_placeholder_text_util.h"
#include "item.h"
#include "main.h"
#include "malloc.h"
#include "menu.h"
#include "m4a.h"
#include "overworld.h"
#include "palette.h"
#include "pokedex.h"
#include "pokedex_area_screen.h"
#include "pokedex_cry_screen.h"
#include "pokedex_plus_hgss.h"
#include "scanline_effect.h"
#include "sound.h"
#include "sprite.h"
#include "string_util.h"
#include "strings.h"
#include "task.h"
#include "text_window.h"
#include "trainer_pokemon_sprites.h"
#include "trig.h"
#include "window.h"
#include "list_menu.h"
#include "constants/rgb.h"
#include "constants/songs.h"
#include "constants/pokemon.h"

enum
{
    PAGE_MAIN,
    PAGE_INFO,
    PAGE_SEARCH,
    PAGE_SEARCH_RESULTS,
    PAGE_UNK,
    PAGE_AREA,
    PAGE_CRY,
    PAGE_SIZE,
	PAGE_DATA
};

enum
{
    AREA_SCREEN,
    CRY_SCREEN,
    SIZE_SCREEN,
	DATA_SCREEN,
    CANCEL_SCREEN,
    SCREEN_COUNT
};

enum
{
    SEARCH_NAME,
    SEARCH_COLOR,
    SEARCH_TYPE_LEFT,
    SEARCH_TYPE_RIGHT,
    SEARCH_ORDER,
    SEARCH_MODE,
    SEARCH_OK,
    SEARCH_COUNT
};

enum
{
    SEARCH_TOPBAR_SEARCH,
    SEARCH_TOPBAR_SHIFT,
    SEARCH_TOPBAR_CANCEL,
    SEARCH_TOPBAR_COUNT
};

enum
{
   ORDER_NUMERICAL,
   ORDER_ALPHABETICAL,
   ORDER_HEAVIEST,
   ORDER_LIGHTEST,
   ORDER_TALLEST,
   ORDER_SMALLEST
};

enum
{
    NAME_ABC = 1,
    NAME_DEF,
    NAME_GHI,
    NAME_JKL,
    NAME_MNO,
    NAME_PQR,
    NAME_STU,
    NAME_VWX,
    NAME_YZ,
};

enum {
    WIN_INFO,
    WIN_FOOTPRINT,
    WIN_CRY_WAVE,
    WIN_VU_METER,
};

#define WIN_CAUGHT_TYPES WIN_FOOTPRINT + 1

// For scrolling search parameter
#define MAX_SEARCH_PARAM_ON_SCREEN   6
#define MAX_SEARCH_PARAM_CURSOR_POS  (MAX_SEARCH_PARAM_ON_SCREEN - 1)

#define MAX_MONS_ON_SCREEN 4

#define LIST_SCROLL_STEP         16

#define POKEBALL_ROTATION_TOP    64
#define POKEBALL_ROTATION_BOTTOM (POKEBALL_ROTATION_TOP - 16)

// Coordinates of the Pokémon sprite on its page (info/cry screens)
#define MON_PAGE_X 48
#define MON_PAGE_Y 56

static EWRAM_DATA struct PokedexView *sPokedexView = NULL;
static EWRAM_DATA u16 sLastSelectedPokemon = 0;
static EWRAM_DATA u8 sPokeBallRotation = 0;
static EWRAM_DATA struct PokedexListItem *sPokedexListItem = NULL;
static EWRAM_DATA u8 sFormFixBit = 0;

// This is written to, but never read.
u8 gUnusedPokedexU8;
void (*gPokedexVBlankCB)(void);

struct SearchOptionText
{
    const u8 *description;
    const u8 *title;
};

struct SearchOption
{
    const struct SearchOptionText *texts;
    u8 taskDataCursorPos;
    u8 taskDataScrollOffset;
    u16 numOptions;
};

struct SearchMenuTopBarItem
{
    const u8 *description;
    u8 highlightX;
    u8 highlightY;
    u8 highlightWidth;
};

struct SearchMenuItem
{
    const u8 *description;
    u8 titleBgX;
    u8 titleBgY;
    u8 titleBgWidth;
    u8 selectionBgX;
    u8 selectionBgY;
    u8 selectionBgWidth;
};

struct PokedexListItem
{
    u16 dexNum;
    u16 seen:1;
    u16 owned:1;
	u16 studied:1;
};

struct PokedexView
{
    struct PokedexListItem pokedexList[NATIONAL_DEX_COUNT + 1];
    u16 pokemonListCount;
    u16 selectedPokemon;
    u16 selectedPokemonBackup;
    u16 dexMode;
    u16 dexModeBackup;
    u16 dexOrder;
    u16 dexOrderBackup;
    u16 seenCount;
    u16 ownCount;
    u16 monSpriteIds[MAX_MONS_ON_SCREEN];
    u16 selectedMonSpriteId;
    u16 pokeBallRotationStep;
    u16 pokeBallRotationBackup;
    u8 pokeBallRotation;
    u8 initialVOffset;
    u8 scrollTimer;
    u8 scrollDirection;
    s16 listVOffset;
    s16 listMovingVOffset;
    u16 scrollMonIncrement;
    u16 maxScrollTimer;
    u16 scrollSpeed;
    u16 formSpecies; // Alt species ID for viewing form info
    u8 currentPage;
    u8 currentPageBackup;
    bool8 isSearchResults:1;
    u8 selectedScreen;
    u8 screenSwitchState;
    u8 menuIsOpen;
    u16 menuCursorPos;
    s16 menuY;     //Menu Y position (inverted because we use REG_BG0VOFS for this)
};
	
// this file's functions
static void CB2_Pokedex(void);
static void Task_OpenPokedexMainPage(u8);
static void Task_HandlePokedexInput(u8);
static void Task_WaitForScroll(u8);
static void Task_HandlePokedexStartMenuInput(u8);
static void Task_OpenInfoScreenAfterMonMovement(u8);
static void Task_WaitForExitInfoScreen(u8);
static void Task_WaitForExitSearch(u8);
static void Task_ClosePokedex(u8);
static void Task_OpenSearchResults(u8);
static void Task_HandleSearchResultsInput(u8);
static void Task_WaitForSearchResultsScroll(u8);
static void Task_HandleSearchResultsStartMenuInput(u8);
static void Task_OpenSearchResultsInfoScreenAfterMonMovement(u8);
static void Task_WaitForExitSearchResultsInfoScreen(u8);
static void Task_ReturnToPokedexFromSearchResults(u8);
static void Task_ClosePokedexFromSearchResultsStartMenu(u8);
static bool8 LoadPokedexListPage(u8);
static void LoadPokedexBgPalette(bool8);
static void FreeWindowAndBgBuffers(void);
static void CreatePokedexList(u8, u8);
static void CreateMonDexNum(u16, u8, u8, u16);
static void CreateCaughtBall(u16, u8, u8, u16);
static u8 CreateMonName(u16, u8, u8);
static void ClearMonListEntry(u8 x, u8 y, u16 unused);
static void CreateMonSpritesAtPos(u16, u16);
static bool8 UpdateDexListScroll(u8, u8, u8);
static u16 TryDoPokedexScroll(u16, u16);
static void UpdateSelectedMonSpriteId(void);
static bool8 TryDoInfoScreenScroll(void);
static u8 ClearMonSprites(void);
static u16 GetPokemonSpriteToDisplay(u16);
static u32 CreatePokedexMonSprite(u16, s16, s16);
static void CreateInterfaceSprites(u8);
static void SpriteCB_MoveMonForInfoScreen(struct Sprite *sprite);
static void SpriteCB_Scrollbar(struct Sprite *sprite);
static void SpriteCB_ScrollArrow(struct Sprite *sprite);
static void SpriteCB_DexListInterfaceText(struct Sprite *sprite);
static void SpriteCB_RotatingPokeBall(struct Sprite *sprite);
static void SpriteCB_SeenOwnInfo(struct Sprite *sprite);
static void SpriteCB_DexListStartMenuCursor(struct Sprite *sprite);
static void SpriteCB_PokedexListMonSprite(struct Sprite *sprite);
static u8 LoadInfoScreen(struct PokedexListItem *, u8 monSpriteId);
static bool8 IsInfoScreenScrolling(u8);
static u8 StartInfoScreenScroll(struct PokedexListItem *, u8);
static void Task_LoadInfoScreen(u8);
static void Task_HandleInfoScreenInput(u8);
static u16 GetNextForm(u16, bool8);
static void Task_SwitchScreensFromInfoScreen(u8);
static void Task_LoadInfoScreenWaitForFade(u8);
static void Task_ExitInfoScreen(u8);
static void Task_LoadAreaScreen(u8);
static void Task_WaitForAreaScreenInput(u8 taskId);
static void Task_SwitchScreensFromAreaScreen(u8);
static void Task_LoadCryScreen(u8);
static void Task_HandleCryScreenInput(u8);
static void Task_SwitchScreensFromCryScreen(u8);
static void LoadPlayArrowPalette(bool8);
static void Task_LoadSizeScreen(u8);
static void Task_HandleSizeScreenInput(u8);
static void Task_SwitchScreensFromSizeScreen(u8);
static void Task_LoadDataScreen(u8);
static void Task_HandleDataScreenInput(u8);
static void Task_SwitchScreensFromDataScreen(u8);
static void DataScreenPrintLabels(void);
static void DataScreenPrintData(u16 species);
static void DataScreenPrintBaseStatsLeft(u16 species);
static void DataScreenPrintBaseStatsRight(u16 species);
static void DataScreenPrintEvolutionMethods(u16 species);
static void DataScreenHandleSpecialEvoText(u16 species);
static void DataScreenPrintMonEvoMethods(u16 species, u32 numEvos);
static void DataScreenPrintNumEvos(u16 species);
static void DataScreenPrintEVYield(u16 species);
static void DataScreenPrintPage2Labels(void);
static void DataScreenPrintPage2Data(u16 species);
static void DataScreenPrintAbilities(u16 species);
static void DataScreenPrintHiddenAbilities(u16 species);
static void DataScreenPrintEggGroups(u16 species);
static void DataScreenPrintLevelUpMoves(u16 species, u32 scrollOffset, u32 movesetSize);
static void LoadScreenSelectBarMain(u16);
static void LoadScreenSelectBarSubmenu(u16);
static void HighlightScreenSelectBarItem(u8, u16);
static void HighlightSubmenuScreenSelectBarItem(u8, u16);
static void Task_DisplayCaughtMonDexPage(u8);
static void Task_HandleCaughtMonPageInput(u8);
static void Task_ExitCaughtMonPage(u8);
static void SpriteCB_SlideCaughtMonToCenter(struct Sprite *sprite);
static void PrintMonInfo(u32 num, u32, u32 owned, u32 newEntry);
static u32 GetMeasurementTextPositions(u32 textElement);
static void PrintUnknownMonMeasurements(void);
static u8* GetUnknownMonHeightString(void);
static u8* GetUnknownMonWeightString(void);
static u8* ReplaceDecimalSeparator(const u8* originalString);
static void PrintOwnedMonMeasurements(u16 species);
static void PrintOwnedMonHeight(u16 species);
static void PrintOwnedMonWeight(u16 species);
static u8* ConvertMonHeightToImperialString(u32 height);
static u8* ConvertMonHeightToMetricString(u32 height);
static u8* ConvertMonWeightToImperialString(u32 weight);
static u8* ConvertMonWeightToMetricString(u32 weight);
static u8* ConvertMeasurementToMetricString(u32 num, u32* index);
static void ResetOtherVideoRegisters(u16);
static u8 PrintCryScreenSpeciesName(u8, u16, u8, u8);
static void PrintDecimalNum(u8 windowId, u16 num, u8 left, u8 top);
static u16 GetPokemonScaleFromNationalDexNumber(u16 nationalNum);
static u16 GetPokemonOffsetFromNationalDexNumber(u16 nationalNum);
static u16 GetTrainerScaleFromNationalDexNumber(u16 nationalNum);
static u16 GetTrainerOffsetFromNationalDexNumber(u16 nationalNum);
static u16 CreateSizeScreenTrainerPic(u16, s16, s16, s8);
static u16 GetNextPosition(u8, u16, u16, u16);
static u8 LoadSearchMenu(void);
static void Task_LoadSearchMenu(u8);
static void Task_SwitchToSearchMenuTopBar(u8);
static void Task_HandleSearchTopBarInput(u8);
static void Task_SwitchToSearchMenu(u8);
static void Task_HandleSearchMenuInput(u8);
static void Task_StartPokedexSearch(u8);
static void Task_WaitAndCompleteSearch(u8);
static void Task_SearchCompleteWaitForInput(u8);
static void Task_SelectSearchMenuItem(u8);
static void Task_HandleSearchParameterInput(u8);
static void Task_ExitSearch(u8);
static void Task_ExitSearchWaitForFade(u8);
static void HighlightSelectedSearchTopBarItem(u8);
static void HighlightSelectedSearchMenuItem(u8, u8);
static void PrintSelectedSearchParameters(u8);
static void DrawOrEraseSearchParameterBox(bool8);
static void PrintSearchParameterText(u8);
static u8 GetSearchModeSelection(u8 taskId, u8 option);
static void SetDefaultSearchModeAndOrder(u8);
static void CreateSearchParameterScrollArrows(u8);
static void EraseAndPrintSearchTextBox(const u8 *);
static void EraseSelectorArrow(u32);
static void PrintSelectorArrow(u32);
static void PrintSearchParameterTitle(u32, const u8 *);
static void ClearSearchParameterBoxText(void);
static u16 NationalPokedexNumToSpecies_HandleForms(u16);

// const rom data
#include "data/pokemon/pokedex_orders.h"

static const struct OamData sOamData_ScrollBar =
{
    .y = DISPLAY_HEIGHT,
    .affineMode = ST_OAM_AFFINE_OFF,
    .objMode = ST_OAM_OBJ_NORMAL,
    .mosaic = FALSE,
    .bpp = ST_OAM_4BPP,
    .shape = SPRITE_SHAPE(8x8),
    .x = 0,
    .matrixNum = 0,
    .size = SPRITE_SIZE(8x8),
    .tileNum = 0,
    .priority = 1,
    .paletteNum = 0,
    .affineParam = 0
};

static const struct OamData sOamData_ScrollArrow =
{
    .y = DISPLAY_HEIGHT,
    .affineMode = ST_OAM_AFFINE_OFF,
    .objMode = ST_OAM_OBJ_NORMAL,
    .mosaic = FALSE,
    .bpp = ST_OAM_4BPP,
    .shape = SPRITE_SHAPE(16x8),
    .x = 0,
    .matrixNum = 0,
    .size = SPRITE_SIZE(16x8),
    .tileNum = 0,
    .priority = 0,
    .paletteNum = 0,
    .affineParam = 0
};

static const struct OamData sOamData_InterfaceText =
{
    .y = DISPLAY_HEIGHT,
    .affineMode = ST_OAM_AFFINE_OFF,
    .objMode = ST_OAM_OBJ_NORMAL,
    .mosaic = FALSE,
    .bpp = ST_OAM_4BPP,
    .shape = SPRITE_SHAPE(32x16),
    .x = 0,
    .matrixNum = 0,
    .size = SPRITE_SIZE(32x16),
    .tileNum = 0,
    .priority = 0,
    .paletteNum = 0,
    .affineParam = 0
};

static const struct OamData sOamData_RotatingPokeBall =
{
    .y = DISPLAY_HEIGHT,
    .affineMode = ST_OAM_AFFINE_OFF,
    .objMode = ST_OAM_OBJ_WINDOW,
    .mosaic = FALSE,
    .bpp = ST_OAM_4BPP,
    .shape = SPRITE_SHAPE(32x32),
    .x = 0,
    .matrixNum = 0,
    .size = SPRITE_SIZE(32x32),
    .tileNum = 0,
    .priority = 1,
    .paletteNum = 0,
    .affineParam = 0
};

static const struct OamData sOamData_SeenOwnText =
{
    .y = DISPLAY_HEIGHT,
    .affineMode = ST_OAM_AFFINE_OFF,
    .objMode = ST_OAM_OBJ_NORMAL,
    .mosaic = FALSE,
    .bpp = ST_OAM_4BPP,
    .shape = SPRITE_SHAPE(64x32),
    .x = 0,
    .matrixNum = 0,
    .size = SPRITE_SIZE(64x32),
    .tileNum = 0,
    .priority = 0,
    .paletteNum = 0,
    .affineParam = 0
};

static const struct OamData sOamData_Dex8x16 =
{
    .y = DISPLAY_HEIGHT,
    .affineMode = ST_OAM_AFFINE_OFF,
    .objMode = ST_OAM_OBJ_NORMAL,
    .mosaic = FALSE,
    .bpp = ST_OAM_4BPP,
    .shape = SPRITE_SHAPE(8x16),
    .x = 0,
    .matrixNum = 0,
    .size = SPRITE_SIZE(8x16),
    .tileNum = 0,
    .priority = 0,
    .paletteNum = 0,
    .affineParam = 0
};

static const union AnimCmd sSpriteAnim_ScrollBar[] =
{
    ANIMCMD_FRAME(3, 30),
    ANIMCMD_END
};

static const union AnimCmd sSpriteAnim_ScrollArrow[] =
{
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_END
};

static const union AnimCmd sSpriteAnim_RotatingPokeBall[] =
{
    ANIMCMD_FRAME(16, 30),
    ANIMCMD_END
};

static const union AnimCmd sSpriteAnim_StartButton[] =
{
    ANIMCMD_FRAME(48, 30),
    ANIMCMD_END
};

static const union AnimCmd sSpriteAnim_SearchText[] =
{
    ANIMCMD_FRAME(40, 30),
    ANIMCMD_END
};

static const union AnimCmd sSpriteAnim_SelectButton[] =
{
    ANIMCMD_FRAME(32, 30),
    ANIMCMD_END
};

static const union AnimCmd sSpriteAnim_MenuText[] =
{
    ANIMCMD_FRAME(56, 30),
    ANIMCMD_END
};

static const union AnimCmd sSpriteAnim_SeenText[] =
{
    ANIMCMD_FRAME(64, 30),
    ANIMCMD_END
};

static const union AnimCmd sSpriteAnim_OwnText[] =
{
    ANIMCMD_FRAME(96, 30),
    ANIMCMD_END
};

static const union AnimCmd sSpriteAnim_HoennText[] =
{
    ANIMCMD_FRAME(160, 30),
    ANIMCMD_END
};

static const union AnimCmd sSpriteAnim_NationalText[] =
{
    ANIMCMD_FRAME(168, 30),
    ANIMCMD_END
};

static const union AnimCmd sSpriteAnim_HoennSeenOwnDigit0[] =
{
    ANIMCMD_FRAME(128, 30),
    ANIMCMD_END
};

static const union AnimCmd sSpriteAnim_HoennSeenOwnDigit1[] =
{
    ANIMCMD_FRAME(130, 30),
    ANIMCMD_END
};

static const union AnimCmd sSpriteAnim_HoennSeenOwnDigit2[] =
{
    ANIMCMD_FRAME(132, 30),
    ANIMCMD_END
};

static const union AnimCmd sSpriteAnim_HoennSeenOwnDigit3[] =
{
    ANIMCMD_FRAME(134, 30),
    ANIMCMD_END
};

static const union AnimCmd sSpriteAnim_HoennSeenOwnDigit4[] =
{
    ANIMCMD_FRAME(136, 30),
    ANIMCMD_END
};

static const union AnimCmd sSpriteAnim_HoennSeenOwnDigit5[] =
{
    ANIMCMD_FRAME(138, 30),
    ANIMCMD_END
};

static const union AnimCmd sSpriteAnim_HoennSeenOwnDigit6[] =
{
    ANIMCMD_FRAME(140, 30),
    ANIMCMD_END
};

static const union AnimCmd sSpriteAnim_HoennSeenOwnDigit7[] =
{
    ANIMCMD_FRAME(142, 30),
    ANIMCMD_END
};

static const union AnimCmd sSpriteAnim_HoennSeenOwnDigit8[] =
{
    ANIMCMD_FRAME(144, 30),
    ANIMCMD_END
};

static const union AnimCmd sSpriteAnim_HoennSeenOwnDigit9[] =
{
    ANIMCMD_FRAME(146, 30),
    ANIMCMD_END
};

static const union AnimCmd sSpriteAnim_NationalSeenOwnDigit0[] =
{
    ANIMCMD_FRAME(176, 30),
    ANIMCMD_END
};

static const union AnimCmd sSpriteAnim_NationalSeenOwnDigit1[] =
{
    ANIMCMD_FRAME(178, 30),
    ANIMCMD_END
};

static const union AnimCmd sSpriteAnim_NationalSeenOwnDigit2[] =
{
    ANIMCMD_FRAME(180, 30),
    ANIMCMD_END
};

static const union AnimCmd sSpriteAnim_NationalSeenOwnDigit3[] =
{
    ANIMCMD_FRAME(182, 30),
    ANIMCMD_END
};

static const union AnimCmd sSpriteAnim_NationalSeenOwnDigit4[] =
{
    ANIMCMD_FRAME(184, 30),
    ANIMCMD_END
};

static const union AnimCmd sSpriteAnim_NationalSeenOwnDigit5[] =
{
    ANIMCMD_FRAME(186, 30),
    ANIMCMD_END
};

static const union AnimCmd sSpriteAnim_NationalSeenOwnDigit6[] =
{
    ANIMCMD_FRAME(188, 30),
    ANIMCMD_END
};

static const union AnimCmd sSpriteAnim_NationalSeenOwnDigit7[] =
{
    ANIMCMD_FRAME(190, 30),
    ANIMCMD_END
};

static const union AnimCmd sSpriteAnim_NationalSeenOwnDigit8[] =
{
    ANIMCMD_FRAME(192, 30),
    ANIMCMD_END
};

static const union AnimCmd sSpriteAnim_NationalSeenOwnDigit9[] =
{
    ANIMCMD_FRAME(194, 30),
    ANIMCMD_END
};

static const union AnimCmd sSpriteAnim_DexListStartMenuCursor[] =
{
    ANIMCMD_FRAME(4, 30),
    ANIMCMD_END
};

static const union AnimCmd *const sSpriteAnimTable_ScrollBar[] =
{
    sSpriteAnim_ScrollBar
};

static const union AnimCmd *const sSpriteAnimTable_ScrollArrow[] =
{
    sSpriteAnim_ScrollArrow
};

static const union AnimCmd *const sSpriteAnimTable_RotatingPokeBall[] =
{
    sSpriteAnim_RotatingPokeBall
};

static const union AnimCmd *const sSpriteAnimTable_InterfaceText[] =
{
    sSpriteAnim_StartButton,
    sSpriteAnim_SearchText,
    sSpriteAnim_SelectButton,
    sSpriteAnim_MenuText
};

static const union AnimCmd *const sSpriteAnimTable_SeenOwnText[] =
{
    sSpriteAnim_SeenText,
    sSpriteAnim_OwnText
};

static const union AnimCmd *const sSpriteAnimTable_HoennNationalText[] =
{
    sSpriteAnim_HoennText,
    sSpriteAnim_NationalText
};

static const union AnimCmd *const sSpriteAnimTable_HoennSeenOwnNumber[] =
{
    sSpriteAnim_HoennSeenOwnDigit0,
    sSpriteAnim_HoennSeenOwnDigit1,
    sSpriteAnim_HoennSeenOwnDigit2,
    sSpriteAnim_HoennSeenOwnDigit3,
    sSpriteAnim_HoennSeenOwnDigit4,
    sSpriteAnim_HoennSeenOwnDigit5,
    sSpriteAnim_HoennSeenOwnDigit6,
    sSpriteAnim_HoennSeenOwnDigit7,
    sSpriteAnim_HoennSeenOwnDigit8,
    sSpriteAnim_HoennSeenOwnDigit9
};

static const union AnimCmd *const sSpriteAnimTable_NationalSeenOwnNumber[] =
{
    sSpriteAnim_NationalSeenOwnDigit0,
    sSpriteAnim_NationalSeenOwnDigit1,
    sSpriteAnim_NationalSeenOwnDigit2,
    sSpriteAnim_NationalSeenOwnDigit3,
    sSpriteAnim_NationalSeenOwnDigit4,
    sSpriteAnim_NationalSeenOwnDigit5,
    sSpriteAnim_NationalSeenOwnDigit6,
    sSpriteAnim_NationalSeenOwnDigit7,
    sSpriteAnim_NationalSeenOwnDigit8,
    sSpriteAnim_NationalSeenOwnDigit9
};

static const union AnimCmd *const sSpriteAnimTable_DexListStartMenuCursor[] =
{
    sSpriteAnim_DexListStartMenuCursor
};

#define TAG_DEX_INTERFACE 4096 // Tile and pal tag used for all interface sprites.

static const struct SpriteTemplate sScrollBarSpriteTemplate =
{
    .tileTag = TAG_DEX_INTERFACE,
    .paletteTag = TAG_DEX_INTERFACE,
    .oam = &sOamData_ScrollBar,
    .anims = sSpriteAnimTable_ScrollBar,
    .images = NULL,
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = SpriteCB_Scrollbar,
};

static const struct SpriteTemplate sScrollArrowSpriteTemplate =
{
    .tileTag = TAG_DEX_INTERFACE,
    .paletteTag = TAG_DEX_INTERFACE,
    .oam = &sOamData_ScrollArrow,
    .anims = sSpriteAnimTable_ScrollArrow,
    .images = NULL,
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = SpriteCB_ScrollArrow,
};

static const struct SpriteTemplate sInterfaceTextSpriteTemplate =
{
    .tileTag = TAG_DEX_INTERFACE,
    .paletteTag = TAG_DEX_INTERFACE,
    .oam = &sOamData_InterfaceText,
    .anims = sSpriteAnimTable_InterfaceText,
    .images = NULL,
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = SpriteCB_DexListInterfaceText,
};

static const struct SpriteTemplate sRotatingPokeBallSpriteTemplate =
{
    .tileTag = TAG_DEX_INTERFACE,
    .paletteTag = TAG_DEX_INTERFACE,
    .oam = &sOamData_RotatingPokeBall,
    .anims = sSpriteAnimTable_RotatingPokeBall,
    .images = NULL,
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = SpriteCB_RotatingPokeBall,
};

static const struct SpriteTemplate sSeenOwnTextSpriteTemplate =
{
    .tileTag = TAG_DEX_INTERFACE,
    .paletteTag = TAG_DEX_INTERFACE,
    .oam = &sOamData_SeenOwnText,
    .anims = sSpriteAnimTable_SeenOwnText,
    .images = NULL,
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = SpriteCB_SeenOwnInfo,
};

static const struct SpriteTemplate sHoennNationalTextSpriteTemplate =
{
    .tileTag = TAG_DEX_INTERFACE,
    .paletteTag = TAG_DEX_INTERFACE,
    .oam = &sOamData_InterfaceText,
    .anims = sSpriteAnimTable_HoennNationalText,
    .images = NULL,
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = SpriteCB_SeenOwnInfo,
};

static const struct SpriteTemplate sHoennDexSeenOwnNumberSpriteTemplate =
{
    .tileTag = TAG_DEX_INTERFACE,
    .paletteTag = TAG_DEX_INTERFACE,
    .oam = &sOamData_Dex8x16,
    .anims = sSpriteAnimTable_HoennSeenOwnNumber,
    .images = NULL,
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = SpriteCB_SeenOwnInfo,
};

static const struct SpriteTemplate sNationalDexSeenOwnNumberSpriteTemplate =
{
    .tileTag = TAG_DEX_INTERFACE,
    .paletteTag = TAG_DEX_INTERFACE,
    .oam = &sOamData_Dex8x16,
    .anims = sSpriteAnimTable_NationalSeenOwnNumber,
    .images = NULL,
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = SpriteCB_SeenOwnInfo,
};

static const struct SpriteTemplate sDexListStartMenuCursorSpriteTemplate =
{
    .tileTag = TAG_DEX_INTERFACE,
    .paletteTag = TAG_DEX_INTERFACE,
    .oam = &sOamData_Dex8x16,
    .anims = sSpriteAnimTable_DexListStartMenuCursor,
    .images = NULL,
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = SpriteCB_DexListStartMenuCursor,
};

static const struct CompressedSpriteSheet sInterfaceSpriteSheet[] =
{
    {gPokedexInterface_Gfx, 0x2000, TAG_DEX_INTERFACE},
    {0}
};

static const struct SpritePalette sInterfaceSpritePalette[] =
{
    {gPokedexBgHoenn_Pal, TAG_DEX_INTERFACE},
    {0}
};

// By scroll speed. Last element of each unused
static const u8 sScrollMonIncrements[] = {4, 8, 16, 32, 32};
static const u8 sScrollTimers[] = {8, 4, 2, 1, 1};

static const struct BgTemplate sPokedex_BgTemplate[] =
{
    {
        .bg = 0,
        .charBaseIndex = 0,
        .mapBaseIndex = 12,
        .screenSize = 0,
        .paletteMode = 0,
        .priority = 0,
        .baseTile = 0
    },
    {
        .bg = 1,
        .charBaseIndex = 0,
        .mapBaseIndex = 13,
        .screenSize = 0,
        .paletteMode = 0,
        .priority = 1,
        .baseTile = 0
    },
    {
        .bg = 2,
        .charBaseIndex = 2,
        .mapBaseIndex = 14,
        .screenSize = 0,
        .paletteMode = 0,
        .priority = 2,
        .baseTile = 0
    },
    {
        .bg = 3,
        .charBaseIndex = 0,
        .mapBaseIndex = 15,
        .screenSize = 0,
        .paletteMode = 0,
        .priority = 3,
        .baseTile = 0
    }
};

static const struct WindowTemplate sPokemonList_WindowTemplate[] =
{
    {
        .bg = 2,
        .tilemapLeft = 0,
        .tilemapTop = 0,
        .width = 32,
        .height = 32,
        .paletteNum = 0,
        .baseBlock = 1,
    },
    DUMMY_WIN_TEMPLATE
};

static const u8 sText_No0000[] = _("{NO}0000");
static const u8 sText_No000[] = _("{NO}000");
static const u8 sCaughtBall_Gfx[] = INCBIN_U8("graphics/pokedex/caught_ball.4bpp");
static const u8 sStudiedStar_Gfx[] = INCBIN_U8("graphics/pokedex/studied_star.4bpp");
static const u8 sText_TenDashes[] = _("----------");

ALIGNED(4) static const u8 sExpandedPlaceholder_PokedexDescription[] = _("");

static const u16 sSizeScreenSilhouette_Pal[] = INCBIN_U16("graphics/pokedex/size_silhouette.gbapal");

static const struct BgTemplate sInfoScreen_BgTemplate[] =
{
    {
        .bg = 0,
        .charBaseIndex = 2,
        .mapBaseIndex = 12,
        .screenSize = 0,
        .paletteMode = 0,
        .priority = 3,
        .baseTile = 0
    },
    {
        .bg = 1,
        .charBaseIndex = 0,
        .mapBaseIndex = 13,
        .screenSize = 0,
        .paletteMode = 0,
        .priority = 0,
        .baseTile = 0
    },
    {
        .bg = 2,
        .charBaseIndex = 2,
        .mapBaseIndex = 14,
        .screenSize = 0,
        .paletteMode = 0,
        .priority = 1,
        .baseTile = 0
    },
    {
        .bg = 3,
        .charBaseIndex = 0,
        .mapBaseIndex = 15,
        .screenSize = 0,
        .paletteMode = 0,
        .priority = 2,
        .baseTile = 0
    }
};

static const struct WindowTemplate sInfoScreen_WindowTemplates[] =
{
    [WIN_INFO] =
    {
        .bg = 2,
        .tilemapLeft = 0,
        .tilemapTop = 0,
        .width = 32,
        .height = 20,
        .paletteNum = 1,
        .baseBlock = 1,
    },
    [WIN_FOOTPRINT] =
    {
        .bg = 2,
        .tilemapLeft = 25,
        .tilemapTop = 8,
        .width = 2,
        .height = 2,
        .paletteNum = 15,
        .baseBlock = 641,
    },
    [WIN_CRY_WAVE] =
    {
        .bg = 0,
        .tilemapLeft = 0,
        .tilemapTop = 12,
        .width = 32,
        .height = 7,
        .paletteNum = 8,
        .baseBlock = 645,
    },
    [WIN_VU_METER] =
    {
        .bg = 2,
        .tilemapLeft = 18,
        .tilemapTop = 3,
        .width = 10,
        .height = 8,
        .paletteNum = 9,
        .baseBlock = 869,
    },
    DUMMY_WIN_TEMPLATE
};

static const struct BgTemplate sNewEntryInfoScreen_BgTemplate[] =
{
    {
        .bg = 2,
        .charBaseIndex = 2,
        .mapBaseIndex = 14,
        .screenSize = 0,
        .paletteMode = 0,
        .priority = 2,
        .baseTile = 0
    },
    {
        .bg = 3,
        .charBaseIndex = 1,
        .mapBaseIndex = 15,
        .screenSize = 0,
        .paletteMode = 0,
        .priority = 3,
        .baseTile = 0
    },
};

static const struct WindowTemplate sNewEntryInfoScreen_WindowTemplates[] =
{
    [WIN_INFO] =
    {
        .bg = 2,
        .tilemapLeft = 0,
        .tilemapTop = 0,
        .width = 32,
        .height = 20,
        .paletteNum = 0,
        .baseBlock = 1,
    },
    [WIN_FOOTPRINT] =
    {
        .bg = 2,
        .tilemapLeft = 25,
        .tilemapTop = 8,
        .width = 2,
        .height = 2,
        .paletteNum = 15,
        .baseBlock = 641,
    },
	[WIN_CAUGHT_TYPES] =
	{
        .bg = 2,
        .tilemapLeft = 13,
        .tilemapTop = 7,
        .width = 9,
        .height = 2,
        .paletteNum = 12,
        .baseBlock = 645,		
	},
    DUMMY_WIN_TEMPLATE
};

static const u8 sText_TenDashes2[] = _("----------");

// First character in range followed by number of characters in range for upper and lowercase
static const u8 sLetterSearchRanges[][4] =
{
    {}, // Name not specified, shouldn't be reached
    [NAME_ABC] = {CHAR_A, 3, CHAR_a, 3},
    [NAME_DEF] = {CHAR_D, 3, CHAR_d, 3},
    [NAME_GHI] = {CHAR_G, 3, CHAR_g, 3},
    [NAME_JKL] = {CHAR_J, 3, CHAR_j, 3},
    [NAME_MNO] = {CHAR_M, 3, CHAR_m, 3},
    [NAME_PQR] = {CHAR_P, 3, CHAR_p, 3},
    [NAME_STU] = {CHAR_S, 3, CHAR_s, 3},
    [NAME_VWX] = {CHAR_V, 3, CHAR_v, 3},
    [NAME_YZ]  = {CHAR_Y, 2, CHAR_y, 2},
};

#define LETTER_IN_RANGE_UPPER(letter, range) \
    ((letter) >= sLetterSearchRanges[range][0]                                  \
  && (letter) < sLetterSearchRanges[range][0] + sLetterSearchRanges[range][1])  \

#define LETTER_IN_RANGE_LOWER(letter, range) \
    ((letter) >= sLetterSearchRanges[range][2]                                  \
  && (letter) < sLetterSearchRanges[range][2] + sLetterSearchRanges[range][3])  \

static const struct SearchMenuTopBarItem sSearchMenuTopBarItems[SEARCH_TOPBAR_COUNT] =
{
    [SEARCH_TOPBAR_SEARCH] =
    {
        .description = gText_SearchForPkmnBasedOnParameters,
        .highlightX = 0,
        .highlightY = 0,
        .highlightWidth = 5,
    },
    [SEARCH_TOPBAR_SHIFT] =
    {
        .description = gText_SwitchPokedexListings,
        .highlightX = 6,
        .highlightY = 0,
        .highlightWidth = 5,
    },
    [SEARCH_TOPBAR_CANCEL] =
    {
        .description = gText_ReturnToPokedex,
        .highlightX = 12,
        .highlightY = 0,
        .highlightWidth = 5,
    },
};

static const struct SearchMenuItem sSearchMenuItems[SEARCH_COUNT] =
{
    [SEARCH_NAME] =
    {
        .description = gText_ListByFirstLetter,
        .titleBgX = 0,
        .titleBgY = 2,
        .titleBgWidth = 5,
        .selectionBgX = 5,
        .selectionBgY = 2,
        .selectionBgWidth = 12,
    },
    [SEARCH_COLOR] =
    {
        .description = gText_ListByBodyColor,
        .titleBgX = 0,
        .titleBgY = 4,
        .titleBgWidth = 5,
        .selectionBgX = 5,
        .selectionBgY = 4,
        .selectionBgWidth = 12,
    },
    [SEARCH_TYPE_LEFT] =
    {
        .description = gText_ListByType,
        .titleBgX = 0,
        .titleBgY = 6,
        .titleBgWidth = 5,
        .selectionBgX = 5,
        .selectionBgY = 6,
        .selectionBgWidth = 6,
    },
    [SEARCH_TYPE_RIGHT] =
    {
        .description = gText_ListByType,
        .titleBgX = 0,
        .titleBgY = 6,
        .titleBgWidth = 5,
        .selectionBgX = 11,
        .selectionBgY = 6,
        .selectionBgWidth = 6,
    },
    [SEARCH_ORDER] =
    {
        .description = gText_SelectPokedexListingMode,
        .titleBgX = 0,
        .titleBgY = 8,
        .titleBgWidth = 5,
        .selectionBgX = 5,
        .selectionBgY = 8,
        .selectionBgWidth = 12,
    },
    [SEARCH_MODE] =
    {
        .description = gText_SelectPokedexMode,
        .titleBgX = 0,
        .titleBgY = 10,
        .titleBgWidth = 5,
        .selectionBgX = 5,
        .selectionBgY = 10,
        .selectionBgWidth = 12,
    },
    [SEARCH_OK] =
    {
        .description = gText_ExecuteSearchSwitch,
        .titleBgX = 0,
        .titleBgY = 12,
        .titleBgWidth = 5,
        .selectionBgX = 0,
        .selectionBgY = 0,
        .selectionBgWidth = 0,
    },
};

// Left, Right, Up, Down
static const u8 sSearchMovementMap_SearchNatDex[SEARCH_COUNT][4] =
{
    [SEARCH_NAME] =
    {
        0xFF,
        0xFF,
        0xFF,
        SEARCH_COLOR
    },
    [SEARCH_COLOR] =
    {
        0xFF,
        0xFF,
        SEARCH_NAME,
        SEARCH_TYPE_LEFT
    },
    [SEARCH_TYPE_LEFT] =
    {
        0xFF,
        SEARCH_TYPE_RIGHT,
        SEARCH_COLOR,
        SEARCH_ORDER
    },
    [SEARCH_TYPE_RIGHT] =
    {   SEARCH_TYPE_LEFT,
        0xFF,
        SEARCH_COLOR,
        SEARCH_ORDER
    },
    [SEARCH_ORDER] =
    {
        0xFF,
        0xFF,
        SEARCH_TYPE_LEFT,
        SEARCH_MODE
    },
    [SEARCH_MODE] =
    {
        0xFF,
        0xFF,
        SEARCH_ORDER,
        SEARCH_OK
    },
    [SEARCH_OK] =
    {
        0xFF,
        0xFF,
        SEARCH_MODE,
        0xFF
    },
};

// Left, Right, Up, Down
static const u8 sSearchMovementMap_ShiftNatDex[SEARCH_COUNT][4] =
{
    [SEARCH_NAME] =
    {
        0xFF,
        0xFF,
        0xFF,
        0xFF
    },
    [SEARCH_COLOR] =
    {
        0xFF,
        0xFF,
        0xFF,
        0xFF
    },
    [SEARCH_TYPE_LEFT] =
    {
        0xFF,
        0xFF,
        0xFF,
        0xFF
    },
    [SEARCH_TYPE_RIGHT] =
    {
        0xFF,
        0xFF,
        0xFF,
        0xFF
    },
    [SEARCH_ORDER] =
    {
        0xFF,
        0xFF,
        0xFF,
        SEARCH_MODE
    },
    [SEARCH_MODE] =
    {
        0xFF,
        0xFF,
        SEARCH_ORDER,
        SEARCH_OK
    },
    [SEARCH_OK] =
    {
        0xFF,
        0xFF,
        SEARCH_MODE,
        0xFF
    },
};

// Left, Right, Up, Down
static const u8 sSearchMovementMap_SearchHoennDex[SEARCH_COUNT][4] =
{
    [SEARCH_NAME] =
    {
        0xFF,
        0xFF,
        0xFF,
        SEARCH_COLOR
    },
    [SEARCH_COLOR] =
    {
        0xFF,
        0xFF,
        SEARCH_NAME,
        SEARCH_TYPE_LEFT
    },
    [SEARCH_TYPE_LEFT] =
    {
        0xFF,
        SEARCH_TYPE_RIGHT,
        SEARCH_COLOR,
        SEARCH_ORDER
    },
    [SEARCH_TYPE_RIGHT] =
    {   SEARCH_TYPE_LEFT,
        0xFF,
        SEARCH_COLOR,
        SEARCH_ORDER
    },
    [SEARCH_ORDER] =
    {
        0xFF,
        0xFF,
        SEARCH_TYPE_LEFT,
        SEARCH_OK
    },
    [SEARCH_MODE] =
    {
        0xFF,
        0xFF,
        0xFF,
        0xFF
    },
    [SEARCH_OK] =
    {
        0xFF,
        0xFF,
        SEARCH_ORDER,
        0xFF
    },
};

// Left, Right, Up, Down
static const u8 sSearchMovementMap_ShiftHoennDex[SEARCH_COUNT][4] =
{
    [SEARCH_NAME] =
    {
        0xFF,
        0xFF,
        0xFF,
        0xFF
    },
    [SEARCH_COLOR] =
    {
        0xFF,
        0xFF,
        0xFF,
        0xFF
    },
    [SEARCH_TYPE_LEFT] =
    {
        0xFF,
        0xFF,
        0xFF,
        0xFF
    },
    [SEARCH_TYPE_RIGHT] =
    {
        0xFF,
        0xFF,
        0xFF,
        0xFF
    },
    [SEARCH_ORDER] =
    {
        0xFF,
        0xFF,
        0xFF,
        SEARCH_OK
    },
    [SEARCH_MODE] =
    {
        0xFF,
        0xFF,
        0xFF,
        0xFF
    },
    [SEARCH_OK] =
    {
        0xFF,
        0xFF,
        SEARCH_ORDER,
        0xFF
    },
};

static const struct SearchOptionText sDexModeOptions[] =
{
    [DEX_MODE_HOENN]    = {gText_DexHoennDescription, gText_DexHoennTitle},
    [DEX_MODE_NATIONAL] = {gText_DexNatDescription,   gText_DexNatTitle},
    {},
};

static const struct SearchOptionText sDexOrderOptions[] =
{
    [ORDER_NUMERICAL]    = {gText_DexSortNumericalDescription, gText_DexSortNumericalTitle},
    [ORDER_ALPHABETICAL] = {gText_DexSortAtoZDescription,      gText_DexSortAtoZTitle},
    [ORDER_HEAVIEST]     = {gText_DexSortHeaviestDescription,  gText_DexSortHeaviestTitle},
    [ORDER_LIGHTEST]     = {gText_DexSortLightestDescription,  gText_DexSortLightestTitle},
    [ORDER_TALLEST]      = {gText_DexSortTallestDescription,   gText_DexSortTallestTitle},
    [ORDER_SMALLEST]     = {gText_DexSortSmallestDescription,  gText_DexSortSmallestTitle},
    {},
};

static const struct SearchOptionText sDexSearchNameOptions[] =
{
    {gText_DexEmptyString, gText_DexSearchDontSpecify},
    [NAME_ABC] = {gText_DexEmptyString, gText_DexSearchAlphaABC},
    [NAME_DEF] = {gText_DexEmptyString, gText_DexSearchAlphaDEF},
    [NAME_GHI] = {gText_DexEmptyString, gText_DexSearchAlphaGHI},
    [NAME_JKL] = {gText_DexEmptyString, gText_DexSearchAlphaJKL},
    [NAME_MNO] = {gText_DexEmptyString, gText_DexSearchAlphaMNO},
    [NAME_PQR] = {gText_DexEmptyString, gText_DexSearchAlphaPQR},
    [NAME_STU] = {gText_DexEmptyString, gText_DexSearchAlphaSTU},
    [NAME_VWX] = {gText_DexEmptyString, gText_DexSearchAlphaVWX},
    [NAME_YZ]  = {gText_DexEmptyString, gText_DexSearchAlphaYZ},
    {},
};

static const struct SearchOptionText sDexSearchColorOptions[] =
{
    {gText_DexEmptyString, gText_DexSearchDontSpecify},
    [BODY_COLOR_RED + 1]    = {gText_DexEmptyString, gText_DexSearchColorRed},
    [BODY_COLOR_BLUE + 1]   = {gText_DexEmptyString, gText_DexSearchColorBlue},
    [BODY_COLOR_YELLOW + 1] = {gText_DexEmptyString, gText_DexSearchColorYellow},
    [BODY_COLOR_GREEN + 1]  = {gText_DexEmptyString, gText_DexSearchColorGreen},
    [BODY_COLOR_BLACK + 1]  = {gText_DexEmptyString, gText_DexSearchColorBlack},
    [BODY_COLOR_BROWN + 1]  = {gText_DexEmptyString, gText_DexSearchColorBrown},
    [BODY_COLOR_PURPLE + 1] = {gText_DexEmptyString, gText_DexSearchColorPurple},
    [BODY_COLOR_GRAY + 1]   = {gText_DexEmptyString, gText_DexSearchColorGray},
    [BODY_COLOR_WHITE + 1]  = {gText_DexEmptyString, gText_DexSearchColorWhite},
    [BODY_COLOR_PINK + 1]   = {gText_DexEmptyString, gText_DexSearchColorPink},
    {},
};

static const struct SearchOptionText sDexSearchTypeOptions[NUMBER_OF_MON_TYPES + 1] = // + 2 for "None" and terminator, - 1 for Mystery
{
    {gText_DexEmptyString, gText_DexSearchTypeNone},
    {gText_DexEmptyString, gTypesInfo[TYPE_NORMAL].name},
    {gText_DexEmptyString, gTypesInfo[TYPE_FIGHTING].name},
    {gText_DexEmptyString, gTypesInfo[TYPE_FLYING].name},
    {gText_DexEmptyString, gTypesInfo[TYPE_POISON].name},
    {gText_DexEmptyString, gTypesInfo[TYPE_GROUND].name},
    {gText_DexEmptyString, gTypesInfo[TYPE_ROCK].name},
    {gText_DexEmptyString, gTypesInfo[TYPE_BUG].name},
    {gText_DexEmptyString, gTypesInfo[TYPE_GHOST].name},
    {gText_DexEmptyString, gTypesInfo[TYPE_STEEL].name},
    {gText_DexEmptyString, gTypesInfo[TYPE_FIRE].name},
    {gText_DexEmptyString, gTypesInfo[TYPE_WATER].name},
    {gText_DexEmptyString, gTypesInfo[TYPE_GRASS].name},
    {gText_DexEmptyString, gTypesInfo[TYPE_ELECTRIC].name},
    {gText_DexEmptyString, gTypesInfo[TYPE_PSYCHIC].name},
    {gText_DexEmptyString, gTypesInfo[TYPE_ICE].name},
    {gText_DexEmptyString, gTypesInfo[TYPE_DRAGON].name},
    {gText_DexEmptyString, gTypesInfo[TYPE_DARK].name},
    {gText_DexEmptyString, gTypesInfo[TYPE_FAIRY].name},
    {},
};

static const u8 sPokedexModes[] = {DEX_MODE_HOENN, DEX_MODE_NATIONAL};
static const u8 sOrderOptions[] =
{
    ORDER_NUMERICAL,
    ORDER_ALPHABETICAL,
    ORDER_HEAVIEST,
    ORDER_LIGHTEST,
    ORDER_TALLEST,
    ORDER_SMALLEST,
};

static const u8 sDexSearchTypeIds[NUMBER_OF_MON_TYPES] =
{
    TYPE_NONE,
    TYPE_NORMAL,
    TYPE_FIGHTING,
    TYPE_FLYING,
    TYPE_POISON,
    TYPE_GROUND,
    TYPE_ROCK,
    TYPE_BUG,
    TYPE_GHOST,
    TYPE_STEEL,
    TYPE_FIRE,
    TYPE_WATER,
    TYPE_GRASS,
    TYPE_ELECTRIC,
    TYPE_PSYCHIC,
    TYPE_ICE,
    TYPE_DRAGON,
    TYPE_DARK,
    TYPE_FAIRY,
};

// Number pairs are the task data for tracking the cursor pos and scroll offset of each option list
// See task data defines above Task_LoadSearchMenu
static const struct SearchOption sSearchOptions[] =
{
    [SEARCH_NAME]       = {sDexSearchNameOptions,  6,  7, ARRAY_COUNT(sDexSearchNameOptions) - 1},
    [SEARCH_COLOR]      = {sDexSearchColorOptions, 8,  9, ARRAY_COUNT(sDexSearchColorOptions) - 1},
    [SEARCH_TYPE_LEFT]  = {sDexSearchTypeOptions, 10, 11, ARRAY_COUNT(sDexSearchTypeOptions) - 1},
    [SEARCH_TYPE_RIGHT] = {sDexSearchTypeOptions, 12, 13, ARRAY_COUNT(sDexSearchTypeOptions) - 1},
    [SEARCH_ORDER]      = {sDexOrderOptions,       4,  5, ARRAY_COUNT(sDexOrderOptions) - 1},
    [SEARCH_MODE]       = {sDexModeOptions,        2,  3, ARRAY_COUNT(sDexModeOptions) - 1},
};

static const struct BgTemplate sSearchMenu_BgTemplate[] =
{
    {
        .bg = 0,
        .charBaseIndex = 2,
        .mapBaseIndex = 12,
        .screenSize = 0,
        .paletteMode = 0,
        .priority = 0,
        .baseTile = 0
    },
    {
        .bg = 1,
        .charBaseIndex = 0,
        .mapBaseIndex = 13,
        .screenSize = 0,
        .paletteMode = 0,
        .priority = 1,
        .baseTile = 0
    },
    {
        .bg = 2,
        .charBaseIndex = 2,
        .mapBaseIndex = 14,
        .screenSize = 0,
        .paletteMode = 0,
        .priority = 2,
        .baseTile = 0
    },
    {
        .bg = 3,
        .charBaseIndex = 0,
        .mapBaseIndex = 15,
        .screenSize = 0,
        .paletteMode = 0,
        .priority = 3,
        .baseTile = 0
    }
};

static const struct WindowTemplate sSearchMenu_WindowTemplate[] =
{
    {
        .bg = 2,
        .tilemapLeft = 0,
        .tilemapTop = 0,
        .width = 32,
        .height = 20,
        .paletteNum = 0,
        .baseBlock = 0x0001,
    },
    DUMMY_WIN_TEMPLATE
};

// .text

void ResetPokedex(void)
{
    u16 i;

    sLastSelectedPokemon = 0;
    sPokeBallRotation = POKEBALL_ROTATION_TOP;
    gUnusedPokedexU8 = 0;
    gSaveBlock2Ptr->pokedex.mode = DEX_MODE_HOENN;
    gSaveBlock2Ptr->pokedex.order = 0;
    gSaveBlock2Ptr->pokedex.nationalMagic = 0;
    gSaveBlock2Ptr->pokedex.unknown2 = 0;
    gSaveBlock2Ptr->pokedex.unownPersonality = 0;
    gSaveBlock2Ptr->pokedex.spindaPersonality = 0;
    gSaveBlock2Ptr->pokedex.unknown3 = 0;
    DisableNationalPokedex();
    for (i = 0; i < NUM_DEX_FLAG_BYTES; i++)
    {
        gSaveBlock1Ptr->dexStudied[i] = 0;
        gSaveBlock1Ptr->dexCaught[i] = 0;
        gSaveBlock1Ptr->dexSeen[i] = 0;
    }
}

void ResetPokedexScrollPositions(void)
{
    sLastSelectedPokemon = 0;
    sPokeBallRotation = POKEBALL_ROTATION_TOP;
}

static void VBlankCB_Pokedex(void)
{
    LoadOam();
    ProcessSpriteCopyRequests();
    TransferPlttBuffer();
}

static void ResetPokedexView(struct PokedexView *pokedexView)
{
    u16 i;

    for (i = 0; i < NATIONAL_DEX_COUNT; i++)
    {
        pokedexView->pokedexList[i].dexNum = 0xFFFF;
        pokedexView->pokedexList[i].seen = FALSE;
        pokedexView->pokedexList[i].owned = FALSE;
        pokedexView->pokedexList[i].studied = FALSE;
    }
    pokedexView->pokedexList[NATIONAL_DEX_COUNT].dexNum = 0;
    pokedexView->pokedexList[NATIONAL_DEX_COUNT].seen = FALSE;
    pokedexView->pokedexList[NATIONAL_DEX_COUNT].owned = FALSE;
    pokedexView->pokedexList[NATIONAL_DEX_COUNT].studied = FALSE;
    pokedexView->pokemonListCount = 0;
    pokedexView->selectedPokemon = 0;
    pokedexView->selectedPokemonBackup = 0;
    pokedexView->dexMode = DEX_MODE_HOENN;
    pokedexView->dexModeBackup = DEX_MODE_HOENN;
    pokedexView->dexOrder = ORDER_NUMERICAL;
    pokedexView->dexOrderBackup = ORDER_NUMERICAL;
    pokedexView->seenCount = 0;
    pokedexView->ownCount = 0;
    for (i = 0; i < MAX_MONS_ON_SCREEN; i++)
        pokedexView->monSpriteIds[i] = 0xFFFF;
    pokedexView->pokeBallRotationStep = 0;
    pokedexView->pokeBallRotationBackup = 0;
    pokedexView->pokeBallRotation = 0;
    pokedexView->initialVOffset = 0;
    pokedexView->scrollTimer = 0;
    pokedexView->scrollDirection = 0;
    pokedexView->listVOffset = 0;
    pokedexView->listMovingVOffset = 0;
    pokedexView->scrollMonIncrement = 0;
    pokedexView->maxScrollTimer = 0;
    pokedexView->scrollSpeed = 0;
    pokedexView->currentPage = PAGE_MAIN;
    pokedexView->currentPageBackup = PAGE_MAIN;
    pokedexView->isSearchResults = FALSE;
    pokedexView->selectedScreen = AREA_SCREEN;
    pokedexView->screenSwitchState = 0;
    pokedexView->menuIsOpen = 0;
    pokedexView->menuCursorPos = 0;
    pokedexView->menuY = 0;
    pokedexView->formSpecies = 0;
}

void CB2_OpenPokedex(void)
{
    if (POKEDEX_PLUS_HGSS)
    {
        CB2_OpenPokedexPlusHGSS();
        return;
    }

    switch (gMain.state)
    {
    case 0:
    default:
        SetVBlankCallback(NULL);
        ResetOtherVideoRegisters(0);
        DmaFillLarge16(3, 0, (u8 *)VRAM, VRAM_SIZE, 0x1000);
        DmaClear32(3, OAM, OAM_SIZE);
        DmaClear16(3, PLTT, PLTT_SIZE);
        gMain.state = 1;
        break;
    case 1:
        ScanlineEffect_Stop();
        ResetTasks();
        ResetSpriteData();
        ResetPaletteFade();
        FreeAllSpritePalettes();
        gReservedSpritePaletteCount = 8;
        ResetAllPicSprites();
        gMain.state++;
        break;
    case 2:
        sPokedexView = AllocZeroed(sizeof(struct PokedexView));
        ResetPokedexView(sPokedexView);
        CreateTask(Task_OpenPokedexMainPage, 0);
        sPokedexView->dexMode = gSaveBlock2Ptr->pokedex.mode;
        if (!IsNationalPokedexEnabled())
            sPokedexView->dexMode = DEX_MODE_HOENN;
        sPokedexView->dexOrder = gSaveBlock2Ptr->pokedex.order;
        sPokedexView->selectedPokemon = sLastSelectedPokemon;
        sPokedexView->pokeBallRotation = sPokeBallRotation;
        sPokedexView->selectedScreen = AREA_SCREEN;
        if (!IsNationalPokedexEnabled())
        {
            sPokedexView->seenCount = GetHoennPokedexCount(FLAG_GET_SEEN);
            sPokedexView->ownCount = GetHoennPokedexCount(FLAG_GET_CAUGHT);
        }
        else
        {
            sPokedexView->seenCount = GetNationalPokedexCount(FLAG_GET_SEEN);
            sPokedexView->ownCount = GetNationalPokedexCount(FLAG_GET_CAUGHT);
        }
        sPokedexView->initialVOffset = 8;
        gMain.state++;
        break;
    case 3:
        EnableInterrupts(1);
        SetVBlankCallback(VBlankCB_Pokedex);
        SetMainCallback2(CB2_Pokedex);
        CreatePokedexList(sPokedexView->dexMode, sPokedexView->dexOrder);
        m4aMPlayVolumeControl(&gMPlayInfo_BGM, TRACKS_ALL, 0x80);
        break;
    }
}

static void CB2_Pokedex(void)
{
    RunTasks();
    AnimateSprites();
    BuildOamBuffer();
    UpdatePaletteFade();
}

void Task_OpenPokedexMainPage(u8 taskId)
{
    sPokedexView->isSearchResults = FALSE;
	sPokedexView->formSpecies = 0;
	sFormFixBit = 0;
    if (LoadPokedexListPage(PAGE_MAIN))
        gTasks[taskId].func = Task_HandlePokedexInput;
}

#define tLoadScreenTaskId data[0]

static void Task_HandlePokedexInput(u8 taskId)
{
    SetGpuReg(REG_OFFSET_BG0VOFS, sPokedexView->menuY);

    if (sPokedexView->menuY)
    {
        sPokedexView->menuY -= 8;
    }
    else
    {
        if (JOY_NEW(A_BUTTON) && sPokedexView->pokedexList[sPokedexView->selectedPokemon].seen)
        {
            UpdateSelectedMonSpriteId();
            BeginNormalPaletteFade(~(1 << (gSprites[sPokedexView->selectedMonSpriteId].oam.paletteNum + 16)), 0, 0, 0x10, RGB_BLACK);
            gSprites[sPokedexView->selectedMonSpriteId].callback = SpriteCB_MoveMonForInfoScreen;
            gTasks[taskId].func = Task_OpenInfoScreenAfterMonMovement;
            PlaySE(SE_PIN);
            FreeWindowAndBgBuffers();
        }
        else if (JOY_NEW(START_BUTTON))
        {
            sPokedexView->menuY = 0;
            sPokedexView->menuIsOpen = TRUE;
            sPokedexView->menuCursorPos = 0;
            gTasks[taskId].func = Task_HandlePokedexStartMenuInput;
            PlaySE(SE_SELECT);
        }
        else if (JOY_NEW(SELECT_BUTTON))
        {
            PlaySE(SE_SELECT);
            BeginNormalPaletteFade(PALETTES_ALL, 0, 0, 0x10, RGB_BLACK);
            gTasks[taskId].tLoadScreenTaskId = LoadSearchMenu();
            sPokedexView->screenSwitchState = 0;
            sPokedexView->pokeBallRotationBackup = sPokedexView->pokeBallRotation;
            sPokedexView->selectedPokemonBackup = sPokedexView->selectedPokemon;
            sPokedexView->dexModeBackup = sPokedexView->dexMode;
            sPokedexView->dexOrderBackup = sPokedexView->dexOrder;
            gTasks[taskId].func = Task_WaitForExitSearch;
            PlaySE(SE_PC_LOGIN);
            FreeWindowAndBgBuffers();
        }
        else if (JOY_NEW(B_BUTTON))
        {
            BeginNormalPaletteFade(PALETTES_ALL, 0, 0, 0x10, RGB_BLACK);
            gTasks[taskId].func = Task_ClosePokedex;
            PlaySE(SE_PC_OFF);
        }
        else
        {
            //Handle D-pad
            sPokedexView->selectedPokemon = TryDoPokedexScroll(sPokedexView->selectedPokemon, 0xE);
            if (sPokedexView->scrollTimer)
                gTasks[taskId].func = Task_WaitForScroll;
        }
    }
}

static void Task_WaitForScroll(u8 taskId)
{
    if (UpdateDexListScroll(sPokedexView->scrollDirection, sPokedexView->scrollMonIncrement, sPokedexView->maxScrollTimer))
        gTasks[taskId].func = Task_HandlePokedexInput;
}

static void Task_HandlePokedexStartMenuInput(u8 taskId)
{
    SetGpuReg(REG_OFFSET_BG0VOFS, sPokedexView->menuY);

    //If menu is not open, slide it up, on screen
    if (sPokedexView->menuY != 80)
    {
        sPokedexView->menuY += 8;
    }
    else
    {
        if (JOY_NEW(A_BUTTON))
        {
            switch (sPokedexView->menuCursorPos)
            {
            case 0: //BACK TO LIST
            default:
                gMain.newKeys |= START_BUTTON;  //Exit menu
                break;
            case 1: //LIST TOP
                sPokedexView->selectedPokemon = 0;
                sPokedexView->pokeBallRotation = POKEBALL_ROTATION_TOP;
                ClearMonSprites();
                CreateMonSpritesAtPos(sPokedexView->selectedPokemon, 0xE);
                gMain.newKeys |= START_BUTTON;  //Exit menu
                break;
            case 2: //LIST BOTTOM
                sPokedexView->selectedPokemon = sPokedexView->pokemonListCount - 1;
                sPokedexView->pokeBallRotation = sPokedexView->pokemonListCount * 16 + POKEBALL_ROTATION_BOTTOM;
                ClearMonSprites();
                CreateMonSpritesAtPos(sPokedexView->selectedPokemon, 0xE);
                gMain.newKeys |= START_BUTTON;  //Exit menu
                break;
            case 3: //CLOSE POKéDEX
                BeginNormalPaletteFade(PALETTES_ALL, 0, 0, 0x10, RGB_BLACK);
                gTasks[taskId].func = Task_ClosePokedex;
                PlaySE(SE_PC_OFF);
                break;
            }
        }

        //Exit menu when Start or B is pressed
        if (JOY_NEW(START_BUTTON | B_BUTTON))
        {
            sPokedexView->menuIsOpen = FALSE;
            gTasks[taskId].func = Task_HandlePokedexInput;
            PlaySE(SE_SELECT);
        }
        else if (JOY_REPEAT(DPAD_UP) && sPokedexView->menuCursorPos != 0)
        {
            sPokedexView->menuCursorPos--;
            PlaySE(SE_SELECT);
        }
        else if (JOY_REPEAT(DPAD_DOWN) && sPokedexView->menuCursorPos < 3)
        {
            sPokedexView->menuCursorPos++;
            PlaySE(SE_SELECT);
        }
    }
}

// Opening the info screen from list view. Pokémon sprite is moving to its new position, wait for it to arrive
static void Task_OpenInfoScreenAfterMonMovement(u8 taskId)
{
    if (gSprites[sPokedexView->selectedMonSpriteId].x == MON_PAGE_X && gSprites[sPokedexView->selectedMonSpriteId].y == MON_PAGE_Y)
    {
        sPokedexView->currentPageBackup = sPokedexView->currentPage;
        gTasks[taskId].tLoadScreenTaskId = LoadInfoScreen(&sPokedexView->pokedexList[sPokedexView->selectedPokemon], sPokedexView->selectedMonSpriteId);
        gTasks[taskId].func = Task_WaitForExitInfoScreen;
    }
}

static void Task_WaitForExitInfoScreen(u8 taskId)
{
    if (gTasks[gTasks[taskId].tLoadScreenTaskId].isActive)
    {
        // While active, handle scroll input
        if (sPokedexView->currentPage == PAGE_INFO && !IsInfoScreenScrolling(gTasks[taskId].tLoadScreenTaskId) && TryDoInfoScreenScroll())
            StartInfoScreenScroll(&sPokedexView->pokedexList[sPokedexView->selectedPokemon], gTasks[taskId].tLoadScreenTaskId);
    }
    else
    {
        // Exiting, back to list view
        sLastSelectedPokemon = sPokedexView->selectedPokemon;
        sPokeBallRotation = sPokedexView->pokeBallRotation;
        gTasks[taskId].func = Task_OpenPokedexMainPage;
    }
}

static void Task_WaitForExitSearch(u8 taskId)
{
    if (!gTasks[gTasks[taskId].tLoadScreenTaskId].isActive)
    {
        ClearMonSprites();

        // Search produced results
        if (sPokedexView->screenSwitchState != 0)
        {
            sPokedexView->selectedPokemon = 0;
            sPokedexView->pokeBallRotation = POKEBALL_ROTATION_TOP;
            gTasks[taskId].func = Task_OpenSearchResults;
        }
        // Search didn't produce results
        else
        {
            sPokedexView->pokeBallRotation = sPokedexView->pokeBallRotationBackup;
            sPokedexView->selectedPokemon = sPokedexView->selectedPokemonBackup;
            sPokedexView->dexMode = sPokedexView->dexModeBackup;
            if (!IsNationalPokedexEnabled())
                sPokedexView->dexMode = DEX_MODE_HOENN;
            sPokedexView->dexOrder = sPokedexView->dexOrderBackup;
            gTasks[taskId].func = Task_OpenPokedexMainPage;
        }
    }
}

static void Task_ClosePokedex(u8 taskId)
{
    if (!gPaletteFade.active)
    {
        gSaveBlock2Ptr->pokedex.mode = sPokedexView->dexMode;
        if (!IsNationalPokedexEnabled())
            gSaveBlock2Ptr->pokedex.mode = DEX_MODE_HOENN;
        gSaveBlock2Ptr->pokedex.order = sPokedexView->dexOrder;
        ClearMonSprites();
        FreeWindowAndBgBuffers();
        DestroyTask(taskId);
        SetMainCallback2(CB2_ReturnToFieldWithOpenMenu);
        m4aMPlayVolumeControl(&gMPlayInfo_BGM, TRACKS_ALL, 0x100);
        Free(sPokedexView);
    }
}

static void Task_OpenSearchResults(u8 taskId)
{
    sPokedexView->isSearchResults = TRUE;
	sPokedexView->formSpecies = 0;
	sFormFixBit = 0;
    if (LoadPokedexListPage(PAGE_SEARCH_RESULTS))
        gTasks[taskId].func = Task_HandleSearchResultsInput;
}

static void Task_HandleSearchResultsInput(u8 taskId)
{
    SetGpuReg(REG_OFFSET_BG0VOFS, sPokedexView->menuY);

    if (sPokedexView->menuY)
    {
        sPokedexView->menuY -= 8;
    }
    else
    {
        if (JOY_NEW(A_BUTTON) && sPokedexView->pokedexList[sPokedexView->selectedPokemon].seen)
        {
            u32 a;

            UpdateSelectedMonSpriteId();
            a = (1 << (gSprites[sPokedexView->selectedMonSpriteId].oam.paletteNum + 16));
            gSprites[sPokedexView->selectedMonSpriteId].callback = SpriteCB_MoveMonForInfoScreen;
            BeginNormalPaletteFade(~a, 0, 0, 0x10, RGB_BLACK);
            gTasks[taskId].func = Task_OpenSearchResultsInfoScreenAfterMonMovement;
            PlaySE(SE_PIN);
            FreeWindowAndBgBuffers();
        }
        else if (JOY_NEW(START_BUTTON))
        {
            sPokedexView->menuY = 0;
            sPokedexView->menuIsOpen = TRUE;
            sPokedexView->menuCursorPos = 0;
            gTasks[taskId].func = Task_HandleSearchResultsStartMenuInput;
            PlaySE(SE_SELECT);
        }
        else if (JOY_NEW(SELECT_BUTTON))
        {
            BeginNormalPaletteFade(PALETTES_ALL, 0, 0, 0x10, RGB_BLACK);
            gTasks[taskId].tLoadScreenTaskId = LoadSearchMenu();
            sPokedexView->screenSwitchState = 0;
            gTasks[taskId].func = Task_WaitForExitSearch;
            PlaySE(SE_PC_LOGIN);
            FreeWindowAndBgBuffers();
        }
        else if (JOY_NEW(B_BUTTON))
        {
            BeginNormalPaletteFade(PALETTES_ALL, 0, 0, 0x10, RGB_BLACK);
            gTasks[taskId].func = Task_ReturnToPokedexFromSearchResults;
            PlaySE(SE_PC_OFF);
        }
        else
        {
            //Handle D-pad
            sPokedexView->selectedPokemon = TryDoPokedexScroll(sPokedexView->selectedPokemon, 0xE);
            if (sPokedexView->scrollTimer)
                gTasks[taskId].func = Task_WaitForSearchResultsScroll;
        }
    }
}

static void Task_WaitForSearchResultsScroll(u8 taskId)
{
    if (UpdateDexListScroll(sPokedexView->scrollDirection, sPokedexView->scrollMonIncrement, sPokedexView->maxScrollTimer))
        gTasks[taskId].func = Task_HandleSearchResultsInput;
}

static void Task_HandleSearchResultsStartMenuInput(u8 taskId)
{
    SetGpuReg(REG_OFFSET_BG0VOFS, sPokedexView->menuY);

    if (sPokedexView->menuY != 96)
    {
        sPokedexView->menuY += 8;
    }
    else
    {
        if (JOY_NEW(A_BUTTON))
        {
            switch (sPokedexView->menuCursorPos)
            {
            case 0: //BACK TO LIST
            default:
                gMain.newKeys |= START_BUTTON;
                break;
            case 1: //LIST TOP
                sPokedexView->selectedPokemon = 0;
                sPokedexView->pokeBallRotation = POKEBALL_ROTATION_TOP;
                ClearMonSprites();
                CreateMonSpritesAtPos(sPokedexView->selectedPokemon, 0xE);
                gMain.newKeys |= START_BUTTON;
                break;
            case 2: //LIST BOTTOM
                sPokedexView->selectedPokemon = sPokedexView->pokemonListCount - 1;
                sPokedexView->pokeBallRotation = sPokedexView->pokemonListCount * 16 + POKEBALL_ROTATION_BOTTOM;
                ClearMonSprites();
                CreateMonSpritesAtPos(sPokedexView->selectedPokemon, 0xE);
                gMain.newKeys |= START_BUTTON;
                break;
            case 3: //BACK TO POKéDEX
                BeginNormalPaletteFade(PALETTES_ALL, 0, 0, 0x10, RGB_BLACK);
                gTasks[taskId].func = Task_ReturnToPokedexFromSearchResults;
                PlaySE(SE_TRUCK_DOOR);
                break;
            case 4: //CLOSE POKéDEX
                BeginNormalPaletteFade(PALETTES_ALL, 0, 0, 0x10, RGB_BLACK);
                gTasks[taskId].func = Task_ClosePokedexFromSearchResultsStartMenu;
                PlaySE(SE_PC_OFF);
                break;
            }
        }

        //Exit menu when Start or B is pressed
        if (JOY_NEW(START_BUTTON | B_BUTTON))
        {
            sPokedexView->menuIsOpen = FALSE;
            gTasks[taskId].func = Task_HandleSearchResultsInput;
            PlaySE(SE_SELECT);
        }
        else if (JOY_REPEAT(DPAD_UP) && sPokedexView->menuCursorPos)
        {
            sPokedexView->menuCursorPos--;
            PlaySE(SE_SELECT);
        }
        else if (JOY_REPEAT(DPAD_DOWN) && sPokedexView->menuCursorPos < 4)
        {
            sPokedexView->menuCursorPos++;
            PlaySE(SE_SELECT);
        }
    }
}

static void Task_OpenSearchResultsInfoScreenAfterMonMovement(u8 taskId)
{
    if (gSprites[sPokedexView->selectedMonSpriteId].x == MON_PAGE_X && gSprites[sPokedexView->selectedMonSpriteId].y == MON_PAGE_Y)
    {
        sPokedexView->currentPageBackup = sPokedexView->currentPage;
        gTasks[taskId].tLoadScreenTaskId = LoadInfoScreen(&sPokedexView->pokedexList[sPokedexView->selectedPokemon], sPokedexView->selectedMonSpriteId);
        sPokedexView->selectedMonSpriteId = -1;
        gTasks[taskId].func = Task_WaitForExitSearchResultsInfoScreen;
    }
}

static void Task_WaitForExitSearchResultsInfoScreen(u8 taskId)
{
    if (gTasks[gTasks[taskId].tLoadScreenTaskId].isActive)
    {
        // While active, handle scroll input
        if (sPokedexView->currentPage == PAGE_INFO && !IsInfoScreenScrolling(gTasks[taskId].tLoadScreenTaskId) && TryDoInfoScreenScroll())
            StartInfoScreenScroll(&sPokedexView->pokedexList[sPokedexView->selectedPokemon], gTasks[taskId].tLoadScreenTaskId);
    }
    else
    {
        // Exiting, back to search results
        gTasks[taskId].func = Task_OpenSearchResults;
    }
}

static void Task_ReturnToPokedexFromSearchResults(u8 taskId)
{
    if (!gPaletteFade.active)
    {
        sPokedexView->pokeBallRotation = sPokedexView->pokeBallRotationBackup;
        sPokedexView->selectedPokemon = sPokedexView->selectedPokemonBackup;
        sPokedexView->dexMode = sPokedexView->dexModeBackup;
        if (!IsNationalPokedexEnabled())
            sPokedexView->dexMode = DEX_MODE_HOENN;
        sPokedexView->dexOrder = sPokedexView->dexOrderBackup;
        gTasks[taskId].func = Task_OpenPokedexMainPage;
        ClearMonSprites();
        FreeWindowAndBgBuffers();
    }
}

static void Task_ClosePokedexFromSearchResultsStartMenu(u8 taskId)
{
    if (!gPaletteFade.active)
    {
        sPokedexView->pokeBallRotation = sPokedexView->pokeBallRotationBackup;
        sPokedexView->selectedPokemon = sPokedexView->selectedPokemonBackup;
        sPokedexView->dexMode = sPokedexView->dexModeBackup;
        if (!IsNationalPokedexEnabled())
            sPokedexView->dexMode = DEX_MODE_HOENN;
        sPokedexView->dexOrder = sPokedexView->dexOrderBackup;
        gTasks[taskId].func = Task_ClosePokedex;
    }
}

#undef tLoadScreenTaskId

// For loading main pokedex page or Pokédex search results
static bool8 LoadPokedexListPage(u8 page)
{
    switch (gMain.state)
    {
    case 0:
    default:
        if (gPaletteFade.active)
            return 0;
        SetVBlankCallback(NULL);
        sPokedexView->currentPage = page;
        ResetOtherVideoRegisters(0);
        SetGpuReg(REG_OFFSET_BG2VOFS, sPokedexView->initialVOffset);
        ResetBgsAndClearDma3BusyFlags(0);
        InitBgsFromTemplates(0, sPokedex_BgTemplate, ARRAY_COUNT(sPokedex_BgTemplate));
        SetBgTilemapBuffer(3, AllocZeroed(BG_SCREEN_SIZE));
        SetBgTilemapBuffer(2, AllocZeroed(BG_SCREEN_SIZE));
        SetBgTilemapBuffer(1, AllocZeroed(BG_SCREEN_SIZE));
        SetBgTilemapBuffer(0, AllocZeroed(BG_SCREEN_SIZE));
        DecompressAndLoadBgGfxUsingHeap(3, gPokedexMenu_Gfx, 0x2000, 0, 0);
        CopyToBgTilemapBuffer(1, gPokedexList_Tilemap, 0, 0);
        CopyToBgTilemapBuffer(3, gPokedexListUnderlay_Tilemap, 0, 0);
        if (page == PAGE_MAIN)
            CopyToBgTilemapBuffer(0, gPokedexStartMenuMain_Tilemap, 0, 0x280);
        else
            CopyToBgTilemapBuffer(0, gPokedexStartMenuSearchResults_Tilemap, 0, 0x280);
        ResetPaletteFade();
        if (page == PAGE_MAIN)
            sPokedexView->isSearchResults = FALSE;
        else
            sPokedexView->isSearchResults = TRUE;
        LoadPokedexBgPalette(sPokedexView->isSearchResults);
        InitWindows(sPokemonList_WindowTemplate);
        DeactivateAllTextPrinters();
        PutWindowTilemap(0);
        CopyWindowToVram(0, COPYWIN_FULL);
        gMain.state = 1;
        break;
    case 1:
        ResetSpriteData();
        FreeAllSpritePalettes();
        gReservedSpritePaletteCount = 8;
        LoadCompressedSpriteSheet(&sInterfaceSpriteSheet[0]);
        LoadSpritePalettes(sInterfaceSpritePalette);
        CreateInterfaceSprites(page);
        gMain.state++;
        break;
    case 2:
        gMain.state++;
        break;
    case 3:
        if (page == PAGE_MAIN)
            CreatePokedexList(sPokedexView->dexMode, sPokedexView->dexOrder);
        CreateMonSpritesAtPos(sPokedexView->selectedPokemon, 0xE);
        sPokedexView->menuIsOpen = FALSE;
        sPokedexView->menuY = 0;
        CopyBgTilemapBufferToVram(0);
        CopyBgTilemapBufferToVram(1);
        CopyBgTilemapBufferToVram(2);
        CopyBgTilemapBufferToVram(3);
        gMain.state++;
        break;
    case 4:
        BeginNormalPaletteFade(PALETTES_ALL, 0, 0x10, 0, RGB_BLACK);
        SetVBlankCallback(VBlankCB_Pokedex);
        gMain.state++;
        break;
    case 5:
        SetGpuReg(REG_OFFSET_WININ, WININ_WIN0_ALL | WININ_WIN1_ALL);
        SetGpuReg(REG_OFFSET_WINOUT, WINOUT_WIN01_ALL | WINOUT_WINOBJ_BG0 | WINOUT_WINOBJ_BG2 | WINOUT_WINOBJ_BG3 | WINOUT_WINOBJ_OBJ);
        SetGpuReg(REG_OFFSET_WIN0H, 0);
        SetGpuReg(REG_OFFSET_WIN0V, 0);
        SetGpuReg(REG_OFFSET_WIN1H, 0);
        SetGpuReg(REG_OFFSET_WIN1V, 0);
        SetGpuReg(REG_OFFSET_BLDCNT, 0);
        SetGpuReg(REG_OFFSET_BLDALPHA, 0);
        SetGpuReg(REG_OFFSET_BLDY, 0);
        SetGpuReg(REG_OFFSET_DISPCNT, DISPCNT_MODE_0 | DISPCNT_OBJ_1D_MAP | DISPCNT_OBJ_ON | DISPCNT_OBJWIN_ON);
        ShowBg(0);
        ShowBg(1);
        ShowBg(2);
        ShowBg(3);
        gMain.state++;
        break;
    case 6:
        if (!gPaletteFade.active)
        {
            gMain.state = 0;
            return TRUE;
        }
        break;
    }
    return FALSE;
}

static void LoadPokedexBgPalette(bool8 isSearchResults)
{
    if (isSearchResults == TRUE)
        LoadPalette(gPokedexSearchResults_Pal + 1, BG_PLTT_ID(0) + 1, PLTT_SIZEOF(6 * 16 - 1));
    else if (!IsNationalPokedexEnabled())
        LoadPalette(gPokedexBgHoenn_Pal + 1, BG_PLTT_ID(0) + 1, PLTT_SIZEOF(6 * 16 - 1));
    else
        LoadPalette(gPokedexBgNational_Pal + 1, BG_PLTT_ID(0) + 1, PLTT_SIZEOF(6 * 16 - 1));
    LoadPalette(GetOverworldTextboxPalettePtr(), BG_PLTT_ID(15), PLTT_SIZE_4BPP);
}

static void FreeWindowAndBgBuffers(void)
{
    void *tilemapBuffer;

    FreeAllWindowBuffers();
    tilemapBuffer = GetBgTilemapBuffer(0);
    if (tilemapBuffer)
        Free(tilemapBuffer);
    tilemapBuffer = GetBgTilemapBuffer(1);
    if (tilemapBuffer)
        Free(tilemapBuffer);
    tilemapBuffer = GetBgTilemapBuffer(2);
    if (tilemapBuffer)
        Free(tilemapBuffer);
    tilemapBuffer = GetBgTilemapBuffer(3);
    if (tilemapBuffer)
        Free(tilemapBuffer);
}

static void CreatePokedexList(u8 dexMode, u8 order)
{
    u32 vars[3]; //I have no idea why three regular variables are stored in an array, but whatever.
#define temp_dexCount   vars[0]
#define temp_isHoennDex vars[1]
#define temp_dexNum     vars[2]
    s32 i;

    sPokedexView->pokemonListCount = 0;

    switch (dexMode)
    {
    default:
    case DEX_MODE_HOENN:
        temp_dexCount = HOENN_DEX_COUNT;
        temp_isHoennDex = TRUE;
        break;
    case DEX_MODE_NATIONAL:
        if (IsNationalPokedexEnabled())
        {
            temp_dexCount = NATIONAL_DEX_COUNT;
            temp_isHoennDex = FALSE;
        }
        else
        {
            temp_dexCount = HOENN_DEX_COUNT;
            temp_isHoennDex = TRUE;
        }
        break;
    }

    switch (order)
    {
    case ORDER_NUMERICAL:
        if (temp_isHoennDex)
        {
            for (i = 0; i < temp_dexCount; i++)
            {
                temp_dexNum = HoennToNationalOrder(i + 1);
                sPokedexView->pokedexList[i].dexNum = temp_dexNum;
                sPokedexView->pokedexList[i].seen = GetSetPokedexFlag(temp_dexNum, FLAG_GET_SEEN);
                sPokedexView->pokedexList[i].owned = GetSetPokedexFlag(temp_dexNum, FLAG_GET_CAUGHT);
                sPokedexView->pokedexList[i].studied = GetSetPokedexFlag(temp_dexNum, FLAG_GET_STUDIED);
                if (sPokedexView->pokedexList[i].seen)
                    sPokedexView->pokemonListCount = i + 1;
            }
        }
        else
        {
            s16 r5, r10;
            for (i = 0, r5 = 0, r10 = 0; i < temp_dexCount; i++)
            {
                temp_dexNum = i + 1;
                if (GetSetPokedexFlag(temp_dexNum, FLAG_GET_SEEN))
                    r10 = 1;
                if (r10)
                {
                    sPokedexView->pokedexList[r5].dexNum = temp_dexNum;
                    sPokedexView->pokedexList[r5].seen = GetSetPokedexFlag(temp_dexNum, FLAG_GET_SEEN);
                    sPokedexView->pokedexList[r5].owned = GetSetPokedexFlag(temp_dexNum, FLAG_GET_CAUGHT);
                    sPokedexView->pokedexList[r5].studied = GetSetPokedexFlag(temp_dexNum, FLAG_GET_STUDIED);
                    if (sPokedexView->pokedexList[r5].seen)
                        sPokedexView->pokemonListCount = r5 + 1;
                    r5++;
                }
            }
        }
        break;
    case ORDER_ALPHABETICAL:
        for (i = 0; i < ARRAY_COUNT(gPokedexOrder_Alphabetical); i++)
        {
            temp_dexNum = gPokedexOrder_Alphabetical[i];

            if (temp_dexNum <= NATIONAL_DEX_COUNT && (!temp_isHoennDex || NationalToHoennOrder(temp_dexNum) != 0) && GetSetPokedexFlag(temp_dexNum, FLAG_GET_SEEN))
            {
                sPokedexView->pokedexList[sPokedexView->pokemonListCount].dexNum = temp_dexNum;
                sPokedexView->pokedexList[sPokedexView->pokemonListCount].seen = TRUE;
                sPokedexView->pokedexList[sPokedexView->pokemonListCount].owned = GetSetPokedexFlag(temp_dexNum, FLAG_GET_CAUGHT);
                sPokedexView->pokedexList[sPokedexView->pokemonListCount].studied = GetSetPokedexFlag(temp_dexNum, FLAG_GET_STUDIED);
                sPokedexView->pokemonListCount++;
            }
        }
        break;
    case ORDER_HEAVIEST:
        for (i = ARRAY_COUNT(gPokedexOrder_Weight) - 1; i >= 0; i--)
        {
            temp_dexNum = gPokedexOrder_Weight[i];

            if (temp_dexNum <= NATIONAL_DEX_COUNT && (!temp_isHoennDex || NationalToHoennOrder(temp_dexNum) != 0) && GetSetPokedexFlag(temp_dexNum, FLAG_GET_CAUGHT))
            {
                sPokedexView->pokedexList[sPokedexView->pokemonListCount].dexNum = temp_dexNum;
                sPokedexView->pokedexList[sPokedexView->pokemonListCount].seen = TRUE;
                sPokedexView->pokedexList[sPokedexView->pokemonListCount].owned = TRUE;
                sPokedexView->pokedexList[sPokedexView->pokemonListCount].studied = GetSetPokedexFlag(temp_dexNum, FLAG_GET_STUDIED);
                sPokedexView->pokemonListCount++;
            }
        }
        break;
    case ORDER_LIGHTEST:
        for (i = 0; i < ARRAY_COUNT(gPokedexOrder_Weight); i++)
        {
            temp_dexNum = gPokedexOrder_Weight[i];

            if (temp_dexNum <= NATIONAL_DEX_COUNT && (!temp_isHoennDex || NationalToHoennOrder(temp_dexNum) != 0) && GetSetPokedexFlag(temp_dexNum, FLAG_GET_CAUGHT))
            {
                sPokedexView->pokedexList[sPokedexView->pokemonListCount].dexNum = temp_dexNum;
                sPokedexView->pokedexList[sPokedexView->pokemonListCount].seen = TRUE;
                sPokedexView->pokedexList[sPokedexView->pokemonListCount].owned = TRUE;
                sPokedexView->pokedexList[sPokedexView->pokemonListCount].studied = GetSetPokedexFlag(temp_dexNum, FLAG_GET_STUDIED);
                sPokedexView->pokemonListCount++;
            }
        }
        break;
    case ORDER_TALLEST:
        for (i = ARRAY_COUNT(gPokedexOrder_Height) - 1; i >= 0; i--)
        {
            temp_dexNum = gPokedexOrder_Height[i];

            if (temp_dexNum <= NATIONAL_DEX_COUNT && (!temp_isHoennDex || NationalToHoennOrder(temp_dexNum) != 0) && GetSetPokedexFlag(temp_dexNum, FLAG_GET_CAUGHT))
            {
                sPokedexView->pokedexList[sPokedexView->pokemonListCount].dexNum = temp_dexNum;
                sPokedexView->pokedexList[sPokedexView->pokemonListCount].seen = TRUE;
                sPokedexView->pokedexList[sPokedexView->pokemonListCount].owned = TRUE;
                sPokedexView->pokedexList[sPokedexView->pokemonListCount].studied = GetSetPokedexFlag(temp_dexNum, FLAG_GET_STUDIED);
                sPokedexView->pokemonListCount++;
            }
        }
        break;
    case ORDER_SMALLEST:
        for (i = 0; i < ARRAY_COUNT(gPokedexOrder_Height); i++)
        {
            temp_dexNum = gPokedexOrder_Height[i];

            if (temp_dexNum <= NATIONAL_DEX_COUNT && (!temp_isHoennDex || NationalToHoennOrder(temp_dexNum) != 0) && GetSetPokedexFlag(temp_dexNum, FLAG_GET_CAUGHT))
            {
                sPokedexView->pokedexList[sPokedexView->pokemonListCount].dexNum = temp_dexNum;
                sPokedexView->pokedexList[sPokedexView->pokemonListCount].seen = TRUE;
                sPokedexView->pokedexList[sPokedexView->pokemonListCount].owned = TRUE;
                sPokedexView->pokedexList[sPokedexView->pokemonListCount].studied = GetSetPokedexFlag(temp_dexNum, FLAG_GET_STUDIED);
                sPokedexView->pokemonListCount++;
            }
        }
        break;
    }

    for (i = sPokedexView->pokemonListCount; i < NATIONAL_DEX_COUNT; i++)
    {
        sPokedexView->pokedexList[i].dexNum = 0xFFFF;
        sPokedexView->pokedexList[i].seen = FALSE;
        sPokedexView->pokedexList[i].owned = FALSE;
        sPokedexView->pokedexList[i].studied = FALSE;
    }
}

static void PrintMonDexNumAndName(u8 windowId, u8 fontId, const u8 *str, u8 left, u8 top)
{
    u8 color[3];

    color[0] = TEXT_COLOR_TRANSPARENT;
    color[1] = TEXT_DYNAMIC_COLOR_6;
    color[2] = TEXT_COLOR_LIGHT_GRAY;
    AddTextPrinterParameterized4(windowId, fontId, left * 8, (top * 8) + 1, 0, 0, color, TEXT_SKIP_DRAW, str);
}

// u16 ignored is passed but never used
static void CreateMonListEntry(u8 position, u16 b, u16 ignored)
{
    s16 entryNum;
    u16 i;
    u16 vOffset;

    switch (position)
    {
    case 0: // Initial
    default:
        entryNum = b - 5;
        for (i = 0; i <= 10; i++)
        {
            if (entryNum < 0 || entryNum >= NATIONAL_DEX_COUNT || sPokedexView->pokedexList[entryNum].dexNum == 0xFFFF)
            {
                ClearMonListEntry(17, i * 2, ignored);
            }
            else
            {
                ClearMonListEntry(17, i * 2, ignored);
                if (sPokedexView->pokedexList[entryNum].seen)
                {
                    CreateMonDexNum(entryNum, 0x12, i * 2, ignored);
                    CreateCaughtBall(sPokedexView->pokedexList[entryNum].owned, 0x11, i * 2, sPokedexView->pokedexList[entryNum].studied);
                    CreateMonName(sPokedexView->pokedexList[entryNum].dexNum, 0x16, i * 2);
                }
                else
                {
                    CreateMonDexNum(entryNum, 0x12, i * 2, ignored);
                    CreateCaughtBall(FALSE, 0x11, i * 2, FALSE);
                    CreateMonName(0, 0x16, i * 2);
                }
            }
            entryNum++;
        }
        break;
    case 1: // Up
        entryNum = b - 5;
        if (entryNum < 0 || entryNum >= NATIONAL_DEX_COUNT || sPokedexView->pokedexList[entryNum].dexNum == 0xFFFF)
        {
            ClearMonListEntry(17, sPokedexView->listVOffset * 2, ignored);
        }
        else
        {
            ClearMonListEntry(17, sPokedexView->listVOffset * 2, ignored);
            if (sPokedexView->pokedexList[entryNum].seen)
            {
                CreateMonDexNum(entryNum, 18, sPokedexView->listVOffset * 2, ignored);
                CreateCaughtBall(sPokedexView->pokedexList[entryNum].owned, 0x11, sPokedexView->listVOffset * 2, sPokedexView->pokedexList[entryNum].studied);
                CreateMonName(sPokedexView->pokedexList[entryNum].dexNum, 0x16, sPokedexView->listVOffset * 2);
            }
            else
            {
                CreateMonDexNum(entryNum, 18, sPokedexView->listVOffset * 2, ignored);
                CreateCaughtBall(FALSE, 17, sPokedexView->listVOffset * 2, FALSE);
                CreateMonName(0, 0x16, sPokedexView->listVOffset * 2);
            }
        }
        break;
    case 2: // Down
        entryNum = b + 5;
        vOffset = sPokedexView->listVOffset + 10;
        if (vOffset >= LIST_SCROLL_STEP)
            vOffset -= LIST_SCROLL_STEP;
        if (entryNum < 0 || entryNum >= NATIONAL_DEX_COUNT || sPokedexView->pokedexList[entryNum].dexNum == 0xFFFF)
            ClearMonListEntry(17, vOffset * 2, ignored);
        else
        {
            ClearMonListEntry(17, vOffset * 2, ignored);
            if (sPokedexView->pokedexList[entryNum].seen)
            {
                CreateMonDexNum(entryNum, 18, vOffset * 2, ignored);
                CreateCaughtBall(sPokedexView->pokedexList[entryNum].owned, 0x11, vOffset * 2, sPokedexView->pokedexList[entryNum].studied);
                CreateMonName(sPokedexView->pokedexList[entryNum].dexNum, 0x16, vOffset * 2);
            }
            else
            {
                CreateMonDexNum(entryNum, 18, vOffset * 2, ignored);
                CreateCaughtBall(FALSE, 0x11, vOffset * 2, FALSE);
                CreateMonName(0, 0x16, vOffset * 2);
            }
        }
        break;
    }
    CopyWindowToVram(0, COPYWIN_GFX);
}

static void CreateMonDexNum(u16 entryNum, u8 left, u8 top, u16 unused)
{
    u8 text[7];
    u16 dexNum, offset = 2;

    dexNum = sPokedexView->pokedexList[entryNum].dexNum;
    if (sPokedexView->dexMode == DEX_MODE_HOENN)
        dexNum = NationalToHoennOrder(dexNum);
    memcpy(text, sText_No0000, ARRAY_COUNT(sText_No0000));
    if (NATIONAL_DEX_COUNT > 999 && sPokedexView->dexMode != DEX_MODE_HOENN)
    {
        text[2] = CHAR_0 + dexNum / 1000;
        offset++;
    }
    text[offset++] = CHAR_0 + (dexNum % 1000) / 100;
    text[offset++] = CHAR_0 + ((dexNum % 1000) % 100) / 10;
    text[offset++] = CHAR_0 + ((dexNum % 1000) % 100) % 10;
    text[offset++] = EOS;
    PrintMonDexNumAndName(0, FONT_NARROW, text, left, top);
}

static void CreateCaughtBall(bool16 owned, u8 x, u8 y, u16 studied)
{
	if (studied)
		BlitBitmapToWindow(0, sStudiedStar_Gfx, x * 8, y * 8, 8, 16);
    else if (owned)
        BlitBitmapToWindow(0, sCaughtBall_Gfx, x * 8, y * 8, 8, 16);
    else
        FillWindowPixelRect(0, PIXEL_FILL(0), x * 8, y * 8, 8, 16);
}

static u8 CreateMonName(u16 num, u8 left, u8 top)
{
    const u8 *str;

    num = NationalPokedexNumToSpecies(num);
    if (num)
        str = GetSpeciesName(num);
    else
        str = sText_TenDashes;
    PrintMonDexNumAndName(0, FONT_NARROW, str, left, top);
    return StringLength(str);
}

static void ClearMonListEntry(u8 x, u8 y, u16 unused)
{
    FillWindowPixelRect(0, PIXEL_FILL(0), x * 8, y * 8, 0x60, 16);
}

// u16 ignored is passed but never used
static void CreateMonSpritesAtPos(u16 selectedMon, u16 ignored)
{
    u8 i;
    u16 dexNum;
    u8 spriteId;

    gPaletteFade.bufferTransferDisabled = TRUE;

    for (i = 0; i < MAX_MONS_ON_SCREEN; i++)
        sPokedexView->monSpriteIds[i] = 0xFFFF;
    sPokedexView->selectedMonSpriteId = 0xFFFF;

    // Create top mon sprite
    dexNum = GetPokemonSpriteToDisplay(selectedMon - 1);
    if (dexNum != 0xFFFF)
    {
        spriteId = CreatePokedexMonSprite(dexNum, 0x60, 0x50);
        gSprites[spriteId].callback = SpriteCB_PokedexListMonSprite;
        gSprites[spriteId].data[5] = -32;
    }

    // Create mid mon sprite
    dexNum = GetPokemonSpriteToDisplay(selectedMon);
    if (dexNum != 0xFFFF)
    {
        spriteId = CreatePokedexMonSprite(dexNum, 0x60, 0x50);
        gSprites[spriteId].callback = SpriteCB_PokedexListMonSprite;
        gSprites[spriteId].data[5] = 0;
    }

    // Create bottom mon sprite
    dexNum = GetPokemonSpriteToDisplay(selectedMon + 1);
    if (dexNum != 0xFFFF)
    {
        spriteId = CreatePokedexMonSprite(dexNum, 0x60, 0x50);
        gSprites[spriteId].callback = SpriteCB_PokedexListMonSprite;
        gSprites[spriteId].data[5] = 32;
    }

    CreateMonListEntry(0, selectedMon, ignored);
    SetGpuReg(REG_OFFSET_BG2VOFS, sPokedexView->initialVOffset);

    sPokedexView->listVOffset = 0;
    sPokedexView->listMovingVOffset = 0;

    gPaletteFade.bufferTransferDisabled = FALSE;
}

static bool8 UpdateDexListScroll(u8 direction, u8 monMoveIncrement, u8 scrollTimerMax)
{
    u16 i;
    u8 step;

    if (sPokedexView->scrollTimer)
    {
        sPokedexView->scrollTimer--;
        switch (direction)
        {
        case 1: // Up
            for (i = 0; i < MAX_MONS_ON_SCREEN; i++)
            {
                if (sPokedexView->monSpriteIds[i] != 0xFFFF)
                    gSprites[sPokedexView->monSpriteIds[i]].data[5] += monMoveIncrement;
            }
            step = LIST_SCROLL_STEP * (scrollTimerMax - sPokedexView->scrollTimer) / scrollTimerMax;
            SetGpuReg(REG_OFFSET_BG2VOFS, sPokedexView->initialVOffset + sPokedexView->listMovingVOffset * LIST_SCROLL_STEP - step);
            sPokedexView->pokeBallRotation -= sPokedexView->pokeBallRotationStep;
            break;
        case 2: // Down
            for (i = 0; i < MAX_MONS_ON_SCREEN; i++)
            {
                if (sPokedexView->monSpriteIds[i] != 0xFFFF)
                    gSprites[sPokedexView->monSpriteIds[i]].data[5] -= monMoveIncrement;
            }
            step = LIST_SCROLL_STEP * (scrollTimerMax - sPokedexView->scrollTimer) / scrollTimerMax;
            SetGpuReg(REG_OFFSET_BG2VOFS, sPokedexView->initialVOffset + sPokedexView->listMovingVOffset * LIST_SCROLL_STEP + step);
            sPokedexView->pokeBallRotation += sPokedexView->pokeBallRotationStep;
            break;
        }
        return FALSE;
    }
    else
    {
        SetGpuReg(REG_OFFSET_BG2VOFS, sPokedexView->initialVOffset + sPokedexView->listVOffset * LIST_SCROLL_STEP);
        return TRUE;
    }
}

static void CreateScrollingPokemonSprite(u8 direction, u16 selectedMon)
{
    u16 dexNum;
    u8 spriteId;

    sPokedexView->listMovingVOffset = sPokedexView->listVOffset;
    switch (direction)
    {
    case 1: // up
        dexNum = GetPokemonSpriteToDisplay(selectedMon - 1);
        if (dexNum != 0xFFFF)
        {
            spriteId = CreatePokedexMonSprite(dexNum, 0x60, 0x50);
            gSprites[spriteId].callback = SpriteCB_PokedexListMonSprite;
            gSprites[spriteId].data[5] = -64;
        }
        if (sPokedexView->listVOffset > 0)
            sPokedexView->listVOffset--;
        else
            sPokedexView->listVOffset = LIST_SCROLL_STEP - 1;
        break;
    case 2: // down
        dexNum = GetPokemonSpriteToDisplay(selectedMon + 1);
        if (dexNum != 0xFFFF)
        {
            spriteId = CreatePokedexMonSprite(dexNum, 0x60, 0x50);
            gSprites[spriteId].callback = SpriteCB_PokedexListMonSprite;
            gSprites[spriteId].data[5] = 64;
        }
        if (sPokedexView->listVOffset < LIST_SCROLL_STEP - 1)
            sPokedexView->listVOffset++;
        else
            sPokedexView->listVOffset = 0;
        break;
    }
}

// u16 ignored is passed but never used
static u16 TryDoPokedexScroll(u16 selectedMon, u16 ignored)
{
    u8 scrollTimer;
    u8 scrollMonIncrement;
    u8 i;
    u16 startingPos;
    u8 scrollDir = 0;

    if (JOY_HELD(DPAD_UP) && (selectedMon > 0))
    {
        scrollDir = 1;
        selectedMon = GetNextPosition(1, selectedMon, 0, sPokedexView->pokemonListCount - 1);
        CreateScrollingPokemonSprite(1, selectedMon);
        CreateMonListEntry(1, selectedMon, ignored);
        PlaySE(SE_DEX_SCROLL);
    }
    else if (JOY_HELD(DPAD_DOWN) && (selectedMon < sPokedexView->pokemonListCount - 1))
    {
        scrollDir = 2;
        selectedMon = GetNextPosition(0, selectedMon, 0, sPokedexView->pokemonListCount - 1);
        CreateScrollingPokemonSprite(2, selectedMon);
        CreateMonListEntry(2, selectedMon, ignored);
        PlaySE(SE_DEX_SCROLL);
    }
    else if (JOY_NEW(DPAD_LEFT) && (selectedMon > 0))
    {
        startingPos = selectedMon;

        for (i = 0; i < 7; i++)
            selectedMon = GetNextPosition(1, selectedMon, 0, sPokedexView->pokemonListCount - 1);
        sPokedexView->pokeBallRotation += 16 * (selectedMon - startingPos);
        ClearMonSprites();
        CreateMonSpritesAtPos(selectedMon, 0xE);
        PlaySE(SE_DEX_PAGE);
    }
    else if (JOY_NEW(DPAD_RIGHT) && (selectedMon < sPokedexView->pokemonListCount - 1))
    {
        startingPos = selectedMon;
        for (i = 0; i < 7; i++)
            selectedMon = GetNextPosition(0, selectedMon, 0, sPokedexView->pokemonListCount - 1);
        sPokedexView->pokeBallRotation += 16 * (selectedMon - startingPos);
        ClearMonSprites();
        CreateMonSpritesAtPos(selectedMon, 0xE);
        PlaySE(SE_DEX_PAGE);
    }

    if (scrollDir == 0)
    {
        // Left/right input just snaps up/down, no scrolling
        sPokedexView->scrollSpeed = 0;
        return selectedMon;
    }

    scrollMonIncrement = sScrollMonIncrements[sPokedexView->scrollSpeed / 4];
    scrollTimer = sScrollTimers[sPokedexView->scrollSpeed / 4];
    sPokedexView->scrollTimer = scrollTimer;
    sPokedexView->maxScrollTimer = scrollTimer;
    sPokedexView->scrollMonIncrement = scrollMonIncrement;
    sPokedexView->scrollDirection = scrollDir;
    sPokedexView->pokeBallRotationStep = scrollMonIncrement / 2;
    UpdateDexListScroll(sPokedexView->scrollDirection, sPokedexView->scrollMonIncrement, sPokedexView->maxScrollTimer);
    if (sPokedexView->scrollSpeed < 12)
        sPokedexView->scrollSpeed++;
    return selectedMon;
}

static void UpdateSelectedMonSpriteId(void)
{
    u16 i;

    for (i = 0; i < MAX_MONS_ON_SCREEN; i++)
    {
        u16 spriteId = sPokedexView->monSpriteIds[i];

        if (gSprites[spriteId].x2 == 0 && gSprites[spriteId].y2 == 0 && spriteId != 0xFFFF)
            sPokedexView->selectedMonSpriteId = spriteId;
    }
}

static bool8 TryDoInfoScreenScroll(void)
{
    u16 nextPokemon;
    u16 selectedPokemon = sPokedexView->selectedPokemon;

    if (JOY_NEW(DPAD_UP) && selectedPokemon)
    {
        nextPokemon = selectedPokemon;
        while (nextPokemon != 0)
        {
            nextPokemon = GetNextPosition(1, nextPokemon, 0, sPokedexView->pokemonListCount - 1);

            if (sPokedexView->pokedexList[nextPokemon].seen)
            {
                selectedPokemon = nextPokemon;
                break;
            }
        }

        if (sPokedexView->selectedPokemon == selectedPokemon)
            return FALSE;
        else
        {
            sPokedexView->selectedPokemon = selectedPokemon;
            sPokedexView->pokeBallRotation -= 16;
            return TRUE;
        }
    }
    else if (JOY_NEW(DPAD_DOWN) && selectedPokemon < sPokedexView->pokemonListCount - 1)
    {
        nextPokemon = selectedPokemon;
        while (nextPokemon < sPokedexView->pokemonListCount - 1)
        {
            nextPokemon = GetNextPosition(0, nextPokemon, 0, sPokedexView->pokemonListCount - 1);

            if (sPokedexView->pokedexList[nextPokemon].seen)
            {
                selectedPokemon = nextPokemon;
                break;
            }
        }

        if (sPokedexView->selectedPokemon == selectedPokemon)
            return FALSE;
        else
        {
            sPokedexView->selectedPokemon = selectedPokemon;
            sPokedexView->pokeBallRotation += 16;
            return TRUE;
        }
    }
    return FALSE;
}

static u8 ClearMonSprites(void)
{
    u16 i;

    for (i = 0; i < MAX_MONS_ON_SCREEN; i++)
    {
        if (sPokedexView->monSpriteIds[i] != 0xFFFF)
        {
            FreeAndDestroyMonPicSprite(sPokedexView->monSpriteIds[i]);
            sPokedexView->monSpriteIds[i] = 0xFFFF;
        }
    }
    return FALSE;
}

static u16 GetPokemonSpriteToDisplay(u16 species)
{
    if (species >= NATIONAL_DEX_COUNT || sPokedexView->pokedexList[species].dexNum == 0xFFFF)
        return 0xFFFF;
    else if (sPokedexView->pokedexList[species].seen)
        return sPokedexView->pokedexList[species].dexNum;
    else
        return 0;
}

static u32 CreatePokedexMonSprite(u16 num, s16 x, s16 y)
{
    u8 i;

    for (i = 0; i < MAX_MONS_ON_SCREEN; i++)
    {
        if (sPokedexView->monSpriteIds[i] == 0xFFFF)
        {
            u8 spriteId = CreateMonSpriteFromNationalDexNumber(num, x, y, i);

            gSprites[spriteId].oam.affineMode = ST_OAM_AFFINE_NORMAL;
            gSprites[spriteId].oam.priority = 3;
            gSprites[spriteId].data[0] = 0;
            gSprites[spriteId].data[1] = i;
            gSprites[spriteId].data[2] = NationalPokedexNumToSpecies(num);
            sPokedexView->monSpriteIds[i] = spriteId;
            return spriteId;
        }
    }
    return 0xFFFF;
}

#define sIsDownArrow data[1]

static void CreateInterfaceSprites(u8 page)
{
    u8 spriteId;
    u16 digitNum;

    // Scroll arrows
    spriteId = CreateSprite(&sScrollArrowSpriteTemplate, 184, 4, 0);
    gSprites[spriteId].sIsDownArrow = FALSE;
    spriteId = CreateSprite(&sScrollArrowSpriteTemplate, 184, DISPLAY_HEIGHT - 4, 0);
    gSprites[spriteId].sIsDownArrow = TRUE;
    gSprites[spriteId].vFlip = TRUE;

    CreateSprite(&sScrollBarSpriteTemplate, 230, 20, 0);
    // Start button
    CreateSprite(&sInterfaceTextSpriteTemplate, 16, 120, 0);
    // Menu text
    spriteId = CreateSprite(&sInterfaceTextSpriteTemplate, 48, 120, 0);
    StartSpriteAnim(&gSprites[spriteId], 3);
    // Select button
    spriteId = CreateSprite(&sInterfaceTextSpriteTemplate, 16, DISPLAY_HEIGHT - 16, 0);
    StartSpriteAnim(&gSprites[spriteId], 2);
    gSprites[spriteId].data[2] = 0x80;
    // Search text
    spriteId = CreateSprite(&sInterfaceTextSpriteTemplate, 48, DISPLAY_HEIGHT - 16, 0);
    StartSpriteAnim(&gSprites[spriteId], 1);

    spriteId = CreateSprite(&sRotatingPokeBallSpriteTemplate, 0, DISPLAY_HEIGHT / 2, 2);
    gSprites[spriteId].oam.affineMode = ST_OAM_AFFINE_NORMAL;
    gSprites[spriteId].oam.matrixNum = 30;
    gSprites[spriteId].data[0] = 30;
    gSprites[spriteId].data[1] = 0;

    spriteId = CreateSprite(&sRotatingPokeBallSpriteTemplate, 0, DISPLAY_HEIGHT / 2, 2);
    gSprites[spriteId].oam.affineMode = ST_OAM_AFFINE_NORMAL;
    gSprites[spriteId].oam.matrixNum = 31;
    gSprites[spriteId].data[0] = 31;
    gSprites[spriteId].data[1] = 128;

    if (page == PAGE_MAIN)
    {
        bool32 drawNextDigit;

        if (!IsNationalPokedexEnabled())
        {
            // Seen text
            CreateSprite(&sSeenOwnTextSpriteTemplate, 32, 40, 1);
            // Own text
            spriteId = CreateSprite(&sSeenOwnTextSpriteTemplate, 32, 72, 1);
            StartSpriteAnim(&gSprites[spriteId], 1);

            // Seen value - 100s
            drawNextDigit = FALSE;
            spriteId = CreateSprite(&sHoennDexSeenOwnNumberSpriteTemplate, 24, 48, 1);
            digitNum = sPokedexView->seenCount / 100;
            StartSpriteAnim(&gSprites[spriteId], digitNum);
            if (digitNum != 0)
                drawNextDigit = TRUE;
            else
                gSprites[spriteId].invisible = TRUE;

            // Seen value - 10s
            spriteId = CreateSprite(&sHoennDexSeenOwnNumberSpriteTemplate, 32, 48, 1);
            digitNum = (sPokedexView->seenCount % 100) / 10;
            if (digitNum != 0 || drawNextDigit)
                StartSpriteAnim(&gSprites[spriteId], digitNum);
            else
                gSprites[spriteId].invisible = TRUE;

            // Seen value - 1s
            spriteId = CreateSprite(&sHoennDexSeenOwnNumberSpriteTemplate, 40, 48, 1);
            digitNum = (sPokedexView->seenCount % 100) % 10;
            StartSpriteAnim(&gSprites[spriteId], digitNum);

            // Owned value - 100s
            drawNextDigit = FALSE;
            spriteId = CreateSprite(&sHoennDexSeenOwnNumberSpriteTemplate, 24, 80, 1);
            digitNum = sPokedexView->ownCount / 100;
            StartSpriteAnim(&gSprites[spriteId], digitNum);
            if (digitNum != 0)
                drawNextDigit = TRUE;
            else
                gSprites[spriteId].invisible = TRUE;

            // Owned value - 10s
            spriteId = CreateSprite(&sHoennDexSeenOwnNumberSpriteTemplate, 32, 80, 1);
            digitNum = (sPokedexView->ownCount % 100) / 10;
            if (digitNum != 0 || drawNextDigit)
                StartSpriteAnim(&gSprites[spriteId], digitNum);
            else
                gSprites[spriteId].invisible = TRUE;

            // Owned value - 1s
            spriteId = CreateSprite(&sHoennDexSeenOwnNumberSpriteTemplate, 40, 80, 1);
            digitNum = (sPokedexView->ownCount % 100) % 10;
            StartSpriteAnim(&gSprites[spriteId], digitNum);
        }
        else
        {
            u16 seenOwnedCount;
            // Changes sprite distance based on the seen count (owned count can't ever be bigger than it)
            u8 counterXDist  = 7;
            u8 counterX1s    = sPokedexView->seenCount > 999 ? 57 : 56;
            u8 counterX10s   = counterX1s - counterXDist;
            u8 counterX100s  = counterX10s - counterXDist;
            u8 counterX1000s = counterX100s - counterXDist;

            // Seen text
            CreateSprite(&sSeenOwnTextSpriteTemplate, 32, 40, 1);
            // Own text
            spriteId = CreateSprite(&sSeenOwnTextSpriteTemplate, 32, 76, 1);
            StartSpriteAnim(&gSprites[spriteId], 1);

            // Hoenn text (seen)
            CreateSprite(&sHoennNationalTextSpriteTemplate, 17, 45, 1);

            // National text (seen)
            spriteId = CreateSprite(&sHoennNationalTextSpriteTemplate, 17, 55, 1);
            StartSpriteAnim(&gSprites[spriteId], 1);

            // Hoenn text (own)
            CreateSprite(&sHoennNationalTextSpriteTemplate, 17, 81, 1);

            // National text (own)
            spriteId = CreateSprite(&sHoennNationalTextSpriteTemplate, 17, 91, 1);
            StartSpriteAnim(&gSprites[spriteId], 1);

            // Hoenn seen value - 100s
            seenOwnedCount = GetHoennPokedexCount(FLAG_GET_SEEN);
            drawNextDigit = FALSE;
            spriteId = CreateSprite(&sNationalDexSeenOwnNumberSpriteTemplate, counterX100s, 45, 1);
            digitNum = seenOwnedCount / 100;
            StartSpriteAnim(&gSprites[spriteId], digitNum);
            if (digitNum != 0)
                drawNextDigit = TRUE;
            else
                gSprites[spriteId].invisible = TRUE;

            // Hoenn seen value - 10s
            spriteId = CreateSprite(&sNationalDexSeenOwnNumberSpriteTemplate, counterX10s, 45, 1);
            digitNum = (seenOwnedCount % 100) / 10;
            if (digitNum != 0 || drawNextDigit)
                StartSpriteAnim(&gSprites[spriteId], digitNum);
            else
                gSprites[spriteId].invisible = TRUE;

            // Hoenn seen value - 1s
            spriteId = CreateSprite(&sNationalDexSeenOwnNumberSpriteTemplate, counterX1s, 45, 1);
            digitNum = (seenOwnedCount % 100) % 10;
            StartSpriteAnim(&gSprites[spriteId], digitNum);

            // National seen value - 1000s
            drawNextDigit = FALSE;
            spriteId = CreateSprite(&sNationalDexSeenOwnNumberSpriteTemplate, counterX1000s, 55, 1);
            digitNum = sPokedexView->seenCount / 1000;
            StartSpriteAnim(&gSprites[spriteId], digitNum);
            if (digitNum != 0)
                drawNextDigit = TRUE;
            else
                gSprites[spriteId].invisible = TRUE;

            // National seen value - 100s
            spriteId = CreateSprite(&sNationalDexSeenOwnNumberSpriteTemplate, counterX100s, 55, 1);
            digitNum = (sPokedexView->seenCount % 1000) / 100;
            if (digitNum != 0 || drawNextDigit)
            {
                drawNextDigit = TRUE;
                StartSpriteAnim(&gSprites[spriteId], digitNum);
            }
            else
                gSprites[spriteId].invisible = TRUE;

            // National seen value - 10s
            spriteId = CreateSprite(&sNationalDexSeenOwnNumberSpriteTemplate, counterX10s, 55, 1);
            digitNum = ((sPokedexView->seenCount % 1000) % 100) / 10;
            if (digitNum != 0 || drawNextDigit)
                StartSpriteAnim(&gSprites[spriteId], digitNum);
            else
                gSprites[spriteId].invisible = TRUE;

            // National seen value - 1s
            spriteId = CreateSprite(&sNationalDexSeenOwnNumberSpriteTemplate, counterX1s, 55, 1);
            digitNum = ((sPokedexView->seenCount % 1000) % 100) % 10;
            StartSpriteAnim(&gSprites[spriteId], digitNum);

            seenOwnedCount = GetHoennPokedexCount(FLAG_GET_CAUGHT);

            // Hoenn owned value - 100s
            drawNextDigit = FALSE;
            spriteId = CreateSprite(&sNationalDexSeenOwnNumberSpriteTemplate, counterX100s, 81, 1);
            digitNum = seenOwnedCount / 100;
            StartSpriteAnim(&gSprites[spriteId], digitNum);
            if (digitNum != 0)
                drawNextDigit = TRUE;
            else
                gSprites[spriteId].invisible = TRUE;

            // Hoenn owned value - 10s
            spriteId = CreateSprite(&sNationalDexSeenOwnNumberSpriteTemplate, counterX10s, 81, 1);
            digitNum = (seenOwnedCount % 100) / 10;
            if (digitNum != 0 || drawNextDigit)
                StartSpriteAnim(&gSprites[spriteId], digitNum);
            else
                gSprites[spriteId].invisible = TRUE;

            // Hoenn owned value - 1s
            spriteId = CreateSprite(&sNationalDexSeenOwnNumberSpriteTemplate, counterX1s, 81, 1);
            digitNum = (seenOwnedCount % 100) % 10;
            StartSpriteAnim(&gSprites[spriteId], digitNum);

            // National owned value - 1000s
            drawNextDigit = FALSE;
            spriteId = CreateSprite(&sNationalDexSeenOwnNumberSpriteTemplate, counterX1000s, 91, 1);
            digitNum = sPokedexView->ownCount / 1000;
            StartSpriteAnim(&gSprites[spriteId], digitNum);
            if (digitNum != 0)
                drawNextDigit = TRUE;
            else
                gSprites[spriteId].invisible = TRUE;

            // National owned value - 100s
            spriteId = CreateSprite(&sNationalDexSeenOwnNumberSpriteTemplate, counterX100s, 91, 1);
            digitNum = (sPokedexView->ownCount % 1000) / 100;
            if (digitNum != 0 || drawNextDigit)
            {
                drawNextDigit = TRUE;
                StartSpriteAnim(&gSprites[spriteId], digitNum);
            }
            else
                gSprites[spriteId].invisible = TRUE;

            // National owned value  - 10s
            spriteId = CreateSprite(&sNationalDexSeenOwnNumberSpriteTemplate, counterX10s, 91, 1);
            digitNum = ((sPokedexView->ownCount % 1000) % 100) / 10;
            if (digitNum != 0 || drawNextDigit)
                StartSpriteAnim(&gSprites[spriteId], digitNum);
            else
                gSprites[spriteId].invisible = TRUE;

            // National owned value - 1s
            spriteId = CreateSprite(&sNationalDexSeenOwnNumberSpriteTemplate, counterX1s, 91, 1);
            digitNum = ((sPokedexView->ownCount % 1000) % 100) % 10;
            StartSpriteAnim(&gSprites[spriteId], digitNum);
        }
        spriteId = CreateSprite(&sDexListStartMenuCursorSpriteTemplate, 136, 96, 1);
        gSprites[spriteId].invisible = TRUE;
    }
    else // PAGE_SEARCH_RESULTS
    {
        spriteId = CreateSprite(&sDexListStartMenuCursorSpriteTemplate, 136, 80, 1);
        gSprites[spriteId].invisible = TRUE;
    }
}

static void SpriteCB_EndMoveMonForInfoScreen(struct Sprite *sprite)
{
    // Once mon is done moving there's nothing left to do
}

static void SpriteCB_SeenOwnInfo(struct Sprite *sprite)
{
    if (sPokedexView->currentPage != PAGE_MAIN)
        DestroySprite(sprite);
}

void SpriteCB_MoveMonForInfoScreen(struct Sprite *sprite)
{
    sprite->oam.priority = 0;
    sprite->oam.affineMode = ST_OAM_AFFINE_OFF;
    sprite->x2 = 0;
    sprite->y2 = 0;
    if (sprite->x != MON_PAGE_X || sprite->y != MON_PAGE_Y)
    {
        if (sprite->x > MON_PAGE_X)
            sprite->x--;
        if (sprite->x < MON_PAGE_X)
            sprite->x++;

        if (sprite->y > MON_PAGE_Y)
            sprite->y--;
        if (sprite->y < MON_PAGE_Y)
            sprite->y++;
    }
    else
    {
        sprite->callback = SpriteCB_EndMoveMonForInfoScreen;
    }
}

static void SpriteCB_PokedexListMonSprite(struct Sprite *sprite)
{
    u8 monId = sprite->data[1];

    if (sPokedexView->currentPage != PAGE_MAIN && sPokedexView->currentPage != PAGE_SEARCH_RESULTS)
    {
        FreeAndDestroyMonPicSprite(sPokedexView->monSpriteIds[monId]);
        sPokedexView->monSpriteIds[monId] = 0xFFFF;
    }
    else
    {
        u32 var;
        sprite->y2 = gSineTable[(u8)sprite->data[5]] * 76 / 256;
        var = SAFE_DIV(0x10000, gSineTable[sprite->data[5] + 64]);
        if (var > 0xFFFF)
            var = 0xFFFF;
        SetOamMatrix(sprite->data[1] + 1, 0x100, 0, 0, var);
        sprite->oam.matrixNum = monId + 1;

        if (sprite->data[5] > -64 && sprite->data[5] < 64)
        {
            sprite->invisible = FALSE;
            sprite->data[0] = 1;
        }
        else
        {
            sprite->invisible = TRUE;
        }

        if ((sprite->data[5] <= -64 || sprite->data[5] >= 64) && sprite->data[0] != 0)
        {
            FreeAndDestroyMonPicSprite(sPokedexView->monSpriteIds[monId]);
            sPokedexView->monSpriteIds[monId] = 0xFFFF;
        }
    }
}

static void SpriteCB_Scrollbar(struct Sprite *sprite)
{
    if (sPokedexView->currentPage != PAGE_MAIN && sPokedexView->currentPage != PAGE_SEARCH_RESULTS)
        DestroySprite(sprite);
    else
        sprite->y2 = sPokedexView->selectedPokemon * 120 / (sPokedexView->pokemonListCount - 1);
}

static void SpriteCB_ScrollArrow(struct Sprite *sprite)
{
    if (sPokedexView->currentPage != PAGE_MAIN && sPokedexView->currentPage != PAGE_SEARCH_RESULTS)
    {
        DestroySprite(sprite);
    }
    else
    {
        u8 r0;

        if (sprite->sIsDownArrow)
        {
            if (sPokedexView->selectedPokemon == sPokedexView->pokemonListCount - 1)
                sprite->invisible = TRUE;
            else
                sprite->invisible = FALSE;
            r0 = sprite->data[2];
        }
        else
        {
            if (sPokedexView->selectedPokemon == 0)
                sprite->invisible = TRUE;
            else
                sprite->invisible = FALSE;
            r0 = sprite->data[2] - 128;
        }
        sprite->y2 = gSineTable[r0] / 64;
        sprite->data[2] = sprite->data[2] + 8;
        if (sPokedexView->menuIsOpen == FALSE && sPokedexView->menuY == 0 && sprite->invisible == FALSE)
            sprite->invisible = FALSE;
        else
            sprite->invisible = TRUE;
    }
}

static void SpriteCB_DexListInterfaceText(struct Sprite *sprite)
{
    if (sPokedexView->currentPage != PAGE_MAIN && sPokedexView->currentPage != PAGE_SEARCH_RESULTS)
        DestroySprite(sprite);
}

static void SpriteCB_RotatingPokeBall(struct Sprite *sprite)
{
    if (sPokedexView->currentPage != PAGE_MAIN && sPokedexView->currentPage != PAGE_SEARCH_RESULTS)
    {
        DestroySprite(sprite);
    }
    else
    {
        u8 val;
        s16 r3;
        s16 r0;

        val = sPokedexView->pokeBallRotation + sprite->data[1];
        r3 = gSineTable[val];
        r0 = gSineTable[val + 64];
        SetOamMatrix(sprite->data[0], r0, r3, -r3, r0);

        val = sPokedexView->pokeBallRotation + (sprite->data[1] + 64);
        r3 = gSineTable[val];
        r0 = gSineTable[val + 64];
        sprite->x2 = r0 * 40 / 256;
        sprite->y2 = r3 * 40 / 256;
    }
}

static void SpriteCB_DexListStartMenuCursor(struct Sprite *sprite)
{
    if (sPokedexView->currentPage != PAGE_MAIN && sPokedexView->currentPage != PAGE_SEARCH_RESULTS)
    {
        DestroySprite(sprite);
    }
    else
    {
        u16 r1 = sPokedexView->currentPage == PAGE_MAIN ? 80 : 96;

        if (sPokedexView->menuIsOpen && sPokedexView->menuY == r1)
        {
            sprite->invisible = FALSE;
            sprite->y2 = sPokedexView->menuCursorPos * 16;
            sprite->x2 = gSineTable[(u8)sprite->data[2]] / 64;
            sprite->data[2] += 8;
        }
        else
        {
            sprite->invisible = TRUE;
        }
    }
}

static void PrintInfoScreenText(const u8 *str, u8 left, u8 top)
{
    u8 color[3];
    color[0] = TEXT_COLOR_TRANSPARENT;
    color[1] = TEXT_DYNAMIC_COLOR_6;
    color[2] = TEXT_COLOR_LIGHT_GRAY;

    AddTextPrinterParameterized4(0, FONT_NORMAL, left, top, 0, 0, color, TEXT_SKIP_DRAW, str);
}

static void PrintInfoScreenTextSmall(const u8 *str, u8 left, u8 top)
{
    u8 color[3];
    color[0] = TEXT_COLOR_TRANSPARENT;
    color[1] = TEXT_DYNAMIC_COLOR_6;
    color[2] = TEXT_COLOR_LIGHT_GRAY;

    AddTextPrinterParameterized4(0, FONT_SMALL, left, top, 0, 0, color, TEXT_SKIP_DRAW, str);
}

#define tScrolling       data[0]
#define tMonSpriteDone   data[1]
#define tBgLoaded        data[2]
#define tSkipCry         data[3]
#define tMonSpriteId     data[4]
#define tTrainerSpriteId data[5]

static u8 LoadInfoScreen(struct PokedexListItem *item, u8 monSpriteId)
{
    u8 taskId;

    sPokedexListItem = item;
    taskId = CreateTask(Task_LoadInfoScreen, 0);
    gTasks[taskId].tScrolling = FALSE;
    gTasks[taskId].tMonSpriteDone = TRUE; // Already has sprite from list view
    gTasks[taskId].tBgLoaded = FALSE;
    gTasks[taskId].tSkipCry = FALSE;
    gTasks[taskId].tMonSpriteId = monSpriteId;
    gTasks[taskId].tTrainerSpriteId = SPRITE_NONE;
    ResetBgsAndClearDma3BusyFlags(0);
    InitBgsFromTemplates(0, sInfoScreen_BgTemplate, ARRAY_COUNT(sInfoScreen_BgTemplate));
    SetBgTilemapBuffer(3, AllocZeroed(BG_SCREEN_SIZE));
    SetBgTilemapBuffer(2, AllocZeroed(BG_SCREEN_SIZE));
    SetBgTilemapBuffer(1, AllocZeroed(BG_SCREEN_SIZE));
    SetBgTilemapBuffer(0, AllocZeroed(BG_SCREEN_SIZE));
    InitWindows(sInfoScreen_WindowTemplates);
    DeactivateAllTextPrinters();

    return taskId;
}

static bool8 IsInfoScreenScrolling(u8 taskId)
{
    if (!gTasks[taskId].tScrolling && gTasks[taskId].func == Task_HandleInfoScreenInput)
        return FALSE;
    else
        return TRUE;
}

static u8 StartInfoScreenScroll(struct PokedexListItem *item, u8 taskId)
{
    sPokedexListItem = item;
    gTasks[taskId].tScrolling = TRUE;
    gTasks[taskId].tMonSpriteDone = FALSE;
    gTasks[taskId].tBgLoaded = FALSE;
    gTasks[taskId].tSkipCry = FALSE;
    return taskId;
}

static void Task_LoadInfoScreen(u8 taskId)
{
    switch (gMain.state)
    {
    case 0:
    default:
        if (!gPaletteFade.active)
        {
            u16 r2;

            sPokedexView->currentPage = PAGE_INFO;
            gPokedexVBlankCB = gMain.vblankCallback;
            SetVBlankCallback(NULL);
            r2 = 0;
            if (gTasks[taskId].tMonSpriteDone)
                r2 += DISPCNT_OBJ_ON;
            if (gTasks[taskId].tBgLoaded)
                r2 |= DISPCNT_BG1_ON;
            ResetOtherVideoRegisters(r2);
            gMain.state = 1;
        }
        break;
    case 1:
        DecompressAndLoadBgGfxUsingHeap(3, gPokedexMenu_Gfx, 0x2000, 0, 0);
        CopyToBgTilemapBuffer(3, gPokedexInfoScreen_Tilemap, 0, 0);
        FillWindowPixelBuffer(WIN_INFO, PIXEL_FILL(0));
        PutWindowTilemap(WIN_INFO);
        PutWindowTilemap(WIN_FOOTPRINT);
        DrawFootprint(WIN_FOOTPRINT, NationalPokedexNumToSpecies(sPokedexListItem->dexNum));
        CopyWindowToVram(WIN_FOOTPRINT, COPYWIN_GFX);
        gMain.state++;
        break;
    case 2:
        LoadScreenSelectBarMain(0xD);
        HighlightScreenSelectBarItem(sPokedexView->selectedScreen, 0xD);
        LoadPokedexBgPalette(sPokedexView->isSearchResults);
        gMain.state++;
        break;
    case 3:
        gMain.state++;
        break;
    case 4:
        PrintMonInfo(sPokedexListItem->dexNum, sPokedexView->dexMode == DEX_MODE_HOENN ? FALSE : TRUE, sPokedexListItem->owned, 0);
        if (!sPokedexListItem->owned)
            LoadPalette(&gPlttBufferUnfaded[BG_PLTT_ID(0) + 1], BG_PLTT_ID(3) + 1, PLTT_SIZEOF(16 - 1));
        CopyWindowToVram(WIN_INFO, COPYWIN_FULL);
        CopyBgTilemapBufferToVram(1);
        CopyBgTilemapBufferToVram(2);
        CopyBgTilemapBufferToVram(3);
        gMain.state++;
        break;
    case 5:
        if (!gTasks[taskId].tMonSpriteDone)
        {
            gTasks[taskId].tMonSpriteId = (u16)CreateMonSpriteFromNationalDexNumber(sPokedexListItem->dexNum, MON_PAGE_X, MON_PAGE_Y, 0);
            gSprites[gTasks[taskId].tMonSpriteId].oam.priority = 0;
        }
        gMain.state++;
        break;
    case 6:
        {
            u32 preservedPalettes = 0;

            if (gTasks[taskId].tBgLoaded)
                preservedPalettes = 0x14; // each bit represents a palette index
            if (gTasks[taskId].tMonSpriteDone)
                preservedPalettes |= (1 << (gSprites[gTasks[taskId].tMonSpriteId].oam.paletteNum + 16));
            BeginNormalPaletteFade(~preservedPalettes, 0, 16, 0, RGB_BLACK);
            SetVBlankCallback(gPokedexVBlankCB);
            gMain.state++;
        }
        break;
    case 7:
        SetGpuReg(REG_OFFSET_BLDCNT, 0);
        SetGpuReg(REG_OFFSET_BLDALPHA, 0);
        SetGpuReg(REG_OFFSET_BLDY, 0);
        SetGpuReg(REG_OFFSET_DISPCNT, DISPCNT_OBJ_1D_MAP | DISPCNT_OBJ_ON);
        HideBg(0);
        ShowBg(1);
        ShowBg(2);
        ShowBg(3);
        gMain.state++;
        break;
    case 8:
        if (!gPaletteFade.active)
        {
            gMain.state++;
            if (!gTasks[taskId].tSkipCry)
            {
                StopCryAndClearCrySongs();
                PlayCry_NormalNoDucking(NationalPokedexNumToSpecies_HandleForms(sPokedexListItem->dexNum), 0, CRY_VOLUME_RS, CRY_PRIORITY_NORMAL);
            }
            else
            {
                gMain.state++;
            }
        }
        break;
    case 9:
        if (!IsCryPlayingOrClearCrySongs())
            gMain.state++;
        break;
    case 10:
        gTasks[taskId].tScrolling = FALSE;
        gTasks[taskId].tMonSpriteDone = FALSE; // Reload next time screen comes up
        gTasks[taskId].tBgLoaded = TRUE;
        gTasks[taskId].tSkipCry = TRUE;
        gTasks[taskId].func = Task_HandleInfoScreenInput;
        gMain.state = 0;
        break;
    }
}

static void FreeInfoScreenWindowAndBgBuffers(void)
{
    void *tilemapBuffer;

    FreeAllWindowBuffers();
    tilemapBuffer = GetBgTilemapBuffer(0);
    if (tilemapBuffer)
        Free(tilemapBuffer);
    tilemapBuffer = GetBgTilemapBuffer(1);
    if (tilemapBuffer)
        Free(tilemapBuffer);
    tilemapBuffer = GetBgTilemapBuffer(2);
    if (tilemapBuffer)
        Free(tilemapBuffer);
    tilemapBuffer = GetBgTilemapBuffer(3);
    if (tilemapBuffer)
        Free(tilemapBuffer);
}

static void Task_HandleInfoScreenInput(u8 taskId)
{
    if (gTasks[taskId].tScrolling)
    {
        // Scroll up/down
		sPokedexView->formSpecies = 0;
		sFormFixBit = 0;
        BeginNormalPaletteFade(PALETTES_ALL, 0, 0, 16, RGB_BLACK);
        gTasks[taskId].func = Task_LoadInfoScreenWaitForFade;
        PlaySE(SE_DEX_SCROLL);
        return;
    }
    if (JOY_NEW(B_BUTTON))
    {
        BeginNormalPaletteFade(PALETTES_ALL, 0, 0, 16, RGB_BLACK);
        gTasks[taskId].func = Task_ExitInfoScreen;
        PlaySE(SE_PC_OFF);
        return;
    }
    if (JOY_NEW(A_BUTTON))
    {
        switch (sPokedexView->selectedScreen)
        {
        case AREA_SCREEN:
            BeginNormalPaletteFade(PALETTES_ALL & ~(0x14), 0, 0, 16, RGB_BLACK);
            sPokedexView->screenSwitchState = 1;
            gTasks[taskId].func = Task_SwitchScreensFromInfoScreen;
            PlaySE(SE_PIN);
            break;
        case CRY_SCREEN:
            BeginNormalPaletteFade(PALETTES_ALL & ~(0x14), 0, 0, 0x10, RGB_BLACK);
            sPokedexView->screenSwitchState = 2;
            gTasks[taskId].func = Task_SwitchScreensFromInfoScreen;
            PlaySE(SE_PIN);
            break;
        case SIZE_SCREEN:
            if (!sPokedexListItem->owned)
            {
                PlaySE(SE_FAILURE);
            }
            else
            {
                BeginNormalPaletteFade(PALETTES_ALL & ~(0x14), 0, 0, 0x10, RGB_BLACK);
                sPokedexView->screenSwitchState = 3;
                gTasks[taskId].func = Task_SwitchScreensFromInfoScreen;
                PlaySE(SE_PIN);
            }
            break;
        case DATA_SCREEN:
            BeginNormalPaletteFade(PALETTES_ALL & ~(0x14), 0, 0, 0x10, RGB_BLACK);
            sPokedexView->screenSwitchState = 4;
            gTasks[taskId].func = Task_SwitchScreensFromInfoScreen;
            PlaySE(SE_PIN);
            break;
        case CANCEL_SCREEN:
            BeginNormalPaletteFade(PALETTES_ALL, 0, 0, 0x10, RGB_BLACK);
            gTasks[taskId].func = Task_ExitInfoScreen;
            PlaySE(SE_PC_OFF);
            break;
        }
        return;
    }
    if ((JOY_NEW(DPAD_LEFT)
     || (JOY_NEW(L_BUTTON)))
     && sPokedexView->selectedScreen > 0)
    {
        sPokedexView->selectedScreen--;
        HighlightScreenSelectBarItem(sPokedexView->selectedScreen, 0xD);
        PlaySE(SE_DEX_PAGE);
        return;
    }
    if ((JOY_NEW(DPAD_RIGHT)
     || (JOY_NEW(R_BUTTON)))
     && sPokedexView->selectedScreen < CANCEL_SCREEN)
    {
        sPokedexView->selectedScreen++;
        HighlightScreenSelectBarItem(sPokedexView->selectedScreen, 0xD);
        PlaySE(SE_DEX_PAGE);
        return;
    }
	if (JOY_NEW(START_BUTTON) || JOY_NEW(SELECT_BUTTON))
	{
		sPokedexView->formSpecies = GetNextForm(sPokedexListItem->dexNum, JOY_NEW(START_BUTTON)); // use Start to go "next" form, Select to go "previous" form
		if (sPokedexView->formSpecies)
		{
            BeginNormalPaletteFade(PALETTES_ALL, 0, 0, 16, RGB_BLACK);
            gTasks[taskId].func = Task_LoadInfoScreenWaitForFade;
            PlaySE(SE_PIN);
			return;
		}
	}
}

static u16 GetNextForm(u16 dexNum, bool8 forward)
{
	u32 numForms;
	u32 species = NationalPokedexNumToSpecies_HandleForms(dexNum);
	u32 currIndex = 0;
	u32 checkSpecies;
	
	if (GetSpeciesFormTable(species) == NULL)
		return 0;
	
	for (numForms = 0; numForms < 30; numForms++) // get information about the mon's form table
	{
        checkSpecies = GetFormSpeciesId(species, numForms);
		if (checkSpecies == species)
			currIndex = numForms; // index of form that is being switched from
        if (checkSpecies == FORM_SPECIES_END)
			break; // index of FORM_SPECIES_END (size of the table)
		
	}
	
	if (forward)
	{
		if (currIndex + 1 == numForms)
			checkSpecies = GetFormSpeciesId(species, 0);
		else
			checkSpecies = GetFormSpeciesId(species, currIndex + 1);
	}
	else
	{
		if (currIndex == 0)
			checkSpecies = GetFormSpeciesId(species, numForms - 1);
		else
			checkSpecies = GetFormSpeciesId(species, currIndex - 1);
	}
	
	if (checkSpecies != species)
		return checkSpecies;
	else
		return 0;
	
}

static void Task_SwitchScreensFromInfoScreen(u8 taskId)
{
    if (!gPaletteFade.active)
    {
        FreeAndDestroyMonPicSprite(gTasks[taskId].tMonSpriteId);
        switch (sPokedexView->screenSwitchState)
        {
        case 1:
        default:
            gTasks[taskId].func = Task_LoadAreaScreen;
            break;
        case 2:
            gTasks[taskId].func = Task_LoadCryScreen;
            break;
        case 3:
            gTasks[taskId].func = Task_LoadSizeScreen;
            break;
        case 4:
            gTasks[taskId].func = Task_LoadDataScreen;
            break;
        }
    }
}

static void Task_LoadInfoScreenWaitForFade(u8 taskId)
{
    if (!gPaletteFade.active)
    {
        FreeAndDestroyMonPicSprite(gTasks[taskId].tMonSpriteId);
        gTasks[taskId].func = Task_LoadInfoScreen;
    }
}

static void Task_ExitInfoScreen(u8 taskId)
{
    if (!gPaletteFade.active)
    {
        FreeAndDestroyMonPicSprite(gTasks[taskId].tMonSpriteId);
        FreeInfoScreenWindowAndBgBuffers();
        DestroyTask(taskId);
    }
}

static void Task_LoadAreaScreen(u8 taskId)
{
    switch (gMain.state)
    {
    case 0:
    default:
        if (!gPaletteFade.active)
        {
            sPokedexView->currentPage = PAGE_AREA;
            gPokedexVBlankCB = gMain.vblankCallback;
            SetVBlankCallback(NULL);
            ResetOtherVideoRegisters(DISPCNT_BG1_ON);
            sPokedexView->selectedScreen = AREA_SCREEN;
            gMain.state = 1;
        }
        break;
    case 1:
        LoadScreenSelectBarSubmenu(0xD);
        HighlightSubmenuScreenSelectBarItem(0, 0xD);
        LoadPokedexBgPalette(sPokedexView->isSearchResults);
        SetGpuReg(REG_OFFSET_BG1CNT, BGCNT_PRIORITY(0) | BGCNT_CHARBASE(0) | BGCNT_SCREENBASE(13) | BGCNT_16COLOR | BGCNT_TXT256x256);
        gMain.state++;
        break;
    case 2:
        ShowPokedexAreaScreen(NationalPokedexNumToSpecies_HandleForms(sPokedexListItem->dexNum), &sPokedexView->screenSwitchState);
        SetVBlankCallback(gPokedexVBlankCB);
        sPokedexView->screenSwitchState = 0;
        gMain.state = 0;
        gTasks[taskId].func = Task_WaitForAreaScreenInput;
        break;
    }
}

static void Task_WaitForAreaScreenInput(u8 taskId)
{
// See Task_HandlePokedexAreaScreenInput() in pokedex_area_screen.c
    if (sPokedexView->screenSwitchState != 0)
        gTasks[taskId].func = Task_SwitchScreensFromAreaScreen;
}

static void Task_SwitchScreensFromAreaScreen(u8 taskId)
{
    if (!gPaletteFade.active)
    {
        switch (sPokedexView->screenSwitchState)
        {
        case 1:
        default:
            gTasks[taskId].func = Task_LoadInfoScreen;
            break;
        case 2:
            gTasks[taskId].func = Task_LoadCryScreen;
            break;
        }
    }
}

static void Task_LoadCryScreen(u8 taskId)
{
    switch (gMain.state)
    {
    case 0:
    default:
        if (!gPaletteFade.active)
        {
            m4aMPlayStop(&gMPlayInfo_BGM);
            sPokedexView->currentPage = PAGE_CRY;
            gPokedexVBlankCB = gMain.vblankCallback;
            SetVBlankCallback(NULL);
            ResetOtherVideoRegisters(DISPCNT_BG1_ON);
            sPokedexView->selectedScreen = CRY_SCREEN;
            gMain.state = 1;
        }
        break;
    case 1:
        DecompressAndLoadBgGfxUsingHeap(3, &gPokedexMenu_Gfx, 0x2000, 0, 0);
        CopyToBgTilemapBuffer(3, &gPokedexCryScreen_Tilemap, 0, 0);
        FillWindowPixelBuffer(WIN_INFO, PIXEL_FILL(0));
        PutWindowTilemap(WIN_INFO);
        PutWindowTilemap(WIN_VU_METER);
        PutWindowTilemap(WIN_CRY_WAVE);
        gMain.state++;
        break;
    case 2:
        LoadScreenSelectBarSubmenu(0xD);
        HighlightSubmenuScreenSelectBarItem(1, 0xD);
        LoadPokedexBgPalette(sPokedexView->isSearchResults);
        gMain.state++;
        break;
    case 3:
        ResetPaletteFade();
        gMain.state++;
        break;
    case 4:
        PrintInfoScreenText(gText_CryOf, 82, 33);
        PrintCryScreenSpeciesName(0, sPokedexListItem->dexNum, 82, 49);
        gMain.state++;
        break;
    case 5:
        gTasks[taskId].tMonSpriteId = CreateMonSpriteFromNationalDexNumber(sPokedexListItem->dexNum, MON_PAGE_X, MON_PAGE_Y, 0);
        gSprites[gTasks[taskId].tMonSpriteId].oam.priority = 0;
        gDexCryScreenState = 0;
        gMain.state++;
        break;
    case 6:
        {
            struct CryScreenWindow waveformWindow;

            waveformWindow.unk0 = 0x4020;
            waveformWindow.unk2 = 31;
            waveformWindow.paletteNo = 8;
            waveformWindow.yPos = 30;
            waveformWindow.xPos = 12;
            if (LoadCryWaveformWindow(&waveformWindow, 2))
            {
                gMain.state++;
                gDexCryScreenState = 0;
            }
        }
        break;
    case 7:
        {
            struct CryScreenWindow cryMeter;

            cryMeter.paletteNo = 9;
            cryMeter.xPos = 18;
            cryMeter.yPos = 3;
            if (LoadCryMeter(&cryMeter, 3))
                gMain.state++;
            CopyWindowToVram(WIN_VU_METER, COPYWIN_GFX);
            CopyWindowToVram(WIN_INFO, COPYWIN_FULL);
            CopyBgTilemapBufferToVram(0);
            CopyBgTilemapBufferToVram(1);
            CopyBgTilemapBufferToVram(2);
            CopyBgTilemapBufferToVram(3);
        }
        break;
    case 8:
        BeginNormalPaletteFade(PALETTES_ALL & ~(0x14), 0, 0x10, 0, RGB_BLACK);
        SetVBlankCallback(gPokedexVBlankCB);
        gMain.state++;
        break;
    case 9:
        SetGpuReg(REG_OFFSET_BLDCNT, 0);
        SetGpuReg(REG_OFFSET_BLDALPHA, 0);
        SetGpuReg(REG_OFFSET_BLDY, 0);
        SetGpuReg(REG_OFFSET_DISPCNT, DISPCNT_OBJ_1D_MAP | DISPCNT_OBJ_ON);
        ShowBg(0);
        ShowBg(1);
        ShowBg(2);
        ShowBg(3);
        gMain.state++;
        break;
    case 10:
        sPokedexView->screenSwitchState = 0;
        gMain.state = 0;
        gTasks[taskId].func = Task_HandleCryScreenInput;
        break;
    }
}

static void Task_HandleCryScreenInput(u8 taskId)
{
    UpdateCryWaveformWindow(2);

    if (IsCryPlaying())
        LoadPlayArrowPalette(TRUE);
    else
        LoadPlayArrowPalette(FALSE);

    if (JOY_NEW(A_BUTTON))
    {
        LoadPlayArrowPalette(TRUE);
        CryScreenPlayButton(NationalPokedexNumToSpecies_HandleForms(sPokedexListItem->dexNum));
        return;
    }
    else if (!gPaletteFade.active)
    {
        if (JOY_NEW(B_BUTTON))
        {
            BeginNormalPaletteFade(PALETTES_ALL & ~(0x14), 0, 0, 0x10, RGB_BLACK);
            m4aMPlayContinue(&gMPlayInfo_BGM);
            sPokedexView->screenSwitchState = 1;
            gTasks[taskId].func = Task_SwitchScreensFromCryScreen;
            PlaySE(SE_PC_OFF);
            return;
        }
        if (JOY_NEW(DPAD_LEFT)
         || (JOY_NEW(L_BUTTON)))
        {
            BeginNormalPaletteFade(PALETTES_ALL & ~(0x14), 0, 0, 0x10, RGB_BLACK);
            m4aMPlayContinue(&gMPlayInfo_BGM);
            sPokedexView->screenSwitchState = 2;
            gTasks[taskId].func = Task_SwitchScreensFromCryScreen;
            PlaySE(SE_DEX_PAGE);
            return;
        }
        if (JOY_NEW(DPAD_RIGHT)
         || (JOY_NEW(R_BUTTON)))
        {
            if (!sPokedexListItem->owned)
            {
                PlaySE(SE_FAILURE);
            }
            else
            {
                BeginNormalPaletteFade(PALETTES_ALL & ~(0x14), 0, 0, 0x10, RGB_BLACK);
                m4aMPlayContinue(&gMPlayInfo_BGM);
                sPokedexView->screenSwitchState = 3;
                gTasks[taskId].func = Task_SwitchScreensFromCryScreen;
                PlaySE(SE_DEX_PAGE);
            }
            return;
        }
    }
}

static void Task_SwitchScreensFromCryScreen(u8 taskId)
{
    if (!gPaletteFade.active)
    {
        FreeCryScreen();
        FreeAndDestroyMonPicSprite(gTasks[taskId].tMonSpriteId);
        switch (sPokedexView->screenSwitchState)
        {
        default:
        case 1:
            gTasks[taskId].func = Task_LoadInfoScreen;
            break;
        case 2:
            gTasks[taskId].func = Task_LoadAreaScreen;
            break;
        case 3:
            gTasks[taskId].func = Task_LoadSizeScreen;
            break;
        }
    }
}

static void LoadPlayArrowPalette(bool8 cryPlaying)
{
    u16 color;

    if (cryPlaying)
        color = RGB(18, 28, 0);
    else
        color = RGB(15, 21, 0);
    LoadPalette(&color, BG_PLTT_ID(5) + 13, PLTT_SIZEOF(1));
}

static void Task_LoadSizeScreen(u8 taskId)
{
    u8 spriteId;

    switch (gMain.state)
    {
    default:
    case 0:
        if (!gPaletteFade.active)
        {
            sPokedexView->currentPage = PAGE_SIZE;
            gPokedexVBlankCB = gMain.vblankCallback;
            SetVBlankCallback(NULL);
            ResetOtherVideoRegisters(DISPCNT_BG1_ON);
            sPokedexView->selectedScreen = SIZE_SCREEN;
            gMain.state = 1;
        }
        break;
    case 1:
        DecompressAndLoadBgGfxUsingHeap(3, gPokedexMenu_Gfx, 0x2000, 0, 0);
        CopyToBgTilemapBuffer(3, gPokedexSizeScreen_Tilemap, 0, 0);
        FillWindowPixelBuffer(WIN_INFO, PIXEL_FILL(0));
        PutWindowTilemap(WIN_INFO);
        gMain.state++;
        break;
    case 2:
        LoadScreenSelectBarSubmenu(0xD);
        HighlightSubmenuScreenSelectBarItem(2, 0xD);
        LoadPokedexBgPalette(sPokedexView->isSearchResults);
        gMain.state++;
        break;
    case 3:
        {
            u8 string[64];

            StringCopy(string, gText_SizeComparedTo);
            StringAppend(string, gSaveBlock2Ptr->playerName);
            PrintInfoScreenText(string, GetStringCenterAlignXOffset(FONT_NORMAL, string, 0xF0), 0x79);
            gMain.state++;
        }
        break;
    case 4:
        ResetPaletteFade();
        gMain.state++;
        break;
    case 5:
        spriteId = CreateSizeScreenTrainerPic(PlayerGenderToFrontTrainerPicId(gSaveBlock2Ptr->playerGender), 152, 56, 0);
        gSprites[spriteId].oam.affineMode = ST_OAM_AFFINE_NORMAL;
        gSprites[spriteId].oam.matrixNum = 1;
        gSprites[spriteId].oam.priority = 0;
        gSprites[spriteId].y2 = GetTrainerOffsetFromNationalDexNumber(sPokedexListItem->dexNum);
        SetOamMatrix(1, GetTrainerScaleFromNationalDexNumber(sPokedexListItem->dexNum), 0, 0, GetTrainerScaleFromNationalDexNumber(sPokedexListItem->dexNum));
        LoadPalette(sSizeScreenSilhouette_Pal, OBJ_PLTT_ID2(gSprites[spriteId].oam.paletteNum), PLTT_SIZE_4BPP);
        gTasks[taskId].tTrainerSpriteId = spriteId;
        gMain.state++;
        break;
    case 6:
        spriteId = CreateMonSpriteFromNationalDexNumber(sPokedexListItem->dexNum, 88, 56, 1);
        gSprites[spriteId].oam.affineMode = ST_OAM_AFFINE_NORMAL;
        gSprites[spriteId].oam.matrixNum = 2;
        gSprites[spriteId].oam.priority = 0;
        gSprites[spriteId].y2 = GetPokemonOffsetFromNationalDexNumber(sPokedexListItem->dexNum);
        SetOamMatrix(2, GetPokemonScaleFromNationalDexNumber(sPokedexListItem->dexNum), 0, 0, GetPokemonScaleFromNationalDexNumber(sPokedexListItem->dexNum));
        LoadPalette(sSizeScreenSilhouette_Pal, OBJ_PLTT_ID2(gSprites[spriteId].oam.paletteNum), PLTT_SIZE_4BPP);
        gTasks[taskId].tMonSpriteId = spriteId;
        CopyWindowToVram(WIN_INFO, COPYWIN_FULL);
        CopyBgTilemapBufferToVram(1);
        CopyBgTilemapBufferToVram(2);
        CopyBgTilemapBufferToVram(3);
        gMain.state++;
        break;
    case 7:
        BeginNormalPaletteFade(PALETTES_ALL & ~(0x14), 0, 0x10, 0, RGB_BLACK);
        SetVBlankCallback(gPokedexVBlankCB);
        gMain.state++;
        break;
    case 8:
        SetGpuReg(REG_OFFSET_BLDCNT, 0);
        SetGpuReg(REG_OFFSET_BLDALPHA, 0);
        SetGpuReg(REG_OFFSET_BLDY, 0);
        SetGpuReg(REG_OFFSET_DISPCNT, DISPCNT_OBJ_1D_MAP | DISPCNT_OBJ_ON);
        HideBg(0);
        ShowBg(1);
        ShowBg(2);
        ShowBg(3);
        gMain.state++;
        break;
    case 9:
        if (!gPaletteFade.active)
        {
            sPokedexView->screenSwitchState = 0;
            gMain.state = 0;
            gTasks[taskId].func = Task_HandleSizeScreenInput;
        }
        break;
    }
}

static void Task_HandleSizeScreenInput(u8 taskId)
{
    if (JOY_NEW(B_BUTTON))
    {
        BeginNormalPaletteFade(PALETTES_ALL & ~(0x14), 0, 0, 0x10, RGB_BLACK);
        sPokedexView->screenSwitchState = 1;
        gTasks[taskId].func = Task_SwitchScreensFromSizeScreen;
        PlaySE(SE_PC_OFF);
    }
    else if (JOY_NEW(DPAD_LEFT)
     || (JOY_NEW(L_BUTTON)))
    {
        BeginNormalPaletteFade(PALETTES_ALL & ~(0x14), 0, 0, 0x10, RGB_BLACK);
        sPokedexView->screenSwitchState = 2;
        gTasks[taskId].func = Task_SwitchScreensFromSizeScreen;
        PlaySE(SE_DEX_PAGE);
    }
    else if (JOY_NEW(DPAD_RIGHT)
     || (JOY_NEW(R_BUTTON)))
    {
        BeginNormalPaletteFade(PALETTES_ALL & ~(0x14), 0, 0, 0x10, RGB_BLACK);
        sPokedexView->screenSwitchState = 3;
        gTasks[taskId].func = Task_SwitchScreensFromSizeScreen;
        PlaySE(SE_DEX_PAGE);
    }
}

static void Task_SwitchScreensFromSizeScreen(u8 taskId)
{
    if (!gPaletteFade.active)
    {
        FreeAndDestroyMonPicSprite(gTasks[taskId].tMonSpriteId);
        FreeAndDestroyTrainerPicSprite(gTasks[taskId].tTrainerSpriteId);
        switch (sPokedexView->screenSwitchState)
        {
        default:
        case 1:
            gTasks[taskId].func = Task_LoadInfoScreen;
            break;
        case 2:
            gTasks[taskId].func = Task_LoadCryScreen;
            break;
        case 3:
            gTasks[taskId].func = Task_LoadDataScreen;
            break;
        }
    }
}

#define tDataPageTurned data[6]
#define tDataMovesetScroll data[7]
#define tScrollArrowId data[8]
#define tMonMovesetSize data[9]
#define tSpecies data[10]

static void Task_LoadDataScreen(u8 taskId)
{
    switch (gMain.state)
    {
    default:
    case 0:
        if (!gPaletteFade.active)
        {
            gPokedexVBlankCB = gMain.vblankCallback;
            SetVBlankCallback(NULL);
            ResetOtherVideoRegisters(DISPCNT_BG1_ON);
			sPokedexView->currentPage = PAGE_DATA;
			sPokedexView->selectedScreen = DATA_SCREEN;
			gTasks[taskId].tSpecies = NationalPokedexNumToSpecies_HandleForms(sPokedexListItem->dexNum);
            gMain.state = 1;
        }
        break;
    case 1:
        DecompressAndLoadBgGfxUsingHeap(3, gPokedexMenu_Gfx, 0x2000, 0, 0);
        CopyToBgTilemapBuffer(3, gPokedexDataScreen_Tilemap, 0, 0);
        FillWindowPixelBuffer(WIN_INFO, PIXEL_FILL(0));
        PutWindowTilemap(WIN_INFO);
        gMain.state++;
        break;
    case 2:
        LoadScreenSelectBarSubmenu(0xD);
        HighlightSubmenuScreenSelectBarItem(3, 0xD);
		LoadPokedexBgPalette(sPokedexView->isSearchResults);
        gMain.state++;
        break;
    case 3:
        {
			u32 i;
			const struct LevelUpMove *learnset = GetSpeciesLevelUpLearnset(gTasks[taskId].tSpecies);
			// put the size of the moveset in movesetSize
			for (i = 0; learnset[i].move != LEVEL_UP_MOVE_END; i++) {}
			gTasks[taskId].tMonMovesetSize = i;
			DataScreenPrintLabels();
			DataScreenPrintData(gTasks[taskId].tSpecies);
            gMain.state++;
        }
        break;
    case 4:
        ResetPaletteFade();
        gMain.state++;
        break;
    case 5:
		gTasks[taskId].tMonSpriteId = CreateMonSpriteFromNationalDexNumber(SpeciesToNationalPokedexNum(gTasks[taskId].tSpecies), MON_PAGE_X + 8, MON_PAGE_Y, 0);
		gSprites[gTasks[taskId].tMonSpriteId].oam.priority = 0;
        gMain.state++;
        break;
    case 6:
        CopyWindowToVram(WIN_INFO, COPYWIN_FULL);
        CopyBgTilemapBufferToVram(1);
        CopyBgTilemapBufferToVram(2);
        CopyBgTilemapBufferToVram(3);
        gMain.state++;
        break;
    case 7:
        BeginNormalPaletteFade(PALETTES_ALL & ~(0x14), 0, 0x10, 0, RGB_BLACK);
        SetVBlankCallback(gPokedexVBlankCB);
        gMain.state++;
        break;
    case 8:
        SetGpuReg(REG_OFFSET_BLDCNT, 0);
        SetGpuReg(REG_OFFSET_BLDALPHA, 0);
        SetGpuReg(REG_OFFSET_BLDY, 0);
        SetGpuReg(REG_OFFSET_DISPCNT, DISPCNT_OBJ_1D_MAP | DISPCNT_OBJ_ON);
        HideBg(0);
        ShowBg(1);
        ShowBg(2);
        ShowBg(3);
        gMain.state++;
        break;
    case 9:
        if (!gPaletteFade.active)
        {
			sPokedexView->screenSwitchState = 0;
            gMain.state = 0;
			gTasks[taskId].tDataPageTurned = FALSE;
			gTasks[taskId].tDataMovesetScroll = 0;
            gTasks[taskId].func = Task_HandleDataScreenInput;
        }
        break;
    }
}

static const struct ScrollArrowsTemplate sScrollArrowsTemplate_PokedexDataScreen = {2, 184, 36, 3, 184, 96, 0, 6, 1, 1, 0};

#define DATA_SCREEN_TOP_LABELS_Y 	25
#define DATA_SCREEN_BOTTOM_LABELS_Y 89
#define DATA_SCREEN_STATS_LABEL_X 	136
#define DATA_SCREEN_EVS_LABEL_X 	97
#define DATA_SCREEN_EVOS_LABEL_X 	104

#define DATA_SCREEN_LEFT_STATS_X 100
#define DATA_SCREEN_RIGHT_STATS_X 164
#define DATA_SCREEN_TOP_STATS_Y 39
#define DATA_SCREEN_MID_STATS_Y DATA_SCREEN_TOP_STATS_Y + 13
#define DATA_SCREEN_BOT_STATS_Y DATA_SCREEN_MID_STATS_Y + 13
#define DATA_SCREEN_EVS_DATA_X 100

#define DATA_SCREEN_EVO_TEXT_X 20
#define DATA_SCREEN_EVO_TEXT_FIRST_LINE_Y 104
#define DATA_SCREEN_EVO_TEXT_Y_DIFF 16 // if you do 10, you can fit 3 lines. don't really need 3 lines though.

// page 2
#define DATA_SCREEN_LVL_MOVE_LABEL_X 155
#define DATA_SCREEN_LVL_MOVE_LABEL_Y 25
#define DATA_SCREEN_EGG_LABEL_X 200
#define DATA_SCREEN_EGG_LABEL_Y 97
#define DATA_SCREEN_ABILITY_LABEL_X 32
#define DATA_SCREEN_HIDDEN_LABEL_X 97
#define DATA_SCREEN_ABILS_LABEL_Y 89

#define DATA_SCREEN_MOVES_X 156
#define DATA_SCREEN_MOVES_STARTING_Y 39
#define DATA_SCREEN_MOVES_Y_DIFF 13
#define DATA_SCREEN_MOVES_LEVEL_X 140

#define DATA_SCREEN_EGG_X 196
#define DATA_SCREEN_EGG_Y 110
#define DATA_SCREEN_EGG_Y_DIFF 12

#define DATA_SCREEN_ABILITY_X 12
#define DATA_SCREEN_HIDDEN_X 100
#define DATA_SCREEN_ABIL_Y 104
#define DATA_SCREEN_ABIL_Y_DIFF 16

#define DATA_SCREEN_FOOTER_Y 145

#define NUM_MOVES_DISPLAY 4

static void Task_HandleDataScreenInput(u8 taskId)
{
    if (JOY_NEW(B_BUTTON))
    {
		BeginNormalPaletteFade(PALETTES_ALL & ~(0x14), 0, 0, 0x10, RGB_BLACK);
		sPokedexView->screenSwitchState = 1;
		gTasks[taskId].func = Task_SwitchScreensFromDataScreen;
		PlaySE(SE_PC_OFF);
    }
    else if (JOY_NEW(DPAD_LEFT))
    {
        BeginNormalPaletteFade(PALETTES_ALL & ~(0x14), 0, 0, 0x10, RGB_BLACK);
        sPokedexView->screenSwitchState = 2;
        gTasks[taskId].func = Task_SwitchScreensFromDataScreen;
        PlaySE(SE_DEX_PAGE);
	}
	else if ((JOY_NEW(R_BUTTON)) || (JOY_NEW(L_BUTTON)))
	{
		if (gTasks[taskId].tDataPageTurned)
		{
			CopyToBgTilemapBuffer(3, gPokedexDataScreen_Tilemap, 0, 0);
			FillWindowPixelBuffer(WIN_INFO, PIXEL_FILL(0));
			PutWindowTilemap(WIN_INFO);
			DataScreenPrintLabels();
			DataScreenPrintData(gTasks[taskId].tSpecies);
			CopyWindowToVram(WIN_INFO, COPYWIN_FULL);
			CopyBgTilemapBufferToVram(3);
			PlaySE(SE_DEX_PAGE);	
			gTasks[taskId].tDataPageTurned = FALSE;
			gTasks[taskId].tDataMovesetScroll = 0;
			RemoveScrollIndicatorArrowPair(gTasks[taskId].tScrollArrowId);
		}
		else
		{
			CopyToBgTilemapBuffer(3, gPokedexDataScreenPage2_Tilemap, 0, 0);
			FillWindowPixelBuffer(WIN_INFO, PIXEL_FILL(0));
			PutWindowTilemap(WIN_INFO);
			DataScreenPrintPage2Labels();
			DataScreenPrintPage2Data(gTasks[taskId].tSpecies);
			DataScreenPrintLevelUpMoves(gTasks[taskId].tSpecies, gTasks[taskId].tDataMovesetScroll, gTasks[taskId].tMonMovesetSize);
			CopyWindowToVram(WIN_INFO, COPYWIN_FULL);
			CopyBgTilemapBufferToVram(3);
			PlaySE(SE_DEX_PAGE);
			gTasks[taskId].tDataPageTurned = TRUE;
			gTempScrollArrowTemplate = sScrollArrowsTemplate_PokedexDataScreen; 
			gTempScrollArrowTemplate.fullyDownThreshold = (gTasks[taskId].tMonMovesetSize - NUM_MOVES_DISPLAY) * (gTasks[taskId].tMonMovesetSize - NUM_MOVES_DISPLAY > 0);
			gTasks[taskId].tScrollArrowId = AddScrollIndicatorArrowPair(&gTempScrollArrowTemplate, (u16 *) &gTasks[taskId].tDataMovesetScroll);
		}
	}
	else if ((JOY_NEW(DPAD_DOWN)) && gTasks[taskId].tDataPageTurned && (gTasks[taskId].tMonMovesetSize - NUM_MOVES_DISPLAY > gTasks[taskId].tDataMovesetScroll))
	{
		gTasks[taskId].tDataMovesetScroll++;
		FillWindowPixelRect(WIN_INFO, PIXEL_FILL(0), 136, 40, 96, 56);
		DataScreenPrintLevelUpMoves(gTasks[taskId].tSpecies, gTasks[taskId].tDataMovesetScroll, gTasks[taskId].tMonMovesetSize);
		CopyWindowToVram(WIN_INFO, COPYWIN_FULL);
	}
	else if ((JOY_NEW(DPAD_UP)) && gTasks[taskId].tDataPageTurned && (0 < gTasks[taskId].tDataMovesetScroll))
	{
		gTasks[taskId].tDataMovesetScroll--;
		FillWindowPixelRect(WIN_INFO, PIXEL_FILL(0), 136, 40, 96, 56);
		DataScreenPrintLevelUpMoves(gTasks[taskId].tSpecies, gTasks[taskId].tDataMovesetScroll, gTasks[taskId].tMonMovesetSize);
		CopyWindowToVram(WIN_INFO, COPYWIN_FULL);
	}
}

static void Task_SwitchScreensFromDataScreen(u8 taskId)
{
    if (!gPaletteFade.active)
    {
        FreeAndDestroyMonPicSprite(gTasks[taskId].tMonSpriteId);
        switch (sPokedexView->screenSwitchState)
        {
        default:
        case 1:
            gTasks[taskId].func = Task_LoadInfoScreen;
            break;
        case 2:
            gTasks[taskId].func = Task_LoadSizeScreen;
            break;
        }
    }
}

void DataScreenPrintLabels(void)
{	
	PrintInfoScreenTextSmall(gText_BaseStats, DATA_SCREEN_STATS_LABEL_X, DATA_SCREEN_TOP_LABELS_Y);
	PrintInfoScreenTextSmall(gText_Evolutions, DATA_SCREEN_EVOS_LABEL_X, DATA_SCREEN_BOTTOM_LABELS_Y);
	
	PrintInfoScreenTextSmall(gText_HP4, DATA_SCREEN_LEFT_STATS_X, DATA_SCREEN_TOP_STATS_Y);
	PrintInfoScreenTextSmall(gText_AttackShort, DATA_SCREEN_LEFT_STATS_X, DATA_SCREEN_MID_STATS_Y);
	PrintInfoScreenTextSmall(gText_DefenseShort, DATA_SCREEN_LEFT_STATS_X, DATA_SCREEN_BOT_STATS_Y);
	PrintInfoScreenTextSmall(gText_SpAtkShort, DATA_SCREEN_RIGHT_STATS_X, DATA_SCREEN_TOP_STATS_Y);
	PrintInfoScreenTextSmall(gText_SpDefShort, DATA_SCREEN_RIGHT_STATS_X, DATA_SCREEN_MID_STATS_Y);
	PrintInfoScreenTextSmall(gText_SpeedShort, DATA_SCREEN_RIGHT_STATS_X, DATA_SCREEN_BOT_STATS_Y);
}

void DataScreenPrintData(u16 species)
{
	u8 stringBuffer[32];
	bool32 printedCompletionText = FALSE;
	
	if (GetSetPokedexFlag(SpeciesToNationalPokedexNum(species), FLAG_GET_STUDIED))
	{
		PrintInfoScreenTextSmall(gText_DataComplete, GetStringCenterAlignXOffset(FONT_SMALL, gText_DataComplete, 239), DATA_SCREEN_FOOTER_Y);
		printedCompletionText = TRUE;
	}
	
	if (GetSetPokedexFlag(SpeciesToNationalPokedexNum(species), FLAG_GET_CAUGHT))
	{
		StringCopy(stringBuffer, gTypesInfo[gSpeciesInfo[species].types[0]].name);
		if (gSpeciesInfo[species].types[0] != gSpeciesInfo[species].types[1])
		{
			StringAppend(stringBuffer, gText_Slash);
			StringAppend(stringBuffer, gTypesInfo[gSpeciesInfo[species].types[1]].name);
		}
		PrintInfoScreenTextSmall(stringBuffer, GetStringCenterAlignXOffset(FONT_SMALL, stringBuffer, 112), DATA_SCREEN_BOTTOM_LABELS_Y - 2);
		
		DataScreenPrintEvolutionMethods(species); // If not studied, only prints method, not param or target species
		DataScreenPrintNumEvos(species);
		
		if (!printedCompletionText)
		{
			PrintInfoScreenTextSmall(gText_DataIncompleteCaught, GetStringCenterAlignXOffset(FONT_SMALL, gText_DataIncompleteCaught, 239), DATA_SCREEN_FOOTER_Y);
			printedCompletionText = TRUE;
		}
	}
	else
	{
		PrintInfoScreenTextSmall(gText_Unknown, DATA_SCREEN_EVO_TEXT_X, DATA_SCREEN_EVO_TEXT_FIRST_LINE_Y);
		PrintInfoScreenTextSmall(gText_ThreeMarks, GetStringCenterAlignXOffset(FONT_SMALL, gText_ThreeMarks, 112), DATA_SCREEN_BOTTOM_LABELS_Y - 2);
		PrintInfoScreenTextSmall(gText_QuestionMark, 162, DATA_SCREEN_BOTTOM_LABELS_Y);
		
	}
	
	DataScreenPrintBaseStatsLeft(species);
	DataScreenPrintBaseStatsRight(species);
	
	if (!printedCompletionText)
	{
		PrintInfoScreenTextSmall(gText_DataIncompleteSeen, GetStringCenterAlignXOffset(FONT_SMALL, gText_DataIncompleteSeen, 239), DATA_SCREEN_FOOTER_Y);
		printedCompletionText = TRUE;
	}
}

static const u8 sDataScreen_SingleDot[] = _("{SMALL_DOT}");
static const u8 sDataScreen_EmptyDot[] = _("{SMALL_EMPTY_DOT}");

// Prints a series of dots corresponding roughly to the range of the species's base stat. Each dot represents roughly 20 points, but 1 dot is 30.
// The number of dots is the floor of the stat. So 4 dots means the stat's value  is between 90 and 110.
// If over 150, all dots are filled and the overflow changes to red.
// If over 250, all dots are colored gold.
static void PrintBaseStatDots(u32 baseStat, u32 baseX, u32 baseY, u16 species) 
{
	u32 consideringStat = baseStat;
	u32 dotsPrinted = 0;
	u8 color[3];
	
	// If not caught, print 6 empty dots and "??" as the number, then exit.
	if (!GetSetPokedexFlag(SpeciesToNationalPokedexNum(species), FLAG_GET_CAUGHT))
	{
		color[0] = TEXT_COLOR_TRANSPARENT;
		color[1] = TEXT_DYNAMIC_COLOR_6;
		color[2] = TEXT_COLOR_LIGHT_GRAY;		
		while (dotsPrinted < 6)
		{
			AddTextPrinterParameterized4(0, FONT_SMALL, baseX + (dotsPrinted * 5), baseY,
				0, 0, color, TEXT_SKIP_DRAW, sDataScreen_EmptyDot);
			dotsPrinted++;
		}
		
		PrintInfoScreenTextSmall(gText_TwoMarks , baseX + 30 + 1, baseY + 1);
		
		return;
	}
	
	if (consideringStat > 250)
	{
		color[0] = TEXT_COLOR_TRANSPARENT;
		color[1] = TEXT_DYNAMIC_COLOR_5;
		color[2] = TEXT_DYNAMIC_COLOR_1;

		while (dotsPrinted < 6)
		{
			AddTextPrinterParameterized4(0, FONT_SMALL, baseX + (dotsPrinted * 5), baseY,
				0, 0, color, TEXT_SKIP_DRAW, sDataScreen_SingleDot);
			dotsPrinted++;
		}
	}
	else if (consideringStat >= 150)
	{
		color[0] = TEXT_COLOR_TRANSPARENT;
		color[1] = TEXT_COLOR_LIGHT_BLUE;
		color[2] = TEXT_COLOR_BLUE;
		
		while (consideringStat >= 150 && dotsPrinted < 6)
		{
			AddTextPrinterParameterized4(0, FONT_SMALL, baseX + (dotsPrinted * 5), baseY,
				0, 0, color, TEXT_SKIP_DRAW, sDataScreen_SingleDot);
			dotsPrinted++;
			consideringStat -= 20;
		}
		
		color[0] = TEXT_COLOR_TRANSPARENT;
		color[1] = TEXT_DYNAMIC_COLOR_6;
		color[2] = TEXT_COLOR_LIGHT_GRAY;

		while (dotsPrinted < 6)
		{
			AddTextPrinterParameterized4(0, FONT_SMALL, baseX + (dotsPrinted * 5), baseY,
				0, 0, color, TEXT_SKIP_DRAW, sDataScreen_SingleDot);
			dotsPrinted++;
		}
	}
	else
	{
		color[0] = TEXT_COLOR_TRANSPARENT;
		color[1] = TEXT_DYNAMIC_COLOR_6;
		color[2] = TEXT_COLOR_LIGHT_GRAY;

		while (consideringStat >= 30 && dotsPrinted < 6)
		{
			AddTextPrinterParameterized4(0, FONT_SMALL, baseX + (dotsPrinted * 5), baseY,
				0, 0, color, TEXT_SKIP_DRAW, sDataScreen_SingleDot);
			dotsPrinted++;
			consideringStat -= 20;
		}
		
		while (dotsPrinted < 6)
		{
			AddTextPrinterParameterized4(0, FONT_SMALL, baseX + (dotsPrinted * 5), baseY,
				0, 0, color, TEXT_SKIP_DRAW, sDataScreen_EmptyDot);
			dotsPrinted++;
		}
		
	}
	
	// Only print the real value if studied.
	if (GetSetPokedexFlag(SpeciesToNationalPokedexNum(species), FLAG_GET_STUDIED))
	{
		u8 statBuffer[8];
		
		ConvertIntToDecimalStringN(statBuffer, baseStat, STR_CONV_MODE_LEFT_ALIGN, 3);
		PrintInfoScreenTextSmall(statBuffer , baseX + 30 + 1, baseY + 1);
	}
}

static void DataScreenPrintBaseStatsLeft(u16 species)
{
	u32 i;

	for (i = 0; i < 3; i++)
	{
		PrintBaseStatDots(*(&gSpeciesInfo[species].baseHP + i), DATA_SCREEN_LEFT_STATS_X + 16, DATA_SCREEN_TOP_STATS_Y + (13 * i), species);
	}
	
}

static void DataScreenPrintBaseStatsRight(u16 species)
{
	PrintBaseStatDots(gSpeciesInfo[species].baseSpAttack, DATA_SCREEN_RIGHT_STATS_X + 20, DATA_SCREEN_TOP_STATS_Y, species);
	PrintBaseStatDots(gSpeciesInfo[species].baseSpDefense, DATA_SCREEN_RIGHT_STATS_X + 20, DATA_SCREEN_MID_STATS_Y, species);
	PrintBaseStatDots(gSpeciesInfo[species].baseSpeed, DATA_SCREEN_RIGHT_STATS_X + 20, DATA_SCREEN_BOT_STATS_Y, species);
}

static void DataScreenPrintEvolutionMethods(u16 species)
{
	u32 numEvos;
	const struct Evolution *evolutions = GetSpeciesEvolutions(species);
	
	for (numEvos = 0; numEvos < 12; numEvos++) // arbitrary number of evos
	{
		if (evolutions == NULL || evolutions[numEvos].method == 0 || evolutions[numEvos].method == EVOLUTIONS_END)
			break;
	}
	
	if (numEvos == 0)
	{
		PrintInfoScreenTextSmall(gText_None, DATA_SCREEN_EVO_TEXT_X, DATA_SCREEN_EVO_TEXT_FIRST_LINE_Y);
	}
	else if (numEvos > 2)
		DataScreenHandleSpecialEvoText(species);
	else
		DataScreenPrintMonEvoMethods(species, numEvos);
}

static void DataScreenHandleSpecialEvoText(u16 species)
{
	switch (species)
	{
		case SPECIES_EEVEE:
			PrintInfoScreenTextSmall(gText_EeveeEvoText, DATA_SCREEN_EVO_TEXT_X, DATA_SCREEN_EVO_TEXT_FIRST_LINE_Y);
			break;
		case SPECIES_TYROGUE:
			PrintInfoScreenTextSmall(gText_TyrogueEvoText, DATA_SCREEN_EVO_TEXT_X, DATA_SCREEN_EVO_TEXT_FIRST_LINE_Y);
			break;
		case SPECIES_ELEMPTY:
			PrintInfoScreenTextSmall(gText_ElemptyEvoText, DATA_SCREEN_EVO_TEXT_X, DATA_SCREEN_EVO_TEXT_FIRST_LINE_Y);
			break;
		default:
			PrintInfoScreenTextSmall(gText_Unknown, DATA_SCREEN_EVO_TEXT_X, DATA_SCREEN_EVO_TEXT_FIRST_LINE_Y);
			break;
	}
}

static const u8 sEvoTextPlaceholder[] = _("{DYNAMIC 0}: {DYNAMIC 1}{DYNAMIC 2}{DYNAMIC 3}");

// TODO: Fix this up for Expansion evo methods
static void DataScreenPrintMonEvoMethods(u16 species, u32 numEvos)
{
	u8 *monNameBuffer = Alloc(POKEMON_NAME_LENGTH + 1);
	u32 i;
	const struct Evolution *evolutions = GetSpeciesEvolutions(species);
				
	for (i = 0; i < numEvos; i++) // param, method, targetSpecies
	{
		if (GetSetPokedexFlag(SpeciesToNationalPokedexNum(species), FLAG_GET_STUDIED))
			StringCopy(monNameBuffer, GetSpeciesName(evolutions[i].targetSpecies));
		else
			StringCopy(monNameBuffer, GetSpeciesName(SPECIES_NONE));
		StringCopy(gStringVar2, gText_Space);
		StringCopy(gStringVar3, gText_Space);

		switch (evolutions[i].method)
		{
			case EVO_FRIENDSHIP:			// Pokémon levels up with friendship ≥ 220
				StringCopy(gStringVar1, gText_EvoMethodFriendship);
				break;
			case EVO_FRIENDSHIP_DAY:		// Pokémon levels up during the day with friendship ≥ 220
				StringCopy(gStringVar1, gText_EvoMethodFriendship);
				StringCopy(gStringVar2, gText_EvoMethodFriendshipDay);
				break;
			case EVO_FRIENDSHIP_NIGHT:		// Pokémon levels up at night with friendship ≥ 220
				StringCopy(gStringVar1, gText_EvoMethodFriendship);
				StringCopy(gStringVar2, gText_EvoMethodFriendshipNight);
				break;
			case EVO_LEVEL:					// Pokémon reaches the specified level
				StringCopy(gStringVar1, gText_EvoMethodLevel);
				if (GetSetPokedexFlag(SpeciesToNationalPokedexNum(species), FLAG_GET_STUDIED))
					ConvertIntToDecimalStringN(gStringVar2, evolutions[i].param, STR_CONV_MODE_LEFT_ALIGN, 3);
				else
					StringCopy(gStringVar2, gText_ThreeMarks);
				break;
			case EVO_TRADE:					// Pokémon is traded
				StringCopy(gStringVar1, gText_EvoMethodTrade);
				break;
			case EVO_TRADE_ITEM:			// Pokémon is traded while it's holding the specified item
				StringCopy(gStringVar1, gText_EvoMethodTradeItem);
				if (GetSetPokedexFlag(SpeciesToNationalPokedexNum(species), FLAG_GET_STUDIED))
					StringCopy(gStringVar2, gItemsInfo[evolutions[i].param].name);
				else
					StringCopy(gStringVar2, gText_ThreeMarks);
				break;
			case EVO_ITEM:					// specified item is used on Pokémon
				StringCopy(gStringVar1, gText_EvoMethodItem);
				if (GetSetPokedexFlag(SpeciesToNationalPokedexNum(species), FLAG_GET_STUDIED))
					StringCopy(gStringVar2, gItemsInfo[evolutions[i].param].name);
				else
					StringCopy(gStringVar2, gText_ThreeMarks);
				break;
			case EVO_LEVEL_ATK_GT_DEF:		// Pokémon reaches the specified level with attack > defense
				StringCopy(gStringVar1, gText_EvoMethodStatDependent);
				if (GetSetPokedexFlag(SpeciesToNationalPokedexNum(species), FLAG_GET_STUDIED))
					ConvertIntToDecimalStringN(gStringVar2, evolutions[i].param, STR_CONV_MODE_LEFT_ALIGN, 3);
				else
					StringCopy(gStringVar2, gText_ThreeMarks);
				StringCopy(gStringVar3, gText_EvoMethodStatAtk);
				break;
			case EVO_LEVEL_ATK_EQ_DEF:		// Pokémon reaches the specified level with attack = defense
				StringCopy(gStringVar1, gText_EvoMethodStatDependent);
				if (GetSetPokedexFlag(SpeciesToNationalPokedexNum(species), FLAG_GET_STUDIED))
					ConvertIntToDecimalStringN(gStringVar2, evolutions[i].param, STR_CONV_MODE_LEFT_ALIGN, 3);
				else
					StringCopy(gStringVar2, gText_ThreeMarks);
				StringCopy(gStringVar3, gText_EvoMethodStatEqual);
				break;
			case EVO_LEVEL_ATK_LT_DEF:		// Pokémon reaches the specified level with attack < defense
				StringCopy(gStringVar1, gText_EvoMethodStatDependent);
				if (GetSetPokedexFlag(SpeciesToNationalPokedexNum(species), FLAG_GET_STUDIED))
					ConvertIntToDecimalStringN(gStringVar2, evolutions[i].param, STR_CONV_MODE_LEFT_ALIGN, 3);
				else
					StringCopy(gStringVar2, gText_ThreeMarks);
				StringCopy(gStringVar3, gText_EvoMethodStatDef);
				break;
			case EVO_LEVEL_SILCOON:			// Pokémon reaches the specified level with a Silcoon personality value
			case EVO_LEVEL_CASCOON:			// Pokémon reaches the specified level with a Cascoon personality value
				StringCopy(gStringVar1, gText_EvoMethodSilcoonCascoon);
				if (GetSetPokedexFlag(SpeciesToNationalPokedexNum(species), FLAG_GET_STUDIED))
					ConvertIntToDecimalStringN(gStringVar2, evolutions[i].param, STR_CONV_MODE_LEFT_ALIGN, 3);
				else
					StringCopy(gStringVar2, gText_ThreeMarks);
				break;
			case EVO_LEVEL_NINJASK:			// Pokémon reaches the specified level (special value for Ninjask)
				StringCopy(gStringVar1, gText_EvoMethodLevel);
				if (GetSetPokedexFlag(SpeciesToNationalPokedexNum(species), FLAG_GET_STUDIED))
					ConvertIntToDecimalStringN(gStringVar2, evolutions[i].param, STR_CONV_MODE_LEFT_ALIGN, 3);
				else
					StringCopy(gStringVar2, gText_ThreeMarks);
				break;
			case EVO_LEVEL_SHEDINJA:		// Pokémon reaches the specified level (special value for Shedinja)
				StringCopy(gStringVar1, gText_EvoMethodShedinja);
				break;
			case EVO_BEAUTY:				// Pokémon levels up with beauty ≥ specified value
				StringCopy(gStringVar1, gText_EvoMethodBeauty);
				break;
			case EVO_MOVE:					// Pokemon levels up while knowing specified move
				StringCopy(gStringVar1, gText_EvoMethodMove);
				if (GetSetPokedexFlag(SpeciesToNationalPokedexNum(species), FLAG_GET_STUDIED))
					StringCopy(gStringVar2, GetMoveName(evolutions[i].param));
				else
					StringCopy(gStringVar2, gText_ThreeMarks);
				break;
			case EVO_RELATIVE_TO_MET:
			{
				u32 ceiling = evolutions[i].param & 0xFF;
				u32 difference = (evolutions[i].param & 0xFF00) >> 8;
				u8 *diffBuffer = Alloc(4);
				
				StringCopy(gStringVar1, gText_EvoMethodRelative1);
				StringCopy(gStringVar2, gText_EvoMethodRelative2);
				if (GetSetPokedexFlag(SpeciesToNationalPokedexNum(species), FLAG_GET_STUDIED))
				{
					ConvertIntToDecimalStringN(diffBuffer, difference, STR_CONV_MODE_LEFT_ALIGN, 2);
					StringAppend(gStringVar1, diffBuffer);
					
					ConvertIntToDecimalStringN(gStringVar3, ceiling, STR_CONV_MODE_LEFT_ALIGN, 2);
					
					Free(diffBuffer);
				}
				else
				{
					StringAppend(gStringVar1, gText_ThreeMarks);
					StringCopy(gStringVar3, gText_ThreeMarks);
				}
				break;
			}
		}

		DynamicPlaceholderTextUtil_Reset();
		DynamicPlaceholderTextUtil_SetPlaceholderPtr(0, monNameBuffer);
		DynamicPlaceholderTextUtil_SetPlaceholderPtr(1, gStringVar1);
		DynamicPlaceholderTextUtil_SetPlaceholderPtr(2, gStringVar2);
		DynamicPlaceholderTextUtil_SetPlaceholderPtr(3, gStringVar3);
		DynamicPlaceholderTextUtil_ExpandPlaceholders(gStringVar4, sEvoTextPlaceholder);
		
		PrintInfoScreenTextSmall(gStringVar4, DATA_SCREEN_EVO_TEXT_X, DATA_SCREEN_EVO_TEXT_FIRST_LINE_Y + (i * DATA_SCREEN_EVO_TEXT_Y_DIFF));
	}
	
	Free(monNameBuffer);	
}

static void DataScreenPrintNumEvos(u16 species)
{
	u8 string[8];
	u32 i;
	const struct Evolution *evolutions = GetSpeciesEvolutions(species);
	
	for (i = 0; i < 12; i++)
	{
		if (evolutions == NULL || evolutions[i].method == 0 || evolutions[i].method == EVOLUTIONS_END)
			break;
	}
	
	ConvertIntToDecimalStringN(string, i, STR_CONV_MODE_LEADING_ZEROS, 1);
	PrintInfoScreenTextSmall(string, 162, DATA_SCREEN_BOTTOM_LABELS_Y);
}

static const u8 * const sEVStatNames[NUM_STATS] =
{
    [STAT_HP]      = gText_HP4,
    [STAT_ATK]     = gText_AttackShort,
    [STAT_DEF]     = gText_DefenseShort,
    [STAT_SPEED]   = gText_SpeedShort,
    [STAT_SPATK]   = gText_SpAtkShort,
    [STAT_SPDEF]   = gText_SpDefShort,
};

static void DataScreenPrintEVYield(u16 species)
{
	u32 bestEV = STAT_HP;
	u32 bestVal = gSpeciesInfo[species].evYield_HP;
	u32 secondBestEV = STAT_HP;
	u32 secondBestVal = gSpeciesInfo[species].evYield_HP;
	u8 stringBuffer[8];
	
	// Find highest EV yield stat.
	// This is inefficient. I don't know how to optimize it.
	// If there was a way to loop across struct members, then...?
	if (gSpeciesInfo[species].evYield_Attack > bestVal)
	{
		bestVal = gSpeciesInfo[species].evYield_Attack;
		bestEV = STAT_ATK;
	}
	
	if (gSpeciesInfo[species].evYield_Defense > bestVal)
	{
		bestVal = gSpeciesInfo[species].evYield_Defense;
		bestEV = STAT_DEF;
	}
	
	if (gSpeciesInfo[species].evYield_SpAttack > bestVal)
	{
		bestVal = gSpeciesInfo[species].evYield_SpAttack;
		bestEV = STAT_SPATK;
	}
	
	if (gSpeciesInfo[species].evYield_SpDefense > bestVal)
	{
		bestVal = gSpeciesInfo[species].evYield_SpDefense;
		bestEV = STAT_SPDEF;
	}
	
	if (gSpeciesInfo[species].evYield_Speed > bestVal)
	{
		bestVal = gSpeciesInfo[species].evYield_Speed;
		bestEV = STAT_SPEED;
	}
	
	// Resets secondBestVal if it's the same as bestVal.
	secondBestVal *= (bestEV != secondBestEV);
	
	// Find second-best EV yield. Will not find anything if only giving one stat.
	// this probably doesn't work if one mon gave 1 in 3 different stats, but i probably won't do that
	if (gSpeciesInfo[species].evYield_Attack >= secondBestVal && bestEV != STAT_ATK)
	{
		secondBestVal = gSpeciesInfo[species].evYield_Attack;
		secondBestEV = STAT_ATK;
	}
	
	if (gSpeciesInfo[species].evYield_Defense >= secondBestVal && bestEV != STAT_DEF)
	{
		secondBestVal = gSpeciesInfo[species].evYield_Defense;
		secondBestEV = STAT_DEF;
	}
	
	if (gSpeciesInfo[species].evYield_SpAttack >= secondBestVal && bestEV != STAT_SPATK)
	{
		secondBestVal = gSpeciesInfo[species].evYield_SpAttack;
		secondBestEV = STAT_SPATK;
	}
	
	if (gSpeciesInfo[species].evYield_SpDefense >= secondBestVal && bestEV != STAT_SPDEF)
	{
		secondBestVal = gSpeciesInfo[species].evYield_SpDefense;
		secondBestEV = STAT_SPDEF;
	}
	
	if (gSpeciesInfo[species].evYield_Speed >= secondBestVal && bestEV != STAT_SPEED)
	{
		secondBestVal = gSpeciesInfo[species].evYield_Speed;
		secondBestEV = STAT_SPEED;
	}
	
	// Print best and second-best EV yields.
	if (secondBestVal > 0)
	{
		StringCopy(stringBuffer, sEVStatNames[secondBestEV]);

		do {
			StringAppend(stringBuffer, gText_UpArrow);
			secondBestVal--;
		} while (secondBestVal > 0);
		
		PrintInfoScreenTextSmall(stringBuffer, DATA_SCREEN_EVS_DATA_X, DATA_SCREEN_MOVES_STARTING_Y + 26);
	}
	
	if (bestVal > 0)
	{
		StringCopy(stringBuffer, sEVStatNames[bestEV]);
		PrintInfoScreenTextSmall(stringBuffer, DATA_SCREEN_EVS_DATA_X, DATA_SCREEN_MOVES_STARTING_Y);
		
		StringCopy(stringBuffer, gText_UpArrow);
		bestVal--;

		while (bestVal > 0) {
			StringAppend(stringBuffer, gText_UpArrow);
			bestVal--;
		}
		
		PrintInfoScreenTextSmall(stringBuffer, DATA_SCREEN_EVS_DATA_X, DATA_SCREEN_MOVES_STARTING_Y + 11);
		
	}
	else
	{
		PrintInfoScreenTextSmall(gText_None, DATA_SCREEN_EVS_DATA_X, DATA_SCREEN_MOVES_STARTING_Y);
	}
}

static void DataScreenPrintPage2Labels(void)
{
	PrintInfoScreenTextSmall(gText_Breed,			DATA_SCREEN_EGG_LABEL_X,		DATA_SCREEN_EGG_LABEL_Y);
	PrintInfoScreenTextSmall(gText_Ability,			DATA_SCREEN_ABILITY_LABEL_X,	DATA_SCREEN_ABILS_LABEL_Y);
	PrintInfoScreenTextSmall(gText_HiddenAbility,	DATA_SCREEN_HIDDEN_LABEL_X,		DATA_SCREEN_ABILS_LABEL_Y);
	PrintInfoScreenTextSmall(gText_LevelUpMoves,	DATA_SCREEN_LVL_MOVE_LABEL_X,	DATA_SCREEN_LVL_MOVE_LABEL_Y);
	PrintInfoScreenTextSmall(gText_Effort, DATA_SCREEN_EVS_LABEL_X, DATA_SCREEN_TOP_LABELS_Y);
}

static void DataScreenPrintPage2Data(u16 species)
{
	bool32 printedCompletionText = FALSE;
	
	if (GetSetPokedexFlag(SpeciesToNationalPokedexNum(species), FLAG_GET_STUDIED))
	{
		DataScreenPrintHiddenAbilities(species);
		DataScreenPrintEggGroups(species);
		PrintInfoScreenTextSmall(gText_DataComplete, GetStringCenterAlignXOffset(FONT_SMALL, gText_DataComplete, 239), DATA_SCREEN_FOOTER_Y);
		printedCompletionText = TRUE;
	}
	else
	{
		PrintInfoScreenTextSmall(gText_Unknown, DATA_SCREEN_HIDDEN_X, DATA_SCREEN_ABIL_Y);
		PrintInfoScreenTextSmall(gText_ThreeMarks, DATA_SCREEN_EGG_X, DATA_SCREEN_EGG_Y);
	}

	if (GetSetPokedexFlag(SpeciesToNationalPokedexNum(species), FLAG_GET_CAUGHT))
	{
		DataScreenPrintAbilities(species);
		if (!printedCompletionText)
		{
			PrintInfoScreenTextSmall(gText_DataIncompleteCaught, GetStringCenterAlignXOffset(FONT_SMALL, gText_DataIncompleteCaught, 239), DATA_SCREEN_FOOTER_Y);
			printedCompletionText = TRUE;
		}
	}
	else
		PrintInfoScreenTextSmall(gText_Unknown, DATA_SCREEN_ABILITY_X, DATA_SCREEN_ABIL_Y);
	
	// Level up move printing is handled outside this function, in Task_DataScreenHandleInput
	
	DataScreenPrintEVYield(species);
	
	if (!printedCompletionText)
	{
		PrintInfoScreenTextSmall(gText_DataIncompleteSeen, GetStringCenterAlignXOffset(FONT_SMALL, gText_DataIncompleteSeen, 239), DATA_SCREEN_FOOTER_Y);
		printedCompletionText = TRUE;
	}
}

static void DataScreenPrintAbilities(u16 species)
{
	u32 firstAbility = gSpeciesInfo[species].abilities[0];
	u32 secondAbility = gSpeciesInfo[species].abilities[1];
	
	PrintInfoScreenTextSmall(gAbilitiesInfo[firstAbility].name, DATA_SCREEN_ABILITY_X, DATA_SCREEN_ABIL_Y);
	if (secondAbility)
		PrintInfoScreenTextSmall(gAbilitiesInfo[secondAbility].name, DATA_SCREEN_ABILITY_X, DATA_SCREEN_ABIL_Y + DATA_SCREEN_ABIL_Y_DIFF);
}

static void DataScreenPrintHiddenAbilities(u16 species)
{
	u32 firstAbility = gSpeciesInfo[species].abilities[2];
	u32 secondAbility = gSpeciesInfo[species].abilities[3];
	
	PrintInfoScreenTextSmall(gAbilitiesInfo[firstAbility].name, DATA_SCREEN_HIDDEN_X, DATA_SCREEN_ABIL_Y);
	if (secondAbility != firstAbility)
		PrintInfoScreenTextSmall(gAbilitiesInfo[secondAbility].name, DATA_SCREEN_HIDDEN_X, DATA_SCREEN_ABIL_Y + DATA_SCREEN_ABIL_Y_DIFF);

}

static const u8 * const sEggGroupNames[EGG_GROUP_NO_EGGS_DISCOVERED + 1] =
{
    [EGG_GROUP_MONSTER]      	= gText_EggGroupMonster,
	[EGG_GROUP_WATER_1]			= gText_EggGroupWater1,
	[EGG_GROUP_BUG]				= gText_EggGroupBug,
	[EGG_GROUP_FLYING]			= gText_EggGroupFlying,
	[EGG_GROUP_FIELD]			= gText_EggGroupField,
	[EGG_GROUP_FAIRY]			= gText_EggGroupFairy,
	[EGG_GROUP_GRASS]			= gText_EggGroupGrass,
	[EGG_GROUP_HUMAN_LIKE]		= gText_EggGroupHumanLike,
	[EGG_GROUP_WATER_3]			= gText_EggGroupWater3,
	[EGG_GROUP_MINERAL]			= gText_EggGroupMineral,
	[EGG_GROUP_AMORPHOUS]		= gText_EggGroupAmorphous,
	[EGG_GROUP_WATER_2]			= gText_EggGroupWater2,
	[EGG_GROUP_DITTO]			= gText_EggGroupDitto,
	[EGG_GROUP_DRAGON]			= gText_EggGroupDragon,
	[EGG_GROUP_NO_EGGS_DISCOVERED] 	= gText_EggGroupUndiscovered,
};

static void DataScreenPrintEggGroups(u16 species)
{
	u32 firstEggGroup = gSpeciesInfo[species].eggGroups[0];
	u32 secondEggGroup = gSpeciesInfo[species].eggGroups[1];
	
	PrintInfoScreenTextSmall(sEggGroupNames[firstEggGroup], DATA_SCREEN_EGG_X, DATA_SCREEN_EGG_Y);
	if (secondEggGroup != firstEggGroup)
		PrintInfoScreenTextSmall(sEggGroupNames[secondEggGroup], DATA_SCREEN_EGG_X, DATA_SCREEN_EGG_Y + DATA_SCREEN_EGG_Y_DIFF);

}

static void DataScreenPrintLevelUpMoves(u16 species, u32 scrollOffset, u32 movesetSize)
{
	u32 level;
	u32 i;
	u8 levelBuff[8];
	const struct LevelUpMove *learnset = GetSpeciesLevelUpLearnset(species);

	// print full moveset if caught.
	if (sPokedexListItem->owned)
	{
		for (i = 0; i < NUM_MOVES_DISPLAY && (i + scrollOffset) < movesetSize; i++)
		{
			level = learnset[i + scrollOffset].level;
			if (level)
				ConvertIntToDecimalStringN(&levelBuff[0], level, STR_CONV_MODE_RIGHT_ALIGN, 2);
			else
				StringCopy(&levelBuff[0], gText_UpArrow);
			PrintInfoScreenTextSmall(GetMoveName(learnset[i + scrollOffset].move), DATA_SCREEN_MOVES_X, DATA_SCREEN_MOVES_STARTING_Y + (DATA_SCREEN_MOVES_Y_DIFF * i));
			PrintInfoScreenTextSmall(levelBuff, DATA_SCREEN_MOVES_LEVEL_X, DATA_SCREEN_MOVES_STARTING_Y + (DATA_SCREEN_MOVES_Y_DIFF * i));
		}
	} // print half moveset if only seen.
	else
	{
		for (i = 0; i < NUM_MOVES_DISPLAY && (i + scrollOffset) < movesetSize / 2; i++)
		{
			PrintInfoScreenTextSmall(GetMoveName(learnset[i + scrollOffset].move), DATA_SCREEN_MOVES_X, DATA_SCREEN_MOVES_STARTING_Y + (DATA_SCREEN_MOVES_Y_DIFF * i));
			PrintInfoScreenTextSmall(gText_TwoMarks, DATA_SCREEN_MOVES_LEVEL_X, DATA_SCREEN_MOVES_STARTING_Y + (DATA_SCREEN_MOVES_Y_DIFF * i));
		}
		
		for (; i < NUM_MOVES_DISPLAY && (i + scrollOffset) < movesetSize; i++)
		{
			PrintInfoScreenTextSmall(gText_ThreeMarks, DATA_SCREEN_MOVES_X, DATA_SCREEN_MOVES_STARTING_Y + (DATA_SCREEN_MOVES_Y_DIFF * i));
			PrintInfoScreenTextSmall(gText_TwoMarks, DATA_SCREEN_MOVES_LEVEL_X, DATA_SCREEN_MOVES_STARTING_Y + (DATA_SCREEN_MOVES_Y_DIFF * i));
		}
	}
}

#undef tScrolling
#undef tMonSpriteDone
#undef tBgLoaded
#undef tSkipCry
#undef tMonSpriteId
#undef tTrainerSpriteId
#undef tDataPageTurned
#undef tDataMovesetScroll
#undef tScrollArrowId
#undef tMonMovesetSize
#undef tSpecies

static void LoadScreenSelectBarMain(u16 unused)
{
    CopyToBgTilemapBuffer(1, gPokedexScreenSelectBarMain_Tilemap, 0, 0);
}

static void LoadScreenSelectBarSubmenu(u16 unused)
{
    CopyToBgTilemapBuffer(1, gPokedexScreenSelectBarSubmenu_Tilemap, 0, 0);
}

static void HighlightScreenSelectBarItem(u8 selectedScreen, u16 unused)
{
    u8 i;
    u8 j;
    u16 *ptr = GetBgTilemapBuffer(1);

    for (i = 0; i < SCREEN_COUNT; i++)
    {
        u8 row = (i * 5) + 1; 
        u16 newPalette;
		u32 cancelIconSpace = 4;

        do
        {
            newPalette = 0x4000;
            if (i == selectedScreen)
                newPalette = 0x2000;
			cancelIconSpace *= (i == CANCEL_SCREEN);
        } while (0);

        for (j = 0; j < (5 + cancelIconSpace); j++)
        {
            ptr[row + j] = (ptr[row + j] % 0x1000) | newPalette;
            ptr[row + j + 0x20] = (ptr[row + j + 0x20] % 0x1000) | newPalette;
        }
    }
    CopyBgTilemapBufferToVram(1);
}

static void HighlightSubmenuScreenSelectBarItem(u8 a, u16 b)
{
    u8 i;
    u8 j;
    u16 *ptr = GetBgTilemapBuffer(1);

    for (i = 0; i < 4; i++)
    {
        u8 row = i * 5 + 1;
        u32 newPalette;
		u32 cancelIconSpace = 4;

        do
        {
            if (i == a || i == CANCEL_SCREEN)
                newPalette = 0x2000;
            else
                newPalette = 0x4000;
			cancelIconSpace *= (i == CANCEL_SCREEN);
        } while (0);

        for (j = 0; j < (5 + cancelIconSpace); j++)
        {
            ptr[row + j] = (ptr[row + j] % 0x1000) | newPalette;
            ptr[row + j + 0x20] = (ptr[row + j + 0x20] % 0x1000) | newPalette;
        }
    }
    CopyBgTilemapBufferToVram(1);
}

#define tState         data[0]
#define tSpecies        data[1]
#define tPalTimer      data[2]
#define tMonSpriteId   data[3]
#define tShowData	   data[4]
#define tCaughtMonLevel data[5]
#define tIsShiny       data[13]
#define tPersonalityLo data[14]
#define tPersonalityHi data[15]

u8 DisplayCaughtMonDexPage(u16 species, bool32 isShiny, u32 personality, u32 level)
{
    u8 taskId = 0;
    if (POKEDEX_PLUS_HGSS)
        taskId = CreateTask(Task_DisplayCaughtMonDexPageHGSS, 0);
    else
        taskId = CreateTask(Task_DisplayCaughtMonDexPage, 0);

	sFormFixBit = 1; // Stupid hack to fix a stupid hack. The function that allows you to scroll forms when pressing Start will read garbage from catching a new mon without initializing sPokedexView.
    gTasks[taskId].tState = 0; // ^ This bit prevents it from trying to read invalid forms while displaying a new mon's data. TODO: Fix this bullshit I guess.
    gTasks[taskId].tSpecies = species;
	gTasks[taskId].tCaughtMonLevel = level;
    gTasks[taskId].tIsShiny = isShiny;
    gTasks[taskId].tPersonalityLo = personality;
    gTasks[taskId].tPersonalityHi = personality >> 16;
    return taskId;
}

static void Task_DisplayCaughtMonDexPage(u8 taskId)
{
    u8 spriteId;
    u16 species = gTasks[taskId].tSpecies;
    u16 dexNum = SpeciesToNationalPokedexNum(species);

    switch (gTasks[taskId].tState)
    {
    case 0:
    default:
        if (!gPaletteFade.active)
        {
            gPokedexVBlankCB = gMain.vblankCallback;
            SetVBlankCallback(NULL);
            ResetOtherVideoRegisters(DISPCNT_BG0_ON);
            ResetBgsAndClearDma3BusyFlags(0);
            InitBgsFromTemplates(0, sNewEntryInfoScreen_BgTemplate, ARRAY_COUNT(sNewEntryInfoScreen_BgTemplate));
            SetBgTilemapBuffer(3, AllocZeroed(BG_SCREEN_SIZE));
            SetBgTilemapBuffer(2, AllocZeroed(BG_SCREEN_SIZE));
            InitWindows(sNewEntryInfoScreen_WindowTemplates);
            DeactivateAllTextPrinters();
            gTasks[taskId].tState = 1;
        }
        break;
    case 1:
        DecompressAndLoadBgGfxUsingHeap(3, gPokedexMenu_Gfx, 0x2000, 0, 0);
        CopyToBgTilemapBuffer(3, gPokedexInfoScreen_Tilemap, 0, 0);
        FillWindowPixelBuffer(WIN_INFO, PIXEL_FILL(0));
        PutWindowTilemap(WIN_INFO);
        PutWindowTilemap(WIN_FOOTPRINT);	
        DrawFootprint(WIN_FOOTPRINT, dexNum);
        CopyWindowToVram(WIN_FOOTPRINT, COPYWIN_GFX);
        ResetPaletteFade();
        LoadPokedexBgPalette(FALSE);
        gTasks[taskId].tState++;
        break;
    case 2:
        gTasks[taskId].tState++;
        break;
    case 3:
        PrintMonInfo(dexNum, IsNationalPokedexEnabled(), 1, 1);
        CopyWindowToVram(WIN_INFO, COPYWIN_FULL);
        CopyBgTilemapBufferToVram(2);
        CopyBgTilemapBufferToVram(3);
        gTasks[taskId].tState++;
        break;
    case 4:
        spriteId = CreateMonPicSprite(NationalPokedexNumToSpecies_HandleForms(dexNum), 0, ((u16)gTasks[taskId].tPersonalityHi << 16) | (u16)gTasks[taskId].tPersonalityLo, TRUE, MON_PAGE_X, MON_PAGE_Y, 0, TAG_NONE);
        gSprites[spriteId].oam.priority = 0;
        BeginNormalPaletteFade(PALETTES_ALL, 0, 0x10, 0, RGB_BLACK);
        SetVBlankCallback(gPokedexVBlankCB);
        gTasks[taskId].tMonSpriteId = spriteId;
        gTasks[taskId].tState++;
        break;
    case 5:
        SetGpuReg(REG_OFFSET_BLDCNT, 0);
        SetGpuReg(REG_OFFSET_BLDALPHA, 0);
        SetGpuReg(REG_OFFSET_BLDY, 0);
        SetGpuReg(REG_OFFSET_DISPCNT, DISPCNT_OBJ_1D_MAP | DISPCNT_OBJ_ON);
        ShowBg(2);
        ShowBg(3);
        gTasks[taskId].tState++;
        break;
    case 6:
        if (!gPaletteFade.active)
        {
            PlayCry_Normal(NationalPokedexNumToSpecies_HandleForms(dexNum), 0);
            gTasks[taskId].tPalTimer = 0;
            gTasks[taskId].func = Task_HandleCaughtMonPageInput;
        }
        break;
    }
}

#define CAUGHT_SCREEN_STATS_LEFT_X 12
#define CAUGHT_SCREEN_STATS_RIGHT_X 68
#define CAUGHT_SCREEN_STATS_TOP_Y 115

static void Task_HandleCaughtMonPageInput(u8 taskId)
{
    if (JOY_NEW(A_BUTTON | B_BUTTON))
    {
		if (gTasks[taskId].tShowData) // First A press advances to data screen. Second press closes screen.
		{
			BeginNormalPaletteFade(PALETTES_BG, 0, 0, 16, RGB_BLACK);
			gSprites[gTasks[taskId].tMonSpriteId].callback = SpriteCB_SlideCaughtMonToCenter;
			gTasks[taskId].func = Task_ExitCaughtMonPage;
		}
		else
		{
			u32 species = gTasks[taskId].tSpecies;
			u8 string[8];
			u32 i;
			const struct Evolution *evolutions = GetSpeciesEvolutions(species);
			const struct LevelUpMove *learnset = GetSpeciesLevelUpLearnset(species);
			
			gTasks[taskId].tShowData = TRUE;
			FillWindowPixelRect(WIN_INFO, PIXEL_FILL(0), 0, 56, 240, 104);
			PlaySE(SE_DEX_PAGE);
			
			// Print mon type icons
			ListMenuLoadStdPalAt(BG_PLTT_ID(12), 1);
			PutWindowTilemap(WIN_CAUGHT_TYPES);
			FillWindowPixelBuffer(WIN_CAUGHT_TYPES, PIXEL_FILL(0));
			
			BlitMenuInfoIcon(WIN_CAUGHT_TYPES, gSpeciesInfo[species].types[0] + 1, 0, 2);
			if (gSpeciesInfo[species].types[1] != gSpeciesInfo[species].types[0])
				BlitMenuInfoIcon(WIN_CAUGHT_TYPES, gSpeciesInfo[species].types[1] + 1, 40, 2);
			
			// Print "Evolutions: X"
			for (i = 0; i < 12; i++)
			{
				if (evolutions == NULL || evolutions[i].method == 0 || evolutions[i].method == EVOLUTIONS_END)
					break;
			}
			
			ConvertIntToDecimalStringN(string, i, STR_CONV_MODE_LEADING_ZEROS, 1);
			PrintInfoScreenText(string, 164, 73);
			PrintInfoScreenText(gText_Evolutions, 96, 73);
			
			// Print base stats labels and dots
			PrintInfoScreenText(gText_BaseStats, 0x20, 0x62);
	
			PrintInfoScreenTextSmall(gText_HP4, CAUGHT_SCREEN_STATS_LEFT_X, CAUGHT_SCREEN_STATS_TOP_Y);
			PrintInfoScreenTextSmall(gText_AttackShort, CAUGHT_SCREEN_STATS_LEFT_X, CAUGHT_SCREEN_STATS_TOP_Y + 13);
			PrintInfoScreenTextSmall(gText_DefenseShort, CAUGHT_SCREEN_STATS_LEFT_X, CAUGHT_SCREEN_STATS_TOP_Y + 26);
			PrintInfoScreenTextSmall(gText_SpAtkShort, CAUGHT_SCREEN_STATS_RIGHT_X, CAUGHT_SCREEN_STATS_TOP_Y);
			PrintInfoScreenTextSmall(gText_SpDefShort, CAUGHT_SCREEN_STATS_RIGHT_X, CAUGHT_SCREEN_STATS_TOP_Y + 13);
			PrintInfoScreenTextSmall(gText_SpeedShort, CAUGHT_SCREEN_STATS_RIGHT_X, CAUGHT_SCREEN_STATS_TOP_Y + 26);
			PrintBaseStatDots(gSpeciesInfo[species].baseHP, CAUGHT_SCREEN_STATS_LEFT_X + 20, CAUGHT_SCREEN_STATS_TOP_Y, species);
			PrintBaseStatDots(gSpeciesInfo[species].baseAttack, CAUGHT_SCREEN_STATS_LEFT_X + 20, CAUGHT_SCREEN_STATS_TOP_Y + 13, species);
			PrintBaseStatDots(gSpeciesInfo[species].baseDefense, CAUGHT_SCREEN_STATS_LEFT_X + 20, CAUGHT_SCREEN_STATS_TOP_Y + 26, species);
			PrintBaseStatDots(gSpeciesInfo[species].baseSpAttack, CAUGHT_SCREEN_STATS_RIGHT_X + 20, CAUGHT_SCREEN_STATS_TOP_Y, species);
			PrintBaseStatDots(gSpeciesInfo[species].baseSpDefense, CAUGHT_SCREEN_STATS_RIGHT_X + 20, CAUGHT_SCREEN_STATS_TOP_Y + 13, species);
			PrintBaseStatDots(gSpeciesInfo[species].baseSpeed, CAUGHT_SCREEN_STATS_RIGHT_X + 20, CAUGHT_SCREEN_STATS_TOP_Y + 26, species);
			
			// Print level up move
			PrintInfoScreenTextSmall(gText_NextLearnedMove, 0x80, 0x62);
			
			for (i = 0; learnset[i].move != LEVEL_UP_MOVE_END; i++)
			{
				if (learnset[i].level > gTasks[taskId].tCaughtMonLevel)
					break;
			}
			
			if (learnset[i].move != LEVEL_UP_MOVE_END)
			{
				ConvertIntToDecimalStringN(string, learnset[i].level, STR_CONV_MODE_RIGHT_ALIGN, 2);
				PrintInfoScreenTextSmall(string, 0x80, 0x6C);
				PrintInfoScreenTextSmall(GetMoveName(learnset[i].move), 0x90, 0x6C);
			}
			else
			{
				PrintInfoScreenTextSmall(gText_ThreeDashes, 0x90, 0x6C);
			}
			
			// Print Abilities
			PrintInfoScreenTextSmall(gText_Ability, 0x80, 120);
			
			PrintInfoScreenTextSmall(gAbilitiesInfo[gSpeciesInfo[species].abilities[0]].name, 0x80, 131);
			if (gSpeciesInfo[species].abilities[1])
				PrintInfoScreenTextSmall(gAbilitiesInfo[gSpeciesInfo[species].abilities[0]].name, 0x80, 141);
				
			CopyWindowToVram(WIN_CAUGHT_TYPES, COPYWIN_FULL);
			CopyWindowToVram(WIN_INFO, COPYWIN_GFX);
		}
    }
    // Flicker caught screen color
    else if (++gTasks[taskId].tPalTimer & 16)
    {
        LoadPalette(gPokedexBgHoenn_Pal + 1, BG_PLTT_ID(3) + 1, PLTT_SIZEOF(7));
    }
    else
    {
        LoadPalette(gPokedexCaughtScreen_Pal + 1, BG_PLTT_ID(3) + 1, PLTT_SIZEOF(7));
    }
}

static void Task_ExitCaughtMonPage(u8 taskId)
{
    if (!gPaletteFade.active)
    {
        bool32 isShiny;
        u32 personality;
        u8 paletteNum;
        const u32 *lzPaletteData;
        void *buffer;

        SetGpuReg(REG_OFFSET_DISPCNT, DISPCNT_OBJ_1D_MAP | DISPCNT_OBJ_ON);
        FreeAllWindowBuffers();
        buffer = GetBgTilemapBuffer(2);
        if (buffer)
            Free(buffer);
        buffer = GetBgTilemapBuffer(3);
        if (buffer)
            Free(buffer);

        isShiny = (bool8)gTasks[taskId].tIsShiny;
        personality = ((u16)gTasks[taskId].tPersonalityHi << 16) | (u16)gTasks[taskId].tPersonalityLo;
        paletteNum = gSprites[gTasks[taskId].tMonSpriteId].oam.paletteNum;
        lzPaletteData = GetMonSpritePalFromSpeciesAndPersonality(gTasks[taskId].tSpecies, isShiny, personality);
        LoadCompressedPalette(lzPaletteData, OBJ_PLTT_ID(paletteNum), PLTT_SIZE_4BPP);
        DestroyTask(taskId);
    }
}

static void SpriteCB_SlideCaughtMonToCenter(struct Sprite *sprite)
{
    if (sprite->x < 0x78)
        sprite->x += 2;
    if (sprite->x > 0x78)
        sprite->x -= 2;

    if (sprite->y < 0x50)
        sprite->y += 1;
    if (sprite->y > 0x50)
        sprite->y -= 1;
}

#undef tState
#undef tSpecies
#undef tPalTimer
#undef tMonSpriteId
#undef tOtIdLo
#undef tOtIdHi
#undef tPersonalityLo
#undef tPersonalityHi

// u32 value is re-used, but passed as a bool that's TRUE if national dex is enabled
static void PrintMonInfo(u32 num, u32 value, u32 owned, u32 newEntry)
{
    u8 str[0x10];
    u8 str2[0x30];
    u16 species;
    const u8 *name;
    const u8 *category;
    const u8 *description;
    u8 digitCount = (NATIONAL_DEX_COUNT > 999 && IsNationalPokedexEnabled()) ? 4 : 3;

    if (newEntry)
        PrintInfoScreenText(gText_PokedexRegistration, GetStringCenterAlignXOffset(FONT_NORMAL, gText_PokedexRegistration, 0xF0), 0);
    if (value == 0)
        value = NationalToHoennOrder(num);
    else
        value = num;

    ConvertIntToDecimalStringN(StringCopy(str, gText_NumberClear01), value, STR_CONV_MODE_LEADING_ZEROS, digitCount);
    PrintInfoScreenText(str, 0x60, 0x19);
    species = NationalPokedexNumToSpecies_HandleForms(num);
    if (species)
        name = GetSpeciesName(species);
    else
        name = sText_TenDashes2;
    PrintInfoScreenText(name, 114 + (6 * digitCount), 0x19);

    if (owned)
    {
        CopyMonCategoryText(species, str2);
        category = str2;
    }
    else
    {
        category = gText_5MarksPokemon;
    }
    PrintInfoScreenText(category, 0x64, 0x29);
    PrintMonMeasurements(species,owned);
    if (owned)
        description = GetSpeciesPokedexDescription(species);
    else
        description = sExpandedPlaceholder_PokedexDescription;
    PrintInfoScreenText(description, GetStringCenterAlignXOffset(FONT_NORMAL, description, 0xF0), 0x5F);
}

void PrintMonMeasurements(u16 species, u32 owned)
{
    u32 x = GetMeasurementTextPositions(DEX_HEADER_X);
    u32 yTop = GetMeasurementTextPositions(DEX_Y_TOP);
    u32 yBottom = GetMeasurementTextPositions(DEX_Y_BOTTOM);

    PrintInfoScreenText(gText_HTHeight, x, yTop);
    PrintInfoScreenText(gText_WTWeight, x, yBottom);

    if (owned)
        PrintOwnedMonMeasurements(species);
    else
        PrintUnknownMonMeasurements();
}

static u32 GetMeasurementTextPositions(u32 textElement)
{
    if (!POKEDEX_PLUS_HGSS)
        return textElement;

    switch(textElement)
    {
        case DEX_HEADER_X:
            return (DEX_HEADER_X + DEX_HGSS_HEADER_X_PADDING);
        case DEX_Y_TOP:
            return (DEX_Y_TOP + DEX_HGSS_Y_TOP_PADDING);
        case DEX_Y_BOTTOM:
            return (DEX_Y_BOTTOM + DEX_HGSS_Y_BOTTOM_PADDING);
        default:
        case DEX_MEASUREMENT_X:
            return (DEX_MEASUREMENT_X + DEX_HGSS_MEASUREMENT_X_PADDING);
    }
}

static void PrintUnknownMonMeasurements(void)
{
    u8* heightString = GetUnknownMonHeightString();
    u8* weightString = GetUnknownMonWeightString();

    u32 x = GetMeasurementTextPositions(DEX_MEASUREMENT_X);
    u32 yTop = GetMeasurementTextPositions(DEX_Y_TOP);
    u32 yBottom = GetMeasurementTextPositions(DEX_Y_BOTTOM);

    PrintInfoScreenText(heightString, x, yTop);
    PrintInfoScreenText(weightString, x, yBottom);

    Free(heightString);
    Free(weightString);
}

static u8* GetUnknownMonHeightString(void)
{
    if (UNITS == UNITS_IMPERIAL)
        return ReplaceDecimalSeparator(gText_UnkHeight);
    else
        return ReplaceDecimalSeparator(gText_UnkHeightMetric);
}

static u8* GetUnknownMonWeightString(void)
{
    if (UNITS == UNITS_IMPERIAL)
        return ReplaceDecimalSeparator(gText_UnkWeight);
    else
        return ReplaceDecimalSeparator(gText_UnkWeightMetric);
}

static u8* ReplaceDecimalSeparator(const u8* originalString)
{
    bool32 replaced = FALSE;
    u32 length = StringLength(originalString), i;
    u8* modifiedString = Alloc(WEIGHT_HEIGHT_STR_MEM);

    for (i = 0; i < length; i++)
    {
        if ((originalString[i] != CHAR_PERIOD) || replaced)
        {
            modifiedString[i] = originalString[i];
            continue;
        }

        modifiedString[i] = CHAR_DEC_SEPARATOR;
        replaced = TRUE;
    }
    modifiedString[length] = EOS;
    return modifiedString;
}

static void PrintOwnedMonMeasurements(u16 species)
{
    PrintOwnedMonHeight(species);
    PrintOwnedMonWeight(species);
}

static void PrintOwnedMonHeight(u16 species)
{
    u32 height = GetSpeciesHeight(species);
    u8* heightString;

    u32 x = GetMeasurementTextPositions(DEX_MEASUREMENT_X);
    u32 yTop = GetMeasurementTextPositions(DEX_Y_TOP);

    heightString = ConvertMonHeightToString(height);

    PrintInfoScreenText(heightString, x, yTop);
    Free(heightString);
}

u8* ConvertMonHeightToString(u32 height)
{
    if (UNITS == UNITS_IMPERIAL)
        return ConvertMonHeightToImperialString(height);
    else
        return ConvertMonHeightToMetricString(height);
}

static void PrintOwnedMonWeight(u16 species)
{
    u32 weight = GetSpeciesWeight(species);
    u8* weightString;
    u32 x = GetMeasurementTextPositions(DEX_MEASUREMENT_X);
    u32 yBottom = GetMeasurementTextPositions(DEX_Y_BOTTOM);

    weightString = ConvertMonWeightToString(weight);

    PrintInfoScreenText(weightString, x, yBottom);
    Free(weightString);
}

u8* ConvertMonWeightToString(u32 weight)
{
    if (UNITS == UNITS_IMPERIAL)
        return ConvertMonWeightToImperialString(weight);
    else
        return ConvertMonWeightToMetricString(weight);
}

static u8* ConvertMonHeightToImperialString(u32 height)
{
    u8* heightString = Alloc(WEIGHT_HEIGHT_STR_MEM);
    u32 inches, feet, index = 0;

    inches = (height * 10000) / CM_PER_INCH_FACTOR;
    if (inches % 10 >= 5)
        inches += 10;
    feet = inches / INCHES_IN_FOOT_FACTOR;
    inches = (inches - (feet * INCHES_IN_FOOT_FACTOR)) / 10;

    heightString[index++] = EXT_CTRL_CODE_BEGIN;
    heightString[index++] = EXT_CTRL_CODE_CLEAR_TO;
    if (feet / 10 == 0)
    {
        heightString[index++] = INCHES_IN_ONE_AND_HALF_FOOT;
        heightString[index++] = feet + CHAR_0;
    }
    else
    {
        heightString[index++] = INCHES_IN_FOOT;
        heightString[index++] = feet / 10 + CHAR_0;
        heightString[index++] = (feet % 10) + CHAR_0;
    }
    heightString[index++] = CHAR_SGL_QUOTE_RIGHT;
    heightString[index++] = (inches / 10) + CHAR_0;
    heightString[index++] = (inches % 10) + CHAR_0;
    heightString[index++] = CHAR_DBL_QUOTE_RIGHT;
    heightString[index++] = EOS;

    return heightString;
}

static u8* ConvertMonHeightToMetricString(u32 height)
{
    u32 index = 0;
    u8* heightString = ConvertMeasurementToMetricString(height, &index);

    heightString[index++] = CHAR_m;
    heightString[index++] = EOS;
    return heightString;
}

static u8* ConvertMonWeightToImperialString(u32 weight)
{
    u8* weightString = Alloc(WEIGHT_HEIGHT_STR_MEM);
    bool32 output = FALSE;
    u32 index = 0, lbs = (weight * 100000) / DECAGRAMS_IN_POUND;

    if (lbs % 10u >= 5)
        lbs += 10;

    if ((weightString[index] = (lbs / 100000) + CHAR_0) == CHAR_0 && !output)
    {
        weightString[index++] = CHAR_SPACER;
    }
    else
    {
        output = TRUE;
        index++;
    }

    lbs %= 100000;
    if ((weightString[index] = (lbs / 10000) + CHAR_0) == CHAR_0 && !output)
    {
        weightString[index++] = CHAR_SPACER;
    }
    else
    {
        output = TRUE;
        index++;
    }

    lbs %= 10000;
    if ((weightString[index] = (lbs / 1000) + CHAR_0) == CHAR_0 && !output)
    {
        weightString[index++] = CHAR_SPACER;
    }
    else
    {
        output = TRUE;
        index++;
    }

    lbs %= 1000;
    weightString[index++] = (lbs / 100) + CHAR_0;
    lbs %= 100;
    weightString[index++] = CHAR_DEC_SEPARATOR;
    weightString[index++] = (lbs / 10) + CHAR_0;
    weightString[index++] = CHAR_SPACE;
    weightString[index++] = CHAR_l;
    weightString[index++] = CHAR_b;
    weightString[index++] = CHAR_s;
    weightString[index++] = CHAR_PERIOD;
    weightString[index++] = EOS;

    return weightString;
}

static u8* ConvertMonWeightToMetricString(u32 weight)
{
    u32 index = 0;
    u8* weightString = ConvertMeasurementToMetricString(weight, &index);

    weightString[index++] = CHAR_k;
    weightString[index++] = CHAR_g;
    weightString[index++] = CHAR_PERIOD;
    weightString[index++] = EOS;
    return weightString;
}

static u8* ConvertMeasurementToMetricString(u32 num, u32* index)
{
    u8* string = Alloc(WEIGHT_HEIGHT_STR_MEM);
    bool32 outputted = FALSE;
    u32 result;

    result = num / 1000;
    if (result == 0)
    {
        string[(*index)++] = CHAR_SPACER;
        outputted = FALSE;
    }
    else
    {
        string[(*index)++] = CHAR_0 + result;
        outputted = TRUE;
    }

    result = (num % 1000) / 100;
    if (result == 0 && !outputted)
    {
        string[(*index)++] = CHAR_SPACER;
        outputted = FALSE;
    }
    else
    {
        string[(*index)++] = CHAR_0 + result;
        outputted = TRUE;
    }

    string[(*index)++] = CHAR_0 + ((num % 1000) % 100) / 10;
    string[(*index)++] = CHAR_DEC_SEPARATOR;
    string[(*index)++] = CHAR_0 + ((num % 1000) % 100) % 10;
    string[(*index)++] = CHAR_SPACE;

    return string;
}

s8 GetSetPokedexFlag(u16 nationalDexNo, u8 caseID)
{
    u32 index, bit, mask;
    s8 retVal = 0;

    nationalDexNo--;
    index = nationalDexNo / 8;
    bit = nationalDexNo % 8;
    mask = 1 << bit;

    switch (caseID)
    {
    case FLAG_GET_SEEN:
        retVal = ((gSaveBlock1Ptr->dexSeen[index] & mask) != 0);
        break;
    case FLAG_GET_CAUGHT:
        retVal = ((gSaveBlock1Ptr->dexCaught[index] & mask) != 0);
        break;
	case FLAG_GET_STUDIED:
        retVal = ((gSaveBlock1Ptr->dexStudied[index] & mask) != 0);
        break;
    case FLAG_SET_SEEN:
        gSaveBlock1Ptr->dexSeen[index] |= mask;
        break;
    case FLAG_SET_CAUGHT:
        gSaveBlock1Ptr->dexCaught[index] |= mask;
        break;
    case FLAG_SET_STUDIED:
        gSaveBlock1Ptr->dexStudied[index] |= mask;
        break;
    }

    return retVal;
}

u16 GetNationalPokedexCount(u8 caseID)
{
    u16 count = 0;
    u16 i;

    for (i = 0; i < NATIONAL_DEX_COUNT; i++)
    {
        switch (caseID)
        {
        case FLAG_GET_SEEN:
            if (GetSetPokedexFlag(i + 1, FLAG_GET_SEEN))
                count++;
            break;
        case FLAG_GET_CAUGHT:
            if (GetSetPokedexFlag(i + 1, FLAG_GET_CAUGHT))
                count++;
            break;
        }
    }
	
    return count;
}

u16 GetHoennPokedexCount(u8 caseID)
{
    u16 count = 0;
    u16 i;

    for (i = 0; i < HOENN_DEX_COUNT; i++)
    {
        switch (caseID)
        {
        case FLAG_GET_SEEN:
            if (GetSetPokedexFlag(HoennToNationalOrder(i + 1), FLAG_GET_SEEN))
                count++;
            break;
        case FLAG_GET_CAUGHT:
            if (GetSetPokedexFlag(HoennToNationalOrder(i + 1), FLAG_GET_CAUGHT))
                count++;
            break;
        }
    }
    return count;
}

u16 GetKantoPokedexCount(u8 caseID)
{
    u16 count = 0;
    u16 i;

    for (i = 0; i < KANTO_DEX_COUNT; i++)
    {
        switch (caseID)
        {
        case FLAG_GET_SEEN:
            if (GetSetPokedexFlag(i + 1, FLAG_GET_SEEN))
                count++;
            break;
        case FLAG_GET_CAUGHT:
            if (GetSetPokedexFlag(i + 1, FLAG_GET_CAUGHT))
                count++;
            break;
        }
    }
    return count;
}

bool16 HasAllHoennMons(void)
{
    u32 i, j;

    for (i = 0; i < HOENN_DEX_COUNT; i++)
    {
        j = HoennToNationalOrder(i + 1);
        if (!(gSpeciesInfo[j].isMythical && !gSpeciesInfo[j].dexForceRequired) && !GetSetPokedexFlag(j, FLAG_GET_CAUGHT))
            return FALSE;
    }
    return TRUE;
}

bool8 HasAllKantoMons(void)
{
    u32 i;

    // -1 excludes Mew
    for (i = 0; i < KANTO_DEX_COUNT - 1; i++)
    {
        if (!GetSetPokedexFlag(i + 1, FLAG_GET_CAUGHT))
            return FALSE;
    }
    return TRUE;
}

bool16 HasAllMons(void)
{
    u32 i, j;

    for (i = 1; i < NATIONAL_DEX_COUNT + 1; i++)
    {
        j = NationalPokedexNumToSpecies(i);
        if (!(gSpeciesInfo[j].isMythical && !gSpeciesInfo[j].dexForceRequired) && !GetSetPokedexFlag(j, FLAG_GET_CAUGHT))
            return FALSE;
    }

    return TRUE;
}

static void ResetOtherVideoRegisters(u16 regBits)
{
    if (!(regBits & DISPCNT_BG0_ON))
    {
        ClearGpuRegBits(0, DISPCNT_BG0_ON);
        SetGpuReg(REG_OFFSET_BG0CNT, 0);
        SetGpuReg(REG_OFFSET_BG0HOFS, 0);
        SetGpuReg(REG_OFFSET_BG0VOFS, 0);
    }
    if (!(regBits & DISPCNT_BG1_ON))
    {
        ClearGpuRegBits(0, DISPCNT_BG1_ON);
        SetGpuReg(REG_OFFSET_BG1CNT, 0);
        SetGpuReg(REG_OFFSET_BG1HOFS, 0);
        SetGpuReg(REG_OFFSET_BG1VOFS, 0);
    }
    if (!(regBits & DISPCNT_BG2_ON))
    {
        ClearGpuRegBits(0, DISPCNT_BG2_ON);
        SetGpuReg(REG_OFFSET_BG2CNT, 0);
        SetGpuReg(REG_OFFSET_BG2HOFS, 0);
        SetGpuReg(REG_OFFSET_BG2VOFS, 0);
    }
    if (!(regBits & DISPCNT_BG3_ON))
    {
        ClearGpuRegBits(0, DISPCNT_BG3_ON);
        SetGpuReg(REG_OFFSET_BG3CNT, 0);
        SetGpuReg(REG_OFFSET_BG3HOFS, 0);
        SetGpuReg(REG_OFFSET_BG3VOFS, 0);
    }
    if (!(regBits & DISPCNT_OBJ_ON))
    {
        ClearGpuRegBits(0, DISPCNT_OBJ_ON);
        ResetSpriteData();
        FreeAllSpritePalettes();
        gReservedSpritePaletteCount = 8;
    }
}

static void PrintInfoSubMenuText(u8 windowId, const u8 *str, u8 left, u8 top)
{
    u8 color[3];
    color[0] = TEXT_COLOR_TRANSPARENT;
    color[1] = TEXT_DYNAMIC_COLOR_6;
    color[2] = TEXT_COLOR_LIGHT_GRAY;

    AddTextPrinterParameterized4(windowId, FONT_NORMAL, left, top, 0, 0, color, TEXT_SKIP_DRAW, str);
}

static UNUSED void UnusedPrintNum(u8 windowId, u16 num, u8 left, u8 top)
{
    u8 str[4];

    str[0] = CHAR_0 + num / 100;
    str[1] = CHAR_0 + (num % 100) / 10;
    str[2] = CHAR_0 + (num % 100) % 10;
    str[3] = EOS;
    PrintInfoSubMenuText(windowId, str, left, top);
}

static u8 PrintCryScreenSpeciesName(u8 windowId, u16 num, u8 left, u8 top)
{
    u8 str[POKEMON_NAME_LENGTH + 1];
    u8 i;

    for (i = 0; i < ARRAY_COUNT(str); i++)
        str[i] = EOS;
    num = NationalPokedexNumToSpecies_HandleForms(num);
    switch (num)
    {
    default:
        for (i = 0; GetSpeciesName(num)[i] != EOS && i < POKEMON_NAME_LENGTH; i++)
            str[i] = GetSpeciesName(num)[i];
        break;
    case 0:
        for (i = 0; i < 5; i++)
            str[i] = CHAR_HYPHEN;
        break;
    }
    PrintInfoSubMenuText(windowId, str, left, top);
    return i;
}

static UNUSED void UnusedPrintMonName(u8 windowId, const u8 *name, u8 left, u8 top)
{
    u8 str[POKEMON_NAME_LENGTH + 1];
    u8 i;
    u8 nameLength;

    for (i = 0; i < ARRAY_COUNT(str); i++)
        str[i] = CHAR_SPACE;
    for (nameLength = 0; name[nameLength] != CHAR_SPACE && nameLength < ARRAY_COUNT(str); nameLength++)
        ;
    for (i = 0; i < nameLength; i++)
        str[ARRAY_COUNT(str) - nameLength + i] = name[i];
#ifdef UBFIX
    str[ARRAY_COUNT(str) - 1] = EOS;
#else
    str[ARRAY_COUNT(str)] = EOS;
#endif
    PrintInfoSubMenuText(windowId, str, left, top);
}

// Unused in the English version, used to print height/weight in versions which use metric system.
static UNUSED void PrintDecimalNum(u8 windowId, u16 num, u8 left, u8 top)
{
    u8 str[6];
    bool8 outputted = FALSE;
    u8 result;

    result = num / 1000;
    if (result == 0)
    {
        str[0] = CHAR_SPACER;
        outputted = FALSE;
    }
    else
    {
        str[0] = CHAR_0 + result;
        outputted = TRUE;
    }

    result = (num % 1000) / 100;
    if (result == 0 && !outputted)
    {
        str[1] = CHAR_SPACER;
        outputted = FALSE;
    }
    else
    {
        str[1] = CHAR_0 + result;
        outputted = TRUE;
    }

    str[2] = CHAR_0 + ((num % 1000) % 100) / 10;
    str[3] = CHAR_DEC_SEPARATOR;
    str[4] = CHAR_0 + ((num % 1000) % 100) % 10;
    str[5] = EOS;
    PrintInfoSubMenuText(windowId, str, left, top);
}

// The footprints are drawn on WIN_FOOTPRINT, which uses BG palette 15 (loaded with graphics/text_window/message_box.gbapal)
// The footprint pixels are stored as 1BPP, and set to the below color index in this palette when converted to 4BPP.
#define FOOTPRINT_COLOR_IDX  2

#define NUM_FOOTPRINT_TILES  4

void DrawFootprint(u8 windowId, u16 species)
{
    u8 ALIGNED(4) footprint4bpp[TILE_SIZE_4BPP * NUM_FOOTPRINT_TILES];
    const u8 *footprintGfx = NULL;
    u32 i, j, tileIdx = 0;

#if P_FOOTPRINTS
    footprintGfx = gSpeciesInfo[SanitizeSpeciesId(species)].footprint;
#else
    return;
#endif

    if (footprintGfx != NULL)
    {
        for (i = 0; i < TILE_SIZE_1BPP * NUM_FOOTPRINT_TILES; i++)
        {
            u8 footprint1bpp = footprintGfx[i];

            // Convert the 8 pixels in the above 1BPP byte to 4BPP.
            // Each iteration creates one 4BPP byte (2 pixels),
            // so we need 4 iterations to do all 8 pixels.
            for (j = 0; j < 4; j++)
            {
                u8 tile = 0;
                if (footprint1bpp & (1 << (2 * j)))
                    tile |= FOOTPRINT_COLOR_IDX; // Set pixel
                if (footprint1bpp & (2 << (2 * j)))
                    tile |= FOOTPRINT_COLOR_IDX << 4; // Set pixel
                footprint4bpp[tileIdx] = tile;
                tileIdx++;
            }
        }
    }
    else
    {
        CpuFastFill(0, footprint4bpp, sizeof(footprint4bpp));
    }
    CopyToWindowPixelBuffer(windowId, footprint4bpp, sizeof(footprint4bpp), 0);
}

// Unused Ruby/Sapphire function.
static UNUSED void RS_DrawFootprint(u16 offset, u16 tileNum)
{
    *(u16 *)(VRAM + offset * 0x800 + 0x232) = 0xF000 + tileNum + 0;
    *(u16 *)(VRAM + offset * 0x800 + 0x234) = 0xF000 + tileNum + 1;
    *(u16 *)(VRAM + offset * 0x800 + 0x272) = 0xF000 + tileNum + 2;
    *(u16 *)(VRAM + offset * 0x800 + 0x274) = 0xF000 + tileNum + 3;
}

static u16 GetNextPosition(u8 direction, u16 position, u16 min, u16 max)
{
    switch (direction)
    {
    case 1: // Up/Left
        if (position > min)
            position--;
        break;
    case 0: // Down/Right
        if (position < max)
            position++;
        break;
    case 3: // Up/Left with loop (unused)
        if (position > min)
            position--;
        else
            position = max;
        break;
    case 2: // Down/Right with loop (unused)
        if (position < max)
            position++;
        else
            position = min;
        break;
    }
    return position;
}

// Unown and Spinda use the personality of the first seen individual of that species
// All others use personality 0
static u32 GetPokedexMonPersonality(u16 species)
{
    if (species == SPECIES_UNOWN || species == SPECIES_SPINDA)
    {
        if (species == SPECIES_UNOWN)
            return gSaveBlock2Ptr->pokedex.unownPersonality;
        else
            return gSaveBlock2Ptr->pokedex.spindaPersonality;
    }
    else
    {
        return 0xFF; //Changed from 0 to make it so the Pokédex shows the default mon pics instead of the female versions.
    }
}

u16 CreateMonSpriteFromNationalDexNumber(u16 nationalNum, s16 x, s16 y, u16 paletteSlot)
{
    nationalNum = NationalPokedexNumToSpecies_HandleForms(nationalNum);
    return CreateMonPicSprite(nationalNum, SHINY_ODDS, GetPokedexMonPersonality(nationalNum), TRUE, x, y, paletteSlot, TAG_NONE);
    return CreateMonPicSprite(nationalNum, FALSE, GetPokedexMonPersonality(nationalNum), TRUE, x, y, paletteSlot, TAG_NONE);
}

static u16 GetPokemonScaleFromNationalDexNumber(u16 nationalNum)
{
    nationalNum = NationalPokedexNumToSpecies_HandleForms(nationalNum);
    return gSpeciesInfo[nationalNum].pokemonScale;
}

static u16 GetPokemonOffsetFromNationalDexNumber(u16 nationalNum)
{
    nationalNum = NationalPokedexNumToSpecies_HandleForms(nationalNum);
    return gSpeciesInfo[nationalNum].pokemonOffset;
}

static u16 GetTrainerScaleFromNationalDexNumber(u16 nationalNum)
{
    nationalNum = NationalPokedexNumToSpecies_HandleForms(nationalNum);
    return gSpeciesInfo[nationalNum].trainerScale;
}

static u16 GetTrainerOffsetFromNationalDexNumber(u16 nationalNum)
{
    nationalNum = NationalPokedexNumToSpecies_HandleForms(nationalNum);
    return gSpeciesInfo[nationalNum].trainerOffset;
}

static u16 CreateSizeScreenTrainerPic(u16 species, s16 x, s16 y, s8 paletteSlot)
{
    return CreateTrainerPicSprite(species, TRUE, x, y, paletteSlot, TAG_NONE);
}

static int DoPokedexSearch(u8 dexMode, u8 order, u8 abcGroup, u8 bodyColor, u8 type1, u8 type2)
{
    u16 species;
    u16 i;
    u16 resultsCount;
    u8 types[2];

    CreatePokedexList(dexMode, order);

    for (i = 0, resultsCount = 0; i < NATIONAL_DEX_COUNT; i++)
    {
        if (sPokedexView->pokedexList[i].seen)
        {
            sPokedexView->pokedexList[resultsCount] = sPokedexView->pokedexList[i];
            resultsCount++;
        }
    }
    sPokedexView->pokemonListCount = resultsCount;

    // Search by name
    if (abcGroup != 0xFF)
    {
        for (i = 0, resultsCount = 0; i < sPokedexView->pokemonListCount; i++)
        {
            u8 firstLetter;

            species = NationalPokedexNumToSpecies(sPokedexView->pokedexList[i].dexNum);
            firstLetter = GetSpeciesName(species)[0];
            if (LETTER_IN_RANGE_UPPER(firstLetter, abcGroup) || LETTER_IN_RANGE_LOWER(firstLetter, abcGroup))
            {
                sPokedexView->pokedexList[resultsCount] = sPokedexView->pokedexList[i];
                resultsCount++;
            }
        }
        sPokedexView->pokemonListCount = resultsCount;
    }

    // Search by body color
    if (bodyColor != 0xFF)
    {
        for (i = 0, resultsCount = 0; i < sPokedexView->pokemonListCount; i++)
        {
            species = NationalPokedexNumToSpecies(sPokedexView->pokedexList[i].dexNum);

            if (bodyColor == gSpeciesInfo[species].bodyColor)
            {
                sPokedexView->pokedexList[resultsCount] = sPokedexView->pokedexList[i];
                resultsCount++;
            }
        }
        sPokedexView->pokemonListCount = resultsCount;
    }

    // Search by type
    if (type1 != TYPE_NONE || type2 != TYPE_NONE)
    {
        if (type1 == TYPE_NONE)
        {
            type1 = type2;
            type2 = TYPE_NONE;
        }

        if (type2 == TYPE_NONE)
        {
            for (i = 0, resultsCount = 0; i < sPokedexView->pokemonListCount; i++)
            {
                if (sPokedexView->pokedexList[i].owned)
                {
                    species = NationalPokedexNumToSpecies(sPokedexView->pokedexList[i].dexNum);

                    types[0] = gSpeciesInfo[species].types[0];
                    types[1] = gSpeciesInfo[species].types[1];
                    if (types[0] == type1 || types[1] == type1)
                    {
                        sPokedexView->pokedexList[resultsCount] = sPokedexView->pokedexList[i];
                        resultsCount++;
                    }
                }
            }
        }
        else
        {
            for (i = 0, resultsCount = 0; i < sPokedexView->pokemonListCount; i++)
            {
                if (sPokedexView->pokedexList[i].owned)
                {
                    species = NationalPokedexNumToSpecies(sPokedexView->pokedexList[i].dexNum);

                    types[0] = gSpeciesInfo[species].types[0];
                    types[1] = gSpeciesInfo[species].types[1];
                    if ((types[0] == type1 && types[1] == type2) || (types[0] == type2 && types[1] == type1))
                    {
                        sPokedexView->pokedexList[resultsCount] = sPokedexView->pokedexList[i];
                        resultsCount++;
                    }
                }
            }
        }
        sPokedexView->pokemonListCount = resultsCount;
    }

    if (sPokedexView->pokemonListCount != 0)
    {
        for (i = sPokedexView->pokemonListCount; i < NATIONAL_DEX_COUNT; i++)
        {
            sPokedexView->pokedexList[i].dexNum = 0xFFFF;
            sPokedexView->pokedexList[i].seen = FALSE;
            sPokedexView->pokedexList[i].owned = FALSE;
            sPokedexView->pokedexList[i].studied = FALSE;
        }
    }

    return resultsCount;
}

static u8 LoadSearchMenu(void)
{
    return CreateTask(Task_LoadSearchMenu, 0);
}

static void PrintSearchText(const u8 *str, u32 x, u32 y)
{
    u8 color[3];

    color[0] = TEXT_COLOR_TRANSPARENT;
    color[1] = TEXT_DYNAMIC_COLOR_6;
    color[2] = TEXT_COLOR_DARK_GRAY;
    AddTextPrinterParameterized4(0, FONT_NORMAL, x, y, 0, 0, color, TEXT_SKIP_DRAW, str);
}

static void ClearSearchMenuRect(u32 x, u32 y, u32 width, u32 height)
{
    FillWindowPixelRect(0, PIXEL_FILL(0), x, y, width, height);
}

// Search task data
#define tTopBarItem             data[0]
#define tMenuItem               data[1]
#define tCursorPos_Mode         data[2]
#define tScrollOffset_Mode      data[3]
#define tCursorPos_Order        data[4]
#define tScrollOffset_Order     data[5]
#define tCursorPos_Name         data[6]
#define tScrollOffset_Name      data[7]
#define tCursorPos_Color        data[8]
#define tScrollOffset_Color     data[9]
#define tCursorPos_TypeLeft     data[10]
#define tScrollOffset_TypeLeft  data[11]
#define tCursorPos_TypeRight    data[12]
#define tScrollOffset_TypeRight data[13]
#define tCursorPos              data[14]
#define tScrollOffset           data[15]

static void Task_LoadSearchMenu(u8 taskId)
{
    u16 i;

    switch (gMain.state)
    {
    default:
    case 0:
        if (!gPaletteFade.active)
        {
            sPokedexView->currentPage = PAGE_SEARCH;
            ResetOtherVideoRegisters(0);
            ResetBgsAndClearDma3BusyFlags(0);
            InitBgsFromTemplates(0, sSearchMenu_BgTemplate, ARRAY_COUNT(sSearchMenu_BgTemplate));
            SetBgTilemapBuffer(3, AllocZeroed(BG_SCREEN_SIZE));
            SetBgTilemapBuffer(2, AllocZeroed(BG_SCREEN_SIZE));
            SetBgTilemapBuffer(1, AllocZeroed(BG_SCREEN_SIZE));
            SetBgTilemapBuffer(0, AllocZeroed(BG_SCREEN_SIZE));
            InitWindows(sSearchMenu_WindowTemplate);
            DeactivateAllTextPrinters();
            PutWindowTilemap(0);
            DecompressAndLoadBgGfxUsingHeap(3, gPokedexSearchMenu_Gfx, 0x2000, 0, 0);

            if (!IsNationalPokedexEnabled())
                CopyToBgTilemapBuffer(3, gPokedexSearchMenuHoenn_Tilemap, 0, 0);
            else
                CopyToBgTilemapBuffer(3, gPokedexSearchMenuNational_Tilemap, 0, 0);
            LoadPalette(gPokedexSearchMenu_Pal + 1, BG_PLTT_ID(0) + 1, PLTT_SIZEOF(4 * 16 - 1));
            gMain.state = 1;
        }
        break;
    case 1:
        LoadCompressedSpriteSheet(sInterfaceSpriteSheet);
        LoadSpritePalettes(sInterfaceSpritePalette);
        CreateSearchParameterScrollArrows(taskId);
        for (i = 0; i < NUM_TASK_DATA; i++)
            gTasks[taskId].data[i] = 0;
        SetDefaultSearchModeAndOrder(taskId);
        HighlightSelectedSearchTopBarItem(SEARCH_TOPBAR_SEARCH);
        PrintSelectedSearchParameters(taskId);
        CopyWindowToVram(0, COPYWIN_FULL);
        CopyBgTilemapBufferToVram(1);
        CopyBgTilemapBufferToVram(2);
        CopyBgTilemapBufferToVram(3);
        gMain.state++;
        break;
    case 2:
        BeginNormalPaletteFade(PALETTES_ALL, 0, 16, 0, RGB_BLACK);
        gMain.state++;
        break;
    case 3:
        SetGpuReg(REG_OFFSET_BLDCNT, 0);
        SetGpuReg(REG_OFFSET_BLDALPHA, 0);
        SetGpuReg(REG_OFFSET_BLDY, 0);
        SetGpuReg(REG_OFFSET_DISPCNT, DISPCNT_OBJ_1D_MAP | DISPCNT_OBJ_ON);
        HideBg(0);
        ShowBg(1);
        ShowBg(2);
        ShowBg(3);
        gMain.state++;
        break;
    case 4:
        if (!gPaletteFade.active)
        {
            gTasks[taskId].func = Task_SwitchToSearchMenuTopBar;
            gMain.state = 0;
        }
        break;
    }
}

static void FreeSearchWindowAndBgBuffers(void)
{
    void *tilemapBuffer;

    FreeAllWindowBuffers();
    tilemapBuffer = GetBgTilemapBuffer(0);
    if (tilemapBuffer)
        Free(tilemapBuffer);
    tilemapBuffer = GetBgTilemapBuffer(1);
    if (tilemapBuffer)
        Free(tilemapBuffer);
    tilemapBuffer = GetBgTilemapBuffer(2);
    if (tilemapBuffer)
        Free(tilemapBuffer);
    tilemapBuffer = GetBgTilemapBuffer(3);
    if (tilemapBuffer)
        Free(tilemapBuffer);
}

static void Task_SwitchToSearchMenuTopBar(u8 taskId)
{
    HighlightSelectedSearchTopBarItem(gTasks[taskId].tTopBarItem);
    PrintSelectedSearchParameters(taskId);
    CopyWindowToVram(0, COPYWIN_GFX);
    CopyBgTilemapBufferToVram(3);
    gTasks[taskId].func = Task_HandleSearchTopBarInput;
}

static void Task_HandleSearchTopBarInput(u8 taskId)
{
    if (JOY_NEW(B_BUTTON))
    {
        PlaySE(SE_PC_OFF);
        gTasks[taskId].func = Task_ExitSearch;
        return;
    }
    if (JOY_NEW(A_BUTTON))
    {
        switch (gTasks[taskId].tTopBarItem)
        {
        case SEARCH_TOPBAR_SEARCH:
            PlaySE(SE_PIN);
            gTasks[taskId].tMenuItem = SEARCH_NAME;
            gTasks[taskId].func = Task_SwitchToSearchMenu;
            break;
        case SEARCH_TOPBAR_SHIFT:
            PlaySE(SE_PIN);
            gTasks[taskId].tMenuItem = SEARCH_ORDER;
            gTasks[taskId].func = Task_SwitchToSearchMenu;
            break;
        case SEARCH_TOPBAR_CANCEL:
            PlaySE(SE_PC_OFF);
            gTasks[taskId].func = Task_ExitSearch;
            break;
        }
        return;
    }
    if (JOY_NEW(DPAD_LEFT) && gTasks[taskId].tTopBarItem > SEARCH_TOPBAR_SEARCH)
    {
        PlaySE(SE_DEX_PAGE);
        gTasks[taskId].tTopBarItem--;
        HighlightSelectedSearchTopBarItem(gTasks[taskId].tTopBarItem);
        CopyWindowToVram(0, COPYWIN_GFX);
        CopyBgTilemapBufferToVram(3);
    }
    if (JOY_NEW(DPAD_RIGHT) && gTasks[taskId].tTopBarItem < SEARCH_TOPBAR_CANCEL)
    {
        PlaySE(SE_DEX_PAGE);
        gTasks[taskId].tTopBarItem++;
        HighlightSelectedSearchTopBarItem(gTasks[taskId].tTopBarItem);
        CopyWindowToVram(0, COPYWIN_GFX);
        CopyBgTilemapBufferToVram(3);
    }
}

static void Task_SwitchToSearchMenu(u8 taskId)
{
    HighlightSelectedSearchMenuItem(gTasks[taskId].tTopBarItem, gTasks[taskId].tMenuItem);
    PrintSelectedSearchParameters(taskId);
    CopyWindowToVram(0, COPYWIN_GFX);
    CopyBgTilemapBufferToVram(3);
    gTasks[taskId].func = Task_HandleSearchMenuInput;
}

// Input for main search menu
static void Task_HandleSearchMenuInput(u8 taskId)
{
    const u8 (*movementMap)[4];

    if (gTasks[taskId].tTopBarItem != SEARCH_TOPBAR_SEARCH)
    {
        if (!IsNationalPokedexEnabled())
            movementMap = sSearchMovementMap_ShiftHoennDex;
        else
            movementMap = sSearchMovementMap_ShiftNatDex;
    }
    else
    {
        if (!IsNationalPokedexEnabled())
            movementMap = sSearchMovementMap_SearchHoennDex;
        else
            movementMap = sSearchMovementMap_SearchNatDex;
    }

    if (JOY_NEW(B_BUTTON))
    {
        PlaySE(SE_BALL);
        SetDefaultSearchModeAndOrder(taskId);
        gTasks[taskId].func = Task_SwitchToSearchMenuTopBar;
        return;
    }
    if (JOY_NEW(A_BUTTON))
    {
        if (gTasks[taskId].tMenuItem == SEARCH_OK)
        {
            if (gTasks[taskId].tTopBarItem != SEARCH_TOPBAR_SEARCH)
            {
                sPokeBallRotation = POKEBALL_ROTATION_TOP;
                sPokedexView->pokeBallRotationBackup = POKEBALL_ROTATION_TOP;
                sLastSelectedPokemon = 0;
                sPokedexView->selectedPokemonBackup = 0;
                gSaveBlock2Ptr->pokedex.mode = GetSearchModeSelection(taskId, SEARCH_MODE);
                if (!IsNationalPokedexEnabled())
                    gSaveBlock2Ptr->pokedex.mode = DEX_MODE_HOENN;
                sPokedexView->dexModeBackup = gSaveBlock2Ptr->pokedex.mode;
                gSaveBlock2Ptr->pokedex.order = GetSearchModeSelection(taskId, SEARCH_ORDER);
                sPokedexView->dexOrderBackup = gSaveBlock2Ptr->pokedex.order;
                PlaySE(SE_PC_OFF);
                gTasks[taskId].func = Task_ExitSearch;
            }
            else
            {
                EraseAndPrintSearchTextBox(gText_SearchingPleaseWait);
                gTasks[taskId].func = Task_StartPokedexSearch;
                PlaySE(SE_DEX_SEARCH);
                CopyWindowToVram(0, COPYWIN_GFX);
            }
        }
        else
        {
            PlaySE(SE_PIN);
            gTasks[taskId].func = Task_SelectSearchMenuItem;
        }
        return;
    }

    if (JOY_NEW(DPAD_LEFT) && movementMap[gTasks[taskId].tMenuItem][0] != 0xFF)
    {
        PlaySE(SE_SELECT);
        gTasks[taskId].tMenuItem = movementMap[gTasks[taskId].tMenuItem][0];
        HighlightSelectedSearchMenuItem(gTasks[taskId].tTopBarItem, gTasks[taskId].tMenuItem);
        CopyWindowToVram(0, COPYWIN_GFX);
        CopyBgTilemapBufferToVram(3);
    }
    if (JOY_NEW(DPAD_RIGHT) && movementMap[gTasks[taskId].tMenuItem][1] != 0xFF)
    {
        PlaySE(SE_SELECT);
        gTasks[taskId].tMenuItem = movementMap[gTasks[taskId].tMenuItem][1];
        HighlightSelectedSearchMenuItem(gTasks[taskId].tTopBarItem, gTasks[taskId].tMenuItem);
        CopyWindowToVram(0, COPYWIN_GFX);
        CopyBgTilemapBufferToVram(3);
    }
    if (JOY_NEW(DPAD_UP) && movementMap[gTasks[taskId].tMenuItem][2] != 0xFF)
    {
        PlaySE(SE_SELECT);
        gTasks[taskId].tMenuItem = movementMap[gTasks[taskId].tMenuItem][2];
        HighlightSelectedSearchMenuItem(gTasks[taskId].tTopBarItem, gTasks[taskId].tMenuItem);
        CopyWindowToVram(0, COPYWIN_GFX);
        CopyBgTilemapBufferToVram(3);
    }
    if (JOY_NEW(DPAD_DOWN) && movementMap[gTasks[taskId].tMenuItem][3] != 0xFF)
    {
        PlaySE(SE_SELECT);
        gTasks[taskId].tMenuItem = movementMap[gTasks[taskId].tMenuItem][3];
        HighlightSelectedSearchMenuItem(gTasks[taskId].tTopBarItem, gTasks[taskId].tMenuItem);
        CopyWindowToVram(0, COPYWIN_GFX);
        CopyBgTilemapBufferToVram(3);
    }
}

static void Task_StartPokedexSearch(u8 taskId)
{
    u8 dexMode = GetSearchModeSelection(taskId, SEARCH_MODE);
    u8 order = GetSearchModeSelection(taskId, SEARCH_ORDER);
    u8 abcGroup = GetSearchModeSelection(taskId, SEARCH_NAME);
    u8 bodyColor = GetSearchModeSelection(taskId, SEARCH_COLOR);
    u8 type1 = GetSearchModeSelection(taskId, SEARCH_TYPE_LEFT);
    u8 type2 = GetSearchModeSelection(taskId, SEARCH_TYPE_RIGHT);

    DoPokedexSearch(dexMode, order, abcGroup, bodyColor, type1, type2);
    gTasks[taskId].func = Task_WaitAndCompleteSearch;
}

static void Task_WaitAndCompleteSearch(u8 taskId)
{
    if (!IsSEPlaying())
    {
        if (sPokedexView->pokemonListCount != 0)
        {
            PlaySE(SE_SUCCESS);
            EraseAndPrintSearchTextBox(gText_SearchCompleted);
        }
        else
        {
            PlaySE(SE_FAILURE);
            EraseAndPrintSearchTextBox(gText_NoMatchingPkmnWereFound);
        }
        gTasks[taskId].func = Task_SearchCompleteWaitForInput;
        CopyWindowToVram(0, COPYWIN_GFX);
    }
}

static void Task_SearchCompleteWaitForInput(u8 taskId)
{
    if (JOY_NEW(A_BUTTON))
    {
        if (sPokedexView->pokemonListCount != 0)
        {
            // Return to dex list and show search results
            sPokedexView->screenSwitchState = 1;
            sPokedexView->dexMode = GetSearchModeSelection(taskId, SEARCH_MODE);
            sPokedexView->dexOrder = GetSearchModeSelection(taskId, SEARCH_ORDER);
            gTasks[taskId].func = Task_ExitSearch;
            PlaySE(SE_PC_OFF);
        }
        else
        {
            gTasks[taskId].func = Task_SwitchToSearchMenu;
            PlaySE(SE_BALL);
        }
    }
}

static void Task_SelectSearchMenuItem(u8 taskId)
{
    u8 menuItem;
    s16 *cursorPos;
    s16 *scrollOffset;

    DrawOrEraseSearchParameterBox(FALSE);
    menuItem = gTasks[taskId].tMenuItem;
    cursorPos = &gTasks[taskId].data[sSearchOptions[menuItem].taskDataCursorPos];
    scrollOffset = &gTasks[taskId].data[sSearchOptions[menuItem].taskDataScrollOffset];
    gTasks[taskId].tCursorPos = *cursorPos;
    gTasks[taskId].tScrollOffset = *scrollOffset;
    PrintSearchParameterText(taskId);
    PrintSelectorArrow(*cursorPos);
    gTasks[taskId].func = Task_HandleSearchParameterInput;
    CopyWindowToVram(0, COPYWIN_GFX);
    CopyBgTilemapBufferToVram(3);
}

// Input for scrolling parameter box in right column
static void Task_HandleSearchParameterInput(u8 taskId)
{
    u8 menuItem;
    const struct SearchOptionText *texts;
    s16 *cursorPos;
    s16 *scrollOffset;
    u16 maxOption;
    bool8 moved;

    menuItem = gTasks[taskId].tMenuItem;
    texts = sSearchOptions[menuItem].texts;
    cursorPos = &gTasks[taskId].data[sSearchOptions[menuItem].taskDataCursorPos];
    scrollOffset = &gTasks[taskId].data[sSearchOptions[menuItem].taskDataScrollOffset];
    maxOption = sSearchOptions[menuItem].numOptions - 1;
    if (JOY_NEW(A_BUTTON))
    {
        PlaySE(SE_PIN);
        ClearSearchParameterBoxText();
        DrawOrEraseSearchParameterBox(TRUE);
        gTasks[taskId].func = Task_SwitchToSearchMenu;
        CopyWindowToVram(0, COPYWIN_GFX);
        CopyBgTilemapBufferToVram(3);
        return;
    }
    if (JOY_NEW(B_BUTTON))
    {
        PlaySE(SE_BALL);
        ClearSearchParameterBoxText();
        DrawOrEraseSearchParameterBox(TRUE);
        *cursorPos = gTasks[taskId].tCursorPos;
        *scrollOffset = gTasks[taskId].tScrollOffset;
        gTasks[taskId].func = Task_SwitchToSearchMenu;
        CopyWindowToVram(0, COPYWIN_GFX);
        CopyBgTilemapBufferToVram(3);
        return;
    }
    moved = FALSE;
    if (JOY_REPEAT(DPAD_UP))
    {
        if (*cursorPos != 0)
        {
            // Move cursor up
            EraseSelectorArrow(*cursorPos);
            (*cursorPos)--;
            PrintSelectorArrow(*cursorPos);
            moved = TRUE;
        }
        else if (*scrollOffset != 0)
        {
            // Scroll up
            (*scrollOffset)--;
            PrintSearchParameterText(taskId);
            PrintSelectorArrow(*cursorPos);
            moved = TRUE;
        }
        if (moved)
        {
            PlaySE(SE_SELECT);
            EraseAndPrintSearchTextBox(texts[*cursorPos + *scrollOffset].description);
            CopyWindowToVram(0, COPYWIN_GFX);
        }
        return;
    }
    if (JOY_REPEAT(DPAD_DOWN))
    {
        if (*cursorPos < MAX_SEARCH_PARAM_CURSOR_POS && *cursorPos < maxOption)
        {
            // Move cursor down
            EraseSelectorArrow(*cursorPos);
            (*cursorPos)++;
            PrintSelectorArrow(*cursorPos);
            moved = TRUE;
        }
        else if (maxOption > MAX_SEARCH_PARAM_CURSOR_POS && *scrollOffset < maxOption - MAX_SEARCH_PARAM_CURSOR_POS)
        {
            // Scroll down
            (*scrollOffset)++;
            PrintSearchParameterText(taskId);
            PrintSelectorArrow(5);
            moved = TRUE;
        }
        if (moved)
        {
            PlaySE(SE_SELECT);
            EraseAndPrintSearchTextBox(texts[*cursorPos + *scrollOffset].description);
            CopyWindowToVram(0, COPYWIN_GFX);
        }
        return;
    }
}

static void Task_ExitSearch(u8 taskId)
{
    BeginNormalPaletteFade(PALETTES_ALL, 0, 0, 16, RGB_BLACK);
    gTasks[taskId].func = Task_ExitSearchWaitForFade;
}

static void Task_ExitSearchWaitForFade(u8 taskId)
{
    if (!gPaletteFade.active)
    {
        FreeSearchWindowAndBgBuffers();
        DestroyTask(taskId);
    }
}

void SetSearchRectHighlight(u8 flags, u8 x, u8 y, u8 width)
{
    u16 i;
    u16 temp; //should be a pointer, but does not match as one
    u32 ptr = (u32)GetBgTilemapBuffer(3); //same as above

    for (i = 0; i < width; i++)
    {
        temp = *(u16 *)(ptr + (y + 0) * 64 + (x + i) * 2);
        temp &= 0x0fff;
        temp |= (flags << 12);
        *(u16 *)(ptr + (y + 0) * 64 + (x + i) * 2) = temp;

        temp = *(u16 *)(ptr + (y + 1) * 64 + (x + i) * 2);
        temp &= 0x0fff;
        temp |= (flags << 12);
        *(u16 *)(ptr + (y + 1) * 64 + (x + i) * 2) = temp;
    }
}

#define SEARCH_BG_SEARCH                SEARCH_TOPBAR_SEARCH
#define SEARCH_BG_SHIFT                 SEARCH_TOPBAR_SHIFT
#define SEARCH_BG_CANCEL                SEARCH_TOPBAR_CANCEL
#define SEARCH_BG_NAME                  (SEARCH_NAME + SEARCH_TOPBAR_COUNT)
#define SEARCH_BG_COLOR                 (SEARCH_COLOR + SEARCH_TOPBAR_COUNT)
#define SEARCH_BG_TYPE_SELECTION_LEFT   (SEARCH_TYPE_LEFT + SEARCH_TOPBAR_COUNT)
#define SEARCH_BG_TYPE_SELECTION_RIGHT  (SEARCH_TYPE_RIGHT + SEARCH_TOPBAR_COUNT)
#define SEARCH_BG_ORDER                 (SEARCH_ORDER + SEARCH_TOPBAR_COUNT)
#define SEARCH_BG_MODE                  (SEARCH_MODE + SEARCH_TOPBAR_COUNT)
#define SEARCH_BG_OK                    (SEARCH_OK + SEARCH_TOPBAR_COUNT)
#define SEARCH_BG_TYPE_TITLE            (SEARCH_COUNT + SEARCH_TOPBAR_COUNT)

static void DrawSearchMenuItemBgHighlight(u8 searchBg, bool8 unselected, bool8 disabled)
{
    u8 highlightFlags = (unselected & 1) | ((disabled & 1) << 1);

    switch (searchBg)
    {
    case SEARCH_BG_SEARCH:
    case SEARCH_BG_SHIFT:
    case SEARCH_BG_CANCEL:
        SetSearchRectHighlight(highlightFlags, sSearchMenuTopBarItems[searchBg].highlightX, sSearchMenuTopBarItems[searchBg].highlightY, sSearchMenuTopBarItems[searchBg].highlightWidth);
        break;
    case SEARCH_BG_NAME:
    case SEARCH_BG_COLOR:
    case SEARCH_BG_ORDER:
    case SEARCH_BG_MODE:
        SetSearchRectHighlight(highlightFlags, sSearchMenuItems[searchBg - SEARCH_TOPBAR_COUNT].titleBgX, sSearchMenuItems[searchBg - SEARCH_TOPBAR_COUNT].titleBgY, sSearchMenuItems[searchBg - SEARCH_TOPBAR_COUNT].titleBgWidth);
        // fall through, draw selectionBg for above
    case SEARCH_BG_TYPE_SELECTION_LEFT:
    case SEARCH_BG_TYPE_SELECTION_RIGHT:
        SetSearchRectHighlight(highlightFlags, sSearchMenuItems[searchBg - SEARCH_TOPBAR_COUNT].selectionBgX, sSearchMenuItems[searchBg - SEARCH_TOPBAR_COUNT].selectionBgY, sSearchMenuItems[searchBg - SEARCH_TOPBAR_COUNT].selectionBgWidth);
        break;
    case SEARCH_BG_TYPE_TITLE:
        SetSearchRectHighlight(highlightFlags, sSearchMenuItems[SEARCH_TYPE_LEFT].titleBgX, sSearchMenuItems[SEARCH_TYPE_LEFT].titleBgY, sSearchMenuItems[SEARCH_TYPE_LEFT].titleBgWidth);
        break;
    case SEARCH_BG_OK:
        if (!IsNationalPokedexEnabled())
            SetSearchRectHighlight(highlightFlags, sSearchMenuItems[searchBg - SEARCH_TOPBAR_COUNT].titleBgX, sSearchMenuItems[searchBg - SEARCH_TOPBAR_COUNT].titleBgY - 2, sSearchMenuItems[searchBg - SEARCH_TOPBAR_COUNT].titleBgWidth);
        else
            SetSearchRectHighlight(highlightFlags, sSearchMenuItems[searchBg - SEARCH_TOPBAR_COUNT].titleBgX, sSearchMenuItems[searchBg - SEARCH_TOPBAR_COUNT].titleBgY, sSearchMenuItems[searchBg - SEARCH_TOPBAR_COUNT].titleBgWidth);
        break;
    }
}

static void SetInitialSearchMenuBgHighlights(u8 topBarItem)
{
    switch (topBarItem)
    {
    case SEARCH_TOPBAR_SEARCH:
        DrawSearchMenuItemBgHighlight(SEARCH_BG_SEARCH, FALSE, FALSE);
        DrawSearchMenuItemBgHighlight(SEARCH_BG_SHIFT, TRUE, FALSE);
        DrawSearchMenuItemBgHighlight(SEARCH_BG_CANCEL, TRUE, FALSE);
        DrawSearchMenuItemBgHighlight(SEARCH_BG_NAME, TRUE, FALSE);
        DrawSearchMenuItemBgHighlight(SEARCH_BG_COLOR, TRUE, FALSE);
        DrawSearchMenuItemBgHighlight(SEARCH_BG_TYPE_TITLE, TRUE, FALSE);
        DrawSearchMenuItemBgHighlight(SEARCH_BG_TYPE_SELECTION_LEFT, TRUE, FALSE);
        DrawSearchMenuItemBgHighlight(SEARCH_BG_TYPE_SELECTION_RIGHT, TRUE, FALSE);
        DrawSearchMenuItemBgHighlight(SEARCH_BG_ORDER, TRUE, FALSE);
        DrawSearchMenuItemBgHighlight(SEARCH_BG_MODE, TRUE, FALSE);
        DrawSearchMenuItemBgHighlight(SEARCH_BG_OK, TRUE, FALSE);
        break;
    case SEARCH_TOPBAR_SHIFT:
        DrawSearchMenuItemBgHighlight(SEARCH_BG_SEARCH, TRUE, FALSE);
        DrawSearchMenuItemBgHighlight(SEARCH_BG_SHIFT, FALSE, FALSE);
        DrawSearchMenuItemBgHighlight(SEARCH_BG_CANCEL, TRUE, FALSE);
        DrawSearchMenuItemBgHighlight(SEARCH_BG_NAME, TRUE, TRUE);
        DrawSearchMenuItemBgHighlight(SEARCH_BG_COLOR, TRUE, TRUE);
        DrawSearchMenuItemBgHighlight(SEARCH_BG_TYPE_TITLE, TRUE, TRUE);
        DrawSearchMenuItemBgHighlight(SEARCH_BG_TYPE_SELECTION_LEFT, TRUE, TRUE);
        DrawSearchMenuItemBgHighlight(SEARCH_BG_TYPE_SELECTION_RIGHT, TRUE, TRUE);
        DrawSearchMenuItemBgHighlight(SEARCH_BG_ORDER, TRUE, FALSE);
        DrawSearchMenuItemBgHighlight(SEARCH_BG_MODE, TRUE, FALSE);
        DrawSearchMenuItemBgHighlight(SEARCH_BG_OK, TRUE, FALSE);
        break;
    case SEARCH_TOPBAR_CANCEL:
        DrawSearchMenuItemBgHighlight(SEARCH_BG_SEARCH, TRUE, FALSE);
        DrawSearchMenuItemBgHighlight(SEARCH_BG_SHIFT, TRUE, FALSE);
        DrawSearchMenuItemBgHighlight(SEARCH_BG_CANCEL, FALSE, FALSE);
        DrawSearchMenuItemBgHighlight(SEARCH_BG_NAME, TRUE, TRUE);
        DrawSearchMenuItemBgHighlight(SEARCH_BG_COLOR, TRUE, TRUE);
        DrawSearchMenuItemBgHighlight(SEARCH_BG_TYPE_TITLE, TRUE, TRUE);
        DrawSearchMenuItemBgHighlight(SEARCH_BG_TYPE_SELECTION_LEFT, TRUE, TRUE);
        DrawSearchMenuItemBgHighlight(SEARCH_BG_TYPE_SELECTION_RIGHT, TRUE, TRUE);
        DrawSearchMenuItemBgHighlight(SEARCH_BG_ORDER, TRUE, TRUE);
        DrawSearchMenuItemBgHighlight(SEARCH_BG_MODE, TRUE, TRUE);
        DrawSearchMenuItemBgHighlight(SEARCH_BG_OK, TRUE, TRUE);
        break;
    }
}

static void HighlightSelectedSearchTopBarItem(u8 topBarItem)
{
    SetInitialSearchMenuBgHighlights(topBarItem);
    EraseAndPrintSearchTextBox(sSearchMenuTopBarItems[topBarItem].description);
}

static void HighlightSelectedSearchMenuItem(u8 topBarItem, u8 menuItem)
{
    SetInitialSearchMenuBgHighlights(topBarItem);
    switch (menuItem)
    {
    case SEARCH_NAME:
        DrawSearchMenuItemBgHighlight(SEARCH_BG_NAME, FALSE, FALSE);
        break;
    case SEARCH_COLOR:
        DrawSearchMenuItemBgHighlight(SEARCH_BG_COLOR, FALSE, FALSE);
        break;
    case SEARCH_TYPE_LEFT:
        DrawSearchMenuItemBgHighlight(SEARCH_BG_TYPE_TITLE, FALSE, FALSE);
        DrawSearchMenuItemBgHighlight(SEARCH_BG_TYPE_SELECTION_LEFT, FALSE, FALSE);
        break;
    case SEARCH_TYPE_RIGHT:
        DrawSearchMenuItemBgHighlight(SEARCH_BG_TYPE_TITLE, FALSE, FALSE);
        DrawSearchMenuItemBgHighlight(SEARCH_BG_TYPE_SELECTION_RIGHT, FALSE, FALSE);
        break;
    case SEARCH_ORDER:
        DrawSearchMenuItemBgHighlight(SEARCH_BG_ORDER, FALSE, FALSE);
        break;
    case SEARCH_MODE:
        DrawSearchMenuItemBgHighlight(SEARCH_BG_MODE, FALSE, FALSE);
        break;
    case SEARCH_OK:
        DrawSearchMenuItemBgHighlight(SEARCH_BG_OK, FALSE, FALSE);
        break;
    }
    EraseAndPrintSearchTextBox(sSearchMenuItems[menuItem].description);
}

// Prints the currently selected search parameters in the search menu selection boxes
static void PrintSelectedSearchParameters(u8 taskId)
{
    u16 searchParamId;

    ClearSearchMenuRect(40, 16, 96, 80);

    searchParamId = gTasks[taskId].tCursorPos_Name + gTasks[taskId].tScrollOffset_Name;
    PrintSearchText(sDexSearchNameOptions[searchParamId].title, 0x2D, 0x11);

    searchParamId = gTasks[taskId].tCursorPos_Color + gTasks[taskId].tScrollOffset_Color;
    PrintSearchText(sDexSearchColorOptions[searchParamId].title, 0x2D, 0x21);

    searchParamId = gTasks[taskId].tCursorPos_TypeLeft + gTasks[taskId].tScrollOffset_TypeLeft;
    PrintSearchText(sDexSearchTypeOptions[searchParamId].title, 0x2D, 0x31);

    searchParamId = gTasks[taskId].tCursorPos_TypeRight + gTasks[taskId].tScrollOffset_TypeRight;
    PrintSearchText(sDexSearchTypeOptions[searchParamId].title, 0x5D, 0x31);

    searchParamId = gTasks[taskId].tCursorPos_Order + gTasks[taskId].tScrollOffset_Order;
    PrintSearchText(sDexOrderOptions[searchParamId].title, 0x2D, 0x41);

    if (IsNationalPokedexEnabled())
    {
        searchParamId = gTasks[taskId].tCursorPos_Mode + gTasks[taskId].tScrollOffset_Mode;
        PrintSearchText(sDexModeOptions[searchParamId].title, 0x2D, 0x51);
    }
}

static void DrawOrEraseSearchParameterBox(bool8 erase)
{
    u16 i;
    u16 j;
    u16 *ptr = GetBgTilemapBuffer(3);

    if (!erase)
    {
        *(ptr + 0x11) = 0xC0B;
        for (i = 0x12; i < 0x1F; i++)
            *(ptr + i) = 0x80D;
        for (j = 1; j < 13; j++)
        {
            *(ptr + 0x11 + j * 32) = 0x40A;
            for (i = 0x12; i < 0x1F; i++)
                *(ptr + j * 32 + i) = 2;
        }
        *(ptr + 0x1B1) = 0x40B;
        for (i = 0x12; i < 0x1F; i++)
            *(ptr + 0x1A0 + i) = 0xD;
    }
    else
    {
        for (j = 0; j < 14; j++)
        {
            for (i = 0x11; i < 0x1E; i++)
            {
                *(ptr + j * 32 + i) = 0x4F;
            }
        }
    }
}

// Prints the currently viewable search parameter titles in the right-hand text box
// and the currently selected search parameter description in the bottom text box
static void PrintSearchParameterText(u8 taskId)
{
    const struct SearchOptionText *texts = sSearchOptions[gTasks[taskId].tMenuItem].texts;
    const s16 *cursorPos = &gTasks[taskId].data[sSearchOptions[gTasks[taskId].tMenuItem].taskDataCursorPos];
    const s16 *scrollOffset = &gTasks[taskId].data[sSearchOptions[gTasks[taskId].tMenuItem].taskDataScrollOffset];
    u16 i;
    u16 j;

    ClearSearchParameterBoxText();

    for (i = 0, j = *scrollOffset; i < MAX_SEARCH_PARAM_ON_SCREEN && texts[j].title != NULL; i++, j++)
        PrintSearchParameterTitle(i, texts[j].title);

    EraseAndPrintSearchTextBox(texts[*cursorPos + *scrollOffset].description);
}

static u8 GetSearchModeSelection(u8 taskId, u8 option)
{
    const s16 *cursorPos = &gTasks[taskId].data[sSearchOptions[option].taskDataCursorPos];
    const s16 *scrollOffset = &gTasks[taskId].data[sSearchOptions[option].taskDataScrollOffset];
    u16 id = *cursorPos + *scrollOffset;

    switch (option)
    {
    default:
        return 0;
    case SEARCH_MODE:
        return sPokedexModes[id];
    case SEARCH_ORDER:
        return sOrderOptions[id];
    case SEARCH_NAME:
        if (id == 0)
            return 0xFF;
        else
            return id;
    case SEARCH_COLOR:
        if (id == 0)
            return 0xFF;
        else
            return id - 1;
    case SEARCH_TYPE_LEFT:
    case SEARCH_TYPE_RIGHT:
        return sDexSearchTypeIds[id];
    }
}

static void SetDefaultSearchModeAndOrder(u8 taskId)
{
    u16 selected;

    switch (sPokedexView->dexModeBackup)
    {
    default:
    case DEX_MODE_HOENN:
        selected = DEX_MODE_HOENN;
        break;
    case DEX_MODE_NATIONAL:
        selected = DEX_MODE_NATIONAL;
        break;
    }
    gTasks[taskId].tCursorPos_Mode = selected;

    switch (sPokedexView->dexOrderBackup)
    {
    default:
    case ORDER_NUMERICAL:
        selected = ORDER_NUMERICAL;
        break;
    case ORDER_ALPHABETICAL:
        selected = ORDER_ALPHABETICAL;
        break;
    case ORDER_HEAVIEST:
        selected = ORDER_HEAVIEST;
        break;
    case ORDER_LIGHTEST:
        selected = ORDER_LIGHTEST;
        break;
    case ORDER_TALLEST:
        selected = ORDER_TALLEST;
        break;
    case ORDER_SMALLEST:
        selected = ORDER_SMALLEST;
        break;
    }
    gTasks[taskId].tCursorPos_Order = selected;
}

static bool8 SearchParamCantScrollUp(u8 taskId)
{
    u8 menuItem = gTasks[taskId].tMenuItem;
    const s16 *scrollOffset = &gTasks[taskId].data[sSearchOptions[menuItem].taskDataScrollOffset];
    u16 lastOption = sSearchOptions[menuItem].numOptions - 1;

    if (lastOption > MAX_SEARCH_PARAM_CURSOR_POS && *scrollOffset != 0)
        return FALSE;
    else
        return TRUE;
}

static bool8 SearchParamCantScrollDown(u8 taskId)
{
    u8 menuItem = gTasks[taskId].tMenuItem;
    const s16 *scrollOffset = &gTasks[taskId].data[sSearchOptions[menuItem].taskDataScrollOffset];
    u16 lastOption = sSearchOptions[menuItem].numOptions - 1;

    if (lastOption > MAX_SEARCH_PARAM_CURSOR_POS && *scrollOffset < lastOption - MAX_SEARCH_PARAM_CURSOR_POS)
        return FALSE;
    else
        return TRUE;
}

#define sTaskId      data[0]

static void SpriteCB_SearchParameterScrollArrow(struct Sprite *sprite)
{
    if (gTasks[sprite->sTaskId].func == Task_HandleSearchParameterInput)
    {
        u8 val;

        if (sprite->sIsDownArrow)
        {
            if (SearchParamCantScrollDown(sprite->sTaskId))
                sprite->invisible = TRUE;
            else
                sprite->invisible = FALSE;
        }
        else
        {
            if (SearchParamCantScrollUp(sprite->sTaskId))
                sprite->invisible = TRUE;
            else
                sprite->invisible = FALSE;
        }
        val = sprite->data[2] + sprite->sIsDownArrow * 128;
        sprite->y2 = gSineTable[val] / 128;
        sprite->data[2] += 8;
    }
    else
    {
        sprite->invisible = TRUE;
    }
}

static void CreateSearchParameterScrollArrows(u8 taskId)
{
    u8 spriteId;

    spriteId = CreateSprite(&sScrollArrowSpriteTemplate, 184, 4, 0);
    gSprites[spriteId].sTaskId = taskId;
    gSprites[spriteId].sIsDownArrow = FALSE;
    gSprites[spriteId].callback = SpriteCB_SearchParameterScrollArrow;

    spriteId = CreateSprite(&sScrollArrowSpriteTemplate, 184, 108, 0);
    gSprites[spriteId].sTaskId = taskId;
    gSprites[spriteId].sIsDownArrow = TRUE;
    gSprites[spriteId].vFlip = TRUE;
    gSprites[spriteId].callback = SpriteCB_SearchParameterScrollArrow;
}

#undef sTaskId
#undef sIsDownArrow

static void EraseAndPrintSearchTextBox(const u8 *str)
{
    ClearSearchMenuRect(8, 120, 224, 32);
    PrintSearchText(str, 8, 121);
}

static void EraseSelectorArrow(u32 y)
{
    ClearSearchMenuRect(144, y * 16 + 8, 8, 16);
}

static void PrintSelectorArrow(u32 y)
{
    PrintSearchText(gText_SelectorArrow, 144, y * 16 + 9);
}

static void PrintSearchParameterTitle(u32 y, const u8 *str)
{
    PrintSearchText(str, 152, y * 16 + 9);
}

static void ClearSearchParameterBoxText(void)
{
    ClearSearchMenuRect(144, 8, 96, 96);
}

static u16 NationalPokedexNumToSpecies_HandleForms(u16 nationalNum)
{
    if (!nationalNum)
        return 0;

    if (sFormFixBit == 0 && sPokedexView->formSpecies != 0)
        return sPokedexView->formSpecies;
    else
        return NationalPokedexNumToSpecies(nationalNum);
}
