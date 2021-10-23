/**
  * @Copyright (C) 2019 All rights reserved.
  * @date: 2019
  * @file: example_command.cc
  * @version: v0.0.1
  * @author: aliben.develop@gmail.com
  * @create_date: 2019-08-07 08:42:57
  * @last_modified_date: 2021-10-23 20:59:30
  * @brief: TODO
  * @details: TODO
  */

//INCLUDE
#include <design_pattern/command.hh>

//CODE
int main()
{
  std::unique_ptr<Command> com1 = std::make_unique<ConcreteCommand1>("ARG#1...");
  std::unique_ptr<Command> com2 = std::make_unique<ConcreteCommand2>("ARG#2***");
  MacroCommand macro_com;

  macro_com.addCommand(std::move(com1));
  macro_com.addCommand(std::move(com2));

  macro_com.execute();
}
