#!/bin/bash

#---Automatically Generated from template 'bash' wrote by @aliben---
# @Copyright (C) 2019 All rights reserved.
# @file: build.sh
# @author: aliben.develop@gmail.com
# @created_date: 2019-08-04 19:25:51
# @last_modified_date: 2020-02-06 14:52:20
# @brief: TODO
# @details: TODO
#---***********************************************---


#---Variables
CREATED_TIME=`date '+%Y-%m-%d %H:%M:%S'`
CREATED_YEAR=`date '+%Y'`

#---Shell Command
set -x
mkdir -p build
cd build
cmake ..
make -j7
