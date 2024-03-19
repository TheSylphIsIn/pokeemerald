#include "global.h"
#include "option_menu.h"
#include "bg.h"
#include "event_data.h"
#include "gpu_regs.h"
#include "international_string_util.h"
#include "main.h"
#include "menu.h"
#include "palette.h"
#include "scanline_effect.h"
#include "sprite.h"
#include "strings.h"
#include "task.h"
#include "text.h"
#include "text_window.h"
#include "window.h"
#include "gba/m4a_internal.h"
#include "constants/rgb.h"

#define tTabNum data[0]
#define tMenuSelection data[1]

#define OPTIONS_PER_TAB 4

#if (DECAP_ENABLED) && (DECAP_MIRRORING) && !(DECAP_OPTION_MENU)
#define AddTextPrinterParameterized3(a, b, c, d, e, f, str) AddTextPrinterParameterized3(a, b, c, d, e, f, MirrorPtr(str))
#define AddTextPrinterParameterized4(a, b, c, d, e, f, g, h, str) AddTextPrinterParameterized4(a, b, c, d, e, f, g, h, MirrorPtr(str))
#endif

enum
{
    WIN_HEADER,
    WIN_OPTIONS,
	WIN_FOOTER
};

enum
{
	TAB_BATTLE,
	TAB_BATTLE2,
	TAB_SPEED,
	TAB_MISC,
	TABS_COUNT
};

// Menu order per tab. For bookkeeping.
enum
{
	MENUITEM_DIFFICULTY,
	MENUITEM_EXPALL,
	MENUITEM_BATTLESTYLE,
	MENUITEM_BATTLEHELP
};

enum
{
	MENUITEM_MSGWAIT,
	MENUITEM_HOTKEYMODE,
	MENUITEM_INTROSLIDE,
	MENUITEM_BATTLESCENE
};

enum
{
	MENUITEM_TEXTSPEED,
	MENUITEM_TEXTSCROLL,
	MENUITEM_AUTORUN,
	MENUITEM_FASTHMS
};

enum
{
	MENUITEM_FRAMETYPE,
	MENUITEM_BUTTONMODE,
	MENUITEM_SOUND,
	MENUITEM_EXIT
};

#define YPOS_FIRST_OPTION 0
#define YPOS_SECOND_OPTION 16
#define YPOS_THIRD_OPTION 32
#define YPOS_FOURTH_OPTION 48

static void Task_OptionMenuFadeIn(u8 taskId);
static void Task_OptionMenuProcessInput(u8 taskId);
static void Task_OptionMenuSave(u8 taskId);
static void Task_OptionMenuFadeOut(u8 taskId);
static void HighlightOptionMenuItem(u8 selection);
static u8 TextSpeed_ProcessInput(void);
static void TextSpeed_DrawChoices(u8 taskId);
static u8 BattleScene_ProcessInput(void);
static void BattleScene_DrawChoices(u8 taskId);
static u8 BattleStyle_ProcessInput(void);
static void BattleStyle_DrawChoices(u8 taskId);
static u8 Sound_ProcessInput(void);
static void Sound_DrawChoices(u8 taskId);
static u8 FrameType_ProcessInput(void);
static void FrameType_DrawChoices(u8 taskId);
static u8 ButtonMode_ProcessInput(void);
static void ButtonMode_DrawChoices(u8 taskId);
static u8 ExpAll_ProcessInput(void);
static void ExpAll_DrawChoices(u8 taskId);
static u8 Difficulty_ProcessInput(void);
static void Difficulty_DrawChoices(u8 taskId);
static u8 AutoRun_ProcessInput(void);
static void AutoRun_DrawChoices(u8 taskId);
static u8 BattleHelpers_ProcessInput(void);
static void BattleHelpers_DrawChoices(u8 taskId);
static u8 FastHMs_ProcessInput(void);
static void FastHMs_DrawChoices(u8 taskId);
static u8 BattleMessageScroll_ProcessInput(void);
static void BattleMessageScroll_DrawChoices(u8 taskId);
static u8 HotkeyMode_ProcessInput(void);
static void HotkeyMode_DrawChoices(u8 taskId);
static u8 SlideSpeed_ProcessInput(void);
static void SlideSpeed_DrawChoices(u8 taskId);
static u8 MashInput_ProcessInput(void);
static void MashInput_DrawChoices(u8 taskId);
static u8 Dummy_ProcessInput(void);
static void Dummy_DrawChoices(u8 taskId);
static void DrawHeaderText(u8 tabId);
static void DrawFooterText(const u8 *text);
static void DrawOptionMenuTexts(u8 taskId);
static void RedrawOptionMenuTexts(u8 taskId);
static void DrawBgWindowFrames(void);
static void UpdateSelection(u8 taskId, bool32 scrollDown);

static void (*const sOptionMenuDrawChoiceFuncs[4][4])(u8 taskId) = {
    {Difficulty_DrawChoices, ExpAll_DrawChoices, BattleStyle_DrawChoices, BattleHelpers_DrawChoices},
	{BattleMessageScroll_DrawChoices, HotkeyMode_DrawChoices, SlideSpeed_DrawChoices, BattleScene_DrawChoices},
	{TextSpeed_DrawChoices, MashInput_DrawChoices, AutoRun_DrawChoices, FastHMs_DrawChoices},
	{FrameType_DrawChoices, ButtonMode_DrawChoices, Sound_DrawChoices, Dummy_DrawChoices}
};

static u8 (*const sOptionMenuInputFuncs[4][4])(void) = {
    {Difficulty_ProcessInput, ExpAll_ProcessInput, BattleStyle_ProcessInput, BattleHelpers_ProcessInput},
	{BattleMessageScroll_ProcessInput, HotkeyMode_ProcessInput, SlideSpeed_ProcessInput, BattleScene_ProcessInput},
	{TextSpeed_ProcessInput, MashInput_ProcessInput, AutoRun_ProcessInput, FastHMs_ProcessInput},
	{FrameType_ProcessInput, ButtonMode_ProcessInput, Sound_ProcessInput, Dummy_ProcessInput}
};

