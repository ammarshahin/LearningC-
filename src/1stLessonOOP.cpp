/**** 1. Defining a Class **********/
/**** 2. Decalring a Class **********/
/**** 3. Diffrance between public, private, and protected **********/
/**** 4. This keyword and it's uses in access mechanism **********/
#include <iostream>

using namespace std;
class Rect
{
    /* The Object(Class) Data */
    uint32_t l, w; // defult private elements

public:
    /* The Object(Class) Constructor */
    Rect(uint32_t l, uint32_t w)
    {
        this->l = l;
        this->w = w;
    }

    /* The Object(Class) Methods */
    uint64_t area() const  // the const here mean that this method will not change the current[values] of the object
    {
        return (uint64_t)l * w;
    }

    void setLegnth(uint32_t l)
    {
        this->l = l;
    }

    void setWidth(uint32_t w)
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

    void setRadius(double r)
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
    r.setLegnth(30);
    r.setWidth(40);
    cout << "Rectangle area = " << r.area() << endl;

    Circle c(10);
    cout << "Circle area = " << c.area() << endl;
    c.setRadius(100);
    cout << "Rectangle area = " << c.area() << endl;

    return 0;
}
