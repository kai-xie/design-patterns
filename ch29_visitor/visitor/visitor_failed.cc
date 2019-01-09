#include <iostream>

#include "visitor/person.h"
#include "visitor/visitor_failed.h"

void VisitorFailed::GetManConclusion(Person* person) {
  std::cout << "When " << person->name() << " " << this->status()
            << " : drunk." << std::endl;
}

void VisitorFailed::GetWomanConclusion(Person* person) {
  std::cout << "When " << person->name() << " " << this->status()
            << " : tears." << std::endl;
}
