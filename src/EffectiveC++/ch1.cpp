#include <bits/stdc++.h>
#include <stdint-gcc.h>

const std::string &GetString();   // The returned string cannot be modified

const std::string &GetString()   // The returned string cannot be modified
{
    static const std::string str = "Ammar Shahin";
    return str;
}

void ch1()
{
    const std::string &name = GetString();
    std::cout << "name: " << name << std::endl;
}