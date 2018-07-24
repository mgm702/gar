#include <stdio.h>
#include "struct.h"

int main(int argc, char** argv) {
    App* a = initializeApp("testing","10000");
    App* b = &NEWAPP("real");
    printf("%s is the name\n", getAppName(a));
    printf("%s is the version\n", b->version);
    printf("%s is the version\n", a->version);
}
