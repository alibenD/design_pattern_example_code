#ifndef __COMMAND_HH__
#define __COMMAND_HH__
/**-----------------------------------------------
  * @Copyright (C) 2019 All rights reserved.
  * @date: 2019
  * @file: command.hh
  * @version: v0.0.1
  * @author: aliben.develop@gmail.com
  * @create_date: 2019-08-07 08:29:03
  * @last_modified_date: 2021-10-23 20:59:52
  * @brief: TODO
  * @details: TODO
  *-----------------------------------------------*/

// Header include
#include <string>
#include <vector>
#include <memory>

// Declaration
class Command
{
  public:
    virtual void execute() = 0;
    virtual ~Command() = default;
};

class ConcreteCommand1 : public Command
{
  public:
    ConcreteCommand1(const std::string& argument) : argument_(argument){};
    virtual void execute() override;
    virtual ~ConcreteCommand1() = default;

  private:
    std::string argument_;
};


class ConcreteCommand2 : public Command
{
  public:
    ConcreteCommand2(const std::string& argument) : argument_(argument){};
    virtual void execute() override;
    virtual ~ConcreteCommand2() = default;

  private:
    std::string argument_;
};

class MacroCommand : public Command
{
  public:
    virtual void execute() override;
    void addCommand(std::unique_ptr<Command> command);
    virtual ~MacroCommand() = default;

  private:
    std::vector<std::unique_ptr<Command>> commands_;
};
#endif // __COMMAND_HH__
