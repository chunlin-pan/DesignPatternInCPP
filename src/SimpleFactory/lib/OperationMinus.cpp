#include "OperationMinus.h"
#include <iostream>

int OperationMinus::getResult() {
  std::cout << "class: minus\n";
  return this->numberA - this->numberB;
}