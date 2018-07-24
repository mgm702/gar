#include "app.h"

struct _cliApp{
    char* name;
    char* usage;
    char* helpName;
    char* version;
    char* description;

    // maybe put these as the hidden struct so user can't edit easily
    Command* cmds;
    Input* input;
};

// HELPER FUNCTION (misc)??
char* _strip_chars(const char* string, const char* chars)
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

void _initializeCmdsArray(Commands* cmds, int capacity) {
    assert(capacity > 0);
    assert(cmds->entry != 0);

    cmds->entry = (Command*) malloc(sizeof(Command) * capacity);
    assert(cmds->entry != 0);

    cmds->size = 0;
    cmds->capacity = capacity;
}

App* newApp(char** argv) {
    char *appName = _strip_chars(argv[0], "./");

    App* app = (App*)malloc(sizeof(App));
    assert(app != 0);
    app->name = appName;
    app->helpName = appName;
    app->usage = "";
    app->version = "0.0.0";
    app->description = "";

    _initializeCmdsArray(app->cmds, 2);

    // TODO: setup the Initial input value for the app

    return app;
}

void _resizeCmdsArrayCapacity(App* app, int newCap) {
    struct Commands newCommandsArray;

    _initializeCmdsArray(&newCommandsArray, newCap);

    for(int i = 0; i < app->cmds->capacity; i++) {
        newCommandsArray[i] = app->cmds->entry[i];
        newCommandsArray->size++;
    }

    _freeCmdsArray(app->cmds);
    app->cmds = newCommandsArray;
}

void _freeCmdsArray(Commands* cmds) {

  if(cmds->entry != 0)
  {
    free(cmds->entry);
    cmds->entry = 0;
  }
  cmds->size = 0;
  cmds->capacity = 0;
  free(cmds);
  cmds = 0;
}

void addCmd(App* app, Command* cmd) {
    // see if commands array needs to be reinitialized
    if(app->cmdSize >= app->cmdCapacity) {
      int newCapacity = 2 * app->cmdCapacity;
      _resizeCmdArrayCapacity(app, newCapacity);
    }

    // set the last array command value to the new command added
    app->cmds->entry[app->cmds->size] = cmd;
    app->cmds->size += 1;
}

/// HELPPPPP BELOW

//      void _dynArrSetCapacity(DynArr *v, int newCap)
//      {
//        struct DynArr newArray;
//        // initialize newArray struct with new capicity
//        initDynArr(&newArray, newCap);
//
//        // copy the old values from DynArr(v) to new DynArr(newArray)
//        for(int i = 0; i < v->capacity; i++) {
//          // using structure syntax and pointer struct syntax
//          newArray.data[i] = v->data[i];
//          newArray.size++;
//        }
//
//        // free old dynamic array pointer and reuse that pointer to now point to new structure;
//        freeDynArr(v);
//        *v = newArray;
//      }
//
//      void addDynArr(DynArr *v, TYPE val)
//      {
//        // check to see if we need to resize the underlying data structure
//        if(sizeDynArr(v) >= v->capacity) {
//          int newCapacity = 2 * v->capacity;
//          _dynArrSetCapacity(v, newCapacity);
//        }
//
//        // set the data array value in the struct to the val passed into the function
//        v->data[v->size] = val;
//        (v->size)++;
//      }
//
//      void initDynArr(DynArr *v, int capacity)
//      {
//        assert(capacity > 0);
//        assert(v!= 0);
//        v->data = (TYPE *) malloc(sizeof(TYPE) * capacity);
//        assert(v->data != 0);
//        v->size = 0;
//        v->capacity = capacity;
//      }
