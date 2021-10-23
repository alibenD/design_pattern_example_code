/**
  * @Copyright (C) 2019 All rights reserved.
  * @date: 2019
  * @file: example_observer.cc
  * @version: v0.0.1
  * @author: aliben.develop@gmail.com
  * @create_date: 2019-08-05 18:12:21
  * @last_modified_date: 2021-10-23 21:09:37
  * @brief: TODO
  * @details: TODO
  */

//INCLUDE
#include <design_pattern/observer.hh>
#include <iostream>

//CODE
int main()
{
  Subject subj;
  std::shared_ptr<ObserverBase> obs_a = std::make_shared<ObserverA>();
  std::shared_ptr<ObserverBase> obs_b = std::make_shared<ObserverB>();
  subj.addObserver(obs_a);
  subj.addObserver(obs_b);

  subj.run(1);
  std::cout << "=======================" << std::endl;
  subj.run(2);
  return 0;
}
