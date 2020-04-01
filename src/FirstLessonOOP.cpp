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
        this->l = l;
        this->w = w;
    }

    /* The Object(Class) Methods */
    uint64_t area()
    {
        return (uint64_t)l * w;
    }

    void changeLegnth(uint32_t l)
    {
        this->l = l;
    }

    void changeWidth(uint32_t w)
    {
        this->w = w;
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
    Circle() {} // Empty Constructor

    Circle(double r)
    {
        this->r = r;
    }

    /* The Object(Class) Methods */
    double area()
    {
        return (double)PI * r * r;
    }

    void changeRadius(double r)
    {
        this->r = r;
    }

    /* The Object(Class) Destructor */
    ~Circle() {}
};

int main()
{
    Rect r(10, 20);
    cout << "Rectangle area = " << r.area() << endl;
    r.changeLegnth(30);
    r.changeWidth(40);
    cout << "Rectangle area = " << r.area() << endl;

    Circle c(10);
    cout << "Circle area = " << c.area() << endl;
    c.changeRadius(100);
    cout << "Rectangle area = " << c.area() << endl;

    return 0;
}
