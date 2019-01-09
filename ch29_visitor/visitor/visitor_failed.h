#ifndef DP_VISITOR_FAILED_H_
#define DP_VISITOR_FAILED_H_

#include <iostream>
#include <string>

#include "visitor/visitor_base.h"

class Person;

class VisitorFailed : public VisitorBase {
 public:
  VisitorFailed() { status_ = "failed"; }

  virtual void GetManConclusion(Person* person) override;
  virtual void GetWomanConclusion(Person* person) override;
};
#endif  // DP_VISITOR_FAILED_H_
