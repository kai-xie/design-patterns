
#include <iostream>
#include <memory>

#include "visitor/person_structure.h"
#include "visitor/man.h"
#include "visitor/woman.h"
// #include "visitor/visitor_base.h"
#include "visitor/visitor_success.h"
#include "visitor/visitor_failed.h"

using namespace std;
int main() {
  PersonStructure ps;
  auto man = std::unique_ptr<Man>(new Man("man"));
  auto woman = std::unique_ptr<Woman>(new Woman("woman"));
  ps.Attach(man.get());
  ps.Attach(woman.get());

  std::unique_ptr<VisitorSuccess> v_s(new VisitorSuccess());
  ps.Accept(v_s.get());
  std::unique_ptr<VisitorFailed> v_f(new VisitorFailed());
  ps.Accept(v_f.get());


  return 0;
}
