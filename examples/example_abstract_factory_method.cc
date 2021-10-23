/**
  * @Copyright (C) 2019 All rights reserved.
  * @date: 2019
  * @file: example_abstract_factory_method.cc
  * @version: v0.0.1
  * @author: aliben.develop@gmail.com
  * @create_date: 2019-08-06 12:18:33
  * @last_modified_date: 2021-10-23 20:47:19
  * @brief: TODO
  * @details: TODO
  */

//INCLUDE
#include <design_pattern/abstract_factory_method.hh>
#include <iostream>
#include <memory>

//CODE
int main()
{
  std::unique_ptr<IDBFactory> ptr_sql_factory = std::make_unique<SqlDBFactory>();
  std::unique_ptr<IDBFactory> ptr_oracle_factory = std::make_unique<OracleDBFactory>();

  ExamplerDB example_sql(std::move(ptr_sql_factory));
  example_sql.Run();

  std::cout << "========================" << std::endl;
  ExamplerDB example_oracle(std::move(ptr_oracle_factory));
  example_oracle.Run();
  return 0;
}
