#include "app_state.h"

int AppState::increment(int num)
{
  value += num;
  return value;
}

int AppState::get()
{
  return value;
}

int AppState::set(int num)
{
  value = num;
  return value;
}

void AppState::lock()
{
  thisMutex.lock();
}

void AppState::unlock()
{
  thisMutex.unlock();
}
