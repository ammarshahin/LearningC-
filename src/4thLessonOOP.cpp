/**** 1. Inheritance **********/

#include <iostream>
using namespace std;

class Shape
{
protected:
    /* The Object(Class) Data */
    uint32_t l, w;

public:
    /* The Object(Class) Constructors */
    Shape() // Empty Constructor(Defult Constructor)
    {
        this->l = 0;
        this->w = 0;
    }

    Shape(uint32_t l, uint32_t w)
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

    uint32_t legnth()
    {
        return this->l;
    }

    uint32_t width()
    {
        return this->w;
    }

    /* The Object(Class) Destructor */
    ~Shape() {}
};

class RectClass : public Shape // RectClass is now inherited the Shape attriputes (l & w)
{
public:
    /* The Object(Class) Constructors */
    RectClass() : Shape() {} // Empty Constructor

    RectClass(uint32_t l, uint32_t w) : Shape(l, w) {}

    /* The Object(Class) Destructor */
    ~RectClass() {}
};

class TriClass : public Shape
{
public:
    /* The Object(Class) Constructors */
    TriClass() : Shape() {} // Empty Constructor

    TriClass(uint32_t l, uint32_t w) : Shape(l, w) {}

    /* The Object(Class) Methods */
    double area()
    {
        return (double)0.5 * this->l * this->w;
    }

    /* The Object(Class) Destructor */
    ~TriClass() {}
};

int main()
{
    RectClass r(10, 20);
    cout << "Rectangle area = " << r.area() << endl;

    TriClass t(10, 20);
    cout << "Triangle area = " << t.triArea() << endl;

    return 0;
}
