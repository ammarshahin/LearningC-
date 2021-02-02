#include <iostream>
#include <thread>

static int temp = true;

void foo(int id)
{
    while (temp > 0)
    {
        std::cin >> temp;
        std::cout << "this thread has the id" << id << std::endl;
    }
}

int main()
{
    std::thread th1(foo, 1);
    //std::thread th2(foo, 2);
    //std::thread th3(foo, 3);

    while (temp > 0)
    {
        ;
    }

    th1.join();

    std::cout << "threads are terminated" << std::endl;
    // th2.join();
    // th3.join();5
    return 0;
}