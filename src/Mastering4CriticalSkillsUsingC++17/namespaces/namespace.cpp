#include <iostream>
#include <stdint-gcc.h>
#include <bits/stdc++.h>

namespace MyTools
{
int tools_number = 1;
int sum(int x, int y)
{
    return x + y;
}
}   // namespace MyTools

//! We can break the namespaces in chunks and define sum in different files
namespace MyTools
{
namespace Mult   //! namespace inside another
{
int mult(int x, int y)
{
    return x * y;
}
}   // namespace Mult
}   // namespace MyTools

int main(int argc, char const *argv[])
{
    std::cout << "the sum of 3 and 4  = " << MyTools::sum(3, 4) << std::endl;
    MyTools::tools_number++;
    std::cout << "the multiply of 3 and 4  = " << MyTools::Mult::mult(3, 4) << std::endl;
    std::cout << "the tools number = " << MyTools::tools_number << std::endl;
    return 0;
}
