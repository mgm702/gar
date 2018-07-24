#ifndef __INPUT_H__
#define __INPUT_H__
#include "command.h"

// CONTEXT
typedef struct {
    Command* parsedCmds;
    int argc;
    char** argv;
} Input;

#endif
