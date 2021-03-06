/// -*- tab-width: 4; Mode: C++; c-basic-offset: 4; indent-tabs-mode: nil -*-

#include <AP_HAL/AP_HAL.h>
#include "AP_JSButton.h"

const AP_Param::GroupInfo JSButton::var_info[] = {

	// @Param: FUNCTION
	// @DisplayName: Function for button
	// @Description: Set to 0 to disable or choose a function
    // @Values: 0:Disabled,1:shift,2:arm_toggle,3:arm,4:disarm,5:mode_toggle,6:mode_stab,7:mode_althold,21:mount_center,22:mount_tilt_up,23:mount_tilt_down,24:camera_trigger,31:light1_cycle,32:lights1_brighter,33:lights1_dimmer,34:lights2_cycle,35:lights2_brighter,36:lights2_dimmer,41:gain_toggle,42:gain_inc,43:gain_dec,44:trim_roll_inc,45:trim_roll_dec,46:trim_pitch_inc,47:trim_pitch_dec
	// @User: Standard
    AP_GROUPINFO("FUNCTION",        0, JSButton, _function, 0),

	// @Param: SFUNCTION
	// @DisplayName: Function for button when the shift mode is toggled on
	// @Description: Set to 0 to disable or choose a function
	// @Values: 0:Disabled,1:shift,2:arm_toggle,3:arm,4:disarm,5:mode_toggle,6:mode_stab,7:mode_althold,21:mount_center,22:mount_tilt_up,23:mount_tilt_down,24:camera_trigger,31:light1_cycle,32:lights1_brighter,33:lights1_dimmer,34:lights2_cycle,35:lights2_brighter,36:lights2_dimmer,41:gain_toggle,42:gain_inc,43:gain_dec,44:trim_roll_inc,45:trim_roll_dec,46:trim_pitch_inc,47:trim_pitch_dec
	// @User: Standard
	AP_GROUPINFO("SFUNCTION",        1, JSButton, _sfunction, 0),

    AP_GROUPEND
};

// object constructor.
JSButton::JSButton(void)
{
    AP_Param::setup_object_defaults(this, var_info);
}
