#include <iostream>
#include <cstdlib>

int main(int argc, char const *argv[])
{
    int x, y;
    std::cin >> x >> y;
    try
    {
        if (y == 0)
            throw std::exception();
        else
            std::cout << x / y << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }

    std::cout << "The program continues." << std::endl;
    return 0;
}
