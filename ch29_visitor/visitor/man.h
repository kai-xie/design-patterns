#ifndef DP_MAN_H_
#define DP_MAN_H_

#include "visitor/person.h"
class VisitorBase;

class Man : public Person {
 public:
  explicit Man(const std::string& name) : Person(name) {}
  virtual void Accept(VisitorBase* state) override;
};
#endif  // DP_MAN_H_
