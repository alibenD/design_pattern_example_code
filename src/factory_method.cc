/**
  * @Copyright (C) 2019 All rights reserved.
  * @date: 2019
  * @file: factory_method.cc
  * @version: v0.0.1
  * @author: aliben.develop@gmail.com
  * @create_date: 2019-08-06 09:57:00
  * @last_modified_date: 2019-08-06 12:12:26
  * @brief: TODO
  * @details: TODO
  */

//INCLUDE
#include <design_pattern/factory_method.hh>
#include <iostream>

//CODE
void ExamplerFactory::Run()
{
  ISplitter* ptr_splitter = ptr_factory_->CreateSplitter();
  ptr_splitter->split();
}

void BinarySplitter::split()
{
  std::cout << "BinarySplitter" << std::endl;
}

void TxtSplitter::split()
{
  std::cout << "TxtSplitter" << std::endl;
}

void VideoSplitter::split()
{
  std::cout << "VideoSplitter" << std::endl;
}

ISplitter* BinarySplitterFactory::CreateSplitter()
{
  return new BinarySplitter();
}

ISplitter* TxtSplitterFactory::CreateSplitter()
{
  return new TxtSplitter();
}

ISplitter* VideoSplitterFactory::CreateSplitter()
{
  return new VideoSplitter();
}
