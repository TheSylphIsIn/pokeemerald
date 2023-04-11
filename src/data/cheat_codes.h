// 0x3000 is the terminator value. If this value is reached, the code is considered completed.

static const u16 sRareCandySequence[] = {B_BUTTON, A_BUTTON, B_BUTTON, DPAD_RIGHT, 0x3000};
static const u16 sKonamiCode[] = {DPAD_UP, DPAD_UP, DPAD_DOWN, DPAD_DOWN, DPAD_LEFT, DPAD_RIGHT, 
									DPAD_LEFT, DPAD_RIGHT, B_BUTTON, A_BUTTON, 0x3000};

static const u16 * const sCheatCodes[2] = 
	{
		sRareCandySequence,
		sKonamiCode
	};
