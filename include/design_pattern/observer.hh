#ifndef __OBSERVER_HH__
#define __OBSERVER_HH__
/**-----------------------------------------------
  * @Copyright (C) 2019 All rights reserved.
  * @date: 2019
  * @file: observer.hh
  * @version: v0.0.1
  * @author: aliben.develop@gmail.com
  * @create_date: 2019-08-05 18:13:12
  * @last_modified_date: 2021-10-23 21:09:14
  * @brief: TODO
  * @details: TODO
  *-----------------------------------------------*/

// Header include
#include <list>
#include <memory>

// Declaration

class ObserverBase;

class Subject
{
  public:
    Subject() = default;
    void addObserver(std::shared_ptr<ObserverBase> new_observer){observer_list.push_back(new_observer);};
    //void removeObserver(std::shared_ptr<ObserverBase> remove_obs){observer_list.erase(remove_obs);};
    void run(int num);
    void Notify(int num);

  private:
    std::list<std::shared_ptr<ObserverBase>> observer_list;
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
