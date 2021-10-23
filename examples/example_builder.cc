/**
  * @Copyright (C) 2019 All rights reserved.
  * @date: 2019
  * @file: example_builder.cc
  * @version: v0.0.1
  * @author: aliben.develop@gmail.com
  * @create_date: 2019-08-06 14:19:06
  * @last_modified_date: 2021-10-23 20:57:09
  * @brief: TODO
  * @details: TODO
  */

//INCLUDE
#include <design_pattern/builder.hh>
#include <iostream>

//CODE
int main()
{
  std::shared_ptr<HouseBuilder> stone_builder = std::make_shared<StoneHouseBuilder>();
  std::shared_ptr<HouseBuilder> iron_builder = std::make_shared<IronHouseBuilder>();

  HouseDirector stone_house_director(stone_builder);
  std::shared_ptr<House> stone_house = stone_house_director.Construct();
  stone_house->Part1();
  std::cout << "==============================" << std::endl;

  HouseDirector iron_house_director(iron_builder);
  std::shared_ptr<House> iron_house = iron_house_director.Construct();
  iron_house->Part1();
  return 0;
}
