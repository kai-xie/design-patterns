#ifndef DP_OBSERVER_V1_NOTIFIER_TWO_H_
#define DP_OBSERVER_V1_NOTIFIER_TWO_H_

#include <string>
#include <vector>
#include "main/notifier_base.h"

class NotifierTwo: public NotifierBase {
 public:
  explicit NotifierTwo();
  explicit NotifierTwo(const std::string& state) : NotifierBase(state) {}
};

#endif
