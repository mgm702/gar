# goals of this project
- create a framework for C developers to create CLI programs with
- learn a fuck ton of C code
- provide a executable to scaffold (create basic example proj) for user. Similar to Rails new
- implement the following basic features
        - use CMake to build out and install both a (binary executable and a includable library)
        - should have a help command attached
                - should print a bunch of basic info for the user
        - should attach the --version flag as well
        - allow user to add their own command to the cli
        - allow user to add their own flag to the cli

## setup the following data structures:
- App
- Commands
- Flags
- Input

setup the directory structure as follows
- unity (decided this is the test framework I'll use)
- tests
- src (all the .c files and private .h files[vector.h, utils.h, etc])
- include (all the functions/data structs you want to expose to the world)

things to do for project:
- get basic file structure setup
- get testing w/ unity setup
- have cmake actually work and build a shared-library
- implement all of the above and test against greenfield project
