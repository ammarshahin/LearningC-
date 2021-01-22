#include <iostream>
#include "CarClass.hpp"

int main()
{
    CarClass c1, c2("BMW", 2020);
    c1.setMaker("Benz");
    c1.setModel(2021);

    std::cout << c1.getMaker() << "  " << c1.getModel() << std::endl;
    std::cout << c2.getMaker() << "  " << c2.getModel() << std::endl;

    return 0;
}