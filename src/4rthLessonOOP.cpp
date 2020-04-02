/**** 1. Inheritance **********/

#include <iostream>
using namespace std;

class Shape
{
protected:
    /* The Object(Class) Data */
    uint32_t l, w;
};

class RectClass : Shape
{
public:
    /* The Object(Class) Constructors */
    RectClass() // Empty Constructor
    {
        this->l = 0;
        this->w = 0;
    }

    RectClass(uint32_t l, uint32_t w)
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
    ~RectClass() {}
};

class TriClass : Shape
{
public:
    /* The Object(Class) Constructors */
    TriClass() // Empty Constructor
    {
        this->l = 0;
        this->w = 0;
    }

    TriClass(uint32_t l, uint32_t w)
    {
        this->l = l;
        this->w = w;
    }

    /* The Object(Class) Methods */
    double area()
    {
        return (double)0.5 * l * w;
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
    ~TriClass() {}
};

int main()
{
    RectClass r1(10, 20);
    cout << "Rectangle area = " << r1.area() << endl;

    TriClass t1(10, 20);
    cout << "Triangle area = " << t1.area() << endl;

    return 0;
}
