cmake_minimum_required(VERSION 2.8.9)
project (hello)
add_executable(hello hi.c)

#cmake_minimum_required (VERSION 3.0.2)
#project (ant)
#include(CheckCCompilerFlag)

#check_c_compiler_flag(-Wno-invalid-offsetof HAS_NO_INVALID_OFFSETOF)
#if (HAS_NO_INVALID_OFFSETOF)
#  set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -Wno-invalid-offsetof")
#endif()

#option(ANT_BUILD_TESTS "build tests alongside the project" OFF)
#option(ANT_BUILD_EXAMPLES "build examples alongside the project" OFF)
#option(ANT_INSTALL "add ant as install target (recommended)" ON)

#include_directories (${CMAKE_CURRENT_SOURCE_DIR}/include)
#add_subdirectory (src)
#include_directories (src)
#
#if (ANT_BUILD_EXAMPLES)
#  add_subdirectory (examples)
#endif()
