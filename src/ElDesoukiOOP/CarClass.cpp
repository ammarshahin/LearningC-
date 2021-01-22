#include <iostream>
#include "CarClass.hpp"

CarClass::CarClass()
{
    maker = "";
    model = 0;
    std::cout << "called here" << std::endl;
}

CarClass::CarClass(std::string const mak, int mod)
{
    maker = mak;
    model = mod;
    std::cout << "called here" << std::endl;
}

CarClass::~CarClass()
{
}

void CarClass::setMaker(std::string m)
{
    maker = m;
}

void CarClass::setModel(int m)
{
    model = m;
}

std::string CarClass::getMaker()
{
    return maker;
}

int CarClass::getModel()
{
    return model;
}