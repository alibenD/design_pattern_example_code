#ifndef __STATE_HH__
#define __STATE_HH__
/**-----------------------------------------------
  * @Copyright (C) 2019 All rights reserved.
  * @date: 2019
  * @file: state.hh
  * @version: v0.0.1
  * @author: aliben.develop@gmail.com
  * @create_date: 2019-08-06 21:32:48
  * @last_modified_date: 2021-10-23 21:30:45
  * @brief: TODO
  * @details: TODO
  *-----------------------------------------------*/

// Header include
#include <memory>

// Declaration

class NetworkState
{
  public:
    std::shared_ptr<NetworkState> ptr_next_state_;
    virtual void Operation1() = 0;
    virtual void Operation2() = 0;
    virtual void Operation3() = 0;

    virtual ~NetworkState() = default;
};

class OpenState : public NetworkState
{
  public:
    static std::shared_ptr<NetworkState> getInstance();
    virtual ~OpenState() = default;
    virtual void Operation1() override;
    virtual void Operation2() override;
    virtual void Operation3() override;

  //private:
    OpenState() = default;
    OpenState(const OpenState& other) = default;
    static std::shared_ptr<NetworkState> ptr_instance_;
};


class ConnectState : public NetworkState
{
  public:
    static std::shared_ptr<NetworkState> getInstance();
    virtual ~ConnectState() = default;
    virtual void Operation1() override;
    virtual void Operation2() override;
    virtual void Operation3() override;

  //private:
    ConnectState() = default;
    ConnectState(const ConnectState& other) = default;
    static std::shared_ptr<NetworkState> ptr_instance_;
};

class CloseState : public NetworkState
{
  public:
    static std::shared_ptr<NetworkState> getInstance();
    virtual ~CloseState() = default;
    virtual void Operation1() override;
    virtual void Operation2() override;
    virtual void Operation3() override;

  //private:
    CloseState() = default;
    CloseState(const CloseState& other) = default;
    static std::shared_ptr<NetworkState> ptr_instance_;
};

class NetworkProcessor
{
  public:
    NetworkProcessor(std::shared_ptr<NetworkState> ptr_state){ this->ptr_state_ = ptr_state; }
    void Operation1()
    {
      ptr_state_->Operation1();
      ptr_state_ = ptr_state_->ptr_next_state_;
    }

    void Operation2()
    {
      ptr_state_->Operation2();
      ptr_state_ = ptr_state_->ptr_next_state_;
    }

    void Operation3()
    {
      ptr_state_->Operation3();
      ptr_state_ = ptr_state_->ptr_next_state_;
    }

  //private:
    std::shared_ptr<NetworkState> ptr_state_;
};
#endif // __STATE_HH__
