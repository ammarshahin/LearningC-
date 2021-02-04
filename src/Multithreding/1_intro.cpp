#include <iostream>
#include <thread>

static int temp = true;

class myClass
{
  public:
    void operator()(int id)
    {
        while (temp > 0)
        {
            std::cout << id << std::endl;
        }
    }
};

void foo(int id)
{
    while (temp > 0)
    {
        std::cout << id << std::endl;
    }
}

int main()
{
    std::thread th1(foo, 1);
    std::thread th2(myClass(), 2);
    //std::thread th3(foo, 3);

    while (temp > 0)
    {
        std::cin >> temp;
    }

    th1.join();
    th2.join();

    std::cout << "threads are terminated" << std::endl;

    return 0;
}