/**** 1. Operator OverLoading **********/

#include <iostream>
//#include "../inc./classes.hpp"

#include <iostream>

class Rect
{
    /* The Object(Class) Data */
    uint32_t l, w;
    uint8_t rectCount;

public:
    /* The Object(Class) Constructors */
    Rect() // Empty Constructor
    {
        this->l = 0;
        this->w = 0;
        this->rectCount = 5;
    }

    Rect(uint32_t l, uint32_t w)
    {
        this->l = l;
        this->w = w;
        this->rectCount = 5;
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

    Rect operator+(Rect x)
    {
        Rect temp;
        temp.l = this->l + x.l;
        temp.w = this->w + x.w;
        return temp;
    }

    uint32_t rectCounter()
    {
        return this->rectCount;
    }

    /* The Object(Class) Destructor */
    ~Rect() {}
};

using namespace std;

int main()
{
    Rect r1(10, 20), r2(20, 10), r3;
    r3 = r1 + r2;

    cout << "Rectangle Length = " << r3.legnth() << endl;
    cout << "Rectangle Width = " << r3.width() << endl;
    cout << "Rectangle area = " << r3.area() << endl;
    cout << "The Number of created rects = " << r3.rectCounter() << endl;

    return 0;
}
