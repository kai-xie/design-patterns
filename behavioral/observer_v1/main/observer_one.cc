#include <iostream>

#include "main/observer_one.h"
#include "main/notifier_base.h"

void ObserverOne::Update() {
  std::cout << "Notifier state: " << notifier_->state()
            << ", Observer: " << name_ << " updated!" << std::endl;
}
