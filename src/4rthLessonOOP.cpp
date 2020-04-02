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
};

class RectClass : public Shape // RectClass is now inherited the Shape attriputes (l & w)
{
public:
    /* The Object(Class) Constructors */
    RectClass() : Shape() // Empty Constructor
    {
        this->l = 0;
        this->w = 0;
    }

    RectClass(uint32_t l, uint32_t w) : Shape(l,w)
    {
        //this->l = l;
        //this->w = w;
    }

    /* The Object(Class) Methods */
    uint64_t RectArea()
    {
        return this->area();
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

class TriClass : public Shape
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
    double TriArea()
    {
        return (double)0.5 * this->area();
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
    RectClass r(10, 20);
    cout << "Rectangle area = " << r.RectArea() << endl;

    TriClass t(10, 20);
    cout << "Triangle area = " << t.TriArea() << endl;

    return 0;
}
