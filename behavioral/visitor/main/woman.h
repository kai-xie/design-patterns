#ifndef DP_WOMAN_H_
#define DP_WOMAN_H_

#include "main/person.h"
class VisitorBase;

class Woman : public Person {
 public:
  explicit Woman(const std::string& name) : Person(name) {}

  virtual void Accept(VisitorBase* state) override;
};
#endif  // DP_WOMAN_H_
