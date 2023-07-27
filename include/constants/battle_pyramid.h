#ifndef GUARD_CONSTANTS_BATTLE_PYRAMID_H
#define GUARD_CONSTANTS_BATTLE_PYRAMID_H

#define TOTAL_PYRAMID_ROUNDS 20
#define PICKUP_ITEMS_PER_ROUND 10

#define HINT_EXIT_DIRECTION                   0
#define HINT_REMAINING_ITEMS                  1
#define HINT_REMAINING_TRAINERS               2
#define HINT_EXIT_SHORT_REMAINING_TRAINERS    3
#define HINT_EXIT_SHORT_REMAINING_ITEMS       4
#define HINT_EXIT_MEDIUM_REMAINING_TRAINERS   5
#define HINT_EXIT_MEDIUM_REMAINING_ITEMS      6
#define HINT_EXIT_FAR_REMAINING_TRAINERS      7
#define HINT_EXIT_FAR_REMAINING_ITEMS         8

#define OBJ_TRAINERS  0
#define OBJ_ITEMS     1

#define OBJ_POSITIONS_UNIFORM               0
#define OBJ_POSITIONS_IN_AND_NEAR_ENTRANCE  1
#define OBJ_POSITIONS_IN_AND_NEAR_EXIT      2
#define OBJ_POSITIONS_NEAR_ENTRANCE         3
#define OBJ_POSITIONS_NEAR_EXIT             4

// Functions IDs for sBattlePyramidFunctions / CallBattlePyramidFunction
#define BATTLE_PYRAMID_FUNC_INIT                0
#define BATTLE_PYRAMID_FUNC_GET_DATA            1
#define BATTLE_PYRAMID_FUNC_SET_DATA            2
#define BATTLE_PYRAMID_FUNC_SAVE                3
#define BATTLE_PYRAMID_FUNC_SET_PRIZE           4
#define BATTLE_PYRAMID_FUNC_GIVE_PRIZE          5 // unused
#define BATTLE_PYRAMID_FUNC_SEED_FLOOR          6
#define BATTLE_PYRAMID_FUNC_SET_ITEM            7
#define BATTLE_PYRAMID_FUNC_HIDE_ITEM           8
#define BATTLE_PYRAMID_FUNC_SET_TRAINERS        9
#define BATTLE_PYRAMID_FUNC_SHOW_HINT_TEXT      10
#define BATTLE_PYRAMID_FUNC_UPDATE_STREAK       11 // unused
#define BATTLE_PYRAMID_FUNC_IS_IN               12
#define BATTLE_PYRAMID_FUNC_UPDATE_LIGHT        13
#define BATTLE_PYRAMID_FUNC_CLEAR_HELD_ITEMS    14
#define BATTLE_PYRAMID_FUNC_SET_FLOOR_PALETTE   15
#define BATTLE_PYRAMID_FUNC_START_MENU          16 // unused
#define BATTLE_PYRAMID_FUNC_RESTORE_PARTY       17

#define PYRAMID_DATA_PRIZE                   0
#define PYRAMID_DATA_WIN_STREAK              1
#define PYRAMID_DATA_WIN_STREAK_ACTIVE       2
#define PYRAMID_DATA_WIN_STREAK_50           3 // the below streak data are redundant with the above when frontier.lvlMode is correct
#define PYRAMID_DATA_WIN_STREAK_OPEN         4
#define PYRAMID_DATA_WIN_STREAK_ACTIVE_50    5
#define PYRAMID_DATA_WIN_STREAK_ACTIVE_OPEN  6
#define PYRAMID_DATA_TRAINER_FLAGS           7

#define PYRAMID_LIGHT_SET_RADIUS  0
#define PYRAMID_LIGHT_INCR_RADIUS 1

#endif // GUARD_CONSTANTS_BATTLE_PYRAMID_H
