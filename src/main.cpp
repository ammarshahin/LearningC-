#include <bits/stdc++.h>
#include <mutex>
#include <thread>
#include <chrono>

// void doSomething(int id);
// void spawnThreads(int n);
using namespace std;

int main()
{
    mutex mut;
    thread th1([&]() {
        int x = 0;
        while (x < 100)
        {
            mut.lock();
            cout << x << "  Ammar" << endl;
            x += 2;
            mut.unlock();
            this_thread::sleep_for(chrono::milliseconds(1));
        }
    });

    thread th2([&]() {
        int x = 1;
        while (x < 100)
        {
            mut.lock();
            cout << x << "  Shahin" << endl;
            x += 2;
            mut.unlock();
            this_thread::sleep_for(chrono::milliseconds(1));
        }
    });

    th1.join();
    th2.join();

    //     spawnThreads(9);

    return 0;
}

// void doSomething(int id)
// {
//     mut.lock();
//     cout
//         << id << ": Ammar Shahin \n";
//     mut.unlock();
// }

// void spawnThreads(int n)
// {
//     std::vector<thread> threads(n);

//     for (int i = 0; i < n; i++)
//         threads[i] = thread(doSomething, i + 1);

//     for (auto &th : threads)
//         th.join();
// }