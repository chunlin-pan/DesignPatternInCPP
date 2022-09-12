#pragma once
#include "CashSuper.h"

class CashContext {
public:
  CashContext(int type);
  double getResult(int cash);

private:
  CashSuper *cs = nullptr;
};