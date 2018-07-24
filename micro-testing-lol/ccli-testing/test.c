#include <stdio.h>
#include <ccli/app.h>

int main(int argc, char** argv) {
    App* newApp = &NEWAPP(argv[0]);
    printf("the version is %s\n", getAppVersion(newApp));
    setAppUsage(newApp, "I hope this works!!!!");
    printf("the usage is %s\n", getAppUsage(newApp));
    printf("and finally the name of the app is %s\n", getAppName(newApp));
}
