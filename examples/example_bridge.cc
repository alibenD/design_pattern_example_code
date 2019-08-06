/**
  * @Copyright (C) 2019 All rights reserved.
  * @date: 2019
  * @file: example_bridge.cc
  * @version: v0.0.1
  * @author: aliben.develop@gmail.com
  * @create_date: 2019-08-06 09:28:51
  * @last_modified_date: 2019-08-06 09:33:38
  * @brief: TODO
  * @details: TODO
  */

//INCLUDE
#include <design_pattern/bridge.hh>
#include <iostream>

//CODE
int main()
{
  MessagerImpl* mobile_impl = new MobileMessagerImpl();
  MessagerImpl* pc_impl = new PCMessagerImpl();

  Messager* mobile_lite = new MessagerLite(mobile_impl);
  Messager* pc_lite = new MessagerLite(pc_impl);

  Messager* mobile_perfect = new MessagerPerfect(mobile_impl);
  Messager* pc_perfect = new MessagerPerfect(pc_impl);

  mobile_lite->Impl();
  std::cout << "===============" << std::endl;
  mobile_perfect->Impl();
  std::cout << "===============" << std::endl;
  pc_lite->Impl();
  std::cout << "===============" << std::endl;
  pc_perfect->Impl();

  return 0;
}
