#include <cstdlib>
#include <stdint.h>
#include <iostream>

int main()
{
    int arr[10] = {1};
    for (uint8_t i = 0; i < 10; i++)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
    return 0;
}