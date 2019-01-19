#include <algorithm>

#include "main/notifier_base.h"
#include "main/observer_base.h"

void NotifierBase::Attach(ObserverBase* observer) {
  observers_.emplace_back(observer);
}

void NotifierBase::Detach(ObserverBase* observer) {
  auto iter = std::find(observers_.begin(), observers_.end(), observer);
  if (iter != observers_.end()) {
    observers_.erase(iter);
  }
}

void NotifierBase::Notify() {
  for (auto& ob : observers_) {
    ob->Update();
  }
}
