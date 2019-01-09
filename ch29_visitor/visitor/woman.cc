#include "visitor/woman.h"
#include "visitor/visitor_base.h"

void Woman::Accept(VisitorBase* state) {
  // std::cout << "woman accepting..." << std::endl;
  state->GetWomanConclusion(this);
}
