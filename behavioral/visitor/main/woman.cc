#include "main/woman.h"
#include "main/visitor_base.h"

void Woman::Accept(VisitorBase* state) {
  // std::cout << "woman accepting..." << std::endl;
  state->GetWomanConclusion(this);
}
