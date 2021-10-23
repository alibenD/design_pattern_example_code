/**
  * @Copyright (C) 2019 All rights reserved.
  * @date: 2019
  * @file: example_adaptor.cc
  * @version: v0.0.1
  * @author: aliben.develop@gmail.com
  * @create_date: 2019-08-06 18:50:49
  * @last_modified_date: 2021-10-23 20:49:52
  * @brief: TODO
  * @details: TODO
  */

//INCLUDE
#include <design_pattern/adaptor.hh>

//CODE
int main()
{
  std::unique_ptr<IAdaptee> ptr_adaptee = std::make_unique<OldClass>();
  std::unique_ptr<ITarget> ptr_target = std::make_unique<Adapter>(std::move(ptr_adaptee));
  ptr_target->process();
}
