/**
  * @Copyright (C) 2019 All rights reserved.
  * @date: 2019
  * @file: divide_conquer.cc
  * @version: v0.0.1
  * @author: aliben.develop@gmail.com
  * @create_date: 2019-08-05 15:55:10
  * @last_modified_date: 2019-08-05 16:08:45
  * @brief: TODO
  * @details: TODO
  */

//INCLUDE
#include <design_pattern/divide_conquer.hh>
#include <iostream>

//CODE
void Line::Draw()
{
  std::cout << "Line Draw" << std::endl;
}

void Rect::Draw()
{
  std::cout << "Rect Draw" << std::endl;
}


void Circle::Draw()
{
  std::cout << "Circle Draw" << std::endl;
}

void ExamplerDC::printDebug()
{
  for(auto& ptr_shape: shape_vectors_)
  {
    ptr_shape->Draw();
  }
}

void ExamplerDC::addShape(Shape* new_shape)
{
  shape_vectors_.push_back(new_shape);
}
