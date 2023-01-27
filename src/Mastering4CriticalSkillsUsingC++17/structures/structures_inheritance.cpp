#include <iostream>
using namespace std;

struct parent
{
    parent(int x)
    {
        this->x = x;
    }

  public:
    int x;
    void print()
    {
        cout << this->x << endl;
    }
};

struct parent2 : public parent
{
};

struct child : public parent2
{
};

int main()
{
    parent2 x{2};
    x.print();
    return 0;
}