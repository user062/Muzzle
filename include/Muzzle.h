#pragma once

#ifdef _WIN32
    // Include WinAPI if on windows. Required for MultiByteToWideChar
    #include "windows.h"
#endif

#ifdef MZ_SUPPORT_AUDIO
    #warning mz_audio is not at a usable state, it will not be included
#endif

#include "core/Applet.h"
#include "core/vector.h"
#include "core/Drawing.h"
#include "core/tint.h"
#include "core/Sprite.h"
#include "shapes/Rectangle.h"
#include "shapes/Circle.h"
#include "core/Text.h"
#include "core/Input.h"
#include <stdlib.h>

void QuitMuzzle(Applet applet);
