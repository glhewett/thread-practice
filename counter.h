#include <iostream>

#include "app_state.h"

class Counter
{

public:
  Counter(AppState* state, int num);
  ~Counter() {}
  void print();

private:
  AppState* state;
  int num = 0;
};
