#ifndef __COMMAND_H__
#define __COMMAND_H__

#include "context.h"

// COMMANDS
typedef struct {
    char* name;
    void (*action)(Command*, Input*);
} Command;

#endif
