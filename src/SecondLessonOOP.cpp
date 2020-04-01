/**** 1. Operator OverLoading **********/

#include <iostream>
#include "../inc./classes.hpp"

using namespace std;

int main()
{
    Rect r1(10, 20), r2(20, 10), r3;
    r3 = r1 + r2;

    cout << "Rectangle Length = " << r3.legnth() << endl;
    cout << "Rectangle Width = " << r3.width() << endl;
    cout << "Rectangle area = " << r3.area() << endl;
    cout << "The Number of created rects = " << r3.rectCounter() << endl;

    return 0;
}
