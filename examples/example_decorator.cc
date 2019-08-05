/**
  * @Copyright (C) 2019 All rights reserved.
  * @date: 2019
  * @file: example_decorator.cc
  * @version: v0.0.1
  * @author: aliben.develop@gmail.com
  * @create_date: 2019-08-05 22:57:26
  * @last_modified_date: 2019-08-05 23:07:49
  * @brief: TODO
  * @details: TODO
  */

//INCLUDE
#include <design_pattern/decorate.hh>
#include <iostream>

//CODE
int main()
{
  Stream* file_stream = new FileStream();
  Stream* network_stream = new NetworkStream();
  Stream* memory_stream = new MemoryStream();

  Stream* buffer_file_stream = new BufferStream(file_stream);
  Stream* buffer_network_stream = new BufferStream(network_stream);
  Stream* buffer_memory_stream = new BufferStream(memory_stream);

  Stream* cryto_file_stream = new CrytoStream(file_stream);
  Stream* cryto_network_stream = new CrytoStream(network_stream);
  Stream* cryto_memory_stream = new CrytoStream(memory_stream);

  Stream* cryto_buffer_file_stream = new CrytoStream(buffer_file_stream);

  int num=5;
  file_stream->Read(num);
  network_stream->Read(num);
  memory_stream->Read(num);

  std::cout << "====================================" << std::endl;

  buffer_file_stream->Read(num);
  buffer_network_stream->Read(num);
  buffer_memory_stream->Read(num);

  std::cout << "====================================" << std::endl;

  cryto_file_stream->Read(num);
  cryto_network_stream->Read(num);
  cryto_memory_stream->Read(num);

  std::cout << "************************************" << std::endl;



  file_stream->Write(num);
  network_stream->Write(num);
  memory_stream->Write(num);

  std::cout << "====================================" << std::endl;

  buffer_file_stream->Write(num);
  buffer_network_stream->Write(num);
  buffer_memory_stream->Write(num);

  std::cout << "====================================" << std::endl;

  cryto_file_stream->Write(num);
  cryto_network_stream->Write(num);
  cryto_memory_stream->Write(num);

  std::cout << "************************************" << std::endl;



  file_stream->Seek(num);
  network_stream->Seek(num);
  memory_stream->Seek(num);

  std::cout << "====================================" << std::endl;

  buffer_file_stream->Seek(num);
  buffer_network_stream->Seek(num);
  buffer_memory_stream->Seek(num);

  std::cout << "====================================" << std::endl;

  cryto_file_stream->Seek(num);
  cryto_network_stream->Seek(num);
  cryto_memory_stream->Seek(num);

  std::cout << "************************************" << std::endl;

  cryto_buffer_file_stream->Read(10);
}
