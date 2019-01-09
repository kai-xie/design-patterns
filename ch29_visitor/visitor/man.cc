
#include "visitor/man.h"
#include "visitor/visitor_base.h"

void Man::Accept(VisitorBase* state) {
  // std::cout << "man accepting..." << std::endl;
  state->GetManConclusion(this);
}