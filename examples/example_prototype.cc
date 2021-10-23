/**
  * @Copyright (C) 2019 All rights reserved.
  * @date: 2019
  * @file: example_prototype.cc
  * @version: v0.0.1
  * @author: aliben.develop@gmail.com
  * @create_date: 2019-08-06 10:06:24
  * @last_modified_date: 2021-10-23 21:10:40
  * @brief: TODO
  * @details: TODO
  */

//INCLUDE
#include <design_pattern/prototype.hh>

//CODE
int main()
{

  std::shared_ptr<ISplitterPrototype> bin_splitter = std::make_shared<BinarySplitterPrototype>();
  std::shared_ptr<ISplitterPrototype> txt_splitter = std::make_shared<TxtSplitterPrototype>();
  std::shared_ptr<ISplitterPrototype> video_splitter = std::make_shared<VideoSplitterPrototype>();
  Exampler example_bin(bin_splitter);
  Exampler example_txt(txt_splitter);
  Exampler example_video(video_splitter);

  example_bin.Run();
  example_txt.Run();
  example_video.Run();
  return 0;
}
