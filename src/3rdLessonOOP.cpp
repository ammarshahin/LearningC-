/**** 1. Friend **********/

#include <iostream>
#include "../inc./rectClass.hpp"

using namespace std;

rectClass duplicate(rectClass x)
{
    rectClass c;
    //c.changeLegnth(x.legnth());
    //c.changeWidth(x.width());
    c=x; 
    return c;
}

int main()
{
    rectClass r1(10, 20),r2;
    r2 = duplicate(r1);
    cout << "Rectangle area = " << r2.area() << endl;
    return 0;
}
