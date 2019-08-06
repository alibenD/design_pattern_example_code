/**
  * @Copyright (C) 2019 All rights reserved.
  * @date: 2019
  * @file: singleton.cc
  * @version: v0.0.1
  * @author: aliben.develop@gmail.com
  * @create_date: 2019-08-06 15:55:43
  * @last_modified_date: 2019-08-06 16:44:51
  * @brief: TODO
  * @details: TODO
  */

//INCLUDE
#include <design_pattern/singleton.hh>
#include <iostream>

//CODE
std::atomic<Singleton*> Singleton::ptr_instance_;
std::mutex Singleton::mutex_;

// Non-ThreadSafe
//Singleton* Singleton::getInstance()
//{
//  if(ptr_instance_ == nullptr)
//  {
//    ptr_instance_ = new Singleton();
//  }
//  return ptr_instance_;
//}

// ThreadSafe-ASS_Safe
Singleton* Singleton::getInstance()
{
  Singleton* tmp = ptr_instance_.load(std::memory_order_relaxed);
  std::atomic_thread_fence(std::memory_order_acquire);
  if(tmp == nullptr)
  {
    std::lock_guard<std::mutex> lock(mutex_);
    tmp = ptr_instance_.load(std::memory_order_relaxed);
    if(tmp == nullptr)
    {
      tmp = new Singleton();
      std::atomic_thread_fence(std::memory_order_release);
      ptr_instance_.store(tmp, std::memory_order_relaxed);
      std::cout << "First Instance" << std::endl;
      return tmp;
    }
  }
  std::cout << "Already Having an Instance" << std::endl;
  return tmp;
}
