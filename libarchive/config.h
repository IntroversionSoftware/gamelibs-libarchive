#if defined(_MSC_VER)
#include "config_windows.h"
#elif defined(__linux__)
#include "config_linux.h"
#elif defined(__MACH__)
#include "config_macosx.h"
#else
#error "Need a config.h for your platform!"
#endif
