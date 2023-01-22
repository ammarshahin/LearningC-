//! lock_guard<Mutex> to wrap the mutex and automatically unlock it when it goes out of scope (Can be locked and unlocked only once inside the defining scope)
//! unique_lock<Mutex> to wrap the mutex to automatically unlock it when it goes out of scope, but can also be unlocked using .unlock helper function (Can be locked and unlocked a number of times inside the defining scope)

//* unique_lock can take a policy parameter as a second parameter
//* 1- adopt_lock >> treat the incoming mutex as it's already locked
//* 2- defer_lock >> don't lock it in the constructor (I'll lock it later)
//* 3- try_to_lock >> try to lock it, if you can't just continue the execution

#include <bits/stdc++.h>
#include <mutex>
#include <thread>
#include <chrono>

using namespace std;

int main()
{
    mutex mut;
    thread th1([&]() {
        int x = 0;
        unique_lock<mutex> g(mut, defer_lock);
        while (x < 100)
        {
            g.lock();
            cout << x << "  Ammar" << endl;
            x += 2;
            this_thread::sleep_for(chrono::milliseconds(10));
            g.unlock();
            this_thread::sleep_for(chrono::milliseconds(10));
        }
    });

    thread th2([&]() {
        int x = 1;
        unique_lock<mutex> g(mut, defer_lock);
        while (x < 100)
        {
            g.lock();
            cout << x << "  Shahin" << endl;
            x += 2;
            this_thread::sleep_for(chrono::milliseconds(10));
            g.unlock();
            this_thread::sleep_for(chrono::milliseconds(10));
        }
    });

    if (th1.joinable())
        th1.join();
    if (th2.joinable())
        th2.join();

    return 0;
}