/********** template ************/

#include <iostream>
using namespace std;

template <class T> // Template parameter

inline T getMax(T a, T b) // Template function
{
    return ((a > b) ? a : b);
}

int main()
{
    cout << "The g = " << getMax(2, 10) << endl;                // replace the T template with int
    cout << "The g = " << getMax(2.1, 10.4343) << endl;         // replace the T template with float
    cout << "The g = " << getMax<double>(2.1, 10.4343) << endl; // replace the T template with double
    return 0;
}