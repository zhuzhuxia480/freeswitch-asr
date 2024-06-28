//
// Created by zzx on 28/06/2024.
//

#include "switch.h"

//#define the mod interface function

SWITCH_MODULE_LOAD_FUNCTION(mod_asr_load);
SWITCH_MODULE_SHUTDOWN_FUNCTION(mod_asr_shutdown);
SWITCH_MODULE_RUNTIME_FUNCTION(mod_asr_runtime);

// define module
SWITCH_MODULE_DEFINITION(mod_asr, mod_asr_load, mod_asr_shutdown, nullptr);

SWITCH_STANDARD_APP(start_asr_function) {

}

SWITCH_STANDARD_APP(stop_asr_function){

}

SWITCH_MODULE_LOAD_FUNCTION(mod_asr_load){

	return SWITCH_STATUS_SUCCESS;
}

SWITCH_MODULE_RUNTIME_FUNCTION(mod_asr_runtime){

	return SWITCH_STATUS_TERM;
}

SWITCH_MODULE_SHUTDOWN_FUNCTION(mod_asr_shutdown){

	return SWITCH_STATUS_SUCCESS;
}
