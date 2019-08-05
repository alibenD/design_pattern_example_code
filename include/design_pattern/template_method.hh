#ifndef __TEMPLATE_METHOD_HH__
#define __TEMPLATE_METHOD_HH__
/**-----------------------------------------------
  * @Copyright (C) 2019 All rights reserved.
  * @date: 2019
  * @file: template_method.hh
  * @version: v0.0.1
  * @author: aliben.develop@gmail.com
  * @create_date: 2019-08-05 16:36:30
  * @last_modified_date: 2019-08-05 16:59:08
  * @brief: TODO
  * @details: TODO
  *-----------------------------------------------*/

// Header include
/*
 * Find a point changing, then separate it.
 * IMPORTANT IDEA: Refactoring to Patterns, rather than using it at the beginning
 *
 * Motivation:
 * 1. Stable Entire Progress(Operation)
 * 2. Mutable SubProgress
 */

// Declaration

class Library
{
  public:
    void Step1();
    void Step3();
    void Step5();
    virtual ~Library() = default;

    void Run();

  protected:
    virtual void Step2() = 0;
    virtual void Step4() = 0;
};

class Application : public Library
{
  /**
   * In template Method, DO NOT CALL any super class method, rather than super class to call derived methods(by virtual method, later binding)
   *
   *
   */
  public:
    virtual void Step2() override;
    virtual void Step4() override;
    virtual ~Application() = default;
};

#endif // __TEMPLATE_METHOD_HH__
