/**
  * @Copyright (C) 2019 All rights reserved.
  * @date: 2019
  * @file: example_command.cc
  * @version: v0.0.1
  * @author: aliben.develop@gmail.com
  * @create_date: 2019-08-07 08:42:57
  * @last_modified_date: 2019-08-07 08:58:09
  * @brief: TODO
  * @details: TODO
  */

//INCLUDE
#include <design_pattern/command.hh>

//CODE
int main()
{
  Command* com1 = new ConcreteCommand1("ARG#1...");
  Command* com2 = new ConcreteCommand2("ARG#2***");
  MacroCommand macro_com;

  macro_com.addCommand(com1);
  macro_com.addCommand(com2);

  macro_com.execute();
}
