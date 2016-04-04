cmake_minimum_required (VERSION 2.6)
project (static-tests)
set (SRC_DIR ${${PROJECT_NAME}_SOURCE_DIR})
set (CMAKE_RUNTIME_OUTPUT_DIRECTORY ${SRC_DIR}/target)
set (LIBRARY_OUTPUT_PATH ${SRC_DIR}/target)

if (NOT CMAKE_CONFIGURATION_TYPES AND NOT CMAKE_BUILD_TYPE)
  set (CMAKE_BUILD_TYPE Release)
endif ()

set (CMAKE_CXX_FLAGS -std=c++0x)
set (CMAKE_CXX_FLAGS_DEBUG " -g3 -O0 -DDEBUG -fno-pretty-templates")
set (CMAKE_CXX_FLAGS_RELEASE " -O3 -DNDEBUG")

add_subdirectory (test)

