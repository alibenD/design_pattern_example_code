/**
  * @Copyright (C) 2019 All rights reserved.
  * @date: 2019
  * @file: example_abstract_factory_method.cc
  * @version: v0.0.1
  * @author: aliben.develop@gmail.com
  * @create_date: 2019-08-06 12:18:33
  * @last_modified_date: 2019-08-06 13:40:50
  * @brief: TODO
  * @details: TODO
  */

//INCLUDE
#include <design_pattern/abstract_factory_method.hh>
#include <iostream>

//CODE
int main()
{
  IDBFactory* ptr_sql_factory = new SqlDBFactory();
  IDBFactory* ptr_oracle_factory = new OracleDBFactory();

  ExamplerDB example_sql(ptr_sql_factory);
  example_sql.Run();

  std::cout << "========================" << std::endl;
  ExamplerDB example_oracle(ptr_oracle_factory);
  example_oracle.Run();
  return 0;
}
