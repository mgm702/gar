# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.11

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/local/Cellar/cmake/3.11.3/bin/cmake

# The command to remove a file.
RM = /usr/local/Cellar/cmake/3.11.3/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/mmichnal/code/github/development/ccli/cmake-testing

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/mmichnal/code/github/development/ccli/cmake-testing

# Include any dependencies generated for this target.
include CMakeFiles/hello.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/hello.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/hello.dir/flags.make

CMakeFiles/hello.dir/hi.c.o: CMakeFiles/hello.dir/flags.make
CMakeFiles/hello.dir/hi.c.o: hi.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/mmichnal/code/github/development/ccli/cmake-testing/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/hello.dir/hi.c.o"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/hello.dir/hi.c.o   -c /Users/mmichnal/code/github/development/ccli/cmake-testing/hi.c

CMakeFiles/hello.dir/hi.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/hello.dir/hi.c.i"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/mmichnal/code/github/development/ccli/cmake-testing/hi.c > CMakeFiles/hello.dir/hi.c.i

CMakeFiles/hello.dir/hi.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/hello.dir/hi.c.s"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/mmichnal/code/github/development/ccli/cmake-testing/hi.c -o CMakeFiles/hello.dir/hi.c.s

# Object files for target hello
hello_OBJECTS = \
"CMakeFiles/hello.dir/hi.c.o"

# External object files for target hello
hello_EXTERNAL_OBJECTS =

hello: CMakeFiles/hello.dir/hi.c.o
hello: CMakeFiles/hello.dir/build.make
hello: CMakeFiles/hello.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/mmichnal/code/github/development/ccli/cmake-testing/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable hello"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/hello.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/hello.dir/build: hello

.PHONY : CMakeFiles/hello.dir/build

CMakeFiles/hello.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/hello.dir/cmake_clean.cmake
.PHONY : CMakeFiles/hello.dir/clean

CMakeFiles/hello.dir/depend:
	cd /Users/mmichnal/code/github/development/ccli/cmake-testing && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/mmichnal/code/github/development/ccli/cmake-testing /Users/mmichnal/code/github/development/ccli/cmake-testing /Users/mmichnal/code/github/development/ccli/cmake-testing /Users/mmichnal/code/github/development/ccli/cmake-testing /Users/mmichnal/code/github/development/ccli/cmake-testing/CMakeFiles/hello.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/hello.dir/depend

