/**
  * @Copyright (C) 2019 All rights reserved.
  * @date: 2019
  * @file: template_method.cc
  * @version: v0.0.1
  * @author: aliben.develop@gmail.com
  * @create_date: 2019-08-05 16:36:30
  * @last_modified_date: 2019-08-05 16:49:05
  * @brief: TODO
  * @details: TODO
  */

//INCLUDE
#include <design_pattern/template_method.hh>
#include <iostream>

//CODE
void Library::Step1()
{
  std::cout << "Step1: Library" << std::endl;
}

void Library::Step3()
{
  std::cout << "Step3: Library" << std::endl;
}

void Library::Step5()
{
  std::cout << "Step5: Library" << std::endl;
}

void Library::Run()
{
  Step1();
  Step2();
  Step3();
  Step4();
  Step5();
}

void Application::Step2()
{
  std::cout << "Step2: Application" << std::endl;
}

void Application::Step4()
{
  std::cout << "Step4: Application" << std::endl;
}
