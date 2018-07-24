#include <stdio.h>
#include <assert.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>

#include "vector.h"

#define Warning(...) fprintf(stderr, __VA_ARGS__)

typedef struct {
    char* name;
    int count;
} Flag;

typedef struct {
    char* name;
    void (*action)();
    Flag** flags;
} Command;

typedef struct {
    char* version;
    Command** commands;
} App;

// testing the above

void sayHi() {
    printf("Inside the dynamic array command!\n");
}

void addCommand(App* app, Command* cmd) {
    vector_push_back(app->commands, cmd);
}

void addFlag(Command* cmd, Flag* f) {
    vector_push_back(cmd->flags, f);
}

int main(int argc, char** argv) {

    Warning("%s: this program contains no useful code\n", argv[0]);

    Command cmd = { .flags = NULL, .name = "help", .action = sayHi };

    Flag fg = {.name = "test", .count = 10};
    Flag fg1 = {.name = "test", .count = 3000};

    App pp = {.commands = NULL, .version = "0.0.1"};
    App* app = &pp;

    addFlag(&cmd, &fg);
    addFlag(&cmd, &fg1);
    addCommand(app, &cmd);

    printf("version %s of the app is using the %s command with the %s flag (v: %i)\n",
            app->version,
            app->commands[0]->name,
            app->commands[0]->flags[0]->name,
            app->commands[0]->flags[1]->count);
    app->commands[0]->action();

    Command* first = *vector_begin(app->commands);
    printf("%s\n", first->name);
    printf("%lu cap\n", vector_capacity(app->commands[0]->flags));
    printf("%lu size\n", vector_size(app->commands));

    //dynArray *byn = newDynArr(2);
    //addCommand(byn, cmd);
    ////addFlag(byn, fg);

    //((Command*)byn->data)[0].action();
}

// Parsing the input order
// - S Flags (input)
// - B Flags
// - Commands
//   Input (vectors that get built through parsing)
//      SFlag* input_sFlags;
//      BFlag* input_bFlags;
//      Command* input_Cmds;
//
//
//char* builder = '';
//for(size_t i = 0; i < argc; ) {
//    case(argv[i])
//    switch: _isBFlag()
//          _parseBFlag()
//          i++;
//    switch: _isSFlag()
//        _parseSFlag(&i, argv) {
//          if(_hasEqualSign())
//            _parseEqualInput(argv);
//            i++;
//          else
//          // will need to move the iterator(i) more then one value if we have to grab input
//            _parseInput(&i, argv);
//        }
//    default:
//          _parseCommand(argv);
//          i++;
//}


