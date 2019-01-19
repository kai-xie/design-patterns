#include <iostream>

#include "main/person.h"
#include "main/visitor_success.h"

void VisitorSuccess::GetManConclusion(Person* person) {
  std::cout << "When " << person->name() << " " << this->status()
            << " : a great women stands behind him." << std::endl;
}

void VisitorSuccess::GetWomanConclusion(Person* person) {
  std::cout << "When " << person->name() << " " << this->status()
            << " : a loser man stands behind her." << std::endl;
}
