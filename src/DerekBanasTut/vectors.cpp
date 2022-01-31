#include <cstdint>
#include <iostream>
#include <string>
#include <vector>
#include <sstream>

int main()
{
    // vectors are resizable arrays which can be extended and manipulated
    // std::vector<type> _VectorName(VectorSize);
    std::vector<int> vecRandNums(2);
    vecRandNums[0] = 10;
    vecRandNums[1] = 20;
    vecRandNums.push_back(30);
    //vecRandNums.pop_back(30);
    //operations on vectors >> https://www.javatpoint.com/cpp-vector
    //std::cout << "Last Element: " << vecRandNums[vecRandNums.size() - 1];

    /* For-each loop*/
    for (auto element : vecRandNums)   // >> for each element in the vector
        std::cout << element << " ";
    std::cout << std::endl;
    return 0;
}