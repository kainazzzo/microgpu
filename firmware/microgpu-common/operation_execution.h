#pragma once

#include "display.h"
#include "operations.h"
#include "databus.h"
#include "texture_manager.h"

/*
 * Attempts to execute the specified operation if supported. Most operations are supported, with
 * initialization being an exception.
 */
void mgpu_execute_operation(Mgpu_Operation *operation,
                            Mgpu_Display *display,
                            Mgpu_Databus *databus,
                            bool *resetFlag,
                            Mgpu_TextureManager *textureManager);
