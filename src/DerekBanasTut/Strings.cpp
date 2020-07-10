#include <cstdlib>
#include <stdint.h>
#include <iostream>

int main()
{
    std::string sAge = "0";
    std::cout << "Enter Your age: ";
    getline(std::cin, sAge);
    uint8_t u8Age = stoi(sAge, u8Age);
    return 0;
}