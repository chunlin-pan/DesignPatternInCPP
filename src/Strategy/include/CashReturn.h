#pragma once
#include "CashSuper.h"

class CashReturn : public CashSuper {
public:
  double acceptCash(double cash) override;

private:
  int moneyCondition = 100;
  int moneyReturn = 20;
};