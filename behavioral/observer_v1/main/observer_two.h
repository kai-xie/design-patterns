#ifndef DP_OBSERVER_V1_OBSERVER_TWO_H_
#define DP_OBSERVER_V1_OBSERVER_TWO_H_

#include "main/observer_base.h"
class NotifierBase;

class ObserverTwo : public ObserverBase {
 public:
  explicit ObserverTwo(const std::string& name, NotifierBase* notifier)
      : ObserverBase(name, notifier) {}
  virtual void Update() override;
};

#endif
