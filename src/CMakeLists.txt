#---Automatically Generated from template 'CMakeList.txt' wrote by @aliben---
#
# @Copyright (C) 2019 All rights reserved.
# @filename: design_pattern
# @author: aliben.develop@gmail.com
# @create_date: 2019-08-04 19:25:51
# @last_modified_date: NO_LAST_MODIFIED_DATE
# @description: TODO
#---****************************************************************---

FILE(GLOB_RECURSE HEADERS
  ../include/design_pattern/*/*.h*
  ../include/design_pattern/*.h*
  )
FILE(GLOB_RECURSE SOURCES *.cc)

ADD_LIBRARY(design_pattern SHARED ${HEADERS} ${SOURCES})
TARGET_LINK_LIBRARIES(design_pattern ${THIRD_PARTY_LIBS})
