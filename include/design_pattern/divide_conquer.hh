#ifndef __DIVIDE_CONQUER_HH__
#define __DIVIDE_CONQUER_HH__
/**-----------------------------------------------
  * @Copyright (C) 2019 All rights reserved.
  * @date: 2019
  * @file: divide_conquer.hh
  * @version: v0.0.1
  * @author: aliben.develop@gmail.com
  * @create_date: 2019-08-05 15:55:10
  * @last_modified_date: 2021-10-23 21:06:04
  * @brief: TODO
  * @details: TODO
  *-----------------------------------------------*/

// Header include
#include <vector>
#include <memory>

class ExamplerDC;
class Shape;

class ExamplerDC
{
  public:
    void printDebug();
    void addShape(std::shared_ptr<Shape> new_shape);
    std::vector<std::shared_ptr<Shape>> shape_vectors_; // Should be private, just for instance
};

class Shape
{
  public:
    virtual ~Shape() = default;
    virtual void Draw() = 0;
};

class Line : public Shape
{
  public:
    virtual ~Line() = default;
    virtual void Draw() override;

};

class Rect : public Shape
{
  public:
    virtual ~Rect() = default;
    virtual void Draw() override;
};

class Circle : public Shape
{
  public:
    virtual ~Circle() = default;
    virtual void Draw() override;
};

// Declaration
#endif // __DIVIDE_CONQUER_HH__