/* How to add new options:
	* Add to constants enum
	* Add text to sOptionMenuItemsNames
	* Add DrawChoices function
	* Add ProcessInput function
	* Add appropriate functionality to HandleInput switch
	* Add appropriate functionality to RedrawChoices switch
*/
EWRAM_DATA static bool8 sArrowPressed = FALSE;

static const u16 sOptionMenuText_Pal[] = INCBIN_U16("graphics/interface/option_menu_text.gbapal");
// note: this is only used in the Japanese release
static const u8 sEqualSignGfx[] = INCBIN_U8("graphics/interface/option_menu_equals_sign.4bpp");

static const u8 *const sOptionMenuItemsNames[TABS_COUNT][OPTIONS_PER_TAB] =
{
	{gText_Difficulty, gText_ExpAll, gText_BattleStyle, gText_BattleHelpers},
	{gText_BattleMessageScroll, gText_HotkeyMode, gText_IntroSlideSpeed, gText_BattleScene},
	{gText_TextSpeed, gText_TextMash, gText_AutoRun, gText_FastHMs},
	{gText_Frame, gText_ButtonMode, gText_Sound, gText_OptionMenuTabExit}
};

static const u8 *const sHeaderNames[TABS_COUNT] = 
{
	gText_Tab1Header,
	gText_Tab2Header,
	gText_Tab3Header,
	gText_Tab4Header,
};

static const struct WindowTemplate sOptionMenuWinTemplates[] =
{
    [WIN_HEADER] = {
        .bg = 1,
        .tilemapLeft = 2,
        .tilemapTop = 1,
        .width = 26,
        .height = 2,
        .paletteNum = 1,
        .baseBlock = 2
    },
    [WIN_OPTIONS] = {
        .bg = 0,
        .tilemapLeft = 2,
        .tilemapTop = 5,
        .width = 26,
        .height = 8,
        .paletteNum = 1,
        .baseBlock = 0x10A
    },
	[WIN_FOOTER] = {
		.bg = 1,
		.tilemapLeft = 2,
		.tilemapTop = 15,
		.width = 26,
		.height = 4,
		.paletteNum = 1,
		.baseBlock = 0x36
	},
    DUMMY_WIN_TEMPLATE
};

static const struct BgTemplate sOptionMenuBgTemplates[] =
{
    {
        .bg = 1,
        .charBaseIndex = 1,
        .mapBaseIndex = 29,
        .screenSize = 0,
        .paletteMode = 0,
        .priority = 0,
        .baseTile = 0
    },
    {
        .bg = 0,
        .charBaseIndex = 1,
        .mapBaseIndex = 30,
        .screenSize = 0,
        .paletteMode = 0,
        .priority = 1,
        .baseTile = 0
    },
	{
		.bg = 1,
		.charBaseIndex = 1,
		.mapBaseIndex = 31,
		.screenSize = 0,
		.paletteMode = 0,
		.priority = 0,
		.baseTile = 0
	}
};

static const u16 sOptionMenuBg_Pal[] = {RGB(17, 18, 31)};

static void MainCB2(void)
{
    RunTasks();
    AnimateSprites();
    BuildOamBuffer();
    UpdatePaletteFade();
}

static void VBlankCB(void)
{
    LoadOam();
    ProcessSpriteCopyRequests();
    TransferPlttBuffer();
}

void CB2_InitOptionMenu(void)
{
    switch (gMain.state)
    {
    default:
    case 0:
        SetVBlankCallback(NULL);
        gMain.state++;
        break;
    case 1:
        DmaClearLarge16(3, (void *)(VRAM), VRAM_SIZE, 0x1000);
        DmaClear32(3, OAM, OAM_SIZE);
        DmaClear16(3, PLTT, PLTT_SIZE);
        SetGpuReg(REG_OFFSET_DISPCNT, 0);
        ResetBgsAndClearDma3BusyFlags(0);
        InitBgsFromTemplates(0, sOptionMenuBgTemplates, ARRAY_COUNT(sOptionMenuBgTemplates));
        ChangeBgX(0, 0, BG_COORD_SET);
        ChangeBgY(0, 0, BG_COORD_SET);
        ChangeBgX(1, 0, BG_COORD_SET);
        ChangeBgY(1, 0, BG_COORD_SET);
        ChangeBgX(2, 0, BG_COORD_SET);
        ChangeBgY(2, 0, BG_COORD_SET);
        ChangeBgX(3, 0, BG_COORD_SET);
        ChangeBgY(3, 0, BG_COORD_SET);
        InitWindows(sOptionMenuWinTemplates);
        DeactivateAllTextPrinters();
        SetGpuReg(REG_OFFSET_WIN0H, 0);
        SetGpuReg(REG_OFFSET_WIN0V, 0);
        SetGpuReg(REG_OFFSET_WININ, WININ_WIN0_BG0 | WININ_WIN0_OBJ);
        SetGpuReg(REG_OFFSET_WINOUT, WINOUT_WIN01_BG0 | WINOUT_WIN01_BG1 | WINOUT_WIN01_OBJ | WINOUT_WIN01_CLR);
        SetGpuReg(REG_OFFSET_BLDCNT, BLDCNT_TGT1_BG0 | BLDCNT_EFFECT_DARKEN);
        SetGpuReg(REG_OFFSET_BLDALPHA, 0);
        SetGpuReg(REG_OFFSET_BLDY, 4);
        SetGpuReg(REG_OFFSET_DISPCNT, DISPCNT_WIN0_ON | DISPCNT_OBJ_ON | DISPCNT_OBJ_1D_MAP);
        ShowBg(0);
        ShowBg(1);
        gMain.state++;
        break;
    case 2:
        ResetPaletteFade();
        ScanlineEffect_Stop();
        ResetTasks();
        ResetSpriteData();
        gMain.state++;
        break;
    case 3:
        LoadBgTiles(1, GetWindowFrameTilesPal(gSaveBlock2Ptr->optionsWindowFrameType)->tiles, 0x120, 0x1E0);
        gMain.state++;
        break;
    case 4:
        LoadPalette(sOptionMenuBg_Pal, BG_PLTT_ID(0), sizeof(sOptionMenuBg_Pal));
        LoadPalette(GetWindowFrameTilesPal(gSaveBlock2Ptr->optionsWindowFrameType)->pal, BG_PLTT_ID(7), PLTT_SIZE_4BPP);
        gMain.state++;
        break;
    case 5:
        LoadPalette(sOptionMenuText_Pal, BG_PLTT_ID(1), sizeof(sOptionMenuText_Pal));
        gMain.state++;
        break;
    case 6:
        PutWindowTilemap(WIN_HEADER);
        DrawHeaderText(0);
        gMain.state++;
        break;
    case 7:
        PutWindowTilemap(WIN_FOOTER);
        gMain.state++;
        break;
    case 8:
        PutWindowTilemap(WIN_OPTIONS);
        DrawOptionMenuTexts(0);
        gMain.state++;
    case 9:
        DrawBgWindowFrames();
        gMain.state++;
        break;
    case 10:
    {
		u32 i;
        u8 taskId = CreateTask(Task_OptionMenuFadeIn, 0);

		gTasks[taskId].tTabNum = 0;
		gTasks[taskId].tMenuSelection = 0;
		
		for (i = 0; i < OPTIONS_PER_TAB; i++)
			sOptionMenuDrawChoiceFuncs[0][i](taskId);
		
        CopyWindowToVram(WIN_OPTIONS, COPYWIN_FULL);
		
		HighlightOptionMenuItem(0);
        
        gMain.state++;
        break;
    }
    case 11:
		BeginNormalPaletteFade(PALETTES_ALL, 0, 16, 0, RGB_BLACK);
        SetVBlankCallback(VBlankCB);
        SetMainCallback2(MainCB2);
        return;
    }
}

