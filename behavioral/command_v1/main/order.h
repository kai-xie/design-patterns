#ifndef DP_COMMAND_V1_ORDER_H_
#define DP_COMMAND_V1_ORDER_H_

#include <algorithm>
#include <iostream>

#include "main/cook.h"

class Order {
 public:
  // typedef (void Cook::*Action)();
  Order(Cook* cook, int num) : cook_(cook), num_(num) {}
  virtual ~Order() = default;

  int num() const { return num_; }
  void set_num(int num) { num_ = num; }

  void Remove(int num) { num_ = std::max(0, num_ - num); }

  virtual void Execute() = 0;

 protected:
  Cook* cook_;
  // Action action_;
  int num_;
};

class Appetizer : public Order {
 public:
  Appetizer(Cook* cook, int num) : Order(cook, num) {}

  virtual void Execute() override { cook_->MakeAppetizer(num_); }
};

class BeefSteak : public Order {
 public:
  BeefSteak(Cook* cook, int num) : Order(cook, num) {}

  virtual void Execute() override { cook_->MakeBeafSteak(num_); }
};

class FruitSalad : public Order {
 public:
  FruitSalad(Cook* cook, int num) : Order(cook, num) {}

  virtual void Execute() override { cook_->MakeFruitSalad(num_); }
};

#endif  // DP_COMMAND_V1_ORDER_H_
