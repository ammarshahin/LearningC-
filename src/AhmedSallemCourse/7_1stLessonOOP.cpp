/**** 1. Defining a Class **********/
/**** 2. Declaring a Class **********/
/**** 3. Declaring between public, private, and protected **********/
/**** 4. This keyword and it's uses in access mechanism **********/
#include <iostream>

class Rect
{
    /* The Object(Class) Data */
    uint32_t l, w;   // default private elements

  public:
    /* The Object(Class) Constructor */
    Rect(uint32_t l, uint32_t w)
    {
        this->l = l;
        this->w = w;
    }

    /* The Object(Class) Methods */
    uint64_t area() const   // the const here mean that this method will not change the current[values] of the object
    {
        return (uint64_t)l * w;
    }

    void setLength(uint32_t l)
    {
        this->l = l;
    }

    void setWidth(uint32_t w)
    {
        this->w = w;
    }

    /* The Object(Class) Destructor */
    ~Rect()
    {
        ;
    }
};

class Circle
{
    /* The Object(Class) Data */
    const float PI = 3.1415;
    double r;

  public:
    /* The Object(Class) Constructor */
    Circle();   // Empty Constructor

    explicit Circle(double r)
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
    ~Circle()
    {
        ;
    }
};

int main()
{
    Rect r(10, 20);
    std::cout << "Rectangle area = " << r.area() << std::endl;
    r.setLength(30);
    r.setWidth(40);
    std::cout << "Rectangle area = " << r.area() << std::endl;

    Circle c(10);
    std::cout << "Circle area = " << c.area() << std::endl;
    c.setRadius(100);
    std::cout << "Rectangle area = " << c.area() << std::endl;

    return 0;
}
