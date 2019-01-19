#ifndef DP_PERSON_STRUCTURE_H_
#define DP_PERSON_STRUCTURE_H_

#include <algorithm>
#include <memory>
#include <vector>

#include "main/person.h"

class Person;
class VisitorBase;

class PersonStructure {
 public:
  void Accept(VisitorBase* state) {
    for (auto& person : persons_) {
      person->Accept(state);
    }
  }

  void Attach(Person* person) { persons_.emplace_back(person); }

  void Detach(Person* person) {
    auto iter = std::find(persons_.begin(), persons_.end(), person);
    if (iter != persons_.end()) {
      persons_.erase(iter);
    }
  }

 private:
  std::vector<Person*> persons_;
};
#endif
