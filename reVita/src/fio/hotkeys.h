#ifndef _HOTKEYS_H_
#define _HOTKEYS_H_
#include "profile.h"

enum HOTKEY_ID{
	HOTKEY_MENU = 0,
	HOTKEY_SAFE_START,
	HOTKEY_REMAPS_TOOGLE,
	HOTKEY_RESET_SOFT,
	HOTKEY_RESET_COLD,
	HOTKEY_STANDBY,
	HOTKEY_SUSPEND,
	HOTKEY_DISPLAY_OFF,
	HOTKEY_KILL_APP,
	HOTKEY_BRIGHTNESS_INC,
	HOTKEY_BRIGHTNESS_DEC,
	HOTKEY_SAVE_BACKUP,
	HOTKEY_SAVE_RESTORE,
	HOTKEY_SAVE_DELETE,
	HOTKEY_MOTION_CALIBRATE,
    HOTKEY_PROFILE_LOCAL_RESET,
    HOTKEY_PROFILE_SHARED_LOAD,
    HOTKEY__NUM
};

extern struct ProfileEntry hotkeys[HOTKEY__NUM];

bool hotkeys_isDef(enum HOTKEY_ID id);
void hotkeys_reset(enum HOTKEY_ID id);
void hotkeys_resetAll();
bool hotkeys_save();

void hotkeys_init();
void hotkeys_destroy();
#endif