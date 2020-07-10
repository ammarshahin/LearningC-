#include <cstdlib>
#include <stdint.h>
#include <iostream>

int main()
{
    std::string sAge = "0";
    std::cout << "Enter Your age: ";
    getline(std::cin, sAge);
    uint8_t u8Age = 0;
    u8Age = std::stoi(sAge);
    std::cout << "Your age is: " << u8Age << std::endl;
    return 0;
}