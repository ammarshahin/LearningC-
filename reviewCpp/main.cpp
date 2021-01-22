#include "../inc/ShapeClass.hpp"
#include <iostream>

int main()
{
    ShapeClass rect(10, 20);
    std::cout << rect.area_get() << std::endl;
    return 0;
}