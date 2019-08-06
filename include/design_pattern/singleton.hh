#ifndef __SINGLETON_HH__
#define __SINGLETON_HH__
/**-----------------------------------------------
  * @Copyright (C) 2019 All rights reserved.
  * @date: 2019
  * @file: singleton.hh
  * @version: v0.0.1
  * @author: aliben.develop@gmail.com
  * @create_date: 2019-08-06 15:55:43
  * @last_modified_date: 2019-08-06 16:42:22
  * @brief: TODO
  * @details: TODO
  *-----------------------------------------------*/

// Header include
#include <mutex>
#include <atomic>

// Declaration
class Singleton
{
  public:
    static Singleton* getInstance();
  private:
    Singleton() = default;
    Singleton(const Singleton& other){};
    static std::atomic<Singleton*> ptr_instance_;
    static std::mutex mutex_;
};

#endif // __SINGLETON_HH__
