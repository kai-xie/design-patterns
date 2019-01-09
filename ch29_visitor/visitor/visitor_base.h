#ifndef DP_VISITOR_BASE_H_
#define DP_VISITOR_BASE_H_

#include <string>

class Person;

class VisitorBase {
 public:
  VisitorBase() : status_("") {}

  virtual void GetManConclusion(Person* person) = 0;
  virtual void GetWomanConclusion(Person* person) = 0;

  virtual const std::string status() const { return status_; }

 protected:
  std::string status_;
};
#endif  // DP_VISITOR_BASE_H_
