/**
  * @Copyright (C) 2019 All rights reserved.
  * @date: 2019
  * @file: example_decorator.cc
  * @version: v0.0.1
  * @author: aliben.develop@gmail.com
  * @create_date: 2019-08-05 22:57:26
  * @last_modified_date: 2021-10-23 21:04:42
  * @brief: TODO
  * @details: TODO
  */

//INCLUDE
#include <design_pattern/decorate.hh>
#include <iostream>

//CODE
int main()
{
  std::shared_ptr<Stream> file_stream = std::make_shared<FileStream>();
  std::shared_ptr<Stream> network_stream = std::make_shared<NetworkStream>();
  std::shared_ptr<Stream> memory_stream = std::make_shared<MemoryStream>();

  std::shared_ptr<Stream> buffer_file_stream = std::make_shared<BufferStream>(file_stream);
  std::shared_ptr<Stream> buffer_network_stream = std::make_shared<BufferStream>(network_stream);
  std::shared_ptr<Stream> buffer_memory_stream = std::make_shared<BufferStream>(memory_stream);

  std::shared_ptr<Stream> cryto_file_stream = std::make_shared<CrytoStream>(file_stream);
  std::shared_ptr<Stream> cryto_network_stream = std::make_shared<CrytoStream>(network_stream);
  std::shared_ptr<Stream> cryto_memory_stream = std::make_shared<CrytoStream>(memory_stream);

  std::shared_ptr<Stream> cryto_buffer_file_stream = std::make_shared<CrytoStream>(buffer_file_stream);

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
