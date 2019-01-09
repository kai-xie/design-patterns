#ifndef DP_WOMAN_H_
#define DP_WOMAN_H_

#include "visitor/person.h"
#include "visitor/visitor_base.h"

class Woman : public Person {
 public:
  explicit Woman(const std::string& name) : Person(name) {}

  virtual void Accept(VisitorBase* state) override;
};
#endif  // DP_WOMAN_H_
