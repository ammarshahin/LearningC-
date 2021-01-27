#include <iostream>
#include <stdint-gcc.h>

class counterClass
{
  private:
    uint16_t counter;

  public:
    counterClass()
        : counter(0)
    {
        ;
    }

    explicit counterClass(uint16_t initial)
        : counter(initial)
    {
        ;
    }

    uint16_t getCount()
    {
        return this->counter;
    }

    void operator++()   // operator ++ will work with the objects from this class(prefix)
    {
        this->counter++;
    }

    void operator++(int)   // operator ++ will work with the objects from this class(postfix >> not recommended)
    {
        this->counter++;
    }

    void operator--()   // operator -- will work with the objects from this class(prefix)
    {
        this->counter--;
    }

    void operator--(int)   // operator -- will work with the objects from this class(postfix >> not recommended)
    {
        this->counter--;
    }

    counterClass operator+(counterClass c) const
    {
        counterClass temp;
        temp.counter = this->counter + c.getCount();
        return temp;
    }

    counterClass operator-(counterClass c) const
    {
        counterClass temp;
        temp.counter = this->counter - c.getCount();
        return temp;
    }

    ~counterClass()
    {
        ;
    }
};

int main(int argc, const char **argv)
{
    counterClass c1(20), c2(10), c3;

    c1++;
    std::cout << c1.getCount() << std::endl;

    ++c1;
    std::cout << c1.getCount() << std::endl;

    c1--;
    std::cout << c1.getCount() << std::endl;

    --c1;
    std::cout << c1.getCount() << std::endl;

    c3 = c1 + c2;   // here the c1 is the caller object and the c2 is the input object
    std::cout << c3.getCount() << std::endl;

    c3 = c1 - c2;
    std::cout << c3.getCount() << std::endl;

    return 0;
}