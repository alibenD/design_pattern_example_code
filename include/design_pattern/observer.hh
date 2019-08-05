#ifndef __OBSERVER_HH__
#define __OBSERVER_HH__
/**-----------------------------------------------
  * @Copyright (C) 2019 All rights reserved.
  * @date: 2019
  * @file: observer.hh
  * @version: v0.0.1
  * @author: aliben.develop@gmail.com
  * @create_date: 2019-08-05 18:13:12
  * @last_modified_date: 2019-08-05 22:09:38
  * @brief: TODO
  * @details: TODO
  *-----------------------------------------------*/

// Header include
#include <list>

// Declaration

class ObserverBase;

class Subject
{
  public:
    Subject() = default;
    void addObserver(ObserverBase* new_observer){observer_list.push_back(new_observer);};
    //void removeObserver(ObserverBase* remove_obs){observer_list.erase(remove_obs);};
    void run(int num);
    void Notify(int num);

  private:
    std::list<ObserverBase*> observer_list;
};

class ObserverBase
{
  public:
    virtual void Update(int num) = 0;
    virtual ~ObserverBase() = default;
};

class ObserverA : public ObserverBase
{
  public:
    virtual void Update(int num) override;
    virtual ~ObserverA() = default;
};

class ObserverB : public ObserverBase
{
  public:
    virtual void Update(int num) override;
    virtual ~ObserverB() = default;
};

#endif // __OBSERVER_HH__
