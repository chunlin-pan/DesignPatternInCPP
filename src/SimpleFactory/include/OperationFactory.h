#pragma once
#include "Operation.h"

class OperationFactory {
public:
  static Operation* creatOperate(int op);
};