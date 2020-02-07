#---Automatically Generated from template 'CMakeList.txt' wrote by @aliben---
#
# @Copyright (C) 2019 All rights reserved.
# @filename: design_pattern
# @author: aliben.develop@gmail.com
# @create_date: 2019-08-04 19:25:51
# @last_modified_date: 2020-02-07 20:42:28
# @description: TODO
#---****************************************************************---

# Cmake version required
cmake_minimum_required(VERSION 3.10)

#project name
project(design_pattern)
#SET( CMAKE_INSTALL_PREFIX "$ENV{HOME}/install_deb")

# CMake Build System Default Setup
  MESSAGE( STATUS "Project:  design_pattern" )
  # Build type default
  IF(NOT CMAKE_BUILD_TYPE)
    SET(CMAKE_BUILD_TYPE RELEASE)
  ENDIF()
  IF(CMAKE_BUILD_TYPE STREQUAL "RELEASE")
    ADD_DEFINITIONS(-DNDEBUG)
  ENDIF()

  OPTION(BUILD_GTESTS "Build google test cases" OFF)

  SET(CMAKE_VERBOSE_MAKEFILE OFF)
  SET(CMAKE_CXX_STANDARD 11)
  SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Werror -std=c++14 -Wextra -Wno-deprecated-register -Wno-deprecated-declarations -Wno-unused-private-field -Wno-unused-parameter -Wno-unused-variable")
  #SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Werror -std=c++14 -Wextra -Wno-deprecated-register -Wno-deprecated-declarations -Qunused-arguments -fcolor-diagnostics -ftemplate-backtrace-limit=0")
  # Cross-platform check
  IF("${CMAKE_CXX_COMPILER_ID}" STREQUAL "Clang")
    SET(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS} -O0 -g")
    SET(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS} -O3 -march=native")
  ELSEIF(CMAKE_HOST_APPLE)
    SET(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS} -O3 -march=native")
    SET(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS} -O0 -g")
  ELSEIF("${CMAKE_CXX_COMPILER_ID}" STREQUAL "GNU")
    SET(CMAKE_CXX_FLAGS_DEBUG "-O0 -g")
    SET(CMAKE_CXX_FLAGS_RELEASE "-O3")
    SET(CMAKE_EXE_LINKER_FLAGS_COVERAGE "${CMAKE_EXE_LINKER_FLAGS_DEBUG}" --coverage)
    SET(CMAKE_SHARED_LINKER_FLAGS_COVERAGE "${CMAKE_SHARED_LINKER_FLAGS_DEBUG}" --coverage)
  ELSEIF(CMAKE_CXX_COMPILER_ID MATCHES "^MSVC$")
    ADD_DEFINITION("-D _USE_MATH_DEFINES /bigobj /wd4305 /wd4244 /MP")
    ADD_DEFINITION("-D PROJECT_CORE_EXPORTS")
  ENDIF()

  SET(CMAKE_MACOSX_RPATH 1)
  set(CMAKE_SKIP_BUILD_RPATH FALSE)                 # Compile with RPATH
  set(CMAKE_BUILD_WITH_INSTALL_RPATH FALSE)
  SET(CMAKE_INSTALL_RPATH "${CMAKE_INSTALL_PREFIX}/lib")
  SET(CMAKE_INSTALL_RPATH_USE_LINK_PATH TRUE)
  SET(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)
  SET(LIBRARY_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/lib)
  OPTION(BUILD_SHARED_LIBS "Build shared libraries" ON)
  SET(${PROJECT_NAME}_LIB_TYPE STATIC)
  IF(BUILD_SHARED_LIBS)
    SET(BUILD_SHARED_LIBS SHARED)
  ENDIF()

# Add extra Find module
  LIST(APPEND CMAKE_MODULE_PATH ${PROJECT_SOURCE_DIR}/cmake_modules)
# Find *Config.cmake
  # Example: find_package(OpenCV REQUIRED)
  IF(BUILD_GTESTS)
    ENABLE_TESTING()
    find_package(GTEST REQUIRED)
    find_package(Threads REQUIRED)
    INCLUDE_DIRECTORIES(${GTEST_INCLUDE_DIRS})
    SET(TEST_LIBS
    ${GTEST_BOTH_LIBRARIES}
    ${CMAKE_THREAD_LIBS_INIT})
    ADD_SUBDIRECTORY(test)
  ENDIF()

# Set&Add INCLUDE PATH
  # Example: SET ( VPATH_NAME PATH )
  #          INCLUDE_DIRECTORIES(${VPATH_NAME})
  INCLUDE_DIRECTORIES(${PROJECT_SOURCE_DIR}/include)
  INCLUDE_DIRECTORIES(${PROJECT_SOURCE_DIR}/build/include)
  INCLUDE_DIRECTORIES(${CMAKE_INSTALL_PREFIX}/include)

# Set&Add LIB PATH/LINKING_DIRECTORIES
  # Example: LINK_DIRECTORIES(${CMAKE_INSTALL_PREFIX}/lib)
  LINK_DIRECTORIES(${CMAKE_INSTALL_PREFIX}/lib)
  LINK_DIRECTORIES(${PROJECT_SOURCE_DIR}/lib)

  SET( THIRD_PARTY_LIBS
    ${THIRD_PARTY_LIBS}
  )

set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

# Set Subdir(src)
  INSTALL(DIRECTORY include/
    DESTINATION ${CMAKE_INSTALL_PREFIX}/include
    FILES_MATCHING PATTERN "*.hh"
    )

  ADD_SUBDIRECTORY(src)
  ADD_SUBDIRECTORY(examples)

# EXECUTABLE
  # Example: ADD_EXECUTABLE( EXEC_NAME SRC_FILE_NAME_LIST )

# TARGET LINK
  # Example: TARGET_LINK_LIBRARIES( EXEC_NAME LIBPATH ) ...LIB_PATH e.g. ${OPENCV_LIBS}
