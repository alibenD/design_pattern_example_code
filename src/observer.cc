/**
  * @Copyright (C) 2019 All rights reserved.
  * @date: 2019
  * @file: observer.cc
  * @version: v0.0.1
  * @author: aliben.develop@gmail.com
  * @create_date: 2019-08-05 18:13:12
  * @last_modified_date: 2019-08-05 22:06:05
  * @brief: TODO
  * @details: TODO
  */

//INCLUDE
#include <design_pattern/observer.hh>
#include <iostream>

//CODE
void ObserverA::Update(int num)
{
  std::cout << "Update-ObserverA: " << num << std::endl;
}

void ObserverB::Update(int num)
{
  std::cout << "Update-ObserverB: " << num << std::endl;
}

void Subject::run(int num)
{
  std::cout << "Running..." << std::endl;
  std::cout << "Notifying observers" << std::endl;
  Notify(num);
  std::cout << "Notified" << std::endl;
}

void Subject::Notify(int num)
{
  for(auto& ptr_observer: observer_list)
  {
    ptr_observer->Update(num);
  }
}
