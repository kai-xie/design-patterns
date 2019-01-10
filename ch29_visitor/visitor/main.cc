
#include <iostream>
#include <memory>

#include "visitor/man.h"
#include "visitor/person_structure.h"
#include "visitor/visitor_failed.h"
#include "visitor/visitor_success.h"
#include "visitor/woman.h"

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
