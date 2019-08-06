/**
  * @Copyright (C) 2019 All rights reserved.
  * @date: 2019
  * @file: prototype.cc
  * @version: v0.0.1
  * @author: aliben.develop@gmail.com
  * @create_date: 2019-08-06 13:49:37
  * @last_modified_date: 2019-08-06 14:16:28
  * @brief: TODO
  * @details: TODO
  */

//INCLUDE
#include <design_pattern/prototype.hh>
#include <iostream>

//CODE
void Exampler::Run()
{
  ISplitterPrototype* ptr_splitter = this->ptr_prototype_->Clone();
  ptr_splitter->split();
}

void BinarySplitterPrototype::split()
{
  std::cout << __func__ << ": BinarySplitterPrototype" << std::endl;
}

void TxtSplitterPrototype::split()
{
  std::cout << __func__ <<  ": TxtSplitterPrototype" << std::endl;
}

void VideoSplitterPrototype::split()
{
  std::cout << __func__ <<  ": VideoSplitterPrototype" << std::endl;
}

ISplitterPrototype* BinarySplitterPrototype::Clone()
{
  std::cout << __func__ << ": BinarySplitterPrototype" << std::endl;
  return new BinarySplitterPrototype(*this);
}

ISplitterPrototype* TxtSplitterPrototype::Clone()
{
  std::cout << __func__ << ": TxtSplitterPrototype" << std::endl;
  return new TxtSplitterPrototype(*this);
}

ISplitterPrototype* VideoSplitterPrototype::Clone()
{
  std::cout << __func__ << ": VideoSplitterPrototype" << std::endl;
  return new VideoSplitterPrototype(*this);
}

