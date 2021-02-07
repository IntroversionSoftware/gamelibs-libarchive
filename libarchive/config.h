#if defined(_MSC_VER)
#include "config_windows.h"
#elif defined(__linux__)
#include "config_linux.h"
#else
#error "Need a config.h for your platform!"
#endif
