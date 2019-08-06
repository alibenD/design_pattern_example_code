#ifndef __PROXY_HH__
#define __PROXY_HH__
/**-----------------------------------------------
  * @Copyright (C) 2019 All rights reserved.
  * @date: 2019
  * @file: proxy.hh
  * @version: v0.0.1
  * @author: aliben.develop@gmail.com
  * @create_date: 2019-08-06 18:21:52
  * @last_modified_date: 2019-08-06 18:34:16
  * @brief: TODO
  * @details: TODO
  *-----------------------------------------------*/

// Header include

// Declaration
class ISubject
{
  public:
    virtual void process() = 0;
};

class SubjectProxy :  public ISubject
{
  public:
    virtual void process() override; // Indirectly access RealSubject
};

class ClientApp
{
  public:
    ClientApp();

  private:
    ISubject* ptr_subject_;
};
#endif // __PROXY_HH__
