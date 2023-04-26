#include "global.h"
#include "event_data.h"
#include "event_object_movement.h"
#include "field_camera.h"
#include "field_screen_effect.h"
#include "field_specials.h"
#include "fieldmap.h"
#include "main.h"
#include "overworld.h"
#include "palette.h"
#include "script.h"
#include "script_movement.h"
#include "sound.h"
#include "sprite.h"
#include "task.h"
#include "constants/event_objects.h"
#include "constants/event_object_movement.h"
#include "constants/field_specials.h"
#include "constants/songs.h"
#include "constants/metatile_labels.h"

#define MORGAN_STARTING_Y -60
#define PLAYER_STARTING_Y -90
#define CALVIN_STARTING_Y -104

// porthole states
enum
{
    INIT_PORTHOLE,
    IDLE_CHECK,
    EXECUTE_MOVEMENT,
    EXIT_PORTHOLE,
};

static const s8 sTruckCamera_HorizontalTable[] = {0, 0, 0, 0, 0, 0, 0, 0, 1, 2, 2, 2, 2, 2, 2, -1, -1, -1, 0};

static const u8 sSSTidalSailEastMovementScript[] =
{
    MOVEMENT_ACTION_WALK_FAST_RIGHT,
    MOVEMENT_ACTION_STEP_END
};

static const u8 sSSTidalSailWestMovementScript[] =
{
    MOVEMENT_ACTION_WALK_FAST_LEFT,
    MOVEMENT_ACTION_STEP_END
};

static void Task_Truck3(u8);

static s16 GetTruckCameraBobbingY(int time)
{
    if (!(time % 120))
        return -1;
    else if ((time % 10) <= 4)
        return 1;

    return 0;
}

// Determines the frequency that the truck boxes bounce at.
// The return value of this function is multiplied and added
// to the boxes resting y offset, the result of which is that
// when it returns 0 they remain vertically still and when it
// returns -1 they jump upward.
// Box 1 has 30 added to the time so it jumps earlier, and
// box 2 has the return value multiplied by less, so it doesn't
// jump as high.
static s16 GetTruckBoxYMovement(int time)
{
	u32 value;
	
    value = time % 20;
	
	if (value < 5)
		return 1;
	else if (value > 10 && value < 15)
		return -1;
	else
		return 0;
}

#define tTimer data[0]
#define tMorganY data[1]
#define tPlayerY data[2]
#define tCalvinY data[3]

static void Task_Truck1(u8 taskId) // sprites slide in from the top of the screen
{
    s16 *data = gTasks[taskId].data;
	u32 i;
	
	tMorganY = tTimer - 24;
	tPlayerY = tTimer;
	tCalvinY = tTimer - 12;
	
	for (i = 1; i < 4; i++)
	{
		if (data[i] > 36 && data[i] < 96)
			data[i] = 36 + GetTruckBoxYMovement(tTimer);
	}
	
    SetObjectEventSpritePosByLocalIdAndMap(LOCALID_SLEEPING_MORGAN, gSaveBlock1Ptr->location.mapNum, gSaveBlock1Ptr->location.mapGroup, 0, MORGAN_STARTING_Y + tMorganY);
    SetObjectEventSpritePosByLocalIdAndMap(LOCALID_SLEEPING_PLAYER, gSaveBlock1Ptr->location.mapNum, gSaveBlock1Ptr->location.mapGroup, 0, PLAYER_STARTING_Y + tPlayerY);
    SetObjectEventSpritePosByLocalIdAndMap(LOCALID_SLEEPING_CALVIN, gSaveBlock1Ptr->location.mapNum, gSaveBlock1Ptr->location.mapGroup, 0, CALVIN_STARTING_Y + tCalvinY);

    // Arbitrary timer limit that won't be reached
    if (++tTimer == 30000)
        tTimer = 0;

}

#undef tTimer

#define tTimerHorizontal data[0]
#define tMoveStep        data[1]
#define tTimerVertical   data[2]

