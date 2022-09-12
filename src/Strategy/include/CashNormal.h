#pragma once
#include "CashSuper.h"

class CashNormal : public CashSuper {
public:
  double acceptCash(double cash) override;
};