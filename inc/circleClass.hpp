#ifndef __CIRCLE__CLASS__HPP__
#define __CIRCLE__CLASS__HPP__

#include <iostream>
#include "rectClass.hpp"
class circleClass
{
  public:
    /* The Object(Class) Constructors */
    circleClass();   // Empty Constructor

    /* The Object(Class) Methods */
    uint64_t area(rectClass r)
    {
        return (uint64_t)r.l * r.w;
    }

    /* The Object(Class) Destructor */
    ~circleClass();
};

#endif /* __CIRCLE__CLASS__HPP__ */