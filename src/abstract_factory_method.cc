/**
  * @Copyright (C) 2019 All rights reserved.
  * @date: 2019
  * @file: abstract_factory_method.cc
  * @version: v0.0.1
  * @author: aliben.develop@gmail.com
  * @create_date: 2019-08-06 12:18:53
  * @last_modified_date: 2019-08-06 13:37:35
  * @brief: TODO
  * @details: TODO
  */

//INCLUDE
#include <design_pattern/abstract_factory_method.hh>
#include <iostream>

//CODE

void SqlConnection::Connect()
{
  std::cout << "SqlConnection" << std::endl;
}

void SqlCommand::Command()
{
  std::cout << "SqlCommand" << std::endl;
}

void SqlDataReader::Reader()
{
  std::cout << "SqlReader" << std::endl;
}

void OracleConnection::Connect()
{
  std::cout << "OracleConnection" << std::endl;
}

void OracleCommand::Command()
{
  std::cout << "OracleCommand" << std::endl;
}

void OracleDataReader::Reader()
{
  std::cout << "OracleReader" << std::endl;
}

//==================================
IDBConnection* SqlDBFactory::CreateDBConnection()
{
  std::cout << __func__ << ": SqlFactory" << std::endl;
  return new SqlConnection();
}

IDBCommand* SqlDBFactory::CreateDBCommand()
{
  std::cout << __func__ << ": SqlFactory" << std::endl;
  return new SqlCommand();
}

IDataReader* SqlDBFactory::CreateDataReader()
{
  std::cout << __func__ << ": SqlFactory" << std::endl;
  return new SqlDataReader();
}

IDBConnection* OracleDBFactory::CreateDBConnection()
{
  std::cout << __func__ << ": OracleFactory" << std::endl;
  return new OracleConnection();
}

IDBCommand* OracleDBFactory::CreateDBCommand()
{
  std::cout << __func__ << ": OracleFactory" << std::endl;
  return new OracleCommand();
}

IDataReader* OracleDBFactory::CreateDataReader()
{
  std::cout << __func__ << ": OracleFactory" << std::endl;
  return new OracleDataReader();
}


void ExamplerDB::Run()
{
  IDBConnection* ptr_connection = ptr_db_factory_->CreateDBConnection();
  IDBCommand* ptr_command = ptr_db_factory_->CreateDBCommand();
  IDataReader* ptr_reader = ptr_db_factory_->CreateDataReader();

  ptr_connection->Connect();
  ptr_command->Command();
  ptr_reader->Reader();
}
