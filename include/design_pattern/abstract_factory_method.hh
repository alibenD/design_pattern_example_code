#ifndef __ABSTRACT_FACTORY_METHOD_HH__
#define __ABSTRACT_FACTORY_METHOD_HH__
/**-----------------------------------------------
  * @Copyright (C) 2019 All rights reserved.
  * @date: 2019
  * @file: abstract_factory_method.hh
  * @version: v0.0.1
  * @author: aliben.develop@gmail.com
  * @create_date: 2019-08-06 12:18:53
  * @last_modified_date: 2019-08-06 13:41:05
  * @brief: TODO
  * @details: TODO
  *-----------------------------------------------*/

// Header include

// Declaration
class IDBConnection
{
  public:
    virtual void Connect() = 0;
    virtual ~IDBConnection() = default;
};

class SqlConnection : public IDBConnection
{
  public:
    virtual void Connect() override;
    virtual ~SqlConnection() = default;
};

class OracleConnection : public IDBConnection
{
  public:
    virtual void Connect() override;
    virtual ~OracleConnection() = default;
};

class IDBCommand
{
  public:
    virtual void Command() = 0;
    virtual ~IDBCommand() = default;
};

class SqlCommand : public IDBCommand
{
  public:
    virtual void Command() override;
    virtual ~SqlCommand() = default;
};

class OracleCommand : public IDBCommand
{
  public:
    virtual void Command() override;
    virtual ~OracleCommand() = default;
};

class IDataReader
{
  public:
    virtual void Reader() = 0;
    virtual ~IDataReader() = default;
};

class SqlDataReader : public IDataReader
{
  public:
    virtual void Reader() override;
    virtual ~SqlDataReader() = default;
};

class OracleDataReader : public IDataReader
{
  public:
    virtual void Reader() override;
    virtual ~OracleDataReader() = default;
};

class IDBFactory
{
  public:
    virtual IDBConnection* CreateDBConnection() = 0;
    virtual IDBCommand* CreateDBCommand() = 0;
    virtual IDataReader* CreateDataReader() = 0;
};

class SqlDBFactory : public IDBFactory
{
  public:
    virtual IDBConnection* CreateDBConnection();
    virtual IDBCommand* CreateDBCommand();
    virtual IDataReader* CreateDataReader();
};

class OracleDBFactory : public IDBFactory
{
  public:
    virtual IDBConnection* CreateDBConnection();
    virtual IDBCommand* CreateDBCommand();
    virtual IDataReader* CreateDataReader();
};

class ExamplerDB
{
  public:
    ExamplerDB(IDBFactory* db_factory){ this->ptr_db_factory_ = db_factory; };
    void Run();

  private:
    IDBFactory* ptr_db_factory_;
};
#endif // __ABSTRACT_FACTORY_METHOD_HH__
