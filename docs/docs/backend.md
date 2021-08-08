# backend.h

Includes:
* glfw3.h

Macros:
* GLFW_INCLUDE_ES2 (if defined \_EMSCRIPTEN_)
* MAX_BUFFERS 4 (8 ifdef MUZZLE_ALLOW_BUFFER_HIGH)
* BUFFER_LENGTH 1024 (2048 ifdef MUZZLE_ALLOW_BUFFER_HIGH)
* MUZZLE_FALSE 0
* MUZZLE_TRUE 1

Types:
* GLFWwindow* MUZZLE_WINDOW

Functions:
* None

Purpose:
* Provides Important Macros, types, and libraries required for the framework to work
