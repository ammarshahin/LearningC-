#include <iostream>

class Rect{
    public: uint32_t l,w;
    public: uint64_t rectArea()
    {
        return (uint64_t)l*w;
    }
};

using namespace std;

int main()
{
    Rect r1;
    r1.l = 10;
    r1.w = 20;
    uint64_t area = r1.rectArea();
    cout << "area = "<< area << endl; 
    return 0;
}