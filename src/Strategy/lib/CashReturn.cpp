#include "CashReturn.h"

double CashReturn::acceptCash(double cash) {
  if (cash >= this->moneyCondition) {
    return cash - this->moneyReturn;
  }
  return cash;
}