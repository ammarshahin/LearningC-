#ifndef SHAPE_CLASS_HPP__
#define SHAPE_CLASS_HPP__

#include <iostream>
#include <cstdint>

class ShapeClass
{
  private:
    uint16_t width, hight;

  public:
    ShapeClass(uint16_t x, uint16_t y)
    {
        this->width = x;
        this->hight = y;
    }

    void width_set(uint16_t w)
    {
        this->width = w;
    }

    void hight_set(uint16_t h)
    {
        this->hight = h;
    }

    uint16_t width_get(void)
    {
        return this->width;
    }

    uint16_t hight_get(void)
    {
        return this->hight;
    }

    uint32_t area_get(void)
    {
        return (this->width * this->hight);
    }

    ~ShapeClass(){};
};

#endif   // !SHAPE_CLASS_HPP__
