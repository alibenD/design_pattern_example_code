#ifndef __DECORATE_HH__
#define __DECORATE_HH__
/**-----------------------------------------------
  * @Copyright (C) 2019 All rights reserved.
  * @date: 2019
  * @file: decorate.hh
  * @version: v0.0.1
  * @author: aliben.develop@gmail.com
  * @create_date: 2019-08-05 22:21:30
  * @last_modified_date: 2021-10-23 21:04:07
  * @brief: TODO
  * @details: TODO
  *-----------------------------------------------*/

// Header include
#include <memory>

// Declaration
class Stream;

class Stream
{
  public:
    virtual void Read(int num) = 0;
    virtual void Write(int num) = 0;
    virtual void Seek(int num) = 0;
};

class DecoratorStream : public Stream
{
  public:
    DecoratorStream(std::shared_ptr<Stream> stream) : ptr_stream_(stream){};
  protected:
    std::shared_ptr<Stream> ptr_stream_;
};

class FileStream : public Stream
{
  public:
    virtual void Read(int num);
    virtual void Write(int num);
    virtual void Seek(int num);
};

class NetworkStream : public Stream
{
  public:
    virtual void Read(int num);
    virtual void Write(int num);
    virtual void Seek(int num);
};

class MemoryStream : public Stream
{
  public:
    virtual void Read(int num);
    virtual void Write(int num);
    virtual void Seek(int num);
};

class BufferStream : public DecoratorStream
{
  public:
    BufferStream(std::shared_ptr<Stream> stream) : DecoratorStream(stream){};
    virtual void Read(int num);
    virtual void Write(int num);
    virtual void Seek(int num);
    virtual ~BufferStream() = default;
};

class CrytoStream : public DecoratorStream
{
  public:
    CrytoStream(std::shared_ptr<Stream> stream) : DecoratorStream(stream){};
    virtual void Read(int num);
    virtual void Write(int num);
    virtual void Seek(int num);
    virtual ~CrytoStream() = default;
};

#endif // __DECORATE_HH__
