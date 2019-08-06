/**
  * @Copyright (C) 2019 All rights reserved.
  * @date: 2019
  * @file: bridge.cc
  * @version: v0.0.1
  * @author: aliben.develop@gmail.com
  * @create_date: 2019-08-06 08:10:24
  * @last_modified_date: 2019-08-06 09:52:07
  * @brief: TODO
  * @details: TODO
  */

//INCLUDE
#include <design_pattern/bridge.hh>
#include <iostream>

//CODE

void PCMessagerImpl::PlaySound()
{
  std::cout << __func__  << ": PCMessagerImpl" << std::endl;
}

void PCMessagerImpl::DrawShape()
{
  std::cout << __func__  << ": PCMessagerImpl" << std::endl;
}

void PCMessagerImpl::WriteText()
{
  std::cout << __func__  << ": PCMessagerImpl" << std::endl;
}

void PCMessagerImpl::Connect()
{
  std::cout << __func__  << ": PCMessagerImpl" << std::endl;
}


void MobileMessagerImpl::PlaySound()
{
  std::cout << __func__  << ": MobileMessagerImpl" << std::endl;
}

void MobileMessagerImpl::DrawShape()
{
  std::cout << __func__  << ": MobileMessagerImpl" << std::endl;
}

void MobileMessagerImpl::WriteText()
{
  std::cout << __func__  << ": MobileMessagerImpl" << std::endl;
}

void MobileMessagerImpl::Connect()
{
  std::cout << __func__  << ": MobileMessagerImpl" << std::endl;
}

void MessagerLite::Login()
{
  ptr_message_impl_->PlaySound();
  std::cout << __func__  << ": MessagerLite" << std::endl;
  ptr_message_impl_->Connect();
}

void MessagerLite::SendMessage()
{
  ptr_message_impl_->PlaySound();
  std::cout << __func__  << ": MessagerLite" << std::endl;
  ptr_message_impl_->WriteText();
}

void MessagerLite::SendPicture()
{
  ptr_message_impl_->PlaySound();
  std::cout << __func__  << ": MessagerLite" << std::endl;
  ptr_message_impl_->DrawShape();
}


void MessagerPerfect::Login()
{
  ptr_message_impl_->PlaySound();
  std::cout << __func__  << ": MessagerPerfect" << std::endl;
  ptr_message_impl_->Connect();
}

void MessagerPerfect::SendMessage()
{
  ptr_message_impl_->PlaySound();
  std::cout << __func__  << ": MessagerPerfect" << std::endl;
  ptr_message_impl_->WriteText();
}

void MessagerPerfect::SendPicture()
{
  ptr_message_impl_->PlaySound();
  std::cout << __func__  << ": MessagerPerfect" << std::endl;
  ptr_message_impl_->DrawShape();
}


//============================
void Messager::Impl()
{
  this->Login();
  this->SendMessage();
  this->SendPicture();
}
