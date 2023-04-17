// 0x3000 is the terminator value. If this value is reached, the code is considered completed.

static const u16 sRareCandySequence[] = {B_BUTTON, A_BUTTON, B_BUTTON, DPAD_RIGHT, 0x3000};
static const u16 sKonamiCode[] = {DPAD_UP, DPAD_UP, DPAD_DOWN, DPAD_DOWN, DPAD_LEFT, DPAD_RIGHT, 
									DPAD_LEFT, DPAD_RIGHT, B_BUTTON, A_BUTTON, 0x3000};
static const u16 sHealSequence[] = {DPAD_RIGHT, DPAD_RIGHT, DPAD_RIGHT, DPAD_DOWN, DPAD_UP, 0x3000};
static const u16 sFreeHMsSequence[] = {DPAD_DOWN, DPAD_DOWN, A_BUTTON, DPAD_RIGHT, DPAD_RIGHT, DPAD_DOWN,
									A_BUTTON, A_BUTTON, A_BUTTON, A_BUTTON, A_BUTTON, 0x3000};
static const u16 sNoRandomEncountersSequence[] = {A_BUTTON, A_BUTTON, DPAD_DOWN, DPAD_RIGHT, A_BUTTON, 0x3000};
static const u16 sNoTrainerSeeSequence[] = {L_BUTTON, L_BUTTON, L_BUTTON, L_BUTTON, DPAD_DOWN, 0x3000};

#define NUM_CHEAT_CODES 6

static const u16 * const sCheatCodes[NUM_CHEAT_CODES] = 
	{
		sRareCandySequence,
		sKonamiCode,
		sHealSequence,
		sFreeHMsSequence,
		sNoRandomEncountersSequence,
		sNoTrainerSeeSequence,
	};
