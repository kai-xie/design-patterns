#ifndef DP_MAN_H_
#define DP_MAN_H_

#include "visitor/visitor_base.h"
#include "visitor/person.h"

class Man: public Person {
 public:
  explicit Man(const std::string& name): Person(name) {}
  virtual void Accept(VisitorBase* state) override;

//  private:
//   std::string name_;

};
#endif  // DP_MAN_H_
