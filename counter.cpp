#include <thread>
#include <mutex>

#include "counter.h"
#include "app_state.h"

Counter::Counter(AppState* state, int num) : state(state), num(num)
{
}

void Counter::print()
{
  for (int i = 1; i <= num; i++)
  {
    state->increment(10);
    state->lock();
    std::cout << std::this_thread::get_id() << " " << i << "/" << num << " -- " << state->get() << std::endl;
    state->unlock();
  }
}
