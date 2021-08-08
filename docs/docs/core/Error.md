# Error.h

Includes:
* stdio
* stdlib

Macros:
* None

Functions:
* void muzzle_error(int error, const char \*desc);
* void log_status(StatusTypes type, const char \*status);

Types:
```c
typedef enum StatusTypes
{
    // warning that does not affect the application much
    STATUS_WARNING,
    // Error that affects the application, but does not crash it
    STATUS_ERROR,
    // Error that forces the application to CTD (Crash To Desktop)
    STATUS_FATAL_ERROR,
    STATUS_SUCCESS,
    STATUS_INFO,
} StatusTypes;

typedef enum ErrorResult
{
    FAILED,
    WORKED
} ErrorResult;
```

Purpose:
* Error Handling
