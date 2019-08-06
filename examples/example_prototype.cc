/**
  * @Copyright (C) 2019 All rights reserved.
  * @date: 2019
  * @file: example_prototype.cc
  * @version: v0.0.1
  * @author: aliben.develop@gmail.com
  * @create_date: 2019-08-06 10:06:24
  * @last_modified_date: 2019-08-06 14:14:28
  * @brief: TODO
  * @details: TODO
  */

//INCLUDE
#include <design_pattern/prototype.hh>

//CODE
int main()
{

  ISplitterPrototype* bin_splitter = new BinarySplitterPrototype();
  ISplitterPrototype* txt_splitter = new TxtSplitterPrototype();
  ISplitterPrototype* video_splitter = new VideoSplitterPrototype();
  Exampler example_bin(bin_splitter);
  Exampler example_txt(txt_splitter);
  Exampler example_video(video_splitter);

  example_bin.Run();
  example_txt.Run();
  example_video.Run();
  return 0;
}
