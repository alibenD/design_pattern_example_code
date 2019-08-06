/**
  * @Copyright (C) 2019 All rights reserved.
  * @date: 2019
  * @file: example_adaptor.cc
  * @version: v0.0.1
  * @author: aliben.develop@gmail.com
  * @create_date: 2019-08-06 18:50:49
  * @last_modified_date: 2019-08-06 18:52:43
  * @brief: TODO
  * @details: TODO
  */

//INCLUDE
#include <design_pattern/adaptor.hh>

//CODE
int main()
{
  IAdaptee* ptr_adaptee = new OldClass();
  ITarget* ptr_target = new Adapter(ptr_adaptee);
  ptr_target->process();
}
