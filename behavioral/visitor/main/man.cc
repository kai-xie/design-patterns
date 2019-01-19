
#include "main/man.h"
#include "main/visitor_base.h"

void Man::Accept(VisitorBase* state) {
  // std::cout << "man accepting..." << std::endl;
  state->GetManConclusion(this);
}