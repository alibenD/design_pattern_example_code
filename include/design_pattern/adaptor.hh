#ifndef __ADAPTOR_HH__
#define __ADAPTOR_HH__
/**-----------------------------------------------
  * @Copyright (C) 2019 All rights reserved.
  * @date: 2019
  * @file: adaptor.hh
  * @version: v0.0.1
  * @author: aliben.develop@gmail.com
  * @create_date: 2019-08-06 18:37:35
  * @last_modified_date: 2019-08-06 18:56:53
  * @brief: TODO
  * @details: TODO
  *-----------------------------------------------*/

// Header include

// Declaration

class ITarget // New protocol
{
  public:
    virtual void process() = 0;
    virtual ~ITarget() = default;

};

class IAdaptee // Old protocol
{
  public:
    virtual void foo(int data) = 0;
    virtual int bar() = 0;
    virtual ~IAdaptee() = default;
};

class OldClass : public IAdaptee
{
  public:
    virtual void foo(int data) override;
    virtual int bar() override;
    virtual ~OldClass() = default;
};

class Adapter : public ITarget
{
  public:
    Adapter(IAdaptee* ptr_adaptee){ this->ptr_adaptee_ = ptr_adaptee; }
    virtual void process() override;
    virtual ~Adapter() = default;

  private:
    IAdaptee* ptr_adaptee_;
};
#endif // __ADAPTOR_HH__
