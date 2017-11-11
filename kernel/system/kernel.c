// C++ defines (if g++ is used)
#if !defined(__cplusplus)
#include <stdbool.h>
#endif

// Imports
#include <stddef.h>
#include <stdint.h>

// Check to see if we're using a cross compiler...
#if defined(__linux__)
#error "ERR: No cross compiler!"
#endif

// Check to see if we are running on an ix86 target.
#if !defined(__i386__)
#error "ERR: Wrong arch (i386 required)"
#endif
