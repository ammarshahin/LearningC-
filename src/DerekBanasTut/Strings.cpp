#include <cstdint>
#include <iostream>
#include <string>

int main()
{
    std::string sAge = "0";
    std::cout << "Enter Your age: ";
    getline(std::cin, sAge);
    int iAge = 0;
    iAge = std::stoi(sAge);
    std::cout << "Your age is: " << iAge;
    return 0;
}