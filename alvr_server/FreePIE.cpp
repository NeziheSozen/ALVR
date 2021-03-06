#include "FreePIE.h"
#include "RemoteController.h"

// Map FreePIE button id to RemoteController button id
const int FreePIE::BUTTON_MAP[FreePIE::ALVR_FREEPIE_BUTTONS] = {
	INPUT_SYSTEM_CLICK, INPUT_APPLICATION_MENU_CLICK, INPUT_GRIP_CLICK
	, INPUT_DPAD_LEFT_CLICK, INPUT_DPAD_UP_CLICK, INPUT_DPAD_RIGHT_CLICK, INPUT_DPAD_DOWN_CLICK
	, INPUT_A_CLICK, INPUT_B_CLICK, INPUT_X_CLICK, INPUT_Y_CLICK
	, INPUT_TRACKPAD_CLICK, INPUT_TRACKPAD_TOUCH, INPUT_TRIGGER_CLICK
	, INPUT_SHOULDER_LEFT_CLICK, INPUT_SHOULDER_RIGHT_CLICK
	, INPUT_JOYSTICK_LEFT_CLICK, INPUT_JOYSTICK_RIGHT_CLICK
	, INPUT_BACK_CLICK, INPUT_GUIDE_CLICK, INPUT_START_CLICK
};