/**
  * @Copyright (C) 2019 All rights reserved.
  * @date: 2019
  * @file: example_builder.cc
  * @version: v0.0.1
  * @author: aliben.develop@gmail.com
  * @create_date: 2019-08-06 14:19:06
  * @last_modified_date: 2019-08-06 15:40:04
  * @brief: TODO
  * @details: TODO
  */

//INCLUDE
#include <design_pattern/builder.hh>
#include <iostream>

//CODE
int main()
{
  HouseBuilder* stone_builder = new StoneHouseBuilder();
  HouseBuilder* iron_builder = new IronHouseBuilder();

  HouseDirector stone_house_director(stone_builder);
  House* stone_house = stone_house_director.Construct();
  stone_house->Part1();
  std::cout << "==============================" << std::endl;

  HouseDirector iron_house_director(iron_builder);
  House* iron_house = iron_house_director.Construct();
  iron_house->Part1();
  return 0;
}
