#include "CashContext.h"
#include "CashNormal.h"
#include "CashRebate.h"
#include "CashReturn.h"

CashContext::CashContext(int type) {
    switch (type) {
    case 1:
      this->cs = new CashNormal();
      break;
    case 2:
      this->cs = new CashRebate();
      break;
    case 3:
      this->cs = new CashReturn();
      break;
    default:
      this->cs = new CashNormal();
      break;
    }
}
double CashContext::getResult(int cash){
  return cs->acceptCash(cash);
}