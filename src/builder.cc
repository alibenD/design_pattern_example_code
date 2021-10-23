/**
  * @Copyright (C) 2019 All rights reserved.
  * @date: 2019
  * @file: buidler.cc
  * @version: v0.0.1
  * @author: aliben.develop@gmail.com
  * @create_date: 2019-08-06 14:19:28
  * @last_modified_date: 2021-10-23 20:57:23
  * @brief: TODO
  * @details: TODO
  */

//INCLUDE
#include <design_pattern/builder.hh>
#include <iostream>

//CODE

void HouseBuilder::Init()
{
  this->BuildPart1();
  this->BuildPart2();
  this->BuildPart3();
  this->BuildPart4();
  this->BuildPart5();
}

void StoneHouse::Part1()
{
  std::cout << __func__ << ": StoneHouse" << std::endl;
}

void StoneHouse::Part2()
{
  std::cout << __func__ << ": StoneHouse" << std::endl;
}

void StoneHouse::Part3()
{
  std::cout << __func__ << ": StoneHouse" << std::endl;
}

void StoneHouse::Part4()
{
  std::cout << __func__ << ": StoneHouse" << std::endl;
}

void StoneHouse::Part5()
{
  std::cout << __func__ << ": StoneHouse" << std::endl;
}

//==============================
void IronHouse::Part1()
{
  std::cout << __func__ << ": IronHouse" << std::endl;
}

void IronHouse::Part2()
{
  std::cout << __func__ << ": IronHouse" << std::endl;
}

void IronHouse::Part3()
{
  std::cout << __func__ << ": IronHouse" << std::endl;
}

void IronHouse::Part4()
{
  std::cout << __func__ << ": IronHouse" << std::endl;
}

void IronHouse::Part5()
{
  std::cout << __func__ << ": IronHouse" << std::endl;
}

void StoneHouseBuilder::BuildPart1()
{
  ptr_house_->Part1();
  std::cout << __func__ << ": StoneHouseBuilder" << std::endl;
}

void StoneHouseBuilder::BuildPart2()
{
  ptr_house_->Part2();
  std::cout << __func__ << ": StoneHouseBuilder" << std::endl;
}

void StoneHouseBuilder::BuildPart3()
{
  ptr_house_->Part3();
  std::cout << __func__ << ": StoneHouseBuilder" << std::endl;
}

void StoneHouseBuilder::BuildPart4()
{
  ptr_house_->Part4();
  std::cout << __func__ << ": StoneHouseBuilder" << std::endl;
}

void StoneHouseBuilder::BuildPart5()
{
  ptr_house_->Part5();
  std::cout << __func__ << ": StoneHouseBuilder" << std::endl;
}

//=============================
void IronHouseBuilder::BuildPart1()
{
  ptr_house_->Part1();
  std::cout << __func__ << ": IronHouseBuilder" << std::endl;
}

void IronHouseBuilder::BuildPart2()
{
  ptr_house_->Part2();
  std::cout << __func__ << ": IronHouseBuilder" << std::endl;
}

void IronHouseBuilder::BuildPart3()
{
  ptr_house_->Part3();
  std::cout << __func__ << ": IronHouseBuilder" << std::endl;
}

void IronHouseBuilder::BuildPart4()
{
  ptr_house_->Part4();
  std::cout << __func__ << ": IronHouseBuilder" << std::endl;
}

void IronHouseBuilder::BuildPart5()
{
  ptr_house_->Part5();
  std::cout << __func__ << ": IronHouseBuilder" << std::endl;
}

std::shared_ptr<House> HouseDirector::Construct()
{
  ptr_house_builder_->Init();
  return ptr_house_builder_->GetHouse();
}
