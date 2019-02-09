#include <iostream>
#include "main/single.h"

using std::cout;
using std::endl;

int main() {
  int value;
  value = Singleton::GetInstance()->value();
  cout << "value: " << value << endl;;

  Singleton::GetInstance()->mutable_value() = 2;
  value = Singleton::GetInstance()->value();
  cout << "value: " << value << endl;

  Singleton::GetInstance()->mutable_value() = 4;
  value = Singleton::GetInstance()->value();
  cout << "value: " << value << endl;

  Singleton::GetInstance()->set_value(2);
  value = Singleton::GetInstance()->value();
  cout << "value: " << value << endl;

  Singleton::GetInstance()->set_value(4);
  value = Singleton::GetInstance()->value();
  cout << "value: " << value << endl;
}
