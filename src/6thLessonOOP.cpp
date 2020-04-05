#include <iostream>
using namespace std;

inline uint8_t getMax(uint8_t a, uint8_t b)
{
    return (a > b ? a : b);
}

int main()
{
    cout << getMax(2, 10) << endl;
    return 0;
}
