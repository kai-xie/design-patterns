#ifndef DP_CHAIN_OF_RESPONSIBILITY_V1_MANAGER_H_
#define DP_CHAIN_OF_RESPONSIBILITY_V1_MANAGER_H_

#include <string>

using namespace std;
class Request;

class Manager {
 public:
  explicit Manager(const std::string name) : name_(name) {}
  virtual ~Manager() = default;

  virtual void HandleRequest(Request* req) = 0;

  virtual void set_superior(Manager* superior) { superior_ = superior; }

  virtual Manager& SupervisedBy(Manager* sup) {
    superior_ = sup;
    return *superior_;
  }

 protected:
  string name_;
  Manager* superior_;
};

class BaseManager : public Manager {
 public:
  explicit BaseManager(const std::string name) : Manager(name) {}
  virtual void HandleRequest(Request* req) override;
};

class Director : public Manager {
 public:
  explicit Director(const std::string name) : Manager(name) {}
  virtual void HandleRequest(Request* req) override;
};

class VicePresident : public Manager {
 public:
  explicit VicePresident(const std::string name) : Manager(name) {}
  virtual void HandleRequest(Request* req) override;
};

#endif  // DP_CHAIN_OF_RESPONSIBILITY_V1_MANAGER_H_
