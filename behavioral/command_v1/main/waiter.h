#ifndef DP_COMMAND_V1_WAITER_H_
#define DP_COMMAND_V1_WAITER_H_

#include <iostream>
#include <vector>

#include "main/order.h"

class Waiter {
 public:
  Waiter() = default;
  virtual ~Waiter() = default;

  virtual void AddOrder(const Order* order);
  virtual void RemoveOrder(Order* order);
  virtual void RemoveOrder(Order* order, int num);

  virtual void PlaceOrder() {
    for (auto order : orders_) {
      order->Execute();
    }
  }

 protected:
  std::vector<Order*> orders_;
};

void Waiter::AddOrder(const Order* order) {
  orders_.emplace_back(const_cast<Order*>(order));
}

void Waiter::RemoveOrder(Order* order) {
  auto iter = std::find(orders_.begin(), orders_.end(), order);
  if (iter != orders_.end()) {
    orders_.erase(iter);
  }
}

void Waiter::RemoveOrder(Order* order, int num) {
  auto iter = std::find(orders_.begin(), orders_.end(), order);
  if (iter != orders_.end()) {
    order->Remove(num);
    if (order->num() == 0) {
      orders_.erase(iter);
    }
  }
}

#endif  // DP_COMMAND_V1_WAITER_H_
