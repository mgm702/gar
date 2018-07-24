#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <stdbool.h>
#include <string.h>

// INPUT
typedef struct {
    // TODO: build out more of the Input struct
    char** userArgs;
    int argCount;
} Input;

// COMMANDS
typedef struct {
    char* name;
    void (*action)(Command* cmds, Input* appInput);
} Command;

// FLAGS
typedef struct {
    char* name;
    char* shorthand;
    char* type;
    char** arguments;
    bool flagVal;
    bool required;
} Flag;

// APP
typedef struct {
    char* name;
    char* usage;
    char* helpName;
    char* version;
    char* description;
    void (*defaultAction)(Input* appInput);
    Input* input;

    // Dynamic Arrays for Commands, and Flags(string/bool)
    Command* cmds;
    int cmdSize;
    int cmdCapacity;

    Flag* flags;
    int flagsSize;
    int flagsCapacity;

} App;

// INPUT
Input* buildInput(int argc, char** argv) {
    Input *in = (Input*)malloc(sizeof(Input));

    assert(in != 0);
    in->userArgs  = (char**)malloc(sizeof(char**) * 50);
    for (int i = 0; i < argc; i++) {
        in->userArgs[i] = argv[i];
    }
    in->argCount = argc;
    return in;
}

// HELPER FUNCTION (misc)
char* strip_chars(const char* string, const char* chars)
{
    char* newstr = malloc(strlen(string) + 1);
    int counter = 0;

    for ( ; *string; string++) {
        if (!strchr(chars, *string)) {
            newstr[ counter ] = *string;
            ++counter;
        }
    }

    newstr[counter] = 0;
    return newstr;
}

// TODO: create varadic variable at end of this so user can enter in intro information
// when they build out a new app
App* newApp(int argc, char** argv) {
    char *appName = strip_chars(argv[0], "./");

    // TODO: make something in here that trims the argv[0] val if the ./ is found in there
    App* app = (App*)malloc(sizeof(App));
    assert(app != 0);
    app->name = appName;
    app->helpName = appName;
    app->usage = "";
    app->version = "0.0.0";
    app->description = "";
    app->input = buildInput(argc, argv);

    // TODO: initialize for the commands array which we will have to make dynamic
    // initializeCmds(app);
    app->cmdCapacity = 2;
    app->cmds = (Command*)malloc(sizeof(Command) * app->cmdCapacity);

    // initializeFlags(app);
    app->flagsCapacity = 2;
    app->flags = (Flag*)malloc(sizeof(Flag) * app->flagsCapacity);

    return app;
}

// HELPER FUNCTION (flags)
bool isFlag(char* s) {
    if (strstr(s, "-") != NULL) {
        return true;
    }
    return false;
}

// APP
void changeDefaultAction(App* app, char* cmdName, void (*action)(Input* input)) {
    /* app->defaultAction = action; */
    app->cmds[0].name = cmdName;
    app->cmds[0].action = action;
    app->cmdSize += 1;
}

void addFlag(App* app, Flag* flag) {

}

void addCmd(App* app, Command* cmd) {

}

void parseApp(App* app) {
    // run through as many times as input has values
    // and compare them against the flags and the commands
    for(int i = 1; i < app->input->argCount; i++) {
        if(isFlag(app->input->userArgs[i])) {
            printf("The value is a flag: %s\n", app->input->userArgs[i]);
        }
        else
            printf("The value is a command or input: %s\n", app->input->userArgs[i]);
    }
}

void helpCmd(Input* input) {
    printf("Hello world from inside the default action (%s) \n", input->userArgs[1]);
}

int main(int argc, char** argv) {
    App* testApp = newApp(argc, argv);
    changeDefaultAction(testApp, "helpWOOH", helpCmd);

    printf("the app is called: %s\n", testApp->name);
    printf("the app cmd name is: %s\n", testApp->cmds[0].name);
    //printf("the value is a flag : %s\n", isFlag(testApp->input->userArgs[1]) ? "true" : "false");
    //testApp->defaultAction(testApp->input);
    testApp->cmds[0].action(testApp->input);
    parseApp(testApp);
}
