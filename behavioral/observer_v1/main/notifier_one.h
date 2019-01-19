#ifndef DP_OBSERVER_V1_NOTIFIER_ONE_H_
#define DP_OBSERVER_V1_NOTIFIER_ONE_H_

#include <string>
#include <vector>
#include "main/notifier_base.h"

// class ObserverBase;

class NotifierOne: public NotifierBase {
 public:
  explicit NotifierOne();
  explicit NotifierOne(const std::string& state) : NotifierBase(state) {}
};

#endif
