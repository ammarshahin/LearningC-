/********** template ************/

#include <iostream>
using namespace std;

template <class R, class T> // Template parameter

R divfunc(T a, T b)
{
    return (R)a / b;
}

/*
R getMax(T a, T b) // Template function
{
    return ((a > b) ? a : b);
}
*/

int main()
{
    /*
    cout << "The g = " << getMax<int, int>(2, 10) << endl;            // replace the T template with int
    cout << "The g = " << getMax<float, float>(2.1, 10.4343) << endl; // replace the T template with float
    cout << "The g = " << getMax<double, double>(2.0012, 10) << endl; // replace the T template with double
    */
    cout << "The g = " << divfunc<double, int>(10, 2.12) << endl; // replace the T template with double

    return 0;
}
