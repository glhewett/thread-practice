#ifndef APP_STATE_H
#define APP_STATE_H

#include <mutex>


class AppState
{

public:
    AppState() {}
    ~AppState() {}
    int increment(int num);
    int get();
    int set(int num);
    void lock();
    void unlock();

private:
    int value = 0;
    std::mutex thisMutex;
};
#endif
