# Applet.h

Includes:
* Loop.h
* Error.h
* callback.h
* backend.h

Macros:
* None

Functions:
* void StartApplet(Applet *self);
* Applet InitializeApplet(const int WIDTH, const int HEIGHT, const char* WINDOW_TITLE, int RESIZEABLE, int VSYNC);

Types:
```c

typedef struct Applet {
    int width, height;
    char* WindowTitle;
    GLFWwindow *window_handle;
} Applet;
```

Purpose:
* Provides the Applet Type
