#include "struct.h"

App* initializeApp(char* c, char* v) {
    App* a = (App*)malloc(sizeof(App));
    a->name = c;
    a->version = v;
    return a;
}

const char* getAppName(App* self) {
    return self->name;
}
