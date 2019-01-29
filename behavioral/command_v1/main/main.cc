#include <iostream>
#include <memory>

#include "main/cook.h"
#include "main/order.h"
#include "main/waiter.h"

int main() {
  auto cook = std::make_unique<Cook>();
  auto appetizer = std::make_unique<Appetizer>(cook.get(), 1);
  auto beef_steak = std::make_unique<BeefSteak>(cook.get(), 3);
  auto fruit_salad = std::make_unique<FruitSalad>(cook.get(), 1);

  auto waiter = std::make_unique<Waiter>();
  std::cout << "1st order: " << std::endl;
  waiter->AddOrder(appetizer.get());
  waiter->AddOrder(beef_steak.get());
  waiter->AddOrder(fruit_salad.get());
  waiter->PlaceOrder();
  std::cout << std::endl;

  std::cout << "2nd order: (removed appetizer)" << std::endl;
  waiter->RemoveOrder(appetizer.get());
  waiter->PlaceOrder();
  std::cout << std::endl;

  std::cout << "3rd order: (removed 1 beef steak)" << std::endl;
  waiter->RemoveOrder(beef_steak.get(), 1);
  waiter->PlaceOrder();
  std::cout << std::endl;

  std::cout << "4th order: (removed 5 beef steak)" << std::endl;
  waiter->RemoveOrder(beef_steak.get(), 5);
  waiter->PlaceOrder();
  std::cout << std::endl;

  return 0;
}
