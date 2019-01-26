#include <iostream>

#include "main/manager.h"
#include "main/request.h"

void BaseManager::HandleRequest(Request* req) {
  if (req->type() == RequestType::TimeOff && req->amount() < 5) {
    std::cout << req->name() << "'s Time-off " << req->amount()
              << " days approved by " << name_ << std::endl;
  } else if (superior_ != nullptr) {
    superior_->HandleRequest(req);
  }
}

void Director::HandleRequest(Request* req) {
  if (req->type() == RequestType::TimeOff && req->amount() < 10) {
    std::cout << req->name() << "'s Time-off " << req->amount()
              << " days approved by " << name_ << std::endl;
  } else if (req->type() == RequestType::PayRaise && req->amount() < 100000) {
    std::cout << req->name() << "'s Pay-Raise " << req->amount()
              << " dollars approved by " << name_ << std::endl;
  } else if (superior_ != nullptr) {
    superior_->HandleRequest(req);
  }
}

void VicePresident::HandleRequest(Request* req) {
  if (req->type() == RequestType::TimeOff) {
    if (req->amount() < 20) {
      std::cout << req->name() << "'s Time-off " << req->amount()
                << " days approved by " << name_ << std::endl;
    } else {
      std::cout << req->name() << "'s Time-off " << req->amount()
                << " days suspended at " << name_ << std::endl;
    }
  } else {
    if (req->amount() < 200000) {
      std::cout << req->name() << "'s Pay-Raise " << req->amount()
                << " dollars approved by " << name_ << std::endl;
    } else {
      std::cout << req->name() << "'s Pay-Raise " << req->amount()
                << " dollars suspended at " << name_ << std::endl;
    }
  }
}
