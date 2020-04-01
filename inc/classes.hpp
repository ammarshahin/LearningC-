#ifndef __CLASSES__HPP__
#define __CLASSES__HPP__

#include <iostream>

class Rect
{
    /* The Object(Class) Data */
    uint32_t l, w;
    static int rectCount;

public:
    /* The Object(Class) Constructors */
    Rect() // Empty Constructor
    {
        this->l = 0;
        this->w = 0;
        this->rectCount++;
    }

    Rect(uint32_t l, uint32_t w)
    {
        this->l = l;
        this->w = w;
        this->rectCount++;
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

    int rectCounter()
    {
        return this->rectCount;
    }

    /* The Object(Class) Destructor */
    ~Rect() {}
};

int Rect::rectCount = 0;

#endif /* __CLASSES__HPP__ */