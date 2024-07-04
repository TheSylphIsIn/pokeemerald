#ifndef GUARD_FIELD_MESSAGE_BOX_H
#define GUARD_FIELD_MESSAGE_BOX_H

enum
{
    FIELD_MESSAGE_BOX_HIDDEN,
    FIELD_MESSAGE_BOX_UNUSED,
    FIELD_MESSAGE_BOX_NORMAL,
    FIELD_MESSAGE_BOX_AUTO_SCROLL,
};

extern const u8* gSpeakerName;
extern u8 showPortraitState; // used to control visibility of portraits. 

enum
{
	PORTRAIT_STATE_VISIBLE, // Portrait and dialogue window are visible
	PORTRAIT_STATE_WAITING, // Portrait is drawn but invisible until the dialogue window appears
	PORTRAIT_STATE_DEACTIVATE, // Dialogue window is disappearing, Portrait should clear itself
};

bool8 ShowFieldMessage(const u8 *message);
bool8 ShowPokenavFieldMessage(const u8 *message);
bool8 ShowFieldMessageFromBuffer(void);
bool8 ShowFieldAutoScrollMessage(const u8 *message);
void HideFieldMessageBox(void);
bool8 IsFieldMessageBoxHidden(void);
u8 GetFieldMessageBoxMode(void);
void StopFieldMessage(void);
void InitFieldMessageBox(void);
void SetSpeakerName(const u8* name);

#endif // GUARD_FIELD_MESSAGE_BOX_H
