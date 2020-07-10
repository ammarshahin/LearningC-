/**** Inheritance Lesson **********/

#include <iostream>
using namespace std;

/**************** ShapeClass ******************/
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

    void setLegnth(uint32_t l)
    {
        this->l = l;
    }

    void setWidth(uint32_t w)
    {
        this->w = w;
    }

    uint32_t getLegnth()
    {
        return this->l;
    }

    uint32_t getWidth()
    {
        return this->w;
    }

    /* The Object(Class) Destructor */
    ~Shape() {}
};

/**************** RectClass ******************/
class RectClass : public Shape // RectClass is now inherited the Shape attriputes (l & w)
{
public:
    /* The Object(Class) Constructors */
    RectClass() : Shape() {} // Empty Constructor

    RectClass(uint32_t l, uint32_t w) : Shape(l, w) {}

    /* The Object(Class) Destructor */
    ~RectClass() {}
};

/**************** TriClass ******************/
class TriClass : public Shape
{
public:
    /* The Object(Class) Constructors */
    TriClass() : Shape() {} // Empty Constructor

    TriClass(uint32_t l, uint32_t w) : Shape(l, w) {}

    /* The Object(Class) Methods */
    double area() // Overriding [This method will override the inherited area method]
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
    cout << "Triangle area = " << t.area() << endl;

    Shape *rp = &r; // rp is a Pointer that points to Shape Class or any Child of it (Polymorphism)
    cout << "Rectangle area = " << rp->area() << endl;

    Shape *tp = &t;                                 // tp is a Pointer that points to Shape Class or any Child of it (Polymorphism)
    cout << "Circle area = " << tp->area() << endl; // Note that tp is accessing the area method in the Shape Class..NOT the one in TriClass

    return 0;
}
