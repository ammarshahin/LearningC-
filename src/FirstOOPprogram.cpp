#include <iostream>

using namespace std;
class Rect
{
public:
    uint32_t l, w;
    Rect(uint32_t ll, uint32_t ww)
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
private:
    const float PI = 3.1415;

public:
    double r;

    Circle(double rr)
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

    Circle c(20);
    cout << "Circle area = " << c.area() << endl;

    return 0;
}