static void Task_OptionMenuFadeIn(u8 taskId)
{
    if (!gPaletteFade.active)
        gTasks[taskId].func = Task_OptionMenuProcessInput;
}

static void Task_OptionMenuProcessInput(u8 taskId)
{
    if (JOY_NEW(B_BUTTON))
    {
        gTasks[taskId].func = Task_OptionMenuSave;
    }
    else if (JOY_NEW(DPAD_UP))
    {
        UpdateSelection(taskId, FALSE);
		sOptionMenuDrawChoiceFuncs[gTasks[taskId].tTabNum][gTasks[taskId].tMenuSelection](taskId);
		HighlightOptionMenuItem(gTasks[taskId].tMenuSelection);
    }
    else if (JOY_NEW(DPAD_DOWN))
    {
		UpdateSelection(taskId, TRUE);
		sOptionMenuDrawChoiceFuncs[gTasks[taskId].tTabNum][gTasks[taskId].tMenuSelection](taskId);		
		HighlightOptionMenuItem(gTasks[taskId].tMenuSelection);
    }
	else if (JOY_NEW(L_BUTTON) && gTasks[taskId].tTabNum > 0)
	{
		gTasks[taskId].tTabNum--;
		RedrawOptionMenuTexts(taskId);
		DrawHeaderText(gTasks[taskId].tTabNum);
	}
	else if (JOY_NEW(R_BUTTON) && gTasks[taskId].tTabNum < TABS_COUNT - 1)
	{
		gTasks[taskId].tTabNum++;
		RedrawOptionMenuTexts(taskId);
		DrawHeaderText(gTasks[taskId].tTabNum);
	}
    else
    {		
		u32 value = sOptionMenuInputFuncs[gTasks[taskId].tTabNum][gTasks[taskId].tMenuSelection]();
		
		if (value == 0xFF)
			gTasks[taskId].func = Task_OptionMenuSave;

        if (sArrowPressed)
        {
            sArrowPressed = FALSE;
			sOptionMenuDrawChoiceFuncs[gTasks[taskId].tTabNum][gTasks[taskId].tMenuSelection](taskId);
            CopyWindowToVram(WIN_OPTIONS, COPYWIN_GFX);
        }
    }
}

static void Task_OptionMenuSave(u8 taskId)
{
	// This is where the option to exit without saving would be if there was such an option. There wasn't in vanilla so idc right now.
	
    BeginNormalPaletteFade(PALETTES_ALL, 0, 0, 16, RGB_BLACK);
    gTasks[taskId].func = Task_OptionMenuFadeOut;
}

static void Task_OptionMenuFadeOut(u8 taskId)
{
    if (!gPaletteFade.active)
    {
        DestroyTask(taskId);
        FreeAllWindowBuffers();
        SetMainCallback2(gMain.savedCallback);
    }
}

static void HighlightOptionMenuItem(u8 index)
{
    SetGpuReg(REG_OFFSET_WIN0H, WIN_RANGE(16, DISPLAY_WIDTH - 16));
    SetGpuReg(REG_OFFSET_WIN0V, WIN_RANGE(index * 16 + 40, index * 16 + 56));
}

static void DrawOptionMenuChoice(const u8 *text, u8 x, u8 y, u8 style)
{
    u8 dst[24];
    u16 i;

    for (i = 0; *text != EOS && i < ARRAY_COUNT(dst) - 1; i++)
        dst[i] = *(text++);

    if (style != 0)
    {
        dst[2] = TEXT_COLOR_RED;
        dst[5] = TEXT_COLOR_LIGHT_RED;
    }

    dst[i] = EOS;
    AddTextPrinterParameterized(WIN_OPTIONS, FONT_NORMAL, dst, x, y + 1, TEXT_SKIP_DRAW, NULL);
}

static u8 ExpAll_ProcessInput(void) 
{
	if (JOY_NEW(DPAD_LEFT | DPAD_RIGHT))
    {
        gSaveBlock2Ptr->optionsExpShare ^= 1;
        sArrowPressed = TRUE;
    }

    return gSaveBlock2Ptr->optionsExpShare;
}

