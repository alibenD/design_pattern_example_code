/**
  * @Copyright (C) 2019 All rights reserved.
  * @date: 2019
  * @file: factory_method.cc
  * @version: v0.0.1
  * @author: aliben.develop@gmail.com
  * @create_date: 2019-08-06 09:57:00
  * @last_modified_date: 2021-10-23 21:08:30
  * @brief: TODO
  * @details: TODO
  */

//INCLUDE
#include <design_pattern/factory_method.hh>
#include <iostream>

//CODE
void ExamplerFactory::Run()
{
  std::shared_ptr<ISplitter> ptr_splitter = ptr_factory_->CreateSplitter();
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

std::shared_ptr<ISplitter> BinarySplitterFactory::CreateSplitter()
{
  return std::make_shared<BinarySplitter>();
}

std::shared_ptr<ISplitter> TxtSplitterFactory::CreateSplitter()
{
  return std::make_shared<TxtSplitter>();
}

std::shared_ptr<ISplitter> VideoSplitterFactory::CreateSplitter()
{
  return std::make_shared<VideoSplitter>();
}
