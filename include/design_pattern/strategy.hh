#ifndef __STRATEGY_HH__
#define __STRATEGY_HH__
/**-----------------------------------------------
  * @Copyright (C) 2019 All rights reserved.
  * @date: 2019
  * @file: strategy.hh
  * @version: v0.0.1
  * @author: aliben.develop@gmail.com
  * @create_date: 2019-08-05 17:01:39
  * @last_modified_date: 2019-08-05 18:11:46
  * @brief: TODO
  * @details: TODO
  *-----------------------------------------------*/

// Header include

// Declaration
class TexStrategy;
class CNTax;
class USTax;
class StrategyFactory;
class Context
{

};


class TexStrategy
{
  public:
    virtual double Calculate(const Context& context) = 0;
    virtual ~TexStrategy() = default;
};

class CNTax : public TexStrategy
{
  public:
    virtual double Calculate(const Context& context) override;
};

class USTax : public TexStrategy
{
  public:
    virtual double Calculate(const Context& context) override;
};

class SalerOrder
{
  public:
    SalerOrder(StrategyFactory* strategy_factory);
    double CalculateTax();
    ~SalerOrder();
  private:
    TexStrategy* ptr_strategy_;
};

class StrategyFactory
{
  public:
    // return CNTax just for passing compile, there should be generate obj dynamicly according diff requirement rather than fixed CNTax obj
    TexStrategy* NewStrategy(){return new CNTax();};
};
#endif // __STRATEGY_HH__
