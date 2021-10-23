/**
  * @Copyright (C) 2019 All rights reserved.
  * @date: 2019
  * @file: command.cc
  * @version: v0.0.1
  * @author: aliben.develop@gmail.com
  * @create_date: 2019-08-07 08:29:04
  * @last_modified_date: 2021-10-23 20:58:20
  * @brief: TODO
  * @details: TODO
  */

//INCLUDE
#include <design_pattern/command.hh>
#include <iostream>

//CODE
void ConcreteCommand1::execute()
{
  std::cout << "#1 process.... " << argument_ << std::endl;
}

void ConcreteCommand2::execute()
{
  std::cout << "#2 process.... " << argument_ << std::endl;
}

void MacroCommand::execute()
{
  std::cout << __func__ << "MacroCommand" << std::endl;
  for(auto& c : commands_)
  {
    c->execute();
  }
}

void MacroCommand::addCommand(std::unique_ptr<Command> command)
{
  commands_.push_back(std::move(command));
}
