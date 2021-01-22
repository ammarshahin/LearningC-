#ifndef __CLASSES__HPP__
#define __CLASSES__HPP__

#include <iostream>

class rectClass
{
    /* The Object(Class) Data */
    uint32_t l, w;
    static uint32_t rectCount;

  public:
    /* The Object(Class) Constructors */
    rectClass()   // Empty Constructor
    {
        this->l = 0;
        this->w = 0;
        this->rectCount++;
    }

    rectClass(uint32_t l, uint32_t w)
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

    uint32_t rectCounter()
    {
        return (this->rectCount - 1);   // note that the constructor of an class is called before even any instance is created so we have to substract one from the total number.
    }

    rectClass operator+(rectClass x)
    {
        rectClass temp;
        temp.l = this->l + x.l;
        temp.w = this->w + x.w;
        return temp;
    }

    /* Friends */
    friend rectClass duplicate(rectClass x);
    friend class circleClass;

    /* The Object(Class) Destructor */
    ~rectClass()
    {
        ;
    }
};

/* Global variables */
uint32_t rectClass::rectCount = 0;

#endif /* __CLASSES__HPP__ */