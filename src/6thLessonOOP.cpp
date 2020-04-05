/********** template ************/

#include <iostream>
using namespace std;

template <class T>

inline T getMax(T a, T b)
{
    return ((a > b) ? a : b);
}

int main()
{
    cout << "The g = " << getMax<uint8_t>(2, 10) << endl;
    cout << "The g = " << getMax<int>(2, 10) << endl;
    cout << "The g = " << getMax<float>(2.1, 10.4343) << endl;
    cout << "The g = " << getMax<double>(2.0012, 10) << endl;
    return 0;
}
