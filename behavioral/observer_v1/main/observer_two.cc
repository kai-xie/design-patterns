#include <iostream>

#include "main/observer_two.h"
#include "main/notifier_base.h"

void ObserverTwo::Update() {
  std::cout << "Notifier state: " << notifier_->state()
            << ", Observer: " << name_ << " updated!" << std::endl;
}
