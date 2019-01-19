#ifndef DP_PERSON_H_
#define DP_PERSON_H_

#include <string>
#include <iostream>
// #include "visitor/visitor_base.h"
class VisitorBase;

class Person {
 public:
  explicit Person(const std::string& name) : name_(name) {}

  virtual void Accept(VisitorBase* state) = 0;

  virtual const std::string& name() const { return name_; }

 private:
  std::string name_;
};
#endif  // DP_PERSON_H_
