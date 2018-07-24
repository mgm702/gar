#ifndef __APP_H__
#define __APP_H__

#include <string.h>
#include <assert.h>
#include <stdlib.h>
#include "command.h"
#include "input.h"

typedef struct App _cliApp;

#define APP_INIT { empty_argv, 0, 0 }

App* newApp(char*,...);

void addCmd(Command*);
Command* getCmd(int);

#endif
