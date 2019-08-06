#ifndef __BRIDGE_HH__
#define __BRIDGE_HH__
/**-----------------------------------------------
  * @Copyright (C) 2019 All rights reserved.
  * @date: 2019
  * @file: bridge.hh
  * @version: v0.0.1
  * @author: aliben.develop@gmail.com
  * @create_date: 2019-08-06 08:10:24
  * @last_modified_date: 2019-08-06 09:54:23
  * @brief: TODO
  * @details: TODO
  *-----------------------------------------------*/

// Header include
#include <string>

// Declaration
class MessagerImpl
{
  public:
    virtual void PlaySound() = 0;
    virtual void DrawShape() = 0;
    virtual void WriteText() = 0;
    virtual void Connect() = 0;
    virtual ~MessagerImpl() = default;
};

class PCMessagerImpl : public MessagerImpl
{
  public:
    virtual void PlaySound() override;
    virtual void DrawShape() override;
    virtual void WriteText() override;
    virtual void Connect() override;
    virtual ~PCMessagerImpl() = default;
};

class MobileMessagerImpl : public MessagerImpl
{
  public:
    virtual void PlaySound() override;
    virtual void DrawShape() override;
    virtual void WriteText() override;
    virtual void Connect() override;
    virtual ~MobileMessagerImpl() = default;
};

class Messager
{
  public:
    // Core Functions regarding bussiness
    Messager(MessagerImpl* messager_impl) : ptr_message_impl_(messager_impl){};
    virtual void Login() = 0;
    virtual void SendMessage() = 0;
    virtual void SendPicture() = 0;
    virtual void Impl();
    virtual ~Messager() = default;

    /* // Functions regarding Platform */
    /* virtual void PlaySound() = 0; */
    /* virtual void DrawShape() = 0; */
    /* virtual void WriteText() = 0; */
    /* virtual void Connect() = 0; */
  protected:
    MessagerImpl* ptr_message_impl_;
};


class MessagerLite : public Messager
{
  public:
    MessagerLite(MessagerImpl* messager_impl) : Messager(messager_impl){};
    virtual ~MessagerLite() = default;

    virtual void Login() override;
    virtual void SendMessage() override;
    virtual void SendPicture() override;
    
    //virtual void Impl() override;
};

class MessagerPerfect : public Messager
{
  public:
    MessagerPerfect(MessagerImpl* messager_impl) : Messager(messager_impl){};
    virtual ~MessagerPerfect() = default;

    virtual void Login() override;
    virtual void SendMessage() override;
    virtual void SendPicture() override;
    
    //virtual void Impl() override;
};

#endif // __BRIDGE_HH__
