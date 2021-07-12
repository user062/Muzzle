#pragma once

#if defined(__EMSCRIPTEN__)
    #define GLFW_INCLUDE_ES2
#endif


#ifdef MUZZLE_ALLOW_BUFFER_HIGH
    #define MAX_BUFFERS 8
    #define BUFFER_LENGTH 2048
#else
    #define MAX_BUFFERS 4
    #define BUFFER_LENGTH 1024
#endif

#define MUZZLE_FALSE 0
#define MUZZLE_TRUE 1

#include "glfw3.h"
#include <switch.h>
typedef GLFWwindow* MUZZLE_WINDOW;
