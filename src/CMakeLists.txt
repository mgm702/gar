file(GLOB SOURCES "*.c")

#file(GLOB INCLUDE_FILES ${PROJECT_SOURCE_DIR}/include/ccli/*h)

set(SOURCE_FILES
    ${SOURCES}
    #${INCLUDE_FILES}
)

add_library(ccli SHARED ${SOURCE_FILES})
#add_library(ccli STATIC ${SOURCE_FILES})

#set_target_properties(ccli PROPERTIES
#    OUTPUT_NAME "ccli"
#    VERSION ${GENERIC_LIB_VERSION}
#    SOVERSION ${GENERIC_LIB_VERSION}
#)

target_include_directories(ccli PUBLIC
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
)

set(CMAKE_INSTALL_NAME_DIR "${CMAKE_INSTALL_PREFIX}/lib")

# Installation paths
#
set(BIN_INSTALL_DIR bin CACHE PATH "Where to install binaries to.")
set(LIB_INSTALL_DIR lib CACHE PATH "Where to install libraries to.")
set(INCLUDE_INSTALL_DIR include CACHE PATH "Where to install headers to.")

target_link_libraries(ccli)

if (CCLI_INSTALL)
    install(TARGETS ccli
        ARCHIVE DESTINATION ${LIB_INSTALL_DIR}
        LIBRARY DESTINATION ${LIB_INSTALL_DIR}
        RUNTIME DESTINATION ${BIN_INSTALL_DIR}
    )

    install(DIRECTORY "${PROJECT_SOURCE_DIR}/include/ccli" DESTINATION ${INCLUDE_INSTALL_DIR})
endif()
