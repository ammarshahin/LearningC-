#include <iostream>
using namespace std;

inline uint8_t getMax(uint8_t a, uint8_t b)
{
    return (a > b ? a : b);
}

int main()
{
    uint8_t z = getMax(2, 10);
    cout << "The g = " << z << endl;
    return 0;
}
