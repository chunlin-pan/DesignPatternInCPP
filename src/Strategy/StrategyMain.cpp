#include "CashContext.h"
#include <iostream>

int main() {
  CashContext cc1(1);
  CashContext cc2(2);
  CashContext cc3(3);

  double result1 = 0;
  double result2 = 0;
  double result3 = 0;
  result1 = cc1.getResult(100);
  result2 = cc2.getResult(1004);
  result3 = cc3.getResult(1200);

  std::cout << "result1: " << result1 << "\n";
  std::cout << "result2: " << result2 << "\n";
  std::cout << "result3: " << result3 << "\n";
  return 0;
}