static void ExpAll_DrawChoices(u8 taskId)
{
    u8 styles[2];

    styles[0] = 0;
    styles[1] = 0;
    styles[gSaveBlock2Ptr->optionsExpShare] = 1;

    DrawOptionMenuChoice(gText_BattleSceneOff, 104, YPOS_SECOND_OPTION, styles[0]);
    DrawOptionMenuChoice(gText_BattleSceneOn, GetStringRightAlignXOffset(FONT_NORMAL, gText_BattleSceneOff, 198), YPOS_SECOND_OPTION, styles[1]);

	if (gTasks[taskId].tMenuSelection == MENUITEM_EXPALL)
		DrawFooterText(gText_OptionDescription_ExpAll);
}

static u8 Difficulty_ProcessInput(void)
{
	if (JOY_NEW(DPAD_LEFT))
    {
        if (gSaveBlock2Ptr->optionsDifficulty != 0)
			gSaveBlock2Ptr->optionsDifficulty--;
        sArrowPressed = TRUE;
    }
	if (JOY_NEW(DPAD_RIGHT))
	{
		if (gSaveBlock2Ptr->optionsDifficulty < 2)
			gSaveBlock2Ptr->optionsDifficulty++;
		sArrowPressed = TRUE;
	}

    return gSaveBlock2Ptr->optionsDifficulty;
}

static const u8 *const sDifficultyDescs[3] = {gText_OptionDescription_DifficultyNormal, gText_OptionDescription_DifficultyHard, gText_OptionDescription_DifficultyUnfair};

static void Difficulty_DrawChoices(u8 taskId)
{
    switch (gSaveBlock2Ptr->optionsDifficulty)
	{
		case 0:
			DrawOptionMenuChoice(gText_DifficultyNormal, 132, YPOS_FIRST_OPTION, 1);
			break;
		case 1:
			DrawOptionMenuChoice(gText_DifficultyHard, 132, YPOS_FIRST_OPTION, 1);
			break;
		case 2:
			DrawOptionMenuChoice(gText_DifficultyUnfair, 132, YPOS_FIRST_OPTION, 1);
			break;
	}
	if (gTasks[taskId].tMenuSelection == MENUITEM_DIFFICULTY)
		DrawFooterText(sDifficultyDescs[gSaveBlock2Ptr->optionsDifficulty]);
}

static u8 BattleStyle_ProcessInput(void)
{
    if (JOY_NEW(DPAD_LEFT | DPAD_RIGHT))
    {
        gSaveBlock2Ptr->optionsBattleStyle ^= 1;
        sArrowPressed = TRUE;
    }

    return gSaveBlock2Ptr->optionsBattleStyle;
}

static void BattleStyle_DrawChoices(u8 taskId)
{
    u8 styles[2];

    styles[0] = 0;
    styles[1] = 0;
    styles[gSaveBlock2Ptr->optionsBattleStyle] = 1;

    DrawOptionMenuChoice(gText_BattleStyleShift, 104, YPOS_THIRD_OPTION, styles[0]);
    DrawOptionMenuChoice(gText_BattleStyleSet, GetStringRightAlignXOffset(FONT_NORMAL, gText_BattleSceneOff, 198), YPOS_THIRD_OPTION, styles[1]);
	
	if (gTasks[taskId].tMenuSelection == MENUITEM_BATTLESTYLE)
		DrawFooterText(gText_OptionDescription_BattleStyle);
}

static u8 AutoRun_ProcessInput(void)
{
	if (JOY_NEW(DPAD_LEFT | DPAD_RIGHT))
    {
        gSaveBlock2Ptr->optionsAutoRun ^= 1;
        sArrowPressed = TRUE;
    }

    return gSaveBlock2Ptr->optionsAutoRun;
}

static const u8 *const sAutoRunDescs[2] = {gText_OptionDescription_AutoRunOn, gText_OptionDescription_AutoRunOff};

static void AutoRun_DrawChoices(u8 taskId)
{
    u8 styles[2];

    styles[0] = 0;
    styles[1] = 0;
    styles[gSaveBlock2Ptr->optionsAutoRun] = 1;

    DrawOptionMenuChoice(gText_BattleSceneOff, 104, YPOS_THIRD_OPTION, styles[0]);
    DrawOptionMenuChoice(gText_BattleSceneOn, GetStringRightAlignXOffset(FONT_NORMAL, gText_BattleSceneOff, 198), YPOS_THIRD_OPTION, styles[1]);
	
	if (gTasks[taskId].tMenuSelection == MENUITEM_AUTORUN)
		DrawFooterText(sAutoRunDescs[gSaveBlock2Ptr->optionsAutoRun]);
}

static u8 TextSpeed_ProcessInput(void)
{
    if (JOY_NEW(DPAD_RIGHT))
    {
        if (gSaveBlock2Ptr->optionsTextSpeed <= 1)
            gSaveBlock2Ptr->optionsTextSpeed++;
        else
            gSaveBlock2Ptr->optionsTextSpeed = 0;

        sArrowPressed = TRUE;
    }
    if (JOY_NEW(DPAD_LEFT))
    {
        if (gSaveBlock2Ptr->optionsTextSpeed != 0)
            gSaveBlock2Ptr->optionsTextSpeed--;
        else
            gSaveBlock2Ptr->optionsTextSpeed = 2;

        sArrowPressed = TRUE;
    }
    return gSaveBlock2Ptr->optionsTextSpeed;
}

static const u8 *const sTextSpeedDescs[3] =	{gText_OptionDescription_TextSpeedFast, gText_OptionDescription_TextSpeedSuper, gText_OptionDescription_TextSpeedHyper};

