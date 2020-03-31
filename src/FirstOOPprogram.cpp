#include <iostream>

using namespace std;
class Rect
{
    uint32_t l, w;

public:
    Rect(uint32_t ll, uint32_t ww) // The Object(Class) Constructor
    {
        l = ll;
        w = ww;
    }
    uint64_t area()
    {
        return (uint64_t)l * w;
    }
};

class Circle
{
    const float PI = 3.1415;
    double r;

public:
    Circle(double rr) // The Object(Class) Constructor
    {
        r = rr;
    }

    double area()
    {
        return (double)PI * r * r;
    }
};

int main()
{
    Rect r(10, 20);
    cout << "Rectangle area = " << r.area() << endl;

    Circle c(10);
    cout << "Circle area = " << c.area() << endl;

    return 0;
}