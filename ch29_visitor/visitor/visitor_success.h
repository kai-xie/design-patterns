#ifndef DP_VISITOR_SUCCESS_H_
#define DP_VISITOR_SUCCESS_H_

#include <iostream>
#include <string>

#include "visitor/visitor_base.h"

class Person;

class VisitorSuccess : public VisitorBase {
 public:
  VisitorSuccess() { status_ = "success"; }

  virtual void GetManConclusion(Person* person) override;
  virtual void GetWomanConclusion(Person* person) override;
};
#endif  // DP_VISITOR_SUCCESS_H_
