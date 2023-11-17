#define PLACEHOLDER_TWO_FRAME_ANIMATION(name)   \
static const union AnimCmd sAnim_##name##_1[] = \
{                                               \
    ANIMCMD_FRAME(0, 30),                       \
    ANIMCMD_FRAME(1, 30),                       \
    ANIMCMD_FRAME(0, 1),                        \
    ANIMCMD_END,                                \
}

static const union AnimCmd sAnim_None_1[] =
{
    ANIMCMD_FRAME(0, 30),
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Bulbasaur_1[] =
{
    ANIMCMD_FRAME(0, 30),
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Ivysaur_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_FRAME(1, 36),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Venusaur_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 25),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Charmander_1[] =
{
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_FRAME(1, 46),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Charmeleon_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 25),
    ANIMCMD_FRAME(0, 30),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Charizard_1[] =
{
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Squirtle_1[] =
{
    ANIMCMD_FRAME(1, 11),
    ANIMCMD_FRAME(0, 11),
    ANIMCMD_FRAME(1, 11),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Wartortle_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Blastoise_1[] =
{
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(1, 25),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Caterpie_1[] =
{
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Metapod_1[] =
{
    ANIMCMD_FRAME(1, 45),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Butterfree_1[] =
{
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 25),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Weedle_1[] =
{
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Kakuna_1[] =
{
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Beedrill_1[] =
{
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 35),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Pidgey_1[] =
{
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 25),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Pidgeotto_1[] =
{
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 35),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Pidgeot_1[] =
{
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Rattata_1[] =
{
    ANIMCMD_FRAME(1, 11),
    ANIMCMD_FRAME(0, 11),
    ANIMCMD_FRAME(1, 11),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Raticate_1[] =
{
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Spearow_1[] =
{
    ANIMCMD_FRAME(1, 11),
    ANIMCMD_FRAME(0, 11),
    ANIMCMD_FRAME(1, 11),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Fearow_1[] =
{
    ANIMCMD_FRAME(1, 7),
    ANIMCMD_FRAME(0, 7),
    ANIMCMD_FRAME(1, 7),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 7),
    ANIMCMD_FRAME(0, 7),
    ANIMCMD_FRAME(1, 7),
    ANIMCMD_FRAME(0, 7),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Ekans_1[] =
{
    ANIMCMD_FRAME(1, 8),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_FRAME(1, 8),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_FRAME(1, 40),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Arbok_1[] =
{
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 35),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Pikachu_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 60),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Pikachu_2[] =
{
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(2, 20),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(2, 20),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Raichu_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Raichu_2[] =
{
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(2, 20),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(2, 20),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Sandshrew_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Sandshrew_2[] =
{
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(2, 20),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(2, 20),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Sandslash_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Sandslash_2[] =
{
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(2, 20),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(2, 20),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_NidoranF_1[] =
{
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 50),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Nidorina_1[] =
{
    ANIMCMD_FRAME(1, 40),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Nidoqueen_1[] =
{
    ANIMCMD_FRAME(1, 45),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_NidoranM_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Nidorino_1[] =
{
    ANIMCMD_FRAME(0, 7),
    ANIMCMD_FRAME(1, 23),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Nidoking_1[] =
{
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 40),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Clefairy_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Clefable_1[] =
{
    ANIMCMD_FRAME(0, 16),
    ANIMCMD_FRAME(1, 48),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Vulpix_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Vulpix_2[] =
{
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(2, 20),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(2, 20),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Ninetales_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Ninetales_2[] =
{
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(2, 20),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(2, 20),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Jigglypuff_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Jigglypuff_2[] =
{
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(2, 20),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(2, 20),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Wigglytuff_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Wigglytuff_2[] =
{
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(2, 20),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(2, 20),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Zubat_1[] =
{
    ANIMCMD_FRAME(0, 3),
    ANIMCMD_FRAME(1, 3),
    ANIMCMD_FRAME(0, 3),
    ANIMCMD_FRAME(1, 3),
    ANIMCMD_FRAME(0, 3),
    ANIMCMD_FRAME(1, 3),
    ANIMCMD_FRAME(0, 3),
    ANIMCMD_FRAME(1, 3),
    ANIMCMD_FRAME(0, 3),
    ANIMCMD_FRAME(1, 3),
    ANIMCMD_FRAME(0, 3),
    ANIMCMD_FRAME(1, 3),
    ANIMCMD_FRAME(0, 3),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Golbat_1[] =
{
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Oddish_1[] =
{
    ANIMCMD_FRAME(0, 11),
    ANIMCMD_FRAME(1, 11),
    ANIMCMD_FRAME(0, 11),
    ANIMCMD_FRAME(1, 11),
    ANIMCMD_FRAME(0, 11),
    ANIMCMD_FRAME(1, 11),
    ANIMCMD_FRAME(0, 6),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Gloom_1[] =
{
    ANIMCMD_FRAME(0, 21),
    ANIMCMD_FRAME(1, 45),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Vileplume_1[] =
{
    ANIMCMD_FRAME(1, 38),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Paras_1[] =
{
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Parasect_1[] =
{
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 35),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Venonat_1[] =
{
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 35),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Venomoth_1[] =
{
    ANIMCMD_FRAME(1, 4),
    ANIMCMD_FRAME(0, 4),
    ANIMCMD_FRAME(1, 4),
    ANIMCMD_FRAME(0, 4),
    ANIMCMD_FRAME(1, 4),
    ANIMCMD_FRAME(0, 4),
    ANIMCMD_FRAME(1, 4),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 4),
    ANIMCMD_FRAME(0, 4),
    ANIMCMD_FRAME(1, 4),
    ANIMCMD_FRAME(0, 4),
    ANIMCMD_FRAME(1, 4),
    ANIMCMD_FRAME(0, 4),
    ANIMCMD_FRAME(1, 4),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 4),
    ANIMCMD_FRAME(0, 4),
    ANIMCMD_FRAME(1, 4),
    ANIMCMD_FRAME(0, 4),
    ANIMCMD_FRAME(1, 4),
    ANIMCMD_FRAME(0, 4),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Diglett_1[] =
{
    ANIMCMD_FRAME(0, 25),
    ANIMCMD_FRAME(1, 35),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Dugtrio_1[] =
{
    ANIMCMD_FRAME(1, 35),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Meowth_1[] =
{
    ANIMCMD_FRAME(1, 8),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_FRAME(1, 8),
    ANIMCMD_FRAME(0, 17),
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Persian_1[] =
{
    ANIMCMD_FRAME(1, 50),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Psyduck_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Psyduck_2[] =
{
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(2, 20),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(2, 20),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Golduck_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Golduck_2[] =
{
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(2, 20),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(2, 20),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Mankey_1[] =
{
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 28),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Primeape_1[] =
{
    ANIMCMD_FRAME(0, 14),
    ANIMCMD_FRAME(1, 14),
    ANIMCMD_FRAME(0, 14),
    ANIMCMD_FRAME(1, 14),
    ANIMCMD_FRAME(0, 14),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Growlithe_1[] =
{
    ANIMCMD_FRAME(1, 8),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_FRAME(1, 8),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Arcanine_1[] =
{
    ANIMCMD_FRAME(1, 38),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Poliwag_1[] =
{
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Poliwhirl_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 25),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Poliwrath_1[] =
{
    ANIMCMD_FRAME(1, 45),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Abra_1[] =
{
    ANIMCMD_FRAME(0, 7),
    ANIMCMD_FRAME(1, 21),
    ANIMCMD_FRAME(0, 13),
    ANIMCMD_FRAME(1, 21),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Kadabra_1[] =
{
    ANIMCMD_FRAME(0, 12),
    ANIMCMD_FRAME(1, 45),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Alakazam_1[] =
{
    ANIMCMD_FRAME(0, 9),
    ANIMCMD_FRAME(1, 54),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Machop_1[] =
{
    ANIMCMD_FRAME(0, 6),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Machoke_1[] =
{
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(1, 44),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Machamp_1[] =
{
    ANIMCMD_FRAME(0, 11),
    ANIMCMD_FRAME(1, 11),
    ANIMCMD_FRAME(0, 11),
    ANIMCMD_FRAME(1, 11),
    ANIMCMD_FRAME(0, 11),
    ANIMCMD_FRAME(1, 11),
    ANIMCMD_FRAME(0, 11),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Bellsprout_1[] =
{
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 25),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Weepinbell_1[] =
{
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 25),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 25),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 25),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Victreebel_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Tentacool_1[] =
{
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 7),
    ANIMCMD_FRAME(1, 11),
    ANIMCMD_FRAME(0, 11),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Tentacruel_1[] =
{
    ANIMCMD_FRAME(0, 19),
    ANIMCMD_FRAME(1, 35),
    ANIMCMD_FRAME(0, 19),
    ANIMCMD_FRAME(1, 19),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Geodude_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 36),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Graveler_1[] =
{
    ANIMCMD_FRAME(0, 16),
    ANIMCMD_FRAME(1, 16),
    ANIMCMD_FRAME(0, 16),
    ANIMCMD_FRAME(1, 16),
    ANIMCMD_FRAME(0, 16),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Golem_1[] =
{
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_FRAME(1, 31),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Ponyta_1[] =
{
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Rapidash_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 40),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Slowpoke_1[] =
{
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(1, 50),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Slowbro_1[] =
{
    ANIMCMD_FRAME(1, 45),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Magnemite_1[] =
{
    ANIMCMD_FRAME(0, 28),
    ANIMCMD_FRAME(1, 28),
    ANIMCMD_FRAME(0, 28),
    ANIMCMD_FRAME(1, 28),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Magneton_1[] =
{
    ANIMCMD_FRAME(0, 14),
    ANIMCMD_FRAME(1, 14),
    ANIMCMD_FRAME(0, 14),
    ANIMCMD_FRAME(1, 14),
    ANIMCMD_FRAME(0, 14),
    ANIMCMD_FRAME(1, 14),
    ANIMCMD_FRAME(0, 14),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Farfetchd_1[] =
{
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Doduo_1[] =
{
    ANIMCMD_FRAME(0, 18),
    ANIMCMD_FRAME(1, 18),
    ANIMCMD_FRAME(0, 18),
    ANIMCMD_FRAME(1, 18),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Dodrio_1[] =
{
    ANIMCMD_FRAME(0, 12),
    ANIMCMD_FRAME(1, 12),
    ANIMCMD_FRAME(0, 12),
    ANIMCMD_FRAME(1, 12),
    ANIMCMD_FRAME(0, 12),
    ANIMCMD_FRAME(1, 12),
    ANIMCMD_FRAME(0, 12),
    ANIMCMD_FRAME(1, 12),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Seel_1[] =
{
    ANIMCMD_FRAME(1, 40),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Dewgong_1[] =
{
    ANIMCMD_FRAME(0, 30),
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(0, 30),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Grimer_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Grimer_2[] =
{
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(2, 20),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(2, 20),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Muk_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Muk_2[] =
{
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(2, 20),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(2, 20),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Shellder_1[] =
{
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 45),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Cloyster_1[] =
{
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 25),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Gastly_1[] =
{
    ANIMCMD_FRAME(1, 50),
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Haunter_1[] =
{
    ANIMCMD_FRAME(1, 8),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 35),
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Gengar_1[] =
{
    ANIMCMD_FRAME(1, 50),
    ANIMCMD_FRAME(1, 40),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Onix_1[] =
{
    ANIMCMD_FRAME(1, 50),
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(0, 30),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Drowzee_1[] =
{
    ANIMCMD_FRAME(1, 12),
    ANIMCMD_FRAME(0, 12),
    ANIMCMD_FRAME(1, 12),
    ANIMCMD_FRAME(0, 12),
    ANIMCMD_FRAME(1, 45),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Hypno_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Krabby_1[] =
{
    ANIMCMD_FRAME(1, 8),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_FRAME(1, 8),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_FRAME(1, 8),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Kingler_1[] =
{
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 25),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Voltorb_1[] =
{
    ANIMCMD_FRAME(0, 4),
    ANIMCMD_FRAME(1, 25),
    ANIMCMD_FRAME(0, 4),
    ANIMCMD_FRAME(1, 25),
    ANIMCMD_FRAME(0, 4),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Electrode_1[] =
{
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Exeggcute_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Exeggutor_1[] =
{
    ANIMCMD_FRAME(1, 35),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Cubone_1[] =
{
    ANIMCMD_FRAME(1, 14),
    ANIMCMD_FRAME(0, 14),
    ANIMCMD_FRAME(1, 14),
    ANIMCMD_FRAME(0, 14),
    ANIMCMD_FRAME(1, 14),
    ANIMCMD_FRAME(0, 14),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Marowak_1[] =
{
    ANIMCMD_FRAME(1, 14),
    ANIMCMD_FRAME(0, 14),
    ANIMCMD_FRAME(1, 14),
    ANIMCMD_FRAME(0, 14),
    ANIMCMD_FRAME(1, 14),
    ANIMCMD_FRAME(0, 14),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Hitmonlee_1[] =
{
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Hitmonchan_1[] =
{
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 25),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Lickitung_1[] =
{
    ANIMCMD_FRAME(0, 28),
    ANIMCMD_FRAME(1, 32),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Koffing_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Koffing_2[] =
{
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(2, 20),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(2, 20),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Weezing_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Weezing_2[] =
{
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(2, 20),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(2, 20),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Rhyhorn_1[] =
{
    ANIMCMD_FRAME(0, 11),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Rhyhorn_2[] =
{
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(2, 20),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(2, 20),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Rhydon_1[] =
{
    ANIMCMD_FRAME(0, 11),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 48),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Rhydon_2[] =
{
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(2, 20),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(2, 20),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Chansey_1[] =
{
    ANIMCMD_FRAME(0, 30),
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Tangela_1[] =
{
    ANIMCMD_FRAME(1, 9),
    ANIMCMD_FRAME(0, 9),
    ANIMCMD_FRAME(1, 9),
    ANIMCMD_FRAME(0, 9),
    ANIMCMD_FRAME(1, 9),
    ANIMCMD_FRAME(0, 9),
    ANIMCMD_FRAME(1, 9),
    ANIMCMD_FRAME(0, 9),
    ANIMCMD_FRAME(1, 9),
    ANIMCMD_FRAME(0, 9),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Kangaskhan_1[] =
{
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Horsea_1[] =
{
    ANIMCMD_FRAME(0, 11),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Horsea_2[] =
{
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(2, 20),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(2, 20),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Seadra_1[] =
{
    ANIMCMD_FRAME(0, 11),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Seadra_2[] =
{
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(2, 20),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(2, 20),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Goldeen_1[] =
{
    ANIMCMD_FRAME(0, 16),
    ANIMCMD_FRAME(1, 16),
    ANIMCMD_FRAME(0, 16),
    ANIMCMD_FRAME(1, 16),
    ANIMCMD_FRAME(0, 16),
    ANIMCMD_FRAME(1, 16),
    ANIMCMD_FRAME(0, 16),
    ANIMCMD_FRAME(1, 16),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Seaking_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Staryu_1[] =
{
    ANIMCMD_FRAME(0, 11),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Staryu_2[] =
{
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(2, 20),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(2, 20),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Starmie_1[] =
{
    ANIMCMD_FRAME(0, 11),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Starmie_2[] =
{
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(2, 20),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(2, 20),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_MrMime_1[] =
{
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Scyther_1[] =
{
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 25),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Jynx_1[] =
{
    ANIMCMD_FRAME(1, 40),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 50),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Electabuzz_1[] =
{
    ANIMCMD_FRAME(0, 22),
    ANIMCMD_FRAME(1, 22),
    ANIMCMD_FRAME(0, 22),
    ANIMCMD_FRAME(1, 22),
    ANIMCMD_FRAME(0, 11),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Magmar_1[] =
{
    ANIMCMD_FRAME(1, 40),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Pinsir_1[] =
{
    ANIMCMD_FRAME(0, 11),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Pinsir_2[] =
{
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(2, 20),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(2, 20),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Tauros_1[] =
{
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(1, 25),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Magikarp_1[] =
{
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_FRAME(1, 8),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_FRAME(1, 8),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_FRAME(1, 8),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_FRAME(1, 8),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Gyarados_1[] =
{
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_FRAME(1, 32),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Lapras_1[] =
{
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Ditto_1[] =
{
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Eevee_1[] =
{
    ANIMCMD_FRAME(1, 33),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Vaporeon_1[] =
{
    ANIMCMD_FRAME(1, 40),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Jolteon_1[] =
{
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Flareon_1[] =
{
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(0, 30),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Porygon_1[] =
{
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Omanyte_1[] =
{
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Omastar_1[] =
{
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Kabuto_1[] =
{
    ANIMCMD_FRAME(1, 8),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_FRAME(1, 8),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(1, 8),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_FRAME(1, 8),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Kabutops_1[] =
{
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Aerodactyl_1[] =
{
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 25),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 25),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Snorlax_1[] =
{
    ANIMCMD_FRAME(1, 50),
    ANIMCMD_FRAME(1, 50),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Articuno_1[] =
{
    ANIMCMD_FRAME(1, 25),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Zapdos_1[] =
{
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Moltres_1[] =
{
    ANIMCMD_FRAME(1, 3),
    ANIMCMD_FRAME(0, 3),
    ANIMCMD_FRAME(1, 3),
    ANIMCMD_FRAME(0, 3),
    ANIMCMD_FRAME(1, 3),
    ANIMCMD_FRAME(0, 3),
    ANIMCMD_FRAME(1, 3),
    ANIMCMD_FRAME(0, 3),
    ANIMCMD_FRAME(1, 3),
    ANIMCMD_FRAME(0, 3),
    ANIMCMD_FRAME(1, 3),
    ANIMCMD_FRAME(0, 3),
    ANIMCMD_FRAME(1, 3),
    ANIMCMD_FRAME(0, 3),
    ANIMCMD_FRAME(1, 3),
    ANIMCMD_FRAME(0, 3),
    ANIMCMD_FRAME(1, 3),
    ANIMCMD_FRAME(0, 3),
    ANIMCMD_FRAME(1, 3),
    ANIMCMD_FRAME(0, 3),
    ANIMCMD_FRAME(1, 3),
    ANIMCMD_FRAME(0, 3),
    ANIMCMD_FRAME(1, 3),
    ANIMCMD_FRAME(0, 3),
    ANIMCMD_FRAME(1, 3),
    ANIMCMD_FRAME(0, 3),
    ANIMCMD_FRAME(1, 3),
    ANIMCMD_FRAME(0, 3),
    ANIMCMD_FRAME(1, 3),
    ANIMCMD_FRAME(0, 3),
    ANIMCMD_FRAME(1, 3),
    ANIMCMD_FRAME(0, 3),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Dratini_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Dragonair_1[] =
{
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Dragonite_1[] =
{
    ANIMCMD_FRAME(1, 50),
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Mewtwo_1[] =
{
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Mew_1[] =
{
    ANIMCMD_FRAME(1, 50),
    ANIMCMD_FRAME(1, 40),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Chikorita_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Bayleef_1[] =
{
    ANIMCMD_FRAME(1, 40),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Meganium_1[] =
{
    ANIMCMD_FRAME(1, 40),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Cyndaquil_1[] =
{
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Quilava_1[] =
{
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Typhlosion_1[] =
{
    ANIMCMD_FRAME(1, 40),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Totodile_1[] =
{
    ANIMCMD_FRAME(1, 8),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_FRAME(1, 8),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_FRAME(1, 8),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Croconaw_1[] =
{
    ANIMCMD_FRAME(1, 40),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Feraligatr_1[] =
{
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 25),
    ANIMCMD_FRAME(0, 40),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Sentret_1[] =
{
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Furret_1[] =
{
    ANIMCMD_FRAME(1, 35),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Hoothoot_1[] =
{
    ANIMCMD_FRAME(1, 7),
    ANIMCMD_FRAME(0, 7),
    ANIMCMD_FRAME(1, 7),
    ANIMCMD_FRAME(0, 7),
    ANIMCMD_FRAME(1, 7),
    ANIMCMD_FRAME(0, 7),
    ANIMCMD_FRAME(1, 7),
    ANIMCMD_FRAME(0, 7),
    ANIMCMD_FRAME(1, 7),
    ANIMCMD_FRAME(0, 7),
    ANIMCMD_FRAME(1, 7),
    ANIMCMD_FRAME(0, 7),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Noctowl_1[] =
{
    ANIMCMD_FRAME(1, 40),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Ledyba_1[] =
{
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Ledian_1[] =
{
    ANIMCMD_FRAME(1, 25),
    ANIMCMD_FRAME(0, 25),
    ANIMCMD_FRAME(1, 25),
    ANIMCMD_FRAME(0, 25),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Spinarak_1[] =
{
    ANIMCMD_FRAME(1, 6),
    ANIMCMD_FRAME(0, 6),
    ANIMCMD_FRAME(1, 6),
    ANIMCMD_FRAME(0, 6),
    ANIMCMD_FRAME(1, 6),
    ANIMCMD_FRAME(0, 6),
    ANIMCMD_FRAME(1, 6),
    ANIMCMD_FRAME(0, 6),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Ariados_1[] =
{
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Crobat_1[] =
{
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_FRAME(1, 2),
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_FRAME(1, 2),
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_FRAME(1, 2),
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_FRAME(1, 2),
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_FRAME(1, 2),
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_FRAME(1, 2),
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_FRAME(1, 2),
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_FRAME(1, 2),
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Chinchou_1[] =
{
    ANIMCMD_FRAME(0, 11),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Chinchou_2[] =
{
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(2, 20),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(2, 20),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Lanturn_1[] =
{
    ANIMCMD_FRAME(0, 11),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Lanturn_2[] =
{
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(2, 20),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(2, 20),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Pichu_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Pichu_2[] =
{
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(2, 20),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(2, 20),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Cleffa_1[] =
{
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Igglybuff_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Igglybuff_2[] =
{
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(2, 20),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(2, 20),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Togepi_1[] =
{
    ANIMCMD_FRAME(1, 50),
    ANIMCMD_FRAME(1, 50),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Togetic_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Natu_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Natu_2[] =
{
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(2, 20),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(2, 20),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Xatu_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 45),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Xatu_2[] =
{
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(2, 20),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(2, 20),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Mareep_1[] =
{
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Flaaffy_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Ampharos_1[] =
{
    ANIMCMD_FRAME(1, 50),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Bellossom_1[] =
{
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Marill_1[] =
{
    ANIMCMD_FRAME(0, 30),
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Azumarill_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Sudowoodo_1[] =
{
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Politoed_1[] =
{
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 35),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Hoppip_1[] =
{
    ANIMCMD_FRAME(1, 25),
    ANIMCMD_FRAME(0, 25),
    ANIMCMD_FRAME(1, 25),
    ANIMCMD_FRAME(0, 25),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Skiploom_1[] =
{
    ANIMCMD_FRAME(1, 12),
    ANIMCMD_FRAME(0, 12),
    ANIMCMD_FRAME(1, 12),
    ANIMCMD_FRAME(0, 30),
    ANIMCMD_FRAME(1, 12),
    ANIMCMD_FRAME(0, 12),
    ANIMCMD_FRAME(1, 12),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Jumpluff_1[] =
{
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 25),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 25),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Aipom_1[] =
{
    ANIMCMD_FRAME(1, 35),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Sunkern_1[] =
{
    ANIMCMD_FRAME(1, 8),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_FRAME(1, 8),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_FRAME(1, 8),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Sunflora_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Yanma_1[] =
{
    ANIMCMD_FRAME(1, 2),
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_FRAME(1, 2),
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_FRAME(1, 2),
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_FRAME(1, 2),
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_FRAME(1, 2),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(1, 2),
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_FRAME(1, 2),
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_FRAME(1, 2),
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_FRAME(1, 2),
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_FRAME(1, 2),
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_FRAME(1, 2),
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Wooper_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Quagsire_1[] =
{
    ANIMCMD_FRAME(1, 32),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Espeon_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 25),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Umbreon_1[] =
{
    ANIMCMD_FRAME(1, 40),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Murkrow_1[] =
{
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Slowking_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Misdreavus_1[] =
{
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Unown_1[] =
{
    ANIMCMD_FRAME(0, 30),
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Wobbuffet_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Wobbuffet_2[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Girafarig_1[] =
{
    ANIMCMD_FRAME(0, 30),
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(0, 30),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Girafarig_2[] =
{
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(2, 20),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(2, 20),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Pineco_1[] =
{
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Forretress_1[] =
{
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Dunsparce_1[] =
{
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Gligar_1[] =
{
    ANIMCMD_FRAME(1, 17),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Steelix_1[] =
{
    ANIMCMD_FRAME(0, 7),
    ANIMCMD_FRAME(1, 21),
    ANIMCMD_FRAME(0, 13),
    ANIMCMD_FRAME(1, 21),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Snubbull_1[] =
{
    ANIMCMD_FRAME(1, 32),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Granbull_1[] =
{
    ANIMCMD_FRAME(1, 35),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Qwilfish_1[] =
{
    ANIMCMD_FRAME(1, 8),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_FRAME(1, 8),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 50),
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(0, 30),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Scizor_1[] =
{
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Shuckle_1[] =
{
    ANIMCMD_FRAME(1, 50),
    ANIMCMD_FRAME(1, 50),
    ANIMCMD_FRAME(0, 30),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Heracross_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Sneasel_1[] =
{
    ANIMCMD_FRAME(1, 8),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_FRAME(1, 8),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_FRAME(1, 8),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Teddiursa_1[] =
{
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Ursaring_1[] =
{
    ANIMCMD_FRAME(1, 40),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Slugma_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Slugma_2[] =
{
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(2, 20),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(2, 20),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Magcargo_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Magcargo_2[] =
{
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(2, 20),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(2, 20),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Swinub_1[] =
{
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Piloswine_1[] =
{
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Corsola_1[] =
{
    ANIMCMD_FRAME(0, 11),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Corsola_2[] =
{
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(2, 20),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(2, 20),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Remoraid_1[] =
{
    ANIMCMD_FRAME(0, 30),
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(0, 30),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Octillery_1[] =
{
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Delibird_1[] =
{
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Mantine_1[] =
{
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(0, 30),
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(0, 40),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Skarmory_1[] =
{
    ANIMCMD_FRAME(1, 40),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Houndour_1[] =
{
    ANIMCMD_FRAME(1, 40),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Houndoom_1[] =
{
    ANIMCMD_FRAME(1, 40),
    ANIMCMD_FRAME(0, 30),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Kingdra_1[] =
{
    ANIMCMD_FRAME(0, 11),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Kingdra_2[] =
{
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(2, 20),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(2, 20),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Phanpy_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Phanpy_2[] =
{
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(2, 20),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(2, 20),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Donphan_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 25),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Porygon2_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Stantler_1[] =
{
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Smeargle_1[] =
{
    ANIMCMD_FRAME(1, 12),
    ANIMCMD_FRAME(0, 12),
    ANIMCMD_FRAME(1, 12),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Tyrogue_1[] =
{
    ANIMCMD_FRAME(1, 40),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Hitmontop_1[] =
{
    ANIMCMD_FRAME(0, 4),
    ANIMCMD_FRAME(1, 4),
    ANIMCMD_FRAME(0, 4),
    ANIMCMD_FRAME(1, 4),
    ANIMCMD_FRAME(0, 4),
    ANIMCMD_FRAME(1, 4),
    ANIMCMD_FRAME(0, 4),
    ANIMCMD_FRAME(1, 4),
    ANIMCMD_FRAME(0, 4),
    ANIMCMD_FRAME(1, 4),
    ANIMCMD_FRAME(0, 4),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Smoochum_1[] =
{
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Elekid_1[] =
{
    ANIMCMD_FRAME(0, 30),
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Magby_1[] =
{
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Miltank_1[] =
{
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(0, 30),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Blissey_1[] =
{
    ANIMCMD_FRAME(0, 30),
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(0, 30),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Raikou_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_FRAME(1, 36),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Entei_1[] =
{
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Suicune_1[] =
{
    ANIMCMD_FRAME(1, 40),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Larvitar_1[] =
{
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Pupitar_1[] =
{
    ANIMCMD_FRAME(1, 40),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Tyranitar_1[] =
{
    ANIMCMD_FRAME(1, 50),
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Lugia_1[] =
{
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_HoOh_1[] =
{
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Celebi_1[] =
{
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(0, 30),
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(0, 30),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_OldUnownB_1[] =
{
    ANIMCMD_FRAME(0, 30),
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Treecko_1[] =
{
    ANIMCMD_FRAME(0, 6),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 6),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 3),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Grovyle_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 18),
    ANIMCMD_FRAME(0, 7),
    ANIMCMD_FRAME(1, 12),
    ANIMCMD_FRAME(0, 6),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Sceptile_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 26),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Torchic_1[] =
{
    ANIMCMD_FRAME(0, 7),
    ANIMCMD_FRAME(1, 4),
    ANIMCMD_FRAME(0, 4),
    ANIMCMD_FRAME(1, 4),
    ANIMCMD_FRAME(0, 4),
    ANIMCMD_FRAME(1, 4),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Combusken_1[] =
{
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_FRAME(1, 25),
    ANIMCMD_FRAME(0, 12),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Blaziken_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_FRAME(1, 25),
    ANIMCMD_FRAME(0, 7),
    ANIMCMD_FRAME(1, 7),
    ANIMCMD_FRAME(0, 7),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Blaziken_2[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_FRAME(2, 8),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Blaziken_3[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(2, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Blaziken_4[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Mudkip_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 8),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 13),
    ANIMCMD_FRAME(0, 7),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Marshtomp_1[] =
{
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Swampert_1[] =
{
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_FRAME(1, 44),
    ANIMCMD_FRAME(0, 18),
    ANIMCMD_FRAME(1, 18),
    ANIMCMD_FRAME(0, 7),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Poochyena_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 44),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Mightyena_1[] =
{
    ANIMCMD_FRAME(0, 27),
    ANIMCMD_FRAME(1, 6),
    ANIMCMD_FRAME(0, 6),
    ANIMCMD_FRAME(1, 6),
    ANIMCMD_FRAME(0, 6),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Zigzagoon_1[] =
{
    ANIMCMD_FRAME(0, 27),
    ANIMCMD_FRAME(1, 6),
    ANIMCMD_FRAME(0, 6),
    ANIMCMD_FRAME(1, 6),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Linoone_1[] =
{
    ANIMCMD_FRAME(0, 14),
    ANIMCMD_FRAME(1, 14),
    ANIMCMD_FRAME(0, 14),
    ANIMCMD_FRAME(1, 14),
    ANIMCMD_FRAME(0, 14),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Wurmple_1[] =
{
    ANIMCMD_FRAME(0, 22),
    ANIMCMD_FRAME(1, 35),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Silcoon_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 25),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Silcoon_2[] =
{
    ANIMCMD_FRAME(1, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Beautifly_1[] =
{
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_FRAME(1, 2),
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_FRAME(1, 2),
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_FRAME(1, 2),
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_FRAME(1, 2),
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Beautifly_2[] =
{
    ANIMCMD_FRAME(1, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Cascoon_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Cascoon_2[] =
{
    ANIMCMD_FRAME(1, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Dustox_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_FRAME(1, 1),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_FRAME(1, 1),
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_FRAME(1, 2),
    ANIMCMD_FRAME(0, 3),
    ANIMCMD_FRAME(1, 3),
    ANIMCMD_FRAME(0, 4),
    ANIMCMD_FRAME(1, 4),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_FRAME(1, 8),
    ANIMCMD_FRAME(0, 12),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Dustox_2[] =
{
    ANIMCMD_FRAME(1, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Lotad_1[] =
{
    ANIMCMD_FRAME(0, 22),
    ANIMCMD_FRAME(1, 55),
    ANIMCMD_FRAME(0, 22),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Lombre_1[] =
{
    ANIMCMD_FRAME(0, 6),
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(0, 6),
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(0, 7),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Ludicolo_1[] =
{
    ANIMCMD_FRAME(0, 22),
    ANIMCMD_FRAME(1, 22),
    ANIMCMD_FRAME(0, 22),
    ANIMCMD_FRAME(1, 22),
    ANIMCMD_FRAME(0, 22),
    ANIMCMD_FRAME(1, 22),
    ANIMCMD_FRAME(0, 22),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Seedot_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Nuzleaf_1[] =
{
    ANIMCMD_FRAME(0, 7),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 7),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 7),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 7),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 7),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Shiftry_1[] =
{
    ANIMCMD_FRAME(0, 7),
    ANIMCMD_FRAME(1, 35),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Nincada_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 22),
    ANIMCMD_FRAME(0, 11),
    ANIMCMD_FRAME(1, 33),
    ANIMCMD_FRAME(0, 11),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Ninjask_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_FRAME(1, 1),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_FRAME(1, 1),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_FRAME(1, 1),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_FRAME(1, 1),
    ANIMCMD_FRAME(0, 33),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_FRAME(1, 1),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_FRAME(1, 1),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_FRAME(1, 1),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_FRAME(1, 1),
    ANIMCMD_FRAME(0, 11),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Shedinja_1[] =
{
    ANIMCMD_FRAME(0, 33),
    ANIMCMD_FRAME(1, 33),
    ANIMCMD_FRAME(0, 33),
    ANIMCMD_FRAME(1, 33),
    ANIMCMD_FRAME(0, 11),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Taillow_1[] =
{
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_FRAME(1, 2),
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_FRAME(1, 2),
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_FRAME(1, 2),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Swellow_1[] =
{
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 18),
    ANIMCMD_FRAME(0, 11),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Shroomish_1[] =
{
    ANIMCMD_FRAME(0, 6),
    ANIMCMD_FRAME(1, 6),
    ANIMCMD_FRAME(0, 6),
    ANIMCMD_FRAME(1, 6),
    ANIMCMD_FRAME(0, 6),
    ANIMCMD_FRAME(1, 6),
    ANIMCMD_FRAME(0, 6),
    ANIMCMD_FRAME(1, 6),
    ANIMCMD_FRAME(0, 6),
    ANIMCMD_FRAME(1, 6),
    ANIMCMD_FRAME(0, 6),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Breloom_1[] =
{
    ANIMCMD_FRAME(0, 6),
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(0, 6),
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(0, 7),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Spinda_1[] =
{
    ANIMCMD_FRAME(0, 17),
    ANIMCMD_FRAME(1, 23),
    ANIMCMD_FRAME(0, 17),
    ANIMCMD_FRAME(1, 23),
    ANIMCMD_FRAME(0, 13),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Wingull_1[] =
{
    ANIMCMD_FRAME(0, 17),
    ANIMCMD_FRAME(1, 23),
    ANIMCMD_FRAME(0, 13),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Pelipper_1[] =
{
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Surskit_1[] =
{
    ANIMCMD_FRAME(0, 6),
    ANIMCMD_FRAME(1, 18),
    ANIMCMD_FRAME(0, 6),
    ANIMCMD_FRAME(1, 18),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Surskit_2[] =
{
    ANIMCMD_FRAME(1, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Masquerain_1[] =
{
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_FRAME(1, 8),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_FRAME(1, 8),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_FRAME(1, 8),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_FRAME(1, 8),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Masquerain_2[] =
{
    ANIMCMD_FRAME(1, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Wailmer_1[] =
{
    ANIMCMD_FRAME(0, 22),
    ANIMCMD_FRAME(1, 22),
    ANIMCMD_FRAME(0, 22),
    ANIMCMD_FRAME(1, 22),
    ANIMCMD_FRAME(0, 22),
    ANIMCMD_FRAME(1, 22),
    ANIMCMD_FRAME(0, 22),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Wailord_1[] =
{
    ANIMCMD_FRAME(0, 26),
    ANIMCMD_FRAME(1, 48),
    ANIMCMD_FRAME(0, 33),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Skitty_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 35),
    ANIMCMD_FRAME(0, 9),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Delcatty_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 46),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Kecleon_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 18),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_FRAME(1, 8),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Baltoy_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 50),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Claydol_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Nosepass_1[] =
{
    ANIMCMD_FRAME(0, 27),
    ANIMCMD_FRAME(1, 27),
    ANIMCMD_FRAME(0, 27),
    ANIMCMD_FRAME(1, 27),
    ANIMCMD_FRAME(0, 27),
    ANIMCMD_FRAME(1, 27),
    ANIMCMD_FRAME(0, 3),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Torkoal_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Sableye_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Barboach_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 50),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Whiscash_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Luvdisc_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Corphish_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 50),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Crawdaunt_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Feebas_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Milotic_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Carvanha_1[] =
{
    ANIMCMD_FRAME(0, 6),
    ANIMCMD_FRAME(1, 6),
    ANIMCMD_FRAME(0, 6),
    ANIMCMD_FRAME(1, 6),
    ANIMCMD_FRAME(0, 6),
    ANIMCMD_FRAME(1, 6),
    ANIMCMD_FRAME(0, 6),
    ANIMCMD_FRAME(1, 6),
    ANIMCMD_FRAME(0, 6),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Sharpedo_1[] =
{
    ANIMCMD_FRAME(0, 6),
    ANIMCMD_FRAME(1, 6),
    ANIMCMD_FRAME(0, 6),
    ANIMCMD_FRAME(1, 6),
    ANIMCMD_FRAME(0, 6),
    ANIMCMD_FRAME(1, 6),
    ANIMCMD_FRAME(0, 6),
    ANIMCMD_FRAME(1, 6),
    ANIMCMD_FRAME(0, 22),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Trapinch_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Vibrava_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 50),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Flygon_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 50),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Makuhita_1[] =
{
    ANIMCMD_FRAME(0, 7),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 7),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 7),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 7),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 22),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Hariyama_1[] =
{
    ANIMCMD_FRAME(0, 30),
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(1, 16),
    ANIMCMD_FRAME(0, 11),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Electrike_1[] =
{
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_FRAME(1, 25),
    ANIMCMD_FRAME(0, 17),
    ANIMCMD_FRAME(1, 25),
    ANIMCMD_FRAME(0, 3),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Manectric_1[] =
{
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_FRAME(1, 33),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 25),
    ANIMCMD_FRAME(0, 3),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Numel_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 40),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Camerupt_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Spheal_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 43),
    ANIMCMD_FRAME(1, 60),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Sealeo_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Walrein_1[] =
{
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 30),
    ANIMCMD_FRAME(1, 6),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Cacnea_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Cacturne_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Snorunt_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Glalie_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Lunatone_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Lunatone_2[] =
{
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(2, 20),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(2, 20),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Solrock_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Solrock_2[] =
{
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(2, 20),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(2, 20),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Azurill_1[] =
{
    ANIMCMD_FRAME(0, 12),
    ANIMCMD_FRAME(1, 12),
    ANIMCMD_FRAME(0, 12),
    ANIMCMD_FRAME(1, 12),
    ANIMCMD_FRAME(0, 12),
    ANIMCMD_FRAME(1, 12),
    ANIMCMD_FRAME(0, 12),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Spoink_1[] =
{
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Grumpig_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Plusle_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Minun_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Mawile_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Meditite_1[] =
{
    ANIMCMD_FRAME(0, 22),
    ANIMCMD_FRAME(1, 2),
    ANIMCMD_FRAME(0, 22),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Medicham_1[] =
{
    ANIMCMD_FRAME(0, 11),
    ANIMCMD_FRAME(1, 11),
    ANIMCMD_FRAME(0, 11),
    ANIMCMD_FRAME(1, 11),
    ANIMCMD_FRAME(0, 11),
    ANIMCMD_FRAME(1, 11),
    ANIMCMD_FRAME(0, 11),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Swablu_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Swablu_2[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_FRAME(2, 8),
    ANIMCMD_FRAME(0, 12),
    ANIMCMD_FRAME(2, 8),
    ANIMCMD_FRAME(0, 12),
    ANIMCMD_FRAME(2, 8),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Altaria_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Altaria_2[] =
{
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(2, 20),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(2, 20),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Wynaut_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Duskull_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Dusclops_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Roselia_1[] =
{
    ANIMCMD_FRAME(0, 18),
    ANIMCMD_FRAME(1, 44),
    ANIMCMD_FRAME(0, 22),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Slakoth_1[] =
{
    ANIMCMD_FRAME(0, 13),
    ANIMCMD_FRAME(1, 22),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_FRAME(1, 22),
    ANIMCMD_FRAME(0, 11),
    ANIMCMD_FRAME(0, 11),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Vigoroth_1[] =
{
    ANIMCMD_FRAME(0, 13),
    ANIMCMD_FRAME(1, 7),
    ANIMCMD_FRAME(0, 13),
    ANIMCMD_FRAME(1, 7),
    ANIMCMD_FRAME(0, 13),
    ANIMCMD_FRAME(1, 7),
    ANIMCMD_FRAME(0, 11),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Slaking_1[] =
{
    ANIMCMD_FRAME(0, 22),
    ANIMCMD_FRAME(1, 22),
    ANIMCMD_FRAME(0, 22),
    ANIMCMD_FRAME(1, 22),
    ANIMCMD_FRAME(0, 22),
    ANIMCMD_FRAME(1, 22),
    ANIMCMD_FRAME(0, 22),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Gulpin_1[] =
{
    ANIMCMD_FRAME(0, 14),
    ANIMCMD_FRAME(1, 14),
    ANIMCMD_FRAME(0, 14),
    ANIMCMD_FRAME(1, 14),
    ANIMCMD_FRAME(0, 4),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Swalot_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(0, 30),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Tropius_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Whismur_1[] =
{
    ANIMCMD_FRAME(0, 9),
    ANIMCMD_FRAME(1, 9),
    ANIMCMD_FRAME(0, 9),
    ANIMCMD_FRAME(1, 9),
    ANIMCMD_FRAME(0, 33),
    ANIMCMD_FRAME(0, 9),
    ANIMCMD_FRAME(1, 9),
    ANIMCMD_FRAME(0, 9),
    ANIMCMD_FRAME(1, 9),
    ANIMCMD_FRAME(0, 9),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Loudred_1[] =
{
    ANIMCMD_FRAME(0, 9),
    ANIMCMD_FRAME(1, 9),
    ANIMCMD_FRAME(0, 9),
    ANIMCMD_FRAME(1, 9),
    ANIMCMD_FRAME(0, 33),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Exploud_1[] =
{
    ANIMCMD_FRAME(0, 9),
    ANIMCMD_FRAME(1, 44),
    ANIMCMD_FRAME(0, 9),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Clamperl_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Huntail_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Gorebyss_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Absol_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Shuppet_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Banette_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Seviper_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 50),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Zangoose_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 50),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Relicanth_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Aron_1[] =
{
    ANIMCMD_FRAME(0, 33),
    ANIMCMD_FRAME(1, 44),
    ANIMCMD_FRAME(0, 33),
    ANIMCMD_FRAME(1, 33),
    ANIMCMD_FRAME(0, 11),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Lairon_1[] =
{
    ANIMCMD_FRAME(0, 12),
    ANIMCMD_FRAME(1, 29),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 29),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Aggron_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 44),
    ANIMCMD_FRAME(0, 11),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Castform_1[] =
{
    ANIMCMD_FRAME(0, 12),
    ANIMCMD_FRAME(1, 24),
    ANIMCMD_FRAME(0, 24),
    ANIMCMD_FRAME(1, 24),
    ANIMCMD_FRAME(0, 24),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_CastformSunny_1[] =
{
    ANIMCMD_FRAME(0, 12),
    ANIMCMD_FRAME(1, 12),
    ANIMCMD_FRAME(0, 12),
    ANIMCMD_FRAME(1, 12),
    ANIMCMD_FRAME(0, 12),
    ANIMCMD_FRAME(1, 12),
    ANIMCMD_FRAME(0, 12),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_CastformRainy_1[] =
{
    ANIMCMD_FRAME(0, 22),
    ANIMCMD_FRAME(1, 22),
    ANIMCMD_FRAME(0, 22),
    ANIMCMD_FRAME(1, 22),
    ANIMCMD_FRAME(0, 11),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_CastformSnowy_1[] =
{
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 12),
    ANIMCMD_FRAME(0, 12),
    ANIMCMD_FRAME(1, 29),
    ANIMCMD_FRAME(0, 12),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Volbeat_1[] =
{
    ANIMCMD_FRAME(0, 11),
    ANIMCMD_FRAME(1, 11),
    ANIMCMD_FRAME(0, 11),
    ANIMCMD_FRAME(1, 11),
    ANIMCMD_FRAME(0, 11),
    ANIMCMD_FRAME(1, 11),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Illumise_1[] =
{
    ANIMCMD_FRAME(0, 22),
    ANIMCMD_FRAME(1, 22),
    ANIMCMD_FRAME(0, 22),
    ANIMCMD_FRAME(1, 22),
    ANIMCMD_FRAME(0, 11),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Lileep_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Cradily_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Anorith_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Armaldo_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Ralts_1[] =
{
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_FRAME(1, 25),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Kirlia_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 39),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Gardevoir_1[] =
{
    ANIMCMD_FRAME(0, 30),
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Bagon_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Shelgon_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Salamence_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 30),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Beldum_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Metang_1[] =
{
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_FRAME(1, 8),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_FRAME(1, 8),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Metagross_1[] =
{
    ANIMCMD_FRAME(0, 16),
    ANIMCMD_FRAME(1, 16),
    ANIMCMD_FRAME(0, 16),
    ANIMCMD_FRAME(1, 16),
    ANIMCMD_FRAME(0, 16),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Regirock_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Regirock_2[] =
{
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(2, 20),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(2, 20),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Regice_1[] =
{
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 18),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Registeel_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Registeel_2[] =
{
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(2, 20),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(2, 20),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Kyogre_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Kyogre_2[] =
{
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(2, 20),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(2, 20),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Groudon_1[] =
{
    ANIMCMD_FRAME(0, 11),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Groudon_2[] =
{
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(2, 20),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(2, 20),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Rayquaza_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_FRAME(1, 8),
    ANIMCMD_FRAME(0, 22),
    ANIMCMD_FRAME(1, 6),
    ANIMCMD_FRAME(0, 6),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Rayquaza_2[] =
{
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(2, 20),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(2, 20),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Latias_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Latias_2[] =
{
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(2, 20),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(2, 20),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Latios_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Latios_2[] =
{
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(2, 20),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(2, 20),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Jirachi_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Jirachi_2[] =
{
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(2, 20),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(2, 20),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Deoxys_1[] =
{
    ANIMCMD_FRAME(0, 16),
    ANIMCMD_FRAME(1, 16),
    ANIMCMD_FRAME(0, 26),
    ANIMCMD_FRAME(1, 16),
    ANIMCMD_FRAME(0, 16),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Deoxys_2[] =
{
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(2, 20),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(2, 20),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Chimecho_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_DUBSNAKE_1[] = 
{
	ANIMCMD_FRAME(0, 10),
	ANIMCMD_FRAME(1, 60),
	ANIMCMD_FRAME(0, 1),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_HYDROIL_1[] = 
{
	ANIMCMD_FRAME(0, 10),
	ANIMCMD_FRAME(1, 30),
	ANIMCMD_FRAME(0, 10),
	ANIMCMD_FRAME(1, 10),
	ANIMCMD_FRAME(0, 10),
	ANIMCMD_FRAME(1, 10),
	ANIMCMD_FRAME(0, 10),
	ANIMCMD_FRAME(1, 20),
	ANIMCMD_FRAME(0, 10),
	ANIMCMD_END,
};

static const union AnimCmd sAnim_WYCERN_1[] = 
{
	ANIMCMD_FRAME(0, 10),
	ANIMCMD_FRAME(1, 10),
	ANIMCMD_FRAME(0, 20),
	ANIMCMD_FRAME(1, 10),
	ANIMCMD_FRAME(0, 20),
	ANIMCMD_FRAME(1, 10),
	ANIMCMD_FRAME(0, 20),
	ANIMCMD_END
};

static const union AnimCmd sAnim_BITTERAGON_1[] = 
{
	ANIMCMD_FRAME(0, 15),
	ANIMCMD_FRAME(1, 45),
	ANIMCMD_FRAME(0, 15),
	ANIMCMD_END
};

static const union AnimCmd sAnim_CACTUMBRA_1[] = 
{
	ANIMCMD_FRAME(0, 30),
	ANIMCMD_FRAME(1, 60),
	ANIMCMD_FRAME(0, 10),
	ANIMCMD_END
};

static const union AnimCmd sAnim_OBSICARGO_1[] = 
{
	ANIMCMD_FRAME(0, 15),
	ANIMCMD_FRAME(1, 15),
	ANIMCMD_FRAME(0, 15),
	ANIMCMD_FRAME(1, 15),
	ANIMCMD_FRAME(0, 15),
	ANIMCMD_END
};

static const union AnimCmd sAnim_NORWHALE_1[] = 
{
	ANIMCMD_FRAME(0, 10),
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 40),
	ANIMCMD_FRAME(1, 20),
	ANIMCMD_FRAME(0, 20),
	ANIMCMD_END
};

static const union AnimCmd sAnim_MINIOR_METEOR_1[] = 
{
	ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 43),
    ANIMCMD_FRAME(1, 60),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 40),
    ANIMCMD_FRAME(0, 15),
	ANIMCMD_END
};

static const union AnimCmd sAnim_MINIOR_CORE_1[] = 
{
	ANIMCMD_FRAME(0, 28),
    ANIMCMD_FRAME(1, 28),
    ANIMCMD_FRAME(0, 28),
    ANIMCMD_FRAME(1, 28),
    ANIMCMD_FRAME(0, 10),
	ANIMCMD_END
};

static const union AnimCmd sAnim_SPOOKUM_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_GLASMA_1[] =
{
	ANIMCMD_FRAME(0, 10),
	ANIMCMD_FRAME(1, 60),
	ANIMCMD_FRAME(0, 20),
	ANIMCMD_END
};

static const union AnimCmd sAnim_PLASMOLYTE_1[] =
{
	ANIMCMD_END
};

static const union AnimCmd sAnim_STORMAGE_1[] =
{
	ANIMCMD_END
};

static const union AnimCmd sAnim_SANDUDE_1[] =
{
	ANIMCMD_FRAME(0, 5),
	ANIMCMD_FRAME(1, 40),
	ANIMCMD_FRAME(0, 15),
	ANIMCMD_END
};

static const union AnimCmd sAnim_SANDROSS_1[] =
{
	ANIMCMD_END
};

static const union AnimCmd sAnim_SANDUEL_1[] =
{
	ANIMCMD_END
};

static const union AnimCmd sAnim_ELADRIFT_1[] =
{
	ANIMCMD_FRAME(1, 10),
	ANIMCMD_FRAME(0, 10),
	ANIMCMD_END
};

static const union AnimCmd sAnim_SLITHURENT_1[] =
{
	ANIMCMD_END
};

static const union AnimCmd sAnim_PRESCYLLON_1[] =
{
	ANIMCMD_END
};

static const union AnimCmd sAnim_SLOSHMOSH_1[] =
{
	ANIMCMD_FRAME(0, 10),
	ANIMCMD_FRAME(1, 20),
	ANIMCMD_FRAME(0, 15),
	ANIMCMD_FRAME(1, 15),
	ANIMCMD_FRAME(0, 15),
	ANIMCMD_FRAME(1, 15),
	ANIMCMD_FRAME(0, 10),
	ANIMCMD_END
};

static const union AnimCmd sAnim_SLURPINSKI_1[] =
{
	ANIMCMD_END
};

static const union AnimCmd sAnim_KEESH_1[] =
{
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_HATCHBLING_1[] =
{
	ANIMCMD_END
};

static const union AnimCmd sAnim_HUMMBLING_1[] =
{
	ANIMCMD_END
};

static const union AnimCmd sAnim_KEESIGHT_1[] =
{
	ANIMCMD_FRAME(0, 10),
	ANIMCMD_FRAME(1, 20),
	ANIMCMD_FRAME(0, 20),
	ANIMCMD_FRAME(1, 20),
	ANIMCMD_FRAME(0, 20),
	ANIMCMD_FRAME(1, 20),
	ANIMCMD_FRAME(0, 20),
	ANIMCMD_END
};

static const union AnimCmd sAnim_KEESPELL_1[] =
{
	ANIMCMD_END
};

static const union AnimCmd sAnim_LARVOOL_1[] =
{
	ANIMCMD_END
};

static const union AnimCmd sAnim_SPOOLER_1[] =
{
	ANIMCMD_END
};

static const union AnimCmd sAnim_BILLIARACH_1[] =
{
	ANIMCMD_END
};

static const union AnimCmd sAnim_SLUGMA_FONEI_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_MAGCARGO_FONEI_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
	ANIMCMD_END
};

static const union AnimCmd sAnim_SUNFOREST_1[] =
{
	ANIMCMD_END
};

static const union AnimCmd sAnim_HONEDGE_FONEI_1[] =
{
	ANIMCMD_END
};

static const union AnimCmd sAnim_DOUBLADE_FONEI_1[] =
{
	ANIMCMD_END
};

static const union AnimCmd sAnim_AEGISLASH_FONEI_A_1[] =
{
	ANIMCMD_END
};

static const union AnimCmd sAnim_AEGISLASH_FONEI_E_1[] =
{
	ANIMCMD_END
};

static const union AnimCmd sAnim_ELEMPTY_1[] =
{
	ANIMCMD_FRAME(0, 20),
	ANIMCMD_END
};

static const union AnimCmd sAnim_VENEARTH_1[] =
{
	ANIMCMD_END
};

static const union AnimCmd sAnim_MARSIZZLE_1[] =
{
	ANIMCMD_END
};

static const union AnimCmd sAnim_JUPLASMA_1[] =
{
	ANIMCMD_END
};

static const union AnimCmd sAnim_MERLPOOL_1[] =
{
	ANIMCMD_END
};

static const union AnimCmd sAnim_OPHICALF_1[] =
{
	ANIMCMD_END
};

static const union AnimCmd sAnim_SERPENTAUR_1[] =
{
	ANIMCMD_END
};

static const union AnimCmd sAnim_GEODUDE_FONEI_1[] =
{
	ANIMCMD_END
};

static const union AnimCmd sAnim_GRAVELER_FONEI_1[] =
{
	ANIMCMD_END
};

static const union AnimCmd sAnim_GOLEM_FONEI_1[] =
{
	ANIMCMD_END
};

static const union AnimCmd sAnim_SUDOWOODO_FONEI_1[] =
{
	ANIMCMD_END
};

static const union AnimCmd sAnim_GRITWYRM_1[] =
{
	ANIMCMD_END
};

static const union AnimCmd sAnim_MOLDUNE_1[] =
{
	ANIMCMD_END
};

static const union AnimCmd sAnim_WATTITUDE_1[] =
{
	ANIMCMD_FRAME(0, 20),
	ANIMCMD_FRAME(1, 20),
	ANIMCMD_FRAME(0, 20),
	ANIMCMD_FRAME(1, 20),
	ANIMCMD_FRAME(0, 20),
	ANIMCMD_FRAME(1, 20),
	ANIMCMD_FRAME(0, 20),
	ANIMCMD_END
};

static const union AnimCmd sAnim_RALTS_FONEI_1[] =
{
	ANIMCMD_FRAME(0, 20),
	ANIMCMD_END
};

static const union AnimCmd sAnim_KIRLIA_FONEI_1[] =
{
	ANIMCMD_END
};

static const union AnimCmd sAnim_GARDEVOIR_FONEI_1[] =
{
	ANIMCMD_END
};

static const union AnimCmd sAnim_GALLADE_FONEI_1[] =
{
	ANIMCMD_END
};

static const union AnimCmd sAnim_WOOBAT_1[] =
{
	ANIMCMD_FRAME(0, 20),
	ANIMCMD_END
};

static const union AnimCmd sAnim_SWOOBAT_1[] =
{
	ANIMCMD_END
};

static const union AnimCmd sAnim_TRUEBAT_1[] =
{
	ANIMCMD_END
};

static const union AnimCmd sAnim_HOMBONE_1[] =
{
	ANIMCMD_END
};

static const union AnimCmd sAnim_HOMBEAST_1[] =
{
	ANIMCMD_END
};

static const union AnimCmd sAnim_QWILSHARK_1[] =
{
	ANIMCMD_END
};

static const union AnimCmd sAnim_KRISSY_1[] =
{
	ANIMCMD_END
};

static const union AnimCmd sAnim_KRAKODEMON_1[] =
{
	ANIMCMD_END
};

static const union AnimCmd sAnim_WEATHERBANE_1[] =
{
	ANIMCMD_END
};

static const union AnimCmd sAnim_KETSUBAN_1[] =
{
	ANIMCMD_END
};

static const union AnimCmd sAnim_DISABY_1[] =
{
	ANIMCMD_FRAME(0, 10),
	ANIMCMD_FRAME(1, 60),
	ANIMCMD_FRAME(0, 30),
	ANIMCMD_END
};

static const union AnimCmd sAnim_DISASPRITE_1[] =
{
	ANIMCMD_END
};

static const union AnimCmd sAnim_DISMASTER_1[] =
{
	ANIMCMD_END
};

static const union AnimCmd sAnim_PURIDIAN_1[] =
{
    ANIMCMD_END,
};

static const union AnimCmd sAnim_MANIPULO_1[] =
{
	ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
	ANIMCMD_END
};

static const union AnimCmd sAnim_COILSPILL_1[] =
{
	ANIMCMD_FRAME(0, 10),
	ANIMCMD_END
};

static const union AnimCmd sAnim_BOOWHO_1[] =
{
	ANIMCMD_FRAME(0, 10),
	ANIMCMD_END
};

static const union AnimCmd sAnim_BOOXER_1[] =
{
	ANIMCMD_FRAME(0, 10),
	ANIMCMD_END
};

static const union AnimCmd sAnim_BOOZERKER_1[] =
{
	ANIMCMD_FRAME(0, 10),
	ANIMCMD_END
};

static const union AnimCmd sAnim_DEEPDARK_1[] =
{
	ANIMCMD_FRAME(0, 10),
	ANIMCMD_END
};

static const union AnimCmd sAnim_BURMITE_1[] =
{
	ANIMCMD_FRAME(0, 10),
	ANIMCMD_END
};

static const union AnimCmd sAnim_SEDIMETAL_1[] =
{
	ANIMCMD_FRAME(0, 10),
	ANIMCMD_END
};

static const union AnimCmd sAnim_SOLOSIS_FONEI_1[] =
{
	ANIMCMD_FRAME(0, 20),
	ANIMCMD_FRAME(1, 20),
	ANIMCMD_FRAME(0, 20),
	ANIMCMD_FRAME(1, 20),
	ANIMCMD_FRAME(0, 10),
	ANIMCMD_END
};

static const union AnimCmd sAnim_DUOSION_FONEI_1[] =
{
	ANIMCMD_FRAME(0, 10),
	ANIMCMD_END
};

static const union AnimCmd sAnim_REUNICLUS_FONEI_1[] =
{
	ANIMCMD_FRAME(0, 10),
	ANIMCMD_END
};

static const union AnimCmd sAnim_VINOS_1[] =
{
	ANIMCMD_FRAME(0, 10),
	ANIMCMD_END
};

static const union AnimCmd sAnim_VINOCEIVER_1[] =
{
	ANIMCMD_FRAME(0, 10),
	ANIMCMD_END
};

static const union AnimCmd sAnim_ANNOYIDGE_1[] =
{
	ANIMCMD_FRAME(0, 10),
	ANIMCMD_END
};

static const union AnimCmd sAnim_PESQUITO_1[] =
{
	ANIMCMD_FRAME(0, 10),
	ANIMCMD_END
};

static const union AnimCmd sAnim_MANKEY_FONEI_1[] =
{
	ANIMCMD_FRAME(0, 10),
	ANIMCMD_END
};

static const union AnimCmd sAnim_PRIMEAPE_FONEI_1[] =
{
	ANIMCMD_FRAME(0, 10),
	ANIMCMD_END
};

static const union AnimCmd sAnim_CRYOGONAL_FONEI_1[] =
{
	ANIMCMD_FRAME(0, 10),
	ANIMCMD_END
};

static const union AnimCmd sAnim_AMPIBOISON_1[] =
{
	ANIMCMD_FRAME(0, 10),
	ANIMCMD_END
};

static const union AnimCmd sAnim_LAGNET_1[] =
{
	ANIMCMD_FRAME(0, 10),
	ANIMCMD_END
};

static const union AnimCmd sAnim_LANNET_1[] =
{
	ANIMCMD_FRAME(0, 10),
	ANIMCMD_END
};

static const union AnimCmd sAnim_CYBURN_1[] =
{
	ANIMCMD_FRAME(0, 10),
	ANIMCMD_END
};

static const union AnimCmd sAnim_SAPNOSE_1[] =
{
	ANIMCMD_FRAME(0, 10),
	ANIMCMD_END
};

static const union AnimCmd sAnim_BURROOT_1[] =
{
	ANIMCMD_FRAME(0, 10),
	ANIMCMD_END
};

static const union AnimCmd sAnim_BURRUSH_1[] =
{
	ANIMCMD_FRAME(0, 10),
	ANIMCMD_END
};

static const union AnimCmd sAnim_LAV_1[] =
{
	ANIMCMD_FRAME(0, 10),
	ANIMCMD_END
};

static const union AnimCmd sAnim_LAVALY_1[] =
{
	ANIMCMD_FRAME(0, 10),
	ANIMCMD_END
};

static const union AnimCmd sAnim_LAVSAMUCH_1[] =
{
	ANIMCMD_FRAME(0, 10),
	ANIMCMD_END
};

static const union AnimCmd sAnim_GUPPAGE_1[] =
{
	ANIMCMD_FRAME(0, 10),
	ANIMCMD_END
};

static const union AnimCmd sAnim_SEAGE_1[] =
{
	ANIMCMD_FRAME(0, 10),
	ANIMCMD_END
};

static const union AnimCmd sAnim_BASSTION_1[] =
{
	ANIMCMD_FRAME(0, 10),
	ANIMCMD_END
};

static const union AnimCmd sAnim_PANTOM_1[] =
{
	ANIMCMD_FRAME(0, 10),
	ANIMCMD_END
};

static const union AnimCmd sAnim_HAPPANING_1[] =
{
	ANIMCMD_FRAME(0, 10),
	ANIMCMD_END
};

static const union AnimCmd sAnim_PANZERGAST_1[] =
{
	ANIMCMD_FRAME(0, 10),
	ANIMCMD_END
};

static const union AnimCmd sAnim_SCAIRY_1[] =
{
	ANIMCMD_FRAME(0, 10),
	ANIMCMD_END
};

static const union AnimCmd sAnim_DANKLIMMER_1[] =
{
	ANIMCMD_FRAME(0, 10),
	ANIMCMD_END
};

static const union AnimCmd sAnim_GOLICHEM_1[] =
{
	ANIMCMD_FRAME(0, 10),
	ANIMCMD_END
};

static const union AnimCmd sAnim_SPINDA_FONEI_1[] =
{
	ANIMCMD_FRAME(0, 10),
	ANIMCMD_END
};

static const union AnimCmd sAnim_EMUNITION_1[] =
{
	ANIMCMD_FRAME(0, 10),
	ANIMCMD_END
};

static const union AnimCmd sAnim_EMORTAR_1[] =
{
	ANIMCMD_FRAME(0, 10),
	ANIMCMD_END
};

static const union AnimCmd sAnim_OPEBBLISK_1[] =
{
	ANIMCMD_FRAME(0, 10),
	ANIMCMD_END
};

static const union AnimCmd sAnim_STONUMENT_1[] =
{
	ANIMCMD_FRAME(0, 10),
	ANIMCMD_END
};

static const union AnimCmd sAnim_MEMOIRBLE_1[] =
{
	ANIMCMD_FRAME(0, 10),
	ANIMCMD_END
};

static const union AnimCmd sAnim_NOKOMMON_1[] =
{
	ANIMCMD_FRAME(0, 10),
	ANIMCMD_END
};

static const union AnimCmd sAnim_TANGHOUL_1[] =
{
	ANIMCMD_FRAME(0, 10),
	ANIMCMD_END
};

static const union AnimCmd sAnim_QWILYU_1[] =
{
	ANIMCMD_FRAME(0, 10),
	ANIMCMD_END
};

static const union AnimCmd sAnim_CORILIA_1[] =
{
	ANIMCMD_FRAME(0, 10),
	ANIMCMD_END
};

static const union AnimCmd sAnim_NIDOROOK_1[] =
{
	ANIMCMD_FRAME(0, 10),
	ANIMCMD_END
};

static const union AnimCmd sAnim_SKALVENGER_1[] =
{
	ANIMCMD_FRAME(0, 10),
	ANIMCMD_END
};

static const union AnimCmd sAnim_SKULKREX_1[] =
{
	ANIMCMD_FRAME(0, 10),
	ANIMCMD_END
};

static const union AnimCmd sAnim_SKELTYRANT_1[] =
{
	ANIMCMD_FRAME(0, 10),
	ANIMCMD_END
};

static const union AnimCmd sAnim_UnownB_1[] =
{
    ANIMCMD_FRAME(0, 30),
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_UnownC_1[] =
{
    ANIMCMD_FRAME(0, 30),
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_UnownD_1[] =
{
    ANIMCMD_FRAME(0, 30),
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_UnownE_1[] =
{
    ANIMCMD_FRAME(0, 30),
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_UnownF_1[] =
{
    ANIMCMD_FRAME(0, 30),
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_UnownG_1[] =
{
    ANIMCMD_FRAME(0, 30),
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_UnownH_1[] =
{
    ANIMCMD_FRAME(0, 30),
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_UnownI_1[] =
{
    ANIMCMD_FRAME(0, 30),
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_UnownJ_1[] =
{
    ANIMCMD_FRAME(0, 30),
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_UnownK_1[] =
{
    ANIMCMD_FRAME(0, 30),
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_UnownL_1[] =
{
    ANIMCMD_FRAME(0, 30),
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_UnownM_1[] =
{
    ANIMCMD_FRAME(0, 30),
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_UnownN_1[] =
{
    ANIMCMD_FRAME(0, 30),
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_UnownO_1[] =
{
    ANIMCMD_FRAME(0, 30),
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_UnownP_1[] =
{
    ANIMCMD_FRAME(0, 30),
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_UnownQ_1[] =
{
    ANIMCMD_FRAME(0, 30),
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_UnownR_1[] =
{
    ANIMCMD_FRAME(0, 30),
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_UnownS_1[] =
{
    ANIMCMD_FRAME(0, 30),
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_UnownT_1[] =
{
    ANIMCMD_FRAME(0, 30),
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_UnownU_1[] =
{
    ANIMCMD_FRAME(0, 30),
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_UnownV_1[] =
{
    ANIMCMD_FRAME(0, 30),
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_UnownW_1[] =
{
    ANIMCMD_FRAME(0, 30),
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_UnownX_1[] =
{
    ANIMCMD_FRAME(0, 30),
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_UnownY_1[] =
{
    ANIMCMD_FRAME(0, 30),
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_UnownZ_1[] =
{
    ANIMCMD_FRAME(0, 30),
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_UnownEMark_1[] =
{
    ANIMCMD_FRAME(0, 30),
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_UnownQMark_1[] =
{
    ANIMCMD_FRAME(0, 30),
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

#if P_GEN_4_POKEMON == TRUE
static const union AnimCmd sAnim_Turtwig_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Grotle_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_FRAME(1, 36),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Torterra_1[] =
{
    ANIMCMD_FRAME(1, 45),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Chimchar_1[] =
{
    ANIMCMD_FRAME(1, 8),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_FRAME(1, 8),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_FRAME(1, 8),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Monferno_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 25),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Infernape_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_FRAME(1, 36),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Piplup_1[] =
{
    ANIMCMD_FRAME(0, 30),
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Prinplup_1[] =
{
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 50),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Empoleon_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_FRAME(1, 36),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Starly_1[] =
{
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 35),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Staravia_1[] =
{
    ANIMCMD_FRAME(1, 32),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Staraptor_1[] =
{
    ANIMCMD_FRAME(1, 40),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Bidoof_1[] =
{
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Bibarel_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Bibarel_2[] =
{
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(2, 20),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(2, 20),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Kricketot_1[] =
{
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Kricketune_1[] =
{
    ANIMCMD_FRAME(0, 27),
    ANIMCMD_FRAME(1, 27),
    ANIMCMD_FRAME(0, 27),
    ANIMCMD_FRAME(1, 27),
    ANIMCMD_FRAME(0, 27),
    ANIMCMD_FRAME(1, 27),
    ANIMCMD_FRAME(0, 3),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Shinx_1[] =
{
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Luxio_1[] =
{
    ANIMCMD_FRAME(1, 40),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Luxray_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Luxray_2[] =
{
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(2, 20),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(2, 20),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Budew_1[] =
{
    ANIMCMD_FRAME(0, 30),
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Roserade_1[] =
{
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Cranidos_1[] =
{
    ANIMCMD_FRAME(1, 32),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Rampardos_1[] =
{
    ANIMCMD_FRAME(0, 50),
    ANIMCMD_FRAME(1, 25),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(1, 25),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Shieldon_1[] =
{
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Bastiodon_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 25),
    ANIMCMD_FRAME(0, 30),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Burmy_1[] =
{
    ANIMCMD_FRAME(1, 32),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Wormadam_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Mothim_1[] =
{
    ANIMCMD_FRAME(0, 4),
    ANIMCMD_FRAME(1, 4),
    ANIMCMD_FRAME(0, 6),
    ANIMCMD_FRAME(1, 6),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 25),
    ANIMCMD_FRAME(1, 6),
    ANIMCMD_FRAME(0, 6),
    ANIMCMD_FRAME(1, 4),
    ANIMCMD_FRAME(0, 4),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Combee_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Vespiquen_1[] =
{
    ANIMCMD_FRAME(0, 12),
    ANIMCMD_FRAME(1, 12),
    ANIMCMD_FRAME(0, 12),
    ANIMCMD_FRAME(1, 12),
    ANIMCMD_FRAME(0, 12),
    ANIMCMD_FRAME(1, 12),
    ANIMCMD_FRAME(0, 12),
    ANIMCMD_FRAME(1, 12),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Pachirisu_1[] =
{
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 50),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Buizel_1[] =
{
    ANIMCMD_FRAME(0, 12),
    ANIMCMD_FRAME(1, 45),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Floatzel_1[] =
{
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 28),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Cherubi_1[] =
{
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 50),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_CherrimOvercast_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_CherrimOvercast_2[] =
{
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(2, 20),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(2, 20),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_CherrimSunshine_1[] =
{
    ANIMCMD_FRAME(1, 6),
    ANIMCMD_FRAME(0, 28),
    ANIMCMD_FRAME(1, 12),
    ANIMCMD_FRAME(0, 28),
    ANIMCMD_FRAME(1, 7),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Shellos_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_FRAME(1, 36),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Gastrodon_1[] =
{
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Ambipom_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 25),
    ANIMCMD_FRAME(0, 30),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Drifloon_1[] =
{
    ANIMCMD_FRAME(1, 25),
    ANIMCMD_FRAME(0, 25),
    ANIMCMD_FRAME(1, 25),
    ANIMCMD_FRAME(0, 25),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Drifblim_1[] =
{
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 25),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 25),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Buneary_1[] =
{
    ANIMCMD_FRAME(1, 35),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Lopunny_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Mismagius_1[] =
{
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Honchkrow_1[] =
{
    ANIMCMD_FRAME(0, 21),
    ANIMCMD_FRAME(1, 45),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Glameow_1[] =
{
    ANIMCMD_FRAME(0, 12),
    ANIMCMD_FRAME(1, 45),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Purugly_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 50),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Chingling_1[] =
{
    ANIMCMD_FRAME(1, 12),
    ANIMCMD_FRAME(0, 12),
    ANIMCMD_FRAME(1, 12),
    ANIMCMD_FRAME(0, 30),
    ANIMCMD_FRAME(1, 12),
    ANIMCMD_FRAME(0, 12),
    ANIMCMD_FRAME(1, 12),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Stunky_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Skuntank_1[] =
{
    ANIMCMD_FRAME(0, 30),
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Bronzor_1[] =
{
    ANIMCMD_FRAME(1, 9),
    ANIMCMD_FRAME(0, 9),
    ANIMCMD_FRAME(1, 9),
    ANIMCMD_FRAME(0, 9),
    ANIMCMD_FRAME(1, 9),
    ANIMCMD_FRAME(0, 9),
    ANIMCMD_FRAME(1, 9),
    ANIMCMD_FRAME(0, 9),
    ANIMCMD_FRAME(1, 9),
    ANIMCMD_FRAME(0, 9),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Bronzong_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Bronzong_2[] =
{
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(2, 20),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(2, 20),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Bonsly_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 25),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_MimeJr_1[] =
{
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Happiny_1[] =
{
    ANIMCMD_FRAME(0, 30),
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Chatot_1[] =
{
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};
static const union AnimCmd sAnim_Spiritomb_1[] =
{
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Gible_1[] =
{
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Gabite_1[] =
{
    ANIMCMD_FRAME(1, 40),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Garchomp_1[] =
{
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(1, 35),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Munchlax_1[] =
{
    ANIMCMD_FRAME(0, 30),
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Riolu_1[] =
{
    ANIMCMD_FRAME(0, 3),
    ANIMCMD_FRAME(1, 50),
    ANIMCMD_FRAME(1, 28),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Lucario_1[] =
{
    ANIMCMD_FRAME(1, 40),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Hippopotas_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_FRAME(1, 36),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Hippowdon_1[] =
{
    ANIMCMD_FRAME(1, 40),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Skorupi_1[] =
{
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Drapion_1[] =
{
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_FRAME(1, 2),
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_FRAME(1, 2),
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_FRAME(1, 2),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Croagunk_1[] =
{
    ANIMCMD_FRAME(0, 3),
    ANIMCMD_FRAME(1, 50),
    ANIMCMD_FRAME(1, 28),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Toxicroak_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 25),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Carnivine_1[] =
{
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Finneon_1[] =
{
    ANIMCMD_FRAME(1, 12),
    ANIMCMD_FRAME(0, 12),
    ANIMCMD_FRAME(1, 12),
    ANIMCMD_FRAME(0, 30),
    ANIMCMD_FRAME(1, 12),
    ANIMCMD_FRAME(0, 12),
    ANIMCMD_FRAME(1, 12),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Lumineon_1[] =
{
    ANIMCMD_FRAME(1, 8),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_FRAME(1, 8),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_FRAME(1, 40),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Mantyke_1[] =
{
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 45),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Snover_1[] =
{
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 25),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Abomasnow_1[] =
{
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(1, 44),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Weavile_1[] =
{
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Magnezone_1[] =
{
    ANIMCMD_FRAME(0, 16),
    ANIMCMD_FRAME(1, 16),
    ANIMCMD_FRAME(0, 16),
    ANIMCMD_FRAME(1, 16),
    ANIMCMD_FRAME(0, 16),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Lickilicky_1[] =
{
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 50),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Rhyperior_1[] =
{
    ANIMCMD_FRAME(0, 50),
    ANIMCMD_FRAME(1, 25),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(1, 25),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Tangrowth_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 50),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Electivire_1[] =
{
    ANIMCMD_FRAME(1, 50),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Magmortar_1[] =
{
    ANIMCMD_FRAME(1, 40),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Togekiss_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Yanmega_1[] =
{
    ANIMCMD_FRAME(1, 3),
    ANIMCMD_FRAME(0, 3),
    ANIMCMD_FRAME(1, 3),
    ANIMCMD_FRAME(0, 3),
    ANIMCMD_FRAME(1, 3),
    ANIMCMD_FRAME(0, 3),
    ANIMCMD_FRAME(1, 3),
    ANIMCMD_FRAME(0, 3),
    ANIMCMD_FRAME(1, 3),
    ANIMCMD_FRAME(0, 3),
    ANIMCMD_FRAME(1, 3),
    ANIMCMD_FRAME(0, 3),
    ANIMCMD_FRAME(1, 3),
    ANIMCMD_FRAME(0, 3),
    ANIMCMD_FRAME(1, 3),
    ANIMCMD_FRAME(0, 3),
    ANIMCMD_FRAME(1, 3),
    ANIMCMD_FRAME(0, 3),
    ANIMCMD_FRAME(1, 3),
    ANIMCMD_FRAME(0, 3),
    ANIMCMD_FRAME(1, 3),
    ANIMCMD_FRAME(0, 3),
    ANIMCMD_FRAME(1, 3),
    ANIMCMD_FRAME(0, 3),
    ANIMCMD_FRAME(1, 3),
    ANIMCMD_FRAME(0, 3),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Leafeon_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Glaceon_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_FRAME(1, 36),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Gliscor_1[] =
{
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(0, 30),
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(0, 40),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Mamoswine_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 25),
    ANIMCMD_FRAME(0, 30),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_PORYGON_Z_1[] =
{
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(0, 30),
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(0, 40),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Gallade_1[] =
{
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Probopass_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Probopass_2[] =
{
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(2, 20),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(2, 20),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Dusknoir_1[] =
{
    ANIMCMD_FRAME(1, 9),
    ANIMCMD_FRAME(0, 9),
    ANIMCMD_FRAME(1, 9),
    ANIMCMD_FRAME(0, 9),
    ANIMCMD_FRAME(1, 9),
    ANIMCMD_FRAME(0, 9),
    ANIMCMD_FRAME(1, 9),
    ANIMCMD_FRAME(0, 9),
    ANIMCMD_FRAME(1, 9),
    ANIMCMD_FRAME(0, 9),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Froslass_1[] =
{
    ANIMCMD_FRAME(1, 50),
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Rotom_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Rotom_2[] =
{
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(2, 20),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(2, 20),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_RotomHeat_1[] =
{
    ANIMCMD_FRAME(0, 30),
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_RotomWash_1[] =
{
    ANIMCMD_FRAME(0, 30),
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_RotomFrost_1[] =
{
    ANIMCMD_FRAME(1, 50),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_RotomFan_1[] =
{
    ANIMCMD_FRAME(1, 3),
    ANIMCMD_FRAME(0, 3),
    ANIMCMD_FRAME(1, 3),
    ANIMCMD_FRAME(0, 3),
    ANIMCMD_FRAME(1, 3),
    ANIMCMD_FRAME(0, 3),
    ANIMCMD_FRAME(1, 3),
    ANIMCMD_FRAME(0, 3),
    ANIMCMD_FRAME(1, 3),
    ANIMCMD_FRAME(0, 3),
    ANIMCMD_FRAME(1, 3),
    ANIMCMD_FRAME(0, 3),
    ANIMCMD_FRAME(1, 3),
    ANIMCMD_FRAME(0, 3),
    ANIMCMD_FRAME(1, 3),
    ANIMCMD_FRAME(0, 3),
    ANIMCMD_FRAME(1, 3),
    ANIMCMD_FRAME(0, 3),
    ANIMCMD_FRAME(1, 3),
    ANIMCMD_FRAME(0, 3),
    ANIMCMD_FRAME(1, 3),
    ANIMCMD_FRAME(0, 3),
    ANIMCMD_FRAME(1, 3),
    ANIMCMD_FRAME(0, 3),
    ANIMCMD_FRAME(1, 3),
    ANIMCMD_FRAME(0, 3),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_RotomMow_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Uxie_1[] =
{
    ANIMCMD_FRAME(1, 50),
    ANIMCMD_FRAME(1, 50),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Mesprit_1[] =
{
    ANIMCMD_FRAME(1, 12),
    ANIMCMD_FRAME(0, 12),
    ANIMCMD_FRAME(1, 12),
    ANIMCMD_FRAME(0, 30),
    ANIMCMD_FRAME(1, 12),
    ANIMCMD_FRAME(0, 12),
    ANIMCMD_FRAME(1, 12),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Azelf_1[] =
{
    ANIMCMD_FRAME(1, 50),
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Dialga_1[] =
{
    ANIMCMD_FRAME(1, 40),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Palkia_1[] =
{
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Heatran_1[] =
{
    ANIMCMD_FRAME(1, 50),
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Regigigas_1[] =
{
    ANIMCMD_FRAME(1, 40),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Giratina_1[] =
{
    ANIMCMD_FRAME(0, 12),
    ANIMCMD_FRAME(1, 45),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Cresselia_1[] =
{
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Phione_1[] =
{
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Manaphy_1[] =
{
    ANIMCMD_FRAME(1, 50),
    ANIMCMD_FRAME(1, 50),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Darkrai_1[] =
{
    ANIMCMD_FRAME(1, 50),
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Shaymin_1[] =
{
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Arceus_1[] =
{
    ANIMCMD_FRAME(0, 12),
    ANIMCMD_FRAME(1, 45),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};
#endif
#if P_GEN_5_POKEMON == TRUE
static const union AnimCmd sAnim_Victini_1[] =
{
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_FRAME(1, 46),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Snivy_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_FRAME(1, 36),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Servine_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 50),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Serperior_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Serperior_2[] =
{
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(2, 20),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(2, 20),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Tepig_1[] =
{
    ANIMCMD_FRAME(0, 27),
    ANIMCMD_FRAME(1, 6),
    ANIMCMD_FRAME(0, 6),
    ANIMCMD_FRAME(1, 6),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Pignite_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_FRAME(1, 36),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Emboar_1[] =
{
    ANIMCMD_FRAME(1, 4),
    ANIMCMD_FRAME(0, 4),
    ANIMCMD_FRAME(1, 4),
    ANIMCMD_FRAME(0, 4),
    ANIMCMD_FRAME(1, 4),
    ANIMCMD_FRAME(0, 4),
    ANIMCMD_FRAME(1, 4),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 4),
    ANIMCMD_FRAME(0, 4),
    ANIMCMD_FRAME(1, 4),
    ANIMCMD_FRAME(0, 4),
    ANIMCMD_FRAME(1, 4),
    ANIMCMD_FRAME(0, 4),
    ANIMCMD_FRAME(1, 4),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 4),
    ANIMCMD_FRAME(0, 4),
    ANIMCMD_FRAME(1, 4),
    ANIMCMD_FRAME(0, 4),
    ANIMCMD_FRAME(1, 4),
    ANIMCMD_FRAME(0, 4),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Oshawott_1[] =
{
    ANIMCMD_FRAME(0, 13),
    ANIMCMD_FRAME(1, 7),
    ANIMCMD_FRAME(0, 13),
    ANIMCMD_FRAME(1, 7),
    ANIMCMD_FRAME(0, 13),
    ANIMCMD_FRAME(1, 7),
    ANIMCMD_FRAME(0, 11),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Dewott_1[] =
{
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 35),
    ANIMCMD_FRAME(0, 28),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Samurott_1[] =
{
    ANIMCMD_FRAME(1, 40),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Patrat_1[] =
{
    ANIMCMD_FRAME(1, 32),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Watchog_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0 , 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 50),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Lillipup_1[] =
{
    ANIMCMD_FRAME(0, 13),
    ANIMCMD_FRAME(1, 7),
    ANIMCMD_FRAME(0, 13),
    ANIMCMD_FRAME(1, 7),
    ANIMCMD_FRAME(0, 13),
    ANIMCMD_FRAME(1, 7),
    ANIMCMD_FRAME(0, 11),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Herdier_1[] =
{
    ANIMCMD_FRAME(1, 8),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_FRAME(1, 8),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_FRAME(1, 40),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Stoutland_1[] =
{
    ANIMCMD_FRAME(0, 27),
    ANIMCMD_FRAME(1, 6),
    ANIMCMD_FRAME(0, 6),
    ANIMCMD_FRAME(1, 6),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Purrloin_1[] =
{
    ANIMCMD_FRAME(0, 9),
    ANIMCMD_FRAME(1, 54),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Liepard_1[] =
{
    ANIMCMD_FRAME(0, 12),
    ANIMCMD_FRAME(1, 45),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Pansage_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 8),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 13),
    ANIMCMD_FRAME(0, 7),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Simisage_1[] =
{
    ANIMCMD_FRAME(0, 12),
    ANIMCMD_FRAME(1, 45),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Pansear_1[] =
{
    ANIMCMD_FRAME(1, 32),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Simisear_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Simisear_2[] =
{
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(2, 20),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(2, 20),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Panpour_1[] =
{
    ANIMCMD_FRAME(0, 12),
    ANIMCMD_FRAME(1, 45),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Simipour_1[] =
{
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Munna_1[] =
{
    ANIMCMD_FRAME(1, 12),
    ANIMCMD_FRAME(0, 12),
    ANIMCMD_FRAME(1, 12),
    ANIMCMD_FRAME(0, 30),
    ANIMCMD_FRAME(1, 12),
    ANIMCMD_FRAME(0, 12),
    ANIMCMD_FRAME(1, 12),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Musharna_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Musharna_2[] =
{
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(2, 20),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(2, 20),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Pidove_1[] =
{
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_FRAME(1, 46),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Tranquill_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_FRAME(1, 36),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Unfezant_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Blitzle_1[] =
{
    ANIMCMD_FRAME(1, 8),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_FRAME(1, 8),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_FRAME(1, 40),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Zebstrika_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 25),
    ANIMCMD_FRAME(0, 30),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Roggenrola_1[] =
{
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Boldore_1[] =
{
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Gigalith_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 25),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Woobat_1[] =
{
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Swoobat_1[] =
{
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Drilbur_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Drilbur_2[] =
{
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(2, 20),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(2, 20),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Excadrill_1[] =
{
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 40),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Audino_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_FRAME(1, 36),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Timburr_1[] =
{
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Gurdurr_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 50),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Conkeldurr_1[] =
{
    ANIMCMD_FRAME(1, 45),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Tympole_1[] =
{
    ANIMCMD_FRAME(1, 35),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Palpitoad_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 8),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 13),
    ANIMCMD_FRAME(0, 7),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Seismitoad_1[] =
{
    ANIMCMD_FRAME(0, 13),
    ANIMCMD_FRAME(1, 7),
    ANIMCMD_FRAME(0, 13),
    ANIMCMD_FRAME(1, 7),
    ANIMCMD_FRAME(0, 13),
    ANIMCMD_FRAME(1, 7),
    ANIMCMD_FRAME(0, 11),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Throh_1[] =
{
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Sawk_1[] =
{
    ANIMCMD_FRAME(1, 45),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Sewaddle_1[] =
{
    ANIMCMD_FRAME(0, 11),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Sewaddle_2[] =
{
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(2, 20),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(2, 20),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Swadloon_1[] =
{
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Leavanny_1[] =
{
    ANIMCMD_FRAME(0, 12),
    ANIMCMD_FRAME(1, 45),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Venipede_1[] =
{
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Whirlipede_1[] =
{
    ANIMCMD_FRAME(1, 8),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_FRAME(1, 8),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Scolipede_1[] =
{
    ANIMCMD_FRAME(1, 45),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Cottonee_1[] =
{
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 50),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Whimsicott_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Petilil_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 25),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Lilligant_1[] =
{
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Basculin_1[] =
{
    ANIMCMD_FRAME(1, 8),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_FRAME(1, 8),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Sandile_1[] =
{
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Krokorok_1[] =
{
    ANIMCMD_FRAME(1, 40),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Krookodile_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Krookodile_2[] =
{
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(2, 20),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(2, 20),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Darumaka_1[] =
{
    ANIMCMD_FRAME(1, 50),
    ANIMCMD_FRAME(1, 50),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Darmanitan_1[] =
{
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Maractus_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Dwebble_1[] =
{
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 50),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Crustle_1[] =
{
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Scraggy_1[] =
{
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 35),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Scrafty_1[] =
{
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Sigilyph_1[] =
{
    ANIMCMD_FRAME(1, 7),
    ANIMCMD_FRAME(0, 7),
    ANIMCMD_FRAME(1, 7),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 7),
    ANIMCMD_FRAME(0, 7),
    ANIMCMD_FRAME(1, 7),
    ANIMCMD_FRAME(0, 7),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Yamask_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Cofagrigus_1[] =
{
    ANIMCMD_FRAME(1, 50),
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Tirtouga_1[] =
{
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(0, 30),
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(0, 30),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Carracosta_1[] =
{
    ANIMCMD_FRAME(1, 35),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Archen_1[] =
{
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_FRAME(1, 46),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Archeops_1[] =
{
    ANIMCMD_FRAME(1, 12),
    ANIMCMD_FRAME(0, 12),
    ANIMCMD_FRAME(1, 12),
    ANIMCMD_FRAME(0, 30),
    ANIMCMD_FRAME(1, 12),
    ANIMCMD_FRAME(0, 12),
    ANIMCMD_FRAME(1, 12),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Trubbish_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Garbodor_1[] =
{
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 35),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Zorua_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Zoroark_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 18),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_FRAME(1, 8),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Minccino_1[] =
{
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Cinccino_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Gothita_1[] =
{
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Gothorita_1[] =
{
    ANIMCMD_FRAME(0, 11),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Gothorita_2[] =
{
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(2, 20),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(2, 20),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Gothitelle_1[] =
{
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Solosis_1[] =
{
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 45),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Duosion_1[] =
{
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Reuniclus_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Ducklett_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 50),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Swanna_1[] =
{
    ANIMCMD_FRAME(1, 32),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Vanillite_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Vanillish_1[] =
{
    ANIMCMD_FRAME(0, 12),
    ANIMCMD_FRAME(1, 45),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Vanilluxe_1[] =
{
    ANIMCMD_FRAME(0, 12),
    ANIMCMD_FRAME(1, 45),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Deerling_1[] =
{
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Sawsbuck_1[] =
{
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Emolga_1[] =
{
    ANIMCMD_FRAME(0, 21),
    ANIMCMD_FRAME(1, 45),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Karrablast_1[] =
{
    ANIMCMD_FRAME(1, 32),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Escavalier_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 25),
    ANIMCMD_FRAME(0, 30),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Foongus_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Foongus_2[] =
{
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(2, 20),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(2, 20),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Amoonguss_1[] =
{
    ANIMCMD_FRAME(1, 8),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_FRAME(1, 8),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_FRAME(1, 8),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Frillish_1[] =
{
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(0, 30),
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(0, 30),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Jellicent_1[] =
{
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Alomomola_1[] =
{
    ANIMCMD_FRAME(1, 50),
    ANIMCMD_FRAME(1, 50),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Joltik_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Galvantula_1[] =
{
    ANIMCMD_FRAME(1, 6),
    ANIMCMD_FRAME(0, 6),
    ANIMCMD_FRAME(1, 6),
    ANIMCMD_FRAME(0, 6),
    ANIMCMD_FRAME(1, 6),
    ANIMCMD_FRAME(0, 6),
    ANIMCMD_FRAME(1, 6),
    ANIMCMD_FRAME(0, 6),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Ferroseed_1[] =
{
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 35),
    ANIMCMD_FRAME(0, 28),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Ferrothorn_1[] =
{
    ANIMCMD_FRAME(0, 11),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Ferrothorn_2[] =
{
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(2, 20),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(2, 20),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Klink_1[] =
{
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Klang_1[] =
{
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Klinklang_1[] =
{
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Tynamo_1[] =
{
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 25),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Eelektrik_1[] =
{
    ANIMCMD_FRAME(0, 4),
    ANIMCMD_FRAME(1, 25),
    ANIMCMD_FRAME(0, 4),
    ANIMCMD_FRAME(1, 25),
    ANIMCMD_FRAME(0, 4),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Eelektross_1[] =
{
    ANIMCMD_FRAME(1, 27),
    ANIMCMD_FRAME(0, 27),
    ANIMCMD_FRAME(1, 24),
    ANIMCMD_FRAME(0, 25),
    ANIMCMD_FRAME(1, 27),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Elgyem_1[] =
{
    ANIMCMD_FRAME(1, 12),
    ANIMCMD_FRAME(0, 12),
    ANIMCMD_FRAME(1, 12),
    ANIMCMD_FRAME(0, 30),
    ANIMCMD_FRAME(1, 12),
    ANIMCMD_FRAME(0, 12),
    ANIMCMD_FRAME(1, 12),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Beheeyem_1[] =
{
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Litwick_1[] =
{
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Lampent_1[] =
{
    ANIMCMD_FRAME(1, 25),
    ANIMCMD_FRAME(0, 25),
    ANIMCMD_FRAME(1, 25),
    ANIMCMD_FRAME(0, 25),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Chandelure_1[] =
{
    ANIMCMD_FRAME(0, 30),
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Axew_1[] =
{
    ANIMCMD_FRAME(1, 40),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Fraxure_1[] =
{
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Haxorus_1[] =
{
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Cubchoo_1[] =
{
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Beartic_1[] =
{
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Cryogonal_1[] =
{
    ANIMCMD_FRAME(0, 11),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 48),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Cryogonal_2[] =
{
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(2, 20),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(2, 20),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Shelmet_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Accelgor_1[] =
{
    ANIMCMD_FRAME(1, 35),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Stunfisk_1[] =
{
    ANIMCMD_FRAME(1, 40),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Mienfoo_1[] =
{
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Mienshao_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 50),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Druddigon_1[] =
{
    ANIMCMD_FRAME(0, 22),
    ANIMCMD_FRAME(1, 22),
    ANIMCMD_FRAME(0, 22),
    ANIMCMD_FRAME(1, 22),
    ANIMCMD_FRAME(0, 22),
    ANIMCMD_FRAME(1, 22),
    ANIMCMD_FRAME(0, 11),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Golett_1[] =
{
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(1, 44),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Golurk_1[] =
{
    ANIMCMD_FRAME(1, 45),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Pawniard_1[] =
{
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 25),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Bisharp_1[] =
{
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Bouffalant_1[] =
{
    ANIMCMD_FRAME(0, 28),
    ANIMCMD_FRAME(1, 32),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Rufflet_1[] =
{
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 35),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Braviary_1[] =
{
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Vullaby_1[] =
{
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Mandibuzz_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_FRAME(1, 36),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Heatmor_1[] =
{
    ANIMCMD_FRAME(1, 40),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Durant_1[] =
{
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_FRAME(1, 2),
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_FRAME(1, 2),
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_FRAME(1, 2),
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_FRAME(1, 2),
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_FRAME(1, 2),
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_FRAME(1, 2),
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_FRAME(1, 2),
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_FRAME(1, 2),
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Deino_1[] =
{
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Zweilous_1[] =
{
    ANIMCMD_FRAME(1, 32),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Hydreigon_1[] =
{
    ANIMCMD_FRAME(1, 12),
    ANIMCMD_FRAME(0, 12),
    ANIMCMD_FRAME(1, 12),
    ANIMCMD_FRAME(0, 30),
    ANIMCMD_FRAME(1, 12),
    ANIMCMD_FRAME(0, 12),
    ANIMCMD_FRAME(1, 12),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Larvesta_1[] =
{
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Volcarona_1[] =
{
    ANIMCMD_FRAME(1, 25),
    ANIMCMD_FRAME(0, 25),
    ANIMCMD_FRAME(1, 25),
    ANIMCMD_FRAME(0, 25),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Cobalion_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_FRAME(1, 36),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Terrakion_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Terrakion_2[] =
{
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(2, 20),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(2, 20),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Virizion_1[] =
{
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Tornadus_1[] =
{
    ANIMCMD_FRAME(1, 2),
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_FRAME(1, 2),
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_FRAME(1, 2),
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_FRAME(1, 2),
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_FRAME(1, 2),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(1, 2),
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_FRAME(1, 2),
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_FRAME(1, 2),
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_FRAME(1, 2),
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_FRAME(1, 2),
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_FRAME(1, 2),
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Thundurus_1[] =
{
    ANIMCMD_FRAME(1, 2),
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_FRAME(1, 2),
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_FRAME(1, 2),
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_FRAME(1, 2),
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_FRAME(1, 2),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(1, 2),
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_FRAME(1, 2),
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_FRAME(1, 2),
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_FRAME(1, 2),
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_FRAME(1, 2),
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_FRAME(1, 2),
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Reshiram_1[] =
{
    ANIMCMD_FRAME(1, 40),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Zekrom_1[] =
{
    ANIMCMD_FRAME(1, 40),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Landorus_1[] =
{
    ANIMCMD_FRAME(1, 2),
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_FRAME(1, 2),
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_FRAME(1, 2),
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_FRAME(1, 2),
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_FRAME(1, 2),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(1, 2),
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_FRAME(1, 2),
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_FRAME(1, 2),
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_FRAME(1, 2),
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_FRAME(1, 2),
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_FRAME(1, 2),
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Kyurem_1[] =
{
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Keldeo_1[] =
{
    ANIMCMD_FRAME(1, 32),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Meloetta_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 45),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Meloetta_2[] =
{
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(2, 20),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(2, 20),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Genesect_1[] =
{
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 25),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};
#endif
#if P_GEN_6_POKEMON == TRUE
static const union AnimCmd sAnim_Chespin_1[] =
{
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_FRAME(1, 24),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_FRAME(1, 24),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Quilladin_1[] =
{
    ANIMCMD_FRAME(0, 11),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Quilladin_2[] =
{
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(2, 20),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(2, 20),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Chesnaught_1[] =
{
    ANIMCMD_FRAME(1, 50),
    ANIMCMD_FRAME(1, 40),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Fennekin_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Braixen_1[] =
{
    ANIMCMD_FRAME(0, 12),
    ANIMCMD_FRAME(1, 45),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Delphox_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Froakie_1[] =
{
    ANIMCMD_FRAME(0, 13),
    ANIMCMD_FRAME(1, 7),
    ANIMCMD_FRAME(0, 13),
    ANIMCMD_FRAME(1, 7),
    ANIMCMD_FRAME(0, 13),
    ANIMCMD_FRAME(1, 7),
    ANIMCMD_FRAME(0, 11),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Frogadier_1[] =
{
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(0, 30),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Greninja_1[] =
{
    ANIMCMD_FRAME(1, 32),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_GreninjaAsh_1[] =
{
    ANIMCMD_FRAME(1, 8),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 35),
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Bunnelby_1[] =
{
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Diggersby_1[] =
{
    ANIMCMD_FRAME(1, 35),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Fletchling_1[] =
{
    ANIMCMD_FRAME(0, 3),
    ANIMCMD_FRAME(1, 50),
    ANIMCMD_FRAME(1, 28),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};
static const union AnimCmd sAnim_Fletchinder_1[] =
{
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_FRAME(1, 2),
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_FRAME(1, 2),
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_FRAME(1, 2),
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_FRAME(1, 2),
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_FRAME(1, 2),
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_FRAME(1, 2),
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_FRAME(1, 2),
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_FRAME(1, 2),
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Talonflame_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Talonflame_2[] =
{
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(2, 20),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(2, 20),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Scatterbug_1[] =
{
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 35),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Spewpa_1[] =
{
    ANIMCMD_FRAME(0, 18),
    ANIMCMD_FRAME(1, 18),
    ANIMCMD_FRAME(0, 18),
    ANIMCMD_FRAME(1, 18),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Vivillon_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 50),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Litleo_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 25),
    ANIMCMD_FRAME(0, 30),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Pyroar_1[] =
{
    ANIMCMD_FRAME(1, 45),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Flabebe_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Flabebe_2[] =
{
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(2, 20),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(2, 20),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Floette_1[] =
{
    ANIMCMD_FRAME(0, 33),
    ANIMCMD_FRAME(1, 33),
    ANIMCMD_FRAME(0, 33),
    ANIMCMD_FRAME(1, 33),
    ANIMCMD_FRAME(0, 11),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Florges_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Florges_2[] =
{
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(2, 20),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(2, 20),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Skiddo_1[] =
{
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Gogoat_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_FRAME(1, 36),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Pancham_1[] =
{
    ANIMCMD_FRAME(1, 8),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_FRAME(1, 8),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_FRAME(1, 40),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Pangoro_1[] =
{
    ANIMCMD_FRAME(1, 8),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_FRAME(1, 8),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Furfrou_1[] =
{
    ANIMCMD_FRAME(0, 27),
    ANIMCMD_FRAME(1, 6),
    ANIMCMD_FRAME(0, 6),
    ANIMCMD_FRAME(1, 6),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Espurr_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 50),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Meowstic_1[] =
{
    ANIMCMD_FRAME(0, 12),
    ANIMCMD_FRAME(1, 45),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Honedge_1[] =
{
    ANIMCMD_FRAME(1, 50),
    ANIMCMD_FRAME(1, 40),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Doublade_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Doublade_2[] =
{
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(2, 20),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(2, 20),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Aegislash_1[] =
{
    ANIMCMD_FRAME(0, 18),
    ANIMCMD_FRAME(1, 18),
    ANIMCMD_FRAME(0, 18),
    ANIMCMD_FRAME(1, 18),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Spritzee_1[] =
{
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 25),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 25),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Aromatisse_1[] =
{
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(0, 30),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Swirlix_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Slurpuff_1[] =
{
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 35),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Inkay_1[] =
{
    ANIMCMD_FRAME(1, 25),
    ANIMCMD_FRAME(0, 25),
    ANIMCMD_FRAME(1, 25),
    ANIMCMD_FRAME(0, 25),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Malamar_1[] =
{
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Binacle_1[] =
{
    ANIMCMD_FRAME(1, 8),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_FRAME(1, 8),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_FRAME(1, 8),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Barbaracle_1[] =
{
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Skrelp_1[] =
{
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Dragalge_1[] =
{
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Clauncher_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Clawitzer_1[] =
{
    ANIMCMD_FRAME(1, 6),
    ANIMCMD_FRAME(0, 6),
    ANIMCMD_FRAME(1, 6),
    ANIMCMD_FRAME(0, 6),
    ANIMCMD_FRAME(1, 6),
    ANIMCMD_FRAME(0, 6),
    ANIMCMD_FRAME(1, 6),
    ANIMCMD_FRAME(0, 6),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Helioptile_1[] =
{
    ANIMCMD_FRAME(1, 50),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Heliolisk_1[] =
{
    ANIMCMD_FRAME(1, 50),
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(0, 30),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Tyrunt_1[] =
{
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Tyrantrum_1[] =
{
    ANIMCMD_FRAME(1, 40),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Amaura_1[] =
{
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 35),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Aurorus_1[] =
{
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Sylveon_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Hawlucha_1[] =
{
    ANIMCMD_FRAME(0, 28),
    ANIMCMD_FRAME(1, 32),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Dedenne_1[] =
{
    ANIMCMD_FRAME(1, 50),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Carbink_1[] =
{
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 25),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Goomy_1[] =
{
    ANIMCMD_FRAME(0, 28),
    ANIMCMD_FRAME(1, 32),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Sliggoo_1[] =
{
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Goodra_1[] =
{
    ANIMCMD_FRAME(0, 18),
    ANIMCMD_FRAME(1, 18),
    ANIMCMD_FRAME(0, 18),
    ANIMCMD_FRAME(1, 18),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Klefki_1[] =
{
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 25),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Phantump_1[] =
{
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Trevenant_1[] =
{
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Pumpkaboo_1[] =
{
    ANIMCMD_FRAME(1, 12),
    ANIMCMD_FRAME(0, 12),
    ANIMCMD_FRAME(1, 12),
    ANIMCMD_FRAME(0, 30),
    ANIMCMD_FRAME(1, 12),
    ANIMCMD_FRAME(0, 12),
    ANIMCMD_FRAME(1, 12),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Gourgeist_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Bergmite_1[] =
{
    ANIMCMD_FRAME(0, 11),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Bergmite_2[] =
{
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(2, 20),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(2, 20),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Avalugg_1[] =
{
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Noibat_1[] =
{
    ANIMCMD_FRAME(1, 12),
    ANIMCMD_FRAME(0, 12),
    ANIMCMD_FRAME(1, 12),
    ANIMCMD_FRAME(0, 30),
    ANIMCMD_FRAME(1, 12),
    ANIMCMD_FRAME(0, 12),
    ANIMCMD_FRAME(1, 12),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Noivern_1[] =
{
    ANIMCMD_FRAME(1, 32),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Xerneas_1[] =
{
    ANIMCMD_FRAME(0, 12),
    ANIMCMD_FRAME(1, 45),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Yveltal_1[] =
{
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Zygarde_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 25),
    ANIMCMD_FRAME(0, 30),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Diancie_1[] =
{
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Hoopa_1[] =
{
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 25),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Volcanion_1[] =
{
    ANIMCMD_FRAME(1, 45),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};
#endif
#if P_GEN_7_POKEMON == TRUE
static const union AnimCmd sAnim_Rowlet_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Dartrix_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Decidueye_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Litten_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Torracat_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Incineroar_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Popplio_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Brionne_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Primarina_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Pikipek_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Trumbeak_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Toucannon_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Yungoos_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Gumshoos_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Grubbin_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Charjabug_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Vikavolt_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Crabrawler_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Crabominable_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Oricorio_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Cutiefly_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Ribombee_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Rockruff_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Lycanroc_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Wishiwashi_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Mareanie_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Toxapex_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Mudbray_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Mudsdale_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Dewpider_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_FRAME(1, 9),
    ANIMCMD_FRAME(0, 9),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_FRAME(1, 9),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Araquanid_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_FRAME(1, 45),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Fomantis_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Lurantis_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Morelull_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Shiinotic_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Salandit_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 50),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Salazzle_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Stufful_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 44),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Bewear_1[] =
{
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(1, 60),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Bounsweet_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Steenee_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Tsareena_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Comfey_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Oranguru_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Passimian_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Wimpod_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_FRAME(1, 25),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Golisopod_1[] =
{
    ANIMCMD_FRAME(0, 25),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Sandygast_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Palossand_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Pyukumuku_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_FRAME(1, 25),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_TypeNull_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Silvally_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Minior_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Komala_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Turtonator_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 44),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Togedemaru_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Mimikyu_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Bruxish_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Drampa_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Dhelmise_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_JANGMO_O_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_FRAME(1, 25),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_HAKAMO_O_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_KOMMO_O_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_TapuKoko_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_FRAME(1, 40),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_TapuLele_1[] =
{
    ANIMCMD_FRAME(1, 50),
    ANIMCMD_FRAME(1, 50),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_TapuBulu_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_FRAME(1, 40),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 40),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_TapuFini_1[] =
{
    ANIMCMD_FRAME(1, 60),
    ANIMCMD_FRAME(1, 60),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Cosmog_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Cosmoem_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Solgaleo_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Lunala_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Nihilego_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Buzzwole_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Pheromosa_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Xurkitree_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Celesteela_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Kartana_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Guzzlord_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Necrozma_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Magearna_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Marshadow_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_FRAME(1, 54),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Poipole_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Naganadel_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Stakataka_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Blacephalon_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Zeraora_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Meltan_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Melmetal_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};
#endif
#if P_GEN_8_POKEMON == TRUE
static const union AnimCmd sAnim_Grookey_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Thwackey_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Rillaboom_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Scorbunny_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Raboot_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Cinderace_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Sobble_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Drizzile_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Inteleon_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Skwovet_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Greedent_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Rookidee_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 25),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Corvisquire_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Corviknight_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_FRAME(1, 50),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Blipbug_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Dottler_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Orbeetle_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Nickit_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Thievul_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Gossifleur_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Eldegoss_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Wooloo_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Dubwool_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Chewtle_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Drednaw_1[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 30),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Yamper_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Boltund_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

PLACEHOLDER_TWO_FRAME_ANIMATION(Rolycoly);
PLACEHOLDER_TWO_FRAME_ANIMATION(Carkol);
PLACEHOLDER_TWO_FRAME_ANIMATION(Coalossal);
PLACEHOLDER_TWO_FRAME_ANIMATION(Applin);
PLACEHOLDER_TWO_FRAME_ANIMATION(Flapple);
PLACEHOLDER_TWO_FRAME_ANIMATION(Appletun);

static const union AnimCmd sAnim_Silicobra_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Sandaconda_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Cramorant_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Arrokuda_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Barraskewda_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Toxel_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Toxtricity_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Sizzlipede_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_FRAME(1, 25),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Centiskorch_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_FRAME(1, 35),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Clobbopus_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Grapploct_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Sinistea_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Polteageist_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Hatenna_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Hattrem_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Hatterene_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Impidimp_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Morgrem_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Grimmsnarl_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Obstagoon_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Perrserker_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Cursola_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Sirfetchd_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_MrRime_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Runerigus_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Milcery_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Alcremie_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Falinks_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

PLACEHOLDER_TWO_FRAME_ANIMATION(Pincurchin);

static const union AnimCmd sAnim_Snom_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Frosmoth_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Stonjourner_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Eiscue_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Indeedee_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Morpeko_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Cufant_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Copperajah_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Dracozolt_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Arctozolt_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Dracovish_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Arctovish_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Duraludon_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Dreepy_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Drakloak_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Dragapult_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Zacian_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Zamazenta_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Eternatus_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Kubfu_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Urshifu_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Zarude_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Regieleki_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Regidrago_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Glastrier_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Spectrier_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Calyrex_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Wyrdeer_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Kleavor_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Ursaluna_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Basculegion_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Sneasler_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Overqwil_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Enamorus_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};
#endif

static const union AnimCmd sAnim_VenusaurMega_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_CHARIZARD_MEGA_X_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_CHARIZARD_MEGA_Y_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_BlastoiseMega_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_BeedrillMega_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_PidgeotMega_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_AlakazamMega_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_SlowbroMega_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_GengarMega_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_KangaskhanMega_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_PinsirMega_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_GyaradosMega_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_AerodactylMega_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_MEWTWO_MEGA_X_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_MEWTWO_MEGA_Y_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_AmpharosMega_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_SteelixMega_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_ScizorMega_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_HeracrossMega_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_HoundoomMega_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_TyranitarMega_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_SceptileMega_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_BlazikenMega_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_SwampertMega_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_GardevoirMega_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_SableyeMega_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_MawileMega_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_AggronMega_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_MedichamMega_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_ManectricMega_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_SharpedoMega_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_CameruptMega_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_AltariaMega_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_BanetteMega_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_AbsolMega_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_GlalieMega_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_SalamenceMega_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_MetagrossMega_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_LatiasMega_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_LatiosMega_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_KyogrePrimal_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_GroudonPrimal_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_RayquazaMega_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

#if P_GEN_4_POKEMON == TRUE
static const union AnimCmd sAnim_LopunnyMega_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_GarchompMega_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_LucarioMega_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_AbomasnowMega_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_GalladeMega_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};
#endif
#if P_GEN_5_POKEMON == TRUE
static const union AnimCmd sAnim_AudinoMega_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};
#endif
#if P_GEN_6_POKEMON == TRUE
static const union AnimCmd sAnim_DiancieMega_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};
#endif

static const union AnimCmd sAnim_RattataAlolan_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_RaticateAlolan_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_RaichuAlolan_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_SandshrewAlolan_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_SandslashAlolan_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_VulpixAlolan_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_NinetalesAlolan_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_DiglettAlolan_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_DugtrioAlolan_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_MeowthAlolan_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_PersianAlolan_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_GeodudeAlolan_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_GravelerAlolan_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_GolemAlolan_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_GrimerAlolan_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_MukAlolan_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

PLACEHOLDER_TWO_FRAME_ANIMATION(ExeggutorAlolan);

static const union AnimCmd sAnim_MarowakAlolan_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_MeowthGalarian_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_PonytaGalarian_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_RapidashGalarian_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_SlowpokeGalarian_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_SlowbroGalarian_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_FarfetchdGalarian_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_WeezingGalarian_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_MrMimeGalarian_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_ArticunoGalarian_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_ZapdosGalarian_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_MoltresGalarian_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_SlowkingGalarian_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_CorsolaGalarian_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_ZigzagoonGalarian_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_LinooneGalarian_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

#if P_GEN_5_POKEMON == TRUE
static const union AnimCmd sAnim_DarumakaGalarian_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_DarmanitanGalarian_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_YamaskGalarian_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_StunfiskGalarian_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};
#endif

static const union AnimCmd sAnim_GrowlitheHisuian_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_ArcanineHisuian_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_VoltorbHisuian_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_ElectrodeHisuian_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_TyphlosionHisuian_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_QwilfishHisuian_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_SneaselHisuian_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

#if P_GEN_5_POKEMON == TRUE
static const union AnimCmd sAnim_SamurottHisuian_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_LilligantHisuian_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_ZoruaHisuian_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_ZoroarkHisuian_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_BraviaryHisuian_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};
#endif
#if P_GEN_6_POKEMON == TRUE
static const union AnimCmd sAnim_SliggooHisuian_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_GoodraHisuian_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_AvaluggHisuian_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};
#endif
#if P_GEN_7_POKEMON == TRUE
static const union AnimCmd sAnim_DecidueyeHisuian_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};
#endif

static const union AnimCmd sAnim_PikachuCosplay_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_PikachuRockStar_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_PikachuBelle_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_PikachuPopStar_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_PIKACHU_PH_D_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_PikachuLibre_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_PikachuOriginalCap_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_PikachuHoennCap_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_PikachuSinnohCap_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_PikachuUnovaCap_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_PikachuKalosCap_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_PikachuAlolaCap_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_PikachuPartnerCap_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_PikachuWorldCap_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_PichuSpikyEared_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};
static const union AnimCmd sAnim_DeoxysAttack_1[] =
{
    ANIMCMD_FRAME(0, 16),
    ANIMCMD_FRAME(1, 16),
    ANIMCMD_FRAME(0, 26),
    ANIMCMD_FRAME(1, 16),
    ANIMCMD_FRAME(0, 16),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_DeoxysAttack_2[] =
{
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(2, 20),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(2, 20),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_DeoxysDefense_1[] =
{
    ANIMCMD_FRAME(0, 16),
    ANIMCMD_FRAME(1, 16),
    ANIMCMD_FRAME(0, 26),
    ANIMCMD_FRAME(1, 16),
    ANIMCMD_FRAME(0, 16),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_DeoxysDefense_2[] =
{
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(2, 20),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(2, 20),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_DeoxysSpeed_1[] =
{
    ANIMCMD_FRAME(0, 16),
    ANIMCMD_FRAME(1, 16),
    ANIMCMD_FRAME(0, 26),
    ANIMCMD_FRAME(1, 16),
    ANIMCMD_FRAME(0, 16),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_DeoxysSpeed_2[] =
{
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(2, 20),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(2, 20),
    ANIMCMD_END,
};

#if P_GEN_4_POKEMON == TRUE
static const union AnimCmd sAnim_ShayminSky_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_FRAME(1, 36),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_DialgaOrigin_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_PalkiaOrigin_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_GiratinaOrigin_1[] =
{
    ANIMCMD_FRAME(0, 11),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_GiratinaOrigin_2[] =
{
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(2, 20),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(2, 20),
    ANIMCMD_END,
};
#endif
#if P_GEN_5_POKEMON == TRUE
static const union AnimCmd sAnim_DarmanitanZenMode_1[] =
{
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_DarmanitanZenModeGalarian_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_TornadusTherian_1[] =
{
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_FRAME(1, 35),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_ThundurusTherian_1[] =
{
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_LandorusTherian_1[] =
{
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_KyuremBlack_1[] =
{
    ANIMCMD_FRAME(1, 40),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_KyuremWhite_1[] =
{
    ANIMCMD_FRAME(1, 40),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_KeldeoResolute_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_FRAME(1, 36),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_MeloettaPirouette_1[] =
{
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_FRAME(1, 15),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};
#endif
#if P_GEN_6_POKEMON == TRUE
static const union AnimCmd sAnim_AegislashBlade_1[] =
{
    ANIMCMD_FRAME(0, 18),
    ANIMCMD_FRAME(1, 18),
    ANIMCMD_FRAME(0, 18),
    ANIMCMD_FRAME(1, 18),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Zygarde10_1[] =
{
    ANIMCMD_FRAME(0, 20),
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_ZygardeComplete_1[] =
{
    ANIMCMD_FRAME(0, 12),
    ANIMCMD_FRAME(1, 45),
    ANIMCMD_FRAME(0, 15),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_HoopaUnbound_1[] =
{
    ANIMCMD_FRAME(1, 20),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};
#endif
#if P_GEN_7_POKEMON == TRUE
static const union AnimCmd sAnim_MiniorCore_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_WishiwashiSchool_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_MimikyuBusted_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_LycanrocMidnight_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_LycanrocDusk_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};
#endif
#if P_GEN_8_POKEMON == TRUE
static const union AnimCmd sAnim_EnamorusTherian_1[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};
#endif

static const union AnimCmd sAnim_Egg_1[] =
{
    ANIMCMD_FRAME(0, 6),
    ANIMCMD_FRAME(1, 6),
    ANIMCMD_FRAME(2, 6),
    ANIMCMD_FRAME(3, 6),
    ANIMCMD_END,
};

#define SINGLE_ANIMATION(name)                      \
static const union AnimCmd *const sAnim_##name[] = \
{                                                   \
    sAnim_GeneralFrame0,                            \
    sAnim_##name##_1,                               \
}

#define DOUBLE_ANIMATION(name)                      \
static const union AnimCmd *const sAnim_##name[] = \
{                                                   \
    sAnim_GeneralFrame0,                            \
    sAnim_##name##_1,                               \
    sAnim_##name##_2,                               \
}

SINGLE_ANIMATION(None);
SINGLE_ANIMATION(Bulbasaur);
SINGLE_ANIMATION(Ivysaur);
SINGLE_ANIMATION(Venusaur);
SINGLE_ANIMATION(Charmander);
SINGLE_ANIMATION(Charmeleon);
SINGLE_ANIMATION(Charizard);
SINGLE_ANIMATION(Squirtle);
SINGLE_ANIMATION(Wartortle);
SINGLE_ANIMATION(Blastoise);
SINGLE_ANIMATION(Caterpie);
SINGLE_ANIMATION(Metapod);
SINGLE_ANIMATION(Butterfree);
SINGLE_ANIMATION(Weedle);
SINGLE_ANIMATION(Kakuna);
SINGLE_ANIMATION(Beedrill);
SINGLE_ANIMATION(Pidgey);
SINGLE_ANIMATION(Pidgeotto);
SINGLE_ANIMATION(Pidgeot);
SINGLE_ANIMATION(Rattata);
SINGLE_ANIMATION(Raticate);
SINGLE_ANIMATION(Spearow);
SINGLE_ANIMATION(Fearow);
SINGLE_ANIMATION(Ekans);
SINGLE_ANIMATION(Arbok);
DOUBLE_ANIMATION(Pikachu);
DOUBLE_ANIMATION(Raichu);
DOUBLE_ANIMATION(Sandshrew);
DOUBLE_ANIMATION(Sandslash);
SINGLE_ANIMATION(NidoranF);
SINGLE_ANIMATION(Nidorina);
SINGLE_ANIMATION(Nidoqueen);
SINGLE_ANIMATION(NidoranM);
SINGLE_ANIMATION(Nidorino);
SINGLE_ANIMATION(Nidoking);
SINGLE_ANIMATION(Clefairy);
SINGLE_ANIMATION(Clefable);
DOUBLE_ANIMATION(Vulpix);
DOUBLE_ANIMATION(Ninetales);
DOUBLE_ANIMATION(Jigglypuff);
DOUBLE_ANIMATION(Wigglytuff);
SINGLE_ANIMATION(Zubat);
SINGLE_ANIMATION(Golbat);
SINGLE_ANIMATION(Oddish);
SINGLE_ANIMATION(Gloom);
SINGLE_ANIMATION(Vileplume);
SINGLE_ANIMATION(Paras);
SINGLE_ANIMATION(Parasect);
SINGLE_ANIMATION(Venonat);
SINGLE_ANIMATION(Venomoth);
SINGLE_ANIMATION(Diglett);
SINGLE_ANIMATION(Dugtrio);
SINGLE_ANIMATION(Meowth);
SINGLE_ANIMATION(Persian);
DOUBLE_ANIMATION(Psyduck);
DOUBLE_ANIMATION(Golduck);
SINGLE_ANIMATION(Mankey);
SINGLE_ANIMATION(Primeape);
SINGLE_ANIMATION(Growlithe);
SINGLE_ANIMATION(Arcanine);
SINGLE_ANIMATION(Poliwag);
SINGLE_ANIMATION(Poliwhirl);
SINGLE_ANIMATION(Poliwrath);
SINGLE_ANIMATION(Abra);
SINGLE_ANIMATION(Kadabra);
SINGLE_ANIMATION(Alakazam);
SINGLE_ANIMATION(Machop);
SINGLE_ANIMATION(Machoke);
SINGLE_ANIMATION(Machamp);
SINGLE_ANIMATION(Bellsprout);
SINGLE_ANIMATION(Weepinbell);
SINGLE_ANIMATION(Victreebel);
SINGLE_ANIMATION(Tentacool);
SINGLE_ANIMATION(Tentacruel);
SINGLE_ANIMATION(Geodude);
SINGLE_ANIMATION(Graveler);
SINGLE_ANIMATION(Golem);
SINGLE_ANIMATION(Ponyta);
SINGLE_ANIMATION(Rapidash);
SINGLE_ANIMATION(Slowpoke);
SINGLE_ANIMATION(Slowbro);
SINGLE_ANIMATION(Magnemite);
SINGLE_ANIMATION(Magneton);
SINGLE_ANIMATION(Farfetchd);
SINGLE_ANIMATION(Doduo);
SINGLE_ANIMATION(Dodrio);
SINGLE_ANIMATION(Seel);
SINGLE_ANIMATION(Dewgong);
DOUBLE_ANIMATION(Grimer);
DOUBLE_ANIMATION(Muk);
SINGLE_ANIMATION(Shellder);
SINGLE_ANIMATION(Cloyster);
SINGLE_ANIMATION(Gastly);
SINGLE_ANIMATION(Haunter);
SINGLE_ANIMATION(Gengar);
SINGLE_ANIMATION(Onix);
SINGLE_ANIMATION(Drowzee);
SINGLE_ANIMATION(Hypno);
SINGLE_ANIMATION(Krabby);
SINGLE_ANIMATION(Kingler);
SINGLE_ANIMATION(Voltorb);
SINGLE_ANIMATION(Electrode);
SINGLE_ANIMATION(Exeggcute);
SINGLE_ANIMATION(Exeggutor);
SINGLE_ANIMATION(Cubone);
SINGLE_ANIMATION(Marowak);
SINGLE_ANIMATION(Hitmonlee);
SINGLE_ANIMATION(Hitmonchan);
SINGLE_ANIMATION(Lickitung);
DOUBLE_ANIMATION(Koffing);
DOUBLE_ANIMATION(Weezing);
DOUBLE_ANIMATION(Rhyhorn);
DOUBLE_ANIMATION(Rhydon);
SINGLE_ANIMATION(Chansey);
SINGLE_ANIMATION(Tangela);
SINGLE_ANIMATION(Kangaskhan);
DOUBLE_ANIMATION(Horsea);
DOUBLE_ANIMATION(Seadra);
SINGLE_ANIMATION(Goldeen);
SINGLE_ANIMATION(Seaking);
DOUBLE_ANIMATION(Staryu);
DOUBLE_ANIMATION(Starmie);
SINGLE_ANIMATION(MrMime);
SINGLE_ANIMATION(Scyther);
SINGLE_ANIMATION(Jynx);
SINGLE_ANIMATION(Electabuzz);
SINGLE_ANIMATION(Magmar);
DOUBLE_ANIMATION(Pinsir);
SINGLE_ANIMATION(Tauros);
SINGLE_ANIMATION(Magikarp);
SINGLE_ANIMATION(Gyarados);
SINGLE_ANIMATION(Lapras);
SINGLE_ANIMATION(Ditto);
SINGLE_ANIMATION(Eevee);
SINGLE_ANIMATION(Vaporeon);
SINGLE_ANIMATION(Jolteon);
SINGLE_ANIMATION(Flareon);
SINGLE_ANIMATION(Porygon);
SINGLE_ANIMATION(Omanyte);
SINGLE_ANIMATION(Omastar);
SINGLE_ANIMATION(Kabuto);
SINGLE_ANIMATION(Kabutops);
SINGLE_ANIMATION(Aerodactyl);
SINGLE_ANIMATION(Snorlax);
SINGLE_ANIMATION(Articuno);
SINGLE_ANIMATION(Zapdos);
SINGLE_ANIMATION(Moltres);
SINGLE_ANIMATION(Dratini);
SINGLE_ANIMATION(Dragonair);
SINGLE_ANIMATION(Dragonite);
SINGLE_ANIMATION(Mewtwo);
SINGLE_ANIMATION(Mew);
SINGLE_ANIMATION(Chikorita);
SINGLE_ANIMATION(Bayleef);
SINGLE_ANIMATION(Meganium);
SINGLE_ANIMATION(Cyndaquil);
SINGLE_ANIMATION(Quilava);
SINGLE_ANIMATION(Typhlosion);
SINGLE_ANIMATION(Totodile);
SINGLE_ANIMATION(Croconaw);
SINGLE_ANIMATION(Feraligatr);
SINGLE_ANIMATION(Sentret);
SINGLE_ANIMATION(Furret);
SINGLE_ANIMATION(Hoothoot);
SINGLE_ANIMATION(Noctowl);
SINGLE_ANIMATION(Ledyba);
SINGLE_ANIMATION(Ledian);
SINGLE_ANIMATION(Spinarak);
SINGLE_ANIMATION(Ariados);
SINGLE_ANIMATION(Crobat);
DOUBLE_ANIMATION(Chinchou);
DOUBLE_ANIMATION(Lanturn);
DOUBLE_ANIMATION(Pichu);
SINGLE_ANIMATION(Cleffa);
DOUBLE_ANIMATION(Igglybuff);
SINGLE_ANIMATION(Togepi);
SINGLE_ANIMATION(Togetic);
DOUBLE_ANIMATION(Natu);
DOUBLE_ANIMATION(Xatu);
SINGLE_ANIMATION(Mareep);
SINGLE_ANIMATION(Flaaffy);
SINGLE_ANIMATION(Ampharos);
SINGLE_ANIMATION(Bellossom);
SINGLE_ANIMATION(Marill);
SINGLE_ANIMATION(Azumarill);
SINGLE_ANIMATION(Sudowoodo);
SINGLE_ANIMATION(Politoed);
SINGLE_ANIMATION(Hoppip);
SINGLE_ANIMATION(Skiploom);
SINGLE_ANIMATION(Jumpluff);
SINGLE_ANIMATION(Aipom);
SINGLE_ANIMATION(Sunkern);
SINGLE_ANIMATION(Sunflora);
SINGLE_ANIMATION(Yanma);
SINGLE_ANIMATION(Wooper);
SINGLE_ANIMATION(Quagsire);
SINGLE_ANIMATION(Espeon);
SINGLE_ANIMATION(Umbreon);
SINGLE_ANIMATION(Murkrow);
SINGLE_ANIMATION(Slowking);
SINGLE_ANIMATION(Misdreavus);
SINGLE_ANIMATION(Unown);
DOUBLE_ANIMATION(Wobbuffet);
DOUBLE_ANIMATION(Girafarig);
SINGLE_ANIMATION(Pineco);
SINGLE_ANIMATION(Forretress);
SINGLE_ANIMATION(Dunsparce);
SINGLE_ANIMATION(Gligar);
SINGLE_ANIMATION(Steelix);
SINGLE_ANIMATION(Snubbull);
SINGLE_ANIMATION(Granbull);
SINGLE_ANIMATION(Qwilfish);
SINGLE_ANIMATION(Scizor);
SINGLE_ANIMATION(Shuckle);
SINGLE_ANIMATION(Heracross);
SINGLE_ANIMATION(Sneasel);
SINGLE_ANIMATION(Teddiursa);
SINGLE_ANIMATION(Ursaring);
DOUBLE_ANIMATION(Slugma);
DOUBLE_ANIMATION(Magcargo);
SINGLE_ANIMATION(Swinub);
SINGLE_ANIMATION(Piloswine);
DOUBLE_ANIMATION(Corsola);
SINGLE_ANIMATION(Remoraid);
SINGLE_ANIMATION(Octillery);
SINGLE_ANIMATION(Delibird);
SINGLE_ANIMATION(Mantine);
SINGLE_ANIMATION(Skarmory);
SINGLE_ANIMATION(Houndour);
SINGLE_ANIMATION(Houndoom);
DOUBLE_ANIMATION(Kingdra);
DOUBLE_ANIMATION(Phanpy);
SINGLE_ANIMATION(Donphan);
SINGLE_ANIMATION(Porygon2);
SINGLE_ANIMATION(Stantler);
SINGLE_ANIMATION(Smeargle);
SINGLE_ANIMATION(Tyrogue);
SINGLE_ANIMATION(Hitmontop);
SINGLE_ANIMATION(Smoochum);
SINGLE_ANIMATION(Elekid);
SINGLE_ANIMATION(Magby);
SINGLE_ANIMATION(Miltank);
SINGLE_ANIMATION(Blissey);
SINGLE_ANIMATION(Raikou);
SINGLE_ANIMATION(Entei);
SINGLE_ANIMATION(Suicune);
SINGLE_ANIMATION(Larvitar);
SINGLE_ANIMATION(Pupitar);
SINGLE_ANIMATION(Tyranitar);
SINGLE_ANIMATION(Lugia);
SINGLE_ANIMATION(HoOh);
SINGLE_ANIMATION(Celebi);
SINGLE_ANIMATION(OldUnownB);
SINGLE_ANIMATION(Treecko);
SINGLE_ANIMATION(Grovyle);
SINGLE_ANIMATION(Sceptile);
SINGLE_ANIMATION(Torchic);
SINGLE_ANIMATION(Combusken);
static const union AnimCmd *const sAnim_Blaziken[] ={
    sAnim_GeneralFrame0,
    sAnim_None_1,
};
SINGLE_ANIMATION(Mudkip);
SINGLE_ANIMATION(Marshtomp);
SINGLE_ANIMATION(Swampert);
SINGLE_ANIMATION(Poochyena);
SINGLE_ANIMATION(Mightyena);
SINGLE_ANIMATION(Zigzagoon);
SINGLE_ANIMATION(Linoone);
SINGLE_ANIMATION(Wurmple);
DOUBLE_ANIMATION(Silcoon);
DOUBLE_ANIMATION(Beautifly);
DOUBLE_ANIMATION(Cascoon);
DOUBLE_ANIMATION(Dustox);
SINGLE_ANIMATION(Lotad);
SINGLE_ANIMATION(Lombre);
SINGLE_ANIMATION(Ludicolo);
SINGLE_ANIMATION(Seedot);
SINGLE_ANIMATION(Nuzleaf);
SINGLE_ANIMATION(Shiftry);
SINGLE_ANIMATION(Nincada);
SINGLE_ANIMATION(Ninjask);
SINGLE_ANIMATION(Shedinja);
SINGLE_ANIMATION(Taillow);
SINGLE_ANIMATION(Swellow);
SINGLE_ANIMATION(Shroomish);
SINGLE_ANIMATION(Breloom);
SINGLE_ANIMATION(Spinda);
SINGLE_ANIMATION(Wingull);
SINGLE_ANIMATION(Pelipper);
DOUBLE_ANIMATION(Surskit);
DOUBLE_ANIMATION(Masquerain);
SINGLE_ANIMATION(Wailmer);
SINGLE_ANIMATION(Wailord);
SINGLE_ANIMATION(Skitty);
SINGLE_ANIMATION(Delcatty);
SINGLE_ANIMATION(Kecleon);
SINGLE_ANIMATION(Baltoy);
SINGLE_ANIMATION(Claydol);
SINGLE_ANIMATION(Nosepass);
SINGLE_ANIMATION(Torkoal);
SINGLE_ANIMATION(Sableye);
SINGLE_ANIMATION(Barboach);
SINGLE_ANIMATION(Whiscash);
SINGLE_ANIMATION(Luvdisc);
SINGLE_ANIMATION(Corphish);
SINGLE_ANIMATION(Crawdaunt);
SINGLE_ANIMATION(Feebas);
SINGLE_ANIMATION(Milotic);
SINGLE_ANIMATION(Carvanha);
SINGLE_ANIMATION(Sharpedo);
SINGLE_ANIMATION(Trapinch);
SINGLE_ANIMATION(Vibrava);
SINGLE_ANIMATION(Flygon);
SINGLE_ANIMATION(Makuhita);
SINGLE_ANIMATION(Hariyama);
SINGLE_ANIMATION(Electrike);
SINGLE_ANIMATION(Manectric);
SINGLE_ANIMATION(Numel);
SINGLE_ANIMATION(Camerupt);
SINGLE_ANIMATION(Spheal);
SINGLE_ANIMATION(Sealeo);
SINGLE_ANIMATION(Walrein);
SINGLE_ANIMATION(Cacnea);
SINGLE_ANIMATION(Cacturne);
SINGLE_ANIMATION(Snorunt);
SINGLE_ANIMATION(Glalie);
DOUBLE_ANIMATION(Lunatone);
DOUBLE_ANIMATION(Solrock);
SINGLE_ANIMATION(Azurill);
SINGLE_ANIMATION(Spoink);
SINGLE_ANIMATION(Grumpig);
SINGLE_ANIMATION(Plusle);
SINGLE_ANIMATION(Minun);
SINGLE_ANIMATION(Mawile);
SINGLE_ANIMATION(Meditite);
SINGLE_ANIMATION(Medicham);
DOUBLE_ANIMATION(Swablu);
DOUBLE_ANIMATION(Altaria);
SINGLE_ANIMATION(Wynaut);
SINGLE_ANIMATION(Duskull);
SINGLE_ANIMATION(Dusclops);
SINGLE_ANIMATION(Roselia);
SINGLE_ANIMATION(Slakoth);
SINGLE_ANIMATION(Vigoroth);
SINGLE_ANIMATION(Slaking);
SINGLE_ANIMATION(Gulpin);
SINGLE_ANIMATION(Swalot);
SINGLE_ANIMATION(Tropius);
SINGLE_ANIMATION(Whismur);
SINGLE_ANIMATION(Loudred);
SINGLE_ANIMATION(Exploud);
SINGLE_ANIMATION(Clamperl);
SINGLE_ANIMATION(Huntail);
SINGLE_ANIMATION(Gorebyss);
SINGLE_ANIMATION(Absol);
SINGLE_ANIMATION(Shuppet);
SINGLE_ANIMATION(Banette);
SINGLE_ANIMATION(Seviper);
SINGLE_ANIMATION(Zangoose);
SINGLE_ANIMATION(Relicanth);
SINGLE_ANIMATION(Aron);
SINGLE_ANIMATION(Lairon);
SINGLE_ANIMATION(Aggron);
SINGLE_ANIMATION(Castform);
SINGLE_ANIMATION(CastformSunny);
SINGLE_ANIMATION(CastformRainy);
SINGLE_ANIMATION(CastformSnowy);
SINGLE_ANIMATION(Volbeat);
SINGLE_ANIMATION(Illumise);
SINGLE_ANIMATION(Lileep);
SINGLE_ANIMATION(Cradily);
SINGLE_ANIMATION(Anorith);
SINGLE_ANIMATION(Armaldo);
SINGLE_ANIMATION(Ralts);
SINGLE_ANIMATION(Kirlia);
SINGLE_ANIMATION(Gardevoir);
SINGLE_ANIMATION(Bagon);
SINGLE_ANIMATION(Shelgon);
SINGLE_ANIMATION(Salamence);
SINGLE_ANIMATION(Beldum);
SINGLE_ANIMATION(Metang);
SINGLE_ANIMATION(Metagross);
DOUBLE_ANIMATION(Regirock);
SINGLE_ANIMATION(Regice);
DOUBLE_ANIMATION(Registeel);
DOUBLE_ANIMATION(Kyogre);
DOUBLE_ANIMATION(Groudon);
DOUBLE_ANIMATION(Rayquaza);
DOUBLE_ANIMATION(Latias);
DOUBLE_ANIMATION(Latios);
DOUBLE_ANIMATION(Jirachi);
DOUBLE_ANIMATION(Deoxys);
SINGLE_ANIMATION(Chimecho);
SINGLE_ANIMATION(Egg);
SINGLE_ANIMATION(UnownB);
SINGLE_ANIMATION(UnownC);
SINGLE_ANIMATION(UnownD);
SINGLE_ANIMATION(UnownE);
SINGLE_ANIMATION(UnownF);
SINGLE_ANIMATION(UnownG);
SINGLE_ANIMATION(UnownH);
SINGLE_ANIMATION(UnownI);
SINGLE_ANIMATION(UnownJ);
SINGLE_ANIMATION(UnownK);
SINGLE_ANIMATION(UnownL);
SINGLE_ANIMATION(UnownM);
SINGLE_ANIMATION(UnownN);
SINGLE_ANIMATION(UnownO);
SINGLE_ANIMATION(UnownP);
SINGLE_ANIMATION(UnownQ);
SINGLE_ANIMATION(UnownR);
SINGLE_ANIMATION(UnownS);
SINGLE_ANIMATION(UnownT);
SINGLE_ANIMATION(UnownU);
SINGLE_ANIMATION(UnownV);
SINGLE_ANIMATION(UnownW);
SINGLE_ANIMATION(UnownX);
SINGLE_ANIMATION(UnownY);
SINGLE_ANIMATION(UnownZ);
SINGLE_ANIMATION(UnownEMark);
SINGLE_ANIMATION(UnownQMark);
#if P_GEN_4_POKEMON == TRUE
SINGLE_ANIMATION(Turtwig);
SINGLE_ANIMATION(Grotle);
SINGLE_ANIMATION(Torterra);
SINGLE_ANIMATION(Chimchar);
SINGLE_ANIMATION(Monferno);
SINGLE_ANIMATION(Infernape);
SINGLE_ANIMATION(Piplup);
SINGLE_ANIMATION(Prinplup);
SINGLE_ANIMATION(Empoleon);
SINGLE_ANIMATION(Starly);
SINGLE_ANIMATION(Staravia);
SINGLE_ANIMATION(Staraptor);
SINGLE_ANIMATION(Bidoof);
DOUBLE_ANIMATION(Bibarel);
SINGLE_ANIMATION(Kricketot);
SINGLE_ANIMATION(Kricketune);
SINGLE_ANIMATION(Shinx);
SINGLE_ANIMATION(Luxio);
DOUBLE_ANIMATION(Luxray);
SINGLE_ANIMATION(Budew);
SINGLE_ANIMATION(Roserade);
SINGLE_ANIMATION(Cranidos);
SINGLE_ANIMATION(Rampardos);
SINGLE_ANIMATION(Shieldon);
SINGLE_ANIMATION(Bastiodon);
SINGLE_ANIMATION(Burmy);
SINGLE_ANIMATION(Wormadam);
SINGLE_ANIMATION(Mothim);
SINGLE_ANIMATION(Combee);
SINGLE_ANIMATION(Vespiquen);
SINGLE_ANIMATION(Pachirisu);
SINGLE_ANIMATION(Buizel);
SINGLE_ANIMATION(Floatzel);
SINGLE_ANIMATION(Cherubi);
DOUBLE_ANIMATION(CherrimOvercast);
SINGLE_ANIMATION(CherrimSunshine);
SINGLE_ANIMATION(Shellos);
SINGLE_ANIMATION(Gastrodon);
SINGLE_ANIMATION(Ambipom);
SINGLE_ANIMATION(Drifloon);
SINGLE_ANIMATION(Drifblim);
SINGLE_ANIMATION(Buneary);
SINGLE_ANIMATION(Lopunny);
SINGLE_ANIMATION(Mismagius);
SINGLE_ANIMATION(Honchkrow);
SINGLE_ANIMATION(Glameow);
SINGLE_ANIMATION(Purugly);
SINGLE_ANIMATION(Chingling);
SINGLE_ANIMATION(Stunky);
SINGLE_ANIMATION(Skuntank);
SINGLE_ANIMATION(Bronzor);
DOUBLE_ANIMATION(Bronzong);
SINGLE_ANIMATION(Bonsly);
SINGLE_ANIMATION(MimeJr);
SINGLE_ANIMATION(Happiny);
SINGLE_ANIMATION(Chatot);
SINGLE_ANIMATION(Spiritomb);
SINGLE_ANIMATION(Gible);
SINGLE_ANIMATION(Gabite);
SINGLE_ANIMATION(Garchomp);
SINGLE_ANIMATION(Munchlax);
SINGLE_ANIMATION(Riolu);
SINGLE_ANIMATION(Lucario);
SINGLE_ANIMATION(Hippopotas);
SINGLE_ANIMATION(Hippowdon);
SINGLE_ANIMATION(Skorupi);
SINGLE_ANIMATION(Drapion);
SINGLE_ANIMATION(Croagunk);
SINGLE_ANIMATION(Toxicroak);
SINGLE_ANIMATION(Carnivine);
SINGLE_ANIMATION(Finneon);
SINGLE_ANIMATION(Lumineon);
SINGLE_ANIMATION(Mantyke);
SINGLE_ANIMATION(Snover);
SINGLE_ANIMATION(Abomasnow);
SINGLE_ANIMATION(Weavile);
SINGLE_ANIMATION(Magnezone);
SINGLE_ANIMATION(Lickilicky);
SINGLE_ANIMATION(Rhyperior);
SINGLE_ANIMATION(Tangrowth);
SINGLE_ANIMATION(Electivire);
SINGLE_ANIMATION(Magmortar);
SINGLE_ANIMATION(Togekiss);
SINGLE_ANIMATION(Yanmega);
SINGLE_ANIMATION(Leafeon);
SINGLE_ANIMATION(Glaceon);
SINGLE_ANIMATION(Gliscor);
SINGLE_ANIMATION(Mamoswine);
SINGLE_ANIMATION(PORYGON_Z);
SINGLE_ANIMATION(Gallade);
DOUBLE_ANIMATION(Probopass);
SINGLE_ANIMATION(Dusknoir);
SINGLE_ANIMATION(Froslass);
DOUBLE_ANIMATION(Rotom);
SINGLE_ANIMATION(RotomHeat);
SINGLE_ANIMATION(RotomFrost);
SINGLE_ANIMATION(RotomFan);
SINGLE_ANIMATION(RotomMow);
SINGLE_ANIMATION(RotomWash);
SINGLE_ANIMATION(Uxie);
SINGLE_ANIMATION(Mesprit);
SINGLE_ANIMATION(Azelf);
SINGLE_ANIMATION(Dialga);
SINGLE_ANIMATION(Palkia);
SINGLE_ANIMATION(Heatran);
SINGLE_ANIMATION(Regigigas);
SINGLE_ANIMATION(Giratina);
SINGLE_ANIMATION(Cresselia);
SINGLE_ANIMATION(Phione);
SINGLE_ANIMATION(Manaphy);
SINGLE_ANIMATION(Darkrai);
SINGLE_ANIMATION(Shaymin);
SINGLE_ANIMATION(Arceus);
#endif
#if P_GEN_5_POKEMON == TRUE
SINGLE_ANIMATION(Victini);
SINGLE_ANIMATION(Snivy);
SINGLE_ANIMATION(Servine);
DOUBLE_ANIMATION(Serperior);
SINGLE_ANIMATION(Tepig);
SINGLE_ANIMATION(Pignite);
SINGLE_ANIMATION(Emboar);
SINGLE_ANIMATION(Oshawott);
SINGLE_ANIMATION(Dewott);
SINGLE_ANIMATION(Samurott);
SINGLE_ANIMATION(Patrat);
SINGLE_ANIMATION(Watchog);
SINGLE_ANIMATION(Lillipup);
SINGLE_ANIMATION(Herdier);
SINGLE_ANIMATION(Stoutland);
SINGLE_ANIMATION(Purrloin);
SINGLE_ANIMATION(Liepard);
SINGLE_ANIMATION(Pansage);
SINGLE_ANIMATION(Simisage);
SINGLE_ANIMATION(Pansear);
DOUBLE_ANIMATION(Simisear);
SINGLE_ANIMATION(Panpour);
SINGLE_ANIMATION(Simipour);
SINGLE_ANIMATION(Munna);
DOUBLE_ANIMATION(Musharna);
SINGLE_ANIMATION(Pidove);
SINGLE_ANIMATION(Tranquill);
SINGLE_ANIMATION(Unfezant);
SINGLE_ANIMATION(Blitzle);
SINGLE_ANIMATION(Zebstrika);
SINGLE_ANIMATION(Roggenrola);
SINGLE_ANIMATION(Boldore);
SINGLE_ANIMATION(Gigalith);
SINGLE_ANIMATION(Woobat);
SINGLE_ANIMATION(Swoobat);
DOUBLE_ANIMATION(Drilbur);
SINGLE_ANIMATION(Excadrill);
SINGLE_ANIMATION(Audino);
SINGLE_ANIMATION(Timburr);
SINGLE_ANIMATION(Gurdurr);
SINGLE_ANIMATION(Conkeldurr);
SINGLE_ANIMATION(Tympole);
SINGLE_ANIMATION(Palpitoad);
SINGLE_ANIMATION(Seismitoad);
SINGLE_ANIMATION(Throh);
SINGLE_ANIMATION(Sawk);
DOUBLE_ANIMATION(Sewaddle);
SINGLE_ANIMATION(Swadloon);
SINGLE_ANIMATION(Leavanny);
SINGLE_ANIMATION(Venipede);
SINGLE_ANIMATION(Whirlipede);
SINGLE_ANIMATION(Scolipede);
SINGLE_ANIMATION(Cottonee);
SINGLE_ANIMATION(Whimsicott);
SINGLE_ANIMATION(Petilil);
SINGLE_ANIMATION(Lilligant);
SINGLE_ANIMATION(Basculin);
SINGLE_ANIMATION(Sandile);
SINGLE_ANIMATION(Krokorok);
DOUBLE_ANIMATION(Krookodile);
SINGLE_ANIMATION(Darumaka);
SINGLE_ANIMATION(Darmanitan);
SINGLE_ANIMATION(Maractus);
SINGLE_ANIMATION(Dwebble);
SINGLE_ANIMATION(Crustle);
SINGLE_ANIMATION(Scraggy);
SINGLE_ANIMATION(Scrafty);
SINGLE_ANIMATION(Sigilyph);
SINGLE_ANIMATION(Yamask);
SINGLE_ANIMATION(Cofagrigus);
SINGLE_ANIMATION(Tirtouga);
SINGLE_ANIMATION(Carracosta);
SINGLE_ANIMATION(Archen);
SINGLE_ANIMATION(Archeops);
SINGLE_ANIMATION(Trubbish);
SINGLE_ANIMATION(Garbodor);
SINGLE_ANIMATION(Zorua);
SINGLE_ANIMATION(Zoroark);
SINGLE_ANIMATION(Minccino);
SINGLE_ANIMATION(Cinccino);
SINGLE_ANIMATION(Gothita);
DOUBLE_ANIMATION(Gothorita);
SINGLE_ANIMATION(Gothitelle);
SINGLE_ANIMATION(Solosis);
SINGLE_ANIMATION(Duosion);
SINGLE_ANIMATION(Reuniclus);
SINGLE_ANIMATION(Ducklett);
SINGLE_ANIMATION(Swanna);
SINGLE_ANIMATION(Vanillite);
SINGLE_ANIMATION(Vanillish);
SINGLE_ANIMATION(Vanilluxe);
SINGLE_ANIMATION(Deerling);
SINGLE_ANIMATION(Sawsbuck);
SINGLE_ANIMATION(Emolga);
SINGLE_ANIMATION(Karrablast);
SINGLE_ANIMATION(Escavalier);
DOUBLE_ANIMATION(Foongus);
SINGLE_ANIMATION(Amoonguss);
SINGLE_ANIMATION(Frillish);
SINGLE_ANIMATION(Jellicent);
SINGLE_ANIMATION(Alomomola);
SINGLE_ANIMATION(Joltik);
SINGLE_ANIMATION(Galvantula);
SINGLE_ANIMATION(Ferroseed);
DOUBLE_ANIMATION(Ferrothorn);
SINGLE_ANIMATION(Klink);
SINGLE_ANIMATION(Klang);
SINGLE_ANIMATION(Klinklang);
SINGLE_ANIMATION(Tynamo);
SINGLE_ANIMATION(Eelektrik);
SINGLE_ANIMATION(Eelektross);
SINGLE_ANIMATION(Elgyem);
SINGLE_ANIMATION(Beheeyem);
SINGLE_ANIMATION(Litwick);
SINGLE_ANIMATION(Lampent);
SINGLE_ANIMATION(Chandelure);
SINGLE_ANIMATION(Axew);
SINGLE_ANIMATION(Fraxure);
SINGLE_ANIMATION(Haxorus);
SINGLE_ANIMATION(Cubchoo);
SINGLE_ANIMATION(Beartic);
DOUBLE_ANIMATION(Cryogonal);
SINGLE_ANIMATION(Shelmet);
SINGLE_ANIMATION(Accelgor);
SINGLE_ANIMATION(Stunfisk);
SINGLE_ANIMATION(Mienfoo);
SINGLE_ANIMATION(Mienshao);
SINGLE_ANIMATION(Druddigon);
SINGLE_ANIMATION(Golett);
SINGLE_ANIMATION(Golurk);
SINGLE_ANIMATION(Pawniard);
SINGLE_ANIMATION(Bisharp);
SINGLE_ANIMATION(Bouffalant);
SINGLE_ANIMATION(Rufflet);
SINGLE_ANIMATION(Braviary);
SINGLE_ANIMATION(Vullaby);
SINGLE_ANIMATION(Mandibuzz);
SINGLE_ANIMATION(Heatmor);
SINGLE_ANIMATION(Durant);
SINGLE_ANIMATION(Deino);
SINGLE_ANIMATION(Zweilous);
SINGLE_ANIMATION(Hydreigon);
SINGLE_ANIMATION(Larvesta);
SINGLE_ANIMATION(Volcarona);
SINGLE_ANIMATION(Cobalion);
DOUBLE_ANIMATION(Terrakion);
SINGLE_ANIMATION(Virizion);
SINGLE_ANIMATION(Tornadus);
SINGLE_ANIMATION(Thundurus);
SINGLE_ANIMATION(Reshiram);
SINGLE_ANIMATION(Zekrom);
SINGLE_ANIMATION(Landorus);
SINGLE_ANIMATION(Kyurem);
SINGLE_ANIMATION(Keldeo);
DOUBLE_ANIMATION(Meloetta);
SINGLE_ANIMATION(Genesect);
#endif
#if P_GEN_6_POKEMON == TRUE
SINGLE_ANIMATION(Chespin);
DOUBLE_ANIMATION(Quilladin);
SINGLE_ANIMATION(Chesnaught);
SINGLE_ANIMATION(Fennekin);
SINGLE_ANIMATION(Braixen);
SINGLE_ANIMATION(Delphox);
SINGLE_ANIMATION(Froakie);
SINGLE_ANIMATION(Frogadier);
SINGLE_ANIMATION(Greninja);
SINGLE_ANIMATION(GreninjaAsh);
SINGLE_ANIMATION(Bunnelby);
SINGLE_ANIMATION(Diggersby);
SINGLE_ANIMATION(Fletchling);
SINGLE_ANIMATION(Fletchinder);
DOUBLE_ANIMATION(Talonflame);
SINGLE_ANIMATION(Scatterbug);
SINGLE_ANIMATION(Spewpa);
SINGLE_ANIMATION(Vivillon);
SINGLE_ANIMATION(Litleo);
SINGLE_ANIMATION(Pyroar);
DOUBLE_ANIMATION(Flabebe);
SINGLE_ANIMATION(Floette);
DOUBLE_ANIMATION(Florges);
SINGLE_ANIMATION(Skiddo);
SINGLE_ANIMATION(Gogoat);
SINGLE_ANIMATION(Pancham);
SINGLE_ANIMATION(Pangoro);
SINGLE_ANIMATION(Furfrou);
SINGLE_ANIMATION(Espurr);
SINGLE_ANIMATION(Meowstic);
SINGLE_ANIMATION(Honedge);
DOUBLE_ANIMATION(Doublade);
SINGLE_ANIMATION(Aegislash);
SINGLE_ANIMATION(Spritzee);
SINGLE_ANIMATION(Aromatisse);
SINGLE_ANIMATION(Swirlix);
SINGLE_ANIMATION(Slurpuff);
SINGLE_ANIMATION(Inkay);
SINGLE_ANIMATION(Malamar);
SINGLE_ANIMATION(Binacle);
SINGLE_ANIMATION(Barbaracle);
SINGLE_ANIMATION(Skrelp);
SINGLE_ANIMATION(Dragalge);
SINGLE_ANIMATION(Clauncher);
SINGLE_ANIMATION(Clawitzer);
SINGLE_ANIMATION(Helioptile);
SINGLE_ANIMATION(Heliolisk);
SINGLE_ANIMATION(Tyrunt);
SINGLE_ANIMATION(Tyrantrum);
SINGLE_ANIMATION(Amaura);
SINGLE_ANIMATION(Aurorus);
SINGLE_ANIMATION(Sylveon);
SINGLE_ANIMATION(Hawlucha);
SINGLE_ANIMATION(Dedenne);
SINGLE_ANIMATION(Carbink);
SINGLE_ANIMATION(Goomy);
SINGLE_ANIMATION(Sliggoo);
SINGLE_ANIMATION(Goodra);
SINGLE_ANIMATION(Klefki);
SINGLE_ANIMATION(Phantump);
SINGLE_ANIMATION(Trevenant);
SINGLE_ANIMATION(Pumpkaboo);
SINGLE_ANIMATION(Gourgeist);
DOUBLE_ANIMATION(Bergmite);
SINGLE_ANIMATION(Avalugg);
SINGLE_ANIMATION(Noibat);
SINGLE_ANIMATION(Noivern);
SINGLE_ANIMATION(Xerneas);
SINGLE_ANIMATION(Yveltal);
SINGLE_ANIMATION(Zygarde);
SINGLE_ANIMATION(Diancie);
SINGLE_ANIMATION(Hoopa);
SINGLE_ANIMATION(Volcanion);
#endif
#if P_GEN_7_POKEMON == TRUE
SINGLE_ANIMATION(Rowlet);
SINGLE_ANIMATION(Dartrix);
SINGLE_ANIMATION(Decidueye);
SINGLE_ANIMATION(Litten);
SINGLE_ANIMATION(Torracat);
SINGLE_ANIMATION(Incineroar);
SINGLE_ANIMATION(Popplio);
SINGLE_ANIMATION(Brionne);
SINGLE_ANIMATION(Primarina);
SINGLE_ANIMATION(Pikipek);
SINGLE_ANIMATION(Trumbeak);
SINGLE_ANIMATION(Toucannon);
SINGLE_ANIMATION(Yungoos);
SINGLE_ANIMATION(Gumshoos);
SINGLE_ANIMATION(Grubbin);
SINGLE_ANIMATION(Charjabug);
SINGLE_ANIMATION(Vikavolt);
SINGLE_ANIMATION(Crabrawler);
SINGLE_ANIMATION(Crabominable);
SINGLE_ANIMATION(Oricorio);
SINGLE_ANIMATION(Cutiefly);
SINGLE_ANIMATION(Ribombee);
SINGLE_ANIMATION(Rockruff);
SINGLE_ANIMATION(Lycanroc);
SINGLE_ANIMATION(Wishiwashi);
SINGLE_ANIMATION(Mareanie);
SINGLE_ANIMATION(Toxapex);
SINGLE_ANIMATION(Mudbray);
SINGLE_ANIMATION(Mudsdale);
SINGLE_ANIMATION(Dewpider);
SINGLE_ANIMATION(Araquanid);
SINGLE_ANIMATION(Fomantis);
SINGLE_ANIMATION(Lurantis);
SINGLE_ANIMATION(Morelull);
SINGLE_ANIMATION(Shiinotic);
SINGLE_ANIMATION(Salandit);
SINGLE_ANIMATION(Salazzle);
SINGLE_ANIMATION(Stufful);
SINGLE_ANIMATION(Bewear);
SINGLE_ANIMATION(Bounsweet);
SINGLE_ANIMATION(Steenee);
SINGLE_ANIMATION(Tsareena);
SINGLE_ANIMATION(Comfey);
SINGLE_ANIMATION(Oranguru);
SINGLE_ANIMATION(Passimian);
SINGLE_ANIMATION(Wimpod);
SINGLE_ANIMATION(Golisopod);
SINGLE_ANIMATION(Sandygast);
SINGLE_ANIMATION(Palossand);
SINGLE_ANIMATION(Pyukumuku);
SINGLE_ANIMATION(TypeNull);
SINGLE_ANIMATION(Silvally);
SINGLE_ANIMATION(Minior);
SINGLE_ANIMATION(Komala);
SINGLE_ANIMATION(Turtonator);
SINGLE_ANIMATION(Togedemaru);
SINGLE_ANIMATION(Mimikyu);
SINGLE_ANIMATION(Bruxish);
SINGLE_ANIMATION(Drampa);
SINGLE_ANIMATION(Dhelmise);
SINGLE_ANIMATION(JANGMO_O);
SINGLE_ANIMATION(HAKAMO_O);
SINGLE_ANIMATION(KOMMO_O);
SINGLE_ANIMATION(TapuKoko);
SINGLE_ANIMATION(TapuLele);
SINGLE_ANIMATION(TapuBulu);
SINGLE_ANIMATION(TapuFini);
SINGLE_ANIMATION(Cosmog);
SINGLE_ANIMATION(Cosmoem);
SINGLE_ANIMATION(Solgaleo);
SINGLE_ANIMATION(Lunala);
SINGLE_ANIMATION(Nihilego);
SINGLE_ANIMATION(Buzzwole);
SINGLE_ANIMATION(Pheromosa);
SINGLE_ANIMATION(Xurkitree);
SINGLE_ANIMATION(Celesteela);
SINGLE_ANIMATION(Kartana);
SINGLE_ANIMATION(Guzzlord);
SINGLE_ANIMATION(Necrozma);
SINGLE_ANIMATION(Magearna);
SINGLE_ANIMATION(Marshadow);
SINGLE_ANIMATION(Poipole);
SINGLE_ANIMATION(Naganadel);
SINGLE_ANIMATION(Stakataka);
SINGLE_ANIMATION(Blacephalon);
SINGLE_ANIMATION(Zeraora);
SINGLE_ANIMATION(Meltan);
SINGLE_ANIMATION(Melmetal);
#endif
#if P_GEN_8_POKEMON == TRUE
SINGLE_ANIMATION(Grookey);
SINGLE_ANIMATION(Thwackey);
SINGLE_ANIMATION(Rillaboom);
SINGLE_ANIMATION(Scorbunny);
SINGLE_ANIMATION(Raboot);
SINGLE_ANIMATION(Cinderace);
SINGLE_ANIMATION(Sobble);
SINGLE_ANIMATION(Drizzile);
SINGLE_ANIMATION(Inteleon);
SINGLE_ANIMATION(Skwovet);
SINGLE_ANIMATION(Greedent);
SINGLE_ANIMATION(Rookidee);
SINGLE_ANIMATION(Corvisquire);
SINGLE_ANIMATION(Corviknight);
SINGLE_ANIMATION(Blipbug);
SINGLE_ANIMATION(Dottler);
SINGLE_ANIMATION(Orbeetle);
SINGLE_ANIMATION(Nickit);
SINGLE_ANIMATION(Thievul);
SINGLE_ANIMATION(Gossifleur);
SINGLE_ANIMATION(Eldegoss);
SINGLE_ANIMATION(Wooloo);
SINGLE_ANIMATION(Dubwool);
SINGLE_ANIMATION(Chewtle);
SINGLE_ANIMATION(Drednaw);
SINGLE_ANIMATION(Yamper);
SINGLE_ANIMATION(Boltund);
SINGLE_ANIMATION(Rolycoly);
SINGLE_ANIMATION(Carkol);
SINGLE_ANIMATION(Coalossal);
SINGLE_ANIMATION(Applin);
SINGLE_ANIMATION(Flapple);
SINGLE_ANIMATION(Appletun);
SINGLE_ANIMATION(Silicobra);
SINGLE_ANIMATION(Sandaconda);
SINGLE_ANIMATION(Cramorant);
SINGLE_ANIMATION(Arrokuda);
SINGLE_ANIMATION(Barraskewda);
SINGLE_ANIMATION(Toxel);
SINGLE_ANIMATION(Toxtricity);
SINGLE_ANIMATION(Sizzlipede);
SINGLE_ANIMATION(Centiskorch);
SINGLE_ANIMATION(Clobbopus);
SINGLE_ANIMATION(Grapploct);
SINGLE_ANIMATION(Sinistea);
SINGLE_ANIMATION(Polteageist);
SINGLE_ANIMATION(Hatenna);
SINGLE_ANIMATION(Hattrem);
SINGLE_ANIMATION(Hatterene);
SINGLE_ANIMATION(Impidimp);
SINGLE_ANIMATION(Morgrem);
SINGLE_ANIMATION(Grimmsnarl);
SINGLE_ANIMATION(Obstagoon);
SINGLE_ANIMATION(Perrserker);
SINGLE_ANIMATION(Cursola);
SINGLE_ANIMATION(Sirfetchd);
SINGLE_ANIMATION(MrRime);
SINGLE_ANIMATION(Runerigus);
SINGLE_ANIMATION(Milcery);
SINGLE_ANIMATION(Alcremie);
SINGLE_ANIMATION(Falinks);
SINGLE_ANIMATION(Pincurchin);
SINGLE_ANIMATION(Snom);
SINGLE_ANIMATION(Frosmoth);
SINGLE_ANIMATION(Stonjourner);
SINGLE_ANIMATION(Eiscue);
SINGLE_ANIMATION(Indeedee);
SINGLE_ANIMATION(Morpeko);
SINGLE_ANIMATION(Cufant);
SINGLE_ANIMATION(Copperajah);
SINGLE_ANIMATION(Dracozolt);
SINGLE_ANIMATION(Arctozolt);
SINGLE_ANIMATION(Dracovish);
SINGLE_ANIMATION(Arctovish);
SINGLE_ANIMATION(Duraludon);
SINGLE_ANIMATION(Dreepy);
SINGLE_ANIMATION(Drakloak);
SINGLE_ANIMATION(Dragapult);
SINGLE_ANIMATION(Zacian);
SINGLE_ANIMATION(Zamazenta);
SINGLE_ANIMATION(Eternatus);
SINGLE_ANIMATION(Kubfu);
SINGLE_ANIMATION(Urshifu);
SINGLE_ANIMATION(Zarude);
SINGLE_ANIMATION(Regieleki);
SINGLE_ANIMATION(Regidrago);
SINGLE_ANIMATION(Glastrier);
SINGLE_ANIMATION(Spectrier);
SINGLE_ANIMATION(Calyrex);
SINGLE_ANIMATION(Wyrdeer);
SINGLE_ANIMATION(Kleavor);
SINGLE_ANIMATION(Ursaluna);
SINGLE_ANIMATION(Basculegion);
SINGLE_ANIMATION(Sneasler);
SINGLE_ANIMATION(Overqwil);
SINGLE_ANIMATION(Enamorus);
#endif
SINGLE_ANIMATION(VenusaurMega);
SINGLE_ANIMATION(CHARIZARD_MEGA_X);
SINGLE_ANIMATION(CHARIZARD_MEGA_Y);
SINGLE_ANIMATION(BlastoiseMega);
SINGLE_ANIMATION(BeedrillMega);
SINGLE_ANIMATION(PidgeotMega);
SINGLE_ANIMATION(AlakazamMega);
SINGLE_ANIMATION(SlowbroMega);
SINGLE_ANIMATION(GengarMega);
SINGLE_ANIMATION(KangaskhanMega);
SINGLE_ANIMATION(PinsirMega);
SINGLE_ANIMATION(GyaradosMega);
SINGLE_ANIMATION(AerodactylMega);
SINGLE_ANIMATION(MEWTWO_MEGA_X);
SINGLE_ANIMATION(MEWTWO_MEGA_Y);
SINGLE_ANIMATION(AmpharosMega);
SINGLE_ANIMATION(SteelixMega);
SINGLE_ANIMATION(ScizorMega);
SINGLE_ANIMATION(HeracrossMega);
SINGLE_ANIMATION(HoundoomMega);
SINGLE_ANIMATION(TyranitarMega);
SINGLE_ANIMATION(SceptileMega);
SINGLE_ANIMATION(BlazikenMega);
SINGLE_ANIMATION(SwampertMega);
SINGLE_ANIMATION(GardevoirMega);
SINGLE_ANIMATION(SableyeMega);
SINGLE_ANIMATION(MawileMega);
SINGLE_ANIMATION(AggronMega);
SINGLE_ANIMATION(MedichamMega);
SINGLE_ANIMATION(ManectricMega);
SINGLE_ANIMATION(SharpedoMega);
SINGLE_ANIMATION(CameruptMega);
SINGLE_ANIMATION(AltariaMega);
SINGLE_ANIMATION(BanetteMega);
SINGLE_ANIMATION(AbsolMega);
SINGLE_ANIMATION(GlalieMega);
SINGLE_ANIMATION(SalamenceMega);
SINGLE_ANIMATION(MetagrossMega);
SINGLE_ANIMATION(LatiasMega);
SINGLE_ANIMATION(LatiosMega);
SINGLE_ANIMATION(KyogrePrimal);
SINGLE_ANIMATION(GroudonPrimal);
SINGLE_ANIMATION(RayquazaMega);
#if P_GEN_4_POKEMON == TRUE
SINGLE_ANIMATION(LopunnyMega);
SINGLE_ANIMATION(GarchompMega);
SINGLE_ANIMATION(LucarioMega);
SINGLE_ANIMATION(AbomasnowMega);
SINGLE_ANIMATION(GalladeMega);
#endif
#if P_GEN_5_POKEMON == TRUE
SINGLE_ANIMATION(AudinoMega);
#endif
#if P_GEN_6_POKEMON == TRUE
SINGLE_ANIMATION(DiancieMega);
#endif
SINGLE_ANIMATION(RattataAlolan);
SINGLE_ANIMATION(RaticateAlolan);
SINGLE_ANIMATION(RaichuAlolan);
SINGLE_ANIMATION(SandshrewAlolan);
SINGLE_ANIMATION(SandslashAlolan);
SINGLE_ANIMATION(VulpixAlolan);
SINGLE_ANIMATION(NinetalesAlolan);
SINGLE_ANIMATION(DiglettAlolan);
SINGLE_ANIMATION(DugtrioAlolan);
SINGLE_ANIMATION(MeowthAlolan);
SINGLE_ANIMATION(PersianAlolan);
SINGLE_ANIMATION(GeodudeAlolan);
SINGLE_ANIMATION(GravelerAlolan);
SINGLE_ANIMATION(GolemAlolan);
SINGLE_ANIMATION(GrimerAlolan);
SINGLE_ANIMATION(MukAlolan);
SINGLE_ANIMATION(ExeggutorAlolan);
SINGLE_ANIMATION(MarowakAlolan);
SINGLE_ANIMATION(MeowthGalarian);
SINGLE_ANIMATION(PonytaGalarian);
SINGLE_ANIMATION(RapidashGalarian);
SINGLE_ANIMATION(SlowpokeGalarian);
SINGLE_ANIMATION(SlowbroGalarian);
SINGLE_ANIMATION(FarfetchdGalarian);
SINGLE_ANIMATION(WeezingGalarian);
SINGLE_ANIMATION(MrMimeGalarian);
SINGLE_ANIMATION(ArticunoGalarian);
SINGLE_ANIMATION(ZapdosGalarian);
SINGLE_ANIMATION(MoltresGalarian);
SINGLE_ANIMATION(SlowkingGalarian);
SINGLE_ANIMATION(CorsolaGalarian);
SINGLE_ANIMATION(ZigzagoonGalarian);
SINGLE_ANIMATION(LinooneGalarian);
#if P_GEN_5_POKEMON == TRUE
SINGLE_ANIMATION(DarumakaGalarian);
SINGLE_ANIMATION(DarmanitanGalarian);
SINGLE_ANIMATION(YamaskGalarian);
SINGLE_ANIMATION(StunfiskGalarian);
#endif
SINGLE_ANIMATION(GrowlitheHisuian);
SINGLE_ANIMATION(ArcanineHisuian);
SINGLE_ANIMATION(VoltorbHisuian);
SINGLE_ANIMATION(ElectrodeHisuian);
SINGLE_ANIMATION(TyphlosionHisuian);
SINGLE_ANIMATION(QwilfishHisuian);
SINGLE_ANIMATION(SneaselHisuian);
#if P_GEN_5_POKEMON == TRUE
SINGLE_ANIMATION(SamurottHisuian);
SINGLE_ANIMATION(LilligantHisuian);
SINGLE_ANIMATION(ZoruaHisuian);
SINGLE_ANIMATION(ZoroarkHisuian);
SINGLE_ANIMATION(BraviaryHisuian);
#endif
#if P_GEN_6_POKEMON == TRUE
SINGLE_ANIMATION(SliggooHisuian);
SINGLE_ANIMATION(GoodraHisuian);
SINGLE_ANIMATION(AvaluggHisuian);
#endif
#if P_GEN_7_POKEMON == TRUE
SINGLE_ANIMATION(DecidueyeHisuian);
#endif
SINGLE_ANIMATION(PikachuCosplay);
SINGLE_ANIMATION(PikachuRockStar);
SINGLE_ANIMATION(PikachuBelle);
SINGLE_ANIMATION(PikachuPopStar);
SINGLE_ANIMATION(PIKACHU_PH_D);
SINGLE_ANIMATION(PikachuLibre);
SINGLE_ANIMATION(PikachuOriginalCap);
SINGLE_ANIMATION(PikachuHoennCap);
SINGLE_ANIMATION(PikachuSinnohCap);
SINGLE_ANIMATION(PikachuUnovaCap);
SINGLE_ANIMATION(PikachuKalosCap);
SINGLE_ANIMATION(PikachuAlolaCap);
SINGLE_ANIMATION(PikachuPartnerCap);
SINGLE_ANIMATION(PikachuWorldCap);
SINGLE_ANIMATION(PichuSpikyEared);
DOUBLE_ANIMATION(DeoxysAttack);
DOUBLE_ANIMATION(DeoxysDefense);
DOUBLE_ANIMATION(DeoxysSpeed);
#if P_GEN_4_POKEMON == TRUE
SINGLE_ANIMATION(DialgaOrigin);
SINGLE_ANIMATION(PalkiaOrigin);
DOUBLE_ANIMATION(GiratinaOrigin);
SINGLE_ANIMATION(ShayminSky);
#endif
#if P_GEN_5_POKEMON == TRUE
SINGLE_ANIMATION(DarmanitanZenMode);
SINGLE_ANIMATION(DarmanitanZenModeGalarian);
SINGLE_ANIMATION(TornadusTherian);
SINGLE_ANIMATION(ThundurusTherian);
SINGLE_ANIMATION(LandorusTherian);
SINGLE_ANIMATION(KyuremBlack);
SINGLE_ANIMATION(KyuremWhite);
SINGLE_ANIMATION(KeldeoResolute);
SINGLE_ANIMATION(MeloettaPirouette);
#endif
#if P_GEN_6_POKEMON == TRUE
SINGLE_ANIMATION(AegislashBlade);
SINGLE_ANIMATION(Zygarde10);
SINGLE_ANIMATION(ZygardeComplete);
SINGLE_ANIMATION(HoopaUnbound);
#endif
#if P_GEN_7_POKEMON == TRUE
SINGLE_ANIMATION(MiniorCore);
SINGLE_ANIMATION(WishiwashiSchool);
SINGLE_ANIMATION(MimikyuBusted);
SINGLE_ANIMATION(LycanrocMidnight);
SINGLE_ANIMATION(LycanrocDusk);
#endif
#if P_GEN_8_POKEMON == TRUE
SINGLE_ANIMATION(EnamorusTherian);
#endif

static const union AnimCmd *const sAnim_DUBSNAKE[] ={
	sAnim_GeneralFrame0,
	sAnim_DUBSNAKE_1,
};

static const union AnimCmd *const sAnim_HYDROIL[] ={
	sAnim_GeneralFrame0,
	sAnim_HYDROIL_1,
};

static const union AnimCmd *const sAnim_WYCERN[] ={
	sAnim_GeneralFrame0,
	sAnim_WYCERN_1,
};

static const union AnimCmd *const sAnim_BITTERAGON[] ={
	sAnim_GeneralFrame0,
	sAnim_BITTERAGON_1,
};

static const union AnimCmd *const sAnim_CACTUMBRA[] ={
	sAnim_GeneralFrame0,
	sAnim_CACTUMBRA_1,
};

static const union AnimCmd *const sAnim_OBSICARGO[] ={
	sAnim_GeneralFrame0,
	sAnim_OBSICARGO_1,
};

static const union AnimCmd *const sAnim_NORWHALE[] ={
	sAnim_GeneralFrame0,
	sAnim_NORWHALE_1,
};

static const union AnimCmd *const sAnim_SPOOKUM[] ={
    sAnim_GeneralFrame0,
    sAnim_SPOOKUM_1,
};

static const union AnimCmd *const sAnim_GLASMA[] ={
	sAnim_GeneralFrame0,
	sAnim_GLASMA_1,
};

static const union AnimCmd *const sAnim_PLASMOLYTE[] ={
	sAnim_GeneralFrame0,
	sAnim_PLASMOLYTE_1,
};

static const union AnimCmd *const sAnim_STORMAGE[] ={
	sAnim_GeneralFrame0,
	sAnim_STORMAGE_1,
};

static const union AnimCmd *const sAnim_SANDUDE[] ={
	sAnim_GeneralFrame0,
	sAnim_SANDUDE_1,
};

static const union AnimCmd *const sAnim_SANDROSS[] ={
	sAnim_GeneralFrame0,
	sAnim_SANDROSS_1,
};

static const union AnimCmd *const sAnim_SANDUEL[] ={
	sAnim_GeneralFrame0,
	sAnim_SANDUEL_1,
};

static const union AnimCmd *const sAnim_ELADRIFT[] ={
	sAnim_GeneralFrame0,
	sAnim_ELADRIFT_1,
};

static const union AnimCmd *const sAnim_SLITHURENT[] ={
	sAnim_GeneralFrame0,
	sAnim_SLITHURENT_1,
};

static const union AnimCmd *const sAnim_PRESCYLLON[] ={
	sAnim_GeneralFrame0,
	sAnim_PRESCYLLON_1,
};

static const union AnimCmd *const sAnim_SLOSHMOSH[] ={
	sAnim_GeneralFrame0,
	sAnim_SLOSHMOSH_1,
};

static const union AnimCmd *const sAnim_SLURPINSKI[] ={
	sAnim_GeneralFrame0,
	sAnim_SLURPINSKI_1,
};

static const union AnimCmd *const sAnim_KEESH[] ={
	sAnim_GeneralFrame0,
	sAnim_KEESH_1,
};

static const union AnimCmd *const sAnim_HATCHBLING[] ={
	sAnim_GeneralFrame0,
	sAnim_HATCHBLING_1,
};

static const union AnimCmd *const sAnim_HUMMBLING[] ={
	sAnim_GeneralFrame0,
	sAnim_HUMMBLING_1,
};

static const union AnimCmd *const sAnim_KEESIGHT[] ={
	sAnim_GeneralFrame0,
	sAnim_KEESIGHT_1,
};

static const union AnimCmd *const sAnim_KEESPELL[] ={
	sAnim_GeneralFrame0,
	sAnim_KEESPELL_1,
};

static const union AnimCmd *const sAnim_LARVOOL[] ={
	sAnim_GeneralFrame0,
	sAnim_LARVOOL_1,
};

static const union AnimCmd *const sAnim_SPOOLER[] ={
	sAnim_GeneralFrame0,
	sAnim_SPOOLER_1,
};

static const union AnimCmd *const sAnim_BILLIARACH[] ={
	sAnim_GeneralFrame0,
	sAnim_BILLIARACH_1,
};

static const union AnimCmd *const sAnim_SLUGMA_FONEI[] ={
	sAnim_GeneralFrame0,
	sAnim_SLUGMA_FONEI_1,
};

static const union AnimCmd *const sAnim_MAGCARGO_FONEI[] ={
	sAnim_GeneralFrame0,
	sAnim_MAGCARGO_FONEI_1,
};

static const union AnimCmd *const sAnim_SUNFOREST[] ={
	sAnim_GeneralFrame0,
	sAnim_SUNFOREST_1,
};

static const union AnimCmd *const sAnim_HONEDGE_FONEI[] ={
	sAnim_GeneralFrame0,
	sAnim_HONEDGE_FONEI_1,
};

static const union AnimCmd *const sAnim_DOUBLADE_FONEI[] ={
	sAnim_GeneralFrame0,
	sAnim_DOUBLADE_FONEI_1,
};

static const union AnimCmd *const sAnim_AEGISLASH_FONEI_A[] ={
	sAnim_GeneralFrame0,
	sAnim_AEGISLASH_FONEI_A_1,
};

static const union AnimCmd *const sAnim_AEGISLASH_FONEI_E[] ={
	sAnim_GeneralFrame0,
	sAnim_AEGISLASH_FONEI_E_1,
};

static const union AnimCmd *const sAnim_ELEMPTY[] ={
	sAnim_GeneralFrame0,
	sAnim_ELEMPTY_1,
};

static const union AnimCmd *const sAnim_VENEARTH[] ={
	sAnim_GeneralFrame0,
	sAnim_VENEARTH_1,
};

static const union AnimCmd *const sAnim_MARSIZZLE[] ={
	sAnim_GeneralFrame0,
	sAnim_MARSIZZLE_1,
};

static const union AnimCmd *const sAnim_JUPLASMA[] ={
	sAnim_GeneralFrame0,
	sAnim_JUPLASMA_1,
};

static const union AnimCmd *const sAnim_MERLPOOL[] ={
	sAnim_GeneralFrame0,
	sAnim_MERLPOOL_1,
};

static const union AnimCmd *const sAnim_OPHICALF[] ={
	sAnim_GeneralFrame0,
	sAnim_OPHICALF_1,
};

static const union AnimCmd *const sAnim_SERPENTAUR[] ={
	sAnim_GeneralFrame0,
	sAnim_SERPENTAUR_1,
};

static const union AnimCmd *const sAnim_GEODUDE_FONEI[] ={
	sAnim_GeneralFrame0,
	sAnim_GEODUDE_FONEI_1,
};

static const union AnimCmd *const sAnim_GRAVELER_FONEI[] ={
	sAnim_GeneralFrame0,
	sAnim_GRAVELER_FONEI_1,
};

static const union AnimCmd *const sAnim_GOLEM_FONEI[] ={
	sAnim_GeneralFrame0,
	sAnim_GOLEM_FONEI_1,
};

static const union AnimCmd *const sAnim_SUDOWOODO_FONEI[] ={
	sAnim_GeneralFrame0,
	sAnim_SUDOWOODO_FONEI_1,
};

static const union AnimCmd *const sAnim_GRITWYRM[] ={
	sAnim_GeneralFrame0,
	sAnim_GRITWYRM_1,
};

static const union AnimCmd *const sAnim_MOLDUNE[] ={
	sAnim_GeneralFrame0,
	sAnim_MOLDUNE_1,
};

static const union AnimCmd *const sAnim_WATTITUDE[] ={
	sAnim_GeneralFrame0,
	sAnim_WATTITUDE_1,
};

static const union AnimCmd *const sAnim_RALTS_FONEI[] ={
	sAnim_GeneralFrame0,
	sAnim_RALTS_FONEI_1,
};

static const union AnimCmd *const sAnim_KIRLIA_FONEI[] ={
	sAnim_GeneralFrame0,
	sAnim_KIRLIA_FONEI_1,
};

static const union AnimCmd *const sAnim_GARDEVOIR_FONEI[] ={
	sAnim_GeneralFrame0,
	sAnim_GARDEVOIR_FONEI_1,
};

static const union AnimCmd *const sAnim_GALLADE_FONEI[] ={
	sAnim_GeneralFrame0,
	sAnim_GALLADE_FONEI_1,
};

static const union AnimCmd *const sAnim_TRUEBAT[] ={
	sAnim_GeneralFrame0,
	sAnim_TRUEBAT_1,
};

static const union AnimCmd *const sAnim_HOMBONE[] ={
	sAnim_GeneralFrame0,
	sAnim_HOMBONE_1,
};

static const union AnimCmd *const sAnim_HOMBEAST[] ={
	sAnim_GeneralFrame0,
	sAnim_HOMBEAST_1,
};

static const union AnimCmd *const sAnim_QWILSHARK[] ={
	sAnim_GeneralFrame0,
	sAnim_QWILSHARK_1,
};

static const union AnimCmd *const sAnim_KRISSY[] ={
	sAnim_GeneralFrame0,
	sAnim_KRISSY_1,
};

static const union AnimCmd *const sAnim_KRAKODEMON[] ={
	sAnim_GeneralFrame0,
	sAnim_KRAKODEMON_1,
};

static const union AnimCmd *const sAnim_WEATHERBANE[] ={
	sAnim_GeneralFrame0,
	sAnim_WEATHERBANE_1,
};

static const union AnimCmd *const sAnim_KETSUBAN[] ={
	sAnim_GeneralFrame0,
	sAnim_KETSUBAN_1,
};

static const union AnimCmd *const sAnim_DISABY[] ={
	sAnim_GeneralFrame0,
	sAnim_DISABY_1,
};

static const union AnimCmd *const sAnim_DISASPRITE[] ={
	sAnim_GeneralFrame0,
	sAnim_DISASPRITE_1,
};

static const union AnimCmd *const sAnim_DISMASTER[] ={
	sAnim_GeneralFrame0,
	sAnim_DISMASTER_1,
};

static const union AnimCmd *const sAnim_PURIDIAN[] ={
	sAnim_GeneralFrame0,
	sAnim_PURIDIAN_1,
};

static const union AnimCmd *const sAnim_MANIPULO[] ={
	sAnim_GeneralFrame0,
	sAnim_MANIPULO_1,
};

static const union AnimCmd *const sAnim_COILSPILL[] ={
	sAnim_GeneralFrame0,
	sAnim_COILSPILL_1,
};

static const union AnimCmd *const sAnim_BOOWHO[] ={
	sAnim_GeneralFrame0,
	sAnim_BOOWHO_1,
};

static const union AnimCmd *const sAnim_BOOXER[] ={
	sAnim_GeneralFrame0,
	sAnim_BOOXER_1,
};

static const union AnimCmd *const sAnim_BOOZERKER[] ={
	sAnim_GeneralFrame0,
	sAnim_BOOZERKER_1,
};

static const union AnimCmd *const sAnim_DEEPDARK[] ={
	sAnim_GeneralFrame0,
	sAnim_DEEPDARK_1,
};

static const union AnimCmd *const sAnim_BURMITE[] ={
	sAnim_GeneralFrame0,
	sAnim_BURMITE_1,
};

static const union AnimCmd *const sAnim_SEDIMETAL[] ={
	sAnim_GeneralFrame0,
	sAnim_SEDIMETAL_1,
};

static const union AnimCmd *const sAnim_SOLOSIS_FONEI[] ={
	sAnim_GeneralFrame0,
	sAnim_SOLOSIS_FONEI_1,
};

static const union AnimCmd *const sAnim_DUOSION_FONEI[] ={
	sAnim_GeneralFrame0,
	sAnim_DUOSION_FONEI_1,
};

static const union AnimCmd *const sAnim_REUNICLUS_FONEI[] ={
	sAnim_GeneralFrame0,
	sAnim_REUNICLUS_FONEI_1,
};

static const union AnimCmd *const sAnim_VINOS[] ={
	sAnim_GeneralFrame0,
	sAnim_VINOS_1,
};

static const union AnimCmd *const sAnim_VINOCEIVER[] ={
	sAnim_GeneralFrame0,
	sAnim_VINOCEIVER_1,
};

static const union AnimCmd *const sAnim_ANNOYIDGE[] ={
	sAnim_GeneralFrame0,
	sAnim_ANNOYIDGE_1,
};

static const union AnimCmd *const sAnim_PESQUITO[] ={
	sAnim_GeneralFrame0,
	sAnim_PESQUITO_1,
};

static const union AnimCmd *const sAnim_MANKEY_FONEI[] ={
	sAnim_GeneralFrame0,
	sAnim_MANKEY_FONEI_1,
};

static const union AnimCmd *const sAnim_PRIMEAPE_FONEI[] ={
	sAnim_GeneralFrame0,
	sAnim_PRIMEAPE_FONEI_1,
};

static const union AnimCmd *const sAnim_CRYOGONAL_FONEI[] ={
	sAnim_GeneralFrame0,
	sAnim_CRYOGONAL_FONEI_1,
};

static const union AnimCmd *const sAnim_AMPIBOISON[] ={
	sAnim_GeneralFrame0,
	sAnim_AMPIBOISON_1,
};

static const union AnimCmd *const sAnim_LAGNET[] ={
	sAnim_GeneralFrame0,
	sAnim_LAGNET_1,
};

static const union AnimCmd *const sAnim_LANNET[] ={
	sAnim_GeneralFrame0,
	sAnim_LANNET_1,
};

static const union AnimCmd *const sAnim_CYBURN[] ={
	sAnim_GeneralFrame0,
	sAnim_CYBURN_1,
};

static const union AnimCmd *const sAnim_SAPNOSE[] ={
	sAnim_GeneralFrame0,
	sAnim_SAPNOSE_1,
};

static const union AnimCmd *const sAnim_BURROOT[] ={
	sAnim_GeneralFrame0,
	sAnim_BURROOT_1,
};

static const union AnimCmd *const sAnim_BURRUSH[] ={
	sAnim_GeneralFrame0,
	sAnim_BURRUSH_1,
};

static const union AnimCmd *const sAnim_LAV[] ={
	sAnim_GeneralFrame0,
	sAnim_LAV_1,
};

static const union AnimCmd *const sAnim_LAVALY[] ={
	sAnim_GeneralFrame0,
	sAnim_LAVALY_1,
};

static const union AnimCmd *const sAnim_LAVSAMUCH[] ={
	sAnim_GeneralFrame0,
	sAnim_LAVSAMUCH_1,
};

static const union AnimCmd *const sAnim_GUPPAGE[] ={
	sAnim_GeneralFrame0,
	sAnim_GUPPAGE_1,
};

static const union AnimCmd *const sAnim_SEAGE[] ={
	sAnim_GeneralFrame0,
	sAnim_SEAGE_1,
};

static const union AnimCmd *const sAnim_BASSTION[] ={
	sAnim_GeneralFrame0,
	sAnim_BASSTION_1,
};

static const union AnimCmd *const sAnim_PANTOM[] ={
	sAnim_GeneralFrame0,
	sAnim_PANTOM_1,
};

static const union AnimCmd *const sAnim_HAPPANING[] ={
	sAnim_GeneralFrame0,
	sAnim_HAPPANING_1,
};

static const union AnimCmd *const sAnim_PANZERGAST[] ={
	sAnim_GeneralFrame0,
	sAnim_PANZERGAST_1,
};

static const union AnimCmd *const sAnim_SCAIRY[] ={
	sAnim_GeneralFrame0,
	sAnim_SCAIRY_1,
};

static const union AnimCmd *const sAnim_DANKLIMMER[] ={
	sAnim_GeneralFrame0,
	sAnim_DANKLIMMER_1,
};

static const union AnimCmd *const sAnim_GOLICHEM[] ={
	sAnim_GeneralFrame0,
	sAnim_GOLICHEM_1,
};

static const union AnimCmd *const sAnim_SPINDA_FONEI[] ={
	sAnim_GeneralFrame0,
	sAnim_SPINDA_FONEI_1,
};

static const union AnimCmd *const sAnim_EMUNITION[] ={
	sAnim_GeneralFrame0,
	sAnim_EMUNITION_1,
};

static const union AnimCmd *const sAnim_EMORTAR[] ={
	sAnim_GeneralFrame0,
	sAnim_EMORTAR_1,
};

static const union AnimCmd *const sAnim_OPEBBLISK[] ={
	sAnim_GeneralFrame0,
	sAnim_OPEBBLISK_1,
};

static const union AnimCmd *const sAnim_STONUMENT[] ={
	sAnim_GeneralFrame0,
	sAnim_STONUMENT_1,
};

static const union AnimCmd *const sAnim_MEMOIRBLE[] ={
	sAnim_GeneralFrame0,
	sAnim_MEMOIRBLE_1,
};

static const union AnimCmd *const sAnim_NOKOMMON[] ={
	sAnim_GeneralFrame0,
	sAnim_NOKOMMON_1,
};

static const union AnimCmd *const sAnim_TANGHOUL[] ={
	sAnim_GeneralFrame0,
	sAnim_TANGHOUL_1,
};

static const union AnimCmd *const sAnim_QWILYU[] ={
	sAnim_GeneralFrame0,
	sAnim_QWILYU_1,
};

static const union AnimCmd *const sAnim_CORILIA[] ={
	sAnim_GeneralFrame0,
	sAnim_CORILIA_1,
};

static const union AnimCmd *const sAnim_NIDOROOK[] ={
	sAnim_GeneralFrame0,
	sAnim_NIDOROOK_1,
};

static const union AnimCmd *const sAnim_SKALVENGER[] ={
	sAnim_GeneralFrame0,
	sAnim_SKALVENGER_1,
};

static const union AnimCmd *const sAnim_SKULKREX[] ={
	sAnim_GeneralFrame0,
	sAnim_SKULKREX_1,
};

static const union AnimCmd *const sAnim_SKELTYRANT[] ={
	sAnim_GeneralFrame0,
	sAnim_SKELTYRANT_1,
};

#define ANIM_CMD(name)             [SPECIES_##name] = sAnim_##name
#define ANIM_CMD_FULL(name, anims) [SPECIES_##name] = anims
const union AnimCmd *const *const gMonFrontAnimsPtrTable[NUM_SPECIES + 1] =
{
    [SPECIES_NONE]        = sAnim_None,
    [SPECIES_BULBASAUR]   = sAnim_Bulbasaur,
    [SPECIES_IVYSAUR]     = sAnim_Ivysaur,
    [SPECIES_VENUSAUR]    = sAnim_Venusaur,
    [SPECIES_CHARMANDER]  = sAnim_Charmander,
    [SPECIES_CHARMELEON]  = sAnim_Charmeleon,
    [SPECIES_CHARIZARD]   = sAnim_Charizard,
    [SPECIES_SQUIRTLE]    = sAnim_Squirtle,
    [SPECIES_WARTORTLE]   = sAnim_Wartortle,
    [SPECIES_BLASTOISE]   = sAnim_Blastoise,
    [SPECIES_CATERPIE]    = sAnim_Caterpie,
    [SPECIES_METAPOD]     = sAnim_Metapod,
    [SPECIES_BUTTERFREE]  = sAnim_Butterfree,
    [SPECIES_WEEDLE]      = sAnim_Weedle,
    [SPECIES_KAKUNA]      = sAnim_Kakuna,
    [SPECIES_BEEDRILL]    = sAnim_Beedrill,
    [SPECIES_PIDGEY]      = sAnim_Pidgey,
    [SPECIES_PIDGEOTTO]   = sAnim_Pidgeotto,
    [SPECIES_PIDGEOT]     = sAnim_Pidgeot,
    [SPECIES_RATTATA]     = sAnim_Rattata,
    [SPECIES_RATICATE]    = sAnim_Raticate,
    [SPECIES_SPEAROW]     = sAnim_Spearow,
    [SPECIES_FEAROW]      = sAnim_Fearow,
    [SPECIES_EKANS]       = sAnim_Ekans,
    [SPECIES_ARBOK]       = sAnim_Arbok,
    [SPECIES_PIKACHU]     = sAnim_Pikachu,
    [SPECIES_RAICHU]      = sAnim_Raichu,
    [SPECIES_SANDSHREW]   = sAnim_Sandshrew,
    [SPECIES_SANDSLASH]   = sAnim_Sandslash,
    [SPECIES_NIDORAN_F]   = sAnim_NidoranF,
    [SPECIES_NIDORINA]    = sAnim_Nidorina,
    [SPECIES_NIDOQUEEN]   = sAnim_Nidoqueen,
    [SPECIES_NIDORAN_M]   = sAnim_NidoranM,
    [SPECIES_NIDORINO]    = sAnim_Nidorino,
    [SPECIES_NIDOKING]    = sAnim_Nidoking,
    [SPECIES_CLEFAIRY]    = sAnim_Clefairy,
    [SPECIES_CLEFABLE]    = sAnim_Clefable,
    [SPECIES_VULPIX]      = sAnim_Vulpix,
    [SPECIES_NINETALES]   = sAnim_Ninetales,
    [SPECIES_JIGGLYPUFF]  = sAnim_Jigglypuff,
    [SPECIES_WIGGLYTUFF]  = sAnim_Wigglytuff,
    [SPECIES_ZUBAT]       = sAnim_Zubat,
    [SPECIES_GOLBAT]      = sAnim_Golbat,
    [SPECIES_ODDISH]      = sAnim_Oddish,
    [SPECIES_GLOOM]       = sAnim_Gloom,
    [SPECIES_VILEPLUME]   = sAnim_Vileplume,
    [SPECIES_PARAS]       = sAnim_Paras,
    [SPECIES_PARASECT]    = sAnim_Parasect,
    [SPECIES_VENONAT]     = sAnim_Venonat,
    [SPECIES_VENOMOTH]    = sAnim_Venomoth,
    [SPECIES_DIGLETT]     = sAnim_Diglett,
    [SPECIES_DUGTRIO]     = sAnim_Dugtrio,
    [SPECIES_MEOWTH]      = sAnim_Meowth,
    [SPECIES_PERSIAN]     = sAnim_Persian,
    [SPECIES_PSYDUCK]     = sAnim_Psyduck,
    [SPECIES_GOLDUCK]     = sAnim_Golduck,
    [SPECIES_MANKEY]      = sAnim_Mankey,
    [SPECIES_PRIMEAPE]    = sAnim_Primeape,
    [SPECIES_GROWLITHE]   = sAnim_Growlithe,
    [SPECIES_ARCANINE]    = sAnim_Arcanine,
    [SPECIES_POLIWAG]     = sAnim_Poliwag,
    [SPECIES_POLIWHIRL]   = sAnim_Poliwhirl,
    [SPECIES_POLIWRATH]   = sAnim_Poliwrath,
    [SPECIES_ABRA]        = sAnim_Abra,
    [SPECIES_KADABRA]     = sAnim_Kadabra,
    [SPECIES_ALAKAZAM]    = sAnim_Alakazam,
    [SPECIES_MACHOP]      = sAnim_Machop,
    [SPECIES_MACHOKE]     = sAnim_Machoke,
    [SPECIES_MACHAMP]     = sAnim_Machamp,
    [SPECIES_BELLSPROUT]  = sAnim_Bellsprout,
    [SPECIES_WEEPINBELL]  = sAnim_Weepinbell,
    [SPECIES_VICTREEBEL]  = sAnim_Victreebel,
    [SPECIES_TENTACOOL]   = sAnim_Tentacool,
    [SPECIES_TENTACRUEL]  = sAnim_Tentacruel,
    [SPECIES_GEODUDE]     = sAnim_Geodude,
    [SPECIES_GRAVELER]    = sAnim_Graveler,
    [SPECIES_GOLEM]       = sAnim_Golem,
    [SPECIES_PONYTA]      = sAnim_Ponyta,
    [SPECIES_RAPIDASH]    = sAnim_Rapidash,
    [SPECIES_SLOWPOKE]    = sAnim_Slowpoke,
    [SPECIES_SLOWBRO]     = sAnim_Slowbro,
    [SPECIES_MAGNEMITE]   = sAnim_Magnemite,
    [SPECIES_MAGNETON]    = sAnim_Magneton,
    [SPECIES_FARFETCHD]   = sAnim_Farfetchd,
    [SPECIES_DODUO]       = sAnim_Doduo,
    [SPECIES_DODRIO]      = sAnim_Dodrio,
    [SPECIES_SEEL]        = sAnim_Seel,
    [SPECIES_DEWGONG]     = sAnim_Dewgong,
    [SPECIES_GRIMER]      = sAnim_Grimer,
    [SPECIES_MUK]         = sAnim_Muk,
    [SPECIES_SHELLDER]    = sAnim_Shellder,
    [SPECIES_CLOYSTER]    = sAnim_Cloyster,
    [SPECIES_GASTLY]      = sAnim_Gastly,
    [SPECIES_HAUNTER]     = sAnim_Haunter,
    [SPECIES_GENGAR]      = sAnim_Gengar,
    [SPECIES_ONIX]        = sAnim_Onix,
    [SPECIES_DROWZEE]     = sAnim_Drowzee,
    [SPECIES_HYPNO]       = sAnim_Hypno,
    [SPECIES_KRABBY]      = sAnim_Krabby,
    [SPECIES_KINGLER]     = sAnim_Kingler,
    [SPECIES_VOLTORB]     = sAnim_Voltorb,
    [SPECIES_ELECTRODE]   = sAnim_Electrode,
    [SPECIES_EXEGGCUTE]   = sAnim_Exeggcute,
    [SPECIES_EXEGGUTOR]   = sAnim_Exeggutor,
    [SPECIES_CUBONE]      = sAnim_Cubone,
    [SPECIES_MAROWAK]     = sAnim_Marowak,
    [SPECIES_HITMONLEE]   = sAnim_Hitmonlee,
    [SPECIES_HITMONCHAN]  = sAnim_Hitmonchan,
    [SPECIES_LICKITUNG]   = sAnim_Lickitung,
    [SPECIES_KOFFING]     = sAnim_Koffing,
    [SPECIES_WEEZING]     = sAnim_Weezing,
    [SPECIES_RHYHORN]     = sAnim_Rhyhorn,
    [SPECIES_RHYDON]      = sAnim_Rhydon,
    [SPECIES_CHANSEY]     = sAnim_Chansey,
    [SPECIES_TANGELA]     = sAnim_Tangela,
    [SPECIES_KANGASKHAN]  = sAnim_Kangaskhan,
    [SPECIES_HORSEA]      = sAnim_Horsea,
    [SPECIES_SEADRA]      = sAnim_Seadra,
    [SPECIES_GOLDEEN]     = sAnim_Goldeen,
    [SPECIES_SEAKING]     = sAnim_Seaking,
    [SPECIES_STARYU]      = sAnim_Staryu,
    [SPECIES_STARMIE]     = sAnim_Starmie,
    [SPECIES_MR_MIME]     = sAnim_MrMime,
    [SPECIES_SCYTHER]     = sAnim_Scyther,
    [SPECIES_JYNX]        = sAnim_Jynx,
    [SPECIES_ELECTABUZZ]  = sAnim_Electabuzz,
    [SPECIES_MAGMAR]      = sAnim_Magmar,
    [SPECIES_PINSIR]      = sAnim_Pinsir,
    [SPECIES_TAUROS]      = sAnim_Tauros,
    [SPECIES_MAGIKARP]    = sAnim_Magikarp,
    [SPECIES_GYARADOS]    = sAnim_Gyarados,
    [SPECIES_LAPRAS]      = sAnim_Lapras,
    [SPECIES_DITTO]       = sAnim_Ditto,
    [SPECIES_EEVEE]       = sAnim_Eevee,
    [SPECIES_VAPOREON]    = sAnim_Vaporeon,
    [SPECIES_JOLTEON]     = sAnim_Jolteon,
    [SPECIES_FLAREON]     = sAnim_Flareon,
    [SPECIES_PORYGON]     = sAnim_Porygon,
    [SPECIES_OMANYTE]     = sAnim_Omanyte,
    [SPECIES_OMASTAR]     = sAnim_Omastar,
    [SPECIES_KABUTO]      = sAnim_Kabuto,
    [SPECIES_KABUTOPS]    = sAnim_Kabutops,
    [SPECIES_AERODACTYL]  = sAnim_Aerodactyl,
    [SPECIES_SNORLAX]     = sAnim_Snorlax,
    [SPECIES_ARTICUNO]    = sAnim_Articuno,
    [SPECIES_ZAPDOS]      = sAnim_Zapdos,
    [SPECIES_MOLTRES]     = sAnim_Moltres,
    [SPECIES_DRATINI]     = sAnim_Dratini,
    [SPECIES_DRAGONAIR]   = sAnim_Dragonair,
    [SPECIES_DRAGONITE]   = sAnim_Dragonite,
    [SPECIES_MEWTWO]      = sAnim_Mewtwo,
    [SPECIES_MEW]         = sAnim_Mew,
    [SPECIES_CHIKORITA]   = sAnim_Chikorita,
    [SPECIES_BAYLEEF]     = sAnim_Bayleef,
    [SPECIES_MEGANIUM]    = sAnim_Meganium,
    [SPECIES_CYNDAQUIL]   = sAnim_Cyndaquil,
    [SPECIES_QUILAVA]     = sAnim_Quilava,
    [SPECIES_TYPHLOSION]  = sAnim_Typhlosion,
    [SPECIES_TOTODILE]    = sAnim_Totodile,
    [SPECIES_CROCONAW]    = sAnim_Croconaw,
    [SPECIES_FERALIGATR]  = sAnim_Feraligatr,
    [SPECIES_SENTRET]     = sAnim_Sentret,
    [SPECIES_FURRET]      = sAnim_Furret,
    [SPECIES_HOOTHOOT]    = sAnim_Hoothoot,
    [SPECIES_NOCTOWL]     = sAnim_Noctowl,
    [SPECIES_LEDYBA]      = sAnim_Ledyba,
    [SPECIES_LEDIAN]      = sAnim_Ledian,
    [SPECIES_SPINARAK]    = sAnim_Spinarak,
    [SPECIES_ARIADOS]     = sAnim_Ariados,
    [SPECIES_CROBAT]      = sAnim_Crobat,
    [SPECIES_CHINCHOU]    = sAnim_Chinchou,
    [SPECIES_LANTURN]     = sAnim_Lanturn,
    [SPECIES_PICHU]       = sAnim_Pichu,
    [SPECIES_CLEFFA]      = sAnim_Cleffa,
    [SPECIES_IGGLYBUFF]   = sAnim_Igglybuff,
    [SPECIES_TOGEPI]      = sAnim_Togepi,
    [SPECIES_TOGETIC]     = sAnim_Togetic,
    [SPECIES_NATU]        = sAnim_Natu,
    [SPECIES_XATU]        = sAnim_Xatu,
    [SPECIES_MAREEP]      = sAnim_Mareep,
    [SPECIES_FLAAFFY]     = sAnim_Flaaffy,
    [SPECIES_AMPHAROS]    = sAnim_Ampharos,
    [SPECIES_BELLOSSOM]   = sAnim_Bellossom,
    [SPECIES_MARILL]      = sAnim_Marill,
    [SPECIES_AZUMARILL]   = sAnim_Azumarill,
    [SPECIES_SUDOWOODO]   = sAnim_Sudowoodo,
    [SPECIES_POLITOED]    = sAnim_Politoed,
    [SPECIES_HOPPIP]      = sAnim_Hoppip,
    [SPECIES_SKIPLOOM]    = sAnim_Skiploom,
    [SPECIES_JUMPLUFF]    = sAnim_Jumpluff,
    [SPECIES_AIPOM]       = sAnim_Aipom,
    [SPECIES_SUNKERN]     = sAnim_Sunkern,
    [SPECIES_SUNFLORA]    = sAnim_Sunflora,
    [SPECIES_YANMA]       = sAnim_Yanma,
    [SPECIES_WOOPER]      = sAnim_Wooper,
    [SPECIES_QUAGSIRE]    = sAnim_Quagsire,
    [SPECIES_ESPEON]      = sAnim_Espeon,
    [SPECIES_UMBREON]     = sAnim_Umbreon,
    [SPECIES_MURKROW]     = sAnim_Murkrow,
    [SPECIES_SLOWKING]    = sAnim_Slowking,
    [SPECIES_MISDREAVUS]  = sAnim_Misdreavus,
    [SPECIES_UNOWN]       = sAnim_Unown,
    [SPECIES_WOBBUFFET]   = sAnim_Wobbuffet,
    [SPECIES_GIRAFARIG]   = sAnim_Girafarig,
    [SPECIES_PINECO]      = sAnim_Pineco,
    [SPECIES_FORRETRESS]  = sAnim_Forretress,
    [SPECIES_DUNSPARCE]   = sAnim_Dunsparce,
    [SPECIES_GLIGAR]      = sAnim_Gligar,
    [SPECIES_STEELIX]     = sAnim_Steelix,
    [SPECIES_SNUBBULL]    = sAnim_Snubbull,
    [SPECIES_GRANBULL]    = sAnim_Granbull,
    [SPECIES_QWILFISH]    = sAnim_Qwilfish,
    [SPECIES_SCIZOR]      = sAnim_Scizor,
    [SPECIES_SHUCKLE]     = sAnim_Shuckle,
    [SPECIES_HERACROSS]   = sAnim_Heracross,
    [SPECIES_SNEASEL]     = sAnim_Sneasel,
    [SPECIES_TEDDIURSA]   = sAnim_Teddiursa,
    [SPECIES_URSARING]    = sAnim_Ursaring,
    [SPECIES_SLUGMA]      = sAnim_Slugma,
    [SPECIES_MAGCARGO]    = sAnim_Magcargo,
    [SPECIES_SWINUB]      = sAnim_Swinub,
    [SPECIES_PILOSWINE]   = sAnim_Piloswine,
    [SPECIES_CORSOLA]     = sAnim_Corsola,
    [SPECIES_REMORAID]    = sAnim_Remoraid,
    [SPECIES_OCTILLERY]   = sAnim_Octillery,
    [SPECIES_DELIBIRD]    = sAnim_Delibird,
    [SPECIES_MANTINE]     = sAnim_Mantine,
    [SPECIES_SKARMORY]    = sAnim_Skarmory,
    [SPECIES_HOUNDOUR]    = sAnim_Houndour,
    [SPECIES_HOUNDOOM]    = sAnim_Houndoom,
    [SPECIES_KINGDRA]     = sAnim_Kingdra,
    [SPECIES_PHANPY]      = sAnim_Phanpy,
    [SPECIES_DONPHAN]     = sAnim_Donphan,
    [SPECIES_PORYGON2]    = sAnim_Porygon2,
    [SPECIES_STANTLER]    = sAnim_Stantler,
    [SPECIES_SMEARGLE]    = sAnim_Smeargle,
    [SPECIES_TYROGUE]     = sAnim_Tyrogue,
    [SPECIES_HITMONTOP]   = sAnim_Hitmontop,
    [SPECIES_SMOOCHUM]    = sAnim_Smoochum,
    [SPECIES_ELEKID]      = sAnim_Elekid,
    [SPECIES_MAGBY]       = sAnim_Magby,
    [SPECIES_MILTANK]     = sAnim_Miltank,
    [SPECIES_BLISSEY]     = sAnim_Blissey,
    [SPECIES_RAIKOU]      = sAnim_Raikou,
    [SPECIES_ENTEI]       = sAnim_Entei,
    [SPECIES_SUICUNE]     = sAnim_Suicune,
    [SPECIES_LARVITAR]    = sAnim_Larvitar,
    [SPECIES_PUPITAR]     = sAnim_Pupitar,
    [SPECIES_TYRANITAR]   = sAnim_Tyranitar,
    [SPECIES_LUGIA]       = sAnim_Lugia,
    [SPECIES_HO_OH]       = sAnim_HoOh,
    [SPECIES_CELEBI]      = sAnim_Celebi,
    [SPECIES_TREECKO]     = sAnim_Treecko,
    [SPECIES_GROVYLE]     = sAnim_Grovyle,
    [SPECIES_SCEPTILE]    = sAnim_Sceptile,
    [SPECIES_TORCHIC]     = sAnim_Torchic,
    [SPECIES_COMBUSKEN]   = sAnim_Combusken,
    [SPECIES_BLAZIKEN]    = sAnim_Blaziken,
    [SPECIES_MUDKIP]      = sAnim_Mudkip,
    [SPECIES_MARSHTOMP]   = sAnim_Marshtomp,
    [SPECIES_SWAMPERT]    = sAnim_Swampert,
    [SPECIES_POOCHYENA]   = sAnim_Poochyena,
    [SPECIES_MIGHTYENA]   = sAnim_Mightyena,
    [SPECIES_ZIGZAGOON]   = sAnim_Zigzagoon,
    [SPECIES_LINOONE]     = sAnim_Linoone,
    [SPECIES_WURMPLE]     = sAnim_Wurmple,
    [SPECIES_SILCOON]     = sAnim_Silcoon,
    [SPECIES_BEAUTIFLY]   = sAnim_Beautifly,
    [SPECIES_CASCOON]     = sAnim_Cascoon,
    [SPECIES_DUSTOX]      = sAnim_Dustox,
    [SPECIES_LOTAD]       = sAnim_Lotad,
    [SPECIES_LOMBRE]      = sAnim_Lombre,
    [SPECIES_LUDICOLO]    = sAnim_Ludicolo,
    [SPECIES_SEEDOT]      = sAnim_Seedot,
    [SPECIES_NUZLEAF]     = sAnim_Nuzleaf,
    [SPECIES_SHIFTRY]     = sAnim_Shiftry,
    [SPECIES_NINCADA]     = sAnim_Nincada,
    [SPECIES_NINJASK]     = sAnim_Ninjask,
    [SPECIES_SHEDINJA]    = sAnim_Shedinja,
    [SPECIES_TAILLOW]     = sAnim_Taillow,
    [SPECIES_SWELLOW]     = sAnim_Swellow,
    [SPECIES_SHROOMISH]   = sAnim_Shroomish,
    [SPECIES_BRELOOM]     = sAnim_Breloom,
    [SPECIES_SPINDA]      = sAnim_Spinda,
    [SPECIES_WINGULL]     = sAnim_Wingull,
    [SPECIES_PELIPPER]    = sAnim_Pelipper,
    [SPECIES_SURSKIT]     = sAnim_Surskit,
    [SPECIES_MASQUERAIN]  = sAnim_Masquerain,
    [SPECIES_WAILMER]     = sAnim_Wailmer,
    [SPECIES_WAILORD]     = sAnim_Wailord,
    [SPECIES_SKITTY]      = sAnim_Skitty,
    [SPECIES_DELCATTY]    = sAnim_Delcatty,
    [SPECIES_KECLEON]     = sAnim_Kecleon,
    [SPECIES_BALTOY]      = sAnim_Baltoy,
    [SPECIES_CLAYDOL]     = sAnim_Claydol,
    [SPECIES_NOSEPASS]    = sAnim_Nosepass,
    [SPECIES_TORKOAL]     = sAnim_Torkoal,
    [SPECIES_SABLEYE]     = sAnim_Sableye,
    [SPECIES_BARBOACH]    = sAnim_Barboach,
    [SPECIES_WHISCASH]    = sAnim_Whiscash,
    [SPECIES_LUVDISC]     = sAnim_Luvdisc,
    [SPECIES_CORPHISH]    = sAnim_Corphish,
    [SPECIES_CRAWDAUNT]   = sAnim_Crawdaunt,
    [SPECIES_FEEBAS]      = sAnim_Feebas,
    [SPECIES_MILOTIC]     = sAnim_Milotic,
    [SPECIES_CARVANHA]    = sAnim_Carvanha,
    [SPECIES_SHARPEDO]    = sAnim_Sharpedo,
    [SPECIES_TRAPINCH]    = sAnim_Trapinch,
    [SPECIES_VIBRAVA]     = sAnim_Vibrava,
    [SPECIES_FLYGON]      = sAnim_Flygon,
    [SPECIES_MAKUHITA]    = sAnim_Makuhita,
    [SPECIES_HARIYAMA]    = sAnim_Hariyama,
    [SPECIES_ELECTRIKE]   = sAnim_Electrike,
    [SPECIES_MANECTRIC]   = sAnim_Manectric,
    [SPECIES_NUMEL]       = sAnim_Numel,
    [SPECIES_CAMERUPT]    = sAnim_Camerupt,
    [SPECIES_SPHEAL]      = sAnim_Spheal,
    [SPECIES_SEALEO]      = sAnim_Sealeo,
    [SPECIES_WALREIN]     = sAnim_Walrein,
    [SPECIES_CACNEA]      = sAnim_Cacnea,
    [SPECIES_CACTURNE]    = sAnim_Cacturne,
    [SPECIES_SNORUNT]     = sAnim_Snorunt,
    [SPECIES_GLALIE]      = sAnim_Glalie,
    [SPECIES_LUNATONE]    = sAnim_Lunatone,
    [SPECIES_SOLROCK]     = sAnim_Solrock,
    [SPECIES_AZURILL]     = sAnim_Azurill,
    [SPECIES_SPOINK]      = sAnim_Spoink,
    [SPECIES_GRUMPIG]     = sAnim_Grumpig,
    [SPECIES_PLUSLE]      = sAnim_Plusle,
    [SPECIES_MINUN]       = sAnim_Minun,
    [SPECIES_MAWILE]      = sAnim_Mawile,
    [SPECIES_MEDITITE]    = sAnim_Meditite,
    [SPECIES_MEDICHAM]    = sAnim_Medicham,
    [SPECIES_SWABLU]      = sAnim_Swablu,
    [SPECIES_ALTARIA]     = sAnim_Altaria,
    [SPECIES_WYNAUT]      = sAnim_Wynaut,
    [SPECIES_DUSKULL]     = sAnim_Duskull,
    [SPECIES_DUSCLOPS]    = sAnim_Dusclops,
    [SPECIES_ROSELIA]     = sAnim_Roselia,
    [SPECIES_SLAKOTH]     = sAnim_Slakoth,
    [SPECIES_VIGOROTH]    = sAnim_Vigoroth,
    [SPECIES_SLAKING]     = sAnim_Slaking,
    [SPECIES_GULPIN]      = sAnim_Gulpin,
    [SPECIES_SWALOT]      = sAnim_Swalot,
    [SPECIES_TROPIUS]     = sAnim_Tropius,
    [SPECIES_WHISMUR]     = sAnim_Whismur,
    [SPECIES_LOUDRED]     = sAnim_Loudred,
    [SPECIES_EXPLOUD]     = sAnim_Exploud,
    [SPECIES_CLAMPERL]    = sAnim_Clamperl,
    [SPECIES_HUNTAIL]     = sAnim_Huntail,
    [SPECIES_GOREBYSS]    = sAnim_Gorebyss,
    [SPECIES_ABSOL]       = sAnim_Absol,
    [SPECIES_SHUPPET]     = sAnim_Shuppet,
    [SPECIES_BANETTE]     = sAnim_Banette,
    [SPECIES_SEVIPER]     = sAnim_Seviper,
    [SPECIES_ZANGOOSE]    = sAnim_Zangoose,
    [SPECIES_RELICANTH]   = sAnim_Relicanth,
    [SPECIES_ARON]        = sAnim_Aron,
    [SPECIES_LAIRON]      = sAnim_Lairon,
    [SPECIES_AGGRON]      = sAnim_Aggron,
    [SPECIES_CASTFORM]    = sAnim_Castform,
    [SPECIES_VOLBEAT]     = sAnim_Volbeat,
    [SPECIES_ILLUMISE]    = sAnim_Illumise,
    [SPECIES_LILEEP]      = sAnim_Lileep,
    [SPECIES_CRADILY]     = sAnim_Cradily,
    [SPECIES_ANORITH]     = sAnim_Anorith,
    [SPECIES_ARMALDO]     = sAnim_Armaldo,
    [SPECIES_RALTS]       = sAnim_Ralts,
    [SPECIES_KIRLIA]      = sAnim_Kirlia,
    [SPECIES_GARDEVOIR]   = sAnim_Gardevoir,
    [SPECIES_BAGON]       = sAnim_Bagon,
    [SPECIES_SHELGON]     = sAnim_Shelgon,
    [SPECIES_SALAMENCE]   = sAnim_Salamence,
    [SPECIES_BELDUM]      = sAnim_Beldum,
    [SPECIES_METANG]      = sAnim_Metang,
    [SPECIES_METAGROSS]   = sAnim_Metagross,
    [SPECIES_REGIROCK]    = sAnim_Regirock,
    [SPECIES_REGICE]      = sAnim_Regice,
    [SPECIES_REGISTEEL]   = sAnim_Registeel,
    [SPECIES_KYOGRE]      = sAnim_Kyogre,
    [SPECIES_GROUDON]     = sAnim_Groudon,
    [SPECIES_RAYQUAZA]    = sAnim_Rayquaza,
    [SPECIES_LATIAS]      = sAnim_Latias,
    [SPECIES_LATIOS]      = sAnim_Latios,
    [SPECIES_JIRACHI]     = sAnim_Jirachi,
    [SPECIES_DEOXYS]      = sAnim_Deoxys,
    [SPECIES_CHIMECHO]    = sAnim_Chimecho,
#if P_GEN_4_POKEMON == TRUE
    [SPECIES_TURTWIG] = sAnim_Turtwig,
    [SPECIES_GROTLE] = sAnim_Grotle,
    [SPECIES_TORTERRA] = sAnim_Torterra,
    [SPECIES_CHIMCHAR] = sAnim_Chimchar,
    [SPECIES_MONFERNO] = sAnim_Monferno,
    [SPECIES_INFERNAPE] = sAnim_Infernape,
    [SPECIES_PIPLUP] = sAnim_Piplup,
    [SPECIES_PRINPLUP] = sAnim_Prinplup,
    [SPECIES_EMPOLEON] = sAnim_Empoleon,
    [SPECIES_STARLY] = sAnim_Starly,
    [SPECIES_STARAVIA] = sAnim_Staravia,
    [SPECIES_STARAPTOR] = sAnim_Staraptor,
    [SPECIES_BIDOOF] = sAnim_Bidoof,
    [SPECIES_BIBAREL] = sAnim_Bibarel,
    [SPECIES_KRICKETOT] = sAnim_Kricketot,
    [SPECIES_KRICKETUNE] = sAnim_Kricketune,
    [SPECIES_SHINX] = sAnim_Shinx,
    [SPECIES_LUXIO] = sAnim_Luxio,
    [SPECIES_LUXRAY] = sAnim_Luxray,
    [SPECIES_BUDEW] = sAnim_Budew,
    [SPECIES_ROSERADE] = sAnim_Roserade,
    [SPECIES_CRANIDOS] = sAnim_Cranidos,
    [SPECIES_RAMPARDOS] = sAnim_Rampardos,
    [SPECIES_SHIELDON] = sAnim_Shieldon,
    [SPECIES_BASTIODON] = sAnim_Bastiodon,
    [SPECIES_BURMY] = sAnim_Burmy,
    [SPECIES_WORMADAM] = sAnim_Wormadam,
    [SPECIES_MOTHIM] = sAnim_Mothim,
    [SPECIES_COMBEE] = sAnim_Combee,
    [SPECIES_VESPIQUEN] = sAnim_Vespiquen,
    [SPECIES_PACHIRISU] = sAnim_Pachirisu,
    [SPECIES_BUIZEL] = sAnim_Buizel,
    [SPECIES_FLOATZEL] = sAnim_Floatzel,
    [SPECIES_CHERUBI] = sAnim_Cherubi,
    [SPECIES_CHERRIM] = sAnim_CherrimOvercast,
    [SPECIES_SHELLOS] = sAnim_Shellos,
    [SPECIES_GASTRODON] = sAnim_Gastrodon,
    [SPECIES_AMBIPOM] = sAnim_Ambipom,
    [SPECIES_DRIFLOON] = sAnim_Drifloon,
    [SPECIES_DRIFBLIM] = sAnim_Drifblim,
    [SPECIES_BUNEARY] = sAnim_Buneary,
    [SPECIES_LOPUNNY] = sAnim_Lopunny,
    [SPECIES_MISMAGIUS] = sAnim_Mismagius,
    [SPECIES_HONCHKROW] = sAnim_Honchkrow,
    [SPECIES_GLAMEOW] = sAnim_Glameow,
    [SPECIES_PURUGLY] = sAnim_Purugly,
    [SPECIES_CHINGLING] = sAnim_Chingling,
    [SPECIES_STUNKY] = sAnim_Stunky,
    [SPECIES_SKUNTANK] = sAnim_Skuntank,
    [SPECIES_BRONZOR] = sAnim_Bronzor,
    [SPECIES_BRONZONG] = sAnim_Bronzong,
    [SPECIES_BONSLY] = sAnim_Bonsly,
    [SPECIES_MIME_JR] = sAnim_MimeJr,
    [SPECIES_HAPPINY] = sAnim_Happiny,
    [SPECIES_CHATOT] = sAnim_Chatot,
    [SPECIES_SPIRITOMB] = sAnim_Spiritomb,
    [SPECIES_GIBLE] = sAnim_Gible,
    [SPECIES_GABITE] = sAnim_Gabite,
    [SPECIES_GARCHOMP] = sAnim_Garchomp,
    [SPECIES_MUNCHLAX] = sAnim_Munchlax,
    [SPECIES_RIOLU] = sAnim_Riolu,
    [SPECIES_LUCARIO] = sAnim_Lucario,
    [SPECIES_HIPPOPOTAS] = sAnim_Hippopotas,
    [SPECIES_HIPPOWDON] = sAnim_Hippowdon,
    [SPECIES_SKORUPI] = sAnim_Skorupi,
    [SPECIES_DRAPION] = sAnim_Drapion,
    [SPECIES_CROAGUNK] = sAnim_Croagunk,
    [SPECIES_TOXICROAK] = sAnim_Toxicroak,
    [SPECIES_CARNIVINE] = sAnim_Carnivine,
    [SPECIES_FINNEON] = sAnim_Finneon,
    [SPECIES_LUMINEON] = sAnim_Lumineon,
    [SPECIES_MANTYKE] = sAnim_Mantyke,
    [SPECIES_SNOVER] = sAnim_Snover,
    [SPECIES_ABOMASNOW] = sAnim_Abomasnow,
    [SPECIES_WEAVILE] = sAnim_Weavile,
    [SPECIES_MAGNEZONE] = sAnim_Magnezone,
    [SPECIES_LICKILICKY] = sAnim_Lickilicky,
    [SPECIES_RHYPERIOR] = sAnim_Rhyperior,
    [SPECIES_TANGROWTH] = sAnim_Tangrowth,
    [SPECIES_ELECTIVIRE] = sAnim_Electivire,
    [SPECIES_MAGMORTAR] = sAnim_Magmortar,
    [SPECIES_TOGEKISS] = sAnim_Togekiss,
    [SPECIES_YANMEGA] = sAnim_Yanmega,
    [SPECIES_LEAFEON] = sAnim_Leafeon,
    [SPECIES_GLACEON] = sAnim_Glaceon,
    [SPECIES_GLISCOR] = sAnim_Gliscor,
    [SPECIES_MAMOSWINE] = sAnim_Mamoswine,
    [SPECIES_PORYGON_Z] = sAnim_PORYGON_Z,
    [SPECIES_GALLADE] = sAnim_Gallade,
    [SPECIES_PROBOPASS] = sAnim_Probopass,
    [SPECIES_DUSKNOIR] = sAnim_Dusknoir,
    [SPECIES_FROSLASS] = sAnim_Froslass,
    [SPECIES_ROTOM] = sAnim_Rotom,
    [SPECIES_UXIE] = sAnim_Uxie,
    [SPECIES_MESPRIT] = sAnim_Mesprit,
    [SPECIES_AZELF] = sAnim_Azelf,
    [SPECIES_DIALGA] = sAnim_Dialga,
    [SPECIES_PALKIA] = sAnim_Palkia,
    [SPECIES_HEATRAN] = sAnim_Heatran,
    [SPECIES_REGIGIGAS] = sAnim_Regigigas,
    [SPECIES_GIRATINA] = sAnim_Giratina,
    [SPECIES_CRESSELIA] = sAnim_Cresselia,
    [SPECIES_PHIONE] = sAnim_Phione,
    [SPECIES_MANAPHY] = sAnim_Manaphy,
    [SPECIES_DARKRAI] = sAnim_Darkrai,
    [SPECIES_SHAYMIN] = sAnim_Shaymin,
    [SPECIES_ARCEUS] = sAnim_Arceus,
#endif
#if P_GEN_5_POKEMON == TRUE
    [SPECIES_VICTINI] = sAnim_Victini,
    [SPECIES_SNIVY] = sAnim_Snivy,
    [SPECIES_SERVINE] = sAnim_Servine,
    [SPECIES_SERPERIOR] = sAnim_Serperior,
    [SPECIES_TEPIG] = sAnim_Tepig,
    [SPECIES_PIGNITE] = sAnim_Pignite,
    [SPECIES_EMBOAR] = sAnim_Emboar,
    [SPECIES_OSHAWOTT] = sAnim_Oshawott,
    [SPECIES_DEWOTT] = sAnim_Dewott,
    [SPECIES_SAMUROTT] = sAnim_Samurott,
    [SPECIES_PATRAT] = sAnim_Patrat,
    [SPECIES_WATCHOG] = sAnim_Watchog,
    [SPECIES_LILLIPUP] = sAnim_Lillipup,
    [SPECIES_HERDIER] = sAnim_Herdier,
    [SPECIES_STOUTLAND] = sAnim_Stoutland,
    [SPECIES_PURRLOIN] = sAnim_Purrloin,
    [SPECIES_LIEPARD] = sAnim_Liepard,
    [SPECIES_PANSAGE] = sAnim_Pansage,
    [SPECIES_SIMISAGE] = sAnim_Simisage,
    [SPECIES_PANSEAR] = sAnim_Pansear,
    [SPECIES_SIMISEAR] = sAnim_Simisear,
    [SPECIES_PANPOUR] = sAnim_Panpour,
    [SPECIES_SIMIPOUR] = sAnim_Simipour,
    [SPECIES_MUNNA] = sAnim_Munna,
    [SPECIES_MUSHARNA] = sAnim_Musharna,
    [SPECIES_PIDOVE] = sAnim_Pidove,
    [SPECIES_TRANQUILL] = sAnim_Tranquill,
    [SPECIES_UNFEZANT] = sAnim_Unfezant,
    [SPECIES_BLITZLE] = sAnim_Blitzle,
    [SPECIES_ZEBSTRIKA] = sAnim_Zebstrika,
    [SPECIES_ROGGENROLA] = sAnim_Roggenrola,
    [SPECIES_BOLDORE] = sAnim_Boldore,
    [SPECIES_GIGALITH] = sAnim_Gigalith,
    [SPECIES_WOOBAT] = sAnim_Woobat,
    [SPECIES_SWOOBAT] = sAnim_Swoobat,
    [SPECIES_DRILBUR] = sAnim_Drilbur,
    [SPECIES_EXCADRILL] = sAnim_Excadrill,
    [SPECIES_AUDINO] = sAnim_Audino,
    [SPECIES_TIMBURR] = sAnim_Timburr,
    [SPECIES_GURDURR] = sAnim_Gurdurr,
    [SPECIES_CONKELDURR] = sAnim_Conkeldurr,
    [SPECIES_TYMPOLE] = sAnim_Tympole,
    [SPECIES_PALPITOAD] = sAnim_Palpitoad,
    [SPECIES_SEISMITOAD] = sAnim_Seismitoad,
    [SPECIES_THROH] = sAnim_Throh,
    [SPECIES_SAWK] = sAnim_Sawk,
    [SPECIES_SEWADDLE] = sAnim_Sewaddle,
    [SPECIES_SWADLOON] = sAnim_Swadloon,
    [SPECIES_LEAVANNY] = sAnim_Leavanny,
    [SPECIES_VENIPEDE] = sAnim_Venipede,
    [SPECIES_WHIRLIPEDE] = sAnim_Whirlipede,
    [SPECIES_SCOLIPEDE] = sAnim_Scolipede,
    [SPECIES_COTTONEE] = sAnim_Cottonee,
    [SPECIES_WHIMSICOTT] = sAnim_Whimsicott,
    [SPECIES_PETILIL] = sAnim_Petilil,
    [SPECIES_LILLIGANT] = sAnim_Lilligant,
    [SPECIES_BASCULIN] = sAnim_Basculin,
    [SPECIES_SANDILE] = sAnim_Sandile,
    [SPECIES_KROKOROK] = sAnim_Krokorok,
    [SPECIES_KROOKODILE] = sAnim_Krookodile,
    [SPECIES_DARUMAKA] = sAnim_Darumaka,
    [SPECIES_DARMANITAN] = sAnim_Darmanitan,
    [SPECIES_MARACTUS] = sAnim_Maractus,
    [SPECIES_DWEBBLE] = sAnim_Dwebble,
    [SPECIES_CRUSTLE] = sAnim_Crustle,
    [SPECIES_SCRAGGY] = sAnim_Scraggy,
    [SPECIES_SCRAFTY] = sAnim_Scrafty,
    [SPECIES_SIGILYPH] = sAnim_Sigilyph,
    [SPECIES_YAMASK] = sAnim_Yamask,
    [SPECIES_COFAGRIGUS] = sAnim_Cofagrigus,
    [SPECIES_TIRTOUGA] = sAnim_Tirtouga,
    [SPECIES_CARRACOSTA] = sAnim_Carracosta,
    [SPECIES_ARCHEN] = sAnim_Archen,
    [SPECIES_ARCHEOPS] = sAnim_Archeops,
    [SPECIES_TRUBBISH] = sAnim_Trubbish,
    [SPECIES_GARBODOR] = sAnim_Garbodor,
    [SPECIES_ZORUA] = sAnim_Zorua,
    [SPECIES_ZOROARK] = sAnim_Zoroark,
    [SPECIES_MINCCINO] = sAnim_Minccino,
    [SPECIES_CINCCINO] = sAnim_Cinccino,
    [SPECIES_GOTHITA] = sAnim_Gothita,
    [SPECIES_GOTHORITA] = sAnim_Gothorita,
    [SPECIES_GOTHITELLE] = sAnim_Gothitelle,
    [SPECIES_SOLOSIS] = sAnim_Solosis,
    [SPECIES_DUOSION] = sAnim_Duosion,
    [SPECIES_REUNICLUS] = sAnim_Reuniclus,
    [SPECIES_DUCKLETT] = sAnim_Ducklett,
    [SPECIES_SWANNA] = sAnim_Swanna,
    [SPECIES_VANILLITE] = sAnim_Vanillite,
    [SPECIES_VANILLISH] = sAnim_Vanillish,
    [SPECIES_VANILLUXE] = sAnim_Vanilluxe,
    [SPECIES_DEERLING] = sAnim_Deerling,
    [SPECIES_SAWSBUCK] = sAnim_Sawsbuck,
    [SPECIES_EMOLGA] = sAnim_Emolga,
    [SPECIES_KARRABLAST] = sAnim_Karrablast,
    [SPECIES_ESCAVALIER] = sAnim_Escavalier,
    [SPECIES_FOONGUS] = sAnim_Foongus,
    [SPECIES_AMOONGUSS] = sAnim_Amoonguss,
    [SPECIES_FRILLISH] = sAnim_Frillish,
    [SPECIES_JELLICENT] = sAnim_Jellicent,
    [SPECIES_ALOMOMOLA] = sAnim_Alomomola,
    [SPECIES_JOLTIK] = sAnim_Joltik,
    [SPECIES_GALVANTULA] = sAnim_Galvantula,
    [SPECIES_FERROSEED] = sAnim_Ferroseed,
    [SPECIES_FERROTHORN] = sAnim_Ferrothorn,
    [SPECIES_KLINK] = sAnim_Klink,
    [SPECIES_KLANG] = sAnim_Klang,
    [SPECIES_KLINKLANG] = sAnim_Klinklang,
    [SPECIES_TYNAMO] = sAnim_Tynamo,
    [SPECIES_EELEKTRIK] = sAnim_Eelektrik,
    [SPECIES_EELEKTROSS] = sAnim_Eelektross,
    [SPECIES_ELGYEM] = sAnim_Elgyem,
    [SPECIES_BEHEEYEM] = sAnim_Beheeyem,
    [SPECIES_LITWICK] = sAnim_Litwick,
    [SPECIES_LAMPENT] = sAnim_Lampent,
    [SPECIES_CHANDELURE] = sAnim_Chandelure,
    [SPECIES_AXEW] = sAnim_Axew,
    [SPECIES_FRAXURE] = sAnim_Fraxure,
    [SPECIES_HAXORUS] = sAnim_Haxorus,
    [SPECIES_CUBCHOO] = sAnim_Cubchoo,
    [SPECIES_BEARTIC] = sAnim_Beartic,
    [SPECIES_CRYOGONAL] = sAnim_Cryogonal,
    [SPECIES_SHELMET] = sAnim_Shelmet,
    [SPECIES_ACCELGOR] = sAnim_Accelgor,
    [SPECIES_STUNFISK] = sAnim_Stunfisk,
    [SPECIES_MIENFOO] = sAnim_Mienfoo,
    [SPECIES_MIENSHAO] = sAnim_Mienshao,
    [SPECIES_DRUDDIGON] = sAnim_Druddigon,
    [SPECIES_GOLETT] = sAnim_Golett,
    [SPECIES_GOLURK] = sAnim_Golurk,
    [SPECIES_PAWNIARD] = sAnim_Pawniard,
    [SPECIES_BISHARP] = sAnim_Bisharp,
    [SPECIES_BOUFFALANT] = sAnim_Bouffalant,
    [SPECIES_RUFFLET] = sAnim_Rufflet,
    [SPECIES_BRAVIARY] = sAnim_Braviary,
    [SPECIES_VULLABY] = sAnim_Vullaby,
    [SPECIES_MANDIBUZZ] = sAnim_Mandibuzz,
    [SPECIES_HEATMOR] = sAnim_Heatmor,
    [SPECIES_DURANT] = sAnim_Durant,
    [SPECIES_DEINO] = sAnim_Deino,
    [SPECIES_ZWEILOUS] = sAnim_Zweilous,
    [SPECIES_HYDREIGON] = sAnim_Hydreigon,
    [SPECIES_LARVESTA] = sAnim_Larvesta,
    [SPECIES_VOLCARONA] = sAnim_Volcarona,
    [SPECIES_COBALION] = sAnim_Cobalion,
    [SPECIES_TERRAKION] = sAnim_Terrakion,
    [SPECIES_VIRIZION] = sAnim_Virizion,
    [SPECIES_TORNADUS] = sAnim_Tornadus,
    [SPECIES_THUNDURUS] = sAnim_Thundurus,
    [SPECIES_RESHIRAM] = sAnim_Reshiram,
    [SPECIES_ZEKROM] = sAnim_Zekrom,
    [SPECIES_LANDORUS] = sAnim_Landorus,
    [SPECIES_KYUREM] = sAnim_Kyurem,
    [SPECIES_KELDEO] = sAnim_Keldeo,
    [SPECIES_MELOETTA] = sAnim_Meloetta,
    [SPECIES_GENESECT] = sAnim_Genesect,
#endif
#if P_GEN_6_POKEMON == TRUE
    [SPECIES_CHESPIN] = sAnim_Chespin,
    [SPECIES_QUILLADIN] = sAnim_Quilladin,
    [SPECIES_CHESNAUGHT] = sAnim_Chesnaught,
    [SPECIES_FENNEKIN] = sAnim_Fennekin,
    [SPECIES_BRAIXEN] = sAnim_Braixen,
    [SPECIES_DELPHOX] = sAnim_Delphox,
    [SPECIES_FROAKIE] = sAnim_Froakie,
    [SPECIES_FROGADIER] = sAnim_Frogadier,
    [SPECIES_GRENINJA] = sAnim_Greninja,
    [SPECIES_BUNNELBY] = sAnim_Bunnelby,
    [SPECIES_DIGGERSBY] = sAnim_Diggersby,
    [SPECIES_FLETCHLING] = sAnim_Fletchling,
    [SPECIES_FLETCHINDER] = sAnim_Fletchinder,
    [SPECIES_TALONFLAME] = sAnim_Talonflame,
    [SPECIES_SCATTERBUG] = sAnim_Scatterbug,
    [SPECIES_SPEWPA] = sAnim_Spewpa,
    [SPECIES_VIVILLON] = sAnim_Vivillon,
    [SPECIES_LITLEO] = sAnim_Litleo,
    [SPECIES_PYROAR] = sAnim_Pyroar,
    [SPECIES_FLABEBE] = sAnim_Flabebe,
    [SPECIES_FLOETTE] = sAnim_Floette,
    [SPECIES_FLORGES] = sAnim_Florges,
    [SPECIES_SKIDDO] = sAnim_Skiddo,
    [SPECIES_GOGOAT] = sAnim_Gogoat,
    [SPECIES_PANCHAM] = sAnim_Pancham,
    [SPECIES_PANGORO] = sAnim_Pangoro,
    [SPECIES_FURFROU] = sAnim_Furfrou,
    [SPECIES_ESPURR] = sAnim_Espurr,
    [SPECIES_MEOWSTIC] = sAnim_Meowstic,
    [SPECIES_HONEDGE] = sAnim_Honedge,
    [SPECIES_DOUBLADE] = sAnim_Doublade,
    [SPECIES_AEGISLASH] = sAnim_Aegislash,
    [SPECIES_SPRITZEE] = sAnim_Spritzee,
    [SPECIES_AROMATISSE] = sAnim_Aromatisse,
    [SPECIES_SWIRLIX] = sAnim_Swirlix,
    [SPECIES_SLURPUFF] = sAnim_Slurpuff,
    [SPECIES_INKAY] = sAnim_Inkay,
    [SPECIES_MALAMAR] = sAnim_Malamar,
    [SPECIES_BINACLE] = sAnim_Binacle,
    [SPECIES_BARBARACLE] = sAnim_Barbaracle,
    [SPECIES_SKRELP] = sAnim_Skrelp,
    [SPECIES_DRAGALGE] = sAnim_Dragalge,
    [SPECIES_CLAUNCHER] = sAnim_Clauncher,
    [SPECIES_CLAWITZER] = sAnim_Clawitzer,
    [SPECIES_HELIOPTILE] = sAnim_Helioptile,
    [SPECIES_HELIOLISK] = sAnim_Heliolisk,
    [SPECIES_TYRUNT] = sAnim_Tyrunt,
    [SPECIES_TYRANTRUM] = sAnim_Tyrantrum,
    [SPECIES_AMAURA] = sAnim_Amaura,
    [SPECIES_AURORUS] = sAnim_Aurorus,
    [SPECIES_SYLVEON] = sAnim_Sylveon,
    [SPECIES_HAWLUCHA] = sAnim_Hawlucha,
    [SPECIES_DEDENNE] = sAnim_Dedenne,
    [SPECIES_CARBINK] = sAnim_Carbink,
    [SPECIES_GOOMY] = sAnim_Goomy,
    [SPECIES_SLIGGOO] = sAnim_Sliggoo,
    [SPECIES_GOODRA] = sAnim_Goodra,
    [SPECIES_KLEFKI] = sAnim_Klefki,
    [SPECIES_PHANTUMP] = sAnim_Phantump,
    [SPECIES_TREVENANT] = sAnim_Trevenant,
    [SPECIES_PUMPKABOO] = sAnim_Pumpkaboo,
    [SPECIES_GOURGEIST] = sAnim_Gourgeist,
    [SPECIES_BERGMITE] = sAnim_Bergmite,
    [SPECIES_AVALUGG] = sAnim_Avalugg,
    [SPECIES_NOIBAT] = sAnim_Noibat,
    [SPECIES_NOIVERN] = sAnim_Noivern,
    [SPECIES_XERNEAS] = sAnim_Xerneas,
    [SPECIES_YVELTAL] = sAnim_Yveltal,
    [SPECIES_ZYGARDE] = sAnim_Zygarde,
    [SPECIES_DIANCIE] = sAnim_Diancie,
    [SPECIES_HOOPA] = sAnim_Hoopa,
    [SPECIES_VOLCANION] = sAnim_Volcanion,
#endif
#if P_GEN_7_POKEMON == TRUE
    [SPECIES_ROWLET] = sAnim_Rowlet,
    [SPECIES_DARTRIX] = sAnim_Dartrix,
    [SPECIES_DECIDUEYE] = sAnim_Decidueye,
    [SPECIES_LITTEN] = sAnim_Litten,
    [SPECIES_TORRACAT] = sAnim_Torracat,
    [SPECIES_INCINEROAR] = sAnim_Incineroar,
    [SPECIES_POPPLIO] = sAnim_Popplio,
    [SPECIES_BRIONNE] = sAnim_Brionne,
    [SPECIES_PRIMARINA] = sAnim_Primarina,
    [SPECIES_PIKIPEK] = sAnim_Pikipek,
    [SPECIES_TRUMBEAK] = sAnim_Trumbeak,
    [SPECIES_TOUCANNON] = sAnim_Toucannon,
    [SPECIES_YUNGOOS] = sAnim_Yungoos,
    [SPECIES_GUMSHOOS] = sAnim_Gumshoos,
    [SPECIES_GRUBBIN] = sAnim_Grubbin,
    [SPECIES_CHARJABUG] = sAnim_Charjabug,
    [SPECIES_VIKAVOLT] = sAnim_Vikavolt,
    [SPECIES_CRABRAWLER] = sAnim_Crabrawler,
    [SPECIES_CRABOMINABLE] = sAnim_Crabominable,
    [SPECIES_ORICORIO] = sAnim_Oricorio,
    [SPECIES_CUTIEFLY] = sAnim_Cutiefly,
    [SPECIES_RIBOMBEE] = sAnim_Ribombee,
    [SPECIES_ROCKRUFF] = sAnim_Rockruff,
    [SPECIES_LYCANROC] = sAnim_Lycanroc,
    [SPECIES_WISHIWASHI] = sAnim_Wishiwashi,
    [SPECIES_MAREANIE] = sAnim_Mareanie,
    [SPECIES_TOXAPEX] = sAnim_Toxapex,
    [SPECIES_MUDBRAY] = sAnim_Mudbray,
    [SPECIES_MUDSDALE] = sAnim_Mudsdale,
    [SPECIES_DEWPIDER] = sAnim_Dewpider,
    [SPECIES_ARAQUANID] = sAnim_Araquanid,
    [SPECIES_FOMANTIS] = sAnim_Fomantis,
    [SPECIES_LURANTIS] = sAnim_Lurantis,
    [SPECIES_MORELULL] = sAnim_Morelull,
    [SPECIES_SHIINOTIC] = sAnim_Shiinotic,
    [SPECIES_SALANDIT] = sAnim_Salandit,
    [SPECIES_SALAZZLE] = sAnim_Salazzle,
    [SPECIES_STUFFUL] = sAnim_Stufful,
    [SPECIES_BEWEAR] = sAnim_Bewear,
    [SPECIES_BOUNSWEET] = sAnim_Bounsweet,
    [SPECIES_STEENEE] = sAnim_Steenee,
    [SPECIES_TSAREENA] = sAnim_Tsareena,
    [SPECIES_COMFEY] = sAnim_Comfey,
    [SPECIES_ORANGURU] = sAnim_Oranguru,
    [SPECIES_PASSIMIAN] = sAnim_Passimian,
    [SPECIES_WIMPOD] = sAnim_Wimpod,
    [SPECIES_GOLISOPOD] = sAnim_Golisopod,
    [SPECIES_SANDYGAST] = sAnim_Sandygast,
    [SPECIES_PALOSSAND] = sAnim_Palossand,
    [SPECIES_PYUKUMUKU] = sAnim_Pyukumuku,
    [SPECIES_TYPE_NULL] = sAnim_TypeNull,
    [SPECIES_SILVALLY] = sAnim_Silvally,
    [SPECIES_MINIOR] = sAnim_Minior,
    [SPECIES_KOMALA] = sAnim_Komala,
    [SPECIES_TURTONATOR] = sAnim_Turtonator,
    [SPECIES_TOGEDEMARU] = sAnim_Togedemaru,
    [SPECIES_MIMIKYU] = sAnim_Mimikyu,
    [SPECIES_BRUXISH] = sAnim_Bruxish,
    [SPECIES_DRAMPA] = sAnim_Drampa,
    [SPECIES_DHELMISE] = sAnim_Dhelmise,
    [SPECIES_JANGMO_O] = sAnim_JANGMO_O,
    [SPECIES_HAKAMO_O] = sAnim_HAKAMO_O,
    [SPECIES_KOMMO_O] = sAnim_KOMMO_O,
    [SPECIES_TAPU_KOKO] = sAnim_TapuKoko,
    [SPECIES_TAPU_LELE] = sAnim_TapuLele,
    [SPECIES_TAPU_BULU] = sAnim_TapuBulu,
    [SPECIES_TAPU_FINI] = sAnim_TapuFini,
    [SPECIES_COSMOG] = sAnim_Cosmog,
    [SPECIES_COSMOEM] = sAnim_Cosmoem,
    [SPECIES_SOLGALEO] = sAnim_Solgaleo,
    [SPECIES_LUNALA] = sAnim_Lunala,
    [SPECIES_NIHILEGO] = sAnim_Nihilego,
    [SPECIES_BUZZWOLE] = sAnim_Buzzwole,
    [SPECIES_PHEROMOSA] = sAnim_Pheromosa,
    [SPECIES_XURKITREE] = sAnim_Xurkitree,
    [SPECIES_CELESTEELA] = sAnim_Celesteela,
    [SPECIES_KARTANA] = sAnim_Kartana,
    [SPECIES_GUZZLORD] = sAnim_Guzzlord,
    [SPECIES_NECROZMA] = sAnim_Necrozma,
    [SPECIES_MAGEARNA] = sAnim_Magearna,
    [SPECIES_MARSHADOW] = sAnim_Marshadow,
    [SPECIES_POIPOLE] = sAnim_Poipole,
    [SPECIES_NAGANADEL] = sAnim_Naganadel,
    [SPECIES_STAKATAKA] = sAnim_Stakataka,
    [SPECIES_BLACEPHALON] = sAnim_Blacephalon,
    [SPECIES_ZERAORA] = sAnim_Zeraora,
    [SPECIES_MELTAN] = sAnim_Meltan,
    [SPECIES_MELMETAL] = sAnim_Melmetal,
#endif
#if P_GEN_8_POKEMON == TRUE
    [SPECIES_GROOKEY] = sAnim_Grookey,
    [SPECIES_THWACKEY] = sAnim_Thwackey,
    [SPECIES_RILLABOOM] = sAnim_Rillaboom,
    [SPECIES_SCORBUNNY] = sAnim_Scorbunny,
    [SPECIES_RABOOT] = sAnim_Raboot,
    [SPECIES_CINDERACE] = sAnim_Cinderace,
    [SPECIES_SOBBLE] = sAnim_Sobble,
    [SPECIES_DRIZZILE] = sAnim_Drizzile,
    [SPECIES_INTELEON] = sAnim_Inteleon,
    [SPECIES_SKWOVET] = sAnim_Skwovet,
    [SPECIES_GREEDENT] = sAnim_Greedent,
    [SPECIES_ROOKIDEE] = sAnim_Rookidee,
    [SPECIES_CORVISQUIRE] = sAnim_Corvisquire,
    [SPECIES_CORVIKNIGHT] = sAnim_Corviknight,
    [SPECIES_BLIPBUG] = sAnim_Blipbug,
    [SPECIES_DOTTLER] = sAnim_Dottler,
    [SPECIES_ORBEETLE] = sAnim_Orbeetle,
    [SPECIES_NICKIT] = sAnim_Nickit,
    [SPECIES_THIEVUL] = sAnim_Thievul,
    [SPECIES_GOSSIFLEUR] = sAnim_Gossifleur,
    [SPECIES_ELDEGOSS] = sAnim_Eldegoss,
    [SPECIES_WOOLOO] = sAnim_Wooloo,
    [SPECIES_DUBWOOL] = sAnim_Dubwool,
    [SPECIES_CHEWTLE] = sAnim_Chewtle,
    [SPECIES_DREDNAW] = sAnim_Drednaw,
    [SPECIES_YAMPER] = sAnim_Yamper,
    [SPECIES_BOLTUND] = sAnim_Boltund,
    [SPECIES_ROLYCOLY] = sAnim_Rolycoly,
    [SPECIES_CARKOL] = sAnim_Carkol,
    [SPECIES_COALOSSAL] = sAnim_Coalossal,
    [SPECIES_APPLIN] = sAnim_Applin,
    [SPECIES_FLAPPLE] = sAnim_Flapple,
    [SPECIES_APPLETUN] = sAnim_Appletun,
    [SPECIES_SILICOBRA] = sAnim_Silicobra,
    [SPECIES_SANDACONDA] = sAnim_Sandaconda,
    [SPECIES_CRAMORANT] = sAnim_Cramorant,
    [SPECIES_ARROKUDA] = sAnim_Arrokuda,
    [SPECIES_BARRASKEWDA] = sAnim_Barraskewda,
    [SPECIES_TOXEL] = sAnim_Toxel,
    [SPECIES_TOXTRICITY] = sAnim_Toxtricity,
    [SPECIES_SIZZLIPEDE] = sAnim_Sizzlipede,
    [SPECIES_CENTISKORCH] = sAnim_Centiskorch,
    [SPECIES_CLOBBOPUS] = sAnim_Clobbopus,
    [SPECIES_GRAPPLOCT] = sAnim_Grapploct,
    [SPECIES_SINISTEA] = sAnim_Sinistea,
    [SPECIES_POLTEAGEIST] = sAnim_Polteageist,
    [SPECIES_HATENNA] = sAnim_Hatenna,
    [SPECIES_HATTREM] = sAnim_Hattrem,
    [SPECIES_HATTERENE] = sAnim_Hatterene,
    [SPECIES_IMPIDIMP] = sAnim_Impidimp,
    [SPECIES_MORGREM] = sAnim_Morgrem,
    [SPECIES_GRIMMSNARL] = sAnim_Grimmsnarl,
    [SPECIES_OBSTAGOON] = sAnim_Obstagoon,
    [SPECIES_PERRSERKER] = sAnim_Perrserker,
    [SPECIES_CURSOLA] = sAnim_Cursola,
    [SPECIES_SIRFETCHD] = sAnim_Sirfetchd,
    [SPECIES_MR_RIME] = sAnim_MrRime,
    [SPECIES_RUNERIGUS] = sAnim_Runerigus,
    [SPECIES_MILCERY] = sAnim_Milcery,
    [SPECIES_ALCREMIE] = sAnim_Alcremie,
    [SPECIES_FALINKS] = sAnim_Falinks,
    [SPECIES_PINCURCHIN] = sAnim_Pincurchin,
    [SPECIES_SNOM] = sAnim_Snom,
    [SPECIES_FROSMOTH] = sAnim_Frosmoth,
    [SPECIES_STONJOURNER] = sAnim_Stonjourner,
    [SPECIES_EISCUE] = sAnim_Eiscue,
    [SPECIES_INDEEDEE] = sAnim_Indeedee,
    [SPECIES_MORPEKO] = sAnim_Morpeko,
    [SPECIES_CUFANT] = sAnim_Cufant,
    [SPECIES_COPPERAJAH] = sAnim_Copperajah,
    [SPECIES_DRACOZOLT] = sAnim_Dracozolt,
    [SPECIES_ARCTOZOLT] = sAnim_Arctozolt,
    [SPECIES_DRACOVISH] = sAnim_Dracovish,
    [SPECIES_ARCTOVISH] = sAnim_Arctovish,
    [SPECIES_DURALUDON] = sAnim_Duraludon,
    [SPECIES_DREEPY] = sAnim_Dreepy,
    [SPECIES_DRAKLOAK] = sAnim_Drakloak,
    [SPECIES_DRAGAPULT] = sAnim_Dragapult,
    [SPECIES_ZACIAN] = sAnim_Zacian,
    [SPECIES_ZAMAZENTA] = sAnim_Zamazenta,
    [SPECIES_ETERNATUS] = sAnim_Eternatus,
    [SPECIES_KUBFU] = sAnim_Kubfu,
    [SPECIES_URSHIFU] = sAnim_Urshifu,
    [SPECIES_ZARUDE] = sAnim_Zarude,
    [SPECIES_REGIELEKI] = sAnim_Regieleki,
    [SPECIES_REGIDRAGO] = sAnim_Regidrago,
    [SPECIES_GLASTRIER] = sAnim_Glastrier,
    [SPECIES_SPECTRIER] = sAnim_Spectrier,
    [SPECIES_CALYREX] = sAnim_Calyrex,
    [SPECIES_WYRDEER] = sAnim_Wyrdeer,
    [SPECIES_KLEAVOR] = sAnim_Kleavor,
    [SPECIES_URSALUNA] = sAnim_Ursaluna,
    [SPECIES_BASCULEGION] = sAnim_Basculegion,
    [SPECIES_SNEASLER] = sAnim_Sneasler,
    [SPECIES_OVERQWIL] = sAnim_Overqwil,
    [SPECIES_ENAMORUS] = sAnim_Enamorus,
#endif
    [SPECIES_VENUSAUR_MEGA] = sAnim_VenusaurMega,
    [SPECIES_CHARIZARD_MEGA_X] = sAnim_CHARIZARD_MEGA_X,
    [SPECIES_CHARIZARD_MEGA_Y] = sAnim_CHARIZARD_MEGA_Y,
    [SPECIES_BLASTOISE_MEGA] = sAnim_BlastoiseMega,
    [SPECIES_BEEDRILL_MEGA] = sAnim_BeedrillMega,
    [SPECIES_PIDGEOT_MEGA] = sAnim_PidgeotMega,
    [SPECIES_ALAKAZAM_MEGA] = sAnim_AlakazamMega,
    [SPECIES_SLOWBRO_MEGA] = sAnim_SlowbroMega,
    [SPECIES_GENGAR_MEGA] = sAnim_GengarMega,
    [SPECIES_KANGASKHAN_MEGA] = sAnim_KangaskhanMega,
    [SPECIES_PINSIR_MEGA] = sAnim_PinsirMega,
    [SPECIES_GYARADOS_MEGA] = sAnim_GyaradosMega,
    [SPECIES_AERODACTYL_MEGA] = sAnim_AerodactylMega,
    [SPECIES_MEWTWO_MEGA_X] = sAnim_MEWTWO_MEGA_X,
    [SPECIES_MEWTWO_MEGA_Y] = sAnim_MEWTWO_MEGA_Y,
    [SPECIES_AMPHAROS_MEGA] = sAnim_AmpharosMega,
    [SPECIES_STEELIX_MEGA] = sAnim_SteelixMega,
    [SPECIES_SCIZOR_MEGA] = sAnim_ScizorMega,
    [SPECIES_HERACROSS_MEGA] = sAnim_HeracrossMega,
    [SPECIES_HOUNDOOM_MEGA] = sAnim_HoundoomMega,
    [SPECIES_TYRANITAR_MEGA] = sAnim_TyranitarMega,
    [SPECIES_SCEPTILE_MEGA] = sAnim_SceptileMega,
    [SPECIES_BLAZIKEN_MEGA] = sAnim_BlazikenMega,
    [SPECIES_SWAMPERT_MEGA] = sAnim_SwampertMega,
    [SPECIES_GARDEVOIR_MEGA] = sAnim_GardevoirMega,
    [SPECIES_SABLEYE_MEGA] = sAnim_SableyeMega,
    [SPECIES_MAWILE_MEGA] = sAnim_MawileMega,
    [SPECIES_AGGRON_MEGA] = sAnim_AggronMega,
    [SPECIES_MEDICHAM_MEGA] = sAnim_MedichamMega,
    [SPECIES_MANECTRIC_MEGA] = sAnim_ManectricMega,
    [SPECIES_SHARPEDO_MEGA] = sAnim_SharpedoMega,
    [SPECIES_CAMERUPT_MEGA] = sAnim_CameruptMega,
    [SPECIES_ALTARIA_MEGA] = sAnim_AltariaMega,
    [SPECIES_BANETTE_MEGA] = sAnim_BanetteMega,
    [SPECIES_ABSOL_MEGA] = sAnim_AbsolMega,
    [SPECIES_GLALIE_MEGA] = sAnim_GlalieMega,
    [SPECIES_SALAMENCE_MEGA] = sAnim_SalamenceMega,
    [SPECIES_METAGROSS_MEGA] = sAnim_MetagrossMega,
    [SPECIES_LATIAS_MEGA] = sAnim_LatiasMega,
    [SPECIES_LATIOS_MEGA] = sAnim_LatiosMega,
#if P_GEN_4_POKEMON == TRUE
    [SPECIES_LOPUNNY_MEGA] = sAnim_LopunnyMega,
    [SPECIES_GARCHOMP_MEGA] = sAnim_GarchompMega,
    [SPECIES_LUCARIO_MEGA] = sAnim_LucarioMega,
    [SPECIES_ABOMASNOW_MEGA] = sAnim_AbomasnowMega,
    [SPECIES_GALLADE_MEGA] = sAnim_GalladeMega,
#endif
#if P_GEN_5_POKEMON == TRUE
    [SPECIES_AUDINO_MEGA] = sAnim_AudinoMega,
#endif
#if P_GEN_6_POKEMON == TRUE
    [SPECIES_DIANCIE_MEGA] = sAnim_DiancieMega,
#endif
    [SPECIES_RAYQUAZA_MEGA] = sAnim_RayquazaMega,
    [SPECIES_KYOGRE_PRIMAL] = sAnim_KyogrePrimal,
    [SPECIES_GROUDON_PRIMAL] = sAnim_GroudonPrimal,
    [SPECIES_RATTATA_ALOLAN] = sAnim_RattataAlolan,
    [SPECIES_RATICATE_ALOLAN] = sAnim_RaticateAlolan,
    [SPECIES_RAICHU_ALOLAN] = sAnim_RaichuAlolan,
    [SPECIES_SANDSHREW_ALOLAN] = sAnim_SandshrewAlolan,
    [SPECIES_SANDSLASH_ALOLAN] = sAnim_SandslashAlolan,
    [SPECIES_VULPIX_ALOLAN] = sAnim_VulpixAlolan,
    [SPECIES_NINETALES_ALOLAN] = sAnim_NinetalesAlolan,
    [SPECIES_DIGLETT_ALOLAN] = sAnim_DiglettAlolan,
    [SPECIES_DUGTRIO_ALOLAN] = sAnim_DugtrioAlolan,
    [SPECIES_MEOWTH_ALOLAN] = sAnim_MeowthAlolan,
    [SPECIES_PERSIAN_ALOLAN] = sAnim_PersianAlolan,
    [SPECIES_GEODUDE_ALOLAN] = sAnim_GeodudeAlolan,
    [SPECIES_GRAVELER_ALOLAN] = sAnim_GravelerAlolan,
    [SPECIES_GOLEM_ALOLAN] = sAnim_GolemAlolan,
    [SPECIES_GRIMER_ALOLAN] = sAnim_GrimerAlolan,
    [SPECIES_MUK_ALOLAN] = sAnim_MukAlolan,
    [SPECIES_EXEGGUTOR_ALOLAN] = sAnim_ExeggutorAlolan,
    [SPECIES_MAROWAK_ALOLAN] = sAnim_MarowakAlolan,
    [SPECIES_MEOWTH_GALARIAN] = sAnim_MeowthGalarian,
    [SPECIES_PONYTA_GALARIAN] = sAnim_PonytaGalarian,
    [SPECIES_RAPIDASH_GALARIAN] = sAnim_RapidashGalarian,
    [SPECIES_SLOWPOKE_GALARIAN] = sAnim_SlowpokeGalarian,
    [SPECIES_SLOWBRO_GALARIAN] = sAnim_SlowbroGalarian,
    [SPECIES_FARFETCHD_GALARIAN] = sAnim_FarfetchdGalarian,
    [SPECIES_WEEZING_GALARIAN] = sAnim_WeezingGalarian,
    [SPECIES_MR_MIME_GALARIAN] = sAnim_MrMimeGalarian,
    [SPECIES_ARTICUNO_GALARIAN] = sAnim_ArticunoGalarian,
    [SPECIES_ZAPDOS_GALARIAN] = sAnim_ZapdosGalarian,
    [SPECIES_MOLTRES_GALARIAN] = sAnim_MoltresGalarian,
    [SPECIES_SLOWKING_GALARIAN] = sAnim_SlowkingGalarian,
    [SPECIES_CORSOLA_GALARIAN] = sAnim_CorsolaGalarian,
    [SPECIES_ZIGZAGOON_GALARIAN] = sAnim_ZigzagoonGalarian,
    [SPECIES_LINOONE_GALARIAN] = sAnim_LinooneGalarian,
#if P_GEN_5_POKEMON == TRUE
    [SPECIES_DARUMAKA_GALARIAN] = sAnim_DarumakaGalarian,
    [SPECIES_DARMANITAN_GALARIAN] = sAnim_DarmanitanGalarian,
    [SPECIES_YAMASK_GALARIAN] = sAnim_YamaskGalarian,
    [SPECIES_STUNFISK_GALARIAN] = sAnim_StunfiskGalarian,
#endif
    [SPECIES_GROWLITHE_HISUIAN] = sAnim_GrowlitheHisuian,
    [SPECIES_ARCANINE_HISUIAN] = sAnim_ArcanineHisuian,
    [SPECIES_VOLTORB_HISUIAN] = sAnim_VoltorbHisuian,
    [SPECIES_ELECTRODE_HISUIAN] = sAnim_ElectrodeHisuian,
    [SPECIES_TYPHLOSION_HISUIAN] = sAnim_TyphlosionHisuian,
    [SPECIES_QWILFISH_HISUIAN] = sAnim_QwilfishHisuian,
    [SPECIES_SNEASEL_HISUIAN] = sAnim_SneaselHisuian,
#if P_GEN_5_POKEMON == TRUE
    [SPECIES_SAMUROTT_HISUIAN] = sAnim_SamurottHisuian,
    [SPECIES_LILLIGANT_HISUIAN] = sAnim_LilligantHisuian,
    [SPECIES_ZORUA_HISUIAN] = sAnim_ZoruaHisuian,
    [SPECIES_ZOROARK_HISUIAN] = sAnim_ZoroarkHisuian,
    [SPECIES_BRAVIARY_HISUIAN] = sAnim_BraviaryHisuian,
#endif
#if P_GEN_6_POKEMON == TRUE
    [SPECIES_SLIGGOO_HISUIAN] = sAnim_SliggooHisuian,
    [SPECIES_GOODRA_HISUIAN] = sAnim_GoodraHisuian,
    [SPECIES_AVALUGG_HISUIAN] = sAnim_AvaluggHisuian,
#endif
#if P_GEN_7_POKEMON == TRUE
    [SPECIES_DECIDUEYE_HISUIAN] = sAnim_DecidueyeHisuian,
#endif
    [SPECIES_PIKACHU_COSPLAY] = sAnim_PikachuCosplay,
    [SPECIES_PIKACHU_ROCK_STAR] = sAnim_PikachuRockStar,
    [SPECIES_PIKACHU_BELLE] = sAnim_PikachuBelle,
    [SPECIES_PIKACHU_POP_STAR] = sAnim_PikachuPopStar,
    [SPECIES_PIKACHU_PH_D] = sAnim_PIKACHU_PH_D,
    [SPECIES_PIKACHU_LIBRE] = sAnim_PikachuLibre,
    [SPECIES_PIKACHU_ORIGINAL_CAP] = sAnim_PikachuOriginalCap,
    [SPECIES_PIKACHU_HOENN_CAP] = sAnim_PikachuHoennCap,
    [SPECIES_PIKACHU_SINNOH_CAP] = sAnim_PikachuSinnohCap,
    [SPECIES_PIKACHU_UNOVA_CAP] = sAnim_PikachuUnovaCap,
    [SPECIES_PIKACHU_KALOS_CAP] = sAnim_PikachuKalosCap,
    [SPECIES_PIKACHU_ALOLA_CAP] = sAnim_PikachuAlolaCap,
    [SPECIES_PIKACHU_PARTNER_CAP] = sAnim_PikachuPartnerCap,
    [SPECIES_PIKACHU_WORLD_CAP] = sAnim_PikachuWorldCap,
    [SPECIES_PICHU_SPIKY_EARED] = sAnim_PichuSpikyEared,
    [SPECIES_UNOWN_B]     = sAnim_UnownB,
    [SPECIES_UNOWN_C]     = sAnim_UnownC,
    [SPECIES_UNOWN_D]     = sAnim_UnownD,
    [SPECIES_UNOWN_E]     = sAnim_UnownE,
    [SPECIES_UNOWN_F]     = sAnim_UnownF,
    [SPECIES_UNOWN_G]     = sAnim_UnownG,
    [SPECIES_UNOWN_H]     = sAnim_UnownH,
    [SPECIES_UNOWN_I]     = sAnim_UnownI,
    [SPECIES_UNOWN_J]     = sAnim_UnownJ,
    [SPECIES_UNOWN_K]     = sAnim_UnownK,
    [SPECIES_UNOWN_L]     = sAnim_UnownL,
    [SPECIES_UNOWN_M]     = sAnim_UnownM,
    [SPECIES_UNOWN_N]     = sAnim_UnownN,
    [SPECIES_UNOWN_O]     = sAnim_UnownO,
    [SPECIES_UNOWN_P]     = sAnim_UnownP,
    [SPECIES_UNOWN_Q]     = sAnim_UnownQ,
    [SPECIES_UNOWN_R]     = sAnim_UnownR,
    [SPECIES_UNOWN_S]     = sAnim_UnownS,
    [SPECIES_UNOWN_T]     = sAnim_UnownT,
    [SPECIES_UNOWN_U]     = sAnim_UnownU,
    [SPECIES_UNOWN_V]     = sAnim_UnownV,
    [SPECIES_UNOWN_W]     = sAnim_UnownW,
    [SPECIES_UNOWN_X]     = sAnim_UnownX,
    [SPECIES_UNOWN_Y]     = sAnim_UnownY,
    [SPECIES_UNOWN_Z]     = sAnim_UnownZ,
    [SPECIES_UNOWN_EMARK] = sAnim_UnownEMark,
    [SPECIES_UNOWN_QMARK] = sAnim_UnownQMark,
    [SPECIES_CASTFORM_SUNNY] = sAnim_CastformSunny,
    [SPECIES_CASTFORM_RAINY] = sAnim_CastformRainy,
    [SPECIES_CASTFORM_SNOWY] = sAnim_CastformSnowy,
    [SPECIES_DEOXYS_ATTACK] = sAnim_DeoxysAttack,
    [SPECIES_DEOXYS_DEFENSE] = sAnim_DeoxysDefense,
    [SPECIES_DEOXYS_SPEED] = sAnim_DeoxysSpeed,
#if P_GEN_4_POKEMON == TRUE
    [SPECIES_BURMY_SANDY_CLOAK] = sAnim_Burmy,
    [SPECIES_BURMY_TRASH_CLOAK] = sAnim_Burmy,
    [SPECIES_WORMADAM_SANDY_CLOAK] = sAnim_Wormadam,
    [SPECIES_WORMADAM_TRASH_CLOAK] = sAnim_Wormadam,
    [SPECIES_CHERRIM_SUNSHINE] = sAnim_CherrimSunshine,
    [SPECIES_SHELLOS_EAST_SEA] = sAnim_Shellos,
    [SPECIES_GASTRODON_EAST_SEA] = sAnim_Gastrodon,
    [SPECIES_ROTOM_HEAT]  = sAnim_RotomHeat,
    [SPECIES_ROTOM_WASH]  = sAnim_RotomWash,
    [SPECIES_ROTOM_FROST] = sAnim_RotomFrost,
    [SPECIES_ROTOM_FAN]   = sAnim_RotomFan,
    [SPECIES_ROTOM_MOW]   = sAnim_RotomMow,
    [SPECIES_DIALGA_ORIGIN] = sAnim_DialgaOrigin,
    [SPECIES_PALKIA_ORIGIN] = sAnim_PalkiaOrigin,
    [SPECIES_GIRATINA_ORIGIN] = sAnim_GiratinaOrigin,
    [SPECIES_SHAYMIN_SKY] = sAnim_ShayminSky,
    [SPECIES_ARCEUS_FIGHTING] = sAnim_Arceus,
    [SPECIES_ARCEUS_FLYING] = sAnim_Arceus,
    [SPECIES_ARCEUS_POISON] = sAnim_Arceus,
    [SPECIES_ARCEUS_GROUND] = sAnim_Arceus,
    [SPECIES_ARCEUS_ROCK] = sAnim_Arceus,
    [SPECIES_ARCEUS_BUG] = sAnim_Arceus,
    [SPECIES_ARCEUS_GHOST] = sAnim_Arceus,
    [SPECIES_ARCEUS_STEEL] = sAnim_Arceus,
    [SPECIES_ARCEUS_FIRE] = sAnim_Arceus,
    [SPECIES_ARCEUS_WATER] = sAnim_Arceus,
    [SPECIES_ARCEUS_GRASS] = sAnim_Arceus,
    [SPECIES_ARCEUS_ELECTRIC] = sAnim_Arceus,
    [SPECIES_ARCEUS_PSYCHIC] = sAnim_Arceus,
    [SPECIES_ARCEUS_ICE] = sAnim_Arceus,
    [SPECIES_ARCEUS_DRAGON] = sAnim_Arceus,
    [SPECIES_ARCEUS_DARK] = sAnim_Arceus,
    [SPECIES_ARCEUS_FAIRY] = sAnim_Arceus,
#endif
#if P_GEN_5_POKEMON == TRUE
    [SPECIES_BASCULIN_BLUE_STRIPED] = sAnim_Basculin,
    [SPECIES_BASCULIN_WHITE_STRIPED] = sAnim_Basculin,
    [SPECIES_DARMANITAN_ZEN_MODE] = sAnim_DarmanitanZenMode,
    [SPECIES_DARMANITAN_ZEN_MODE_GALARIAN] = sAnim_DarmanitanZenModeGalarian,
    [SPECIES_DEERLING_SUMMER] = sAnim_Deerling,
    [SPECIES_DEERLING_AUTUMN] = sAnim_Deerling,
    [SPECIES_DEERLING_WINTER] = sAnim_Deerling,
    [SPECIES_SAWSBUCK_SUMMER] = sAnim_Sawsbuck,
    [SPECIES_SAWSBUCK_AUTUMN] = sAnim_Sawsbuck,
    [SPECIES_SAWSBUCK_WINTER] = sAnim_Sawsbuck,
    [SPECIES_TORNADUS_THERIAN] = sAnim_TornadusTherian,
    [SPECIES_THUNDURUS_THERIAN] = sAnim_ThundurusTherian,
    [SPECIES_LANDORUS_THERIAN] = sAnim_LandorusTherian,
    [SPECIES_KYUREM_WHITE] = sAnim_KyuremWhite,
    [SPECIES_KYUREM_BLACK] = sAnim_KyuremBlack,
    [SPECIES_KELDEO_RESOLUTE] = sAnim_KeldeoResolute,
    [SPECIES_MELOETTA_PIROUETTE] = sAnim_MeloettaPirouette,
    [SPECIES_GENESECT_DOUSE_DRIVE] = sAnim_Genesect,
    [SPECIES_GENESECT_SHOCK_DRIVE] = sAnim_Genesect,
    [SPECIES_GENESECT_BURN_DRIVE] = sAnim_Genesect,
    [SPECIES_GENESECT_CHILL_DRIVE] = sAnim_Genesect,
#endif
#if P_GEN_6_POKEMON == TRUE
    [SPECIES_GRENINJA_BATTLE_BOND] = sAnim_Greninja,
    [SPECIES_GRENINJA_ASH] = sAnim_GreninjaAsh,
    [SPECIES_VIVILLON_POLAR] = sAnim_Vivillon,
    [SPECIES_VIVILLON_TUNDRA] = sAnim_Vivillon,
    [SPECIES_VIVILLON_CONTINENTAL] = sAnim_Vivillon,
    [SPECIES_VIVILLON_GARDEN] = sAnim_Vivillon,
    [SPECIES_VIVILLON_ELEGANT] = sAnim_Vivillon,
    [SPECIES_VIVILLON_MEADOW] = sAnim_Vivillon,
    [SPECIES_VIVILLON_MODERN] = sAnim_Vivillon,
    [SPECIES_VIVILLON_MARINE] = sAnim_Vivillon,
    [SPECIES_VIVILLON_ARCHIPELAGO] = sAnim_Vivillon,
    [SPECIES_VIVILLON_HIGH_PLAINS] = sAnim_Vivillon,
    [SPECIES_VIVILLON_SANDSTORM] = sAnim_Vivillon,
    [SPECIES_VIVILLON_RIVER] = sAnim_Vivillon,
    [SPECIES_VIVILLON_MONSOON] = sAnim_Vivillon,
    [SPECIES_VIVILLON_SAVANNA] = sAnim_Vivillon,
    [SPECIES_VIVILLON_SUN] = sAnim_Vivillon,
    [SPECIES_VIVILLON_OCEAN] = sAnim_Vivillon,
    [SPECIES_VIVILLON_JUNGLE] = sAnim_Vivillon,
    [SPECIES_VIVILLON_FANCY] = sAnim_Vivillon,
    [SPECIES_VIVILLON_POKE_BALL] = sAnim_Vivillon,
    [SPECIES_FLABEBE_YELLOW_FLOWER] = sAnim_Flabebe,
    [SPECIES_FLABEBE_ORANGE_FLOWER] = sAnim_Flabebe,
    [SPECIES_FLABEBE_BLUE_FLOWER] = sAnim_Flabebe,
    [SPECIES_FLABEBE_WHITE_FLOWER] = sAnim_Flabebe,
    [SPECIES_FLOETTE_YELLOW_FLOWER] = sAnim_Floette,
    [SPECIES_FLOETTE_ORANGE_FLOWER] = sAnim_Floette,
    [SPECIES_FLOETTE_BLUE_FLOWER] = sAnim_Floette,
    [SPECIES_FLOETTE_WHITE_FLOWER] = sAnim_Floette,
    [SPECIES_FLOETTE_ETERNAL_FLOWER] = sAnim_Floette,
    [SPECIES_FLORGES_YELLOW_FLOWER] = sAnim_Florges,
    [SPECIES_FLORGES_ORANGE_FLOWER] = sAnim_Florges,
    [SPECIES_FLORGES_BLUE_FLOWER] = sAnim_Florges,
    [SPECIES_FLORGES_WHITE_FLOWER] = sAnim_Florges,
    [SPECIES_FURFROU_HEART_TRIM] = sAnim_Furfrou,
    [SPECIES_FURFROU_STAR_TRIM] = sAnim_Furfrou,
    [SPECIES_FURFROU_DIAMOND_TRIM] = sAnim_Furfrou,
    [SPECIES_FURFROU_DEBUTANTE_TRIM] = sAnim_Furfrou,
    [SPECIES_FURFROU_MATRON_TRIM] = sAnim_Furfrou,
    [SPECIES_FURFROU_DANDY_TRIM] = sAnim_Furfrou,
    [SPECIES_FURFROU_LA_REINE_TRIM] = sAnim_Furfrou,
    [SPECIES_FURFROU_KABUKI_TRIM] = sAnim_Furfrou,
    [SPECIES_FURFROU_PHARAOH_TRIM] = sAnim_Furfrou,
    [SPECIES_MEOWSTIC_FEMALE] = sAnim_Meowstic,
    [SPECIES_AEGISLASH_BLADE] = sAnim_AegislashBlade,
    [SPECIES_PUMPKABOO_SMALL] = sAnim_Pumpkaboo,
    [SPECIES_PUMPKABOO_LARGE] = sAnim_Pumpkaboo,
    [SPECIES_PUMPKABOO_SUPER] = sAnim_Pumpkaboo,
    [SPECIES_GOURGEIST_SMALL] = sAnim_Gourgeist,
    [SPECIES_GOURGEIST_LARGE] = sAnim_Gourgeist,
    [SPECIES_GOURGEIST_SUPER] = sAnim_Gourgeist,
    [SPECIES_XERNEAS_ACTIVE] = sAnim_Xerneas,
    [SPECIES_ZYGARDE_10] = sAnim_Zygarde10,
    [SPECIES_ZYGARDE_10_POWER_CONSTRUCT] = sAnim_Zygarde10,
    [SPECIES_ZYGARDE_50_POWER_CONSTRUCT] = sAnim_Zygarde,
    [SPECIES_ZYGARDE_COMPLETE] = sAnim_ZygardeComplete,
    [SPECIES_HOOPA_UNBOUND] = sAnim_HoopaUnbound,
#endif
#if P_GEN_7_POKEMON == TRUE
    [SPECIES_ORICORIO_POM_POM] = sAnim_Oricorio,
    [SPECIES_ORICORIO_PAU] = sAnim_Oricorio,
    [SPECIES_ORICORIO_SENSU] = sAnim_Oricorio,
    [SPECIES_ROCKRUFF_OWN_TEMPO] = sAnim_Rockruff,
    [SPECIES_LYCANROC_MIDNIGHT] = sAnim_LycanrocMidnight,
    [SPECIES_LYCANROC_DUSK] = sAnim_LycanrocDusk,
    [SPECIES_WISHIWASHI_SCHOOL] = sAnim_WishiwashiSchool,
    [SPECIES_SILVALLY_FIGHTING] = sAnim_Silvally,
    [SPECIES_SILVALLY_FLYING] = sAnim_Silvally,
    [SPECIES_SILVALLY_POISON] = sAnim_Silvally,
    [SPECIES_SILVALLY_GROUND] = sAnim_Silvally,
    [SPECIES_SILVALLY_ROCK] = sAnim_Silvally,
    [SPECIES_SILVALLY_BUG] = sAnim_Silvally,
    [SPECIES_SILVALLY_GHOST] = sAnim_Silvally,
    [SPECIES_SILVALLY_STEEL] = sAnim_Silvally,
    [SPECIES_SILVALLY_FIRE] = sAnim_Silvally,
    [SPECIES_SILVALLY_WATER] = sAnim_Silvally,
    [SPECIES_SILVALLY_GRASS] = sAnim_Silvally,
    [SPECIES_SILVALLY_ELECTRIC] = sAnim_Silvally,
    [SPECIES_SILVALLY_PSYCHIC] = sAnim_Silvally,
    [SPECIES_SILVALLY_ICE] = sAnim_Silvally,
    [SPECIES_SILVALLY_DRAGON] = sAnim_Silvally,
    [SPECIES_SILVALLY_DARK] = sAnim_Silvally,
    [SPECIES_SILVALLY_FAIRY] = sAnim_Silvally,
    [SPECIES_MINIOR_METEOR_ORANGE] = sAnim_Minior,
    [SPECIES_MINIOR_METEOR_YELLOW] = sAnim_Minior,
    [SPECIES_MINIOR_METEOR_GREEN] = sAnim_Minior,
    [SPECIES_MINIOR_METEOR_BLUE] = sAnim_Minior,
    [SPECIES_MINIOR_METEOR_INDIGO] = sAnim_Minior,
    [SPECIES_MINIOR_METEOR_VIOLET] = sAnim_Minior,
    [SPECIES_MINIOR_CORE_RED] = sAnim_Minior,
    [SPECIES_MINIOR_CORE_ORANGE] = sAnim_Minior,
    [SPECIES_MINIOR_CORE_YELLOW] = sAnim_Minior,
    [SPECIES_MINIOR_CORE_GREEN] = sAnim_Minior,
    [SPECIES_MINIOR_CORE_BLUE] = sAnim_Minior,
    [SPECIES_MINIOR_CORE_INDIGO] = sAnim_Minior,
    [SPECIES_MINIOR_CORE_VIOLET] = sAnim_Minior,
    [SPECIES_MIMIKYU_BUSTED] = sAnim_MimikyuBusted,
    [SPECIES_NECROZMA_DUSK_MANE] = sAnim_Necrozma,
    [SPECIES_NECROZMA_DAWN_WINGS] = sAnim_Necrozma,
    [SPECIES_NECROZMA_ULTRA] = sAnim_Necrozma,
    [SPECIES_MAGEARNA_ORIGINAL_COLOR] = sAnim_Magearna,
#endif
#if P_GEN_8_POKEMON == TRUE
    [SPECIES_CRAMORANT_GULPING] = sAnim_Cramorant,
    [SPECIES_CRAMORANT_GORGING] = sAnim_Cramorant,
    [SPECIES_TOXTRICITY_LOW_KEY] = sAnim_Toxtricity,
    [SPECIES_SINISTEA_ANTIQUE] = sAnim_Sinistea,
    [SPECIES_POLTEAGEIST_ANTIQUE] = sAnim_Polteageist,
    [SPECIES_ALCREMIE_RUBY_CREAM] = sAnim_Alcremie,
    [SPECIES_ALCREMIE_MATCHA_CREAM] = sAnim_Alcremie,
    [SPECIES_ALCREMIE_MINT_CREAM] = sAnim_Alcremie,
    [SPECIES_ALCREMIE_LEMON_CREAM] = sAnim_Alcremie,
    [SPECIES_ALCREMIE_SALTED_CREAM] = sAnim_Alcremie,
    [SPECIES_ALCREMIE_RUBY_SWIRL] = sAnim_Alcremie,
    [SPECIES_ALCREMIE_CARAMEL_SWIRL] = sAnim_Alcremie,
    [SPECIES_ALCREMIE_RAINBOW_SWIRL] = sAnim_Alcremie,
    [SPECIES_EISCUE_NOICE_FACE] = sAnim_Eiscue,
    [SPECIES_INDEEDEE_FEMALE] = sAnim_Indeedee,
    [SPECIES_MORPEKO_HANGRY] = sAnim_Morpeko,
    [SPECIES_ZACIAN_CROWNED_SWORD] = sAnim_Zacian,
    [SPECIES_ZAMAZENTA_CROWNED_SHIELD] = sAnim_Zamazenta,
    [SPECIES_ETERNATUS_ETERNAMAX] = sAnim_Eternatus,
    [SPECIES_URSHIFU_RAPID_STRIKE_STYLE] = sAnim_Urshifu,
    [SPECIES_ZARUDE_DADA] = sAnim_Zarude,
    [SPECIES_CALYREX_ICE_RIDER] = sAnim_Calyrex,
    [SPECIES_CALYREX_SHADOW_RIDER] = sAnim_Calyrex,
    [SPECIES_ENAMORUS_THERIAN] = sAnim_EnamorusTherian,
    [SPECIES_BASCULEGION_FEMALE] = sAnim_Basculegion,
#endif

	ANIM_CMD(DUBSNAKE),
	ANIM_CMD(HYDROIL),
	ANIM_CMD(WYCERN),
	ANIM_CMD(BITTERAGON),
	ANIM_CMD(CACTUMBRA),
	ANIM_CMD(OBSICARGO),
	ANIM_CMD(NORWHALE),
	ANIM_CMD(SPOOKUM),
	ANIM_CMD(GLASMA),
	ANIM_CMD(PLASMOLYTE),
	ANIM_CMD(STORMAGE),
	ANIM_CMD(SANDUDE),
	ANIM_CMD(SANDROSS),
	ANIM_CMD(SANDUEL),
	ANIM_CMD(ELADRIFT),
	ANIM_CMD(SLITHURENT),
	ANIM_CMD(PRESCYLLON),
	ANIM_CMD(SLOSHMOSH),
	ANIM_CMD(SLURPINSKI),
	ANIM_CMD(KEESH),
	ANIM_CMD(HATCHBLING),
	ANIM_CMD(HUMMBLING),
	ANIM_CMD(KEESIGHT),
	ANIM_CMD(KEESPELL),
	ANIM_CMD(LARVOOL),
	ANIM_CMD(SPOOLER),
	ANIM_CMD(BILLIARACH),
	ANIM_CMD(SLUGMA_FONEI),
	ANIM_CMD(MAGCARGO_FONEI),
	ANIM_CMD(SUNFOREST),
	ANIM_CMD(HONEDGE_FONEI),
	ANIM_CMD(DOUBLADE_FONEI),
	ANIM_CMD(AEGISLASH_FONEI_A),
	ANIM_CMD(AEGISLASH_FONEI_E),
	ANIM_CMD(ELEMPTY),
	ANIM_CMD(VENEARTH),
	ANIM_CMD(MARSIZZLE),
	ANIM_CMD(JUPLASMA),
	ANIM_CMD(MERLPOOL),
	ANIM_CMD(OPHICALF),
	ANIM_CMD(SERPENTAUR),
	ANIM_CMD(GEODUDE_FONEI),
	ANIM_CMD(GRAVELER_FONEI),
	ANIM_CMD(GOLEM_FONEI),
	ANIM_CMD(SUDOWOODO_FONEI),
	ANIM_CMD(GRITWYRM),
	ANIM_CMD(MOLDUNE),
	ANIM_CMD(WATTITUDE),
	ANIM_CMD(RALTS_FONEI),
	ANIM_CMD(KIRLIA_FONEI),
	ANIM_CMD(GARDEVOIR_FONEI),
	ANIM_CMD(GALLADE_FONEI),
	ANIM_CMD(TRUEBAT),
	ANIM_CMD(HOMBONE),
	ANIM_CMD(HOMBEAST),
	ANIM_CMD(QWILSHARK),
	ANIM_CMD(KRISSY),
	ANIM_CMD(KRAKODEMON),
	ANIM_CMD(WEATHERBANE),
	ANIM_CMD(KETSUBAN),
	ANIM_CMD(DISABY),
	ANIM_CMD(DISASPRITE),
	ANIM_CMD(DISMASTER),
	ANIM_CMD(PURIDIAN),
	ANIM_CMD(MANIPULO),
	ANIM_CMD(COILSPILL),
	ANIM_CMD(BOOWHO),
	ANIM_CMD(BOOXER),
	ANIM_CMD(BOOZERKER),
	ANIM_CMD(DEEPDARK),
	ANIM_CMD(BURMITE),
	ANIM_CMD(SEDIMETAL),
	ANIM_CMD(SOLOSIS_FONEI),
	ANIM_CMD(DUOSION_FONEI),
	ANIM_CMD(REUNICLUS_FONEI),
	ANIM_CMD(VINOS),
	ANIM_CMD(VINOCEIVER),
	ANIM_CMD(ANNOYIDGE),
	ANIM_CMD(PESQUITO),
	ANIM_CMD(MANKEY_FONEI),
	ANIM_CMD(PRIMEAPE_FONEI),
	ANIM_CMD(CRYOGONAL_FONEI),
	ANIM_CMD(AMPIBOISON),
	ANIM_CMD(LAGNET),
	ANIM_CMD(LANNET),
	ANIM_CMD(CYBURN),
	ANIM_CMD(SAPNOSE),
	ANIM_CMD(BURROOT),
	ANIM_CMD(BURRUSH),
	ANIM_CMD(LAV),
	ANIM_CMD(LAVALY),
	ANIM_CMD(LAVSAMUCH),
	ANIM_CMD(GUPPAGE),
	ANIM_CMD(SEAGE),
	ANIM_CMD(BASSTION),
	ANIM_CMD(PANTOM),
	ANIM_CMD(HAPPANING),
	ANIM_CMD(PANZERGAST),
	ANIM_CMD(SCAIRY),
	ANIM_CMD(DANKLIMMER),
	ANIM_CMD(GOLICHEM),
	ANIM_CMD(SPINDA_FONEI),
	ANIM_CMD(EMUNITION),
	ANIM_CMD(EMORTAR),
	ANIM_CMD(OPEBBLISK),
	ANIM_CMD(STONUMENT),
	ANIM_CMD(MEMOIRBLE),
	ANIM_CMD(NOKOMMON),
	ANIM_CMD(TANGHOUL),
	ANIM_CMD(QWILYU),
	ANIM_CMD(CORILIA),
	ANIM_CMD(NIDOROOK),
	ANIM_CMD(SKALVENGER),
	ANIM_CMD(SKULKREX),
	ANIM_CMD(SKELTYRANT),
    [SPECIES_EGG]         = sAnim_Egg,
};

#undef ANIM_CMD
#undef ANIM_CMD_FULL
