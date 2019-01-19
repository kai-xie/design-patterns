#ifndef DP_OBSERVER_V1_OBSERVER_ONE_H_
#define DP_OBSERVER_V1_OBSERVER_ONE_H_

#include "main/observer_base.h"
class NotifierBase;

class ObserverOne : public ObserverBase {
 public:
  explicit ObserverOne(const std::string& name, NotifierBase* notifier)
      : ObserverBase(name, notifier) {}
  virtual void Update() override;
};

#endif
