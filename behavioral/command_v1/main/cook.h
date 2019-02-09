#ifndef DP_COMMAND_V1_COOK_H_
#define DP_COMMAND_V1_COOK_H_

#include <iostream>

class Cook {
 public:
  Cook() = default;
  virtual ~Cook() = default;

  virtual void MakeAppetizer(int num) {
    std::cout << num << " Appetizer made." << std::endl;
  }

  virtual void MakeBeafSteak(int num) {
    std::cout << num << " Beaf Steaks made." << std::endl;
  }

  virtual void MakeFruitSalad(int num) {
    std::cout << num << " Fruit Salad made." << std::endl;
  }
};

#endif  // DP_COMMAND_V1_COOK_H_
