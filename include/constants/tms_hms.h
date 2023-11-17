#ifndef GUARD_CONSTANTS_TMS_HMS_H
#define GUARD_CONSTANTS_TMS_HMS_H

#define FOREACH_TM(F) \
    F(FOCUS_PUNCH) \
    F(DRAGON_CLAW) \
    F(WATER_PULSE) \
    F(CALM_MIND) \
    F(ROAR) \
    F(TOXIC) \
    F(LEAF_BLADE) \
    F(BULK_UP) \
    F(BULLET_SEED) \
    F(HIDDEN_POWER) \
    F(BLAZE_KICK) \
    F(LIMBER_UP) \
    F(ICE_BEAM) \
    F(BLIZZARD) \
    F(HYPER_BEAM) \
    F(GROWTH) \
    F(PROTECT) \
    F(DARK_PULSE) \
    F(SOLAR_BEAM) \
    F(SAFEGUARD) \
    F(REFLECT) \
    F(LIGHT_SCREEN) \
    F(IRON_TAIL) \
    F(THUNDERBOLT) \
    F(THUNDER) \
    F(EARTHQUAKE) \
    F(RETURN) \
    F(TOMBSTONER) \
    F(PSYCHIC) \
    F(SHEAR_WIND) \
    F(BRICK_BREAK) \
    F(DOUBLE_TEAM) \
    F(GIGA_DRAIN) \
    F(ICICLE_CRASH) \
    F(FLAMETHROWER) \
    F(SLUDGE_BOMB) \
    F(STONE_EDGE) \
    F(FIRE_BLAST) \
    F(SHADOW_BALL) \
    F(HURRICANE) \
    F(DAZZLING_GLEAM) \
    F(FACADE) \
    F(SECRET_POWER) \
    F(ATTRACT) \
    F(THUNDER_WAVE) \
    F(WILL_O_WISP) \
    F(COLD_SNAP) \
    F(GASLIGHT) \
    F(TAUNT) \
    F(WASH_OFF)

#define FOREACH_HM(F) \
    F(CUT) \
    F(FLY) \
    F(SURF) \
    F(STRENGTH) \
    F(FLASH) \
    F(ROCK_SMASH) \
    F(WATERFALL) \
    F(DIVE)

#define FOREACH_TMHM(F) \
    FOREACH_TM(F) \
    FOREACH_HM(F)

#endif
