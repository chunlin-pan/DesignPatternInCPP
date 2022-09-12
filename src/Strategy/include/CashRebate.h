#pragma once
#pragma once
#include "CashSuper.h"

class CashRebate : public CashSuper {
public:
  double acceptCash(double cash) override;

private:
  double ratio = 0.8;
};