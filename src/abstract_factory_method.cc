/**
  * @Copyright (C) 2019 All rights reserved.
  * @date: 2019
  * @file: abstract_factory_method.cc
  * @version: v0.0.1
  * @author: aliben.develop@gmail.com
  * @create_date: 2019-08-06 12:18:53
  * @last_modified_date: 2021-10-23 20:44:39
  * @brief: TODO
  * @details: TODO
  */

//INCLUDE
#include <design_pattern/abstract_factory_method.hh>
#include <iostream>
#include <memory>

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
std::unique_ptr<IDBConnection> SqlDBFactory::CreateDBConnection()
{
  std::cout << __func__ << ": SqlFactory" << std::endl;
  return std::make_unique<SqlConnection>();
}

std::unique_ptr<IDBCommand> SqlDBFactory::CreateDBCommand()
{
  std::cout << __func__ << ": SqlFactory" << std::endl;
  return std::make_unique<SqlCommand>();
}

std::unique_ptr<IDataReader> SqlDBFactory::CreateDataReader()
{
  std::cout << __func__ << ": SqlFactory" << std::endl;
  return std::make_unique<SqlDataReader>();
}

std::unique_ptr<IDBConnection> OracleDBFactory::CreateDBConnection()
{
  std::cout << __func__ << ": OracleFactory" << std::endl;
  return std::make_unique<OracleConnection>();
}

std::unique_ptr<IDBCommand> OracleDBFactory::CreateDBCommand()
{
  std::cout << __func__ << ": OracleFactory" << std::endl;
  return std::make_unique<OracleCommand>();
}

std::unique_ptr<IDataReader> OracleDBFactory::CreateDataReader()
{
  std::cout << __func__ << ": OracleFactory" << std::endl;
  return std::make_unique<OracleDataReader>();
}


void ExamplerDB::Run()
{
  std::unique_ptr<IDBConnection> ptr_connection = ptr_db_factory_->CreateDBConnection();
  std::unique_ptr<IDBCommand> ptr_command = ptr_db_factory_->CreateDBCommand();
  std::unique_ptr<IDataReader> ptr_reader = ptr_db_factory_->CreateDataReader();

  ptr_connection->Connect();
  ptr_command->Command();
  ptr_reader->Reader();
}
