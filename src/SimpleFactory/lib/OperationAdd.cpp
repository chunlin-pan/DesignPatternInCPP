#include "OperationAdd.h"
#include <iostream>
int OperationAdd::getResult() {
  std::cout << "class: add\n";
  return this->numberA + this->numberB;
}