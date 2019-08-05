/**
  * @Copyright (C) 2019 All rights reserved.
  * @date: 2019
  * @file: decorate.cc
  * @version: v0.0.1
  * @author: aliben.develop@gmail.com
  * @create_date: 2019-08-05 22:21:30
  * @last_modified_date: 2019-08-05 22:57:10
  * @brief: TODO
  * @details: TODO
  */

//INCLUDE
#include <design_pattern/decorate.hh>
#include <iostream>

//CODE
void FileStream::Read(int num)
{
  std::cout << "Read - FileStream: " << num << std::endl;
}

void FileStream::Write(int num)
{
  std::cout << "Write - FileStream: " << num << std::endl;
}

void FileStream::Seek(int num)
{
  std::cout << "Seek - FileStream: " << num << std::endl;
}

void NetworkStream::Read(int num)
{
  std::cout << "Read - NetworkStream: " << num << std::endl;
}

void NetworkStream::Write(int num)
{
  std::cout << "Write - NetworkStream: " << num << std::endl;
}

void NetworkStream::Seek(int num)
{
  std::cout << "Seek - NetworkStream: " << num << std::endl;
}

void MemoryStream::Read(int num)
{
  std::cout << "Read - MemoryStream: " << num << std::endl;
}

void MemoryStream::Write(int num)
{
  std::cout << "Write - MemoryStream: " << num << std::endl;
}

void MemoryStream::Seek(int num)
{
  std::cout << "Seek - MemoryStream: " << num << std::endl;
}

void BufferStream::Read(int num)
{
  std::cout << "Read - BufferStream: " << num << std::endl;
  ptr_stream_->Read(num);
  std::cout << "End - BufferStream Read" << std::endl;
}

void BufferStream::Write(int num)
{
  std::cout << "Write - BufferStream: " << num << std::endl;
  ptr_stream_->Write(num);
  std::cout << "End - BufferStream Write" << std::endl;
}

void BufferStream::Seek(int num)
{
  std::cout << "Seek - BufferStream: " << num << std::endl;
  ptr_stream_->Seek(num);
  std::cout << "End - BufferStream Seek" << std::endl;
}

void CrytoStream::Read(int num)
{
  std::cout << "Read - CrytoStream: " << num << std::endl;
  ptr_stream_->Read(num);
  std::cout << "End - CrytoStream Read" << std::endl;
}

void CrytoStream::Write(int num)
{
  std::cout << "Write - CrytoStream: " << num << std::endl;
  ptr_stream_->Write(num);
  std::cout << "End - CrytoStream Write" << std::endl;
}

void CrytoStream::Seek(int num)
{
  std::cout << "Seek - CrytoStream: " << num << std::endl;
  ptr_stream_->Seek(num);
  std::cout << "End - CrytoStream Seek" << std::endl;
}
