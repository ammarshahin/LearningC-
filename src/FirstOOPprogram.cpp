#include <iostream>

using namespace std;
class Rect
{
    /* The Object(Class) Data */
    uint32_t l, w;

public:
    /* The Object(Class) Constructor */
    Rect(uint32_t l, uint32_t w)
    {
        this.l = l;
        this.w = w;
    }

    /* The Object(Class) Methods */
    uint64_t area()
    {
        return (uint64_t)l * w;
    }

    /* The Object(Class) Destructor */
    ~Rect() {}
};

class Circle
{
    /* The Object(Class) Data */
    const float PI = 3.1415;
    double r;

public:
    /* The Object(Class) Constructor */
    Circle(double r)
    {
        this.r = r;
    }

    /* The Object(Class) Methods */
    double area()
    {
        return (double)PI * r * r;
    }

    /* The Object(Class) Destructor */
    ~Circle() {}
};

int main()
{
    Rect r(10, 20);
    cout << "Rectangle area = " << r.area() << endl;

    Circle c(10);
    cout << "Circle area = " << c.area() << endl;

    return 0;
}