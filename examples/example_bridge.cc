/**
  * @Copyright (C) 2019 All rights reserved.
  * @date: 2019
  * @file: example_bridge.cc
  * @version: v0.0.1
  * @author: aliben.develop@gmail.com
  * @create_date: 2019-08-06 09:28:51
  * @last_modified_date: 2021-10-23 20:54:12
  * @brief: TODO
  * @details: TODO
  */

//INCLUDE
#include <design_pattern/bridge.hh>
#include <iostream>

//CODE
int main()
{
  std::unique_ptr<MessagerImpl> mobile_impl1 = std::make_unique<MobileMessagerImpl>();
  std::unique_ptr<MessagerImpl> mobile_impl2 = std::make_unique<MobileMessagerImpl>();
  std::unique_ptr<MessagerImpl> pc_impl1 = std::make_unique<PCMessagerImpl>();
  std::unique_ptr<MessagerImpl> pc_impl2 = std::make_unique<PCMessagerImpl>();

  std::unique_ptr<Messager> mobile_lite = std::make_unique<MessagerLite>(std::move(mobile_impl1));
  std::unique_ptr<Messager> pc_lite = std::make_unique<MessagerLite>(std::move(pc_impl1));

  std::unique_ptr<Messager> mobile_perfect = std::make_unique<MessagerPerfect>(std::move(mobile_impl2));
  std::unique_ptr<Messager> pc_perfect = std::make_unique<MessagerPerfect>(std::move(pc_impl2));

  mobile_lite->Impl();
  std::cout << "===============" << std::endl;
  mobile_perfect->Impl();
  std::cout << "===============" << std::endl;
  pc_lite->Impl();
  std::cout << "===============" << std::endl;
  pc_perfect->Impl();

  return 0;
}
