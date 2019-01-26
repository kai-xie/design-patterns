#ifndef DP_CHAIN_OF_RESPONSIBILITY_V1_REQUEST_H_
#define DP_CHAIN_OF_RESPONSIBILITY_V1_REQUEST_H_

#include <string>

enum class RequestType { TimeOff, PayRaise };

class Request {
 public:
  Request(std::string name, RequestType rt, int amount)
      : name_(name), req_type_(rt), amount_(amount) {}

  RequestType type() { return req_type_; }

  int amount() const { return amount_; }

  const std::string& name() const { return name_; }

 protected:
  std::string name_;

  RequestType req_type_;

  // Unit: days for RequestType::Timeoff
  // Unit: dollars for RequestType::PayRaise
  int amount_;
};

#endif  // DP_CHAIN_OF_RESPONSIBILITY_V1_REQUEST_H_
