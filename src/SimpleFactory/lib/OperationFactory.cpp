#include "OperationFactory.h"
#include "Operation.h"
#include "OperationAdd.h"
#include "OperationMinus.h"

Operation* OperationFactory::creatOperate(int op) {
  Operation *operation = nullptr;
  if (op == 1) {
    operation = new OperationAdd();
  } else if (op == 2) {
    operation = new OperationMinus();
  }
  return operation;
}