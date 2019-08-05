/**
  * @Copyright (C) 2019 All rights reserved.
  * @date: 2019
  * @file: example_divide_conquer.cc
  * @version: v0.0.1
  * @author: aliben.develop@gmail.com
  * @create_date: 2019-08-05 15:56:12
  * @last_modified_date: 2019-08-05 16:16:23
  * @brief: TODO
  * @details: TODO
  */

//INCLUDE
#include <design_pattern/divide_conquer.hh>

//CODE
int main()
{
  ExamplerDC examplerDC;
  Shape* ptr_new_shape1 = new Line();
  Shape* ptr_new_shape2 = new Line();
  Shape* ptr_new_shape3 = new Rect();
  Shape* ptr_new_shape4 = new Circle();
  Shape* ptr_new_shape5 = new Line();

  examplerDC.addShape(ptr_new_shape1);
  examplerDC.addShape(ptr_new_shape2);
  examplerDC.addShape(ptr_new_shape3);
  examplerDC.addShape(ptr_new_shape4);
  examplerDC.addShape(ptr_new_shape5);
  examplerDC.printDebug();
  return 0;
}
