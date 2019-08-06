/**
  * @Copyright (C) 2019 All rights reserved.
  * @date: 2019
  * @file: adaptor.cc
  * @version: v0.0.1
  * @author: aliben.develop@gmail.com
  * @create_date: 2019-08-06 18:37:35
  * @last_modified_date: 2019-08-06 18:56:31
  * @brief: TODO
  * @details: TODO
  */

//INCLUDE
#include <design_pattern/adaptor.hh>
#include <iostream>

//CODE
void OldClass::foo(int data)
{
  std::cout << __func__ << ": Oldclass -- data: " << data << std::endl;
}

int OldClass::bar()
{
  int data = 10;
  std::cout << __func__ << ": Oldclass -- data: " << data << std::endl;
  return data;
}

void Adapter::process()
{
  std::cout << __func__ << ": new protocol to call ld protocol" << std::endl;
  int data = ptr_adaptee_->bar();
  ptr_adaptee_->foo(data);
}