static void TextSpeed_DrawChoices(u8 taskId)
{
    u8 styles[3];
    s32 widthSlow, widthMid, widthFast, xMid;

    styles[0] = 0;
    styles[1] = 0;
    styles[2] = 0;
    styles[gSaveBlock2Ptr->optionsTextSpeed] = 1;

    DrawOptionMenuChoice(gText_TextSpeedSlow, 104, YPOS_FIRST_OPTION, styles[0]);

    widthSlow = GetStringWidth(FONT_NORMAL, gText_TextSpeedSlow, 0);
    widthMid = GetStringWidth(FONT_NORMAL, gText_TextSpeedMid, 0);
    widthFast = GetStringWidth(FONT_NORMAL, gText_TextSpeedFast, 0);

    widthMid -= 94;
    xMid = (widthSlow - widthMid - widthFast) / 2 + 104;
    DrawOptionMenuChoice(gText_TextSpeedMid, xMid, YPOS_FIRST_OPTION, styles[1]);
    DrawOptionMenuChoice(gText_TextSpeedFast, GetStringRightAlignXOffset(FONT_NORMAL, gText_TextSpeedFast, 198), YPOS_FIRST_OPTION, styles[2]);
	
	if (gTasks[taskId].tMenuSelection == MENUITEM_TEXTSPEED)
		DrawFooterText(sTextSpeedDescs[gSaveBlock2Ptr->optionsTextSpeed]);
}

static u8 ButtonMode_ProcessInput(void)
{
    if (JOY_NEW(DPAD_LEFT | DPAD_RIGHT))
    {
        gSaveBlock2Ptr->optionsButtonMode ^= 1;
        sArrowPressed = TRUE;
    }

    return gSaveBlock2Ptr->optionsButtonMode;
}

static void ButtonMode_DrawChoices(u8 taskId)
{
    u8 styles[2];

    styles[0] = 0;
    styles[1] = 0;
    styles[gSaveBlock2Ptr->optionsButtonMode] = 1;

    DrawOptionMenuChoice(gText_ButtonTypeNormal, 104, YPOS_SECOND_OPTION, styles[0]);

    DrawOptionMenuChoice(gText_ButtonTypeLEqualsA, GetStringRightAlignXOffset(FONT_NORMAL, gText_ButtonTypeLEqualsA, 198), YPOS_SECOND_OPTION, styles[1]);

	if (gTasks[taskId].tMenuSelection == MENUITEM_BUTTONMODE)
		DrawFooterText(gText_OptionDescription_ButtonMode);
}

static u8 BattleScene_ProcessInput(void)
{
    if (JOY_NEW(DPAD_LEFT | DPAD_RIGHT))
    {
        gSaveBlock2Ptr->optionsBattleSceneOff ^= 1;
        sArrowPressed = TRUE;
    }

    return gSaveBlock2Ptr->optionsBattleSceneOff;
}

static void BattleScene_DrawChoices(u8 taskId)
{
    u8 styles[2];

    styles[0] = 0;
    styles[1] = 0;
    styles[gSaveBlock2Ptr->optionsBattleSceneOff] = 1;

    DrawOptionMenuChoice(gText_BattleSceneOn, 104, YPOS_FOURTH_OPTION, styles[0]);
    DrawOptionMenuChoice(gText_BattleSceneOff, GetStringRightAlignXOffset(FONT_NORMAL, gText_BattleSceneOff, 198), YPOS_FOURTH_OPTION, styles[1]);
	
	if (gTasks[taskId].tMenuSelection == MENUITEM_BATTLESCENE)
		DrawFooterText(gText_OptionDescription_BattleScene);
}

static u8 BattleHelpers_ProcessInput(void)
{
    if (JOY_NEW(DPAD_LEFT | DPAD_RIGHT))
    {
        gSaveBlock2Ptr->optionsBattleHelpers ^= 1;
        sArrowPressed = TRUE;
    }

    return gSaveBlock2Ptr->optionsBattleHelpers;
}

static void BattleHelpers_DrawChoices(u8 taskId)
{
    u8 styles[2];

    styles[0] = 0;
    styles[1] = 0;
    styles[gSaveBlock2Ptr->optionsBattleHelpers] = 1;

    DrawOptionMenuChoice(gText_BattleSceneOff, 104, YPOS_FOURTH_OPTION, styles[0]);
    DrawOptionMenuChoice(gText_BattleSceneOn, GetStringRightAlignXOffset(FONT_NORMAL, gText_BattleSceneOff, 198), YPOS_FOURTH_OPTION, styles[1]);
	
	if (gTasks[taskId].tMenuSelection == MENUITEM_BATTLEHELP)
		DrawFooterText(gText_OptionDescription_BattleHelp);
}

static u8 FastHMs_ProcessInput(void)
{
    if (JOY_NEW(DPAD_LEFT | DPAD_RIGHT))
    {
        if (FlagGet(FLAG_FAST_HMS))
			FlagClear(FLAG_FAST_HMS);
		else
			FlagSet(FLAG_FAST_HMS);
        sArrowPressed = TRUE;
		return TRUE;
    }

    return FALSE;
}

static void FastHMs_DrawChoices(u8 taskId)
{
    u8 styles[2];

    styles[0] = 0;
    styles[1] = 0;
    styles[FlagGet(FLAG_FAST_HMS)] = 1;

    DrawOptionMenuChoice(gText_BattleSceneOff, 104, YPOS_FOURTH_OPTION, styles[0]);
    DrawOptionMenuChoice(gText_BattleSceneOn, GetStringRightAlignXOffset(FONT_NORMAL, gText_BattleSceneOff, 198), YPOS_FOURTH_OPTION, styles[1]);
	
	if (gTasks[taskId].tMenuSelection == MENUITEM_FASTHMS)
		DrawFooterText(gText_OptionDescription_FastHMs);
}

static u8 BattleMessageScroll_ProcessInput(void)
{
    if (JOY_NEW(DPAD_RIGHT))
    {
        if (gSaveBlock2Ptr->optionsBattleMessageScroll <= 1)
            gSaveBlock2Ptr->optionsBattleMessageScroll++;
        else
            gSaveBlock2Ptr->optionsBattleMessageScroll = 0;

        sArrowPressed = TRUE;
    }
    if (JOY_NEW(DPAD_LEFT))
    {
        if (gSaveBlock2Ptr->optionsBattleMessageScroll != 0)
            gSaveBlock2Ptr->optionsBattleMessageScroll--;
        else
            gSaveBlock2Ptr->optionsBattleMessageScroll = 2;

        sArrowPressed = TRUE;
    }
    return gSaveBlock2Ptr->optionsBattleMessageScroll;
}

