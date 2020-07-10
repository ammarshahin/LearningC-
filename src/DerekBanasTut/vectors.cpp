#include <stdint.h>
#include <iostream>
#include <cstdlib>
#include <string>
#include <vector>
#include <sstream>

int main()
{
    // vectors are resizable arrays which can be extended and manipulated
    std::vector<int> vecRandNums(2);
    vecRandNums[0] = 10;
    vecRandNums[1] = 20;
    vecRandNums.push_back(30);
    std::cout << "Last Element: " << vecRandNums[vecRandNums.size() - 1];

    return 0;
}