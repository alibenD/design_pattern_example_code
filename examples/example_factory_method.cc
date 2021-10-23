/**
  * @Copyright (C) 2019 All rights reserved.
  * @date: 2019
  * @file: example_factory_method.cc
  * @version: v0.0.1
  * @author: aliben.develop@gmail.com
  * @create_date: 2019-08-06 10:06:24
  * @last_modified_date: 2021-10-23 21:07:51
  * @brief: TODO
  * @details: TODO
  */

//INCLUDE
#include <design_pattern/factory_method.hh>

//CODE
int main()
{

  std::shared_ptr<SplitterFactory> bin_splitter = std::make_shared<BinarySplitterFactory>();
  std::shared_ptr<SplitterFactory> txt_splitter = std::make_shared<TxtSplitterFactory>();
  std::shared_ptr<SplitterFactory> video_splitter = std::make_shared<VideoSplitterFactory>();
  ExamplerFactory example_bin_factory(bin_splitter);
  ExamplerFactory example_txt_factory(txt_splitter);
  ExamplerFactory example_video_factory(video_splitter);

  example_bin_factory.Run();
  example_txt_factory.Run();
  example_video_factory.Run();
  return 0;
}
