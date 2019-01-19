#include <iostream>

#include "main/person.h"
#include "main/visitor_failed.h"

void VisitorFailed::GetManConclusion(Person* person) {
  std::cout << "When " << person->name() << " " << this->status() << " : drunk."
            << std::endl;
}

void VisitorFailed::GetWomanConclusion(Person* person) {
  std::cout << "When " << person->name() << " " << this->status() << " : tears."
            << std::endl;
}
