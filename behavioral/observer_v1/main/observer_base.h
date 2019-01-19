#ifndef DP_OBSERVER_V1_OBSERVER_BASE_H_
#define DP_OBSERVER_V1_OBSERVER_BASE_H_

#include <string>

class NotifierBase;

class ObserverBase {
 public:
  explicit ObserverBase(const std::string& name, NotifierBase* notifier)
      : name_(name), notifier_(notifier) {}
  virtual void Update() = 0;

 protected:
  std::string name_;
  NotifierBase* notifier_;
};

#endif
