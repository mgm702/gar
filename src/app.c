/*
 * =====================================================================================
 *
 *       Filename:  app.c
 *
 *    Description:  this is the implementation of the app class(struct) and all of the
 *                  related functionality necessary for the API interface
 *
 *        Version:  1.0
 *        Created:  07/10/2018 18:15:18
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Matthew Michnal
 *
 * =====================================================================================
 */
#include <ccli/app.h>
#include "vector.h"

App* initializeApp(char* c, char* v) {
    App* a = (App*)malloc(sizeof(App));
    a->name = c;
    a->version = v;
    return a;
}

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

// Getters (name, version, usage)
char* getAppVersion(App* self) {
    return self->version;
}

const char* getAppName(App* self) {
    return self->name;
}

char* getAppUsage(App* self) {
    return self->usage;
}

// Setters (version, usage)
void setAppVersion(App* self, char* v) {
    self->version = v;
}

void setAppUsage(App* self, char* u) {
    self->usage = u;
}
