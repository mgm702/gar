/*
 * =====================================================================================
 *
 *       Filename:  app.h
 *
 *    Description:  Header file for the app API interfaces. This file also defines the
 *                  App structure which is exposed to the user of the library.
 *
 *        Version:  1.0
 *        Created:  07/10/2018 18:21:53
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Matthew Michnal
 *   Organization:  
 *
 * =====================================================================================
 */

#include <string.h>

//typedef struct _App App;

typedef struct {
    const char* name;
    char* version;
    char* usage;
    //char* helpName;
    //char* description;
    //Command** commands;
    //Input* user_input;
} App;

#define NEWAPP(_name, ...)                \
    (App){                                \
        .name = _name,                    \
        .version = "0.0.1"                \
        __VA_ARGS__                       \
    };

App* initializeApp(char* c, char* v);
App* newApp(char** argv);

void setAppVersion(App*, char*);
void setAppUsage(App*, char*);

const char* getAppName(App*);
char* getAppVersion(App*);
char* getAppUsage(App*);
