#include <string>
#include <memory>

#include "main/notifier_one.h"
#include "main/notifier_two.h"

#include "main/observer_one.h"
#include "main/observer_two.h"

int main() {
  std::unique_ptr<NotifierOne> p_n1 = std::make_unique<NotifierOne>();
  std::unique_ptr<ObserverOne> p_ob1 = std::make_unique<ObserverOne>("ob1", p_n1.get());
  std::unique_ptr<ObserverTwo> p_ob2 = std::make_unique<ObserverTwo>("ob2", p_n1.get());
  p_n1->Attach(p_ob1.get());
  p_n1->Attach(p_ob2.get());
  p_n1->Notify();

  std::unique_ptr<NotifierTwo> p_n2 = std::make_unique<NotifierTwo>("N2");
  std::unique_ptr<ObserverOne> p_ob3 = std::make_unique<ObserverOne>("ob3", p_n2.get());
  std::unique_ptr<ObserverTwo> p_ob4 = std::make_unique<ObserverTwo>("ob4", p_n2.get());
  p_n2->Attach(p_ob3.get());
  p_n2->Attach(p_ob4.get());
  p_n2->Notify();

  p_n2->set_state("N2 new state");
  p_n2->Notify();

  return 0;
}
