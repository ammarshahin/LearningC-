/********** template ************/
#include <iostream>
using namespace std;

template <class R, class T> // Template parameter

class Test
{
    T a, b;

public:
    Test(T a, T b)
    {
        this->a = a;
        this->b = b;
    }

    R divfunc() // Template function
    {
        return (R)this->a / this->b;
    }
};
template <class R, class T> // Template parameter

int main()
{
    Test<double, int> clT(10, 2.1); // replace the R template with double and replace the T template with int
    cout << "The g = " << clT.divfunc() << endl;
    return 0;
}
