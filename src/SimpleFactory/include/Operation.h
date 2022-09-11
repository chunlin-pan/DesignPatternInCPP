#pragma once

class Operation {
public:
  virtual int getResult() = 0;
  int numberA, numberB;
};