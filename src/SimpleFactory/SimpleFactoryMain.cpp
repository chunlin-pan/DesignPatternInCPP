#include <iostream>
#include "Operation.h"
#include "OperationFactory.h"

int main() {
  int result = 0;
  Operation *operation;
  operation = OperationFactory::creatOperate(1);
  operation->numberA = 1;
  operation->numberB = 2;
  result = operation->getResult();
  std::cout << "numberA: "<< operation->numberA << "\nnumberB: "<< operation->numberB << "\n" << result << "\n\n";

  operation = OperationFactory::creatOperate(2);
  operation->numberA = 6;
  operation->numberB = 1;
  result = operation->getResult();

  std::cout << "numberA: "<< operation->numberA << "\nnumberB: "<< operation->numberB << "\n" << result << "\n\n";
  return 0;
}