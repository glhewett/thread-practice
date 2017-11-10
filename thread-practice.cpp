#include <iostream>
#include <thread>

#include "counter.h"
#include "app_state.h"


int main(int argc, const char** argv)
{
  AppState* app = new AppState();

  Counter* c10 = new Counter(app, 10);
  Counter* c20 = new Counter(app, 20);
  Counter* c30 = new Counter(app, 30);

  std::thread t10(&Counter::print, c10);
  std::thread t20(&Counter::print, c20);
  std::thread t30(&Counter::print, c30);

  t10.join();
  t20.join();
  t30.join();
}