static const u8 *const sBattleMessageScrollDescs[3] =	{gText_OptionDescription_BattleMessageWait, gText_OptionDescription_BattleMessageButton, gText_OptionDescription_BattleMessageBoth};

static void BattleMessageScroll_DrawChoices(u8 taskId)
{
    u8 styles[3];
    s32 widthSlow, widthMid, widthFast, xMid;

    styles[0] = 0;
    styles[1] = 0;
    styles[2] = 0;
    styles[gSaveBlock2Ptr->optionsBattleMessageScroll] = 1;

    DrawOptionMenuChoice(gText_MessageWait, 104, YPOS_FIRST_OPTION, styles[0]);

    widthSlow = GetStringWidth(FONT_NORMAL, gText_MessageWait, 0);
    widthMid = GetStringWidth(FONT_NORMAL, gText_MessageButton, 0);
    widthFast = GetStringWidth(FONT_NORMAL, gText_MessageBoth, 0);

    widthMid -= 94;
    xMid = (widthSlow - widthMid - widthFast) / 2 + 104;
    DrawOptionMenuChoice(gText_MessageButton, xMid, YPOS_FIRST_OPTION, styles[1]);
    DrawOptionMenuChoice(gText_MessageBoth, GetStringRightAlignXOffset(FONT_NORMAL, gText_MessageBoth, 198), YPOS_FIRST_OPTION, styles[2]);
	
	if (gTasks[taskId].tMenuSelection == MENUITEM_MSGWAIT)
		DrawFooterText(sBattleMessageScrollDescs[gSaveBlock2Ptr->optionsBattleMessageScroll]);
}

static u8 HotkeyMode_ProcessInput(void)
{
    if (JOY_NEW(DPAD_LEFT | DPAD_RIGHT))
    {
        gSaveBlock2Ptr->optionsHotkeyMode ^= 1;
        sArrowPressed = TRUE;
    }

    return gSaveBlock2Ptr->optionsHotkeyMode;
}

static const u8 *const sHotkeyModeDescs[2] =	{gText_OptionDescription_HotkeyFandango, gText_OptionDescription_HotkeyExpansion};

static void HotkeyMode_DrawChoices(u8 taskId)
{
	if (gSaveBlock2Ptr->optionsHotkeyMode)
		DrawOptionMenuChoice(gText_HotkeyExpansion, 104, YPOS_SECOND_OPTION, 1);
	else
		DrawOptionMenuChoice(gText_HotkeyFandango, 104, YPOS_SECOND_OPTION, 1);

	if (gTasks[taskId].tMenuSelection == MENUITEM_HOTKEYMODE)
		DrawFooterText(sHotkeyModeDescs[gSaveBlock2Ptr->optionsHotkeyMode]);
}

static u8 SlideSpeed_ProcessInput(void)
{
	
    if (JOY_NEW(DPAD_RIGHT))
    {
        if (gSaveBlock2Ptr->optionsBattleSlideSpeed <= 1)
            gSaveBlock2Ptr->optionsBattleSlideSpeed++;
        else
            gSaveBlock2Ptr->optionsBattleSlideSpeed = 0;

        sArrowPressed = TRUE;
    }
    if (JOY_NEW(DPAD_LEFT))
    {
        if (gSaveBlock2Ptr->optionsBattleSlideSpeed != 0)
            gSaveBlock2Ptr->optionsBattleSlideSpeed--;
        else
            gSaveBlock2Ptr->optionsBattleSlideSpeed = 2;

        sArrowPressed = TRUE;
    }
    return gSaveBlock2Ptr->optionsBattleSlideSpeed;
}

static void SlideSpeed_DrawChoices(u8 taskId)
{
    u8 styles[3];
    s32 widthSlow, widthMid, widthFast, xMid;

    styles[0] = 0;
    styles[1] = 0;
    styles[2] = 0;
    styles[gSaveBlock2Ptr->optionsBattleSlideSpeed] = 1;

    DrawOptionMenuChoice(gText_DifficultyNormal, 104, YPOS_THIRD_OPTION, styles[0]);

    widthSlow = GetStringWidth(FONT_NORMAL, gText_DifficultyNormal, 0);
    widthMid = GetStringWidth(FONT_NORMAL, gText_TextSpeedSlow, 0);
    widthFast = GetStringWidth(FONT_NORMAL, gText_TextSpeedMid, 0);

    widthMid -= 94;
    xMid = (widthSlow - widthMid - widthFast) / 2 + 104;
    DrawOptionMenuChoice(gText_TextSpeedSlow, xMid, YPOS_THIRD_OPTION, styles[1]);
    DrawOptionMenuChoice(gText_TextSpeedMid, GetStringRightAlignXOffset(FONT_NORMAL, gText_TextSpeedMid, 198), YPOS_THIRD_OPTION, styles[2]);
	
	if (gTasks[taskId].tMenuSelection == MENUITEM_INTROSLIDE)
		DrawFooterText(gText_OptionDescription_IntroSlide);
}

static u8 MashInput_ProcessInput(void)
{
	
    if (JOY_NEW(DPAD_RIGHT))
    {
        if (gSaveBlock2Ptr->optionsTextMashInput <= 1)
            gSaveBlock2Ptr->optionsTextMashInput++;
        else
            gSaveBlock2Ptr->optionsTextMashInput = 0;

        sArrowPressed = TRUE;
    }
    if (JOY_NEW(DPAD_LEFT))
    {
        if (gSaveBlock2Ptr->optionsTextMashInput != 0)
            gSaveBlock2Ptr->optionsTextMashInput--;
        else
            gSaveBlock2Ptr->optionsTextMashInput = 2;

        sArrowPressed = TRUE;
    }
    return gSaveBlock2Ptr->optionsTextMashInput;
}

