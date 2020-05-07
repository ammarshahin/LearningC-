#include <iostream>

const int PI = 3.1415;
namespace stf
{

    class Circle
    {
        int r;

    public:
        Circle(int r){
            this->r = r;
        }

        Circle(){
            this->r = 0;
        }

        void setRadius(int r)
        {
            this->r = r;
        }

        int area()
        {
            return (PI * this->r * this->r);
        }
    };
}; // namespace stf

int main()
{
    stf::Circle c1(10);
    stf::Circle c2;
    c2.setRadius(20);
    std::cout << c1.area() << " " << c2.area() << std::endl;
    
}