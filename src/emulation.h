#ifndef EMULATION_FRAME_H
#define EMULATION_FRAME_H

#include <Arduino.h>
#include <unity.h>
#include <ctime>
#include <cstdarg>
#include "FunctionEmulator.h"
#include "TimeFunctionEmulators.h"

extern MillisFunctionEmulator millisEmulator;
extern DelayFunctionEmulator delayEmulator;
extern FunctionEmulator log_d_stub;
extern FunctionEmulator log_i_stub;
extern FunctionEmulator log_v_stub;
extern FunctionEmulator log_w_stub;
extern FunctionEmulator log_e_stub;
extern void resetEmulators();

#endif // end of EMULATION_FRAME_H