static const u8 *const sMashInputDescs[3] = {gText_OptionDescription_TextScrollNormal, gText_OptionDescription_TextScrollDpad, gText_OptionDescription_TextScrollHold};

static void MashInput_DrawChoices(u8 taskId)
{
    u8 styles[3];
    s32 widthSlow, widthMid, widthFast, xMid;

    styles[0] = 0;
    styles[1] = 0;
    styles[2] = 0;
    styles[gSaveBlock2Ptr->optionsTextMashInput] = 1;

    DrawOptionMenuChoice(gText_DifficultyNormal, 104, YPOS_SECOND_OPTION, styles[0]);

    widthSlow = GetStringWidth(FONT_NORMAL, gText_DifficultyNormal, 0);
    widthMid = GetStringWidth(FONT_NORMAL, gText_MashDpad, 0);
    widthFast = GetStringWidth(FONT_NORMAL, gText_MashHold, 0);

    widthMid -= 94;
    xMid = (widthSlow - widthMid - widthFast) / 2 + 104;
    DrawOptionMenuChoice(gText_MashDpad, xMid, YPOS_SECOND_OPTION, styles[1]);
    DrawOptionMenuChoice(gText_MashHold, GetStringRightAlignXOffset(FONT_NORMAL, gText_MashHold, 198), YPOS_SECOND_OPTION, styles[2]);	
	
	if (gTasks[taskId].tMenuSelection == MENUITEM_TEXTSCROLL)
		DrawFooterText(sMashInputDescs[gSaveBlock2Ptr->optionsTextMashInput]);
}

static u8 Dummy_ProcessInput(void)
{
	if (JOY_NEW(A_BUTTON))
		return 0xFF; // magic number cuz this doesn't have access to taskId. Will exit the menu if this value is returned.
	return 0;
}

static void Dummy_DrawChoices(u8 taskId)
{
	if (gTasks[taskId].tMenuSelection == MENUITEM_EXIT)
		DrawFooterText(gText_OptionDescription_Exit);
}

static u8 Sound_ProcessInput(void)
{
    if (JOY_NEW(DPAD_LEFT | DPAD_RIGHT))
    {
        gSaveBlock2Ptr->optionsSound ^= 1;
        sArrowPressed = TRUE;
    }

    return gSaveBlock2Ptr->optionsSound;
}

static void Sound_DrawChoices(u8 taskId)
{
    u8 styles[2];

    styles[0] = 0;
    styles[1] = 0;
    styles[gSaveBlock2Ptr->optionsSound] = 1;

    DrawOptionMenuChoice(gText_SoundMono, 104, YPOS_THIRD_OPTION, styles[0]);
    DrawOptionMenuChoice(gText_SoundStereo, GetStringRightAlignXOffset(FONT_NORMAL, gText_SoundStereo, 198), YPOS_THIRD_OPTION, styles[1]);
	
	if (gTasks[taskId].tMenuSelection == MENUITEM_SOUND)
		DrawFooterText(gText_OptionDescription_Sound);
}

static u8 FrameType_ProcessInput(void)
{
    if (JOY_NEW(DPAD_RIGHT))
    {
        if (gSaveBlock2Ptr->optionsWindowFrameType < WINDOW_FRAMES_COUNT - 1)
            gSaveBlock2Ptr->optionsWindowFrameType++;
        else
            gSaveBlock2Ptr->optionsWindowFrameType = 0;

        LoadBgTiles(1, GetWindowFrameTilesPal(gSaveBlock2Ptr->optionsWindowFrameType)->tiles, 0x120, 0x1E0);
        LoadPalette(GetWindowFrameTilesPal(gSaveBlock2Ptr->optionsWindowFrameType)->pal, BG_PLTT_ID(7), PLTT_SIZE_4BPP);
        sArrowPressed = TRUE;
    }
    if (JOY_NEW(DPAD_LEFT))
    {
        if (gSaveBlock2Ptr->optionsWindowFrameType != 0)
            gSaveBlock2Ptr->optionsWindowFrameType--;
        else
            gSaveBlock2Ptr->optionsWindowFrameType = WINDOW_FRAMES_COUNT - 1;

        LoadBgTiles(1, GetWindowFrameTilesPal(gSaveBlock2Ptr->optionsWindowFrameType)->tiles, 0x120, 0x1E0);
        LoadPalette(GetWindowFrameTilesPal(gSaveBlock2Ptr->optionsWindowFrameType)->pal, BG_PLTT_ID(7), PLTT_SIZE_4BPP);
        sArrowPressed = TRUE;
    }
    return gSaveBlock2Ptr->optionsWindowFrameType;
}

static void FrameType_DrawChoices(u8 taskId)
{
    u8 text[16] = {EOS};
    u8 n = gSaveBlock2Ptr->optionsWindowFrameType + 1;
    u16 i;

    for (i = 0; gText_FrameTypeNumber[i] != EOS && i <= 5; i++)
        text[i] = gText_FrameTypeNumber[i];

    // Convert a number to decimal string
    if (n / 10 != 0)
    {
        text[i] = n / 10 + CHAR_0;
        i++;
        text[i] = n % 10 + CHAR_0;
        i++;
    }
    else
    {
        text[i] = n % 10 + CHAR_0;
        i++;
        text[i] = CHAR_SPACER;
        i++;
    }

    text[i] = EOS;

    DrawOptionMenuChoice(gText_FrameType, 104, YPOS_FIRST_OPTION, 0);
    DrawOptionMenuChoice(text, 128, YPOS_FIRST_OPTION, 1);
	
	if (gTasks[taskId].tMenuSelection == MENUITEM_FRAMETYPE)
		DrawFooterText(gText_OptionDescription_FrameType);
}

static void DrawHeaderText(u8 tabId)
{
    FillWindowPixelBuffer(WIN_HEADER, PIXEL_FILL(1));
    AddTextPrinterParameterized(WIN_HEADER, FONT_NORMAL, sHeaderNames[tabId], 8, 1, TEXT_SKIP_DRAW, NULL);
    CopyWindowToVram(WIN_HEADER, COPYWIN_FULL);
}

