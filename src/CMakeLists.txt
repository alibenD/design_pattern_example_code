#---Automatically Generated from template 'CMakeList.txt' wrote by @aliben---
#
# @Copyright (C) 2019 All rights reserved.
# @filename: design_pattern
# @author: aliben.develop@gmail.com
# @create_date: 2019-08-04 19:25:51
# @last_modified_date: 2020-02-07 18:38:41
# @description: TODO
#---****************************************************************---

FILE(GLOB_RECURSE HEADERS
  ../include/design_pattern/*/*.h*
  ../include/design_pattern/*.h*
  )
FILE(GLOB_RECURSE SOURCES *.cc)

ADD_LIBRARY(design_pattern SHARED ${HEADERS} ${SOURCES})
ADD_LIBRARY(design_pattern_static STATIC ${HEADERS} ${SOURCES})

SET_TARGET_PROPERTIES(design_pattern_static PROPERTIES OUTPUT_NAME "design_pattern")

#SET_TARGET_PROPERTIES(design_pattern_static PROPERTIES CLEAN_DIRECT_OUTPUT 1)
#SET_TARGET_PROPERTIES(design_pattern PROPERTIES CLEAN_DIRECT_OUTPUT 1)

SET_TARGET_PROPERTIES(design_pattern PROPERTIES VERSION 1.0 SOVERSION 1)

TARGET_LINK_LIBRARIES(design_pattern ${THIRD_PARTY_LIBS})

INSTALL(TARGETS design_pattern design_pattern_static
  LIBRARY DESTINATION ${CMAKE_INSTALL_PREFIX}/lib
  ARCHIVE DESTINATION ${CMAKE_INSTALL_PREFIX}/lib
  )
