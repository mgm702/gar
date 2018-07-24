cmake_minimum_required (VERSION 3.0.2)
project (ccli)

option(CCLI_BUILD_TESTS "build tests alongside the project" OFF)
option(CCLI_BUILD_EXAMPLES "build examples alongside the project" OFF)
option(CCLI_INSTALL "add ccli as install target (recommended)" ON)

# Set more options here for checking the c compiler and setting the gcc optimizations
include_directories (${CMAKE_CURRENT_SOURCE_DIR}/include)
include_directories (src)

add_subdirectory (src)
