#---Automatically Generated from template 'CMakeList.txt' wrote by @aliben---
#
# @Copyright (C) 2019 All rights reserved.
# @filename: design_pattern
# @author: aliben.develop@gmail.com
# @create_date: 2019-08-04 19:25:51
# @last_modified_date: 2020-02-07 16:30:26
# @description: TODO
#---****************************************************************---


FILE(GLOB_RECURSE EXAMPLES *.cc)
FOREACH(EXAMPLE ${EXAMPLES})
  GET_FILENAME_COMPONENT(MY_TARGET "${EXAMPLE}" NAME_WE)
  ADD_EXECUTABLE(${MY_TARGET} ${EXAMPLE})
  TARGET_LINK_LIBRARIES(${MY_TARGET}
          design_pattern
          ${THIRD_PARTY_LIBS})
        INSTALL(TARGETS ${MY_TARGET} RUNTIME DESTINATION ${CMAKE_INSTALL_PREFIX}/bin)
ENDFOREACH()
