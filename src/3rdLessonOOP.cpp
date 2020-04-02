/**** 1. Friend **********/

#include <iostream>
#include "../inc./rectClass.hpp"

using namespace std;

rectClass duplicate(rectClass x)
{
    rectClass c;
    /*  Using Methods  */
    //c.changeLegnth(x.legnth());
    //c.changeWidth(x.width());

    /* Operator overloading for '=' */
    //c = x;

    /* Using friend Mechanism */
    c.l = x.l;
    c.w = x.w;

    return c;
}

int main()
{
    rectClass r1(10, 20), r2;
    r2 = duplicate(r1);
    cout << "Rectangle area = " << r2.area() << endl;
    return 0;
}
