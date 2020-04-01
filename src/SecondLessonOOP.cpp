/**** Operator OverLoading **********/

#include <iostream>

using namespace std;

class Rect
{
    /* The Object(Class) Data */
    uint32_t l, w;

public:
    /* The Object(Class) Constructors */
    Rect() {} // Empty Constructor

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

    Rect operator+(Rect x)
    {
        Rect temp;
        temp.l = this->l + x.l;
        temp.w = this->w + x.w;
        return temp;
    }

    /* The Object(Class) Destructor */
    ~Rect() {}
};

int main()
{
    Rect r1(10, 20), r2(20, 10), r3;
    r3 = r1 + r2;

    cout << "Rectangle area = " << r3.area() << endl;

    return 0;
}