static void Task_Truck2(u8 taskId) // sprites bob up and down for a little while
{
    s16 *data = gTasks[taskId].data;
    s16 yMorgan, yPlayer, yCalvin;

    tTimerVertical++;

	yMorgan = (tTimerVertical + 36) + MORGAN_STARTING_Y;
	if (yMorgan <= 0)
		SetObjectEventSpritePosByLocalIdAndMap(LOCALID_SLEEPING_MORGAN, gSaveBlock1Ptr->location.mapNum, gSaveBlock1Ptr->location.mapGroup, 0, yMorgan);
	yPlayer = (tTimerVertical) + 36 + PLAYER_STARTING_Y;
	if (yPlayer <= 0)
	SetObjectEventSpritePosByLocalIdAndMap(LOCALID_SLEEPING_PLAYER, gSaveBlock1Ptr->location.mapNum, gSaveBlock1Ptr->location.mapGroup, 0, yPlayer);
	yCalvin = ((tTimerVertical) * 4) + 36 + CALVIN_STARTING_Y;
	if (yCalvin <= 0)
		SetObjectEventSpritePosByLocalIdAndMap(LOCALID_SLEEPING_CALVIN, gSaveBlock1Ptr->location.mapNum, gSaveBlock1Ptr->location.mapGroup, 0, yCalvin);
	if (yMorgan == 0 && yPlayer == 0 && yCalvin == 0)
       DestroyTask(taskId);
}

static void Task_Truck3(u8 taskId) // sprites slide down into place
{
   s16 *data = gTasks[taskId].data;

   tTimerHorizontal++;

   
   if (tTimerHorizontal > 36)
   {
       DestroyTask(taskId);
   }
   else
   {
		if (tTimerHorizontal < 18)
			SetObjectEventSpritePosByLocalIdAndMap(LOCALID_SLEEPING_MORGAN, gSaveBlock1Ptr->location.mapNum, gSaveBlock1Ptr->location.mapGroup, 0, MORGAN_STARTING_Y + tTimerHorizontal + 36);
		if (tTimerHorizontal < 18)
			SetObjectEventSpritePosByLocalIdAndMap(LOCALID_SLEEPING_PLAYER, gSaveBlock1Ptr->location.mapNum, gSaveBlock1Ptr->location.mapGroup, 0, PLAYER_STARTING_Y + (tTimerHorizontal * 3) + 36);
		SetObjectEventSpritePosByLocalIdAndMap(LOCALID_SLEEPING_CALVIN, gSaveBlock1Ptr->location.mapNum, gSaveBlock1Ptr->location.mapGroup, 0, CALVIN_STARTING_Y + (tTimerHorizontal * 2) + 36);
   }
}

#undef tTimerHorizontal
#undef tMoveStep
#undef tTimerVertical

#define tState   data[0]
#define tTimer   data[1]
#define tTaskId1 data[2]
#define tTaskId2 data[3]

static void Task_HandleTruckSequence(u8 taskId)
{
   s16 *data = gTasks[taskId].data;

    switch (tState)
    {
    case 0:
        tTimer++;
        if (tTimer == 60)
        {
            SetCameraPanningCallback(NULL);
            tTimer = 0;
            tState = 1;
            PlaySE(SE_WARP_IN);
        }
        break;
    case 1:
        tTimer++;
        if (tTimer == 30)
        {
            FadeInFromBlack();
            tTimer = 0;
            tState = 2;
            tTaskId1 = CreateTask(Task_Truck1, 0xA);
        }
        break;
    case 2:
        tTimer++;
        if (!gPaletteFade.active && gTasks[tTaskId1].data[0] > 90)
        {
            PlaySE(SE_WARP_OUT);
            tTimer = 0;
            DestroyTask(tTaskId1);
            tTaskId2 = CreateTask(Task_Truck2, 0xA);
            tState = 3;
        }
        break;
    case 3:
        if (!gTasks[tTaskId2].isActive)
        {
            // Task_Truck2 / Task_Truck3 has finished
            InstallCameraPanAheadCallback();
            tTimer = 0;
            tState = 4;
        }
        break;
    case 4:
        tTimer++;
        if (tTimer == 1)
        {
            tTimer = 0;
            tState = 5;
        }
        break;
    case 5:
        tTimer++;
        if (tTimer == 60)
        {
            DrawWholeMapView();
            PlaySE(SE_TRUCK_DOOR);
            DestroyTask(taskId);
            UnlockPlayerFieldControls();
        }
        break;
    }
}

#undef tMorganY
#undef tCalvinY
#undef tPlayerY

void ExecuteTruckSequence(void)
{
    DrawWholeMapView();
    LockPlayerFieldControls();
    CpuFastFill(0, gPlttBufferFaded, 0x400);
    CreateTask(Task_HandleTruckSequence, 0xA);
}

void EndTruckSequence(u8 taskId)
{
    if (!FuncIsActiveTask(Task_HandleTruckSequence))
    {
        SetObjectEventSpritePosByLocalIdAndMap(LOCALID_SLEEPING_MORGAN, gSaveBlock1Ptr->location.mapNum, gSaveBlock1Ptr->location.mapGroup, 0, 0);
        SetObjectEventSpritePosByLocalIdAndMap(LOCALID_SLEEPING_PLAYER, gSaveBlock1Ptr->location.mapNum, gSaveBlock1Ptr->location.mapGroup, 0, 0);
        SetObjectEventSpritePosByLocalIdAndMap(LOCALID_SLEEPING_CALVIN, gSaveBlock1Ptr->location.mapNum, gSaveBlock1Ptr->location.mapGroup, 0, 0);
    }
}

