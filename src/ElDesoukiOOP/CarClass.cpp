#include <iostream>
#include "CarClass.hpp"

CarClass::CarClass()
{
    maker = "";
    model = 0;
}

CarClass::CarClass(std::string const mak, int mod)
{
    maker = mak;
    model = mod;
}

CarClass::~CarClass()
{
}

void CarClass::setMaker(const std::string m)
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