static void DrawFooterText(const u8 *text)
{
    FillWindowPixelBuffer(WIN_FOOTER, PIXEL_FILL(1));
    AddTextPrinterParameterized(WIN_FOOTER, FONT_NORMAL, text, 8, 1, TEXT_SKIP_DRAW, NULL);
    CopyWindowToVram(WIN_FOOTER, COPYWIN_FULL);
}

static void DrawOptionMenuTexts(u8 taskId)
{
    u8 i;

    FillWindowPixelBuffer(WIN_OPTIONS, PIXEL_FILL(1));
    for (i = 0; i < OPTIONS_PER_TAB; i++)
        AddTextPrinterParameterized(WIN_OPTIONS, FONT_NORMAL, sOptionMenuItemsNames[gTasks[taskId].tTabNum][i], 8, (i * 16) + 1, TEXT_SKIP_DRAW, NULL);
    CopyWindowToVram(WIN_OPTIONS, COPYWIN_FULL);
}

static void RedrawOptionMenuTexts(u8 taskId)
{
    u8 i;

    FillWindowPixelBuffer(WIN_OPTIONS, PIXEL_FILL(1));
    for (i = 0; i < OPTIONS_PER_TAB; i++)
        AddTextPrinterParameterized(WIN_OPTIONS, FONT_NORMAL, sOptionMenuItemsNames[gTasks[taskId].tTabNum][i], 8, (i * 16) + 1, TEXT_SKIP_DRAW, NULL);
	
	for (i = 0; i < OPTIONS_PER_TAB; i++)
	{
		sOptionMenuDrawChoiceFuncs[gTasks[taskId].tTabNum][i](taskId);
	}
	
    CopyWindowToVram(WIN_OPTIONS, COPYWIN_FULL);
}

#define TILE_TOP_CORNER_L 0x1E0
#define TILE_TOP_EDGE     0x1E1
#define TILE_TOP_CORNER_R 0x1E2
#define TILE_LEFT_EDGE    0x1E3
#define TILE_RIGHT_EDGE   0x1E5
#define TILE_BOT_CORNER_L 0x1E6
#define TILE_BOT_EDGE     0x1E7
#define TILE_BOT_CORNER_R 0x1E8

static void DrawBgWindowFrames(void)
{
    //                     bg, tile,              x, y, width, height, palNum
    // Draw title window frame
    FillBgTilemapBufferRect(1, TILE_TOP_CORNER_L,  1,  0,  1,  1,  7);
    FillBgTilemapBufferRect(1, TILE_TOP_EDGE,      2,  0, 27,  1,  7);
    FillBgTilemapBufferRect(1, TILE_TOP_CORNER_R, 28,  0,  1,  1,  7);
    FillBgTilemapBufferRect(1, TILE_LEFT_EDGE,     1,  1,  1,  2,  7);
    FillBgTilemapBufferRect(1, TILE_RIGHT_EDGE,   28,  1,  1,  2,  7);
    FillBgTilemapBufferRect(1, TILE_BOT_CORNER_L,  1,  3,  1,  1,  7);
    FillBgTilemapBufferRect(1, TILE_BOT_EDGE,      2,  3, 27,  1,  7);
    FillBgTilemapBufferRect(1, TILE_BOT_CORNER_R, 28,  3,  1,  1,  7);

    // Draw options list window frame
    FillBgTilemapBufferRect(1, TILE_TOP_CORNER_L,  1,  4,  1,  1,  7);
    FillBgTilemapBufferRect(1, TILE_TOP_EDGE,      2,  4, 26,  1,  7);
    FillBgTilemapBufferRect(1, TILE_TOP_CORNER_R, 28,  4,  1,  1,  7);
    FillBgTilemapBufferRect(1, TILE_LEFT_EDGE,     1,  5,  1, 16,  7);
    FillBgTilemapBufferRect(1, TILE_RIGHT_EDGE,   28,  5,  1, 16,  7);
    FillBgTilemapBufferRect(1, TILE_BOT_CORNER_L,  1, 13,  1,  1,  7);
    FillBgTilemapBufferRect(1, TILE_BOT_EDGE,      2, 13, 26,  1,  7);
    FillBgTilemapBufferRect(1, TILE_BOT_CORNER_R, 28, 13,  1,  1,  7);

    // Draw options list window frame
    FillBgTilemapBufferRect(1, TILE_TOP_CORNER_L,  1,  14,  1,  1,  7);
    FillBgTilemapBufferRect(1, TILE_TOP_EDGE,      2,  14, 27,  1,  7);
    FillBgTilemapBufferRect(1, TILE_TOP_CORNER_R, 28,  14,  1,  1,  7);
    FillBgTilemapBufferRect(1, TILE_LEFT_EDGE,     1,  15,  1, 4,  7);
    FillBgTilemapBufferRect(1, TILE_RIGHT_EDGE,   28,  15,  1, 4,  7);
    FillBgTilemapBufferRect(1, TILE_BOT_CORNER_L,  1, 19,  1,  1,  7);
    FillBgTilemapBufferRect(1, TILE_BOT_EDGE,      2, 19, 27,  1,  7);
    FillBgTilemapBufferRect(1, TILE_BOT_CORNER_R, 28, 19,  1,  1,  7);

    CopyBgTilemapBufferToVram(1);
}


static void UpdateSelection(u8 taskId, bool32 scrollDown)
{
	UNUSED bool32 updated = FALSE; // remnant from when there was vertical scrolling, i think
	
	if (scrollDown)
	{
		if (gTasks[taskId].tMenuSelection < OPTIONS_PER_TAB - 1)
		{
            gTasks[taskId].tMenuSelection++;
			updated = TRUE;
		}
	}
	else
	{
		if (gTasks[taskId].tMenuSelection > 0)
		{
			gTasks[taskId].tMenuSelection--;
			updated = TRUE;
		}
	}
}


