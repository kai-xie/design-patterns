#ifndef DP_OBSERVER_V1_NOTIFIER_BASE_H_
#define DP_OBSERVER_V1_NOTIFIER_BASE_H_

#include <string>
#include <vector>

class ObserverBase;

class NotifierBase {
 public:
  explicit NotifierBase() : state_("Notifier_Base default status") {}
  explicit NotifierBase(const std::string& state) : state_(state) {}
  virtual ~NotifierBase() = default;

  virtual void Attach(ObserverBase* observer);
  virtual void Detach(ObserverBase* observer);

  virtual void Notify();

  virtual const std::string& state() const { return state_; }
  virtual void set_state(const std::string& st) { state_ = st; }

 protected:
  std::string state_;
  std::vector<ObserverBase*> observers_;
};

#endif
