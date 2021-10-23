/**
  * @Copyright (C) 2019 All rights reserved.
  * @date: 2019
  * @file: state.cc
  * @version: v0.0.1
  * @author: aliben.develop@gmail.com
  * @create_date: 2019-08-06 21:32:48
  * @last_modified_date: 2021-10-23 21:29:59
  * @brief: TODO
  * @details: TODO
  */

//INCLUDE
#include <design_pattern/state.hh>
#include <iostream>

//CODE
std::shared_ptr<NetworkState> OpenState::ptr_instance_ = nullptr;
std::shared_ptr<NetworkState> CloseState::ptr_instance_ = nullptr;
std::shared_ptr<NetworkState> ConnectState::ptr_instance_ = nullptr;

std::shared_ptr<NetworkState> OpenState::getInstance()
{
  if(ptr_instance_ == nullptr)
  {
    ptr_instance_ = std::make_shared<OpenState>();
  }
  return ptr_instance_;
}

std::shared_ptr<NetworkState> CloseState::getInstance()
{
  if(ptr_instance_ == nullptr)
  {
    ptr_instance_ = std::make_shared<CloseState>();
  }
  return ptr_instance_;
}

std::shared_ptr<NetworkState> ConnectState::getInstance()
{
  if(ptr_instance_ == nullptr)
  {
    ptr_instance_ = std::make_shared<ConnectState>();
  }
  return ptr_instance_;
}

void OpenState::Operation1()
{
  std::cout << __func__ << ": OpenState" << std::endl;
  ptr_next_state_ = CloseState::getInstance();
}

void OpenState::Operation2()
{
  std::cout << __func__ << ": OpenState" << std::endl;
  ptr_next_state_ = ConnectState::getInstance();
}

void OpenState::Operation3()
{
  std::cout << __func__ << ": OpenState" << std::endl;
  ptr_next_state_ = OpenState::getInstance();
}


void ConnectState::Operation1()
{
  std::cout << __func__ << ": ConnectState" << std::endl;
  ptr_next_state_ = CloseState::getInstance();
}

void ConnectState::Operation2()
{
  std::cout << __func__ << ": ConnectState" << std::endl;
  ptr_next_state_ = ConnectState::getInstance();
}

void ConnectState::Operation3()
{
  std::cout << __func__ << ": ConnectState" << std::endl;
  ptr_next_state_ = OpenState::getInstance();
}


void CloseState::Operation1()
{
  std::cout << __func__ << ": CloseState" << std::endl;
  ptr_next_state_ = CloseState::getInstance();
}

void CloseState::Operation2()
{
  std::cout << __func__ << ": CloseState" << std::endl;
  ptr_next_state_ = ConnectState::getInstance();
}

void CloseState::Operation3()
{
  std::cout << __func__ << ": CloseState" << std::endl;
  ptr_next_state_ = OpenState::getInstance();
}
