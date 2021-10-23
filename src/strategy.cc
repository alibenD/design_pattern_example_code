/**
  * @Copyright (C) 2019 All rights reserved.
  * @date: 2019
  * @file: strategy.cc
  * @version: v0.0.1
  * @author: aliben.develop@gmail.com
  * @create_date: 2019-08-05 17:01:39
  * @last_modified_date: 2021-10-23 21:27:26
  * @brief: TODO
  * @details: TODO
  */

//INCLUDE
#include <design_pattern/strategy.hh>
#include <iostream>

//CODE

double CNTax::Calculate(const Context& context)
{
  std::cout << "Calculate: China" << std::endl;
  return 0.0;
}

double USTax::Calculate(const Context& context)
{
  std::cout << "Calculate: US" << std::endl;
  return 0.0;
}

SalerOrder::SalerOrder(std::shared_ptr<StrategyFactory> strategy_factory)
{
  this->ptr_strategy_ = strategy_factory->NewStrategy();
}

SalerOrder::~SalerOrder()
{
}

double SalerOrder::CalculateTax()
{
  Context context;
  double val = ptr_strategy_->Calculate(context);
  return val;
}
