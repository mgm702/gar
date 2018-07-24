#include <stdlib.h>

/*typedef struct _App App;*/

typedef struct {
    const char* name;
    char* version;
} App;

#define NEWAPP(_name, ...)                \
    (App){                                \
        .name = _name,                    \
        .version = "0.0.1"                \
        __VA_ARGS__                       \
    };

App* initializeApp(char* c, char* v);
const char* getAppName(App*);