bool8 TrySetPortholeWarpDestination(void)
{
    s8 mapGroup, mapNum;
    s16 x, y;

    if (GetSSTidalLocation(&mapGroup, &mapNum, &x, &y) != SS_TIDAL_LOCATION_CURRENTS)
    {
        return FALSE;
    }
    else
    {
        SetWarpDestination(mapGroup, mapNum, WARP_ID_NONE, x, y);
        return TRUE;
    }
}

void Task_HandlePorthole(u8 taskId)
{
    s16 *data = gTasks[taskId].data;
    u16 *cruiseState = GetVarPointer(VAR_SS_TIDAL_STATE);
    struct WarpData *location = &gSaveBlock1Ptr->location;

    switch (data[0])
    {
    case INIT_PORTHOLE: // finish fading before making porthole finish.
        if (!gPaletteFade.active)
        {
            data[1] = 0;
            data[0] = EXECUTE_MOVEMENT; // execute movement before checking if should be exited. strange?
        }
        break;
    case IDLE_CHECK:
        if (JOY_NEW(A_BUTTON))
            data[1] = 1;
        if (!ScriptMovement_IsObjectMovementFinished(OBJ_EVENT_ID_PLAYER, location->mapNum, location->mapGroup))
            return;
        if (CountSSTidalStep(1) == TRUE)
        {
            if (*cruiseState == SS_TIDAL_DEPART_SLATEPORT)
                *cruiseState = SS_TIDAL_EXIT_CURRENTS_RIGHT;
            else
                *cruiseState = SS_TIDAL_EXIT_CURRENTS_LEFT;
            data[0] = EXIT_PORTHOLE;
            return;
        }
        data[0] = EXECUTE_MOVEMENT;
        //fallthrough
    case EXECUTE_MOVEMENT:
        if (data[1])
        {
            data[0] = EXIT_PORTHOLE;
            return;
        }

        if (*cruiseState == SS_TIDAL_DEPART_SLATEPORT)
        {
            ScriptMovement_StartObjectMovementScript(OBJ_EVENT_ID_PLAYER, location->mapNum, location->mapGroup, sSSTidalSailEastMovementScript);
            data[0] = IDLE_CHECK;
        }
        else
        {
            ScriptMovement_StartObjectMovementScript(OBJ_EVENT_ID_PLAYER, location->mapNum, location->mapGroup, sSSTidalSailWestMovementScript);
            data[0] = IDLE_CHECK;
        }
        break;
    case EXIT_PORTHOLE:
        FlagClear(FLAG_DONT_TRANSITION_MUSIC);
        FlagClear(FLAG_HIDE_MAP_NAME_POPUP);
        SetWarpDestinationToDynamicWarp(0);
        DoDiveWarp();
        DestroyTask(taskId);
        break;
    }
}

static void ShowSSTidalWhileSailing(void)
{
    u8 spriteId = CreateObjectGraphicsSprite(OBJ_EVENT_GFX_SS_TIDAL, SpriteCallbackDummy, 112, 80, 0);

    gSprites[spriteId].coordOffsetEnabled = FALSE;

    if (VarGet(VAR_SS_TIDAL_STATE) == SS_TIDAL_DEPART_SLATEPORT)
        StartSpriteAnim(&gSprites[spriteId], GetFaceDirectionAnimNum(DIR_EAST));
    else
        StartSpriteAnim(&gSprites[spriteId], GetFaceDirectionAnimNum(DIR_WEST));
}

void FieldCB_ShowPortholeView(void)
{
    ShowSSTidalWhileSailing();
    gObjectEvents[gPlayerAvatar.objectEventId].invisible = TRUE;
    FadeInFromBlack();
    CreateTask(Task_HandlePorthole, 80);
    LockPlayerFieldControls();
}

void LookThroughPorthole(void)
{
    FlagSet(FLAG_SYS_CRUISE_MODE);
    FlagSet(FLAG_DONT_TRANSITION_MUSIC);
    FlagSet(FLAG_HIDE_MAP_NAME_POPUP);
    SetDynamicWarp(0, gSaveBlock1Ptr->location.mapGroup, gSaveBlock1Ptr->location.mapNum, WARP_ID_NONE);
    TrySetPortholeWarpDestination();
    DoPortholeWarp();
}
