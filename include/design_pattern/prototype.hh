#ifndef __PROTOTYPE_HH__
#define __PROTOTYPE_HH__
/**-----------------------------------------------
  * @Copyright (C) 2019 All rights reserved.
  * @date: 2019
  * @file: prototype.hh
  * @version: v0.0.1
  * @author: aliben.develop@gmail.com
  * @create_date: 2019-08-06 13:47:18
  * @last_modified_date: 2019-08-06 14:13:22
  * @brief: TODO
  * @details: TODO
  *-----------------------------------------------*/

// Header include

// Declaration
/**
 * In prototype, copy constructor should be designed precise
 *
 */
class ISplitterPrototype
{
  public:
    virtual void split() = 0;
    virtual ISplitterPrototype* Clone() = 0;
    virtual ~ISplitterPrototype() = default;
};

class BinarySplitterPrototype : public ISplitterPrototype
{
  public:
    // Need a good copy constructor
    virtual ISplitterPrototype* Clone() override;
    virtual void split() override;
    virtual ~BinarySplitterPrototype(){};
};

class TxtSplitterPrototype : public ISplitterPrototype
{
  public:
    virtual ISplitterPrototype* Clone() override;
    virtual void split() override;
    virtual ~TxtSplitterPrototype() = default;
};

class VideoSplitterPrototype : public ISplitterPrototype
{
  public:
    virtual ISplitterPrototype* Clone() override;
    virtual void split() override;
    virtual ~VideoSplitterPrototype() = default;
};

//==================================

class Exampler
{
  public:
    Exampler(ISplitterPrototype* prototype){this->ptr_prototype_ = prototype;};
    void Run();

  private:
    ISplitterPrototype* ptr_prototype_;
};

#endif // __PROTOTYPE_HH__
