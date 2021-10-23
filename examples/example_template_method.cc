/**
  * @Copyright (C) 2019 All rights reserved.
  * @date: 2019
  * @file: example_template_method.cc
  * @version: v0.0.1
  * @author: aliben.develop@gmail.com
  * @create_date: 2019-08-05 16:35:11
  * @last_modified_date: 2021-10-23 21:26:17
  * @brief: TODO
  * @details: TODO
  */

//INCLUDE
#include <design_pattern/template_method.hh>

//CODE
int main()
{
  std::shared_ptr<Library> ptr_app = std::make_shared<Application>();
  ptr_app->Run();
  return 0;
}
