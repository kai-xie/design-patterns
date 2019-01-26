#include <iostream>

#include "manager.h"
#include "request.h"

void my_delete(void* ptr) {
  if (ptr != nullptr) {
    delete ptr;
  }
}

int main() {
  BaseManager* bm = new BaseManager("base_manager");
  Director* dr = new Director("director");
  VicePresident* vp = new VicePresident("vice_president");

  // bm->set_superior(dr);
  // dr->set_superior(vp);

  bm->SupervisedBy(dr).SupervisedBy(vp);

  Request* req1 = new Request("Tom", RequestType::TimeOff, 3);
  Request* req2 = new Request("Peter", RequestType::TimeOff, 40);
  Request* req3 = new Request("Tony", RequestType::PayRaise, 90000);
  Request* req4 = new Request("Charlie", RequestType::PayRaise, 150000);

  bm->HandleRequest(req1);
  bm->HandleRequest(req2);
  bm->HandleRequest(req3);
  bm->HandleRequest(req4);

  my_delete(bm);
  my_delete(dr);
  my_delete(vp);

  return 0;
}