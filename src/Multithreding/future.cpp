#include <bits/stdc++.h>
#include <mutex>
#include <thread>
#include <chrono>
#include <future>

using namespace std;

void threadFunc(promise<int> &&p)
{
    // p.set_value(5);

    p.set_exception(make_exception_ptr(runtime_error("RT_Error!!!")));

    this_thread::sleep_for(chrono::milliseconds(1000));
    int i = 0;
    while (i++ < 10)
    {
        cout << "Processing\n";
        this_thread::sleep_for(chrono::milliseconds(100));
    }
}

int main()
{
    promise<int> pro;
    future<int> fut = pro.get_future();

    thread th(threadFunc, move(pro));

    if (fut.valid())   //* check if fut.get() can return a value or not (fut.get() can only been called once)
    {
        try
        {
            cout << "result = " << fut.get() << endl;   //* get either the value or an exception to handle later
        }
        catch (exception &ex)
        {
            cout << "Exception happened: " << ex.what() << endl;
        }
    }

    if (th.joinable())
        th.join();

    return 0;
}
