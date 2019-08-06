/**
  * @Copyright (C) 2019 All rights reserved.
  * @date: 2019
  * @file: example_singleton.cc
  * @version: v0.0.1
  * @author: aliben.develop@gmail.com
  * @create_date: 2019-08-06 16:13:49
  * @last_modified_date: 2019-08-06 16:50:12
  * @brief: TODO
  * @details: TODO
  */

//INCLUDE
#include <design_pattern/singleton.hh>

//CODE
int main()
{
  Singleton* first_instance = Singleton::getInstance();
  Singleton* second_instance = Singleton::getInstance();
  return 0;
}
