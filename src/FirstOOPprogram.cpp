#include <iostream>

using namespace std;
class Rect
{
public:
    uint32_t l, w;
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
    double area()
    {
        return (double)PI * r * r;
    }
};

int main()
{
    Rect r;
    r.l = 10;
    r.w = 20;
    cout << "Rectangle area = " << r.area() << endl;

    Circle c;
    c.r = 10;
    cout << "Circle area = " << c.area() << endl;

    return 0;
}