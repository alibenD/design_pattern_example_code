/**
  * @Copyright (C) 2019 All rights reserved.
  * @date: 2019
  * @file: example_state.cc
  * @version: v0.0.1
  * @author: aliben.develop@gmail.com
  * @create_date: 2019-08-06 21:56:38
  * @last_modified_date: 2021-10-23 21:31:05
  * @brief: TODO
  * @details: TODO
  */

//INCLUDE
#include <design_pattern/state.hh>

//CODE
int main()
{
  std::shared_ptr<NetworkState> ptr_network_state = OpenState::getInstance();
  NetworkProcessor network_processor(ptr_network_state);
  network_processor.Operation1();
  network_processor.Operation2();
  network_processor.Operation3();
  network_processor.Operation2();
  network_processor.Operation1();
  return 0;
}
